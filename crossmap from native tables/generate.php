<?php
$ambig = [];
$crossmap = [];
foreach(scandir(__DIR__."/../1.52/native_tables") as $file)
{
	if(in_array($file, [".", ".."]))
	{
		continue;
	}
	echo $file." ";
	$old_lines = explode("\n", file_get_contents(__DIR__."/../1.52/native_tables/".$file));
	$new_lines = explode("\n", file_get_contents(__DIR__."/../native_tables/".$file));
	$c = count($old_lines);
	if($c == count($new_lines))
	{
		echo " SAME COUNT";
		for($i = 0; $i < $c; $i++)
		{
			$old_hash = "0x".rtrim($old_lines[$i]);
			if(empty($old_hash) || array_key_exists($old_hash, $ambig))
			{
				continue;
			}
			$new_hash = "0x".rtrim($new_lines[$i]);
			if(array_key_exists($old_hash, $crossmap) && $crossmap[$old_hash] != $new_hash)
			{
				unset($crossmap[$old_hash]);
				$ambig[$old_hash] = true;
			}
			$crossmap[$old_hash] = $new_hash;
		}
	}
	echo "\n";
}

echo "Downloading nativedb data...\n";
$new_natives = json_decode(file_get_contents("https://raw.githubusercontent.com/alloc8or/gta5-nativedb-data/master/natives.json"), true);

echo "Writing files...\n";
$natives_fh = fopen("natives.hpp", "w");

$crossmap_fh = fopen("crossmap.hpp", "w");

foreach($new_natives as $namespace => $namespace_data)
{
	fwrite($natives_fh, "namespace {$namespace}\r\n{\r\n");
	foreach($namespace_data as $hash => $native_data)
	{
		if(array_key_exists($hash, $crossmap))
		{
			if(!empty($native_data["comment"]))
			{
				foreach(explode("\n", $native_data["comment"]) as $comment_line)
				{
					fwrite($natives_fh, "\t // ".$comment_line."\r\n");
				}
			}
			$params = "";
			foreach($native_data["params"] as $param)
			{
				$params .= $param["type"]." ".$param["name"].", ";
			}
			fwrite($natives_fh, "\tstatic ".$native_data["return_type"]." ".$native_data["name"]."(".substr($params, 0, -2).") { return invoke<".$native_data["return_type"].">(".$hash);
			foreach($native_data["params"] as $param)
			{
				fwrite($natives_fh, ", ".$param["name"]);
			}
			fwrite($natives_fh, "); } // ".$hash);
			if(!empty($native_data["jhash"]))
			{
				fwrite($natives_fh, " ".$native_data["jhash"]);
			}
			fwrite($natives_fh, " b".$native_data["build"]."\r\n");

			fwrite($crossmap_fh, "{ ".$hash.", ".$crossmap[$hash]." }, // ".$namespace."::".$native_data["name"]."\r\n");
		}
	}
	fwrite($natives_fh, "}\r\n\r\n");
}

fclose($natives_fh);

fclose($crossmap_fh);
