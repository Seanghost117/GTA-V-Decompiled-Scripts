#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	var uScriptParam_0 = 0;
#endregion

void __EntryFunction__()
{
	var uVar0;
	
	if (unk_0xED06FD5709A59F02(2))
	{
		func_1();
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		if (unk_0xAE06B9E39EBDE049(uScriptParam_5))
		{
			if (unk_0xED07D558B3EDDF8A(uScriptParam_5) && unk_0x7B70881748D166CD(joaat("finalec1")) == 0)
			{
				switch (iLocal_2)
				{
					case 0:
						if (!unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()))
						{
							uVar0 = unk_0x518D695E2DBA9DB8(unk_0x9B0761B4C3EB8BC7());
							if (unk_0x0B1B45E748AD48BA(uVar0))
							{
								if (unk_0xEF928B5F0219FDF7(uVar0))
								{
									if (unk_0xCE28B5EADA8A0CF9())
									{
										unk_0x22043B0E5A2FE456();
										iLocal_2 = 1;
									}
								}
							}
						}
						break;
					
					case 1:
						if (unk_0x4F144789C4312F35())
						{
							if (!unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()))
							{
								if (!unk_0xAE06B9E39EBDE049(uLocal_4))
								{
									uLocal_4 = unk_0x5BBA0055476D633A(1090f, -1996f, 39f, 100f, joaat("v_ilev_found_cranebucket"), 1, 0, 1);
								}
								if (!unk_0x88649E9A3DFA79EA(uLocal_3))
								{
									if (unk_0xAE06B9E39EBDE049(uLocal_4))
									{
										uVar0 = unk_0x518D695E2DBA9DB8(unk_0x9B0761B4C3EB8BC7());
										if (unk_0x0B1B45E748AD48BA(uVar0))
										{
											if (unk_0xEF928B5F0219FDF7(uVar0))
											{
												if (unk_0xCE28B5EADA8A0CF9())
												{
													uLocal_3 = unk_0xF245B4695C9BEF04("scr_obfoundry_cauldron_steam", uLocal_4, 0f, 0f, 0f, 0f, 0f, 0f, 1065353216, 0, 0, 0);
												}
											}
										}
									}
								}
							}
						}
						break;
					
					case 2:
						break;
				}
			}
			else
			{
				func_1();
			}
		}
		else
		{
			func_1();
		}
	}
}

void func_1()
{
	if (unk_0x88649E9A3DFA79EA(uLocal_3))
	{
		unk_0x994BE8B44E53ECFA(uLocal_3, 0);
	}
	if (unk_0xAE06B9E39EBDE049(uLocal_4))
	{
		unk_0x95178967C65CAD85(&uLocal_4);
	}
	func_2("ob_foundry_cauldron Terminated >>>>>>>>>>>>>>>>>\n");
	unk_0xD39E529EBE5DB04F();
}

void func_2(char* sParam0)
{
	func_3(sParam0);
}

void func_3(var uParam0)
{
	if (unk_0xF005CCA4263DF67F(uParam0, uParam0))
	{
	}
}

