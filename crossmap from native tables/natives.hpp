namespace SYSTEM
{
	 // Pauses execution of the current script, please note this behavior is only seen when called from one of the game script files(ysc). In order to wait an asi script use "static void WAIT(DWORD time);" found in main.h
	static void WAIT(int ms) { return invoke<void>(0x4EDE34FBADD967A6, ms); } // 0x4EDE34FBADD967A6 0x7715C03B b323
	 // Examples:
	 //  g_384A = SYSTEM::START_NEW_SCRIPT("cellphone_flashhand", 1424);
	 //  l_10D = SYSTEM::START_NEW_SCRIPT("taxiService", 1828);
	 //  SYSTEM::START_NEW_SCRIPT("AM_MP_YACHT", 5000);
	 //  SYSTEM::START_NEW_SCRIPT("emergencycall", 512);
	 //  SYSTEM::START_NEW_SCRIPT("emergencycall", 512); 
	 //  SYSTEM::START_NEW_SCRIPT("FM_maintain_cloud_header_data", 1424);
	 //  SYSTEM::START_NEW_SCRIPT("FM_Mission_Controller", 31000);
	 //  SYSTEM::START_NEW_SCRIPT("tennis_family", 3650);
	 //  SYSTEM::START_NEW_SCRIPT("Celebrations", 3650);
	 // 
	 // Decompiled examples of usage when starting a script:
	 //  
	 //     SCRIPT::REQUEST_SCRIPT(a_0);
	 //     if (SCRIPT::HAS_SCRIPT_LOADED(a_0)) {
	 //         SYSTEM::START_NEW_SCRIPT(a_0, v_3);
	 //         SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(a_0);
	 //         return 1;
	 //     }
	 //  
	 // or:
	 // 
	 //     v_2 = "MrsPhilips2";
	 //     SCRIPT::REQUEST_SCRIPT(v_2);
	 //     while (!SCRIPT::HAS_SCRIPT_LOADED(v_2)) {
	 //     SCRIPT::REQUEST_SCRIPT(v_2);
	 //     SYSTEM::WAIT(0);
	 //     }
	 //     sub_8792(36);
	 //     SYSTEM::START_NEW_SCRIPT(v_2, 17000);
	 //     SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(v_2);
	 // 
	 // All native script names: pastebin.com/K9adDsu4 and pastebin.com/yLNWicUi
	static int START_NEW_SCRIPT(const char* scriptName, int stackSize) { return invoke<int>(0xE81651AD79516E48, scriptName, stackSize); } // 0xE81651AD79516E48 0x3F166D0E b323
	 // return : script thread id, 0 if failed
	 // Pass pointer to struct of args in p1, size of struct goes into p2
	static int START_NEW_SCRIPT_WITH_ARGS(const char* scriptName, Any* args, int argCount, int stackSize) { return invoke<int>(0xB8BA7F44DF1575E1, scriptName, args, argCount, stackSize); } // 0xB8BA7F44DF1575E1 0x4A2100E4 b323
	static int START_NEW_SCRIPT_WITH_NAME_HASH(Hash scriptHash, int stackSize) { return invoke<int>(0xEB1C67C3A5333A92, scriptHash, stackSize); } // 0xEB1C67C3A5333A92 0x8D15BE5D b323
	static int START_NEW_SCRIPT_WITH_NAME_HASH_AND_ARGS(Hash scriptHash, Any* args, int argCount, int stackSize) { return invoke<int>(0xC4BB298BD441BE78, scriptHash, args, argCount, stackSize); } // 0xC4BB298BD441BE78 0xE38A3AD4 b323
	 // Counts up. Every 1000 is 1 real-time second. Use SETTIMERA(int value) to set the timer (e.g.: SETTIMERA(0)).
	static int TIMERA() { return invoke<int>(0x83666F9FB8FEBD4B); } // 0x83666F9FB8FEBD4B 0x45C8C188 b323
	static int TIMERB() { return invoke<int>(0xC9D9444186B5A374); } // 0xC9D9444186B5A374 0x330A9C0C b323
	static void SETTIMERA(int value) { return invoke<void>(0xC1B1E9A034A63A62, value); } // 0xC1B1E9A034A63A62 0x35785333 b323
	static void SETTIMERB(int value) { return invoke<void>(0x5AE11BC36633DE4E, value); } // 0x5AE11BC36633DE4E 0x27C1B7C6 b323
	 // Gets the current frame time.
	static float TIMESTEP() { return invoke<float>(0x0000000050597EE2); } // 0x0000000050597EE2 0x50597EE2 b323
	static float SIN(float value) { return invoke<float>(0x0BADBFA3B172435F, value); } // 0x0BADBFA3B172435F 0xBF987F58 b323
	static float COS(float value) { return invoke<float>(0xD0FFB162F40A139C, value); } // 0xD0FFB162F40A139C 0x00238FE9 b323
	static float SQRT(float value) { return invoke<float>(0x71D93B57D07F9804, value); } // 0x71D93B57D07F9804 0x145C7701 b323
	static float POW(float base, float exponent) { return invoke<float>(0xE3621CC40F31FE2E, base, exponent); } // 0xE3621CC40F31FE2E 0x85D134F8 b323
	 // Calculates the magnitude of a vector.
	static float VMAG(float x, float y, float z) { return invoke<float>(0x652D2EEEF1D3E62C, x, y, z); } // 0x652D2EEEF1D3E62C 0x1FCF1ECD b323
	 // Calculates the magnitude of a vector but does not perform Sqrt operations. (Its way faster)
	static float VMAG2(float x, float y, float z) { return invoke<float>(0xA8CEACB4F35AE058, x, y, z); } // 0xA8CEACB4F35AE058 0xE796E629 b323
	 // Calculates distance between vectors.
	static float VDIST(float x1, float y1, float z1, float x2, float y2, float z2) { return invoke<float>(0x2A488C176D52CCA5, x1, y1, z1, x2, y2, z2); } // 0x2A488C176D52CCA5 0x3C08ECB7 b323
	 // Calculates distance between vectors but does not perform Sqrt operations. (Its way faster)
	static float VDIST2(float x1, float y1, float z1, float x2, float y2, float z2) { return invoke<float>(0xB7A628320EFF8E47, x1, y1, z1, x2, y2, z2); } // 0xB7A628320EFF8E47 0xC85DEF1F b323
	static int SHIFT_LEFT(int value, int bitShift) { return invoke<int>(0xEDD95A39E5544DE8, value, bitShift); } // 0xEDD95A39E5544DE8 0x314CC6CD b323
	static int SHIFT_RIGHT(int value, int bitShift) { return invoke<int>(0x97EF1E5BCE9DC075, value, bitShift); } // 0x97EF1E5BCE9DC075 0x352633CA b323
	static int FLOOR(float value) { return invoke<int>(0xF34EE736CF047844, value); } // 0xF34EE736CF047844 0x32E9BE04 b323
	 // I'm guessing this rounds a float value up to the next whole number, and FLOOR rounds it down
	static int CEIL(float value) { return invoke<int>(0x11E019C8F43ACC8A, value); } // 0x11E019C8F43ACC8A 0xD536A1DF b323
	static int ROUND(float value) { return invoke<int>(0xF2DB717A73826179, value); } // 0xF2DB717A73826179 0x323B0E24 b323
	static float TO_FLOAT(int value) { return invoke<float>(0xBBDA792448DB5A89, value); } // 0xBBDA792448DB5A89 0x67116627 b323
}

namespace APP
{
}

namespace AUDIO
{
	 // All found occurrences in b617d, sorted alphabetically and identical lines removed: pastebin.com/RFb4GTny
	 // 
	 // AUDIO::PLAY_PED_RINGTONE("Remote_Ring", PLAYER::PLAYER_PED_ID(), 1);
	 // AUDIO::PLAY_PED_RINGTONE("Dial_and_Remote_Ring", PLAYER::PLAYER_PED_ID(), 1);
	 // 
	static void PLAY_PED_RINGTONE(const char* ringtoneName, Ped ped, BOOL p2) { return invoke<void>(0xF9E56683CA8E11A5, ringtoneName, ped, p2); } // 0xF9E56683CA8E11A5 0x1D530E47 b323
	static BOOL IS_PED_RINGTONE_PLAYING(Ped ped) { return invoke<BOOL>(0x1E8E5E20937E3137, ped); } // 0x1E8E5E20937E3137 0xFE576EE4 b323
	static void STOP_PED_RINGTONE(Ped ped) { return invoke<void>(0x6C5AE23EFA885092, ped); } // 0x6C5AE23EFA885092 0xFEEA107C b323
	static BOOL IS_MOBILE_PHONE_CALL_ONGOING() { return invoke<BOOL>(0x7497D2CE2C30D24C); } // 0x7497D2CE2C30D24C 0x4ED1400A b323
	static void CREATE_NEW_SCRIPTED_CONVERSATION() { return invoke<void>(0xD2C91A0B572AAE56); } // 0xD2C91A0B572AAE56 0xB2BC25F8 b323
	 // NOTE: ones that are -1, 0 - 35 are determined by a function where it gets a TextLabel from a global then runs,
	 // _GET_TEXT_SUBSTRING and depending on what the result is it goes in check order of 0 - 9 then A - Z then z (lowercase). So it will then return 0 - 35 or -1 if it's 'z'. The func to handle that ^^ is func_67 in dialog_handler.c atleast in TU27 Xbox360 scripts.
	 // 
	 // p0 is -1, 0 - 35
	 // p1 is a char or string (whatever you wanna call it)
	 // p2 is Global 10597 + i * 6. 'i' is a while(i < 70) loop
	 // p3 is again -1, 0 - 35 
	 // p4 is again -1, 0 - 35 
	 // p5 is either 0 or 1 (bool ?)
	 // p6 is either 0 or 1 (The func to determine this is bool)
	 // p7 is either 0 or 1 (The func to determine this is bool)
	 // p8 is either 0 or 1 (The func to determine this is bool)
	 // p9 is 0 - 3 (Determined by func_60 in dialogue_handler.c)
	 // p10 is either 0 or 1 (The func to determine this is bool)
	 // p11 is either 0 or 1 (The func to determine this is bool)
	 // p12 is unknown as in TU27 X360 scripts it only goes to p11.
	static void ADD_LINE_TO_CONVERSATION(int index, const char* p1, const char* p2, int p3, int p4, BOOL p5, BOOL p6, BOOL p7, BOOL p8, int p9, BOOL p10, BOOL p11, BOOL p12) { return invoke<void>(0xC5EF963405593646, index, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12); } // 0xC5EF963405593646 0x96CD0513 b323
	 // 4 calls in the b617d scripts. The only one with p0 and p2 in clear text:
	 // 
	 // AUDIO::ADD_PED_TO_CONVERSATION(5, l_AF, "DINAPOLI");
	 // 
	 // =================================================
	 // One of the 2 calls in dialogue_handler.c p0 is in a while-loop, and so is determined to also possibly be 0 - 15.
	static void ADD_PED_TO_CONVERSATION(int index, Ped ped, const char* p2) { return invoke<void>(0x95D9F4BC443956E7, index, ped, p2); } // 0x95D9F4BC443956E7 0xF8D5EB86 b323
	static void _0x33E3C6C6F2F0B506(Any p0, float p1, float p2, float p3) { return invoke<void>(0x33E3C6C6F2F0B506, p0, p1, p2, p3); } // 0x33E3C6C6F2F0B506 0x73C6F979 b323
	static void _0x0B568201DD99F0EB(BOOL p0) { return invoke<void>(0x0B568201DD99F0EB, p0); } // 0x0B568201DD99F0EB 0x1193ED6E b323
	static void _0x61631F5DF50D1C34(BOOL p0) { return invoke<void>(0x61631F5DF50D1C34, p0); } // 0x61631F5DF50D1C34 b323
	static void START_SCRIPT_PHONE_CONVERSATION(BOOL p0, BOOL p1) { return invoke<void>(0x252E5F915EABB675, p0, p1); } // 0x252E5F915EABB675 0x38E42D07 b323
	static void PRELOAD_SCRIPT_PHONE_CONVERSATION(BOOL p0, BOOL p1) { return invoke<void>(0x6004BCB0E226AAEA, p0, p1); } // 0x6004BCB0E226AAEA 0x9ACB213A b323
	static void START_SCRIPT_CONVERSATION(BOOL p0, BOOL p1, BOOL p2, BOOL p3) { return invoke<void>(0x6B17C62C9635D2DC, p0, p1, p2, p3); } // 0x6B17C62C9635D2DC 0xE5DE7D9D b323
	static void PRELOAD_SCRIPT_CONVERSATION(BOOL p0, BOOL p1, BOOL p2, BOOL p3) { return invoke<void>(0x3B3CAD6166916D87, p0, p1, p2, p3); } // 0x3B3CAD6166916D87 0xDDF5C579 b323
	static void START_PRELOADED_CONVERSATION() { return invoke<void>(0x23641AFE870AF385); } // 0x23641AFE870AF385 0xA170261B b323
	static BOOL GET_IS_PRELOADED_CONVERSATION_READY() { return invoke<BOOL>(0xE73364DB90778FFA); } // 0xE73364DB90778FFA 0x336F3D35 b323
	static BOOL IS_SCRIPTED_CONVERSATION_ONGOING() { return invoke<BOOL>(0x16754C556D2EDE3D); } // 0x16754C556D2EDE3D 0xCB8FD96F b323
	static BOOL IS_SCRIPTED_CONVERSATION_LOADED() { return invoke<BOOL>(0xDF0D54BE7A776737); } // 0xDF0D54BE7A776737 0xE1870EA9 b323
	static int GET_CURRENT_SCRIPTED_CONVERSATION_LINE() { return invoke<int>(0x480357EE890C295A); } // 0x480357EE890C295A 0x9620E41F b323
	static void PAUSE_SCRIPTED_CONVERSATION(BOOL p0) { return invoke<void>(0x8530AD776CD72B12, p0); } // 0x8530AD776CD72B12 0xE2C9C6F8 b323
	static void RESTART_SCRIPTED_CONVERSATION() { return invoke<void>(0x9AEB285D1818C9AC); } // 0x9AEB285D1818C9AC 0x6CB24B56 b323
	static int STOP_SCRIPTED_CONVERSATION(BOOL p0) { return invoke<int>(0xD79DEEFB53455EBA, p0); } // 0xD79DEEFB53455EBA 0xAB77DA7D b323
	static void SKIP_TO_NEXT_SCRIPTED_CONVERSATION_LINE() { return invoke<void>(0x9663FE6B7A61EB00); } // 0x9663FE6B7A61EB00 0x85C98304 b323
	static void INTERRUPT_CONVERSATION(Any p0, Any* p1, Any* p2) { return invoke<void>(0xA018A12E5C5C2FA6, p0, p1, p2); } // 0xA018A12E5C5C2FA6 0xF3A67AF3 b323
	static void _0xB542DE8C3D1CB210(BOOL p0) { return invoke<void>(0xB542DE8C3D1CB210, p0); } // 0xB542DE8C3D1CB210 0x789D8C6C b323
	 // This native does absolutely nothing, just a nullsub
	static void REGISTER_SCRIPT_WITH_AUDIO(int p0) { return invoke<void>(0xC6ED9D5092438D91, p0); } // 0xC6ED9D5092438D91 0xA6203643 b323
	 // This native does absolutely nothing, just a nullsub
	static void UNREGISTER_SCRIPT_WITH_AUDIO() { return invoke<void>(0xA8638BE228D4751A); } // 0xA8638BE228D4751A 0x66728EFE b323
	 // All occurrences and usages found in b617d, sorted alphabetically and identical lines removed: pastebin.com/XZ1tmGEz
	static BOOL REQUEST_AMBIENT_AUDIO_BANK(const char* p0, BOOL p1, Any p2) { return invoke<BOOL>(0xFE02FFBED8CA9D99, p0, p1, p2); } // 0xFE02FFBED8CA9D99 0x23C88BC7 b323
	 // All occurrences and usages found in b617d, sorted alphabetically and identical lines removed: pastebin.com/AkmDAVn6
	static BOOL REQUEST_SCRIPT_AUDIO_BANK(const char* p0, BOOL p1, Any p2) { return invoke<BOOL>(0x2F844A8B08D76685, p0, p1, p2); } // 0x2F844A8B08D76685 0x21322887 b323
	static Any HINT_AMBIENT_AUDIO_BANK(Any p0, Any p1, Any p2) { return invoke<Any>(0x8F8C0E370AE62F5C, p0, p1, p2); } // 0x8F8C0E370AE62F5C 0xF1850DDC b323
	static Any HINT_SCRIPT_AUDIO_BANK(Any p0, Any p1, Any p2) { return invoke<Any>(0xFB380A29641EC31A, p0, p1, p2); } // 0xFB380A29641EC31A 0x41FA0E51 b323
	static void RELEASE_AMBIENT_AUDIO_BANK() { return invoke<void>(0x65475A218FFAA93D); } // 0x65475A218FFAA93D 0x8C938784 b323
	static void RELEASE_NAMED_SCRIPT_AUDIO_BANK(const char* audioBank) { return invoke<void>(0x77ED170667F50170, audioBank); } // 0x77ED170667F50170 0x16707ABC b323
	static void RELEASE_SCRIPT_AUDIO_BANK() { return invoke<void>(0x7A2D8AD0A9EB9C3F); } // 0x7A2D8AD0A9EB9C3F 0x22F865E5 b323
	static void _0x19AF7ED9B9D23058() { return invoke<void>(0x19AF7ED9B9D23058); } // 0x19AF7ED9B9D23058 0xA58BBF4F b323
	static void _0x9AC92EED5E4793AB() { return invoke<void>(0x9AC92EED5E4793AB); } // 0x9AC92EED5E4793AB 0xE67446E9 b323
	static int GET_SOUND_ID() { return invoke<int>(0x430386FE9BF80B45); } // 0x430386FE9BF80B45 0x6AE0AD56 b323
	static void RELEASE_SOUND_ID(int soundId) { return invoke<void>(0x353FC880830B88FA, soundId); } // 0x353FC880830B88FA 0x9C080899 b323
	 // All found occurrences in b617d, sorted alphabetically and identical lines removed: pastebin.com/A8Ny8AHZ
	static void PLAY_SOUND(int soundId, const char* audioName, const char* audioRef, BOOL p3, Any p4, BOOL p5) { return invoke<void>(0x7FF4944CC209192D, soundId, audioName, audioRef, p3, p4, p5); } // 0x7FF4944CC209192D 0xB6E1917F b323
	 // list: pastebin.com/DCeRiaLJ
	 // 
	 // All found occurrences in b617d, sorted alphabetically and identical lines removed: pastebin.com/0neZdsZ5
	static void PLAY_SOUND_FRONTEND(int soundId, const char* audioName, const char* audioRef, BOOL p3) { return invoke<void>(0x67C540AA08E4A6F5, soundId, audioName, audioRef, p3); } // 0x67C540AA08E4A6F5 0x2E458F74 b323
	 // All found occurrences in b617d, sorted alphabetically and identical lines removed: pastebin.com/f2A7vTj0 
	 // No changes made in b678d.
	 // 
	 // gtaforums.com/topic/795622-audio-for-mods
	 // 
	static void PLAY_SOUND_FROM_ENTITY(int soundId, const char* audioName, Entity entity, const char* audioRef, BOOL isNetwork, Any p5) { return invoke<void>(0xE65F427EB70AB1ED, soundId, audioName, entity, audioRef, isNetwork, p5); } // 0xE65F427EB70AB1ED 0x95AE00F8 b323
	 // All found occurrences in b617d, sorted alphabetically and identical lines removed: pastebin.com/eeFc5DiW
	 // 
	 // gtaforums.com/topic/795622-audio-for-mods
	static void PLAY_SOUND_FROM_COORD(int soundId, const char* audioName, float x, float y, float z, const char* audioRef, BOOL isNetwork, int range, BOOL p8) { return invoke<void>(0x8D8686B622B88120, soundId, audioName, x, y, z, audioRef, isNetwork, range, p8); } // 0x8D8686B622B88120 0xCAD3E2D5 b323
	static void STOP_SOUND(int soundId) { return invoke<void>(0xA3B0C41BA5CC0BB5, soundId); } // 0xA3B0C41BA5CC0BB5 0xCD7F4030 b323
	 // Could this be used alongside either, 
	 // SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES or _SET_NETWORK_ID_SYNC_TO_PLAYER to make it so other players can hear the sound while online? It'd be a bit troll-fun to be able to play the Zancudo UFO creepy sounds globally.
	static int GET_NETWORK_ID_FROM_SOUND_ID(int soundId) { return invoke<int>(0x2DE3F0A134FFBC0D, soundId); } // 0x2DE3F0A134FFBC0D 0x2576F610 b323
	static int GET_SOUND_ID_FROM_NETWORK_ID(int netId) { return invoke<int>(0x75262FD12D0A1C84, netId); } // 0x75262FD12D0A1C84 0xD064D4DC b323
	static void SET_VARIABLE_ON_SOUND(int soundId, Any* p1, float p2) { return invoke<void>(0xAD6B3148A78AE9B6, soundId, p1, p2); } // 0xAD6B3148A78AE9B6 0x606EE5FA b323
	 // From the scripts, p0:
	 // 
	 // "ArmWrestlingIntensity",
	 // "INOUT",
	 // "Monkey_Stream",
	 // "ZoomLevel"
	static void SET_VARIABLE_ON_STREAM(const char* p0, float p1) { return invoke<void>(0x2F9D3834AEB9EF79, p0, p1); } // 0x2F9D3834AEB9EF79 0xF67BB44C b323
	static BOOL HAS_SOUND_FINISHED(int soundId) { return invoke<BOOL>(0xFCBDCE714A7C88E5, soundId); } // 0xFCBDCE714A7C88E5 0xE85AEC2E b323
	 // Plays ambient speech. See also _0x444180DB.
	 // 
	 // ped: The ped to play the ambient speech.
	 // speechName: Name of the speech to play, eg. "GENERIC_HI".
	 // speechParam: Can be one of the following:
	 // SPEECH_PARAMS_STANDARD
	 // SPEECH_PARAMS_ALLOW_REPEAT
	 // SPEECH_PARAMS_BEAT
	 // SPEECH_PARAMS_FORCE
	 // SPEECH_PARAMS_FORCE_FRONTEND
	 // SPEECH_PARAMS_FORCE_NO_REPEAT_FRONTEND
	 // SPEECH_PARAMS_FORCE_NORMAL
	 // SPEECH_PARAMS_FORCE_NORMAL_CLEAR
	 // SPEECH_PARAMS_FORCE_NORMAL_CRITICAL
	 // SPEECH_PARAMS_FORCE_SHOUTED
	 // SPEECH_PARAMS_FORCE_SHOUTED_CLEAR
	 // SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL
	 // SPEECH_PARAMS_FORCE_PRELOAD_ONLY
	 // SPEECH_PARAMS_MEGAPHONE
	 // SPEECH_PARAMS_HELI
	 // SPEECH_PARAMS_FORCE_MEGAPHONE
	 // SPEECH_PARAMS_FORCE_HELI
	 // SPEECH_PARAMS_INTERRUPT
	 // SPEECH_PARAMS_INTERRUPT_SHOUTED
	 // SPEECH_PARAMS_INTERRUPT_SHOUTED_CLEAR
	 // SPEECH_PARAMS_INTERRUPT_SHOUTED_CRITICAL
	 // SPEECH_PARAMS_INTERRUPT_NO_FORCE
	 // SPEECH_PARAMS_INTERRUPT_FRONTEND
	 // SPEECH_PARAMS_INTERRUPT_NO_FORCE_FRONTEND
	 // SPEECH_PARAMS_ADD_BLIP
	 // SPEECH_PARAMS_ADD_BLIP_ALLOW_REPEAT
	 // SPEECH_PARAMS_ADD_BLIP_FORCE
	 // SPEECH_PARAMS_ADD_BLIP_SHOUTED
	 // SPEECH_PARAMS_ADD_BLIP_SHOUTED_FORCE
	 // SPEECH_PARAMS_ADD_BLIP_INTERRUPT
	 // SPEECH_PARAMS_ADD_BLIP_INTERRUPT_FORCE
	 // SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED
	 // SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CLEAR
	 // SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CRITICAL
	 // SPEECH_PARAMS_SHOUTED
	 // SPEECH_PARAMS_SHOUTED_CLEAR
	 // SPEECH_PARAMS_SHOUTED_CRITICAL
	 // 
	 // Note: A list of Name and Parameters can be found here pastebin.com/1GZS5dCL
	 // 
	 // Full list of speeches and voices names: gist.github.com/alexguirre/0af600eb3d4c91ad4f900120a63b8992
	 // 
	 // Old name: _PLAY_AMBIENT_SPEECH1
	static void PLAY_PED_AMBIENT_SPEECH_NATIVE(Ped ped, const char* speechName, const char* speechParam, Any p3) { return invoke<void>(0x8E04FEDD28D42462, ped, speechName, speechParam, p3); } // 0x8E04FEDD28D42462 0x5C57B85D b323
	 // This is the same as PLAY_PED_AMBIENT_SPEECH_NATIVE and PLAY_PED_AMBIENT_SPEECH_AND_CLONE_NATIVE but it will allow you to play a speech file from a specific voice file. It works on players and all peds, even animals.
	 // 
	 // EX (C#):
	 // GTA.Native.Function.Call(Hash._0x3523634255FC3318, Game.Player.Character, "GENERIC_INSULT_HIGH", "s_m_y_sheriff_01_white_full_01", "SPEECH_PARAMS_FORCE_SHOUTED", 0);
	 // 
	 // The first param is the ped you want to play it on, the second is the speech name, the third is the voice name, the fourth is the speech param, and the last param is usually always 0.
	 // 
	 // Full list of speeches and voices names by alexguirre: gist.github.com/alexguirre/0af600eb3d4c91ad4f900120a63b8992
	static void PLAY_PED_AMBIENT_SPEECH_WITH_VOICE_NATIVE(Ped ped, const char* speechName, const char* voiceName, const char* speechParam, BOOL p4) { return invoke<void>(0x3523634255FC3318, ped, speechName, voiceName, speechParam, p4); } // 0x3523634255FC3318 0x8386AE28 b323
	static void PLAY_AMBIENT_SPEECH_FROM_POSITION_NATIVE(const char* p0, const char* p1, float x, float y, float z, const char* p5) { return invoke<void>(0xED640017ED337E45, p0, p1, x, y, z, p5); } // 0xED640017ED337E45 0xA1A1402E b323
	 // Needs another parameter [int p2]. The signature is PED::PLAY_PAIN(Ped ped, int painID, int p1, int p2);
	 // 
	 // Last 2 parameters always seem to be 0.
	 // 
	 // EX: Function.Call(Hash.PLAY_PAIN, TestPed, 6, 0, 0);
	 // 
	 // Known Pain IDs
	 // ________________________
	 // 
	 // 1 - Doesn't seem to do anything. Does NOT crash the game like previously said. (Latest patch)
	 // 6 - Scream (Short)
	 // 7 - Scared Scream (Kinda Long)
	 // 8 - On Fire
	 // 
	static void PLAY_PAIN(Ped ped, int painID, int p1, Any p3) { return invoke<void>(0xBC9AE166038A5CEC, ped, painID, p1, p3); } // 0xBC9AE166038A5CEC 0x874BD6CB b323
	static void ACTIVATE_AUDIO_SLOWMO_MODE(const char* p0) { return invoke<void>(0xD01005D2BA2EB778, p0); } // 0xD01005D2BA2EB778 0x59A3A17D b323
	static void DEACTIVATE_AUDIO_SLOWMO_MODE(const char* p0) { return invoke<void>(0xDDC635D5B3262C56, p0); } // 0xDDC635D5B3262C56 0x0E387BFE b323
	 // Audio List
	 // gtaforums.com/topic/795622-audio-for-mods/
	 // 
	 // All found occurrences in b617d, sorted alphabetically and identical lines removed: pastebin.com/FTeAj4yZ
	 // 
	 // Yes
	static void SET_AMBIENT_VOICE_NAME(Ped ped, const char* name) { return invoke<void>(0x6C8065A3B780185B, ped, name); } // 0x6C8065A3B780185B 0xBD2EA1A1 b323
	 // From the scripts:
	 // 
	 // AUDIO::_SET_PED_VOICE_GROUP(PLAYER::PLAYER_PED_ID(), GAMEPLAY::GET_HASH_KEY("PAIGE_PVG"));
	 // AUDIO::_SET_PED_VOICE_GROUP(PLAYER::PLAYER_PED_ID(), GAMEPLAY::GET_HASH_KEY("TALINA_PVG"));
	 // AUDIO::_SET_PED_VOICE_GROUP(PLAYER::PLAYER_PED_ID(), GAMEPLAY::GET_HASH_KEY("FEMALE_LOST_BLACK_PVG"));
	 // AUDIO::_SET_PED_VOICE_GROUP(PLAYER::PLAYER_PED_ID(), GAMEPLAY::GET_HASH_KEY("FEMALE_LOST_WHITE_PVG"));
	static void _SET_PED_VOICE_GROUP(Ped ped, Hash voiceGroupHash) { return invoke<void>(0x7CDC8C3B89F661B3, ped, voiceGroupHash); } // 0x7CDC8C3B89F661B3 b323
	static void STOP_CURRENT_PLAYING_AMBIENT_SPEECH(Ped ped) { return invoke<void>(0xB8BEC0CA6F0EDB0F, ped); } // 0xB8BEC0CA6F0EDB0F 0xBB8E64BF b323
	static BOOL IS_AMBIENT_SPEECH_PLAYING(Ped ped) { return invoke<BOOL>(0x9072C8B49907BFAD, ped); } // 0x9072C8B49907BFAD 0x1972E8AA b323
	static BOOL IS_SCRIPTED_SPEECH_PLAYING(Any p0) { return invoke<BOOL>(0xCC9AA18DCC7084F4, p0); } // 0xCC9AA18DCC7084F4 0x2C653904 b323
	static BOOL IS_ANY_SPEECH_PLAYING(Ped ped) { return invoke<BOOL>(0x729072355FA39EC9, ped); } // 0x729072355FA39EC9 0x2B74A6D6 b323
	 // Checks if the ped can play the speech or has the speech file, last parameter is usually 0
	 // 
	 // DOES_C*
	static BOOL _CAN_PED_SPEAK(Ped ped, const char* speechName, BOOL unk) { return invoke<BOOL>(0x49B99BF3FDA89A7A, ped, speechName, unk); } // 0x49B99BF3FDA89A7A 0x8BD5F11E b323
	static BOOL IS_PED_IN_CURRENT_CONVERSATION(Ped ped) { return invoke<BOOL>(0x049E937F18F4020C, ped); } // 0x049E937F18F4020C 0x7B2F0743 b323
	 // Sets the ped drunk sounds.  Only works with PLAYER_PED_ID
	 // 
	 // ====================================================
	 // 
	 // As mentioned above, this only sets the drunk sound to ped/player.
	 // 
	 // To give the Ped a drunk effect with drunk walking animation try using SET_PED_MOVEMENT_CLIPSET
	 // 
	 // Below is an example
	 // 
	 // if (!Function.Call<bool>(Hash.HAS_ANIM_SET_LOADED, "move_m@drunk@verydrunk"))
	 //                 {
	 //                     Function.Call(Hash.REQUEST_ANIM_SET, "move_m@drunk@verydrunk");
	 //                 }
	 //                 Function.Call(Hash.SET_PED_MOVEMENT_CLIPSET, Ped.Handle, "move_m@drunk@verydrunk", 0x3E800000);
	 // 
	 // 
	 // 
	 // And to stop the effect use
	 // RESET_PED_MOVEMENT_CLIPSET
	static void SET_PED_IS_DRUNK(Ped ped, BOOL toggle) { return invoke<void>(0x95D2D383D5396B8A, ped, toggle); } // 0x95D2D383D5396B8A 0xD2EA77A3 b323
	static void PLAY_ANIMAL_VOCALIZATION(Ped pedHandle, Any p1, Any* p2) { return invoke<void>(0xEE066C7006C49C0A, pedHandle, p1, p2); } // 0xEE066C7006C49C0A 0x498849F3 b323
	static void SET_MOBILE_PHONE_RADIO_STATE(BOOL state) { return invoke<void>(0xBF286C554784F3DF, state); } // 0xBF286C554784F3DF 0xE1E0ED34 b323
	 // Returns 255 (radio off index) if the function fails.
	static int GET_PLAYER_RADIO_STATION_INDEX() { return invoke<int>(0xE8AF77C4C06ADC93); } // 0xE8AF77C4C06ADC93 0x1C4946AC b323
	 // Returns active radio station name
	static const char* GET_PLAYER_RADIO_STATION_NAME() { return invoke<const char*>(0xF6D733C32076AD03); } // 0xF6D733C32076AD03 0xD909C107 b323
	 // Returns String with radio station name.
	static const char* GET_RADIO_STATION_NAME(int radioStation) { return invoke<const char*>(0xB28ECA15046CA8B9, radioStation); } // 0xB28ECA15046CA8B9 0x3DF493BC b323
	static int GET_PLAYER_RADIO_STATION_GENRE() { return invoke<int>(0xA571991A7FE6CCEB); } // 0xA571991A7FE6CCEB 0x872CF0EA b323
	static BOOL IS_RADIO_RETUNING() { return invoke<BOOL>(0xA151A7394A214E65); } // 0xA151A7394A214E65 0xCF29097B b323
	static BOOL IS_RADIO_FADED_OUT() { return invoke<BOOL>(0x0626A247D2405330); } // 0x0626A247D2405330 0x815CAE99 b323
	 // For a full list, see here: pastebin.com/Kj9t38KF
	static void SET_RADIO_TO_STATION_NAME(const char* stationName) { return invoke<void>(0xC69EDA28699D5107, stationName); } // 0xC69EDA28699D5107 0x7B36E35E b323
	 // For a full list, see here: pastebin.com/Kj9t38KF
	static void SET_VEH_RADIO_STATION(Vehicle vehicle, const char* radioStation) { return invoke<void>(0x1B9C0099CB942AC6, vehicle, radioStation); } // 0x1B9C0099CB942AC6 0xE391F55F b323
	static void SET_EMITTER_RADIO_STATION(const char* emitterName, const char* radioStation) { return invoke<void>(0xACF57305B12AF907, emitterName, radioStation); } // 0xACF57305B12AF907 0x87431585 b323
	 // Example:
	 // AUDIO::SET_STATIC_EMITTER_ENABLED((Any*)"LOS_SANTOS_VANILLA_UNICORN_01_STAGE", false);    AUDIO::SET_STATIC_EMITTER_ENABLED((Any*)"LOS_SANTOS_VANILLA_UNICORN_02_MAIN_ROOM", false);    AUDIO::SET_STATIC_EMITTER_ENABLED((Any*)"LOS_SANTOS_VANILLA_UNICORN_03_BACK_ROOM", false);
	 // 
	 // This turns off surrounding sounds not connected directly to peds. 
	 // 
	 // 
	static void SET_STATIC_EMITTER_ENABLED(const char* emitterName, BOOL toggle) { return invoke<void>(0x399D2D3B33F1B8EB, emitterName, toggle); } // 0x399D2D3B33F1B8EB 0x91F72E92 b323
	 // Sets radio station by index.
	static void SET_RADIO_TO_STATION_INDEX(int radioStation) { return invoke<void>(0xA619B168B8A8570F, radioStation); } // 0xA619B168B8A8570F 0x1D82766D b323
	static void SET_FRONTEND_RADIO_ACTIVE(BOOL active) { return invoke<void>(0xF7F26C6E9CC9EBB8, active); } // 0xF7F26C6E9CC9EBB8 0xB1172075 b323
	 // I see this as a native that would of been used back in GTA III when you finally unlocked the bridge to the next island and such.
	static void UNLOCK_MISSION_NEWS_STORY(int newsStory) { return invoke<void>(0xB165AB7C248B2DC1, newsStory); } // 0xB165AB7C248B2DC1 0xCCD9ABE4 b323
	static int GET_AUDIBLE_MUSIC_TRACK_TEXT_ID() { return invoke<int>(0x50B196FC9ED6545B); } // 0x50B196FC9ED6545B 0xA2B88CA7 b323
	static void PLAY_END_CREDITS_MUSIC(BOOL play) { return invoke<void>(0xCD536C4D33DCC900, play); } // 0xCD536C4D33DCC900 0x8E88B3CC b323
	static void SKIP_RADIO_FORWARD() { return invoke<void>(0x6DDBBDD98E2E9C25); } // 0x6DDBBDD98E2E9C25 0x10D36630 b323
	static void FREEZE_RADIO_STATION(const char* radioStation) { return invoke<void>(0x344F393B027E38C3, radioStation); } // 0x344F393B027E38C3 0x286BF543 b323
	static void UNFREEZE_RADIO_STATION(const char* radioStation) { return invoke<void>(0xFC00454CF60B91DD, radioStation); } // 0xFC00454CF60B91DD 0x4D46202C b323
	static void SET_INITIAL_PLAYER_STATION(const char* radioStation) { return invoke<void>(0x88795F13FACDA88D, radioStation); } // 0x88795F13FACDA88D 0x9B069233 b323
	static void SET_USER_RADIO_CONTROL_ENABLED(BOOL toggle) { return invoke<void>(0x19F21E63AE6EAE4E, toggle); } // 0x19F21E63AE6EAE4E 0x52E054CE b323
	static void _SET_RADIO_TRACK_MIX(const char* radioStationName, const char* mixName, int p2) { return invoke<void>(0x2CB0075110BE1E56, radioStationName, mixName, p2); } // 0x2CB0075110BE1E56 b1493
	static void SET_VEHICLE_RADIO_LOUD(Vehicle vehicle, BOOL toggle) { return invoke<void>(0xBB6F1CAEC68B0BCE, vehicle, toggle); } // 0xBB6F1CAEC68B0BCE 0x8D9EDD99 b323
	static BOOL _IS_VEHICLE_RADIO_LOUD(Vehicle vehicle) { return invoke<BOOL>(0x032A116663A4D5AC, vehicle); } // 0x032A116663A4D5AC 0xCBA99F4A b323
	static void SET_MOBILE_RADIO_ENABLED_DURING_GAMEPLAY(BOOL toggle) { return invoke<void>(0x1098355A16064BB3, toggle); } // 0x1098355A16064BB3 0x990085F0 b323
	static BOOL DOES_PLAYER_VEH_HAVE_RADIO() { return invoke<BOOL>(0x109697E2FFBAC8A1); } // 0x109697E2FFBAC8A1 0x46B0C696 b323
	 // can't seem to enable radio on cop cars etc
	static void SET_VEHICLE_RADIO_ENABLED(Vehicle vehicle, BOOL toggle) { return invoke<void>(0x3B988190C0AA6C0B, vehicle, toggle); } // 0x3B988190C0AA6C0B 0x6F812CAB b323
	 // Examples:
	 // 
	 // AUDIO::SET_CUSTOM_RADIO_TRACK_LIST("RADIO_01_CLASS_ROCK", "END_CREDITS_KILL_MICHAEL", 1);
	 // AUDIO::SET_CUSTOM_RADIO_TRACK_LIST("RADIO_01_CLASS_ROCK", "END_CREDITS_KILL_MICHAEL", 1);
	 // AUDIO::SET_CUSTOM_RADIO_TRACK_LIST("RADIO_01_CLASS_ROCK", "END_CREDITS_KILL_TREVOR", 1);
	 // AUDIO::SET_CUSTOM_RADIO_TRACK_LIST("RADIO_01_CLASS_ROCK", "END_CREDITS_SAVE_MICHAEL_TREVOR", 1);
	 // AUDIO::SET_CUSTOM_RADIO_TRACK_LIST("RADIO_01_CLASS_ROCK", "OFF_ROAD_RADIO_ROCK_LIST", 1);
	 // AUDIO::SET_CUSTOM_RADIO_TRACK_LIST("RADIO_06_COUNTRY", "MAGDEMO2_RADIO_DINGHY", 1);
	 // AUDIO::SET_CUSTOM_RADIO_TRACK_LIST("RADIO_16_SILVERLAKE", "SEA_RACE_RADIO_PLAYLIST", 1);
	 // AUDIO::SET_CUSTOM_RADIO_TRACK_LIST("RADIO_01_CLASS_ROCK", "OFF_ROAD_RADIO_ROCK_LIST", 1);
	static void SET_CUSTOM_RADIO_TRACK_LIST(const char* radioStation, const char* trackListName, BOOL p2) { return invoke<void>(0x4E404A9361F75BB2, radioStation, trackListName, p2); } // 0x4E404A9361F75BB2 0x128C3873 b323
	 // 3 calls in the b617d scripts, removed duplicate.
	 // 
	 // AUDIO::CLEAR_CUSTOM_RADIO_TRACK_LIST("RADIO_16_SILVERLAKE");
	 // AUDIO::CLEAR_CUSTOM_RADIO_TRACK_LIST("RADIO_01_CLASS_ROCK");
	static void CLEAR_CUSTOM_RADIO_TRACK_LIST(const char* radioStation) { return invoke<void>(0x1654F24A88A8E3FE, radioStation); } // 0x1654F24A88A8E3FE 0x1D766976 b323
	static int FIND_RADIO_STATION_INDEX(int station) { return invoke<int>(0x8D67489793FF428B, station); } // 0x8D67489793FF428B 0xECA1512F b323
	 // 6 calls in the b617d scripts, removed identical lines:
	 // 
	 // AUDIO::SET_RADIO_STATION_MUSIC_ONLY("RADIO_01_CLASS_ROCK", 1);
	 // AUDIO::SET_RADIO_STATION_MUSIC_ONLY(AUDIO::GET_RADIO_STATION_NAME(10), 0);
	 // AUDIO::SET_RADIO_STATION_MUSIC_ONLY(AUDIO::GET_RADIO_STATION_NAME(10), 1);
	static void SET_RADIO_STATION_MUSIC_ONLY(const char* radioStation, BOOL toggle) { return invoke<void>(0x774BD811F656A122, radioStation, toggle); } // 0x774BD811F656A122 0xB1FF7137 b323
	 // GET_CURRENT_*
	static int _0x3E65CDE5215832C1(const char* radioStationName) { return invoke<int>(0x3E65CDE5215832C1, radioStationName); } // 0x3E65CDE5215832C1 b1493
	 // GET_CURRENT_*
	static Hash _0x34D66BC058019CE0(const char* radioStationName) { return invoke<Hash>(0x34D66BC058019CE0, radioStationName); } // 0x34D66BC058019CE0 b1493
	static void SET_AMBIENT_ZONE_STATE(const char* zoneName, BOOL p1, BOOL p2) { return invoke<void>(0xBDA07E5950085E46, zoneName, p1, p2); } // 0xBDA07E5950085E46 0x2849CAC9 b323
	static void SET_AMBIENT_ZONE_LIST_STATE(Any* p0, BOOL p1, BOOL p2) { return invoke<void>(0x9748FA4DE50CCE3E, p0, p1, p2); } // 0x9748FA4DE50CCE3E 0xBF80B412 b323
	 //  All occurrences found in b617d, sorted alphabetically and identical lines removed: pastebin.com/jYvw7N1S
	static void SET_AMBIENT_ZONE_STATE_PERSISTENT(const char* ambientZone, BOOL p1, BOOL p2) { return invoke<void>(0x1D6650420CEC9D3B, ambientZone, p1, p2); } // 0x1D6650420CEC9D3B 0xC1FFB672 b323
	 // All occurrences found in b617d, sorted alphabetically and identical lines removed: pastebin.com/WkXDGgQL
	static void SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT(const char* ambientZone, BOOL p1, BOOL p2) { return invoke<void>(0xF3638DAE8C4045E1, ambientZone, p1, p2); } // 0xF3638DAE8C4045E1 0x5F5A2605 b323
	static BOOL IS_AMBIENT_ZONE_ENABLED(const char* ambientZone) { return invoke<BOOL>(0x01E2817A479A7F9B, ambientZone); } // 0x01E2817A479A7F9B 0xBFABD872 b323
	 // Plays the given police radio message.
	 // 
	 // All found occurrences in b617d, sorted alphabetically and identical lines removed: pastebin.com/GBnsQ5hr
	static int PLAY_POLICE_REPORT(const char* name, float p1) { return invoke<int>(0xDFEBD56D9BD1EB16, name, p1); } // 0xDFEBD56D9BD1EB16 0x3F277B62 b323
	 // Checks whether the horn of a vehicle is currently played.
	static BOOL IS_HORN_ACTIVE(Vehicle vehicle) { return invoke<BOOL>(0x9D6BFC12B05C6121, vehicle); } // 0x9D6BFC12B05C6121 0x20E2BDD0 b323
	static BOOL IS_STREAM_PLAYING() { return invoke<BOOL>(0xD11FA52EB849D978); } // 0xD11FA52EB849D978 0xF1F51A14 b323
	static int GET_STREAM_PLAY_TIME() { return invoke<int>(0x4E72BBDBCA58A3DB); } // 0x4E72BBDBCA58A3DB 0xB4F0AD56 b323
	 // Example:
	 // AUDIO::LOAD_STREAM("CAR_STEAL_1_PASSBY", "CAR_STEAL_1_SOUNDSET");
	 // 
	 // All found occurrences in the b678d decompiled scripts: pastebin.com/3rma6w5w
	 // 
	 // Stream names often ends with "_MASTER", "_SMALL" or "_STREAM". Also "_IN", "_OUT" and numbers.   
	 // 
	 // soundSet is often set to 0 in the scripts. These are common to end the soundSets: "_SOUNDS", "_SOUNDSET" and numbers. 
	static BOOL LOAD_STREAM(const char* streamName, const char* soundSet) { return invoke<BOOL>(0x1F1F957154EC51DF, streamName, soundSet); } // 0x1F1F957154EC51DF 0x0D89599D b323
	 // Example:
	 // AUDIO::LOAD_STREAM_WITH_START_OFFSET("STASH_TOXIN_STREAM", 2400, "FBI_05_SOUNDS");
	 // 
	 // Only called a few times in the scripts. 
	static BOOL LOAD_STREAM_WITH_START_OFFSET(const char* streamName, int startOffset, const char* soundSet) { return invoke<BOOL>(0x59C16B79F53B3712, streamName, startOffset, soundSet); } // 0x59C16B79F53B3712 0xE5B5745C b323
	static void PLAY_STREAM_FROM_PED(Ped ped) { return invoke<void>(0x89049DD63C08B5D1, ped); } // 0x89049DD63C08B5D1 0xA1D7FABE b323
	static void PLAY_STREAM_FROM_VEHICLE(Vehicle vehicle) { return invoke<void>(0xB70374A758007DFA, vehicle); } // 0xB70374A758007DFA 0xF8E4BDA2 b323
	 // Used with AUDIO::LOAD_STREAM
	 // 
	 // Example from finale_heist2b.c4:
	 // AI::TASK_SYNCHRONIZED_SCENE(l_4C8[2/*14*/], l_4C8[2/*14*/]._f7, l_30A, "push_out_vault_l", 4.0, -1.5, 5, 713, 4.0, 0);
	 //                     PED::SET_SYNCHRONIZED_SCENE_PHASE(l_4C8[2/*14*/]._f7, 0.0);
	 //                     PED::_2208438012482A1A(l_4C8[2/*14*/], 0, 0);
	 //                     PED::SET_PED_COMBAT_ATTRIBUTES(l_4C8[2/*14*/], 38, 1);
	 //                     PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(l_4C8[2/*14*/], 1);
	 //                     if (AUDIO::LOAD_STREAM("Gold_Cart_Push_Anim_01", "BIG_SCORE_3B_SOUNDS")) {
	 //                         AUDIO::PLAY_STREAM_FROM_OBJECT(l_36F[0/*1*/]);
	 //                     }
	static void PLAY_STREAM_FROM_OBJECT(Object object) { return invoke<void>(0xEBAA9B64D76356FD, object); } // 0xEBAA9B64D76356FD 0xC5266BF7 b323
	static void PLAY_STREAM_FRONTEND() { return invoke<void>(0x58FCE43488F9F5F4); } // 0x58FCE43488F9F5F4 0x2C2A16BC b323
	static void PLAY_STREAM_FROM_POSITION(float x, float y, float z) { return invoke<void>(0x21442F412E8DE56B, x, y, z); } // 0x21442F412E8DE56B 0x6FE5D865 b323
	static void STOP_STREAM() { return invoke<void>(0xA4718A1419D18151); } // 0xA4718A1419D18151 0xD1E364DE b323
	static void STOP_PED_SPEAKING(Ped ped, BOOL shaking) { return invoke<void>(0x9D64D7405520E3D3, ped, shaking); } // 0x9D64D7405520E3D3 0xFF92B49D b323
	 // BL*
	static void _0xF8AD2EED7C47E8FE(Ped ped, BOOL p1, BOOL p2) { return invoke<void>(0xF8AD2EED7C47E8FE, ped, p1, p2); } // 0xF8AD2EED7C47E8FE b1734
	static void DISABLE_PED_PAIN_AUDIO(Ped ped, BOOL toggle) { return invoke<void>(0xA9A41C1E940FB0E8, ped, toggle); } // 0xA9A41C1E940FB0E8 0x3B8E2D5F b323
	 // Common in the scripts:
	 // AUDIO::IS_AMBIENT_SPEECH_DISABLED(PLAYER::PLAYER_PED_ID());
	static BOOL IS_AMBIENT_SPEECH_DISABLED(Ped ped) { return invoke<BOOL>(0x932C2D096A2C3FFF, ped); } // 0x932C2D096A2C3FFF 0x109D1F89 b323
	static void _0xA8A7D434AFB4B97B(const char* p0, int p1) { return invoke<void>(0xA8A7D434AFB4B97B, p0, p1); } // 0xA8A7D434AFB4B97B b1493
	static void _0x2ACABED337622DF2(const char* p0) { return invoke<void>(0x2ACABED337622DF2, p0); } // 0x2ACABED337622DF2 b1493
	static void SET_SIREN_WITH_NO_DRIVER(Vehicle vehicle, BOOL toggle) { return invoke<void>(0x1FEF0683B96EBCF2, vehicle, toggle); } // 0x1FEF0683B96EBCF2 0x77182D58 b323
	 // SET_*
	static void _SOUND_VEHICLE_HORN_THIS_FRAME(Vehicle vehicle) { return invoke<void>(0x9C11908013EA4715, vehicle); } // 0x9C11908013EA4715 0xDE8BA3CD b323
	static void SET_HORN_ENABLED(Vehicle vehicle, BOOL toggle) { return invoke<void>(0x76D683C108594D0E, vehicle, toggle); } // 0x76D683C108594D0E 0x6EB92D05 b323
	static void SET_AUDIO_VEHICLE_PRIORITY(Vehicle vehicle, Any p1) { return invoke<void>(0xE5564483E407F914, vehicle, p1); } // 0xE5564483E407F914 0x271A9766 b323
	 // SET_H*
	static void _0x9D3AF56E94C9AE98(Vehicle vehicle, float p1) { return invoke<void>(0x9D3AF56E94C9AE98, vehicle, p1); } // 0x9D3AF56E94C9AE98 0x2F0A16D1 b323
	static BOOL _0x5DB8010EE71FDEF2(Vehicle vehicle) { return invoke<BOOL>(0x5DB8010EE71FDEF2, vehicle); } // 0x5DB8010EE71FDEF2 0x6E660D3F b323
	 // SET_VEHICLE_BOOST_ACTIVE(vehicle, 1, 0);
	 // SET_VEHICLE_BOOST_ACTIVE(vehicle, 0, 0); 
	 // 
	 // Will give a boost-soundeffect.
	static void SET_VEHICLE_BOOST_ACTIVE(Vehicle vehicle, BOOL toggle) { return invoke<void>(0x4A04DE7CAB2739A1, vehicle, toggle); } // 0x4A04DE7CAB2739A1 0x072F15F2 b323
	static void SET_SCRIPT_UPDATE_DOOR_AUDIO(Hash doorHash, BOOL toggle) { return invoke<void>(0x06C0023BED16DD6B, doorHash, toggle); } // 0x06C0023BED16DD6B 0xE61110A2 b323
	 // Works for planes only.
	static void ENABLE_STALL_WARNING_SOUNDS(Vehicle vehicle, BOOL toggle) { return invoke<void>(0xC15907D667F7CFB2, vehicle, toggle); } // 0xC15907D667F7CFB2 0x563B635D b323
	 // Called 38 times in the scripts. There are 5 different audioNames used.
	 //  One unknown removed below.
	 // 
	 // AUDIO::PLAY_MISSION_COMPLETE_AUDIO("DEAD");
	 // AUDIO::PLAY_MISSION_COMPLETE_AUDIO("FRANKLIN_BIG_01");
	 // AUDIO::PLAY_MISSION_COMPLETE_AUDIO("GENERIC_FAILED");
	 // AUDIO::PLAY_MISSION_COMPLETE_AUDIO("TREVOR_SMALL_01");
	static void PLAY_MISSION_COMPLETE_AUDIO(const char* audioName) { return invoke<void>(0xB138AAB8A70D3C69, audioName); } // 0xB138AAB8A70D3C69 0x3033EA1D b323
	static BOOL IS_MISSION_COMPLETE_READY_FOR_UI() { return invoke<BOOL>(0x6F259F82D873B8B8); } // 0x6F259F82D873B8B8 0xCBE09AEC b323
	 // Used to prepare a scene where the surrounding sound is muted or a bit changed. This does not play any sound.
	 // 
	 // List of all usable scene names found in b617d. Sorted alphabetically and identical names removed: pastebin.com/MtM9N9CC
	static BOOL START_AUDIO_SCENE(const char* scene) { return invoke<BOOL>(0x013A80FC08F6E4F2, scene); } // 0x013A80FC08F6E4F2 0xE48D757B b323
	static void STOP_AUDIO_SCENE(const char* scene) { return invoke<void>(0xDFE8422B3B94E688, scene); } // 0xDFE8422B3B94E688 0xA08D8C58 b323
	 // ??
	static void STOP_AUDIO_SCENES() { return invoke<void>(0xBAC7FC81A75EC1A1); } // 0xBAC7FC81A75EC1A1 0xF6C7342A b323
	static BOOL IS_AUDIO_SCENE_ACTIVE(const char* scene) { return invoke<BOOL>(0xB65B60556E2A9225, scene); } // 0xB65B60556E2A9225 0xACBED05C b323
	static void SET_AUDIO_SCENE_VARIABLE(const char* scene, const char* variable, float value) { return invoke<void>(0xEF21A9EF089A2668, scene, variable, value); } // 0xEF21A9EF089A2668 0x19BB3CE8 b323
	 // SET_AUDIO_S*
	static void _0xA5F377B175A699C5(int p0) { return invoke<void>(0xA5F377B175A699C5, p0); } // 0xA5F377B175A699C5 0xE812925D b323
	 // All found occurrences in b678d:
	 // pastebin.com/ceu67jz8
	static void ADD_ENTITY_TO_AUDIO_MIX_GROUP(Entity entity, const char* groupName, float p2) { return invoke<void>(0x153973AB99FE8980, entity, groupName, p2); } // 0x153973AB99FE8980 0x2BC93264 b323
	static void REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(Entity entity, float p1) { return invoke<void>(0x18EB48CFC41F2EA0, entity, p1); } // 0x18EB48CFC41F2EA0 0x308ED0EC b323
	static Any _0x2DD39BF3E2F9C47F() { return invoke<Any>(0x2DD39BF3E2F9C47F); } // 0x2DD39BF3E2F9C47F b463
	 // All music event names found in the b617d scripts: pastebin.com/GnYt0R3P
	static BOOL PREPARE_MUSIC_EVENT(const char* eventName) { return invoke<BOOL>(0x1E5185B72EF5158A, eventName); } // 0x1E5185B72EF5158A 0x534A5C1C b323
	 // All music event names found in the b617d scripts: pastebin.com/GnYt0R3P
	static BOOL CANCEL_MUSIC_EVENT(const char* eventName) { return invoke<BOOL>(0x5B17A90291133DA5, eventName); } // 0x5B17A90291133DA5 0x89FF942D b323
	 // List of all usable event names found in b617d used with this native. Sorted alphabetically and identical names removed: pastebin.com/RzDFmB1W
	 // 
	 // All music event names found in the b617d scripts: pastebin.com/GnYt0R3P
	static BOOL TRIGGER_MUSIC_EVENT(const char* eventName) { return invoke<BOOL>(0x706D57B0F50DA710, eventName); } // 0x706D57B0F50DA710 0xB6094948 b323
	static int GET_MUSIC_PLAYTIME() { return invoke<int>(0xE7A0D23DC414507B); } // 0xE7A0D23DC414507B 0xD633C809 b323
	static void _0x70B8EC8FC108A634(BOOL p0, Any p1) { return invoke<void>(0x70B8EC8FC108A634, p0, p1); } // 0x70B8EC8FC108A634 0x95050CAD b323
	 // Example:
	 // 
	 // bool prepareAlarm = AUDIO::PREPARE_ALARM("PORT_OF_LS_HEIST_FORT_ZANCUDO_ALARMS");
	static BOOL PREPARE_ALARM(const char* alarmName) { return invoke<BOOL>(0x9D74AE343DB65533, alarmName); } // 0x9D74AE343DB65533 0x084932E8 b323
	 // Example:
	 // 
	 // This will start the alarm at Fort Zancudo.
	 // 
	 // AUDIO::START_ALARM("PORT_OF_LS_HEIST_FORT_ZANCUDO_ALARMS", 1);
	 // 
	 // First parameter (char) is the name of the alarm.
	 // Second parameter (bool) is unknown, it does not seem to make a difference if this one is 0 or 1.
	 // 
	 // ----------
	 // 
	 // It DOES make a difference but it has to do with the duration or something I dunno yet
	 // 
	 // ----------
	 // 
	 //  Found in the b617d scripts:
	 // 
	 //  AUDIO::START_ALARM("AGENCY_HEIST_FIB_TOWER_ALARMS", 0);
	 //  AUDIO::START_ALARM("AGENCY_HEIST_FIB_TOWER_ALARMS_UPPER", 1);
	 //  AUDIO::START_ALARM("AGENCY_HEIST_FIB_TOWER_ALARMS_UPPER_B", 0);
	 //  AUDIO::START_ALARM("BIG_SCORE_HEIST_VAULT_ALARMS", a_0);
	 //  AUDIO::START_ALARM("FBI_01_MORGUE_ALARMS", 1);
	 //  AUDIO::START_ALARM("FIB_05_BIOTECH_LAB_ALARMS", 0);
	 //  AUDIO::START_ALARM("JEWEL_STORE_HEIST_ALARMS", 0);
	 //  AUDIO::START_ALARM("PALETO_BAY_SCORE_ALARM", 1);
	 //  AUDIO::START_ALARM("PALETO_BAY_SCORE_CHICKEN_FACTORY_ALARM", 0);
	 //  AUDIO::START_ALARM("PORT_OF_LS_HEIST_FORT_ZANCUDO_ALARMS", 1);
	 //  AUDIO::START_ALARM("PORT_OF_LS_HEIST_SHIP_ALARMS", 0);
	 //  AUDIO::START_ALARM("PRISON_ALARMS", 0);
	 //  AUDIO::START_ALARM("PROLOGUE_VAULT_ALARMS", 0);
	static void START_ALARM(const char* alarmName, BOOL p2) { return invoke<void>(0x0355EF116C4C97B2, alarmName, p2); } // 0x0355EF116C4C97B2 0x703F524B b323
	 // Example:
	 // 
	 // This will stop the alarm at Fort Zancudo.
	 // 
	 // AUDIO::STOP_ALARM("PORT_OF_LS_HEIST_FORT_ZANCUDO_ALARMS", 1);
	 // 
	 // First parameter (char) is the name of the alarm.
	 // Second parameter (bool) has to be true (1) to have any effect.
	static void STOP_ALARM(const char* alarmName, BOOL toggle) { return invoke<void>(0xA1CADDCD98415A41, alarmName, toggle); } // 0xA1CADDCD98415A41 0xF987BE8C b323
	 // Example:
	 // 
	 // bool playing = AUDIO::IS_ALARM_PLAYING("PORT_OF_LS_HEIST_FORT_ZANCUDO_ALARMS");
	static BOOL IS_ALARM_PLAYING(const char* alarmName) { return invoke<BOOL>(0x226435CB96CCFC8C, alarmName); } // 0x226435CB96CCFC8C 0x9D8E1D23 b323
	 // Returns hash of default vehicle horn
	 // 
	 // Hash is stored in audVehicleAudioEntity
	static Hash GET_VEHICLE_DEFAULT_HORN(Vehicle vehicle) { return invoke<Hash>(0x02165D55000219AC, vehicle); } // 0x02165D55000219AC 0xE84ABC19 b323
	static Hash GET_VEHICLE_DEFAULT_HORN_IGNORE_MODS(Vehicle vehicle) { return invoke<Hash>(0xACB5DCCA1EC76840, vehicle); } // 0xACB5DCCA1EC76840 0xFD4B5B3B b323
	static void _0x0653B735BFBDFE87(Ped ped, BOOL toggle) { return invoke<void>(0x0653B735BFBDFE87, ped, toggle); } // 0x0653B735BFBDFE87 b1493
	static void _0x29DA3CA8D8B2692D(Ped ped, BOOL toggle) { return invoke<void>(0x29DA3CA8D8B2692D, ped, toggle); } // 0x29DA3CA8D8B2692D b1493
	 // if value is set to true, and ambient siren sound will be played.
	 // 
	 // -------------------------------------------------------------------------
	 // 
	 // Appears to enable/disable an audio flag.
	static void DISTANT_COP_CAR_SIRENS(BOOL value) { return invoke<void>(0x552369F549563AD5, value); } // 0x552369F549563AD5 0x13EB5861 b323
	 // Possible flag names:
	 // "ActivateSwitchWheelAudio"
	 // "AllowAmbientSpeechInSlowMo"
	 // "AllowCutsceneOverScreenFade"
	 // "AllowForceRadioAfterRetune"
	 // "AllowPainAndAmbientSpeechToPlayDuringCutscene"
	 // "AllowPlayerAIOnMission"
	 // "AllowPoliceScannerWhenPlayerHasNoControl"
	 // "AllowRadioDuringSwitch"
	 // "AllowRadioOverScreenFade"
	 // "AllowScoreAndRadio"
	 // "AllowScriptedSpeechInSlowMo"
	 // "AvoidMissionCompleteDelay"
	 // "DisableAbortConversationForDeathAndInjury"
	 // "DisableAbortConversationForRagdoll"
	 // "DisableBarks"
	 // "DisableFlightMusic"
	 // "DisableReplayScriptStreamRecording"
	 // "EnableHeadsetBeep"
	 // "ForceConversationInterrupt"
	 // "ForceSeamlessRadioSwitch"
	 // "ForceSniperAudio"
	 // "FrontendRadioDisabled"
	 // "HoldMissionCompleteWhenPrepared"
	 // "IsDirectorModeActive"
	 // "IsPlayerOnMissionForSpeech"
	 // "ListenerReverbDisabled"
	 // "LoadMPData"
	 // "MobileRadioInGame"
	 // "OnlyAllowScriptTriggerPoliceScanner"
	 // "PlayMenuMusic"
	 // "PoliceScannerDisabled"
	 // "ScriptedConvListenerMaySpeak"
	 // "SpeechDucksScore"
	 // "SuppressPlayerScubaBreathing"
	 // "WantedMusicDisabled"
	 // "WantedMusicOnMission"
	 // 
	 // -------------------------------
	 // No added flag names between b393d and b573d, including b573d.
	 // 
	 // #######################################################################
	 // 
	 // "IsDirectorModeActive" is an audio flag which will allow you to play speech infinitely without any pauses like in Director Mode.
	 // 
	 // -----------------------------------------------------------------------
	 // 
	 // All flag IDs and hashes:
	 // 
	 // ID: 00 | Hash: 0x0FED7A7F
	 // ID: 01 | Hash: 0x20A7858F
	 // ID: 02 | Hash: 0xA11C2259
	 // ID: 03 | Hash: 0x08DE4700
	 // ID: 04 | Hash: 0x989F652F
	 // ID: 05 | Hash: 0x3C9E76BA
	 // ID: 06 | Hash: 0xA805FEB0
	 // ID: 07 | Hash: 0x4B94EA26
	 // ID: 08 | Hash: 0x803ACD34
	 // ID: 09 | Hash: 0x7C741226
	 // ID: 10 | Hash: 0x31DB9EBD
	 // ID: 11 | Hash: 0xDF386F18
	 // ID: 12 | Hash: 0x669CED42
	 // ID: 13 | Hash: 0x51F22743
	 // ID: 14 | Hash: 0x2052B35C
	 // ID: 15 | Hash: 0x071472DC
	 // ID: 16 | Hash: 0xF9928BCC
	 // ID: 17 | Hash: 0x7ADBDD48
	 // ID: 18 | Hash: 0xA959BA1A
	 // ID: 19 | Hash: 0xBBE89B60
	 // ID: 20 | Hash: 0x87A08871
	 // ID: 21 | Hash: 0xED1057CE
	 // ID: 22 | Hash: 0x1584AD7A
	 // ID: 23 | Hash: 0x8582CFCB
	 // ID: 24 | Hash: 0x7E5E2FB0
	 // ID: 25 | Hash: 0xAE4F72DB
	 // ID: 26 | Hash: 0x5D16D1FA
	 // ID: 27 | Hash: 0x06B2F4B8
	 // ID: 28 | Hash: 0x5D4CDC96
	 // ID: 29 | Hash: 0x8B5A48BA
	 // ID: 30 | Hash: 0x98FBD539
	 // ID: 31 | Hash: 0xD8CB0473
	 // ID: 32 | Hash: 0x5CBB4874
	 // ID: 33 | Hash: 0x2E9F93A9
	 // ID: 34 | Hash: 0xD93BEA86
	 // ID: 35 | Hash: 0x92109B7D
	 // ID: 36 | Hash: 0xB7EC9E4D
	 // ID: 37 | Hash: 0xCABDBB1D
	 // ID: 38 | Hash: 0xB3FD4A52
	 // ID: 39 | Hash: 0x370D94E5
	 // ID: 40 | Hash: 0xA0F7938F
	 // ID: 41 | Hash: 0xCBE1CE81
	 // ID: 42 | Hash: 0xC27F1271
	 // ID: 43 | Hash: 0x9E3258EB
	 // ID: 44 | Hash: 0x551CDA5B
	 // ID: 45 | Hash: 0xCB6D663C
	 // ID: 46 | Hash: 0x7DACE87F
	 // ID: 47 | Hash: 0xF9DE416F
	 // ID: 48 | Hash: 0x882E6E9E
	 // ID: 49 | Hash: 0x16B447E7
	 // ID: 50 | Hash: 0xBD867739
	 // ID: 51 | Hash: 0xA3A58604
	 // ID: 52 | Hash: 0x7E046BBC
	 // ID: 53 | Hash: 0xD95FDB98
	 // ID: 54 | Hash: 0x5842C0ED
	 // ID: 55 | Hash: 0x285FECC6
	 // ID: 56 | Hash: 0x9351AC43
	 // ID: 57 | Hash: 0x50032E75
	 // ID: 58 | Hash: 0xAE6D0D59
	 // ID: 59 | Hash: 0xD6351785
	 // ID: 60 | Hash: 0xD25D71BC
	 // ID: 61 | Hash: 0x1F7F6423
	 // ID: 62 | Hash: 0xE24C3AA6
	 // ID: 63 | Hash: 0xBFFDD2B7
	static void SET_AUDIO_FLAG(const char* flagName, BOOL toggle) { return invoke<void>(0xB9EFD5C25018725A, flagName, toggle); } // 0xB9EFD5C25018725A 0x1C09C9E0 b323
	static BOOL PREPARE_SYNCHRONIZED_AUDIO_EVENT_FOR_SCENE(Any p0, Any* p1) { return invoke<BOOL>(0x029FE7CD1B7E2E75, p0, p1); } // 0x029FE7CD1B7E2E75 0x7652DD49 b323
	static BOOL PLAY_SYNCHRONIZED_AUDIO_EVENT(Any p0) { return invoke<BOOL>(0x8B2FD4560E55DD2D, p0); } // 0x8B2FD4560E55DD2D 0x507F3241 b323
	static BOOL STOP_SYNCHRONIZED_AUDIO_EVENT(Any p0) { return invoke<BOOL>(0x92D6A88E64A94430, p0); } // 0x92D6A88E64A94430 0xADEED2B4 b323
	 // Sets the position of the audio event to the entity's position for one frame(?)
	 // 
	 // if (l_8C3 == 0) {
	 //     sub_27fd1(0, -1, 1);
	 //     if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(l_87D)) {
	 //         AUDIO::STOP_SYNCHRONIZED_AUDIO_EVENT(l_87D);
	 //     }
	 //     if (sub_7dd(l_A00)) {
	 //         AUDIO::_950A154B8DAB6185("PAP2_IG1_POPPYSEX", l_A00);
	 //     }
	 //     sub_91c("TK************ SETTING SYNCH SCENE AUDIO POSITION THIS FRAME ************TK");
	 //     l_8C3 = 1;
	 // }
	 // 
	 // --
	 // 
	 // Found in the b617d scripts, duplicates removed: 
	 // 
	 // AUDIO::_950A154B8DAB6185("CAR_5_IG_6", l_7FE[1/*1*/]);
	 // AUDIO::_950A154B8DAB6185("EX03_TRAIN_BIKE_LAND",   PLAYER::PLAYER_PED_ID());
	 // AUDIO::_950A154B8DAB6185("FBI_2_MCS_1_LeadIn", l_40[2/*1*/]);
	 // AUDIO::_950A154B8DAB6185("FIN_C2_MCS_1", l_24C[0/*1*/]);
	 // AUDIO::_950A154B8DAB6185("MNT_DNC", l_5F);
	 // AUDIO::_950A154B8DAB6185("PAP2_IG1_POPPYSEX", l_A00);
	static void _SET_SYNCHRONIZED_AUDIO_EVENT_POSITION_THIS_FRAME(const char* p0, Entity p1) { return invoke<void>(0x950A154B8DAB6185, p0, p1); } // 0x950A154B8DAB6185 0xA17F9AB0 b323
	 // https://alloc8or.re/gta5/doc/enums/audSpecialEffectMode.txt
	static void SET_AUDIO_SPECIAL_EFFECT_MODE(int mode) { return invoke<void>(0x12561FCBB62D5B9C, mode); } // 0x12561FCBB62D5B9C 0x62B43677 b323
	 //  Found in the b617d scripts, duplicates removed: 
	 // 
	 //  AUDIO::_B4BBFD9CD8B3922B("V_CARSHOWROOM_PS_WINDOW_UNBROKEN");
	 //  AUDIO::_B4BBFD9CD8B3922B("V_CIA_PS_WINDOW_UNBROKEN");
	 //  AUDIO::_B4BBFD9CD8B3922B("V_DLC_HEIST_APARTMENT_DOOR_CLOSED");
	 //  AUDIO::_B4BBFD9CD8B3922B("V_FINALEBANK_PS_VAULT_INTACT");
	 //  AUDIO::_B4BBFD9CD8B3922B("V_MICHAEL_PS_BATHROOM_WITH_WINDOW");
	static void REMOVE_PORTAL_SETTINGS_OVERRIDE(const char* p0) { return invoke<void>(0xB4BBFD9CD8B3922B, p0); } // 0xB4BBFD9CD8B3922B 0xD24B4D0C b323
	static Any _0x3A48AB4445D499BE() { return invoke<Any>(0x3A48AB4445D499BE); } // 0x3A48AB4445D499BE 0x93A44A1F b323
	 // HAS_*
	static BOOL _HAS_MULTIPLAYER_AUDIO_DATA_UNLOADED() { return invoke<BOOL>(0x5B50ABB1FE3746F4); } // 0x5B50ABB1FE3746F4 b323
	static int _GET_VEHICLE_DEFAULT_HORN_VARIATION(Vehicle vehicle) { return invoke<int>(0xD53F3A29BCE2580E, vehicle); } // 0xD53F3A29BCE2580E b1365
}

namespace BRAIN
{
	 // BRAIN::ADD_SCRIPT_TO_RANDOM_PED("pb_prostitute", ${s_f_y_hooker_01}, 100, 0);
	 // 
	 // - Nacorpio
	 // 
	 // -----
	 // 
	 // Hardcoded to not work in Multiplayer.
	static void ADD_SCRIPT_TO_RANDOM_PED(const char* name, Hash model, float p2, float p3) { return invoke<void>(0x4EE5367468A65CCC, name, model, p2, p3); } // 0x4EE5367468A65CCC 0xECC76C3D b323
	 // Registers a script for any object with a specific model hash.
	 // 
	 // BRAIN::REGISTER_OBJECT_SCRIPT_BRAIN("ob_telescope", ${prop_telescope_01}, 100, 4.0, -1, 9);
	 // 
	 // - Nacorpio
	static void REGISTER_OBJECT_SCRIPT_BRAIN(const char* scriptName, Hash modelHash, int p2, float activationRange, int p4, int p5) { return invoke<void>(0x0BE84C318BA6EC22, scriptName, modelHash, p2, activationRange, p4, p5); } // 0x0BE84C318BA6EC22 0xB6BCC608 b323
	static BOOL IS_OBJECT_WITHIN_BRAIN_ACTIVATION_RANGE(Object object) { return invoke<BOOL>(0xCCBA154209823057, object); } // 0xCCBA154209823057 0xBA4CAA56 b323
	static void REGISTER_WORLD_POINT_SCRIPT_BRAIN(const char* scriptName, float activationRange, int p2) { return invoke<void>(0x3CDC7136613284BD, scriptName, activationRange, p2); } // 0x3CDC7136613284BD 0x725D91F7 b323
	 // Gets whether the world point the calling script is registered to is within desired range of the player.
	static BOOL IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE() { return invoke<BOOL>(0xC5042CC6F5E3D450); } // 0xC5042CC6F5E3D450 0x2CF305A0 b323
	static void DISABLE_SCRIPT_BRAIN_SET(int brainSet) { return invoke<void>(0x14D8518E9760F08F, brainSet); } // 0x14D8518E9760F08F 0xFBD13FAD b323
	static void _0x0B40ED49D7D6FF84() { return invoke<void>(0x0B40ED49D7D6FF84); } // 0x0B40ED49D7D6FF84 0x19B27825 b323
	 // Something like flush_all_scripts 
	 // 
	 // Most of time comes after NETWORK_END_TUTORIAL_SESSION() or before TERMINATE_THIS_THREAD()
	static void _0x4D953DF78EBF8158() { return invoke<void>(0x4D953DF78EBF8158); } // 0x4D953DF78EBF8158 0xF3A3AB08 b323
	 // Possible values:
	 // 
	 // act_cinema
	 // am_mp_carwash_launch
	 // am_mp_carwash_control
	 // am_mp_property_ext
	 // chop
	 // fairgroundHub
	 // launcher_BasejumpHeli
	 // launcher_BasejumpPack
	 // launcher_CarWash
	 // launcher_golf
	 // launcher_Hunting_Ambient
	 // launcher_MrsPhilips
	 // launcher_OffroadRacing
	 // launcher_pilotschool
	 // launcher_Racing
	 // launcher_rampage
	 // launcher_rampage
	 // launcher_range
	 // launcher_stunts
	 // launcher_stunts
	 // launcher_tennis
	 // launcher_Tonya
	 // launcher_Triathlon
	 // launcher_Yoga
	 // ob_mp_bed_low
	 // ob_mp_bed_med
	static void _0x6D6840CEE8845831(const char* action) { return invoke<void>(0x6D6840CEE8845831, action); } // 0x6D6840CEE8845831 0x949FE53E b323
}

namespace CAM
{
	 // ease - smooth transition between the camera's positions
	 // easeTime - Time in milliseconds for the transition to happen
	 // 
	 // If you have created a script (rendering) camera, and want to go back to the 
	 // character (gameplay) camera, call this native with render set to 0.
	 // Setting ease to 1 will smooth the transition.
	static void RENDER_SCRIPT_CAMS(BOOL render, BOOL ease, int easeTime, BOOL p3, BOOL p4, Any p5) { return invoke<void>(0x07E5B515DB0636FC, render, ease, easeTime, p3, p4, p5); } // 0x07E5B515DB0636FC 0x74337969 b323
	 // This native makes the gameplay camera zoom into first person/third person with a special effect.
	 // 
	 // For example, if you were first person in a mission and after the cutscene ends, the camera would then zoom into the first person camera view.
	 // 
	 // if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() != 4)
	 //            CAM::_C819F3CBB62BF692(1, 0, 3, 0)
	 // 
	 // This makes the camera zoom in to first person.
	 // 
	 // --------------------------------------------
	 // 1st Param Options: 0 or 1 (Changes quit often, toggle?)
	 // 2nd Param Options: 0, 0f, 1f, 3.8f, 10f, 20f (Mostly 0) 
	 // 3rd Param Options: 3, 2, 1 (Mostly 3);
	 // Note for the 2nd param 10f (offroad_race.c) and 3rd param 20f (range_modern.c) are the only times those 2 high floats are called.
	 // Note for the 3rd param 2 is only ever set in (franklin0.c), but it also sets it as 3. (0, 0, 3) ||(0, 0f, 2) || (0, 0, 3)
	static void _RENDER_FIRST_PERSON_CAM(BOOL render, float p1, int p2, Any p3) { return invoke<void>(0xC819F3CBB62BF692, render, p1, p2, p3); } // 0xC819F3CBB62BF692 0xD3C08183 b323
	 // "DEFAULT_SCRIPTED_CAMERA"
	 // "DEFAULT_ANIMATED_CAMERA"
	 // "DEFAULT_SPLINE_CAMERA"
	 // "DEFAULT_SCRIPTED_FLY_CAMERA"
	 // "TIMED_SPLINE_CAMERA"
	static Cam CREATE_CAM(const char* camName, BOOL p1) { return invoke<Cam>(0xC3981DCE61D9E13F, camName, p1); } // 0xC3981DCE61D9E13F 0xE9BF2A7D b323
	 // camName is always set to "DEFAULT_SCRIPTED_CAMERA" in Rockstar's scripts.
	 // ------------
	 // Camera names found in the b617d scripts:
	 // "DEFAULT_ANIMATED_CAMERA"
	 // "DEFAULT_SCRIPTED_CAMERA"
	 // "DEFAULT_SCRIPTED_FLY_CAMERA"
	 // "DEFAULT_SPLINE_CAMERA"
	 // ------------
	 // Side Note: It seems p8 is basically to represent what would be the bool p1 within CREATE_CAM native. As well as the p9 since it's always 2 in scripts seems to represent what would be the last param within SET_CAM_ROT native which normally would be 2.
	static Cam CREATE_CAM_WITH_PARAMS(const char* camName, float posX, float posY, float posZ, float rotX, float rotY, float rotZ, float fov, BOOL p8, int p9) { return invoke<Cam>(0xB51194800B257161, camName, posX, posY, posZ, rotX, rotY, rotZ, fov, p8, p9); } // 0xB51194800B257161 0x23B02F15 b323
	static Cam CREATE_CAMERA(Hash camHash, BOOL p1) { return invoke<Cam>(0x5E3CF89C6BCCA67D, camHash, p1); } // 0x5E3CF89C6BCCA67D 0x5D6739AE b323
	 // CAM::_GET_GAMEPLAY_CAM_COORDS can be used instead of posX,Y,Z
	 // CAM::_GET_GAMEPLAY_CAM_ROT can be used instead of rotX,Y,Z
	 // CAM::_80EC114669DAEFF4() can be used instead of p7 (Possible p7 is FOV parameter. )
	 // p8 ???
	 // p9 uses 2 by default
	 // 
	static Cam CREATE_CAMERA_WITH_PARAMS(Hash camHash, float posX, float posY, float posZ, float rotX, float rotY, float rotZ, float fov, BOOL p8, Any p9) { return invoke<Cam>(0x6ABFA3E16460F22D, camHash, posX, posY, posZ, rotX, rotY, rotZ, fov, p8, p9); } // 0x6ABFA3E16460F22D 0x0688BE9A b323
	 // BOOL param indicates whether the cam should be destroyed if it belongs to the calling script.
	static void DESTROY_CAM(Cam cam, BOOL netMissionEntity) { return invoke<void>(0x865908C81A2C22E9, cam, netMissionEntity); } // 0x865908C81A2C22E9 0xC39302BD b323
	 // BOOL param indicates whether the cam should be destroyed if it belongs to the calling script.
	static void DESTROY_ALL_CAMS(BOOL netMissionEntity) { return invoke<void>(0x8E5FB15663F79120, netMissionEntity); } // 0x8E5FB15663F79120 0x10C151CE b323
	 // Returns whether or not the passed camera handle exists.
	static BOOL DOES_CAM_EXIST(Cam cam) { return invoke<BOOL>(0xA7A932170592B50E, cam); } // 0xA7A932170592B50E 0x1EF89DC0 b323
	 // Set camera as active/inactive.
	static void SET_CAM_ACTIVE(Cam cam, BOOL active) { return invoke<void>(0x026FB97D0A425F84, cam, active); } // 0x026FB97D0A425F84 0x064659C2 b323
	 // Returns whether or not the passed camera handle is active.
	static BOOL IS_CAM_ACTIVE(Cam cam) { return invoke<BOOL>(0xDFB2B516207D3534, cam); } // 0xDFB2B516207D3534 0x4B58F177 b323
	static BOOL IS_CAM_RENDERING(Cam cam) { return invoke<BOOL>(0x02EC0AF5C5A49B7A, cam); } // 0x02EC0AF5C5A49B7A 0x6EC6B5B2 b323
	static Cam GET_RENDERING_CAM() { return invoke<Cam>(0x5234F9F10919EABA); } // 0x5234F9F10919EABA 0x0FCF4DF1 b323
	static Vector3 GET_CAM_COORD(Cam cam) { return invoke<Vector3>(0xBAC038F7459AE5AE, cam); } // 0xBAC038F7459AE5AE 0x7C40F09C b323
	 // The last parameter, as in other "ROT" methods, is usually 2.
	static Vector3 GET_CAM_ROT(Cam cam, int rotationOrder) { return invoke<Vector3>(0x7D304C1C955E3E12, cam, rotationOrder); } // 0x7D304C1C955E3E12 0xDAC84C9F b323
	static float GET_CAM_FOV(Cam cam) { return invoke<float>(0xC3330A45CCCDB26A, cam); } // 0xC3330A45CCCDB26A 0xD6E9FCF5 b323
	static float GET_CAM_NEAR_CLIP(Cam cam) { return invoke<float>(0xC520A34DAFBF24B1, cam); } // 0xC520A34DAFBF24B1 0xCFCD35EE b323
	static float GET_CAM_FAR_CLIP(Cam cam) { return invoke<float>(0xB60A9CFEB21CA6AA, cam); } // 0xB60A9CFEB21CA6AA 0x09F119B8 b323
	static void SET_CAM_PARAMS(Cam cam, float posX, float posY, float posZ, float rotX, float rotY, float rotZ, float fieldOfView, Any p8, int p9, int p10, int p11) { return invoke<void>(0xBFD8727AEA3CCEBA, cam, posX, posY, posZ, rotX, rotY, rotZ, fieldOfView, p8, p9, p10, p11); } // 0xBFD8727AEA3CCEBA 0x2167CEBF b323
	 // Sets the position of the cam.
	static void SET_CAM_COORD(Cam cam, float posX, float posY, float posZ) { return invoke<void>(0x4D41783FB745E42E, cam, posX, posY, posZ); } // 0x4D41783FB745E42E 0x7A8053AF b323
	 // Sets the rotation of the cam.
	 // Last parameter unknown.
	 // 
	 // Last parameter seems to always be set to 2.
	static void SET_CAM_ROT(Cam cam, float rotX, float rotY, float rotZ, int rotationOrder) { return invoke<void>(0x85973643155D0B07, cam, rotX, rotY, rotZ, rotationOrder); } // 0x85973643155D0B07 0xEE38B3C1 b323
	 // Sets the field of view of the cam.
	 // ---------------------------------------------
	 // Min: 1.0f
	 // Max: 130.0f
	static void SET_CAM_FOV(Cam cam, float fieldOfView) { return invoke<void>(0xB13C14F66A00D047, cam, fieldOfView); } // 0xB13C14F66A00D047 0xD3D5D74F b323
	static void SET_CAM_NEAR_CLIP(Cam cam, float nearClip) { return invoke<void>(0xC7848EFCCC545182, cam, nearClip); } // 0xC7848EFCCC545182 0x46DB13B1 b323
	static void SET_CAM_FAR_CLIP(Cam cam, float farClip) { return invoke<void>(0xAE306F2A904BF86E, cam, farClip); } // 0xAE306F2A904BF86E 0x0D23E381 b323
	static void SET_CAM_MOTION_BLUR_STRENGTH(Cam cam, float strength) { return invoke<void>(0x6F0F77FBA9A8F2E6, cam, strength); } // 0x6F0F77FBA9A8F2E6 0xFD6E0D67 b323
	static void SET_CAM_NEAR_DOF(Cam cam, float nearDOF) { return invoke<void>(0x3FA4BF0A7AB7DE2C, cam, nearDOF); } // 0x3FA4BF0A7AB7DE2C 0xF28254DF b323
	static void SET_CAM_FAR_DOF(Cam cam, float farDOF) { return invoke<void>(0xEDD91296CD01AEE0, cam, farDOF); } // 0xEDD91296CD01AEE0 0x58515E8E b323
	static void SET_CAM_DOF_STRENGTH(Cam cam, float dofStrength) { return invoke<void>(0x5EE29B4D7D5DF897, cam, dofStrength); } // 0x5EE29B4D7D5DF897 0x3CC4EB3F b323
	static void SET_CAM_DOF_PLANES(Cam cam, float p1, float p2, float p3, float p4) { return invoke<void>(0x3CF48F6F96E749DC, cam, p1, p2, p3, p4); } // 0x3CF48F6F96E749DC 0xAD6C2B8F b323
	static void SET_USE_HI_DOF() { return invoke<void>(0xA13B0222F3D94A94); } // 0xA13B0222F3D94A94 0x8BBF2950 b323
	 // Last param determines if its relative to the Entity
	static void ATTACH_CAM_TO_ENTITY(Cam cam, Entity entity, float xOffset, float yOffset, float zOffset, BOOL isRelative) { return invoke<void>(0xFEDB7D269E8C60E3, cam, entity, xOffset, yOffset, zOffset, isRelative); } // 0xFEDB7D269E8C60E3 0xAD7C45F6 b323
	static void ATTACH_CAM_TO_PED_BONE(Cam cam, Ped ped, int boneIndex, float x, float y, float z, BOOL heading) { return invoke<void>(0x61A3DBA14AB7F411, cam, ped, boneIndex, x, y, z, heading); } // 0x61A3DBA14AB7F411 0x506BB35C b323
	static void _ATTACH_CAM_TO_PED_BONE_2(Cam cam, Ped ped, int boneIndex, float p3, float p4, float p5, float p6, float p7, float p8, BOOL p9) { return invoke<void>(0x149916F50C34A40D, cam, ped, boneIndex, p3, p4, p5, p6, p7, p8, p9); } // 0x149916F50C34A40D b1180
	static void _ATTACH_CAM_TO_VEHICLE_BONE(Cam cam, Vehicle vehicle, int boneIndex, BOOL p3, float p4, float p5, float p6, float p7, float p8, float p9, BOOL p10) { return invoke<void>(0x8DB3F12A02CAEF72, cam, vehicle, boneIndex, p3, p4, p5, p6, p7, p8, p9, p10); } // 0x8DB3F12A02CAEF72 b1290
	static void DETACH_CAM(Cam cam) { return invoke<void>(0xA2FABBE87F4BAD82, cam); } // 0xA2FABBE87F4BAD82 0xF4FBF14A b323
	static void POINT_CAM_AT_COORD(Cam cam, float x, float y, float z) { return invoke<void>(0xF75497BB865F0803, cam, x, y, z); } // 0xF75497BB865F0803 0x914BC21A b323
	 // p5 always seems to be 1 i.e TRUE
	static void POINT_CAM_AT_ENTITY(Cam cam, Entity entity, float p2, float p3, float p4, BOOL p5) { return invoke<void>(0x5640BFF86B16E8DC, cam, entity, p2, p3, p4, p5); } // 0x5640BFF86B16E8DC 0x7597A0F7 b323
	 // Parameters p0-p5 seems correct. The bool p6 is unknown, but through every X360 script it's always 1. Please correct p0-p5 if any prove to be wrong. 
	static void POINT_CAM_AT_PED_BONE(Cam cam, Ped ped, int boneIndex, float x, float y, float z, BOOL p6) { return invoke<void>(0x68B2B5F33BA63C41, cam, ped, boneIndex, x, y, z, p6); } // 0x68B2B5F33BA63C41 0x09F47049 b323
	static void STOP_CAM_POINTING(Cam cam) { return invoke<void>(0xF33AB75780BA57DE, cam); } // 0xF33AB75780BA57DE 0x5435F6A5 b323
	 // SET_CAM_*
	static void _0x661B5C8654ADD825(Cam cam, BOOL p1) { return invoke<void>(0x661B5C8654ADD825, cam, p1); } // 0x661B5C8654ADD825 0xE1A0B2F1 b323
	static void _0xA2767257A320FC82(Any p0, BOOL p1) { return invoke<void>(0xA2767257A320FC82, p0, p1); } // 0xA2767257A320FC82 b323
	 // I filled p1-p6 (the floats) as they are as other natives with 6 floats in a row are similar and I see no other method. So if a test from anyone proves them wrong please correct.
	 // 
	 // p7 (length) determines the length of the spline, affects camera path and duration of transition between previous node and this one
	 // 
	 // p8 big values ~100 will slow down the camera movement before reaching this node
	 // 
	 // p9 != 0 seems to override the rotation/pitch (bool?)
	static void ADD_CAM_SPLINE_NODE(Cam camera, float x, float y, float z, float xRot, float yRot, float zRot, int length, int p8, int p9) { return invoke<void>(0x8609C75EC438FB3B, camera, x, y, z, xRot, yRot, zRot, length, p8, p9); } // 0x8609C75EC438FB3B 0xAD3C7EAA b323
	static void ADD_CAM_SPLINE_NODE_USING_CAMERA(Cam cam, Cam cam2, int p2, int p3) { return invoke<void>(0x0FB82563989CF4FB, cam, cam2, p2, p3); } // 0x0FB82563989CF4FB 0xBA6C085B b323
	 // Can use this with SET_CAM_SPLINE_PHASE to set the float it this native returns.
	 // 
	 // (returns 1.0f when no nodes has been added, reached end of non existing spline)
	static float GET_CAM_SPLINE_PHASE(Cam cam) { return invoke<float>(0xB5349E36C546509A, cam); } // 0xB5349E36C546509A 0x39784DD9 b323
	static void SET_CAM_SPLINE_SMOOTHING_STYLE(Cam cam, int smoothingStyle) { return invoke<void>(0xD1B0F412F109EA5D, cam, smoothingStyle); } // 0xD1B0F412F109EA5D 0x15E141CE b323
	 // Previous declaration void SET_CAM_ACTIVE_WITH_INTERP(Cam camTo, Cam camFrom, int duration, BOOL easeLocation, BOOL easeRotation) is completely wrong. The last two params are integers not BOOLs...
	 // 
	static void SET_CAM_ACTIVE_WITH_INTERP(Cam camTo, Cam camFrom, int duration, int easeLocation, int easeRotation) { return invoke<void>(0x9FBDA379383A52A4, camTo, camFrom, duration, easeLocation, easeRotation); } // 0x9FBDA379383A52A4 0x7983E7F0 b323
	static BOOL IS_CAM_INTERPOLATING(Cam cam) { return invoke<BOOL>(0x036F97C908C2B52C, cam); } // 0x036F97C908C2B52C 0x7159CB5D b323
	 // Possible shake types (updated b617d):
	 // 
	 // DEATH_FAIL_IN_EFFECT_SHAKE
	 // DRUNK_SHAKE
	 // FAMILY5_DRUG_TRIP_SHAKE
	 // HAND_SHAKE
	 // JOLT_SHAKE
	 // LARGE_EXPLOSION_SHAKE
	 // MEDIUM_EXPLOSION_SHAKE
	 // SMALL_EXPLOSION_SHAKE
	 // ROAD_VIBRATION_SHAKE
	 // SKY_DIVING_SHAKE
	 // VIBRATE_SHAKE
	static void SHAKE_CAM(Cam cam, const char* type, float amplitude) { return invoke<void>(0x6A25241C340D3822, cam, type, amplitude); } // 0x6A25241C340D3822 0x1D4211B0 b323
	static BOOL IS_CAM_SHAKING(Cam cam) { return invoke<BOOL>(0x6B24BFE83A2BE47B, cam); } // 0x6B24BFE83A2BE47B 0x0961FD9B b323
	static void SET_CAM_SHAKE_AMPLITUDE(Cam cam, float amplitude) { return invoke<void>(0xD93DB43B82BC0D00, cam, amplitude); } // 0xD93DB43B82BC0D00 0x60FF6382 b323
	static void STOP_CAM_SHAKING(Cam cam, BOOL p1) { return invoke<void>(0xBDECF64367884AC3, cam, p1); } // 0xBDECF64367884AC3 0x40D0EB87 b323
	 // CAM::SHAKE_SCRIPT_GLOBAL("HAND_SHAKE", 0.2);
	static void SHAKE_SCRIPT_GLOBAL(const char* p0, float p1) { return invoke<void>(0xF4C8CF9E353AFECA, p0, p1); } // 0xF4C8CF9E353AFECA 0x2B0F05CD b323
	 // In drunk_controller.c4, sub_309
	 // if (CAM::IS_SCRIPT_GLOBAL_SHAKING()) {
	 //     CAM::STOP_SCRIPT_GLOBAL_SHAKING(0);
	 // }
	static BOOL IS_SCRIPT_GLOBAL_SHAKING() { return invoke<BOOL>(0xC912AF078AF19212); } // 0xC912AF078AF19212 0x6AEFE6A5 b323
	 // In drunk_controller.c4, sub_309
	 // if (CAM::IS_SCRIPT_GLOBAL_SHAKING()) {
	 //     CAM::STOP_SCRIPT_GLOBAL_SHAKING(0);
	 // }
	static void STOP_SCRIPT_GLOBAL_SHAKING(BOOL p0) { return invoke<void>(0x1C9D7949FA533490, p0); } // 0x1C9D7949FA533490 0x26FCFB96 b323
	 // Examples:
	 // 
	 // CAM::PLAY_SYNCHRONIZED_CAM_ANIM(l_2734, NETWORK::_02C40BF885C567B6(l_2739), "PLAYER_EXIT_L_CAM", "mp_doorbell");
	 // 
	 // CAM::PLAY_SYNCHRONIZED_CAM_ANIM(l_F0D[7/*1*/], l_F4D[15/*1*/], "ah3b_attackheli_cam2", "missheistfbi3b_helicrash");
	static BOOL PLAY_SYNCHRONIZED_CAM_ANIM(Any p0, Any p1, const char* animName, const char* animDictionary) { return invoke<BOOL>(0xE32EFE9AB4A9AA0C, p0, p1, animName, animDictionary); } // 0xE32EFE9AB4A9AA0C 0x9458459E b323
	static BOOL IS_SCREEN_FADED_OUT() { return invoke<BOOL>(0xB16FCE9DDC7BA182); } // 0xB16FCE9DDC7BA182 0x9CAA05FA b323
	static BOOL IS_SCREEN_FADED_IN() { return invoke<BOOL>(0x5A859503B0C08678); } // 0x5A859503B0C08678 0x4F37276D b323
	static BOOL IS_SCREEN_FADING_OUT() { return invoke<BOOL>(0x797AC7CB535BA28F); } // 0x797AC7CB535BA28F 0x79275A57 b323
	static BOOL IS_SCREEN_FADING_IN() { return invoke<BOOL>(0x5C544BC6C57AC575); } // 0x5C544BC6C57AC575 0xC7C82800 b323
	 // Fades the screen in.
	 // 
	 // duration: The time the fade should take, in milliseconds.
	static void DO_SCREEN_FADE_IN(int duration) { return invoke<void>(0xD4E8E24955024033, duration); } // 0xD4E8E24955024033 0x66C1BDEE b323
	 // Fades the screen out.
	 // 
	 // duration: The time the fade should take, in milliseconds.
	static void DO_SCREEN_FADE_OUT(int duration) { return invoke<void>(0x891B5B39AC6302AF, duration); } // 0x891B5B39AC6302AF 0x89D01805 b323
	static void SET_WIDESCREEN_BORDERS(BOOL p0, int p1) { return invoke<void>(0xDCD4EA924F42D01A, p0, p1); } // 0xDCD4EA924F42D01A 0x1A75DC9A b323
	static Vector3 GET_GAMEPLAY_CAM_COORD() { return invoke<Vector3>(0x14D6F5678D8F1B37); } // 0x14D6F5678D8F1B37 0x9388CF79 b323
	 // p0 dosen't seem to change much, I tried it with 0, 1, 2:
	 // 0-Pitch(X): -70.000092
	 // 0-Roll(Y): -0.000001
	 // 0-Yaw(Z): -43.886459
	 // 1-Pitch(X): -70.000092
	 // 1-Roll(Y): -0.000001
	 // 1-Yaw(Z): -43.886463
	 // 2-Pitch(X): -70.000092
	 // 2-Roll(Y): -0.000002
	 // 2-Yaw(Z): -43.886467
	static Vector3 GET_GAMEPLAY_CAM_ROT(int rotationOrder) { return invoke<Vector3>(0x837765A25378F0BB, rotationOrder); } // 0x837765A25378F0BB 0x13A010B5 b323
	static float GET_GAMEPLAY_CAM_FOV() { return invoke<float>(0x65019750A0324133); } // 0x65019750A0324133 0x4D6B3BFA b323
	 // some camera effect that is used in the drunk-cheat, and turned off (by setting it to 0.0) along with the shaking effects once the drunk cheat is disabled.
	static void _0x487A82C650EB7799(float p0) { return invoke<void>(0x487A82C650EB7799, p0); } // 0x487A82C650EB7799 0xA6E73135 b323
	 // some camera effect that is (also) used in the drunk-cheat, and turned off (by setting it to 0.0) along with the shaking effects once the drunk cheat is disabled. Possibly a cinematic or script-cam version of _0x487A82C650EB7799
	static void _0x0225778816FDC28C(float p0) { return invoke<void>(0x0225778816FDC28C, p0); } // 0x0225778816FDC28C 0x1126E37C b323
	static float GET_GAMEPLAY_CAM_RELATIVE_HEADING() { return invoke<float>(0x743607648ADD4587); } // 0x743607648ADD4587 0xCAF839C2 b323
	 // Sets the camera position relative to heading in float from -360 to +360.
	 // 
	 // Heading is alwyas 0 in aiming camera.
	static void SET_GAMEPLAY_CAM_RELATIVE_HEADING(float heading) { return invoke<void>(0xB4EC2312F4E5B1F1, heading); } // 0xB4EC2312F4E5B1F1 0x20C6217C b323
	 // Sets the camera pitch.
	 // 
	 // Parameters:
	 // x = pitches the camera on the x axis.
	 // Value2 = always seems to be hex 0x3F800000 (1.000000 float).
	static void SET_GAMEPLAY_CAM_RELATIVE_PITCH(float x, float Value2) { return invoke<void>(0x6D0858B8EDFD2B7D, x, Value2); } // 0x6D0858B8EDFD2B7D 0x6381B963 b323
	 // Does nothing
	static void _SET_GAMEPLAY_CAM_RAW_YAW(float yaw, Any p1) { return invoke<void>(0x103991D4A307D472, yaw, p1); } // 0x103991D4A307D472 b323
	static void _SET_GAMEPLAY_CAM_RAW_PITCH(float pitch) { return invoke<void>(0x759E13EBC1C15C5A, pitch); } // 0x759E13EBC1C15C5A b323
	static void _0x469F2ECDEC046337(BOOL p0) { return invoke<void>(0x469F2ECDEC046337, p0); } // 0x469F2ECDEC046337 b323
	 // Possible shake types (updated b617d):
	 // 
	 // DEATH_FAIL_IN_EFFECT_SHAKE
	 // DRUNK_SHAKE
	 // FAMILY5_DRUG_TRIP_SHAKE
	 // HAND_SHAKE
	 // JOLT_SHAKE
	 // LARGE_EXPLOSION_SHAKE
	 // MEDIUM_EXPLOSION_SHAKE
	 // SMALL_EXPLOSION_SHAKE
	 // ROAD_VIBRATION_SHAKE
	 // SKY_DIVING_SHAKE
	 // VIBRATE_SHAKE
	static void SHAKE_GAMEPLAY_CAM(const char* shakeName, float intensity) { return invoke<void>(0xFD55E49555E017CF, shakeName, intensity); } // 0xFD55E49555E017CF 0xF2EFE660 b323
	static BOOL IS_GAMEPLAY_CAM_SHAKING() { return invoke<BOOL>(0x016C090630DF1F89); } // 0x016C090630DF1F89 0x3457D681 b323
	 // Sets the amplitude for the gameplay (i.e. 3rd or 1st) camera to shake. Used in script "drunk_controller.ysc.c4" to simulate making the player drunk.
	static void SET_GAMEPLAY_CAM_SHAKE_AMPLITUDE(float amplitude) { return invoke<void>(0xA87E00932DB4D85D, amplitude); } // 0xA87E00932DB4D85D 0x9219D44A b323
	static void STOP_GAMEPLAY_CAM_SHAKING(BOOL p0) { return invoke<void>(0x0EF93E9F3D08C178, p0); } // 0x0EF93E9F3D08C178 0xFD569E4E b323
	 // Examples when this function will return 0 are:
	 // - During busted screen.
	 // - When player is coming out from a hospital.
	 // - When player is coming out from a police station.
	 // - When player is buying gun from AmmuNation.
	static BOOL IS_GAMEPLAY_CAM_RENDERING() { return invoke<BOOL>(0x39B5D1B10383F0C8); } // 0x39B5D1B10383F0C8 0x0EF276DA b323
	static BOOL _0x3044240D2E0FA842() { return invoke<BOOL>(0x3044240D2E0FA842); } // 0x3044240D2E0FA842 0xC0B00C20 b323
	static BOOL _0x705A276EBFF3133D() { return invoke<BOOL>(0x705A276EBFF3133D); } // 0x705A276EBFF3133D 0x60C23785 b323
	static BOOL IS_GAMEPLAY_CAM_LOOKING_BEHIND() { return invoke<BOOL>(0x70FDA869F3317EA9); } // 0x70FDA869F3317EA9 0x33C83F17 b323
	static void _0x2AED6301F67007D5(Entity entity) { return invoke<void>(0x2AED6301F67007D5, entity); } // 0x2AED6301F67007D5 0x2701A9AD b323
	static void _0xFD3151CD37EA2245(Entity entity) { return invoke<void>(0xFD3151CD37EA2245, entity); } // 0xFD3151CD37EA2245 b323
	static void _0xDD79DF9F4D26E1C9() { return invoke<void>(0xDD79DF9F4D26E1C9); } // 0xDD79DF9F4D26E1C9 0x6B0E9D57 b323
	static BOOL IS_SPHERE_VISIBLE(float x, float y, float z, float radius) { return invoke<BOOL>(0xE33D59DA70B58FDF, x, y, z, radius); } // 0xE33D59DA70B58FDF 0xDD1329E2 b323
	static void _0x271401846BD26E92(BOOL p0, BOOL p1) { return invoke<void>(0x271401846BD26E92, p0, p1); } // 0x271401846BD26E92 0x8DC53629 b323
	 // minimum: Degrees between -90f and 90f.
	 // maximum: Degrees between -90f and 90f.
	 // 
	 // Clamps the gameplay camera's current pitch.
	 // 
	 // Eg. _CLAMP_GAMEPLAY_CAM_PITCH(0.0f, 0.0f) will set the vertical angle directly behind the player.
	static void _CLAMP_GAMEPLAY_CAM_PITCH(float minimum, float maximum) { return invoke<void>(0xA516C198B7DCA1E1, minimum, maximum); } // 0xA516C198B7DCA1E1 0xFA3A16E7 b323
	static void _0xE9EA16D6E54CDCA4(Vehicle p0, int p1) { return invoke<void>(0xE9EA16D6E54CDCA4, p0, p1); } // 0xE9EA16D6E54CDCA4 0x4B22C5CB b323
	 // Disables first person camera for the current frame.
	 // 
	 // Found in decompiled scripts:
	 // GRAPHICS::DRAW_DEBUG_TEXT_2D("Disabling First Person Cam", 0.5, 0.8, 0.0, 0, 0, 255, 255);
	 // CAM::_DE2EF5DA284CC8DF();
	static void _DISABLE_FIRST_PERSON_CAM_THIS_FRAME() { return invoke<void>(0xDE2EF5DA284CC8DF); } // 0xDE2EF5DA284CC8DF b323
	static void _0x59424BD75174C9B1() { return invoke<void>(0x59424BD75174C9B1); } // 0x59424BD75174C9B1 b323
	 // B*
	static void _0x9F97DA93681F87EA() { return invoke<void>(0x9F97DA93681F87EA); } // 0x9F97DA93681F87EA b1734
	 // Returns
	 // 0 - Third Person Close
	 // 1 - Third Person Mid
	 // 2 - Third Person Far
	 // 4 - First Person
	static int GET_FOLLOW_PED_CAM_VIEW_MODE() { return invoke<int>(0x8D4D46230B2C353A); } // 0x8D4D46230B2C353A 0xA65FF946 b323
	 // Sets the type of Player camera:
	 // 
	 // 0 - Third Person Close
	 // 1 - Third Person Mid
	 // 2 - Third Person Far
	 // 4 - First Person
	static void SET_FOLLOW_PED_CAM_VIEW_MODE(int viewMode) { return invoke<void>(0x5A4F9EDF1673F704, viewMode); } // 0x5A4F9EDF1673F704 0x495DBE8D b323
	static BOOL IS_FOLLOW_VEHICLE_CAM_ACTIVE() { return invoke<BOOL>(0xCBBDE6D335D6D496); } // 0xCBBDE6D335D6D496 0x8DD49B77 b323
	static BOOL _0x79C0E43EB9B944E2(Hash hash) { return invoke<BOOL>(0x79C0E43EB9B944E2, hash); } // 0x79C0E43EB9B944E2 b1734
	static int GET_FOLLOW_VEHICLE_CAM_ZOOM_LEVEL() { return invoke<int>(0xEE82280AB767B690); } // 0xEE82280AB767B690 0x8CD67DE3 b323
	static void SET_FOLLOW_VEHICLE_CAM_ZOOM_LEVEL(int zoomLevel) { return invoke<void>(0x19464CB6E4078C8A, zoomLevel); } // 0x19464CB6E4078C8A 0x8F55EBBE b323
	 // Returns the type of camera:
	 // 
	 // 0 - Third Person Close
	 // 1 - Third Person Mid
	 // 2 - Third Person Far
	 // 4 - First Person
	static int GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() { return invoke<int>(0xA4FF579AC0E3AAAE); } // 0xA4FF579AC0E3AAAE 0xA4B4DB03 b323
	 // Sets the type of Player camera in vehicles:
	 // 
	 // 0 - Third Person Close
	 // 1 - Third Person Mid
	 // 2 - Third Person Far
	 // 4 - First Person
	static void SET_FOLLOW_VEHICLE_CAM_VIEW_MODE(int viewMode) { return invoke<void>(0xAC253D7842768F48, viewMode); } // 0xAC253D7842768F48 0xC4FBBBD3 b323
	 // interprets the result of CAM::_0x19CAFA3C87F7C2FF()
	 // 
	 // example: // checks if you're currently in first person
	 // if ((CAM::_EE778F8C7E1142E2(CAM::_19CAFA3C87F7C2FF()) == 4) && (!__463_$28ED382849B17AFC())) {
	 // UI::_FDEC055AB549E328();
	 // UI::_SET_NOTIFICATION_TEXT_ENTRY("REC_FEED_WAR");
	 // l_CE[0/*1*/] = UI::_DRAW_NOTIFICATION(0, 1);
	 // }
	 // 
	static Any _0xEE778F8C7E1142E2(Any p0) { return invoke<Any>(0xEE778F8C7E1142E2, p0); } // 0xEE778F8C7E1142E2 0xF3B148A6 b323
	static void _0x2A2173E46DAECD12(Any p0, Any p1) { return invoke<void>(0x2A2173E46DAECD12, p0, p1); } // 0x2A2173E46DAECD12 0x1DEBCB45 b323
	 // Seems to return the current type of view
	 // example: // checks if you're currently in first person
	 // if ((CAM::_EE778F8C7E1142E2(CAM::_19CAFA3C87F7C2FF()) == 4) && (!__463_$28ED382849B17AFC())) {
	 //     UI::_FDEC055AB549E328();
	 //     UI::_SET_NOTIFICATION_TEXT_ENTRY("REC_FEED_WAR");
	 //     l_CE[0/*1*/] = UI::_DRAW_NOTIFICATION(0, 1);
	 // }
	static Any _0x19CAFA3C87F7C2FF() { return invoke<Any>(0x19CAFA3C87F7C2FF); } // 0x19CAFA3C87F7C2FF b323
	static BOOL IS_AIM_CAM_ACTIVE() { return invoke<BOOL>(0x68EDDA28A5976D07); } // 0x68EDDA28A5976D07 0xC24B4F6F b323
	static BOOL IS_FIRST_PERSON_AIM_CAM_ACTIVE() { return invoke<BOOL>(0x5E346D934122613F); } // 0x5E346D934122613F 0xD6280468 b323
	static void SET_FIRST_PERSON_AIM_CAM_ZOOM_FACTOR(float p0) { return invoke<void>(0x70894BD0915C5BCA, p0); } // 0x70894BD0915C5BCA 0x9F4AF763 b323
	static Vector3 GET_FINAL_RENDERED_CAM_COORD() { return invoke<Vector3>(0xA200EB1EE790F448); } // 0xA200EB1EE790F448 0x9C84BDA0 b323
	 // p0 seems to consistently be 2 across scripts
	 // 
	 // Function is called faily often by CAM::CREATE_CAM_WITH_PARAMS
	static Vector3 GET_FINAL_RENDERED_CAM_ROT(int rotationOrder) { return invoke<Vector3>(0x5B4E4C817FCC2DFB, rotationOrder); } // 0x5B4E4C817FCC2DFB 0x1FFBEFC5 b323
	static Vector3 GET_FINAL_RENDERED_IN_WHEN_FRIENDLY_ROT(Any p0, Any p1) { return invoke<Vector3>(0x26903D9CD1175F2C, p0, p1); } // 0x26903D9CD1175F2C 0xACADF916 b323
	 // gets some camera fov
	static float GET_FINAL_RENDERED_CAM_FOV() { return invoke<float>(0x80EC114669DAEFF4); } // 0x80EC114669DAEFF4 0x721B763B b323
	static float GET_FINAL_RENDERED_IN_WHEN_FRIENDLY_FOV(Any p0) { return invoke<float>(0x5F35F6732C3FBBA0, p0); } // 0x5F35F6732C3FBBA0 0x23E3F106 b323
	static void SET_GAMEPLAY_COORD_HINT(float x, float y, float z, int duration, int blendOutDuration, int blendInDuration, int unk) { return invoke<void>(0xD51ADCD2D8BC0FB3, x, y, z, duration, blendOutDuration, blendInDuration, unk); } // 0xD51ADCD2D8BC0FB3 0xF27483C9 b323
	static void SET_GAMEPLAY_VEHICLE_HINT(Any p0, float p1, float p2, float p3, BOOL p4, Any p5, Any p6, Any p7) { return invoke<void>(0xA2297E18F3E71C2E, p0, p1, p2, p3, p4, p5, p6, p7); } // 0xA2297E18F3E71C2E 0x2C9A11D8 b323
	 // p6 & p7 - possibly length or time
	static void SET_GAMEPLAY_ENTITY_HINT(Entity entity, float xOffset, float yOffset, float zOffset, BOOL p4, int p5, int p6, int p7, Any p8) { return invoke<void>(0x189E955A8313E298, entity, xOffset, yOffset, zOffset, p4, p5, p6, p7, p8); } // 0x189E955A8313E298 0x66C32306 b323
	static BOOL IS_GAMEPLAY_HINT_ACTIVE() { return invoke<BOOL>(0xE520FF1AD2785B40); } // 0xE520FF1AD2785B40 0xAD8DA205 b323
	static void STOP_GAMEPLAY_HINT(BOOL p0) { return invoke<void>(0xF46C581C61718916, p0); } // 0xF46C581C61718916 0x1BC28B7B b323
	 // This native does absolutely nothing, just a nullsub
	static void _0xCCD078C2665D2973(BOOL p0) { return invoke<void>(0xCCD078C2665D2973, p0); } // 0xCCD078C2665D2973 0xCAFEE798 b323
	static void _0x247ACBC4ABBC9D1C(BOOL p0) { return invoke<void>(0x247ACBC4ABBC9D1C, p0); } // 0x247ACBC4ABBC9D1C b323
	static Any _0xBF72910D0F26F025() { return invoke<Any>(0xBF72910D0F26F025); } // 0xBF72910D0F26F025 b323
	static void SET_GAMEPLAY_HINT_FOV(float FOV) { return invoke<void>(0x513403FB9C56211F, FOV); } // 0x513403FB9C56211F 0x96FD173B b323
	static void _SET_GAMEPLAY_HINT_ANIM_OFFSETZ(float p0) { return invoke<void>(0xF8BDBF3D573049A1, p0); } // 0xF8BDBF3D573049A1 0x72E8CD3A b323
	static void _SET_GAMEPLAY_HINT_ANGLE(float p0) { return invoke<void>(0xD1F8363DFAD03848, p0); } // 0xD1F8363DFAD03848 0x79472AE3 b323
	static void _SET_GAMEPLAY_HINT_ANIM_OFFSETX(float p0) { return invoke<void>(0x5D7B620DAE436138, p0); } // 0x5D7B620DAE436138 0xFC7464A0 b323
	static void _SET_GAMEPLAY_HINT_ANIM_OFFSETY(float p0) { return invoke<void>(0xC92717EF615B6704, p0); } // 0xC92717EF615B6704 0x3554AA0E b323
	 // SET_GAMEPLAY_*
	static void _SET_GAMEPLAY_HINT_ANIM_CLOSEUP(BOOL p0) { return invoke<void>(0xE3433EADAAF7EE40, p0); } // 0xE3433EADAAF7EE40 0x2F0CE859 b323
	static void SET_CINEMATIC_BUTTON_ACTIVE(BOOL p0) { return invoke<void>(0x51669F7D1FB53D9F, p0); } // 0x51669F7D1FB53D9F 0x3FBC5D00 b323
	static BOOL IS_CINEMATIC_CAM_RENDERING() { return invoke<BOOL>(0xB15162CB5826E9E8); } // 0xB15162CB5826E9E8 0x80471AD9 b323
	 // p0 argument found in the b617d scripts: "DRUNK_SHAKE" 
	static void SHAKE_CINEMATIC_CAM(const char* p0, float p1) { return invoke<void>(0xDCE214D9ED58F3CF, p0, p1); } // 0xDCE214D9ED58F3CF 0x61815F31 b323
	static BOOL IS_CINEMATIC_CAM_SHAKING() { return invoke<BOOL>(0xBBC08F6B4CB8FF0A); } // 0xBBC08F6B4CB8FF0A 0x8376D939 b323
	static void SET_CINEMATIC_CAM_SHAKE_AMPLITUDE(float p0) { return invoke<void>(0xC724C701C30B2FE7, p0); } // 0xC724C701C30B2FE7 0x67510C4B b323
	static void STOP_CINEMATIC_CAM_SHAKING(BOOL p0) { return invoke<void>(0x2238E588E588A6D7, p0); } // 0x2238E588E588A6D7 0x71C12904 b323
	static void _DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME() { return invoke<void>(0xADFF1B2A555F5FBA); } // 0xADFF1B2A555F5FBA 0x5AC6DAC9 b323
	static void _0x62ECFCFDEE7885D6() { return invoke<void>(0x62ECFCFDEE7885D6); } // 0x62ECFCFDEE7885D6 0x837F8581 b323
	static void _0x9E4CFFF989258472() { return invoke<void>(0x9E4CFFF989258472); } // 0x9E4CFFF989258472 0x65DDE8AF b323
	static void INVALIDATE_IDLE_CAM() { return invoke<void>(0xF4F2C0D4EE209E20); } // 0xF4F2C0D4EE209E20 0xD75CDD75 b323
	static BOOL _IS_IN_VEHICLE_CAM_DISABLED() { return invoke<BOOL>(0x4F32C0D5A90A9B40); } // 0x4F32C0D5A90A9B40 b323
	 // Toggles the vehicle cinematic cam; requires the player ped to be in a vehicle to work.
	static void SET_CINEMATIC_MODE_ACTIVE(BOOL toggle) { return invoke<void>(0xDCF0754AC3D6FD4E, toggle); } // 0xDCF0754AC3D6FD4E 0x2009E747 b323
	static Any _0x17FCA7199A530203() { return invoke<Any>(0x17FCA7199A530203); } // 0x17FCA7199A530203 b323
	 // Hardcoded to only work in multiplayer.
	static void _0x12DED8CA53D47EA5(float p0) { return invoke<void>(0x12DED8CA53D47EA5, p0); } // 0x12DED8CA53D47EA5 0x067BA6F5 b323
	static Ped GET_FOCUS_PED_ON_SCREEN(float p0, int p1, float p2, float p3, float p4, float p5, float p6, int p7, int p8) { return invoke<Ped>(0x89215EC747DF244A, p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 0x89215EC747DF244A 0xFD99BE2B b323
	static void _0x5A43C76F7FC7BA5F() { return invoke<void>(0x5A43C76F7FC7BA5F); } // 0x5A43C76F7FC7BA5F 0xE206C450 b323
	 // if p0 is 0, effect is cancelled
	 // 
	 // if p0 is 1, effect zooms in, gradually tilts cam clockwise apx 30 degrees, wobbles slowly. Motion blur is active until cancelled.
	 // 
	 // if p0 is 2, effect immediately tilts cam clockwise apx 30 degrees, begins to wobble slowly, then gradually tilts cam back to normal. The wobbling will continue until the effect is cancelled.
	static void _SET_CAM_EFFECT(int p0) { return invoke<void>(0x80C8B1846639BB19, p0); } // 0x80C8B1846639BB19 0xB06CCD38 b323
	static void _0x5C41E6BABC9E2112(Any p0) { return invoke<void>(0x5C41E6BABC9E2112, p0); } // 0x5C41E6BABC9E2112 b323
	static void _SET_GAMEPLAY_CAM_VEHICLE_CAMERA_NAME(Any p0) { return invoke<void>(0x11FA5D3479C7DD47, p0); } // 0x11FA5D3479C7DD47 b323
	static float _REPLAY_FREE_CAM_GET_MAX_RANGE() { return invoke<float>(0x8BFCEB5EA1B161B6); } // 0x8BFCEB5EA1B161B6 b323
}

namespace CLOCK
{
	 // SET_CLOCK_TIME(12, 34, 56);
	static void SET_CLOCK_TIME(int hour, int minute, int second) { return invoke<void>(0x47C3B5848C3E45D8, hour, minute, second); } // 0x47C3B5848C3E45D8 0x26F6AF14 b323
	static void PAUSE_CLOCK(BOOL toggle) { return invoke<void>(0x4055E40BD2DBEC1D, toggle); } // 0x4055E40BD2DBEC1D 0xB02D6124 b323
	static void ADVANCE_CLOCK_TIME_TO(int hour, int minute, int second) { return invoke<void>(0xC8CA9670B9D83B3B, hour, minute, second); } // 0xC8CA9670B9D83B3B 0x57B8DA7C b323
	static void ADD_TO_CLOCK_TIME(int hours, int minutes, int seconds) { return invoke<void>(0xD716F30D8C8980E2, hours, minutes, seconds); } // 0xD716F30D8C8980E2 0xCC40D20D b323
	 // Gets the current ingame hour, expressed without zeros. (09:34 will be represented as 9)
	static int GET_CLOCK_HOURS() { return invoke<int>(0x25223CA6B4D20B7F); } // 0x25223CA6B4D20B7F 0x7EF8316F b323
	 // Gets the current ingame clock minute.
	static int GET_CLOCK_MINUTES() { return invoke<int>(0x13D2B8ADD79640F2); } // 0x13D2B8ADD79640F2 0x94AAC486 b323
	 // Gets the current ingame clock second. Note that ingame clock seconds change really fast since a day in GTA is only 48 minutes in real life.
	static int GET_CLOCK_SECONDS() { return invoke<int>(0x494E97C2EF27C470); } // 0x494E97C2EF27C470 0x099C927E b323
	static void SET_CLOCK_DATE(int day, int month, int year) { return invoke<void>(0xB096419DF0D06CE7, day, month, year); } // 0xB096419DF0D06CE7 0x96891C94 b323
	 // Gets the current day of the week.
	 // 
	 // 0: Sunday
	 // 1: Monday
	 // 2: Tuesday
	 // 3: Wednesday
	 // 4: Thursday
	 // 5: Friday
	 // 6: Saturday
	static int GET_CLOCK_DAY_OF_WEEK() { return invoke<int>(0xD972E4BD7AEB235F); } // 0xD972E4BD7AEB235F 0x84E4A289 b323
	static int GET_CLOCK_DAY_OF_MONTH() { return invoke<int>(0x3D10BC92A4DB1D35); } // 0x3D10BC92A4DB1D35 0xC7A5ACB7 b323
	static int GET_CLOCK_MONTH() { return invoke<int>(0xBBC72712E80257A1); } // 0xBBC72712E80257A1 0x3C48A3D5 b323
	static int GET_CLOCK_YEAR() { return invoke<int>(0x961777E64BDAF717); } // 0x961777E64BDAF717 0xB8BECF15 b323
	static int GET_MILLISECONDS_PER_GAME_MINUTE() { return invoke<int>(0x2F8B4D1C595B11DB); } // 0x2F8B4D1C595B11DB 0x3B74095C b323
	 // Gets system time as year, month, day, hour, minute and second.
	 // 
	 // Example usage:
	 // 
	 //     int year;
	 //  int month;
	 //     int day;
	 //   int hour;
	 //  int minute;
	 //    int second;
	 // 
	 //  TIME::GET_POSIX_TIME(&year, &month, &day, &hour, &minute, &second);
	 // 
	static void GET_POSIX_TIME(int* year, int* month, int* day, int* hour, int* minute, int* second) { return invoke<void>(0xDA488F299A5B164E, year, month, day, hour, minute, second); } // 0xDA488F299A5B164E 0xE15A5281 b323
}

namespace CUTSCENE
{
	 // flags: Usually 8
	static void REQUEST_CUTSCENE(const char* cutsceneName, int flags) { return invoke<void>(0x7A86743F475D9E09, cutsceneName, flags); } // 0x7A86743F475D9E09 0xB5977853 b323
	 // flags: Usually 8
	 // 
	 // playbackFlags: Which scenes should be played.
	 // Example: 0x105 (bit 0, 2 and 8 set) will enable scene 1, 3 and 9.
	static void REQUEST_CUTSCENE_WITH_PLAYBACK_LIST(const char* cutsceneName, int playbackFlags, int flags) { return invoke<void>(0xC23DE0E91C30B58C, cutsceneName, playbackFlags, flags); } // 0xC23DE0E91C30B58C 0xD98F656A b323
	static void REMOVE_CUTSCENE() { return invoke<void>(0x440AF51A3462B86F); } // 0x440AF51A3462B86F 0x8052F533 b323
	static BOOL HAS_CUTSCENE_LOADED() { return invoke<BOOL>(0xC59F528E9AB9F339); } // 0xC59F528E9AB9F339 0xF9998582 b323
	static BOOL HAS_THIS_CUTSCENE_LOADED(const char* cutsceneName) { return invoke<BOOL>(0x228D3D94F8A11C3C, cutsceneName); } // 0x228D3D94F8A11C3C 0x3C5619F2 b323
	 // SET_SCRIPT_*
	 // 
	 // Sets the cutscene's owning thread ID.
	static void _0x8D9DF6ECA8768583(int threadId) { return invoke<void>(0x8D9DF6ECA8768583, threadId); } // 0x8D9DF6ECA8768583 0x25A2CABC b323
	static BOOL CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY() { return invoke<BOOL>(0xB56BBBCC2955D9CB); } // 0xB56BBBCC2955D9CB 0xDD8878E9 b323
	static void SET_CUTSCENE_ENTITY_STREAMING_FLAGS(const char* cutsceneEntName, int p1, int p2) { return invoke<void>(0x4C61C75BEE8184C2, cutsceneEntName, p1, p2); } // 0x4C61C75BEE8184C2 0x47DB08A9 b323
	 // flags: Usually 0.
	static void START_CUTSCENE(int flags) { return invoke<void>(0x186D5CB5E7B0FF7B, flags); } // 0x186D5CB5E7B0FF7B 0x210106F6 b323
	static void STOP_CUTSCENE(BOOL p0) { return invoke<void>(0xC7272775B4DC786E, p0); } // 0xC7272775B4DC786E 0x5EE84DC7 b323
	static void STOP_CUTSCENE_IMMEDIATELY() { return invoke<void>(0xD220BDD222AC4A1E); } // 0xD220BDD222AC4A1E 0xF528A2AD b323
	static int GET_CUTSCENE_TIME() { return invoke<int>(0xE625BEABBAFFDAB9); } // 0xE625BEABBAFFDAB9 0x53F5B5AB b323
	static BOOL WAS_CUTSCENE_SKIPPED() { return invoke<BOOL>(0x40C8656EDAEDD569); } // 0x40C8656EDAEDD569 0xC9B6949D b323
	static BOOL HAS_CUTSCENE_FINISHED() { return invoke<BOOL>(0x7C0A893088881D57); } // 0x7C0A893088881D57 0x5DED14B4 b323
	static BOOL IS_CUTSCENE_ACTIVE() { return invoke<BOOL>(0x991251AFC3981F84); } // 0x991251AFC3981F84 0xCCE2FE9D b323
	static BOOL IS_CUTSCENE_PLAYING() { return invoke<BOOL>(0xD3C2E180A40F031E); } // 0xD3C2E180A40F031E 0xA3A78392 b323
	static Entity GET_ENTITY_INDEX_OF_CUTSCENE_ENTITY(const char* cutsceneEntName, Hash modelHash) { return invoke<Entity>(0x0A2E9FDB9A8C62F6, cutsceneEntName, modelHash); } // 0x0A2E9FDB9A8C62F6 0x1D09ABC7 b323
	static int _0x583DF8E3D4AFBD98() { return invoke<int>(0x583DF8E3D4AFBD98); } // 0x583DF8E3D4AFBD98 0x5AE68AE6 b323
	static void REGISTER_ENTITY_FOR_CUTSCENE(Ped cutscenePed, const char* cutsceneEntName, int p2, Hash modelHash, int p4) { return invoke<void>(0xE40C1C56DF95C2E8, cutscenePed, cutsceneEntName, p2, modelHash, p4); } // 0xE40C1C56DF95C2E8 0x7CBC3EC7 b323
	static Entity GET_ENTITY_INDEX_OF_REGISTERED_ENTITY(const char* cutsceneEntName, Hash modelHash) { return invoke<Entity>(0xC0741A26499654CD, cutsceneEntName, modelHash); } // 0xC0741A26499654CD 0x46D18755 b323
	static BOOL CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY(const char* cutsceneEntName, Hash modelHash) { return invoke<BOOL>(0x4C6A6451C79E4662, cutsceneEntName, modelHash); } // 0x4C6A6451C79E4662 0x8FF5D3C4 b323
	static BOOL CAN_SET_EXIT_STATE_FOR_CAMERA(BOOL p0) { return invoke<BOOL>(0xB2CBCD0930DFB420, p0); } // 0xB2CBCD0930DFB420 0xEDAE6C02 b323
	 // Toggles a value (bool) for cutscenes.
	 // 
	 // SET_*
	static void _0xC61B86C9F61EB404(BOOL toggle) { return invoke<void>(0xC61B86C9F61EB404, toggle); } // 0xC61B86C9F61EB404 0x35721A08 b323
	static void SET_CUTSCENE_FADE_VALUES(BOOL p0, BOOL p1, BOOL p2, BOOL p3) { return invoke<void>(0x8093F23ABACCC7D4, p0, p1, p2, p3); } // 0x8093F23ABACCC7D4 0xD19EF0DD b323
	static void _0x20746F7B1032A3C7(BOOL p0, BOOL p1, BOOL p2, BOOL p3) { return invoke<void>(0x20746F7B1032A3C7, p0, p1, p2, p3); } // 0x20746F7B1032A3C7 b323
	static int _0xA0FE76168A189DDB() { return invoke<int>(0xA0FE76168A189DDB); } // 0xA0FE76168A189DDB b323
	static void _0xE36A98D8AB3D3C66(BOOL p0) { return invoke<void>(0xE36A98D8AB3D3C66, p0); } // 0xE36A98D8AB3D3C66 0x04377C10 b323
	static Any _0x5EDEF0CF8C1DAB3C() { return invoke<Any>(0x5EDEF0CF8C1DAB3C); } // 0x5EDEF0CF8C1DAB3C 0xDBD88708 b323
	static void SET_CUTSCENE_PED_COMPONENT_VARIATION(const char* cutsceneEntName, int p1, int p2, int p3, Hash modelHash) { return invoke<void>(0xBA01E7B6DEEFBBC9, cutsceneEntName, p1, p2, p3, modelHash); } // 0xBA01E7B6DEEFBBC9 0x6AF994A1 b323
	static void SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED(const char* cutsceneEntName, Ped ped, Hash modelHash) { return invoke<void>(0x2A56C06EBEF2B0D9, cutsceneEntName, ped, modelHash); } // 0x2A56C06EBEF2B0D9 0x1E7DA95E b323
	static BOOL DOES_CUTSCENE_ENTITY_EXIST(const char* cutsceneEntName, Hash modelHash) { return invoke<BOOL>(0x499EF20C5DB25C59, cutsceneEntName, modelHash); } // 0x499EF20C5DB25C59 0x58E67409 b323
	 // Thanks R*! ;)
	 // 
	 // if ((l_161 == 0) || (l_161 == 2)) {
	 //     sub_2ea27("Trying to set Jimmy prop variation");
	 //     CUTSCENE::_0546524ADE2E9723("Jimmy_Boston", 1, 0, 0, 0);
	 // }
	static void SET_CUTSCENE_PED_PROP_VARIATION(const char* cutsceneEntName, int p1, int p2, int p3, Hash modelHash) { return invoke<void>(0x0546524ADE2E9723, cutsceneEntName, p1, p2, p3, modelHash); } // 0x0546524ADE2E9723 0x22E9A9DE b323
	 // HAS_CUTSCENE_*
	 // 
	 // Possibly HAS_CUTSCENE_CUT_THIS_FRAME, needs more research.
	static BOOL _0x708BDD8CD795B043() { return invoke<BOOL>(0x708BDD8CD795B043); } // 0x708BDD8CD795B043 0x4315A7C5 b323
}

namespace DATAFILE
{
	 // Adds the given request ID to the watch list.
	static void DATAFILE_WATCH_REQUEST_ID(int id) { return invoke<void>(0xAD6875BBC0FC899C, id); } // 0xAD6875BBC0FC899C 0x621388FF b323
	static BOOL DATAFILE_HAS_LOADED_FILE_DATA(Any p0) { return invoke<BOOL>(0x15FF52B809DB2353, p0); } // 0x15FF52B809DB2353 0x36FB8B3F b323
	static BOOL DATAFILE_SELECT_ACTIVE_FILE(Any p0) { return invoke<BOOL>(0x22DA66936E0FFF37, p0); } // 0x22DA66936E0FFF37 0xB41064A4 b323
	static BOOL DATAFILE_DELETE_REQUESTED_FILE(Any p0) { return invoke<BOOL>(0x8F5EA1C01D65A100, p0); } // 0x8F5EA1C01D65A100 0x9DB63CFF b323
	static BOOL UGC_CREATE_CONTENT(Any* data, int dataCount, const char* contentName, const char* description, const char* tagsCsv, const char* contentTypeName, BOOL publish) { return invoke<BOOL>(0xC84527E235FCA219, data, dataCount, contentName, description, tagsCsv, contentTypeName, publish); } // 0xC84527E235FCA219 0xF09157B0 b323
	static BOOL UGC_UPDATE_CONTENT(const char* contentId, Any* data, int dataCount, const char* contentName, const char* description, const char* tagsCsv, const char* contentTypeName) { return invoke<BOOL>(0x648E7A5434AF7969, contentId, data, dataCount, contentName, description, tagsCsv, contentTypeName); } // 0x648E7A5434AF7969 0x459F2683 b323
	static BOOL UGC_SET_PLAYER_DATA(const char* contentId, float rating, const char* contentTypeName) { return invoke<BOOL>(0x692D808C34A82143, contentId, rating, contentTypeName); } // 0x692D808C34A82143 0xBB6321BD b323
	static BOOL DATAFILE_SELECT_UGC_DATA(int p0) { return invoke<BOOL>(0xA69AC4ADE82B57A4, p0); } // 0xA69AC4ADE82B57A4 0xE8D56DA2 b323
	static BOOL DATAFILE_SELECT_UGC_STATS(int p0, BOOL p1) { return invoke<BOOL>(0x9CB0BFA7A9342C3D, p0, p1); } // 0x9CB0BFA7A9342C3D 0xCB6A351E b323
	static BOOL DATAFILE_SELECT_UGC_PLAYER_DATA(int p0) { return invoke<BOOL>(0x52818819057F2B40, p0); } // 0x52818819057F2B40 0xA4D1B30E b323
	 // Loads a User-Generated Content (UGC) file. These files can be found in "[GTA5]\data\ugc" and "[GTA5]\common\patch\ugc". They seem to follow a naming convention, most likely of "[name]_[part].ugc". See example below for usage.
	 // 
	 // Returns whether or not the file was successfully loaded.
	 // 
	 // Example:
	 // DATAFILE::_LOAD_UGC_FILE("RockstarPlaylists") // loads "rockstarplaylists_00.ugc"
	static BOOL DATAFILE_LOAD_OFFLINE_UGC(const char* filename) { return invoke<BOOL>(0xC5238C011AF405E4, filename); } // 0xC5238C011AF405E4 0x660C468E b323
	static void DATAFILE_CREATE() { return invoke<void>(0xD27058A1CA2B13EE); } // 0xD27058A1CA2B13EE 0x95F8A221 b323
	static void DATAFILE_DELETE() { return invoke<void>(0x9AB9C1CFC8862DFB); } // 0x9AB9C1CFC8862DFB 0xDEF31B0A b323
	static const char* DATAFILE_GET_FILE_DICT() { return invoke<const char*>(0x906B778CA1DC72B6); } // 0x906B778CA1DC72B6 0x86DDF9C2 b323
	static BOOL DATAFILE_START_SAVE_TO_CLOUD(const char* filename) { return invoke<BOOL>(0x83BCCE3224735F05, filename); } // 0x83BCCE3224735F05 0x768CBB35 b323
	static BOOL DATAFILE_UPDATE_SAVE_TO_CLOUD(BOOL* p0) { return invoke<BOOL>(0x4DFDD9EB705F8140, p0); } // 0x4DFDD9EB705F8140 0x0B4087F7 b323
	 // Example:
	 // if (!DATAFILE::_BEDB96A7584AA8CF())
	 // {
	 //     if (!g_109E3)
	 //  {
	 //         if (((sub_d4f() == 2) == 0) && (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()))
	 //       {
	 //             if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE())
	 //          {
	 //                 g_17A8B = 0;
	 //             }
	 //             if (!g_D52C)
	 //           {
	 //                 sub_730();
	 //             }
	 //         }
	 //     }
	 // }
	 // 
	 // 
	static BOOL DATAFILE_IS_SAVE_PENDING() { return invoke<BOOL>(0xBEDB96A7584AA8CF); } // 0xBEDB96A7584AA8CF 0x5DCD0796 b323
	static void DATADICT_SET_BOOL(Any* objectData, const char* key, BOOL value) { return invoke<void>(0x35124302A556A325, objectData, key, value); } // 0x35124302A556A325 0x9B29D99B b323
	static void DATADICT_SET_INT(Any* objectData, const char* key, int value) { return invoke<void>(0xE7E035450A7948D5, objectData, key, value); } // 0xE7E035450A7948D5 0xEFCF554A b323
	static void DATADICT_SET_FLOAT(Any* objectData, const char* key, float value) { return invoke<void>(0xC27E1CC2D795105E, objectData, key, value); } // 0xC27E1CC2D795105E 0xE972CACF b323
	static void DATADICT_SET_STRING(Any* objectData, const char* key, const char* value) { return invoke<void>(0x8FF3847DADD8E30C, objectData, key, value); } // 0x8FF3847DADD8E30C 0xD437615C b323
	static void DATADICT_SET_VECTOR(Any* objectData, const char* key, float valueX, float valueY, float valueZ) { return invoke<void>(0x4CD49B76338C7DEE, objectData, key, valueX, valueY, valueZ); } // 0x4CD49B76338C7DEE 0x75FC6C3C b323
	static Any* DATADICT_CREATE_DICT(Any* objectData, const char* key) { return invoke<Any*>(0xA358F56F10732EE1, objectData, key); } // 0xA358F56F10732EE1 0x96A8E05F b323
	static Any* DATADICT_CREATE_ARRAY(Any* objectData, const char* key) { return invoke<Any*>(0x5B11728527CA6E5F, objectData, key); } // 0x5B11728527CA6E5F 0x03939B8D b323
	static BOOL DATADICT_GET_BOOL(Any* objectData, const char* key) { return invoke<BOOL>(0x1186940ED72FFEEC, objectData, key); } // 0x1186940ED72FFEEC 0x8876C872 b323
	static int DATADICT_GET_INT(Any* objectData, const char* key) { return invoke<int>(0x78F06F6B1FB5A80C, objectData, key); } // 0x78F06F6B1FB5A80C 0xA6C68693 b323
	static float DATADICT_GET_FLOAT(Any* objectData, const char* key) { return invoke<float>(0x06610343E73B9727, objectData, key); } // 0x06610343E73B9727 0xA92C1AF4 b323
	static const char* DATADICT_GET_STRING(Any* objectData, const char* key) { return invoke<const char*>(0x3D2FD9E763B24472, objectData, key); } // 0x3D2FD9E763B24472 0x942160EC b323
	static Vector3 DATADICT_GET_VECTOR(Any* objectData, const char* key) { return invoke<Vector3>(0x46CD3CB66E0825CC, objectData, key); } // 0x46CD3CB66E0825CC 0xE84A127A b323
	static Any* DATADICT_GET_DICT(Any* objectData, const char* key) { return invoke<Any*>(0xB6B9DDC412FCEEE2, objectData, key); } // 0xB6B9DDC412FCEEE2 0xC9C13D8D b323
	static Any* DATADICT_GET_ARRAY(Any* objectData, const char* key) { return invoke<Any*>(0x7A983AA9DA2659ED, objectData, key); } // 0x7A983AA9DA2659ED 0x1F2F7D00 b323
	 // Types:
	 // 1 = Boolean
	 // 2 = Integer
	 // 3 = Float
	 // 4 = String
	 // 5 = Vector3
	 // 6 = Object
	 // 7 = Array
	static int DATADICT_GET_TYPE(Any* objectData, const char* key) { return invoke<int>(0x031C55ED33227371, objectData, key); } // 0x031C55ED33227371 0x2678342A b323
	static void DATAARRAY_ADD_INT(Any* arrayData, int value) { return invoke<void>(0xCABDB751D86FE93B, arrayData, value); } // 0xCABDB751D86FE93B 0xF29C0B36 b323
	static void DATAARRAY_ADD_FLOAT(Any* arrayData, float value) { return invoke<void>(0x57A995FD75D37F56, arrayData, value); } // 0x57A995FD75D37F56 0xE4302123 b323
	static void DATAARRAY_ADD_STRING(Any* arrayData, const char* value) { return invoke<void>(0x2F0661C155AEEEAA, arrayData, value); } // 0x2F0661C155AEEEAA 0xF3C01350 b323
	static void DATAARRAY_ADD_VECTOR(Any* arrayData, float valueX, float valueY, float valueZ) { return invoke<void>(0x407F8D034F70F0C2, arrayData, valueX, valueY, valueZ); } // 0x407F8D034F70F0C2 0x16F464B6 b323
	static Any* DATAARRAY_ADD_DICT(Any* arrayData) { return invoke<Any*>(0x6889498B3E19C797, arrayData); } // 0x6889498B3E19C797 0xC174C71B b323
	static BOOL DATAARRAY_GET_BOOL(Any* arrayData, int arrayIndex) { return invoke<BOOL>(0x50C1B2874E50C114, arrayData, arrayIndex); } // 0x50C1B2874E50C114 0xA2E5F921 b323
	static int DATAARRAY_GET_INT(Any* arrayData, int arrayIndex) { return invoke<int>(0x3E5AE19425CD74BE, arrayData, arrayIndex); } // 0x3E5AE19425CD74BE 0xBB120CFC b323
	static float DATAARRAY_GET_FLOAT(Any* arrayData, int arrayIndex) { return invoke<float>(0xC0C527B525D7CFB5, arrayData, arrayIndex); } // 0xC0C527B525D7CFB5 0x08AD2CC2 b323
	static const char* DATAARRAY_GET_STRING(Any* arrayData, int arrayIndex) { return invoke<const char*>(0xD3F2FFEB8D836F52, arrayData, arrayIndex); } // 0xD3F2FFEB8D836F52 0x93F985A6 b323
	static Vector3 DATAARRAY_GET_VECTOR(Any* arrayData, int arrayIndex) { return invoke<Vector3>(0x8D2064E5B64A628A, arrayData, arrayIndex); } // 0x8D2064E5B64A628A 0x80E3DA55 b323
	static Any* DATAARRAY_GET_DICT(Any* arrayData, int arrayIndex) { return invoke<Any*>(0x8B5FADCC4E3A145F, arrayData, arrayIndex); } // 0x8B5FADCC4E3A145F 0xECE81278 b323
	static int DATAARRAY_GET_COUNT(Any* arrayData) { return invoke<int>(0x065DB281590CEA2D, arrayData); } // 0x065DB281590CEA2D 0xA8A21766 b323
	 // Types:
	 // 1 = Boolean
	 // 2 = Integer
	 // 3 = Float
	 // 4 = String
	 // 5 = Vector3
	 // 6 = Object
	 // 7 = Array
	static int DATAARRAY_GET_TYPE(Any* arrayData, int arrayIndex) { return invoke<int>(0x3A0014ADB172A3C5, arrayData, arrayIndex); } // 0x3A0014ADB172A3C5 0xFA2402C8 b323
}

namespace DECORATOR
{
	 // This function sets metadata of type bool to specified entity.
	 // 
	static BOOL DECOR_SET_BOOL(Entity entity, const char* propertyName, BOOL value) { return invoke<BOOL>(0x6B1E8E2ED1335B71, entity, propertyName, value); } // 0x6B1E8E2ED1335B71 0x8E101F5C b323
	 // Sets property to int.
	static BOOL DECOR_SET_INT(Entity entity, const char* propertyName, int value) { return invoke<BOOL>(0x0CE3AA5E1CA19E10, entity, propertyName, value); } // 0x0CE3AA5E1CA19E10 0xDB718B21 b323
	static BOOL DECOR_GET_BOOL(Entity entity, const char* propertyName) { return invoke<BOOL>(0xDACE671663F2F5DB, entity, propertyName); } // 0xDACE671663F2F5DB 0xDBCE51E0 b323
	static int DECOR_GET_INT(Entity entity, const char* propertyName) { return invoke<int>(0xA06C969B02A97298, entity, propertyName); } // 0xA06C969B02A97298 0xDDDE59B5 b323
	 // Returns whether or not the specified property is set for the entity.
	static BOOL DECOR_EXIST_ON(Entity entity, const char* propertyName) { return invoke<BOOL>(0x05661B80A8C9165F, entity, propertyName); } // 0x05661B80A8C9165F 0x74EF9C40 b323
	static BOOL DECOR_REMOVE(Entity entity, const char* propertyName) { return invoke<BOOL>(0x00EE9F297C738720, entity, propertyName); } // 0x00EE9F297C738720 0xE0E2640B b323
	 // https://alloc8or.re/gta5/doc/enums/eDecorType.txt
	static void DECOR_REGISTER(const char* propertyName, int type) { return invoke<void>(0x9FD90732F56403CE, propertyName, type); } // 0x9FD90732F56403CE 0x68BD42A9 b323
	 // type: see DECOR_REGISTER
	static BOOL DECOR_IS_REGISTERED_AS_TYPE(const char* propertyName, int type) { return invoke<BOOL>(0x4F14F9F870D6FBC8, propertyName, type); } // 0x4F14F9F870D6FBC8 0x7CF0971D b323
	 // Called after all decorator type initializations.
	static void DECOR_REGISTER_LOCK() { return invoke<void>(0xA9D14EEA259F9248); } // 0xA9D14EEA259F9248 0x7F3F1C02 b323
}

namespace DLC
{
	 // Example:
	 // DLC2::IS_DLC_PRESENT($\mpbusiness2\);
	 // ($ = gethashkey)
	 // 
	 // bruteforce these:
	 // 0xB119F6D
	 // 0x96F02EE6
	static BOOL IS_DLC_PRESENT(Hash dlcHash) { return invoke<BOOL>(0x812595A0644CE1DE, dlcHash); } // 0x812595A0644CE1DE 0x1F321943 b323
	static BOOL GET_IS_LOADING_SCREEN_ACTIVE() { return invoke<BOOL>(0x10D0A8F259E93EC9); } // 0x10D0A8F259E93EC9 0x517B601B b323
}

namespace ENTITY
{
	 // Checks if the Entity exists
	static BOOL DOES_ENTITY_EXIST(Entity entity) { return invoke<BOOL>(0x7239B21A38F536BA, entity); } // 0x7239B21A38F536BA 0x3AC90869 b323
	static BOOL DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Entity entity, BOOL p1) { return invoke<BOOL>(0xDDE6DF5AE89981D2, entity, p1); } // 0xDDE6DF5AE89981D2 0xACFEB3F9 b323
	static BOOL DOES_ENTITY_HAVE_DRAWABLE(Entity entity) { return invoke<BOOL>(0x060D6E96F8B8E48D, entity); } // 0x060D6E96F8B8E48D 0xA5B33300 b323
	static BOOL DOES_ENTITY_HAVE_PHYSICS(Entity entity) { return invoke<BOOL>(0xDA95EA3317CC5064, entity); } // 0xDA95EA3317CC5064 0x9BCD2979 b323
	 // P3 is always 3 as far as i cant tell
	 // 
	 // Animations List : www.ls-multiplayer.com/dev/index.php?section=3
	static BOOL HAS_ENTITY_ANIM_FINISHED(Entity entity, const char* animDict, const char* animName, int p3) { return invoke<BOOL>(0x20B711662962B472, entity, animDict, animName, p3); } // 0x20B711662962B472 0x1D9CAB92 b323
	static BOOL HAS_ENTITY_BEEN_DAMAGED_BY_ANY_OBJECT(Entity entity) { return invoke<BOOL>(0x95EB9964FF5C5C65, entity); } // 0x95EB9964FF5C5C65 0x6B74582E b323
	static BOOL HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(Entity entity) { return invoke<BOOL>(0x605F5A140F202491, entity); } // 0x605F5A140F202491 0x53FD4A25 b323
	static BOOL HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(Entity entity) { return invoke<BOOL>(0xDFD5033FDBA0A9C8, entity); } // 0xDFD5033FDBA0A9C8 0x878C2CE0 b323
	 // Entity 1 = Victim
	 // Entity 2 = Attacker
	 // 
	 // p2 seems to always be 1
	static BOOL HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Entity entity1, Entity entity2, BOOL p2) { return invoke<BOOL>(0xC86D67D52A707CF8, entity1, entity2, p2); } // 0xC86D67D52A707CF8 0x07FC77E0 b323
	 // traceType is always 17 in the scripts.
	 // 
	 // There is other codes used for traceType:
	 // 19 - in jewelry_prep1a
	 // 126 - in am_hunt_the_beast
	 // 256 & 287 - in fm_mission_controller
	static BOOL HAS_ENTITY_CLEAR_LOS_TO_ENTITY(Entity entity1, Entity entity2, int traceType) { return invoke<BOOL>(0xFCDFF7B72D23A1AC, entity1, entity2, traceType); } // 0xFCDFF7B72D23A1AC 0x53576FA7 b323
	 // Has the entity1 got a clear line of sight to the other entity2 from the direction entity1 is facing.
	 // This is one of the most CPU demanding BOOL natives in the game; avoid calling this in things like nested for-loops
	static BOOL HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(Entity entity1, Entity entity2) { return invoke<BOOL>(0x0267D00AF114F17A, entity1, entity2); } // 0x0267D00AF114F17A 0x210D87C8 b323
	 // Called on tick.
	 // Tested with vehicles, returns true whenever the vehicle is touching any entity.
	 // 
	 // Note: for vehicles, the wheels can touch the ground and it will still return false, but if the body of the vehicle touches the ground, it will return true.
	static BOOL HAS_ENTITY_COLLIDED_WITH_ANYTHING(Entity entity) { return invoke<BOOL>(0x8BAD02F0368D9E14, entity); } // 0x8BAD02F0368D9E14 0x662A2F41 b323
	static Hash GET_LAST_MATERIAL_HIT_BY_ENTITY(Entity entity) { return invoke<Hash>(0x5C3D0A935F535C4C, entity); } // 0x5C3D0A935F535C4C 0xC0E3AA47 b323
	static Vector3 GET_COLLISION_NORMAL_OF_LAST_HIT_FOR_ENTITY(Entity entity) { return invoke<Vector3>(0xE465D4AB7CA6AE72, entity); } // 0xE465D4AB7CA6AE72 0xAB415C07 b323
	 // Based on carmod_shop script decompile this takes a vehicle parameter. It is called when repair is done on initial enter.
	static void FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(Entity entity) { return invoke<void>(0x40FDEDB72F8293B2, entity); } // 0x40FDEDB72F8293B2 0x58D9775F b323
	 // Returns a float value representing animation's current playtime with respect to its total playtime. This value increasing in a range from [0 to 1] and wrap back to 0 when it reach 1.
	 // 
	 // Example:
	 // 0.000000 - mark the starting of animation.
	 // 0.500000 - mark the midpoint of the animation.
	 // 1.000000 - mark the end of animation.
	 // 
	 // Animations List : www.ls-multiplayer.com/dev/index.php?section=3
	static float GET_ENTITY_ANIM_CURRENT_TIME(Entity entity, const char* animDict, const char* animName) { return invoke<float>(0x346D81500D088F42, entity, animDict, animName); } // 0x346D81500D088F42 0x83943F41 b323
	static float GET_ANIM_DURATION(const char* animDict, const char* animName) { return invoke<float>(0xFEDDF04D62B8D790, animDict, animName); } // 0xFEDDF04D62B8D790 0x8B5E3E3D b323
	static Entity GET_ENTITY_ATTACHED_TO(Entity entity) { return invoke<Entity>(0x48C2BED9180FE123, entity); } // 0x48C2BED9180FE123 0xFE1589F9 b323
	 // p1 = !IS_ENTITY_DEAD
	 // 
	static Vector3 GET_ENTITY_COORDS(Entity entity, BOOL alive) { return invoke<Vector3>(0x3FEF770D40960D5A, entity, alive); } // 0x3FEF770D40960D5A 0x1647F1CB b323
	 // Gets the entity's forward vector.
	static Vector3 GET_ENTITY_FORWARD_VECTOR(Entity entity) { return invoke<Vector3>(0x0A794A5A57F8DF91, entity); } // 0x0A794A5A57F8DF91 0x84DCECBF b323
	 // Gets the X-component of the entity's forward vector.
	static float GET_ENTITY_FORWARD_X(Entity entity) { return invoke<float>(0x8BB4EF4214E0E6D5, entity); } // 0x8BB4EF4214E0E6D5 0x49FAE914 b323
	 // Gets the Y-component of the entity's forward vector.
	static float GET_ENTITY_FORWARD_Y(Entity entity) { return invoke<float>(0x866A4A5FAE349510, entity); } // 0x866A4A5FAE349510 0x9E2F917C b323
	 // Returns the heading of the entity in degrees. Also know as the "Yaw" of an entity.
	static float GET_ENTITY_HEADING(Entity entity) { return invoke<float>(0xE83D4F9BA2A38914, entity); } // 0xE83D4F9BA2A38914 0x972CC383 b323
	 // Returns an integer value of entity's current health.
	 // 
	 // Example of range for ped:
	 // - Player [0 to 200]
	 // - Ped [100 to 200]
	 // - Vehicle [0 to 1000]
	 // - Object [0 to 1000]
	 // 
	 // Health is actually a float value but this native casts it to int.
	 // In order to get the actual value, do:
	 // float health = *(float *)(entityAddress + 0x280);
	static int GET_ENTITY_HEALTH(Entity entity) { return invoke<int>(0xEEF059FAD016D209, entity); } // 0xEEF059FAD016D209 0x8E3222B7 b323
	 // Return an integer value of entity's maximum health.
	 // 
	 // Example:
	 // - Player = 200
	 // - Ped = 150
	static int GET_ENTITY_MAX_HEALTH(Entity entity) { return invoke<int>(0x15D757606D170C3C, entity); } // 0x15D757606D170C3C 0xC7AE6AA1 b323
	 // For instance: ENTITY::SET_ENTITY_MAX_HEALTH(PLAYER::PLAYER_PED_ID(), 200); // director_mode.c4: 67849
	static void SET_ENTITY_MAX_HEALTH(Entity entity, int value) { return invoke<void>(0x166E7CF68597D8B5, entity, value); } // 0x166E7CF68597D8B5 0x96F84DF8 b323
	static float GET_ENTITY_HEIGHT(Entity entity, float X, float Y, float Z, BOOL atTop, BOOL inWorldCoords) { return invoke<float>(0x5A504562485944DD, entity, X, Y, Z, atTop, inWorldCoords); } // 0x5A504562485944DD 0xEE443481 b323
	 // Return height (z-dimension) above ground. 
	 // Example: The pilot in a titan plane is 1.844176 above ground.
	 // 
	 // How can i convert it to meters?
	 // Everything seems to be in meters, probably this too.
	static float GET_ENTITY_HEIGHT_ABOVE_GROUND(Entity entity) { return invoke<float>(0x1DD55701034110E5, entity); } // 0x1DD55701034110E5 0x57F56A4D b323
	static void GET_ENTITY_MATRIX(Entity entity, Vector3* rightVector, Vector3* forwardVector, Vector3* upVector, Vector3* position) { return invoke<void>(0xECB2FC7235A7D137, entity, rightVector, forwardVector, upVector, position); } // 0xECB2FC7235A7D137 0xEB9EB001 b323
	 // Returns the model hash from the entity
	static Hash GET_ENTITY_MODEL(Entity entity) { return invoke<Hash>(0x9F47B058362C84B5, entity); } // 0x9F47B058362C84B5 0xDAFCB3EC b323
	 // Converts world coords (posX - Z) to coords relative to the entity
	 // 
	 // Example:
	 // posX is given as 50
	 // entity's x coord is 40
	 // the returned x coord will then be 10 or -10, not sure haven't used this in a while (think it is 10 though).
	static Vector3 GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(Entity entity, float posX, float posY, float posZ) { return invoke<Vector3>(0x2274BC1C4885E333, entity, posX, posY, posZ); } // 0x2274BC1C4885E333 0x6477EC9E b323
	 // Offset values are relative to the entity.
	 // 
	 // x = left/right
	 // y = forward/backward
	 // z = up/down
	static Vector3 GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Entity entity, float offsetX, float offsetY, float offsetZ) { return invoke<Vector3>(0x1899F328B0E12848, entity, offsetX, offsetY, offsetZ); } // 0x1899F328B0E12848 0xABCF043A b323
	static float GET_ENTITY_PITCH(Entity entity) { return invoke<float>(0xD45DC2893621E1FE, entity); } // 0xD45DC2893621E1FE 0xFCE6ECE5 b323
	 // w is the correct parameter name!
	static void GET_ENTITY_QUATERNION(Entity entity, float* x, float* y, float* z, float* w) { return invoke<void>(0x7B3703D2D32DFA18, entity, x, y, z, w); } // 0x7B3703D2D32DFA18 0x5154EC90 b323
	 // Displays the current ROLL axis of the entity [-180.0000/180.0000+]
	 // (Sideways Roll) such as a vehicle tipped on its side
	static float GET_ENTITY_ROLL(Entity entity) { return invoke<float>(0x831E0242595560DF, entity); } // 0x831E0242595560DF 0x36610842 b323
	 // rotationOrder refers to the order yaw pitch roll is applied
	 // value ranges from 0 to 5. What you use for rotationOrder when getting must be the same as rotationOrder when setting the rotation. 
	 // Unsure what value corresponds to what rotation order, more testing will be needed for that.
	 // ------
	 // rotationOrder is usually 2 in scripts
	 // ------
	 // ENTITY::GET_ENTITY_ROTATION(Any p0, false or true);
	 // if false than return from -180 to 180
	 // if true than return from -90 to 90
	 // 
	 // ---
	 // 
	 // As said above, the value of p1 affects the outcome. R* uses 1 and 2 instead of 0 and 1, so I marked it as an int.
	 // 
	 // What it returns is the yaw on the z part of the vector, which makes sense considering R* considers z as vertical. Here's a picture for those of you who don't understand pitch, yaw, and roll:
	 // 
	 // www.allstar.fiu.edu/aero/images/pic5-1.gif
	 // 
	 // I don't know why it returns a Vec3, but sometimes the values x and y go negative, yet they're always zero. Just use GET_ENTITY_PITCH and GET_ENTITY_ROLL for pitch and roll.
	static Vector3 GET_ENTITY_ROTATION(Entity entity, int rotationOrder) { return invoke<Vector3>(0xAFBD61CC738D9EB9, entity, rotationOrder); } // 0xAFBD61CC738D9EB9 0x8FF45B04 b323
	 // All ambient entities in-world seem to have the same value for the second argument (Any *script), depending on when the scripthook was activated/re-activated. I've seen numbers from ~5 to almost 70 when the value was translated with to_string. The function return value seems to always be 0.
	static const char* GET_ENTITY_SCRIPT(Entity entity, ScrHandle* script) { return invoke<const char*>(0xA6E9C38DB51D7748, entity, script); } // 0xA6E9C38DB51D7748 0xB7F70784 b323
	 // result is in meters per second
	 // 
	 // ------------------------------------------------------------
	 // So would the conversion to mph and km/h, be along the lines of this.
	 // 
	 // float speed = GET_ENTITY_SPEED(veh);
	 // float kmh = (speed * 3.6);
	 // float mph = (speed * 2.236936);
	 // ------------------------------------------------------------
	static float GET_ENTITY_SPEED(Entity entity) { return invoke<float>(0xD5037BA82E12416F, entity); } // 0xD5037BA82E12416F 0x9E1E4798 b323
	 // Relative can be used for getting speed relative to the frame of the vehicle, to determine for example, if you are going in reverse (-y speed) or not (+y speed). 
	static Vector3 GET_ENTITY_SPEED_VECTOR(Entity entity, BOOL relative) { return invoke<Vector3>(0x9A8D700A51CB7B0D, entity, relative); } // 0x9A8D700A51CB7B0D 0x3ED2B997 b323
	static float GET_ENTITY_UPRIGHT_VALUE(Entity entity) { return invoke<float>(0x95EED5A694951F9F, entity); } // 0x95EED5A694951F9F 0xF4268190 b323
	static Vector3 GET_ENTITY_VELOCITY(Entity entity) { return invoke<Vector3>(0x4805D2B1D8CF94A9, entity); } // 0x4805D2B1D8CF94A9 0xC14C9B6B b323
	 // Simply returns whatever is passed to it (Regardless of whether the handle is valid or not).
	static Object GET_OBJECT_INDEX_FROM_ENTITY_INDEX(Entity entity) { return invoke<Object>(0xD7E3B9735C0F89D6, entity); } // 0xD7E3B9735C0F89D6 0xBC5A9C58 b323
	 // Simply returns whatever is passed to it (Regardless of whether the handle is valid or not).
	static Ped GET_PED_INDEX_FROM_ENTITY_INDEX(Entity entity) { return invoke<Ped>(0x04A2A40C73395041, entity); } // 0x04A2A40C73395041 0xC46F74AC b323
	 // Simply returns whatever is passed to it (Regardless of whether the handle is valid or not).
	static Vehicle GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(Entity entity) { return invoke<Vehicle>(0x4B53F92932ADFAC0, entity); } // 0x4B53F92932ADFAC0 0xC69CF43D b323
	 // Returns the coordinates of an entity-bone.
	static Vector3 GET_WORLD_POSITION_OF_ENTITY_BONE(Entity entity, int boneIndex) { return invoke<Vector3>(0x44A8FCB8ED227738, entity, boneIndex); } // 0x44A8FCB8ED227738 0x7C6339DF b323
	 // Returns:
	 // 0 = no entity
	 // 1 = ped
	 // 2 = vehicle
	 // 3 = object
	static int GET_ENTITY_TYPE(Entity entity) { return invoke<int>(0x8ACD366038D14505, entity); } // 0x8ACD366038D14505 0x0B1BD08D b323
	 // https://alloc8or.re/gta5/doc/enums/ePopulationType.txt
	static int GET_ENTITY_POPULATION_TYPE(Entity entity) { return invoke<int>(0xF6F5161F4534EDFF, entity); } // 0xF6F5161F4534EDFF 0xFC30DDFF b323
	static BOOL IS_ENTITY_A_PED(Entity entity) { return invoke<BOOL>(0x524AC5ECEA15343E, entity); } // 0x524AC5ECEA15343E 0x55D33EAB b323
	static BOOL IS_ENTITY_A_MISSION_ENTITY(Entity entity) { return invoke<BOOL>(0x0A7B270912999B3C, entity); } // 0x0A7B270912999B3C 0x2632E124 b323
	static BOOL IS_ENTITY_A_VEHICLE(Entity entity) { return invoke<BOOL>(0x6AC7003FA6E5575E, entity); } // 0x6AC7003FA6E5575E 0xBE800B01 b323
	static BOOL IS_ENTITY_AN_OBJECT(Entity entity) { return invoke<BOOL>(0x8D68C8FD0FACA94E, entity); } // 0x8D68C8FD0FACA94E 0x3F52E561 b323
	 // Checks if entity is within x/y/zSize distance of x/y/z. 
	 // 
	 // Last three are unknown ints, almost always p7 = 0, p8 = 1, p9 = 0
	static BOOL IS_ENTITY_AT_COORD(Entity entity, float xPos, float yPos, float zPos, float xSize, float ySize, float zSize, BOOL p7, BOOL p8, int p9) { return invoke<BOOL>(0x20B60995556D004F, entity, xPos, yPos, zPos, xSize, ySize, zSize, p7, p8, p9); } // 0x20B60995556D004F 0xD749B606 b323
	 // Checks if entity1 is within the box defined by x/y/zSize of entity2.
	 // 
	 // Last three parameters are almost alwasy p5 = 0, p6 = 1, p7 = 0
	static BOOL IS_ENTITY_AT_ENTITY(Entity entity1, Entity entity2, float xSize, float ySize, float zSize, BOOL p5, BOOL p6, int p7) { return invoke<BOOL>(0x751B70C3D034E187, entity1, entity2, xSize, ySize, zSize, p5, p6, p7); } // 0x751B70C3D034E187 0xDABDCB52 b323
	static BOOL IS_ENTITY_ATTACHED(Entity entity) { return invoke<BOOL>(0xB346476EF1A64897, entity); } // 0xB346476EF1A64897 0xEC1479D5 b323
	static BOOL IS_ENTITY_ATTACHED_TO_ANY_OBJECT(Entity entity) { return invoke<BOOL>(0xCF511840CEEDE0CC, entity); } // 0xCF511840CEEDE0CC 0x0B5DE340 b323
	static BOOL IS_ENTITY_ATTACHED_TO_ANY_PED(Entity entity) { return invoke<BOOL>(0xB1632E9A5F988D11, entity); } // 0xB1632E9A5F988D11 0x9D7A609C b323
	static BOOL IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(Entity entity) { return invoke<BOOL>(0x26AA915AD89BFB4B, entity); } // 0x26AA915AD89BFB4B 0xDE5C995E b323
	static BOOL IS_ENTITY_ATTACHED_TO_ENTITY(Entity from, Entity to) { return invoke<BOOL>(0xEFBE71898A993728, from, to); } // 0xEFBE71898A993728 0xB0ABFEA8 b323
	static BOOL IS_ENTITY_DEAD(Entity entity, BOOL p1) { return invoke<BOOL>(0x5F9532F3B5CC2551, entity, p1); } // 0x5F9532F3B5CC2551 0xB6F7CBAC b323
	static BOOL IS_ENTITY_IN_AIR(Entity entity) { return invoke<BOOL>(0x886E37EC497200B6, entity); } // 0x886E37EC497200B6 0xA4157987 b323
	 // Creates a spherical cone at origin that extends to surface with the angle specified. Then returns true if the entity is inside the spherical cone
	 // 
	 // Angle is measured in degrees.
	 // These values are constant, most likely bogus:
	 // p8 = 0, p9 = 1, p10 = 0
	 // 
	 // This method can also take two float<3> instead of 6 floats.
	static BOOL IS_ENTITY_IN_ANGLED_AREA(Entity entity, float originX, float originY, float originZ, float edgeX, float edgeY, float edgeZ, float angle, BOOL p8, BOOL p9, Any p10) { return invoke<BOOL>(0x51210CED3DA1C78A, entity, originX, originY, originZ, edgeX, edgeY, edgeZ, angle, p8, p9, p10); } // 0x51210CED3DA1C78A 0x883622FA b323
	static BOOL IS_ENTITY_IN_AREA(Entity entity, float x1, float y1, float z1, float x2, float y2, float z2, BOOL p7, BOOL p8, Any p9) { return invoke<BOOL>(0x54736AA40E271165, entity, x1, y1, z1, x2, y2, z2, p7, p8, p9); } // 0x54736AA40E271165 0x8C2DFA9D b323
	static BOOL IS_ENTITY_IN_ZONE(Entity entity, const char* zone) { return invoke<BOOL>(0xB6463CF6AF527071, entity, zone); } // 0xB6463CF6AF527071 0x45C82B21 b323
	static BOOL IS_ENTITY_IN_WATER(Entity entity) { return invoke<BOOL>(0xCFB0A0D8EDD145A3, entity); } // 0xCFB0A0D8EDD145A3 0x4C3C2508 b323
	 // Get how much of the entity is submerged.  1.0f is whole entity.
	static float GET_ENTITY_SUBMERGED_LEVEL(Entity entity) { return invoke<float>(0xE81AFC1BC4CC41CE, entity); } // 0xE81AFC1BC4CC41CE 0x0170F68C b323
	 // Returns true if the entity is in between the minimum and maximum values for the 2d screen coords. 
	 // This means that it will return true even if the entity is behind a wall for example, as long as you're looking at their location. 
	 // Chipping
	static BOOL IS_ENTITY_ON_SCREEN(Entity entity) { return invoke<BOOL>(0xE659E47AF827484B, entity); } // 0xE659E47AF827484B 0xC1FEC5ED b323
	 // See also PED::IS_SCRIPTED_SCENARIO_PED_USING_CONDITIONAL_ANIM 0x6EC47A344923E1ED 0x3C30B447
	 // 
	 // Taken from ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "creatures@shark@move", "attack_player", 3)
	 // 
	 // p4 is always 3 in the scripts.
	 // 
	 // Animations List : www.ls-multiplayer.com/dev/index.php?section=3
	static BOOL IS_ENTITY_PLAYING_ANIM(Entity entity, const char* animDict, const char* animName, int taskFlag) { return invoke<BOOL>(0x1F0B79228E461EC9, entity, animDict, animName, taskFlag); } // 0x1F0B79228E461EC9 0x0D130D34 b323
	 // a static ped will not react to natives like "APPLY_FORCE_TO_ENTITY" or "SET_ENTITY_VELOCITY" and oftentimes will not react to task-natives like "AI::TASK_COMBAT_PED". The only way I know of to make one of these peds react is to ragdoll them (or sometimes to use CLEAR_PED_TASKS_IMMEDIATELY(). Static peds include almost all far-away peds, beach-combers, peds in certain scenarios, peds crossing a crosswalk, peds walking to get back into their cars, and others. If anyone knows how to make a ped non-static without ragdolling them, please edit this with the solution.
	 // 
	 // how can I make an entity static???
	static BOOL IS_ENTITY_STATIC(Entity entity) { return invoke<BOOL>(0x1218E6886D3D8327, entity); } // 0x1218E6886D3D8327 0x928E12E9 b323
	static BOOL IS_ENTITY_TOUCHING_ENTITY(Entity entity, Entity targetEntity) { return invoke<BOOL>(0x17FFC1B2BA35A494, entity, targetEntity); } // 0x17FFC1B2BA35A494 0x6B931477 b323
	static BOOL IS_ENTITY_UPRIGHT(Entity entity, float angle) { return invoke<BOOL>(0x5333F526F6AB19AA, entity, angle); } // 0x5333F526F6AB19AA 0x3BCDF4E1 b323
	static BOOL IS_ENTITY_UPSIDEDOWN(Entity entity) { return invoke<BOOL>(0x1DBD58820FA61D71, entity); } // 0x1DBD58820FA61D71 0x5ACAA48F b323
	static BOOL IS_ENTITY_VISIBLE(Entity entity) { return invoke<BOOL>(0x47D6F43D77935C75, entity); } // 0x47D6F43D77935C75 0x120B4ED5 b323
	static BOOL IS_ENTITY_VISIBLE_TO_SCRIPT(Entity entity) { return invoke<BOOL>(0xD796CB5BA8F20E32, entity); } // 0xD796CB5BA8F20E32 0x5D240E9D b323
	static BOOL IS_ENTITY_OCCLUDED(Entity entity) { return invoke<BOOL>(0xE31C2C72B8692B64, entity); } // 0xE31C2C72B8692B64 0x46BC5B40 b323
	static BOOL WOULD_ENTITY_BE_OCCLUDED(Hash entityModelHash, float x, float y, float z, BOOL p4) { return invoke<BOOL>(0xEE5D2A122E09EC42, entityModelHash, x, y, z, p4); } // 0xEE5D2A122E09EC42 0xEA127CBC b323
	static BOOL IS_ENTITY_WAITING_FOR_WORLD_COLLISION(Entity entity) { return invoke<BOOL>(0xD05BFF0C0A12C68F, entity); } // 0xD05BFF0C0A12C68F 0x00AB7A4A b323
	 // p6/relative - makes the xyz force not relative to world coords, but to something else
	 // p7/highForce - setting false will make the force really low
	static void APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(Entity entity, int forceType, float x, float y, float z, BOOL p5, BOOL isDirectionRel, BOOL isForceRel, BOOL p8) { return invoke<void>(0x18FF00FC7EFF559E, entity, forceType, x, y, z, p5, isDirectionRel, isForceRel, p8); } // 0x18FF00FC7EFF559E 0x28924E98 b323
	 // Documented here:
	 // gtaforums.com/topic/885669-precisely-define-object-physics/
	 // gtaforums.com/topic/887362-apply-forces-and-momentums-to-entityobject/
	 // 
	 // forceFlags:
	 // First bit (lowest): Strong force flag, factor 100
	 // Second bit: Unkown flag
	 // Third bit: Momentum flag=1 (vector (x,y,z) is a momentum, more research needed)
	 // If higher bits are unequal 0 the function doesn't applay any forces at all.
	 // (As integer possible values are 0-7)
	 // 
	 // 0: weak force
	 // 1: strong force
	 // 2: same as 0 (2nd bit?)
	 // 3: same as 1
	 // 4: weak momentum
	 // 5: strong momentum
	 // 6: same as 4
	 // 7: same as 5
	 // 
	 // isLocal: vector defined in local (body-fixed) coordinate frame
	 // isMassRel: if true the force gets multiplied with the objects mass (this is why it was known as highForce) and different objects will have the same acceleration.
	 // 
	 // p8 !!! Whenever I set this !=0, my script stopped.
	static void APPLY_FORCE_TO_ENTITY(Entity entity, int forceFlags, float x, float y, float z, float offX, float offY, float offZ, int boneIndex, BOOL isDirectionRel, BOOL ignoreUpVec, BOOL isForceRel, BOOL p12, BOOL p13) { return invoke<void>(0xC5F68BE9613E2D18, entity, forceFlags, x, y, z, offX, offY, offZ, boneIndex, isDirectionRel, ignoreUpVec, isForceRel, p12, p13); } // 0xC5F68BE9613E2D18 0xC1C0855A b323
	 // Attaches entity1 to bone (boneIndex) of entity2.
	 // 
	 // boneIndex - this is different to boneID, use GET_PED_BONE_INDEX to get the index from the ID. use the index for attaching to specific bones. entity1 will be attached to entity2's centre if bone index given doesn't correspond to bone indexes for that entity type.
	 // 
	 // useSoftPinning - if set to false attached entity will not detach when fixed
	 // collision - controls collision between the two entities (FALSE disables collision).
	 // isPed - pitch doesnt work when false and roll will only work on negative numbers (only peds)
	 // vertexIndex - position of vertex
	 // fixedRot - if false it ignores entity vector 
	 // 
	static void ATTACH_ENTITY_TO_ENTITY(Entity entity1, Entity entity2, int boneIndex, float xPos, float yPos, float zPos, float xRot, float yRot, float zRot, BOOL p9, BOOL useSoftPinning, BOOL collision, BOOL isPed, int vertexIndex, BOOL fixedRot) { return invoke<void>(0x6B9BBD38AB0796DF, entity1, entity2, boneIndex, xPos, yPos, zPos, xRot, yRot, zRot, p9, useSoftPinning, collision, isPed, vertexIndex, fixedRot); } // 0x6B9BBD38AB0796DF 0xEC024237 b323
	 // breakForce is the amount of force required to break the bond.
	 // p14 - is always 1 in scripts
	 // p15 - is 1 or 0 in scripts - unknoun what it does
	 // p16 - controls collision between the two entities (FALSE disables collision).
	 // p17 - do not teleport entity to be attached to the position of the bone Index of the target entity (if 1, entity will not be teleported to target bone)
	 // p18 - is always 2 in scripts.
	 // 
	 // 
	static void ATTACH_ENTITY_TO_ENTITY_PHYSICALLY(Entity entity1, Entity entity2, int boneIndex1, int boneIndex2, float xPos1, float yPos1, float zPos1, float xPos2, float yPos2, float zPos2, float xRot, float yRot, float zRot, float breakForce, BOOL fixedRot, BOOL p15, BOOL collision, BOOL p17, int p18) { return invoke<void>(0xC3675780C92F90F9, entity1, entity2, boneIndex1, boneIndex2, xPos1, yPos1, zPos1, xPos2, yPos2, zPos2, xRot, yRot, zRot, breakForce, fixedRot, p15, collision, p17, p18); } // 0xC3675780C92F90F9 0x0547417F b323
	 // Called to update entity attachments.
	static void PROCESS_ENTITY_ATTACHMENTS(Entity entity) { return invoke<void>(0xF4080490ADC51C6F, entity); } // 0xF4080490ADC51C6F 0x6909BA59 b323
	 // Returns the index of the bone. If the bone was not found, -1 will be returned. 
	 // 
	 // list:
	 // pastebin.com/D7JMnX1g
	 // 
	 // BoneNames:
	 //   chassis,
	 //   windscreen,
	 //    seat_pside_r,
	 //  seat_dside_r,
	 //  bodyshell,
	 //     suspension_lm,
	 //     suspension_lr,
	 //     platelight,
	 //    attach_female,
	 //     attach_male,
	 //   bonnet,
	 //    boot,
	 //  chassis_dummy,  //Center of the dummy
	 //  chassis_Control,    //Not found yet
	 //    door_dside_f,   //Door left, front
	 //     door_dside_r,   //Door left, back
	 //  door_pside_f,   //Door right, front
	 //    door_pside_r,   //Door right, back
	 //     Gun_GripR,
	 //     windscreen_f,
	 //  platelight, //Position where the light above the numberplate is located
	 //    VFX_Emitter,
	 //   window_lf,  //Window left, front
	 //   window_lr,  //Window left, back
	 //    window_rf,  //Window right, front
	 //  window_rr,  //Window right, back
	 //   engine, //Position of the engine
	 //   gun_ammo,
	 //  ROPE_ATTATCH,   //Not misspelled. In script "finale_heist2b.c4".
	 //     wheel_lf,   //Wheel left, front
	 //    wheel_lr,   //Wheel left, back
	 //     wheel_rf,   //Wheel right, front
	 //   wheel_rr,   //Wheel right, back
	 //    exhaust,    //Exhaust. shows only the position of the stock-exhaust
	 //    overheat,   //A position on the engine(not exactly sure, how to name it)
	 //   misc_e, //Not a car-bone.
	 //  seat_dside_f,   //Driver-seat
	 //  seat_pside_f,   //Seat next to driver
	 //  Gun_Nuzzle,
	 //    seat_r
	 // 
	 // I doubt that the function is case-sensitive, since I found a "Chassis" and a "chassis". - Just tested: Definitely not case-sensitive.
	 // 
	 // 
	static int GET_ENTITY_BONE_INDEX_BY_NAME(Entity entity, const char* boneName) { return invoke<int>(0xFB71170B7E76ACBA, entity, boneName); } // 0xFB71170B7E76ACBA 0xE4ECAC22 b323
	static void CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Entity entity) { return invoke<void>(0xA72CD9CA74A5ECBA, entity); } // 0xA72CD9CA74A5ECBA 0x2B83F43B b323
	 // Deletes the specified entity, then sets the handle pointed to by the pointer to NULL.
	static void DELETE_ENTITY(Entity* entity) { return invoke<void>(0xAE3CBE5BF394C9C9, entity); } // 0xAE3CBE5BF394C9C9 0xFAA3D236 b323
	 // p1 and p2 have no effect 
	 // maybe a quick disassembly will tell us what they do
	 // 
	 // if p2 is set to true, the both entities won't collide with the other until the distance between them is above 4 meters.
	 // 
	 // 
	 // p1?
	static void DETACH_ENTITY(Entity entity, BOOL p1, BOOL collision) { return invoke<void>(0x961AC54BF0613F5D, entity, p1, collision); } // 0x961AC54BF0613F5D 0xC8EFCB41 b323
	static void FREEZE_ENTITY_POSITION(Entity entity, BOOL toggle) { return invoke<void>(0x428CA6DBD1094446, entity, toggle); } // 0x428CA6DBD1094446 0x65C16D57 b323
	 // SET_ENTITY_*
	static void _SET_ENTITY_SOMETHING(Entity entity, BOOL toggle) { return invoke<void>(0x3910051CCECDB00C, entity, toggle); } // 0x3910051CCECDB00C 0xD3850671 b323
	 // delta and bitset are guessed fields. They are based on the fact that most of the calls have 0 or nil field types passed in.
	 // 
	 // The only time bitset has a value is 0x4000 and the only time delta has a value is during stealth with usually <1.0f values.
	 // 
	 // Animations List : www.ls-multiplayer.com/dev/index.php?section=3
	static BOOL PLAY_ENTITY_ANIM(Entity entity, const char* animName, const char* animDict, float p3, BOOL loop, BOOL stayInAnim, BOOL p6, float delta, Any bitset) { return invoke<BOOL>(0x7FB218262B810701, entity, animName, animDict, p3, loop, stayInAnim, p6, delta, bitset); } // 0x7FB218262B810701 0x878753D5 b323
	 // p4 and p7 are usually 1000.0f.
	 // 
	 // Animations List : www.ls-multiplayer.com/dev/index.php?section=3
	static BOOL PLAY_SYNCHRONIZED_ENTITY_ANIM(Entity entity, int syncedScene, const char* animation, const char* propName, float p4, float p5, Any p6, float p7) { return invoke<BOOL>(0xC77720A12FE14A86, entity, syncedScene, animation, propName, p4, p5, p6, p7); } // 0xC77720A12FE14A86 0x012760AA b323
	 // Animations List : www.ls-multiplayer.com/dev/index.php?section=3
	 // 
	 // RAGEPluginHook list: docs.ragepluginhook.net/html/62951c37-a440-478c-b389-c471230ddfc5.htm
	static Any STOP_ENTITY_ANIM(Entity entity, const char* animation, const char* animGroup, float p3) { return invoke<Any>(0x28004F88151E03E0, entity, animation, animGroup, p3); } // 0x28004F88151E03E0 0xC4769830 b323
	 // p1 sync task id?
	static BOOL STOP_SYNCHRONIZED_ENTITY_ANIM(Entity entity, float p1, BOOL p2) { return invoke<BOOL>(0x43D3807C077261E3, entity, p1, p2); } // 0x43D3807C077261E3 0xE27D2FC1 b323
	 // if (ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), GAMEPLAY::GET_HASH_KEY("CreateObject")))
	static BOOL HAS_ANIM_EVENT_FIRED(Entity entity, Hash actionHash) { return invoke<BOOL>(0xEAF4CD9EA3E7E922, entity, actionHash); } // 0xEAF4CD9EA3E7E922 0x66571CA0 b323
	 // In the script "player_scene_t_bbfight.c4":
	 // "if (ENTITY::FIND_ANIM_EVENT_PHASE(&l_16E, &l_19F[v_4/*16*/], v_9, &v_A, &v_B))"
	 // -- &l_16E (p0) is requested as an anim dictionary earlier in the script.
	 // -- &l_19F[v_4/*16*/] (p1) is used in other natives in the script as the "animation" param.
	 // -- v_9 (p2) is instantiated as "victim_fall"; I'm guessing that's another anim
	 // --v_A and v_B (p3 & p4) are both set as -1.0, but v_A is used immediately after this native for: 
	 // "if (v_A < ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(...))"
	 // Both v_A and v_B are seemingly used to contain both Vector3's and floats, so I can't say what either really is other than that they are both output parameters. p4 looks more like a *Vector3 though
	 // -alphazolam
	 // 
	 // Animations List : www.ls-multiplayer.com/dev/index.php?section=3
	static BOOL FIND_ANIM_EVENT_PHASE(const char* animDictionary, const char* animName, const char* p2, Any* p3, Any* p4) { return invoke<BOOL>(0x07F1BE2BCCAA27A7, animDictionary, animName, p2, p3, p4); } // 0x07F1BE2BCCAA27A7 0xC41DDA62 b323
	 // Animations List : www.ls-multiplayer.com/dev/index.php?section=3
	static void SET_ENTITY_ANIM_CURRENT_TIME(Entity entity, const char* animDictionary, const char* animName, float time) { return invoke<void>(0x4487C259F0F70977, entity, animDictionary, animName, time); } // 0x4487C259F0F70977 0x99D90735 b323
	 // Animations List : www.ls-multiplayer.com/dev/index.php?section=3
	static void SET_ENTITY_ANIM_SPEED(Entity entity, const char* animDictionary, const char* animName, float speedMultiplier) { return invoke<void>(0x28D1A16553C51776, entity, animDictionary, animName, speedMultiplier); } // 0x28D1A16553C51776 0x3990C90A b323
	 // Makes the specified entity (ped, vehicle or object) persistent. Persistent entities will not automatically be removed by the engine.
	 // 
	 // p1 has no effect when either its on or off 
	 // maybe a quick disassembly will tell us what it does
	 // 
	 // p2 has no effect when either its on or off 
	 // maybe a quick disassembly will tell us what it does
	static void SET_ENTITY_AS_MISSION_ENTITY(Entity entity, BOOL p1, BOOL p2) { return invoke<void>(0xAD738C3085FE7E11, entity, p1, p2); } // 0xAD738C3085FE7E11 0x5D1F9E0F b323
	 // Marks the specified entity (ped, vehicle or object) as no longer needed.
	 // Entities marked as no longer needed, will be deleted as the engine sees fit.
	static void SET_ENTITY_AS_NO_LONGER_NEEDED(Entity* entity) { return invoke<void>(0xB736A491E64A32CF, entity); } // 0xB736A491E64A32CF 0xADF2267C b323
	 // This is an alias of SET_ENTITY_AS_NO_LONGER_NEEDED.
	static void SET_PED_AS_NO_LONGER_NEEDED(Ped* ped) { return invoke<void>(0x2595DD4236549CE3, ped); } // 0x2595DD4236549CE3 0x9A388380 b323
	 // This is an alias of SET_ENTITY_AS_NO_LONGER_NEEDED.
	static void SET_VEHICLE_AS_NO_LONGER_NEEDED(Vehicle* vehicle) { return invoke<void>(0x629BFA74418D6239, vehicle); } // 0x629BFA74418D6239 0x9B0E10BE b323
	 // This is an alias of SET_ENTITY_AS_NO_LONGER_NEEDED.
	static void SET_OBJECT_AS_NO_LONGER_NEEDED(Object* object) { return invoke<void>(0x3AE22DEB5BA5A3E6, object); } // 0x3AE22DEB5BA5A3E6 0x3F6B949F b323
	static void SET_ENTITY_CAN_BE_DAMAGED(Entity entity, BOOL toggle) { return invoke<void>(0x1760FFA8AB074D66, entity, toggle); } // 0x1760FFA8AB074D66 0x60B6E744 b323
	static void SET_ENTITY_CAN_BE_DAMAGED_BY_RELATIONSHIP_GROUP(Entity entity, BOOL bCanBeDamaged, int relGroup) { return invoke<void>(0xE22D8FDE858B8119, entity, bCanBeDamaged, relGroup); } // 0xE22D8FDE858B8119 0x34165B5D b323
	static void _0x352E2B5CF420BF3B(Any p0, Any p1) { return invoke<void>(0x352E2B5CF420BF3B, p0, p1); } // 0x352E2B5CF420BF3B b573
	static void SET_ENTITY_COLLISION(Entity entity, BOOL toggle, BOOL keepPhysics) { return invoke<void>(0x1A9205C1B9EE827F, entity, toggle, keepPhysics); } // 0x1A9205C1B9EE827F 0x139FD37D b323
	static BOOL GET_ENTITY_COLLISION_DISABLED(Entity entity) { return invoke<BOOL>(0xCCF1E97BEFDAE480, entity); } // 0xCCF1E97BEFDAE480 0xE8C0C629 b323
	static void SET_ENTITY_COMPLETELY_DISABLE_COLLISION(Entity entity, BOOL toggle, BOOL keepPhysics) { return invoke<void>(0x9EBC85ED0FFFE51C, entity, toggle, keepPhysics); } // 0x9EBC85ED0FFFE51C 0xBD0D4831 b323
	 // p7 is always 1 in the scripts. Set to 1, an area around the destination coords for the moved entity is cleared from other entities. 
	 //  
	 // Often ends with 1, 0, 0, 1); in the scripts. It works. 
	 // 
	 // Axis - Invert Axis Flags
	static void SET_ENTITY_COORDS(Entity entity, float xPos, float yPos, float zPos, BOOL xAxis, BOOL yAxis, BOOL zAxis, BOOL clearArea) { return invoke<void>(0x06843DA7060A026B, entity, xPos, yPos, zPos, xAxis, yAxis, zAxis, clearArea); } // 0x06843DA7060A026B 0xDF70B41B b323
	static void _SET_ENTITY_COORDS_2(Entity entity, float xPos, float yPos, float zPos, BOOL xAxis, BOOL yAxis, BOOL zAxis, BOOL clearArea) { return invoke<void>(0x621873ECE1178967, entity, xPos, yPos, zPos, xAxis, yAxis, zAxis, clearArea); } // 0x621873ECE1178967 0x749B282E b323
	 // Axis - Invert Axis Flags
	static void SET_ENTITY_COORDS_NO_OFFSET(Entity entity, float xPos, float yPos, float zPos, BOOL xAxis, BOOL yAxis, BOOL zAxis) { return invoke<void>(0x239A3351AC1DA385, entity, xPos, yPos, zPos, xAxis, yAxis, zAxis); } // 0x239A3351AC1DA385 0x4C83DE8D b323
	static void SET_ENTITY_DYNAMIC(Entity entity, BOOL toggle) { return invoke<void>(0x1718DE8E3F2823CA, entity, toggle); } // 0x1718DE8E3F2823CA 0x236F525B b323
	static void SET_ENTITY_HEADING(Entity entity, float heading) { return invoke<void>(0x8E2530AA8ADA980E, entity, heading); } // 0x8E2530AA8ADA980E 0xE0FF064D b323
	 // health >= 0
	static void SET_ENTITY_HEALTH(Entity entity, int health, int p2) { return invoke<void>(0x6B76DC1F3AE6E6A3, entity, health, p2); } // 0x6B76DC1F3AE6E6A3 0xFBCD1831 b323
	 // Sets a ped or an object totally invincible. It doesn't take any kind of damage. Peds will not ragdoll on explosions and the tazer animation won't apply either.
	 // 
	 // If you use this for a ped and you want Ragdoll to stay enabled, then do:
	 // *(DWORD *)(pedAddress + 0x188) |= (1 << 9);
	 // 
	 // Use this if you want to get the invincibility status:
	 //   bool IsPedInvincible(Ped ped)
	 //  {
	 //      auto addr = getScriptHandleBaseAddress(ped);    
	 // 
	 //         if (addr)
	 //      {
	 //          DWORD flag = *(DWORD *)(addr + 0x188);
	 //             return ((flag & (1 << 8)) != 0) || ((flag & (1 << 9)) != 0);
	 //       }
	 // 
	 //        return false;
	 //  }
	static void SET_ENTITY_INVINCIBLE(Entity entity, BOOL toggle) { return invoke<void>(0x3882114BDE571AD4, entity, toggle); } // 0x3882114BDE571AD4 0xC1213A21 b323
	static void SET_ENTITY_IS_TARGET_PRIORITY(Entity entity, BOOL p1, float p2) { return invoke<void>(0xEA02E132F5C68722, entity, p1, p2); } // 0xEA02E132F5C68722 0x9729EE32 b323
	static void SET_ENTITY_LOAD_COLLISION_FLAG(Entity entity, BOOL toggle, Any p2) { return invoke<void>(0x0DC7CABAB1E9B67E, entity, toggle, p2); } // 0x0DC7CABAB1E9B67E 0xC52F295B b323
	static BOOL HAS_COLLISION_LOADED_AROUND_ENTITY(Entity entity) { return invoke<BOOL>(0xE9676F61BC0B3321, entity); } // 0xE9676F61BC0B3321 0x851687F9 b323
	static void SET_ENTITY_MAX_SPEED(Entity entity, float speed) { return invoke<void>(0x0E46A3FCBDE2A1B1, entity, speed); } // 0x0E46A3FCBDE2A1B1 0x46AFFED3 b323
	static void SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Entity entity, BOOL toggle) { return invoke<void>(0x79F020FF9EDC0748, entity, toggle); } // 0x79F020FF9EDC0748 0x4B707F50 b323
	static void SET_ENTITY_ONLY_DAMAGED_BY_RELATIONSHIP_GROUP(Entity entity, BOOL p1, Any p2) { return invoke<void>(0x7022BD828FA0B082, entity, p1, p2); } // 0x7022BD828FA0B082 0x202237E2 b323
	 // Enable / disable each type of damage.
	 // 
	 // Can't get drownProof to work.
	 // --------------
	 // p7 is to to '1' in am_mp_property_ext/int: entity::set_entity_proofs(uParam0->f_19, true, true, true, true, true, true, 1, true);
	 // 
	static void SET_ENTITY_PROOFS(Entity entity, BOOL bulletProof, BOOL fireProof, BOOL explosionProof, BOOL collisionProof, BOOL meleeProof, BOOL p6, BOOL p7, BOOL drownProof) { return invoke<void>(0xFAEE099C6F890BB8, entity, bulletProof, fireProof, explosionProof, collisionProof, meleeProof, p6, p7, drownProof); } // 0xFAEE099C6F890BB8 0x7E9EAB66 b323
	 // w is the correct parameter name!
	static void SET_ENTITY_QUATERNION(Entity entity, float x, float y, float z, float w) { return invoke<void>(0x77B21BE7AC540F07, entity, x, y, z, w); } // 0x77B21BE7AC540F07 0x83B6046F b323
	static void SET_ENTITY_RECORDS_COLLISIONS(Entity entity, BOOL toggle) { return invoke<void>(0x0A50A1EEDAD01E65, entity, toggle); } // 0x0A50A1EEDAD01E65 0x6B189A1A b323
	 // rotationOrder refers to the order yaw pitch roll is applied
	 // value ranges from 0 to 5. What you use for rotationOrder when setting must be the same as rotationOrder when getting the rotation. 
	 // Unsure what value corresponds to what rotation order, more testing will be needed for that.
	 // For the most part R* uses 1 or 2 as the order.
	 // p5 is usually set as true
	 // 
	static void SET_ENTITY_ROTATION(Entity entity, float pitch, float roll, float yaw, int rotationOrder, BOOL p5) { return invoke<void>(0x8524A8B0171D5E07, entity, pitch, roll, yaw, rotationOrder, p5); } // 0x8524A8B0171D5E07 0x0A345EFE b323
	 // unk was always 0.
	static void SET_ENTITY_VISIBLE(Entity entity, BOOL toggle, BOOL unk) { return invoke<void>(0xEA1C610A04DB6BBB, entity, toggle, unk); } // 0xEA1C610A04DB6BBB 0xD043E8E1 b323
	 // Note that the third parameter(denoted as z) is "up and down" with positive numbers encouraging upwards movement.
	static void SET_ENTITY_VELOCITY(Entity entity, float x, float y, float z) { return invoke<void>(0x1C99BB7B6E96D16F, entity, x, y, z); } // 0x1C99BB7B6E96D16F 0xFF5A1988 b323
	static void SET_ENTITY_HAS_GRAVITY(Entity entity, BOOL toggle) { return invoke<void>(0x4A4722448F18EEF5, entity, toggle); } // 0x4A4722448F18EEF5 0xE2F262BF b323
	 // LOD distance can be 0 to 0xFFFF (higher values will result in 0xFFFF) as it is actually stored as a 16-bit value (aka uint16_t).
	static void SET_ENTITY_LOD_DIST(Entity entity, int value) { return invoke<void>(0x5927F96A78577363, entity, value); } // 0x5927F96A78577363 0xD7ACC7AD b323
	 // skin - everything alpha except skin
	 // Set entity alpha level. Ranging from 0 to 255 but chnages occur after every 20 percent (after every 51).
	static void SET_ENTITY_ALPHA(Entity entity, int alphaLevel, BOOL skin) { return invoke<void>(0x44A0870B7E92D7C0, entity, alphaLevel, skin); } // 0x44A0870B7E92D7C0 0xAE667CB0 b323
	static int GET_ENTITY_ALPHA(Entity entity) { return invoke<int>(0x5A47B3B5E63E94C6, entity); } // 0x5A47B3B5E63E94C6 0x1560B017 b323
	static void RESET_ENTITY_ALPHA(Entity entity) { return invoke<void>(0x9B1E824FFBB7027A, entity); } // 0x9B1E824FFBB7027A 0x8A30761C b323
	static void SET_ENTITY_ALWAYS_PRERENDER(Entity entity, BOOL toggle) { return invoke<void>(0xACAD101E1FB66689, entity, toggle); } // 0xACAD101E1FB66689 0xD8FF798A b323
	static void SET_ENTITY_RENDER_SCORCHED(Entity entity, BOOL toggle) { return invoke<void>(0x730F5F8D3F0F2050, entity, toggle); } // 0x730F5F8D3F0F2050 0xAAC9317B b323
	 // Only works with objects!
	 // Network players do not see changes done with this.
	 // - Did ya try modifying p6 lol
	static void CREATE_MODEL_SWAP(float x, float y, float z, float radius, Hash originalModel, Hash newModel, BOOL p6) { return invoke<void>(0x92C47782FDA8B2A3, x, y, z, radius, originalModel, newModel, p6); } // 0x92C47782FDA8B2A3 0x0BC12F9E b323
	static void REMOVE_MODEL_SWAP(float x, float y, float z, float radius, Hash originalModel, Hash newModel, BOOL p6) { return invoke<void>(0x033C0F9A64E229AE, x, y, z, radius, originalModel, newModel, p6); } // 0x033C0F9A64E229AE 0xCE0AA8BC b323
	 // p5 = sets as true in scripts
	 // Same as the comment for CREATE_MODEL_SWAP unless for some reason p5 affects it this only works with objects as well.
	 // 
	 // Network players do not see changes done with this.
	static void CREATE_MODEL_HIDE(float x, float y, float z, float radius, Hash model, BOOL p5) { return invoke<void>(0x8A97BCA30A0CE478, x, y, z, radius, model, p5); } // 0x8A97BCA30A0CE478 0x7BD5CF2F b323
	static void CREATE_MODEL_HIDE_EXCLUDING_SCRIPT_OBJECTS(float x, float y, float z, float radius, Hash model, BOOL p5) { return invoke<void>(0x3A52AE588830BF7F, x, y, z, radius, model, p5); } // 0x3A52AE588830BF7F 0x07AAF22C b323
	static void REMOVE_MODEL_HIDE(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return invoke<void>(0xD9E3006FB3CBD765, p0, p1, p2, p3, p4, p5); } // 0xD9E3006FB3CBD765 0x993DBC10 b323
	static void CREATE_FORCED_OBJECT(float x, float y, float z, Any p3, Hash modelHash, BOOL p5) { return invoke<void>(0x150E808B375A385A, x, y, z, p3, modelHash, p5); } // 0x150E808B375A385A 0x335190A2 b323
	static void REMOVE_FORCED_OBJECT(Any p0, Any p1, Any p2, Any p3, Any p4) { return invoke<void>(0x61B6775E83C0DB6F, p0, p1, p2, p3, p4); } // 0x61B6775E83C0DB6F 0xAED73ADD b323
	static void SET_ENTITY_NO_COLLISION_ENTITY(Entity entity1, Entity entity2, BOOL thisFrameOnly) { return invoke<void>(0xA53ED5520C07654A, entity1, entity2, thisFrameOnly); } // 0xA53ED5520C07654A 0x1E11BFE9 b323
	 // p1 always false.
	static void SET_CAN_AUTO_VAULT_ON_ENTITY(Entity entity, BOOL toggle) { return invoke<void>(0xE12ABE5E3A389A6C, entity, toggle); } // 0xE12ABE5E3A389A6C 0x44767B31 b323
	 // p1 always false.
	static void SET_CAN_CLIMB_ON_ENTITY(Entity entity, BOOL toggle) { return invoke<void>(0xA80AE305E0A3044F, entity, toggle); } // 0xA80AE305E0A3044F 0xE224A6A5 b323
	 // SET_ENTITY_*
	static void _0x1A092BB0C3808B96(Entity entity, BOOL p1) { return invoke<void>(0x1A092BB0C3808B96, entity, p1); } // 0x1A092BB0C3808B96 b323
	 // Gets the world rotation of the specified bone of the specified entity.
	static Vector3 _GET_ENTITY_BONE_ROTATION(Entity entity, int boneIndex) { return invoke<Vector3>(0xCE6294A232D03786, entity, boneIndex); } // 0xCE6294A232D03786 b791
	 // Gets the position of the specified bone of the specified entity.
	static Vector3 _GET_ENTITY_BONE_COORDS(Entity entity, int boneIndex) { return invoke<Vector3>(0x46F8696933A63C9B, entity, boneIndex); } // 0x46F8696933A63C9B b877
	 // Gets the local rotation of the specified bone of the specified entity.
	static Vector3 _GET_ENTITY_BONE_ROTATION_LOCAL(Entity entity, int boneIndex) { return invoke<Vector3>(0xBD8D32550E5CEBFE, entity, boneIndex); } // 0xBD8D32550E5CEBFE b1734
}

namespace EVENT
{
	static void SET_DECISION_MAKER(Ped ped, Hash name) { return invoke<void>(0xB604A2942ADED0EE, ped, name); } // 0xB604A2942ADED0EE 0x19CEAC9E b323
	 // eventType: https://alloc8or.re/gta5/doc/enums/eEventType.txt
	static void CLEAR_DECISION_MAKER_EVENT_RESPONSE(Hash name, int eventType) { return invoke<void>(0x4FC9381A7AEE8968, name, eventType); } // 0x4FC9381A7AEE8968 0x07ABD94D b323
	 // eventType: https://alloc8or.re/gta5/doc/enums/eEventType.txt
	 // 
	 // This is limited to 4 blocked events at a time.
	static void BLOCK_DECISION_MAKER_EVENT(Hash name, int eventType) { return invoke<void>(0xE42FCDFD0E4196F7, name, eventType); } // 0xE42FCDFD0E4196F7 0x57506EA6 b323
	 // eventType: https://alloc8or.re/gta5/doc/enums/eEventType.txt
	static void UNBLOCK_DECISION_MAKER_EVENT(Hash name, int eventType) { return invoke<void>(0xD7CD9CF34F2C99E8, name, eventType); } // 0xD7CD9CF34F2C99E8 0x62A3161D b323
	 // eventType: https://alloc8or.re/gta5/doc/enums/eEventType.txt
	static ScrHandle ADD_SHOCKING_EVENT_AT_POSITION(int eventType, float x, float y, float z, float duration) { return invoke<ScrHandle>(0xD9F8455409B525E9, eventType, x, y, z, duration); } // 0xD9F8455409B525E9 0x0B30F779 b323
	 // eventType: https://alloc8or.re/gta5/doc/enums/eEventType.txt
	static ScrHandle ADD_SHOCKING_EVENT_FOR_ENTITY(int eventType, Entity entity, float duration) { return invoke<ScrHandle>(0x7FD8F3BE76F89422, eventType, entity, duration); } // 0x7FD8F3BE76F89422 0xA81B5B71 b323
	 // eventType: https://alloc8or.re/gta5/doc/enums/eEventType.txt
	static BOOL IS_SHOCKING_EVENT_IN_SPHERE(int eventType, float x, float y, float z, float radius) { return invoke<BOOL>(0x1374ABB7C15BAB92, eventType, x, y, z, radius); } // 0x1374ABB7C15BAB92 0x2F98823E b323
	static BOOL REMOVE_SHOCKING_EVENT(ScrHandle event) { return invoke<BOOL>(0x2CDA538C44C6CCE5, event); } // 0x2CDA538C44C6CCE5 0xF82D5A87 b323
	static void REMOVE_ALL_SHOCKING_EVENTS(BOOL p0) { return invoke<void>(0xEAABE8FDFA21274C, p0); } // 0xEAABE8FDFA21274C 0x64DF6282 b323
}

namespace FILES
{
	static void INIT_SHOP_PED_COMPONENT(Any* outComponent) { return invoke<void>(0x1E8C308FD312C036, outComponent); } // 0x1E8C308FD312C036 0xB818C7FC b323
	static void INIT_SHOP_PED_PROP(Any* outProp) { return invoke<void>(0xEB0A2B758F7B850F, outProp); } // 0xEB0A2B758F7B850F 0xF5659E50 b323
	 // character is 0 for Michael, 1 for Franklin, 2 for Trevor, 3 for freemode male, and 4 for freemode female.
	 // 
	 // componentId is between 0 and 11 and corresponds to the usual component slots.
	 // 
	 // p1 could be the outfit number; unsure.
	 // 
	 // p2 is usually -1; unknown function.
	 // 
	 // p3 appears to be a boolean flag; unknown function.
	 // 
	 // p4 is usually -1; unknown function.
	static int _GET_NUM_PROPS_FROM_OUTFIT(int character, int p1, int p2, BOOL p3, int p4, int componentId) { return invoke<int>(0x9BDF59818B1E38C1, character, p1, p2, p3, p4, componentId); } // 0x9BDF59818B1E38C1 0x594E862C b323
	static void GET_SHOP_PED_QUERY_COMPONENT(int componentId, int* outComponent) { return invoke<void>(0x249E310B2D920699, componentId, outComponent); } // 0x249E310B2D920699 0xC0718904 b323
	 // More info here: https://gist.github.com/root-cause/3b80234367b0c856d60bf5cb4b826f86
	static void GET_SHOP_PED_COMPONENT(Hash componentHash, Any* outComponent) { return invoke<void>(0x74C0E2A57EC66760, componentHash, outComponent); } // 0x74C0E2A57EC66760 0xB39677C5 b323
	static void GET_SHOP_PED_QUERY_PROP(Any p0, Any* p1) { return invoke<void>(0xDE44A00999B2837D, p0, p1); } // 0xDE44A00999B2837D 0x1D3C1466 b323
	static Hash GET_HASH_NAME_FOR_COMPONENT(Entity entity, int componentId, int drawableVariant, int textureVariant) { return invoke<Hash>(0x0368B3A838070348, entity, componentId, drawableVariant, textureVariant); } // 0x0368B3A838070348 0xC8A4BF12 b323
	 // Restriction tags: https://gist.github.com/root-cause/c831b5f74ccc069059f5100a693022f8
	 // componentId/last parameter seems to be unused.
	static BOOL DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Hash componentHash, Hash restrictionTagHash, int componentId) { return invoke<BOOL>(0x341DE7ED1D2A1BFD, componentHash, restrictionTagHash, componentId); } // 0x341DE7ED1D2A1BFD 0x8E2C7FD5 b323
	 // characters
	 // 
	 // 0: Michael
	 // 1: Franklin
	 // 2: Trevor
	 // 3: MPMale
	 // 4: MPFemale
	static int _0xF3FBE2D50A6A8C28(int character, BOOL p1) { return invoke<int>(0xF3FBE2D50A6A8C28, character, p1); } // 0xF3FBE2D50A6A8C28 0x1ECD23E7 b323
	 // struct Outfit_s
	 //  {
	 //      int mask, torso, pants, parachute, shoes, misc1, tops1, armour, crew, tops2, hat, glasses, earpiece;
	 //       int maskTexture, torsoTexture, pantsTexture, parachuteTexture, shoesTexture, misc1Texture, tops1Texture, 
	 //          armourTexture, crewTexture, tops2Texture, hatTexture, glassesTexture, earpieceTexture;
	 //     };
	static void GET_SHOP_PED_QUERY_OUTFIT(Any p0, Any* outfit) { return invoke<void>(0x6D793F03A631FE56, p0, outfit); } // 0x6D793F03A631FE56 0x2F8013A1 b323
	static int GET_NUM_DLC_VEHICLES() { return invoke<int>(0xA7A866D21CD2329B); } // 0xA7A866D21CD2329B 0x8EAF9CF6 b323
	 // dlcVehicleIndex is 0 to GET_NUM_DLC_VEHICLS() - 1
	static Hash GET_DLC_VEHICLE_MODEL(int dlcVehicleIndex) { return invoke<Hash>(0xECC01B7C5763333C, dlcVehicleIndex); } // 0xECC01B7C5763333C 0xA2201E09 b323
	 // dlcVehicleIndex takes a number from 0 - GET_NUM_DLC_VEHICLES() - 1.
	 // outData is a struct of 3 8-byte items.
	 // The Second item in the struct *(Hash *)(outData + 1) is the vehicle hash.
	static BOOL GET_DLC_VEHICLE_DATA(int dlcVehicleIndex, int* outData) { return invoke<BOOL>(0x33468EDC08E371F6, dlcVehicleIndex, outData); } // 0x33468EDC08E371F6 0xCF428FA4 b323
	static int GET_DLC_VEHICLE_FLAGS(int dlcVehicleIndex) { return invoke<int>(0x5549EE11FA22FCF2, dlcVehicleIndex); } // 0x5549EE11FA22FCF2 0xAB12738C b323
	 // Returns the total number of DLC weapons.
	static int GET_NUM_DLC_WEAPONS() { return invoke<int>(0xEE47635F352DA367); } // 0xEE47635F352DA367 0x2B757E6C b323
	 // Returns the total number of DLC weapons that are available in SP (availableInSP field in shop_weapon.meta).
	static int _GET_NUM_DLC_WEAPONS_SP() { return invoke<int>(0x4160B65AE085B5A9); } // 0x4160B65AE085B5A9 b2060
	 // 
	 // dlcWeaponIndex takes a number from 0 - GET_NUM_DLC_WEAPONS() - 1.
	 // struct DlcWeaponData
	 // {
	 // int emptyCheck; //use DLC1::_IS_DLC_DATA_EMPTY on this
	 // int padding1;
	 // int weaponHash;
	 // int padding2;
	 // int unk;
	 // int padding3;
	 // int weaponCost;
	 // int padding4;
	 // int ammoCost;
	 // int padding5;
	 // int ammoType;
	 // int padding6;
	 // int defaultClipSize;
	 // int padding7;
	 // char nameLabel[64];
	 // char descLabel[64];
	 // char desc2Label[64]; // usually "the" + name
	 // char upperCaseNameLabel[64];
	 // };
	static BOOL GET_DLC_WEAPON_DATA(int dlcWeaponIndex, int* outData) { return invoke<BOOL>(0x79923CD21BECE14E, dlcWeaponIndex, outData); } // 0x79923CD21BECE14E 0xD88EC8EA b323
	 // Same as GET_DLC_WEAPON_DATA but only works for DLC weapons that are available in SP.
	static BOOL _GET_DLC_WEAPON_DATA_SP(int dlcWeaponIndex, int* outData) { return invoke<BOOL>(0x310836EE7129BA33, dlcWeaponIndex, outData); } // 0x310836EE7129BA33 b2060
	 // Returns the total number of DLC weapon components.
	static int GET_NUM_DLC_WEAPON_COMPONENTS(int dlcWeaponIndex) { return invoke<int>(0x405425358A7D61FE, dlcWeaponIndex); } // 0x405425358A7D61FE 0x476B23A9 b323
	 // Returns the total number of DLC weapon components that are available in SP.
	static int _GET_NUM_DLC_WEAPON_COMPONENTS_SP(int dlcWeaponIndex) { return invoke<int>(0xAD2A7A6DFF55841B, dlcWeaponIndex); } // 0xAD2A7A6DFF55841B b2060
	 // p0 seems to be the weapon index
	 // p1 seems to be the weapon component index
	 // struct DlcComponentData{
	 // int attachBone;
	 // int padding1;
	 // int bActiveByDefault;
	 // int padding2;
	 // int unk;
	 // int padding3;
	 // int componentHash;
	 // int padding4;
	 // int unk2;
	 // int padding5;
	 // int componentCost;
	 // int padding6;
	 // char nameLabel[64];
	 // char descLabel[64];
	 // };
	 // 
	static BOOL GET_DLC_WEAPON_COMPONENT_DATA(int dlcWeaponIndex, int dlcWeapCompIndex, int* ComponentDataPtr) { return invoke<BOOL>(0x6CF598A2957C2BF8, dlcWeaponIndex, dlcWeapCompIndex, ComponentDataPtr); } // 0x6CF598A2957C2BF8 0x4B83FCAF b323
	 // Same as GET_DLC_WEAPON_COMPONENT_DATA but only works for DLC components that are available in SP.
	static BOOL _GET_DLC_WEAPON_COMPONENT_DATA_SP(int dlcWeaponIndex, int dlcWeapCompIndex, int* ComponentDataPtr) { return invoke<BOOL>(0x31D5E073B6F93CDC, dlcWeaponIndex, dlcWeapCompIndex, ComponentDataPtr); } // 0x31D5E073B6F93CDC b2060
	static BOOL IS_CONTENT_ITEM_LOCKED(Hash itemHash) { return invoke<BOOL>(0xD4D7B033C3AA243C, itemHash); } // 0xD4D7B033C3AA243C 0x06396058 b323
}

namespace FIRE
{
	 // Starts a fire:
	 // 
	 // xyz: Location of fire
	 // maxChildren: The max amount of times a fire can spread to other objects. Must be 25 or less, or the function will do nothing.
	 // isGasFire: Whether or not the fire is powered by gasoline.
	static FireId START_SCRIPT_FIRE(float X, float Y, float Z, int maxChildren, BOOL isGasFire) { return invoke<FireId>(0x6B83617E04503888, X, Y, Z, maxChildren, isGasFire); } // 0x6B83617E04503888 0xE7529357 b323
	static void REMOVE_SCRIPT_FIRE(FireId fireHandle) { return invoke<void>(0x7FF548385680673F, fireHandle); } // 0x7FF548385680673F 0x6B21FE26 b323
	static FireId START_ENTITY_FIRE(Entity entity) { return invoke<FireId>(0xF6A9D9708F6F23DF, entity); } // 0xF6A9D9708F6F23DF 0x8928428E b323
	static void STOP_ENTITY_FIRE(Entity entity) { return invoke<void>(0x7F0DD2EBBB651AFF, entity); } // 0x7F0DD2EBBB651AFF 0xCE8C9066 b323
	static BOOL IS_ENTITY_ON_FIRE(Entity entity) { return invoke<BOOL>(0x28D3FED7190D3A0B, entity); } // 0x28D3FED7190D3A0B 0x8C73E64F b323
	static int GET_NUMBER_OF_FIRES_IN_RANGE(float x, float y, float z, float radius) { return invoke<int>(0x50CAD495A460B305, x, y, z, radius); } // 0x50CAD495A460B305 0x654D93B7 b323
	static void STOP_FIRE_IN_RANGE(float x, float y, float z, float radius) { return invoke<void>(0x056A8A219B8E829F, x, y, z, radius); } // 0x056A8A219B8E829F 0x725C7205 b323
	 // Returns TRUE if it found something. FALSE if not.
	static BOOL GET_CLOSEST_FIRE_POS(Vector3* outPosition, float x, float y, float z) { return invoke<BOOL>(0x352A9F6BCF90081F, outPosition, x, y, z); } // 0x352A9F6BCF90081F 0xC4977B47 b323
	 // BOOL isAudible = If explosion makes a sound.
	 // BOOL isInvisible = If the explosion is invisible or not.
	 // 
	 // explosionType: https://alloc8or.re/gta5/doc/enums/eExplosionTag.txt
	static void ADD_EXPLOSION(float x, float y, float z, int explosionType, float damageScale, BOOL isAudible, BOOL isInvisible, float cameraShake, BOOL noDamage) { return invoke<void>(0xE3AD2BDBAEE269AC, x, y, z, explosionType, damageScale, isAudible, isInvisible, cameraShake, noDamage); } // 0xE3AD2BDBAEE269AC 0x10AF5258 b323
	 // isAudible: If explosion makes a sound.
	 // isInvisible: If the explosion is invisible or not.
	 // explosionType: See ADD_EXPLOSION.
	static void ADD_OWNED_EXPLOSION(Ped ped, float x, float y, float z, int explosionType, float damageScale, BOOL isAudible, BOOL isInvisible, float cameraShake) { return invoke<void>(0x172AA1B624FA1013, ped, x, y, z, explosionType, damageScale, isAudible, isInvisible, cameraShake); } // 0x172AA1B624FA1013 0x27EE0D67 b323
	 // explosionType: See ADD_EXPLOSION.
	static BOOL IS_EXPLOSION_IN_AREA(int explosionType, float x1, float y1, float z1, float x2, float y2, float z2) { return invoke<BOOL>(0x2E2EBA0EE7CED0E0, explosionType, x1, y1, z1, x2, y2, z2); } // 0x2E2EBA0EE7CED0E0 0xFB40075B b323
	 // explosionType: See ADD_EXPLOSION.
	static BOOL IS_EXPLOSION_IN_SPHERE(int explosionType, float x, float y, float z, float radius) { return invoke<BOOL>(0xAB0F816885B0E483, explosionType, x, y, z, radius); } // 0xAB0F816885B0E483 0xD455A7F3 b323
	 // explosionType: See ADD_EXPLOSION.
	static BOOL IS_EXPLOSION_IN_ANGLED_AREA(int explosionType, float x1, float y1, float z1, float x2, float y2, float z2, float angle) { return invoke<BOOL>(0xA079A6C51525DC4B, explosionType, x1, y1, z1, x2, y2, z2, angle); } // 0xA079A6C51525DC4B 0x0128FED9 b323
	 // Returns a handle to the first entity within the a circle spawned inside the 2 points from a radius.
	 // 
	 // explosionType: See ADD_EXPLOSION.
	static Entity _GET_ENTITY_INSIDE_EXPLOSION_AREA(int explosionType, float x1, float y1, float z1, float x2, float y2, float z2, float radius) { return invoke<Entity>(0x14BA4BA137AF6CEC, explosionType, x1, y1, z1, x2, y2, z2, radius); } // 0x14BA4BA137AF6CEC 0xAEC0D176 b323
}

namespace GRAPHICS
{
	 // NOTE: Debugging functions are not present in the retail version of the game.
	static void SET_DEBUG_LINES_AND_SPHERES_DRAWING_ACTIVE(BOOL enabled) { return invoke<void>(0x175B6BFC15CDD0C5, enabled); } // 0x175B6BFC15CDD0C5 0x1418CA37 b323
	static void DRAW_DEBUG_LINE(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9) { return invoke<void>(0x7FDFADE676AA3CB0, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); } // 0x7FDFADE676AA3CB0 0xABF783AB b323
	 // NOTE: Debugging functions are not present in the retail version of the game.
	static void DRAW_DEBUG_LINE_WITH_TWO_COLOURS(float x1, float y1, float z1, float x2, float y2, float z2, int r1, int g1, int b1, int r2, int g2, int b2, int alpha1, int alpha2) { return invoke<void>(0xD8B9A8AC5608FF94, x1, y1, z1, x2, y2, z2, r1, g1, b1, r2, g2, b2, alpha1, alpha2); } // 0xD8B9A8AC5608FF94 0xE8BFF632 b323
	 // NOTE: Debugging functions are not present in the retail version of the game.
	static void DRAW_DEBUG_SPHERE(float x, float y, float z, float radius, int red, int green, int blue, int alpha) { return invoke<void>(0xAAD68E1AB39DA632, x, y, z, radius, red, green, blue, alpha); } // 0xAAD68E1AB39DA632 0x304D0EEF b323
	 // NOTE: Debugging functions are not present in the retail version of the game.
	static void DRAW_DEBUG_TEXT(const char* text, float x, float y, float z, int red, int green, int blue, int alpha) { return invoke<void>(0x3903E216620488E8, text, x, y, z, red, green, blue, alpha); } // 0x3903E216620488E8 0x269B006F b323
	 // NOTE: Debugging functions are not present in the retail version of the game.
	static void DRAW_DEBUG_TEXT_2D(const char* text, float x, float y, float z, int red, int green, int blue, int alpha) { return invoke<void>(0xA3BB2E9555C05A8F, text, x, y, z, red, green, blue, alpha); } // 0xA3BB2E9555C05A8F 0x528B973B b323
	static void _0x0A46AF8A78DC5E0A() { return invoke<void>(0x0A46AF8A78DC5E0A); } // 0x0A46AF8A78DC5E0A 0x9E553002 b323
	 // LOAD_*
	static BOOL _0x4862437A486F91B0(Any* p0, Any p1, Any p2, Any p3) { return invoke<BOOL>(0x4862437A486F91B0, p0, p1, p2, p3); } // 0x4862437A486F91B0 0x56C1E488 b323
	static int _0x1670F8D05056F257(Any* p0) { return invoke<int>(0x1670F8D05056F257, p0); } // 0x1670F8D05056F257 0x226B08EA b323
	static void _0x1072F115DAB0717E(BOOL p0, BOOL p1) { return invoke<void>(0x1072F115DAB0717E, p0, p1); } // 0x1072F115DAB0717E 0xE9F2B68F b323
	 // This function is hard-coded to always return 0.
	static int GET_MAXIMUM_NUMBER_OF_PHOTOS() { return invoke<int>(0x34D23450F028B0BF); } // 0x34D23450F028B0BF 0x727AA63F b323
	 // 2 matches across 2 scripts. Only showed in appcamera & appmedia. Both were 0.
	static Any _0x2A893980E96B659A(Any p0) { return invoke<Any>(0x2A893980E96B659A, p0); } // 0x2A893980E96B659A 0x199FABF0 b323
	 // 3 matches across 3 scripts. First 2 were 0, 3rd was 1. Possibly a bool.
	 // appcamera, appmedia, and cellphone_controller.
	static Any _0xF5BED327CEA362B1(Any p0) { return invoke<Any>(0xF5BED327CEA362B1, p0); } // 0xF5BED327CEA362B1 0x596B900D b323
	static void _0x4AF92ACD3141D96C() { return invoke<void>(0x4AF92ACD3141D96C); } // 0x4AF92ACD3141D96C 0xC9EF81ED b323
	 // This function is hard-coded to always return 0.
	static Any _0xE791DF1F73ED2C8B(Any p0) { return invoke<Any>(0xE791DF1F73ED2C8B, p0); } // 0xE791DF1F73ED2C8B 0x9D84554C b323
	static void _DRAW_LIGHT_WITH_RANGE_AND_SHADOW(float x, float y, float z, int r, int g, int b, float range, float intensity, float shadow) { return invoke<void>(0xF49E9A9716A04595, x, y, z, r, g, b, range, intensity, shadow); } // 0xF49E9A9716A04595 b323
	static void DRAW_LIGHT_WITH_RANGE(float posX, float posY, float posZ, int colorR, int colorG, int colorB, float range, float intensity) { return invoke<void>(0xF2A1B2771A01DBD4, posX, posY, posZ, colorR, colorG, colorB, range, intensity); } // 0xF2A1B2771A01DBD4 0x6A396E9A b323
	 // Parameters:
	 // * pos - coordinate where the spotlight is located
	 // * dir - the direction vector the spotlight should aim at from its current position
	 // * r,g,b - color of the spotlight
	 // * distance - the maximum distance the light can reach
	 // * brightness - the brightness of the light
	 // * roundness - "smoothness" of the circle edge
	 // * radius - the radius size of the spotlight
	 // * falloff - the falloff size of the light's edge (example: www.i.imgur.com/DemAWeO.jpg)
	 // 
	 // Example in C# (spotlight aims at the closest vehicle):
	 // Vector3 myPos = Game.Player.Character.Position;
	 // Vehicle nearest = World.GetClosestVehicle(myPos , 1000f);
	 // Vector3 destinationCoords = nearest.Position;
	 // Vector3 dirVector = destinationCoords - myPos;
	 // dirVector.Normalize();
	 // Function.Call(Hash.DRAW_SPOT_LIGHT, pos.X, pos.Y, pos.Z, dirVector.X, dirVector.Y, dirVector.Z, 255, 255, 255, 100.0f, 1f, 0.0f, 13.0f, 1f);
	static void DRAW_SPOT_LIGHT(float posX, float posY, float posZ, float dirX, float dirY, float dirZ, int colorR, int colorG, int colorB, float distance, float brightness, float hardness, float radius, float falloff) { return invoke<void>(0xD0F64B265C8C8B33, posX, posY, posZ, dirX, dirY, dirZ, colorR, colorG, colorB, distance, brightness, hardness, radius, falloff); } // 0xD0F64B265C8C8B33 0xBDBC410C b323
	 // enum MarkerTypes
	 // {
	 //     MarkerTypeUpsideDownCone = 0,
	 //  MarkerTypeVerticalCylinder = 1,
	 //    MarkerTypeThickChevronUp = 2,
	 //  MarkerTypeThinChevronUp = 3,
	 //   MarkerTypeCheckeredFlagRect = 4,
	 //   MarkerTypeCheckeredFlagCircle = 5,
	 //     MarkerTypeVerticleCircle = 6,
	 //  MarkerTypePlaneModel = 7,
	 //  MarkerTypeLostMCDark = 8,
	 //  MarkerTypeLostMCLight = 9,
	 //     MarkerTypeNumber0 = 10,
	 //    MarkerTypeNumber1 = 11,
	 //    MarkerTypeNumber2 = 12,
	 //    MarkerTypeNumber3 = 13,
	 //    MarkerTypeNumber4 = 14,
	 //    MarkerTypeNumber5 = 15,
	 //    MarkerTypeNumber6 = 16,
	 //    MarkerTypeNumber7 = 17,
	 //    MarkerTypeNumber8 = 18,
	 //    MarkerTypeNumber9 = 19,
	 //    MarkerTypeChevronUpx1 = 20,
	 //    MarkerTypeChevronUpx2 = 21,
	 //    MarkerTypeChevronUpx3 = 22,
	 //    MarkerTypeHorizontalCircleFat = 23,
	 //    MarkerTypeReplayIcon = 24,
	 //     MarkerTypeHorizontalCircleSkinny = 25,
	 //     MarkerTypeHorizontalCircleSkinny_Arrow = 26,
	 //   MarkerTypeHorizontalSplitArrowCircle = 27,
	 //     MarkerTypeDebugSphere = 28,
	 //    MarkerTypeDallorSign = 29,
	 //     MarkerTypeHorizontalBars = 30,
	 //     MarkerTypeWolfHead = 31
	 // };
	 // 
	 // dirX/Y/Z represent a heading on each axis in which the marker should face, alternatively you can rotate each axis independently with rotX/Y/Z (and set dirX/Y/Z all to 0).
	 // 
	 // faceCamera - Rotates only the y-axis (the heading) towards the camera
	 // 
	 // p19 - no effect, default value in script is 2
	 // 
	 // rotate - Rotates only on the y-axis (the heading)
	 // 
	 // textureDict - Name of texture dictionary to load texture from (e.g. "GolfPutting")
	 // 
	 // textureName - Name of texture inside dictionary to load (e.g. "PuttingMarker")
	 // 
	 // drawOnEnts - Draws the marker onto any entities that intersect it
	 // 
	 // basically what he said, except textureDict and textureName are totally not const char*, or if so, then they are always set to 0/NULL/nullptr in every script I checked, eg:
	 // 
	 // bj.c: graphics::draw_marker(6, vParam0, 0f, 0f, 1f, 0f, 0f, 0f, 4f, 4f, 4f, 240, 200, 80, iVar1, 0, 0, 2, 0, 0, 0, false);
	 // 
	 // his is what I used to draw an amber downward pointing chevron "V", has to be redrawn every frame.  The 180 is for 180 degrees rotation around the Y axis, the 50 is alpha, assuming max is 100, but it will accept 255.
	 // 
	 // GRAPHICS::DRAW_MARKER(2, v.x, v.y, v.z + 2, 0, 0, 0, 0, 180, 0, 2, 2, 2, 255, 128, 0, 50, 0, 1, 1, 0, 0, 0, 0);
	 // 
	 // 
	static void DRAW_MARKER(int type, float posX, float posY, float posZ, float dirX, float dirY, float dirZ, float rotX, float rotY, float rotZ, float scaleX, float scaleY, float scaleZ, int red, int green, int blue, int alpha, BOOL bobUpAndDown, BOOL faceCamera, int p19, BOOL rotate, const char* textureDict, const char* textureName, BOOL drawOnEnts) { return invoke<void>(0x28477EC23D892089, type, posX, posY, posZ, dirX, dirY, dirZ, rotX, rotY, rotZ, scaleX, scaleY, scaleZ, red, green, blue, alpha, bobUpAndDown, faceCamera, p19, rotate, textureDict, textureName, drawOnEnts); } // 0x28477EC23D892089 0x48D84A02 b323
	 // Creates a checkpoint. Returns the handle of the checkpoint.
	 // 
	 // 20/03/17 : Attention, checkpoints are already handled by the game itself, so you must not loop it like markers.
	 // 
	 // Parameters:
	 // * type - The type of checkpoint to create. See below for a list of checkpoint types.
	 // * pos1 - The position of the checkpoint.
	 // * pos2 - The position of the next checkpoint to point to.
	 // * radius - The radius of the checkpoint.
	 // * color - The color of the checkpoint.
	 // * reserved - Special parameter, see below for details. Usually set to 0 in the scripts.
	 // 
	 // Checkpoint types:
	 // 0-4---------Cylinder: 1 arrow, 2 arrow, 3 arrows, CycleArrow, Checker
	 // 5-9---------Cylinder: 1 arrow, 2 arrow, 3 arrows, CycleArrow, Checker
	 // 10-14-------Ring: 1 arrow, 2 arrow, 3 arrows, CycleArrow, Checker
	 // 15-19-------1 arrow, 2 arrow, 3 arrows, CycleArrow, Checker      
	 // 20-24-------Cylinder: 1 arrow, 2 arrow, 3 arrows, CycleArrow, Checker 
	 // 25-29-------Cylinder: 1 arrow, 2 arrow, 3 arrows, CycleArrow, Checker    
	 // 30-34-------Cylinder: 1 arrow, 2 arrow, 3 arrows, CycleArrow, Checker 
	 // 35-38-------Ring: Airplane Up, Left, Right, UpsideDown
	 // 39----------?
	 // 40----------Ring: just a ring
	 // 41----------?
	 // 42-44-------Cylinder w/ number (uses 'reserved' parameter)
	 // 45-47-------Cylinder no arrow or number
	 // 
	 // If using type 42-44, reserved sets number / number and shape to display
	 // 
	 // 0-99------------Just numbers (0-99)
	 // 100-109-----------------Arrow (0-9)
	 // 110-119------------Two arrows (0-9)
	 // 120-129----------Three arrows (0-9)
	 // 130-139----------------Circle (0-9)
	 // 140-149------------CycleArrow (0-9)
	 // 150-159----------------Circle (0-9)
	 // 160-169----Circle  w/ pointer (0-9)
	 // 170-179-------Perforated ring (0-9)
	 // 180-189----------------Sphere (0-9)
	static int CREATE_CHECKPOINT(int type, float posX1, float posY1, float posZ1, float posX2, float posY2, float posZ2, float radius, int red, int green, int blue, int alpha, int reserved) { return invoke<int>(0x0134F0835AB6BFCB, type, posX1, posY1, posZ1, posX2, posY2, posZ2, radius, red, green, blue, alpha, reserved); } // 0x0134F0835AB6BFCB 0xF541B690 b323
	 // Sets the cylinder height of the checkpoint.
	 // 
	 // Parameters:
	 // * nearHeight - The height of the checkpoint when inside of the radius.
	 // * farHeight - The height of the checkpoint when outside of the radius.
	 // * radius - The radius of the checkpoint.
	static void SET_CHECKPOINT_CYLINDER_HEIGHT(int checkpoint, float nearHeight, float farHeight, float radius) { return invoke<void>(0x2707AAE9D9297D89, checkpoint, nearHeight, farHeight, radius); } // 0x2707AAE9D9297D89 0xFF0F9B22 b323
	 // Sets the checkpoint color.
	static void SET_CHECKPOINT_RGBA(int checkpoint, int red, int green, int blue, int alpha) { return invoke<void>(0x7167371E8AD747F7, checkpoint, red, green, blue, alpha); } // 0x7167371E8AD747F7 0xEF9C8CB3 b323
	 // Sets the checkpoint icon color.
	static void _SET_CHECKPOINT_ICON_RGBA(int checkpoint, int red, int green, int blue, int alpha) { return invoke<void>(0xB9EA40907C680580, checkpoint, red, green, blue, alpha); } // 0xB9EA40907C680580 0xA5456DBB b323
	 // This does not move an existing checkpoint... so wtf.
	static void _0xF51D36185993515D(int checkpoint, float posX, float posY, float posZ, float unkX, float unkY, float unkZ) { return invoke<void>(0xF51D36185993515D, checkpoint, posX, posY, posZ, unkX, unkY, unkZ); } // 0xF51D36185993515D 0x20EABD0F b323
	static void DELETE_CHECKPOINT(int checkpoint) { return invoke<void>(0xF5ED37F54CD4D52E, checkpoint); } // 0xF5ED37F54CD4D52E 0xB66CF3CA b323
	static void _0x22A249A53034450A(BOOL p0) { return invoke<void>(0x22A249A53034450A, p0); } // 0x22A249A53034450A 0x932FDB81 b323
	 // last param isnt a toggle
	static void REQUEST_STREAMED_TEXTURE_DICT(const char* textureDict, BOOL p1) { return invoke<void>(0xDFA2EF8E04127DD5, textureDict, p1); } // 0xDFA2EF8E04127DD5 0x4C9B035F b323
	static BOOL HAS_STREAMED_TEXTURE_DICT_LOADED(const char* textureDict) { return invoke<BOOL>(0x0145F696AAAAD2E4, textureDict); } // 0x0145F696AAAAD2E4 0x3F436EEF b323
	static void SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(const char* textureDict) { return invoke<void>(0xBE2CACCF5A8AA805, textureDict); } // 0xBE2CACCF5A8AA805 0xF07DDA38 b323
	 // Draws a rectangle on the screen.
	 // 
	 // -x: The relative X point of the center of the rectangle. (0.0-1.0, 0.0 is the left edge of the screen, 1.0 is the right edge of the screen)
	 // 
	 // -y: The relative Y point of the center of the rectangle. (0.0-1.0, 0.0 is the top edge of the screen, 1.0 is the bottom edge of the screen)
	 // 
	 // -width: The relative width of the rectangle. (0.0-1.0, 1.0 means the whole screen width)
	 // 
	 // -height: The relative height of the rectangle. (0.0-1.0, 1.0 means the whole screen height)
	 // 
	 // -R: Red part of the color. (0-255)
	 // 
	 // -G: Green part of the color. (0-255)
	 // 
	 // -B: Blue part of the color. (0-255)
	 // 
	 // -A: Alpha part of the color. (0-255, 0 means totally transparent, 255 means totally opaque)
	 // 
	 // The total number of rectangles to be drawn in one frame is apparently limited to 399.
	 // 
	static void DRAW_RECT(float x, float y, float width, float height, int r, int g, int b, int a, BOOL p8) { return invoke<void>(0x3A618A217E5154F0, x, y, width, height, r, g, b, a, p8); } // 0x3A618A217E5154F0 0xDD2BFC77 b323
	 // Sets a flag defining whether or not script draw commands should continue being drawn behind the pause menu. This is usually used for TV channels and other draw commands that are used with a world render target.
	static void SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(BOOL toggle) { return invoke<void>(0xC6372ECD45D73BCD, toggle); } // 0xC6372ECD45D73BCD 0xF8FBCC25 b323
	 // Sets the draw order for script draw commands.
	 // 
	 // Examples from decompiled scripts:
	 // GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(7);
	 // GRAPHICS::DRAW_RECT(0.5, 0.5, 3.0, 3.0, v_4, v_5, v_6, a_0._f172, 0);
	 // 
	 // GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(1);
	 // GRAPHICS::DRAW_RECT(0.5, 0.5, 1.5, 1.5, 0, 0, 0, 255, 0);
	static void SET_SCRIPT_GFX_DRAW_ORDER(int drawOrder) { return invoke<void>(0x61BB1D9B3A95D802, drawOrder); } // 0x61BB1D9B3A95D802 0xADF81D24 b323
	 // horizontalAlign: The horizontal alignment. This can be 67 ('C'), 76 ('L'), or 82 ('R').
	 // verticalAlign: The vertical alignment. This can be 67 ('C'), 66 ('B'), or 84 ('T').
	 // 
	 // This function anchors script draws to a side of the safe zone. This needs to be called to make the interface independent of the player's safe zone configuration.
	 // 
	 // These values are equivalent to alignX and alignY in common:/data/ui/frontend.xml, which can be used as a baseline for default alignment.
	 // 
	 // Using any other value (including 0) will result in the safe zone not being taken into account for this draw. The canonical value for this is 'I' (73).
	 // 
	 // For example, you can use SET_SCRIPT_GFX_ALIGN(0, 84) to only scale on the Y axis (to the top), but not change the X axis.
	 // 
	 // To reset the value, use RESET_SCRIPT_GFX_ALIGN.
	static void SET_SCRIPT_GFX_ALIGN(int horizontalAlign, int verticalAlign) { return invoke<void>(0xB8A850F20A067EB6, horizontalAlign, verticalAlign); } // 0xB8A850F20A067EB6 0x228A2598 b323
	 // This function resets the alignment set using SET_SCRIPT_GFX_ALIGN and SET_SCRIPT_GFX_ALIGN_PARAMS to the default values ('I', 'I'; 0, 0, 0, 0).
	 // This should be used after having used the aforementioned functions in order to not affect any other scripts attempting to draw.
	static void RESET_SCRIPT_GFX_ALIGN() { return invoke<void>(0xE3A3DB414A373DAB); } // 0xE3A3DB414A373DAB 0x3FE33BD6 b323
	 // Sets the draw offset/calculated size for SET_SCRIPT_GFX_ALIGN. If using any alignment other than left/top, the game expects the width/height to be configured using this native in order to get a proper starting position for the draw command.
	static void SET_SCRIPT_GFX_ALIGN_PARAMS(float x, float y, float w, float h) { return invoke<void>(0xF5A2C681787E579D, x, y, w, h); } // 0xF5A2C681787E579D 0x76C641E4 b323
	 // Calculates the effective X/Y fractions when applying the values set by SET_SCRIPT_GFX_ALIGN and SET_SCRIPT_GFX_ALIGN_PARAMS
	static void _GET_SCRIPT_GFX_POSITION(float x, float y, float* calculatedX, float* calculatedY) { return invoke<void>(0x6DD8F5AA635EB4B2, x, y, calculatedX, calculatedY); } // 0x6DD8F5AA635EB4B2 b323
	 // Gets the scale of safe zone. if the safe zone size scale is max, it will return 1.0.
	static float GET_SAFE_ZONE_SIZE() { return invoke<float>(0xBAF107B6BB2C97F0); } // 0xBAF107B6BB2C97F0 0x3F0D1A6F b323
	 // Draws a 2D sprite on the screen.
	 // 
	 // Parameters:
	 // textureDict - Name of texture dictionary to load texture from (e.g. "CommonMenu", "MPWeaponsCommon", etc.)
	 // 
	 // textureName - Name of texture to load from texture dictionary (e.g. "last_team_standing_icon", "tennis_icon", etc.)
	 // 
	 // screenX/Y - Screen offset (0.5 = center)
	 // scaleX/Y - Texture scaling. Negative values can be used to flip the texture on that axis. (0.5 = half)
	 // 
	 // heading - Texture rotation in degrees (default = 0.0) positive is clockwise, measured in degrees
	 // 
	 // red,green,blue - Sprite color (default = 255/255/255)
	 // 
	 // alpha - opacity level
	static void DRAW_SPRITE(const char* textureDict, const char* textureName, float screenX, float screenY, float width, float height, float heading, int red, int green, int blue, int alpha, BOOL p11) { return invoke<void>(0xE7FFAE5EBF23D890, textureDict, textureName, screenX, screenY, width, height, heading, red, green, blue, alpha, p11); } // 0xE7FFAE5EBF23D890 0x1FEC16B0 b323
	static void _0x2D3B147AFAD49DE0(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11) { return invoke<void>(0x2D3B147AFAD49DE0, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11); } // 0x2D3B147AFAD49DE0 b1290
	 // Example:
	 // GRAPHICS::ADD_ENTITY_ICON(a_0, "MP_Arrow");
	 // 
	 // I tried this and nothing happened...
	static Any ADD_ENTITY_ICON(Entity entity, const char* icon) { return invoke<Any>(0x9CD43EEE12BF4DD0, entity, icon); } // 0x9CD43EEE12BF4DD0 0xF3027D21 b323
	static void SET_ENTITY_ICON_VISIBILITY(Entity entity, BOOL toggle) { return invoke<void>(0xE0E8BEECCA96BA31, entity, toggle); } // 0xE0E8BEECCA96BA31 0xD1D2FD52 b323
	static void SET_ENTITY_ICON_COLOR(Entity entity, int red, int green, int blue, int alpha) { return invoke<void>(0x1D5F595CCAE2E238, entity, red, green, blue, alpha); } // 0x1D5F595CCAE2E238 0x6EE1E946 b323
	 // Sets the on-screen drawing origin for draw-functions (which is normally x=0,y=0 in the upper left corner of the screen) to a world coordinate.
	 // From now on, the screen coordinate which displays the given world coordinate on the screen is seen as x=0,y=0.
	 // 
	 // Example in C#:
	 // Vector3 boneCoord = somePed.GetBoneCoord(Bone.SKEL_Head);
	 // Function.Call(Hash.SET_DRAW_ORIGIN, boneCoord.X, boneCoord.Y, boneCoord.Z, 0);
	 // Function.Call(Hash.DRAW_SPRITE, "helicopterhud", "hud_corner", -0.01, -0.015, 0.013, 0.013, 0.0, 255, 0, 0, 200);
	 // Function.Call(Hash.DRAW_SPRITE, "helicopterhud", "hud_corner", 0.01, -0.015, 0.013, 0.013, 90.0, 255, 0, 0, 200);
	 // Function.Call(Hash.DRAW_SPRITE, "helicopterhud", "hud_corner", -0.01, 0.015, 0.013, 0.013, 270.0, 255, 0, 0, 200);
	 // Function.Call(Hash.DRAW_SPRITE, "helicopterhud", "hud_corner", 0.01, 0.015, 0.013, 0.013, 180.0, 255, 0, 0, 200);
	 // Function.Call(Hash.CLEAR_DRAW_ORIGIN);
	 // 
	 // Result: www11.pic-upload.de/19.06.15/bkqohvil2uao.jpg
	 // If the pedestrian starts walking around now, the sprites are always around her head, no matter where the head is displayed on the screen.
	 // 
	 // This function also effects the drawing of texts and other UI-elements.
	 // The effect can be reset by calling GRAPHICS::CLEAR_DRAW_ORIGIN().
	static void SET_DRAW_ORIGIN(float x, float y, float z, Any p3) { return invoke<void>(0xAA0008F3BBB8F416, x, y, z, p3); } // 0xAA0008F3BBB8F416 0xE10198D5 b323
	 // Resets the screen's draw-origin which was changed by the function GRAPHICS::SET_DRAW_ORIGIN(...) back to x=0,y=0.
	 // 
	 // See GRAPHICS::SET_DRAW_ORIGIN(...) for further information.
	static void CLEAR_DRAW_ORIGIN() { return invoke<void>(0xFF0B610F6BE0D7AF); } // 0xFF0B610F6BE0D7AF 0xDD76B263 b323
	static int _SET_BINK_MOVIE(const char* name) { return invoke<int>(0x338D9F609FD632DB, name); } // 0x338D9F609FD632DB b1290
	static void _PLAY_BINK_MOVIE(int binkMovie) { return invoke<void>(0x70D2CC8A542A973C, binkMovie); } // 0x70D2CC8A542A973C b1290
	static void _STOP_BINK_MOVIE(int binkMovie) { return invoke<void>(0x63606A61DE68898A, binkMovie); } // 0x63606A61DE68898A b1290
	static void _RELEASE_BINK_MOVIE(int binkMovie) { return invoke<void>(0x04D950EEFA4EED8C, binkMovie); } // 0x04D950EEFA4EED8C b1290
	static void _DRAW_BINK_MOVIE(int binkMovie, float p1, float p2, float p3, float p4, float p5, int r, int g, int b, int a) { return invoke<void>(0x7118E83EEB9F7238, binkMovie, p1, p2, p3, p4, p5, r, g, b, a); } // 0x7118E83EEB9F7238 b1290
	 // In percentage: 0.0 - 100.0
	static float _GET_BINK_MOVIE_TIME(int binkMovie) { return invoke<float>(0x8E17DDD6B9D5BF29, binkMovie); } // 0x8E17DDD6B9D5BF29 b1734
	 // Might be more appropriate in AUDIO?
	static void ATTACH_TV_AUDIO_TO_ENTITY(Entity entity) { return invoke<void>(0x845BAD77CC770633, entity); } // 0x845BAD77CC770633 0x784944DB b323
	 // Probably changes tvs from being a 3d audio to being "global" audio
	static void SET_TV_AUDIO_FRONTEND(BOOL toggle) { return invoke<void>(0x113D2C5DC57E1774, toggle); } // 0x113D2C5DC57E1774 0x2E0DFA35 b323
	static void _SET_BINK_SHOULD_SKIP(int binkMovie, BOOL bShouldSkip) { return invoke<void>(0x6805D58CAA427B72, binkMovie, bShouldSkip); } // 0x6805D58CAA427B72 b1290
	static int LOAD_MOVIE_MESH_SET(const char* movieMeshSetName) { return invoke<int>(0xB66064452270E8F1, movieMeshSetName); } // 0xB66064452270E8F1 0x9627905C b323
	static void RELEASE_MOVIE_MESH_SET(int movieMeshSet) { return invoke<void>(0xEB119AA014E89183, movieMeshSet); } // 0xEB119AA014E89183 0x4FA5501D b323
	static Any _0x9B6E70C5CEEF4EEB(Any p0) { return invoke<Any>(0x9B6E70C5CEEF4EEB, p0); } // 0x9B6E70C5CEEF4EEB 0x9D5D9B38 b323
	 // int screenresx,screenresy;
	 // GET_SCREEN_RESOLUTION(&screenresx,&screenresy);
	static void GET_SCREEN_RESOLUTION(int* x, int* y) { return invoke<void>(0x888D57E407E63624, x, y); } // 0x888D57E407E63624 0x29F3572F b323
	 // Returns current screen resolution.
	static void _GET_ACTIVE_SCREEN_RESOLUTION(int* x, int* y) { return invoke<void>(0x873C9F3104101DD3, x, y); } // 0x873C9F3104101DD3 b323
	static float _GET_ASPECT_RATIO(BOOL b) { return invoke<float>(0xF1307EF624A80D87, b); } // 0xF1307EF624A80D87 b323
	 // Setting Aspect Ratio Manually in game will return:
	 // 
	 // false - for Narrow format Aspect Ratios (3:2, 4:3, 5:4, etc. )
	 // true - for Wide format Aspect Ratios (5:3, 16:9, 16:10, etc. )
	 // 
	 // Setting Aspect Ratio to "Auto" in game will return "false" or "true" based on the actual set Resolution Ratio.
	static BOOL GET_IS_WIDESCREEN() { return invoke<BOOL>(0x30CF4BDA4FCB1905); } // 0x30CF4BDA4FCB1905 0xEC717AEF b323
	 // false = Any resolution < 1280x720
	 // true = Any resolution >= 1280x720
	static BOOL GET_IS_HIDEF() { return invoke<BOOL>(0x84ED31191CC5D2C9); } // 0x84ED31191CC5D2C9 0x1C340359 b323
	 // Enables Night Vision.
	 // 
	 // Example:
	 // C#: Function.Call(Hash.SET_NIGHTVISION, true);
	 // C++: GRAPHICS::SET_NIGHTVISION(true);
	 // 
	 // BOOL toggle:
	 // true = turns night vision on for your player.
	 // false = turns night vision off for your player.
	static void SET_NIGHTVISION(BOOL toggle) { return invoke<void>(0x18F621F7A5B1F85D, toggle); } // 0x18F621F7A5B1F85D 0xD1E5565F b323
	static BOOL GET_REQUESTINGNIGHTVISION() { return invoke<BOOL>(0x35FB78DC42B7BD21); } // 0x35FB78DC42B7BD21 0xF3A6309E b323
	static BOOL GET_USINGNIGHTVISION() { return invoke<BOOL>(0x2202A3F42C8E5F79); } // 0x2202A3F42C8E5F79 0x62619061 b323
	static void _0xEF398BEEE4EF45F9(BOOL p0) { return invoke<void>(0xEF398BEEE4EF45F9, p0); } // 0xEF398BEEE4EF45F9 b323
	 // Convert a world coordinate into its relative screen coordinate.  (WorldToScreen)
	 // 
	 // Returns a boolean; whether or not the operation was successful. It will return false if the coordinates given are not visible to the rendering camera.
	 // 
	 // 
	 // For .NET users...
	 // 
	 // VB:
	 // Public Shared Function World3DToScreen2d(pos as vector3) As Vector2
	 // 
	 //         Dim x2dp, y2dp As New Native.OutputArgument
	 // 
	 //         Native.Function.Call(Of Boolean)(Native.Hash.GET_SCREEN_COORD_FROM_WORLD_COORD , pos.x, pos.y, pos.z, x2dp, y2dp)
	 //         Return New Vector2(x2dp.GetResult(Of Single), y2dp.GetResult(Of Single))
	 //       
	 //     End Function
	 // 
	 // C#:
	 // Vector2 World3DToScreen2d(Vector3 pos)
	 //     {
	 //         var x2dp = new OutputArgument();
	 //         var y2dp = new OutputArgument();
	 // 
	 //         Function.Call<bool>(Hash.GET_SCREEN_COORD_FROM_WORLD_COORD , pos.X, pos.Y, pos.Z, x2dp, y2dp);
	 //         return new Vector2(x2dp.GetResult<float>(), y2dp.GetResult<float>());
	 //     }
	 // //USE VERY SMALL VALUES FOR THE SCALE OF RECTS/TEXT because it is dramatically larger on screen than in 3D, e.g '0.05' small.
	 // 
	 // Used to be called _WORLD3D_TO_SCREEN2D
	 // 
	 // I thought we lost you from the scene forever. It does seem however that calling SET_DRAW_ORIGIN then your natives, then ending it. Seems to work better for certain things such as keeping boxes around people for a predator missile e.g.
	static BOOL GET_SCREEN_COORD_FROM_WORLD_COORD(float worldX, float worldY, float worldZ, float* screenX, float* screenY) { return invoke<BOOL>(0x34E82F05DF2974F5, worldX, worldY, worldZ, screenX, screenY); } // 0x34E82F05DF2974F5 0x1F950E4B b323
	 // Returns the texture resolution of the passed texture dict+name.
	 // 
	 // Note: Most texture resolutions are doubled compared to the console version of the game.
	static Vector3 GET_TEXTURE_RESOLUTION(const char* textureDict, const char* textureName) { return invoke<Vector3>(0x35736EE65BD00C11, textureDict, textureName); } // 0x35736EE65BD00C11 0x096DAA4D b323
	static void _0xE2892E7E55D7073A(float p0) { return invoke<void>(0xE2892E7E55D7073A, p0); } // 0xE2892E7E55D7073A 0x455F1084 b323
	static void DISABLE_OCCLUSION_THIS_FRAME() { return invoke<void>(0x3669F1B198DCAA4F); } // 0x3669F1B198DCAA4F 0x0DCC0B8B b323
	 // Creates a tracked point, useful for checking the visibility of a 3D point on screen.
	static int CREATE_TRACKED_POINT() { return invoke<int>(0xE2C9439ED45DEA60); } // 0xE2C9439ED45DEA60 0x3129C31A b323
	static void SET_TRACKED_POINT_INFO(int point, float x, float y, float z, float radius) { return invoke<void>(0x164ECBB3CF750CB0, point, x, y, z, radius); } // 0x164ECBB3CF750CB0 0x28689AA4 b323
	static BOOL IS_TRACKED_POINT_VISIBLE(int point) { return invoke<BOOL>(0xC45CCDAAC9221CA8, point); } // 0xC45CCDAAC9221CA8 0x0BFC4F64 b323
	static void DESTROY_TRACKED_POINT(int point) { return invoke<void>(0xB25DC90BAD56CA42, point); } // 0xB25DC90BAD56CA42 0x14AC675F b323
	static void _0xAE51BC858F32BA66(Any p0, float p1, float p2, float p3, float p4) { return invoke<void>(0xAE51BC858F32BA66, p0, p1, p2, p3, p4); } // 0xAE51BC858F32BA66 b323
	static void _0x649C97D52332341A(Any p0) { return invoke<void>(0x649C97D52332341A, p0); } // 0x649C97D52332341A b323
	static Any _0x2C42340F916C5930(Any p0) { return invoke<Any>(0x2C42340F916C5930, p0); } // 0x2C42340F916C5930 b323
	static void _0x14FC5833464340A8() { return invoke<void>(0x14FC5833464340A8); } // 0x14FC5833464340A8 b323
	static void _0x0218BA067D249DEA() { return invoke<void>(0x0218BA067D249DEA); } // 0x0218BA067D249DEA b323
	static void _0x03FC694AE06C5A20() { return invoke<void>(0x03FC694AE06C5A20); } // 0x03FC694AE06C5A20 0x48F16186 b323
	static void _0x5F0F3F56635809EF(float p0) { return invoke<void>(0x5F0F3F56635809EF, p0); } // 0x5F0F3F56635809EF 0x13D4ABC0 b323
	 // When this is set to ON, shadows only draw as you get nearer.
	 // 
	 // When OFF, they draw from a further distance.
	static void _SET_FAR_SHADOWS_SUPPRESSED(BOOL toggle) { return invoke<void>(0x80ECBC0C856D3B0B, toggle); } // 0x80ECBC0C856D3B0B 0xFE903D0F b323
	static void _0x6DDBF9DFFC4AC080(BOOL p0) { return invoke<void>(0x6DDBF9DFFC4AC080, p0); } // 0x6DDBF9DFFC4AC080 0x9F470BE3 b323
	static void _0xD39D13C9FEBF0511(BOOL p0) { return invoke<void>(0xD39D13C9FEBF0511, p0); } // 0xD39D13C9FEBF0511 0x4A124267 b323
	static void _0x0AE73D8DF3A762B2(BOOL p0) { return invoke<void>(0x0AE73D8DF3A762B2, p0); } // 0x0AE73D8DF3A762B2 0x342FA2B4 b323
	 // Toggles Heatvision on/off.
	static void SET_SEETHROUGH(BOOL toggle) { return invoke<void>(0x7E08924259E08CE0, toggle); } // 0x7E08924259E08CE0 0x74D4995C b323
	static BOOL GET_USINGSEETHROUGH() { return invoke<BOOL>(0x44B80ABAB9D80BD3); } // 0x44B80ABAB9D80BD3 0x1FE547F2 b323
	static float _SEETHROUGH_GET_MAX_THICKNESS() { return invoke<float>(0x43DBAE39626CE83F); } // 0x43DBAE39626CE83F b1290
	 // min: 1.0
	 // max: 10000.0
	static void _SEETHROUGH_SET_MAX_THICKNESS(float thickness) { return invoke<void>(0x0C8FAC83902A62DF, thickness); } // 0x0C8FAC83902A62DF b573
	 // Sets an unknown value related to timecycles.
	static void _0xE3E2C1B4C59DBC77(int unk) { return invoke<void>(0xE3E2C1B4C59DBC77, unk); } // 0xE3E2C1B4C59DBC77 0xD8CC7221 b323
	 // time in ms to transition from fully blurred to normal
	static BOOL TRIGGER_SCREENBLUR_FADE_OUT(float transitionTime) { return invoke<BOOL>(0xEFACC8AEF94430D5, transitionTime); } // 0xEFACC8AEF94430D5 0x46617502 b323
	static void DISABLE_SCREENBLUR_FADE() { return invoke<void>(0xDE81239437E8C5A8); } // 0xDE81239437E8C5A8 0xDB7AECDA b323
	static float GET_SCREENBLUR_FADE_CURRENT_TIME() { return invoke<float>(0x5CCABFFCA31DDE33); } // 0x5CCABFFCA31DDE33 0xEA432A94 b323
	static BOOL IS_SCREENBLUR_FADE_RUNNING() { return invoke<BOOL>(0x7B226C785A52A0A9); } // 0x7B226C785A52A0A9 0x926B8734 b323
	static void TOGGLE_PAUSED_RENDERPHASES(BOOL toggle) { return invoke<void>(0xDFC252D8A3E15AB7, toggle); } // 0xDFC252D8A3E15AB7 0x30ADE541 b323
	static BOOL GET_TOGGLE_PAUSED_RENDERPHASES_STATUS() { return invoke<BOOL>(0xEB3DAC2C86001E5E); } // 0xEB3DAC2C86001E5E 0xD4F5D07D b323
	static void RESET_PAUSED_RENDERPHASES() { return invoke<void>(0xE1C8709406F2C41C); } // 0xE1C8709406F2C41C 0x0113EAE4 b323
	static void _0x851CD923176EBA7C() { return invoke<void>(0x851CD923176EBA7C); } // 0x851CD923176EBA7C 0xDCBA251B b323
	 // GRAPHICS::START_PARTICLE_FX_NON_LOOPED_AT_COORD("scr_paleto_roof_impact", -140.8576f, 6420.789f, 41.1391f, 0f, 0f, 267.3957f, 0x3F800000, 0, 0, 0);
	 // 
	 // Axis - Invert Axis Flags
	 // 
	 // list: pastebin.com/N9unUFWY
	 // 
	 // 
	 // -------------------------------------------------------------------
	 // C#
	 // 
	 // Function.Call<int>(Hash.START_PARTICLE_FX_NON_LOOPED_AT_COORD, = you are calling this function.
	 // 
	 // char *effectname = This is an in-game effect name, for e.g. "scr_fbi4_trucks_crash" is used to give the effects when truck crashes etc
	 // 
	 // float x, y, z pos = this one is Simple, you just have to declare, where do you want this effect to take place at, so declare the ordinates
	 // 
	 // float xrot, yrot, zrot = Again simple? just mention the value in case if you want the effect to rotate.
	 // 
	 // float scale = is declare the scale of the effect, this may vary as per the effects for e.g 1.0f
	 // 
	 // bool xaxis, yaxis, zaxis = To bool the axis values.
	 // 
	 // example:
	 // Function.Call<int>(Hash.START_PARTICLE_FX_NON_LOOPED_AT_COORD, "scr_fbi4_trucks_crash", GTA.Game.Player.Character.Position.X, GTA.Game.Player.Character.Position.Y, GTA.Game.Player.Character.Position.Z + 4f, 0, 0, 0, 5.5f, 0, 0, 0);
	static int START_PARTICLE_FX_NON_LOOPED_AT_COORD(const char* effectName, float xPos, float yPos, float zPos, float xRot, float yRot, float zRot, float scale, BOOL xAxis, BOOL yAxis, BOOL zAxis) { return invoke<int>(0x25129531F77B9ED3, effectName, xPos, yPos, zPos, xRot, yRot, zRot, scale, xAxis, yAxis, zAxis); } // 0x25129531F77B9ED3 0xDD79D679 b323
	static BOOL START_NETWORKED_PARTICLE_FX_NON_LOOPED_AT_COORD(const char* effectName, float xPos, float yPos, float zPos, float xRot, float yRot, float zRot, float scale, BOOL xAxis, BOOL yAxis, BOOL zAxis, BOOL p11) { return invoke<BOOL>(0xF56B8137DF10135D, effectName, xPos, yPos, zPos, xRot, yRot, zRot, scale, xAxis, yAxis, zAxis, p11); } // 0xF56B8137DF10135D 0x633F8C48 b323
	 // GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_PED_BONE("scr_sh_bong_smoke", PLAYER::PLAYER_PED_ID(), -0.025f, 0.13f, 0f, 0f, 0f, 0f, 31086, 0x3F800000, 0, 0, 0);
	 // 
	 // Axis - Invert Axis Flags
	 // 
	 // list: pastebin.com/N9unUFWY
	static BOOL START_PARTICLE_FX_NON_LOOPED_ON_PED_BONE(const char* effectName, Ped ped, float offsetX, float offsetY, float offsetZ, float rotX, float rotY, float rotZ, int boneIndex, float scale, BOOL axisX, BOOL axisY, BOOL axisZ) { return invoke<BOOL>(0x0E7E72961BA18619, effectName, ped, offsetX, offsetY, offsetZ, rotX, rotY, rotZ, boneIndex, scale, axisX, axisY, axisZ); } // 0x0E7E72961BA18619 0x53DAEF4E b323
	 // Starts a particle effect on an entity for example your player.
	 // List: pastebin.com/N9unUFWY
	 // 
	 // Example:
	 // C#:
	 // Function.Call(Hash.REQUEST_NAMED_PTFX_ASSET, "scr_rcbarry2");                     Function.Call(Hash._SET_PTFX_ASSET_NEXT_CALL, "scr_rcbarry2");                             Function.Call(Hash.START_PARTICLE_FX_NON_LOOPED_ON_ENTITY, "scr_clown_appears", Game.Player.Character, 0.0, 0.0, -0.5, 0.0, 0.0, 0.0, 1.0, false, false, false);
	 // 
	 // Internally this calls the same function as GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_PED_BONE
	 // however it uses -1 for the specified bone index, so it should be possible to start a non looped fx on an entity bone using that native
	 // 
	 // -can confirm START_PARTICLE_FX_NON_LOOPED_ON_PED_BONE does NOT work on vehicle bones.
	static BOOL START_PARTICLE_FX_NON_LOOPED_ON_ENTITY(const char* effectName, Entity entity, float offsetX, float offsetY, float offsetZ, float rotX, float rotY, float rotZ, float scale, BOOL axisX, BOOL axisY, BOOL axisZ) { return invoke<BOOL>(0x0D53A3B8DA0809D2, effectName, entity, offsetX, offsetY, offsetZ, rotX, rotY, rotZ, scale, axisX, axisY, axisZ); } // 0x0D53A3B8DA0809D2 0x9604DAD4 b323
	 // Used only once in the scripts (taxi_clowncar)
	 // 
	 // SET_PARTICLE_FX_*
	static void _0x8CDE909A0370BB3A(BOOL toggle) { return invoke<void>(0x8CDE909A0370BB3A, toggle); } // 0x8CDE909A0370BB3A b323
	 // GRAPHICS::START_PARTICLE_FX_LOOPED_AT_COORD("scr_fbi_falling_debris", 93.7743f, -749.4572f, 70.86904f, 0f, 0f, 0f, 0x3F800000, 0, 0, 0, 0)
	 // 
	 // 
	 // p11 seems to be always 0
	static int START_PARTICLE_FX_LOOPED_AT_COORD(const char* effectName, float x, float y, float z, float xRot, float yRot, float zRot, float scale, BOOL xAxis, BOOL yAxis, BOOL zAxis, BOOL p11) { return invoke<int>(0xE184F4F0DC5910E7, effectName, x, y, z, xRot, yRot, zRot, scale, xAxis, yAxis, zAxis, p11); } // 0xE184F4F0DC5910E7 0xD348E3E6 b323
	static int START_PARTICLE_FX_LOOPED_ON_PED_BONE(const char* effectName, Ped ped, float xOffset, float yOffset, float zOffset, float xRot, float yRot, float zRot, int boneIndex, float scale, BOOL xAxis, BOOL yAxis, BOOL zAxis) { return invoke<int>(0xF28DA9F38CD1787C, effectName, ped, xOffset, yOffset, zOffset, xRot, yRot, zRot, boneIndex, scale, xAxis, yAxis, zAxis); } // 0xF28DA9F38CD1787C 0xF8FC196F b323
	 // list: pastebin.com/N9unUFWY
	static int START_PARTICLE_FX_LOOPED_ON_ENTITY(const char* effectName, Entity entity, float xOffset, float yOffset, float zOffset, float xRot, float yRot, float zRot, float scale, BOOL xAxis, BOOL yAxis, BOOL zAxis) { return invoke<int>(0x1AE42C1660FD6517, effectName, entity, xOffset, yOffset, zOffset, xRot, yRot, zRot, scale, xAxis, yAxis, zAxis); } // 0x1AE42C1660FD6517 0x0D06FF62 b323
	static int START_NETWORKED_PARTICLE_FX_LOOPED_ON_ENTITY(const char* effectName, Entity entity, float xOffset, float yOffset, float zOffset, float xRot, float yRot, float zRot, float scale, BOOL xAxis, BOOL yAxis, BOOL zAxis, Any p12, Any p13, Any p14, Any p15) { return invoke<int>(0x6F60E89A7B64EE1D, effectName, entity, xOffset, yOffset, zOffset, xRot, yRot, zRot, scale, xAxis, yAxis, zAxis, p12, p13, p14, p15); } // 0x6F60E89A7B64EE1D 0x110752B2 b323
	 // p1 is always 0 in the native scripts
	static void STOP_PARTICLE_FX_LOOPED(int ptfxHandle, BOOL p1) { return invoke<void>(0x8F75998877616996, ptfxHandle, p1); } // 0x8F75998877616996 0xD245455B b323
	static void REMOVE_PARTICLE_FX(int ptfxHandle, BOOL p1) { return invoke<void>(0xC401503DFE8D53CF, ptfxHandle, p1); } // 0xC401503DFE8D53CF 0x6BA48C7E b323
	static void REMOVE_PARTICLE_FX_IN_RANGE(float X, float Y, float Z, float radius) { return invoke<void>(0xDD19FA1C6D657305, X, Y, Z, radius); } // 0xDD19FA1C6D657305 0x7EB8F275 b323
	static BOOL DOES_PARTICLE_FX_LOOPED_EXIST(int ptfxHandle) { return invoke<BOOL>(0x74AFEF0D2E1E409B, ptfxHandle); } // 0x74AFEF0D2E1E409B 0xCBF91D2A b323
	static void SET_PARTICLE_FX_LOOPED_OFFSETS(int ptfxHandle, float x, float y, float z, float rotX, float rotY, float rotZ) { return invoke<void>(0xF7DDEBEC43483C43, ptfxHandle, x, y, z, rotX, rotY, rotZ); } // 0xF7DDEBEC43483C43 0x641F7790 b323
	static void SET_PARTICLE_FX_LOOPED_EVOLUTION(int ptfxHandle, const char* propertyName, float amount, BOOL noNetwork) { return invoke<void>(0x5F0C4B5B1C393BE2, ptfxHandle, propertyName, amount, noNetwork); } // 0x5F0C4B5B1C393BE2 0x1CBC1373 b323
	 // only works on some fx's
	 // 
	 // p4 = 0
	static void SET_PARTICLE_FX_LOOPED_COLOUR(int ptfxHandle, float r, float g, float b, BOOL p4) { return invoke<void>(0x7F8F65877F88783B, ptfxHandle, r, g, b, p4); } // 0x7F8F65877F88783B 0x5219D530 b323
	static void SET_PARTICLE_FX_LOOPED_ALPHA(int ptfxHandle, float alpha) { return invoke<void>(0x726845132380142E, ptfxHandle, alpha); } // 0x726845132380142E 0x5ED49BE1 b323
	static void SET_PARTICLE_FX_CAM_INSIDE_VEHICLE(BOOL p0) { return invoke<void>(0xEEC4047028426510, p0); } // 0xEEC4047028426510 0x19EC0001 b323
	static void SET_PARTICLE_FX_BULLET_IMPACT_SCALE(float scale) { return invoke<void>(0x27E32866E9A5C416, scale); } // 0x27E32866E9A5C416 0xC1AD5DDF b323
	 //  From the b678d decompiled scripts:
	 // 
	 //  GRAPHICS::_SET_PTFX_ASSET_NEXT_CALL("FM_Mission_Controler");
	 //  GRAPHICS::_SET_PTFX_ASSET_NEXT_CALL("scr_apartment_mp");
	 //  GRAPHICS::_SET_PTFX_ASSET_NEXT_CALL("scr_indep_fireworks");
	 //  GRAPHICS::_SET_PTFX_ASSET_NEXT_CALL("scr_mp_cig_plane");
	 //  GRAPHICS::_SET_PTFX_ASSET_NEXT_CALL("scr_mp_creator");
	 //  GRAPHICS::_SET_PTFX_ASSET_NEXT_CALL("scr_ornate_heist");
	 //  GRAPHICS::_SET_PTFX_ASSET_NEXT_CALL("scr_prison_break_heist_station");
	static void USE_PARTICLE_FX_ASSET(const char* name) { return invoke<void>(0x6C38AF3693A69A91, name); } // 0x6C38AF3693A69A91 0x9C720B61 b323
	static void SET_PARTICLE_FX_OVERRIDE(const char* oldAsset, const char* newAsset) { return invoke<void>(0xEA1E2D93F6F75ED9, oldAsset, newAsset); } // 0xEA1E2D93F6F75ED9 0xC92719A7 b323
	 // Resets the effect of SET_PARTICLE_FX_OVERRIDE
	static void RESET_PARTICLE_FX_OVERRIDE(const char* name) { return invoke<void>(0x89C8553DD3274AAE, name); } // 0x89C8553DD3274AAE 0x9E8D8B72 b323
	 // Fades nearby decals within the range specified
	static void FADE_DECALS_IN_RANGE(Any p0, Any p1, Any p2, Any p3, Any p4) { return invoke<void>(0xD77EDADB0420E6E0, p0, p1, p2, p3, p4); } // 0xD77EDADB0420E6E0 0xF81E884A b323
	 // Removes all decals in range from a position, it includes the bullet holes, blood pools, petrol...
	static void REMOVE_DECALS_IN_RANGE(float x, float y, float z, float range) { return invoke<void>(0x5D6B2D4830A67C62, x, y, z, range); } // 0x5D6B2D4830A67C62 0x06A619A0 b323
	 // decal types:
	 // 
	 // public enum DecalTypes
	 // {
	 //     splatters_blood = 1010,
	 //     splatters_blood_dir = 1015,
	 //     splatters_blood_mist = 1017,
	 //     splatters_mud = 1020,
	 //     splatters_paint = 1030,
	 //     splatters_water = 1040,
	 //     splatters_water_hydrant = 1050,
	 //     splatters_blood2 = 1110,
	 //     weapImpact_metal = 4010,
	 //     weapImpact_concrete = 4020,
	 //     weapImpact_mattress = 4030,
	 //     weapImpact_mud = 4032,
	 //     weapImpact_wood = 4050,
	 //     weapImpact_sand = 4053,
	 //     weapImpact_cardboard = 4040,
	 //     weapImpact_melee_glass = 4100,
	 //     weapImpact_glass_blood = 4102,
	 //     weapImpact_glass_blood2 = 4104,
	 //     weapImpact_shotgun_paper = 4200,
	 //     weapImpact_shotgun_mattress,
	 //     weapImpact_shotgun_metal,
	 //     weapImpact_shotgun_wood,
	 //     weapImpact_shotgun_dirt,
	 //     weapImpact_shotgun_tvscreen,
	 //     weapImpact_shotgun_tvscreen2,
	 //     weapImpact_shotgun_tvscreen3,
	 //     weapImpact_melee_concrete = 4310,
	 //     weapImpact_melee_wood = 4312,
	 //     weapImpact_melee_metal = 4314,
	 //     burn1 = 4421,
	 //     burn2,
	 //     burn3,
	 //     burn4,
	 //     burn5,
	 //     bang_concrete_bang = 5000,
	 //     bang_concrete_bang2,
	 //     bang_bullet_bang,
	 //     bang_bullet_bang2 = 5004,
	 //     bang_glass = 5031,
	 //     bang_glass2,
	 //     solidPool_water = 9000,
	 //     solidPool_blood,
	 //     solidPool_oil,
	 //     solidPool_petrol,
	 //     solidPool_mud,
	 //     porousPool_water,
	 //     porousPool_blood,
	 //     porousPool_oil,
	 //     porousPool_petrol,
	 //     porousPool_mud,
	 //     porousPool_water_ped_drip,
	 //     liquidTrail_water = 9050
	 // }
	static int ADD_DECAL(int decalType, float posX, float posY, float posZ, float p4, float p5, float p6, float p7, float p8, float p9, float width, float height, float rCoef, float gCoef, float bCoef, float opacity, float timeout, BOOL p17, BOOL p18, BOOL p19) { return invoke<int>(0xB302244A1839BDAD, decalType, posX, posY, posZ, p4, p5, p6, p7, p8, p9, width, height, rCoef, gCoef, bCoef, opacity, timeout, p17, p18, p19); } // 0xB302244A1839BDAD 0xEAD0C412 b323
	static int ADD_PETROL_DECAL(float x, float y, float z, float groundLvl, float width, float transparency) { return invoke<int>(0x4F5212C7AD880DF8, x, y, z, groundLvl, width, transparency); } // 0x4F5212C7AD880DF8 0x1259DF42 b323
	static void START_PETROL_TRAIL_DECALS(float p0) { return invoke<void>(0x99AC7F0D8B9C893D, p0); } // 0x99AC7F0D8B9C893D 0xE3938B0B b323
	static void ADD_PETROL_TRAIL_DECAL_INFO(float x, float y, float z, float p3) { return invoke<void>(0x967278682CB6967A, x, y, z, p3); } // 0x967278682CB6967A 0xBAEC6ADD b323
	static void END_PETROL_TRAIL_DECALS() { return invoke<void>(0x0A123435A26C36CD); } // 0x0A123435A26C36CD 0xCCCA6855 b323
	static void REMOVE_DECAL(int decal) { return invoke<void>(0xED3F346429CCD659, decal); } // 0xED3F346429CCD659 0xA4363188 b323
	static BOOL IS_DECAL_ALIVE(int decal) { return invoke<BOOL>(0xC694D74949CAFD0C, decal); } // 0xC694D74949CAFD0C 0xCDD4A61A b323
	static void _0xD9454B5752C857DC() { return invoke<void>(0xD9454B5752C857DC); } // 0xD9454B5752C857DC 0xEAB6417C b323
	static void _0x27CFB1B1E078CB2D() { return invoke<void>(0x27CFB1B1E078CB2D); } // 0x27CFB1B1E078CB2D 0xC2703B88 b323
	static BOOL GET_IS_PETROL_DECAL_IN_RANGE(float xCoord, float yCoord, float zCoord, float radius) { return invoke<BOOL>(0x2F09F7976C512404, xCoord, yCoord, zCoord, radius); } // 0x2F09F7976C512404 0x242C6A04 b323
	static Any _0x82ACC484FFA3B05F(Any p0) { return invoke<Any>(0x82ACC484FFA3B05F, p0); } // 0x82ACC484FFA3B05F b372
	static int GET_VEHICLE_CREW_EMBLEM_REQUEST_STATE(Vehicle vehicle, int p1) { return invoke<int>(0xFE26117A5841B2FF, vehicle, p1); } // 0xFE26117A5841B2FF 0x4F4D76E8 b323
	static BOOL DOES_VEHICLE_HAVE_CREW_EMBLEM(Vehicle vehicle, int p1) { return invoke<BOOL>(0x060D935D3981A275, vehicle, p1); } // 0x060D935D3981A275 0x6D58F73B b323
	static void _0x46D1A61A21F566FC(float p0) { return invoke<void>(0x46D1A61A21F566FC, p0); } // 0x46D1A61A21F566FC 0x2056A015 b323
	static void _0x03300B57FCAC6DDB(BOOL p0) { return invoke<void>(0x03300B57FCAC6DDB, p0); } // 0x03300B57FCAC6DDB 0x60F72371 b323
	 // Loads the specified timecycle modifier. Modifiers are defined separately in another file (e.g. "timecycle_mods_1.xml")
	 // 
	 // Parameters:
	 // modifierName - The modifier to load (e.g. "V_FIB_IT3", "scanline_cam", etc.)
	 // 
	 // For a full list, see here: pastebin.com/ZZDL2qLB
	static void SET_TIMECYCLE_MODIFIER(const char* modifierName) { return invoke<void>(0x2C933ABF17A1DF41, modifierName); } // 0x2C933ABF17A1DF41 0xA81F3638 b323
	static void CLEAR_TIMECYCLE_MODIFIER() { return invoke<void>(0x0F07E7745A236711); } // 0x0F07E7745A236711 0x8D8DF8EE b323
	 // Only use for this in the PC scripts is:
	 // 
	 // if (GRAPHICS::GET_TIMECYCLE_MODIFIER_INDEX() != -1)
	 // 
	 // For a full list, see here: pastebin.com/cnk7FTF2
	static int GET_TIMECYCLE_MODIFIER_INDEX() { return invoke<int>(0xFDF3D97C674AFB66); } // 0xFDF3D97C674AFB66 0x594FEEC4 b323
	static int GET_TIMECYCLE_TRANSITION_MODIFIER_INDEX() { return invoke<int>(0x459FD2C8D0AB78BC); } // 0x459FD2C8D0AB78BC 0x03C44E4B b323
	static void PUSH_TIMECYCLE_MODIFIER() { return invoke<void>(0x58F735290861E6B4); } // 0x58F735290861E6B4 0x7E082045 b323
	static void POP_TIMECYCLE_MODIFIER() { return invoke<void>(0x3C8938D7D872211E); } // 0x3C8938D7D872211E 0x79D7D235 b323
	static void SET_NEXT_PLAYER_TCMODIFIER(const char* modifierName) { return invoke<void>(0xBF59707B3E5ED531, modifierName); } // 0xBF59707B3E5ED531 0x554BA16E b323
	static void _SET_EXTRA_TIMECYCLE_MODIFIER(const char* modifierName) { return invoke<void>(0x5096FD9CCB49056D, modifierName); } // 0x5096FD9CCB49056D 0x908A335E b323
	static int REQUEST_SCALEFORM_MOVIE_INSTANCE(const char* scaleformName) { return invoke<int>(0xC514489CFB8AF806, scaleformName); } // 0xC514489CFB8AF806 0x7CC8057D b323
	static BOOL HAS_SCALEFORM_MOVIE_LOADED(int scaleformHandle) { return invoke<BOOL>(0x85F01B8D5B90570E, scaleformHandle); } // 0x85F01B8D5B90570E 0xDDFB6448 b323
	static void SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(int* scaleformHandle) { return invoke<void>(0x1D132D614DD86811, scaleformHandle); } // 0x1D132D614DD86811 0x5FED3BA1 b323
	static void SET_SCALEFORM_MOVIE_TO_USE_SYSTEM_TIME(int scaleform, BOOL toggle) { return invoke<void>(0x6D8EB211944DCE08, scaleform, toggle); } // 0x6D8EB211944DCE08 0x18C9DE8D b323
	static void _0x32F34FF7F617643B(Any p0, Any p1) { return invoke<void>(0x32F34FF7F617643B, p0, p1); } // 0x32F34FF7F617643B b573
	static void DRAW_SCALEFORM_MOVIE(int scaleformHandle, float x, float y, float width, float height, int red, int green, int blue, int alpha, int unk) { return invoke<void>(0x54972ADAF0294A93, scaleformHandle, x, y, width, height, red, green, blue, alpha, unk); } // 0x54972ADAF0294A93 0x48DA6A58 b323
	 // unk is not used so no need
	static void DRAW_SCALEFORM_MOVIE_FULLSCREEN(int scaleform, int red, int green, int blue, int alpha, int unk) { return invoke<void>(0x0DF606929C105BE1, scaleform, red, green, blue, alpha, unk); } // 0x0DF606929C105BE1 0x7B48E696 b323
	static void DRAW_SCALEFORM_MOVIE_FULLSCREEN_MASKED(int scaleform1, int scaleform2, int red, int green, int blue, int alpha) { return invoke<void>(0xCF537FDE4FBD4CE5, scaleform1, scaleform2, red, green, blue, alpha); } // 0xCF537FDE4FBD4CE5 0x9C59FC06 b323
	static void DRAW_SCALEFORM_MOVIE_3D(int scaleform, float posX, float posY, float posZ, float rotX, float rotY, float rotZ, float p7, float p8, float p9, float scaleX, float scaleY, float scaleZ, Any p13) { return invoke<void>(0x87D51D72255D4E78, scaleform, posX, posY, posZ, rotX, rotY, rotZ, p7, p8, p9, scaleX, scaleY, scaleZ, p13); } // 0x87D51D72255D4E78 0xC4F63A89 b323
	static void DRAW_SCALEFORM_MOVIE_3D_SOLID(int scaleform, float posX, float posY, float posZ, float rotX, float rotY, float rotZ, float p7, float p8, float p9, float scaleX, float scaleY, float scaleZ, Any p13) { return invoke<void>(0x1CE592FDC749D6F5, scaleform, posX, posY, posZ, rotX, rotY, rotZ, p7, p8, p9, scaleX, scaleY, scaleZ, p13); } // 0x1CE592FDC749D6F5 0x899933C8 b323
	 // Calls the Scaleform function.
	static void CALL_SCALEFORM_MOVIE_METHOD(int scaleform, const char* method) { return invoke<void>(0xFBD96D87AC96D533, scaleform, method); } // 0xFBD96D87AC96D533 0x7AB77B57 b323
	 // Calls the Scaleform function and passes the parameters as floats.
	 // 
	 // The number of parameters passed to the function varies, so the end of the parameter list is represented by -1.0.
	static void CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(int scaleform, const char* methodName, float param1, float param2, float param3, float param4, float param5) { return invoke<void>(0xD0837058AE2E4BEE, scaleform, methodName, param1, param2, param3, param4, param5); } // 0xD0837058AE2E4BEE 0x557EDA1D b323
	 // Calls the Scaleform function and passes the parameters as strings.
	 // 
	 // The number of parameters passed to the function varies, so the end of the parameter list is represented by 0 (NULL).
	static void CALL_SCALEFORM_MOVIE_METHOD_WITH_STRING(int scaleform, const char* methodName, const char* param1, const char* param2, const char* param3, const char* param4, const char* param5) { return invoke<void>(0x51BC1ED3CC44E8F7, scaleform, methodName, param1, param2, param3, param4, param5); } // 0x51BC1ED3CC44E8F7 0x91A7FCEB b323
	 // Calls the Scaleform function and passes both float and string parameters (in their respective order).
	 // 
	 // The number of parameters passed to the function varies, so the end of the float parameters is represented by -1.0, and the end of the string parameters is represented by 0 (NULL).
	 // 
	 // NOTE: The order of parameters in the function prototype is important! All float parameters must come first, followed by the string parameters.
	 // 
	 // Examples:
	 // // function MY_FUNCTION(floatParam1, floatParam2, stringParam)
	 // GRAPHICS::_CALL_SCALEFORM_MOVIE_FUNCTION_MIXED_PARAMS(scaleform, "MY_FUNCTION", 10.0, 20.0, -1.0, -1.0, -1.0, "String param", 0, 0, 0, 0);
	 // 
	 // // function MY_FUNCTION_2(floatParam, stringParam1, stringParam2)
	 // GRAPHICS::_CALL_SCALEFORM_MOVIE_FUNCTION_MIXED_PARAMS(scaleform, "MY_FUNCTION_2", 10.0, -1.0, -1.0, -1.0, -1.0, "String param #1", "String param #2", 0, 0, 0);
	static void CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER_AND_STRING(int scaleform, const char* methodName, float floatParam1, float floatParam2, float floatParam3, float floatParam4, float floatParam5, const char* stringParam1, const char* stringParam2, const char* stringParam3, const char* stringParam4, const char* stringParam5) { return invoke<void>(0xEF662D8D57E290B1, scaleform, methodName, floatParam1, floatParam2, floatParam3, floatParam4, floatParam5, stringParam1, stringParam2, stringParam3, stringParam4, stringParam5); } // 0xEF662D8D57E290B1 0x6EAF56DE b323
	 // Push a function from the Scaleform onto the stack
	 // 
	static BOOL BEGIN_SCALEFORM_MOVIE_METHOD(int scaleform, const char* methodName) { return invoke<BOOL>(0xF6E48914C7A8694E, scaleform, methodName); } // 0xF6E48914C7A8694E 0x215ABBE8 b323
	static BOOL BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND(const char* methodName) { return invoke<BOOL>(0xAB58C27C2E6123C6, methodName); } // 0xAB58C27C2E6123C6 0xF6015178 b323
	 // Pops and calls the Scaleform function on the stack
	static void END_SCALEFORM_MOVIE_METHOD() { return invoke<void>(0xC6796A8FFA375E53); } // 0xC6796A8FFA375E53 0x02DBF2D7 b323
	static Any END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE() { return invoke<Any>(0xC50AA39A577AF886); } // 0xC50AA39A577AF886 0x2F38B526 b323
	static BOOL IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(Any returnValueData) { return invoke<BOOL>(0x768FF8961BA904D6, returnValueData); } // 0x768FF8961BA904D6 0x5CD7C3C0 b323
	static int GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(Any returnValueData) { return invoke<int>(0x2DE7EFA66B906036, returnValueData); } // 0x2DE7EFA66B906036 0x2CFB0E6D b323
	static BOOL _GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_BOOL(Any returnValueData) { return invoke<BOOL>(0xD80A80346A45D761, returnValueData); } // 0xD80A80346A45D761 b757
	 // Pushes an integer for the Scaleform function onto the stack.
	static void SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(int value) { return invoke<void>(0xC3D0841A0CC546A6, value); } // 0xC3D0841A0CC546A6 0x716777CB b323
	 // Pushes a float for the Scaleform function onto the stack.
	static void SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(float value) { return invoke<void>(0xD69736AAE04DB51A, value); } // 0xD69736AAE04DB51A 0x9A01FFDA b323
	 // Pushes a boolean for the Scaleform function onto the stack.
	static void SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(BOOL value) { return invoke<void>(0xC58424BA936EB458, value); } // 0xC58424BA936EB458 0x0D4AE8CB b323
	 // Called prior to adding a text component to the UI. After doing so, GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING is called.
	 // 
	 // Examples:
	 // GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("NUMBER");
	 // UI::ADD_TEXT_COMPONENT_INTEGER(GAMEPLAY::ABSI(a_1));
	 // GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	 // 
	 // GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	 // UI::_ADD_TEXT_COMPONENT_STRING(a_2);
	 // GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	 // 
	 // GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRTNM2");
	 // UI::_0x17299B63C7683A2B(v_3);
	 // UI::_0x17299B63C7683A2B(v_4);
	 // GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	 // 
	 // GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRTNM1");
	 // UI::_0x17299B63C7683A2B(v_3);
	 // GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	static void BEGIN_TEXT_COMMAND_SCALEFORM_STRING(const char* componentType) { return invoke<void>(0x80338406F3475E55, componentType); } // 0x80338406F3475E55 0x3AC9CB55 b323
	static void END_TEXT_COMMAND_SCALEFORM_STRING() { return invoke<void>(0x362E2D3FE93A9959); } // 0x362E2D3FE93A9959 0x386CE0B8 b323
	 // Same as END_TEXT_COMMAND_SCALEFORM_STRING but does not perform HTML conversion for text tokens.
	static void _END_TEXT_COMMAND_SCALEFORM_STRING_2() { return invoke<void>(0xAE4E8157D9ECF087); } // 0xAE4E8157D9ECF087 0x2E80DB52 b323
	 // Same as SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING
	static void _SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING_2(const char* string) { return invoke<void>(0x77FE3402004CD1B0, string); } // 0x77FE3402004CD1B0 b573
	static void SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING(const char* string) { return invoke<void>(0xBA7148484BD90365, string); } // 0xBA7148484BD90365 0x4DAAD55B b323
	static void SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(const char* string) { return invoke<void>(0xE83A3E3557A56640, string); } // 0xE83A3E3557A56640 0xCCBF0334 b323
	static void SET_TV_CHANNEL(int channel) { return invoke<void>(0xBAABBB23EB6E484E, channel); } // 0xBAABBB23EB6E484E 0x41A8A627 b323
	static int GET_TV_CHANNEL() { return invoke<int>(0xFC1E275A90D39995); } // 0xFC1E275A90D39995 0x6B96145A b323
	static void SET_TV_VOLUME(float volume) { return invoke<void>(0x2982BF73F66E9DDC, volume); } // 0x2982BF73F66E9DDC 0xF3504F4D b323
	static float GET_TV_VOLUME() { return invoke<float>(0x2170813D3DD8661B); } // 0x2170813D3DD8661B 0x39555CF0 b323
	 // All calls to this native are preceded by calls to GRAPHICS::_0x61BB1D9B3A95D802 and GRAPHICS::_0xC6372ECD45D73BCD, respectively.
	 // 
	 // "act_cinema.ysc", line 1483:
	 // UI::SET_HUD_COMPONENT_POSITION(15, 0.0, -0.0375);
	 // UI::SET_TEXT_RENDER_ID(l_AE);
	 // GRAPHICS::_0x61BB1D9B3A95D802(4);
	 // GRAPHICS::_0xC6372ECD45D73BCD(1);
	 // if (GRAPHICS::_0x0AD973CA1E077B60(${movie_arthouse})) {
	 //     GRAPHICS::DRAW_TV_CHANNEL(0.5, 0.5, 0.7375, 1.0, 0.0, 255, 255, 255, 255);
	 // } else { 
	 //     GRAPHICS::DRAW_TV_CHANNEL(0.5, 0.5, 1.0, 1.0, 0.0, 255, 255, 255, 255);
	 // }
	 // 
	 // "am_mp_property_int.ysc", line 102545:
	 // if (ENTITY::DOES_ENTITY_EXIST(a_2._f3)) {
	 //     if (UI::IS_NAMED_RENDERTARGET_LINKED(ENTITY::GET_ENTITY_MODEL(a_2._f3))) {
	 //         UI::SET_TEXT_RENDER_ID(a_2._f1);
	 //         GRAPHICS::_0x61BB1D9B3A95D802(4);
	 //         GRAPHICS::_0xC6372ECD45D73BCD(1);
	 //         GRAPHICS::DRAW_TV_CHANNEL(0.5, 0.5, 1.0, 1.0, 0.0, 255, 255, 255, 255);
	 //         if (GRAPHICS::GET_TV_CHANNEL() == -1) {
	 //             sub_a8fa5(a_2, 1);
	 //         } else { 
	 //             sub_a8fa5(a_2, 1);
	 //             GRAPHICS::ATTACH_TV_AUDIO_TO_ENTITY(a_2._f3);
	 //         }
	 //         UI::SET_TEXT_RENDER_ID(UI::GET_DEFAULT_SCRIPT_RENDERTARGET_RENDER_ID());
	 //     }
	 // }
	 // 
	static void DRAW_TV_CHANNEL(float xPos, float yPos, float xScale, float yScale, float rotation, int red, int green, int blue, int alpha) { return invoke<void>(0xFDDC2B4ED3C69DF0, xPos, yPos, xScale, yScale, rotation, red, green, blue, alpha); } // 0xFDDC2B4ED3C69DF0 0x8129EF89 b323
	static void SET_TV_CHANNEL_PLAYLIST(int tvChannel, const char* playlistName, BOOL restart) { return invoke<void>(0xF7B38B8305F1FE8B, tvChannel, playlistName, restart); } // 0xF7B38B8305F1FE8B 0xB262DE67 b323
	 // SET_TV_???
	static void _0xD1C55B110E4DF534(Any p0) { return invoke<void>(0xD1C55B110E4DF534, p0); } // 0xD1C55B110E4DF534 0xD99EC000 b323
	static void ENABLE_MOVIE_SUBTITLES(BOOL toggle) { return invoke<void>(0x873FA65C778AD970, toggle); } // 0x873FA65C778AD970 0xC2DEBA3D b323
	static BOOL UI3DSCENE_IS_AVAILABLE() { return invoke<BOOL>(0xD3A10FC7FD8D98CD); } // 0xD3A10FC7FD8D98CD 0xE40A0F1A b323
	 // All presets can be found in common\data\ui\uiscenes.meta
	static BOOL UI3DSCENE_PUSH_PRESET(const char* presetName) { return invoke<BOOL>(0xF1CEA8A4198D8E9A, presetName); } // 0xF1CEA8A4198D8E9A 0x2E7D9B98 b323
	 // It's called after 0xD3A10FC7FD8D98CD and 0xF1CEA8A4198D8E9A
	 // 
	 // presetName was always "CELEBRATION_WINNER"
	 // All presets can be found in common\data\ui\uiscenes.meta
	 // 
	 // UI3DSCENE_*
	static BOOL _0x98C4FE6EC34154CA(const char* presetName, Ped ped, int p2, float posX, float posY, float posZ) { return invoke<BOOL>(0x98C4FE6EC34154CA, presetName, ped, p2, posX, posY, posZ); } // 0x98C4FE6EC34154CA 0x9A0E3BFE b323
	 // duration - is how long to play the effect for in milliseconds. If 0, it plays the default length
	 // if loop is true, the effect won't stop until you call ANIMPOSTFX_STOP on it. (only loopable effects)
	 // 
	 // List of animated post FX names:
	 // https://alloc8or.re/gta5/doc/misc/animpostfx.txt
	static void ANIMPOSTFX_PLAY(const char* effectName, int duration, BOOL looped) { return invoke<void>(0x2206BF9A37B7F724, effectName, duration, looped); } // 0x2206BF9A37B7F724 0x1D980479 b323
	 // See ANIMPOSTFX_PLAY
	static void ANIMPOSTFX_STOP(const char* effectName) { return invoke<void>(0x068E835A1D0DC0E3, effectName); } // 0x068E835A1D0DC0E3 0x06BB5CDA b323
	 // Returns whether the specified effect is active.
	 // See ANIMPOSTFX_PLAY
	static BOOL ANIMPOSTFX_IS_RUNNING(const char* effectName) { return invoke<BOOL>(0x36AD3E690DA5ACEB, effectName); } // 0x36AD3E690DA5ACEB 0x089D5921 b323
	 // Stops ALL currently playing effects.
	static void ANIMPOSTFX_STOP_ALL() { return invoke<void>(0xB4EDDC19532BFB85); } // 0xB4EDDC19532BFB85 0x4E6D875B b323
}

namespace HUD
{
	 // Initializes the text entry for the the text next to a loading prompt. All natives for building UI texts can be used here
	 // 
	 // 
	 // e.g
	 // void StartLoadingMessage(char *text, int spinnerType = 3)
	 //   {
	 //      _SET_LOADING_PROMPT_TEXT_ENTRY("STRING");
	 //        ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(text);
	 //        _SHOW_LOADING_PROMPT(spinnerType);
	 //     }
	 // /*OR*/
	 //  void ShowLoadingMessage(char *text, int spinnerType = 3, int timeMs = 10000)
	 //   {
	 //      _SET_LOADING_PROMPT_TEXT_ENTRY("STRING");
	 //        ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(text);
	 //        _SHOW_LOADING_PROMPT(spinnerType);
	 //         WAIT(timeMs);
	 //      _REMOVE_LOADING_PROMPT();
	 //  }
	 // 
	 // 
	 // These are some localized strings used in the loading spinner.
	 // "PM_WAIT"                   = Please Wait
	 // "CELEB_WPLYRS"              = Waiting For Players.
	 // "CELL_SPINNER2"             = Scanning storage.
	 // "ERROR_CHECKYACHTNAME" = Registering your yacht's name. Please wait.
	 // "ERROR_CHECKPROFANITY"   = Checking your text for profanity. Please wait.
	 // "FM_COR_AUTOD"                        = Just spinner no text
	 // "FM_IHELP_WAT2"                        = Waiting for other players
	 // "FM_JIP_WAITO"                            = Game options are being set
	 // "FMMC_DOWNLOAD"                    = Downloading
	 // "FMMC_PLYLOAD"                         = Loading
	 // "FMMC_STARTTRAN"                    = Launching session
	 // "HUD_QUITTING"                           =  Quiting session
	 // "KILL_STRIP_IDM"                         = Waiting for to accept
	 // "MP_SPINLOADING"                      = Loading
	static void BEGIN_TEXT_COMMAND_BUSYSPINNER_ON(const char* string) { return invoke<void>(0xABA17D7CE615ADBF, string); } // 0xABA17D7CE615ADBF 0xCB7C8994 b323
	 // enum eBusySpinnerType
	 // {
	 // 	BUSY_SPINNER_LEFT,
	 // 	BUSY_SPINNER_LEFT_2,
	 // 	BUSY_SPINNER_LEFT_3,
	 // 	BUSY_SPINNER_SAVE,
	 // 	BUSY_SPINNER_RIGHT,
	 // };
	static void END_TEXT_COMMAND_BUSYSPINNER_ON(int busySpinnerType) { return invoke<void>(0xBD12F8228410D9B4, busySpinnerType); } // 0xBD12F8228410D9B4 0x903F5EE4 b323
	 // Removes the loading prompt at the bottom right of the screen.
	static void BUSYSPINNER_OFF() { return invoke<void>(0x10D373323E5B9C0D); } // 0x10D373323E5B9C0D 0x94119534 b323
	static void PRELOAD_BUSYSPINNER() { return invoke<void>(0xC65AB383CD91DF98); } // 0xC65AB383CD91DF98 0x71077FBD b323
	static BOOL BUSYSPINNER_IS_DISPLAYING() { return invoke<BOOL>(0xB2A592B04648A9CB); } // 0xB2A592B04648A9CB 0x3AF34DEF b323
	 // Shows the cursor on screen for one frame.
	static void _SET_MOUSE_CURSOR_ACTIVE_THIS_FRAME() { return invoke<void>(0xAAE7CE1D63167423); } // 0xAAE7CE1D63167423 b323
	 // Changes the mouse cursor's sprite. 
	 // 1 = Normal
	 // 6 = Left Arrow
	 // 7 = Right Arrow
	static void _SET_MOUSE_CURSOR_SPRITE(int spriteId) { return invoke<void>(0x8DB8CFFD58B62552, spriteId); } // 0x8DB8CFFD58B62552 b323
	static Any _0x3D9ACB1EB139E702() { return invoke<Any>(0x3D9ACB1EB139E702); } // 0x3D9ACB1EB139E702 b323
	static BOOL _0x632B2940C67F4EA9(int scaleformHandle, Any* p1, Any* p2, Any* p3) { return invoke<BOOL>(0x632B2940C67F4EA9, scaleformHandle, p1, p2, p3); } // 0x632B2940C67F4EA9 b323
	static void THEFEED_SET_SCRIPTED_MENU_HEIGHT(float pos) { return invoke<void>(0x55598D21339CB998, pos); } // 0x55598D21339CB998 0x1DA7E41A b323
	static void _THEFEED_DISABLE() { return invoke<void>(0x32888337579A5970); } // 0x32888337579A5970 b463
	static void THEFEED_HIDE_THIS_FRAME() { return invoke<void>(0x25F87B30C382FCA7); } // 0x25F87B30C382FCA7 0x1E63088A b323
	static void _0x15CFA549788D35EF() { return invoke<void>(0x15CFA549788D35EF); } // 0x15CFA549788D35EF b463
	static void THEFEED_FLUSH_QUEUE() { return invoke<void>(0xA8FDB297A8D25FBA); } // 0xA8FDB297A8D25FBA 0x5205C6F5 b323
	 // Removes a notification instantly instead of waiting for it to disappear
	static void THEFEED_REMOVE_ITEM(int notificationId) { return invoke<void>(0xBE4390CB40B3E627, notificationId); } // 0xBE4390CB40B3E627 0xECA8ACB9 b323
	static void THEFEED_PAUSE() { return invoke<void>(0xFDB423997FA30340); } // 0xFDB423997FA30340 0x4D0449C6 b323
	static void THEFEED_RESUME() { return invoke<void>(0xE1CD1E48E025E661); } // 0xE1CD1E48E025E661 0xD3F40140 b323
	static void THEFEED_COMMENT_TELEPORT_POOL_ON() { return invoke<void>(0x56C8B608CFD49854); } // 0x56C8B608CFD49854 0xF881AB87 b323
	static void THEFEED_COMMENT_TELEPORT_POOL_OFF() { return invoke<void>(0xADED7F5748ACAFE6); } // 0xADED7F5748ACAFE6 0x1D6859CA b323
	 // From the decompiled scripts, called 61 times:
	 // UI::_317EBA71D7543F52(&v_13, &v_13, &v_3, &v_3);
	static void _THEFEED_ADD_TXD_REF(Any* p0, Any* p1, Any* p2, Any* p3) { return invoke<void>(0x317EBA71D7543F52, p0, p1, p2, p3); } // 0x317EBA71D7543F52 b323
	 // Declares the entry type of a notification, for example "STRING".
	 // 
	 // int ShowNotification(char *text)
	 // {
	 // 	BEGIN_TEXT_COMMAND_THEFEED_POST("STRING");
	 // 	ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(text);
	 // 	return _DRAW_NOTIFICATION(1, 1);
	 // }
	static void BEGIN_TEXT_COMMAND_THEFEED_POST(const char* text) { return invoke<void>(0x202709F4C58A0424, text); } // 0x202709F4C58A0424 0x574EE85C b323
	 // List of picNames: pastebin.com/XdpJVbHz
	static int END_TEXT_COMMAND_THEFEED_POST_STATS(const char* txdName, const char* textureName, BOOL flash, int iconType, BOOL p4, const char* sender, const char* subject) { return invoke<int>(0x2B7E9A4EAAA93C89, txdName, textureName, flash, iconType, p4, sender, subject); } // 0x2B7E9A4EAAA93C89 0xED130FA1 b323
	 // List of picNames: pastebin.com/XdpJVbHz
	 // 
	 // 
	 // flash is a bool for fading in.
	 // iconTypes:
	 // 1 : Chat Box
	 // 2 : Email
	 // 3 : Add Friend Request
	 // 4 : Nothing
	 // 5 : Nothing
	 // 6 : Nothing
	 // 7 : Right Jumping Arrow
	 // 8 : RP Icon
	 // 9 : $ Icon
	 // 
	 // "sender" is the very top header. This can be any old string.
	 // "subject" is the header under the sender.
	static int END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(const char* picName1, const char* picName2, BOOL flash, int iconType, const char* sender, const char* subject) { return invoke<int>(0x1CCD9A37359072CF, picName1, picName2, flash, iconType, sender, subject); } // 0x1CCD9A37359072CF 0xE7E3C98B b323
	 // Needs more research.
	 // 
	 // Only one type of usage in the scripts:
	 // 
	 // UI::_C6F580E4C94926AC("CHAR_ACTING_UP", "CHAR_ACTING_UP", 0, 0, "DI_FEED_CHAR", a_0);
	static int _END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT_GXT_ENTRY(const char* picName1, const char* picName2, BOOL flash, int iconType, const char* sender, const char* subject) { return invoke<int>(0xC6F580E4C94926AC, picName1, picName2, flash, iconType, sender, subject); } // 0xC6F580E4C94926AC b323
	static int END_TEXT_COMMAND_THEFEED_POST_TICKER(BOOL blink, BOOL p1) { return invoke<int>(0x2ED7843F8F801023, blink, p1); } // 0x2ED7843F8F801023 0x08F7AF78 b323
	 // Example:
	 // 
	 // UI::_SET_NOTIFICATION_TEXT_ENTRY("HUNT");
	 // UI::_0xAA295B6F28BD587D("Hunting", "Hunting_Gold_128", 0, 109, "HUD_MED_UNLKED");
	static int END_TEXT_COMMAND_THEFEED_POST_AWARD(const char* p0, const char* p1, int p2, int p3, const char* p4) { return invoke<int>(0xAA295B6F28BD587D, p0, p1, p2, p3, p4); } // 0xAA295B6F28BD587D 0x02DED2B8 b323
	static int END_TEXT_COMMAND_THEFEED_POST_CREWTAG(BOOL p0, BOOL p1, int* p2, int p3, BOOL isLeader, BOOL unk0, int clanDesc, int R, int G, int B) { return invoke<int>(0x97C9E4E7024A8F2C, p0, p1, p2, p3, isLeader, unk0, clanDesc, R, G, B); } // 0x97C9E4E7024A8F2C 0xA9CCEF66 b323
	 // p0 = 1 or 0
	 // 
	 // crashes my game...
	 // this is for sending invites to network players - jobs/apartment/ect... 
	 // return notification handle
	 // 
	 // int invite(Player player)
	 //    {
	 //      networkHandleMgr netHandle;
	 //        networkClanMgr clan;
	 //       char *playerName = GET_PLAYER_NAME(player);
	 //        _SET_NOTIFICATION_TEXT_ENTRY("STRING");
	 //      _SET_NOTIFACTION_COLOR_NEXT(1);
	 //        ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(playerName);
	 //      NETWORK_HANDLE_FROM_PLAYER(player, &netHandle.netHandle, 13);
	 //      if (NETWORK_CLAN_PLAYER_IS_ACTIVE(&netHandle.netHandle))
	 //       {
	 //          NETWORK_CLAN_PLAYER_GET_DESC(&clan.clanHandle, 35, &netHandle.netHandle);
	 //          _DRAW_NOTIFICATION_CLAN_INVITE(0, _0x54E79E9C(&clan.clanHandle, 35), &clan.unk17, clan.isLeader, 0, 0, clan.clanHandle, playerName, 0, 0, 0);
	 //      }
	 //  }
	static int END_TEXT_COMMAND_THEFEED_POST_CREWTAG_WITH_GAME_NAME(BOOL p0, BOOL p1, int* p2, int p3, BOOL isLeader, BOOL unk0, int clanDesc, const char* playerName, int R, int G, int B) { return invoke<int>(0x137BC35589E34E1E, p0, p1, p2, p3, isLeader, unk0, clanDesc, playerName, R, G, B); } // 0x137BC35589E34E1E 0x88B9B909 b323
	static Any END_TEXT_COMMAND_THEFEED_POST_UNLOCK(Any p0, Any p1, Any p2) { return invoke<Any>(0x33EE12743CCD6343, p0, p1, p2); } // 0x33EE12743CCD6343 0xE05E7052 b323
	static Any END_TEXT_COMMAND_THEFEED_POST_UNLOCK_TU(Any p0, Any p1, Any p2, Any p3) { return invoke<Any>(0xC8F3AAF93D0600BF, p0, p1, p2, p3); } // 0xC8F3AAF93D0600BF 0x4FA43BA4 b323
	 // Used to be known as _SET_TEXT_ENTRY_2
	 // 
	 // void ShowSubtitle(char *text)
	 // {
	 //   BEGIN_TEXT_COMMAND_PRINT("STRING");
	 //  ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(text);
	 //    END_TEXT_COMMAND_PRINT(2000, 1);
	 // }
	static void BEGIN_TEXT_COMMAND_PRINT(const char* GxtEntry) { return invoke<void>(0xB87A37EEB7FAA67D, GxtEntry); } // 0xB87A37EEB7FAA67D 0xF42C43C7 b323
	 // Draws the subtitle at middle center of the screen.
	 // 
	 // int duration = time in milliseconds to show text on screen before disappearing
	 // 
	 // drawImmediately = If true, the text will be drawn immediately, if false, the text will be drawn after the previous subtitle has finished
	 // 
	 // Used to be known as _DRAW_SUBTITLE_TIMED
	static void END_TEXT_COMMAND_PRINT(int duration, BOOL drawImmediately) { return invoke<void>(0x9D77056A530643F6, duration, drawImmediately); } // 0x9D77056A530643F6 0x38F82261 b323
	 // nothin doin. 
	 // 
	 // BOOL Message(const char* text)
	 //    {
	 //      BEGIN_TEXT_COMMAND_IS_MESSAGE_DISPLAYED("STRING");
	 //       ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(text);
	 //        return END_TEXT_COMMAND_IS_MESSAGE_DISPLAYED();
	 //    }
	static void BEGIN_TEXT_COMMAND_IS_MESSAGE_DISPLAYED(const char* text) { return invoke<void>(0x853648FD1063A213, text); } // 0x853648FD1063A213 0xDD524A11 b323
	static BOOL END_TEXT_COMMAND_IS_MESSAGE_DISPLAYED() { return invoke<BOOL>(0x8A9BA1AB3E237613); } // 0x8A9BA1AB3E237613 0x672EFB45 b323
	 // The following were found in the decompiled script files:
	 // STRING, TWOSTRINGS, NUMBER, PERCENTAGE, FO_TWO_NUM, ESMINDOLLA, ESDOLLA, MTPHPER_XPNO, AHD_DIST, CMOD_STAT_0, CMOD_STAT_1, CMOD_STAT_2, CMOD_STAT_3, DFLT_MNU_OPT, F3A_TRAFDEST, ES_HELP_SOC3
	 // 
	 // ESDOLLA - cash
	 // ESMINDOLLA - cash (negative)
	 // 
	 // Used to be known as _SET_TEXT_ENTRY
	static void BEGIN_TEXT_COMMAND_DISPLAY_TEXT(const char* text) { return invoke<void>(0x25FBB336DF1804CB, text); } // 0x25FBB336DF1804CB 0x3E35563E b323
	 // After applying the properties to the text (See UI::SET_TEXT_), this will draw the text in the applied position. Also 0.0f < x, y < 1.0f, percentage of the axis.
	 // 
	 // Used to be known as _DRAW_TEXT
	static void END_TEXT_COMMAND_DISPLAY_TEXT(float x, float y, int p2) { return invoke<void>(0xCD015E5BB0D96A57, x, y, p2); } // 0xCD015E5BB0D96A57 0x6F8350CE b323
	 // BEGIN_TEXT_COMMAND_*
	 // 
	 // Example:
	 // _BEGIN_TEXT_COMMAND_GET_WIDTH("NUMBER");
	 // ADD_TEXT_COMPONENT_FLOAT(69.420f, 2);
	 // float width = _END_TEXT_COMMAND_GET_WIDTH(1);
	static void _BEGIN_TEXT_COMMAND_GET_WIDTH(const char* text) { return invoke<void>(0x54CE8AC98E120CAB, text); } // 0x54CE8AC98E120CAB 0x51E7A037 b323
	 // END_TEXT_COMMAND_*
	 // 
	 // In scripts font most of the time is passed as 1.
	 // Use _BEGIN_TEXT_GET_COMMAND_GET_WIDTH
	 // 
	 // param is not font from what i've tested
	static float _END_TEXT_COMMAND_GET_WIDTH(BOOL p0) { return invoke<float>(0x85F061DA64ED2F67, p0); } // 0x85F061DA64ED2F67 0xD12A643A b323
	 // BEGIN_TEXT_COMMAND_*
	 // 
	 // get's line count
	 // 
	 // 
	 // int GetLineCount(char *text, float x, float y)
	 //     {
	 //      _BEGIN_TEXT_COMMAND_LINE_COUNT("STRING");
	 //                 ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(text);
	 //       return _END_TEXT_COMMAND_GET_LINE_COUNT(x, y);
	 //     }
	static void _BEGIN_TEXT_COMMAND_LINE_COUNT(const char* entry) { return invoke<void>(0x521FB041D93DD0E4, entry); } // 0x521FB041D93DD0E4 0x94B82066 b323
	 // END_TEXT_COMMAND_*
	 // 
	 // Determines how many lines the text string will use when drawn on screen. 
	 // Must use 0x521FB041D93DD0E4 for setting up
	static int _END_TEXT_COMMAND_LINE_COUNT(float x, float y) { return invoke<int>(0x9040DFB09BE75706, x, y); } // 0x9040DFB09BE75706 0xAA318785 b323
	 // Used to be known as _SET_TEXT_COMPONENT_FORMAT
	static void BEGIN_TEXT_COMMAND_DISPLAY_HELP(const char* inputType) { return invoke<void>(0x8509B634FBE7DA11, inputType); } // 0x8509B634FBE7DA11 0xB245FC10 b323
	 // shape goes from -1 to 50 (may be more).
	 // p0 is always 0.
	 // 
	 // Example:
	 // void FloatingHelpText(const char* text)
	 // {
	 //     BEGIN_TEXT_COMMAND_DISPLAY_HELP("STRING");
	 //   ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(text);
	 //    END_TEXT_COMMAND_DISPLAY_HELP (0, 0, 1, -1);
	 // }
	 // 
	 // Image:
	 // - imgbin.org/images/26209.jpg
	 // 
	 // more inputs/icons:
	 // - pastebin.com/nqNYWMSB
	 // 
	 // Used to be known as _DISPLAY_HELP_TEXT_FROM_STRING_LABEL
	static void END_TEXT_COMMAND_DISPLAY_HELP(int p0, BOOL loop, BOOL beep, int shape) { return invoke<void>(0x238FFE5C7B0498A6, p0, loop, beep, shape); } // 0x238FFE5C7B0498A6 0xB59B530D b323
	 // BOOL IsContextActive(char *ctx)
	 //     {
	 //      BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(ctx);
	 //      return END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
	 //   }
	static void BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(const char* labelName) { return invoke<void>(0x0A24DA3A41B718F5, labelName); } // 0x0A24DA3A41B718F5 0x00E20F2D b323
	static BOOL END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(int p0) { return invoke<BOOL>(0x10BDDBFC529428DD, p0); } // 0x10BDDBFC529428DD 0xF63A13EC b323
	 // example:
	 // 
	 // UI::BEGIN_TEXT_COMMAND_SET_BLIP_NAME("STRING");
	 // UI::_ADD_TEXT_COMPONENT_STRING("Name");
	 // UI::END_TEXT_COMMAND_SET_BLIP_NAME(blip);
	static void BEGIN_TEXT_COMMAND_SET_BLIP_NAME(const char* gxtentry) { return invoke<void>(0xF9113A30DE5C6670, gxtentry); } // 0xF9113A30DE5C6670 0xF4C211F6 b323
	static void END_TEXT_COMMAND_SET_BLIP_NAME(Blip blip) { return invoke<void>(0xBC38B49BCB83BC9B, blip); } // 0xBC38B49BCB83BC9B 0xE8E59820 b323
	 // clears a print text command with this text
	static void BEGIN_TEXT_COMMAND_CLEAR_PRINT(const char* text) { return invoke<void>(0xE124FA80A759019C, text); } // 0xE124FA80A759019C 0x550665AE b323
	static void END_TEXT_COMMAND_CLEAR_PRINT() { return invoke<void>(0xFCC75460ABA29378); } // 0xFCC75460ABA29378 0x67785AF2 b323
	static void ADD_TEXT_COMPONENT_INTEGER(int value) { return invoke<void>(0x03B504CF259931BC, value); } // 0x03B504CF259931BC 0xFE272A57 b323
	static void ADD_TEXT_COMPONENT_FLOAT(float value, int decimalPlaces) { return invoke<void>(0xE7DCB5B874BCD96E, value, decimalPlaces); } // 0xE7DCB5B874BCD96E 0x24D78013 b323
	static void ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(const char* labelName) { return invoke<void>(0xC63CD5D2920ACBE7, labelName); } // 0xC63CD5D2920ACBE7 0xDCE05406 b323
	 // It adds the localized text of the specified GXT entry name. Eg. if the argument is GET_HASH_KEY("ES_HELP"), adds "Continue". Just uses a text labels hash key
	static void ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL_HASH_KEY(Hash gxtEntryHash) { return invoke<void>(0x17299B63C7683A2B, gxtEntryHash); } // 0x17299B63C7683A2B 0x150E03B6 b323
	static void ADD_TEXT_COMPONENT_SUBSTRING_BLIP_NAME(Blip blip) { return invoke<void>(0x80EAD8E2E1D5D52E, blip); } // 0x80EAD8E2E1D5D52E 0x5DE98F0A b323
	static void ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(const char* text) { return invoke<void>(0x6C188BE134E074AA, text); } // 0x6C188BE134E074AA 0x27A244D8 b323
	 // Adds a timer (e.g. "00:00:00:000"). The appearance of the timer depends on the flags, which needs more research.
	static void ADD_TEXT_COMPONENT_SUBSTRING_TIME(int timestamp, int flags) { return invoke<void>(0x1115F16B8AB9E8BF, timestamp, flags); } // 0x1115F16B8AB9E8BF 0x135B3CD0 b323
	static void ADD_TEXT_COMPONENT_FORMATTED_INTEGER(int value, BOOL commaSeparated) { return invoke<void>(0x0E4C749FF9DE9CC4, value, commaSeparated); } // 0x0E4C749FF9DE9CC4 0x12929BDF b323
	 // p1 was always -1
	static void ADD_TEXT_COMPONENT_SUBSTRING_PHONE_NUMBER(const char* p0, int p1) { return invoke<void>(0x761B77454205A61D, p0, p1); } // 0x761B77454205A61D 0x65E1D404 b323
	static void ADD_TEXT_COMPONENT_SUBSTRING_KEYBOARD_DISPLAY(const char* string) { return invoke<void>(0x5F68520888E69014, string); } // 0x5F68520888E69014 0x0829A799 b323
	static void SET_COLOUR_OF_NEXT_TEXT_COMPONENT(int hudColor) { return invoke<void>(0x39BBF623FC803EAC, hudColor); } // 0x39BBF623FC803EAC 0x6F1A1901 b323
	 // Returns a substring of a specified length starting at a specified position.
	 // 
	 // Example:
	 // // Get "STRING" text from "MY_STRING"
	 // subStr = UI::_GET_TEXT_SUBSTRING("MY_STRING", 3, 6);
	static const char* _GET_TEXT_SUBSTRING(const char* text, int position, int length) { return invoke<const char*>(0x169BD9382084C8C0, text, position, length); } // 0x169BD9382084C8C0 0x34A396EE b323
	 // Returns a substring of a specified length starting at a specified position. The result is guaranteed not to exceed the specified max length.
	 // 
	 // NOTE: The 'maxLength' parameter might actually be the size of the buffer that is returned. More research is needed. -CL69
	 // 
	 // Example:
	 // // Condensed example of how Rockstar uses this function
	 // strLen = UI::GET_LENGTH_OF_LITERAL_STRING(GAMEPLAY::GET_ONSCREEN_KEYBOARD_RESULT());
	 // subStr = UI::_GET_TEXT_SUBSTRING_SAFE(GAMEPLAY::GET_ONSCREEN_KEYBOARD_RESULT(), 0, strLen, 63);
	 // 
	 // --
	 // 
	 // "fm_race_creator.ysc", line 85115:
	 // // parameters modified for clarity
	 // BOOL sub_8e5aa(char *text, int length) {
	 //     for (i = 0; i <= (length - 2); i += 1) {
	 //         if (!GAMEPLAY::ARE_STRINGS_EQUAL(UI::_GET_TEXT_SUBSTRING_SAFE(text, i, i + 1, 1), " ")) {
	 //             return FALSE;
	 //         }
	 //     }
	 //     return TRUE;
	 // }
	static const char* _GET_TEXT_SUBSTRING_SAFE(const char* text, int position, int length, int maxLength) { return invoke<const char*>(0xB2798643312205C5, text, position, length, maxLength); } // 0xB2798643312205C5 0x0183A66C b323
	 // Returns a substring that is between two specified positions. The length of the string will be calculated using (endPosition - startPosition).
	 // 
	 // Example:
	 // // Get "STRING" text from "MY_STRING"
	 // subStr = UI::_GET_TEXT_SUBSTRING_SLICE("MY_STRING", 3, 9);
	 // // Overflows are possibly replaced with underscores (needs verification)
	 // subStr = UI::_GET_TEXT_SUBSTRING_SLICE("MY_STRING", 3, 10); // "STRING_"?
	static const char* _GET_TEXT_SUBSTRING_SLICE(const char* text, int startPosition, int endPosition) { return invoke<const char*>(0xCE94AEBA5D82908A, text, startPosition, endPosition); } // 0xCE94AEBA5D82908A 0xFA6373BB b323
	 // Gets a string literal from a label name.
	 // 
	 // GET_F*
	static const char* _GET_LABEL_TEXT(const char* labelName) { return invoke<const char*>(0x7B5280EBA9840C72, labelName); } // 0x7B5280EBA9840C72 0x95C4B5AD b323
	static void CLEAR_PRINTS() { return invoke<void>(0xCC33FA791322B9D9); } // 0xCC33FA791322B9D9 0x216CB1C5 b323
	static void CLEAR_ALL_HELP_MESSAGES() { return invoke<void>(0x6178F68A87A4D3A0); } // 0x6178F68A87A4D3A0 0x9E5D9198 b323
	 // p0: found arguments in the b617d scripts: pastebin.com/X5akCN7z
	static void CLEAR_THIS_PRINT(const char* p0) { return invoke<void>(0xCF708001E1E536DD, p0); } // 0xCF708001E1E536DD 0x06878327 b323
	static void CLEAR_SMALL_PRINTS() { return invoke<void>(0x2CEA2839313C09AC); } // 0x2CEA2839313C09AC 0xA869A238 b323
	static BOOL DOES_TEXT_BLOCK_EXIST(const char* gxt) { return invoke<BOOL>(0x1C7302E725259789, gxt); } // 0x1C7302E725259789 0x96F74838 b323
	 // Request a gxt into the passed slot.
	static void REQUEST_ADDITIONAL_TEXT(const char* gxt, int slot) { return invoke<void>(0x71A78003C8E71424, gxt, slot); } // 0x71A78003C8E71424 0x9FA9175B b323
	static void REQUEST_ADDITIONAL_TEXT_FOR_DLC(const char* gxt, int slot) { return invoke<void>(0x6009F9F1AE90D8A6, gxt, slot); } // 0x6009F9F1AE90D8A6 0xF4D27EBE b323
	static BOOL HAS_ADDITIONAL_TEXT_LOADED(int slot) { return invoke<BOOL>(0x02245FE4BED318B8, slot); } // 0x02245FE4BED318B8 0xB0E56045 b323
	static void CLEAR_ADDITIONAL_TEXT(int p0, BOOL p1) { return invoke<void>(0x2A179DF17CCF04CD, p0, p1); } // 0x2A179DF17CCF04CD 0x518141E0 b323
	static BOOL IS_STREAMING_ADDITIONAL_TEXT(int p0) { return invoke<BOOL>(0x8B6817B71B85EBF0, p0); } // 0x8B6817B71B85EBF0 0xF079E4EB b323
	 // Checks if the specified gxt has loaded into the passed slot.
	static BOOL HAS_THIS_ADDITIONAL_TEXT_LOADED(const char* gxt, int slot) { return invoke<BOOL>(0xADBF060E2B30C5BC, gxt, slot); } // 0xADBF060E2B30C5BC 0x80A52040 b323
	static BOOL IS_MESSAGE_BEING_DISPLAYED() { return invoke<BOOL>(0x7984C03AA5CC2F41); } // 0x7984C03AA5CC2F41 0x6A77FE8D b323
	 // Checks if the passed gxt name exists in the game files.
	static BOOL DOES_TEXT_LABEL_EXIST(const char* gxt) { return invoke<BOOL>(0xAC09CA973C564252, gxt); } // 0xAC09CA973C564252 0x6ECAE560 b323
	 // Returns the length of the string passed (much like strlen).
	static int GET_LENGTH_OF_LITERAL_STRING(const char* string) { return invoke<int>(0xF030907CCBB8A9FD, string); } // 0xF030907CCBB8A9FD 0x99379D55 b323
	static int GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(const char* string) { return invoke<int>(0x43E4111189E54F0E, string); } // 0x43E4111189E54F0E 0x7DBC0764 b323
	static BOOL IS_HUD_PREFERENCE_SWITCHED_ON() { return invoke<BOOL>(0x1930DFA731813EC4); } // 0x1930DFA731813EC4 0xC3BC1B4F b323
	static BOOL IS_SUBTITLE_PREFERENCE_SWITCHED_ON() { return invoke<BOOL>(0xAD6DACA4BA53E0A4); } // 0xAD6DACA4BA53E0A4 0x63BA19F5 b323
	 // If Hud should be displayed
	static void DISPLAY_HUD(BOOL toggle) { return invoke<void>(0xA6294919E56FF02A, toggle); } // 0xA6294919E56FF02A 0xD10E4E31 b323
	 // If Minimap / Radar should be displayed.
	static void DISPLAY_RADAR(BOOL toggle) { return invoke<void>(0xA0EBB943C300E693, toggle); } // 0xA0EBB943C300E693 0x52816BD4 b323
	static BOOL IS_HUD_HIDDEN() { return invoke<BOOL>(0xA86478C6958735C5); } // 0xA86478C6958735C5 0x40BADA1D b323
	static BOOL IS_RADAR_HIDDEN() { return invoke<BOOL>(0x157F93B036700462); } // 0x157F93B036700462 0x1AB3B954 b323
	static BOOL IS_MINIMAP_RENDERING() { return invoke<BOOL>(0xAF754F20EB5CD51A); } // 0xAF754F20EB5CD51A 0x9CD18314 b323
	 // Enable / disable showing route for the Blip-object.
	static void SET_BLIP_ROUTE(Blip blip, BOOL enabled) { return invoke<void>(0x4F7D8A9BFB0B43E9, blip, enabled); } // 0x4F7D8A9BFB0B43E9 0x3E160C90 b323
	static void SET_BLIP_ROUTE_COLOUR(Blip blip, int colour) { return invoke<void>(0x837155CD2F63DA09, blip, colour); } // 0x837155CD2F63DA09 0xDDE7C65C b323
	static void ADD_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS(BOOL p0) { return invoke<void>(0x60296AF4BA14ABC5, p0); } // 0x60296AF4BA14ABC5 0xB58B25BD b323
	 // zoomLevel ranges from 0 to 200 
	static void SET_RADAR_ZOOM(int zoomLevel) { return invoke<void>(0x096EF57A0C999BBA, zoomLevel); } // 0x096EF57A0C999BBA 0x2A50D1A6 b323
	 // HUD colors and their values: pastebin.com/d9aHPbXN
	static void GET_HUD_COLOUR(int hudColorIndex, int* r, int* g, int* b, int* a) { return invoke<void>(0x7C9C91AB74A0360F, hudColorIndex, r, g, b, a); } // 0x7C9C91AB74A0360F 0x63F66A0B b323
	 // HUD colors and their values: pastebin.com/d9aHPbXN
	static void REPLACE_HUD_COLOUR_WITH_RGBA(int hudColorIndex, int r, int g, int b, int a) { return invoke<void>(0xF314CF4F0211894E, hudColorIndex, r, g, b, a); } // 0xF314CF4F0211894E 0xF6E7E92B b323
	 // This get's the height of the FONT and not the total text. You need to get the number of lines your text uses, and get the height of a newline (I'm using a smaller value) to get the total text height.
	static float _GET_TEXT_SCALE_HEIGHT(float size, int font) { return invoke<float>(0xDB88A37483346780, size, font); } // 0xDB88A37483346780 0x3330175B b323
	 // Size range : 0F to 1.0F
	 // p0 is unknown and doesn't seem to have an effect, yet in the game scripts it changes to 1.0F sometimes.
	static void SET_TEXT_SCALE(float scale, float size) { return invoke<void>(0x07C837F9A01C34C9, scale, size); } // 0x07C837F9A01C34C9 0xB6E15B23 b323
	 // colors you input not same as you think?
	 // A: for some reason its R B G A
	static void SET_TEXT_COLOUR(int red, int green, int blue, int alpha) { return invoke<void>(0xBE6B23FFA53FB442, red, green, blue, alpha); } // 0xBE6B23FFA53FB442 0xE54DD2C8 b323
	static void SET_TEXT_CENTRE(BOOL align) { return invoke<void>(0xC02F4DBFB51D988B, align); } // 0xC02F4DBFB51D988B 0xE26D39A1 b323
	static void SET_TEXT_RIGHT_JUSTIFY(BOOL toggle) { return invoke<void>(0x6B3C4650BC8BEE47, toggle); } // 0x6B3C4650BC8BEE47 0x45B60520 b323
	 // Types -
	 // 0: Center-Justify
	 // 1: Left-Justify
	 // 2: Right-Justify
	 // 
	 // Right-Justify requires SET_TEXT_WRAP, otherwise it will draw to the far right of the screen
	static void SET_TEXT_JUSTIFICATION(int justifyType) { return invoke<void>(0x4E096588B13FFECA, justifyType); } // 0x4E096588B13FFECA 0x68CDFA60 b323
	 // It sets the text in a specified box and wraps the text if it exceeds the boundries. Both values are for X axis. Useful when positioning text set to center or aligned to the right.
	 // 
	 // start - left boundry on screen position (0.0 - 1.0)
	 // end - right boundry on screen position (0.0 - 1.0)
	static void SET_TEXT_WRAP(float start, float end) { return invoke<void>(0x63145D9C883A1A70, start, end); } // 0x63145D9C883A1A70 0x6F60AB54 b323
	static void SET_TEXT_LEADING(int p0) { return invoke<void>(0xA50ABC31E3CDFAFF, p0); } // 0xA50ABC31E3CDFAFF 0x98CE21D4 b323
	 // This native does absolutely nothing, just a nullsub
	static void SET_TEXT_PROPORTIONAL(BOOL p0) { return invoke<void>(0x038C1F517D7FDCF8, p0); } // 0x038C1F517D7FDCF8 0xF49D8A08 b323
	 // fonts that mess up your text where made for number values/misc stuff
	static void SET_TEXT_FONT(int fontType) { return invoke<void>(0x66E0276CC5F6B9DA, fontType); } // 0x66E0276CC5F6B9DA 0x80BC530D b323
	static void SET_TEXT_DROP_SHADOW() { return invoke<void>(0x1CA3E9EAC9D93E5E); } // 0x1CA3E9EAC9D93E5E 0xE2A11511 b323
	 // distance - shadow distance in pixels, both horizontal and vertical
	 // r, g, b, a - color
	static void SET_TEXT_DROPSHADOW(int distance, int r, int g, int b, int a) { return invoke<void>(0x465C84BC39F1C351, distance, r, g, b, a); } // 0x465C84BC39F1C351 0xE6587517 b323
	static void SET_TEXT_OUTLINE() { return invoke<void>(0x2513DFB0FB8400FE); } // 0x2513DFB0FB8400FE 0xC753412F b323
	 // This native does absolutely nothing, just a nullsub
	static void SET_TEXT_EDGE(int p0, int r, int g, int b, int a) { return invoke<void>(0x441603240D202FA6, p0, r, g, b, a); } // 0x441603240D202FA6 0x3F1A5DAB b323
	static void SET_TEXT_RENDER_ID(int renderId) { return invoke<void>(0x5F15302936E07111, renderId); } // 0x5F15302936E07111 0xC5C3B7F3 b323
	 // This function is hard-coded to always return 1.
	static int GET_DEFAULT_SCRIPT_RENDERTARGET_RENDER_ID() { return invoke<int>(0x52F0982D7FD156B6); } // 0x52F0982D7FD156B6 0x8188935F b323
	static BOOL REGISTER_NAMED_RENDERTARGET(const char* name, BOOL p1) { return invoke<BOOL>(0x57D9C12635E25CE3, name, p1); } // 0x57D9C12635E25CE3 0xFAE5D6F0 b323
	static BOOL IS_NAMED_RENDERTARGET_REGISTERED(const char* name) { return invoke<BOOL>(0x78DCDC15C9F116B4, name); } // 0x78DCDC15C9F116B4 0x284057F5 b323
	static BOOL RELEASE_NAMED_RENDERTARGET(const char* name) { return invoke<BOOL>(0xE9F6FFE837354DD4, name); } // 0xE9F6FFE837354DD4 0xD3F6C892 b323
	static void LINK_NAMED_RENDERTARGET(Hash modelHash) { return invoke<void>(0xF6C09E276AEB3F2D, modelHash); } // 0xF6C09E276AEB3F2D 0x6844C4B9 b323
	static int GET_NAMED_RENDERTARGET_RENDER_ID(const char* name) { return invoke<int>(0x1A6478B61C6BDC3B, name); } // 0x1A6478B61C6BDC3B 0xF9D7A401 b323
	static BOOL IS_NAMED_RENDERTARGET_LINKED(Hash modelHash) { return invoke<BOOL>(0x113750538FA31298, modelHash); } // 0x113750538FA31298 0x8B52601F b323
	static void CLEAR_HELP(BOOL toggle) { return invoke<void>(0x8DFCED7A656F8802, toggle); } // 0x8DFCED7A656F8802 0xE6D85741 b323
	static BOOL IS_HELP_MESSAGE_ON_SCREEN() { return invoke<BOOL>(0xDAD37F45428801AE); } // 0xDAD37F45428801AE 0x4B3C9CA9 b323
	 // HAS_S*
	static BOOL _0x214CD562A939246A() { return invoke<BOOL>(0x214CD562A939246A); } // 0x214CD562A939246A 0x812CBE0E b323
	static BOOL IS_HELP_MESSAGE_BEING_DISPLAYED() { return invoke<BOOL>(0x4D79439A6B55AC67); } // 0x4D79439A6B55AC67 0xA65F262A b323
	static BOOL IS_HELP_MESSAGE_FADING_OUT() { return invoke<BOOL>(0x327EDEEEAC55C369); } // 0x327EDEEEAC55C369 0x3E50AE92 b323
	static void _SET_HELP_MESSAGE_TEXT_STYLE(Any p0, Any p1, Any p2, Any p3, Any p4) { return invoke<void>(0xB9C362BABECDDC7A, p0, p1, p2, p3, p4); } // 0xB9C362BABECDDC7A b463
	 // This function is hard-coded to always return 1.
	static BOOL GET_STANDARD_BLIP_ENUM_ID() { return invoke<BOOL>(0x4A9923385BDB9DAD); } // 0x4A9923385BDB9DAD 0x87871CE0 b323
	static int GET_WAYPOINT_BLIP_ENUM_ID() { return invoke<int>(0x186E5D252FA50E7D); } // 0x186E5D252FA50E7D 0xB9827942 b323
	static int GET_NUMBER_OF_ACTIVE_BLIPS() { return invoke<int>(0x9A3FF3DE163034E8); } // 0x9A3FF3DE163034E8 0x144020FA b323
	static Blip GET_NEXT_BLIP_INFO_ID(int blipSprite) { return invoke<Blip>(0x14F96AA50D6FBEA7, blipSprite); } // 0x14F96AA50D6FBEA7 0x9356E92F b323
	static Blip GET_FIRST_BLIP_INFO_ID(int blipSprite) { return invoke<Blip>(0x1BEDE233E6CD2A1F, blipSprite); } // 0x1BEDE233E6CD2A1F 0x64C0273D b323
	static Vector3 GET_BLIP_INFO_ID_COORD(Blip blip) { return invoke<Vector3>(0xFA7C7F0AADF25D09, blip); } // 0xFA7C7F0AADF25D09 0xB7374A66 b323
	static int GET_BLIP_INFO_ID_DISPLAY(Blip blip) { return invoke<int>(0x1E314167F701DC3B, blip); } // 0x1E314167F701DC3B 0xD0FC19F4 b323
	 // Returns a value based on what the blip is attached to
	 // 1 - Vehicle
	 // 2 - Ped
	 // 3 - Object
	 // 4 - Coord
	 // 5 - unk
	 // 6 - Pickup
	 // 7 - Radius
	static int GET_BLIP_INFO_ID_TYPE(Blip blip) { return invoke<int>(0xBE9B0959FFD0779B, blip); } // 0xBE9B0959FFD0779B 0x501D7B4E b323
	static Entity GET_BLIP_INFO_ID_ENTITY_INDEX(Blip blip) { return invoke<Entity>(0x4BA4E2553AFEDC2C, blip); } // 0x4BA4E2553AFEDC2C 0xA068C40B b323
	 // This function is hard-coded to always return 0.
	static Pickup GET_BLIP_INFO_ID_PICKUP_INDEX(Blip blip) { return invoke<Pickup>(0x9B6786E4C03DD382, blip); } // 0x9B6786E4C03DD382 0x86913D37 b323
	 // Returns the Blip handle of given Entity.
	static Blip GET_BLIP_FROM_ENTITY(Entity entity) { return invoke<Blip>(0xBC8DBDCA2436F7E8, entity); } // 0xBC8DBDCA2436F7E8 0x005A2A47 b323
	static Blip ADD_BLIP_FOR_RADIUS(float posX, float posY, float posZ, float radius) { return invoke<Blip>(0x46818D79B1F7499A, posX, posY, posZ, radius); } // 0x46818D79B1F7499A 0x4626756C b323
	 // Returns red ( default ) blip attached to entity.
	 // 
	 // Example:
	 // Blip blip; //Put this outside your case or option
	 // blip = UI::ADD_BLIP_FOR_ENTITY(YourPedOrBodyguardName);
	 // UI::SET_BLIP_AS_FRIENDLY(blip, true);
	static Blip ADD_BLIP_FOR_ENTITY(Entity entity) { return invoke<Blip>(0x5CDE92C702A8FCE7, entity); } // 0x5CDE92C702A8FCE7 0x30822554 b323
	static Blip ADD_BLIP_FOR_PICKUP(Pickup pickup) { return invoke<Blip>(0xBE339365C863BD36, pickup); } // 0xBE339365C863BD36 0x16693C3A b323
	 // Creates an orange ( default ) Blip-object. Returns a Blip-object which can then be modified.
	static Blip ADD_BLIP_FOR_COORD(float x, float y, float z) { return invoke<Blip>(0x5A039BB0BCA604B6, x, y, z); } // 0x5A039BB0BCA604B6 0xC6F43D0E b323
	static void SET_BLIP_COORDS(Blip blip, float posX, float posY, float posZ) { return invoke<void>(0xAE2AF67E9D9AF65D, blip, posX, posY, posZ); } // 0xAE2AF67E9D9AF65D 0x680A34D4 b323
	static Vector3 GET_BLIP_COORDS(Blip blip) { return invoke<Vector3>(0x586AFE3FF72D996E, blip); } // 0x586AFE3FF72D996E 0xEF6FF47B b323
	 // Takes a blip object and adds a sprite to it on the map.
	 // 
	 // You may have your own list, but since dev-c didn't show it I was bored and started looking through scripts and functions to get a presumable almost positive list of a majority of blip IDs
	 // h t t p://pastebin.com/Bpj9Sfft
	 // 
	 // Blips Images + IDs:
	 // gtaxscripting.blogspot.com/2016/05/gta-v-blips-id-and-image.html
	static void SET_BLIP_SPRITE(Blip blip, int spriteId) { return invoke<void>(0xDF735600A4696DAF, blip, spriteId); } // 0xDF735600A4696DAF 0x8DBBB0B9 b323
	 // Blips Images + IDs:
	 // gtaxscripting.blogspot.com/2016/05/gta-v-blips-id-and-image.html
	static int GET_BLIP_SPRITE(Blip blip) { return invoke<int>(0x1FC877464A04FC4F, blip); } // 0x1FC877464A04FC4F 0x72FF2E73 b323
	 // Doesn't work if the label text of gxtEntry is >= 80.
	static void SET_BLIP_NAME_FROM_TEXT_FILE(Blip blip, const char* gxtEntry) { return invoke<void>(0xEAA0FFE120D92784, blip, gxtEntry); } // 0xEAA0FFE120D92784 0xAC8A5461 b323
	 // Sets alpha-channel for blip color.
	 // 
	 // Example:
	 // 
	 // Blip blip = UI::ADD_BLIP_FOR_ENTITY(entity);
	 // UI::SET_BLIP_COLOUR(blip , 3);
	 // UI::SET_BLIP_ALPHA(blip , 64);
	 // 
	static void SET_BLIP_ALPHA(Blip blip, int alpha) { return invoke<void>(0x45FF974EEE1C8734, blip, alpha); } // 0x45FF974EEE1C8734 0xA791FCCD b323
	static int GET_BLIP_ALPHA(Blip blip) { return invoke<int>(0x970F608F0EE6C885, blip); } // 0x970F608F0EE6C885 0x297AF6C8 b323
	static void SET_BLIP_FADE(Blip blip, int opacity, int duration) { return invoke<void>(0x2AEE8F8390D2298C, blip, opacity, duration); } // 0x2AEE8F8390D2298C 0xA5999031 b323
	 // After some testing, looks like you need to use CEIL() on the rotation (vehicle/ped heading) before using it there.
	static void SET_BLIP_ROTATION(Blip blip, int rotation) { return invoke<void>(0xF87683CDF73C3F6E, blip, rotation); } // 0xF87683CDF73C3F6E 0x6B8F44FE b323
	 // Adds up after viewing multiple R* scripts. I believe that the duration is in miliseconds.
	static void SET_BLIP_FLASH_TIMER(Blip blip, int duration) { return invoke<void>(0xD3CD6FD297AE87CC, blip, duration); } // 0xD3CD6FD297AE87CC 0x8D5DF611 b323
	static void SET_BLIP_FLASH_INTERVAL(Blip blip, Any p1) { return invoke<void>(0xAA51DB313C010A7E, blip, p1); } // 0xAA51DB313C010A7E 0xEAF67377 b323
	 // https://gtaforums.com/topic/864881-all-blip-color-ids-pictured/
	static void SET_BLIP_COLOUR(Blip blip, int color) { return invoke<void>(0x03D7FB09E75D6B7E, blip, color); } // 0x03D7FB09E75D6B7E 0xBB3C5A41 b323
	static int GET_BLIP_COLOUR(Blip blip) { return invoke<int>(0xDF729E8D20CF7327, blip); } // 0xDF729E8D20CF7327 0xDD6A1E54 b323
	static int GET_BLIP_HUD_COLOUR(Blip blip) { return invoke<int>(0x729B5F1EFBC0AAEE, blip); } // 0x729B5F1EFBC0AAEE 0xE88B4BC2 b323
	static BOOL IS_BLIP_SHORT_RANGE(Blip blip) { return invoke<BOOL>(0xDA5F8727EB75B926, blip); } // 0xDA5F8727EB75B926 0x1226765A b323
	static BOOL DOES_BLIP_HAVE_GPS_ROUTE(Blip blip) { return invoke<BOOL>(0xDD2238F57B977751, blip); } // 0xDD2238F57B977751 0x3E47F357 b323
	static void SET_BLIP_HIDDEN_ON_LEGEND(Blip blip, BOOL toggle) { return invoke<void>(0x54318C915D27E4CE, blip, toggle); } // 0x54318C915D27E4CE 0x43996428 b323
	static void SET_BLIP_HIGH_DETAIL(Blip blip, BOOL toggle) { return invoke<void>(0xE2590BC29220CEBB, blip, toggle); } // 0xE2590BC29220CEBB 0xD5842BFF b323
	static void SET_BLIP_AS_MISSION_CREATOR_BLIP(Blip blip, BOOL toggle) { return invoke<void>(0x24AC0137444F9FD5, blip, toggle); } // 0x24AC0137444F9FD5 0x802FB686 b323
	static BOOL IS_MISSION_CREATOR_BLIP(Blip blip) { return invoke<BOOL>(0x26F49BF3381D933D, blip); } // 0x26F49BF3381D933D 0x24ACC4E9 b323
	static Blip GET_NEW_SELECTED_MISSION_CREATOR_BLIP() { return invoke<Blip>(0x5C90988E7C8E1AF4); } // 0x5C90988E7C8E1AF4 0xFFD7476C b323
	static BOOL IS_HOVERING_OVER_MISSION_CREATOR_BLIP() { return invoke<BOOL>(0x4167EFE0527D706E); } // 0x4167EFE0527D706E 0xC5EB849A b323
	static void SHOW_START_MISSION_INSTRUCTIONAL_BUTTON(BOOL p0) { return invoke<void>(0xF1A6C18B35BCADE6, p0); } // 0xF1A6C18B35BCADE6 0xA2CAAB4F b323
	static void _0xB552929B85FC27EC(Any p0, Any p1) { return invoke<void>(0xB552929B85FC27EC, p0, p1); } // 0xB552929B85FC27EC b573
	static void SET_BLIP_FLASHES(Blip blip, BOOL toggle) { return invoke<void>(0xB14552383D39CE3E, blip, toggle); } // 0xB14552383D39CE3E 0xC0047F15 b323
	static void SET_BLIP_FLASHES_ALTERNATE(Blip blip, BOOL toggle) { return invoke<void>(0x2E8D9498C56DD0D1, blip, toggle); } // 0x2E8D9498C56DD0D1 0x1A81202B b323
	static BOOL IS_BLIP_FLASHING(Blip blip) { return invoke<BOOL>(0xA5E41FD83AD6CEF0, blip); } // 0xA5E41FD83AD6CEF0 0x52E111D7 b323
	static void SET_BLIP_AS_SHORT_RANGE(Blip blip, BOOL toggle) { return invoke<void>(0xBE8BE4FE60E27B72, blip, toggle); } // 0xBE8BE4FE60E27B72 0x5C67725E b323
	static void SET_BLIP_SCALE(Blip blip, float scale) { return invoke<void>(0xD38744167B2FA257, blip, scale); } // 0xD38744167B2FA257 0x1E6EC434 b323
	 // See this topic for more details : gtaforums.com/topic/717612-v-scriptnative-documentation-and-research/page-35?p=1069477935
	static void SET_BLIP_PRIORITY(Blip blip, int priority) { return invoke<void>(0xAE9FC9EF6A9FAC79, blip, priority); } // 0xAE9FC9EF6A9FAC79 0xCE87DA6F b323
	 // displayId = 8 : shows on radar
	 // 
	 // displayId:
	 // 3 = Shows on Main map but not Radar (not selectable on map)
	 // 
	 // displayId = 2 (Shows on Main map + Radar + selectable)
	static void SET_BLIP_DISPLAY(Blip blip, int displayId) { return invoke<void>(0x9029B2F3DA924928, blip, displayId); } // 0x9029B2F3DA924928 0x2B521F91 b323
	 // int index:
	 // 
	 // 1 = No Text on blip or Distance
	 // 2 = Text on blip
	 // 3 = No text, just distance
	 // 4+ No Text on blip or distance
	static void SET_BLIP_CATEGORY(Blip blip, int index) { return invoke<void>(0x234CDD44D996FD9A, blip, index); } // 0x234CDD44D996FD9A 0xEF72F533 b323
	 // In the C++ SDK, this seems not to work-- the blip isn't removed immediately. I use it for saving cars.
	 // 
	 // E.g.:
	 // 
	 // Ped pped = PLAYER::PLAYER_PED_ID();
	 // Vehicle v = PED::GET_VEHICLE_PED_IS_USING(pped);
	 // Blip b = UI::ADD_BLIP_FOR_ENTITY(v);
	 // 
	 // works fine.
	 // But later attempting to delete it with:
	 // 
	 // Blip b = UI::GET_BLIP_FROM_ENTITY(v);
	 // if (UI::DOES_BLIP_EXIST(b)) UI::REMOVE_BLIP(&b);
	 // 
	 // doesn't work. And yes, doesn't work without the DOES_BLIP_EXIST check either. Also, if you attach multiple blips to the same thing (say, a vehicle), and that thing disappears, the blips randomly attach to other things (in my case, a vehicle).
	 // 
	 // Thus for me, UI::REMOVE_BLIP(&b) only works if there's one blip, (in my case) the vehicle is marked as no longer needed, you drive away from it and it eventually despawns, AND there is only one blip attached to it. I never intentionally attach multiple blips but if the user saves the car, this adds a blip. Then if they delete it, it is supposed to remove the blip, but it doesn't. Then they can immediately save it again, causing another blip to re-appear.
	 // -------------
	 // 
	 // Passing the address of the variable instead of the value works for me.
	 // e.g.
	 // int blip = UI::ADD_BLIP_FOR_ENTITY(ped);
	 // UI::REMOVE_BLIP(&blip);
	 // 
	 // 
	 // Remove blip will currently crash your game, just artificially remove the blip by setting the sprite to a id that is 'invisible'.
	 // 
	 // --
	 // It crashes my game.
	static void REMOVE_BLIP(Blip* blip) { return invoke<void>(0x86A652570E5F25DD, blip); } // 0x86A652570E5F25DD 0xD8C3C1CD b323
	 // false for enemy
	 // true for friendly
	static void SET_BLIP_AS_FRIENDLY(Blip blip, BOOL toggle) { return invoke<void>(0x6F6F290102C02AB4, blip, toggle); } // 0x6F6F290102C02AB4 0xF290CFD8 b323
	static void SHOW_HEIGHT_ON_BLIP(Blip blip, BOOL toggle) { return invoke<void>(0x75A16C3DA34F1245, blip, toggle); } // 0x75A16C3DA34F1245 0x1D99F676 b323
	 // Adds a green checkmark on top of a blip.
	static void SHOW_TICK_ON_BLIP(Blip blip, BOOL toggle) { return invoke<void>(0x74513EA3E505181E, blip, toggle); } // 0x74513EA3E505181E 0x3DCF0092 b323
	static void _SET_BLIP_DISPLAY_INDICATOR_ON_BLIP(Blip blip, BOOL toggle) { return invoke<void>(0xC4278F70131BAA6D, blip, toggle); } // 0xC4278F70131BAA6D 0x6AA6A1CC b323
	static void SET_RADIUS_BLIP_EDGE(Any p0, BOOL p1) { return invoke<void>(0x25615540D894B814, p0, p1); } // 0x25615540D894B814 0x40E25DB8 b323
	static BOOL DOES_BLIP_EXIST(Blip blip) { return invoke<BOOL>(0xA6DB27D19ECBB7DA, blip); } // 0xA6DB27D19ECBB7DA 0xAE92DD96 b323
	static void _DELETE_WAYPOINT() { return invoke<void>(0xD8E694757BCEA8E9); } // 0xD8E694757BCEA8E9 0x62BABF2C b323
	static BOOL IS_WAYPOINT_ACTIVE() { return invoke<BOOL>(0x1DD1F58F493F1DA5); } // 0x1DD1F58F493F1DA5 0x5E4DF47B b323
	static void SET_BLIP_SHOW_CONE(Blip blip, BOOL toggle) { return invoke<void>(0x13127EC3665E8EE1, blip, toggle); } // 0x13127EC3665E8EE1 0xFF545AD8 b323
	 // Interesting fact: A hash collision for this is RESET_JETPACK_MODEL_SETTINGS
	static void _0xC594B315EDF2D4AF(Ped ped) { return invoke<void>(0xC594B315EDF2D4AF, ped); } // 0xC594B315EDF2D4AF 0x41B0D022 b323
	 // Please change to void.
	 // 
	 // p2 appears to be always -1.
	static Any SET_MINIMAP_COMPONENT(int p0, BOOL p1, int p2) { return invoke<Any>(0x75A9A10948D1DEA6, p0, p1, p2); } // 0x75A9A10948D1DEA6 0x419DCDC4 b323
	static void _SHOW_SIGNIN_UI() { return invoke<void>(0x60E892BA4F5BDCA4); } // 0x60E892BA4F5BDCA4 b323
	static Blip GET_MAIN_PLAYER_BLIP_ID() { return invoke<Blip>(0xDCD4EC3F419D02FA); } // 0xDCD4EC3F419D02FA 0xAB93F020 b323
	static void _0x41350B4FC28E3941(BOOL p0) { return invoke<void>(0x41350B4FC28E3941, p0); } // 0x41350B4FC28E3941 b323
	static void HIDE_LOADING_ON_FADE_THIS_FRAME() { return invoke<void>(0x4B0311D3CDC4648F); } // 0x4B0311D3CDC4648F 0x35087963 b323
	 // List of interior hashes: pastebin.com/1FUyXNqY
	 // Not for every interior zoom > 0 available.
	static void SET_RADAR_AS_INTERIOR_THIS_FRAME(Hash interior, float x, float y, int z, int zoom) { return invoke<void>(0x59E727A1C9D3E31A, interior, x, y, z, zoom); } // 0x59E727A1C9D3E31A 0x6F2626E1 b323
	static void SET_RADAR_AS_EXTERIOR_THIS_FRAME() { return invoke<void>(0xE81B7D2A3DAB2D81); } // 0xE81B7D2A3DAB2D81 0x39ABB10E b323
	 // Sets the position of the arrow icon representing the player on both the minimap and world map.
	 // 
	 // Too bad this wouldn't work over the network (obviously not). Could spoof where we would be.
	static void _SET_PLAYER_BLIP_POSITION_THIS_FRAME(float x, float y) { return invoke<void>(0x77E2DD177910E1CF, x, y); } // 0x77E2DD177910E1CF 0x54E75C7D b323
	static void _0xA17784FCA9548D15(Any p0, Any p1, Any p2) { return invoke<void>(0xA17784FCA9548D15, p0, p1, p2); } // 0xA17784FCA9548D15 b877
	static BOOL _IS_MINIMAP_IN_INTERIOR() { return invoke<BOOL>(0x9049FE339D5F6F6F); } // 0x9049FE339D5F6F6F 0x199DED14 b323
	static void HIDE_MINIMAP_EXTERIOR_MAP_THIS_FRAME() { return invoke<void>(0x5FBAE526203990C9); } // 0x5FBAE526203990C9 0x1A4318F7 b323
	static void HIDE_MINIMAP_INTERIOR_MAP_THIS_FRAME() { return invoke<void>(0x20FE7FDFEEAD38C0); } // 0x20FE7FDFEEAD38C0 0xCE36E3FE b323
	 // When calling this, the current frame will have the players "arrow icon" be focused on the dead center of the radar.
	static void DONT_TILT_MINIMAP_THIS_FRAME() { return invoke<void>(0x6D14BFDC33B34F55); } // 0x6D14BFDC33B34F55 0x334EFD46 b323
	static void SET_WIDESCREEN_FORMAT(Any p0) { return invoke<void>(0xC3B07BA00A83B0F1, p0); } // 0xC3B07BA00A83B0F1 0xF016E08F b323
	static void DISPLAY_AREA_NAME(BOOL toggle) { return invoke<void>(0x276B6CE369C33678, toggle); } // 0x276B6CE369C33678 0x489FDD41 b323
	 // "DISPLAY_CASH(false);" makes the cash amount render on the screen when appropriate
	 // "DISPLAY_CASH(true);" disables cash amount rendering
	static void DISPLAY_CASH(BOOL toggle) { return invoke<void>(0x96DEC8D5430208B7, toggle); } // 0x96DEC8D5430208B7 0x0049DF83 b323
	 // Related to displaying cash on the HUD
	 // Always called before UI::_SET_SINGLEPLAYER_HUD_CASH in decompiled scripts
	static void _0x170F541E1CADD1DE(BOOL p0) { return invoke<void>(0x170F541E1CADD1DE, p0); } // 0x170F541E1CADD1DE b323
	 // Displays cash change notifications on HUD.
	static void _SET_PLAYER_CASH_CHANGE(int cash, int bank) { return invoke<void>(0x0772DF77852C2E30, cash, bank); } // 0x0772DF77852C2E30 b323
	static void DISPLAY_AMMO_THIS_FRAME(BOOL display) { return invoke<void>(0xA5E78BA2B1331C55, display); } // 0xA5E78BA2B1331C55 0x60693CEE b323
	 // I think this works, but seems to prohibit switching to other weapons (or accessing the weapon wheel)
	static void HIDE_HUD_AND_RADAR_THIS_FRAME() { return invoke<void>(0x719FF505F097FD20); } // 0x719FF505F097FD20 0xB75D4AD2 b323
	static void SET_MULTIPLAYER_WALLET_CASH() { return invoke<void>(0xC2D15BEF167E27BC); } // 0xC2D15BEF167E27BC 0xF4F3C796 b323
	static void REMOVE_MULTIPLAYER_WALLET_CASH() { return invoke<void>(0x95CF81BD06EE1887); } // 0x95CF81BD06EE1887 0x7BFFE82F b323
	static void SET_MULTIPLAYER_BANK_CASH() { return invoke<void>(0xDD21B55DF695CD0A); } // 0xDD21B55DF695CD0A 0x2C842D03 b323
	static void REMOVE_MULTIPLAYER_BANK_CASH() { return invoke<void>(0xC7C6789AA1CFEDD0); } // 0xC7C6789AA1CFEDD0 0x728B4EF4 b323
	static void HIDE_HELP_TEXT_THIS_FRAME() { return invoke<void>(0xD46923FC481CA285); } // 0xD46923FC481CA285 0xF3807BED b323
	 // The messages are localized strings.
	 // Examples:
	 // "No_bus_money"
	 // "Enter_bus"
	 // "Tour_help"
	 // "LETTERS_HELP2"
	 // "Dummy"
	 // 
	 // **The bool appears to always be false (if it even is a bool, as it's represented by a zero)**
	 // --------
	 // p1 doesn't seem to make a difference, regardless of the state it's in. 
	 // 
	 // 
	 // picture of where on the screen this is displayed? 
	static void DISPLAY_HELP_TEXT_THIS_FRAME(const char* message, BOOL p1) { return invoke<void>(0x960C9FF8F616E41C, message, p1); } // 0x960C9FF8F616E41C 0x18E3360A b323
	 // Forces the weapon wheel to show/hide.
	static void HUD_FORCE_WEAPON_WHEEL(BOOL show) { return invoke<void>(0xEB354E5376BC81A7, show); } // 0xEB354E5376BC81A7 0x1EFFB02A b323
	 // calling this each frame, it stops the player from receiving a weapon via the weapon wheel.
	static void _HUD_WEAPON_WHEEL_IGNORE_SELECTION() { return invoke<void>(0x0AFC4AF510774B47); } // 0x0AFC4AF510774B47 0xB26FED2B b323
	static Hash _HUD_WEAPON_WHEEL_GET_SELECTED_HASH() { return invoke<Hash>(0xA48931185F0536FE); } // 0xA48931185F0536FE 0x22E9F555 b323
	static void _HUD_WEAPON_WHEEL_SET_SLOT_HASH(Hash weaponHash) { return invoke<void>(0x72C1056D678BB7D8, weaponHash); } // 0x72C1056D678BB7D8 0x83B608A0 b323
	static Any _HUD_WEAPON_WHEEL_GET_SLOT_HASH(Any p0) { return invoke<Any>(0xA13E93403F26C812, p0); } // 0xA13E93403F26C812 b323
	 // Only the script that originally called SET_GPS_FLAGS can set them again. Another script cannot set the flags, until the first script that called it has called CLEAR_GPS_FLAGS.
	 // 
	 // Doesn't seem like the flags are actually read by the game at all.
	static void SET_GPS_FLAGS(int p0, float p1) { return invoke<void>(0x5B440763A4C8D15B, p0, p1); } // 0x5B440763A4C8D15B 0x60539BAB b323
	 // Clears the GPS flags. Only the script that originally called SET_GPS_FLAGS can clear them.
	 // 
	 // Doesn't seem like the flags are actually read by the game at all.
	static void CLEAR_GPS_FLAGS() { return invoke<void>(0x21986729D6A3A830); } // 0x21986729D6A3A830 0x056AFCE6 b323
	static void CLEAR_GPS_CUSTOM_ROUTE() { return invoke<void>(0xE6DE0561D9232A64); } // 0xE6DE0561D9232A64 0xCF2E3E24 b323
	static void START_GPS_MULTI_ROUTE(int hudColor, BOOL p1, BOOL p2) { return invoke<void>(0x3D3D15AF7BCAAF83, hudColor, p1, p2); } // 0x3D3D15AF7BCAAF83 0xC3DCBEDB b323
	static void ADD_POINT_TO_GPS_MULTI_ROUTE(float x, float y, float z) { return invoke<void>(0xA905192A6781C41B, x, y, z); } // 0xA905192A6781C41B 0xFE485135 b323
	static void SET_GPS_MULTI_ROUTE_RENDER(BOOL toggle) { return invoke<void>(0x3DDA37128DD1ACA8, toggle); } // 0x3DDA37128DD1ACA8 0xE87CBE4C b323
	 // Does the same as SET_GPS_MULTI_ROUTE_RENDER(false);
	static void CLEAR_GPS_MULTI_ROUTE() { return invoke<void>(0x67EEDEA1B9BAFD94); } // 0x67EEDEA1B9BAFD94 0x0D9969E4 b323
	 // adds a short flash to the Radar/Minimap
	 // Usage: UI.FLASH_MINIMAP_DISPLAY
	static void FLASH_MINIMAP_DISPLAY() { return invoke<void>(0xF2DD778C22B15BDA); } // 0xF2DD778C22B15BDA 0xB8359952 b323
	static void TOGGLE_STEALTH_RADAR(BOOL toggle) { return invoke<void>(0x6AFDFB93754950C7, toggle); } // 0x6AFDFB93754950C7 0xC68D47C4 b323
	static void SET_MINIMAP_IN_SPECTATOR_MODE(BOOL toggle, Ped ped) { return invoke<void>(0x1A5CD7752DD28CD3, toggle, ped); } // 0x1A5CD7752DD28CD3 0xD5BFCADB b323
	static void SET_MISSION_NAME(BOOL p0, const char* name) { return invoke<void>(0x5F28ECF5FC84772F, p0, name); } // 0x5F28ECF5FC84772F 0x68DCAE10 b323
	static void _SET_MISSION_NAME_2(BOOL p0, const char* name) { return invoke<void>(0xE45087D85F468BC2, p0, name); } // 0xE45087D85F468BC2 0x8D9A1734 b323
	 // Toggles the North Yankton map
	static void SET_MINIMAP_IN_PROLOGUE(BOOL toggle) { return invoke<void>(0x9133955F1A2DA957, toggle); } // 0x9133955F1A2DA957 0x02F5F1D1 b323
	static float GET_MINIMAP_FOW_DISCOVERY_RATIO() { return invoke<float>(0xE0130B41D3CF4574); } // 0xE0130B41D3CF4574 0xA4098ACC b323
	static BOOL GET_MINIMAP_FOW_COORDINATE_IS_REVEALED(float x, float y, float z) { return invoke<BOOL>(0x6E31B91145873922, x, y, z); } // 0x6E31B91145873922 0x65B705F6 b323
	 // Locks the minimap to the specified angle in integer degrees.
	 // 
	 // angle: The angle in whole degrees. If less than 0 or greater than 360, unlocks the angle.
	static void LOCK_MINIMAP_ANGLE(int angle) { return invoke<void>(0x299FAEBB108AE05B, angle); } // 0x299FAEBB108AE05B 0xDEC733E4 b323
	static void UNLOCK_MINIMAP_ANGLE() { return invoke<void>(0x8183455E16C42E3A); } // 0x8183455E16C42E3A 0x742043F9 b323
	 // Locks the minimap to the specified world position.
	static void LOCK_MINIMAP_POSITION(float x, float y) { return invoke<void>(0x1279E861A329E73F, x, y); } // 0x1279E861A329E73F 0xB9632A91 b323
	static void UNLOCK_MINIMAP_POSITION() { return invoke<void>(0x3E93E06DB8EF1F30); } // 0x3E93E06DB8EF1F30 0x5E8E6F54 b323
	 // Argument must be 0.0f or above 38.0f, or it will be ignored.
	static void _SET_MINIMAP_ALTITUDE_INDICATOR_LEVEL(float altitude, BOOL p1, Any p2) { return invoke<void>(0xD201F3FF917A506D, altitude, p1, p2); } // 0xD201F3FF917A506D 0x0308EDF6 b323
	 // Toggles the big minimap state like in GTA:Online.
	static void SET_BIGMAP_ACTIVE(BOOL toggleBigMap, BOOL showFullMap) { return invoke<void>(0x231C8F89D0539D8F, toggleBigMap, showFullMap); } // 0x231C8F89D0539D8F 0x08EB83D2 b323
	 // Full list of components below
	 // 
	 // HUD = 0;
	 // HUD_WANTED_STARS = 1;
	 // HUD_WEAPON_ICON = 2;
	 // HUD_CASH = 3;
	 // HUD_MP_CASH = 4;
	 // HUD_MP_MESSAGE = 5;
	 // HUD_VEHICLE_NAME = 6;
	 // HUD_AREA_NAME = 7;
	 // HUD_VEHICLE_CLASS = 8;
	 // HUD_STREET_NAME = 9;
	 // HUD_HELP_TEXT = 10;
	 // HUD_FLOATING_HELP_TEXT_1 = 11;
	 // HUD_FLOATING_HELP_TEXT_2 = 12;
	 // HUD_CASH_CHANGE = 13;
	 // HUD_RETICLE = 14;
	 // HUD_SUBTITLE_TEXT = 15;
	 // HUD_RADIO_STATIONS = 16;
	 // HUD_SAVING_GAME = 17;
	 // HUD_GAME_STREAM = 18;
	 // HUD_WEAPON_WHEEL = 19;
	 // HUD_WEAPON_WHEEL_STATS = 20;
	 // MAX_HUD_COMPONENTS = 21;
	 // MAX_HUD_WEAPONS = 22;
	 // MAX_SCRIPTED_HUD_COMPONENTS = 141;
	static BOOL IS_HUD_COMPONENT_ACTIVE(int id) { return invoke<BOOL>(0xBC4C9EA5391ECC0D, id); } // 0xBC4C9EA5391ECC0D 0x6214631F b323
	static void HIDE_SCRIPTED_HUD_COMPONENT_THIS_FRAME(int id) { return invoke<void>(0xE374C498D8BADC14, id); } // 0xE374C498D8BADC14 0x31ABA127 b323
	static void HIDE_HUD_COMPONENT_THIS_FRAME(int id) { return invoke<void>(0x6806C51AD12B83B8, id); } // 0x6806C51AD12B83B8 0xDB2D0762 b323
	static void SHOW_HUD_COMPONENT_THIS_FRAME(int id) { return invoke<void>(0x0B4DF1FA60C0E664, id); } // 0x0B4DF1FA60C0E664 0x95E1546E b323
	 // HIDE_*_THIS_FRAME
	 // 
	 // Hides area and vehicle name HUD components for one frame.
	static void _HIDE_AREA_AND_VEHICLE_NAME_THIS_FRAME() { return invoke<void>(0xA4DEDE28B1814289); } // 0xA4DEDE28B1814289 0x52746FE1 b323
	static void RESET_HUD_COMPONENT_VALUES(int id) { return invoke<void>(0x450930E616475D0D, id); } // 0x450930E616475D0D 0xD15B46DA b323
	static void SET_HUD_COMPONENT_POSITION(int id, float x, float y) { return invoke<void>(0xAABB1F56E2A17CED, id, x, y); } // 0xAABB1F56E2A17CED 0x2F3A0D15 b323
	static Vector3 GET_HUD_COMPONENT_POSITION(int id) { return invoke<Vector3>(0x223CA69A8C4417FD, id); } // 0x223CA69A8C4417FD 0x080DCED6 b323
	 // This native does absolutely nothing, just a nullsub
	static void CLEAR_REMINDER_MESSAGE() { return invoke<void>(0xB57D8DD645CFA2CF); } // 0xB57D8DD645CFA2CF 0x5BBCC934 b323
	static BOOL GET_HUD_SCREEN_POSITION_FROM_WORLD_POSITION(float worldX, float worldY, float worldZ, float* screenX, float* screenY) { return invoke<BOOL>(0xF9904D11F1ACBEC3, worldX, worldY, worldZ, screenX, screenY); } // 0xF9904D11F1ACBEC3 0xFE9A39F8 b323
	 // Shows a menu for reporting UGC content.
	static void OPEN_REPORTUGC_MENU() { return invoke<void>(0x523A590C1A3CC0D3); } // 0x523A590C1A3CC0D3 0x10DE5150 b323
	static void FORCE_CLOSE_REPORTUGC_MENU() { return invoke<void>(0xEE4C0E6DBC6F2C6F); } // 0xEE4C0E6DBC6F2C6F 0x67649EE0 b323
	static BOOL IS_REPORTUGC_MENU_OPEN() { return invoke<BOOL>(0x9135584D09A3437E); } // 0x9135584D09A3437E 0x9D2C94FA b323
	static BOOL IS_FLOATING_HELP_TEXT_ON_SCREEN(int p0) { return invoke<BOOL>(0x2432784ACA090DA4, p0); } // 0x2432784ACA090DA4 0x45472FD5 b323
	static void SET_FLOATING_HELP_TEXT_SCREEN_POSITION(int p0, float x, float y) { return invoke<void>(0x7679CC1BCEBE3D4C, p0, x, y); } // 0x7679CC1BCEBE3D4C 0x198F32D7 b323
	static void SET_FLOATING_HELP_TEXT_WORLD_POSITION(int p0, float x, float y, float z) { return invoke<void>(0x784BA7E0ECEB4178, p0, x, y, z); } // 0x784BA7E0ECEB4178 0x93045157 b323
	static void SET_FLOATING_HELP_TEXT_TO_ENTITY(int p0, Entity entity, float p2, float p3) { return invoke<void>(0xB094BC1DB4018240, p0, entity, p2, p3); } // 0xB094BC1DB4018240 0x18B012B7 b323
	static void CLEAR_FLOATING_HELP(int p0, BOOL p1) { return invoke<void>(0x50085246ABD3FEFA, p0, p1); } // 0x50085246ABD3FEFA 0xB181F88F b323
	 // RESET_*
	static void _0xB99C4E4D9499DF29(int p0) { return invoke<void>(0xB99C4E4D9499DF29, p0); } // 0xB99C4E4D9499DF29 b323
	 // You can only use text entries. No custom text.
	 // 
	 // Example: SET_WARNING_MESSAGE("t20", 3, "adder", false, -1, 0, 0, true);
	static void SET_WARNING_MESSAGE(const char* titleMsg, int flags, const char* promptMsg, BOOL p3, int p4, const char* p5, const char* p6, BOOL showBg, Any p8) { return invoke<void>(0x7B1776B3B53F8D74, titleMsg, flags, promptMsg, p3, p4, p5, p6, showBg, p8); } // 0x7B1776B3B53F8D74 0xBE699BDE b323
	 // You can only use text entries. No custom text.
	 // 
	 // [24/03/2017] by ins1de :
	 // 
	 // C# Example :
	 // Function.Call(Hash._SET_WARNING_MESSAGE_2, "HUD_QUIT", "HUD_CGIGNORE", 2, "HUD_CGINVITE", 0, -1, 0, 0, 1);
	 // 
	 // @unknown, you can recreate this easily with scaleforms
	static void SET_WARNING_MESSAGE_WITH_HEADER(const char* titleMsg, const char* p1, int flags, const char* promptMsg, BOOL p4, Any p5, Any* p6, Any* p7, BOOL showBg, Any p9) { return invoke<void>(0xDC38CC1E35B6A5D7, titleMsg, p1, flags, promptMsg, p4, p5, p6, p7, showBg, p9); } // 0xDC38CC1E35B6A5D7 0x2DB9EAB5 b323
	 // You can only use text entries. No custom text.
	static void SET_WARNING_MESSAGE_WITH_HEADER_AND_SUBSTRING_FLAGS(const char* entryHeader, const char* entryLine1, Any instructionalKey, const char* entryLine2, BOOL p4, Any p5, Any p6, Any* p7, Any* p8, BOOL p9, Any p10) { return invoke<void>(0x701919482C74B5AB, entryHeader, entryLine1, instructionalKey, entryLine2, p4, p5, p6, p7, p8, p9, p10); } // 0x701919482C74B5AB 0x749929D3 b323
	static BOOL IS_WARNING_MESSAGE_ACTIVE() { return invoke<BOOL>(0xE18B138FABC53103); } // 0xE18B138FABC53103 0x94C834AD b323
	 // Doesn't actually return anything.
	static Any FORCE_SONAR_BLIPS_THIS_FRAME() { return invoke<Any>(0x1121BFA1A1A522A8); } // 0x1121BFA1A1A522A8 0x3F4AFB13 b323
	static void SET_PAUSE_MENU_ACTIVE(BOOL toggle) { return invoke<void>(0xDF47FC56C71569CF, toggle); } // 0xDF47FC56C71569CF 0x1DCD878E b323
	static void DISABLE_FRONTEND_THIS_FRAME() { return invoke<void>(0x6D3465A73092F0E6); } // 0x6D3465A73092F0E6 0xD86A029E b323
	static void SET_FRONTEND_ACTIVE(BOOL active) { return invoke<void>(0x745711A75AB09277, active); } // 0x745711A75AB09277 0x81E1AD32 b323
	static BOOL IS_PAUSE_MENU_ACTIVE() { return invoke<BOOL>(0xB0034A223497FFCB); } // 0xB0034A223497FFCB 0xD3600591 b323
	 // Returns something related to the store.
	 // 
	 // IS_S*
	 // 
	 // IS_STORE_EXIT_PURCHASE_CAPABILITY_ACTIVATED ?
	static BOOL _0x2F057596F2BD0061() { return invoke<BOOL>(0x2F057596F2BD0061); } // 0x2F057596F2BD0061 0xC85C4487 b323
	 // Returns:
	 // 
	 // 0
	 // 5
	 // 10
	 // 15
	 // 20
	 // 25
	 // 30
	 // 35
	 // 
	static int GET_PAUSE_MENU_STATE() { return invoke<int>(0x272ACD84970869C5); } // 0x272ACD84970869C5 0x92F50134 b323
	 // GET_PAUSE_MENU_*
	static Vector3 _0x5BFF36D6ED83E0AE() { return invoke<Vector3>(0x5BFF36D6ED83E0AE); } // 0x5BFF36D6ED83E0AE b323
	 // Not present in retail version of the game, actual definiton seems to be
	 // _LOG_DEBUG_INFO(const char* category, const char* debugText);
	static void _LOG_DEBUG_INFO(const char* p0) { return invoke<void>(0x2162C446DFDF38FD, p0); } // 0x2162C446DFDF38FD 0x2DFD35C7 b323
	static void PAUSE_MENU_ACTIVATE_CONTEXT(Hash contextHash) { return invoke<void>(0xDD564BDD0472C936, contextHash); } // 0xDD564BDD0472C936 0x9FE8FD5E b323
	static void PAUSE_MENU_DEACTIVATE_CONTEXT(Hash contextHash) { return invoke<void>(0x444D8CF241EC25C5, contextHash); } // 0x444D8CF241EC25C5 0x0029046E b323
	static BOOL PAUSE_MENU_IS_CONTEXT_ACTIVE(Hash contextHash) { return invoke<BOOL>(0x84698AB38D0C6636, contextHash); } // 0x84698AB38D0C6636 0xC51BC42F b323
	static Any _0x13C4B962653A5280() { return invoke<Any>(0x13C4B962653A5280); } // 0x13C4B962653A5280 b323
	static BOOL _0xC8E1071177A23BE5(Any* p0, Any* p1, Any* p2) { return invoke<BOOL>(0xC8E1071177A23BE5, p0, p1, p2); } // 0xC8E1071177A23BE5 b323
	static void _0x4895BDEA16E7C080(int p0) { return invoke<void>(0x4895BDEA16E7C080, p0); } // 0x4895BDEA16E7C080 0x15B24768 b323
	static void _0xC78E239AC5B2DDB9(BOOL p0, Any p1, Any p2) { return invoke<void>(0xC78E239AC5B2DDB9, p0, p1, p2); } // 0xC78E239AC5B2DDB9 0x6C67131A b323
	static void _0xF06EBB91A81E09E3(BOOL p0) { return invoke<void>(0xF06EBB91A81E09E3, p0); } // 0xF06EBB91A81E09E3 0x11D09737 b323
	static BOOL IS_FRONTEND_READY_FOR_CONTROL() { return invoke<BOOL>(0x3BAB9A4E4F2FF5C7); } // 0x3BAB9A4E4F2FF5C7 0xD3BF3ABD b323
	static void _0xEC9264727EEC0F28() { return invoke<void>(0xEC9264727EEC0F28); } // 0xEC9264727EEC0F28 0xC06B763D b323
	static void _0x14621BB1DF14E2B2() { return invoke<void>(0x14621BB1DF14E2B2); } // 0x14621BB1DF14E2B2 0xB9392CE7 b323
	static Any _0x66E7CB63C97B7D20() { return invoke<Any>(0x66E7CB63C97B7D20); } // 0x66E7CB63C97B7D20 0x92DAFA78 b323
	static Any _0x593FEAE1F73392D4() { return invoke<Any>(0x593FEAE1F73392D4); } // 0x593FEAE1F73392D4 0x22CA9F2A b323
	static Any _0x4E3CD0EF8A489541() { return invoke<Any>(0x4E3CD0EF8A489541); } // 0x4E3CD0EF8A489541 0xDA7951A2 b323
	static Any _0xF284AC67940C6812() { return invoke<Any>(0xF284AC67940C6812); } // 0xF284AC67940C6812 0x7D95AFFF b323
	static Any _0x2E22FEFA0100275E() { return invoke<Any>(0x2E22FEFA0100275E); } // 0x2E22FEFA0100275E 0x96863460 b323
	static void _0x0CF54F20DE43879C(Any p0) { return invoke<void>(0x0CF54F20DE43879C, p0); } // 0x0CF54F20DE43879C b323
	static void _0x36C1451A88A09630(Any* p0, Any* p1) { return invoke<void>(0x36C1451A88A09630, p0, p1); } // 0x36C1451A88A09630 0x8543AAC8 b323
	static void _0x7E17BE53E1AAABAF(Any* p0, Any* p1, Any* p2) { return invoke<void>(0x7E17BE53E1AAABAF, p0, p1, p2); } // 0x7E17BE53E1AAABAF 0x6025AA2F b323
	static void OPEN_SOCIAL_CLUB_MENU() { return invoke<void>(0x75D3691713C3B05A); } // 0x75D3691713C3B05A 0x57218529 b323
	 // HUD::SET_SOCIAL_CLUB_TOUR("Gallery");
	 // HUD::SET_SOCIAL_CLUB_TOUR("Missions");
	 // HUD::SET_SOCIAL_CLUB_TOUR("General");
	 // HUD::SET_SOCIAL_CLUB_TOUR("Playlists");
	static void SET_SOCIAL_CLUB_TOUR(const char* name) { return invoke<void>(0x9E778248D6685FE0, name); } // 0x9E778248D6685FE0 0x7AD67C95 b323
	static void _OVERRIDE_MULTIPLAYER_CHAT_PREFIX(Any p0) { return invoke<void>(0x6A1738B4323FE2D9, p0); } // 0x6A1738B4323FE2D9 b573
	 // Returns whether or not the text chat (MULTIPLAYER_CHAT Scaleform component) is active.
	 // 
	 // -- NTAuthority (http://fivem.net)
	static BOOL _IS_MULTIPLAYER_CHAT_ACTIVE() { return invoke<BOOL>(0xB118AF58B5F332A1); } // 0xB118AF58B5F332A1 b323
	static void _0x7C226D5346D4D10A(Any p0) { return invoke<void>(0x7C226D5346D4D10A, p0); } // 0x7C226D5346D4D10A b372
	 // Sets an unknown boolean value in the text chat.
	static void _SET_TEXT_CHAT_UNK(BOOL p0) { return invoke<void>(0x1DB21A44B09E8BA3, p0); } // 0x1DB21A44B09E8BA3 b323
	 // This native turns on the AI blip on the specified ped. It also disappears automatically when the ped is too far or if the ped is dead. You don't need to control it with other natives.
	 // 
	 // See gtaforums.com/topic/884370-native-research-ai-blips for further information.
	static void SET_PED_HAS_AI_BLIP(Ped ped, BOOL hasCone) { return invoke<void>(0xD30C50DF888D58B5, ped, hasCone); } // 0xD30C50DF888D58B5 0x96C4C4DD b323
	 // color: see SET_BLIP_COLOUR
	static void _SET_PED_HAS_AI_BLIP_WITH_COLOR(Ped ped, BOOL hasCone, int color) { return invoke<void>(0xB13DCB4C6FAAD238, ped, hasCone, color); } // 0xB13DCB4C6FAAD238 b505
	static BOOL DOES_PED_HAVE_AI_BLIP(Ped ped) { return invoke<BOOL>(0x15B8ECF844EE67ED, ped); } // 0x15B8ECF844EE67ED 0x3BE1257F b323
	static void SET_PED_AI_BLIP_GANG_ID(Ped ped, int gangId) { return invoke<void>(0xE52B8E7F85D39A08, ped, gangId); } // 0xE52B8E7F85D39A08 0xD8E31B1A b323
	static void SET_PED_AI_BLIP_HAS_CONE(Ped ped, BOOL toggle) { return invoke<void>(0x3EED80DFF7325CAA, ped, toggle); } // 0x3EED80DFF7325CAA 0x872C2CFB b323
	static void SET_PED_AI_BLIP_FORCED_ON(Ped ped, BOOL toggle) { return invoke<void>(0x0C4BBF625CA98C4E, ped, toggle); } // 0x0C4BBF625CA98C4E 0xFFDF46F0 b323
	static void SET_PED_AI_BLIP_NOTICE_RANGE(Ped ped, float range) { return invoke<void>(0x97C65887D4B37FA9, ped, range); } // 0x97C65887D4B37FA9 0xF9DC2AF7 b323
	static void _SET_PED_AI_BLIP_SPRITE(Ped ped, int spriteId) { return invoke<void>(0xFCFACD0DB9D7A57D, ped, spriteId); } // 0xFCFACD0DB9D7A57D b877
	static Blip _GET_AI_BLIP_2(Ped ped) { return invoke<Blip>(0x7CD934010E115C2C, ped); } // 0x7CD934010E115C2C 0x06349065 b323
	 // Returns the current AI BLIP for the specified ped
	static Blip _GET_AI_BLIP(Ped ped) { return invoke<Blip>(0x56176892826A4FE8, ped); } // 0x56176892826A4FE8 0xCA52CF43 b323
	 // If toggle is true, hides special ability bar / character name in the pause menu
	 // If toggle is false, shows special ability bar / character name in the pause menu
	 // 
	 // SET_PLAYER_*
	static void _SET_PLAYER_IS_IN_DIRECTOR_MODE(BOOL toggle) { return invoke<void>(0x808519373FD336A3, toggle); } // 0x808519373FD336A3 b323
}

namespace INTERIOR
{
	 // Returns the group ID of the specified interior. For example, regular interiors have group 0, subway interiors have group 1. There are a few other groups too.
	static int GET_INTERIOR_GROUP_ID(Interior interior) { return invoke<int>(0xE4A84ABF135EF91A, interior); } // 0xE4A84ABF135EF91A 0x09D6376F b323
	static Vector3 GET_OFFSET_FROM_INTERIOR_IN_WORLD_COORDS(Interior interior, float x, float y, float z) { return invoke<Vector3>(0x9E3B3E6D66F6E22F, interior, x, y, z); } // 0x9E3B3E6D66F6E22F 0x7D8F26A1 b323
	static BOOL IS_INTERIOR_SCENE() { return invoke<BOOL>(0xBC72B5D7A1CBD54D); } // 0xBC72B5D7A1CBD54D 0x55226C13 b323
	static BOOL IS_VALID_INTERIOR(Interior interior) { return invoke<BOOL>(0x26B0E73D7EAAF4D3, interior); } // 0x26B0E73D7EAAF4D3 0x39C0B635 b323
	 // Does anyone know what this does? I know online modding isn't generally supported especially by the owner of this db, but I first thought this could be used to force ourselves into someones apartment, but I see now that isn't possible.
	static void FORCE_ROOM_FOR_ENTITY(Entity entity, Interior interior, Hash roomHashKey) { return invoke<void>(0x52923C4710DD9907, entity, interior, roomHashKey); } // 0x52923C4710DD9907 0x10BD4435 b323
	 // Gets the room hash key from the room that the specified entity is in. Each room in every interior has a unique key. Returns 0 if the entity is outside.
	static Hash GET_ROOM_KEY_FROM_ENTITY(Entity entity) { return invoke<Hash>(0x47C2A06D4F5F424B, entity); } // 0x47C2A06D4F5F424B 0xE4ACF8C3 b323
	 // Seems to do the exact same as INTERIOR::GET_ROOM_KEY_FROM_ENTITY
	static Hash GET_KEY_FOR_ENTITY_IN_ROOM(Entity entity) { return invoke<Hash>(0x399685DB942336BC, entity); } // 0x399685DB942336BC 0x91EA80EF b323
	 // Returns the handle of the interior that the entity is in. Returns 0 if outside.
	static Interior GET_INTERIOR_FROM_ENTITY(Entity entity) { return invoke<Interior>(0x2107BA504071A6BB, entity); } // 0x2107BA504071A6BB 0x5C644614 b323
	static void _0x82EBB79E258FA2B7(Entity entity, Interior interior) { return invoke<void>(0x82EBB79E258FA2B7, entity, interior); } // 0x82EBB79E258FA2B7 0xE645E162 b323
	static void FORCE_ROOM_FOR_GAME_VIEWPORT(int interiorID, Hash roomHashKey) { return invoke<void>(0x920D853F3E17F1DA, interiorID, roomHashKey); } // 0x920D853F3E17F1DA 0xD79803B5 b323
	 // Exemple of use(carmod_shop.c4)
	 //  INTERIOR::_AF348AFCB575A441("V_CarModRoom");
	static void _0xAF348AFCB575A441(const char* roomName) { return invoke<void>(0xAF348AFCB575A441, roomName); } // 0xAF348AFCB575A441 0x1F6B4B13 b323
	 // Usage: INTERIOR::_0x405DC2AEF6AF95B9(INTERIOR::GET_KEY_FOR_ENTITY_IN_ROOM(PLAYER::PLAYER_PED_ID()));
	static void _0x405DC2AEF6AF95B9(Hash roomHashKey) { return invoke<void>(0x405DC2AEF6AF95B9, roomHashKey); } // 0x405DC2AEF6AF95B9 0x0E9529CC b323
	static void CLEAR_ROOM_FOR_GAME_VIEWPORT() { return invoke<void>(0x23B59D8912F94246); } // 0x23B59D8912F94246 0x617DC75D b323
	 // Returns interior ID from specified coordinates. If coordinates are outside, then it returns 0.
	 // 
	 // Example for VB.NET
	 // Dim interiorID As Integer = Native.Function.Call(Of Integer)(Hash.GET_INTERIOR_AT_COORDS, X, Y, Z)
	static Interior GET_INTERIOR_AT_COORDS(float x, float y, float z) { return invoke<Interior>(0xB0F7F8663821D9C3, x, y, z); } // 0xB0F7F8663821D9C3 0xA17FBF37 b323
	static void ADD_PICKUP_TO_INTERIOR_ROOM_BY_NAME(Pickup pickup, const char* roomName) { return invoke<void>(0x3F6167F351168730, pickup, roomName); } // 0x3F6167F351168730 0xA2A73564 b323
	static void PIN_INTERIOR_IN_MEMORY(Interior interior) { return invoke<void>(0x2CA429C029CCF247, interior); } // 0x2CA429C029CCF247 0x3ADA414E b323
	 // Does something similar to INTERIOR::DISABLE_INTERIOR.
	 // 
	 // You don't fall through the floor but everything is invisible inside and looks the same as when INTERIOR::DISABLE_INTERIOR is used. Peds behaves normally inside. 
	static void UNPIN_INTERIOR(Interior interior) { return invoke<void>(0x261CCE7EED010641, interior); } // 0x261CCE7EED010641 0xFCFF792A b323
	static BOOL IS_INTERIOR_READY(Interior interior) { return invoke<BOOL>(0x6726BDCCC1932F0E, interior); } // 0x6726BDCCC1932F0E 0xE1EF6450 b323
	 // Returns the interior ID representing the requested interior at that location (if found?). The supplied interior string is not the same as the one used to load the interior.
	 // 
	 // Use: INTERIOR::UNPIN_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(x, y, z, interior))
	 // 
	 // Interior types include: "V_Michael", "V_Franklins", "V_Franklinshouse", etc.. you can find them in the scripts.
	 // 
	 // Not a very useful native as you could just use GET_INTERIOR_AT_COORDS instead and get the same result, without even having to specify the interior type.
	static Interior GET_INTERIOR_AT_COORDS_WITH_TYPE(float x, float y, float z, const char* interiorType) { return invoke<Interior>(0x05B7A89BD78797FC, x, y, z, interiorType); } // 0x05B7A89BD78797FC 0x96525B06 b323
	static void _0x483ACA1176CA93F1() { return invoke<void>(0x483ACA1176CA93F1); } // 0x483ACA1176CA93F1 b1103
	 // Returns true if the collision at the specified coords is marked as being outside (false if there's an interior)
	static BOOL IS_COLLISION_MARKED_OUTSIDE(float x, float y, float z) { return invoke<BOOL>(0xEEA5AC2EDA7C33E8, x, y, z); } // 0xEEA5AC2EDA7C33E8 0x7762249C b323
	static int GET_INTERIOR_FROM_COLLISION(float x, float y, float z) { return invoke<int>(0xEC4CF9FCB29A4424, x, y, z); } // 0xEC4CF9FCB29A4424 0x7ED33DC1 b323
	 // More info: http://gtaforums.com/topic/836367-adding-props-to-interiors/
	static void ACTIVATE_INTERIOR_ENTITY_SET(Interior interior, const char* entitySetName) { return invoke<void>(0x55E86AF2712B36A1, interior, entitySetName); } // 0x55E86AF2712B36A1 0xC80A5DDF b323
	static void DEACTIVATE_INTERIOR_ENTITY_SET(Interior interior, const char* entitySetName) { return invoke<void>(0x420BD37289EEE162, interior, entitySetName); } // 0x420BD37289EEE162 0xDBA768A1 b323
	static BOOL IS_INTERIOR_ENTITY_SET_ACTIVE(Interior interior, const char* entitySetName) { return invoke<BOOL>(0x35F7DD45E8C0A16D, interior, entitySetName); } // 0x35F7DD45E8C0A16D 0x39A3CC6F b323
	static void REFRESH_INTERIOR(Interior interior) { return invoke<void>(0x41F37C3427C75AE0, interior); } // 0x41F37C3427C75AE0 0x9A29ACE6 b323
	 // This is the native that is used to hide the exterior of GTA Online apartment buildings when you are inside an apartment.
	 // 
	 // More info: http://gtaforums.com/topic/836301-hiding-gta-online-apartment-exteriors/
	static void ENABLE_EXTERIOR_CULL_MODEL_THIS_FRAME(Hash mapObjectHash) { return invoke<void>(0xA97F257D0151A6AB, mapObjectHash); } // 0xA97F257D0151A6AB 0x1F375B4C b323
	 // Example: 
	 // This removes the interior from the strip club and when trying to walk inside the player just falls:
	 // 
	 // INTERIOR::DISABLE_INTERIOR(118018, true);
	static void DISABLE_INTERIOR(Interior interior, BOOL toggle) { return invoke<void>(0x6170941419D7D8EC, interior, toggle); } // 0x6170941419D7D8EC 0x093ADEA5 b323
	static BOOL IS_INTERIOR_DISABLED(Interior interior) { return invoke<BOOL>(0xBC5115A5A939DD15, interior); } // 0xBC5115A5A939DD15 0x81F34C71 b323
	 // Does something similar to INTERIOR::DISABLE_INTERIOR
	static void CAP_INTERIOR(Interior interior, BOOL toggle) { return invoke<void>(0xD9175F941610DB54, interior, toggle); } // 0xD9175F941610DB54 0x34E735A6 b323
	static BOOL IS_INTERIOR_CAPPED(Interior interior) { return invoke<BOOL>(0x92BAC8ACF88CEC26, interior); } // 0x92BAC8ACF88CEC26 0x18B17C80 b323
	 // DISABLE_*
	static void _0x9E6542F0CE8E70A3(BOOL toggle) { return invoke<void>(0x9E6542F0CE8E70A3, toggle); } // 0x9E6542F0CE8E70A3 0x5EF9C5C2 b323
}

namespace ITEMSET
{
}

namespace LOADINGSCREEN
{
	 // MulleDK19: This function is hard-coded to always return 0.
	static int _0xF2CA003F167E21D2() { return invoke<int>(0xF2CA003F167E21D2); } // 0xF2CA003F167E21D2 0x106C8317 b323
	static BOOL _LOADINGSCREEN_GET_LOAD_FREEMODE() { return invoke<BOOL>(0xEF7D17BC6C85264C); } // 0xEF7D17BC6C85264C 0xD87F3A9E b323
}

namespace LOCALIZATION
{
	 // Same return values as GET_CURRENT_LANGUAGE
	static int _LOCALIZATION_GET_SYSTEM_LANGUAGE() { return invoke<int>(0x497420E022796B3F); } // 0x497420E022796B3F b877
	 // 0 = american (en-US)
	 // 1 = french (fr-FR)
	 // 2 = german (de-DE)
	 // 3 = italian (it-IT)
	 // 4 = spanish (es-ES)
	 // 5 = brazilian (pt-BR)
	 // 6 = polish (pl-PL)
	 // 7 = russian (ru-RU)
	 // 8 = korean (ko-KR)
	 // 9 = chinesetrad (zh-TW)
	 // 10 = japanese (ja-JP)
	 // 11 = mexican (es-MX)
	 // 12 = chinesesimp (zh-CN)
	static int GET_CURRENT_LANGUAGE() { return invoke<int>(0x2BDD44CC428A7EAE); } // 0x2BDD44CC428A7EAE 0x761BE00B b323
}

namespace MISC
{
	static void SET_RANDOM_SEED(int seed) { return invoke<void>(0x444D98F98C11F3EC, seed); } // 0x444D98F98C11F3EC 0xDB3FEB5C b323
	 // Maximum value is 1.
	 // At a value of 0 the game will still run at a minimum time scale.
	 // 
	 // Slow Motion 1: 0.6
	 // Slow Motion 2: 0.4
	 // Slow Motion 3: 0.2
	static void SET_TIME_SCALE(float timeScale) { return invoke<void>(0x1D408577D440E81E, timeScale); } // 0x1D408577D440E81E 0xA7F84694 b323
	 // If true, the player can't save the game. 
	 // 
	 // 
	 // If the parameter is true, sets the mission flag to true, if the parameter is false, the function does nothing at all.
	 // 
	 // ^ also, if the mission flag is already set, the function does nothing at all
	static void SET_MISSION_FLAG(BOOL toggle) { return invoke<void>(0xC4301E5121A0ED73, toggle); } // 0xC4301E5121A0ED73 0x57592D52 b323
	static BOOL GET_MISSION_FLAG() { return invoke<BOOL>(0xA33CDCCDA663159E); } // 0xA33CDCCDA663159E 0x95115F97 b323
	 // If the parameter is true, sets the random event flag to true, if the parameter is false, the function does nothing at all.
	 // Does nothing if the mission flag is set.
	static void SET_RANDOM_EVENT_FLAG(BOOL toggle) { return invoke<void>(0x971927086CFD2158, toggle); } // 0x971927086CFD2158 0xA77F31E8 b323
	static BOOL GET_RANDOM_EVENT_FLAG() { return invoke<BOOL>(0xD2D57F1D764117B1); } // 0xD2D57F1D764117B1 0x794CC92C b323
	 // Sets GtaThread+0x14A
	 // 
	 // SET_S*
	static void _0x65D2EBB47E1CEC21(BOOL toggle) { return invoke<void>(0x65D2EBB47E1CEC21, toggle); } // 0x65D2EBB47E1CEC21 b323
	 // Sets bit 3 in GtaThread+0x150
	 // 
	 // SET_T*
	static void _0x6F2135B6129620C1(BOOL toggle) { return invoke<void>(0x6F2135B6129620C1, toggle); } // 0x6F2135B6129620C1 0x8B2DE971 b323
	static BOOL _GET_BASE_ELEMENT_METADATA(Any* p0, Any* p1, Any p2, BOOL p3) { return invoke<BOOL>(0xB335F761606DB47C, p0, p1, p2, p3); } // 0xB335F761606DB47C 0xE23416C1 b323
	 // Returns current weather name hash
	static Hash GET_PREV_WEATHER_TYPE_HASH_NAME() { return invoke<Hash>(0x564B884A05EC45A3); } // 0x564B884A05EC45A3 0xA8171E9E b323
	 // Returns weather name hash
	static Hash GET_NEXT_WEATHER_TYPE_HASH_NAME() { return invoke<Hash>(0x711327CD09C8F162); } // 0x711327CD09C8F162 0x353E8056 b323
	static BOOL IS_PREV_WEATHER_TYPE(const char* weatherType) { return invoke<BOOL>(0x44F28F86433B10A9, weatherType); } // 0x44F28F86433B10A9 0x250ADA61 b323
	static BOOL IS_NEXT_WEATHER_TYPE(const char* weatherType) { return invoke<BOOL>(0x2FAA3A30BEC0F25D, weatherType); } // 0x2FAA3A30BEC0F25D 0x99CB167F b323
	 // The following weatherTypes are used in the scripts:
	 // "CLEAR"
	 // "EXTRASUNNY"
	 // "CLOUDS"
	 // "OVERCAST"
	 // "RAIN"
	 // "CLEARING"
	 // "THUNDER"
	 // "SMOG"
	 // "FOGGY"
	 // "XMAS"
	 // "SNOWLIGHT"
	 // "BLIZZARD"
	static void SET_WEATHER_TYPE_PERSIST(const char* weatherType) { return invoke<void>(0x704983DF373B198F, weatherType); } // 0x704983DF373B198F 0xC6C04C75 b323
	 // The following weatherTypes are used in the scripts:
	 // "CLEAR"
	 // "EXTRASUNNY"
	 // "CLOUDS"
	 // "OVERCAST"
	 // "RAIN"
	 // "CLEARING"
	 // "THUNDER"
	 // "SMOG"
	 // "FOGGY"
	 // "XMAS"
	 // "SNOWLIGHT"
	 // "BLIZZARD"
	static void SET_WEATHER_TYPE_NOW_PERSIST(const char* weatherType) { return invoke<void>(0xED712CA327900C8A, weatherType); } // 0xED712CA327900C8A 0xC869FE97 b323
	 // The following weatherTypes are used in the scripts:
	 // "CLEAR"
	 // "EXTRASUNNY"
	 // "CLOUDS"
	 // "OVERCAST"
	 // "RAIN"
	 // "CLEARING"
	 // "THUNDER"
	 // "SMOG"
	 // "FOGGY"
	 // "XMAS"
	 // "SNOWLIGHT"
	 // "BLIZZARD"
	static void SET_WEATHER_TYPE_NOW(const char* weatherType) { return invoke<void>(0x29B487C359E19889, weatherType); } // 0x29B487C359E19889 0x361E9EAC b323
	static void SET_WEATHER_TYPE_OVERTIME_PERSIST(const char* weatherType, float time) { return invoke<void>(0xFB5045B7C42B75BF, weatherType, time); } // 0xFB5045B7C42B75BF 0x386F0D25 b323
	static void CLEAR_WEATHER_TYPE_PERSIST() { return invoke<void>(0xCCC39339BEF76CF5); } // 0xCCC39339BEF76CF5 0x6AB757D8 b323
	static void _GET_WEATHER_TYPE_TRANSITION(Hash* weatherType1, Hash* weatherType2, float* percentWeather2) { return invoke<void>(0xF3BBE884A14BB413, weatherType1, weatherType2, percentWeather2); } // 0xF3BBE884A14BB413 0x9A5C1D56 b323
	 // Appears to have an optional bool parameter that is unused in the scripts.
	 // 
	 // If you pass true, something will be set to zero.
	static void SET_OVERRIDE_WEATHER(const char* weatherType) { return invoke<void>(0xA43D5C6FE51ADBEF, weatherType); } // 0xA43D5C6FE51ADBEF 0xD9082BB5 b323
	static void CLEAR_OVERRIDE_WEATHER() { return invoke<void>(0x338D2E3477711050); } // 0x338D2E3477711050 0x7740EA4E b323
	 // Sets the the raw wind speed value.
	static void SET_WIND(float speed) { return invoke<void>(0xAC3A74E8384A9919, speed); } // 0xAC3A74E8384A9919 0xC6294698 b323
	static float GET_RAIN_LEVEL() { return invoke<float>(0x96695E368AD855F3); } // 0x96695E368AD855F3 0xC9F67F28 b323
	static float GET_SNOW_LEVEL() { return invoke<float>(0xC5868A966E5BE3AE); } // 0xC5868A966E5BE3AE 0x1B09184F b323
	 // Found in the scripts:
	 // 
	 // GAMEPLAY::_11B56FBBF7224868("CONTRAILS");
	static void PRELOAD_CLOUD_HAT(const char* name) { return invoke<void>(0x11B56FBBF7224868, name); } // 0x11B56FBBF7224868 0x8727A4C5 b323
	static void LOAD_CLOUD_HAT(const char* name, float transitionTime) { return invoke<void>(0xFC4842A34657BFCB, name, transitionTime); } // 0xFC4842A34657BFCB 0xED88FC61 b323
	 // Called 4 times in the b617d scripts:
	 // GAMEPLAY::_A74802FB8D0B7814("CONTRAILS", 0);
	static void UNLOAD_CLOUD_HAT(const char* name, float p1) { return invoke<void>(0xA74802FB8D0B7814, name, p1); } // 0xA74802FB8D0B7814 0xC9FA6E07 b323
	static void _CLEAR_CLOUD_HAT() { return invoke<void>(0x957E790EA1727B64); } // 0x957E790EA1727B64 0x2D7787BC b323
	static int GET_GAME_TIMER() { return invoke<int>(0x9CD27B0045628463); } // 0x9CD27B0045628463 0xA4EA0691 b323
	static float GET_FRAME_TIME() { return invoke<float>(0x15C40837039FFAF7); } // 0x15C40837039FFAF7 0x96374262 b323
	static int GET_FRAME_COUNT() { return invoke<int>(0xFC8202EFC642E6F2); } // 0xFC8202EFC642E6F2 0xB477A015 b323
	static float GET_RANDOM_FLOAT_IN_RANGE(float startRange, float endRange) { return invoke<float>(0x313CE5879CEB6FCD, startRange, endRange); } // 0x313CE5879CEB6FCD 0x0562C4D0 b323
	static int GET_RANDOM_INT_IN_RANGE(int startRange, int endRange) { return invoke<int>(0xD53343AA4FB7DD28, startRange, endRange); } // 0xD53343AA4FB7DD28 0x4051115B b323
	static int _GET_RANDOM_INT_IN_RANGE_2(int startRange, int endRange) { return invoke<int>(0xF2D49816A804D134, startRange, endRange); } // 0xF2D49816A804D134 b1734
	 // Gets the ground elevation at the specified position. Note that if the specified position is below ground level, the function will output zero!
	 // 
	 // x: Position on the X-axis to get ground elevation at.
	 // y: Position on the Y-axis to get ground elevation at.
	 // z: Position on the Z-axis to get ground elevation at.
	 // groundZ: The ground elevation at the specified position.
	 // unk: Nearly always 0, very rarely 1 in the scripts.
	static BOOL GET_GROUND_Z_FOR_3D_COORD(float x, float y, float z, float* groundZ, BOOL unk, BOOL p5) { return invoke<BOOL>(0xC906A7DAB05C8D2B, x, y, z, groundZ, unk, p5); } // 0xC906A7DAB05C8D2B 0xA1BFD5E0 b323
	static BOOL GET_GROUND_Z_AND_NORMAL_FOR_3D_COORD(float x, float y, float z, float* groundZ, Vector3* normal) { return invoke<BOOL>(0x8BDC7BFC57A81E76, x, y, z, groundZ, normal); } // 0x8BDC7BFC57A81E76 0x64D91CED b323
	static Any _GET_GROUND_Z_FOR_3D_COORD_2(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return invoke<Any>(0x9E82F0F362881B29, p0, p1, p2, p3, p4, p5); } // 0x9E82F0F362881B29 b505
	static float ASIN(float p0) { return invoke<float>(0xC843060B5765DCE7, p0); } // 0xC843060B5765DCE7 0x998E5CAD b323
	static float ACOS(float p0) { return invoke<float>(0x1D08B970013C34B6, p0); } // 0x1D08B970013C34B6 0xF4038776 b323
	static float TAN(float p0) { return invoke<float>(0x632106CC96E82E91, p0); } // 0x632106CC96E82E91 0xD320CE5E b323
	static float ATAN(float p0) { return invoke<float>(0xA9D1795CD5043663, p0); } // 0xA9D1795CD5043663 0x7A03CC8E b323
	static float ATAN2(float p0, float p1) { return invoke<float>(0x8927CBF9D22261A4, p0, p1); } // 0x8927CBF9D22261A4 0x2508AC81 b323
	 // If useZ is false, only the 2D plane (X-Y) will be considered for calculating the distance.
	 // 
	 // Consider using this faster native instead: SYSTEM::VDIST - DVIST always takes in consideration the 3D coordinates.
	static float GET_DISTANCE_BETWEEN_COORDS(float x1, float y1, float z1, float x2, float y2, float z2, BOOL useZ) { return invoke<float>(0xF1B760881820C952, x1, y1, z1, x2, y2, z2, useZ); } // 0xF1B760881820C952 0xF698765E b323
	static float GET_ANGLE_BETWEEN_2D_VECTORS(float x1, float y1, float x2, float y2) { return invoke<float>(0x186FC4BE848E1C92, x1, y1, x2, y2); } // 0x186FC4BE848E1C92 0xDBF75E58 b323
	 // dx = x1 - x2
	 // dy = y1 - y2
	static float GET_HEADING_FROM_VECTOR_2D(float dx, float dy) { return invoke<float>(0x2FFB6B224F4B2926, dx, dy); } // 0x2FFB6B224F4B2926 0xD209D52B b323
	static float _0x7F8F6405F4777AF6(float p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7, float p8, BOOL p9) { return invoke<float>(0x7F8F6405F4777AF6, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); } // 0x7F8F6405F4777AF6 0x89459F0A b323
	 // GET_C*
	static Vector3 _0x21C235BC64831E5A(float p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7, float p8, BOOL p9) { return invoke<Vector3>(0x21C235BC64831E5A, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); } // 0x21C235BC64831E5A 0xCAECF37E b323
	static BOOL _0xF56DFB7B61BE7276(float p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7, float p8, float p9, float p10, float p11, float* p12) { return invoke<BOOL>(0xF56DFB7B61BE7276, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12); } // 0xF56DFB7B61BE7276 0xC6CC812C b323
	 // This sets bit [offset] of [address] to on.
	 // 
	 // The offsets used are different bits to be toggled on and off, typically there is only one address used in a script.
	 // 
	 // Example:
	 // GAMEPLAY::SET_BIT(&bitAddress, 1);
	 // 
	 // To check if this bit has been enabled:
	 // GAMEPLAY::IS_BIT_SET(bitAddress, 1); // will return 1 afterwards
	 // 
	 // Please note, this method may assign a value to [address] when used.
	static void SET_BIT(int* address, int offset) { return invoke<void>(0x933D6A9EEC1BACD0, address, offset); } // 0x933D6A9EEC1BACD0 0x4EFE7E6B b323
	 // This sets bit [offset] of [address] to off.
	 // 
	 // Example:
	 // GAMEPLAY::CLEAR_BIT(&bitAddress, 1);
	 // 
	 // To check if this bit has been enabled:
	 // GAMEPLAY::IS_BIT_SET(bitAddress, 1); // will return 0 afterwards
	static void CLEAR_BIT(int* address, int offset) { return invoke<void>(0xE80492A9AC099A93, address, offset); } // 0xE80492A9AC099A93 0x8BC9E618 b323
	 // This native converts its past string to hash. It is hashed using jenkins one at a time method.
	static Hash GET_HASH_KEY(const char* string) { return invoke<Hash>(0xD24D37CC275948CC, string); } // 0xD24D37CC275948CC 0x98EFF6F1 b323
	static void SLERP_NEAR_QUATERNION(float p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7, float p8, float* p9, float* p10, float* p11, float* p12) { return invoke<void>(0xF2F6A2FA49278625, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12); } // 0xF2F6A2FA49278625 0x87B92190 b323
	static BOOL IS_AREA_OCCUPIED(float p0, float p1, float p2, float p3, float p4, float p5, BOOL p6, BOOL p7, BOOL p8, BOOL p9, BOOL p10, Any p11, BOOL p12) { return invoke<BOOL>(0xA61B4DF533DCB56E, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12); } // 0xA61B4DF533DCB56E 0xC013972F b323
	static BOOL IS_POSITION_OCCUPIED(float x, float y, float z, float range, BOOL p4, BOOL p5, BOOL p6, BOOL p7, BOOL p8, Any p9, BOOL p10) { return invoke<BOOL>(0xADCDE75E1C60F32D, x, y, z, range, p4, p5, p6, p7, p8, p9, p10); } // 0xADCDE75E1C60F32D 0x452E8D9E b323
	static BOOL IS_POINT_OBSCURED_BY_A_MISSION_ENTITY(float p0, float p1, float p2, float p3, float p4, float p5, Any p6) { return invoke<BOOL>(0xE54E209C35FFA18D, p0, p1, p2, p3, p4, p5, p6); } // 0xE54E209C35FFA18D 0xC161558D b323
	 // Example: CLEAR_AREA(0, 0, 0, 30, true, false, false, false);
	static void CLEAR_AREA(float X, float Y, float Z, float radius, BOOL p4, BOOL ignoreCopCars, BOOL ignoreObjects, BOOL p7) { return invoke<void>(0xA56F01F3765B93A0, X, Y, Z, radius, p4, ignoreCopCars, ignoreObjects, p7); } // 0xA56F01F3765B93A0 0x854E9AB8 b323
	 // Example:
	 // CLEAR_AREA_OF_VEHICLES(0.0f, 0.0f, 0.0f, 10000.0f, false, false, false, false, false, false);
	static void CLEAR_AREA_OF_VEHICLES(float x, float y, float z, float radius, BOOL p4, BOOL p5, BOOL p6, BOOL p7, BOOL p8, BOOL p9) { return invoke<void>(0x01C7B9B38428AEB6, x, y, z, radius, p4, p5, p6, p7, p8, p9); } // 0x01C7B9B38428AEB6 0x63320F3C b323
	static void CLEAR_ANGLED_AREA_OF_VEHICLES(float p0, float p1, float p2, float p3, float p4, float p5, float p6, BOOL p7, BOOL p8, BOOL p9, BOOL p10, BOOL p11, Any p12) { return invoke<void>(0x11DB3500F042A8AA, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12); } // 0x11DB3500F042A8AA 0xF11A3018 b323
	 // I looked through the PC scripts that this site provides you with a link to find. It shows the last param mainly uses, (0, 2, 6, 16, and 17) so I am going to assume it is a type of flag. 
	static void CLEAR_AREA_OF_OBJECTS(float x, float y, float z, float radius, int flags) { return invoke<void>(0xDD9B9B385AAC7F5B, x, y, z, radius, flags); } // 0xDD9B9B385AAC7F5B 0xBB720FE7 b323
	 // Example:       CLEAR_AREA_OF_PEDS(0, 0, 0, 10000, 1);
	static void CLEAR_AREA_OF_PEDS(float x, float y, float z, float radius, int flags) { return invoke<void>(0xBE31FD6CE464AC59, x, y, z, radius, flags); } // 0xBE31FD6CE464AC59 0x25BE7FA8 b323
	 // flags appears to always be 0
	static void CLEAR_AREA_OF_COPS(float x, float y, float z, float radius, int flags) { return invoke<void>(0x04F8FC8FCF58F88D, x, y, z, radius, flags); } // 0x04F8FC8FCF58F88D 0x95C53824 b323
	 // flags is usually 0 in the scripts.
	static void CLEAR_AREA_OF_PROJECTILES(float x, float y, float z, float radius, int flags) { return invoke<void>(0x0A1CB9094635D1A6, x, y, z, radius, flags); } // 0x0A1CB9094635D1A6 0x18DB5434 b323
	static void SET_CREDITS_ACTIVE(BOOL toggle) { return invoke<void>(0xB938B7E6D3C0620C, toggle); } // 0xB938B7E6D3C0620C 0xEC2A0ECF b323
	static void _0xB51B9AB9EF81868C(BOOL toggle) { return invoke<void>(0xB51B9AB9EF81868C, toggle); } // 0xB51B9AB9EF81868C 0x75B06B5A b323
	static BOOL HAVE_CREDITS_REACHED_END() { return invoke<BOOL>(0x075F1D57402C93BA); } // 0x075F1D57402C93BA 0x2569C9A7 b323
	 // For a full list, see here: pastebin.com/yLNWicUi
	static void TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME(const char* scriptName) { return invoke<void>(0x9DC711BC69C548DF, scriptName); } // 0x9DC711BC69C548DF 0x9F861FD4 b323
	static void NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME() { return invoke<void>(0x9243BAC96D64C050); } // 0x9243BAC96D64C050 0x878486CE b323
	 // Returns the index of the newly created hospital spawn point.
	 // 
	 // p3 might be radius?
	static int ADD_HOSPITAL_RESTART(float x, float y, float z, float p3, Any p4) { return invoke<int>(0x1F464EF988465A81, x, y, z, p3, p4); } // 0x1F464EF988465A81 0x4F3E3104 b323
	 // The game by default has 5 hospital respawn points. Disabling them all will cause the player to respawn at the last position they were.
	static void DISABLE_HOSPITAL_RESTART(int hospitalIndex, BOOL toggle) { return invoke<void>(0xC8535819C450EBA8, hospitalIndex, toggle); } // 0xC8535819C450EBA8 0x09F49C72 b323
	static Any ADD_POLICE_RESTART(float p0, float p1, float p2, float p3, Any p4) { return invoke<Any>(0x452736765B31FC4B, p0, p1, p2, p3, p4); } // 0x452736765B31FC4B 0xE96C29FE b323
	 // Disables the spawn point at the police house on the specified index.
	 // 
	 // policeIndex: The police house index.
	 // toggle: true to enable the spawn point, false to disable.
	 // 
	 // - Nacorpio
	static void DISABLE_POLICE_RESTART(int policeIndex, BOOL toggle) { return invoke<void>(0x23285DED6EBD7EA3, policeIndex, toggle); } // 0x23285DED6EBD7EA3 0x0A280324 b323
	static void PAUSE_DEATH_ARREST_RESTART(BOOL toggle) { return invoke<void>(0x2C2B3493FBF51C71, toggle); } // 0x2C2B3493FBF51C71 0x296574AE b323
	static void IGNORE_NEXT_RESTART(BOOL toggle) { return invoke<void>(0x21FFB63D8C615361, toggle); } // 0x21FFB63D8C615361 0xDA13A4B6 b323
	 // Sets whether the game should fade out after the player dies.
	static void SET_FADE_OUT_AFTER_DEATH(BOOL toggle) { return invoke<void>(0x4A18E01DF2C87B86, toggle); } // 0x4A18E01DF2C87B86 0xC9F6F0BC b323
	 // Sets whether the game should fade out after the player is arrested.
	static void SET_FADE_OUT_AFTER_ARREST(BOOL toggle) { return invoke<void>(0x1E0B4DC0D990A4E7, toggle); } // 0x1E0B4DC0D990A4E7 0xCB074B9D b323
	 // Sets whether the game should fade in after the player dies or is arrested.
	static void SET_FADE_IN_AFTER_DEATH_ARREST(BOOL toggle) { return invoke<void>(0xDA66D2796BA33F12, toggle); } // 0xDA66D2796BA33F12 0xACDE6985 b323
	 // Returns true if profile setting 208 is equal to 0.
	static BOOL GET_IS_AUTO_SAVE_OFF() { return invoke<BOOL>(0x6E04F06094C87047); } // 0x6E04F06094C87047 0xA8546914 b323
	static BOOL IS_AUTO_SAVE_IN_PROGRESS() { return invoke<BOOL>(0x69240733738C19A0); } // 0x69240733738C19A0 0x36F75399 b323
	static void BEGIN_REPLAY_STATS(Any p0, Any p1) { return invoke<void>(0xE0E500246FF73D66, p0, p1); } // 0xE0E500246FF73D66 0x17F4F44D b323
	static void ADD_REPLAY_STAT_VALUE(Any value) { return invoke<void>(0x69FE6DC87BD2A5E9, value); } // 0x69FE6DC87BD2A5E9 0x81216EE0 b323
	static void END_REPLAY_STATS() { return invoke<void>(0xA23E821FBDF8A5F2); } // 0xA23E821FBDF8A5F2 0xCB570185 b323
	static Any _0xD642319C54AADEB6() { return invoke<Any>(0xD642319C54AADEB6); } // 0xD642319C54AADEB6 0xC58250F1 b323
	static Any _0x5B1F2E327B6B6FE1() { return invoke<Any>(0x5B1F2E327B6B6FE1); } // 0x5B1F2E327B6B6FE1 0x50C39926 b323
	static int GET_REPLAY_STAT_MISSION_TYPE() { return invoke<int>(0x2B626A0150E4D449); } // 0x2B626A0150E4D449 0x710E5D1E b323
	static int GET_REPLAY_STAT_COUNT() { return invoke<int>(0xDC9274A7EF6B2867); } // 0xDC9274A7EF6B2867 0xC7BD1AF0 b323
	static int GET_REPLAY_STAT_AT_INDEX(int index) { return invoke<int>(0x8098C8D6597AAE18, index); } // 0x8098C8D6597AAE18 0x22BE2423 b323
	static void CLEAR_REPLAY_STATS() { return invoke<void>(0x1B1AB132A16FDA55); } // 0x1B1AB132A16FDA55 0xC47DFF02 b323
	static BOOL IS_MEMORY_CARD_IN_USE() { return invoke<BOOL>(0x8A75CE2956274ADD); } // 0x8A75CE2956274ADD 0x40CE4DFD b323
	static void SHOOT_SINGLE_BULLET_BETWEEN_COORDS(float x1, float y1, float z1, float x2, float y2, float z2, int damage, BOOL p7, Hash weaponHash, Ped ownerPed, BOOL isAudible, BOOL isInvisible, float speed) { return invoke<void>(0x867654CBC7606F2C, x1, y1, z1, x2, y2, z2, damage, p7, weaponHash, ownerPed, isAudible, isInvisible, speed); } // 0x867654CBC7606F2C 0xCB7415AC b323
	 // entity - entity to ignore
	static void SHOOT_SINGLE_BULLET_BETWEEN_COORDS_IGNORE_ENTITY_NEW(float x1, float y1, float z1, float x2, float y2, float z2, int damage, BOOL p7, Hash weaponHash, Ped ownerPed, BOOL isAudible, BOOL isInvisible, float speed, Entity entity, BOOL p14, BOOL p15, BOOL p16, BOOL p17, Any p18, Any p19) { return invoke<void>(0xBFE5756E7407064A, x1, y1, z1, x2, y2, z2, damage, p7, weaponHash, ownerPed, isAudible, isInvisible, speed, entity, p14, p15, p16, p17, p18, p19); } // 0xBFE5756E7407064A 0xCCDC33CC b323
	 // Gets the dimensions of a model.
	 // 
	 // Calculate (maximum - minimum) to get the size, in which case, Y will be how long the model is.
	 // 
	 // Example from the scripts: GAMEPLAY::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()), &v_1A, &v_17);
	static void GET_MODEL_DIMENSIONS(Hash modelHash, Vector3* minimum, Vector3* maximum) { return invoke<void>(0x03E8D3D5F549087A, modelHash, minimum, maximum); } // 0x03E8D3D5F549087A 0x91ABB8E0 b323
	 // Sets a visually fake wanted level on the user interface. Used by Rockstar's scripts to "override" regular wanted levels and make custom ones while the real wanted level and multipliers are still in effect.
	 // 
	 // Max is 6, anything above this makes it just 6. Also the mini-map gets the red & blue flashing effect.
	static void SET_FAKE_WANTED_LEVEL(int fakeWantedLevel) { return invoke<void>(0x1454F2448DE30163, fakeWantedLevel); } // 0x1454F2448DE30163 0x85B1C9FA b323
	 // Returns bit's boolean state from [offset] of [address].
	 // 
	 // Example:
	 // GAMEPLAY::IS_BIT_SET(bitAddress, 1);
	 // 
	 // To enable and disable bits, see:
	 // GAMEPLAY::SET_BIT(&bitAddress, 1);   // enable
	 // GAMEPLAY::CLEAR_BIT(&bitAddress, 1); // disable
	static BOOL IS_BIT_SET(int address, int offset) { return invoke<BOOL>(0xA921AA820C25702F, address, offset); } // 0xA921AA820C25702F 0x902E26AC b323
	static void USING_MISSION_CREATOR(BOOL toggle) { return invoke<void>(0xF14878FC50BEC6EE, toggle); } // 0xF14878FC50BEC6EE 0x20AB0B6B b323
	static void ALLOW_MISSION_CREATOR_WARP(BOOL toggle) { return invoke<void>(0xDEA36202FC3382DF, toggle); } // 0xDEA36202FC3382DF 0x082BA6F2 b323
	static void SET_MINIGAME_IN_PROGRESS(BOOL toggle) { return invoke<void>(0x19E00D7322C6F85B, toggle); } // 0x19E00D7322C6F85B 0x348B9046 b323
	static BOOL IS_MINIGAME_IN_PROGRESS() { return invoke<BOOL>(0x2B4A15E44DE0F478); } // 0x2B4A15E44DE0F478 0x53A95E13 b323
	 // Returns whether the game's measurement system is set to metric (profile setting 227).
	static BOOL SHOULD_USE_METRIC_MEASUREMENTS() { return invoke<BOOL>(0xD3D15555431AB793); } // 0xD3D15555431AB793 0xBAF17315 b323
	static int GET_PROFILE_SETTING(int profileSetting) { return invoke<int>(0xC488FF2356EA7791, profileSetting); } // 0xC488FF2356EA7791 0xD374BEBC b323
	static BOOL ARE_STRINGS_EQUAL(const char* string1, const char* string2) { return invoke<BOOL>(0x0C515FAB3FF9EA92, string1, string2); } // 0x0C515FAB3FF9EA92 0x877C0BC5 b323
	 // Compares two strings up to a specified number of characters.
	 // 
	 // Parameters:
	 // str1 - String to be compared.
	 // str2 - String to be compared.
	 // matchCase - Comparison will be case-sensitive.
	 // maxLength - Maximum number of characters to compare. A value of -1 indicates an infinite length.
	 // 
	 // Returns:
	 // A value indicating the relationship between the strings:
	 // <0 - The first non-matching character in 'str1' is less than the one in 'str2'. (e.g. 'A' < 'B', so result = -1)
	 // 0 - The contents of both strings are equal.
	 // >0 - The first non-matching character in 'str1' is less than the one in 'str2'. (e.g. 'B' > 'A', so result = 1)
	 // 
	 // Examples:
	 // GAMEPLAY::COMPARE_STRINGS("STRING", "string", false, -1); // 0; equal
	 // GAMEPLAY::COMPARE_STRINGS("TESTING", "test", false, 4); // 0; equal
	 // GAMEPLAY::COMPARE_STRINGS("R2D2", "R2xx", false, 2); // 0; equal
	 // GAMEPLAY::COMPARE_STRINGS("foo", "bar", false, -1); // 4; 'f' > 'b'
	 // GAMEPLAY::COMPARE_STRINGS("A", "A", true, 1); // 0; equal
	 // 
	 // When comparing case-sensitive strings, lower-case characters are greater than upper-case characters:
	 // GAMEPLAY::COMPARE_STRINGS("A", "a", true, 1); // -1; 'A' < 'a'
	 // GAMEPLAY::COMPARE_STRINGS("a", "A", true, 1); // 1; 'a' > 'A'
	static int COMPARE_STRINGS(const char* str1, const char* str2, BOOL matchCase, int maxLength) { return invoke<int>(0x1E34710ECD4AB0EB, str1, str2, matchCase, maxLength); } // 0x1E34710ECD4AB0EB 0xFE25A58F b323
	static int ABSI(int value) { return invoke<int>(0xF0D31AD191A74F87, value); } // 0xF0D31AD191A74F87 0xB44677C5 b323
	static float ABSF(float value) { return invoke<float>(0x73D57CFFDD12C355, value); } // 0x73D57CFFDD12C355 0xAF6F6E0B b323
	 // Determines whether there is a sniper bullet within the specified coordinates. The coordinates form a rectangle.
	 // 
	 // - Nacorpio
	static BOOL IS_SNIPER_BULLET_IN_AREA(float x1, float y1, float z1, float x2, float y2, float z2) { return invoke<BOOL>(0xFEFCF11B01287125, x1, y1, z1, x2, y2, z2); } // 0xFEFCF11B01287125 0x0483715C b323
	 // Determines whether there is a projectile within the specified coordinates. The coordinates form a rectangle.
	 // 
	 // - Nacorpio
	 // 
	 // 
	 // ownedByPlayer = only projectiles fired by the player will be detected.
	static BOOL IS_PROJECTILE_IN_AREA(float x1, float y1, float z1, float x2, float y2, float z2, BOOL ownedByPlayer) { return invoke<BOOL>(0x5270A8FBC098C3F8, x1, y1, z1, x2, y2, z2, ownedByPlayer); } // 0x5270A8FBC098C3F8 0x78E1A557 b323
	 // Determines whether there is a projectile of a specific type within the specified coordinates. The coordinates form a rectangle.
	 // 
	 // Note: This native hasn't been tested yet.
	 // 
	 // - Nacorpio
	static BOOL IS_PROJECTILE_TYPE_IN_AREA(float x1, float y1, float z1, float x2, float y2, float z2, int type, BOOL p7) { return invoke<BOOL>(0x2E0DC353342C4A6D, x1, y1, z1, x2, y2, z2, type, p7); } // 0x2E0DC353342C4A6D 0x2B73BCF6 b323
	static BOOL IS_PROJECTILE_TYPE_IN_ANGLED_AREA(float p0, float p1, float p2, float p3, float p4, float p5, float p6, Any p7, BOOL p8) { return invoke<BOOL>(0xF0BC12401061DEA0, p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 0xF0BC12401061DEA0 0xD1AE2681 b323
	static BOOL IS_PROJECTILE_TYPE_WITHIN_DISTANCE(float p0, float p1, float p2, Any p3, float p4, BOOL p5) { return invoke<BOOL>(0x34318593248C8FB2, p0, p1, p2, p3, p4, p5); } // 0x34318593248C8FB2 0xBE81F1E2 b323
	static Vector3 GET_COORDS_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(Ped ped, Hash weaponHash, float radius, Entity* entity, BOOL p4) { return invoke<Vector3>(0xDFB4138EEFED7B81, ped, weaponHash, radius, entity, p4); } // 0xDFB4138EEFED7B81 0x6BDE5CE4 b323
	 // GET_PROJECTILE_*
	static BOOL _GET_PROJECTILE_NEAR_PED(Ped ped, Hash weaponhash, float p2, float p3, float p4, BOOL p5) { return invoke<BOOL>(0x82FDE6A57EE4EE44, ped, weaponhash, p2, p3, p4, p5); } // 0x82FDE6A57EE4EE44 0x507BC6F7 b323
	static BOOL IS_BULLET_IN_ANGLED_AREA(float p0, float p1, float p2, float p3, float p4, float p5, float p6, BOOL p7) { return invoke<BOOL>(0x1A8B5F3C01E2B477, p0, p1, p2, p3, p4, p5, p6, p7); } // 0x1A8B5F3C01E2B477 0xE2DB58F7 b323
	static BOOL IS_BULLET_IN_AREA(float p0, float p1, float p2, float p3, BOOL p4) { return invoke<BOOL>(0x3F2023999AD51C1F, p0, p1, p2, p3, p4); } // 0x3F2023999AD51C1F 0xB54F46CA b323
	static BOOL IS_BULLET_IN_BOX(float p0, float p1, float p2, float p3, float p4, float p5, BOOL p6) { return invoke<BOOL>(0xDE0F6D7450D37351, p0, p1, p2, p3, p4, p5, p6); } // 0xDE0F6D7450D37351 0xAB73ED26 b323
	 // p3 - possibly radius?
	static BOOL HAS_BULLET_IMPACTED_IN_AREA(float x, float y, float z, float p3, BOOL p4, BOOL p5) { return invoke<BOOL>(0x9870ACFB89A90995, x, y, z, p3, p4, p5); } // 0x9870ACFB89A90995 0x902BC7D9 b323
	static BOOL HAS_BULLET_IMPACTED_IN_BOX(float p0, float p1, float p2, float p3, float p4, float p5, BOOL p6, BOOL p7) { return invoke<BOOL>(0xDC8C5D7CFEAB8394, p0, p1, p2, p3, p4, p5, p6, p7); } // 0xDC8C5D7CFEAB8394 0x2C2618CC b323
	 // PS4
	static BOOL IS_ORBIS_VERSION() { return invoke<BOOL>(0xA72BC0B675B1519E); } // 0xA72BC0B675B1519E 0x40282018 b323
	 // XBOX ONE
	static BOOL IS_DURANGO_VERSION() { return invoke<BOOL>(0x4D982ADB1978442D); } // 0x4D982ADB1978442D 0x46FB06A5 b323
	static BOOL IS_XBOX360_VERSION() { return invoke<BOOL>(0xF6201B4DAF662A9D); } // 0xF6201B4DAF662A9D 0x24005CC8 b323
	static BOOL IS_PS3_VERSION() { return invoke<BOOL>(0xCCA1072C29D096C2); } // 0xCCA1072C29D096C2 0x4C0D5303 b323
	static BOOL IS_PC_VERSION() { return invoke<BOOL>(0x48AF36444B965238); } // 0x48AF36444B965238 0x4D5D9EE3 b323
	 // if (GAMEPLAY::IS_AUSSIE_VERSION()) {
	 //     sub_127a9(&l_31, 1024); // l_31 |= 1024
	 //     l_129 = 3;
	 //     sub_129d2("AUSSIE VERSION IS TRUE!?!?!"); // DEBUG
	 // }
	 // 
	 // Used to block some of the prostitute stuff due to laws in Australia.
	static BOOL IS_AUSSIE_VERSION() { return invoke<BOOL>(0x9F1935CA1F724008); } // 0x9F1935CA1F724008 0x944BA1DC b323
	static BOOL IS_STRING_NULL(const char* string) { return invoke<BOOL>(0xF22B6C47C6EAB066, string); } // 0xF22B6C47C6EAB066 0x8E71E00F b323
	static BOOL IS_STRING_NULL_OR_EMPTY(const char* string) { return invoke<BOOL>(0xCA042B6957743895, string); } // 0xCA042B6957743895 0x42E9F2CA b323
	 // Returns false if it's a null or empty string or if the string is too long. outInteger will be set to -999 in that case.
	 // 
	 // If all checks have passed successfully, the return value will be set to whatever strtol(string, 0i64, 10); returns.
	static BOOL STRING_TO_INT(const char* string, int* outInteger) { return invoke<BOOL>(0x5A5F40FE637EB584, string, outInteger); } // 0x5A5F40FE637EB584 0x590A8160 b323
	static void SET_BITS_IN_RANGE(int* var, int rangeStart, int rangeEnd, int p3) { return invoke<void>(0x8EF07E15701D61ED, var, rangeStart, rangeEnd, p3); } // 0x8EF07E15701D61ED 0x32094719 b323
	static int GET_BITS_IN_RANGE(int var, int rangeStart, int rangeEnd) { return invoke<int>(0x53158863FCC0893A, var, rangeStart, rangeEnd); } // 0x53158863FCC0893A 0xCA03A1E5 b323
	static int ADD_STUNT_JUMP(float p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7, float p8, float p9, float p10, float p11, float p12, float p13, float p14, Any p15, Any p16, Any p17) { return invoke<int>(0x1A992DA297A4630C, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15, p16, p17); } // 0x1A992DA297A4630C 0xB630E5FF b323
	static void ENABLE_STUNT_JUMP_SET(int p0) { return invoke<void>(0xE369A5783B866016, p0); } // 0xE369A5783B866016 0x9D1E7785 b323
	static void SET_STUNT_JUMPS_CAN_TRIGGER(BOOL toggle) { return invoke<void>(0xD79185689F8FD5DF, toggle); } // 0xD79185689F8FD5DF 0x3C806A2D b323
	static BOOL IS_STUNT_JUMP_IN_PROGRESS() { return invoke<BOOL>(0x7A3F19700A4D0525); } // 0x7A3F19700A4D0525 0xF477D0B1 b323
	static BOOL IS_STUNT_JUMP_MESSAGE_SHOWING() { return invoke<BOOL>(0x2272B0A1343129F4); } // 0x2272B0A1343129F4 0x021636EE b323
	static int GET_NUM_SUCCESSFUL_STUNT_JUMPS() { return invoke<int>(0x996DD1E1E02F1008); } // 0x996DD1E1E02F1008 0x006F9BA2 b323
	 // Make sure to call this from the correct thread if you're using multiple threads because all other threads except the one which is calling SET_GAME_PAUSED will be paused which means you will lose control and the game remains in paused mode until you exit GTA5.exe
	static void SET_GAME_PAUSED(BOOL toggle) { return invoke<void>(0x577D1284D6873711, toggle); } // 0x577D1284D6873711 0x8230FF6C b323
	static void SET_THIS_SCRIPT_CAN_BE_PAUSED(BOOL toggle) { return invoke<void>(0xAA391C728106F7AF, toggle); } // 0xAA391C728106F7AF 0xA0C3CE29 b323
	static void SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(BOOL toggle) { return invoke<void>(0xB98236CAAECEF897, toggle); } // 0xB98236CAAECEF897 0xD06F1720 b323
	 // This native appears on the cheat_controller script and tracks a combination of buttons, which may be used to toggle cheats in-game. Credits to ThreeSocks for the info. The hash contains the combination, while the "amount" represents the amount of buttons used in a combination. The following page can be used to make a button combination: gta5offset.com/ts/hash/
	 // 
	 // INT_SCORES_SCORTED was a hash collision
	static BOOL _HAS_BUTTON_COMBINATION_JUST_BEEN_ENTERED(Hash hash, int amount) { return invoke<BOOL>(0x071E2A839DE82D90, hash, amount); } // 0x071E2A839DE82D90 0xFF6191E1 b323
	 // Get inputted "Cheat code", for example:
	 // 
	 // while (TRUE)
	 // {
	 //     if (GAMEPLAY::_557E43C447E700A8(${fugitive}))
	 //     {
	 //        // Do something.
	 //     }
	 //     SYSTEM::WAIT(0);
	 // }
	 // 
	 // Calling this will also set the last saved string hash to zero.
	 // 
	static BOOL _HAS_CHEAT_STRING_JUST_BEEN_ENTERED(Hash hash) { return invoke<BOOL>(0x557E43C447E700A8, hash); } // 0x557E43C447E700A8 b323
	 // Formerly known as _LOWER_MAP_PROP_DENSITY and wrongly due to idiots as _ENABLE_MP_DLC_MAPS.
	 // Sets the maximum prop density and changes a loading screen flag from 'loading story mode' to 'loading GTA Online'. Does not touch DLC map data at all.
	 // 
	 // In fact, I doubt this changes the flag whatsoever, that's the OTHER native idiots use together with this that does so, this one only causes a loading screen to show as it reloads map data.
	static void SET_INSTANCE_PRIORITY_MODE(int p0) { return invoke<void>(0x9BAE5AD2508DF078, p0); } // 0x9BAE5AD2508DF078 0x721B2492 b323
	 // Sets an unknown flag used by CScene in determining which entities from CMapData scene nodes to draw, similar to 9BAE5AD2508DF078.
	 // 
	 // Documented by NTAuthority (http://fivem.net/).
	static void SET_INSTANCE_PRIORITY_HINT(int flag) { return invoke<void>(0xC5F0A8EBD3F361CE, flag); } // 0xC5F0A8EBD3F361CE 0xE202879D b323
	 // This function is hard-coded to always return 0.
	static BOOL IS_FRONTEND_FADING() { return invoke<BOOL>(0x7EA2B6AF97ECA6ED); } // 0x7EA2B6AF97ECA6ED 0x8FF6232C b323
	 // spawns a few distant/out-of-sight peds, vehicles, animals etc each time it is called
	static void POPULATE_NOW() { return invoke<void>(0x7472BB270D7B4F3E); } // 0x7472BB270D7B4F3E 0x72C20700 b323
	static int GET_INDEX_OF_CURRENT_LEVEL() { return invoke<int>(0xCBAD6729F7B1F4FC); } // 0xCBAD6729F7B1F4FC 0x6F203C6E b323
	 // level can be from 0 to 3
	 // 0: 9.8 - normal
	 // 1: 2.4 - low
	 // 2: 0.1 - very low
	 // 3: 0.0 - off
	 // 
	 // //SuckMyCoke
	static void SET_GRAVITY_LEVEL(int level) { return invoke<void>(0x740E14FAD5842351, level); } // 0x740E14FAD5842351 0x2D833F4A b323
	static void START_SAVE_DATA(Any* p0, Any p1, BOOL p2) { return invoke<void>(0xA9575F812C6A7997, p0, p1, p2); } // 0xA9575F812C6A7997 0x881A694D b323
	static void STOP_SAVE_DATA() { return invoke<void>(0x74E20C9145FB66FD); } // 0x74E20C9145FB66FD 0x3B1C07C8 b323
	static int GET_SIZE_OF_SAVE_DATA(BOOL p0) { return invoke<int>(0xA09F896CE912481F, p0); } // 0xA09F896CE912481F 0x9EF0BC64 b323
	static void REGISTER_INT_TO_SAVE(Any* p0, const char* name) { return invoke<void>(0x34C9EE5986258415, p0, name); } // 0x34C9EE5986258415 0xB930956F b323
	static void _REGISTER_INT64_TO_SAVE(Any* p0, const char* name) { return invoke<void>(0xA735353C77334EA0, p0, name); } // 0xA735353C77334EA0 b323
	static void REGISTER_ENUM_TO_SAVE(Any* p0, const char* name) { return invoke<void>(0x10C2FA78D0E128A1, p0, name); } // 0x10C2FA78D0E128A1 0x9B38374A b323
	static void REGISTER_FLOAT_TO_SAVE(Any* p0, const char* name) { return invoke<void>(0x7CAEC29ECB5DFEBB, p0, name); } // 0x7CAEC29ECB5DFEBB 0xDB06F7AD b323
	static void REGISTER_BOOL_TO_SAVE(Any* p0, const char* name) { return invoke<void>(0xC8F4131414C835A1, p0, name); } // 0xC8F4131414C835A1 0x5417E0E0 b323
	 // Seems to have the same functionality as REGISTER_TEXT_LABEL_TO_SAVE?
	 // 
	 // GAMEPLAY::_6F7794F28C6B2535(&a_0._f1, "tlPlateText");
	 // GAMEPLAY::_6F7794F28C6B2535(&a_0._f1C, "tlPlateText_pending");
	 // GAMEPLAY::_6F7794F28C6B2535(&a_0._f10B, "tlCarAppPlateText");
	 // 
	 // "tl" prefix sounds like "Text Label"
	static void _REGISTER_TEXT_LABEL_TO_SAVE_2(Any* p0, const char* name) { return invoke<void>(0x6F7794F28C6B2535, p0, name); } // 0x6F7794F28C6B2535 0xE2089749 b323
	 // Only found 3 times in decompiled scripts. Not a whole lot to go off of.
	 // 
	 // GAMEPLAY::_48F069265A0E4BEC(a_0, "Movie_Name_For_This_Player");
	 // GAMEPLAY::_48F069265A0E4BEC(&a_0._fB, "Ringtone_For_This_Player");
	 // GAMEPLAY::_48F069265A0E4BEC(&a_0._f1EC4._f12[v_A/*6*/], &v_13); // where v_13 is "MPATMLOGSCRS0" thru "MPATMLOGSCRS15"
	static void _0x48F069265A0E4BEC(Any* p0, const char* name) { return invoke<void>(0x48F069265A0E4BEC, p0, name); } // 0x48F069265A0E4BEC 0xF91B8C33 b323
	 // Only found 2 times in decompiled scripts. Not a whole lot to go off of.
	 // 
	 // GAMEPLAY::_8269816F6CFD40F8(&a_0._f1F5A._f6[0/*8*/], "TEMPSTAT_LABEL"); // gets saved in a struct called "g_SaveData_STRING_ScriptSaves"
	 // GAMEPLAY::_8269816F6CFD40F8(&a_0._f4B4[v_1A/*8*/], &v_5); // where v_5 is "Name0" thru "Name9", gets saved in a struct called "OUTFIT_Name"
	static void _0x8269816F6CFD40F8(Any* p0, const char* name) { return invoke<void>(0x8269816F6CFD40F8, p0, name); } // 0x8269816F6CFD40F8 0x74E8FAD9 b323
	 // Another unknown label type...
	 // 
	 // GAMEPLAY::_FAA457EF263E8763(a_0, "Thumb_label");
	 // GAMEPLAY::_FAA457EF263E8763(&a_0._f10, "Photo_label");
	 // GAMEPLAY::_FAA457EF263E8763(a_0, "GXTlabel");
	 // GAMEPLAY::_FAA457EF263E8763(&a_0._f21, "StringComp");
	 // GAMEPLAY::_FAA457EF263E8763(&a_0._f43, "SecondStringComp");
	 // GAMEPLAY::_FAA457EF263E8763(&a_0._f53, "ThirdStringComp");
	 // GAMEPLAY::_FAA457EF263E8763(&a_0._f32, "SenderStringComp");
	 // GAMEPLAY::_FAA457EF263E8763(&a_0._f726[v_1A/*16*/], &v_20); // where v_20 is "LastJobTL_0_1" thru "LastJobTL_2_1", gets saved in a struct called "LAST_JobGamer_TL"
	 // GAMEPLAY::_FAA457EF263E8763(&a_0._f4B, "PAID_PLAYER");
	 // GAMEPLAY::_FAA457EF263E8763(&a_0._f5B, "RADIO_STATION");
	static void _0xFAA457EF263E8763(Any* p0, const char* name) { return invoke<void>(0xFAA457EF263E8763, p0, name); } // 0xFAA457EF263E8763 0x6B4335DD b323
	static void START_SAVE_STRUCT_WITH_SIZE(Any* p0, int size, const char* structName) { return invoke<void>(0xBF737600CDDBEADD, p0, size, structName); } // 0xBF737600CDDBEADD 0xFB45728E b323
	static void STOP_SAVE_STRUCT() { return invoke<void>(0xEB1774DF12BB9F12); } // 0xEB1774DF12BB9F12 0xC2624A28 b323
	static void START_SAVE_ARRAY_WITH_SIZE(Any* p0, int size, const char* arrayName) { return invoke<void>(0x60FE567DF1B1AF9D, p0, size, arrayName); } // 0x60FE567DF1B1AF9D 0x893A342C b323
	static void STOP_SAVE_ARRAY() { return invoke<void>(0x04456F95153C6BE4); } // 0x04456F95153C6BE4 0x0CAD8217 b323
	static void _COPY_MEMORY(Any* dst, Any* src, int size) { return invoke<void>(0x213AEB2B90CBA7AC, dst, src, size); } // 0x213AEB2B90CBA7AC b877
	 // https://alloc8or.re/gta5/doc/enums/DispatchType.txt
	static void ENABLE_DISPATCH_SERVICE(int dispatchService, BOOL toggle) { return invoke<void>(0xDC0F817884CDD856, dispatchService, toggle); } // 0xDC0F817884CDD856 0x0B710A51 b323
	static void BLOCK_DISPATCH_SERVICE_RESOURCE_CREATION(int dispatchService, BOOL toggle) { return invoke<void>(0x9B2BD3773123EA2F, dispatchService, toggle); } // 0x9B2BD3773123EA2F 0xE0F0684F b323
	static int _GET_NUM_DISPATCHED_UNITS_FOR_PLAYER(int dispatchService) { return invoke<int>(0xEB4A0C2D56441717, dispatchService); } // 0xEB4A0C2D56441717 0x3CE5BF6B b323
	 // As for the 'police' incident, it will call police cars to you, but unlike PedsInCavalcades & Merryweather they won't start shooting at you unless you shoot first or shoot at them. The top 2 however seem to cancel theirselves if there is noone dead around you or a fire. I only figured them out as I found out the 3rd param is definately the amountOfPeople and they called incident 3 in scripts with 4 people (which the firetruck has) and incident 5 with 2 people (which the ambulence has). The 4 param I cant say is radius, but for the pedsInCavalcades and Merryweather R* uses 0.0f and for the top 3 (Emergency Services) they use 3.0f. 
	 // 
	 // Side Note: It seems calling the pedsInCavalcades or Merryweather then removing it seems to break you from calling the EmergencyEvents and I also believe pedsInCavalcades. (The V cavalcades of course not IV).
	 // 
	 // Side Note 2: I say it breaks as if you call this proper,
	 // if(CREATE_INCIDENT) etc it will return false if you do as I said above.
	 // =====================================================
	static BOOL CREATE_INCIDENT(int dispatchService, float x, float y, float z, int numUnits, float radius, int* outIncidentID, Any p7, Any p8) { return invoke<BOOL>(0x3F892CAF67444AE7, dispatchService, x, y, z, numUnits, radius, outIncidentID, p7, p8); } // 0x3F892CAF67444AE7 0xFC5FF7B3 b323
	 // As for the 'police' incident, it will call police cars to you, but unlike PedsInCavalcades & Merryweather they won't start shooting at you unless you shoot first or shoot at them. The top 2 however seem to cancel theirselves if there is noone dead around you or a fire. I only figured them out as I found out the 3rd param is definately the amountOfPeople and they called incident 3 in scripts with 4 people (which the firetruck has) and incident 5 with 2 people (which the ambulence has). The 4 param I cant say is radius, but for the pedsInCavalcades and Merryweather R* uses 0.0f and for the top 3 (Emergency Services) they use 3.0f. 
	 // 
	 // Side Note: It seems calling the pedsInCavalcades or Merryweather then removing it seems to break you from calling the EmergencyEvents and I also believe pedsInCavalcades. (The V cavalcades of course not IV).
	 // 
	 // Side Note 2: I say it breaks as if you call this proper,
	 // if(CREATE_INCIDENT) etc it will return false if you do as I said above.
	 // =====================================================
	static BOOL CREATE_INCIDENT_WITH_ENTITY(int dispatchService, Ped ped, int numUnits, float radius, int* outIncidentID, Any p5, Any p6) { return invoke<BOOL>(0x05983472F0494E60, dispatchService, ped, numUnits, radius, outIncidentID, p5, p6); } // 0x05983472F0494E60 0xBBC35B03 b323
	 // Delete an incident with a given id.
	 // 
	 // =======================================================
	 // Correction, I have change this to int, instead of int*
	 // as it doesn't use a pointer to the createdIncident.
	 // If you try it you will crash (or) freeze.
	 // =======================================================
	static void DELETE_INCIDENT(int incidentId) { return invoke<void>(0x556C1AA270D5A207, incidentId); } // 0x556C1AA270D5A207 0x212BD0DC b323
	 // =======================================================
	 // Correction, I have change this to int, instead of int*
	 // as it doesn't use a pointer to the createdIncident.
	 // If you try it you will crash (or) freeze.
	 // =======================================================
	static BOOL IS_INCIDENT_VALID(int incidentId) { return invoke<BOOL>(0xC8BC6461E629BEAA, incidentId); } // 0xC8BC6461E629BEAA 0x31FD0BA4 b323
	static void SET_INCIDENT_REQUESTED_UNITS(int incidentId, int dispatchService, int numUnits) { return invoke<void>(0xB08B85D860E7BA3C, incidentId, dispatchService, numUnits); } // 0xB08B85D860E7BA3C 0x0242D88E b323
	 // SET_INCIDENT_*
	static void _SET_INCIDENT_UNK(int incidentId, float p1) { return invoke<void>(0xD261BA3E7E998072, incidentId, p1); } // 0xD261BA3E7E998072 0x1F38102E b323
	 // Makes the ped jump around like they're in a tennis match
	static void ENABLE_TENNIS_MODE(Ped ped, BOOL toggle, BOOL p2) { return invoke<void>(0x28A04B411933F8A6, ped, toggle, p2); } // 0x28A04B411933F8A6 0x0BD3F9EC b323
	static BOOL IS_TENNIS_MODE(Ped ped) { return invoke<BOOL>(0x5D5479D115290C3F, ped); } // 0x5D5479D115290C3F 0x04A947BA b323
	static void PLAY_TENNIS_SWING_ANIM(Ped ped, const char* animDict, const char* animName, float p3, float p4, BOOL p5) { return invoke<void>(0xE266ED23311F24D4, ped, animDict, animName, p3, p4, p5); } // 0xE266ED23311F24D4 0xC20A7D2B b323
	static BOOL GET_TENNIS_SWING_ANIM_COMPLETE(Ped ped) { return invoke<BOOL>(0x17DF68D720AA77F8, ped); } // 0x17DF68D720AA77F8 0x8501E727 b323
	 // Related to tennis mode.
	 // 
	 // GET_TENNIS_*
	static BOOL _0x19BFED045C647C49(Ped ped) { return invoke<BOOL>(0x19BFED045C647C49, ped); } // 0x19BFED045C647C49 0x1A332D2D b323
	 // Related to tennis mode.
	 // 
	 // GET_TENNIS_*
	static BOOL _0xE95B0C7D5BA3B96B(Ped ped) { return invoke<BOOL>(0xE95B0C7D5BA3B96B, ped); } // 0xE95B0C7D5BA3B96B b323
	static void PLAY_TENNIS_DIVE_ANIM(Ped ped, int p1, float p2, float p3, float p4, BOOL p5) { return invoke<void>(0x8FA9C42FC5D7C64B, ped, p1, p2, p3, p4, p5); } // 0x8FA9C42FC5D7C64B 0x0C8865DF b323
	 // From the scripts:
	 // 
	 // GAMEPLAY::_54F157E0336A3822(sub_aa49(a_0), "ForcedStopDirection", v_E);
	 // 
	 // Related to tennis mode.
	 // 
	 // SET_*
	static void _0x54F157E0336A3822(Ped ped, const char* p1, float p2) { return invoke<void>(0x54F157E0336A3822, ped, p1, p2); } // 0x54F157E0336A3822 0x49F977A9 b323
	static void RESET_DISPATCH_IDEAL_SPAWN_DISTANCE() { return invoke<void>(0x77A84429DD9F0A15); } // 0x77A84429DD9F0A15 0xDA65ECAA b323
	static void SET_DISPATCH_IDEAL_SPAWN_DISTANCE(float p0) { return invoke<void>(0x6FE601A64180D423, p0); } // 0x6FE601A64180D423 0x6283BE32 b323
	static void SET_DISPATCH_TIME_BETWEEN_SPAWN_ATTEMPTS(Any p0, float p1) { return invoke<void>(0x44F7CBC1BEB3327D, p0, p1); } // 0x44F7CBC1BEB3327D 0xABADB709 b323
	static void SET_DISPATCH_TIME_BETWEEN_SPAWN_ATTEMPTS_MULTIPLIER(Any p0, float p1) { return invoke<void>(0x48838ED9937A15D1, p0, p1); } // 0x48838ED9937A15D1 0x1C996BCD b323
	 // RESET_*
	static void _0xD9F692D349249528() { return invoke<void>(0xD9F692D349249528); } // 0xD9F692D349249528 0xE0C9307E b323
	 // SET_*
	static void _0xE532EC1A63231B4F(int p0, int p1) { return invoke<void>(0xE532EC1A63231B4F, p0, p1); } // 0xE532EC1A63231B4F 0xA0D8C749 b323
	static void _CLEAR_TACTICAL_ANALYSIS_POINTS() { return invoke<void>(0xB3CD58CCA6CDA852); } // 0xB3CD58CCA6CDA852 0x66C3C59C b323
	static void SET_RIOT_MODE_ENABLED(BOOL toggle) { return invoke<void>(0x2587A48BC88DFADF, toggle); } // 0x2587A48BC88DFADF 0xD9660339 b323
	static void DISPLAY_ONSCREEN_KEYBOARD_WITH_LONGER_INITIAL_STRING(int p0, const char* windowTitle, Any* p2, const char* defaultText, const char* defaultConcat1, const char* defaultConcat2, const char* defaultConcat3, const char* defaultConcat4, const char* defaultConcat5, const char* defaultConcat6, const char* defaultConcat7, int maxInputLength) { return invoke<void>(0xCA78CFA0366592FE, p0, windowTitle, p2, defaultText, defaultConcat1, defaultConcat2, defaultConcat3, defaultConcat4, defaultConcat5, defaultConcat6, defaultConcat7, maxInputLength); } // 0xCA78CFA0366592FE 0xD2688412 b323
	 // sfink: note, p0 is set to 6 for PC platform in at least 1 script, or to `unk::_get_ui_language_id() == 0` otherwise.
	 // 
	 // NOTE: windowTitle uses text labels, and an invalid value will display nothing.
	 // 
	 // www.gtaforums.com/topic/788343-vrel-script-hook-v/?p=1067380474
	 // 
	 // windowTitle's
	 // -----------------
	 // CELL_EMAIL_BOD  =   "Enter your Eyefind message"
	 // CELL_EMAIL_BODE =   "Message too long. Try again"
	 // CELL_EMAIL_BODF    =   "Forbidden message. Try again"
	 // CELL_EMAIL_SOD    =   "Enter your Eyefind subject"
	 // CELL_EMAIL_SODE =   "Subject too long. Try again"
	 // CELL_EMAIL_SODF    =   "Forbidden text. Try again"
	 // CELL_EMASH_BOD   =   "Enter your Eyefind message"
	 // CELL_EMASH_BODE =   "Message too long. Try again"
	 // CELL_EMASH_BODF    =   "Forbidden message. Try again"
	 // CELL_EMASH_SOD    =   "Enter your Eyefind subject"
	 // CELL_EMASH_SODE =   "Subject too long. Try again"
	 // CELL_EMASH_SODF    =   "Forbidden Text. Try again"
	 // FMMC_KEY_TIP10   =   "Enter Synopsis"
	 // FMMC_KEY_TIP12  =   "Enter Custom Team Name"
	 // FMMC_KEY_TIP12F =   "Forbidden Text. Try again"
	 // FMMC_KEY_TIP12N  =   "Custom Team Name"
	 // FMMC_KEY_TIP8 =   "Enter Message"
	 // FMMC_KEY_TIP8F   =   "Forbidden Text. Try again"
	 // FMMC_KEY_TIP8FS  =   "Invalid Message. Try again"
	 // FMMC_KEY_TIP8S  =   "Enter Message"
	 // FMMC_KEY_TIP9    =   "Enter Outfit Name"
	 // FMMC_KEY_TIP9F   =   "Invalid Outfit Name. Try again"
	 // FMMC_KEY_TIP9N  =   "Outfit Name"
	 // PM_NAME_CHALL  =   "Enter Challenge Name"
	static void DISPLAY_ONSCREEN_KEYBOARD(int p0, const char* windowTitle, const char* p2, const char* defaultText, const char* defaultConcat1, const char* defaultConcat2, const char* defaultConcat3, int maxInputLength) { return invoke<void>(0x00DC833F2568DBF6, p0, windowTitle, p2, defaultText, defaultConcat1, defaultConcat2, defaultConcat3, maxInputLength); } // 0x00DC833F2568DBF6 0xAD99F2CE b323
	 // Returns the current status of the onscreen keyboard, and updates the output.
	 // 
	 // Status Codes:
	 // 
	 // -1: Keyboard isn't active
	 // 0: User still editing
	 // 1: User has finished editing
	 // 2: User has canceled editing
	static int UPDATE_ONSCREEN_KEYBOARD() { return invoke<int>(0x0CF2B696BBF945AE); } // 0x0CF2B696BBF945AE 0x23D0A1CE b323
	 // Returns NULL unless UPDATE_ONSCREEN_KEYBOARD() returns 1 in the same tick.
	static const char* GET_ONSCREEN_KEYBOARD_RESULT() { return invoke<const char*>(0x8362B09B91893647); } // 0x8362B09B91893647 0x44828FB3 b323
	 // p0 was always 2 in R* scripts.
	 // Called before calling DISPLAY_ONSCREEN_KEYBOARD if the input needs to be saved.
	static void _0x3ED1438C1F5C6612(int p0) { return invoke<void>(0x3ED1438C1F5C6612, p0); } // 0x3ED1438C1F5C6612 0x3301EA47 b323
	 // Unsure about the use of this native but here's an example:
	 // 
	 // void sub_8709() {
	 //     GAMEPLAY::_1EAE0A6E978894A2(0, 1);
	 //     GAMEPLAY::_1EAE0A6E978894A2(1, 1);
	 //     GAMEPLAY::_1EAE0A6E978894A2(2, 1);
	 //     GAMEPLAY::_1EAE0A6E978894A2(3, 1);
	 //     GAMEPLAY::_1EAE0A6E978894A2(4, 1);
	 //     GAMEPLAY::_1EAE0A6E978894A2(5, 1);
	 //     GAMEPLAY::_1EAE0A6E978894A2(6, 1);
	 //     GAMEPLAY::_1EAE0A6E978894A2(7, 1);
	 //     GAMEPLAY::_1EAE0A6E978894A2(8, 1);
	 // }
	 // 
	 // So it appears that p0 ranges from 0 to 8.
	 // 
	 // ENABLE_DISPATCH_SERVICE, seems to have a similar layout.
	static void _0x1EAE0A6E978894A2(int p0, BOOL p1) { return invoke<void>(0x1EAE0A6E978894A2, p0, p1); } // 0x1EAE0A6E978894A2 0x8F60366E b323
	static void SET_EXPLOSIVE_AMMO_THIS_FRAME(Player player) { return invoke<void>(0xA66C71C98D5F2CFB, player); } // 0xA66C71C98D5F2CFB 0x2EAFA1D1 b323
	static void SET_FIRE_AMMO_THIS_FRAME(Player player) { return invoke<void>(0x11879CDD803D30F4, player); } // 0x11879CDD803D30F4 0x7C18FC8A b323
	static void SET_EXPLOSIVE_MELEE_THIS_FRAME(Player player) { return invoke<void>(0xFF1BED81BFDC0FE0, player); } // 0xFF1BED81BFDC0FE0 0x96663D56 b323
	static void SET_SUPER_JUMP_THIS_FRAME(Player player) { return invoke<void>(0x57FFF03E423A4C0B, player); } // 0x57FFF03E423A4C0B 0x86745EF3 b323
	 // HAS_*
	 // 
	 // Probably something like "has game been started for the first time".
	static BOOL _0x6FDDF453C0C756EC() { return invoke<BOOL>(0x6FDDF453C0C756EC); } // 0x6FDDF453C0C756EC 0xC3C10FCC b323
	static BOOL ARE_PROFILE_SETTINGS_VALID() { return invoke<BOOL>(0x5AA3BEFA29F03AD4); } // 0x5AA3BEFA29F03AD4 0x46B5A15C b323
	 // Returns true if the current frontend menu is FE_MENU_VERSION_LANDING_MENU
	static BOOL _LANDING_MENU_IS_ACTIVE() { return invoke<BOOL>(0x3BBBD13E5041A79E); } // 0x3BBBD13E5041A79E b323
	 // Returns true if command line option '-benchmark' is set.
	static BOOL _IS_COMMAND_LINE_BENCHMARK_VALUE_SET() { return invoke<BOOL>(0xA049A5BE0F04F2F8); } // 0xA049A5BE0F04F2F8 b323
	 // Hardcoded to always return true.
	static BOOL _HAS_ASYNC_INSTALL_FINISHED() { return invoke<BOOL>(0x14832BF2ABA53FC5); } // 0x14832BF2ABA53FC5 b323
	static void _CLEANUP_ASYNC_INSTALL() { return invoke<void>(0xC79AE21974B01FB2); } // 0xC79AE21974B01FB2 b323
	 // If toggle is true, the ped's head is shown in the pause menu
	 // If toggle is false, the ped's head is not shown in the pause menu
	static void _SET_PLAYER_IS_IN_ANIMAL_FORM(BOOL toggle) { return invoke<void>(0x4EBB7E87AA0DBED4, toggle); } // 0x4EBB7E87AA0DBED4 b323
	 // Although we don't have a jenkins hash for this one, the name is 100% confirmed.
	static BOOL GET_IS_PLAYER_IN_ANIMAL_FORM() { return invoke<BOOL>(0x9689123E3F213AA5); } // 0x9689123E3F213AA5 b323
	 // Does nothing (it's a nullsub).
	static void _0x23227DF0B2115469() { return invoke<void>(0x23227DF0B2115469); } // 0x23227DF0B2115469 b323
	static Any _0xD10282B6E3751BA0() { return invoke<Any>(0xD10282B6E3751BA0); } // 0xD10282B6E3751BA0 b323
}

namespace MOBILE
{
	 // Creates a mobile phone of the specified type.
	 // 
	 // Possible phone types:
	 // 
	 // 0 - Default phone / Michael's phone
	 // 1 - Trevor's phone
	 // 2 - Franklin's phone
	 // 4 - Prologue phone
	 // 
	 // These values represent bit flags, so a value of '3' would toggle Trevor and Franklin's phones together, causing unexpected behavior and most likely crash the game.
	static void CREATE_MOBILE_PHONE(int phoneType) { return invoke<void>(0xA4E8E696C532FBC7, phoneType); } // 0xA4E8E696C532FBC7 0x5BBC5E23 b323
	 // Destroys the currently active mobile phone.
	static void DESTROY_MOBILE_PHONE() { return invoke<void>(0x3BC861DF703E5097); } // 0x3BC861DF703E5097 0x1A65037B b323
	 // The minimum/default is 500.0f. If you plan to make it bigger set it's position as well. Also this seems to need to be called in a loop as when you close the phone the scale is reset. If not in a loop you'd need to call it everytime before you re-open the phone.
	static void SET_MOBILE_PHONE_SCALE(float scale) { return invoke<void>(0xCBDD322A73D6D932, scale); } // 0xCBDD322A73D6D932 0x09BCF1BE b323
	 // Last parameter is unknown and always zero.
	static void SET_MOBILE_PHONE_ROTATION(float rotX, float rotY, float rotZ, Any p3) { return invoke<void>(0xBB779C0CA917E865, rotX, rotY, rotZ, p3); } // 0xBB779C0CA917E865 0x209C28CF b323
	static void GET_MOBILE_PHONE_ROTATION(Vector3* rotation, Vehicle p1) { return invoke<void>(0x1CEFB61F193070AE, rotation, p1); } // 0x1CEFB61F193070AE 0x17A29F23 b323
	static void SET_MOBILE_PHONE_POSITION(float posX, float posY, float posZ) { return invoke<void>(0x693A5C6D6734085B, posX, posY, posZ); } // 0x693A5C6D6734085B 0x841800B3 b323
	static void GET_MOBILE_PHONE_POSITION(Vector3* position) { return invoke<void>(0x584FDFDA48805B86, position); } // 0x584FDFDA48805B86 0xB2E1E1A0 b323
	 // If bool Toggle = true so the mobile is hide to screen.
	 // If bool Toggle = false so the mobile is show to screen.
	static void SCRIPT_IS_MOVING_MOBILE_PHONE_OFFSCREEN(BOOL toggle) { return invoke<void>(0xF511F759238A5122, toggle); } // 0xF511F759238A5122 0x29828690 b323
	 // This one is weird and seems to return a TRUE state regardless of whether the phone is visible on screen or tucked away.
	 // 
	 // 
	 // I can confirm the above. This function is hard-coded to always return 1.
	static BOOL CAN_PHONE_BE_SEEN_ON_SCREEN() { return invoke<BOOL>(0xC4E2813898C97A4B); } // 0xC4E2813898C97A4B 0x5F978584 b323
	 // For move the finger of player, the value of int goes 1 at 5.
	static void _CELL_CAM_MOVE_FINGER(int direction) { return invoke<void>(0x95C9E72F3D7DEC9B, direction); } // 0x95C9E72F3D7DEC9B b323
	static BOOL CELL_CAM_IS_CHAR_VISIBLE_NO_FACE_CHECK(Entity entity) { return invoke<BOOL>(0x439E9BC95B7E7FBE, entity); } // 0x439E9BC95B7E7FBE 0xBEA88097 b323
	static void GET_MOBILE_PHONE_RENDER_ID(int* renderId) { return invoke<void>(0xB4A53E05F68B6FA1, renderId); } // 0xB4A53E05F68B6FA1 0x88E4FECE b323
}

namespace MONEY
{
	 // index
	 // -------
	 // See function sub_1005 in am_boat_taxi.ysc
	 // 
	 // context
	 // ----------
	 // "BACKUP_VAGOS"
	 // "BACKUP_LOST"
	 // "BACKUP_FAMILIES"
	 // "HIRE_MUGGER"
	 // "HIRE_MERCENARY"
	 // "BUY_CARDROPOFF"
	 // "HELI_PICKUP"
	 // "BOAT_PICKUP"
	 // "CLEAR_WANTED"
	 // "HEAD_2_HEAD"
	 // "CHALLENGE"
	 // "SHARE_LAST_JOB"
	 // "DEFAULT"
	 // 
	 // reason
	 // ---------
	 // "NOTREACHTARGET"
	 // "TARGET_ESCAPE"
	 // "DELIVERY_FAIL"
	 // "NOT_USED"
	 // "TEAM_QUIT"
	 // "SERVER_ERROR"
	 // "RECEIVE_LJ_L"
	 // "CHALLENGE_PLAYER_LEFT"
	 // "DEFAULT"
	 // 
	 // unk
	 // -----
	 // Unknown bool value
	 // 
	 // 
	static void NETWORK_REFUND_CASH(int index, const char* context, const char* reason, BOOL unk) { return invoke<void>(0xF9C812CD7C46E817, index, context, reason, unk); } // 0xF9C812CD7C46E817 0x07C92F21 b323
	static BOOL NETWORK_MONEY_CAN_BET(int amount, BOOL p1, BOOL p2) { return invoke<BOOL>(0x81404F3DC124FE5B, amount, p1, p2); } // 0x81404F3DC124FE5B 0x8474E6F0 b323
	 // GTAO_CASINO_HOUSE
	 // GTAO_CASINO_INSIDETRACK
	 // GTAO_CASINO_LUCKYWHEEL
	 // GTAO_CASINO_BLACKJACK
	 // GTAO_CASINO_ROULETTE
	 // GTAO_CASINO_SLOTS
	 // GTAO_CASINO_PURCHASE_CHIPS
	 // 
	 // NETWORK_C*
	static BOOL _NETWORK_CASINO_CAN_USE_GAMBLING_TYPE(Hash hash) { return invoke<BOOL>(0x158C16F5E4CF41F8, hash); } // 0x158C16F5E4CF41F8 b1734
	 // Same as 0x394DCDB9E836B7A9.
	 // 
	 // NETWORK_C*
	static BOOL _NETWORK_CASINO_CAN_PURCHASE_CHIPS_WITH_PVC_2() { return invoke<BOOL>(0x8968D4D8C6C40C11); } // 0x8968D4D8C6C40C11 b1734
	 // NETWORK_C*
	static BOOL _NETWORK_CASINO_PURCHASE_CHIPS(int p0, int p1) { return invoke<BOOL>(0x3BD101471C7F9EEC, p0, p1); } // 0x3BD101471C7F9EEC b1734
	 // NETWORK_C*
	static BOOL _NETWORK_CASINO_SELL_CHIPS(int p0, int p1) { return invoke<BOOL>(0xED44897CB336F480, p0, p1); } // 0xED44897CB336F480 b1734
	static void NETWORK_EARN_FROM_IMPORT_EXPORT(int amount, Hash modelHash) { return invoke<void>(0xF92A014A634442D6, amount, modelHash); } // 0xF92A014A634442D6 0xF11FC458 b323
	static void NETWORK_EARN_FROM_HOLDUPS(int amount) { return invoke<void>(0x45B8154E077D9E4D, amount); } // 0x45B8154E077D9E4D 0xE6B90E9C b323
	static void NETWORK_EARN_FROM_PROPERTY(int amount, Hash propertyName) { return invoke<void>(0x849648349D77F5C5, amount, propertyName); } // 0x849648349D77F5C5 0x9BE4F7E1 b323
	 // DSPORT
	static void NETWORK_EARN_FROM_AI_TARGET_KILL(Any p0, Any p1) { return invoke<void>(0x515B4A22E4D3C6D7, p0, p1); } // 0x515B4A22E4D3C6D7 0x866004A8 b323
	 // Example for p1: "AM_DISTRACT_COPS"
	static void NETWORK_EARN_FROM_AMBIENT_JOB(int p0, const char* p1, Any* p2) { return invoke<void>(0xFB6DB092FBAE29E6, p0, p1, p2); } // 0xFB6DB092FBAE29E6 0xA14CC95D b323
	static void _0x0CB1BE0633C024A8(Any p0, Any p1, Any p2, Any p3) { return invoke<void>(0x0CB1BE0633C024A8, p0, p1, p2, p3); } // 0x0CB1BE0633C024A8 b573
	static void _NETWORK_EARN_FROM_CONTRABAND(int amount, Any p1) { return invoke<void>(0xECA658CE2A4E5A72, amount, p1); } // 0xECA658CE2A4E5A72 b757
	static void _0x6B7E4FB50D5F3D65(Any p0, Any p1, Any p2, Any p3, Any p4) { return invoke<void>(0x6B7E4FB50D5F3D65, p0, p1, p2, p3, p4); } // 0x6B7E4FB50D5F3D65 b1180
	static void _NETWORK_EARN_FROM_BUSINESS_PRODUCT(int amount, Any p1, Any p2, Any p3) { return invoke<void>(0x8586789730B10CAF, amount, p1, p2, p3); } // 0x8586789730B10CAF b877
	static void _NETWORK_EARN_FROM_SMUGGLING(int amount, Any p1, Any p2, Any p3) { return invoke<void>(0xDEE612F2D71B0308, amount, p1, p2, p3); } // 0xDEE612F2D71B0308 b1180
	static void _0xA75EAC69F59E96E7(Any p0) { return invoke<void>(0xA75EAC69F59E96E7, p0); } // 0xA75EAC69F59E96E7 b1493
	static void _0xC5156361F26E2212(Any p0) { return invoke<void>(0xC5156361F26E2212, p0); } // 0xC5156361F26E2212 b1493
	static void _0x0B39CF0D53F1C883(Any p0, Any p1, Any p2) { return invoke<void>(0x0B39CF0D53F1C883, p0, p1, p2); } // 0x0B39CF0D53F1C883 b1493
	static void _0x1FDA0AA679C9919B(Any p0) { return invoke<void>(0x1FDA0AA679C9919B, p0); } // 0x1FDA0AA679C9919B b1493
	static BOOL NETWORK_CAN_SPEND_MONEY(Any p0, BOOL p1, BOOL p2, BOOL p3, Any p4, Any p5) { return invoke<BOOL>(0xAB3CAA6B422164DA, p0, p1, p2, p3, p4, p5); } // 0xAB3CAA6B422164DA 0x5AA379D9 b323
	 // NETWORK_CAN_R??? or NETWORK_CAN_S???
	static BOOL _NETWORK_CAN_SPEND_MONEY_2(Any p0, BOOL p1, BOOL p2, BOOL p3, Any* p4, Any p5, Any p6) { return invoke<BOOL>(0x7303E27CC6532080, p0, p1, p2, p3, p4, p5, p6); } // 0x7303E27CC6532080 b323
	static void NETWORK_BUY_ITEM(int amount, Hash item, Any p2, Any p3, BOOL p4, const char* item_name, Any p6, Any p7, Any p8, BOOL p9) { return invoke<void>(0xF0077C797F66A355, amount, item, p2, p3, p4, item_name, p6, p7, p8, p9); } // 0xF0077C797F66A355 0xA07B6368 b323
	static void NETWORK_SPENT_TAXI(int amount, BOOL p1, BOOL p2) { return invoke<void>(0x17C3A7D31EAE39F9, amount, p1, p2); } // 0x17C3A7D31EAE39F9 0x1F3DB3E3 b323
	static void NETWORK_PAY_MATCH_ENTRY_FEE(int amount, const char* matchId, BOOL p2, BOOL p3) { return invoke<void>(0x9346E14F2AF74D46, amount, matchId, p2, p3); } // 0x9346E14F2AF74D46 0x224A3488 b323
	 // p1 = 0 (always)
	 // p2 = 1 (always)
	static void NETWORK_BUY_AIRSTRIKE(int cost, BOOL p1, BOOL p2) { return invoke<void>(0x763B4BD305338F19, cost, p1, p2); } // 0x763B4BD305338F19 0x40470683 b323
	 // p1 = 0 (always)
	 // p2 = 1 (always)
	static void NETWORK_BUY_HELI_STRIKE(int cost, BOOL p1, BOOL p2) { return invoke<void>(0x81AA4610E3FD3A69, cost, p1, p2); } // 0x81AA4610E3FD3A69 0x047547D4 b323
	static void NETWORK_SPENT_AMMO_DROP(Any p0, BOOL p1, BOOL p2) { return invoke<void>(0xB162DC95C0A3317B, p0, p1, p2); } // 0xB162DC95C0A3317B 0x4B643076 b323
	 // p1 is just an assumption. p2 was false and p3 was true.
	static void NETWORK_BUY_BOUNTY(int amount, Player victim, BOOL p2, BOOL p3) { return invoke<void>(0x7B718E197453F2D9, amount, victim, p2, p3); } // 0x7B718E197453F2D9 0xCB89CBE0 b323
	static void NETWORK_BUY_PROPERTY(int cost, Hash propertyName, BOOL p2, BOOL p3) { return invoke<void>(0x650A08A280870AF6, cost, propertyName, p2, p3); } // 0x650A08A280870AF6 0x7D479AAB b323
	static void NETWORK_SPENT_HELI_PICKUP(Any p0, BOOL p1, BOOL p2) { return invoke<void>(0x7BF1D73DB2ECA492, p0, p1, p2); } // 0x7BF1D73DB2ECA492 0x27EEBCAB b323
	static void NETWORK_SPENT_BOAT_PICKUP(Any p0, BOOL p1, BOOL p2) { return invoke<void>(0x524EE43A37232C00, p0, p1, p2); } // 0x524EE43A37232C00 0xB241CABD b323
	static void NETWORK_SPENT_BULL_SHARK(Any p0, BOOL p1, BOOL p2) { return invoke<void>(0xA6DD8458CE24012C, p0, p1, p2); } // 0xA6DD8458CE24012C 0xDE7D398C b323
	 // Only used once in a script (am_contact_requests)
	 // p1 = 0
	 // p2 = 1
	static void NETWORK_SPENT_HIRE_MUGGER(Any p0, BOOL p1, BOOL p2) { return invoke<void>(0xE404BFB981665BF0, p0, p1, p2); } // 0xE404BFB981665BF0 0xE792C4A5 b323
	static void NETWORK_SPENT_HIRE_MERCENARY(Any p0, BOOL p1, BOOL p2) { return invoke<void>(0xE7B80E2BF9D80BD6, p0, p1, p2); } // 0xE7B80E2BF9D80BD6 0x99CF02C4 b323
	static void NETWORK_SPENT_BUY_WANTEDLEVEL(Any p0, Any* p1, BOOL p2, BOOL p3) { return invoke<void>(0xE1B13771A843C4F6, p0, p1, p2, p3); } // 0xE1B13771A843C4F6 0xE7CB4F95 b323
	static void NETWORK_SPENT_BUY_OFFTHERADAR(Any p0, BOOL p1, BOOL p2) { return invoke<void>(0xA628A745E2275C5D, p0, p1, p2); } // 0xA628A745E2275C5D 0x20DDCF2F b323
	static void NETWORK_SPENT_BUY_REVEAL_PLAYERS(Any p0, BOOL p1, BOOL p2) { return invoke<void>(0x6E176F1B18BC0637, p0, p1, p2); } // 0x6E176F1B18BC0637 0x2F7836E2 b323
	static void NETWORK_SPENT_HOLDUPS(Any p0, BOOL p1, BOOL p2) { return invoke<void>(0xD9B86B9872039763, p0, p1, p2); } // 0xD9B86B9872039763 0x1B3803B1 b323
	static void NETWORK_SPENT_BUY_PASSIVE_MODE(Any p0, BOOL p1, BOOL p2) { return invoke<void>(0x6D3A430D1A809179, p0, p1, p2); } // 0x6D3A430D1A809179 0x7E97C92C b323
	static void NETWORK_SPENT_PROSTITUTES(Any p0, BOOL p1, BOOL p2) { return invoke<void>(0xB21B89501CFAC79E, p0, p1, p2); } // 0xB21B89501CFAC79E 0x78436D07 b323
	static void NETWORK_SPENT_CALL_PLAYER(Any p0, Any* p1, BOOL p2, BOOL p3) { return invoke<void>(0xACDE7185B374177C, p0, p1, p2, p3); } // 0xACDE7185B374177C 0x1A89B5FC b323
	static void NETWORK_SPENT_NO_COPS(Any p0, BOOL p1, BOOL p2) { return invoke<void>(0xD5BB406F4E04019F, p0, p1, p2); } // 0xD5BB406F4E04019F 0x2E51C61C b323
	static void NETWORK_SPENT_REQUEST_JOB(Any p0, BOOL p1, BOOL p2) { return invoke<void>(0x8204DA7934DF3155, p0, p1, p2); } // 0x8204DA7934DF3155 0xD57A5125 b323
	static void NETWORK_SPENT_REQUEST_HEIST(Any p0, BOOL p1, BOOL p2) { return invoke<void>(0x9D26502BB97BFE62, p0, p1, p2); } // 0x9D26502BB97BFE62 0xF4287778 b323
	 // The first parameter is the amount spent which is store in a global when this native is called. The global returns 10. Which is the price for both rides.
	 // 
	 // The last 3 parameters are, 
	 // 2,0,1 in the am_ferriswheel.c
	 // 1,0,1 in the am_rollercoaster.c
	 // 
	static void NETWORK_BUY_FAIRGROUND_RIDE(int amount, Any p1, BOOL p2, BOOL p3) { return invoke<void>(0x8A7B3952DD64D2B5, amount, p1, p2, p3); } // 0x8A7B3952DD64D2B5 0xD9622D64 b323
	static void _NETWORK_BUY_CONTRABAND(int p0, int p1, Hash p2, BOOL p3, BOOL p4) { return invoke<void>(0x30FD873ECE50E9F6, p0, p1, p2, p3, p4); } // 0x30FD873ECE50E9F6 b757
	static void _0x0D30EB83668E63C5(Any p0, Any p1, Any p2, Any p3) { return invoke<void>(0x0D30EB83668E63C5, p0, p1, p2, p3); } // 0x0D30EB83668E63C5 b757
	static void _0xE23ADC6FCB1F29AE(Any p0, Any p1, Any p2) { return invoke<void>(0xE23ADC6FCB1F29AE, p0, p1, p2); } // 0xE23ADC6FCB1F29AE b757
	static void _0x0FE8E1FCD2B86B33(Any p0, Any p1, Any p2, Any p3) { return invoke<void>(0x0FE8E1FCD2B86B33, p0, p1, p2, p3); } // 0x0FE8E1FCD2B86B33 b757
	static void _0x5BCDE0F640C773D2(Any p0, Any p1, Any p2, Any p3) { return invoke<void>(0x5BCDE0F640C773D2, p0, p1, p2, p3); } // 0x5BCDE0F640C773D2 b877
	static void _0x6FD97159FE3C971A(Any p0, Any p1, Any p2, Any p3) { return invoke<void>(0x6FD97159FE3C971A, p0, p1, p2, p3); } // 0x6FD97159FE3C971A b877
	static void _0x675D19C6067CAE08(Any p0, Any p1, Any p2, Any p3) { return invoke<void>(0x675D19C6067CAE08, p0, p1, p2, p3); } // 0x675D19C6067CAE08 b877
	static void _0xA51B086B0B2C0F7A(Any p0, Any p1, Any p2, Any p3) { return invoke<void>(0xA51B086B0B2C0F7A, p0, p1, p2, p3); } // 0xA51B086B0B2C0F7A b877
	static void _0x0035BB914316F1E3(Any p0, Any p1, Any p2, Any p3) { return invoke<void>(0x0035BB914316F1E3, p0, p1, p2, p3); } // 0x0035BB914316F1E3 b877
	static void _NETWORK_EARN_FROM_GANGOPS_JOBS_PREP_PARTICIPATION(int amount) { return invoke<void>(0xED26584F6BDCBBFD, amount); } // 0xED26584F6BDCBBFD b1290
	static int NETWORK_GET_VC_BANK_BALANCE() { return invoke<int>(0x76EF28DA05EA395A); } // 0x76EF28DA05EA395A 0x16184FB5 b323
	static int NETWORK_GET_VC_WALLET_BALANCE(int characterSlot) { return invoke<int>(0xA40F9C2623F6A8B5, characterSlot); } // 0xA40F9C2623F6A8B5 0x4F5B781C b323
	static int NETWORK_GET_EVC_BALANCE() { return invoke<int>(0x5D1E75F91C07DEE5); } // 0x5D1E75F91C07DEE5 0xF1EDB7F4 b323
	static const char* NETWORK_GET_STRING_BANK_BALANCE() { return invoke<const char*>(0xA6FA3979BED01B81); } // 0xA6FA3979BED01B81 0xAA7EA3BD b323
	 // Does nothing and always returns 0.
	static int WITHDRAW_VC(int amount) { return invoke<int>(0xF70EFA14FE091429, amount); } // 0xF70EFA14FE091429 0x8B755993 b323
	 // Does nothing and always returns false.
	static BOOL DEPOSIT_VC(int amount) { return invoke<BOOL>(0xE260E0BB9CD995AC, amount); } // 0xE260E0BB9CD995AC 0x8F266745 b323
	 // This function is hard-coded to always return 1.
	static BOOL _0xE154B48B68EF72BC(Any p0) { return invoke<BOOL>(0xE154B48B68EF72BC, p0); } // 0xE154B48B68EF72BC 0x531E4892 b323
	 // This function is hard-coded to always return 1.
	static BOOL _0x6FCF8DDEA146C45B(Any p0) { return invoke<BOOL>(0x6FCF8DDEA146C45B, p0); } // 0x6FCF8DDEA146C45B 0xB96C7ABE b323
}

namespace NETSHOPPING
{
	static BOOL _NET_GAMESERVER_USE_SERVER_TRANSACTIONS() { return invoke<BOOL>(0x7D2708796355B20B); } // 0x7D2708796355B20B b1290
	static BOOL _NET_GAMESERVER_CATALOG_ITEM_EXISTS(const char* name) { return invoke<BOOL>(0xBD4D7EAF8A30F637, name); } // 0xBD4D7EAF8A30F637 b323
	static BOOL _NET_GAMESERVER_CATALOG_ITEM_EXISTS_HASH(Hash hash) { return invoke<BOOL>(0x247F0F73A182EA0B, hash); } // 0x247F0F73A182EA0B b323
	 // bool is always true in game scripts
	static int NET_GAMESERVER_GET_PRICE(Hash itemHash, Hash categoryHash, BOOL p2) { return invoke<int>(0xC27009422FCCA88D, itemHash, categoryHash, p2); } // 0xC27009422FCCA88D b323
	static BOOL NET_GAMESERVER_IS_SESSION_VALID(int charSlot) { return invoke<BOOL>(0xB24F0944DA203D9E, charSlot); } // 0xB24F0944DA203D9E b323
	static BOOL NET_GAMESERVER_IS_SESSION_REFRESH_PENDING() { return invoke<BOOL>(0x810E8431C0614BF9); } // 0x810E8431C0614BF9 b323
	static BOOL _0x613F125BA3BD2EB9() { return invoke<BOOL>(0x613F125BA3BD2EB9); } // 0x613F125BA3BD2EB9 b372
	static BOOL _NET_GAMESERVER_GET_TRANSACTION_MANAGER_DATA(int* p0, BOOL* p1) { return invoke<BOOL>(0x897433D292B44130, p0, p1); } // 0x897433D292B44130 b323
	static BOOL NET_GAMESERVER_BASKET_START(int* transactionId, Hash categoryHash, Hash actionHash, int flags) { return invoke<BOOL>(0x279F08B1A4B29B7E, transactionId, categoryHash, actionHash, flags); } // 0x279F08B1A4B29B7E b323
	static BOOL _NET_GAMESERVER_BASKET_DELETE() { return invoke<BOOL>(0xFA336E7F40C0A0D0); } // 0xFA336E7F40C0A0D0 b372
	static BOOL NET_GAMESERVER_BASKET_END() { return invoke<BOOL>(0xA65568121DF2EA26); } // 0xA65568121DF2EA26 b323
	static BOOL NET_GAMESERVER_BASKET_ADD_ITEM(Any* itemData, int quantity) { return invoke<BOOL>(0xF30980718C8ED876, itemData, quantity); } // 0xF30980718C8ED876 b323
	static BOOL NET_GAMESERVER_BASKET_IS_FULL() { return invoke<BOOL>(0x27F76CC6C55AD30E); } // 0x27F76CC6C55AD30E b323
	static BOOL NET_GAMESERVER_CHECKOUT_START(int transactionId) { return invoke<BOOL>(0x39BE7CEA8D9CC8E6, transactionId); } // 0x39BE7CEA8D9CC8E6 b323
	static BOOL NET_GAMESERVER_BEGIN_SERVICE(int* transactionId, Hash categoryHash, Hash itemHash, Hash actionTypeHash, int value, int flags) { return invoke<BOOL>(0x3C5FD37B5499582E, transactionId, categoryHash, itemHash, actionTypeHash, value, flags); } // 0x3C5FD37B5499582E b323
	static BOOL NET_GAMESERVER_END_SERVICE(int transactionId) { return invoke<BOOL>(0xE2A99A9B524BEFFF, transactionId); } // 0xE2A99A9B524BEFFF b323
	static BOOL _NET_GAMESERVER_TRANSFER_BANK_TO_WALLET(int charSlot, int amount) { return invoke<BOOL>(0xD47A2C1BA117471D, charSlot, amount); } // 0xD47A2C1BA117471D b323
	static BOOL _NET_GAMESERVER_TRANSFER_WALLET_TO_BANK(int charSlot, int amount) { return invoke<BOOL>(0xC2F7FE5309181C7D, charSlot, amount); } // 0xC2F7FE5309181C7D b323
	 // Same as 0x350AA5EBC03D3BD2
	static int _NET_GAMESERVER_TRANSFER_CASH_GET_STATUS() { return invoke<int>(0x23789E777D14CE44); } // 0x23789E777D14CE44 b323
	 // Same as 0x23789E777D14CE44
	static int _NET_GAMESERVER_TRANSFER_CASH_GET_STATUS_2() { return invoke<int>(0x350AA5EBC03D3BD2); } // 0x350AA5EBC03D3BD2 b323
	 // Used to be NETWORK_SHOP_CASH_TRANSFER_SET_TELEMETRY_NONCE_SEED
	static BOOL _NET_GAMESERVER_TRANSFER_CASH_SET_TELEMETRY_NONCE_SEED() { return invoke<BOOL>(0x498C1E05CE5F7877); } // 0x498C1E05CE5F7877 b323
	static BOOL NET_GAMESERVER_SET_TELEMETRY_NONCE_SEED(int p0) { return invoke<BOOL>(0x9507D4271988E1AE, p0); } // 0x9507D4271988E1AE b323
}

namespace NETWORK
{
	 // Online version is defined here: update\update.rpf\common\data\version.txt
	 // 
	 // Example:
	 // 
	 // [ONLINE_VERSION_NUMBER]
	 // 1.33
	 // 
	 // _GET_ONLINE_VERSION() will return "1.33"
	static const char* _GET_ONLINE_VERSION() { return invoke<const char*>(0xFCA9373EF340AC0A); } // 0xFCA9373EF340AC0A b323
	 // Returns whether the player is signed into Social Club.
	static BOOL NETWORK_IS_SIGNED_IN() { return invoke<BOOL>(0x054354A99211EB96); } // 0x054354A99211EB96 0xADD0B40F b323
	 // Returns whether the game is not in offline mode.
	 // 
	 // seemed not to work for some ppl
	static BOOL NETWORK_IS_SIGNED_ONLINE() { return invoke<BOOL>(0x1077788E268557C2); } // 0x1077788E268557C2 0x6E5BDCE2 b323
	 // MulleDK19: This function is hard-coded to always return 1.
	static BOOL _0xBD545D44CCE70597() { return invoke<BOOL>(0xBD545D44CCE70597); } // 0xBD545D44CCE70597 b323
	 // MulleDK19: This function is hard-coded to always return 0.
	static Any _0x74FB3E29E6D10FA9() { return invoke<Any>(0x74FB3E29E6D10FA9); } // 0x74FB3E29E6D10FA9 b323
	 // Returns whether the signed-in user has valid Rockstar Online Services (ROS) credentials.
	static BOOL NETWORK_HAS_VALID_ROS_CREDENTIALS() { return invoke<BOOL>(0x85443FF4C328F53B); } // 0x85443FF4C328F53B 0x3FB40673 b323
	 // NETWORK_IS_*
	 // 
	 // Seems to be related to PlayStation
	static BOOL _0x8D11E61A4ABF49CC() { return invoke<BOOL>(0x8D11E61A4ABF49CC); } // 0x8D11E61A4ABF49CC 0xBDC8F63E b323
	static BOOL NETWORK_IS_CLOUD_AVAILABLE() { return invoke<BOOL>(0x9A4CF4F48AD77302); } // 0x9A4CF4F48AD77302 0xC7FF5AFC b323
	static BOOL NETWORK_HAS_SOCIAL_CLUB_ACCOUNT() { return invoke<BOOL>(0x67A5589628E0CFF6); } // 0x67A5589628E0CFF6 0x66EC713F b323
	static BOOL NETWORK_ARE_SOCIAL_CLUB_POLICIES_CURRENT() { return invoke<BOOL>(0xBA9775570DB788CF); } // 0xBA9775570DB788CF 0x358D1D77 b323
	 // If you are host, returns true else returns false.
	static BOOL NETWORK_IS_HOST() { return invoke<BOOL>(0x8DB296B814EDDA07); } // 0x8DB296B814EDDA07 0xE46AC10F b323
	static BOOL NETWORK_HAVE_ONLINE_PRIVILEGES() { return invoke<BOOL>(0x25CB5A9F37BFD063); } // 0x25CB5A9F37BFD063 0xEF63BFDF b323
	static BOOL _NETWORK_HAS_AGE_RESTRICTED_PROFILE() { return invoke<BOOL>(0x1353F87E89946207); } // 0x1353F87E89946207 b323
	static BOOL NETWORK_HAVE_USER_CONTENT_PRIVILEGES(Any p0) { return invoke<BOOL>(0x72D918C99BCACC54, p0); } // 0x72D918C99BCACC54 0x1F88819D b323
	static BOOL _0xAEEF48CDF5B6CE7C(Any p0, Any p1) { return invoke<BOOL>(0xAEEF48CDF5B6CE7C, p0, p1); } // 0xAEEF48CDF5B6CE7C 0x2D817A5E b323
	static BOOL _0x78321BEA235FD8CD(Any p0, BOOL p1) { return invoke<BOOL>(0x78321BEA235FD8CD, p0, p1); } // 0x78321BEA235FD8CD b323
	static BOOL NETWORK_CHECK_USER_CONTENT_PRIVILEGES(int p0, int p1, BOOL p2) { return invoke<BOOL>(0x595F028698072DD9, p0, p1, p2); } // 0x595F028698072DD9 0xBB54AA3D b323
	static BOOL _0x83F28CE49FBBFFBA(Any p0, Any p1, BOOL p2) { return invoke<BOOL>(0x83F28CE49FBBFFBA, p0, p1, p2); } // 0x83F28CE49FBBFFBA b323
	static int NETWORK_GET_AGE_GROUP() { return invoke<int>(0x9614B71F8ADB982B); } // 0x9614B71F8ADB982B 0xAB07CBBE b323
	static Any _0x0CF6CC51AA18F0F8(Any p0, Any p1, Any p2) { return invoke<Any>(0x0CF6CC51AA18F0F8, p0, p1, p2); } // 0x0CF6CC51AA18F0F8 b1180
	static void _0x1F7BC3539F9E0224() { return invoke<void>(0x1F7BC3539F9E0224); } // 0x1F7BC3539F9E0224 b1180
	static BOOL _NETWORK_HAVE_ONLINE_PRIVILEGE_2() { return invoke<BOOL>(0x5EA784D197556507); } // 0x5EA784D197556507 b323
	static void _0x83FE8D7229593017() { return invoke<void>(0x83FE8D7229593017); } // 0x83FE8D7229593017 b323
	static BOOL NETWORK_CAN_BAIL() { return invoke<BOOL>(0x580CE4438479CC61); } // 0x580CE4438479CC61 0x60E1FEDF b323
	static void NETWORK_BAIL(int p0, int p1, int p2) { return invoke<void>(0x95914459A87EBA28, p0, p1, p2); } // 0x95914459A87EBA28 0x87D79A04 b323
	static void _NETWORK_TRANSITION_TRACK(Hash hash, int p1, int p2, int state, int p4) { return invoke<void>(0xC3BFED92026A2AAD, hash, p1, p2, state, p4); } // 0xC3BFED92026A2AAD b617
	 // 11 - Need to download tunables.
	 // 12 - Need to download background script.
	 // 
	 // Returns 1 if the multiplayer is loaded, otherwhise 0.
	static BOOL NETWORK_CAN_ACCESS_MULTIPLAYER(int* loadingState) { return invoke<BOOL>(0xAF50DA1A3F8B1BA4, loadingState); } // 0xAF50DA1A3F8B1BA4 0xA520B982 b323
	static BOOL NETWORK_SESSION_IS_CLOSED_FRIENDS() { return invoke<BOOL>(0xFBCFA2EA2E206890); } // 0xFBCFA2EA2E206890 0x56E75FE4 b323
	static BOOL NETWORK_SESSION_IS_CLOSED_CREW() { return invoke<BOOL>(0x74732C6CA90DA2B4); } // 0x74732C6CA90DA2B4 0xA95299B9 b323
	static BOOL NETWORK_SESSION_IS_SOLO() { return invoke<BOOL>(0xF3929C2379B60CCE); } // 0xF3929C2379B60CCE 0x3D2C1916 b323
	static BOOL NETWORK_SESSION_IS_PRIVATE() { return invoke<BOOL>(0xCEF70AA5B3F89BA1); } // 0xCEF70AA5B3F89BA1 0xDB67785D b323
	static void _0x4811BBAC21C5FCD5(Any p0) { return invoke<void>(0x4811BBAC21C5FCD5, p0); } // 0x4811BBAC21C5FCD5 0xE5961511 b323
	static void _0x5539C3EBF104A53A(BOOL p0) { return invoke<void>(0x5539C3EBF104A53A, p0); } // 0x5539C3EBF104A53A 0xAE396263 b323
	static void _0x702BC4D605522539(Any p0) { return invoke<void>(0x702BC4D605522539, p0); } // 0x702BC4D605522539 0x913FD7D6 b323
	 // NETWORK_SESSION_IS_*
	static BOOL _0xD313DE83394AF134() { return invoke<BOOL>(0xD313DE83394AF134); } // 0xD313DE83394AF134 0x3EA9D44C b323
	static void NETWORK_BLOCK_INVITES(BOOL toggle) { return invoke<void>(0x34F9E9049454A7A0, toggle); } // 0x34F9E9049454A7A0 0xD156FD1A b323
	static void NETWORK_BLOCK_JOIN_QUEUE_INVITES(BOOL toggle) { return invoke<void>(0xCFEB8AF24FC1D0BB, toggle); } // 0xCFEB8AF24FC1D0BB 0x8AB4890B b323
	static BOOL NETWORK_IS_GAME_IN_PROGRESS() { return invoke<BOOL>(0x10FAB35428CCC9D7); } // 0x10FAB35428CCC9D7 0x09B88E3E b323
	static BOOL NETWORK_IS_SESSION_ACTIVE() { return invoke<BOOL>(0xD83C2B94E7508980); } // 0xD83C2B94E7508980 0x715CB8C4 b323
	static BOOL NETWORK_IS_IN_SESSION() { return invoke<BOOL>(0xCA97246103B63917); } // 0xCA97246103B63917 0x4BC4105E b323
	static BOOL NETWORK_SESSION_IS_VISIBLE() { return invoke<BOOL>(0xBA416D68C631496A); } // 0xBA416D68C631496A 0x4977AC28 b323
	static void NETWORK_SESSION_BLOCK_JOIN_REQUESTS(BOOL toggle) { return invoke<void>(0xA73667484D7037C3, toggle); } // 0xA73667484D7037C3 0xE6EEF8AF b323
	static void NETWORK_SESSION_VOICE_HOST() { return invoke<void>(0x9C1556705F864230); } // 0x9C1556705F864230 0x345C2980 b323
	static void NETWORK_SESSION_VOICE_LEAVE() { return invoke<void>(0x6793E42BE02B575D); } // 0x6793E42BE02B575D 0xE566C7DA b323
	 // Only one occurence in the scripts:
	 // 
	 // auto sub_cb43(auto a_0, auto a_1) {
	 //     if (g_2594CB._f1) {
	 //         if (NETWORK::_855BC38818F6F684()) {
	 //             NETWORK::_ABD5E88B8A2D3DB2(&a_0._fB93);
	 //             g_2594CB._f14/*{13}*/ = a_0._fB93;
	 //             g_2594CB._f4/*"64"*/ = a_1;
	 //             return 1;
	 //         }
	 //     }
	 //     return 0;
	 // }
	 // 
	 // other:
	 // looks like it passes a player in the paramater
	 // 
	 // Contains string "NETWORK_VOICE_CONNECT_TO_PLAYER" in ida
	static void NETWORK_SESSION_VOICE_CONNECT_TO_PLAYER(Any* p0) { return invoke<void>(0xABD5E88B8A2D3DB2, p0); } // 0xABD5E88B8A2D3DB2 0x9DFD89E6 b323
	static void NETWORK_SESSION_VOICE_RESPOND_TO_REQUEST(BOOL p0, int p1) { return invoke<void>(0x7F8413B7FC2AA6B9, p0, p1); } // 0x7F8413B7FC2AA6B9 0x075321B5 b323
	static BOOL NETWORK_SESSION_IS_IN_VOICE_SESSION() { return invoke<BOOL>(0x855BC38818F6F684); } // 0x855BC38818F6F684 0x60AA4AA1 b323
	static Any _0xB5D3453C98456528() { return invoke<Any>(0xB5D3453C98456528); } // 0xB5D3453C98456528 b323
	static BOOL NETWORK_SESSION_IS_VOICE_SESSION_BUSY() { return invoke<BOOL>(0xEF0912DDF7C4CB4B); } // 0xEF0912DDF7C4CB4B 0x132CA01E b323
	 // Message is limited to 64 characters.
	static BOOL NETWORK_SEND_TEXT_MESSAGE(const char* message, int* networkHandle) { return invoke<BOOL>(0x3A214F2EC889B100, message, networkHandle); } // 0x3A214F2EC889B100 0xAFFEA720 b323
	static void NETWORK_CLEAR_TRANSITION_CREATOR_HANDLE() { return invoke<void>(0xFB3272229A82C759); } // 0xFB3272229A82C759 0x8BB336F7 b323
	static BOOL NETWORK_LEAVE_TRANSITION() { return invoke<BOOL>(0xD23A1A815D21DB19); } // 0xD23A1A815D21DB19 0x3A3599B7 b323
	static void NETWORK_BAIL_TRANSITION(int p0, int p1, int p2) { return invoke<void>(0xEAA572036990CD1B, p0, p1, p2); } // 0xEAA572036990CD1B 0xB59D74CA b323
	static BOOL NETWORK_IS_IN_TRANSITION() { return invoke<BOOL>(0x68049AEFF83D8F0A); } // 0x68049AEFF83D8F0A 0xC3CDB626 b323
	static BOOL NETWORK_IS_TRANSITION_STARTED() { return invoke<BOOL>(0x53FA83401D9C07FE); } // 0x53FA83401D9C07FE 0x7917E111 b323
	static BOOL NETWORK_IS_TRANSITION_BUSY() { return invoke<BOOL>(0x520F3282A53D26B7); } // 0x520F3282A53D26B7 0xA357A2C6 b323
	static BOOL NETWORK_IS_TRANSITION_MATCHMAKING() { return invoke<BOOL>(0x292564C735375EDF); } // 0x292564C735375EDF 0x8262C70E b323
	 // NETWORK_IS_TRANSITION_*
	static BOOL _0xC571D0E77D8BBC29() { return invoke<BOOL>(0xC571D0E77D8BBC29); } // 0xC571D0E77D8BBC29 0x4F4BB300 b323
	static BOOL NETWORK_HAS_PLAYER_STARTED_TRANSITION(Player player) { return invoke<BOOL>(0x9AC9CCBFA8C29795, player); } // 0x9AC9CCBFA8C29795 0x4ABD1E59 b323
	static BOOL NETWORK_IS_ACTIVITY_SESSION() { return invoke<BOOL>(0x05095437424397FA); } // 0x05095437424397FA 0x577DAA8A b323
	 // Does nothing. It's just a nullsub.
	static void _0x4A9FDE3A5A6D0437(BOOL toggle) { return invoke<void>(0x4A9FDE3A5A6D0437, toggle); } // 0x4A9FDE3A5A6D0437 0x18F03AFD b323
	static Any _0x742B58F723233ED9(Any p0) { return invoke<Any>(0x742B58F723233ED9, p0); } // 0x742B58F723233ED9 0x5E832444 b323
	static int NETWORK_GET_NUM_PRESENCE_INVITES() { return invoke<int>(0xCEFA968912D0F78D); } // 0xCEFA968912D0F78D 0x3FDA00F3 b323
	static BOOL NETWORK_ACCEPT_PRESENCE_INVITE(Any p0) { return invoke<BOOL>(0xFA91550DF9318B22, p0); } // 0xFA91550DF9318B22 0xE5DA4CED b323
	static BOOL NETWORK_REMOVE_PRESENCE_INVITE(Any p0) { return invoke<BOOL>(0xF0210268DB0974B1, p0); } // 0xF0210268DB0974B1 0x93C665FA b323
	static Any NETWORK_GET_PRESENCE_INVITE_ID(Any p0) { return invoke<Any>(0xDFF09646E12EC386, p0); } // 0xDFF09646E12EC386 0xD50DF46C b323
	static Any NETWORK_GET_PRESENCE_INVITE_INVITER(Any p0) { return invoke<Any>(0x4962CC4AA2F345B7, p0); } // 0x4962CC4AA2F345B7 0x19EC65D9 b323
	static BOOL NETWORK_GET_PRESENCE_INVITE_HANDLE(Any p0, Any* p1) { return invoke<BOOL>(0x38D5B0FEBB086F75, p0, p1); } // 0x38D5B0FEBB086F75 0xB2451429 b323
	static Any NETWORK_GET_PRESENCE_INVITE_SESSION_ID(Any p0) { return invoke<Any>(0x26E1CD96B0903D60, p0); } // 0x26E1CD96B0903D60 0xC5E0C989 b323
	static Any NETWORK_GET_PRESENCE_INVITE_CONTENT_ID(Any p0) { return invoke<Any>(0x24409FC4C55CB22D, p0); } // 0x24409FC4C55CB22D 0xA4302183 b323
	static Any NETWORK_GET_PRESENCE_INVITE_PLAYLIST_LENGTH(Any p0) { return invoke<Any>(0xD39B3FFF8FFDD5BF, p0); } // 0xD39B3FFF8FFDD5BF 0x51B2D848 b323
	static Any NETWORK_GET_PRESENCE_INVITE_PLAYLIST_CURRENT(Any p0) { return invoke<Any>(0x728C4CC7920CD102, p0); } // 0x728C4CC7920CD102 0x4677C656 b323
	static BOOL NETWORK_GET_PRESENCE_INVITE_FROM_ADMIN(Any p0) { return invoke<BOOL>(0x3DBF2DF0AEB7D289, p0); } // 0x3DBF2DF0AEB7D289 0xF5E3401C b323
	static BOOL NETWORK_GET_PRESENCE_INVITE_IS_TOURNAMENT(Any p0) { return invoke<BOOL>(0x8806CEBFABD3CE05, p0); } // 0x8806CEBFABD3CE05 0x7D593B4C b323
	 // Hardcoded to return false.
	static BOOL NETWORK_IS_IN_PLATFORM_PARTY() { return invoke<BOOL>(0x2FC5650B0271CB57); } // 0x2FC5650B0271CB57 0xA812B6CB b323
	 // Hardcoded to return false.
	static BOOL NETWORK_IS_IN_PLATFORM_PARTY_CHAT() { return invoke<BOOL>(0xFD8B834A8BA05048); } // 0xFD8B834A8BA05048 0xC6609191 b323
	static BOOL NETWORK_PLAYER_IS_CHEATER() { return invoke<BOOL>(0x655B91F1495A9090); } // 0x655B91F1495A9090 0xA51DC214 b323
	 // p1 is always 0
	static void NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(int lobbySize, BOOL p1, int playerId) { return invoke<void>(0x1CA59E306ECB80A5, lobbySize, p1, playerId); } // 0x1CA59E306ECB80A5 0x470810ED b323
	static BOOL _NETWORK_IS_THIS_SCRIPT_MARKED(Any p0, BOOL p1, Any p2) { return invoke<BOOL>(0xD1110739EEADB592, p0, p1, p2); } // 0xD1110739EEADB592 b323
	static BOOL NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT() { return invoke<BOOL>(0x2910669969E9535E); } // 0x2910669969E9535E 0xD9BF6549 b323
	 // Seems to always return 0, but it's used in quite a few loops.
	 // 
	 // for (num3 = 0; num3 < NETWORK::0xCCD8C02D(); num3++)
	 //     {
	 //         if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::0x98F3B274(num3)) != 0)
	 //         {
	 //             var num5 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::0x98F3B274(num3));
	static int NETWORK_GET_MAX_NUM_PARTICIPANTS() { return invoke<int>(0xA6C90FBC38E395EE); } // 0xA6C90FBC38E395EE 0xCCD8C02D b323
	static int NETWORK_GET_NUM_PARTICIPANTS() { return invoke<int>(0x18D0456E86604654); } // 0x18D0456E86604654 0x3E25A3C5 b323
	static int NETWORK_GET_SCRIPT_STATUS() { return invoke<int>(0x57D158647A6BFABF); } // 0x57D158647A6BFABF 0x2BE9235A b323
	static void NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(int* vars, int numVars) { return invoke<void>(0x3E9B2F01C50DF595, vars, numVars); } // 0x3E9B2F01C50DF595 0xDAF3B0AE b323
	static void NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(int* vars, int numVars) { return invoke<void>(0x3364AA97340CA215, vars, numVars); } // 0x3364AA97340CA215 0xBE3D32B4 b323
	static void NETWORK_FINISH_BROADCASTING_DATA() { return invoke<void>(0x64F62AFB081E260D); } // 0x64F62AFB081E260D 0xA71A1D2A b323
	 // NETWORK_HAS_*
	static BOOL _0x5D10B3795F3FC886() { return invoke<BOOL>(0x5D10B3795F3FC886); } // 0x5D10B3795F3FC886 0x0B739F53 b323
	static int NETWORK_GET_PLAYER_INDEX(Player player) { return invoke<int>(0x24FB80D107371267, player); } // 0x24FB80D107371267 0xBE1C1506 b323
	static int NETWORK_GET_PARTICIPANT_INDEX(int index) { return invoke<int>(0x1B84DF6AF2A46938, index); } // 0x1B84DF6AF2A46938 0xC4D91094 b323
	 // Returns the Player associated to a given Ped when in an online session.
	static Player NETWORK_GET_PLAYER_INDEX_FROM_PED(Ped ped) { return invoke<Player>(0x6C0E2E0125610278, ped); } // 0x6C0E2E0125610278 0x40DBF464 b323
	 // Returns the amount of players connected in the current session. Only works when connected to a session/server.
	static int NETWORK_GET_NUM_CONNECTED_PLAYERS() { return invoke<int>(0xA4A79DD2D9600654); } // 0xA4A79DD2D9600654 0xF7952E62 b323
	static BOOL NETWORK_IS_PLAYER_CONNECTED(Player player) { return invoke<BOOL>(0x93DC1BE4E1ABE9D1, player); } // 0x93DC1BE4E1ABE9D1 0x168EE2C2 b323
	static int NETWORK_GET_TOTAL_NUM_PLAYERS() { return invoke<int>(0xCF61D4B4702EE9EB); } // 0xCF61D4B4702EE9EB 0xF4F13B06 b323
	static BOOL NETWORK_IS_PARTICIPANT_ACTIVE(int p0) { return invoke<BOOL>(0x6FF8FF40B6357D45, p0); } // 0x6FF8FF40B6357D45 0x4E2C348B b323
	static BOOL NETWORK_IS_PLAYER_ACTIVE(Player player) { return invoke<BOOL>(0xB8DFD30D6973E135, player); } // 0xB8DFD30D6973E135 0x43657B17 b323
	static BOOL NETWORK_IS_PLAYER_A_PARTICIPANT(Player player) { return invoke<BOOL>(0x3CA58F6CB7CBD784, player); } // 0x3CA58F6CB7CBD784 0xB08B6992 b323
	static BOOL NETWORK_IS_HOST_OF_THIS_SCRIPT() { return invoke<BOOL>(0x83CD99A1E6061AB5); } // 0x83CD99A1E6061AB5 0x6970BA94 b323
	static Player NETWORK_GET_HOST_OF_THIS_SCRIPT() { return invoke<Player>(0xC7B4D79B01FA7A5C); } // 0xC7B4D79B01FA7A5C 0x89EA7B54 b323
	 // scriptName examples:
	 // "freemode", "AM_CR_SecurityVan", ...
	 // 
	 // Most of the time, these values are used:
	 // p1 = -1
	 // p2 = 0
	static Player NETWORK_GET_HOST_OF_SCRIPT(const char* scriptName, int p1, int p2) { return invoke<Player>(0x1D6A14F1F9A736FC, scriptName, p1, p2); } // 0x1D6A14F1F9A736FC 0x9C95D0BB b323
	static void NETWORK_SET_MISSION_FINISHED() { return invoke<void>(0x3B3D11CD9FFCDFC9); } // 0x3B3D11CD9FFCDFC9 0x3083FAD7 b323
	static BOOL NETWORK_IS_SCRIPT_ACTIVE(const char* scriptName, Player player, BOOL p2, Any p3) { return invoke<BOOL>(0x9D40DF90FAD26098, scriptName, player, p2, p3); } // 0x9D40DF90FAD26098 0x4A65250C b323
	static int NETWORK_GET_NUM_SCRIPT_PARTICIPANTS(Any* p0, Any p1, Any p2) { return invoke<int>(0x3658E8CD94FC121A, p0, p1, p2); } // 0x3658E8CD94FC121A 0x8F7D9F46 b323
	static Any _0x638A3A81733086DB() { return invoke<Any>(0x638A3A81733086DB); } // 0x638A3A81733086DB 0xDB8B5D71 b323
	static void _0x2302C0264EA58D31() { return invoke<void>(0x2302C0264EA58D31); } // 0x2302C0264EA58D31 0x8DCFE77D b323
	 // Has something to do with a host request.
	 // 
	 // NETWORK_RE*
	static void _0x741A3D8380319A81() { return invoke<void>(0x741A3D8380319A81); } // 0x741A3D8380319A81 0x331D9A27 b323
	 // Return the local Participant ID
	static Player PARTICIPANT_ID() { return invoke<Player>(0x90986E8876CE0A83); } // 0x90986E8876CE0A83 0x9C35A221 b323
	 // Return the local Participant ID.
	 // 
	 // This native is exactly the same as 'PARTICIPANT_ID' native.
	static int PARTICIPANT_ID_TO_INT() { return invoke<int>(0x57A3BDDAD8E5AA0A); } // 0x57A3BDDAD8E5AA0A 0x907498B0 b323
	static int NETWORK_GET_DESTROYER_OF_NETWORK_ID(int netId, Hash* weaponHash) { return invoke<int>(0x7A1ADEEF01740A24, netId, weaponHash); } // 0x7A1ADEEF01740A24 0x4FCA6436 b323
	static Any _0x83660B734994124D(Any p0, Any p1, Any p2) { return invoke<Any>(0x83660B734994124D, p0, p1, p2); } // 0x83660B734994124D b463
	static BOOL _NETWORK_GET_DESTROYER_OF_ENTITY(Any p0, Any p1, Hash* weaponHash) { return invoke<BOOL>(0x4CACA84440FA26F6, p0, p1, weaponHash); } // 0x4CACA84440FA26F6 0x28A45454 b323
	 // NETWORK_HAS_*
	static BOOL _0xB07D3185E11657A5(Entity entity) { return invoke<BOOL>(0xB07D3185E11657A5, entity); } // 0xB07D3185E11657A5 0xEDA68956 b323
	static int NETWORK_GET_NETWORK_ID_FROM_ENTITY(Entity entity) { return invoke<int>(0xA11700682F3AD45C, entity); } // 0xA11700682F3AD45C 0x9E35DAB6 b323
	static Entity NETWORK_GET_ENTITY_FROM_NETWORK_ID(int netId) { return invoke<Entity>(0xCE4E5D9B0A4FF560, netId); } // 0xCE4E5D9B0A4FF560 0x5B912C3F b323
	static BOOL NETWORK_GET_ENTITY_IS_NETWORKED(Entity entity) { return invoke<BOOL>(0xC7827959479DCC78, entity); } // 0xC7827959479DCC78 0xD7F934F4 b323
	static BOOL NETWORK_GET_ENTITY_IS_LOCAL(Entity entity) { return invoke<BOOL>(0x0991549DE4D64762, entity); } // 0x0991549DE4D64762 0x813353ED b323
	static void NETWORK_REGISTER_ENTITY_AS_NETWORKED(Entity entity) { return invoke<void>(0x06FAACD625D80CAA, entity); } // 0x06FAACD625D80CAA 0x31A630A4 b323
	static BOOL NETWORK_DOES_NETWORK_ID_EXIST(int netId) { return invoke<BOOL>(0x38CE16C96BD11344, netId); } // 0x38CE16C96BD11344 0xB8D2C99E b323
	static BOOL NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(int netId) { return invoke<BOOL>(0x18A47D074708FD68, netId); } // 0x18A47D074708FD68 0x1E2E3177 b323
	static BOOL NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(int netId) { return invoke<BOOL>(0xA670B3662FAFFBD0, netId); } // 0xA670B3662FAFFBD0 0x9262A60A b323
	static BOOL NETWORK_HAS_CONTROL_OF_NETWORK_ID(int netId) { return invoke<BOOL>(0x4D36070FE0215186, netId); } // 0x4D36070FE0215186 0x92E77D21 b323
	static BOOL NETWORK_REQUEST_CONTROL_OF_ENTITY(Entity entity) { return invoke<BOOL>(0xB69317BF5E782347, entity); } // 0xB69317BF5E782347 0xA05FEBD7 b323
	static BOOL NETWORK_HAS_CONTROL_OF_ENTITY(Entity entity) { return invoke<BOOL>(0x01BF60A500E28887, entity); } // 0x01BF60A500E28887 0x005FD797 b323
	 // calls from vehicle to net.
	 // 
	static int VEH_TO_NET(Vehicle vehicle) { return invoke<int>(0xB4C94523F023419C, vehicle); } // 0xB4C94523F023419C 0xF17634EB b323
	 // gets the network id of a ped
	static int PED_TO_NET(Ped ped) { return invoke<int>(0x0EDEC3C276198689, ped); } // 0x0EDEC3C276198689 0x86A0B759 b323
	 // Lets objects spawn online simply do it like this:
	 // 
	 // int createdObject = OBJ_TO_NET(CREATE_OBJECT_NO_OFFSET(oball, pCoords.x, pCoords.y, pCoords.z, 1, 0, 0));
	static int OBJ_TO_NET(Object object) { return invoke<int>(0x99BFDC94A603E541, object); } // 0x99BFDC94A603E541 0x1E05F29F b323
	static Vehicle NET_TO_VEH(int netHandle) { return invoke<Vehicle>(0x367B936610BA360C, netHandle); } // 0x367B936610BA360C 0x7E02FAEA b323
	 // gets the ped id of a network id
	static Ped NET_TO_PED(int netHandle) { return invoke<Ped>(0xBDCD95FC216A8B3E, netHandle); } // 0xBDCD95FC216A8B3E 0x87717DD4 b323
	 // gets the object id of a network id
	static Object NET_TO_OBJ(int netHandle) { return invoke<Object>(0xD8515F5FEA14CB3F, netHandle); } // 0xD8515F5FEA14CB3F 0x27AA14D8 b323
	 // gets the entity id of a network id
	static Entity NET_TO_ENT(int netHandle) { return invoke<Entity>(0xBFFEAB45A9A9094A, netHandle); } // 0xBFFEAB45A9A9094A 0x5E149683 b323
	 // Retrieves the local player's NetworkHandle* and stores it in the given buffer.
	 // 
	 // * Currently unknown struct
	static void NETWORK_GET_LOCAL_HANDLE(int* networkHandle, int bufferSize) { return invoke<void>(0xE86051786B66CD8E, networkHandle, bufferSize); } // 0xE86051786B66CD8E 0x08023B16 b323
	 // Returns a NetworkHandle* from the specified user ID and stores it in a given buffer.
	 // 
	 // * Currently unknown struct
	static void NETWORK_HANDLE_FROM_USER_ID(const char* userId, int* networkHandle, int bufferSize) { return invoke<void>(0xDCD51DD8F87AEC5C, userId, networkHandle, bufferSize); } // 0xDCD51DD8F87AEC5C 0x74C2C1B7 b323
	 // Returns a NetworkHandle* from the specified member ID and stores it in a given buffer.
	 // 
	 // * Currently unknown struct
	static void NETWORK_HANDLE_FROM_MEMBER_ID(const char* memberId, int* networkHandle, int bufferSize) { return invoke<void>(0xA0FD21BED61E5C4C, memberId, networkHandle, bufferSize); } // 0xA0FD21BED61E5C4C 0x9BFC9FE2 b323
	 // Returns a handle to networkHandle* from the specified player handle and stores it in a given buffer.
	 // 
	 // * Currently unknown struct
	 // 
	 // Example:
	 // std::vector<UINT64> GetPlayerNetworkHandle(Player player) {
	 //     const int size = 13;
	 //     uint64_t *buffer = std::make_unique<uint64_t[]>(size).get();
	 //     NETWORK::NETWORK_HANDLE_FROM_PLAYER(player, reinterpret_cast<int *>(buffer), 13);
	 //     for (int i = 0; i < size; i++) {
	 //         Log::Msg("networkhandle[%i]: %llx", i, buffer[i]);
	 //     }
	 //     std::vector<UINT64> result(buffer, buffer + sizeof(buffer));
	 //     return result;
	 // }
	static void NETWORK_HANDLE_FROM_PLAYER(Player player, int* networkHandle, int bufferSize) { return invoke<void>(0x388EB2B86C73B6B3, player, networkHandle, bufferSize); } // 0x388EB2B86C73B6B3 0xD3498917 b323
	static Hash NETWORK_HASH_FROM_PLAYER_HANDLE(Player player) { return invoke<Hash>(0xBC1D768F2F5D6C05, player); } // 0xBC1D768F2F5D6C05 0xF8D7AF3B b323
	static void NETWORK_HANDLE_FROM_FRIEND(int friendIndex, int* networkHandle, int bufferSize) { return invoke<void>(0xD45CB817D7E177D2, friendIndex, networkHandle, bufferSize); } // 0xD45CB817D7E177D2 0x3B0BB3A3 b323
	static BOOL NETWORK_GAMERTAG_FROM_HANDLE_START(int* networkHandle) { return invoke<BOOL>(0x9F0C0A981D73FA56, networkHandle); } // 0x9F0C0A981D73FA56 0xEBA00C2A b323
	static BOOL NETWORK_GAMERTAG_FROM_HANDLE_PENDING() { return invoke<BOOL>(0xB071E27958EF4CF0); } // 0xB071E27958EF4CF0 0xF000828E b323
	static BOOL NETWORK_GAMERTAG_FROM_HANDLE_SUCCEEDED() { return invoke<BOOL>(0xFD00798DBA7523DD); } // 0xFD00798DBA7523DD 0x89C2B5EA b323
	static const char* NETWORK_GET_GAMERTAG_FROM_HANDLE(int* networkHandle) { return invoke<const char*>(0x426141162EBE5CDB, networkHandle); } // 0x426141162EBE5CDB 0xA18A1B26 b323
	static int _0xD66C9E72B3CC4982(Any* p0, Any p1) { return invoke<int>(0xD66C9E72B3CC4982, p0, p1); } // 0xD66C9E72B3CC4982 b323
	 // MulleDK19: This function is hard-coded to always return 0.
	static Any _0x58CC181719256197(Any p0, Any p1, Any p2) { return invoke<Any>(0x58CC181719256197, p0, p1, p2); } // 0x58CC181719256197 b323
	static BOOL NETWORK_ARE_HANDLES_THE_SAME(int* netHandle1, int* netHandle2) { return invoke<BOOL>(0x57DBA049E110F217, netHandle1, netHandle2); } // 0x57DBA049E110F217 0x45975AE3 b323
	static BOOL NETWORK_IS_HANDLE_VALID(int* networkHandle, int bufferSize) { return invoke<BOOL>(0x6F79B93B0A8E4133, networkHandle, bufferSize); } // 0x6F79B93B0A8E4133 0xF0996C6E b323
	static Player NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(int* networkHandle) { return invoke<Player>(0xCE5F689CF5A0A49D, networkHandle); } // 0xCE5F689CF5A0A49D 0x2E96EF1E b323
	static const char* NETWORK_MEMBER_ID_FROM_GAMER_HANDLE(int* networkHandle) { return invoke<const char*>(0xC82630132081BB6F, networkHandle); } // 0xC82630132081BB6F 0x62EF0A63 b323
	static BOOL NETWORK_IS_GAMER_IN_MY_SESSION(int* networkHandle) { return invoke<BOOL>(0x0F10B05DDF8D16E9, networkHandle); } // 0x0F10B05DDF8D16E9 0x59127716 b323
	 // Example:
	 // 
	 // int playerHandle; 
	 // NETWORK_HANDLE_FROM_PLAYER(selectedPlayer, &playerHandle, 13);
	 // NETWORK_SHOW_PROFILE_UI(&playerHandle);
	static void NETWORK_SHOW_PROFILE_UI(int* networkHandle) { return invoke<void>(0x859ED1CEA343FCA8, networkHandle); } // 0x859ED1CEA343FCA8 0xF00A20B0 b323
	 // Takes a 24 char buffer. Returns the buffer or "**Invalid**" if CPlayerInfo of the given player cannot be retrieved or the player doesn't exist.
	static const char* NETWORK_PLAYER_GET_USERID(Player player, int* userID) { return invoke<const char*>(0x4927FC39CD0869A0, player, userID); } // 0x4927FC39CD0869A0 0x4EC0D983 b323
	 // Checks if a specific value (BYTE) in CPlayerInfo is nonzero.
	 // Returns always false in Singleplayer.
	 // 
	 // No longer used for dev checks since first mods were released on PS3 & 360.
	 // R* now checks with the is_dlc_present native for the dlc hash 2532323046,
	 // if that is present it will unlock dev stuff.
	static BOOL NETWORK_PLAYER_IS_ROCKSTAR_DEV(Player player) { return invoke<BOOL>(0x544ABDDA3B409B6D, player); } // 0x544ABDDA3B409B6D 0xF6659045 b323
	static int _NETWORK_GET_ENTITY_NET_SCRIPT_ID(Entity entity) { return invoke<int>(0x815F18AD865F057F, entity); } // 0x815F18AD865F057F b463
	static int NETWORK_GET_MAX_FRIENDS() { return invoke<int>(0xAFEBB0D5D8F687D2); } // 0xAFEBB0D5D8F687D2 0x048171BC b323
	static int NETWORK_GET_FRIEND_COUNT() { return invoke<int>(0x203F1CFD823B27A4); } // 0x203F1CFD823B27A4 0xA396ACDE b323
	static const char* NETWORK_GET_FRIEND_NAME(int friendIndex) { return invoke<const char*>(0xE11EBBB2A783FE8B, friendIndex); } // 0xE11EBBB2A783FE8B 0x97420B6D b323
	static const char* _NETWORK_GET_FRIEND_NAME_FROM_INDEX(int friendIndex) { return invoke<const char*>(0x4164F227D052E293, friendIndex); } // 0x4164F227D052E293 b323
	static BOOL NETWORK_IS_FRIEND_ONLINE(const char* name) { return invoke<BOOL>(0x425A44533437B64D, name); } // 0x425A44533437B64D 0xE0A42430 b323
	static BOOL NETWORK_IS_FRIEND_HANDLE_ONLINE(int* networkHandle) { return invoke<BOOL>(0x87EB7A3FFCB314DB, networkHandle); } // 0x87EB7A3FFCB314DB b323
	 // In scripts R* calls 'NETWORK_GET_FRIEND_NAME' in this param.
	static BOOL NETWORK_IS_FRIEND_IN_SAME_TITLE(const char* friendName) { return invoke<BOOL>(0x2EA9A3BEDF3F17B8, friendName); } // 0x2EA9A3BEDF3F17B8 0xC54365C2 b323
	static BOOL NETWORK_IS_FRIEND(int* networkHandle) { return invoke<BOOL>(0x1A24A179F9B31654, networkHandle); } // 0x1A24A179F9B31654 0x2DA4C282 b323
	static Any NETWORK_IS_ADDING_FRIEND() { return invoke<Any>(0x6EA101606F6E4D81); } // 0x6EA101606F6E4D81 0xBB7EC8C4 b323
	static BOOL NETWORK_ADD_FRIEND(int* networkHandle, const char* message) { return invoke<BOOL>(0x8E02D73914064223, networkHandle, message); } // 0x8E02D73914064223 0x20E5B3EE b323
	static BOOL NETWORK_IS_FRIEND_INDEX_ONLINE(int friendIndex) { return invoke<BOOL>(0xBAD8F2A42B844821, friendIndex); } // 0xBAD8F2A42B844821 0x94AE7172 b323
	static void NETWORK_SET_PLAYER_IS_PASSIVE(BOOL toggle) { return invoke<void>(0x1B857666604B1A74, toggle); } // 0x1B857666604B1A74 0x76A9FEB6 b323
	static BOOL NETWORK_GET_PLAYER_OWNS_WAYPOINT(Player player) { return invoke<BOOL>(0x82377B65E943F72D, player); } // 0x82377B65E943F72D 0xB802B671 b323
	static void _0x4C2A9FDC22377075() { return invoke<void>(0x4C2A9FDC22377075); } // 0x4C2A9FDC22377075 b372
	static BOOL NETWORK_HAS_HEADSET() { return invoke<BOOL>(0xE870F9F1F7B4F1FA); } // 0xE870F9F1F7B4F1FA 0xA7DC5657 b323
	static BOOL NETWORK_IS_GAMER_TALKING(Any* networkHandle) { return invoke<BOOL>(0x71C33B22606CD88A, networkHandle); } // 0x71C33B22606CD88A 0x99B58DBC b323
	 // Same as NETWORK_CAN_COMMUNICATE_WITH_GAMER
	 // 
	 // NETWORK_CAN_*
	static BOOL _NETWORK_CAN_COMMUNICATE_WITH_GAMER_2(Any* networkHandle) { return invoke<BOOL>(0x8F5D1AD832AEB06C, networkHandle); } // 0x8F5D1AD832AEB06C b944
	static BOOL NETWORK_CAN_COMMUNICATE_WITH_GAMER(Any* networkHandle) { return invoke<BOOL>(0xA150A4F065806B1F, networkHandle); } // 0xA150A4F065806B1F 0xD05EB7F6 b323
	static BOOL NETWORK_IS_GAMER_MUTED_BY_ME(Any* networkHandle) { return invoke<BOOL>(0xCE60DE011B6C7978, networkHandle); } // 0xCE60DE011B6C7978 0x001B4046 b323
	static BOOL NETWORK_AM_I_MUTED_BY_GAMER(Any* networkHandle) { return invoke<BOOL>(0xDF02A2C93F1F26DA, networkHandle); } // 0xDF02A2C93F1F26DA 0x7685B333 b323
	static BOOL NETWORK_IS_GAMER_BLOCKED_BY_ME(Any* networkHandle) { return invoke<BOOL>(0xE944C4F5AF1B5883, networkHandle); } // 0xE944C4F5AF1B5883 0x3FDCC8D7 b323
	static BOOL NETWORK_AM_I_BLOCKED_BY_GAMER(Any* networkHandle) { return invoke<BOOL>(0x15337C7C268A27B2, networkHandle); } // 0x15337C7C268A27B2 0xD19B312C b323
	static BOOL NETWORK_CAN_VIEW_GAMER_USER_CONTENT(Any* networkHandle) { return invoke<BOOL>(0xB57A49545BA53CE7, networkHandle); } // 0xB57A49545BA53CE7 b323
	static BOOL NETWORK_HAS_VIEW_GAMER_USER_CONTENT_RESULT(Any* networkHandle) { return invoke<BOOL>(0xCCA4318E1AB03F1F, networkHandle); } // 0xCCA4318E1AB03F1F b323
	 // returns true if someone is screaming or talking in a microphone
	static BOOL NETWORK_IS_PLAYER_TALKING(Player player) { return invoke<BOOL>(0x031E11F3D447647E, player); } // 0x031E11F3D447647E 0xDA9FD9DB b323
	static BOOL NETWORK_PLAYER_HAS_HEADSET(Player player) { return invoke<BOOL>(0x3FB99A8B08D18FD6, player); } // 0x3FB99A8B08D18FD6 0x451FB6B6 b323
	static BOOL NETWORK_IS_PLAYER_MUTED_BY_ME(Player player) { return invoke<BOOL>(0x8C71288AE68EDE39, player); } // 0x8C71288AE68EDE39 0x7A21050E b323
	static BOOL NETWORK_AM_I_MUTED_BY_PLAYER(Player player) { return invoke<BOOL>(0x9D6981DFC91A8604, player); } // 0x9D6981DFC91A8604 0xE128F2B0 b323
	static BOOL NETWORK_IS_PLAYER_BLOCKED_BY_ME(Player player) { return invoke<BOOL>(0x57AF1F8E27483721, player); } // 0x57AF1F8E27483721 0xAE4F4560 b323
	static BOOL NETWORK_AM_I_BLOCKED_BY_PLAYER(Player player) { return invoke<BOOL>(0x87F395D957D4353D, player); } // 0x87F395D957D4353D 0x953EF45E b323
	static float NETWORK_GET_PLAYER_LOUDNESS(Player player) { return invoke<float>(0x21A1684A25C2867F, player); } // 0x21A1684A25C2867F 0xF2F67014 b323
	static void NETWORK_SET_TALKER_PROXIMITY(float value) { return invoke<void>(0xCBF12D65F95AD686, value); } // 0xCBF12D65F95AD686 0x67555C66 b323
	static float NETWORK_GET_TALKER_PROXIMITY() { return invoke<float>(0x84F0F13120B4E098); } // 0x84F0F13120B4E098 0x19991ADD b323
	static void NETWORK_SET_VOICE_ACTIVE(BOOL toggle) { return invoke<void>(0xBABEC9E69A91C57B, toggle); } // 0xBABEC9E69A91C57B 0x8011247F b323
	static void _0xCFEB46DCD7D8D5EB(BOOL p0) { return invoke<void>(0xCFEB46DCD7D8D5EB, p0); } // 0xCFEB46DCD7D8D5EB 0x1A3EA6CD b323
	static void NETWORK_SET_TEAM_ONLY_CHAT(BOOL toggle) { return invoke<void>(0xD5B4883AC32F24C3, toggle); } // 0xD5B4883AC32F24C3 0x3813019A b323
	static void _0x265559DA40B3F327(Any p0) { return invoke<void>(0x265559DA40B3F327, p0); } // 0x265559DA40B3F327 b573
	static void NETWORK_SET_OVERRIDE_SPECTATOR_MODE(BOOL toggle) { return invoke<void>(0x70DA3BF8DACD3210, toggle); } // 0x70DA3BF8DACD3210 0xA0FD42D3 b323
	 // Sets some voice chat related value.
	 // 
	 // NETWORK_SET_*
	static void _0x9D7AFCBF21C51712(BOOL toggle) { return invoke<void>(0x9D7AFCBF21C51712, toggle); } // 0x9D7AFCBF21C51712 0xE5219410 b323
	 // Could possibly bypass being muted or automatically muted
	static void NETWORK_OVERRIDE_CHAT_RESTRICTIONS(Player player, BOOL toggle) { return invoke<void>(0x3039AE5AD2C9C0C4, player, toggle); } // 0x3039AE5AD2C9C0C4 0x74EE2D8B b323
	static void NETWORK_OVERRIDE_SEND_RESTRICTIONS_ALL(BOOL toggle) { return invoke<void>(0x57B192B4D4AD23D5, toggle); } // 0x57B192B4D4AD23D5 0x2F98B405 b323
	static void NETWORK_OVERRIDE_RECEIVE_RESTRICTIONS_ALL(BOOL toggle) { return invoke<void>(0x0FF2862B61A58AF9, toggle); } // 0x0FF2862B61A58AF9 0x1BCD3DDF b323
	static void _0x5E3AA4CA2B6FB0EE(Any p0) { return invoke<void>(0x5E3AA4CA2B6FB0EE, p0); } // 0x5E3AA4CA2B6FB0EE 0x7BBEA8CF b323
	 // Same as _IS_TEXT_CHAT_ACTIVE, except it does not check if the text chat HUD component is initialized, and therefore may crash.
	 // 
	 // -(http://fivem.net)
	static BOOL _NETWORK_IS_TEXT_CHAT_ACTIVE() { return invoke<BOOL>(0x5FCF4D7069B09026); } // 0x5FCF4D7069B09026 b323
	static void NETWORK_SET_FRIENDLY_FIRE_OPTION(BOOL toggle) { return invoke<void>(0xF808475FA571D823, toggle); } // 0xF808475FA571D823 0x6BAF95FA b323
	 // This native does absolutely nothing, just a nullsub
	static void NETWORK_SET_RICH_PRESENCE(Any p0, Any p1, Any p2, Any p3) { return invoke<void>(0x1DCCACDCFC569362, p0, p1, p2, p3); } // 0x1DCCACDCFC569362 0x932A6CED b323
	 // This native does absolutely nothing, just a nullsub
	static void NETWORK_SET_RICH_PRESENCE_STRING(int p0, const char* textLabel) { return invoke<void>(0x3E200C2BCF4164EB, p0, textLabel); } // 0x3E200C2BCF4164EB 0x017E6777 b323
	static void _0xBF22E0F32968E967(Player player, BOOL p1) { return invoke<void>(0xBF22E0F32968E967, player, p1); } // 0xBF22E0F32968E967 0x22E03AD0 b323
	static BOOL NETWORK_CLAN_SERVICE_IS_VALID() { return invoke<BOOL>(0x579CCED0265D4896); } // 0x579CCED0265D4896 0xF5F4BD95 b323
	static BOOL NETWORK_CLAN_PLAYER_IS_ACTIVE(int* networkHandle) { return invoke<BOOL>(0xB124B57F571D8F18, networkHandle); } // 0xB124B57F571D8F18 0xAB8319A3 b323
	 // bufferSize is 35 in the scripts.
	 // 
	 // bufferSize is the elementCount of p0(desc), sizeof(p0) == 280 == p1*8 == 35 * 8, p2(netHandle) is obtained from NETWORK::NETWORK_HANDLE_FROM_PLAYER.  And no, I can't explain why 35 * sizeof(int) == 280 and not 140, but I'll get back to you on that.
	 // 
	 // the answer is: because p0 an int64_t* / int64_t[35].  and FYI p2 is an int64_t[13]
	 // 
	 // pastebin.com/cSZniHak
	static BOOL NETWORK_CLAN_PLAYER_GET_DESC(int* clanDesc, int bufferSize, int* networkHandle) { return invoke<BOOL>(0xEEE6EACBE8874FBA, clanDesc, bufferSize, networkHandle); } // 0xEEE6EACBE8874FBA 0x6EE4A282 b323
	 // bufferSize is 35 in the scripts.
	static BOOL NETWORK_CLAN_IS_ROCKSTAR_CLAN(int* clanDesc, int bufferSize) { return invoke<BOOL>(0x7543BB439F63792B, clanDesc, bufferSize); } // 0x7543BB439F63792B 0x54E79E9C b323
	 // bufferSize is 35 in the scripts.
	static void NETWORK_CLAN_GET_UI_FORMATTED_TAG(int* clanDesc, int bufferSize, char* formattedTag) { return invoke<void>(0xF45352426FF3A4F0, clanDesc, bufferSize, formattedTag); } // 0xF45352426FF3A4F0 0xF633805A b323
	static int NETWORK_CLAN_GET_LOCAL_MEMBERSHIPS_COUNT() { return invoke<int>(0x1F471B79ACC90BEF); } // 0x1F471B79ACC90BEF 0x807B3450 b323
	static BOOL NETWORK_CLAN_GET_MEMBERSHIP_DESC(int* memberDesc, int p1) { return invoke<BOOL>(0x48DE78AF2C8885B8, memberDesc, p1); } // 0x48DE78AF2C8885B8 0x3369DD1F b323
	static BOOL NETWORK_CLAN_JOIN(int clanDesc) { return invoke<BOOL>(0x9FAAA4F4FC71F87F, clanDesc); } // 0x9FAAA4F4FC71F87F 0x79C916C5 b323
	static BOOL NETWORK_CLAN_GET_EMBLEM_TXD_NAME(Any* netHandle, char* txdName) { return invoke<BOOL>(0x5835D9CD92E83184, netHandle, txdName); } // 0x5835D9CD92E83184 0xBA672146 b323
	static Any NETWORK_GET_PRIMARY_CLAN_DATA_CLEAR() { return invoke<Any>(0x9AA46BADAD0E27ED); } // 0x9AA46BADAD0E27ED 0xE22445DA b323
	static void NETWORK_GET_PRIMARY_CLAN_DATA_CANCEL() { return invoke<void>(0x042E4B70B93E6054); } // 0x042E4B70B93E6054 0x455DDF5C b323
	static BOOL NETWORK_GET_PRIMARY_CLAN_DATA_START(Any* p0, Any p1) { return invoke<BOOL>(0xCE86D8191B762107, p0, p1); } // 0xCE86D8191B762107 0x89DB0EC7 b323
	static Any NETWORK_GET_PRIMARY_CLAN_DATA_PENDING() { return invoke<Any>(0xB5074DB804E28CE7); } // 0xB5074DB804E28CE7 0xA4EF02F3 b323
	static Any NETWORK_GET_PRIMARY_CLAN_DATA_SUCCESS() { return invoke<Any>(0x5B4F04F19376A0BA); } // 0x5B4F04F19376A0BA 0x068A054E b323
	static BOOL NETWORK_GET_PRIMARY_CLAN_DATA_NEW(Any* p0, Any* p1) { return invoke<BOOL>(0xC080FF658B2E41DA, p0, p1); } // 0xC080FF658B2E41DA 0x9B8631EB b323
	 // Whether or not another player is allowed to take control of the entity
	static void SET_NETWORK_ID_CAN_MIGRATE(int netId, BOOL toggle) { return invoke<void>(0x299EEB23175895FC, netId, toggle); } // 0x299EEB23175895FC 0x47C8E5FF b323
	static void SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(int netId, BOOL toggle) { return invoke<void>(0xE05E81A888FA63C8, netId, toggle); } // 0xE05E81A888FA63C8 0x68D486B2 b323
	 // not tested....
	static void _SET_NETWORK_ID_SYNC_TO_PLAYER(int netId, Player player, BOOL toggle) { return invoke<void>(0xA8A024587329F36A, netId, player, toggle); } // 0xA8A024587329F36A 0x4D15FDB1 b323
	 // if set to true other network players can't see it
	 // if set to false other network player can see it
	 // =========================================
	 // ^^ I attempted this by grabbing an object with GET_ENTITY_PLAYER_IS_FREE_AIMING_AT and setting this naive no matter the toggle he could still see it.
	 // 
	 // pc or last gen?
	 // 
	 // ^^ last-gen
	static void _NETWORK_SET_ENTITY_INVISIBLE_TO_NETWORK(Entity entity, BOOL toggle) { return invoke<void>(0xF1CA12B18AEF5298, entity, toggle); } // 0xF1CA12B18AEF5298 0x09CBC4B0 b323
	static void SET_NETWORK_CUTSCENE_ENTITIES(BOOL toggle) { return invoke<void>(0xAAA553E7DD28A457, toggle); } // 0xAAA553E7DD28A457 0xFD0F7EDD b323
	static void _0x3FA36981311FA4FF(int netId, BOOL state) { return invoke<void>(0x3FA36981311FA4FF, netId, state); } // 0x3FA36981311FA4FF 0x00AE4E17 b323
	static BOOL IS_NETWORK_ID_OWNED_BY_PARTICIPANT(int netId) { return invoke<BOOL>(0xA1607996431332DF, netId); } // 0xA1607996431332DF 0xEA5176C0 b323
	static void SET_LOCAL_PLAYER_VISIBLE_IN_CUTSCENE(BOOL p0, BOOL p1) { return invoke<void>(0xD1065D68947E7B6E, p0, p1); } // 0xD1065D68947E7B6E 0x59F3479B b323
	static void SET_LOCAL_PLAYER_INVISIBLE_LOCALLY(BOOL p0) { return invoke<void>(0xE5F773C1A1D9D168, p0); } // 0xE5F773C1A1D9D168 0x764F6222 b323
	static void SET_LOCAL_PLAYER_VISIBLE_LOCALLY(BOOL p0) { return invoke<void>(0x7619364C82D3BF14, p0); } // 0x7619364C82D3BF14 0x324B56DB b323
	static void SET_PLAYER_INVISIBLE_LOCALLY(Player player, BOOL toggle) { return invoke<void>(0x12B37D54667DB0B8, player, toggle); } // 0x12B37D54667DB0B8 0x18227209 b323
	static void SET_PLAYER_VISIBLE_LOCALLY(Player player, BOOL toggle) { return invoke<void>(0xFAA10F1FAFB11AF2, player, toggle); } // 0xFAA10F1FAFB11AF2 0xBA2BB4B4 b323
	 // Hardcoded to not work in SP.
	static void FADE_OUT_LOCAL_PLAYER(BOOL p0) { return invoke<void>(0x416DBD4CD6ED8DD2, p0); } // 0x416DBD4CD6ED8DD2 0x8FA7CEBD b323
	 // normal - transition like when your coming out of LSC
	 // slow - transition like when you walk into a mission
	 //  
	static void NETWORK_FADE_OUT_ENTITY(Entity entity, BOOL normal, BOOL slow) { return invoke<void>(0xDE564951F95E09ED, entity, normal, slow); } // 0xDE564951F95E09ED 0x47EDEE56 b323
	 // state - 0 does 5 fades
	 // state - 1 does 6 fades
	 // 
	 // p3: setting to 1 made vehicle fade in slower, probably "slow" as per NETWORK_FADE_OUT_ENTITY
	static void NETWORK_FADE_IN_ENTITY(Entity entity, BOOL state, Any p2) { return invoke<void>(0x1F4ED342ACEFE62D, entity, state, p2); } // 0x1F4ED342ACEFE62D 0x9B9FCD02 b323
	static BOOL NETWORK_IS_PLAYER_FADING(Player player) { return invoke<BOOL>(0x631DC5DFF4B110E3, player); } // 0x631DC5DFF4B110E3 0x065C597B b323
	static BOOL NETWORK_IS_ENTITY_FADING(Entity entity) { return invoke<BOOL>(0x422F32CC7E56ABAD, entity); } // 0x422F32CC7E56ABAD 0xB5087ACF b323
	static BOOL IS_PLAYER_IN_CUTSCENE(Player player) { return invoke<BOOL>(0xE73092F4157CD126, player); } // 0xE73092F4157CD126 0xE0A619BD b323
	static void SET_ENTITY_LOCALLY_INVISIBLE(Entity entity) { return invoke<void>(0xE135A9FF3F5D05D8, entity); } // 0xE135A9FF3F5D05D8 0x51ADCC5F b323
	static void ACTIVATE_DAMAGE_TRACKER_ON_NETWORK_ID(int netID, BOOL toggle) { return invoke<void>(0xD45B1FFCCD52FF19, netID, toggle); } // 0xD45B1FFCCD52FF19 0x95D07BA5 b323
	static BOOL IS_SPHERE_VISIBLE_TO_ANOTHER_MACHINE(float p0, float p1, float p2, float p3) { return invoke<BOOL>(0xD82CF8E64C8729D8, p0, p1, p2, p3); } // 0xD82CF8E64C8729D8 0x23C5274E b323
	static BOOL IS_SPHERE_VISIBLE_TO_PLAYER(Any p0, float p1, float p2, float p3, float p4) { return invoke<BOOL>(0xDC3A310219E5DA62, p0, p1, p2, p3, p4); } // 0xDC3A310219E5DA62 0xE9FCFB32 b323
	static void RESERVE_NETWORK_MISSION_OBJECTS(int amount) { return invoke<void>(0x4E5C93BD0C32FBF8, amount); } // 0x4E5C93BD0C32FBF8 0x391DF4F3 b323
	static void RESERVE_NETWORK_MISSION_PEDS(int amount) { return invoke<void>(0xB60FEBA45333D36F, amount); } // 0xB60FEBA45333D36F 0x54998C37 b323
	static void RESERVE_NETWORK_MISSION_VEHICLES(int amount) { return invoke<void>(0x76B02E21ED27A469, amount); } // 0x76B02E21ED27A469 0x5062875E b323
	static void _RESERVE_NETWORK_LOCAL_OBJECTS(Any p0) { return invoke<void>(0x797F9C5E661D920E, p0); } // 0x797F9C5E661D920E b1290
	static void _RESERVE_NETWORK_LOCAL_PEDS(Any p0) { return invoke<void>(0x2C8DF5D129595281, p0); } // 0x2C8DF5D129595281 b1493
	static BOOL CAN_REGISTER_MISSION_OBJECTS(int amount) { return invoke<BOOL>(0x800DD4721A8B008B, amount); } // 0x800DD4721A8B008B 0x7F85DFDE b323
	static BOOL CAN_REGISTER_MISSION_PEDS(int amount) { return invoke<BOOL>(0xBCBF4FEF9FA5D781, amount); } // 0xBCBF4FEF9FA5D781 0xCCAA5CE9 b323
	static BOOL CAN_REGISTER_MISSION_VEHICLES(int amount) { return invoke<BOOL>(0x7277F1F2E085EE74, amount); } // 0x7277F1F2E085EE74 0x818B6830 b323
	static BOOL CAN_REGISTER_MISSION_ENTITIES(int ped_amt, int vehicle_amt, int object_amt, int pickup_amt) { return invoke<BOOL>(0x69778E7564BADE6D, ped_amt, vehicle_amt, object_amt, pickup_amt); } // 0x69778E7564BADE6D 0x83794008 b323
	 // p0 appears to be for MP
	static int GET_NUM_RESERVED_MISSION_OBJECTS(BOOL p0, Any p1) { return invoke<int>(0xAA81B5F10BC43AC2, p0, p1); } // 0xAA81B5F10BC43AC2 0x16A80CD6 b323
	 // p0 appears to be for MP
	static int GET_NUM_RESERVED_MISSION_PEDS(BOOL p0, Any p1) { return invoke<int>(0x1F13D5AE5CB17E17, p0, p1); } // 0x1F13D5AE5CB17E17 0x6C25975C b323
	 // p0 appears to be for MP
	static int GET_NUM_RESERVED_MISSION_VEHICLES(BOOL p0, Any p1) { return invoke<int>(0xCF3A965906452031, p0, p1); } // 0xCF3A965906452031 0xA9A308F3 b323
	static int GET_NUM_CREATED_MISSION_PEDS(BOOL p0) { return invoke<int>(0xCB215C4B56A7FAE7, p0); } // 0xCB215C4B56A7FAE7 0xD8FEC4F8 b323
	static int GET_NUM_CREATED_MISSION_VEHICLES(BOOL p0) { return invoke<int>(0x0CD9AB83489430EA, p0); } // 0x0CD9AB83489430EA 0x20527695 b323
	static int GET_NETWORK_TIME() { return invoke<int>(0x7A5487FE9FAA6B48); } // 0x7A5487FE9FAA6B48 0x998103C2 b323
	static int GET_NETWORK_TIME_ACCURATE() { return invoke<int>(0x89023FBBF9200E9F); } // 0x89023FBBF9200E9F 0x98AA48E5 b323
	 // Adds the first argument to the second.
	static int GET_TIME_OFFSET(int timeA, int timeB) { return invoke<int>(0x017008CCDAD48503, timeA, timeB); } // 0x017008CCDAD48503 0x2E079AE6 b323
	 // Subtracts the second argument from the first, then returns whether the result is negative.
	static BOOL IS_TIME_LESS_THAN(int timeA, int timeB) { return invoke<BOOL>(0xCB2CF5148012C8D0, timeA, timeB); } // 0xCB2CF5148012C8D0 0x50EF8FC6 b323
	 // Subtracts the first argument from the second, then returns whether the result is negative.
	static BOOL IS_TIME_MORE_THAN(int timeA, int timeB) { return invoke<BOOL>(0xDE350F8651E4346C, timeA, timeB); } // 0xDE350F8651E4346C 0xBBB6DF61 b323
	 // Returns true if the two times are equal; otherwise returns false.
	static BOOL IS_TIME_EQUAL_TO(int timeA, int timeB) { return invoke<BOOL>(0xF5BC95857BD6D512, timeA, timeB); } // 0xF5BC95857BD6D512 0x8B4D1C06 b323
	 // Subtracts the second argument from the first.
	static int GET_TIME_DIFFERENCE(int timeA, int timeB) { return invoke<int>(0xA2C6FC031D46FFF0, timeA, timeB); } // 0xA2C6FC031D46FFF0 0x5666A837 b323
	static int GET_CLOUD_TIME_AS_INT() { return invoke<int>(0x9A73240B49945C76); } // 0x9A73240B49945C76 0xF2FDF2E0 b323
	 // Takes the specified time and writes it to the structure specified in the second argument.
	 // 
	 // struct date_time
	 // {
	 //     int year;
	 //     int PADDING1;
	 //     int month;
	 //     int PADDING2;
	 //     int day;
	 //     int PADDING3;
	 //     int hour;
	 //     int PADDING4;
	 //     int minute;
	 //     int PADDING5;
	 //     int second;
	 //     int PADDING6;
	 // };
	static void CONVERT_POSIX_TIME(int posixTime, Any* timeStructure) { return invoke<void>(0xAC97AF97FA68E5D5, posixTime, timeStructure); } // 0xAC97AF97FA68E5D5 0xBB7CCE49 b323
	static void NETWORK_SET_IN_SPECTATOR_MODE(BOOL toggle, Ped playerPed) { return invoke<void>(0x423DE3854BB50894, toggle, playerPed); } // 0x423DE3854BB50894 0x5C4C8458 b323
	static void NETWORK_SET_IN_SPECTATOR_MODE_EXTENDED(BOOL toggle, Ped playerPed, BOOL p2) { return invoke<void>(0x419594E137637120, toggle, playerPed, p2); } // 0x419594E137637120 0x54058F5F b323
	static void NETWORK_SET_IN_FREE_CAM_MODE(BOOL toggle) { return invoke<void>(0xFC18DB55AE19E046, toggle); } // 0xFC18DB55AE19E046 0xA7E36020 b323
	static BOOL NETWORK_IS_IN_SPECTATOR_MODE() { return invoke<BOOL>(0x048746E388762E11); } // 0x048746E388762E11 0x3EAD9DB8 b323
	static void NETWORK_SET_IN_MP_CUTSCENE(BOOL p0, BOOL p1) { return invoke<void>(0x9CA5DE655269FEC4, p0, p1); } // 0x9CA5DE655269FEC4 0x8434CB43 b323
	static BOOL NETWORK_IS_IN_MP_CUTSCENE() { return invoke<BOOL>(0x6CC27C9FA2040220); } // 0x6CC27C9FA2040220 0x4BB33316 b323
	static BOOL NETWORK_IS_PLAYER_IN_MP_CUTSCENE(Player player) { return invoke<BOOL>(0x63F9EE203C3619F2, player); } // 0x63F9EE203C3619F2 0x56F961E4 b323
	static void USE_PLAYER_COLOUR_INSTEAD_OF_TEAM_COLOUR(BOOL toggle, BOOL p1) { return invoke<void>(0x5FFE9B4144F9712F, toggle, p1); } // 0x5FFE9B4144F9712F 0x4DD46DAE b323
	 // IS_*
	static BOOL _0x21D04D7BC538C146(Entity entity) { return invoke<BOOL>(0x21D04D7BC538C146, entity); } // 0x21D04D7BC538C146 b323
	static int NETWORK_CREATE_SYNCHRONISED_SCENE(float x, float y, float z, float xRot, float yRot, float zRot, int p6, BOOL p7, BOOL p8, float p9, float p10, float p11) { return invoke<int>(0x7CD6BC4C2BBDD526, x, y, z, xRot, yRot, zRot, p6, p7, p8, p9, p10, p11); } // 0x7CD6BC4C2BBDD526 0xB06FE3FE b323
	static void NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(Ped ped, int netScene, const char* animDict, const char* animnName, float speed, float speedMultiplier, int duration, int flag, float playbackRate, Any p9) { return invoke<void>(0x742A637471BCECD9, ped, netScene, animDict, animnName, speed, speedMultiplier, duration, flag, playbackRate, p9); } // 0x742A637471BCECD9 0xB386713E b323
	static void NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(Entity entity, int netScene, const char* animDict, const char* animName, float speed, float speedMulitiplier, int flag) { return invoke<void>(0xF2404D68CBC855FA, entity, netScene, animDict, animName, speed, speedMulitiplier, flag); } // 0xF2404D68CBC855FA 0x10DD636C b323
	 // NETWORK_A*
	static void _0x45F35C0EDC33B03B(int netScene, Hash modelHash, float x, float y, float z, float p5, const char* p6, float p7, float p8, int flags) { return invoke<void>(0x45F35C0EDC33B03B, netScene, modelHash, x, y, z, p5, p6, p7, p8, flags); } // 0x45F35C0EDC33B03B b1734
	static void NETWORK_ATTACH_SYNCHRONISED_SCENE_TO_ENTITY(int netScene, Entity entity, int bone) { return invoke<void>(0x478DCBD2A98B705A, netScene, entity, bone); } // 0x478DCBD2A98B705A 0x3FE5B222 b323
	static void NETWORK_START_SYNCHRONISED_SCENE(int netScene) { return invoke<void>(0x9A1B3FCDB36C8697, netScene); } // 0x9A1B3FCDB36C8697 0xA9DFDC40 b323
	static void NETWORK_STOP_SYNCHRONISED_SCENE(int netScene) { return invoke<void>(0xC254481A4574CB2F, netScene); } // 0xC254481A4574CB2F 0x97B1CDF6 b323
	 // netScene to scene
	static int _NETWORK_CONVERT_SYNCHRONISED_SCENE_TO_SYNCHRONIZED_SCENE(int netScene) { return invoke<int>(0x02C40BF885C567B6, netScene); } // 0x02C40BF885C567B6 0x16AED87B b323
	static void _0xFB680D403909DC70(Any p0, Any p1) { return invoke<void>(0xFB680D403909DC70, p0, p1); } // 0xFB680D403909DC70 0xFFB2ADA1 b323
	static void NETWORK_END_TUTORIAL_SESSION() { return invoke<void>(0xD0AFAFF5A51D72F7); } // 0xD0AFAFF5A51D72F7 0xBA57E53E b323
	static BOOL NETWORK_IS_IN_TUTORIAL_SESSION() { return invoke<BOOL>(0xADA24309FE08DACF); } // 0xADA24309FE08DACF 0x34DD7B28 b323
	static BOOL NETWORK_IS_TUTORIAL_SESSION_CHANGE_PENDING() { return invoke<BOOL>(0x35F0B98A8387274D); } // 0x35F0B98A8387274D 0xA003C40B b323
	static int NETWORK_GET_PLAYER_TUTORIAL_SESSION_INSTANCE(Player player) { return invoke<int>(0x3B39236746714134, player); } // 0x3B39236746714134 0x5E1020CC b323
	 // NETWORK_ARE_*
	static BOOL _NETWORK_IS_PLAYER_EQUAL_TO_INDEX(Player player, int index) { return invoke<BOOL>(0x9DE986FC9A87C474, player, index); } // 0x9DE986FC9A87C474 0xE66A0B40 b323
	static BOOL NETWORK_IS_PLAYER_CONCEALED(Player player) { return invoke<BOOL>(0x919B3C98ED8292F9, player); } // 0x919B3C98ED8292F9 0xB0313590 b323
	 // Works in Singleplayer too.
	static void NETWORK_OVERRIDE_CLOCK_TIME(int Hours, int Minutes, int Seconds) { return invoke<void>(0xE679E3E06E363892, Hours, Minutes, Seconds); } // 0xE679E3E06E363892 0xC077BCD6 b323
	static void NETWORK_CLEAR_CLOCK_TIME_OVERRIDE() { return invoke<void>(0xD972DF67326F966E); } // 0xD972DF67326F966E 0xC4AEAF49 b323
	static BOOL NETWORK_IS_CLOCK_TIME_OVERRIDDEN() { return invoke<BOOL>(0xD7C95D322FF57522); } // 0xD7C95D322FF57522 0x2465296D b323
	static Any NETWORK_ADD_ENTITY_AREA(float p0, float p1, float p2, float p3, float p4, float p5) { return invoke<Any>(0x494C8FB299290269, p0, p1, p2, p3, p4, p5); } // 0x494C8FB299290269 0x51030E5B b323
	static BOOL NETWORK_REMOVE_ENTITY_AREA(Any p0) { return invoke<BOOL>(0x93CF869BAA0C4874, p0); } // 0x93CF869BAA0C4874 0xEAB97F25 b323
	static BOOL NETWORK_ENTITY_AREA_DOES_EXIST(Any p0) { return invoke<BOOL>(0xE64A3CA08DFA37A9, p0); } // 0xE64A3CA08DFA37A9 0x69956127 b323
	static BOOL _0x4DF7CFFF471A7FB1(Any p0) { return invoke<BOOL>(0x4DF7CFFF471A7FB1, p0); } // 0x4DF7CFFF471A7FB1 0xCB1CD6D3 b323
	static BOOL NETWORK_ENTITY_AREA_IS_OCCUPIED(Any p0) { return invoke<BOOL>(0x4A2D4E8BF4265B0F, p0); } // 0x4A2D4E8BF4265B0F 0xC6D53AA0 b323
	static void NETWORK_REQUEST_CLOUD_TUNABLES() { return invoke<void>(0x42FB3B532D526E6C); } // 0x42FB3B532D526E6C 0xD760CAD5 b323
	static BOOL NETWORK_ACCESS_TUNABLE_BOOL(const char* tunableContext, const char* tunableName) { return invoke<BOOL>(0xAA6A47A573ABB75A, tunableContext, tunableName); } // 0xAA6A47A573ABB75A 0x8A04E1FE b323
	static BOOL NETWORK_DOES_TUNABLE_EXIST_HASH(Hash tunableContext, Hash tunableName) { return invoke<BOOL>(0xE4E53E1419D81127, tunableContext, tunableName); } // 0xE4E53E1419D81127 0x25915CB9 b323
	static BOOL _NETWORK_ALLOCATE_TUNABLES_REGISTRATION_DATA_MAP() { return invoke<BOOL>(0xFAFC23AEE23868DB); } // 0xFAFC23AEE23868DB b393
	static BOOL NETWORK_ACCESS_TUNABLE_INT_HASH(Hash tunableContext, Hash tunableName, int* value) { return invoke<BOOL>(0x40FCE03E50E8DBE8, tunableContext, tunableName, value); } // 0x40FCE03E50E8DBE8 0xB2E83B75 b323
	static BOOL _NETWORK_REGISTER_TUNABLE_INT_HASH(Hash contextHash, Hash nameHash, int* value) { return invoke<BOOL>(0x3A8B55FDA4C8DDEF, contextHash, nameHash, value); } // 0x3A8B55FDA4C8DDEF b393
	static BOOL NETWORK_ACCESS_TUNABLE_FLOAT_HASH(Hash tunableContext, Hash tunableName, float* value) { return invoke<BOOL>(0x972BC203BBC4C4D5, tunableContext, tunableName, value); } // 0x972BC203BBC4C4D5 0x3972551F b323
	static BOOL _NETWORK_REGISTER_TUNABLE_FLOAT_HASH(Hash contextHash, Hash nameHash, float* value) { return invoke<BOOL>(0x1950DAE9848A4739, contextHash, nameHash, value); } // 0x1950DAE9848A4739 b393
	static BOOL NETWORK_ACCESS_TUNABLE_BOOL_HASH(Hash tunableContext, Hash tunableName) { return invoke<BOOL>(0xEA16B69D93D71A45, tunableContext, tunableName); } // 0xEA16B69D93D71A45 0x18867C61 b323
	static BOOL _NETWORK_REGISTER_TUNABLE_BOOL_HASH(Hash contextHash, Hash nameHash, BOOL* value) { return invoke<BOOL>(0x697F508861875B42, contextHash, nameHash, value); } // 0x697F508861875B42 b393
	 // Return the content modifier id (the tunables context if you want) of a specific content.
	 // 
	 // It takes the content hash (which is the mission id hash), and return the content modifier id, used as the tunables context.
	 // 
	 // The mission id can be found on the Social club, for example, 'socialclub.rockstargames.com/games/gtav/jobs/job/A8M6Bz8MLEC5xngvDCzGwA'
	 // 
	 // 'A8M6Bz8MLEC5xngvDCzGwA' is the mission id, so the game hash this and use it as the parameter for this native.
	 // 
	static int NETWORK_GET_CONTENT_MODIFIER_LIST_ID(Hash contentHash) { return invoke<int>(0x187382F8A3E0A6C3, contentHash); } // 0x187382F8A3E0A6C3 0xA78571CA b323
	static BOOL _0x0EDE326D47CD0F3E(Ped ped, Player player) { return invoke<BOOL>(0x0EDE326D47CD0F3E, ped, player); } // 0x0EDE326D47CD0F3E 0xBEB7281A b323
	 // In the console script dumps, this is only referenced once. 
	 // NETWORK::NETWORK_EXPLODE_VEHICLE(vehicle, 1, 0, 0);
	 // 
	 // ^^^^^ That must be PC script dumps? In X360 Script Dumps it is reference a few times with 2 differences in the parameters.
	 // Which as you see below is 1, 0, 0 + 1, 1, 0 + 1, 0, and a *param?
	 // 
	 // am_plane_takedown.c 
	 // network_explode_vehicle(net_to_veh(Local_40.imm_2), 1, 1, 0);
	 // 
	 // armenian2.c 
	 // network_explode_vehicle(Local_80[6 <2>], 1, 0, 0);
	 // 
	 // fm_horde_controler.c
	 // network_explode_vehicle(net_to_veh(*uParam0), 1, 0, *uParam0);
	 // 
	 // fm_mission_controller.c, has 6 hits so not going to list them.
	 // 
	 // Side note, setting the first parameter to 0 seems to mute sound or so?
	 // 
	 // Seems it's like ADD_EXPLOSION, etc. the first 2 params. The 3rd atm no need to worry since it always seems to be 0.
	 // 
	static void NETWORK_EXPLODE_VEHICLE(Vehicle vehicle, BOOL isAudible, BOOL isInvisible, BOOL p3) { return invoke<void>(0x301A42153C9AD707, vehicle, isAudible, isInvisible, p3); } // 0x301A42153C9AD707 0x0E1B38AE b323
	static void _0x2A5E0621DD815A9A(Any p0, Any p1, Any p2, Any p3) { return invoke<void>(0x2A5E0621DD815A9A, p0, p1, p2, p3); } // 0x2A5E0621DD815A9A b463
	static void NETWORK_OVERRIDE_COORDS_AND_HEADING(Ped ped, float x, float y, float z, float heading) { return invoke<void>(0xA7E30DE9272B6D49, ped, x, y, z, heading); } // 0xA7E30DE9272B6D49 0x644141C5 b323
	static BOOL IS_COMMERCE_DATA_VALID() { return invoke<BOOL>(0xEA14EEF5B7CD2C30); } // 0xEA14EEF5B7CD2C30 0xEEFC8A55 b323
	 // Does nothing (it's a nullsub).
	static void _0xB606E6CC59664972(Any p0) { return invoke<void>(0xB606E6CC59664972, p0); } // 0xB606E6CC59664972 0x866D1B67 b323
	 // IS_COMMERCE_*
	static BOOL _0x1D4DC17C38FEAFF0() { return invoke<BOOL>(0x1D4DC17C38FEAFF0); } // 0x1D4DC17C38FEAFF0 0xED4A272F b323
	static void OPEN_COMMERCE_STORE(const char* p0, const char* p1, int p2) { return invoke<void>(0x58C21165F6545892, p0, p1, p2); } // 0x58C21165F6545892 0x365C50EE b323
	static BOOL IS_COMMERCE_STORE_OPEN() { return invoke<BOOL>(0x2EAC52B4019E2782); } // 0x2EAC52B4019E2782 0x25E2DBA9 b323
	 // Access to the store for shark cards etc...
	static void SET_STORE_ENABLED(BOOL toggle) { return invoke<void>(0x9641A9FF718E9C5E, toggle); } // 0x9641A9FF718E9C5E 0xC1F6443B b323
	static BOOL IS_STORE_AVAILABLE_TO_USER() { return invoke<BOOL>(0x883D79C4071E18B3); } // 0x883D79C4071E18B3 0xD32FA11F b323
	 // RESET_*
	 // 
	 // sfink: related to: NETWORK_BAIL
	 // NETWORK_BAIL_TRANSITION
	 // NETWORK_JOIN_GROUP_ACTIVITY
	 // NETWORK_JOIN_TRANSITION
	 // NETWORK_LAUNCH_TRANSITION
	 // NETWORK_SESSION_HOST
	 // NETWORK_SESSION_HOST_CLOSED
	 // NETWORK_SESSION_HOST_FRIENDS_ONLY
	 // NETWORK_SESSION_HOST_SINGLE_PLAYER
	 // NETWORK_SESSION_VOICE_LEAVE
	static void _0x444C4525ECE0A4B9() { return invoke<void>(0x444C4525ECE0A4B9); } // 0x444C4525ECE0A4B9 0xCC7DCE24 b323
	 // IS_*
	static BOOL _0x59328EB08C5CEB2B() { return invoke<BOOL>(0x59328EB08C5CEB2B); } // 0x59328EB08C5CEB2B 0x70F6D3AD b323
	 // Checks some commerce stuff
	static int _0x754615490A029508() { return invoke<int>(0x754615490A029508); } // 0x754615490A029508 b1290
	 // Checks some commerce stuff
	static int _0x155467ACA0F55705() { return invoke<int>(0x155467ACA0F55705); } // 0x155467ACA0F55705 b1290
	static BOOL CLOUD_HAS_REQUEST_COMPLETED(int id) { return invoke<BOOL>(0x4C61B39930D045DA, id); } // 0x4C61B39930D045DA 0xBAF52DD8 b323
	static BOOL CLOUD_DID_REQUEST_SUCCEED(int id) { return invoke<BOOL>(0x3A3D5568AF297CD5, id); } // 0x3A3D5568AF297CD5 0x9B9AFFF1 b323
	 // MulleDK19: This function is hard-coded to always return 0.
	static Any _0x88B588B41FF7868E() { return invoke<Any>(0x88B588B41FF7868E); } // 0x88B588B41FF7868E b323
	 // MulleDK19: This function is hard-coded to always return 0.
	static Any _0x67FC09BC554A75E5() { return invoke<Any>(0x67FC09BC554A75E5); } // 0x67FC09BC554A75E5 b323
	 // This native does absolutely nothing, just a nullsub
	static void _CLEAR_LAUNCH_PARAMS() { return invoke<void>(0x966DD84FB6A46017); } // 0x966DD84FB6A46017 b323
	static Any _0x9FEDF86898F100E9() { return invoke<Any>(0x9FEDF86898F100E9); } // 0x9FEDF86898F100E9 0x798D6C27 b323
	static BOOL UGC_HAS_CREATE_FINISHED() { return invoke<BOOL>(0x5E24341A7F92A74B); } // 0x5E24341A7F92A74B 0xE69E8D0D b323
	static Any _0x24E4E51FC16305F9() { return invoke<Any>(0x24E4E51FC16305F9); } // 0x24E4E51FC16305F9 0x742075FE b323
	static Any UGC_GET_CREATE_RESULT() { return invoke<Any>(0xFBC5E768C7A77A6A); } // 0xFBC5E768C7A77A6A 0xCE569932 b323
	static Any UGC_GET_CREATE_CONTENT_ID() { return invoke<Any>(0xC55A0B40FFB1ED23); } // 0xC55A0B40FFB1ED23 0x82146BE9 b323
	static void UGC_CLEAR_CREATE_RESULT() { return invoke<void>(0x17440AA15D1D3739); } // 0x17440AA15D1D3739 0x133FF2D5 b323
	static BOOL UGC_QUERY_MY_CONTENT(Any p0, Any p1, Any* p2, Any p3, Any p4, Any p5) { return invoke<BOOL>(0x9BF438815F5D96EA, p0, p1, p2, p3, p4, p5); } // 0x9BF438815F5D96EA 0xCBA7242F b323
	static BOOL _0x692D58DF40657E8C(Any p0, Any p1, Any p2, Any* p3, Any p4, BOOL p5) { return invoke<BOOL>(0x692D58DF40657E8C, p0, p1, p2, p3, p4, p5); } // 0x692D58DF40657E8C b323
	static BOOL UGC_QUERY_BY_CONTENT_ID(const char* contentId, BOOL latestVersion, const char* contentTypeName) { return invoke<BOOL>(0x158EC424F35EC469, contentId, latestVersion, contentTypeName); } // 0x158EC424F35EC469 0xDED82A6E b323
	static BOOL UGC_QUERY_BY_CONTENT_IDS(Any* data, int count, BOOL latestVersion, const char* contentTypeName) { return invoke<BOOL>(0xC7397A83F7A2A462, data, count, latestVersion, contentTypeName); } // 0xC7397A83F7A2A462 0x47B3C35E b323
	static BOOL _UGC_QUERY_RECENTLY_CREATED_CONTENT(int offset, int count, const char* contentTypeName, int p3) { return invoke<BOOL>(0x6D4CB481FAC835E8, offset, count, contentTypeName, p3); } // 0x6D4CB481FAC835E8 0x40CF0783 b323
	static BOOL UGC_GET_BOOKMARKED_CONTENT(Any p0, Any p1, Any* p2, Any* p3) { return invoke<BOOL>(0xD5A4B59980401588, p0, p1, p2, p3); } // 0xD5A4B59980401588 0x4609D596 b323
	static BOOL UGC_GET_MY_CONTENT(Any p0, Any p1, Any* p2, Any* p3) { return invoke<BOOL>(0x3195F8DD0D531052, p0, p1, p2, p3); } // 0x3195F8DD0D531052 0x4C2C0D1F b323
	static BOOL UGC_GET_FRIEND_CONTENT(Any p0, Any p1, Any* p2, Any* p3) { return invoke<BOOL>(0xF9E1CCAE8BA4C281, p0, p1, p2, p3); } // 0xF9E1CCAE8BA4C281 0x9EFBD5D1 b323
	static BOOL UGC_GET_CREW_CONTENT(Any p0, Any p1, Any p2, Any* p3, Any* p4) { return invoke<BOOL>(0x9F6E2821885CAEE2, p0, p1, p2, p3, p4); } // 0x9F6E2821885CAEE2 0xA6D8B798 b323
	static BOOL UGC_GET_GET_BY_CATEGORY(Any p0, Any p1, Any p2, Any* p3, Any* p4) { return invoke<BOOL>(0x678BB03C1A3BD51E, p0, p1, p2, p3, p4); } // 0x678BB03C1A3BD51E 0x67E74842 b323
	static BOOL SET_BALANCE_ADD_MACHINE(const char* contentId, const char* contentTypeName) { return invoke<BOOL>(0x815E5E3073DA1D67, contentId, contentTypeName); } // 0x815E5E3073DA1D67 0xE123C7AC b323
	static BOOL SET_BALANCE_ADD_MACHINES(Any* data, int dataCount, const char* contentTypeName) { return invoke<BOOL>(0xB8322EEB38BE7C26, data, dataCount, contentTypeName); } // 0xB8322EEB38BE7C26 0x22C33603 b323
	static BOOL _0xA7862BC5ED1DFD7E(Any p0, Any p1, Any* p2, Any* p3) { return invoke<BOOL>(0xA7862BC5ED1DFD7E, p0, p1, p2, p3); } // 0xA7862BC5ED1DFD7E 0x37F5BD93 b323
	static BOOL _0x97A770BEEF227E2B(Any p0, Any p1, Any* p2, Any* p3) { return invoke<BOOL>(0x97A770BEEF227E2B, p0, p1, p2, p3); } // 0x97A770BEEF227E2B 0x1CFB3F51 b323
	static BOOL _0x5324A0E3E4CE3570(Any p0, Any p1, Any* p2, Any* p3) { return invoke<BOOL>(0x5324A0E3E4CE3570, p0, p1, p2, p3); } // 0x5324A0E3E4CE3570 0x87D1E6BD b323
	static void UGC_CANCEL_QUERY() { return invoke<void>(0xE9B99B6853181409); } // 0xE9B99B6853181409 0x021D5A94 b323
	static BOOL UGC_IS_GETTING() { return invoke<BOOL>(0xD53ACDBEF24A46E8); } // 0xD53ACDBEF24A46E8 0x4908A514 b323
	static BOOL UGC_HAS_GET_FINISHED() { return invoke<BOOL>(0x02ADA21EA2F6918F); } // 0x02ADA21EA2F6918F 0x50296140 b323
	static Any _0x941E5306BCD7C2C7() { return invoke<Any>(0x941E5306BCD7C2C7); } // 0x941E5306BCD7C2C7 0x3970B0DA b323
	static Any _0xC87E740D9F3872CC() { return invoke<Any>(0xC87E740D9F3872CC); } // 0xC87E740D9F3872CC 0xC1487110 b323
	static Any UGC_GET_QUERY_RESULT() { return invoke<Any>(0xEDF7F927136C224B); } // 0xEDF7F927136C224B 0xCC2356E3 b323
	static Any UGC_GET_CONTENT_NUM() { return invoke<Any>(0xE0A6138401BCB837); } // 0xE0A6138401BCB837 0x2DE69817 b323
	static Any UGC_GET_CONTENT_TOTAL() { return invoke<Any>(0x769951E2455E2EB5); } // 0x769951E2455E2EB5 0x81BD8D3B b323
	static Hash UGC_GET_CONTENT_HASH() { return invoke<Hash>(0x3A17A27D75C74887); } // 0x3A17A27D75C74887 0x8E1D8F78 b323
	static void UGC_CLEAR_QUERY_RESULTS() { return invoke<void>(0xBA96394A0EECFA65); } // 0xBA96394A0EECFA65 0x0D35DD93 b323
	static const char* UGC_GET_CONTENT_USER_ID(int p0) { return invoke<const char*>(0xCD67AD041A394C9C, p0); } // 0xCD67AD041A394C9C 0x8F3137E6 b323
	static BOOL _0x584770794D758C18(Any p0, Any* p1) { return invoke<BOOL>(0x584770794D758C18, p0, p1); } // 0x584770794D758C18 b323
	static BOOL _0x8C8D2739BA44AF0F(Any p0) { return invoke<BOOL>(0x8C8D2739BA44AF0F, p0); } // 0x8C8D2739BA44AF0F b323
	static Any UGC_GET_CONTENT_USER_NAME(Any p0) { return invoke<Any>(0x703F12425ECA8BF5, p0); } // 0x703F12425ECA8BF5 0xB9137BA7 b323
	static BOOL _0xAEAB987727C5A8A4(Any p0) { return invoke<BOOL>(0xAEAB987727C5A8A4, p0); } // 0xAEAB987727C5A8A4 0x9FEEAA9C b323
	static int UGC_GET_CONTENT_CATEGORY(int p0) { return invoke<int>(0xA7BAB11E7C9C6C5A, p0); } // 0xA7BAB11E7C9C6C5A 0x5E8A7559 b323
	 // Return the mission id of a job.
	static const char* UGC_GET_CONTENT_ID(int p0) { return invoke<const char*>(0x55AA95F481D694D2, p0); } // 0x55AA95F481D694D2 0x331AEABF b323
	 // Return the root content id of a job.
	static const char* UGC_GET_ROOT_CONTENT_ID(int p0) { return invoke<const char*>(0xC0173D6BFF4E0348, p0); } // 0xC0173D6BFF4E0348 0x0E5E8E5C b323
	static Any UGC_GET_CONTENT_NAME(Any p0) { return invoke<Any>(0xBF09786A7FCAB582, p0); } // 0xBF09786A7FCAB582 0xA5A0C695 b323
	static int UGC_GET_CONTENT_DESCRIPTION_HASH(Any p0) { return invoke<int>(0x7CF0448787B23758, p0); } // 0x7CF0448787B23758 0x91534C6E b323
	static const char* UGC_GET_CONTENT_PATH(int p0, int p1) { return invoke<const char*>(0xBAF6BABF9E7CCC13, p0, p1); } // 0xBAF6BABF9E7CCC13 0x744A9EA5 b323
	static void UGC_GET_CONTENT_UPDATED_DATE(Any p0, Any* p1) { return invoke<void>(0xCFD115B373C0DF63, p0, p1); } // 0xCFD115B373C0DF63 0xA19A238D b323
	static Any UGC_GET_CONTENT_FILE_VERSION(Any p0, Any p1) { return invoke<Any>(0x37025B27D9B658B1, p0, p1); } // 0x37025B27D9B658B1 0xFF7D44E6 b323
	static BOOL _0x1D610EB0FEA716D9(int p0) { return invoke<BOOL>(0x1D610EB0FEA716D9, p0); } // 0x1D610EB0FEA716D9 b323
	static BOOL _0x7FCC39C46C3C03BD(int p0) { return invoke<BOOL>(0x7FCC39C46C3C03BD, p0); } // 0x7FCC39C46C3C03BD b323
	static Any UGC_GET_CONTENT_LANGUAGE(Any p0) { return invoke<Any>(0x32DD916F3F7C9672, p0); } // 0x32DD916F3F7C9672 0xA2C5BD9D b323
	static BOOL UGC_GET_CONTENT_IS_PUBLISHED(Any p0) { return invoke<BOOL>(0x3054F114121C21EA, p0); } // 0x3054F114121C21EA 0xA850DDE1 b323
	static BOOL UGC_GET_CONTENT_IS_VERIFIED(Any p0) { return invoke<BOOL>(0xA9240A96C74CCA13, p0); } // 0xA9240A96C74CCA13 0x8F6754AE b323
	static Any UGC_GET_CONTENT_RATING(Any p0, Any p1) { return invoke<Any>(0x1ACCFBA3D8DAB2EE, p0, p1); } // 0x1ACCFBA3D8DAB2EE 0x1E34953F b323
	static Any UGC_GET_CONTENT_RATING_COUNT(Any p0, Any p1) { return invoke<Any>(0x759299C5BB31D2A9, p0, p1); } // 0x759299C5BB31D2A9 0x771FE190 b323
	static Any UGC_GET_CONTENT_RATING_POSITIVE_COUNT(Any p0, Any p1) { return invoke<Any>(0x87E5C46C187FE0AE, p0, p1); } // 0x87E5C46C187FE0AE 0x3276D9D3 b323
	static Any UGC_GET_CONTENT_RATING_NEGATIVE_COUNT(Any p0, Any p1) { return invoke<Any>(0x4E548C0D7AE39FF9, p0, p1); } // 0x4E548C0D7AE39FF9 0x41A0FB02 b323
	static BOOL UGC_GET_CONTENT_HAS_PLAYER_RECORD(Any p0) { return invoke<BOOL>(0x70EA8DA57840F9BE, p0); } // 0x70EA8DA57840F9BE 0x11DC0F27 b323
	static BOOL UGC_GET_CONTENT_HAS_PLAYER_BOOKMARKED(Any p0) { return invoke<BOOL>(0x993CBE59D350D225, p0); } // 0x993CBE59D350D225 0x0DEB3F5A b323
	static int UGC_REQUEST_CONTENT_DATA_FROM_INDEX(int p0, int p1) { return invoke<int>(0x171DF6A0C07FB3DC, p0, p1); } // 0x171DF6A0C07FB3DC 0x84315226 b323
	static int UGC_REQUEST_CONTENT_DATA_FROM_PARAMS(const char* contentTypeName, const char* contentId, int p2, int p3, int p4) { return invoke<int>(0x7FD2990AF016795E, contentTypeName, contentId, p2, p3, p4); } // 0x7FD2990AF016795E 0x38FC2EEB b323
	static int UGC_REQUEST_CACHED_DESCRIPTION(int p0) { return invoke<int>(0x5E0165278F6339EE, p0); } // 0x5E0165278F6339EE 0x1C4F9FDB b323
	static BOOL _0x2D5DC831176D0114(Any p0) { return invoke<BOOL>(0x2D5DC831176D0114, p0); } // 0x2D5DC831176D0114 0xA69AE16C b323
	static BOOL _0xEBFA8D50ADDC54C4(Any p0) { return invoke<BOOL>(0xEBFA8D50ADDC54C4, p0); } // 0xEBFA8D50ADDC54C4 0xF50BC67A b323
	static BOOL _0x162C23CA83ED0A62(Any p0) { return invoke<BOOL>(0x162C23CA83ED0A62, p0); } // 0x162C23CA83ED0A62 0xB3BBD241 b323
	static Any UGC_GET_CACHED_DESCRIPTION(Any p0, Any p1) { return invoke<Any>(0x40F7E66472DF3E5C, p0, p1); } // 0x40F7E66472DF3E5C 0x70A2845C b323
	static BOOL _0x5A34CD9C3C5BEC44(Any p0) { return invoke<BOOL>(0x5A34CD9C3C5BEC44, p0); } // 0x5A34CD9C3C5BEC44 0x346B506C b323
	static BOOL UGC_PUBLISH(const char* contentId, const char* baseContentId, const char* contentTypeName) { return invoke<BOOL>(0x1DE0F5F50D723CAA, contentId, baseContentId, contentTypeName); } // 0x1DE0F5F50D723CAA 0xAD334B40 b323
	static BOOL UGC_SET_BOOKMARKED(const char* contentId, BOOL bookmarked, const char* contentTypeName) { return invoke<BOOL>(0x274A1519DFC1094F, contentId, bookmarked, contentTypeName); } // 0x274A1519DFC1094F 0x980D45D7 b323
	static BOOL UGC_SET_DELETED(Any* p0, BOOL p1, Any* p2) { return invoke<BOOL>(0xD05D1A6C74DA3498, p0, p1, p2); } // 0xD05D1A6C74DA3498 0x48CCC328 b323
	static Any _0x45E816772E93A9DB() { return invoke<Any>(0x45E816772E93A9DB); } // 0x45E816772E93A9DB 0x8E664EFD b323
	static BOOL UGC_HAS_MODIFY_FINISHED() { return invoke<BOOL>(0x299EF3C576773506); } // 0x299EF3C576773506 0x611E0BE2 b323
	static Any _0x793FF272D5B365F4() { return invoke<Any>(0x793FF272D5B365F4); } // 0x793FF272D5B365F4 0xF0211AC1 b323
	static Any UGC_GET_MODIFY_RESULT() { return invoke<Any>(0x5A0A3D1A186A5508); } // 0x5A0A3D1A186A5508 0x1F0DD8AF b323
	static void UGC_CLEAR_MODIFY_RESULT() { return invoke<void>(0xA1E5E0204A6FCC70); } // 0xA1E5E0204A6FCC70 0x405ECA16 b323
	static BOOL UGC_POLICIES_MAKE_PRIVATE(Any p0) { return invoke<BOOL>(0x5CAE833B0EE0C500, p0); } // 0x5CAE833B0EE0C500 0x0D4F845D b323
	static void UGC_CLEAR_OFFLINE_QUERY() { return invoke<void>(0x61A885D3F7CFEE9A); } // 0x61A885D3F7CFEE9A 0xE13C1F7F b323
	static void _0xF98DDE0A8ED09323(BOOL p0) { return invoke<void>(0xF98DDE0A8ED09323, p0); } // 0xF98DDE0A8ED09323 0x213C6D36 b323
	static BOOL UGC_IS_LANGUAGE_SUPPORTED(Any p0) { return invoke<BOOL>(0xF53E48461B71EECB, p0); } // 0xF53E48461B71EECB 0xB4668B23 b323
	static Any UGC_TEXTURE_DOWNLOAD_REQUEST(Any* p0, Any p1, Any p2, Any p3, Any* p4, BOOL p5) { return invoke<Any>(0x308F96458B7087CC, p0, p1, p2, p3, p4, p5); } // 0x308F96458B7087CC 0x68C9AF69 b323
	static void TEXTURE_DOWNLOAD_RELEASE(int p0) { return invoke<void>(0x487EB90B98E9FB19, p0); } // 0x487EB90B98E9FB19 0xEE8D9E70 b323
	static const char* TEXTURE_DOWNLOAD_GET_NAME(int p0) { return invoke<const char*>(0x3448505B6E35262D, p0); } // 0x3448505B6E35262D 0xA40EF65A b323
	 // 0 = succeeded
	 // 1 = pending
	 // 2 = failed
	 // 
	 // GET_ST*
	static int _GET_STATUS_OF_TEXTURE_DOWNLOAD(int p0) { return invoke<int>(0x8BD6C6DEA20E82C6, p0); } // 0x8BD6C6DEA20E82C6 0x03225BA3 b323
	static BOOL NETWORK_IS_CABLE_CONNECTED() { return invoke<BOOL>(0xEFFB25453D8600F9); } // 0xEFFB25453D8600F9 0x5C065D55 b323
	static BOOL _NETWORK_GET_ROS_PRIVILEGE_9() { return invoke<BOOL>(0x66B59CFFD78467AF); } // 0x66B59CFFD78467AF 0x0CA1167F b323
	static BOOL NETWORK_HAVE_ROS_SOCIAL_CLUB_PRIV() { return invoke<BOOL>(0x606E4D3E3CCCF3EB); } // 0x606E4D3E3CCCF3EB 0x424C6E27 b323
	static BOOL NETWORK_HAVE_ROS_LEADERBOARD_WRITE_PRIV() { return invoke<BOOL>(0x422D396F80A96547); } // 0x422D396F80A96547 0xC6EA802E b323
	 // index is always 18 in scripts
	static BOOL NETWORK_HAS_ROS_PRIVILEGE(int index) { return invoke<BOOL>(0xA699957E60D80214, index); } // 0xA699957E60D80214 0xFD261E30 b323
	static BOOL _NETWORK_GET_ROS_PRIVILEGE_24() { return invoke<BOOL>(0x593570C289A77688); } // 0x593570C289A77688 b323
	static BOOL _NETWORK_GET_ROS_PRIVILEGE_25() { return invoke<BOOL>(0x91B87C55093DE351); } // 0x91B87C55093DE351 b323
	static Any _0x36391F397731595D(Any p0) { return invoke<Any>(0x36391F397731595D, p0); } // 0x36391F397731595D b323
	static Any _0xDEB2B99A1AF1A2A6(Any p0) { return invoke<Any>(0xDEB2B99A1AF1A2A6, p0); } // 0xDEB2B99A1AF1A2A6 b323
	static void _0x9465E683B12D3F6B() { return invoke<void>(0x9465E683B12D3F6B); } // 0x9465E683B12D3F6B 0x273C6180 b323
	 // NETWORK_D*
	 // 
	 // Probably NETWORK_DISABLE_*
	static void _0xC505036A35AFD01B(BOOL toggle) { return invoke<void>(0xC505036A35AFD01B, toggle); } // 0xC505036A35AFD01B 0xA100CC97 b323
	static void _0x267C78C60E806B9A(Any p0, BOOL p1) { return invoke<void>(0x267C78C60E806B9A, p0, p1); } // 0x267C78C60E806B9A 0xBB2D33D3 b323
	static void _0x45A83257ED02D9BC() { return invoke<void>(0x45A83257ED02D9BC); } // 0x45A83257ED02D9BC b323
	static int _0xDB663CC9FF3407A9(Player player) { return invoke<int>(0xDB663CC9FF3407A9, player); } // 0xDB663CC9FF3407A9 b1734
}

namespace OBJECT
{
	static Object CREATE_OBJECT(Hash modelHash, float x, float y, float z, BOOL isNetwork, BOOL netMissionEntity, BOOL dynamic) { return invoke<Object>(0x509D5878EB39E842, modelHash, x, y, z, isNetwork, netMissionEntity, dynamic); } // 0x509D5878EB39E842 0x2F7AA05C b323
	static Object CREATE_OBJECT_NO_OFFSET(Hash modelHash, float x, float y, float z, BOOL isNetwork, BOOL netMissionEntity, BOOL dynamic) { return invoke<Object>(0x9A294B2138ABB884, modelHash, x, y, z, isNetwork, netMissionEntity, dynamic); } // 0x9A294B2138ABB884 0x58040420 b323
	 // Deletes the specified object, then sets the handle pointed to by the pointer to NULL.
	static void DELETE_OBJECT(Object* object) { return invoke<void>(0x539E0AE3E6634B9F, object); } // 0x539E0AE3E6634B9F 0xD6EF9DA7 b323
	static BOOL PLACE_OBJECT_ON_GROUND_PROPERLY(Object object) { return invoke<BOOL>(0x58A850EAEE20FAA3, object); } // 0x58A850EAEE20FAA3 0x8F95A20B b323
	static void SET_OBJECT_TARGETTABLE(Object object, BOOL targettable) { return invoke<void>(0x8A7391690F5AFD81, object, targettable); } // 0x8A7391690F5AFD81 0x3F88CD86 b323
	static void _SET_OBJECT_SOMETHING(Object object, BOOL p1) { return invoke<void>(0x77F33F2CCF64B3AA, object, p1); } // 0x77F33F2CCF64B3AA 0x483C5C88 b323
	 // Has 8 params in the latest patches.
	 // 
	 // isMission - if true doesn't return mission objects
	static Object GET_CLOSEST_OBJECT_OF_TYPE(float x, float y, float z, float radius, Hash modelHash, BOOL isMission, BOOL p6, BOOL p7) { return invoke<Object>(0xE143FA2249364369, x, y, z, radius, modelHash, isMission, p6, p7); } // 0xE143FA2249364369 0x45619B33 b323
	static BOOL HAS_OBJECT_BEEN_BROKEN(Object object, Any p1) { return invoke<BOOL>(0x8ABFB70C49CC43E2, object, p1); } // 0x8ABFB70C49CC43E2 0xFE21F891 b323
	static Vector3 _GET_OBJECT_OFFSET_FROM_COORDS(float xPos, float yPos, float zPos, float heading, float xOffset, float yOffset, float zOffset) { return invoke<Vector3>(0x163E252DE035A133, xPos, yPos, zPos, heading, xOffset, yOffset, zOffset); } // 0x163E252DE035A133 0x87A42A12 b323
	static Any GET_COORDS_AND_ROTATION_OF_CLOSEST_OBJECT_OF_TYPE(Object object, float radius, Hash modelHash, float x, float y, float z, Vector3* p6, int p7) { return invoke<Any>(0x163F8B586BC95F2A, object, radius, modelHash, x, y, z, p6, p7); } // 0x163F8B586BC95F2A 0x65213FC3 b323
	 // Hardcoded to not work in multiplayer.
	 // 
	 // 
	 // Used to lock/unlock doors to interior areas of the game.
	 // 
	 // (Possible) Door Types:
	 // 
	 // pastebin.com/9S2m3qA4
	 // 
	 // Heading is either 1, 0 or -1 in the scripts. Means default closed(0) or opened either into(1) or out(-1) of the interior.
	 // Locked means that the heading is locked.  
	 // p6 is always 0. 
	 // 
	 // 225 door types, model names and coords found in stripclub.c4:
	 // pastebin.com/gywnbzsH
	 // 
	 // get door info: pastebin.com/i14rbekD
	static void SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(Hash type, float x, float y, float z, BOOL locked, float heading, BOOL p6) { return invoke<void>(0xF82D8F1926A02C3D, type, x, y, z, locked, heading, p6); } // 0xF82D8F1926A02C3D 0x38C951A4 b323
	 // when you set locked to 0 the door open and to 1 the door close
	 // OBJECT::_9B12F9A24FABEDB0(${prop_gate_prison_01}, 1845.0, 2605.0, 45.0, 0, 0.0, 50.0, 0);  //door open
	 // 
	 // OBJECT::_9B12F9A24FABEDB0(${prop_gate_prison_01}, 1845.0, 2605.0, 45.0, 1, 0.0, 50.0, 0);  //door close
	 // 
	 // p5-7 - Rot?
	 // 
	 // SET_*
	static void _DOOR_CONTROL(Hash doorHash, float x, float y, float z, BOOL locked, float xRotMult, float yRotMult, float zRotMult) { return invoke<void>(0x9B12F9A24FABEDB0, doorHash, x, y, z, locked, xRotMult, yRotMult, zRotMult); } // 0x9B12F9A24FABEDB0 0x4E0A260B b323
	static void ADD_DOOR_TO_SYSTEM(Hash doorHash, Hash modelHash, float x, float y, float z, BOOL p5, BOOL p6, BOOL p7) { return invoke<void>(0x6F8838D03D1DC226, doorHash, modelHash, x, y, z, p5, p6, p7); } // 0x6F8838D03D1DC226 0x9D2D778D b323
	static void REMOVE_DOOR_FROM_SYSTEM(Hash doorHash) { return invoke<void>(0x464D8E1427156FE4, doorHash); } // 0x464D8E1427156FE4 0x00253286 b323
	 // Sets the acceleration limit of a door.
	 // How fast it can open, or the inverse hinge resistance.
	 // 
	 // A limit of 0 seems to lock doors.
	 // 
	 // p2 is always 0, p3 is always 1.
	 // 
	 // 
	static void DOOR_SYSTEM_SET_DOOR_STATE(Hash doorHash, int limit, BOOL p2, BOOL p3) { return invoke<void>(0x6BAB9442830C7F53, doorHash, limit, p2, p3); } // 0x6BAB9442830C7F53 0xDF83DB47 b323
	static int DOOR_SYSTEM_GET_DOOR_STATE(Hash doorHash) { return invoke<int>(0x160AA1B32F6139B8, doorHash); } // 0x160AA1B32F6139B8 0xD42A41C2 b323
	static void DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(Hash doorHash, float heading, BOOL p2, BOOL p3) { return invoke<void>(0x9BA001CB45CBF627, doorHash, heading, p2, p3); } // 0x9BA001CB45CBF627 0x47531446 b323
	 // Sets the ajar angle of a door.
	 // Ranges from -1.0 to 1.0, and 0.0 is closed / default.
	 // 
	 // p2 is always 0, p3 is always 1.
	 // 
	 // 
	static void DOOR_SYSTEM_SET_OPEN_RATIO(Hash doorHash, float ajar, BOOL p2, BOOL p3) { return invoke<void>(0xB6E6FBA95C7324AC, doorHash, ajar, p2, p3); } // 0xB6E6FBA95C7324AC 0x34883DE3 b323
	static float DOOR_SYSTEM_GET_OPEN_RATIO(Hash doorHash) { return invoke<float>(0x65499865FCA6E5EC, doorHash); } // 0x65499865FCA6E5EC 0xB74C3BD7 b323
	static void DOOR_SYSTEM_SET_HOLD_OPEN(Hash doorHash, BOOL toggle) { return invoke<void>(0xD9B71952F78A2640, doorHash, toggle); } // 0xD9B71952F78A2640 0xECE58AE0 b323
	 // if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(doorHash)) 
	 // {
	 //     OBJECT::REMOVE_DOOR_FROM_SYSTEM(doorHash);
	 // }
	static BOOL IS_DOOR_REGISTERED_WITH_SYSTEM(Hash doorHash) { return invoke<BOOL>(0xC153C43EA202C8C1, doorHash); } // 0xC153C43EA202C8C1 0x5AFCD8A1 b323
	static BOOL IS_PLAYER_ENTIRELY_INSIDE_GARAGE(Hash garageHash, Player player, float p2, int p3) { return invoke<BOOL>(0x024A60DEB0EA69F0, garageHash, player, p2, p3); } // 0x024A60DEB0EA69F0 0xC33ED360 b323
	static BOOL IS_PLAYER_PARTIALLY_INSIDE_GARAGE(Hash garageHash, Player player, int p2) { return invoke<BOOL>(0x1761DC5D8471CBAA, garageHash, player, p2); } // 0x1761DC5D8471CBAA 0x41924877 b323
	 // Despite the name, it does work for any entity type.
	static BOOL IS_OBJECT_ENTIRELY_INSIDE_GARAGE(Hash garageHash, Entity entity, float p2, int p3) { return invoke<BOOL>(0x372EF6699146A1E4, garageHash, entity, p2, p3); } // 0x372EF6699146A1E4 0x142C8F76 b323
	 // Despite the name, it does work for any entity type.
	static BOOL IS_OBJECT_PARTIALLY_INSIDE_GARAGE(Hash garageHash, Entity entity, int p2) { return invoke<BOOL>(0xF0EED5A6BC7B237A, garageHash, entity, p2); } // 0xF0EED5A6BC7B237A 0x95A9AB2B b323
	 // p5 is usually 0.
	static BOOL DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(float x, float y, float z, float radius, Hash hash, BOOL p5) { return invoke<BOOL>(0xBFA48E2FF417213F, x, y, z, radius, hash, p5); } // 0xBFA48E2FF417213F 0x23FF2BA4 b323
	static BOOL IS_POINT_IN_ANGLED_AREA(float p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7, float p8, float p9, BOOL p10, BOOL p11) { return invoke<BOOL>(0x2A70BAE8883E4C81, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11); } // 0x2A70BAE8883E4C81 0x73BCFFDC b323
	 // Adjust the physics parameters of a prop, or otherwise known as "object". This is useful for simulated gravity.
	 // 
	 // Other parameters seem to be unknown.
	 // 
	 // p2: seems to be weight and gravity related. Higher value makes the obj fall faster. Very sensitive?
	 // p3: seems similar to p2
	 // p4: makes obj fall slower the higher the value
	 // p5: similar to p4
	static void SET_OBJECT_PHYSICS_PARAMS(Object object, float weight, float p2, float p3, float p4, float p5, float gravity, float p7, float p8, float p9, float p10, float buoyancy) { return invoke<void>(0xF6DF6E90DE7DF90F, object, weight, p2, p3, p4, p5, gravity, p7, p8, p9, p10, buoyancy); } // 0xF6DF6E90DE7DF90F 0xE8D11C58 b323
	static void SET_ACTIVATE_OBJECT_PHYSICS_AS_SOON_AS_IT_IS_UNFROZEN(Object object, BOOL toggle) { return invoke<void>(0x406137F8EF90EAF5, object, toggle); } // 0x406137F8EF90EAF5 0x3E263AE1 b323
	static BOOL IS_ANY_OBJECT_NEAR_POINT(float x, float y, float z, float range, BOOL p4) { return invoke<BOOL>(0x397DC58FF00298D1, x, y, z, range, p4); } // 0x397DC58FF00298D1 0xE9E46941 b323
	static void _0xE7E4C198B0185900(Object p0, Any p1, BOOL p2) { return invoke<void>(0xE7E4C198B0185900, p0, p1, p2); } // 0xE7E4C198B0185900 0x1E82C2AE b323
	static void TRACK_OBJECT_VISIBILITY(Object object) { return invoke<void>(0xB252BC036B525623, object); } // 0xB252BC036B525623 0x46D06B9A b323
	static BOOL IS_OBJECT_VISIBLE(Object object) { return invoke<BOOL>(0x8B32ACE6326A7546, object); } // 0x8B32ACE6326A7546 0xF4FD8AE4 b323
	static void _0xC6033D32241F6FB5(Object object, BOOL toggle) { return invoke<void>(0xC6033D32241F6FB5, object, toggle); } // 0xC6033D32241F6FB5 0xF4A1A14A b323
	 // Example:
	 // OBJECT::GET_RAYFIRE_MAP_OBJECT(-809.9619750976562, 170.919, 75.7406997680664, 3.0, "des_tvsmash");
	static Object GET_RAYFIRE_MAP_OBJECT(float x, float y, float z, float radius, const char* name) { return invoke<Object>(0xB48FCED898292E52, x, y, z, radius, name); } // 0xB48FCED898292E52 0xA286DE96 b323
	static void SET_STATE_OF_RAYFIRE_MAP_OBJECT(Object object, int state) { return invoke<void>(0x5C29F698D404C5E1, object, state); } // 0x5C29F698D404C5E1 0x21F51560 b323
	static int GET_STATE_OF_RAYFIRE_MAP_OBJECT(Object object) { return invoke<int>(0x899BA936634A322E, object); } // 0x899BA936634A322E 0xF1B8817A b323
	static BOOL DOES_RAYFIRE_MAP_OBJECT_EXIST(Object object) { return invoke<BOOL>(0x52AF537A0C5B8AAD, object); } // 0x52AF537A0C5B8AAD 0xE08C834D b323
	 // Pickup hashes: pastebin.com/8EuSv2r1
	static Pickup CREATE_PICKUP(Hash pickupHash, float posX, float posY, float posZ, int p4, int value, BOOL p6, Hash modelHash) { return invoke<Pickup>(0xFBA08C503DD5FA58, pickupHash, posX, posY, posZ, p4, value, p6, modelHash); } // 0xFBA08C503DD5FA58 0x5E14DF68 b323
	 // Pickup hashes: pastebin.com/8EuSv2r1
	 // 
	 // flags:
	 // 8 (1 << 3): place on ground
	 // 512 (1 << 9): spin around
	static Pickup CREATE_PICKUP_ROTATE(Hash pickupHash, float posX, float posY, float posZ, float rotX, float rotY, float rotZ, int flag, int amount, Any p9, BOOL p10, Hash modelHash) { return invoke<Pickup>(0x891804727E0A98B7, pickupHash, posX, posY, posZ, rotX, rotY, rotZ, flag, amount, p9, p10, modelHash); } // 0x891804727E0A98B7 0xF015BFE2 b323
	 // Used for doing money drop
	 // Pickup hashes: pastebin.com/8EuSv2r1
	static Pickup CREATE_AMBIENT_PICKUP(Hash pickupHash, float posX, float posY, float posZ, int flags, int value, Hash modelHash, BOOL p7, BOOL p8) { return invoke<Pickup>(0x673966A0C0FD7171, pickupHash, posX, posY, posZ, flags, value, modelHash, p7, p8); } // 0x673966A0C0FD7171 0x17B99CE7 b323
	static void _0x1E3F1B1B891A2AAA(Any p0, Any p1) { return invoke<void>(0x1E3F1B1B891A2AAA, p0, p1); } // 0x1E3F1B1B891A2AAA b573
	 // Pickup hashes: pastebin.com/8EuSv2r1
	static Object CREATE_PORTABLE_PICKUP(Hash pickupHash, float x, float y, float z, BOOL placeOnGround, Hash modelHash) { return invoke<Object>(0x2EAF1FDB2FB55698, pickupHash, x, y, z, placeOnGround, modelHash); } // 0x2EAF1FDB2FB55698 0x8C886BE5 b323
	static void _0x0BF3B3BD47D79C08(Hash modelHash, int p1) { return invoke<void>(0x0BF3B3BD47D79C08, modelHash, p1); } // 0x0BF3B3BD47D79C08 0x7EFBA039 b323
	static Vector3 GET_SAFE_PICKUP_COORDS(float x, float y, float z, float p3, float p4) { return invoke<Vector3>(0x6E16BC2503FF1FF0, x, y, z, p3, p4); } // 0x6E16BC2503FF1FF0 0x618B5F67 b323
	 // Adds an area that seems to be related to pickup physics behavior.
	 // Max amount of areas is 10. Only works in multiplayer.
	 // 
	 // ADD_*
	static void _0xD4A7A435B3710D05(float x, float y, float z, float radius) { return invoke<void>(0xD4A7A435B3710D05, x, y, z, radius); } // 0xD4A7A435B3710D05 b1290
	 // Clears all areas created by 0xD4A7A435B3710D05
	 // 
	 // CLEAR_*
	static void _0xB7C6D80FB371659A() { return invoke<void>(0xB7C6D80FB371659A); } // 0xB7C6D80FB371659A b1290
	static Vector3 GET_PICKUP_COORDS(Pickup pickup) { return invoke<Vector3>(0x225B8B35C88029B3, pickup); } // 0x225B8B35C88029B3 0xC2E1E2C5 b323
	static BOOL HAS_PICKUP_BEEN_COLLECTED(Pickup pickup) { return invoke<BOOL>(0x80EC48E6679313F9, pickup); } // 0x80EC48E6679313F9 0x0BE5CCED b323
	static void REMOVE_PICKUP(Pickup pickup) { return invoke<void>(0x3288D8ACAECD2AB2, pickup); } // 0x3288D8ACAECD2AB2 0x64A7A0E0 b323
	 // Spawns one or more money pickups.
	 // 
	 // x: The X-component of the world position to spawn the money pickups at.
	 // y: The Y-component of the world position to spawn the money pickups at.
	 // z: The Z-component of the world position to spawn the money pickups at.
	 // value: The combined value of the pickups (in dollars).
	 // amount: The number of pickups to spawn.
	 // model: The model to use, or 0 for default money model.
	 // 
	 // Example:
	 // CREATE_MONEY_PICKUPS(x, y, z, 1000, 3, 0x684a97ae);
	 // 
	 // Spawns 3 spray cans that'll collectively give $1000 when picked up. (Three spray cans, each giving $334, $334, $332 = $1000).
	 // 
	 // ==============================================
	 // 
	 // Max is 2000 in MP. So if you put the amount to 20, but the value to $400,000 eg. They will only be able to pickup 20 - $2,000 bags. So, $40,000
	static void CREATE_MONEY_PICKUPS(float x, float y, float z, int value, int amount, Hash model) { return invoke<void>(0x0589B5E791CE9B2B, x, y, z, value, amount, model); } // 0x0589B5E791CE9B2B 0x36C9A5EA b323
	static BOOL DOES_PICKUP_EXIST(Pickup pickup) { return invoke<BOOL>(0xAFC1CA75AD4074D1, pickup); } // 0xAFC1CA75AD4074D1 0x9C6DA0B3 b323
	static BOOL DOES_PICKUP_OBJECT_EXIST(Object pickupObject) { return invoke<BOOL>(0xD9EFB6DBF7DAAEA3, pickupObject); } // 0xD9EFB6DBF7DAAEA3 0xE0B32108 b323
	static Object GET_PICKUP_OBJECT(Pickup pickup) { return invoke<Object>(0x5099BC55630B25AE, pickup); } // 0x5099BC55630B25AE 0x6052E62E b323
	static void SET_PICKUP_REGENERATION_TIME(Pickup pickup, int duration) { return invoke<void>(0x78015C9B4B3ECC9D, pickup, duration); } // 0x78015C9B4B3ECC9D 0xAB11267D b323
	static void _0x92AEFB5F6E294023(Object object, BOOL p1, BOOL p2) { return invoke<void>(0x92AEFB5F6E294023, object, p1, p2); } // 0x92AEFB5F6E294023 0xCBB5F9B6 b323
	static void _0xA08FE5E49BDC39DD(Any p0, float p1, BOOL p2) { return invoke<void>(0xA08FE5E49BDC39DD, p0, p1, p2); } // 0xA08FE5E49BDC39DD 0x276A7807 b323
	static void _0x31F924B53EADDF65(BOOL p0) { return invoke<void>(0x31F924B53EADDF65, p0); } // 0x31F924B53EADDF65 0xDB18FA01 b323
	static void _0xB2D0BDE54F0E8E5A(Object object, BOOL toggle) { return invoke<void>(0xB2D0BDE54F0E8E5A, object, toggle); } // 0xB2D0BDE54F0E8E5A 0x132B6D92 b323
	static Hash GET_WEAPON_TYPE_FROM_PICKUP_TYPE(Hash pickupHash) { return invoke<Hash>(0x08F96CA6C551AD51, pickupHash); } // 0x08F96CA6C551AD51 0xEDD01937 b323
	static int _GET_OBJECT_TEXTURE_VARIATION(Object object) { return invoke<int>(0xE84EB93729C5F36A, object); } // 0xE84EB93729C5F36A b757
	 // enum ObjectPaintVariants
	 // {
	 //  Pacific = 0,
	 //   Azure = 1,
	 //     Nautical = 2,
	 //  Continental = 3,
	 //   Battleship = 4,
	 //    Intrepid = 5,
	 //  Uniform = 6,
	 //   Classico = 7,
	 //  Mediterranean = 8,
	 //     Command = 9,
	 //   Mariner = 10,
	 //  Ruby = 11,
	 //     Vintage = 12,
	 //  Pristine = 13,
	 //     Merchant = 14,
	 //     Voyager = 15
	 // };
	static void _SET_OBJECT_TEXTURE_VARIATION(Object object, int textureVariation) { return invoke<void>(0x971DA0055324D033, object, textureVariation); } // 0x971DA0055324D033 b323
	 // is this like setting is as no longer needed?
	static void _MARK_OBJECT_FOR_DELETION(Object object) { return invoke<void>(0xADBE4809F19F927A, object); } // 0xADBE4809F19F927A 0x2048A7DD b323
}

namespace PAD
{
	 // padIndex: 0 (PLAYER_CONTROL), 1 (unk) and 2 (unk) used in the scripts.
	static BOOL IS_CONTROL_ENABLED(int padIndex, int control) { return invoke<BOOL>(0x1CEA6BFDF248E5D9, padIndex, control); } // 0x1CEA6BFDF248E5D9 0x9174AF84 b323
	 // padIndex: 0 (PLAYER_CONTROL), 1 (unk) and 2 (unk) used in the scripts.
	static BOOL IS_CONTROL_PRESSED(int padIndex, int control) { return invoke<BOOL>(0xF3A21BCD95725A4A, padIndex, control); } // 0xF3A21BCD95725A4A 0x517A4384 b323
	 // padIndex: 0 (PLAYER_CONTROL), 1 (unk) and 2 (unk) used in the scripts.
	static BOOL IS_CONTROL_RELEASED(int padIndex, int control) { return invoke<BOOL>(0x648EE3E7F38877DD, padIndex, control); } // 0x648EE3E7F38877DD 0x1F91A06E b323
	 // padIndex: 0 (PLAYER_CONTROL), 1 (unk) and 2 (unk) used in the scripts.
	static BOOL IS_CONTROL_JUST_PRESSED(int padIndex, int control) { return invoke<BOOL>(0x580417101DDB492F, padIndex, control); } // 0x580417101DDB492F 0x4487F579 b323
	 // padIndex: 0 (PLAYER_CONTROL), 1 (unk) and 2 (unk) used in the scripts.
	static BOOL IS_CONTROL_JUST_RELEASED(int padIndex, int control) { return invoke<BOOL>(0x50F940259D3841E6, padIndex, control); } // 0x50F940259D3841E6 0x2314444B b323
	 // padIndex: 0 (PLAYER_CONTROL), 1 (unk) and 2 (unk) used in the scripts.
	static int GET_CONTROL_VALUE(int padIndex, int control) { return invoke<int>(0xD95E79E8686D2C27, padIndex, control); } // 0xD95E79E8686D2C27 0xC526F3C6 b323
	 // Returns the value of GET_CONTROL_VALUE normalized (i.e. a real number value between -1 and 1)
	 // 
	 // padIndex: 0 (PLAYER_CONTROL), 1 (unk) and 2 (unk) used in the scripts.
	static float GET_CONTROL_NORMAL(int padIndex, int control) { return invoke<float>(0xEC3C9B8D5327B563, padIndex, control); } // 0xEC3C9B8D5327B563 0x5DE226A5 b323
	static void _0x5B73C77D9EB66E24(BOOL p0) { return invoke<void>(0x5B73C77D9EB66E24, p0); } // 0x5B73C77D9EB66E24 b323
	 // Seems to return values between -1 and 1 for controls like gas and steering.
	 // 
	 // padIndex: 0 (PLAYER_CONTROL), 1 (unk) and 2 (unk) used in the scripts.
	static float GET_CONTROL_UNBOUND_NORMAL(int padIndex, int control) { return invoke<float>(0x5B84D09CEC5209C5, padIndex, control); } // 0x5B84D09CEC5209C5 0xC49343BB b323
	 // This is for simulating player input.
	 // amount is a float value from 0 - 1
	 // 
	 // padIndex: 0 (PLAYER_CONTROL), 1 (unk) and 2 (unk) used in the scripts.
	static BOOL _SET_CONTROL_NORMAL(int padIndex, int control, float amount) { return invoke<BOOL>(0xE8A25867FBA3B05E, padIndex, control, amount); } // 0xE8A25867FBA3B05E b323
	 // padIndex: 0 (PLAYER_CONTROL), 1 (unk) and 2 (unk) used in the scripts.
	static BOOL IS_DISABLED_CONTROL_PRESSED(int padIndex, int control) { return invoke<BOOL>(0xE2587F8CBBD87B1D, padIndex, control); } // 0xE2587F8CBBD87B1D 0x32A93544 b323
	 // padIndex: 0 (PLAYER_CONTROL), 1 (unk) and 2 (unk) used in the scripts.
	static BOOL IS_DISABLED_CONTROL_JUST_PRESSED(int padIndex, int control) { return invoke<BOOL>(0x91AEF906BCA88877, padIndex, control); } // 0x91AEF906BCA88877 0xEE6ABD32 b323
	 // padIndex: 0 (PLAYER_CONTROL), 1 (unk) and 2 (unk) used in the scripts.
	static BOOL IS_DISABLED_CONTROL_JUST_RELEASED(int padIndex, int control) { return invoke<BOOL>(0x305C8DCD79DA8B0F, padIndex, control); } // 0x305C8DCD79DA8B0F 0xD6A679E1 b323
	 // control - c# works with (int)GTA.Control.CursorY / (int)GTA.Control.CursorX and returns the mouse movement (additive).
	 // 
	 // padIndex: 0 (PLAYER_CONTROL), 1 (unk) and 2 (unk) used in the scripts.
	static float GET_DISABLED_CONTROL_NORMAL(int padIndex, int control) { return invoke<float>(0x11E65974A982637C, padIndex, control); } // 0x11E65974A982637C 0x66FF4FAA b323
	 // The "disabled" variant of _0x5B84D09CEC5209C5.
	 // 
	 // padIndex: 0 (PLAYER_CONTROL), 1 (unk) and 2 (unk) used in the scripts.
	static float GET_DISABLED_CONTROL_UNBOUND_NORMAL(int padIndex, int control) { return invoke<float>(0x4F8A26A890FD62FB, padIndex, control); } // 0x4F8A26A890FD62FB 0xF2A65A4C b323
	 // padIndex: 0 (PLAYER_CONTROL), 1 (unk) and 2 (unk) used in the scripts.
	 // 
	 // Used to be known as _GET_LAST_INPUT_METHOD & _IS_INPUT_DISABLED
	static BOOL _IS_USING_KEYBOARD(int padIndex) { return invoke<BOOL>(0xA571D46727E2B718, padIndex); } // 0xA571D46727E2B718 b323
	 // padIndex: 0 (PLAYER_CONTROL), 1 (unk) and 2 (unk) used in the scripts.
	 // 
	 // Used to be known as _IS_INPUT_JUST_DISABLED
	static BOOL _IS_USING_KEYBOARD_2(int padIndex) { return invoke<BOOL>(0x13337B38DB572509, padIndex); } // 0x13337B38DB572509 b323
	static BOOL _SET_CURSOR_LOCATION(float x, float y) { return invoke<BOOL>(0xFC695459D4D0E219, x, y); } // 0xFC695459D4D0E219 b323
	 // padIndex: 0 (PLAYER_CONTROL), 1 (unk) and 2 (unk) used in the scripts.
	 // 
	 // Hardcoded to return false.
	static BOOL _0x23F09EADC01449D6(int padIndex) { return invoke<BOOL>(0x23F09EADC01449D6, padIndex); } // 0x23F09EADC01449D6 b323
	 // padIndex: 0 (PLAYER_CONTROL), 1 (unk) and 2 (unk) used in the scripts.
	static BOOL _0x6CD79468A1E595C6(int padIndex) { return invoke<BOOL>(0x6CD79468A1E595C6, padIndex); } // 0x6CD79468A1E595C6 b323
	 // formerly called _GET_CONTROL_ACTION_NAME incorrectly
	 // 
	 // p2 appears to always be true.
	 // p2 is unused variable in function.
	 // 
	 // EG:
	 // GET_CONTROL_INSTRUCTIONAL_BUTTON (2, 201, 1) /*INPUT_FRONTEND_ACCEPT (e.g. Enter button)*/
	 // GET_CONTROL_INSTRUCTIONAL_BUTTON (2, 202, 1) /*INPUT_FRONTEND_CANCEL (e.g. ESC button)*/
	 // GET_CONTROL_INSTRUCTIONAL_BUTTON (2, 51, 1) /*INPUT_CONTEXT (e.g. E button)*/
	 // 
	 // gtaforums.com/topic/819070-c-draw-instructional-buttons-scaleform-movie/#entry1068197378
	 // 
	 // padIndex: 0 (PLAYER_CONTROL), 1 (unk) and 2 (unk) used in the scripts.
	static const char* GET_CONTROL_INSTRUCTIONAL_BUTTON(int padIndex, int control, BOOL p2) { return invoke<const char*>(0x0499D7B09FC9B407, padIndex, control, p2); } // 0x0499D7B09FC9B407 0x3551727A b323
	 // padIndex: 0 (PLAYER_CONTROL), 1 (unk) and 2 (unk) used in the scripts.
	static const char* GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTON(int padIndex, int controlGroup, BOOL p2) { return invoke<const char*>(0x80C2FD58D720C801, padIndex, controlGroup, p2); } // 0x80C2FD58D720C801 0x3EE71F6A b323
	 // padIndex always seems to be 0
	 // duration in milliseconds 
	 // frequency should range from about 10 (slow vibration) to 255 (very fast)
	 // appears to be a hash collision, though it does do what it says
	 // 
	 // example:
	 // SET_PAD_SHAKE(0, 100, 200);
	static void SET_PAD_SHAKE(int padIndex, int duration, int frequency) { return invoke<void>(0x48B3886C1358D0D5, padIndex, duration, frequency); } // 0x48B3886C1358D0D5 0x5D38BD2F b323
	static void STOP_PAD_SHAKE(int padIndex) { return invoke<void>(0x38C16A305E8CDC8D, padIndex); } // 0x38C16A305E8CDC8D 0x8F75657E b323
	static void _0xA0CEFCEA390AAB9B(Any p0) { return invoke<void>(0xA0CEFCEA390AAB9B, p0); } // 0xA0CEFCEA390AAB9B b323
	static BOOL IS_LOOK_INVERTED() { return invoke<BOOL>(0x77B612531280010D); } // 0x77B612531280010D 0x313434B2 b323
	 // Used with IS_LOOK_INVERTED() and negates its affect.
	 // 
	 // --
	 // 
	 // Not sure how the person above got that description, but here's an actual example:
	 // 
	 // if (CONTROLS::_GET_LAST_INPUT_METHOD(2)) {
	 //     if (a_5) {
	 //         if (CONTROLS::IS_LOOK_INVERTED()) {
	 //             a_3 *= -1;
	 //         }
	 //         if (CONTROLS::_E1615EC03B3BB4FD()) {
	 //             a_3 *= -1;
	 //         }
	 //     }
	 // }
	static BOOL _0xE1615EC03B3BB4FD() { return invoke<BOOL>(0xE1615EC03B3BB4FD); } // 0xE1615EC03B3BB4FD b323
	 // Returns the local player's targeting mode. See PLAYER::SET_PLAYER_TARGETING_MODE.
	static int GET_LOCAL_PLAYER_AIM_STATE() { return invoke<int>(0xBB41AFBBBC0A0287); } // 0xBB41AFBBBC0A0287 0x81802053 b323
	 // Returns profile setting 17.
	static BOOL GET_ALLOW_MOVEMENT_WHILE_ZOOMED() { return invoke<BOOL>(0xFC859E2374407556); } // 0xFC859E2374407556 0xC0823820 b323
	 // padIndex: 0 (PLAYER_CONTROL), 1 (unk) and 2 (unk) used in the scripts.
	static void SET_INPUT_EXCLUSIVE(int padIndex, int control) { return invoke<void>(0xEDE476E5EE29EDB1, padIndex, control); } // 0xEDE476E5EE29EDB1 0x4E8E29E6 b323
	 // control values and meaning: github.com/crosire/scripthookvdotnet/blob/dev_v3/source/scripting/Controls.cs
	 // 
	 // padIndex: 0 (PLAYER_CONTROL), 1 (unk) and 2 (unk) used in the scripts.
	 // 
	 // Control values from the decompiled scripts: 0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,
	 // 28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,53,5
	 // 4,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,
	 // 79,80,81,82,85,86,87,88,89,90,91,92,93,95,96,97,98,99,100,101,102,103,105,
	 // 107,108,109,110,111,112,113,114,115,116,117,118,119,123,126,129,130,131,132,
	 // 133,134,136,137,138,139,140,141,142,143,144,145,146,147,148,149,150,151,152,
	 // 153,154,155,156,157,158,159,160,161,162,163,164,165,166,167,168,169,171,172
	 // ,177,187,188,189,190,195,196,199,200,201,202,203,205,207,208,209,211,212,213, 217,219,220,221,225,226,230,234,235,236,237,238,239,240,241,242,243,244,257,
	 // 261,262,263,264,265,270,271,272,273,274,278,279,280,281,282,283,284,285,286,
	 // 287,288,289,337.
	 // 
	 // Example: CONTROLS::DISABLE_CONTROL_ACTION(2, 19, true) disables the switching UI from appearing both when using a keyboard and Xbox 360 controller. Needs to be executed each frame. 
	 //  
	 // Control group 1 and 0 gives the same results as 2. Same results for all players. 
	static void DISABLE_CONTROL_ACTION(int padIndex, int control, BOOL disable) { return invoke<void>(0xFE99B66D079CF6BC, padIndex, control, disable); } // 0xFE99B66D079CF6BC 0x3800C0DC b323
	 // control values and meaning: github.com/crosire/scripthookvdotnet/blob/dev/source/scripting/Controls.hpp
	 // 
	 // padIndex: 0 (PLAYER_CONTROL), 1 (unk) and 2 (unk) used in the scripts.
	 // 
	 // Control values from the decompiled scripts: 
	 // 0,1,2,3,4,5,6,8,9,10,11,14,15,16,17,19,21,22,24,25,26,30,31,32,33,34,35,36,
	 // 37,44,46,47,59,60,65,68,69,70,71,72,73,74,75,76,79,80,81,82,86,95,98,99,100
	 // ,101,114,140,141,143,172,173,174,175,176,177,178,179,180,181,187,188,189,19
	 // 0,195,196,197,198,199,201,202,203,204,205,206,207,208,209,210,217,218,219,2
	 // 20,221,225,228,229,230,231,234,235,236,237,238,239,240,241,242,245,246,257,
	 // 261,262,263,264,286,287,288,289,337,338,339,340,341,342,343
	 // 
	 // INPUTGROUP_MOVE
	 // INPUTGROUP_LOOK
	 // INPUTGROUP_WHEEL
	 // INPUTGROUP_CELLPHONE_NAVIGATE
	 // INPUTGROUP_CELLPHONE_NAVIGATE_UD
	 // INPUTGROUP_CELLPHONE_NAVIGATE_LR
	 // INPUTGROUP_FRONTEND_DPAD_ALL
	 // INPUTGROUP_FRONTEND_DPAD_UD
	 // INPUTGROUP_FRONTEND_DPAD_LR
	 // INPUTGROUP_FRONTEND_LSTICK_ALL
	 // INPUTGROUP_FRONTEND_RSTICK_ALL
	 // INPUTGROUP_FRONTEND_GENERIC_UD
	 // INPUTGROUP_FRONTEND_GENERIC_LR
	 // INPUTGROUP_FRONTEND_GENERIC_ALL
	 // INPUTGROUP_FRONTEND_BUMPERS
	 // INPUTGROUP_FRONTEND_TRIGGERS
	 // INPUTGROUP_FRONTEND_STICKS
	 // INPUTGROUP_SCRIPT_DPAD_ALL
	 // INPUTGROUP_SCRIPT_DPAD_UD
	 // INPUTGROUP_SCRIPT_DPAD_LR
	 // INPUTGROUP_SCRIPT_LSTICK_ALL
	 // INPUTGROUP_SCRIPT_RSTICK_ALL
	 // INPUTGROUP_SCRIPT_BUMPERS
	 // INPUTGROUP_SCRIPT_TRIGGERS
	 // INPUTGROUP_WEAPON_WHEEL_CYCLE
	 // INPUTGROUP_FLY
	 // INPUTGROUP_SUB
	 // INPUTGROUP_VEH_MOVE_ALL
	 // INPUTGROUP_CURSOR
	 // INPUTGROUP_CURSOR_SCROLL
	 // INPUTGROUP_SNIPER_ZOOM_SECONDARY
	 // INPUTGROUP_VEH_HYDRAULICS_CONTROL
	 // 
	 // 
	 // Took those in IDA Pro.Not sure in which order they go
	static void ENABLE_CONTROL_ACTION(int padIndex, int control, BOOL enable) { return invoke<void>(0x351220255D64C155, padIndex, control, enable); } // 0x351220255D64C155 0xD2753551 b323
	 // padIndex: 0 (PLAYER_CONTROL), 1 (unk) and 2 (unk) used in the scripts.
	static void DISABLE_ALL_CONTROL_ACTIONS(int padIndex) { return invoke<void>(0x5F4B6931816E599B, padIndex); } // 0x5F4B6931816E599B 0x16753CF4 b323
	 // padIndex: 0 (PLAYER_CONTROL), 1 (unk) and 2 (unk) used in the scripts.
	static void ENABLE_ALL_CONTROL_ACTIONS(int padIndex) { return invoke<void>(0xA5FFE9B05F199DE7, padIndex); } // 0xA5FFE9B05F199DE7 0xFC2F119F b323
	 // Used in carsteal3 script with p0 = "Carsteal4_spycar".
	 // 
	 // S*
	static BOOL _SWITCH_TO_INPUT_MAPPING_SCHEME(const char* name) { return invoke<BOOL>(0x3D42B92563939375, name); } // 0x3D42B92563939375 0xD2C80B2E b323
	 // S*
	static void _RESET_INPUT_MAPPING_SCHEME() { return invoke<void>(0x643ED62D5EA3BEBD); } // 0x643ED62D5EA3BEBD 0x42140FF9 b323
	 // padIndex: 0 (PLAYER_CONTROL), 1 (unk) and 2 (unk) used in the scripts.
	 // 
	 // A*
	static void _0x7F4724035FDCA1DD(int padIndex) { return invoke<void>(0x7F4724035FDCA1DD, padIndex); } // 0x7F4724035FDCA1DD 0x2CEDE6C5 b323
}

namespace PATHFIND
{
	static void SET_ROADS_IN_AREA(float x1, float y1, float z1, float x2, float y2, float z2, BOOL unknown1, BOOL unknown2) { return invoke<void>(0xBF1A602B5BA52FEE, x1, y1, z1, x2, y2, z2, unknown1, unknown2); } // 0xBF1A602B5BA52FEE 0xEBC7B918 b323
	 // /* Corrected conflicting parameter names */
	static void SET_ROADS_IN_ANGLED_AREA(float x1, float y1, float z1, float x2, float y2, float z2, float angle, BOOL unknown1, BOOL unknown2, BOOL unknown3) { return invoke<void>(0x1A5AA1208AF5DB59, x1, y1, z1, x2, y2, z2, angle, unknown1, unknown2, unknown3); } // 0x1A5AA1208AF5DB59 0xBD088F4B b323
	static void SET_PED_PATHS_IN_AREA(float x1, float y1, float z1, float x2, float y2, float z2, BOOL unknown, Any p7) { return invoke<void>(0x34F060F4BF92E018, x1, y1, z1, x2, y2, z2, unknown, p7); } // 0x34F060F4BF92E018 0x2148EA84 b323
	 // When onGround == true outPosition is a position located on the nearest pavement.
	 // 
	 // When a safe coord could not be found the result of a function is false and outPosition == Vector3.Zero.
	 // 
	 // In the scripts these flags are used: 0, 14, 12, 16, 20, 21, 28. 0 is most commonly used, then 16. 
	 // 
	 // 16 works for me, 0 crashed the script.
	static BOOL GET_SAFE_COORD_FOR_PED(float x, float y, float z, BOOL onGround, Vector3* outPosition, int flags) { return invoke<BOOL>(0xB61C8E878A4199CA, x, y, z, onGround, outPosition, flags); } // 0xB61C8E878A4199CA 0xB370270A b323
	 // FYI: When falling through the map (or however you got under it) you will respawn when your player ped's height is <= -200.0 meters (I think you all know this) and when in a vehicle you will actually respawn at the closest vehicle node.
	 // 
	 // ----------
	 // 
	 // Vector3 nodePos;
	 // GET_CLOSEST_VEHICLE_NODE(x,y,z,&nodePos,...)
	 // 
	 // p4 is either 0, 1 or 8. 1 means any path/road. 0 means node in the middle of the closest main (asphalt) road.
	 // p5, p6 are always the same:
	 // 0x40400000 (3.0), 0
	 // p5 can also be 100.0 and p6 can be 2.5:
	 // PATHFIND::GET_CLOSEST_VEHICLE_NODE(a_0, &v_5, v_9, 100.0, 2.5)
	 // 
	 // Known node types: simple path/asphalt road, only asphalt road, water, under the map at always the same coords. 
	 // 
	 // The node types follows a pattern. For example, every fourth node is of the type water i.e. 3, 7, 11, 15, 19, 23, 27, 31, 35, 39... 239. Could not see any difference between nodes within certain types. 
	 // Starting at 2, every fourth node is under the map, always same coords.
	 // Same with only asphalt road (0, 4, 8, etc) and simple path/asphalt road (1, 5, 9, etc). 
	 // 
	 // gtaforums.com/topic/843561-pathfind-node-types
	static BOOL GET_CLOSEST_VEHICLE_NODE(float x, float y, float z, Vector3* outPosition, int nodeType, float p5, float p6) { return invoke<BOOL>(0x240A18690AE96513, x, y, z, outPosition, nodeType, p5, p6); } // 0x240A18690AE96513 0x6F5F1E6C b323
	 // Get the closest vehicle node to a given position, unknown1 = 3.0, unknown2 = 0
	static BOOL GET_CLOSEST_MAJOR_VEHICLE_NODE(float x, float y, float z, Vector3* outPosition, float unknown1, int unknown2) { return invoke<BOOL>(0x2EABE3B06F58C1BE, x, y, z, outPosition, unknown1, unknown2); } // 0x2EABE3B06F58C1BE 0x04B5F15B b323
	 // p5, p6 and p7 seems to be about the same as p4, p5 and p6 for GET_CLOSEST_VEHICLE_NODE. p6 and/or p7 has something to do with finding a node on the same path/road and same direction(at least for this native, something to do with the heading maybe). Edit this when you find out more.
	 // 
	 // p5 is either 1 or 12. 1 means any path/road. 12, 8, 0 means node in the middle of the closest main (asphalt) road.
	 // p6 is always 3.0
	 // p7 is always 0.
	 // 
	 // Known node types: simple path/asphalt road, only asphalt road, water, under the map at always the same coords. 
	 // 
	 // The node types follows a pattern. For example, every fourth node is of the type water i.e. 3, 7, 11, 15, 19, 23, 27, 31, 35, 39... 239. Could not see any difference between nodes within certain types. 
	 // Starting at 2, every fourth node is under the map, always same coords.
	 // Same with only asphalt road (0, 4, 8, etc) and simple path/asphalt road (1, 5, 9, etc).
	 // 
	 // gtaforums.com/topic/843561-pathfind-node-types
	 // 
	 // Example of usage, moving vehicle to closest path/road:
	 // Vector3 coords = ENTITY::GET_ENTITY_COORDS(playerVeh, true);
	 // Vector3 closestVehicleNodeCoords; 
	 // float roadHeading; 
	 // PATHFIND::GET_CLOSEST_VEHICLE_NODE_WITH_HEADING(coords.x, coords.y, coords.z, &closestVehicleNodeCoords, &roadHeading, 1, 3, 0); 
	 // ENTITY::SET_ENTITY_HEADING(playerVeh, roadHeading);
	 // ENTITY::SET_ENTITY_COORDS(playerVeh, closestVehicleNodeCoords.x, closestVehicleNodeCoords.y, closestVehicleNodeCoords.z, 1, 0, 0, 1);
	 // VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(playerVeh);
	 // 
	 // ------------------------------------------------------------------
	 // C# Example (ins1de) : pastebin.com/fxtMWAHD
	static BOOL GET_CLOSEST_VEHICLE_NODE_WITH_HEADING(float x, float y, float z, Vector3* outPosition, float* outHeading, int nodeType, float p6, int p7) { return invoke<BOOL>(0xFF071FB798B803B0, x, y, z, outPosition, outHeading, nodeType, p6, p7); } // 0xFF071FB798B803B0 0x8BD5759B b323
	static BOOL GET_NTH_CLOSEST_VEHICLE_NODE(float x, float y, float z, int nthClosest, Vector3* outPosition, Any unknown1, Any unknown2, Any unknown3) { return invoke<BOOL>(0xE50E52416CCF948B, x, y, z, nthClosest, outPosition, unknown1, unknown2, unknown3); } // 0xE50E52416CCF948B 0xF125BFCC b323
	 // Returns the id.
	static int GET_NTH_CLOSEST_VEHICLE_NODE_ID(float x, float y, float z, int nth, int nodetype, float p5, float p6) { return invoke<int>(0x22D7275A79FE8215, x, y, z, nth, nodetype, p5, p6); } // 0x22D7275A79FE8215 0x3F358BEA b323
	 // Get the nth closest vehicle node and its heading. (unknown2 = 9, unknown3 = 3.0, unknown4 = 2.5)
	static BOOL GET_NTH_CLOSEST_VEHICLE_NODE_WITH_HEADING(float x, float y, float z, int nthClosest, Vector3* outPosition, float* outHeading, Any* unknown1, int unknown2, float unknown3, float unknown4) { return invoke<BOOL>(0x80CA6A8B6C094CC4, x, y, z, nthClosest, outPosition, outHeading, unknown1, unknown2, unknown3, unknown4); } // 0x80CA6A8B6C094CC4 0x7349C856 b323
	 // See gtaforums.com/topic/843561-pathfind-node-types for node type info. 0 = paved road only, 1 = any road, 3 = water
	 // 
	 // p10 always equals 3.0
	 // p11 always equals 0
	static BOOL GET_NTH_CLOSEST_VEHICLE_NODE_FAVOUR_DIRECTION(float x, float y, float z, float desiredX, float desiredY, float desiredZ, int nthClosest, Vector3* outPosition, float* outHeading, int nodetype, float p10, Any p11) { return invoke<BOOL>(0x45905BE8654AE067, x, y, z, desiredX, desiredY, desiredZ, nthClosest, outPosition, outHeading, nodetype, p10, p11); } // 0x45905BE8654AE067 0x928A4DEC b323
	 // MulleDK19: Gets the density and flags of the closest node to the specified position.
	 // Density is a value between 0 and 15, indicating how busy the road is.
	 // Flags is a bit field.
	static BOOL GET_VEHICLE_NODE_PROPERTIES(float x, float y, float z, int* density, int* flags) { return invoke<BOOL>(0x0568566ACBB5DEDC, x, y, z, density, flags); } // 0x0568566ACBB5DEDC 0xCC90110B b323
	 // Returns true if the id is non zero.
	static BOOL IS_VEHICLE_NODE_ID_VALID(int vehicleNodeId) { return invoke<BOOL>(0x1EAF30FCFBF5AF74, vehicleNodeId); } // 0x1EAF30FCFBF5AF74 0x57DFB1EF b323
	 // Calling this with an invalid node id, will crash the game.
	 // Note that IS_VEHICLE_NODE_ID_VALID simply checks if nodeId is not zero. It does not actually ensure that the id is valid.
	 // Eg. IS_VEHICLE_NODE_ID_VALID(1) will return true, but will crash when calling GET_VEHICLE_NODE_POSITION().
	static void GET_VEHICLE_NODE_POSITION(int nodeId, Vector3* outPosition) { return invoke<void>(0x703123E5E7D429C2, nodeId, outPosition); } // 0x703123E5E7D429C2 0xE38E252D b323
	 // Returns false for nodes that aren't used for GPS routes.
	 // Example:
	 // Nodes in Fort Zancudo and LSIA are false
	static BOOL GET_VEHICLE_NODE_IS_GPS_ALLOWED(int nodeID) { return invoke<BOOL>(0xA2AE5C478B96E3B6, nodeID); } // 0xA2AE5C478B96E3B6 0xEE4B1219 b323
	 // Returns true when the node is Offroad. Alleys, some dirt roads, and carparks return true.
	 // Normal roads where plenty of Peds spawn will return false
	static BOOL GET_VEHICLE_NODE_IS_SWITCHED_OFF(int nodeID) { return invoke<BOOL>(0x4F5070AA58F69279, nodeID); } // 0x4F5070AA58F69279 0x56737A3C b323
	 // p1 seems to be always 1.0f in the scripts
	static Any GET_CLOSEST_ROAD(float x, float y, float z, float p3, int p4, Vector3* p5, Vector3* p6, Any* p7, Any* p8, float* p9, BOOL p10) { return invoke<Any>(0x132F52BBA570FE92, x, y, z, p3, p4, p5, p6, p7, p8, p9, p10); } // 0x132F52BBA570FE92 0x567B0E11 b323
	 // SET_ALL_PATHS_CACHE_BOUNDINGSTRUCT ?
	static void _0x228E5C6AD4D74BFD(BOOL toggle) { return invoke<void>(0x228E5C6AD4D74BFD, toggle); } // 0x228E5C6AD4D74BFD 0xD6A3B458 b323
	 // ARE_*
	static BOOL _ARE_PATH_NODES_LOADED_IN_AREA(float x1, float y1, float x2, float y2) { return invoke<BOOL>(0xF7B79A50B905A30D, x1, y1, x2, y2); } // 0xF7B79A50B905A30D 0x86E80A17 b323
	static BOOL _0x07FB139B592FA687(float p0, float p1, float p2, float p3) { return invoke<BOOL>(0x07FB139B592FA687, p0, p1, p2, p3); } // 0x07FB139B592FA687 0x2CDA5012 b323
	 // missing a last parameter int p6 
	static void SET_ROADS_BACK_TO_ORIGINAL(float p0, float p1, float p2, float p3, float p4, float p5, Any p6) { return invoke<void>(0x1EE7063B80FFC77C, p0, p1, p2, p3, p4, p5, p6); } // 0x1EE7063B80FFC77C 0x86AC4A85 b323
	 // bool p7 - always 1
	static void SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(float x1, float y1, float z1, float x2, float y2, float z2, float p6, Any p7) { return invoke<void>(0x0027501B9F3B407E, x1, y1, z1, x2, y2, z2, p6, p7); } // 0x0027501B9F3B407E 0x9DB5D209 b323
	static void SET_AMBIENT_PED_RANGE_MULTIPLIER_THIS_FRAME(float multiplier) { return invoke<void>(0x0B919E1FB47CC4E0, multiplier); } // 0x0B919E1FB47CC4E0 0x3C5085E4 b323
	static void SET_PED_PATHS_BACK_TO_ORIGINAL(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { return invoke<void>(0xE04B48F2CC926253, p0, p1, p2, p3, p4, p5, p6); } // 0xE04B48F2CC926253 0x3F1ABDA4 b323
	static BOOL GET_RANDOM_VEHICLE_NODE(float x, float y, float z, float radius, BOOL p4, BOOL p5, BOOL p6, Vector3* outPosition, int* nodeId) { return invoke<BOOL>(0x93E0DB8440B73A7D, x, y, z, radius, p4, p5, p6, outPosition, nodeId); } // 0x93E0DB8440B73A7D 0xAD1476EA b323
	 // Determines the name of the street which is the closest to the given coordinates.
	 // 
	 // x,y,z - the coordinates of the street
	 // streetName - returns a hash to the name of the street the coords are on
	 // crossingRoad - if the coordinates are on an intersection, a hash to the name of the crossing road
	 // 
	 // Note: the names are returned as hashes, the strings can be returned using the function UI::GET_STREET_NAME_FROM_HASH_KEY.
	static void GET_STREET_NAME_AT_COORD(float x, float y, float z, Hash* streetName, Hash* crossingRoad) { return invoke<void>(0x2EB41072B4C1E4C0, x, y, z, streetName, crossingRoad); } // 0x2EB41072B4C1E4C0 0xDEBEEFCF b323
	static void SET_IGNORE_NO_GPS_FLAG(BOOL toggle) { return invoke<void>(0x72751156E7678833, toggle); } // 0x72751156E7678833 0xB72CF194 b323
	static void _SET_IGNORE_SECONDARY_ROUTE_NODES(BOOL toggle) { return invoke<void>(0x1FC289A0C3FF470F, toggle); } // 0x1FC289A0C3FF470F 0x90DF7A4C b323
	static void SET_GPS_DISABLED_ZONE(float x1, float y1, float z1, float x2, float y2, float z3) { return invoke<void>(0xDC20483CD3DD5201, x1, y1, z1, x2, y2, z3); } // 0xDC20483CD3DD5201 0x720B8073 b323
	static int GET_GPS_BLIP_ROUTE_LENGTH() { return invoke<int>(0xBBB45C3CF5C8AA85); } // 0xBBB45C3CF5C8AA85 0x4B770634 b323
	static BOOL GET_GPS_BLIP_ROUTE_FOUND() { return invoke<BOOL>(0x869DAACBBE9FA006); } // 0x869DAACBBE9FA006 0x286F82CC b323
	static Any _GET_POINT_ON_ROAD_SIDE(Any p0, Any p1, Any p2, Any p3, Any p4) { return invoke<Any>(0x16F46FB18C8009E4, p0, p1, p2, p3, p4); } // 0x16F46FB18C8009E4 0xF6422F9A b323
	static void REMOVE_NAVMESH_REQUIRED_REGIONS() { return invoke<void>(0x916F0A3CDEC3445E); } // 0x916F0A3CDEC3445E 0x637BB680 b323
	static void DISABLE_NAVMESH_IN_AREA(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { return invoke<void>(0x4C8872D8CDBE1B8B, p0, p1, p2, p3, p4, p5, p6); } // 0x4C8872D8CDBE1B8B 0x6E37F132 b323
	static Any ADD_NAVMESH_BLOCKING_OBJECT(float p0, float p1, float p2, float p3, float p4, float p5, float p6, BOOL p7, Any p8) { return invoke<Any>(0xFCD5C8E06E502F5A, p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 0xFCD5C8E06E502F5A 0x2952BA56 b323
	static void REMOVE_NAVMESH_BLOCKING_OBJECT(Any p0) { return invoke<void>(0x46399A7895957C0E, p0); } // 0x46399A7895957C0E 0x098602B0 b323
	static BOOL DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Any p0) { return invoke<BOOL>(0x0EAEB0DB4B132399, p0); } // 0x0EAEB0DB4B132399 0x4B67D7EE b323
	static float _GET_HEIGHTMAP_TOP_Z_FOR_POSITION(float p0, float p1) { return invoke<float>(0x29C24BFBED8AB8FB, p0, p1); } // 0x29C24BFBED8AB8FB 0x3FE8C5A0 b323
	static float _GET_HEIGHTMAP_TOP_Z_FOR_AREA(float p0, float p1, float p2, float p3) { return invoke<float>(0x8ABE8608576D9CE3, p0, p1, p2, p3); } // 0x8ABE8608576D9CE3 0x3ED21C90 b323
	static float _GET_HEIGHTMAP_BOTTOM_Z_FOR_POSITION(float left, float right) { return invoke<float>(0x336511A34F2E5185, left, right); } // 0x336511A34F2E5185 0xA07C5B7D b323
	static float _GET_HEIGHTMAP_BOTTOM_Z_FOR_AREA(float p0, float p1, float p2, float p3) { return invoke<float>(0x3599D741C9AC6310, p0, p1, p2, p3); } // 0x3599D741C9AC6310 0x76751DD4 b323
	 // Calculates the travel distance between a set of points.
	 // 
	 // Doesn't seem to correlate with distance on gps sometimes.
	static float CALCULATE_TRAVEL_DISTANCE_BETWEEN_POINTS(float x1, float y1, float z1, float x2, float y2, float z2) { return invoke<float>(0xADD95C7005C4A197, x1, y1, z1, x2, y2, z2); } // 0xADD95C7005C4A197 0xB114489B b323
}

namespace PED
{
	 // https://alloc8or.re/gta5/doc/enums/ePedType.txt
	static Ped CREATE_PED(int pedType, Hash modelHash, float x, float y, float z, float heading, BOOL isNetwork, BOOL netMissionEntity) { return invoke<Ped>(0xD49F9B0955C367DE, pedType, modelHash, x, y, z, heading, isNetwork, netMissionEntity); } // 0xD49F9B0955C367DE 0x0389EF71 b323
	 // Deletes the specified ped, then sets the handle pointed to by the pointer to NULL.
	static void DELETE_PED(Ped* ped) { return invoke<void>(0x9614299DCB53E54B, ped); } // 0x9614299DCB53E54B 0x13EFB9A0 b323
	 // Example of Cloning Your Player:
	 // CLONE_PED(PLAYER_PED_ID(), GET_ENTITY_HEADING(PLAYER_PED_ID()), 0, 1);
	static Ped CLONE_PED(Ped ped, float heading, BOOL isNetwork, BOOL netMissionEntity) { return invoke<Ped>(0xEF29A16337FACADB, ped, heading, isNetwork, netMissionEntity); } // 0xEF29A16337FACADB 0x8C8A8D6E b323
	 // Copies ped's components and props to targetPed.
	static void CLONE_PED_TO_TARGET(Ped ped, Ped targetPed) { return invoke<void>(0xE952D6431689AD9A, ped, targetPed); } // 0xE952D6431689AD9A 0xFC70EEC7 b323
	 // Gets a value indicating whether the specified ped is in the specified vehicle.
	 // 
	 // If 'atGetIn' is false, the function will not return true until the ped is sitting in the vehicle and is about to close the door. If it's true, the function returns true the moment the ped starts to get onto the seat (after opening the door). Eg. if false, and the ped is getting into a submersible, the function will not return true until the ped has descended down into the submersible and gotten into the seat, while if it's true, it'll return true the moment the hatch has been opened and the ped is about to descend into the submersible.
	static BOOL IS_PED_IN_VEHICLE(Ped ped, Vehicle vehicle, BOOL atGetIn) { return invoke<BOOL>(0xA3EE4A07279BB9DB, ped, vehicle, atGetIn); } // 0xA3EE4A07279BB9DB 0x7DA6BC83 b323
	static BOOL IS_PED_IN_MODEL(Ped ped, Hash modelHash) { return invoke<BOOL>(0x796D90EFB19AA332, ped, modelHash); } // 0x796D90EFB19AA332 0xA6438D4B b323
	 // Gets a value indicating whether the specified ped is in any vehicle.
	 // 
	 // If 'atGetIn' is false, the function will not return true until the ped is sitting in the vehicle and is about to close the door. If it's true, the function returns true the moment the ped starts to get onto the seat (after opening the door). Eg. if false, and the ped is getting into a submersible, the function will not return true until the ped has descended down into the submersible and gotten into the seat, while if it's true, it'll return true the moment the hatch has been opened and the ped is about to descend into the submersible.
	static BOOL IS_PED_IN_ANY_VEHICLE(Ped ped, BOOL atGetIn) { return invoke<BOOL>(0x997ABD671D25CA0B, ped, atGetIn); } // 0x997ABD671D25CA0B 0x3B0171EE b323
	 // xyz - relative to the world origin.
	static BOOL IS_COP_PED_IN_AREA_3D(float x1, float y1, float z1, float x2, float y2, float z2) { return invoke<BOOL>(0x16EC4839969F9F5E, x1, y1, z1, x2, y2, z2); } // 0x16EC4839969F9F5E 0xB98DB96B b323
	 // Gets a value indicating whether this ped's health is below its injured threshold.
	 // 
	 // The default threshold is 100.
	static BOOL IS_PED_INJURED(Ped ped) { return invoke<BOOL>(0x84A2DD9AC37C35C1, ped); } // 0x84A2DD9AC37C35C1 0x2530A087 b323
	 // Returns whether the specified ped is hurt.
	static BOOL IS_PED_HURT(Ped ped) { return invoke<BOOL>(0x5983BB449D7FDB12, ped); } // 0x5983BB449D7FDB12 0x69DFA0AF b323
	 // Gets a value indicating whether this ped's health is below its fatally injured threshold. The default threshold is 100.
	 // If the handle is invalid, the function returns true.
	static BOOL IS_PED_FATALLY_INJURED(Ped ped) { return invoke<BOOL>(0xD839450756ED5A80, ped); } // 0xD839450756ED5A80 0xBADA0093 b323
	 // Seems to consistently return true if the ped is dead.
	 // 
	 // p1 is always passed 1 in the scripts.
	 // 
	 // I suggest to remove "OR_DYING" part, because it does not detect dying phase.
	 // 
	 // That's what the devs call it, cry about it.
	 // 
	 // lol
	static BOOL IS_PED_DEAD_OR_DYING(Ped ped, BOOL p1) { return invoke<BOOL>(0x3317DEDB88C95038, ped, p1); } // 0x3317DEDB88C95038 0xCBDB7739 b323
	static BOOL IS_CONVERSATION_PED_DEAD(Ped ped) { return invoke<BOOL>(0xE0A0AEC214B1FABA, ped); } // 0xE0A0AEC214B1FABA 0x1FA39EFE b323
	 // Returns true if the given ped has a valid pointer to CPlayerInfo in its CPed class. That's all.
	static BOOL IS_PED_A_PLAYER(Ped ped) { return invoke<BOOL>(0x12534C348C6CB68B, ped); } // 0x12534C348C6CB68B 0x404794CA b323
	 // pedType: see CREATE_PED
	static Ped CREATE_PED_INSIDE_VEHICLE(Vehicle vehicle, int pedType, Hash modelHash, int seat, BOOL isNetwork, BOOL netMissionEntity) { return invoke<Ped>(0x7DD959874C1FD534, vehicle, pedType, modelHash, seat, isNetwork, netMissionEntity); } // 0x7DD959874C1FD534 0x3000F092 b323
	static void SET_PED_DESIRED_HEADING(Ped ped, float heading) { return invoke<void>(0xAA5A7ECE2AA8FE70, ped, heading); } // 0xAA5A7ECE2AA8FE70 0x961458F9 b323
	 // angle is ped's view cone
	static BOOL IS_PED_FACING_PED(Ped ped, Ped otherPed, float angle) { return invoke<BOOL>(0xD71649DB0A545AA3, ped, otherPed, angle); } // 0xD71649DB0A545AA3 0x0B775838 b323
	 // Notes: The function only returns true while the ped is: 
	 // A.) Swinging a random melee attack (including pistol-whipping)
	 // 
	 // B.) Reacting to being hit by a melee attack (including pistol-whipping)
	 // 
	 // C.) Is locked-on to an enemy (arms up, strafing/skipping in the default fighting-stance, ready to dodge+counter). 
	 // 
	 // You don't have to be holding the melee-targetting button to be in this stance; you stay in it by default for a few seconds after swinging at someone. If you do a sprinting punch, it returns true for the duration of the punch animation and then returns false again, even if you've punched and made-angry many peds
	static BOOL IS_PED_IN_MELEE_COMBAT(Ped ped) { return invoke<BOOL>(0x4E209B2C1EAD5159, ped); } // 0x4E209B2C1EAD5159 0xFD7814A5 b323
	 // Returns true if the ped doesn't do any movement. If the ped is being pushed forwards by using APPLY_FORCE_TO_ENTITY for example, the function returns false.
	static BOOL IS_PED_STOPPED(Ped ped) { return invoke<BOOL>(0x530944F6F4B8A214, ped); } // 0x530944F6F4B8A214 0xA0DC0B87 b323
	static BOOL IS_PED_SHOOTING_IN_AREA(Ped ped, float x1, float y1, float z1, float x2, float y2, float z2, BOOL p7, BOOL p8) { return invoke<BOOL>(0x7E9DFE24AC1E58EF, ped, x1, y1, z1, x2, y2, z2, p7, p8); } // 0x7E9DFE24AC1E58EF 0x741BF04F b323
	static BOOL IS_ANY_PED_SHOOTING_IN_AREA(float x1, float y1, float z1, float x2, float y2, float z2, BOOL p6, BOOL p7) { return invoke<BOOL>(0xA0D3D71EA1086C55, x1, y1, z1, x2, y2, z2, p6, p7); } // 0xA0D3D71EA1086C55 0x91833867 b323
	 // Returns whether the specified ped is shooting.
	static BOOL IS_PED_SHOOTING(Ped ped) { return invoke<BOOL>(0x34616828CD07F1A1, ped); } // 0x34616828CD07F1A1 0xE7C3405E b323
	 // accuracy = 0-100, 100 being perfectly accurate
	static void SET_PED_ACCURACY(Ped ped, int accuracy) { return invoke<void>(0x7AEFB85C1D49DEB6, ped, accuracy); } // 0x7AEFB85C1D49DEB6 0x6C17122E b323
	static BOOL IS_PED_MODEL(Ped ped, Hash modelHash) { return invoke<BOOL>(0xC9D55B1A358A5BF7, ped, modelHash); } // 0xC9D55B1A358A5BF7 0x5F1DDFCB b323
	 // Forces the ped to fall back and kills it.
	 // 
	 // It doesn't really explode the ped's head but it kills the ped
	static void EXPLODE_PED_HEAD(Ped ped, Hash weaponHash) { return invoke<void>(0x2D05CED3A38D0F3A, ped, weaponHash); } // 0x2D05CED3A38D0F3A 0x05CC1380 b323
	 // Same as SET_PED_ARMOUR, but ADDS 'amount' to the armor the Ped already has.
	static void ADD_ARMOUR_TO_PED(Ped ped, int amount) { return invoke<void>(0x5BA652A0CD14DF2F, ped, amount); } // 0x5BA652A0CD14DF2F 0xF686B26E b323
	 // Sets the armor of the specified ped.
	 // 
	 // ped: The Ped to set the armor of.
	 // amount: A value between 0 and 100 indicating the value to set the Ped's armor to.
	static void SET_PED_ARMOUR(Ped ped, int amount) { return invoke<void>(0xCEA04D83135264CC, ped, amount); } // 0xCEA04D83135264CC 0x4E3A0CC4 b323
	 // Ped: The ped to warp.
	 // vehicle: The vehicle to warp the ped into.
	 // Seat_Index: [-1 is driver seat, -2 first free passenger seat]
	 // 
	 // Moreinfo of Seat Index
	 // DriverSeat = -1
	 // Passenger = 0
	 // Left Rear = 1
	 // RightRear = 2
	static void SET_PED_INTO_VEHICLE(Ped ped, Vehicle vehicle, int seatIndex) { return invoke<void>(0xF75B0D629E1C063D, ped, vehicle, seatIndex); } // 0xF75B0D629E1C063D 0x07500C79 b323
	static void SET_PED_ALLOW_VEHICLES_OVERRIDE(Ped ped, BOOL toggle) { return invoke<void>(0x3C028C636A414ED9, ped, toggle); } // 0x3C028C636A414ED9 0x58A80BD5 b323
	static BOOL CAN_CREATE_RANDOM_PED(BOOL unk) { return invoke<BOOL>(0x3E8349C08E4B82E4, unk); } // 0x3E8349C08E4B82E4 0xF9ABE88F b323
	 // vb.net
	 // Dim ped_handle As Integer
	 //                     With Game.Player.Character
	 //                         Dim pos As Vector3 = .Position + .ForwardVector * 3
	 //                         ped_handle = Native.Function.Call(Of Integer)(Hash.CREATE_RANDOM_PED, pos.X, pos.Y, pos.Z)
	 //                     End With
	 // 
	 // Creates a Ped at the specified location, returns the Ped Handle.  
	 // Ped will not act until SET_PED_AS_NO_LONGER_NEEDED is called.
	static Ped CREATE_RANDOM_PED(float posX, float posY, float posZ) { return invoke<Ped>(0xB4AC7D0CF06BFE8F, posX, posY, posZ); } // 0xB4AC7D0CF06BFE8F 0x5A949543 b323
	static Ped CREATE_RANDOM_PED_AS_DRIVER(Vehicle vehicle, BOOL returnHandle) { return invoke<Ped>(0x9B62392B474F44A0, vehicle, returnHandle); } // 0x9B62392B474F44A0 0xB927CE9A b323
	static BOOL CAN_CREATE_RANDOM_DRIVER() { return invoke<BOOL>(0xB8EB95E5B4E56978); } // 0xB8EB95E5B4E56978 0x99861609 b323
	static BOOL CAN_CREATE_RANDOM_BIKE_RIDER() { return invoke<BOOL>(0xEACEEDA81751915C); } // 0xEACEEDA81751915C 0x7018BE31 b323
	static void SET_PED_MOVE_ANIMS_BLEND_OUT(Ped ped) { return invoke<void>(0x9E8C908F41584ECD, ped); } // 0x9E8C908F41584ECD 0x20E01957 b323
	static void SET_PED_CAN_BE_DRAGGED_OUT(Ped ped, BOOL toggle) { return invoke<void>(0xC1670E958EEE24E5, ped, toggle); } // 0xC1670E958EEE24E5 0xAA7F1131 b323
	 // Returns true/false if the ped is/isn't male.
	static BOOL IS_PED_MALE(Ped ped) { return invoke<BOOL>(0x6D9F5FAA7488BA46, ped); } // 0x6D9F5FAA7488BA46 0x90950455 b323
	 // Returns true/false if the ped is/isn't humanoid.
	static BOOL IS_PED_HUMAN(Ped ped) { return invoke<BOOL>(0xB980061DA992779D, ped); } // 0xB980061DA992779D 0x194BB7B0 b323
	 // Gets the vehicle the specified Ped is in.
	 // 
	 // If the Ped is not in a vehicle and includeLastVehicle is true, the vehicle they were last in is returned.
	static Vehicle GET_VEHICLE_PED_IS_IN(Ped ped, BOOL includeLastVehicle) { return invoke<Vehicle>(0x9A9112A0FE9A4713, ped, includeLastVehicle); } // 0x9A9112A0FE9A4713 0xAFE92319 b323
	 // Resets the value for the last vehicle driven by the Ped.
	static void RESET_PED_LAST_VEHICLE(Ped ped) { return invoke<void>(0xBB8DE8CF6A8DD8BB, ped); } // 0xBB8DE8CF6A8DD8BB 0x5E3B5942 b323
	static void SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(float multiplier) { return invoke<void>(0x95E3D6257B166CF2, multiplier); } // 0x95E3D6257B166CF2 0x039C82BB b323
	static void SET_SCENARIO_PED_DENSITY_MULTIPLIER_THIS_FRAME(float p0, float p1) { return invoke<void>(0x7A556143A1C03898, p0, p1); } // 0x7A556143A1C03898 0x2909ABF0 b323
	static void _0x5A7F62FDA59759BD() { return invoke<void>(0x5A7F62FDA59759BD); } // 0x5A7F62FDA59759BD 0xB48C0C04 b323
	static void SET_SCRIPTED_CONVERSION_COORD_THIS_FRAME(float x, float y, float z) { return invoke<void>(0x5086C7843552CF85, x, y, z); } // 0x5086C7843552CF85 0x25EA2AA5 b323
	 // The distance between these points, is the diagonal of a box (remember it's 3D).
	static void SET_PED_NON_CREATION_AREA(float x1, float y1, float z1, float x2, float y2, float z2) { return invoke<void>(0xEE01041D559983EA, x1, y1, z1, x2, y2, z2); } // 0xEE01041D559983EA 0x7A97283F b323
	static void CLEAR_PED_NON_CREATION_AREA() { return invoke<void>(0x2E05208086BA0651); } // 0x2E05208086BA0651 0x6F7043A3 b323
	 // Something regarding ped population.
	static void _0x4759CC730F947C81() { return invoke<void>(0x4759CC730F947C81); } // 0x4759CC730F947C81 0x8C555ADD b323
	 // Same function call as PED::GET_MOUNT, aka just returns 0
	static BOOL IS_PED_ON_MOUNT(Ped ped) { return invoke<BOOL>(0x460BC76A0E10655E, ped); } // 0x460BC76A0E10655E 0x43103006 b323
	 // Gets a value indicating whether the specified ped is on top of any vehicle.
	 // 
	 // Return 1 when ped is on vehicle.
	 // Return 0 when ped is not on a vehicle.
	 // 
	static BOOL IS_PED_ON_VEHICLE(Ped ped) { return invoke<BOOL>(0x67722AEB798E5FAB, ped); } // 0x67722AEB798E5FAB 0xA1AE7CC7 b323
	static BOOL IS_PED_ON_SPECIFIC_VEHICLE(Ped ped, Vehicle vehicle) { return invoke<BOOL>(0xEC5F66E459AF3BB2, ped, vehicle); } // 0xEC5F66E459AF3BB2 0x63CB4603 b323
	 // Maximum possible amount of money on MP is 2000. ~JX
	 // 
	 // -----------------------------------------------------------------------------
	 // 
	 // Maximum amount that a ped can theoretically have is 65535 (0xFFFF) since the amount is stored as an unsigned short (uint16_t) value.
	static void SET_PED_MONEY(Ped ped, int amount) { return invoke<void>(0xA9C8960E8684C1B5, ped, amount); } // 0xA9C8960E8684C1B5 0x40D90BF2 b323
	static int GET_PED_MONEY(Ped ped) { return invoke<int>(0x3F69145BBA87BAE7, ped); } // 0x3F69145BBA87BAE7 0xEB3C4C7E b323
	 // ped cannot be headshot if this is set to false
	static void SET_PED_SUFFERS_CRITICAL_HITS(Ped ped, BOOL toggle) { return invoke<void>(0xEBD76F2359F190AC, ped, toggle); } // 0xEBD76F2359F190AC 0x6F6FC7E6 b323
	 // Detect if ped is sitting in the specified vehicle
	 // [True/False]
	static BOOL IS_PED_SITTING_IN_VEHICLE(Ped ped, Vehicle vehicle) { return invoke<BOOL>(0xA808AA1D79230FC2, ped, vehicle); } // 0xA808AA1D79230FC2 0xDDDE26FA b323
	 // Detect if ped is in any vehicle
	 // [True/False]
	static BOOL IS_PED_SITTING_IN_ANY_VEHICLE(Ped ped) { return invoke<BOOL>(0x826AA586EDB9FEF8, ped); } // 0x826AA586EDB9FEF8 0x0EA9CA03 b323
	static BOOL IS_PED_ON_FOOT(Ped ped) { return invoke<BOOL>(0x01FEE67DB37F59B2, ped); } // 0x01FEE67DB37F59B2 0xC60D0785 b323
	static BOOL IS_PED_ON_ANY_BIKE(Ped ped) { return invoke<BOOL>(0x94495889E22C6479, ped); } // 0x94495889E22C6479 0x4D885B2E b323
	static BOOL IS_PED_PLANTING_BOMB(Ped ped) { return invoke<BOOL>(0xC70B5FAE151982D8, ped); } // 0xC70B5FAE151982D8 0x0EDAC574 b323
	static Vector3 GET_DEAD_PED_PICKUP_COORDS(Ped ped, float p1, float p2) { return invoke<Vector3>(0xCD5003B097200F36, ped, p1, p2); } // 0xCD5003B097200F36 0x129F9DC1 b323
	static BOOL IS_PED_IN_ANY_BOAT(Ped ped) { return invoke<BOOL>(0x2E0E1C2B4F6CB339, ped); } // 0x2E0E1C2B4F6CB339 0x1118A947 b323
	static BOOL IS_PED_IN_ANY_SUB(Ped ped) { return invoke<BOOL>(0xFBFC01CCFB35D99E, ped); } // 0xFBFC01CCFB35D99E 0xE65F8059 b323
	static BOOL IS_PED_IN_ANY_HELI(Ped ped) { return invoke<BOOL>(0x298B91AE825E5705, ped); } // 0x298B91AE825E5705 0x7AB5523B b323
	static BOOL IS_PED_IN_ANY_PLANE(Ped ped) { return invoke<BOOL>(0x5FFF4CFC74D8FB80, ped); } // 0x5FFF4CFC74D8FB80 0x51BBCE7E b323
	static BOOL IS_PED_IN_FLYING_VEHICLE(Ped ped) { return invoke<BOOL>(0x9134873537FA419C, ped); } // 0x9134873537FA419C 0xCA072485 b323
	static void SET_PED_DIES_IN_WATER(Ped ped, BOOL toggle) { return invoke<void>(0x56CEF0AC79073BDE, ped, toggle); } // 0x56CEF0AC79073BDE 0x604C872B b323
	static void SET_PED_DIES_IN_SINKING_VEHICLE(Ped ped, BOOL toggle) { return invoke<void>(0xD718A22995E2B4BC, ped, toggle); } // 0xD718A22995E2B4BC 0x8D4D9ABB b323
	static int GET_PED_ARMOUR(Ped ped) { return invoke<int>(0x9483AF821605B1D8, ped); } // 0x9483AF821605B1D8 0x2CE311A7 b323
	static void SET_PED_STAY_IN_VEHICLE_WHEN_JACKED(Ped ped, BOOL toggle) { return invoke<void>(0xEDF4079F9D54C9A1, ped, toggle); } // 0xEDF4079F9D54C9A1 0xB014A09C b323
	static void SET_PED_CAN_BE_SHOT_IN_VEHICLE(Ped ped, BOOL toggle) { return invoke<void>(0xC7EF1BA83230BA07, ped, toggle); } // 0xC7EF1BA83230BA07 0x5DB7B3A9 b323
	static BOOL GET_PED_LAST_DAMAGE_BONE(Ped ped, int* outBone) { return invoke<BOOL>(0xD75960F6BD9EA49C, ped, outBone); } // 0xD75960F6BD9EA49C 0xAB933841 b323
	static void _0x2F3C3D9F50681DE4(Any p0, BOOL p1) { return invoke<void>(0x2F3C3D9F50681DE4, p0, p1); } // 0x2F3C3D9F50681DE4 0xCC9D7F1A b323
	static void SET_PED_CAN_BE_TARGETTED(Ped ped, BOOL toggle) { return invoke<void>(0x63F58F7C80513AAD, ped, toggle); } // 0x63F58F7C80513AAD 0x75C49F74 b323
	static void SET_PED_CAN_BE_TARGETTED_BY_PLAYER(Ped ped, Player player, BOOL toggle) { return invoke<void>(0x66B57B72E0836A76, ped, player, toggle); } // 0x66B57B72E0836A76 0xD050F490 b323
	static void _0x061CB768363D6424(Ped ped, BOOL toggle) { return invoke<void>(0x061CB768363D6424, ped, toggle); } // 0x061CB768363D6424 0x7DA12905 b323
	static void _0xFD325494792302D7(Ped ped, BOOL toggle) { return invoke<void>(0xFD325494792302D7, ped, toggle); } // 0xFD325494792302D7 0x7F67671D b323
	static BOOL IS_PED_IN_ANY_POLICE_VEHICLE(Ped ped) { return invoke<BOOL>(0x0BD04E29640C9C12, ped); } // 0x0BD04E29640C9C12 0x84FA790D b323
	static BOOL IS_PED_IN_PARACHUTE_FREE_FALL(Ped ped) { return invoke<BOOL>(0x7DCE8BDA0F1C1200, ped); } // 0x7DCE8BDA0F1C1200 0xCD71F11B b323
	static BOOL IS_PED_FALLING(Ped ped) { return invoke<BOOL>(0xFB92A102F1C4DFA3, ped); } // 0xFB92A102F1C4DFA3 0xABF77334 b323
	static BOOL IS_PED_JUMPING(Ped ped) { return invoke<BOOL>(0xCEDABC5900A0BF97, ped); } // 0xCEDABC5900A0BF97 0x07E5BC0E b323
	static BOOL IS_PED_CLIMBING(Ped ped) { return invoke<BOOL>(0x53E8CB4F48BFE623, ped); } // 0x53E8CB4F48BFE623 0xBCE03D35 b323
	static BOOL IS_PED_VAULTING(Ped ped) { return invoke<BOOL>(0x117C70D1F5730B5E, ped); } // 0x117C70D1F5730B5E 0xC3169BDA b323
	static BOOL IS_PED_DIVING(Ped ped) { return invoke<BOOL>(0x5527B8246FEF9B11, ped); } // 0x5527B8246FEF9B11 0x7BC5BF3C b323
	static BOOL IS_PED_JUMPING_OUT_OF_VEHICLE(Ped ped) { return invoke<BOOL>(0x433DDFFE2044B636, ped); } // 0x433DDFFE2044B636 0xB19215F6 b323
	 // IS_PED_*
	 // 
	 // Returns true if the ped is currently opening a door (CTaskOpenDoor).
	static BOOL _IS_PED_OPENING_A_DOOR(Ped ped) { return invoke<BOOL>(0x26AF0E8E30BD2A2C, ped); } // 0x26AF0E8E30BD2A2C b323
	 // Returns:
	 // 
	 // -1: Normal
	 // 0: Wearing parachute on back
	 // 1: Parachute opening
	 // 2: Parachute open
	 // 3: Falling to doom (e.g. after exiting parachute)
	 // 
	 // Normal means no parachute?
	static int GET_PED_PARACHUTE_STATE(Ped ped) { return invoke<int>(0x79CFD9827CC979B6, ped); } // 0x79CFD9827CC979B6 0x7D4BC475 b323
	 // -1: no landing
	 // 0: landing on both feet
	 // 1: stumbling
	 // 2: rolling
	 // 3: ragdoll
	static int GET_PED_PARACHUTE_LANDING_TYPE(Ped ped) { return invoke<int>(0x8B9F1FC6AE8166C0, ped); } // 0x8B9F1FC6AE8166C0 0x01F3B035 b323
	static void SET_PED_PARACHUTE_TINT_INDEX(Ped ped, int tintIndex) { return invoke<void>(0x333FC8DB079B7186, ped, tintIndex); } // 0x333FC8DB079B7186 0x5AEFEC3A b323
	static void SET_PED_RESERVE_PARACHUTE_TINT_INDEX(Ped ped, Any p1) { return invoke<void>(0xE88DA0751C22A2AD, ped, p1); } // 0xE88DA0751C22A2AD 0x177EFC79 b323
	 // This is the SET_CHAR_DUCKING from GTA IV, that makes Peds duck. This function does nothing in GTA V. It cannot set the ped as ducking in vehicles, and IS_PED_DUCKING will always return false.
	static void SET_PED_DUCKING(Ped ped, BOOL toggle) { return invoke<void>(0x030983CA930B692D, ped, toggle); } // 0x030983CA930B692D 0xB90353D7 b323
	static BOOL IS_PED_DUCKING(Ped ped) { return invoke<BOOL>(0xD125AE748725C6BC, ped); } // 0xD125AE748725C6BC 0x9199C77D b323
	static BOOL IS_PED_IN_ANY_TAXI(Ped ped) { return invoke<BOOL>(0x6E575D6A898AB852, ped); } // 0x6E575D6A898AB852 0x16FD386C b323
	static void SET_PED_ID_RANGE(Ped ped, float value) { return invoke<void>(0xF107E836A70DCE05, ped, value); } // 0xF107E836A70DCE05 0xEF3B4ED9 b323
	static void SET_PED_HIGHLY_PERCEPTIVE(Ped ped, BOOL toggle) { return invoke<void>(0x52D59AB61DDC05DD, ped, toggle); } // 0x52D59AB61DDC05DD 0x9A2180FF b323
	static void _0x733C87D4CE22BEA2(Any p0) { return invoke<void>(0x733C87D4CE22BEA2, p0); } // 0x733C87D4CE22BEA2 0x43709044 b323
	static void SET_PED_SEEING_RANGE(Ped ped, float value) { return invoke<void>(0xF29CF591C4BF6CEE, ped, value); } // 0xF29CF591C4BF6CEE 0x4BD72FE8 b323
	static void SET_PED_HEARING_RANGE(Ped ped, float value) { return invoke<void>(0x33A8F7F7D5F7F33C, ped, value); } // 0x33A8F7F7D5F7F33C 0xB32087E0 b323
	static void SET_PED_VISUAL_FIELD_MIN_ANGLE(Ped ped, float value) { return invoke<void>(0x2DB492222FB21E26, ped, value); } // 0x2DB492222FB21E26 0x72E2E18B b323
	static void SET_PED_VISUAL_FIELD_MAX_ANGLE(Ped ped, float value) { return invoke<void>(0x70793BDCA1E854D4, ped, value); } // 0x70793BDCA1E854D4 0x0CEA0F9A b323
	static void SET_PED_VISUAL_FIELD_PERIPHERAL_RANGE(Ped ped, float range) { return invoke<void>(0x9C74B0BC831B753A, ped, range); } // 0x9C74B0BC831B753A 0xFDF2F7C2 b323
	static void SET_PED_VISUAL_FIELD_CENTER_ANGLE(Ped ped, float angle) { return invoke<void>(0x3B6405E8AB34A907, ped, angle); } // 0x3B6405E8AB34A907 0xE57202A1 b323
	 // p1 is usually 0 in the scripts. action is either 0 or a pointer to "DEFAULT_ACTION".
	static void SET_PED_STEALTH_MOVEMENT(Ped ped, BOOL p1, const char* action) { return invoke<void>(0x88CBB5CEB96B7BD2, ped, p1, action); } // 0x88CBB5CEB96B7BD2 0x67E28E1D b323
	 // Returns whether the entity is in stealth mode
	static BOOL GET_PED_STEALTH_MOVEMENT(Ped ped) { return invoke<BOOL>(0x7C2AC9CA66575FBF, ped); } // 0x7C2AC9CA66575FBF 0x40321B83 b323
	 // Creates a new ped group.
	 // Groups can contain up to 8 peds.
	 // 
	 // The parameter is unused.
	 // 
	 // Returns a handle to the created group, or 0 if a group couldn't be created.
	static int CREATE_GROUP(int unused) { return invoke<int>(0x90370EBE0FEE1A3D, unused); } // 0x90370EBE0FEE1A3D 0x8DC0368D b323
	static void SET_PED_AS_GROUP_LEADER(Ped ped, int groupId) { return invoke<void>(0x2A7819605465FBCE, ped, groupId); } // 0x2A7819605465FBCE 0x7265BEA2 b323
	static void SET_PED_AS_GROUP_MEMBER(Ped ped, int groupId) { return invoke<void>(0x9F3480FE65DB31B5, ped, groupId); } // 0x9F3480FE65DB31B5 0x0EE13F92 b323
	 // This only will teleport the ped to the group leader if the group leader teleports (sets coords).
	 // 
	 // Only works in singleplayer
	static void SET_PED_CAN_TELEPORT_TO_GROUP_LEADER(Ped pedHandle, int groupHandle, BOOL toggle) { return invoke<void>(0x2E2F4240B3F24647, pedHandle, groupHandle, toggle); } // 0x2E2F4240B3F24647 0xD0D8BDBC b323
	static void REMOVE_GROUP(int groupId) { return invoke<void>(0x8EB2F69076AF7053, groupId); } // 0x8EB2F69076AF7053 0x48D72B88 b323
	static void REMOVE_PED_FROM_GROUP(Ped ped) { return invoke<void>(0xED74007FFB146BC2, ped); } // 0xED74007FFB146BC2 0x82697713 b323
	static BOOL IS_PED_GROUP_MEMBER(Ped ped, int groupId) { return invoke<BOOL>(0x9BB01E3834671191, ped, groupId); } // 0x9BB01E3834671191 0x876D5363 b323
	static BOOL IS_PED_HANGING_ON_TO_VEHICLE(Ped ped) { return invoke<BOOL>(0x1C86D8AEF8254B78, ped); } // 0x1C86D8AEF8254B78 0x9678D4FF b323
	 // Sets the range at which members will automatically leave the group.
	static void SET_GROUP_SEPARATION_RANGE(int groupHandle, float separationRange) { return invoke<void>(0x4102C7858CFEE4E4, groupHandle, separationRange); } // 0x4102C7858CFEE4E4 0x7B820CD5 b323
	static BOOL IS_PED_PRONE(Ped ped) { return invoke<BOOL>(0xD6A86331A537A7B9, ped); } // 0xD6A86331A537A7B9 0x02C2A6C3 b323
	 // Checks to see if ped and target are in combat with eachother. Only goes one-way: if target is engaged in combat with ped but ped has not yet reacted, the function will return false until ped starts fighting back.
	 // 
	 // p1 is usually 0 in the scripts because it gets the ped id during the task sequence. For instance: PED::IS_PED_IN_COMBAT(l_42E[4/*14*/], PLAYER::PLAYER_PED_ID()) // armenian2.ct4: 43794
	static BOOL IS_PED_IN_COMBAT(Ped ped, Ped target) { return invoke<BOOL>(0x4859F1FC66A6278E, ped, target); } // 0x4859F1FC66A6278E 0xFE027CB5 b323
	static BOOL CAN_PED_IN_COMBAT_SEE_TARGET(Ped ped, Ped target) { return invoke<BOOL>(0xEAD42DE3610D0721, ped, target); } // 0xEAD42DE3610D0721 0xCCD525E1 b323
	static BOOL IS_PED_DOING_DRIVEBY(Ped ped) { return invoke<BOOL>(0xB2C086CC1BF8F2BF, ped); } // 0xB2C086CC1BF8F2BF 0xAC3CEB9C b323
	static BOOL IS_PED_JACKING(Ped ped) { return invoke<BOOL>(0x4AE4FF911DFB61DA, ped); } // 0x4AE4FF911DFB61DA 0x3B321816 b323
	static BOOL IS_PED_BEING_JACKED(Ped ped) { return invoke<BOOL>(0x9A497FE2DF198913, ped); } // 0x9A497FE2DF198913 0xD45D605C b323
	 // p1 is always 0
	static BOOL IS_PED_BEING_STUNNED(Ped ped, int p1) { return invoke<BOOL>(0x4FBACCE3B4138EE8, ped, p1); } // 0x4FBACCE3B4138EE8 0x0A66CE30 b323
	static Ped GET_PEDS_JACKER(Ped ped) { return invoke<Ped>(0x9B128DC36C1E04CF, ped); } // 0x9B128DC36C1E04CF 0xDE1DBB59 b323
	static Ped GET_JACK_TARGET(Ped ped) { return invoke<Ped>(0x5486A79D9FBD342D, ped); } // 0x5486A79D9FBD342D 0x1D196361 b323
	static BOOL IS_PED_FLEEING(Ped ped) { return invoke<BOOL>(0xBBCCE00B381F8482, ped); } // 0xBBCCE00B381F8482 0x85D813C6 b323
	 // p1 is nearly always 0 in the scripts. 
	static BOOL IS_PED_IN_COVER(Ped ped, BOOL exceptUseWeapon) { return invoke<BOOL>(0x60DFD0691A170B88, ped, exceptUseWeapon); } // 0x60DFD0691A170B88 0x972C5A8B b323
	static BOOL IS_PED_IN_COVER_FACING_LEFT(Ped ped) { return invoke<BOOL>(0x845333B3150583AB, ped); } // 0x845333B3150583AB 0xB89DBB80 b323
	static BOOL IS_PED_IN_HIGH_COVER(Ped ped) { return invoke<BOOL>(0x6A03BF943D767C93, ped); } // 0x6A03BF943D767C93 0xDD5D08A7 b323
	static BOOL IS_PED_GOING_INTO_COVER(Ped ped) { return invoke<BOOL>(0x9F65DBC537E59AD5, ped); } // 0x9F65DBC537E59AD5 0xA3589628 b323
	static Vehicle GET_VEHICLE_PED_IS_TRYING_TO_ENTER(Ped ped) { return invoke<Vehicle>(0x814FA8BE5449445D, ped); } // 0x814FA8BE5449445D 0x99968B37 b323
	 // Returns the Entity (Ped, Vehicle, or ?Object?) that killed the 'ped'
	 // 
	 // Is best to check if the Ped is dead before asking for its killer.
	static Entity GET_PED_SOURCE_OF_DEATH(Ped ped) { return invoke<Entity>(0x93C8B64DEB84728C, ped); } // 0x93C8B64DEB84728C 0x84ADF9EB b323
	 // Returns the hash of the weapon/model/object that killed the ped.
	static Hash GET_PED_CAUSE_OF_DEATH(Ped ped) { return invoke<Hash>(0x16FFE42AB2D2DC59, ped); } // 0x16FFE42AB2D2DC59 0x63458C27 b323
	static int _0x5407B7288D0478B7(Any p0) { return invoke<int>(0x5407B7288D0478B7, p0); } // 0x5407B7288D0478B7 0xEF0B78E6 b323
	static Any _0x336B3D200AB007CB(Any p0, float p1, float p2, float p3, float p4) { return invoke<Any>(0x336B3D200AB007CB, p0, p1, p2, p3, p4); } // 0x336B3D200AB007CB 0xFB18CB19 b323
	static void SET_PED_RELATIONSHIP_GROUP_HASH(Ped ped, Hash hash) { return invoke<void>(0xC80A74AC829DDD92, ped, hash); } // 0xC80A74AC829DDD92 0x79F8C18C b323
	 // Sets the relationship between two groups. This should be called twice (once for each group).
	 // 
	 // Relationship types:
	 // 0 = Companion
	 // 1 = Respect
	 // 2 = Like
	 // 3 = Neutral
	 // 4 = Dislike
	 // 5 = Hate
	 // 255 = Pedestrians
	 // 
	 // Example:
	 // PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, l_1017, 0xA49E591C);
	 // PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, 0xA49E591C, l_1017);
	static void SET_RELATIONSHIP_BETWEEN_GROUPS(int relationship, Hash group1, Hash group2) { return invoke<void>(0xBF25EB89375A37AD, relationship, group1, group2); } // 0xBF25EB89375A37AD 0xD4A215BA b323
	 // Clears the relationship between two groups. This should be called twice (once for each group).
	 // 
	 // Relationship types:
	 // 0 = Companion
	 // 1 = Respect
	 // 2 = Like
	 // 3 = Neutral
	 // 4 = Dislike
	 // 5 = Hate
	 // 255 = Pedestrians
	 // (Credits: Inco)
	 // 
	 // Example:
	 // PED::CLEAR_RELATIONSHIP_BETWEEN_GROUPS(2, l_1017, 0xA49E591C);
	 // PED::CLEAR_RELATIONSHIP_BETWEEN_GROUPS(2, 0xA49E591C, l_1017);
	static void CLEAR_RELATIONSHIP_BETWEEN_GROUPS(int relationship, Hash group1, Hash group2) { return invoke<void>(0x5E29243FB56FC6D4, relationship, group1, group2); } // 0x5E29243FB56FC6D4 0x994B8C2D b323
	 // Can't select void. This function returns nothing. The hash of the created relationship group is output in the second parameter.
	static Any ADD_RELATIONSHIP_GROUP(const char* name, Hash* groupHash) { return invoke<Any>(0xF372BC22FCB88606, name, groupHash); } // 0xF372BC22FCB88606 0x8B635546 b323
	static void REMOVE_RELATIONSHIP_GROUP(Hash groupHash) { return invoke<void>(0xB6BA2444AB393DA2, groupHash); } // 0xB6BA2444AB393DA2 0x4A1DC59A b323
	static Any _DOES_RELATIONSHIP_GROUP_EXIST(Any p0) { return invoke<Any>(0xCC6E3B6BB69501F1, p0); } // 0xCC6E3B6BB69501F1 b505
	 // Gets the relationship between two peds. This should be called twice (once for each ped).
	 // 
	 // Relationship types:
	 // 0 = Companion
	 // 1 = Respect
	 // 2 = Like
	 // 3 = Neutral
	 // 4 = Dislike
	 // 5 = Hate
	 // 255 = Pedestrians
	 // (Credits: Inco)
	 // 
	 // Example:
	 // PED::GET_RELATIONSHIP_BETWEEN_PEDS(2, l_1017, 0xA49E591C);
	 // PED::GET_RELATIONSHIP_BETWEEN_PEDS(2, 0xA49E591C, l_1017);
	static int GET_RELATIONSHIP_BETWEEN_PEDS(Ped ped1, Ped ped2) { return invoke<int>(0xEBA5AD3A0EAF7121, ped1, ped2); } // 0xEBA5AD3A0EAF7121 0xE254C39C b323
	static Hash GET_PED_RELATIONSHIP_GROUP_HASH(Ped ped) { return invoke<Hash>(0x7DBDD04862D95F04, ped); } // 0x7DBDD04862D95F04 0x354F283C b323
	 // Gets the relationship between two groups. This should be called twice (once for each group).
	 // 
	 // Relationship types:
	 // 0 = Companion
	 // 1 = Respect
	 // 2 = Like
	 // 3 = Neutral
	 // 4 = Dislike
	 // 5 = Hate
	 // 255 = Pedestrians
	 // 
	 // Example:
	 // PED::GET_RELATIONSHIP_BETWEEN_GROUPS(l_1017, 0xA49E591C);
	 // PED::GET_RELATIONSHIP_BETWEEN_GROUPS(0xA49E591C, l_1017);
	static int GET_RELATIONSHIP_BETWEEN_GROUPS(Hash group1, Hash group2) { return invoke<int>(0x9E6B70061662AE5C, group1, group2); } // 0x9E6B70061662AE5C 0x4E372FE2 b323
	static void SET_PED_TO_INFORM_RESPECTED_FRIENDS(Ped ped, float radius, int maxFriends) { return invoke<void>(0x112942C6E708F70B, ped, radius, maxFriends); } // 0x112942C6E708F70B 0xD78AC46C b323
	static BOOL IS_PED_RESPONDING_TO_EVENT(Ped ped, Any event) { return invoke<BOOL>(0x625B774D75C87068, ped, event); } // 0x625B774D75C87068 0x7A877554 b323
	 // FIRING_PATTERN_BURST_FIRE = 0xD6FF6D61 ( 1073727030 )
	 // FIRING_PATTERN_BURST_FIRE_IN_COVER = 0x026321F1 ( 40051185 )
	 // FIRING_PATTERN_BURST_FIRE_DRIVEBY = 0xD31265F2 ( -753768974 )
	 // FIRING_PATTERN_FROM_GROUND = 0x2264E5D6 ( 577037782 )
	 // FIRING_PATTERN_DELAY_FIRE_BY_ONE_SEC = 0x7A845691 ( 2055493265 )
	 // FIRING_PATTERN_FULL_AUTO = 0xC6EE6B4C ( -957453492 )
	 // FIRING_PATTERN_SINGLE_SHOT = 0x5D60E4E0 ( 1566631136 )
	 // FIRING_PATTERN_BURST_FIRE_PISTOL = 0xA018DB8A ( -1608983670 )
	 // FIRING_PATTERN_BURST_FIRE_SMG = 0xD10DADEE ( 1863348768 )
	 // FIRING_PATTERN_BURST_FIRE_RIFLE = 0x9C74B406 ( -1670073338 )
	 // FIRING_PATTERN_BURST_FIRE_MG = 0xB573C5B4 ( -1250703948 )
	 // FIRING_PATTERN_BURST_FIRE_PUMPSHOTGUN = 0x00BAC39B ( 12239771 )
	 // FIRING_PATTERN_BURST_FIRE_HELI = 0x914E786F ( -1857128337 )
	 // FIRING_PATTERN_BURST_FIRE_MICRO = 0x42EF03FD ( 1122960381 )
	 // FIRING_PATTERN_SHORT_BURSTS = 0x1A92D7DF ( 445831135 )
	 // FIRING_PATTERN_SLOW_FIRE_TANK = 0xE2CA3A71 ( -490063247 )
	 // 
	 // if anyone is interested firing pattern info: pastebin.com/Px036isB
	static void SET_PED_FIRING_PATTERN(Ped ped, Hash patternHash) { return invoke<void>(0x9AC577F5A12AD8A9, ped, patternHash); } // 0x9AC577F5A12AD8A9 0xB4629D66 b323
	 // shootRate 0-1000
	static void SET_PED_SHOOT_RATE(Ped ped, int shootRate) { return invoke<void>(0x614DA022990752DC, ped, shootRate); } // 0x614DA022990752DC 0xFB301746 b323
	 // combatType can be between 0-14. See GET_COMBAT_FLOAT below for a list of possible parameters.
	static void SET_COMBAT_FLOAT(Ped ped, int combatType, float p2) { return invoke<void>(0xFF41B4B141ED981C, ped, combatType, p2); } // 0xFF41B4B141ED981C 0xD8B7637C b323
	 // p1 may be a BOOL representing whether or not the group even exists
	static void GET_GROUP_SIZE(int groupID, Any* unknown, int* sizeInMembers) { return invoke<void>(0x8DE69FE35CA09A45, groupID, unknown, sizeInMembers); } // 0x8DE69FE35CA09A45 0xF7E1A691 b323
	static BOOL DOES_GROUP_EXIST(int groupId) { return invoke<BOOL>(0x7C6B0C22F9F40BBE, groupId); } // 0x7C6B0C22F9F40BBE 0x935C978D b323
	 // Returns the group id of which the specified ped is a member of.
	static int GET_PED_GROUP_INDEX(Ped ped) { return invoke<int>(0xF162E133B4E7A675, ped); } // 0xF162E133B4E7A675 0x134E0785 b323
	static BOOL IS_PED_IN_GROUP(Ped ped) { return invoke<BOOL>(0x5891CAC5D4ACFF74, ped); } // 0x5891CAC5D4ACFF74 0x836D9795 b323
	static void SET_GROUP_FORMATION_SPACING(int groupId, float p1, float p2, float p3) { return invoke<void>(0x1D9D45004C28C916, groupId, p1, p2, p3); } // 0x1D9D45004C28C916 0xB1E086FF b323
	 // Gets ID of vehicle player using. It means it can get ID at any interaction with vehicle. Enter\exit for example. And that means it is faster than GET_VEHICLE_PED_IS_IN but less safe.
	static Vehicle GET_VEHICLE_PED_IS_USING(Ped ped) { return invoke<Vehicle>(0x6094AD011A2EA87D, ped); } // 0x6094AD011A2EA87D 0x6DE3AADA b323
	static Vehicle GET_VEHICLE_PED_IS_ENTERING(Ped ped) { return invoke<Vehicle>(0xF92691AED837A5FC, ped); } // 0xF92691AED837A5FC 0x56E0C163 b323
	 // enable or disable the gravity of a ped
	 // 
	 // Examples:
	 // PED::SET_PED_GRAVITY(PLAYER::PLAYER_PED_ID(), 0x00000001);
	 // PED::SET_PED_GRAVITY(Local_289[iVar0 /*20*/], 0x00000001);
	static void SET_PED_GRAVITY(Ped ped, BOOL toggle) { return invoke<void>(0x9FF447B6B6AD960A, ped, toggle); } // 0x9FF447B6B6AD960A 0x3CA16652 b323
	 // damages a ped with the given amount
	static void APPLY_DAMAGE_TO_PED(Ped ped, int damageAmount, BOOL p2, Any p3) { return invoke<void>(0x697157CED63F18D4, ped, damageAmount, p2, p3); } // 0x697157CED63F18D4 0x4DC27FCF b323
	 // GET_TIME_*
	static int _GET_TIME_OF_LAST_PED_WEAPON_DAMAGE(Ped ped, Hash weaponHash) { return invoke<int>(0x36B77BB84687C318, ped, weaponHash); } // 0x36B77BB84687C318 0x0170C6E1 b323
	static void SET_PED_NEVER_LEAVES_GROUP(Ped ped, BOOL toggle) { return invoke<void>(0x3DBFC55D5C9BB447, ped, toggle); } // 0x3DBFC55D5C9BB447 0x0E038813 b323
	 // https://alloc8or.re/gta5/doc/enums/ePedType.txt
	static int GET_PED_TYPE(Ped ped) { return invoke<int>(0xFF059E1E4C01E63C, ped); } // 0xFF059E1E4C01E63C 0xB1460D43 b323
	 // Turns the desired ped into a cop. If you use this on the player ped, you will become almost invisible to cops dispatched for you. You will also report your own crimes, get a generic cop voice, get a cop-vision-cone on the radar, and you will be unable to shoot at other cops. SWAT and Army will still shoot at you. Toggling ped as "false" has no effect; you must change p0's ped model to disable the effect.
	static void SET_PED_AS_COP(Ped ped, BOOL toggle) { return invoke<void>(0xBB03C38DD3FB7FFD, ped, toggle); } // 0xBB03C38DD3FB7FFD 0x84E7DE9F b323
	 // sets the maximum health of a ped
	 // 
	 // I think it's never been used in any script
	static void SET_PED_MAX_HEALTH(Ped ped, int value) { return invoke<void>(0xF5F6378C4F3419D3, ped, value); } // 0xF5F6378C4F3419D3 0x5533F60B b323
	static int GET_PED_MAX_HEALTH(Ped ped) { return invoke<int>(0x4700A416E8324EF3, ped); } // 0x4700A416E8324EF3 0xA45B6C8D b323
	static void SET_PED_MAX_TIME_IN_WATER(Ped ped, float value) { return invoke<void>(0x43C851690662113D, ped, value); } // 0x43C851690662113D 0xFE0A106B b323
	 // 0 = can (bike)
	 // 1 = can't (bike)
	 // 2 = unk 
	 // 3 = unk
	static void SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(Ped ped, int state) { return invoke<void>(0x7A6535691B477C48, ped, state); } // 0x7A6535691B477C48 0x8A251612 b323
	static void KNOCK_PED_OFF_VEHICLE(Ped ped) { return invoke<void>(0x45BBCBA77C29A841, ped); } // 0x45BBCBA77C29A841 0xACDD0674 b323
	static void SET_PED_COORDS_NO_GANG(Ped ped, float posX, float posY, float posZ) { return invoke<void>(0x87052FE446E07247, ped, posX, posY, posZ); } // 0x87052FE446E07247 0x9561AD98 b323
	 // from fm_mission_controller.c4 (variable names changed for clarity):
	 // 
	 // int groupID = PLAYER::GET_PLAYER_GROUP(PLAYER::PLAYER_ID());
	 // PED::GET_GROUP_SIZE(group, &unused, &groupSize);
	 // if (groupSize >= 1) {
	 // . . . . for (int memberNumber = 0; memberNumber < groupSize; memberNumber++) {
	 // . . . . . . . . Ped ped1 = PED::GET_PED_AS_GROUP_MEMBER(groupID, memberNumber);
	 // . . . . . . . . //and so on
	static Ped GET_PED_AS_GROUP_MEMBER(int groupID, int memberNumber) { return invoke<Ped>(0x51455483CF23ED97, groupID, memberNumber); } // 0x51455483CF23ED97 0x9AA3CC8C b323
	static void SET_PED_KEEP_TASK(Ped ped, BOOL toggle) { return invoke<void>(0x971D38760FBC02EF, ped, toggle); } // 0x971D38760FBC02EF 0xA7EC79CE b323
	 // SET_PED_ALLOW*
	static void _0x49E50BDB8BA4DAB2(Ped ped, BOOL toggle) { return invoke<void>(0x49E50BDB8BA4DAB2, ped, toggle); } // 0x49E50BDB8BA4DAB2 0x397F06E3 b323
	static BOOL IS_PED_SWIMMING(Ped ped) { return invoke<BOOL>(0x9DE327631295B4C2, ped); } // 0x9DE327631295B4C2 0x7AB43DB8 b323
	static BOOL IS_PED_SWIMMING_UNDER_WATER(Ped ped) { return invoke<BOOL>(0xC024869A53992F34, ped); } // 0xC024869A53992F34 0x0E8D524F b323
	 // teleports ped to coords along with the vehicle ped is in
	static void SET_PED_COORDS_KEEP_VEHICLE(Ped ped, float posX, float posY, float posZ) { return invoke<void>(0x9AFEFF481A85AB2E, ped, posX, posY, posZ); } // 0x9AFEFF481A85AB2E 0xD66AE1D3 b323
	static void SET_PED_DIES_IN_VEHICLE(Ped ped, BOOL toggle) { return invoke<void>(0x2A30922C90C9B42C, ped, toggle); } // 0x2A30922C90C9B42C 0x6FE1E440 b323
	static void SET_CREATE_RANDOM_COPS(BOOL toggle) { return invoke<void>(0x102E68B2024D536D, toggle); } // 0x102E68B2024D536D 0x23441648 b323
	static void SET_PED_AS_ENEMY(Ped ped, BOOL toggle) { return invoke<void>(0x02A0C9720B854BFA, ped, toggle); } // 0x02A0C9720B854BFA 0xAE620A1B b323
	static BOOL IS_PED_IN_ANY_TRAIN(Ped ped) { return invoke<BOOL>(0x6F972C1AB75A1ED0, ped); } // 0x6F972C1AB75A1ED0 0x759EF63A b323
	static BOOL IS_PED_GETTING_INTO_A_VEHICLE(Ped ped) { return invoke<BOOL>(0xBB062B2B5722478E, ped); } // 0xBB062B2B5722478E 0x90E805AC b323
	static BOOL IS_PED_TRYING_TO_ENTER_A_LOCKED_VEHICLE(Ped ped) { return invoke<BOOL>(0x44D28D5DDFE5F68C, ped); } // 0x44D28D5DDFE5F68C 0x46828B4E b323
	 // ped can not pull out a weapon when true
	static void SET_ENABLE_HANDCUFFS(Ped ped, BOOL toggle) { return invoke<void>(0xDF1AF8B5D56542FA, ped, toggle); } // 0xDF1AF8B5D56542FA 0xAC9BBA23 b323
	static void SET_ENABLE_BOUND_ANKLES(Ped ped, BOOL toggle) { return invoke<void>(0xC52E0F855C58FC2E, ped, toggle); } // 0xC52E0F855C58FC2E 0x9208D689 b323
	 // Enables diving motion when underwater.
	static void SET_ENABLE_SCUBA(Ped ped, BOOL toggle) { return invoke<void>(0xF99F62004024D506, ped, toggle); } // 0xF99F62004024D506 0x7BF61471 b323
	 // Returns the ped's alertness (0-3).
	 // 
	 // Values : 
	 // 
	 // 0 : Neutral
	 // 1 : Heard something (gun shot, hit, etc)
	 // 2 : Knows (the origin of the event)
	 // 3 : Fully alerted (is facing the event?)
	 // 
	 // If the Ped does not exist, returns -1.
	static int GET_PED_ALERTNESS(Ped ped) { return invoke<int>(0xF6AA118530443FD2, ped); } // 0xF6AA118530443FD2 0xF83E4DAF b323
	 // value ranges from 0 to 3.
	static void SET_PED_ALERTNESS(Ped ped, int value) { return invoke<void>(0xDBA71115ED9941A6, ped, value); } // 0xDBA71115ED9941A6 0x2C32D9AE b323
	static void SET_PED_GET_OUT_UPSIDE_DOWN_VEHICLE(Ped ped, BOOL toggle) { return invoke<void>(0xBC0ED94165A48BC2, ped, toggle); } // 0xBC0ED94165A48BC2 0x89AD49FF b323
	 // p2 is usually 1.0f
	 // 
	 // EDIT 12/24/16: 
	 // p2 does absolutely nothing no matter what the value is. 
	 // 
	 // List of movement clipsets:
	 // Thanks to elsewhat for list.
	 // 
	 //  "ANIM_GROUP_MOVE_BALLISTIC"
	 //  "ANIM_GROUP_MOVE_LEMAR_ALLEY"
	 //  "clipset@move@trash_fast_turn"
	 //  "FEMALE_FAST_RUNNER"
	 //  "missfbi4prepp1_garbageman"
	 //  "move_characters@franklin@fire"
	 //  "move_characters@Jimmy@slow@"
	 //  "move_characters@michael@fire"
	 //  "move_f@flee@a"
	 //  "move_f@scared"
	 //  "move_f@sexy@a"
	 //  "move_heist_lester"
	 //  "move_injured_generic"
	 //  "move_lester_CaneUp"
	 //  "move_m@bag"
	 //  "MOVE_M@BAIL_BOND_NOT_TAZERED"
	 //  "MOVE_M@BAIL_BOND_TAZERED"
	 //  "move_m@brave"
	 //  "move_m@casual@d"
	 //  "move_m@drunk@moderatedrunk"
	 //  "MOVE_M@DRUNK@MODERATEDRUNK"
	 //  "MOVE_M@DRUNK@MODERATEDRUNK_HEAD_UP"
	 //  "MOVE_M@DRUNK@SLIGHTLYDRUNK"
	 //  "MOVE_M@DRUNK@VERYDRUNK"
	 //  "move_m@fire"
	 //  "move_m@gangster@var_e"
	 //  "move_m@gangster@var_f"
	 //  "move_m@gangster@var_i"
	 //  "move_m@JOG@"
	 //  "MOVE_M@PRISON_GAURD"
	 //  "MOVE_P_M_ONE"
	 //  "MOVE_P_M_ONE_BRIEFCASE"
	 //  "move_p_m_zero_janitor"
	 //  "move_p_m_zero_slow"
	 //  "move_ped_bucket"
	 //  "move_ped_crouched"
	 //  "move_ped_mop"
	 //  "MOVE_M@FEMME@"
	 //  "MOVE_F@FEMME@"
	 //  "MOVE_M@GANGSTER@NG"
	 //  "MOVE_F@GANGSTER@NG"
	 //  "MOVE_M@POSH@"
	 //  "MOVE_F@POSH@"
	 //  "MOVE_M@TOUGH_GUY@"
	 //  "MOVE_F@TOUGH_GUY@"
	 // 
	 // ~ NotCrunchyTaco
	static void SET_PED_MOVEMENT_CLIPSET(Ped ped, const char* clipSet, float p2) { return invoke<void>(0xAF8A94EDE7712BEF, ped, clipSet, p2); } // 0xAF8A94EDE7712BEF 0xA817CDEB b323
	 // If p1 is 0.0, I believe you are back to normal. 
	 // If p1 is 1.0, it looks like you can only rotate the ped, not walk.
	 // 
	 // Using the following code to reset back to normal
	 // PED::RESET_PED_MOVEMENT_CLIPSET(PLAYER::PLAYER_PED_ID(), 0.0);
	static void RESET_PED_MOVEMENT_CLIPSET(Ped ped, float p1) { return invoke<void>(0xAA74EC0CB0AAEA2C, ped, p1); } // 0xAA74EC0CB0AAEA2C 0xB83CEE93 b323
	static void SET_PED_STRAFE_CLIPSET(Ped ped, const char* clipSet) { return invoke<void>(0x29A28F3F8CF6D854, ped, clipSet); } // 0x29A28F3F8CF6D854 0x0BACF010 b323
	static void RESET_PED_STRAFE_CLIPSET(Ped ped) { return invoke<void>(0x20510814175EA477, ped); } // 0x20510814175EA477 0xF1967A12 b323
	static void SET_PED_WEAPON_MOVEMENT_CLIPSET(Ped ped, const char* clipSet) { return invoke<void>(0x2622E35B77D3ACA2, ped, clipSet); } // 0x2622E35B77D3ACA2 0xF8BE54DC b323
	static void RESET_PED_WEAPON_MOVEMENT_CLIPSET(Ped ped) { return invoke<void>(0x97B0DB5B4AA74E77, ped); } // 0x97B0DB5B4AA74E77 0xC60C9ACD b323
	 // PED::SET_PED_IN_VEHICLE_CONTEXT(l_128, GAMEPLAY::GET_HASH_KEY("MINI_PROSTITUTE_LOW_PASSENGER"));
	 // PED::SET_PED_IN_VEHICLE_CONTEXT(l_128, GAMEPLAY::GET_HASH_KEY("MINI_PROSTITUTE_LOW_RESTRICTED_PASSENGER"));
	 // PED::SET_PED_IN_VEHICLE_CONTEXT(l_3212, GAMEPLAY::GET_HASH_KEY("MISS_FAMILY1_JIMMY_SIT"));
	 // PED::SET_PED_IN_VEHICLE_CONTEXT(l_3212, GAMEPLAY::GET_HASH_KEY("MISS_FAMILY1_JIMMY_SIT_REAR"));
	 // PED::SET_PED_IN_VEHICLE_CONTEXT(l_95, GAMEPLAY::GET_HASH_KEY("MISS_FAMILY2_JIMMY_BICYCLE"));
	 // PED::SET_PED_IN_VEHICLE_CONTEXT(num3, GAMEPLAY::GET_HASH_KEY("MISSFBI2_MICHAEL_DRIVEBY"));
	 // PED::SET_PED_IN_VEHICLE_CONTEXT(PLAYER::PLAYER_PED_ID(), GAMEPLAY::GET_HASH_KEY("MISS_ARMENIAN3_FRANKLIN_TENSE"));
	 // PED::SET_PED_IN_VEHICLE_CONTEXT(PLAYER::PLAYER_PED_ID(), GAMEPLAY::GET_HASH_KEY("MISSFBI5_TREVOR_DRIVING"));
	static void SET_PED_IN_VEHICLE_CONTEXT(Ped ped, Hash context) { return invoke<void>(0x530071295899A8C6, ped, context); } // 0x530071295899A8C6 0x27F25C0E b323
	static void RESET_PED_IN_VEHICLE_CONTEXT(Ped ped) { return invoke<void>(0x22EF8FF8778030EB, ped); } // 0x22EF8FF8778030EB 0x3C94D88A b323
	 // Animations List : www.ls-multiplayer.com/dev/index.php?section=3
	static BOOL IS_SCRIPTED_SCENARIO_PED_USING_CONDITIONAL_ANIM(Ped ped, const char* animDict, const char* anim) { return invoke<BOOL>(0x6EC47A344923E1ED, ped, animDict, anim); } // 0x6EC47A344923E1ED 0x3C30B447 b323
	static void CLEAR_PED_ALTERNATE_WALK_ANIM(Ped ped, float p1) { return invoke<void>(0x8844BBFCE30AA9E9, ped, p1); } // 0x8844BBFCE30AA9E9 0x5736FB23 b323
	 // stance:
	 // 0 = idle
	 // 1 = walk
	 // 2 = running
	 // 
	 // p5 = usually set to true
	 // 
	 // Animations List : www.ls-multiplayer.com/dev/index.php?section=3
	static void SET_PED_ALTERNATE_MOVEMENT_ANIM(Ped ped, int stance, const char* animDictionary, const char* animationName, float p4, BOOL p5) { return invoke<void>(0x90A43CC281FFAB46, ped, stance, animDictionary, animationName, p4, p5); } // 0x90A43CC281FFAB46 0xBA84FD8C b323
	static void CLEAR_PED_ALTERNATE_MOVEMENT_ANIM(Ped ped, int stance, float p2) { return invoke<void>(0xD8D19675ED5FBDCE, ped, stance, p2); } // 0xD8D19675ED5FBDCE 0x7A7F5BC3 b323
	static Vector3 GET_ANIM_INITIAL_OFFSET_POSITION(const char* animDict, const char* animName, float x, float y, float z, float xRot, float yRot, float zRot, float p8, int p9) { return invoke<Vector3>(0xBE22B26DD764C040, animDict, animName, x, y, z, xRot, yRot, zRot, p8, p9); } // 0xBE22B26DD764C040 0xC59D4268 b323
	static Vector3 GET_ANIM_INITIAL_OFFSET_ROTATION(const char* animDict, const char* animName, float x, float y, float z, float xRot, float yRot, float zRot, float p8, int p9) { return invoke<Vector3>(0x4B805E6046EE9E47, animDict, animName, x, y, z, xRot, yRot, zRot, p8, p9); } // 0x4B805E6046EE9E47 0x5F7789E6 b323
	 // Ids
	 // 0 - Head
	 // 1 - Beard
	 // 2 - Hair
	 // 3 - Torso
	 // 4 - Legs
	 // 5 - Hands
	 // 6 - Foot
	 // 7 - ------
	 // 8 - Accessories 1
	 // 9 - Accessories 2
	 // 10- Decals
	 // 11 - Auxiliary parts for torso
	static int GET_PED_DRAWABLE_VARIATION(Ped ped, int componentId) { return invoke<int>(0x67F3780DD425D4FC, ped, componentId); } // 0x67F3780DD425D4FC 0x29850FE2 b323
	 // List of component/props ID
	 // gtaxscripting.blogspot.com/2016/04/gta-v-peds-component-and-props.html
	static int GET_NUMBER_OF_PED_DRAWABLE_VARIATIONS(Ped ped, int componentId) { return invoke<int>(0x27561561732A7842, ped, componentId); } // 0x27561561732A7842 0x9754C27D b323
	 // List of component/props ID
	 // gtaxscripting.blogspot.com/2016/04/gta-v-peds-component-and-props.html
	static int GET_PED_TEXTURE_VARIATION(Ped ped, int componentId) { return invoke<int>(0x04A355E041E004E6, ped, componentId); } // 0x04A355E041E004E6 0xC0A8590A b323
	 // List of component/props ID
	 // gtaxscripting.blogspot.com/2016/04/gta-v-peds-component-and-props.html
	static int GET_NUMBER_OF_PED_TEXTURE_VARIATIONS(Ped ped, int componentId, int drawableId) { return invoke<int>(0x8F7156A3142A6BAD, ped, componentId, drawableId); } // 0x8F7156A3142A6BAD 0x83D9FBE7 b323
	 // List of component/props ID
	 // gtaxscripting.blogspot.com/2016/04/gta-v-peds-component-and-props.html
	static int GET_PED_PALETTE_VARIATION(Ped ped, int componentId) { return invoke<int>(0xE3DD5F2A84B42281, ped, componentId); } // 0xE3DD5F2A84B42281 0xEF1BC082 b323
	 // GET_*
	static Any _0x1E77FA7A62EE6C4C(Any p0) { return invoke<Any>(0x1E77FA7A62EE6C4C, p0); } // 0x1E77FA7A62EE6C4C 0x021F5B36 b323
	 // GET_*
	static Any _0xF033419D1B81FAE8(Any p0) { return invoke<Any>(0xF033419D1B81FAE8, p0); } // 0xF033419D1B81FAE8 0x8FDDB5DB b323
	 // Checks if the component variation is valid, this works great for randomizing components using loops.
	 // 
	 // List of component/props ID
	 // gtaxscripting.blogspot.com/2016/04/gta-v-peds-component-and-props.html
	static BOOL IS_PED_COMPONENT_VARIATION_VALID(Ped ped, int componentId, int drawableId, int textureId) { return invoke<BOOL>(0xE825F6B6CEA7671D, ped, componentId, drawableId, textureId); } // 0xE825F6B6CEA7671D 0x952ABD9A b323
	 // paletteId/palletColor -  0 to 3. 
	 // enum PedVariationData
	 // {
	 //  PED_VARIATION_FACE = 0,
	 //    PED_VARIATION_HEAD = 1,
	 //    PED_VARIATION_HAIR = 2,
	 //    PED_VARIATION_TORSO = 3,
	 //   PED_VARIATION_LEGS = 4,
	 //    PED_VARIATION_HANDS = 5,
	 //   PED_VARIATION_FEET = 6,
	 //    PED_VARIATION_EYES = 7,
	 //    PED_VARIATION_ACCESSORIES = 8,
	 //     PED_VARIATION_TASKS = 9,
	 //   PED_VARIATION_TEXTURES = 10,
	 //   PED_VARIATION_TORSO2 = 11
	 // };
	 // Usage: 
	 // SET_PED_COMPONENT_VARIATION(playerPed, PED_VARIATION_FACE, GET_NUMBER_OF_PED_DRAWABLE_VARIATIONS(playerPed, PED_VARIATION_FACE), GET_NUMBER_OF_PED_TEXTURE_VARIATIONS(playerPed, PED_VARIATION_FACE, 0), 2);
	 // 
	 // List of component/props ID
	 // gtaxscripting.blogspot.com/2016/04/gta-v-peds-component-and-props.html
	static void SET_PED_COMPONENT_VARIATION(Ped ped, int componentId, int drawableId, int textureId, int paletteId) { return invoke<void>(0x262B14F48D29DE80, ped, componentId, drawableId, textureId, paletteId); } // 0x262B14F48D29DE80 0xD4F7B05C b323
	 // p1 is always 0 in R* scripts.
	 // 
	 // List of component/props ID
	 // gtaxscripting.blogspot.com/2016/04/gta-v-peds-component-and-props.html
	static void SET_PED_RANDOM_COMPONENT_VARIATION(Ped ped, int p1) { return invoke<void>(0xC8A9481A01E63C28, ped, p1); } // 0xC8A9481A01E63C28 0x4111BA46 b323
	 // Sets Ped Default Clothes
	static void SET_PED_DEFAULT_COMPONENT_VARIATION(Ped ped) { return invoke<void>(0x45EEE61580806D63, ped); } // 0x45EEE61580806D63 0xC866A984 b323
	static BOOL HAS_PED_HEAD_BLEND_FINISHED(Ped ped) { return invoke<BOOL>(0x654CD0A825161131, ped); } // 0x654CD0A825161131 0x2B1BD9C5 b323
	static void _0x4668D80430D6C299(Ped ped) { return invoke<void>(0x4668D80430D6C299, ped); } // 0x4668D80430D6C299 0x894314A4 b323
	 // List of component/props ID
	 // gtaxscripting.blogspot.com/2016/04/gta-v-peds-component-and-props.html
	static int GET_PED_PROP_INDEX(Ped ped, int componentId) { return invoke<int>(0x898CC20EA75BACD8, ped, componentId); } // 0x898CC20EA75BACD8 0x746DDAC0 b323
	 // ComponentId can be set to various things based on what category you're wanting to set
	 // enum PedPropsData
	 // {
	 //     PED_PROP_HATS = 0,
	 //     PED_PROP_GLASSES = 1,
	 //  PED_PROP_EARS = 2,
	 //     PED_PROP_WATCHES = 3,
	 // };
	 // Usage: SET_PED_PROP_INDEX(playerPed, PED_PROP_HATS, GET_NUMBER_OF_PED_PROP_DRAWABLE_VARIATIONS(playerPed, PED_PROP_HATS), GET_NUMBER_OF_PED_PROP_TEXTURE_VARIATIONS(playerPed, PED_PROP_HATS, 0), TRUE);
	 // 
	 // List of component/props ID
	 // gtaxscripting.blogspot.com/2016/04/gta-v-peds-component-and-props.html
	static void SET_PED_PROP_INDEX(Ped ped, int componentId, int drawableId, int TextureId, BOOL attach) { return invoke<void>(0x93376B65A266EB5F, ped, componentId, drawableId, TextureId, attach); } // 0x93376B65A266EB5F 0x0829F2E2 b323
	 // List of component/props ID
	 // gtaxscripting.blogspot.com/2016/04/gta-v-peds-component-and-props.html
	static void CLEAR_PED_PROP(Ped ped, int propId) { return invoke<void>(0x0943E5B8E078E76E, ped, propId); } // 0x0943E5B8E078E76E 0x2D23D743 b323
	 // List of component/props ID
	 // gtaxscripting.blogspot.com/2016/04/gta-v-peds-component-and-props.html
	static void CLEAR_ALL_PED_PROPS(Ped ped) { return invoke<void>(0xCD8A7537A9B52F06, ped); } // 0xCD8A7537A9B52F06 0x81DF8B43 b323
	 // List of component/props ID
	 // gtaxscripting.blogspot.com/2016/04/gta-v-peds-component-and-props.html
	static int GET_PED_PROP_TEXTURE_INDEX(Ped ped, int componentId) { return invoke<int>(0xE131A28626F81AB2, ped, componentId); } // 0xE131A28626F81AB2 0x922A6653 b323
	 // works with AI::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS to make a ped completely oblivious to all events going on around him
	static void SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Ped ped, BOOL toggle) { return invoke<void>(0x9F8AA94D6D97DBF4, ped, toggle); } // 0x9F8AA94D6D97DBF4 0xDFE34E4A b323
	 // PED::REGISTER_TARGET(l_216, PLAYER::PLAYER_PED_ID()); from re_prisonbreak.txt.
	 // 
	 // l_216 = RECSBRobber1
	static void REGISTER_TARGET(Ped ped, Ped target) { return invoke<void>(0x2F25D9AEFA34FBA2, ped, target); } // 0x2F25D9AEFA34FBA2 0x50A95442 b323
	 // Gets a random ped in the x/y/zRadius near the x/y/z coordinates passed. 
	 // 
	 // Ped Types:
	 // Any = -1
	 // Player = 1
	 // Male = 4 
	 // Female = 5 
	 // Cop = 6
	 // Human = 26
	 // SWAT = 27 
	 // Animal = 28
	 // Army = 29
	static Ped GET_RANDOM_PED_AT_COORD(float x, float y, float z, float xRadius, float yRadius, float zRadius, int pedType) { return invoke<Ped>(0x876046A8E3A4B71C, x, y, z, xRadius, yRadius, zRadius, pedType); } // 0x876046A8E3A4B71C 0xDC8239EB b323
	 // Gets the closest ped in a radius.
	 // 
	 // Ped Types:
	 // Any ped = -1
	 // Player = 1
	 // Male = 4 
	 // Female = 5 
	 // Cop = 6
	 // Human = 26
	 // SWAT = 27 
	 // Animal = 28
	 // Army = 29
	 // 
	 // ------------------
	 // P4 P5 P7 P8
	 // 1  0  x  x  = return nearest walking Ped
	 // 1  x  0  x  = return nearest walking Ped
	 // x  1  1  x  = return Ped you are using
	 // 0  0  x  x  = no effect
	 // 0  x  0  x  = no effect
	 // 
	 // x = can be 1 or 0. Does not have any obvious changes.
	 // 
	 // This function does not return ped who is:
	 // 1. Standing still
	 // 2. Driving
	 // 3. Fleeing
	 // 4. Attacking
	 // 
	 // This function only work if the ped is:
	 // 1. walking normally.
	 // 2. waiting to cross a road.
	 // 
	 // Note: PED::GET_PED_NEARBY_PEDS works for more peds.
	static BOOL GET_CLOSEST_PED(float x, float y, float z, float radius, BOOL p4, BOOL p5, Ped* outPed, BOOL p7, BOOL p8, int pedType) { return invoke<BOOL>(0xC33AB876A77F8164, x, y, z, radius, p4, p5, outPed, p7, p8, pedType); } // 0xC33AB876A77F8164 0x8F6C1F55 b323
	 // Sets a value indicating whether scenario peds should be returned by the next call to a command that returns peds. Eg. GET_CLOSEST_PED.
	static void SET_SCENARIO_PEDS_TO_BE_RETURNED_BY_NEXT_COMMAND(BOOL value) { return invoke<void>(0x14F19A8782C8071E, value); } // 0x14F19A8782C8071E 0x85615FD0 b323
	 // Scripts use 0.2, 0.5 and 1.0. Value must be >= 0.0 && <= 1.0
	static void SET_DRIVER_RACING_MODIFIER(Ped driver, float modifier) { return invoke<void>(0xDED5AF5A0EA4B297, driver, modifier); } // 0xDED5AF5A0EA4B297 0x6D55B3B3 b323
	 // The function specifically verifies the value is equal to, or less than 1.0f. If it is greater than 1.0f, the function does nothing at all.
	static void SET_DRIVER_ABILITY(Ped driver, float ability) { return invoke<void>(0xB195FFA8042FC5C3, driver, ability); } // 0xB195FFA8042FC5C3 0xAAD4012C b323
	 // range 0.0f - 1.0f
	static void SET_DRIVER_AGGRESSIVENESS(Ped driver, float aggressiveness) { return invoke<void>(0xA731F608CA104E3C, driver, aggressiveness); } // 0xA731F608CA104E3C 0x8B02A8FB b323
	 // time1- Time Ped is in ragdoll mode(ms)
	 // 
	 // time2- Unknown time, in milliseconds
	 // 
	 // ragdollType-
	 // 0 : Normal ragdoll
	 // 1 : Falls with stiff legs/body
	 // 2 : Narrow leg stumble(may not fall)
	 // 3 : Wide leg stumble(may not fall)
	 // 
	 // p4, p5, p6- No idea. In R*'s scripts they are usually either "true, true, false" or "false, false, false".
	 // 
	 // 
	 // 
	 // 
	 // EDIT 3/11/16: unclear what 'mircoseconds' mean-- a microsecond is 1000x a ms, so time2 must be 1000x time1?  more testing needed.  -sob
	 // 
	 // Edit Mar 21, 2017: removed part about time2 being the microseconds version of time1. this just isn't correct. time2 is in milliseconds, and time1 and time2 don't seem to be connected in any way.
	static BOOL SET_PED_TO_RAGDOLL(Ped ped, int time1, int time2, int ragdollType, BOOL p4, BOOL p5, BOOL p6) { return invoke<BOOL>(0xAE99FB955581844A, ped, time1, time2, ragdollType, p4, p5, p6); } // 0xAE99FB955581844A 0x83CB5052 b323
	 // Return variable is never used in R*'s scripts.
	 // 
	 // Not sure what p2 does. It seems like it would be a time judging by it's usage in R*'s scripts, but didn't seem to affect anything in my testings.
	 // 
	 // x, y, and z are coordinates, most likely to where the ped will fall.
	 // 
	 // p7 is probably the force of the fall, but untested, so I left the variable name the same.
	 // 
	 // p8 to p13 are always 0f in R*'s scripts.
	 // 
	 // (Simplified) Example of the usage of the function from R*'s scripts:
	 // ped::set_ped_to_ragdoll_with_fall(ped, 1500, 2000, 1, -entity::get_entity_forward_vector(ped), 1f, 0f, 0f, 0f, 0f, 0f, 0f);
	 // 
	static BOOL SET_PED_TO_RAGDOLL_WITH_FALL(Ped ped, int time, int p2, int ragdollType, float x, float y, float z, float p7, float p8, float p9, float p10, float p11, float p12, float p13) { return invoke<BOOL>(0xD76632D99E4966C8, ped, time, p2, ragdollType, x, y, z, p7, p8, p9, p10, p11, p12, p13); } // 0xD76632D99E4966C8 0xFA12E286 b323
	 // If the ped handle passed through the parenthesis is in a ragdoll state this will return true.
	static BOOL IS_PED_RAGDOLL(Ped ped) { return invoke<BOOL>(0x47E4E977581C5B55, ped); } // 0x47E4E977581C5B55 0xC833BBE1 b323
	static BOOL IS_PED_RUNNING_RAGDOLL_TASK(Ped ped) { return invoke<BOOL>(0xE3B6097CC25AA69E, ped); } // 0xE3B6097CC25AA69E 0x44A153F2 b323
	static void SET_PED_CAN_RAGDOLL(Ped ped, BOOL toggle) { return invoke<void>(0xB128377056A54E2A, ped, toggle); } // 0xB128377056A54E2A 0xCF1384C4 b323
	static BOOL IS_PED_RUNNING_MOBILE_PHONE_TASK(Ped ped) { return invoke<BOOL>(0x2AFE52F782F25775, ped); } // 0x2AFE52F782F25775 0xFB2AFED1 b323
	 // Only called once in the scripts:
	 // 
	 // if (sub_1abd() && (!PED::_A3F3564A5B3646C0(l_8C))) {
	 //     if (sub_52e3("RESNA_CELLR", 0)) {
	 //         PED::SET_PED_CAN_PLAY_GESTURE_ANIMS(l_8C, 1);
	 //         PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(l_8C, 1);
	 //         PED::SET_PED_CAN_PLAY_VISEME_ANIMS(l_8C, 1, 0);
	 //         l_184 += 1;
	 //     }
	 // }
	 // 
	 // Checks something related to the mobile phone task.
	 // 
	 // IS_*
	static BOOL _0xA3F3564A5B3646C0(Ped ped) { return invoke<BOOL>(0xA3F3564A5B3646C0, ped); } // 0xA3F3564A5B3646C0 0x97353375 b323
	 // Works for both player and peds, but some flags don't seem to work for the player (1, for example)
	 // 
	 // 1 - Blocks ragdolling when shot.
	 // 2 - Blocks ragdolling when hit by a vehicle. The ped still might play a falling animation.
	 // 4 - Blocks ragdolling when set on fire.
	 // 
	 // -----------------------------------------------------------------------
	 // 
	 // There seem to be 26 flags
	static void SET_RAGDOLL_BLOCKING_FLAGS(Ped ped, int flags) { return invoke<void>(0x26695EC767728D84, ped, flags); } // 0x26695EC767728D84 0x9C8F830D b323
	 // There seem to be 26 flags
	static void CLEAR_RAGDOLL_BLOCKING_FLAGS(Ped ped, int flags) { return invoke<void>(0xD86D101FCFD00A4B, ped, flags); } // 0xD86D101FCFD00A4B 0x77CBA290 b323
	static void SET_PED_ANGLED_DEFENSIVE_AREA(Ped ped, float p1, float p2, float p3, float p4, float p5, float p6, float p7, BOOL p8, BOOL p9) { return invoke<void>(0xC7F76DF27A5045A1, ped, p1, p2, p3, p4, p5, p6, p7, p8, p9); } // 0xC7F76DF27A5045A1 0x3EFBDD9B b323
	static void SET_PED_SPHERE_DEFENSIVE_AREA(Ped ped, float x, float y, float z, float radius, BOOL p5, BOOL p6) { return invoke<void>(0x9D3151A373974804, ped, x, y, z, radius, p5, p6); } // 0x9D3151A373974804 0xBD96D8E8 b323
	static void SET_PED_DEFENSIVE_SPHERE_ATTACHED_TO_PED(Ped ped, Ped target, float xOffset, float yOffset, float zOffset, float radius, BOOL p6) { return invoke<void>(0xF9B8F91AAD3B953E, ped, target, xOffset, yOffset, zOffset, radius, p6); } // 0xF9B8F91AAD3B953E 0x40638BDC b323
	static void SET_PED_DEFENSIVE_SPHERE_ATTACHED_TO_VEHICLE(Ped ped, Vehicle target, float xOffset, float yOffset, float zOffset, float radius, BOOL p6) { return invoke<void>(0xE4723DB6E736CCFF, ped, target, xOffset, yOffset, zOffset, radius, p6); } // 0xE4723DB6E736CCFF 0x4763B2C6 b323
	 // Ped will no longer get angry when you stay near him.
	static void REMOVE_PED_DEFENSIVE_AREA(Ped ped, BOOL toggle) { return invoke<void>(0x74D4E028107450A9, ped, toggle); } // 0x74D4E028107450A9 0x34AAAFA5 b323
	 // It will revive/cure the injured ped. The condition is ped must not be dead.
	 // 
	 // Upon setting and converting the health int, found, if health falls below 5, the ped will lay on the ground in pain(Maximum default health is 100).
	 // 
	 // This function is well suited there.
	static void REVIVE_INJURED_PED(Ped ped) { return invoke<void>(0x8D8ACD8388CD99CE, ped); } // 0x8D8ACD8388CD99CE 0x14D3E6E3 b323
	 // NOTE: Debugging functions are not present in the retail version of the game.
	 // 
	 // *untested but char *name could also be a hash for a localized string
	static void SET_PED_NAME_DEBUG(Ped ped, const char* name) { return invoke<void>(0x98EFA132A4117BE1, ped, name); } // 0x98EFA132A4117BE1 0x20D6273E b323
	static void SET_PED_DIES_WHEN_INJURED(Ped ped, BOOL toggle) { return invoke<void>(0x5BA7919BED300023, ped, toggle); } // 0x5BA7919BED300023 0xE94E24D4 b323
	 // p1 was always 1 (true).
	 // 
	 // Kicks the ped from the current vehicle and keeps the rendering-focus on this ped (also disables its collision). If doing this for your player ped, you'll still be able to drive the vehicle.
	 // 
	 // Actual name begins with 'S'
	static void _0xF9ACF4A08098EA25(Ped ped, BOOL p1) { return invoke<void>(0xF9ACF4A08098EA25, ped, p1); } // 0xF9ACF4A08098EA25 0x141CC936 b323
	static void RESET_PED_VISIBLE_DAMAGE(Ped ped) { return invoke<void>(0x3AC1F7B898F30C05, ped); } // 0x3AC1F7B898F30C05 0xC4BC4841 b323
	static void APPLY_PED_BLOOD_DAMAGE_BY_ZONE(Ped ped, Any p1, float p2, float p3, Any p4) { return invoke<void>(0x816F6981C60BF53B, ped, p1, p2, p3, p4); } // 0x816F6981C60BF53B 0x1E54DB12 b323
	static void APPLY_PED_BLOOD_BY_ZONE(Ped ped, Any p1, float p2, float p3, Any* p4) { return invoke<void>(0x3311E47B91EDCBBC, ped, p1, p2, p3, p4); } // 0x3311E47B91EDCBBC 0x8F3F3A9C b323
	static void APPLY_PED_BLOOD_SPECIFIC(Ped ped, Any p1, float p2, float p3, float p4, float p5, Any p6, float p7, Any* p8) { return invoke<void>(0xEF0D582CBF2D9B0F, ped, p1, p2, p3, p4, p5, p6, p7, p8); } // 0xEF0D582CBF2D9B0F 0xFC13CE80 b323
	 // Damage Packs:
	 // 
	 // "SCR_TrevorTreeBang"
	 // "HOSPITAL_0"
	 // "HOSPITAL_1"
	 // "HOSPITAL_2"
	 // "HOSPITAL_3"
	 // "HOSPITAL_4"
	 // "HOSPITAL_5"
	 // "HOSPITAL_6"
	 // "HOSPITAL_7"
	 // "HOSPITAL_8"
	 // "HOSPITAL_9"
	 // "SCR_Dumpster"
	 // "BigHitByVehicle"
	 // "SCR_Finale_Michael_Face"
	 // "SCR_Franklin_finb"
	 // "SCR_Finale_Michael"
	 // "SCR_Franklin_finb2"
	 // "Explosion_Med"
	 // "SCR_Torture"
	 // "SCR_TracySplash"
	 // "Skin_Melee_0"
	 // 
	 // Additional damage packs:
	 // 
	 // gist.github.com/alexguirre/f3f47f75ddcf617f416f3c8a55ae2227
	static void APPLY_PED_DAMAGE_PACK(Ped ped, const char* damagePack, float damage, float mult) { return invoke<void>(0x46DF918788CB093F, ped, damagePack, damage, mult); } // 0x46DF918788CB093F 0x208D0CB8 b323
	static void CLEAR_PED_BLOOD_DAMAGE(Ped ped) { return invoke<void>(0x8FE22675A5A45817, ped); } // 0x8FE22675A5A45817 0xF7ADC960 b323
	 // It clears the wetness of the selected Ped/Player. Clothes have to be wet to notice the difference.
	static void CLEAR_PED_WETNESS(Ped ped) { return invoke<void>(0x9C720776DAA43E7E, ped); } // 0x9C720776DAA43E7E 0x629F15BD b323
	static void CLEAR_PED_ENV_DIRT(Ped ped) { return invoke<void>(0x6585D955A68452A5, ped); } // 0x6585D955A68452A5 0xA993915F b323
	 // Gets the position of the specified bone of the specified ped.
	 // 
	 // ped: The ped to get the position of a bone from.
	 // boneId: The ID of the bone to get the position from. This is NOT the index.
	 // offsetX: The X-component of the offset to add to the position relative to the bone's rotation.
	 // offsetY: The Y-component of the offset to add to the position relative to the bone's rotation.
	 // offsetZ: The Z-component of the offset to add to the position relative to the bone's rotation.
	static Vector3 GET_PED_BONE_COORDS(Ped ped, int boneId, float offsetX, float offsetY, float offsetZ) { return invoke<Vector3>(0x17C07FC640E86B4E, ped, boneId, offsetX, offsetY, offsetZ); } // 0x17C07FC640E86B4E 0x4579CAB1 b323
	static int ADD_SCENARIO_BLOCKING_AREA(float x1, float y1, float z1, float x2, float y2, float z2, BOOL p6, BOOL p7, BOOL p8, BOOL p9) { return invoke<int>(0x1B5C85C612E5256E, x1, y1, z1, x2, y2, z2, p6, p7, p8, p9); } // 0x1B5C85C612E5256E 0xA38C0234 b323
	static void REMOVE_SCENARIO_BLOCKING_AREAS() { return invoke<void>(0xD37401D78A929A49); } // 0xD37401D78A929A49 0x4DDF845F b323
	static void REMOVE_SCENARIO_BLOCKING_AREA(Any p0, BOOL p1) { return invoke<void>(0x31D16B74C6E29D66, p0, p1); } // 0x31D16B74C6E29D66 0x4483EF06 b323
	static void SET_SCENARIO_PEDS_SPAWN_IN_SPHERE_AREA(float x, float y, float z, float range, int p4) { return invoke<void>(0x28157D43CF600981, x, y, z, range, p4); } // 0x28157D43CF600981 0x80EAD297 b323
	static BOOL IS_PED_USING_SCENARIO(Ped ped, const char* scenario) { return invoke<BOOL>(0x1BF094736DD62C2E, ped, scenario); } // 0x1BF094736DD62C2E 0x0F65B0D4 b323
	static BOOL IS_PED_USING_ANY_SCENARIO(Ped ped) { return invoke<BOOL>(0x57AB4A3080F85143, ped); } // 0x57AB4A3080F85143 0x195EF5B7 b323
	static Any _0xEC6935EBE0847B90(Any p0, Any p1, Any p2, Any p3) { return invoke<Any>(0xEC6935EBE0847B90, p0, p1, p2, p3); } // 0xEC6935EBE0847B90 0x761F8F48 b323
	static void _0xA3A9299C4F2ADB98(Any p0) { return invoke<void>(0xA3A9299C4F2ADB98, p0); } // 0xA3A9299C4F2ADB98 0x033F43FA b323
	static void _0xF1C03A5352243A30(Any p0) { return invoke<void>(0xF1C03A5352243A30, p0); } // 0xF1C03A5352243A30 0x4C684C81 b323
	static void _0x425AECF167663F48(Ped ped, BOOL p1) { return invoke<void>(0x425AECF167663F48, ped, p1); } // 0x425AECF167663F48 0x5BC276AE b323
	static void _0x5B6010B3CBC29095(Any p0, BOOL p1) { return invoke<void>(0x5B6010B3CBC29095, p0, p1); } // 0x5B6010B3CBC29095 b323
	static void _0xCEDA60A74219D064(Any p0, BOOL p1) { return invoke<void>(0xCEDA60A74219D064, p0, p1); } // 0xCEDA60A74219D064 b323
	static void PLAY_FACIAL_ANIM(Ped ped, const char* animName, const char* animDict) { return invoke<void>(0xE1E65CA8AC9C00ED, ped, animName, animDict); } // 0xE1E65CA8AC9C00ED 0x1F6CCDDE b323
	static void _0x5687C7F05B39E401(Ped ped, const char* animDict) { return invoke<void>(0x5687C7F05B39E401, ped, animDict); } // 0x5687C7F05B39E401 b1493
	static void SET_FACIAL_IDLE_ANIM_OVERRIDE(Ped ped, const char* animName, const char* animDict) { return invoke<void>(0xFFC24B988B938B38, ped, animName, animDict); } // 0xFFC24B988B938B38 0x9BA19C13 b323
	static void CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(Ped ped) { return invoke<void>(0x726256CC1EEB182F, ped); } // 0x726256CC1EEB182F 0x5244F4E2 b323
	static void SET_PED_CAN_PLAY_GESTURE_ANIMS(Ped ped, BOOL toggle) { return invoke<void>(0xBAF20C5432058024, ped, toggle); } // 0xBAF20C5432058024 0xE131E3B3 b323
	 // p2 usually 0
	static void SET_PED_CAN_PLAY_VISEME_ANIMS(Ped ped, BOOL toggle, BOOL p2) { return invoke<void>(0xF833DDBA3B104D43, ped, toggle, p2); } // 0xF833DDBA3B104D43 0xA2FDAF27 b323
	static void SET_PED_CAN_PLAY_AMBIENT_ANIMS(Ped ped, BOOL toggle) { return invoke<void>(0x6373D1349925A70E, ped, toggle); } // 0x6373D1349925A70E 0xF8053081 b323
	static void SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(Ped ped, BOOL toggle) { return invoke<void>(0x0EB0585D15254740, ped, toggle); } // 0x0EB0585D15254740 0x5720A5DD b323
	static void SET_PED_CAN_HEAD_IK(Ped ped, BOOL toggle) { return invoke<void>(0xC11C18092C5530DC, ped, toggle); } // 0xC11C18092C5530DC 0xD3B04476 b323
	static void SET_PED_CAN_LEG_IK(Ped ped, BOOL toggle) { return invoke<void>(0x73518ECE2485412B, ped, toggle); } // 0x73518ECE2485412B 0x9955BC6F b323
	static void SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Ped ped, BOOL toggle) { return invoke<void>(0xEC4686EC06434678, ped, toggle); } // 0xEC4686EC06434678 0x584C5178 b323
	static BOOL IS_PED_HEADTRACKING_PED(Ped ped1, Ped ped2) { return invoke<BOOL>(0x5CD3CB88A7F8850D, ped1, ped2); } // 0x5CD3CB88A7F8850D 0x2A5DF721 b323
	static BOOL IS_PED_HEADTRACKING_ENTITY(Ped ped, Entity entity) { return invoke<BOOL>(0x813A0A7C9D2E831F, ped, entity); } // 0x813A0A7C9D2E831F 0x233C9ACF b323
	 // Research help : pastebin.com/fPL1cSwB
	 // New items added with underscore as first char
	 // -----------------------------------------------------------------------
	 // 
	 // enum PedConfigFlags
	 // {
	 // 	PED_FLAG_CAN_FLY_THRU_WINDSCREEN = 32,
	 // 	PED_FLAG_DIES_BY_RAGDOLL = 33,
	 // 	PED_FLAG_NO_COLLISION = 52,
	 // 	_PED_FLAG_IS_SHOOTING = 58,
	 // 	_PED_FLAG_IS_ON_GROUND = 60,
	 // 	PED_FLAG_NO_COLLIDE = 62,
	 // 	PED_FLAG_DEAD = 71,
	 // 	PED_FLAG_IS_SNIPER_SCOPE_ACTIVE = 72,
	 // 	PED_FLAG_SUPER_DEAD = 73,
	 // 	_PED_FLAG_IS_IN_AIR = 76,
	 // 	PED_FLAG_IS_AIMING = 78,
	 // 	PED_FLAG_DRUNK = 100,
	 // 	_PED_FLAG_IS_NOT_RAGDOLL_AND_NOT_PLAYING_ANIM = 104,
	 // 	PED_FLAG_NO_PLAYER_MELEE = 122,
	 // 	PED_FLAG_NM_MESSAGE_466 = 125,
	 // 	PED_FLAG_INJURED_LIMP = 166,
	 // 	PED_FLAG_INJURED_LIMP_2 = 170,
	 // 	PED_FLAG_INJURED_DOWN = 187,
	 // 	PED_FLAG_SHRINK = 223,
	 // 	PED_FLAG_MELEE_COMBAT = 224,
	 // 	_PED_FLAG_IS_ON_STAIRS = 253,
	 // 	_PED_FLAG_HAS_ONE_LEG_ON_GROUND = 276,
	 // 	PED_FLAG_NO_WRITHE = 281,
	 // 	PED_FLAG_FREEZE = 292,
	 // 	PED_FLAG_IS_STILL = 301,
	 // 	PED_FLAG_NO_PED_MELEE = 314,
	 // 	_PED_SWITCHING_WEAPON = 331,
	 // 	PED_FLAG_ALPHA = 410,
	 // };
	 // 
	 // (*) When flagId is set to 33 and the bool value to true, peds will die by starting ragdoll, so you should set this flag to false when you resurrect a ped.
	 // When flagId is set to 62 and the boolvalue to false this happens: Ped is taken out of vehicle and can't get back in when jacking their empty vehicle. If in a plane it falls from the sky and crashes. Sometimes peds vehicle continue to drive the route without its driver who's running after. 
	 // 
	 // (*)
	 // JUMPING CHANGES  60,61,104 TO FALSE
	 // BEING ON WATER CHANGES 60,61 TO FALSE AND 65,66,168 TO TRUE
	 // FALLING CHANGES 60,61,104,276 TO FALSE AND TO 76 TRUE
	 // DYING CHANGES 60,61,104,276* TO FALSE AND (NONE) TO TRUE
	 // DYING MAKES 60,61,104 TO FALSE
	 // BEING IN A CAR CHANGES 60,79,104 TO FALSE AND 62 TO TRUE
	 // 
	 // (*)Maximum value for flagId is 0x1AA (426) in b944.
	 // ID 0xF0 (240) appears to be a special flag which is handled different compared to the others IDs.
	 // 
	static void SET_PED_CONFIG_FLAG(Ped ped, int flagId, BOOL value) { return invoke<void>(0x1913FE4CBF41C463, ped, flagId, value); } // 0x1913FE4CBF41C463 0x9CFBE10D b323
	 // PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 240, 1);
	static void SET_PED_RESET_FLAG(Ped ped, int flagId, BOOL doReset) { return invoke<void>(0xC1E8A365BF3B29F2, ped, flagId, doReset); } // 0xC1E8A365BF3B29F2 0xCFF6FF66 b323
	 // p2 is always 1 in the scripts.
	 // 
	 // if (GET_PED_CONFIG_FLAG(ped, 78, 1))
	 // = returns true if ped is aiming/shooting a gun
	static BOOL GET_PED_CONFIG_FLAG(Ped ped, int flagId, BOOL p2) { return invoke<BOOL>(0x7EE53118C892B513, ped, flagId, p2); } // 0x7EE53118C892B513 0xABE98267 b323
	static BOOL GET_PED_RESET_FLAG(Ped ped, int flagId) { return invoke<BOOL>(0xAF9E59B1B1FBF2A0, ped, flagId); } // 0xAF9E59B1B1FBF2A0 0x2FC10D11 b323
	static void SET_PED_GROUP_MEMBER_PASSENGER_INDEX(Ped ped, int index) { return invoke<void>(0x0BDDB8D9EC6BCF3C, ped, index); } // 0x0BDDB8D9EC6BCF3C 0x2AB3670B b323
	static void SET_PED_CAN_EVASIVE_DIVE(Ped ped, BOOL toggle) { return invoke<void>(0x6B7A646C242A7059, ped, toggle); } // 0x6B7A646C242A7059 0x542FEB4D b323
	static void SET_PED_SHOOTS_AT_COORD(Ped ped, float x, float y, float z, BOOL toggle) { return invoke<void>(0x96A05E4FB321B1BA, ped, x, y, z, toggle); } // 0x96A05E4FB321B1BA 0xFD64EAE5 b323
	static void SET_PED_MODEL_IS_SUPPRESSED(Hash modelHash, BOOL toggle) { return invoke<void>(0xE163A4BCE4DE6F11, modelHash, toggle); } // 0xE163A4BCE4DE6F11 0x7820CA43 b323
	static void STOP_ANY_PED_MODEL_BEING_SUPPRESSED() { return invoke<void>(0xB47BD05FA66B40CF); } // 0xB47BD05FA66B40CF 0x5AD7DC55 b323
	static void SET_PED_GENERATES_DEAD_BODY_EVENTS(Ped ped, BOOL toggle) { return invoke<void>(0x7FB17BA2E7DECA5B, ped, toggle); } // 0x7FB17BA2E7DECA5B 0xE9B97A2B b323
	static void SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(Ped ped, BOOL toggle) { return invoke<void>(0xDF993EE5E90ABA25, ped, toggle); } // 0xDF993EE5E90ABA25 0xE9BD733A b323
	 // PoliceMotorcycleHelmet   1024    
	 // RegularMotorcycleHelmet   4096    
	 // FiremanHelmet 16384   
	 // PilotHeadset  32768   
	 // PilotHelmet   65536
	 // --
	 // p2 is generally 4096 or 16384 in the scripts. p1 varies between 1 and 0.
	static void GIVE_PED_HELMET(Ped ped, BOOL cannotRemove, int helmetFlag, int textureIndex) { return invoke<void>(0x54C7C4A94367717E, ped, cannotRemove, helmetFlag, textureIndex); } // 0x54C7C4A94367717E 0x1862A461 b323
	static void REMOVE_PED_HELMET(Ped ped, BOOL instantly) { return invoke<void>(0xA7B2458D0AD6DED8, ped, instantly); } // 0xA7B2458D0AD6DED8 0x2086B1F0 b323
	 // IS_PED_*
	static BOOL _0x14590DDBEDB1EC85(Ped ped) { return invoke<BOOL>(0x14590DDBEDB1EC85, ped); } // 0x14590DDBEDB1EC85 0xA1008E0E b323
	static void SET_PED_HELMET(Ped ped, BOOL canWearHelmet) { return invoke<void>(0x560A43136EB58105, ped, canWearHelmet); } // 0x560A43136EB58105 0xED366E53 b323
	 // Returns true if the ped passed through the parenthesis is wearing a helmet.
	static BOOL IS_PED_WEARING_HELMET(Ped ped) { return invoke<BOOL>(0xF33BDFE19B309B19, ped); } // 0xF33BDFE19B309B19 0x0D680D49 b323
	static Any _0x451294E859ECC018(Any p0) { return invoke<Any>(0x451294E859ECC018, p0); } // 0x451294E859ECC018 0x8A3A3116 b323
	static Any _0x9D728C1E12BF5518(Any p0) { return invoke<Any>(0x9D728C1E12BF5518, p0); } // 0x9D728C1E12BF5518 0x74EB662D b323
	static void SET_PED_TO_LOAD_COVER(Ped ped, BOOL toggle) { return invoke<void>(0x332B562EEDA62399, ped, toggle); } // 0x332B562EEDA62399 0xCF94BA97 b323
	 // This native does absolutely nothing, just a nullsub
	static void SET_PED_PLAYS_HEAD_ON_HORN_ANIM_WHEN_DIES_IN_VEHICLE(Ped ped, BOOL toggle) { return invoke<void>(0x94D94BF1A75AED3D, ped, toggle); } // 0x94D94BF1A75AED3D 0x7C563CD2 b323
	 // "IK" stands for "Inverse kinematics." I assume this has something to do with how the ped uses his legs to balance. In the scripts, the second parameter is always an int with a value of 2, 0, or sometimes 1
	static void SET_PED_LEG_IK_MODE(Ped ped, int mode) { return invoke<void>(0xC396F5B86FF9FEBD, ped, mode); } // 0xC396F5B86FF9FEBD 0xFDDB042E b323
	static void SET_PED_CAN_SWITCH_WEAPON(Ped ped, BOOL toggle) { return invoke<void>(0xED7F7EFE9FABF340, ped, toggle); } // 0xED7F7EFE9FABF340 0xB5F8BA28 b323
	static void SET_PED_DIES_INSTANTLY_IN_WATER(Ped ped, BOOL toggle) { return invoke<void>(0xEEB64139BA29A7CF, ped, toggle); } // 0xEEB64139BA29A7CF 0xFE2554FC b323
	static void STOP_PED_WEAPON_FIRING_WHEN_DROPPED(Ped ped) { return invoke<void>(0xC158D28142A34608, ped); } // 0xC158D28142A34608 0x4AC3421E b323
	static void SET_SCRIPTED_ANIM_SEAT_OFFSET(Ped ped, float p1) { return invoke<void>(0x5917BBA32D06C230, ped, p1); } // 0x5917BBA32D06C230 0x7CEFFA45 b323
	 // 0 - Stationary (Will just stand in place)
	 // 1 - Defensive (Will try to find cover and very likely to blind fire)
	 // 2 - Offensive (Will attempt to charge at enemy but take cover as well)
	 // 3 - Suicidal Offensive (Will try to flank enemy in a suicidal attack)
	static void SET_PED_COMBAT_MOVEMENT(Ped ped, int combatMovement) { return invoke<void>(0x4D9CA1009AFBD057, ped, combatMovement); } // 0x4D9CA1009AFBD057 0x12E62F9E b323
	 // 100 would equal attack
	 // less then 50ish would mean run away
	 // 
	 // Only the values 0, 1 and 2 occur in the decompiled scripts. Most likely refers directly to the values also described in combatbehaviour.meta:
	 // 0: CA_Poor
	 // 1: CA_Average
	 // 2: CA_Professional
	 // 
	 // Tested this and got the same results as the first explanation here. Could not find any difference between 0, 1 and 2. 
	static void SET_PED_COMBAT_ABILITY(Ped ped, int p1) { return invoke<void>(0xC7622C0D36B2FDA8, ped, p1); } // 0xC7622C0D36B2FDA8 0x6C23D329 b323
	 // Only the values 0, 1 and 2 occur in the decompiled scripts. Most likely refers directly to the values also described as AttackRange in combatbehaviour.meta:
	 // 0: CR_Near
	 // 1: CR_Medium
	 // 2: CR_Far
	static void SET_PED_COMBAT_RANGE(Ped ped, int p1) { return invoke<void>(0x3C606747B23E497B, ped, p1); } // 0x3C606747B23E497B 0x8818A959 b323
	 // These combat attributes seem to be the same as the BehaviourFlags from combatbehaviour.meta.
	 // So far, these are the equivalents found:
	 // enum CombatAttributes
	 // {
	 //  BF_CanUseCover = 0,
	 //    BF_CanUseVehicles = 1,
	 //     BF_CanDoDrivebys = 2,
	 //  BF_CanLeaveVehicle = 3,
	 //    BF_CanFightArmedPedsWhenNotArmed = 5,
	 //  BF_CanTauntInVehicle = 20,
	 //     BF_AlwaysFight = 46,
	 //   BF_IgnoreTrafficWhenDriving = 52,
	 //         BF_FreezeMovement = 292,
	 //         BF_PlayerCanUseFiringWeapons = 1424
	 // };
	 // 
	 // 8 = ?
	 // 9 = ?
	 // 13 = ?
	 // 14 ?
	 // 
	 // Research thread: gtaforums.com/topic/833391-researchguide-combat-behaviour-flags/
	static void SET_PED_COMBAT_ATTRIBUTES(Ped ped, int attributeIndex, BOOL enabled) { return invoke<void>(0x9F7794730795E019, ped, attributeIndex, enabled); } // 0x9F7794730795E019 0x81D64248 b323
	 // Only 1 and 2 appear in the scripts. combatbehaviour.meta seems to only have TLR_SearchForTarget for all peds, but we don't know if that's 1 or 2.
	static void SET_PED_TARGET_LOSS_RESPONSE(Ped ped, int responseType) { return invoke<void>(0x0703B9079823DA4A, ped, responseType); } // 0x0703B9079823DA4A 0xCFA613FF b323
	static BOOL IS_PED_PERFORMING_MELEE_ACTION(Ped ped) { return invoke<BOOL>(0xDCCA191DF9980FD7, ped); } // 0xDCCA191DF9980FD7 0x139C0875 b323
	static BOOL IS_PED_PERFORMING_STEALTH_KILL(Ped ped) { return invoke<BOOL>(0xFD4CCDBCC59941B7, ped); } // 0xFD4CCDBCC59941B7 0x9ADD7B21 b323
	static BOOL IS_PED_BEING_STEALTH_KILLED(Ped ped) { return invoke<BOOL>(0x863B23EFDE9C5DF2, ped); } // 0x863B23EFDE9C5DF2 0xD044C8AF b323
	static BOOL WAS_PED_KILLED_BY_STEALTH(Ped ped) { return invoke<BOOL>(0xF9800AA1A771B000, ped); } // 0xF9800AA1A771B000 0x2EA4B54E b323
	static BOOL WAS_PED_KILLED_BY_TAKEDOWN(Ped ped) { return invoke<BOOL>(0x7F08E26039C7347C, ped); } // 0x7F08E26039C7347C 0xBDD3CE69 b323
	 // bit 15 (0x8000) = force cower
	static void SET_PED_FLEE_ATTRIBUTES(Ped ped, int attributeFlags, BOOL enable) { return invoke<void>(0x70A2D1137C8ED7C9, ped, attributeFlags, enable); } // 0x70A2D1137C8ED7C9 0xA717A875 b323
	static void SET_PED_STEERS_AROUND_PEDS(Ped ped, BOOL toggle) { return invoke<void>(0x46F2193B3AD1D891, ped, toggle); } // 0x46F2193B3AD1D891 0x797CAE4F b323
	static void _0xA9B61A329BFDCBEA(Any p0, BOOL p1) { return invoke<void>(0xA9B61A329BFDCBEA, p0, p1); } // 0xA9B61A329BFDCBEA 0x2276DE0D b323
	static void SET_PED_INCREASED_AVOIDANCE_RADIUS(Ped ped) { return invoke<void>(0x570389D1C3DE3C6B, ped); } // 0x570389D1C3DE3C6B 0x59C52BE6 b323
	static BOOL IS_ANY_PED_NEAR_POINT(float x, float y, float z, float radius) { return invoke<BOOL>(0x083961498679DC9F, x, y, z, radius); } // 0x083961498679DC9F 0xFBD9B050 b323
	 // Function.Call(Hash._0x2208438012482A1A, ped, 0, 0);
	 // 
	 // This makes the ped have faster animations
	 // 
	 // FORCE_*
	static void _0x2208438012482A1A(Ped ped, BOOL p1, BOOL p2) { return invoke<void>(0x2208438012482A1A, ped, p1, p2); } // 0x2208438012482A1A 0x187B9070 b323
	static BOOL IS_PED_HEADING_TOWARDS_POSITION(Ped ped, float x, float y, float z, float p4) { return invoke<BOOL>(0xFCF37A457CB96DC0, ped, x, y, z, p4); } // 0xFCF37A457CB96DC0 0x45037B9B b323
	static void REQUEST_PED_VISIBILITY_TRACKING(Ped ped) { return invoke<void>(0x7D7A2E43E74E2EB8, ped); } // 0x7D7A2E43E74E2EB8 0x840D24D3 b323
	static void REQUEST_PED_VEHICLE_VISIBILITY_TRACKING(Ped ped, BOOL p1) { return invoke<void>(0x2BC338A7B21F4608, ped, p1); } // 0x2BC338A7B21F4608 0x31C31DAA b323
	 // returns whether or not a ped is visible within your FOV, not this check auto's to false after a certain distance.
	 // 
	 // 
	 // Target needs to be tracked.. won't work otherwise.
	static BOOL IS_TRACKED_PED_VISIBLE(Ped ped) { return invoke<BOOL>(0x91C8E617F64188AC, ped); } // 0x91C8E617F64188AC 0x33248CC1 b323
	static BOOL HAS_PED_RECEIVED_EVENT(Ped ped, int eventId) { return invoke<BOOL>(0x8507BCB710FA6DC0, ped, eventId); } // 0x8507BCB710FA6DC0 0xECD73DB0 b323
	static BOOL CAN_PED_SEE_HATED_PED(Ped ped1, Ped ped2) { return invoke<BOOL>(0x6CD5A433374D4CFB, ped1, ped2); } // 0x6CD5A433374D4CFB 0x74A0F291 b323
	 // no bone= -1
	 // 
	 // boneIds:
	 //         SKEL_ROOT = 0x0,
	 //    SKEL_Pelvis = 0x2e28,
	 //  SKEL_L_Thigh = 0xe39f,
	 //     SKEL_L_Calf = 0xf9bb,
	 //  SKEL_L_Foot = 0x3779,
	 //  SKEL_L_Toe0 = 0x83c,
	 //   IK_L_Foot = 0xfedd,
	 //    PH_L_Foot = 0xe175,
	 //    MH_L_Knee = 0xb3fe,
	 //    SKEL_R_Thigh = 0xca72,
	 //     SKEL_R_Calf = 0x9000,
	 //  SKEL_R_Foot = 0xcc4d,
	 //  SKEL_R_Toe0 = 0x512d,
	 //  IK_R_Foot = 0x8aae,
	 //    PH_R_Foot = 0x60e6,
	 //    MH_R_Knee = 0x3fcf,
	 //    RB_L_ThighRoll = 0x5c57,
	 //   RB_R_ThighRoll = 0x192a,
	 //   SKEL_Spine_Root = 0xe0fd,
	 //  SKEL_Spine0 = 0x5c01,
	 //  SKEL_Spine1 = 0x60f0,
	 //  SKEL_Spine2 = 0x60f1,
	 //  SKEL_Spine3 = 0x60f2,
	 //  SKEL_L_Clavicle = 0xfcd9,
	 //  SKEL_L_UpperArm = 0xb1c5,
	 //  SKEL_L_Forearm = 0xeeeb,
	 //   SKEL_L_Hand = 0x49d9,
	 //  SKEL_L_Finger00 = 0x67f2,
	 //  SKEL_L_Finger01 = 0xff9,
	 //   SKEL_L_Finger02 = 0xffa,
	 //   SKEL_L_Finger10 = 0x67f3,
	 //  SKEL_L_Finger11 = 0x1049,
	 //  SKEL_L_Finger12 = 0x104a,
	 //  SKEL_L_Finger20 = 0x67f4,
	 //  SKEL_L_Finger21 = 0x1059,
	 //  SKEL_L_Finger22 = 0x105a,
	 //  SKEL_L_Finger30 = 0x67f5,
	 //  SKEL_L_Finger31 = 0x1029,
	 //  SKEL_L_Finger32 = 0x102a,
	 //  SKEL_L_Finger40 = 0x67f6,
	 //  SKEL_L_Finger41 = 0x1039,
	 //  SKEL_L_Finger42 = 0x103a,
	 //  PH_L_Hand = 0xeb95,
	 //    IK_L_Hand = 0x8cbd,
	 //    RB_L_ForeArmRoll = 0xee4f,
	 //     RB_L_ArmRoll = 0x1470,
	 //     MH_L_Elbow = 0x58b7,
	 //   SKEL_R_Clavicle = 0x29d2,
	 //  SKEL_R_UpperArm = 0x9d4d,
	 //  SKEL_R_Forearm = 0x6e5c,
	 //   SKEL_R_Hand = 0xdead,
	 //  SKEL_R_Finger00 = 0xe5f2,
	 //  SKEL_R_Finger01 = 0xfa10,
	 //  SKEL_R_Finger02 = 0xfa11,
	 //  SKEL_R_Finger10 = 0xe5f3,
	 //  SKEL_R_Finger11 = 0xfa60,
	 //  SKEL_R_Finger12 = 0xfa61,
	 //  SKEL_R_Finger20 = 0xe5f4,
	 //  SKEL_R_Finger21 = 0xfa70,
	 //  SKEL_R_Finger22 = 0xfa71,
	 //  SKEL_R_Finger30 = 0xe5f5,
	 //  SKEL_R_Finger31 = 0xfa40,
	 //  SKEL_R_Finger32 = 0xfa41,
	 //  SKEL_R_Finger40 = 0xe5f6,
	 //  SKEL_R_Finger41 = 0xfa50,
	 //  SKEL_R_Finger42 = 0xfa51,
	 //  PH_R_Hand = 0x6f06,
	 //    IK_R_Hand = 0x188e,
	 //    RB_R_ForeArmRoll = 0xab22,
	 //     RB_R_ArmRoll = 0x90ff,
	 //     MH_R_Elbow = 0xbb0,
	 //    SKEL_Neck_1 = 0x9995,
	 //  SKEL_Head = 0x796e,
	 //    IK_Head = 0x322c,
	 //  FACIAL_facialRoot = 0xfe2c,
	 //    FB_L_Brow_Out_000 = 0xe3db,
	 //    FB_L_Lid_Upper_000 = 0xb2b6,
	 //   FB_L_Eye_000 = 0x62ac,
	 //     FB_L_CheekBone_000 = 0x542e,
	 //   FB_L_Lip_Corner_000 = 0x74ac,
	 //  FB_R_Lid_Upper_000 = 0xaa10,
	 //   FB_R_Eye_000 = 0x6b52,
	 //     FB_R_CheekBone_000 = 0x4b88,
	 //   FB_R_Brow_Out_000 = 0x54c,
	 //     FB_R_Lip_Corner_000 = 0x2ba6,
	 //  FB_Brow_Centre_000 = 0x9149,
	 //   FB_UpperLipRoot_000 = 0x4ed2,
	 //  FB_UpperLip_000 = 0xf18f,
	 //  FB_L_Lip_Top_000 = 0x4f37,
	 //     FB_R_Lip_Top_000 = 0x4537,
	 //     FB_Jaw_000 = 0xb4a0,
	 //   FB_LowerLipRoot_000 = 0x4324,
	 //  FB_LowerLip_000 = 0x508f,
	 //  FB_L_Lip_Bot_000 = 0xb93b,
	 //     FB_R_Lip_Bot_000 = 0xc33b,
	 //     FB_Tongue_000 = 0xb987,
	 //    RB_Neck_1 = 0x8b93,
	 //    IK_Root = 0xdd1c
	static int GET_PED_BONE_INDEX(Ped ped, int boneId) { return invoke<int>(0x3F428D08BE5AAE31, ped, boneId); } // 0x3F428D08BE5AAE31 0x259C6BA2 b323
	 // p6 always 2 (but it doesnt seem to matter...)
	 // 
	 // roll and pitch 0
	 // yaw to Ped.rotation
	static int CREATE_SYNCHRONIZED_SCENE(float x, float y, float z, float roll, float pitch, float yaw, int p6) { return invoke<int>(0x8C18E0F9080ADD73, x, y, z, roll, pitch, yaw, p6); } // 0x8C18E0F9080ADD73 0xFFDDF8FA b323
	 // Returns true if a synchronized scene is running
	static BOOL IS_SYNCHRONIZED_SCENE_RUNNING(int sceneId) { return invoke<BOOL>(0x25D39B935A038A26, sceneId); } // 0x25D39B935A038A26 0x57A282F1 b323
	static void SET_SYNCHRONIZED_SCENE_ORIGIN(int sceneID, float x, float y, float z, float roll, float pitch, float yaw, BOOL p7) { return invoke<void>(0x6ACF6B7225801CD7, sceneID, x, y, z, roll, pitch, yaw, p7); } // 0x6ACF6B7225801CD7 0x2EC2A0B2 b323
	static void SET_SYNCHRONIZED_SCENE_PHASE(int sceneID, float phase) { return invoke<void>(0x734292F4F0ABF6D0, sceneID, phase); } // 0x734292F4F0ABF6D0 0xF5AB0D98 b323
	static float GET_SYNCHRONIZED_SCENE_PHASE(int sceneID) { return invoke<float>(0xE4A310B1D7FA73CC, sceneID); } // 0xE4A310B1D7FA73CC 0xB0B2C852 b323
	static void SET_SYNCHRONIZED_SCENE_RATE(int sceneID, float rate) { return invoke<void>(0xB6C49F8A5E295A5D, sceneID, rate); } // 0xB6C49F8A5E295A5D 0xF10112FD b323
	static float GET_SYNCHRONIZED_SCENE_RATE(int sceneID) { return invoke<float>(0xD80932D577274D40, sceneID); } // 0xD80932D577274D40 0x89365F0D b323
	static void SET_SYNCHRONIZED_SCENE_LOOPED(int sceneID, BOOL toggle) { return invoke<void>(0xD9A897A4C6C2974F, sceneID, toggle); } // 0xD9A897A4C6C2974F 0x32ED9F82 b323
	static void SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(int sceneID, BOOL toggle) { return invoke<void>(0x394B9CD12435C981, sceneID, toggle); } // 0x394B9CD12435C981 0x2DE48DA1 b323
	static BOOL IS_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(int sceneID) { return invoke<BOOL>(0x7F2F4F13AC5257EF, sceneID); } // 0x7F2F4F13AC5257EF 0x72CF2514 b323
	static void ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(int sceneID, Entity entity, int boneIndex) { return invoke<void>(0x272E4723B56A3B96, sceneID, entity, boneIndex); } // 0x272E4723B56A3B96 0xE9BA6189 b323
	static void DETACH_SYNCHRONIZED_SCENE(int sceneID) { return invoke<void>(0x6D38F1F04CBB37EA, sceneID); } // 0x6D38F1F04CBB37EA 0x52A1CAB2 b323
	static void _DISPOSE_SYNCHRONIZED_SCENE(int scene) { return invoke<void>(0xCD9CC7E200A52A6F, scene); } // 0xCD9CC7E200A52A6F 0xBF7F9035 b323
	 // Some motionstate hashes are
	 // 
	 // 0xec17e58 (standing idle), 0xbac0f10b (nothing?), 0x3f67c6af (aiming with pistol 2-h), 0x422d7a25 (stealth), 0xbd8817db, 0x916e828c
	 // 
	 // and those for the strings
	 // 
	 // "motionstate_idle", "motionstate_walk", "motionstate_run", "motionstate_actionmode_idle", and "motionstate_actionmode_walk".
	 // 
	 // Regarding p2, p3 and p4: Most common is 0, 0, 0); followed by 0, 1, 0); and 1, 1, 0); in the scripts. p4 is very rarely something other than 0.
	 // 
	 //  [31/03/2017] ins1de :
	 // 
	 //         enum MotionState
	 //         {
	 //             StopRunning = -530524,
	 //             StopWalking = -668482597,
	 //             Idle = 247561816, // 1, 1, 0
	 //             Idl2 = -1871534317,
	 //             SkyDive =-1161760501, // 0, 1, 0
	 //             Stealth = 1110276645,
	 //             Sprint = -1115154469,
	 //             Swim = -1855028596,
	 //             Unknown1 = 1063765679,
	 //             Unknown2 = -633298724,
	 //         }
	static BOOL FORCE_PED_MOTION_STATE(Ped ped, Hash motionStateHash, BOOL p2, int p3, BOOL p4) { return invoke<BOOL>(0xF28965D04F570DCA, ped, motionStateHash, p2, p3, p4); } // 0xF28965D04F570DCA 0x164DDEFF b323
	static void SET_PED_MAX_MOVE_BLEND_RATIO(Ped ped, float value) { return invoke<void>(0x433083750C5E064A, ped, value); } // 0x433083750C5E064A 0xEAD0269A b323
	static void SET_PED_MIN_MOVE_BLEND_RATIO(Ped ped, float value) { return invoke<void>(0x01A898D26E2333DD, ped, value); } // 0x01A898D26E2333DD 0x383EC364 b323
	 // Checks if the specified unknown flag is set in the ped's model.
	 // The engine itself seems to exclusively check for flags 1 and 4 (Might be inlined code of the check that checks for other flags).
	 // Game scripts exclusively check for flags 1 and 4.
	static BOOL _0x46B05BCAE43856B0(Ped ped, int flag) { return invoke<BOOL>(0x46B05BCAE43856B0, ped, flag); } // 0x46B05BCAE43856B0 0x79543043 b323
	 // Returns size of array, passed into the second variable.
	 // 
	 // See below for usage information.
	 // 
	 // This function actually requires a struct, where the first value is the maximum number of elements to return.  Here is a sample of how I was able to get it to work correctly, without yet knowing the struct format.
	 // 
	 // //Setup the array
	 //  const int numElements = 10;
	 //    const int arrSize = numElements * 2 + 2;
	 //   Any veh[arrSize];
	 //  //0 index is the size of the array
	 //     veh[0] = numElements;
	 // 
	 //    int count = PED::GET_PED_NEARBY_VEHICLES(PLAYER::PLAYER_PED_ID(), veh);
	 // 
	 //  if (veh != NULL)
	 //   {
	 //      //Simple loop to go through results
	 //        for (int i = 0; i < count; i++)
	 //         {
	 //          int offsettedID = i * 2 + 2;
	 //           //Make sure it exists
	 //          if (veh[offsettedID] != NULL && ENTITY::DOES_ENTITY_EXIST(veh[offsettedID]))
	 //           {
	 //              //Do something
	 //             }
	 //      }
	 //  }  
	static int GET_PED_NEARBY_VEHICLES(Ped ped, int* sizeAndVehs) { return invoke<int>(0xCFF869CBFA210D82, ped, sizeAndVehs); } // 0xCFF869CBFA210D82 0xCB716F68 b323
	 // sizeAndPeds - is a pointer to an array. The array is filled with peds found nearby the ped supplied to the first argument.
	 // ignore - ped type to ignore
	 // 
	 // Return value is the number of peds found and added to the array passed.
	 // 
	 // -----------------------------------
	 // 
	 // To make this work in most menu bases at least in C++ do it like so,
	 // 
	 //  Formatted Example: pastebin.com/D8an9wwp
	 // 
	 // -----------------------------------
	 // 
	 // Example: gtaforums.com/topic/789788-function-args-to-pedget-ped-nearby-peds/?p=1067386687
	static int GET_PED_NEARBY_PEDS(Ped ped, int* sizeAndPeds, int ignore) { return invoke<int>(0x23F8F5FC7E8C4A6B, ped, sizeAndPeds, ignore); } // 0x23F8F5FC7E8C4A6B 0x4D3325F4 b323
	 // HAS_*
	static BOOL _HAS_STREAMED_PED_ASSETS_LOADED(Ped ped) { return invoke<BOOL>(0x7350823473013C02, ped); } // 0x7350823473013C02 0xF9FB4B71 b323
	 // p2 is usually -1 in the scripts. action is either 0 or "DEFAULT_ACTION".
	static void SET_PED_USING_ACTION_MODE(Ped ped, BOOL p1, int p2, const char* action) { return invoke<void>(0xD75ACCF5E0FB5367, ped, p1, p2, action); } // 0xD75ACCF5E0FB5367 0x8802F696 b323
	 // Overrides the ped's collision capsule radius for the current tick.
	 // Must be called every tick to be effective.
	 // 
	 // Setting this to 0.001 will allow warping through some objects.
	static void SET_PED_CAPSULE(Ped ped, float value) { return invoke<void>(0x364DF566EC833DE2, ped, value); } // 0x364DF566EC833DE2 0xB153E1B9 b323
	 // gtaforums.com/topic/885580-ped-headshotmugshot-txd/
	static void UNREGISTER_PEDHEADSHOT(int id) { return invoke<void>(0x96B1361D9B24C2FF, id); } // 0x96B1361D9B24C2FF 0x0879AE45 b323
	 // gtaforums.com/topic/885580-ped-headshotmugshot-txd/
	static BOOL IS_PEDHEADSHOT_VALID(int id) { return invoke<BOOL>(0xA0A9668F158129A2, id); } // 0xA0A9668F158129A2 0x0B1080C4 b323
	 // gtaforums.com/topic/885580-ped-headshotmugshot-txd/
	static BOOL IS_PEDHEADSHOT_READY(int id) { return invoke<BOOL>(0x7085228842B13A67, id); } // 0x7085228842B13A67 0x761CD02E b323
	 // gtaforums.com/topic/885580-ped-headshotmugshot-txd/
	static const char* GET_PEDHEADSHOT_TXD_STRING(int id) { return invoke<const char*>(0xDB4EACD4AD0A5D6B, id); } // 0xDB4EACD4AD0A5D6B 0x76D28E96 b323
	static void SET_IK_TARGET(Ped ped, int ikIndex, Entity entityLookAt, int boneLookAt, float offsetX, float offsetY, float offsetZ, Any p7, int blendInDuration, int blendOutDuration) { return invoke<void>(0xC32779C16FCEECD9, ped, ikIndex, entityLookAt, boneLookAt, offsetX, offsetY, offsetZ, p7, blendInDuration, blendOutDuration); } // 0xC32779C16FCEECD9 0x6FE5218C b323
	 // FORCE_*
	static void _0xED3C76ADFA6D07C4(Ped ped) { return invoke<void>(0xED3C76ADFA6D07C4, ped); } // 0xED3C76ADFA6D07C4 0xFB4000DC b323
	static BOOL HAS_ACTION_MODE_ASSET_LOADED(const char* asset) { return invoke<BOOL>(0xE4B5F4BF2CB24E65, asset); } // 0xE4B5F4BF2CB24E65 0xF7EB2BF1 b323
	static void REMOVE_ACTION_MODE_ASSET(const char* asset) { return invoke<void>(0x13E940F88470FA51, asset); } // 0x13E940F88470FA51 0x3F480F92 b323
	static void SET_PED_LOD_MULTIPLIER(Ped ped, float multiplier) { return invoke<void>(0xDC2C5C242AAC342B, ped, multiplier); } // 0xDC2C5C242AAC342B 0x1D2B5C70 b323
	 // SET_PED_CAN_*
	static void _0xE861D0B05C7662B8(Ped ped, BOOL p1, int p2) { return invoke<void>(0xE861D0B05C7662B8, ped, p1, p2); } // 0xE861D0B05C7662B8 0x2F9550C2 b323
	static void SET_FORCE_FOOTSTEP_UPDATE(Ped ped, BOOL toggle) { return invoke<void>(0x129466ED55140F8D, ped, toggle); } // 0x129466ED55140F8D 0x37DBC2AD b323
	static void SET_POP_CONTROL_SPHERE_THIS_FRAME(Any p0, Any p1, Any p2, Any p3, Any p4) { return invoke<void>(0xD8C3BE3EE94CAF2D, p0, p1, p2, p3, p4); } // 0xD8C3BE3EE94CAF2D 0x4BBE5E2C b323
	static void _0x288DF530C92DAD6F(Any p0, float p1) { return invoke<void>(0x288DF530C92DAD6F, p0, p1); } // 0x288DF530C92DAD6F b323
}

namespace PHYSICS
{
	 // Creates a rope at the specific position, that extends in the specified direction when not attached to any entities.
	 // __
	 // 
	 // Add_Rope(pos.x,pos.y,pos.z,0.0,0.0,0.0,20.0,4,20.0,1.0,0.0,false,false,false,5.0,false,NULL)
	 // 
	 // When attached, Position<vector> does not matter
	 // When attached, Angle<vector> does not matter
	 // 
	 // Rope Type:
	 // 4 and bellow is a thick rope
	 // 5 and up are small metal wires
	 // 0 crashes the game
	 // 
	 // Max_length - Rope is forced to this length, generally best to keep this the same as your rope length.
	 // 
	 // windingSpeed - Speed the Rope is being winded, using native START_ROPE_WINDING. Set positive for winding and negative for unwinding.
	 // 
	 // Rigid - If max length is zero, and this is set to false the rope will become rigid (it will force a specific distance, what ever length is, between the objects).
	 // 
	 // breakable - Whether or not shooting the rope will break it.
	 // 
	 // unkPtr - unknown ptr, always 0 in orig scripts
	 // __
	 // 
	 // Lengths can be calculated like so:
	 // 
	 // float distance = abs(x1 - x2) + abs(y1 - y2) + abs(z1 - z2); // Rope length
	 // 
	 // 
	 // NOTES:
	 // 
	 // Rope does NOT interact with anything you attach it to, in some cases it make interact with the world AFTER it breaks (seems to occur if you set the type to -1).
	 // 
	 // Rope will sometimes contract and fall to the ground like you'd expect it to, but since it doesn't interact with the world the effect is just jaring.
	static int ADD_ROPE(float x, float y, float z, float rotX, float rotY, float rotZ, float length, int ropeType, float maxLength, float minLength, float windingSpeed, BOOL p11, BOOL p12, BOOL rigid, float p14, BOOL breakWhenShot, Any* unkPtr) { return invoke<int>(0xE832D760399EB220, x, y, z, rotX, rotY, rotZ, length, ropeType, maxLength, minLength, windingSpeed, p11, p12, rigid, p14, breakWhenShot, unkPtr); } // 0xE832D760399EB220 0xA592EC74 b323
	static void DELETE_ROPE(int* ropeId) { return invoke<void>(0x52B4829281364649, ropeId); } // 0x52B4829281364649 0x748D72AF b323
	static void DELETE_CHILD_ROPE(int ropeId) { return invoke<void>(0xAA5D6B1888E4DB20, ropeId); } // 0xAA5D6B1888E4DB20 0xB19B4706 b323
	static BOOL DOES_ROPE_EXIST(int* ropeId) { return invoke<BOOL>(0xFD5448BE3111ED96, ropeId); } // 0xFD5448BE3111ED96 0x66E4A3AC b323
	static void ROPE_DRAW_SHADOW_ENABLED(int* ropeId, BOOL toggle) { return invoke<void>(0xF159A63806BB5BA8, ropeId, toggle); } // 0xF159A63806BB5BA8 0x51523B8C b323
	 // Attaches entity 1 to entity 2.
	static void ATTACH_ENTITIES_TO_ROPE(int ropeId, Entity ent1, Entity ent2, float ent1_x, float ent1_y, float ent1_z, float ent2_x, float ent2_y, float ent2_z, float length, BOOL p10, BOOL p11, Any* p12, Any* p13) { return invoke<void>(0x3D95EC8B6D940AC3, ropeId, ent1, ent2, ent1_x, ent1_y, ent1_z, ent2_x, ent2_y, ent2_z, length, p10, p11, p12, p13); } // 0x3D95EC8B6D940AC3 0x7508668F b323
	static void DETACH_ROPE_FROM_ENTITY(int ropeId, Entity entity) { return invoke<void>(0xBCF3026912A8647D, ropeId, entity); } // 0xBCF3026912A8647D 0x3E720BEE b323
	static void ROPE_SET_UPDATE_ORDER(int ropeId, Any p1) { return invoke<void>(0xDC57A637A20006ED, ropeId, p1); } // 0xDC57A637A20006ED 0x80DB77A7 b323
	 // ROPE_*
	static void _0x36CCB9BE67B970FD(int ropeId, BOOL p1) { return invoke<void>(0x36CCB9BE67B970FD, ropeId, p1); } // 0x36CCB9BE67B970FD 0xC67D5CF6 b323
	 // IS_*
	static BOOL _0x84DE3B5FB3E666F0(int* ropeId) { return invoke<BOOL>(0x84DE3B5FB3E666F0, ropeId); } // 0x84DE3B5FB3E666F0 0x7A18BB9C b323
	static void START_ROPE_WINDING(int ropeId) { return invoke<void>(0x1461C72C889E343E, ropeId); } // 0x1461C72C889E343E 0x5187BED3 b323
	static void STOP_ROPE_WINDING(int ropeId) { return invoke<void>(0xCB2D4AB84A19AA7C, ropeId); } // 0xCB2D4AB84A19AA7C 0x46826B53 b323
	static void ROPE_CONVERT_TO_SIMPLE(int ropeId) { return invoke<void>(0x5389D48EFA2F079A, ropeId); } // 0x5389D48EFA2F079A 0x43E92628 b323
	 // Loads rope textures for all ropes in the current scene.
	static void ROPE_LOAD_TEXTURES() { return invoke<void>(0x9B9039DBF2D258C1); } // 0x9B9039DBF2D258C1 0xBA97CE91 b323
	static BOOL ROPE_ARE_TEXTURES_LOADED() { return invoke<BOOL>(0xF2D0E6A75CC05597); } // 0xF2D0E6A75CC05597 0x5FDC1047 b323
	 // Unloads rope textures for all ropes in the current scene.
	static void ROPE_UNLOAD_TEXTURES() { return invoke<void>(0x6CE36C35C1AC8163); } // 0x6CE36C35C1AC8163 0x584463E0 b323
	static void _0xB1B6216CA2E7B55E(Any p0, BOOL p1, BOOL p2) { return invoke<void>(0xB1B6216CA2E7B55E, p0, p1, p2); } // 0xB1B6216CA2E7B55E 0x7C6F7668 b323
	static void APPLY_IMPULSE_TO_CLOTH(float posX, float posY, float posZ, float vecX, float vecY, float vecZ, float impulse) { return invoke<void>(0xE37F721824571784, posX, posY, posZ, vecX, vecY, vecZ, impulse); } // 0xE37F721824571784 0xA2A5C9FE b323
	static void SET_DAMPING(Entity entity, int vertex, float value) { return invoke<void>(0xEEA3B200A6FEB65B, entity, vertex, value); } // 0xEEA3B200A6FEB65B 0xCFB37773 b323
	static void ACTIVATE_PHYSICS(Entity entity) { return invoke<void>(0x710311ADF0E20730, entity); } // 0x710311ADF0E20730 0x031711B8 b323
	static void SET_CGOFFSET(Entity entity, float x, float y, float z) { return invoke<void>(0xD8FA3908D7B86904, entity, x, y, z); } // 0xD8FA3908D7B86904 0x59910AB2 b323
	static Vector3 GET_CGOFFSET(Entity entity) { return invoke<Vector3>(0x8214A4B5A7A33612, entity); } // 0x8214A4B5A7A33612 0x49A11F0D b323
	static void SET_CG_AT_BOUNDCENTER(Entity entity) { return invoke<void>(0xBE520D9761FF811F, entity); } // 0xBE520D9761FF811F 0xA5B55421 b323
	static void SET_DISABLE_BREAKING(Object object, BOOL toggle) { return invoke<void>(0x5CEC1A84620E7D5B, object, toggle); } // 0x5CEC1A84620E7D5B 0xEE77C326 b323
	static void _SET_ENTITY_PROOF_UNK(Entity entity, BOOL toggle) { return invoke<void>(0x15F944730C832252, entity, toggle); } // 0x15F944730C832252 b463
}

namespace PLAYER
{
	static Ped GET_PLAYER_PED(Player player) { return invoke<Ped>(0x43A66C31C68491C0, player); } // 0x43A66C31C68491C0 0x6E31E993 b323
	 // Does the same like PLAYER::GET_PLAYER_PED
	static Ped GET_PLAYER_PED_SCRIPT_INDEX(Player player) { return invoke<Ped>(0x50FAC3A3E030A6E1, player); } // 0x50FAC3A3E030A6E1 0x6AC64990 b323
	 // Make sure to request the model first and wait until it has loaded.
	static void SET_PLAYER_MODEL(Player player, Hash model) { return invoke<void>(0x00A1CADD00108836, player, model); } // 0x00A1CADD00108836 0x774A4C54 b323
	static void CHANGE_PLAYER_PED(Player player, Ped ped, BOOL p2, BOOL resetDamage) { return invoke<void>(0x048189FAC643DEEE, player, ped, p2, resetDamage); } // 0x048189FAC643DEEE 0xBE515485 b323
	 // Gets the number of players in the current session.
	 // If not multiplayer, always returns 1.
	static int GET_NUMBER_OF_PLAYERS() { return invoke<int>(0x407C7F91DDB46C16); } // 0x407C7F91DDB46C16 0x4C1B8867 b323
	 // Gets the player's team.
	 // Does nothing in singleplayer.
	static int GET_PLAYER_TEAM(Player player) { return invoke<int>(0x37039302F4E0A008, player); } // 0x37039302F4E0A008 0x9873E404 b323
	 // Set player team on deathmatch and last team standing..
	static void SET_PLAYER_TEAM(Player player, int team) { return invoke<void>(0x0299FA38396A4940, player, team); } // 0x0299FA38396A4940 0x725ADCF2 b323
	static const char* GET_PLAYER_NAME(Player player) { return invoke<const char*>(0x6D0DE6A7B5DA71F8, player); } // 0x6D0DE6A7B5DA71F8 0x406B4B20 b323
	 // # Predominant call signatures
	 // PLAYER::SET_PLAYER_WANTED_CENTRE_POSITION(PLAYER::PLAYER_ID(), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1));
	 // 
	 // # Parameter value ranges
	 // P0: PLAYER::PLAYER_ID()
	 // P1: ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)
	 // P2: Not set by any call
	static void SET_PLAYER_WANTED_CENTRE_POSITION(Player player, Vector3* position, BOOL p2, BOOL p3) { return invoke<void>(0x520E541A97A13354, player, position, p2, p3); } // 0x520E541A97A13354 0xF261633A b323
	 // Drft
	static int GET_WANTED_LEVEL_THRESHOLD(int wantedLevel) { return invoke<int>(0xFDD179EAF45B556C, wantedLevel); } // 0xFDD179EAF45B556C 0xD9783F6B b323
	 // Call SET_PLAYER_WANTED_LEVEL_NOW for immediate effect
	 // 
	 // wantedLevel is an integer value representing 0 to 5 stars even though the game supports the 6th wanted level but no police will appear since no definitions are present for it in the game files
	 // 
	 // disableNoMission-  Disables When Off Mission- appears to always be false
	 // 
	static void SET_PLAYER_WANTED_LEVEL(Player player, int wantedLevel, BOOL disableNoMission) { return invoke<void>(0x39FF19C64EF7DA5B, player, wantedLevel, disableNoMission); } // 0x39FF19C64EF7DA5B 0xB7A0914B b323
	 // p2 is always false in R* scripts
	static void SET_PLAYER_WANTED_LEVEL_NO_DROP(Player player, int wantedLevel, BOOL p2) { return invoke<void>(0x340E61DE7F471565, player, wantedLevel, p2); } // 0x340E61DE7F471565 0xED6F44F5 b323
	 // Forces any pending wanted level to be applied to the specified player immediately.
	 // 
	 // Call SET_PLAYER_WANTED_LEVEL with the desired wanted level, followed by SET_PLAYER_WANTED_LEVEL_NOW.
	 // 
	 // Second parameter is unknown (always false).
	static void SET_PLAYER_WANTED_LEVEL_NOW(Player player, BOOL p1) { return invoke<void>(0xE0A7D1E497FFCD6F, player, p1); } // 0xE0A7D1E497FFCD6F 0xAF3AFD83 b323
	static void SET_DISPATCH_COPS_FOR_PLAYER(Player player, BOOL toggle) { return invoke<void>(0xDB172424876553F4, player, toggle); } // 0xDB172424876553F4 0x48A18913 b323
	static BOOL IS_PLAYER_WANTED_LEVEL_GREATER(Player player, int wantedLevel) { return invoke<BOOL>(0x238DB2A2C23EE9EF, player, wantedLevel); } // 0x238DB2A2C23EE9EF 0x589A2661 b323
	 // This executes at the same as speed as PLAYER::SET_PLAYER_WANTED_LEVEL(player, 0, false);
	 // 
	 // PLAYER::GET_PLAYER_WANTED_LEVEL(player); executes in less than half the time. Which means that it's worth first checking if the wanted level needs to be cleared before clearing. However, this is mostly about good code practice and can important in other situations. The difference in time in this example is negligible. 
	static void CLEAR_PLAYER_WANTED_LEVEL(Player player) { return invoke<void>(0xB302540597885499, player); } // 0xB302540597885499 0x54EA5BCC b323
	static BOOL IS_PLAYER_DEAD(Player player) { return invoke<BOOL>(0x424D4687FA1E5652, player); } // 0x424D4687FA1E5652 0x140CA5A8 b323
	static BOOL IS_PLAYER_PRESSING_HORN(Player player) { return invoke<BOOL>(0xFA1E2BF8B10598F9, player); } // 0xFA1E2BF8B10598F9 0xED1D1662 b323
	 // https://alloc8or.re/gta5/doc/enums/eSetPlayerControlFlag.txt
	static void SET_PLAYER_CONTROL(Player player, BOOL bHasControl, int flags) { return invoke<void>(0x8D32347D6D4C40A2, player, bHasControl, flags); } // 0x8D32347D6D4C40A2 0xD17AFCD8 b323
	static int GET_PLAYER_WANTED_LEVEL(Player player) { return invoke<int>(0xE28E54788CE8F12D, player); } // 0xE28E54788CE8F12D 0xBDCDD163 b323
	static void SET_MAX_WANTED_LEVEL(int maxWantedLevel) { return invoke<void>(0xAA5F02DB48D704B9, maxWantedLevel); } // 0xAA5F02DB48D704B9 0x665A06F5 b323
	 // If toggle is set to false:
	 //  The police won't be shown on the (mini)map
	 // 
	 // If toggle is set to true:
	 //  The police will be shown on the (mini)map
	static void SET_POLICE_RADAR_BLIPS(BOOL toggle) { return invoke<void>(0x43286D561B72B8BF, toggle); } // 0x43286D561B72B8BF 0x8E114B10 b323
	 // The player will be ignored by the police if toggle is set to true
	static void SET_POLICE_IGNORE_PLAYER(Player player, BOOL toggle) { return invoke<void>(0x32C62AA929C2DA6A, player, toggle); } // 0x32C62AA929C2DA6A 0xE6DE71B7 b323
	 // Checks whether the specified player has a Ped, the Ped is not dead, is not injured and is not arrested.
	static BOOL IS_PLAYER_PLAYING(Player player) { return invoke<BOOL>(0x5E9564D8246B909A, player); } // 0x5E9564D8246B909A 0xE15D777F b323
	static void SET_EVERYONE_IGNORE_PLAYER(Player player, BOOL toggle) { return invoke<void>(0x8EEDA153AD141BA4, player, toggle); } // 0x8EEDA153AD141BA4 0xC915285E b323
	static void SET_ALL_RANDOM_PEDS_FLEE(Player player, BOOL toggle) { return invoke<void>(0x056E0FE8534C2949, player, toggle); } // 0x056E0FE8534C2949 0x49EAE968 b323
	static void SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(Player player) { return invoke<void>(0x471D2FF42A94B4F2, player); } // 0x471D2FF42A94B4F2 0xBF974891 b323
	static void _0xDE45D1A1EF45EE61(Player player, BOOL toggle) { return invoke<void>(0xDE45D1A1EF45EE61, player, toggle); } // 0xDE45D1A1EF45EE61 0x274631FE b323
	 // - This is called after SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME
	 // 
	static void _0xC3376F42B1FACCC6(Player player) { return invoke<void>(0xC3376F42B1FACCC6, player); } // 0xC3376F42B1FACCC6 0x02DF7AF4 b323
	static void _0xFAC75988A7D078D3(Player player) { return invoke<void>(0xFAC75988A7D078D3, player); } // 0xFAC75988A7D078D3 b463
	static void SET_WANTED_LEVEL_MULTIPLIER(float multiplier) { return invoke<void>(0x020E5F00CDA207BA, multiplier); } // 0x020E5F00CDA207BA 0x1359292F b323
	 // Max value is 1.0
	static void SET_WANTED_LEVEL_DIFFICULTY(Player player, float difficulty) { return invoke<void>(0x9B0BB33B04405E7A, player, difficulty); } // 0x9B0BB33B04405E7A 0xB552626C b323
	static void RESET_WANTED_LEVEL_DIFFICULTY(Player player) { return invoke<void>(0xB9D0DD990DC141DD, player); } // 0xB9D0DD990DC141DD 0xA64C378D b323
	static void START_FIRING_AMNESTY(int duration) { return invoke<void>(0xBF9BD71691857E48, duration); } // 0xBF9BD71691857E48 0x5F8A22A6 b323
	 // PLAYER::REPORT_CRIME(PLAYER::PLAYER_ID(), 37, PLAYER::GET_WANTED_LEVEL_THRESHOLD(1));
	 // 
	 // From am_armybase.ysc.c4:
	 // 
	 // PLAYER::REPORT_CRIME(PLAYER::PLAYER_ID(4), 36, PLAYER::GET_WANTED_LEVEL_THRESHOLD(4));
	 // 
	 // -----
	 // 
	 // This was taken from the GTAV.exe v1.334. The function is called sub_140592CE8. For a full decompilation of the function, see here: pastebin.com/09qSMsN7 
	 // 
	 // -----
	 // crimeType:
	 // 1: Firearms possession
	 // 2: Person running a red light ("5-0-5")
	 // 3: Reckless driver
	 // 4: Speeding vehicle (a "5-10")
	 // 5: Traffic violation (a "5-0-5")
	 // 6: Motorcycle rider without a helmet
	 // 7: Vehicle theft (a "5-0-3")
	 // 8: Grand Theft Auto
	 // 9: ???
	 // 10: ???
	 // 11: Assault on a civilian (a "2-40")
	 // 12: Assault on an officer
	 // 13: Assault with a deadly weapon (a "2-45")
	 // 14: Officer shot (a "2-45")
	 // 15: Pedestrian struck by a vehicle
	 // 16: Officer struck by a vehicle
	 // 17: Helicopter down (an "AC"?)
	 // 18: Civilian on fire (a "2-40")
	 // 19: Officer set on fire (a "10-99")
	 // 20: Car on fire
	 // 21: Air unit down (an "AC"?)
	 // 22: An explosion (a "9-96")
	 // 23: A stabbing (a "2-45") (also something else I couldn't understand)
	 // 24: Officer stabbed (also something else I couldn't understand)
	 // 25: Attack on a vehicle ("MDV"?)
	 // 26: Damage to property
	 // 27: Suspect threatening officer with a firearm
	 // 28: Shots fired
	 // 29: ???
	 // 30: ???
	 // 31: ???
	 // 32: ???
	 // 33: ???
	 // 34: A "2-45"
	 // 35: ???
	 // 36: A "9-25"
	 // 37: ???
	 // 38: ???
	 // 39: ???
	 // 40: ???
	 // 41: ???
	 // 42: ???
	 // 43: Possible disturbance
	 // 44: Civilian in need of assistance
	 // 45: ???
	 // 46: ???
	static void REPORT_CRIME(Player player, int crimeType, int wantedLvlThresh) { return invoke<void>(0xE9B09589827545E7, player, crimeType, wantedLvlThresh); } // 0xE9B09589827545E7 0xD8EB3A44 b323
	 // This was previously named as "RESERVE_ENTITY_EXPLODES_ON_HIGH_EXPLOSION_COMBO"
	 // which is obviously incorrect.
	 // 
	 // Seems to only appear in scripts used in Singleplayer. p1 ranges from 2 - 46.
	 // 
	 // 
	 // I assume this switches the crime type
	static void _SWITCH_CRIME_TYPE(Player player, int p1) { return invoke<void>(0x9A987297ED8BD838, player, p1); } // 0x9A987297ED8BD838 0x59B5C2A2 b323
	 // Seems to only appear in scripts used in Singleplayer.
	 // 
	 // Always used like this in scripts
	 // PLAYER::_BC9490CA15AEA8FB(PLAYER::PLAYER_ID());
	static void _0xBC9490CA15AEA8FB(Player player) { return invoke<void>(0xBC9490CA15AEA8FB, player); } // 0xBC9490CA15AEA8FB 0x6B34A160 b323
	 // This has been found in use in the decompiled files.
	static void _0x4669B3ED80F24B4E(Player player) { return invoke<void>(0x4669B3ED80F24B4E, player); } // 0x4669B3ED80F24B4E 0xB9FB142F b323
	static void _0x36F1B38855F2A8DF(Player player) { return invoke<void>(0x36F1B38855F2A8DF, player); } // 0x36F1B38855F2A8DF 0x3A7E5FB6 b323
	static void REPORT_POLICE_SPOTTED_PLAYER(Player player) { return invoke<void>(0xDC64D2C53493ED12, player); } // 0xDC64D2C53493ED12 0xD15C4B1C b323
	 // PLAYER::0xBF6993C7(rPtr((&l_122) + 71)); // Found in decompilation
	 // 
	 // ***
	 // 
	 // In "am_hold_up.ysc" used once:
	 // 
	 // l_8d._f47 = GAMEPLAY::GET_RANDOM_FLOAT_IN_RANGE(18.0, 28.0);
	 // PLAYER::_B45EFF719D8427A6((l_8d._f47));
	static void _0xB45EFF719D8427A6(float p0) { return invoke<void>(0xB45EFF719D8427A6, p0); } // 0xB45EFF719D8427A6 0xBF6993C7 b323
	 // 2 matches in 1 script - am_hold_up
	 // 
	 // Used in multiplayer scripts?
	static void _0x0032A6DBA562C518() { return invoke<void>(0x0032A6DBA562C518); } // 0x0032A6DBA562C518 0x47CAB814 b323
	static BOOL CAN_PLAYER_START_MISSION(Player player) { return invoke<BOOL>(0xDE7465A27D403C06, player); } // 0xDE7465A27D403C06 0x39E3CB3F b323
	static BOOL IS_PLAYER_READY_FOR_CUTSCENE(Player player) { return invoke<BOOL>(0x908CBECC2CAA3690, player); } // 0x908CBECC2CAA3690 0xBB77E9CD b323
	static BOOL IS_PLAYER_TARGETTING_ENTITY(Player player, Entity entity) { return invoke<BOOL>(0x7912F7FC4F6264B6, player, entity); } // 0x7912F7FC4F6264B6 0xF3240B77 b323
	 // Assigns the handle of locked-on melee target to *entity that you pass it.
	 // Returns false if no entity found.
	static BOOL GET_PLAYER_TARGET_ENTITY(Player player, Entity* entity) { return invoke<BOOL>(0x13EDE1A5DBF797C9, player, entity); } // 0x13EDE1A5DBF797C9 0xF6AAA2D7 b323
	 // Gets a value indicating whether the specified player is currently aiming freely.
	static BOOL IS_PLAYER_FREE_AIMING(Player player) { return invoke<BOOL>(0x2E397FD2ECD37C87, player); } // 0x2E397FD2ECD37C87 0x1DEC67B7 b323
	 // Gets a value indicating whether the specified player is currently aiming freely at the specified entity.
	static BOOL IS_PLAYER_FREE_AIMING_AT_ENTITY(Player player, Entity entity) { return invoke<BOOL>(0x3C06B5C839B38F7B, player, entity); } // 0x3C06B5C839B38F7B 0x7D80EEAA b323
	 // Returns TRUE if it found an entity in your crosshair within range of your weapon. Assigns the handle of the target to the *entity that you pass it.
	 // Returns false if no entity found.
	static BOOL GET_ENTITY_PLAYER_IS_FREE_AIMING_AT(Player player, Entity* entity) { return invoke<BOOL>(0x2975C866E6713290, player, entity); } // 0x2975C866E6713290 0x8866D9D0 b323
	 // Set whether this player should be able to do drive-bys.
	 // 
	 // "A drive-by is when a ped is aiming/shooting from vehicle. This includes middle finger taunts. By setting this value to false I confirm the player is unable to do all that. Tested on tick."
	 // 
	static void SET_PLAYER_CAN_DO_DRIVE_BY(Player player, BOOL toggle) { return invoke<void>(0x6E8834B52EC20C77, player, toggle); } // 0x6E8834B52EC20C77 0xF4D99685 b323
	 // Gets the maximum wanted level the player can get.
	 // Ranges from 0 to 5.
	static int GET_MAX_WANTED_LEVEL() { return invoke<int>(0x462E0DB9B137DC5F); } // 0x462E0DB9B137DC5F 0x457F1E44 b323
	static BOOL IS_PLAYER_TARGETTING_ANYTHING(Player player) { return invoke<BOOL>(0x78CFE51896B6B8A4, player); } // 0x78CFE51896B6B8A4 0x456DB50D b323
	static void RESET_PLAYER_STAMINA(Player player) { return invoke<void>(0xA6F312FCCE9C1DFE, player); } // 0xA6F312FCCE9C1DFE 0xC0445A9C b323
	 // Returns the group ID the player is member of.
	static int GET_PLAYER_GROUP(Player player) { return invoke<int>(0x0D127585F77030AF, player); } // 0x0D127585F77030AF 0xA5EDCDE8 b323
	static int GET_PLAYER_MAX_ARMOUR(Player player) { return invoke<int>(0x92659B4CE1863CB3, player); } // 0x92659B4CE1863CB3 0x02A50657 b323
	 // Can the player control himself, used to disable controls for player for things like a cutscene.
	 // 
	 // ---
	 // 
	 // You can't disable controls with this, use SET_PLAYER_CONTROL(...) for this. 
	static BOOL IS_PLAYER_CONTROL_ON(Player player) { return invoke<BOOL>(0x49C32D60007AFA47, player); } // 0x49C32D60007AFA47 0x618857F2 b323
	 // Returns true when the player is not able to control the cam i.e. when running a benchmark test, switching the player or viewing a cutscene.
	 // 
	 // Note: I am not 100% sure if the native actually checks if the cam control is disabled but it seems promising.
	static BOOL _IS_PLAYER_CAM_CONTROL_DISABLED() { return invoke<BOOL>(0x7C814D2FB49F40C0); } // 0x7C814D2FB49F40C0 b323
	static BOOL IS_PLAYER_SCRIPT_CONTROL_ON(Player player) { return invoke<BOOL>(0x8A876A65283DD7D7, player); } // 0x8A876A65283DD7D7 0x61B00A84 b323
	 // Returns TRUE if the player ('s ped) is climbing at the moment.
	static BOOL IS_PLAYER_CLIMBING(Player player) { return invoke<BOOL>(0x95E8F73DC65EFB9C, player); } // 0x95E8F73DC65EFB9C 0x4A9E9AE0 b323
	 // Return true while player is being arrested / busted.
	 // 
	 // If atArresting is set to 1, this function will return 1 when player is being arrested (while player is putting his hand up, but still have control)
	 // 
	 // If atArresting is set to 0, this function will return 1 only when the busted screen is shown.
	static BOOL IS_PLAYER_BEING_ARRESTED(Player player, BOOL atArresting) { return invoke<BOOL>(0x388A47C51ABDAC8E, player, atArresting); } // 0x388A47C51ABDAC8E 0x7F6A60D3 b323
	 // Alternative: GET_VEHICLE_PED_IS_IN(PLAYER_PED_ID(), 1);
	static Vehicle GET_PLAYERS_LAST_VEHICLE() { return invoke<Vehicle>(0xB6997A7EB3F5C8C0); } // 0xB6997A7EB3F5C8C0 0xE2757AC1 b323
	 // Returns the same as PLAYER_ID and NETWORK_PLAYER_ID_TO_INT
	static Player GET_PLAYER_INDEX() { return invoke<Player>(0xA5EDC40EF369B48D); } // 0xA5EDC40EF369B48D 0x309BBDC1 b323
	 // Simply returns whatever is passed to it (Regardless of whether the handle is valid or not).
	static Player INT_TO_PLAYERINDEX(int value) { return invoke<Player>(0x41BD2A6B006AF756, value); } // 0x41BD2A6B006AF756 0x98DD98F1 b323
	 // Simply returns whatever is passed to it (Regardless of whether the handle is valid or not).
	 // --------------------------------------------------------
	 // if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(i)))
	 // 
	static int INT_TO_PARTICIPANTINDEX(int value) { return invoke<int>(0x9EC6603812C24710, value); } // 0x9EC6603812C24710 0x98F3B274 b323
	static int GET_TIME_SINCE_PLAYER_HIT_VEHICLE(Player player) { return invoke<int>(0x5D35ECF3A81A0EE0, player); } // 0x5D35ECF3A81A0EE0 0x6E9B8B9E b323
	static int GET_TIME_SINCE_PLAYER_DROVE_ON_PAVEMENT(Player player) { return invoke<int>(0xD559D2BE9E37853B, player); } // 0xD559D2BE9E37853B 0x8836E732 b323
	static int GET_TIME_SINCE_PLAYER_DROVE_AGAINST_TRAFFIC(Player player) { return invoke<int>(0xDB89591E290D9182, player); } // 0xDB89591E290D9182 0x9F27D00E b323
	static BOOL IS_PLAYER_FREE_FOR_AMBIENT_TASK(Player player) { return invoke<BOOL>(0xDCCFD3F106C36AB4, player); } // 0xDCCFD3F106C36AB4 0x85C7E232 b323
	 // This returns YOUR 'identity' as a Player type.
	 // 
	 // Always returns 0 in story mode.
	static Player PLAYER_ID() { return invoke<Player>(0x4F8644AF03D0E0D6); } // 0x4F8644AF03D0E0D6 0x8AEA886C b323
	 // Returns current player ped
	static Ped PLAYER_PED_ID() { return invoke<Ped>(0xD80958FC74E988A6); } // 0xD80958FC74E988A6 0xFA92E226 b323
	 // Does exactly the same thing as PLAYER_ID()
	static int NETWORK_PLAYER_ID_TO_INT() { return invoke<int>(0xEE68096F9F37341E); } // 0xEE68096F9F37341E 0x8DD5B838 b323
	static BOOL HAS_FORCE_CLEANUP_OCCURRED(int cleanupFlags) { return invoke<BOOL>(0xC968670BFACE42D9, cleanupFlags); } // 0xC968670BFACE42D9 0x4B37333C b323
	 // used with 1,2,8,64,128 in the scripts
	static void FORCE_CLEANUP(int cleanupFlags) { return invoke<void>(0xBC8983F38F78ED51, cleanupFlags); } // 0xBC8983F38F78ED51 0xFDAAEA2B b323
	 // PLAYER::FORCE_CLEANUP_FOR_ALL_THREADS_WITH_THIS_NAME("pb_prostitute", 1); // Found in decompilation
	static void FORCE_CLEANUP_FOR_ALL_THREADS_WITH_THIS_NAME(const char* name, int cleanupFlags) { return invoke<void>(0x4C68DDDDF0097317, name, cleanupFlags); } // 0x4C68DDDDF0097317 0x04256C73 b323
	static void FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(int id, int cleanupFlags) { return invoke<void>(0xF745B37630DF176B, id, cleanupFlags); } // 0xF745B37630DF176B 0x882D3EB3 b323
	static int GET_CAUSE_OF_MOST_RECENT_FORCE_CLEANUP() { return invoke<int>(0x9A41CF4674A12272); } // 0x9A41CF4674A12272 0x39AA9FC8 b323
	 // Achievements from 0-57
	 // 
	 // 
	 // more achievements came with update 1.29 (freemode events update), I'd say that they now go to 60, but I'll need to check.
	static BOOL GIVE_ACHIEVEMENT_TO_PLAYER(int achievement) { return invoke<BOOL>(0xBEC7076D64130195, achievement); } // 0xBEC7076D64130195 0x822BC992 b323
	 // For Steam.
	 // Does nothing and always returns false in the retail version of the game.
	static BOOL _SET_ACHIEVEMENT_PROGRESS(int achievement, int progress) { return invoke<BOOL>(0xC2AFFFDABBDC2C5C, achievement, progress); } // 0xC2AFFFDABBDC2C5C b323
	 // For Steam.
	 // Always returns 0 in retail version of the game.
	static int _GET_ACHIEVEMENT_PROGRESS(int achievement) { return invoke<int>(0x1C186837D0619335, achievement); } // 0x1C186837D0619335 b323
	static BOOL HAS_ACHIEVEMENT_BEEN_PASSED(int achievement) { return invoke<BOOL>(0x867365E111A3B6EB, achievement); } // 0x867365E111A3B6EB 0x136A5BE9 b323
	 // Returns TRUE if the game is in online mode and FALSE if in offline mode.
	 // 
	 // This is an alias for NETWORK_IS_SIGNED_ONLINE.
	static BOOL IS_PLAYER_ONLINE() { return invoke<BOOL>(0xF25D331DC2627BBC); } // 0xF25D331DC2627BBC 0x9FAB6729 b323
	 // Purpose of the BOOL currently unknown.
	 // Both, true and false, work
	static void DISPLAY_SYSTEM_SIGNIN_UI(BOOL unk) { return invoke<void>(0x94DD7888C10A979E, unk); } // 0x94DD7888C10A979E 0x4264CED2 b323
	static BOOL IS_SYSTEM_UI_BEING_DISPLAYED() { return invoke<BOOL>(0x5D511E3867C87139); } // 0x5D511E3867C87139 0xE495B6DA b323
	 // Simply sets you as invincible (Health will not deplete).
	 // 
	 // Use 0x733A643B5B0C53C1 instead if you want Ragdoll enabled, which is equal to:
	 // *(DWORD *)(playerPedAddress + 0x188) |= (1 << 9);
	static void SET_PLAYER_INVINCIBLE(Player player, BOOL toggle) { return invoke<void>(0x239528EACDC3E7DE, player, toggle); } // 0x239528EACDC3E7DE 0xDFB9A2A2 b323
	 // Returns the Player's Invincible status.
	 // 
	 // This function will always return false if 0x733A643B5B0C53C1 is used to set the invincibility status. To always get the correct result, use this:
	 // 
	 //  bool IsPlayerInvincible(Player player)
	 //     {
	 //      auto addr = getScriptHandleBaseAddress(GET_PLAYER_PED(player)); 
	 // 
	 //         if (addr)
	 //      {
	 //          DWORD flag = *(DWORD *)(addr + 0x188);
	 //             return ((flag & (1 << 8)) != 0) || ((flag & (1 << 9)) != 0);
	 //       }
	 // 
	 //        return false;
	 //  }
	 // 
	 // 
	static BOOL GET_PLAYER_INVINCIBLE(Player player) { return invoke<BOOL>(0xB721981B2B939E07, player); } // 0xB721981B2B939E07 0x680C90EE b323
	static void _SET_PLAYER_INVINCIBLE_KEEP_RAGDOLL_ENABLED(Player player, BOOL toggle) { return invoke<void>(0x6BC97F4F4BB3C04B, player, toggle); } // 0x6BC97F4F4BB3C04B b463
	static void REMOVE_PLAYER_HELMET(Player player, BOOL p2) { return invoke<void>(0xF3AC26D3CC576528, player, p2); } // 0xF3AC26D3CC576528 0x6255F3B4 b323
	static void CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(Player player) { return invoke<void>(0xF0B67A4DE6AB5F98, player); } // 0xF0B67A4DE6AB5F98 0x1D31CBBD b323
	static BOOL HAS_PLAYER_DAMAGED_AT_LEAST_ONE_PED(Player player) { return invoke<BOOL>(0x20CE80B0C2BF4ACC, player); } // 0x20CE80B0C2BF4ACC 0x14F52453 b323
	static void CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_NON_ANIMAL_PED(Player player) { return invoke<void>(0x4AACB96203D11A31, player); } // 0x4AACB96203D11A31 0x7E3BFBC5 b323
	static BOOL HAS_PLAYER_DAMAGED_AT_LEAST_ONE_NON_ANIMAL_PED(Player player) { return invoke<BOOL>(0xE4B90F367BD81752, player); } // 0xE4B90F367BD81752 0xA3707DFC b323
	 // This can be between 1.0f - 14.9f 
	 // 
	 // You can change the max in IDA from 15.0. I say 15.0 as the function blrs if what you input is greater than or equal to 15.0 hence why it's 14.9 max default.
	 // 
	 // 
	static void SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE(Player player, float multiplier) { return invoke<void>(0xCA7DC8329F0A1E9E, player, multiplier); } // 0xCA7DC8329F0A1E9E 0xF20F72E5 b323
	 // Swim speed multiplier.
	 // Multiplier goes up to 1.49
	 // 
	 // Just call it one time, it is not required to be called once every tick. - Note copied from below native.
	 // 
	 // Note: At least the IDA method if you change the max float multiplier from 1.5 it will change it for both this and RUN_SPRINT below. I say 1.5 as the function blrs if what you input is greater than or equal to 1.5 hence why it's 1.49 max default.
	static void SET_SWIM_MULTIPLIER_FOR_PLAYER(Player player, float multiplier) { return invoke<void>(0xA91C6F0FF7D16A13, player, multiplier); } // 0xA91C6F0FF7D16A13 0xB986FF47 b323
	 // Multiplier goes up to 1.49 any value above will be completely overruled by the game and the multiplier will not take effect, this can be edited in memory however.
	 // 
	 // Just call it one time, it is not required to be called once every tick.
	 // 
	 // Note: At least the IDA method if you change the max float multiplier from 1.5 it will change it for both this and SWIM above. I say 1.5 as the function blrs if what you input is greater than or equal to 1.5 hence why it's 1.49 max default.
	static void SET_RUN_SPRINT_MULTIPLIER_FOR_PLAYER(Player player, float multiplier) { return invoke<void>(0x6DB47AA77FD94E09, player, multiplier); } // 0x6DB47AA77FD94E09 0x825423C2 b323
	static void SPECIAL_ABILITY_DEACTIVATE(Player player, Any p1) { return invoke<void>(0xD6A953C6D1492057, player, p1); } // 0xD6A953C6D1492057 0x80C2AB09 b323
	static void SPECIAL_ABILITY_DEACTIVATE_FAST(Player player, Any p1) { return invoke<void>(0x9CB5CE07A3968D5A, player, p1); } // 0x9CB5CE07A3968D5A 0x0751908A b323
	static void SPECIAL_ABILITY_CHARGE_ON_MISSION_FAILED(Player player, Any p1) { return invoke<void>(0xC9A763D8FE87436A, player, p1); } // 0xC9A763D8FE87436A 0x4136829A b323
	 // p1 appears as 5, 10, 15, 25, or 30. p2 is always true.
	static void SPECIAL_ABILITY_CHARGE_ABSOLUTE(Player player, int p1, BOOL p2, Any p3) { return invoke<void>(0xB7B0870EB531D08D, player, p1, p2, p3); } // 0xB7B0870EB531D08D 0x72429998 b323
	 // 
	 // normalizedValue is from 0.0 - 1.0
	 // p2 is always 1
	static void SPECIAL_ABILITY_CHARGE_NORMALIZED(Player player, float normalizedValue, BOOL p2, Any p3) { return invoke<void>(0xA0696A65F009EE18, player, normalizedValue, p2, p3); } // 0xA0696A65F009EE18 0x8C7E68C1 b323
	 // Also known as _RECHARGE_SPECIAL_ABILITY
	static void SPECIAL_ABILITY_FILL_METER(Player player, BOOL p1, Any p2) { return invoke<void>(0x3DACA8DDC6FD4980, player, p1, p2); } // 0x3DACA8DDC6FD4980 0xB71589DA b323
	static BOOL IS_SPECIAL_ABILITY_UNLOCKED(Hash playerModel) { return invoke<BOOL>(0xC6017F6A6CDFA694, playerModel); } // 0xC6017F6A6CDFA694 0xC9C75E82 b323
	static BOOL IS_SPECIAL_ABILITY_ACTIVE(Player player, Any p1) { return invoke<BOOL>(0x3E5F7FC85D854E15, player, p1); } // 0x3E5F7FC85D854E15 0x1B17E334 b323
	static BOOL IS_SPECIAL_ABILITY_METER_FULL(Player player, Any p1) { return invoke<BOOL>(0x05A1FE504B7F2587, player, p1); } // 0x05A1FE504B7F2587 0x2E19D7F6 b323
	static void ENABLE_SPECIAL_ABILITY(Player player, BOOL toggle, Any p2) { return invoke<void>(0x181EC197DAEFE121, player, toggle, p2); } // 0x181EC197DAEFE121 0xC86C1B4E b323
	static BOOL IS_SPECIAL_ABILITY_ENABLED(Player player, Any p1) { return invoke<BOOL>(0xB1D200FE26AEF3CB, player, p1); } // 0xB1D200FE26AEF3CB 0xC01238CC b323
	static void SET_SPECIAL_ABILITY_MULTIPLIER(float multiplier) { return invoke<void>(0xA49C426ED0CA4AB7, multiplier); } // 0xA49C426ED0CA4AB7 0xFF1BC556 b323
	 // Appears once in "re_dealgonewrong"
	static BOOL _0x5FC472C501CCADB3(Player player) { return invoke<BOOL>(0x5FC472C501CCADB3, player); } // 0x5FC472C501CCADB3 0x46E7E31D b323
	static void START_PLAYER_TELEPORT(Player player, float x, float y, float z, float heading, BOOL p5, BOOL p6, BOOL p7) { return invoke<void>(0xAD15F075A4DA0FDE, player, x, y, z, heading, p5, p6, p7); } // 0xAD15F075A4DA0FDE 0xC552E06C b323
	 // Disables the player's teleportation
	static void STOP_PLAYER_TELEPORT() { return invoke<void>(0xC449EDED9D73009C); } // 0xC449EDED9D73009C 0x86AB8DBB b323
	static BOOL IS_PLAYER_TELEPORT_ACTIVE() { return invoke<BOOL>(0x02B15662D7F8886F); } // 0x02B15662D7F8886F 0x3A11D118 b323
	static float GET_PLAYER_CURRENT_STEALTH_NOISE(Player player) { return invoke<float>(0x2F395D61F3A1F877, player); } // 0x2F395D61F3A1F877 0xC3B02362 b323
	 // modifier's min value is 0.1
	static void SET_PLAYER_MELEE_WEAPON_DAMAGE_MODIFIER(Player player, float modifier, BOOL p2) { return invoke<void>(0x4A3DC7ECCC321032, player, modifier, p2); } // 0x4A3DC7ECCC321032 0x362E69AD b323
	 // modifier's min value is 0.1
	static void SET_PLAYER_VEHICLE_DEFENSE_MODIFIER(Player player, float modifier) { return invoke<void>(0x4C60E6EFDAFF2462, player, modifier); } // 0x4C60E6EFDAFF2462 0xA16626C7 b323
	 // Tints:
	 //    None = -1,
	 //     Rainbow = 0,
	 //   Red = 1,
	 //   SeasideStripes = 2,
	 //    WidowMaker = 3,
	 //    Patriot = 4,
	 //   Blue = 5,
	 //  Black = 6,
	 //     Hornet = 7,
	 //    AirFocce = 8,
	 //  Desert = 9,
	 //    Shadow = 10,
	 //   HighAltitude = 11,
	 //     Airbone = 12,
	 //  Sunrise = 13,
	 // 
	static void SET_PLAYER_PARACHUTE_TINT_INDEX(Player player, int tintIndex) { return invoke<void>(0xA3D0E54541D9A5E5, player, tintIndex); } // 0xA3D0E54541D9A5E5 0x8EA12EDB b323
	 // Tints:
	 //   None = -1,
	 //     Rainbow = 0,
	 //   Red = 1,
	 //   SeasideStripes = 2,
	 //    WidowMaker = 3,
	 //    Patriot = 4,
	 //   Blue = 5,
	 //  Black = 6,
	 //     Hornet = 7,
	 //    AirFocce = 8,
	 //  Desert = 9,
	 //    Shadow = 10,
	 //   HighAltitude = 11,
	 //     Airbone = 12,
	 //  Sunrise = 13,
	static void GET_PLAYER_PARACHUTE_TINT_INDEX(Player player, int* tintIndex) { return invoke<void>(0x75D3F7A1B0D9B145, player, tintIndex); } // 0x75D3F7A1B0D9B145 0x432B0509 b323
	 // Tints:
	 //   None = -1,
	 //     Rainbow = 0,
	 //   Red = 1,
	 //   SeasideStripes = 2,
	 //    WidowMaker = 3,
	 //    Patriot = 4,
	 //   Blue = 5,
	 //  Black = 6,
	 //     Hornet = 7,
	 //    AirFocce = 8,
	 //  Desert = 9,
	 //    Shadow = 10,
	 //   HighAltitude = 11,
	 //     Airbone = 12,
	 //  Sunrise = 13,
	static void GET_PLAYER_RESERVE_PARACHUTE_TINT_INDEX(Player player, int* index) { return invoke<void>(0xD5A016BC3C09CF40, player, index); } // 0xD5A016BC3C09CF40 0x77B8EF01 b323
	 // tints 0- 13
	 // 0 - unkown
	 // 1 - unkown
	 // 2 - unkown
	 // 3 - unkown
	 // 4 - unkown
	static void SET_PLAYER_PARACHUTE_PACK_TINT_INDEX(Player player, int tintIndex) { return invoke<void>(0x93B0FB27C9A04060, player, tintIndex); } // 0x93B0FB27C9A04060 0xD79D5D1B b323
	static void GET_PLAYER_PARACHUTE_PACK_TINT_INDEX(Player player, int* tintIndex) { return invoke<void>(0x6E9C742F340CE5A2, player, tintIndex); } // 0x6E9C742F340CE5A2 0x4E418E13 b323
	static void SET_PLAYER_HAS_RESERVE_PARACHUTE(Player player) { return invoke<void>(0x7DDAB28D31FAC363, player); } // 0x7DDAB28D31FAC363 0xA3E4798E b323
	static BOOL GET_PLAYER_HAS_RESERVE_PARACHUTE(Player player) { return invoke<BOOL>(0x5DDFE2FF727F3CA3, player); } // 0x5DDFE2FF727F3CA3 0x30DA1DA1 b323
	static void SET_PLAYER_CAN_LEAVE_PARACHUTE_SMOKE_TRAIL(Player player, BOOL enabled) { return invoke<void>(0xF401B182DBA8AF53, player, enabled); } // 0xF401B182DBA8AF53 0x832DEB7A b323
	static void SET_PLAYER_PARACHUTE_SMOKE_TRAIL_COLOR(Player player, int r, int g, int b) { return invoke<void>(0x8217FD371A4625CF, player, r, g, b); } // 0x8217FD371A4625CF 0x14FE9264 b323
	 // example:
	 // 
	 // flags: 0-6
	 // 
	 // PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 6);
	 // 
	 // wouldnt the flag be the seatIndex?
	static void SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(Player player, int flags) { return invoke<void>(0x11D5F725F0E780E0, player, flags); } // 0x11D5F725F0E780E0 0x725C6174 b323
	static void SET_PLAYER_NOISE_MULTIPLIER(Player player, float multiplier) { return invoke<void>(0xDB89EF50FF25FCE9, player, multiplier); } // 0xDB89EF50FF25FCE9 0x15786DD1 b323
	 // Values around 1.0f to 2.0f used in game scripts.
	static void SET_PLAYER_SNEAKING_NOISE_MULTIPLIER(Player player, float multiplier) { return invoke<void>(0xB2C1A29588A9F47C, player, multiplier); } // 0xB2C1A29588A9F47C 0x8D2D89C4 b323
	static BOOL CAN_PED_HEAR_PLAYER(Player player, Ped ped) { return invoke<BOOL>(0xF297383AA91DCA29, player, ped); } // 0xF297383AA91DCA29 0x1C70B2EB b323
	 // This is to make the player walk without accepting input from INPUT.
	 // 
	 // gaitType is in increments of 100s. 2000, 500, 300, 200, etc.
	 // 
	 // p4 is always 1 and p5 is always 0.
	 // 
	 // C# Example :
	 // 
	 // Function.Call(Hash.SIMULATE_PLAYER_INPUT_GAIT, Game.Player, 1.0f, 100, 1.0f, 1, 0); //Player will go forward for 100ms
	static void SIMULATE_PLAYER_INPUT_GAIT(Player player, float amount, int gaitType, float speed, BOOL p4, BOOL p5) { return invoke<void>(0x477D5D63E63ECA5D, player, amount, gaitType, speed, p4, p5); } // 0x477D5D63E63ECA5D 0x0D77CC34 b323
	static void SET_AUTO_GIVE_PARACHUTE_WHEN_ENTER_PLANE(Player player, BOOL toggle) { return invoke<void>(0x9F343285A00B4BB6, player, toggle); } // 0x9F343285A00B4BB6 0xA97C2059 b323
	static void SET_AUTO_GIVE_SCUBA_GEAR_WHEN_EXIT_VEHICLE(Player player, BOOL toggle) { return invoke<void>(0xD2B315B6689D537D, player, toggle); } // 0xD2B315B6689D537D 0xA25D767E b323
	static void SET_PLAYER_STEALTH_PERCEPTION_MODIFIER(Player player, float value) { return invoke<void>(0x4E9021C1FCDD507A, player, value); } // 0x4E9021C1FCDD507A 0x3D26105F b323
	static void SET_PLAYER_CLOTH_PIN_FRAMES(Player player, int p1) { return invoke<void>(0x749FADDF97DFE930, player, p1); } // 0x749FADDF97DFE930 0xF7A0F00F b323
	 // Returns true if the player is riding a train.
	static BOOL IS_PLAYER_RIDING_TRAIN(Player player) { return invoke<BOOL>(0x4EC12697209F2196, player); } // 0x4EC12697209F2196 0x9765E71D b323
	static void SET_PLAYER_LEAVE_PED_BEHIND(Player player, BOOL toggle) { return invoke<void>(0xFF300C7649724A0B, player, toggle); } // 0xFF300C7649724A0B 0xAD8383FA b323
	 // p1 was always 5.
	 // p4 was always false.
	static void SET_PLAYER_PARACHUTE_VARIATION_OVERRIDE(Player player, int p1, Any p2, Any p3, BOOL p4) { return invoke<void>(0xD9284A8C0D48352C, player, p1, p2, p3, p4); } // 0xD9284A8C0D48352C 0x9254249D b323
	 // example:
	 // 
	 // PLAYER::SET_PLAYER_PARACHUTE_MODEL_OVERRIDE(PLAYER::PLAYER_ID(), 0x73268708);
	static void SET_PLAYER_PARACHUTE_MODEL_OVERRIDE(Player player, Hash model) { return invoke<void>(0x977DB4641F6FC3DB, player, model); } // 0x977DB4641F6FC3DB 0x5D382498 b323
	static void SET_PLAYER_PARACHUTE_PACK_MODEL_OVERRIDE(Player player, Hash model) { return invoke<void>(0xDC80A4C2F18A2B64, player, model); } // 0xDC80A4C2F18A2B64 0xA877FF5E b323
	static void CLEAR_PLAYER_PARACHUTE_PACK_MODEL_OVERRIDE(Player player) { return invoke<void>(0x10C54E4389C12B42, player); } // 0x10C54E4389C12B42 0xBB62AAC5 b323
	static void _0x55FCC0C390620314(Any p0, Any p1, Any p2) { return invoke<void>(0x55FCC0C390620314, p0, p1, p2); } // 0x55FCC0C390620314 b573
	static void _0x7148E0F43D11F0D9() { return invoke<void>(0x7148E0F43D11F0D9); } // 0x7148E0F43D11F0D9 b1604
	static void _0x70A382ADEC069DD3(Any p0, Any p1, Any p2) { return invoke<void>(0x70A382ADEC069DD3, p0, p1, p2); } // 0x70A382ADEC069DD3 b1604
}

namespace RECORDING
{
	static void _0x48621C9FCA3EBD28(int p0) { return invoke<void>(0x48621C9FCA3EBD28, p0); } // 0x48621C9FCA3EBD28 b323
	static void _0x81CBAE94390F9F89() { return invoke<void>(0x81CBAE94390F9F89); } // 0x81CBAE94390F9F89 b323
	static void _0x293220DA1B46CEBC(float p0, float p1, int p2) { return invoke<void>(0x293220DA1B46CEBC, p0, p1, p2); } // 0x293220DA1B46CEBC b323
	 // -This function appears to be deprecated/ unused. Tracing the call internally leads to a _nullsub -
	 // 
	 // first one seems to be a string of a mission name, second one seems to be a bool/toggle
	 // 
	 // p1 was always 0.
	 // 
	static void _0x208784099002BC30(const char* missionNameLabel, Any p1) { return invoke<void>(0x208784099002BC30, missionNameLabel, p1); } // 0x208784099002BC30 b323
	static void _STOP_RECORDING_THIS_FRAME() { return invoke<void>(0xEB2D525B57F42B40); } // 0xEB2D525B57F42B40 b323
	 // This will disable the ability to make camera changes in R* Editor.
	 // 
	 // RE*
	static void _DISABLE_ROCKSTAR_EDITOR_CAMERA_CHANGES() { return invoke<void>(0xAF66DCEE6609B148); } // 0xAF66DCEE6609B148 b323
	 // Stops recording and saves the recorded clip.
	static void _STOP_RECORDING_AND_SAVE_CLIP() { return invoke<void>(0x071A5197D6AFC8B3); } // 0x071A5197D6AFC8B3 b323
	 // Checks if you're recording, returns TRUE when you start recording (F1) or turn on action replay (F2)
	 // 
	 // mov al, cs:g_bIsRecordingGameplay // byte_141DD0CD0 in b944
	 // retn
	static BOOL _IS_RECORDING() { return invoke<BOOL>(0x1897CA71995A90B4); } // 0x1897CA71995A90B4 b323
}

namespace REPLAY
{
	 // Does nothing (it's a nullsub).
	static void _0x7E2BD3EF6C205F09(const char* p0, BOOL p1) { return invoke<void>(0x7E2BD3EF6C205F09, p0, p1); } // 0x7E2BD3EF6C205F09 b323
	 // Returns a bool if interior rendering is disabled, if yes, all "normal" rendered interiors are invisible
	static BOOL _IS_INTERIOR_RENDERING_DISABLED() { return invoke<BOOL>(0x95AB8B5C992C7B58); } // 0x95AB8B5C992C7B58 b323
	 // Sets (almost, not sure) all Rockstar Editor values (bIsRecording etc) to 0.
	static void _RESET_EDITOR_VALUES() { return invoke<void>(0x3353D13F09307691); } // 0x3353D13F09307691 b323
}

namespace SCRIPT
{
	static void REQUEST_SCRIPT(const char* scriptName) { return invoke<void>(0x6EB5F71AA68F2E8E, scriptName); } // 0x6EB5F71AA68F2E8E 0xE26B2666 b323
	static void SET_SCRIPT_AS_NO_LONGER_NEEDED(const char* scriptName) { return invoke<void>(0xC90D2DCACD56184C, scriptName); } // 0xC90D2DCACD56184C 0x6FCB7795 b323
	 // Returns if a script has been loaded into the game. Used to see if a script was loaded after requesting.
	static BOOL HAS_SCRIPT_LOADED(const char* scriptName) { return invoke<BOOL>(0xE6CC9F3BA0FB9EF1, scriptName); } // 0xE6CC9F3BA0FB9EF1 0x5D67F751 b323
	static BOOL DOES_SCRIPT_EXIST(const char* scriptName) { return invoke<BOOL>(0xFC04745FBE67C19A, scriptName); } // 0xFC04745FBE67C19A 0xDEAB87AB b323
	 // formerly _REQUEST_STREAMED_SCRIPT
	static void REQUEST_SCRIPT_WITH_NAME_HASH(Hash scriptHash) { return invoke<void>(0xD62A67D26D9653E6, scriptHash); } // 0xD62A67D26D9653E6 0x1C68D9DC b323
	static void SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(Hash scriptHash) { return invoke<void>(0xC5BC038960E9DB27, scriptHash); } // 0xC5BC038960E9DB27 0x96C26F66 b323
	static BOOL HAS_SCRIPT_WITH_NAME_HASH_LOADED(Hash scriptHash) { return invoke<BOOL>(0x5F0F0C783EB16C04, scriptHash); } // 0x5F0F0C783EB16C04 0x06674818 b323
	static void TERMINATE_THREAD(int threadId) { return invoke<void>(0xC8B189ED9138BCD4, threadId); } // 0xC8B189ED9138BCD4 0x253FD520 b323
	static BOOL IS_THREAD_ACTIVE(int threadId) { return invoke<BOOL>(0x46E9AE36D8FA6417, threadId); } // 0x46E9AE36D8FA6417 0x78D7A5A0 b323
	static const char* _GET_NAME_OF_THREAD(int threadId) { return invoke<const char*>(0x05A42BA9FC8DA96B, threadId); } // 0x05A42BA9FC8DA96B 0xBE7ACD89 b323
	 // Starts a new iteration of the current threads.
	 // Call this first, then SCRIPT_THREAD_ITERATOR_GET_NEXT_THREAD_ID (0x30B4FA1C82DD4B9F)
	static void SCRIPT_THREAD_ITERATOR_RESET() { return invoke<void>(0xDADFADA5A20143A8); } // 0xDADFADA5A20143A8 0xBB4E2F66 b323
	 // If the function returns 0, the end of the iteration has been reached.
	static int SCRIPT_THREAD_ITERATOR_GET_NEXT_THREAD_ID() { return invoke<int>(0x30B4FA1C82DD4B9F); } // 0x30B4FA1C82DD4B9F 0x1E28B28F b323
	static int GET_ID_OF_THIS_THREAD() { return invoke<int>(0xC30338E8088E2E21); } // 0xC30338E8088E2E21 0xDE524830 b323
	static void TERMINATE_THIS_THREAD() { return invoke<void>(0x1090044AD1DA76FA); } // 0x1090044AD1DA76FA 0x3CD9CBB7 b323
	 // Gets the number of instances of the specified script is currently running.
	 // 
	 // Actually returns numRefs - 1.
	 // if (program)
	 // 	v3 = rage::scrProgram::GetNumRefs(program) - 1;
	 // return v3;
	static int _GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(Hash scriptHash) { return invoke<int>(0x2C83A9DA6BFFC4F9, scriptHash); } // 0x2C83A9DA6BFFC4F9 0x029D3841 b323
	static const char* GET_THIS_SCRIPT_NAME() { return invoke<const char*>(0x442E0A7EDE4A738A); } // 0x442E0A7EDE4A738A 0xA40FD5D9 b323
	static Hash GET_HASH_OF_THIS_SCRIPT_NAME() { return invoke<Hash>(0x8A1C8B1738FFE87E); } // 0x8A1C8B1738FFE87E 0x2BEE1F45 b323
	 // eventGroup: 0 = SCRIPT_EVENT_QUEUE_AI (CEventGroupScriptAI), 1 = SCRIPT_EVENT_QUEUE_NETWORK (CEventGroupScriptNetwork)
	static int GET_NUMBER_OF_EVENTS(int eventGroup) { return invoke<int>(0x5F92A689A06620AA, eventGroup); } // 0x5F92A689A06620AA 0xA3525D60 b323
	 // eventGroup: 0 = SCRIPT_EVENT_QUEUE_AI (CEventGroupScriptAI), 1 = SCRIPT_EVENT_QUEUE_NETWORK (CEventGroupScriptNetwork)
	static BOOL GET_EVENT_EXISTS(int eventGroup, int eventIndex) { return invoke<BOOL>(0x936E6168A9BCEDB5, eventGroup, eventIndex); } // 0x936E6168A9BCEDB5 0xA1B447B5 b323
	 // eventGroup: 0 = SCRIPT_EVENT_QUEUE_AI (CEventGroupScriptAI), 1 = SCRIPT_EVENT_QUEUE_NETWORK (CEventGroupScriptNetwork)
	static int GET_EVENT_AT_INDEX(int eventGroup, int eventIndex) { return invoke<int>(0xD8F66A3A60C62153, eventGroup, eventIndex); } // 0xD8F66A3A60C62153 0xB49C1442 b323
	 // eventGroup: 0 = SCRIPT_EVENT_QUEUE_AI (CEventGroupScriptAI), 1 = SCRIPT_EVENT_QUEUE_NETWORK (CEventGroupScriptNetwork)
	static BOOL GET_EVENT_DATA(int eventGroup, int eventIndex, int* argStruct, int argStructSize) { return invoke<BOOL>(0x2902843FCD2B2D79, eventGroup, eventIndex, argStruct, argStructSize); } // 0x2902843FCD2B2D79 0x4280F92F b323
	 // eventGroup: 0 = SCRIPT_EVENT_QUEUE_AI (CEventGroupScriptAI), 1 = SCRIPT_EVENT_QUEUE_NETWORK (CEventGroupScriptNetwork)
	static void TRIGGER_SCRIPT_EVENT(int eventGroup, int* args, int argCount, int bit) { return invoke<void>(0x5AE99C571D5BBE5D, eventGroup, args, argCount, bit); } // 0x5AE99C571D5BBE5D 0x54763B35 b323
	static void SHUTDOWN_LOADING_SCREEN() { return invoke<void>(0x078EBE9809CCD637); } // 0x078EBE9809CCD637 0xA2826D17 b323
	static void SET_NO_LOADING_SCREEN(BOOL toggle) { return invoke<void>(0x5262CC1995D07E09, toggle); } // 0x5262CC1995D07E09 0xC8055034 b323
	static BOOL GET_NO_LOADING_SCREEN() { return invoke<BOOL>(0x18C1270EA7F199BC); } // 0x18C1270EA7F199BC 0x27512BA0 b323
	static void _0xB1577667C3708F9B() { return invoke<void>(0xB1577667C3708F9B); } // 0xB1577667C3708F9B 0xB03BCCDF b323
}

namespace SHAPETEST
{
	 // Returns a ray (?) going from x1, y1, z1 to x2, y2, z2.
	 // entity = 0 most of the time.
	 // p8 = 7 most of the time.
	 // 
	 // Result of this function is passed to WORLDPROBE::_GET_RAYCAST_RESULT as a first argument.
	static int START_SHAPE_TEST_LOS_PROBE(float x1, float y1, float z1, float x2, float y2, float z2, int flags, Entity entity, int p8) { return invoke<int>(0x7EE9F5D83DD4F90E, x1, y1, z1, x2, y2, z2, flags, entity, p8); } // 0x7EE9F5D83DD4F90E 0xEFAF4BA6 b323
	 // Not sure how or why this differs from 0x7EE9F5D83DD4F90E, but it does.
	 // 
	 // This function casts a ray from Point1 to Point2 and returns it's ray handle.  A simple ray cast will 'shoot' a line from point A to point B, and return whether or not the ray reached it's destination or if it hit anything and if it did hit anything, will return the handle of what it hit (entity handle) and coordinates of where the ray reached.
	 // 
	 // You can use _GET_RAYCAST_RESULT to get the result of the raycast
	 // 
	 // Entity is an entity to ignore, such as the player.
	 // 
	 // Flags are intersection bit flags.  They tell the ray what to care about and what not to care about when casting. Passing -1 will intersect with everything, presumably.
	 // 
	 // Flags:
	 // 1: Intersect with map
	 // 2: Intersect with vehicles (used to be mission entities?) (includes train)
	 // 4: Intersect with peds? (same as 8)
	 // 8: Intersect with peds? (same as 4)
	 // 16: Intersect with objects
	 // 32: Unknown
	 // 64: Unknown
	 // 128: Unknown
	 // 256: Intersect with vegetation (plants, coral. trees not included)
	 // 
	 // NOTE: Raycasts that intersect with mission_entites (flag = 2) has limited range and will not register for far away entites. The range seems to be about 30 metres. 
	static int _START_SHAPE_TEST_RAY(float x1, float y1, float z1, float x2, float y2, float z2, int flags, Entity entity, int p8) { return invoke<int>(0x377906D8A31E5586, x1, y1, z1, x2, y2, z2, flags, entity, p8); } // 0x377906D8A31E5586 0x8251485D b323
	static int START_SHAPE_TEST_BOUNDING_BOX(Entity entity, int flags1, int flags2) { return invoke<int>(0x052837721A854EC7, entity, flags1, flags2); } // 0x052837721A854EC7 0xCEEAD94B b323
	static int START_SHAPE_TEST_BOX(float x, float y, float z, float x1, float y2, float z2, float rotX, float rotY, float rotZ, Any p9, Any p10, Any entity, Any p12) { return invoke<int>(0xFE466162C4401D18, x, y, z, x1, y2, z2, rotX, rotY, rotZ, p9, p10, entity, p12); } // 0xFE466162C4401D18 0x249BC876 b323
	static int START_SHAPE_TEST_BOUND(Entity entity, int flags1, int flags2) { return invoke<int>(0x37181417CE7C8900, entity, flags1, flags2); } // 0x37181417CE7C8900 0x13BC46C0 b323
	 // Raycast from point to point, where the ray has a radius. 
	 // 
	 // flags:
	 // vehicles=10
	 // peds =12
	 // 
	 // Iterating through flags yields many ped / vehicle/ object combinations
	 // 
	 // p9 = 7, but no idea what it does
	 // 
	 // Entity is an entity to ignore
	static int START_SHAPE_TEST_CAPSULE(float x1, float y1, float z1, float x2, float y2, float z2, float radius, int flags, Entity entity, int p9) { return invoke<int>(0x28579D1B8F8AAC80, x1, y1, z1, x2, y2, z2, radius, flags, entity, p9); } // 0x28579D1B8F8AAC80 0x591EA833 b323
	static int START_SHAPE_TEST_SWEPT_SPHERE(float x1, float y1, float z1, float x2, float y2, float z2, float radius, int flags, Entity entity, Any p9) { return invoke<int>(0xE6AC6C45FBE83004, x1, y1, z1, x2, y2, z2, radius, flags, entity, p9); } // 0xE6AC6C45FBE83004 0x4559460A b323
	 // Parameters:
	 // rayHandle - Ray Handle from a casted ray, as returned by CAST_RAY_POINT_TO_POINT
	 // hit - Where to store whether or not it hit anything. False is when the ray reached its destination.
	 // endCoords - Where to store the world-coords of where the ray was stopped (by hitting its desired max range or by colliding with an entity/the map)
	 // surfaceNormal - Where to store the surface-normal coords (NOT relative to the game world) of where the entity was hit by the ray
	 // entityHit - Where to store the handle of the entity hit by the ray
	 // 
	 // Returns:
	 // Result? Some type of enum.
	 // 
	 // NOTE: To get the offset-coords of where the ray hit relative to the entity that it hit (which is NOT the same as surfaceNormal), you can use these two natives:
	 // Vector3 offset = ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(entityHit, endCoords.x, endCoords.y, endCoords.z);
	 // Vector3 entitySpotCoords = ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(entityHit, offset.x, offset.y, offset.z);
	 // 
	 // Use ENTITY::GET_ENTITY_TYPE(entityHit) to quickly distinguish what type of entity you hit (ped/vehicle/object - 1/2/3)
	static int GET_SHAPE_TEST_RESULT(int rayHandle, BOOL* hit, Vector3* endCoords, Vector3* surfaceNormal, Entity* entityHit) { return invoke<int>(0x3D87450E15D98694, rayHandle, hit, endCoords, surfaceNormal, entityHit); } // 0x3D87450E15D98694 0xF3C2875A b323
	static int GET_SHAPE_TEST_RESULT_INCLUDING_MATERIAL(int rayHandle, BOOL* hit, Vector3* endCoords, Vector3* surfaceNormal, Hash* materialHash, Entity* entityHit) { return invoke<int>(0x65287525D951F6BE, rayHandle, hit, endCoords, surfaceNormal, materialHash, entityHit); } // 0x65287525D951F6BE 0x4301E10C b323
}

namespace SOCIALCLUB
{
	static BOOL SC_PRESENCE_ATTR_SET_INT(Hash attrHash, int value) { return invoke<BOOL>(0x1F1E9682483697C7, attrHash, value); } // 0x1F1E9682483697C7 0x90C74343 b323
	static BOOL SC_PRESENCE_ATTR_SET_STRING(Hash attrHash, const char* value) { return invoke<BOOL>(0x287F1F75D2803595, attrHash, value); } // 0x287F1F75D2803595 0x3ACE6D6B b323
	 // Starts a task to check an entered string for profanity on the ROS/Social Club services.
	 // 
	 // See also: 1753344C770358AE, 82E4A58BABC15AE7.
	static BOOL SC_PROFANITY_CHECK_STRING(const char* string, int* token) { return invoke<BOOL>(0x75632C5ECD7ED843, string, token); } // 0x75632C5ECD7ED843 0xDF084A6B b323
	static BOOL _SC_PROFANITY_CHECK_UGC_STRING(const char* string, int* token) { return invoke<BOOL>(0xEB2BF817463DFA28, string, token); } // 0xEB2BF817463DFA28 b678
	static BOOL SC_PROFANITY_GET_CHECK_IS_VALID(int token) { return invoke<BOOL>(0x1753344C770358AE, token); } // 0x1753344C770358AE 0xFFED3676 b323
	static BOOL SC_PROFANITY_GET_CHECK_IS_PENDING(int token) { return invoke<BOOL>(0x82E4A58BABC15AE7, token); } // 0x82E4A58BABC15AE7 0xA796D7A7 b323
	static BOOL SC_PROFANITY_GET_STRING_PASSED(int token) { return invoke<BOOL>(0x85535ACF97FC0969, token); } // 0x85535ACF97FC0969 0x09497F31 b323
	static int SC_PROFANITY_GET_STRING_STATUS(int token) { return invoke<int>(0x930DE22F07B1CCE3, token); } // 0x930DE22F07B1CCE3 0x4D8A6521 b323
	static Any _0xFF8F3A92B75ED67A() { return invoke<Any>(0xFF8F3A92B75ED67A); } // 0xFF8F3A92B75ED67A 0xC96456BA b323
	static Any _0x4A7D6E727F941747(Any* p0) { return invoke<Any>(0x4A7D6E727F941747, p0); } // 0x4A7D6E727F941747 0x8E7AEEB7 b323
	static BOOL _0x8CC469AB4D349B7C(int p0, const char* p1, Any* p2) { return invoke<BOOL>(0x8CC469AB4D349B7C, p0, p1, p2); } // 0x8CC469AB4D349B7C 0xE778B2A7 b323
	static BOOL _0x699E4A5C8C893A18(int p0, const char* p1, Any* p2) { return invoke<BOOL>(0x699E4A5C8C893A18, p0, p1, p2); } // 0x699E4A5C8C893A18 0xCE7D50A8 b323
	static BOOL _0x19853B5B17D77BCA(Any p0, Any* p1) { return invoke<BOOL>(0x19853B5B17D77BCA, p0, p1); } // 0x19853B5B17D77BCA 0xD26CCA46 b323
	static Any _0xE4F6E8D07A2F0F51(Any p0) { return invoke<Any>(0xE4F6E8D07A2F0F51, p0); } // 0xE4F6E8D07A2F0F51 b1290
	static Any _0x8A4416C0DB05FA66(Any p0) { return invoke<Any>(0x8A4416C0DB05FA66, p0); } // 0x8A4416C0DB05FA66 b1290
	static void _0xEA95C0853A27888E() { return invoke<void>(0xEA95C0853A27888E); } // 0xEA95C0853A27888E b1290
	static BOOL _0x225798743970412B(int* p0) { return invoke<BOOL>(0x225798743970412B, p0); } // 0x225798743970412B b323
	 // Same as HAS_ACHIEVEMENT_BEEN_PASSED
	static BOOL _SC_GET_HAS_ACHIEVEMENT_BEEN_PASSED(int achievement) { return invoke<BOOL>(0x418DC16FAE452C1C, achievement); } // 0x418DC16FAE452C1C b323
}

namespace STATS
{
	static BOOL STAT_SLOT_IS_LOADED(Any p0) { return invoke<BOOL>(0x0D0A9F0E7BD91E3C, p0); } // 0x0D0A9F0E7BD91E3C 0x7A299C13 b323
	 // Example:
	 //  STATS::STAT_SET_INT(MISC::GET_HASH_KEY("MPPLY_KILLS_PLAYERS"), 1337, true);
	static BOOL STAT_SET_INT(Hash statName, int value, BOOL save) { return invoke<BOOL>(0xB3271D7AB655B441, statName, value, save); } // 0xB3271D7AB655B441 0xC9CC1C5C b323
	 // Example:
	 //  STATS::STAT_SET_FLOAT(MISC::GET_HASH_KEY("MP0_WEAPON_ACCURACY"), 66.6f, true);
	static BOOL STAT_SET_FLOAT(Hash statName, float value, BOOL save) { return invoke<BOOL>(0x4851997F37FE9B3C, statName, value, save); } // 0x4851997F37FE9B3C 0x6CEA96F2 b323
	 // Example:
	 //  STATS::STAT_SET_BOOL(MISC::GET_HASH_KEY("MPPLY_MELEECHLENGECOMPLETED"), trur, true);
	static BOOL STAT_SET_BOOL(Hash statName, BOOL value, BOOL save) { return invoke<BOOL>(0x4B33C4243DE0C432, statName, value, save); } // 0x4B33C4243DE0C432 0x55D79DFB b323
	 // The following values have been found in the decompiled scripts:
	 // "RC_ABI1"
	 // "RC_ABI2"
	 // "RC_BA1"
	 // "RC_BA2"
	 // "RC_BA3"
	 // "RC_BA3A"
	 // "RC_BA3C"
	 // "RC_BA4"
	 // "RC_DRE1"
	 // "RC_EPS1"
	 // "RC_EPS2"
	 // "RC_EPS3"
	 // "RC_EPS4"
	 // "RC_EPS5"
	 // "RC_EPS6"
	 // "RC_EPS7"
	 // "RC_EPS8"
	 // "RC_EXT1"
	 // "RC_EXT2"
	 // "RC_EXT3"
	 // "RC_EXT4"
	 // "RC_FAN1"
	 // "RC_FAN2"
	 // "RC_FAN3"
	 // "RC_HAO1"
	 // "RC_HUN1"
	 // "RC_HUN2"
	 // "RC_JOS1"
	 // "RC_JOS2"
	 // "RC_JOS3"
	 // "RC_JOS4"
	 // "RC_MAU1"
	 // "RC_MIN1"
	 // "RC_MIN2"
	 // "RC_MIN3"
	 // "RC_MRS1"
	 // "RC_MRS2"
	 // "RC_NI1"
	 // "RC_NI1A"
	 // "RC_NI1B"
	 // "RC_NI1C"
	 // "RC_NI1D"
	 // "RC_NI2"
	 // "RC_NI3"
	 // "RC_OME1"
	 // "RC_OME2"
	 // "RC_PA1"
	 // "RC_PA2"
	 // "RC_PA3"
	 // "RC_PA3A"
	 // "RC_PA3B"
	 // "RC_PA4"
	 // "RC_RAM1"
	 // "RC_RAM2"
	 // "RC_RAM3"
	 // "RC_RAM4"
	 // "RC_RAM5"
	 // "RC_SAS1"
	 // "RC_TON1"
	 // "RC_TON2"
	 // "RC_TON3"
	 // "RC_TON4"
	 // "RC_TON5"
	static BOOL STAT_SET_GXT_LABEL(Hash statName, const char* value, BOOL save) { return invoke<BOOL>(0x17695002FD8B2AE0, statName, value, save); } // 0x17695002FD8B2AE0 0xC1224AA7 b323
	static BOOL STAT_SET_STRING(Hash statName, const char* value, BOOL save) { return invoke<BOOL>(0xA87B2335D12531D7, statName, value, save); } // 0xA87B2335D12531D7 0xB1EF2E21 b323
	static BOOL STAT_SET_MASKED_INT(Hash statName, Any p1, Any p2, int p3, BOOL save) { return invoke<BOOL>(0x7BBB1B54583ED410, statName, p1, p2, p3, save); } // 0x7BBB1B54583ED410 0x2CBAA739 b323
	 // p2 appears to always be -1
	 // 
	static BOOL STAT_GET_INT(Hash statHash, int* outValue, int p2) { return invoke<BOOL>(0x767FBC2AC802EF3D, statHash, outValue, p2); } // 0x767FBC2AC802EF3D 0x1C6FE43E b323
	static BOOL STAT_GET_FLOAT(Hash statHash, float* outValue, Any p2) { return invoke<BOOL>(0xD7AE6C9C9C6AC54C, statHash, outValue, p2); } // 0xD7AE6C9C9C6AC54C 0xFCBDA612 b323
	static BOOL STAT_GET_BOOL(Hash statHash, BOOL* outValue, Any p2) { return invoke<BOOL>(0x11B5E6D2AE73F48E, statHash, outValue, p2); } // 0x11B5E6D2AE73F48E 0x28A3DD2B b323
	static BOOL STAT_GET_DATE(Hash statHash, Any* p1, Any p2, Any p3) { return invoke<BOOL>(0x8B0FACEFC36C824B, statHash, p1, p2, p3); } // 0x8B0FACEFC36C824B 0xD762D16C b323
	 // p1 is always -1 in the script files
	static const char* STAT_GET_STRING(Hash statHash, int p1) { return invoke<const char*>(0xE50384ACC2C3DB74, statHash, p1); } // 0xE50384ACC2C3DB74 0x10CE4BDE b323
	static BOOL STAT_GET_MASKED_INT(Any p0, Any* p1, Any p2, Any p3, Any p4) { return invoke<BOOL>(0x655185A06D9EEAAB, p0, p1, p2, p3, p4); } // 0x655185A06D9EEAAB 0xE9D9B70F b323
	static BOOL STAT_SET_LICENSE_PLATE(Hash statName, const char* str) { return invoke<BOOL>(0x69FF13266D7296DA, statName, str); } // 0x69FF13266D7296DA 0x3507D253 b323
	static void STAT_INCREMENT(Hash statName, float value) { return invoke<void>(0x9B5A68C6489E9909, statName, value); } // 0x9B5A68C6489E9909 0xDFC5F71E b323
	static BOOL _0xB1D2BB1E1631F5B1() { return invoke<BOOL>(0xB1D2BB1E1631F5B1); } // 0xB1D2BB1E1631F5B1 0x02F283CE b323
	static BOOL _0xBED9F5693F34ED17(Hash statName, int p1, float* outValue) { return invoke<BOOL>(0xBED9F5693F34ED17, statName, p1, outValue); } // 0xBED9F5693F34ED17 0xC4110917 b323
	static int STAT_GET_NUMBER_OF_DAYS(Hash statName) { return invoke<int>(0xE0E854F5280FB769, statName); } // 0xE0E854F5280FB769 0xFD66A429 b323
	static int STAT_GET_NUMBER_OF_HOURS(Hash statName) { return invoke<int>(0xF2D4B2FE415AAFC3, statName); } // 0xF2D4B2FE415AAFC3 0x9B431236 b323
	static int STAT_GET_NUMBER_OF_MINUTES(Hash statName) { return invoke<int>(0x7583B4BE4C5A41B5, statName); } // 0x7583B4BE4C5A41B5 0x347B4436 b323
	static int STAT_GET_NUMBER_OF_SECONDS(Hash statName) { return invoke<int>(0x2CE056FF3723F00B, statName); } // 0x2CE056FF3723F00B 0x2C1D6C31 b323
	 // Needs more research. Possibly used to calculate the "mask" when calling "STAT_SET_BOOL_MASKED"?
	static int _STAT_GET_PACKED_BOOL_MASK(int p0) { return invoke<int>(0xF4D8E7AC2A27758C, p0); } // 0xF4D8E7AC2A27758C 0xDFC25D66 b323
	 // Needs more research. Possibly used to calculate the "mask" when calling "STAT_SET_MASKED_INT"?
	static int _STAT_GET_PACKED_INT_MASK(int p0) { return invoke<int>(0x94F12ABF9C79E339, p0); } // 0x94F12ABF9C79E339 0xCA160BCC b323
	static Hash GET_PACKED_BOOL_STAT_KEY(int index, BOOL spStat, BOOL charStat, int character) { return invoke<Hash>(0x80C75307B1C42837, index, spStat, charStat, character); } // 0x80C75307B1C42837 0xB5BF87B2 b323
	static Hash GET_PACKED_INT_STAT_KEY(int index, BOOL spStat, BOOL charStat, int character) { return invoke<Hash>(0x61E111E323419E07, index, spStat, charStat, character); } // 0x61E111E323419E07 0x1F938864 b323
	static Hash _GET_PACKED_TITLE_UPDATE_BOOL_STAT_KEY(int index, BOOL spStat, BOOL charStat, int character) { return invoke<Hash>(0xC4BB08EE7907471E, index, spStat, charStat, character); } // 0xC4BB08EE7907471E 0x3F8E893B b323
	static Hash _GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(int index, BOOL spStat, BOOL charStat, int character) { return invoke<Hash>(0xD16C2AD6B8E32854, index, spStat, charStat, character); } // 0xD16C2AD6B8E32854 0xFB93C5A2 b323
	 // Needs more research. Gets the stat name of a masked bool?
	 // 
	 // section - values used in the decompiled scripts:
	 // "_NGPSTAT_BOOL"
	 // "_NGTATPSTAT_BOOL"
	 // "_NGDLCPSTAT_BOOL"
	 // "_DLCBIKEPSTAT_BOOL"
	 // "_DLCGUNPSTAT_BOOL"
	 // "_GUNTATPSTAT_BOOL"
	 // "_DLCSMUGCHARPSTAT_BOOL"
	 // "_GANGOPSPSTAT_BOOL"
	 // "_BUSINESSBATPSTAT_BOOL"
	 // "_ARENAWARSPSTAT_BOOL"
	 // "_CASINOPSTAT_BOOL"
	 // "_CASINOHSTPSTAT_BOOL"
	 // "_HEIST3TATTOOSTAT_BOOL"
	static Hash _GET_NGSTAT_BOOL_HASH(int index, BOOL spStat, BOOL charStat, int character, const char* section) { return invoke<Hash>(0xBA52FF538ED2BC71, index, spStat, charStat, character, section); } // 0xBA52FF538ED2BC71 b323
	 // Needs more research. Gets the stat name of a masked int?
	 // 
	 // section - values used in the decompiled scripts:
	 // "_NGPSTAT_INT"
	 // "_MP_NGPSTAT_INT"
	 // "_MP_LRPSTAT_INT"
	 // "_MP_APAPSTAT_INT"
	 // "_MP_LR2PSTAT_INT"
	 // "_MP_BIKEPSTAT_INT"
	 // "_MP_IMPEXPPSTAT_INT"
	 // "_MP_GUNRPSTAT_INT"
	 // "_NGDLCPSTAT_INT"
	 // "_MP_NGDLCPSTAT_INT"
	 // "_DLCSMUGCHARPSTAT_INT"
	 // "_GANGOPSPSTAT_INT"
	 // "_BUSINESSBATPSTAT_INT"
	 // "_ARENAWARSPSTAT_INT"
	 // "_CASINOPSTAT_INT"
	 // "_CASINOHSTPSTAT_INT"
	static Hash _GET_NGSTAT_INT_HASH(int index, BOOL spStat, BOOL charStat, int character, const char* section) { return invoke<Hash>(0x2B4CDCA6F07FF3DA, index, spStat, charStat, character, section); } // 0x2B4CDCA6F07FF3DA b323
	 // p2 - Default value? Seems to be -1 most of the time.
	static BOOL STAT_GET_BOOL_MASKED(Hash statName, int mask, int p2) { return invoke<BOOL>(0x10FE3F1B79F9B071, statName, mask, p2); } // 0x10FE3F1B79F9B071 0x6ACE1B7D b323
	static BOOL STAT_SET_BOOL_MASKED(Hash statName, BOOL value, int mask, BOOL save) { return invoke<BOOL>(0x5BC62EC1937B9E5B, statName, value, mask, save); } // 0x5BC62EC1937B9E5B 0x7842C4D6 b323
	static void PLAYSTATS_NPC_INVITE(Any* p0) { return invoke<void>(0x93054C88E6AA7C44, p0); } // 0x93054C88E6AA7C44 0x598C06F3 b323
	static void PLAYSTATS_AWARD_XP(int amount, Hash type, Hash category) { return invoke<void>(0x46F917F6B4128FE4, amount, type, category); } // 0x46F917F6B4128FE4 0x8770017B b323
	static void _0xC5BE134EC7BA96A0(Any p0, Any p1, Any p2, Any p3, Any p4) { return invoke<void>(0xC5BE134EC7BA96A0, p0, p1, p2, p3, p4); } // 0xC5BE134EC7BA96A0 0xC960E161 b323
	static void PLAYSTATS_MISSION_STARTED(Any* p0, Any p1, Any p2, BOOL p3) { return invoke<void>(0xC19A2925C34D2231, p0, p1, p2, p3); } // 0xC19A2925C34D2231 0x3AAB699C b323
	static void PLAYSTATS_MISSION_OVER(Any* p0, Any p1, Any p2, BOOL p3, BOOL p4, BOOL p5) { return invoke<void>(0x7C4BB33A8CED7324, p0, p1, p2, p3, p4, p5); } // 0x7C4BB33A8CED7324 0x5B90B5FF b323
	static void PLAYSTATS_MISSION_CHECKPOINT(Any* p0, Any p1, Any p2, Any p3) { return invoke<void>(0xC900596A63978C1D, p0, p1, p2, p3); } // 0xC900596A63978C1D 0xCDC52280 b323
	static void PLAYSTATS_RANDOM_MISSION_DONE(const char* name, Any p1, Any p2, Any p3) { return invoke<void>(0x71862B1D855F32E1, name, p1, p2, p3); } // 0x71862B1D855F32E1 0xAC2C7C63 b323
	 // PLAYSTATS_*
	static BOOL _0x6DEE77AFF8C21BD1(int* playerAccountId, int* posixTime) { return invoke<BOOL>(0x6DEE77AFF8C21BD1, playerAccountId, posixTime); } // 0x6DEE77AFF8C21BD1 0x489E27E7 b323
	static void PLAYSTATS_MATCH_STARTED(Any p0, Any p1, Any p2) { return invoke<void>(0xBC80E22DED931E3D, p0, p1, p2); } // 0xBC80E22DED931E3D 0x2BDE85C1 b323
	static void _PLAYSTATS_HOLD_UP(Any p0, Any p1, Any p2, Any p3) { return invoke<void>(0xCB00196B31C39EB1, p0, p1, p2, p3); } // 0xCB00196B31C39EB1 0x759E0EC9 b323
	static void _PLAYSTATS_IMP_EXP(Any p0, Any p1, Any p2, Any p3) { return invoke<void>(0x2B69F5074C894811, p0, p1, p2, p3); } // 0x2B69F5074C894811 0x62073DF7 b323
	static void PLAYSTATS_ACQUIRED_HIDDEN_PACKAGE(Any p0) { return invoke<void>(0x79AB33F0FBFAC40C, p0); } // 0x79AB33F0FBFAC40C 0x8D5C7B37 b323
	 // This native does absolutely nothing, just a nullsub
	static void PLAYSTATS_ODDJOB_DONE(Any p0, Any p1, Any p2) { return invoke<void>(0x69DEA3E9DB727B4C, p0, p1, p2); } // 0x69DEA3E9DB727B4C 0xFE14A8EA b323
	static void PLAYSTATS_CHEAT_APPLIED(const char* cheat) { return invoke<void>(0x6058665D72302D3F, cheat); } // 0x6058665D72302D3F 0x345166F3 b323
	static void _0xF8C54A461C3E11DC(Any* p0, Any* p1, Any* p2, Any* p3) { return invoke<void>(0xF8C54A461C3E11DC, p0, p1, p2, p3); } // 0xF8C54A461C3E11DC 0x04181752 b323
	static void _0xF5BB8DAC426A52C0(Any* p0, Any* p1, Any* p2, Any* p3) { return invoke<void>(0xF5BB8DAC426A52C0, p0, p1, p2, p3); } // 0xF5BB8DAC426A52C0 b323
	static void _0xA736CF7FB7C5BFF4(Any* p0, Any* p1, Any* p2, Any* p3) { return invoke<void>(0xA736CF7FB7C5BFF4, p0, p1, p2, p3); } // 0xA736CF7FB7C5BFF4 0x31002201 b323
	static void _0x14E0B2D1AD1044E0(Any* p0, Any* p1, Any* p2, Any* p3) { return invoke<void>(0x14E0B2D1AD1044E0, p0, p1, p2, p3); } // 0x14E0B2D1AD1044E0 0xDDD1F1F3 b323
	static void _0x6A60E43998228229(Any p0) { return invoke<void>(0x6A60E43998228229, p0); } // 0x6A60E43998228229 b463
	static void _0xBFAFDB5FAAA5C5AB(Any p0) { return invoke<void>(0xBFAFDB5FAAA5C5AB, p0); } // 0xBFAFDB5FAAA5C5AB b463
	static void _0x8C9D11605E59D955(Any p0) { return invoke<void>(0x8C9D11605E59D955, p0); } // 0x8C9D11605E59D955 b463
	static void _0x3DE3AA516FB126A4(Any p0) { return invoke<void>(0x3DE3AA516FB126A4, p0); } // 0x3DE3AA516FB126A4 b463
	static void _0xBAA2F0490E146BE8(Any p0) { return invoke<void>(0xBAA2F0490E146BE8, p0); } // 0xBAA2F0490E146BE8 b463
	static void _0x1A7CE7CD3E653485(Any p0) { return invoke<void>(0x1A7CE7CD3E653485, p0); } // 0x1A7CE7CD3E653485 b463
	static void _0x419615486BBF1956(Any p0) { return invoke<void>(0x419615486BBF1956, p0); } // 0x419615486BBF1956 b463
	static void _0x84DFC579C2FC214C(Any p0) { return invoke<void>(0x84DFC579C2FC214C, p0); } // 0x84DFC579C2FC214C b463
	static void _0x0A9C7F36E5D7B683(Any p0) { return invoke<void>(0x0A9C7F36E5D7B683, p0); } // 0x0A9C7F36E5D7B683 b463
	static void _0x164C5FF663790845(Any p0) { return invoke<void>(0x164C5FF663790845, p0); } // 0x164C5FF663790845 b463
	static void _0xEDBF6C9B0D2C65C8(Any p0) { return invoke<void>(0xEDBF6C9B0D2C65C8, p0); } // 0xEDBF6C9B0D2C65C8 b463
	static void _0x6551B1F7F6CD46EA(Any p0) { return invoke<void>(0x6551B1F7F6CD46EA, p0); } // 0x6551B1F7F6CD46EA b463
	static void _0x2CD90358F67D0AA8(Any p0) { return invoke<void>(0x2CD90358F67D0AA8, p0); } // 0x2CD90358F67D0AA8 b463
	static Any LEADERBOARDS_GET_NUMBER_OF_COLUMNS(Any p0, Any p1) { return invoke<Any>(0x117B45156D7EFF2E, p0, p1); } // 0x117B45156D7EFF2E 0x0A56EE34 b323
	static Any LEADERBOARDS_GET_COLUMN_ID(Any p0, Any p1, Any p2) { return invoke<Any>(0xC4B5467A1886EA7E, p0, p1, p2); } // 0xC4B5467A1886EA7E 0x3821A334 b323
	static Any LEADERBOARDS_GET_COLUMN_TYPE(Any p0, Any p1, Any p2) { return invoke<Any>(0xBF4FEF46DB7894D3, p0, p1, p2); } // 0xBF4FEF46DB7894D3 0x6F2820F4 b323
	static Any LEADERBOARDS_READ_CLEAR(Any p0, Any p1, Any p2) { return invoke<Any>(0x7CCE5C737A665701, p0, p1, p2); } // 0x7CCE5C737A665701 0x7090012F b323
	static BOOL LEADERBOARDS_READ_PENDING(Any p0, Any p1, Any p2) { return invoke<BOOL>(0xAC392C8483342AC2, p0, p1, p2); } // 0xAC392C8483342AC2 0xEEB8BF5C b323
	static BOOL LEADERBOARDS_READ_ANY_PENDING() { return invoke<BOOL>(0xA31FD15197B192BD); } // 0xA31FD15197B192BD 0x1789437B b323
	static BOOL LEADERBOARDS_READ_SUCCESSFUL(Any p0, Any p1, Any p2) { return invoke<BOOL>(0x2FB19228983E832C, p0, p1, p2); } // 0x2FB19228983E832C 0x3AC5B2F1 b323
	static BOOL LEADERBOARDS2_READ_FRIENDS_BY_ROW(Any* p0, Any* p1, Any p2, BOOL p3, Any p4, Any p5) { return invoke<BOOL>(0x918B101666F9CB83, p0, p1, p2, p3, p4, p5); } // 0x918B101666F9CB83 0xBD91B136 b323
	static BOOL LEADERBOARDS2_READ_BY_HANDLE(Any* p0, Any* p1) { return invoke<BOOL>(0xC30713A383BFBF0E, p0, p1); } // 0xC30713A383BFBF0E 0x6B553408 b323
	static BOOL LEADERBOARDS2_READ_BY_RANK(Any* p0, Any p1, Any p2) { return invoke<BOOL>(0xBA2C7DB0C129449A, p0, p1, p2); } // 0xBA2C7DB0C129449A 0x1B03F59F b323
	static BOOL LEADERBOARDS2_READ_BY_RADIUS(Any* p0, Any p1, Any* p2) { return invoke<BOOL>(0x5CE587FB5A42C8C4, p0, p1, p2); } // 0x5CE587FB5A42C8C4 0xC5B7E685 b323
	static BOOL LEADERBOARDS2_READ_BY_SCORE_INT(Any* p0, Any p1, Any p2) { return invoke<BOOL>(0x7EEC7E4F6984A16A, p0, p1, p2); } // 0x7EEC7E4F6984A16A 0xAC020C18 b323
	static BOOL LEADERBOARDS2_READ_BY_SCORE_FLOAT(Any* p0, float p1, Any p2) { return invoke<BOOL>(0xE662C8B759D08F3C, p0, p1, p2); } // 0xE662C8B759D08F3C 0xC678B29F b323
	static BOOL LEADERBOARDS2_READ_RANK_PREDICTION(Any* p0, Any* p1, Any* p2) { return invoke<BOOL>(0xC38DC1E90D22547C, p0, p1, p2); } // 0xC38DC1E90D22547C 0x9BEC3401 b323
	static BOOL _0xA0F93D5465B3094D(Any* p0) { return invoke<BOOL>(0xA0F93D5465B3094D, p0); } // 0xA0F93D5465B3094D 0xC977D6E2 b323
	static void _0x71B008056E5692D6() { return invoke<void>(0x71B008056E5692D6); } // 0x71B008056E5692D6 0xF2DB6A82 b323
	static BOOL _0x34770B9CE0E03B91(Any p0, Any* p1) { return invoke<BOOL>(0x34770B9CE0E03B91, p0, p1); } // 0x34770B9CE0E03B91 0x766A74FE b323
	static Any _0x88578F6EC36B4A3A(Any p0, Any p1) { return invoke<Any>(0x88578F6EC36B4A3A, p0, p1); } // 0x88578F6EC36B4A3A 0x6B90E730 b323
	static float _0x38491439B6BA7F7D(Any p0, Any p1) { return invoke<float>(0x38491439B6BA7F7D, p0, p1); } // 0x38491439B6BA7F7D 0x509A286F b323
	static BOOL LEADERBOARDS2_WRITE_DATA(Any* p0) { return invoke<BOOL>(0xAE2206545888AE49, p0); } // 0xAE2206545888AE49 0x5F9DF634 b323
	static void LEADERBOARDS_WRITE_ADD_COLUMN(Any p0, Any p1, float p2) { return invoke<void>(0x0BCA1D2C47B0D269, p0, p1, p2); } // 0x0BCA1D2C47B0D269 0x7524E27B b323
	static BOOL LEADERBOARDS_CACHE_DATA_ROW(Any* p0) { return invoke<BOOL>(0xB9BB18E2C40142ED, p0); } // 0xB9BB18E2C40142ED 0x44F7D82B b323
	static void LEADERBOARDS_CLEAR_CACHE_DATA() { return invoke<void>(0xD4B02A6B476E1FDC); } // 0xD4B02A6B476E1FDC 0x87F498C1 b323
	static void _0x8EC74CEB042E7CFF(Any p0) { return invoke<void>(0x8EC74CEB042E7CFF, p0); } // 0x8EC74CEB042E7CFF 0x88AE9667 b323
	static BOOL LEADERBOARDS_GET_CACHE_EXISTS(Any p0) { return invoke<BOOL>(0x9C51349BE6CDFE2C, p0); } // 0x9C51349BE6CDFE2C 0xFC8A71F3 b323
	static Any LEADERBOARDS_GET_CACHE_TIME(Any p0) { return invoke<Any>(0xF04C1C27DA35F6C8, p0); } // 0xF04C1C27DA35F6C8 0xEDF02302 b323
	static int LEADERBOARDS_GET_CACHE_NUMBER_OF_ROWS(Any p0) { return invoke<int>(0x58A651CD201D89AD, p0); } // 0x58A651CD201D89AD 0xCE7CB520 b323
	static BOOL LEADERBOARDS_GET_CACHE_DATA_ROW(Any p0, Any p1, Any* p2) { return invoke<BOOL>(0x9120E8DBA3D69273, p0, p1, p2); } // 0x9120E8DBA3D69273 0xA11289EC b323
	static void _UPDATE_STAT_INT(Hash statHash, int value, int p2) { return invoke<void>(0x11FF1C80276097ED, statHash, value, p2); } // 0x11FF1C80276097ED 0x4AC39C6C b323
	static void _0x723C1CE13FBFDB67(Any p0, Any p1) { return invoke<void>(0x723C1CE13FBFDB67, p0, p1); } // 0x723C1CE13FBFDB67 0x4C39CF10 b323
	static void _0x0D01D20616FC73FB(Any p0, Any p1) { return invoke<void>(0x0D01D20616FC73FB, p0, p1); } // 0x0D01D20616FC73FB 0x2180AE13 b323
	static void _0x047CBED6F6F8B63C() { return invoke<void>(0x047CBED6F6F8B63C); } // 0x047CBED6F6F8B63C 0xA063CABD b323
	static BOOL LEADERBOARDS2_WRITE_DATA_FOR_EVENT_TYPE(Any* p0, Any* p1) { return invoke<BOOL>(0xC980E62E33DF1D5C, p0, p1); } // 0xC980E62E33DF1D5C 0x62C19A3D b323
	static Any _0x33D72899E24C3365(Any p0, Any p1) { return invoke<Any>(0x33D72899E24C3365, p0, p1); } // 0x33D72899E24C3365 b463
	static Any _0xA761D4AC6115623D() { return invoke<Any>(0xA761D4AC6115623D); } // 0xA761D4AC6115623D b463
	static Any _0xF11F01D98113536A(Any p0) { return invoke<Any>(0xF11F01D98113536A, p0); } // 0xF11F01D98113536A b463
	static Any _0xE8853FBCE7D8D0D6() { return invoke<Any>(0xE8853FBCE7D8D0D6); } // 0xE8853FBCE7D8D0D6 b463
	static Any _0xA943FD1722E11EFD() { return invoke<Any>(0xA943FD1722E11EFD); } // 0xA943FD1722E11EFD b463
	static Any _0x84A810B375E69C0E() { return invoke<Any>(0x84A810B375E69C0E); } // 0x84A810B375E69C0E b463
	static Any _0x9EC8858184CD253A() { return invoke<Any>(0x9EC8858184CD253A); } // 0x9EC8858184CD253A b463
	static Any _0xBA9749CC94C1FD85() { return invoke<Any>(0xBA9749CC94C1FD85); } // 0xBA9749CC94C1FD85 b463
	static Any _0x55A8BECAF28A4EB7() { return invoke<Any>(0x55A8BECAF28A4EB7); } // 0x55A8BECAF28A4EB7 b463
	static Any _0x32CAC93C9DE73D32() { return invoke<Any>(0x32CAC93C9DE73D32); } // 0x32CAC93C9DE73D32 b463
	static Any _0xAFF47709F1D5DCCE() { return invoke<Any>(0xAFF47709F1D5DCCE); } // 0xAFF47709F1D5DCCE b463
	static Any _0x6E0A5253375C4584() { return invoke<Any>(0x6E0A5253375C4584); } // 0x6E0A5253375C4584 b463
	static Any _0x1A8EA222F9C67DBB(Any p0) { return invoke<Any>(0x1A8EA222F9C67DBB, p0); } // 0x1A8EA222F9C67DBB b463
	static Any _0xF9F2922717B819EC() { return invoke<Any>(0xF9F2922717B819EC); } // 0xF9F2922717B819EC b505
	static Any _0x0B8B7F74BF061C6D() { return invoke<Any>(0x0B8B7F74BF061C6D); } // 0x0B8B7F74BF061C6D b463
	 // Sets profile setting 866
	 // 
	 // SET_*
	static void _SET_HAS_CONTENT_UNLOCKS_FLAGS(int value) { return invoke<void>(0xDAC073C7901F9E15, value); } // 0xDAC073C7901F9E15 b323
	static void _0x6BC0ACD0673ACEBE(Any p0, Any p1, Any p2) { return invoke<void>(0x6BC0ACD0673ACEBE, p0, p1, p2); } // 0x6BC0ACD0673ACEBE b573
	static void _0x3EBEAC6C3F81F6BD(Any p0) { return invoke<void>(0x3EBEAC6C3F81F6BD, p0); } // 0x3EBEAC6C3F81F6BD b573
	static void _0x0B565B0AAE56A0E8(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { return invoke<void>(0x0B565B0AAE56A0E8, p0, p1, p2, p3, p4, p5, p6); } // 0x0B565B0AAE56A0E8 b877
	static void _PLAYSTATS_EARNED_MC_POINTS(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return invoke<void>(0x501478855A6074CE, p0, p1, p2, p3, p4, p5); } // 0x501478855A6074CE b877
	static void _0x8989CBD7B4E82534(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { return invoke<void>(0x8989CBD7B4E82534, p0, p1, p2, p3, p4, p5, p6); } // 0x8989CBD7B4E82534 b877
	static void _0xDAF80797FC534BEC(Any p0) { return invoke<void>(0xDAF80797FC534BEC, p0); } // 0xDAF80797FC534BEC b1103
	static void _PLAYSTATS_H2_INSTANCE_END(Any* data, Any p1, Any p2, Any p3) { return invoke<void>(0x1E1497D0D2108115, data, p1, p2, p3); } // 0x1E1497D0D2108115 b1290
	static void _PLAYSTATS_ARENA_WARS_ENDED(Any* data) { return invoke<void>(0xB479D9F0D48A1BC5, data); } // 0xB479D9F0D48A1BC5 b1604
	static void _PLAYSTATS_PASSIVE_MODE(BOOL p0, int p1, int p2, int p3) { return invoke<void>(0x35EEC6C2BC821A71, p0, p1, p2, p3); } // 0x35EEC6C2BC821A71 b1734
	static void _PLAYSTATS_CASINO_STORY_MISSION_ENDED(Any p0, Any p1) { return invoke<void>(0xFCCCAC2BD3C1F180, p0, p1); } // 0xFCCCAC2BD3C1F180 b1734
	static void _PLAYSTATS_CASINO_CHIP(Any p0) { return invoke<void>(0x0999F3F090EC5012, p0); } // 0x0999F3F090EC5012 b1734
	static void _PLAYSTATS_CASINO_BLACKJACK(Any p0) { return invoke<void>(0x3EAE97309727E7AD, p0); } // 0x3EAE97309727E7AD b1734
	static void _PLAYSTATS_CASINO_THREECARDPOKER(Any p0) { return invoke<void>(0xF740FB339D471C35, p0); } // 0xF740FB339D471C35 b1734
	static void _PLAYSTATS_CASINO_SLOTMACHINE(Any p0) { return invoke<void>(0xEF5EC67D392B830A, p0); } // 0xEF5EC67D392B830A b1734
	static void _PLAYSTATS_CASINO_LUCKYSEVEN(Any p0) { return invoke<void>(0x0C432C1435F5E4FA, p0); } // 0x0C432C1435F5E4FA b1734
	static void _PLAYSTATS_CASINO_BLACKJACK_LIGHT(Any p0) { return invoke<void>(0xD5451C7BF151EB6F, p0); } // 0xD5451C7BF151EB6F b1734
	static void _PLAYSTATS_CASINO_THREECARDPOKER_LIGHT(Any p0) { return invoke<void>(0xC9001364B4388F22, p0); } // 0xC9001364B4388F22 b1734
	static void _PLAYSTATS_CASINO_SLOTMACHINE_LIGHT(Any p0) { return invoke<void>(0xE60054A0FAE8227F, p0); } // 0xE60054A0FAE8227F b1734
	static void _PLAYSTATS_ARCADEGAME(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return invoke<void>(0x533A7D1EA58DF958, p0, p1, p2, p3, p4, p5); } // 0x533A7D1EA58DF958 b1734
}

namespace STREAMING
{
	static void LOAD_SCENE(float x, float y, float z) { return invoke<void>(0x4448EB75B4904BDB, x, y, z); } // 0x4448EB75B4904BDB 0xB72403F5 b323
	static void SET_INTERIOR_ACTIVE(int interiorID, BOOL toggle) { return invoke<void>(0xE37B76C387BE28ED, interiorID, toggle); } // 0xE37B76C387BE28ED 0xE1013910 b323
	 // Request a model to be loaded into memory.
	 // 
	static void REQUEST_MODEL(Hash model) { return invoke<void>(0x963D27A58DF860AC, model); } // 0x963D27A58DF860AC 0xFFF1B500 b323
	 // Checks if the specified model has loaded into memory.
	static BOOL HAS_MODEL_LOADED(Hash model) { return invoke<BOOL>(0x98A4EB5D89A0C952, model); } // 0x98A4EB5D89A0C952 0x62BFDB37 b323
	 // Unloads model from memory
	static void SET_MODEL_AS_NO_LONGER_NEEDED(Hash model) { return invoke<void>(0xE532F5D78798DAAB, model); } // 0xE532F5D78798DAAB 0xAE0F069E b323
	 // Check if model is in cdimage(rpf)
	static BOOL IS_MODEL_IN_CDIMAGE(Hash model) { return invoke<BOOL>(0x35B9E0803292B641, model); } // 0x35B9E0803292B641 0x1094782F b323
	 // Returns whether the specified model exists in the game.
	static BOOL IS_MODEL_VALID(Hash model) { return invoke<BOOL>(0xC0296A2EDF545E92, model); } // 0xC0296A2EDF545E92 0xAF8F8E9D b323
	 // Returns whether the specified model represents a vehicle.
	static BOOL IS_MODEL_A_VEHICLE(Hash model) { return invoke<BOOL>(0x19AAC8F07BFEC53E, model); } // 0x19AAC8F07BFEC53E 0xFFFC85D4 b323
	static void REQUEST_COLLISION_AT_COORD(float x, float y, float z) { return invoke<void>(0x07503F7948F491A7, x, y, z); } // 0x07503F7948F491A7 0xCD9805E7 b323
	 // MulleDK19: Alias of REQUEST_COLLISION_AT_COORD.
	static void REQUEST_ADDITIONAL_COLLISION_AT_COORD(float x, float y, float z) { return invoke<void>(0xC9156DC11411A9EA, x, y, z); } // 0xC9156DC11411A9EA 0xC2CC1DF2 b323
	static BOOL DOES_ANIM_DICT_EXIST(const char* animDict) { return invoke<BOOL>(0x2DA49C3B79856961, animDict); } // 0x2DA49C3B79856961 0xCD31C872 b323
	static void REQUEST_ANIM_DICT(const char* animDict) { return invoke<void>(0xD3BD40951412FEF6, animDict); } // 0xD3BD40951412FEF6 0xDCA96950 b323
	static BOOL HAS_ANIM_DICT_LOADED(const char* animDict) { return invoke<BOOL>(0xD031A9162D01088C, animDict); } // 0xD031A9162D01088C 0x05E6763C b323
	static void REMOVE_ANIM_DICT(const char* animDict) { return invoke<void>(0xF66A602F829E2A06, animDict); } // 0xF66A602F829E2A06 0x0AE050B5 b323
	 // Starts loading the specified animation set. An animation set provides movement animations for a ped. See SET_PED_MOVEMENT_CLIPSET.
	static void REQUEST_ANIM_SET(const char* animSet) { return invoke<void>(0x6EA47DAE7FAD0EED, animSet); } // 0x6EA47DAE7FAD0EED 0x2988B3FC b323
	 // Gets whether the specified animation set has finished loading. An animation set provides movement animations for a ped. See SET_PED_MOVEMENT_CLIPSET.
	 // 
	 // Animation set and clip set are synonymous.
	static BOOL HAS_ANIM_SET_LOADED(const char* animSet) { return invoke<BOOL>(0xC4EA073D86FB29B0, animSet); } // 0xC4EA073D86FB29B0 0x4FFF397D b323
	 // Unloads the specified animation set. An animation set provides movement animations for a ped. See SET_PED_MOVEMENT_CLIPSET.
	 // 
	 // Animation set and clip set are synonymous.
	static void REMOVE_ANIM_SET(const char* animSet) { return invoke<void>(0x16350528F93024B3, animSet); } // 0x16350528F93024B3 0xD04A817A b323
	static void REQUEST_CLIP_SET(const char* clipSet) { return invoke<void>(0xD2A71E1A77418A49, clipSet); } // 0xD2A71E1A77418A49 0x546C627A b323
	 // Alias for HAS_ANIM_SET_LOADED.
	static BOOL HAS_CLIP_SET_LOADED(const char* clipSet) { return invoke<BOOL>(0x318234F4F3738AF3, clipSet); } // 0x318234F4F3738AF3 0x230D5455 b323
	 // Alias for REMOVE_ANIM_SET.
	static void REMOVE_CLIP_SET(const char* clipSet) { return invoke<void>(0x01F73A131C18CD94, clipSet); } // 0x01F73A131C18CD94 0x1E21F7AA b323
	 // Exemple: REQUEST_IPL("TrevorsTrailerTrash");
	 // 
	 // IPL + Coords: http://pastebin.com/FyV5mMma
	static void REQUEST_IPL(const char* iplName) { return invoke<void>(0x41B4893843BBDB74, iplName); } // 0x41B4893843BBDB74 0x3B70D1DB b323
	 // Removes an IPL from the map.
	 // IPL List: pastebin.com/pwkh0uRP 
	 // 
	 // Example:
	 // C#:
	 // Function.Call(Hash.REMOVE_IPL, "trevorstrailertidy");
	 // 
	 // C++:
	 // STREAMING::REMOVE_IPL("trevorstrailertidy");
	 // 
	 // iplName = Name of IPL you want to remove.
	static void REMOVE_IPL(const char* iplName) { return invoke<void>(0xEE6C5AD3ECE0A82D, iplName); } // 0xEE6C5AD3ECE0A82D 0xDF7CBD36 b323
	static BOOL IS_IPL_ACTIVE(const char* iplName) { return invoke<BOOL>(0x88A741E44A2B3495, iplName); } // 0x88A741E44A2B3495 0xB2C33714 b323
	static void SET_GAME_PAUSES_FOR_STREAMING(BOOL toggle) { return invoke<void>(0x717CD6E6FAEBBEDC, toggle); } // 0x717CD6E6FAEBBEDC 0x9211A28A b323
	static void SET_REDUCE_PED_MODEL_BUDGET(BOOL toggle) { return invoke<void>(0x77B5F9A36BF96710, toggle); } // 0x77B5F9A36BF96710 0xAFCB2B86 b323
	static void SET_REDUCE_VEHICLE_MODEL_BUDGET(BOOL toggle) { return invoke<void>(0x80C527893080CCF3, toggle); } // 0x80C527893080CCF3 0xCDB4FB7E b323
	 // maps script name (thread + 0xD0) by lookup via scriptfx.dat - does nothing when script name is empty
	static void REQUEST_PTFX_ASSET() { return invoke<void>(0x944955FB2A3935C8); } // 0x944955FB2A3935C8 0x2C649263 b323
	static BOOL HAS_PTFX_ASSET_LOADED() { return invoke<BOOL>(0xCA7D9B86ECA7481B); } // 0xCA7D9B86ECA7481B 0x3EFF96BE b323
	static void REMOVE_PTFX_ASSET() { return invoke<void>(0x88C6814073DD4A73); } // 0x88C6814073DD4A73 0xC10F178C b323
	static void SET_VEHICLE_POPULATION_BUDGET(int p0) { return invoke<void>(0xCB9E1EB3BE2AF4E9, p0); } // 0xCB9E1EB3BE2AF4E9 0x1D56993C b323
	static void SET_PED_POPULATION_BUDGET(int p0) { return invoke<void>(0x8C95333CFC3340F3, p0); } // 0x8C95333CFC3340F3 0xD2D026CD b323
	static void CLEAR_FOCUS() { return invoke<void>(0x31B73D1EA9F01DA2); } // 0x31B73D1EA9F01DA2 0x34D91E7A b323
	 // Override the area where the camera will render the terrain.
	 // p3, p4 and p5 are usually set to 0.0
	 // 
	static void SET_FOCUS_POS_AND_VEL(float x, float y, float z, float offsetX, float offsetY, float offsetZ) { return invoke<void>(0xBB7454BAFF08FE25, x, y, z, offsetX, offsetY, offsetZ); } // 0xBB7454BAFF08FE25 0x14680A60 b323
	 // It seems to make the entity's coords mark the point from which LOD-distances are measured. In my testing, setting a vehicle as the focus entity and moving that vehicle more than 300 distance units away from the player will make the level of detail around the player go down drastically (shadows disappear, textures go extremely low res, etc). The player seems to be the default focus entity.
	static void SET_FOCUS_ENTITY(Entity entity) { return invoke<void>(0x198F77705FA0931D, entity); } // 0x198F77705FA0931D 0x18DB04AC b323
	static BOOL IS_ENTITY_FOCUS(Entity entity) { return invoke<BOOL>(0x2DDFF3FB9075D747, entity); } // 0x2DDFF3FB9075D747 0xB456D707 b323
	 // Possible p0 values:
	 // 
	 // "prologue"
	 // "Prologue_Main"
	static void SET_MAPDATACULLBOX_ENABLED(const char* name, BOOL toggle) { return invoke<void>(0xAF12610C644A35C9, name, toggle); } // 0xAF12610C644A35C9 0x403CD434 b323
	 // This native does absolutely nothing, just a nullsub
	static void _0x4E52E752C76E7E7A(Any p0) { return invoke<void>(0x4E52E752C76E7E7A, p0); } // 0x4E52E752C76E7E7A 0xA07BAEB9 b323
	static Any FORMAT_FOCUS_HEADING(float x, float y, float z, float rad, Any p4, Any p5) { return invoke<Any>(0x219C7B8D53E429FD, x, y, z, rad, p4, p5); } // 0x219C7B8D53E429FD 0x10B6AB36 b323
	static Any _0x1F3F018BC3AFA77C(float p0, float p1, float p2, float p3, float p4, float p5, float p6, Any p7, Any p8) { return invoke<Any>(0x1F3F018BC3AFA77C, p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 0x1F3F018BC3AFA77C 0x72344191 b323
	static void _0x1EE7D8DF4425F053(Any p0) { return invoke<void>(0x1EE7D8DF4425F053, p0); } // 0x1EE7D8DF4425F053 0xE80F8ABE b323
	static Any _0x7D41E9D2D17C5B2D(Any p0) { return invoke<Any>(0x7D41E9D2D17C5B2D, p0); } // 0x7D41E9D2D17C5B2D 0x1B3521F4 b323
	static Any _0x07C313F94746702C(Any p0) { return invoke<Any>(0x07C313F94746702C, p0); } // 0x07C313F94746702C 0x42CFE9C0 b323
	static Any _0xBC9823AB80A3DCAC() { return invoke<Any>(0xBC9823AB80A3DCAC); } // 0xBC9823AB80A3DCAC 0x56253356 b323
	static BOOL NEW_LOAD_SCENE_START(float p0, float p1, float p2, float p3, float p4, float p5, float p6, Any p7) { return invoke<BOOL>(0x212A8D0D2BABFAC2, p0, p1, p2, p3, p4, p5, p6, p7); } // 0x212A8D0D2BABFAC2 0xDF9C38B6 b323
	 // if (!sub_8f12("START LOAD SCENE SAFE")) {
	 //     if (CUTSCENE::GET_CUTSCENE_TIME() > 4178) {
	 //         STREAMING::_ACCFB4ACF53551B0(1973.845458984375, 3818.447265625, 32.43629837036133, 15.0, 2);
	 //         sub_8e9e("START LOAD SCENE SAFE", 1);
	 //     }
	 // }
	 // 
	 // (Previously known as STREAMING::_NEW_LOAD_SCENE_START_SAFE)
	static BOOL NEW_LOAD_SCENE_START_SPHERE(float x, float y, float z, float radius, Any p4) { return invoke<BOOL>(0xACCFB4ACF53551B0, x, y, z, radius, p4); } // 0xACCFB4ACF53551B0 0xFA037FEB b323
	static void NEW_LOAD_SCENE_STOP() { return invoke<void>(0xC197616D221FF4A4); } // 0xC197616D221FF4A4 0x7C05B1F6 b323
	static BOOL IS_NEW_LOAD_SCENE_ACTIVE() { return invoke<BOOL>(0xA41A05B6CB741B85); } // 0xA41A05B6CB741B85 0xAD234B7F b323
	static BOOL IS_NEW_LOAD_SCENE_LOADED() { return invoke<BOOL>(0x01B8247A7A8B9AD1); } // 0x01B8247A7A8B9AD1 0x3ECD839F b323
	static void STOP_PLAYER_SWITCH() { return invoke<void>(0x95C0A5BBDC189AA1); } // 0x95C0A5BBDC189AA1 0x2832C010 b323
	 // Returns true if the player is currently switching, false otherwise.
	 // (When the camera is in the sky moving from Trevor to Franklin for example)
	static BOOL IS_PLAYER_SWITCH_IN_PROGRESS() { return invoke<BOOL>(0xD9D2CFFF49FAB35F); } // 0xD9D2CFFF49FAB35F 0x56135ACC b323
	static int GET_PLAYER_SWITCH_TYPE() { return invoke<int>(0xB3C94A90D9FC9E62); } // 0xB3C94A90D9FC9E62 0x280DC015 b323
	static int GET_PLAYER_SWITCH_STATE() { return invoke<int>(0x470555300D10B2A5); } // 0x470555300D10B2A5 0x39A0E1F2 b323
	static int GET_PLAYER_SWITCH_JUMP_CUT_INDEX() { return invoke<int>(0x78C0D93253149435); } // 0x78C0D93253149435 0x02BA7AC2 b323
	static void _0x74DE2E8739086740() { return invoke<void>(0x74DE2E8739086740); } // 0x74DE2E8739086740 0x1084F2F4 b323
	static int GET_PLAYER_SWITCH_INTERP_OUT_DURATION() { return invoke<int>(0x08C2D6C52A3104BB); } // 0x08C2D6C52A3104BB 0x569847E3 b323
	static Any _0x5B48A06DD0E792A5() { return invoke<Any>(0x5B48A06DD0E792A5); } // 0x5B48A06DD0E792A5 0xC7A3D279 b323
	static void _0xA76359FC80B2438E(float p0) { return invoke<void>(0xA76359FC80B2438E, p0); } // 0xA76359FC80B2438E 0xE5612C1A b323
	static void _0xBED8CA5FF5E04113(float p0, float p1, float p2, float p3) { return invoke<void>(0xBED8CA5FF5E04113, p0, p1, p2, p3); } // 0xBED8CA5FF5E04113 0x9CD6A451 b323
	static void _0x472397322E92A856() { return invoke<void>(0x472397322E92A856); } // 0x472397322E92A856 0x4267DA87 b323
	static void _0x40AEFD1A244741F2(BOOL p0) { return invoke<void>(0x40AEFD1A244741F2, p0); } // 0x40AEFD1A244741F2 0x9FA4AF99 b323
	static void _0x03F1A106BDA7DD3E() { return invoke<void>(0x03F1A106BDA7DD3E); } // 0x03F1A106BDA7DD3E b323
	static void PREFETCH_SRL(const char* srl) { return invoke<void>(0x3D245789CE12982C, srl); } // 0x3D245789CE12982C 0x37BE2FBB b323
	static BOOL IS_SRL_LOADED() { return invoke<BOOL>(0xD0263801A4C5B0BB); } // 0xD0263801A4C5B0BB 0x670FA2A6 b323
	static void BEGIN_SRL() { return invoke<void>(0x9BADDC94EF83B823); } // 0x9BADDC94EF83B823 0x24F49427 b323
	static void END_SRL() { return invoke<void>(0x0A41540E63C9EE17); } // 0x0A41540E63C9EE17 0x1977C56A b323
	static void SET_SRL_TIME(float p0) { return invoke<void>(0xA74A541C6884E7B8, p0); } // 0xA74A541C6884E7B8 0x30F8A487 b323
	static void _0xEF39EE20C537E98C(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return invoke<void>(0xEF39EE20C537E98C, p0, p1, p2, p3, p4, p5); } // 0xEF39EE20C537E98C 0x814D0752 b323
	static void _0xBEB2D9A1D9A8F55A(Any p0, Any p1, Any p2, Any p3) { return invoke<void>(0xBEB2D9A1D9A8F55A, p0, p1, p2, p3); } // 0xBEB2D9A1D9A8F55A 0x62F02485 b323
	static void _0x20C6C7E4EB082A7F(BOOL p0) { return invoke<void>(0x20C6C7E4EB082A7F, p0); } // 0x20C6C7E4EB082A7F 0xA6459CAA b323
	static void _0xF8155A7F03DDFC8E(Any p0) { return invoke<void>(0xF8155A7F03DDFC8E, p0); } // 0xF8155A7F03DDFC8E 0xF8F515E4 b323
	static void SET_HD_AREA(float x, float y, float z, float radius) { return invoke<void>(0xB85F26619073E775, x, y, z, radius); } // 0xB85F26619073E775 0x80BAA035 b323
	static void CLEAR_HD_AREA() { return invoke<void>(0xCE58B1CFB9290813); } // 0xCE58B1CFB9290813 0x7CAC6FA0 b323
}

namespace TASK
{
	 // Stand still (?)
	static void TASK_PAUSE(Ped ped, int ms) { return invoke<void>(0xE73A266DB0CA9042, ped, ms); } // 0xE73A266DB0CA9042 0x17A64668 b323
	 // Makes the specified ped stand still for (time) milliseconds.
	static void TASK_STAND_STILL(Ped ped, int time) { return invoke<void>(0x919BE13EED931959, ped, time); } // 0x919BE13EED931959 0x6F80965D b323
	static void TASK_COWER(Ped ped, int duration) { return invoke<void>(0x3EB1FE9E8E908E15, ped, duration); } // 0x3EB1FE9E8E908E15 0x9CF1C19B b323
	 // In the scripts, p3 was always -1.
	 // 
	 // p3 seems to be duration or timeout of turn animation.
	 // Also facingPed can be 0 or -1 so ped will just raise hands up.
	static void TASK_HANDS_UP(Ped ped, int duration, Ped facingPed, int p3, BOOL p4) { return invoke<void>(0xF2EAB31979A7F910, ped, duration, facingPed, p3, p4); } // 0xF2EAB31979A7F910 0x8DCC19C5 b323
	 // The given ped will try to open the nearest door to 'seat'.
	 // Example: telling the ped to open the door for the driver seat does not necessarily mean it will open the driver door, it may choose to open the passenger door instead if that one is closer.
	static void TASK_OPEN_VEHICLE_DOOR(Ped ped, Vehicle vehicle, int timeOut, int seat, float speed) { return invoke<void>(0x965791A9A488A062, ped, vehicle, timeOut, seat, speed); } // 0x965791A9A488A062 0x8EE06BF4 b323
	 // speed 1.0 = walk, 2.0 = run
	 // p5 1 = normal, 3 = teleport to vehicle, 16 = teleport directly into vehicle
	 // p6 is always 0
	 // 
	 // Usage of seat 
	 // -1 = driver
	 // 0 = passenger
	 // 1 = left back seat
	 // 2 = right back seat
	 // 3 = outside left
	 // 4 = outside right
	static void TASK_ENTER_VEHICLE(Ped ped, Vehicle vehicle, int timeout, int seat, float speed, int flag, Any p6) { return invoke<void>(0xC20E50AA46D09CA8, ped, vehicle, timeout, seat, speed, flag, p6); } // 0xC20E50AA46D09CA8 0xB8689B4E b323
	 // Flags from decompiled scripts:
	 // 0 = normal exit and closes door.
	 // 1 = normal exit and closes door.
	 // 16 = teleports outside, door kept closed.
	 // 64 = normal exit and closes door, maybe a bit slower animation than 0.
	 // 256 = normal exit but does not close the door.
	 // 4160 = ped is throwing himself out, even when the vehicle is still.
	 // 262144 = ped moves to passenger seat first, then exits normally
	 // 
	 // Others to be tried out: 320, 512, 131072.
	static void TASK_LEAVE_VEHICLE(Ped ped, Vehicle vehicle, int flags) { return invoke<void>(0xD3DBCE61A490BE02, ped, vehicle, flags); } // 0xD3DBCE61A490BE02 0x7B1141C6 b323
	static void TASK_GET_OFF_BOAT(Ped ped, Vehicle boat) { return invoke<void>(0x9C00E77AF14B2DFF, ped, boat); } // 0x9C00E77AF14B2DFF 0x4293601F b323
	 // Second parameter is unused.
	 // 
	 // second parameter was for jetpack in the early stages of gta and the hard coded code is now removed
	static void TASK_PARACHUTE(Ped ped, BOOL p1, BOOL p2) { return invoke<void>(0xD2F1C53C97EE81AB, ped, p1, p2); } // 0xD2F1C53C97EE81AB 0xEC3060A2 b323
	 // makes ped parachute to coords x y z. Works well with PATHFIND::GET_SAFE_COORD_FOR_PED
	static void TASK_PARACHUTE_TO_TARGET(Ped ped, float x, float y, float z) { return invoke<void>(0xB33E291AFA6BD03A, ped, x, y, z); } // 0xB33E291AFA6BD03A 0xE0104D6C b323
	 // Only appears twice in the scripts.
	 // 
	 // TASK::TASK_RAPPEL_FROM_HELI(PLAYER::PLAYER_PED_ID(), 0x41200000);
	 // TASK::TASK_RAPPEL_FROM_HELI(a_0, 0x41200000);
	static void TASK_RAPPEL_FROM_HELI(Ped ped, float p1) { return invoke<void>(0x09693B0312F91649, ped, p1); } // 0x09693B0312F91649 0x2C7ADB93 b323
	 // info about driving modes: HTTP://gtaforums.com/topic/822314-guide-driving-styles/
	 // ---------------------------------------------------------------
	 // Passing P6 value as floating value didn't throw any errors, though unsure what is it exactly, looks like radius or something.
	 // 
	 // P10 though, it is mentioned as float, however, I used bool and set it to true, that too worked.
	 // Here the e.g. code I used
	 // Function.Call(Hash.TASK_VEHICLE_DRIVE_TO_COORD, Ped, Vehicle, Cor X, Cor Y, Cor Z, 30f, 1f, Vehicle.GetHashCode(), 16777216, 1f, true);
	static void TASK_VEHICLE_DRIVE_TO_COORD(Ped ped, Vehicle vehicle, float x, float y, float z, float speed, Any p6, Hash vehicleModel, int drivingMode, float stopRange, float p10) { return invoke<void>(0xE2A2AA2F659D77A7, ped, vehicle, x, y, z, speed, p6, vehicleModel, drivingMode, stopRange, p10); } // 0xE2A2AA2F659D77A7 0xE4AC0387 b323
	static void TASK_VEHICLE_DRIVE_TO_COORD_LONGRANGE(Ped ped, Vehicle vehicle, float x, float y, float z, float speed, int driveMode, float stopRange) { return invoke<void>(0x158BB33F920D360C, ped, vehicle, x, y, z, speed, driveMode, stopRange); } // 0x158BB33F920D360C 0x1490182A b323
	static void TASK_VEHICLE_DRIVE_WANDER(Ped ped, Vehicle vehicle, float speed, int drivingStyle) { return invoke<void>(0x480142959D337D00, ped, vehicle, speed, drivingStyle); } // 0x480142959D337D00 0x36EC0EB0 b323
	 // p6 always -1
	 // p7 always 10.0
	 // p8 always 1
	static void TASK_FOLLOW_TO_OFFSET_OF_ENTITY(Ped ped, Entity entity, float offsetX, float offsetY, float offsetZ, float movementSpeed, int timeout, float stoppingRange, BOOL persistFollowing) { return invoke<void>(0x304AE42E357B8C7E, ped, entity, offsetX, offsetY, offsetZ, movementSpeed, timeout, stoppingRange, persistFollowing); } // 0x304AE42E357B8C7E 0x2DF5A6AC b323
	static void TASK_GO_STRAIGHT_TO_COORD(Ped ped, float x, float y, float z, float speed, int timeout, float targetHeading, float distanceToSlide) { return invoke<void>(0xD76B57B44F1E6F8B, ped, x, y, z, speed, timeout, targetHeading, distanceToSlide); } // 0xD76B57B44F1E6F8B 0x80A9E7A7 b323
	static void TASK_GO_STRAIGHT_TO_COORD_RELATIVE_TO_ENTITY(Entity entity1, Entity entity2, float p2, float p3, float p4, float p5, Any p6) { return invoke<void>(0x61E360B7E040D12E, entity1, entity2, p2, p3, p4, p5, p6); } // 0x61E360B7E040D12E 0xD26CAC68 b323
	 // Makes the specified ped achieve the specified heading.
	 // 
	 // pedHandle: The handle of the ped to assign the task to.
	 // heading: The desired heading.
	 // timeout: The time, in milliseconds, to allow the task to complete. If the task times out, it is cancelled, and the ped will stay at the heading it managed to reach in the time.
	static void TASK_ACHIEVE_HEADING(Ped ped, float heading, int timeout) { return invoke<void>(0x93B93A37987F1F3D, ped, heading, timeout); } // 0x93B93A37987F1F3D 0x0A0E9B42 b323
	 // MulleKD19: Clears the current point route. Call this before TASK_EXTEND_ROUTE and TASK_FOLLOW_POINT_ROUTE.
	static void TASK_FLUSH_ROUTE() { return invoke<void>(0x841142A1376E9006); } // 0x841142A1376E9006 0x34219154 b323
	 // MulleKD19: Adds a new point to the current point route. Call TASK_FLUSH_ROUTE before the first call to this. Call TASK_FOLLOW_POINT_ROUTE to make the Ped go the route.
	 // 
	 // A maximum of 8 points can be added.
	static void TASK_EXTEND_ROUTE(float x, float y, float z) { return invoke<void>(0x1E7889778264843A, x, y, z); } // 0x1E7889778264843A 0x43271F69 b323
	 // MulleKD19: Makes the ped go on the created point route.
	 // 
	 // ped: The ped to give the task to.
	 // speed: The speed to move at in m/s.
	 // int: Unknown. Can be 0, 1, 2 or 3.
	 // 
	 // Example:
	 // TASK_FLUSH_ROUTE();
	 // TASK_EXTEND_ROUTE(0f, 0f, 70f);
	 // TASK_EXTEND_ROUTE(10f, 0f, 70f);
	 // TASK_EXTEND_ROUTE(10f, 10f, 70f);
	 // TASK_FOLLOW_POINT_ROUTE(GET_PLAYER_PED(), 1f, 0);
	static void TASK_FOLLOW_POINT_ROUTE(Ped ped, float speed, int unknown) { return invoke<void>(0x595583281858626E, ped, speed, unknown); } // 0x595583281858626E 0xB837C816 b323
	 // The entity will move towards the target until time is over (duration) or get in target's range (distance). p5 and p6 are unknown, but you could leave p5 = 1073741824 or 100 or even 0 (didn't see any difference but on the decompiled scripts, they use 1073741824 mostly) and p6 = 0
	 // 
	 // Note: I've only tested it on entity -> ped and target -> vehicle. It could work differently on other entities, didn't try it yet.
	 // 
	 // Example: AI::TASK_GO_TO_ENTITY(pedHandle, vehicleHandle, 5000, 4.0, 100, 1073741824, 0)
	 // 
	 // Ped will run towards the vehicle for 5 seconds and stop when time is over or when he gets 4 meters(?) around the vehicle (with duration = -1, the task duration will be ignored).
	static void TASK_GO_TO_ENTITY(Entity entity, Entity target, int duration, float distance, float speed, float p5, int p6) { return invoke<void>(0x6A071245EB0D1882, entity, target, duration, distance, speed, p5, p6); } // 0x6A071245EB0D1882 0x374827C2 b323
	 // Makes the specified ped flee the specified distance from the specified position.
	static void TASK_SMART_FLEE_COORD(Ped ped, float x, float y, float z, float distance, int time, BOOL p6, BOOL p7) { return invoke<void>(0x94587F17E9C365D5, ped, x, y, z, distance, time, p6, p7); } // 0x94587F17E9C365D5 0xB2E686FC b323
	 // Makes a ped run away from another ped (fleeTarget).
	 // 
	 // distance = ped will flee this distance.
	 // fleeTime = ped will flee for this amount of time, set to "-1" to flee forever
	static void TASK_SMART_FLEE_PED(Ped ped, Ped fleeTarget, float distance, Any fleeTime, BOOL p4, BOOL p5) { return invoke<void>(0x22B0D0E37CCB840D, ped, fleeTarget, distance, fleeTime, p4, p5); } // 0x22B0D0E37CCB840D 0xE52EB560 b323
	static void TASK_WANDER_IN_AREA(Ped ped, float x, float y, float z, float radius, float minimalLength, float timeBetweenWalks) { return invoke<void>(0xE054346CA3A0F315, ped, x, y, z, radius, minimalLength, timeBetweenWalks); } // 0xE054346CA3A0F315 0xC6981FB9 b323
	 // Makes ped walk around the area.
	 // 
	 // set p1 to 10.0f and p2 to 10 if you want the ped to walk anywhere without a duration.
	static void TASK_WANDER_STANDARD(Ped ped, float p1, int p2) { return invoke<void>(0xBB9CE077274F6A1B, ped, p1, p2); } // 0xBB9CE077274F6A1B 0xAF59151A b323
	 // Modes:
	 // 0 - ignore heading
	 // 1 - park forward
	 // 2 - park backwards
	 // 
	 // Depending on the angle of approach, the vehicle can park at the specified heading or at its exact opposite (-180) angle.
	 // 
	 // Radius seems to define how close the vehicle has to be -after parking- to the position for this task considered completed. If the value is too small, the vehicle will try to park again until it's exactly where it should be. 20.0 Works well but lower values don't, like the radius is measured in centimeters or something.
	static void TASK_VEHICLE_PARK(Ped ped, Vehicle vehicle, float x, float y, float z, float heading, int mode, float radius, BOOL keepEngineOn) { return invoke<void>(0x0F3E34E968EA374E, ped, vehicle, x, y, z, heading, mode, radius, keepEngineOn); } // 0x0F3E34E968EA374E 0x5C85FF90 b323
	 // If no timeout, set timeout to -1.
	static void TASK_FOLLOW_NAV_MESH_TO_COORD(Ped ped, float x, float y, float z, float speed, int timeout, float stoppingRange, BOOL persistFollowing, float unk) { return invoke<void>(0x15D3A79D4E44B913, ped, x, y, z, speed, timeout, stoppingRange, persistFollowing, unk); } // 0x15D3A79D4E44B913 0xFE4A10D9 b323
	static void TASK_FOLLOW_NAV_MESH_TO_COORD_ADVANCED(Ped ped, float x, float y, float z, float speed, int timeout, float unkFloat, int unkInt, float unkX, float unkY, float unkZ, float unk_40000f) { return invoke<void>(0x17F58B88D085DBAC, ped, x, y, z, speed, timeout, unkFloat, unkInt, unkX, unkY, unkZ, unk_40000f); } // 0x17F58B88D085DBAC 0x6BF6E296 b323
	static void SET_PED_PATH_CAN_USE_CLIMBOVERS(Ped ped, BOOL Toggle) { return invoke<void>(0x8E06A6FE76C9EFF4, ped, Toggle); } // 0x8E06A6FE76C9EFF4 0xB7B7D442 b323
	static void SET_PED_PATH_CAN_DROP_FROM_HEIGHT(Ped ped, BOOL Toggle) { return invoke<void>(0xE361C5C71C431A4F, ped, Toggle); } // 0xE361C5C71C431A4F 0x394B7AC9 b323
	static void SET_PED_PATH_PREFER_TO_AVOID_WATER(Ped ped, BOOL avoidWater) { return invoke<void>(0x38FE1EC73743793C, ped, avoidWater); } // 0x38FE1EC73743793C 0x0EA39A29 b323
	static void SET_PED_PATH_AVOID_FIRE(Ped ped, BOOL avoidFire) { return invoke<void>(0x4455517B28441E60, ped, avoidFire); } // 0x4455517B28441E60 0xDCC5B934 b323
	static Any GET_NAVMESH_ROUTE_DISTANCE_REMAINING(Ped ped, Any* p1, Any* p2) { return invoke<Any>(0xC6F5C0BCDC74D62D, ped, p1, p2); } // 0xC6F5C0BCDC74D62D 0xD9281778 b323
	static int GET_NAVMESH_ROUTE_RESULT(Ped ped) { return invoke<int>(0x632E831F382A0FA8, ped); } // 0x632E831F382A0FA8 0x96491602 b323
	 // example from fm_mission_controller
	 // 
	 // AI::TASK_GO_TO_COORD_ANY_MEANS(l_649, sub_f7e86(-1, 0), 1.0, 0, 0, 786603, 0xbf800000);
	 //  
	static void TASK_GO_TO_COORD_ANY_MEANS(Ped ped, float x, float y, float z, float speed, Any p5, BOOL p6, int walkingStyle, float p8) { return invoke<void>(0x5BC448CB78FA3E88, ped, x, y, z, speed, p5, p6, walkingStyle, p8); } // 0x5BC448CB78FA3E88 0xF91DF93B b323
	static void TASK_GO_TO_COORD_ANY_MEANS_EXTRA_PARAMS_WITH_CRUISE_SPEED(Ped ped, float x, float y, float z, float speed, Any p5, BOOL p6, int walkingStyle, float p8, Any p9, Any p10, Any p11, Any p12, Any p13) { return invoke<void>(0xB8ECD61F531A7B02, ped, x, y, z, speed, p5, p6, walkingStyle, p8, p9, p10, p11, p12, p13); } // 0xB8ECD61F531A7B02 0x86DC03F9 b323
	 // Animations List : www.ls-multiplayer.com/dev/index.php?section=3
	 // 
	 // float speed > normal speed is 8.0f
	 // ----------------------
	 // 
	 // float speedMultiplier > multiply the playback speed
	 // ----------------------
	 // 
	 // int duration: time in millisecond
	 // ----------------------
	 // -1 _ _ _ _ _ _ _> Default (see flag)
	 // 0 _ _ _ _ _ _ _ > Not play at all
	 // Small value _ _ > Slow down animation speed
	 // Other _ _ _ _ _ > freeze player control until specific time (ms) has 
	 // _ _ _ _ _ _ _ _ _ passed. (No effect if flag is set to be 
	 // _ _ _ _ _ _ _ _ _ controllable.)
	 // 
	 // int flag:
	 // ----------------------
	 // enum eAnimationFlags
	 // {
	 //  ANIM_FLAG_NORMAL = 0,
	 //    ANIM_FLAG_REPEAT = 1,
	 //    ANIM_FLAG_STOP_LAST_FRAME = 2,
	 //    ANIM_FLAG_UPPERBODY = 16,
	 //    ANIM_FLAG_ENABLE_PLAYER_CONTROL = 32,
	 //    ANIM_FLAG_CANCELABLE = 120,
	 // };
	 // Odd number : loop infinitely
	 // Even number : Freeze at last frame
	 // Multiple of 4: Freeze at last frame but controllable
	 // 
	 // 01 to 15 > Full body
	 // 10 to 31 > Upper body
	 // 32 to 47 > Full body > Controllable
	 // 48 to 63 > Upper body > Controllable
	 // ...
	 // 001 to 255 > Normal
	 // 256 to 511 > Garbled
	 // ...
	 // 
	 // playbackRate:
	 // 
	 // values are between 0.0 and 1.0
	 // 
	 // 
	 // lockX:  
	 // 
	 // 0 in most cases 1 for rcmepsilonism8 and rcmpaparazzo_3
	 // > 1 for mini@sprunk
	 //  
	 // 
	 // lockY:
	 // 
	 // 0 in most cases 
	 // 1 for missfam5_yoga, missfra1mcs_2_crew_react
	 // 
	 // 
	 // lockZ: 
	 // 
	 //     0 for single player 
	 //     Can be 1 but only for MP 
	static void TASK_PLAY_ANIM(Ped ped, const char* animDictionary, const char* animationName, float speed, float speedMultiplier, int duration, int flag, float playbackRate, BOOL lockX, BOOL lockY, BOOL lockZ) { return invoke<void>(0xEA47FE3719165B94, ped, animDictionary, animationName, speed, speedMultiplier, duration, flag, playbackRate, lockX, lockY, lockZ); } // 0xEA47FE3719165B94 0x5AB552C6 b323
	 // It's similar to the one above, except the first 6 floats let you specify the initial position and rotation of the task. (Ped gets teleported to the position). animTime is a float from 0.0 -> 1.0, lets you start an animation from given point. The rest as in AI::TASK_PLAY_ANIM. 
	 // 
	 // Rotation information : rotX and rotY don't seem to have any effect, only rotZ works.
	 // 
	 // Animations List : www.ls-multiplayer.com/dev/index.php?section=3
	static void TASK_PLAY_ANIM_ADVANCED(Ped ped, const char* animDict, const char* animName, float posX, float posY, float posZ, float rotX, float rotY, float rotZ, float speed, float speedMultiplier, int duration, Any flag, float animTime, Any p14, Any p15) { return invoke<void>(0x83CDB10EA29B370B, ped, animDict, animName, posX, posY, posZ, rotX, rotY, rotZ, speed, speedMultiplier, duration, flag, animTime, p14, p15); } // 0x83CDB10EA29B370B 0x3DDEB0E6 b323
	static void STOP_ANIM_TASK(Ped ped, const char* animDictionary, const char* animationName, float p3) { return invoke<void>(0x97FF36A1D40EA00A, ped, animDictionary, animationName, p3); } // 0x97FF36A1D40EA00A 0x2B520A57 b323
	 // From fm_mission_controller.c:
	 // reserve_network_mission_objects(get_num_reserved_mission_objects(0) + 1);
	 //            vVar28 = {0.094f, 0.02f, -0.005f};
	 //             vVar29 = {-92.24f, 63.64f, 150.24f};
	 //           func_253(&uVar30, joaat("prop_ld_case_01"), Global_1592429.imm_34757[iParam1 <268>], 1, 1, 0, 1);
	 //          set_entity_lod_dist(net_to_ent(uVar30), 500);
	 //          attach_entity_to_entity(net_to_ent(uVar30), iParam0, get_ped_bone_index(iParam0, 28422), vVar28, vVar29, 1, 0, 0, 0, 2, 1);
	 //            Var31.imm_4 = 1065353216;
	 //          Var31.imm_5 = 1065353216;
	 //          Var31.imm_9 = 1065353216;
	 //          Var31.imm_10 = 1065353216;
	 //             Var31.imm_14 = 1065353216;
	 //             Var31.imm_15 = 1065353216;
	 //             Var31.imm_17 = 1040187392;
	 //             Var31.imm_18 = 1040187392;
	 //             Var31.imm_19 = -1;
	 //             Var32.imm_4 = 1065353216;
	 //          Var32.imm_5 = 1065353216;
	 //          Var32.imm_9 = 1065353216;
	 //          Var32.imm_10 = 1065353216;
	 //             Var32.imm_14 = 1065353216;
	 //             Var32.imm_15 = 1065353216;
	 //             Var32.imm_17 = 1040187392;
	 //             Var32.imm_18 = 1040187392;
	 //             Var32.imm_19 = -1;
	 //             Var31 = 1;
	 //             Var31.imm_1 = "weapons@misc@jerrycan@mp_male";
	 //           Var31.imm_2 = "idle";
	 //            Var31.imm_20 = 1048633;
	 //            Var31.imm_4 = 0.5f;
	 //            Var31.imm_16 = get_hash_key("BONEMASK_ARMONLY_R");
	 //           task_scripted_animation(iParam0, &Var31, &Var32, &Var32, 0f, 0.25f);
	 //           set_model_as_no_longer_needed(joaat("prop_ld_case_01"));
	 //             remove_anim_dict("anim@heists@biolab@");
	static void TASK_SCRIPTED_ANIMATION(Ped ped, Any* p1, Any* p2, Any* p3, float p4, float p5) { return invoke<void>(0x126EF75F1E17ABE5, ped, p1, p2, p3, p4, p5); } // 0x126EF75F1E17ABE5 0xFC2DCF47 b323
	static void PLAY_ENTITY_SCRIPTED_ANIM(Any p0, Any* p1, Any* p2, Any* p3, float p4, float p5) { return invoke<void>(0x77A1EEC547E7FCF1, p0, p1, p2, p3, p4, p5); } // 0x77A1EEC547E7FCF1 0x02F72AE5 b323
	static void STOP_ANIM_PLAYBACK(Ped ped, int p1, BOOL p2) { return invoke<void>(0xEE08C992D238C5D1, ped, p1, p2); } // 0xEE08C992D238C5D1 0xE5F16398 b323
	 // Most probably plays a specific animation on vehicle. For example getting chop out of van etc...
	 // 
	 // Here's how its used - 
	 // 
	 // AI::TASK_VEHICLE_PLAY_ANIM(l_325, "rcmnigel1b", "idle_speedo");
	 // 
	 // AI::TASK_VEHICLE_PLAY_ANIM(l_556[0/*1*/], "missfra0_chop_drhome", "InCar_GetOutofBack_Speedo");
	 // 
	 // FYI : Speedo is the name of van in which chop was put in the mission.
	static void TASK_VEHICLE_PLAY_ANIM(Vehicle vehicle, const char* animation_set, const char* animation_name) { return invoke<void>(0x69F5C3BD0F3EBD89, vehicle, animation_set, animation_name); } // 0x69F5C3BD0F3EBD89 0x2B28F598 b323
	 // p5 = 0, p6 = 2
	static void TASK_LOOK_AT_COORD(Entity entity, float x, float y, float z, int duration, Any p5, Any p6) { return invoke<void>(0x6FA46612594F7973, entity, x, y, z, duration, p5, p6); } // 0x6FA46612594F7973 0x7B784DD8 b323
	 // param3: duration in ms, use -1 to look forever
	 // param4: using 2048 is fine
	 // param5: using 3 is fine
	static void TASK_LOOK_AT_ENTITY(Ped ped, Entity lookAt, int duration, int unknown1, int unknown2) { return invoke<void>(0x69F4BE8C8CC4796C, ped, lookAt, duration, unknown1, unknown2); } // 0x69F4BE8C8CC4796C 0x991D6619 b323
	 // Not clear what it actually does, but here's how script uses it - 
	 // 
	 // if (OBJECT::HAS_PICKUP_BEEN_COLLECTED(...) 
	 // {
	 //  if(ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	 //     {
	 //      AI::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
	 //   }
	 //  ...
	 // }
	 // 
	 // Another one where it doesn't "look" at current player - 
	 // 
	 // AI::TASK_PLAY_ANIM(l_3ED, "missheist_agency2aig_2", "look_at_phone_a", 1000.0, -2.0, -1, 48, v_2, 0, 0, 0);
	 // PED::_2208438012482A1A(l_3ED, 0, 0);
	 // AI::TASK_CLEAR_LOOK_AT(l_3ED);
	static void TASK_CLEAR_LOOK_AT(Ped ped) { return invoke<void>(0x0F804F1DB19B9689, ped); } // 0x0F804F1DB19B9689 0x60EB4054 b323
	static void OPEN_SEQUENCE_TASK(int* taskSequenceId) { return invoke<void>(0xE8854A4326B9E12B, taskSequenceId); } // 0xE8854A4326B9E12B 0xABA6923E b323
	static void CLOSE_SEQUENCE_TASK(int taskSequenceId) { return invoke<void>(0x39E72BC99E6360CB, taskSequenceId); } // 0x39E72BC99E6360CB 0x1A7CEBD0 b323
	static void TASK_PERFORM_SEQUENCE(Ped ped, int taskSequenceId) { return invoke<void>(0x5ABA3986D90D8A3B, ped, taskSequenceId); } // 0x5ABA3986D90D8A3B 0x4D9FBD11 b323
	static void CLEAR_SEQUENCE_TASK(int* taskSequenceId) { return invoke<void>(0x3841422E9C488D8C, taskSequenceId); } // 0x3841422E9C488D8C 0x47ED03CE b323
	static void SET_SEQUENCE_TO_REPEAT(int taskSequenceId, BOOL repeat) { return invoke<void>(0x58C70CF3A41E4AE7, taskSequenceId, repeat); } // 0x58C70CF3A41E4AE7 0xCDDF1508 b323
	 // returned values:
	 // 0 to 7 = task that's currently in progress, 0 meaning the first one.
	 // -1 no task sequence in progress.
	static int GET_SEQUENCE_PROGRESS(Ped ped) { return invoke<int>(0x00A9010CFE1E3533, ped); } // 0x00A9010CFE1E3533 0xA3419909 b323
	 // Task index enum: https://alloc8or.re/gta5/doc/enums/eTaskTypeIndex.txt
	static BOOL GET_IS_TASK_ACTIVE(Ped ped, int taskIndex) { return invoke<BOOL>(0xB0760331C7AA4155, ped, taskIndex); } // 0xB0760331C7AA4155 0x86FDDF55 b323
	 // Gets the status of a script-assigned task.
	 // taskHash: https://alloc8or.re/gta5/doc/enums/eScriptTaskHash.txt
	static int GET_SCRIPT_TASK_STATUS(Ped ped, Hash taskHash) { return invoke<int>(0x77F1BEB8863288D5, ped, taskHash); } // 0x77F1BEB8863288D5 0xB2477B23 b323
	 // https://alloc8or.re/gta5/doc/enums/eVehicleMissionType.txt
	static int GET_ACTIVE_VEHICLE_MISSION_TYPE(Vehicle vehicle) { return invoke<int>(0x534AEBA6E5ED4CAB, vehicle); } // 0x534AEBA6E5ED4CAB 0xAFA914EF b323
	static void TASK_LEAVE_ANY_VEHICLE(Ped ped, int p1, int p2) { return invoke<void>(0x504D54DF3F6F2247, ped, p1, p2); } // 0x504D54DF3F6F2247 0xDBDD79FA b323
	 // duration: the amount of time in milliseconds to do the task.  -1 will keep the task going until either another task is applied, or CLEAR_ALL_TASKS() is called with the ped
	static void TASK_AIM_GUN_AT_ENTITY(Ped ped, Entity entity, int duration, BOOL p3) { return invoke<void>(0x9B53BB6E8943AF53, ped, entity, duration, p3); } // 0x9B53BB6E8943AF53 0xBE32B3B6 b323
	 // duration: the amount of time in milliseconds to do the task. -1 will keep the task going until either another task is applied, or CLEAR_ALL_TASKS() is called with the ped
	static void TASK_TURN_PED_TO_FACE_ENTITY(Ped ped, Entity entity, int duration) { return invoke<void>(0x5AD23D40115353AC, ped, entity, duration); } // 0x5AD23D40115353AC 0x3C37C767 b323
	 // 
	 // 
	static void TASK_AIM_GUN_AT_COORD(Ped ped, float x, float y, float z, int time, BOOL p5, BOOL p6) { return invoke<void>(0x6671F3EEC681BDA1, ped, x, y, z, time, p5, p6); } // 0x6671F3EEC681BDA1 0xFBF44AD3 b323
	static void TASK_SHOOT_AT_COORD(Ped ped, float x, float y, float z, int duration, Hash firingPattern) { return invoke<void>(0x46A6CC01E0826106, ped, x, y, z, duration, firingPattern); } // 0x46A6CC01E0826106 0x601C22E3 b323
	 // Makes the specified ped shuffle to the next vehicle seat.
	 // The ped MUST be in a vehicle and the vehicle parameter MUST be the ped's current vehicle.
	static void TASK_SHUFFLE_TO_NEXT_VEHICLE_SEAT(Ped ped, Vehicle vehicle, Any p2) { return invoke<void>(0x7AA80209BDA643EB, ped, vehicle, p2); } // 0x7AA80209BDA643EB 0xBEAF8F67 b323
	static void CLEAR_PED_TASKS(Ped ped) { return invoke<void>(0xE1EF3C1216AFF2CD, ped); } // 0xE1EF3C1216AFF2CD 0xDE3316AB b323
	static void CLEAR_PED_SECONDARY_TASK(Ped ped) { return invoke<void>(0x176CECF6F920D707, ped); } // 0x176CECF6F920D707 0xA635F451 b323
	static void TASK_EVERYONE_LEAVE_VEHICLE(Vehicle vehicle) { return invoke<void>(0x7F93691AB4B92272, vehicle); } // 0x7F93691AB4B92272 0xC1971F30 b323
	static void TASK_GOTO_ENTITY_OFFSET(Ped ped, Any p1, Any p2, float x, float y, float z, int duration) { return invoke<void>(0xE39B4FF4FDEBDE27, ped, p1, p2, x, y, z, duration); } // 0xE39B4FF4FDEBDE27 0x1A17A85E b323
	static void TASK_GOTO_ENTITY_OFFSET_XY(int p0, Ped oed, int duration, float p3, float p4, float p5, float p6, BOOL p7) { return invoke<void>(0x338E7EF52B6095A9, p0, oed, duration, p3, p4, p5, p6, p7); } // 0x338E7EF52B6095A9 0xBC1E3D0A b323
	 // duration in milliseconds
	static void TASK_TURN_PED_TO_FACE_COORD(Ped ped, float x, float y, float z, int duration) { return invoke<void>(0x1DDA930A0AC38571, ped, x, y, z, duration); } // 0x1DDA930A0AC38571 0x30463D73 b323
	 // '1 - brake
	 // '3 - brake + reverse
	 // '4 - turn left 90 + braking
	 // '5 - turn right 90 + braking
	 // '6 - brake strong (handbrake?) until time ends
	 // '7 - turn left + accelerate
	 // '7 - turn right + accelerate
	 // '9 - weak acceleration
	 // '10 - turn left + restore wheel pos to center in the end
	 // '11 - turn right + restore wheel pos to center in the end
	 // '13 - turn left + go reverse
	 // '14 - turn left + go reverse
	 // '16 - crash the game after like 2 seconds :)
	 // '17 - keep actual state, game crashed after few tries
	 // '18 - game crash
	 // '19 - strong brake + turn left/right
	 // '20 - weak brake + turn left then turn right
	 // '21 - weak brake + turn right then turn left
	 // '22 - brake + reverse
	 // '23 - accelerate fast
	 // '24 - brake
	 // '25 - brake turning left then when almost stopping it turns left more
	 // '26 - brake turning right then when almost stopping it turns right more
	 // '27 - brake until car stop or until time ends
	 // '28 - brake + strong reverse acceleration
	 // '30 - performs a burnout (brake until stop + brake and accelerate)
	 // '31 - accelerate + handbrake
	 // '32 - accelerate very strong
	 // 
	 // Seems to be this:
	 // Works on NPCs, but overrides their current task. If inside a task sequence (and not being the last task), "time" will work, otherwise the task will be performed forever until tasked with something else
	static void TASK_VEHICLE_TEMP_ACTION(Ped driver, Vehicle vehicle, int action, int time) { return invoke<void>(0xC429DCEEB339E129, driver, vehicle, action, time); } // 0xC429DCEEB339E129 0x0679DFB8 b323
	 // missionType: https://alloc8or.re/gta5/doc/enums/eVehicleMissionType.txt
	static void TASK_VEHICLE_MISSION(Ped driver, Vehicle vehicle, Vehicle vehicleTarget, int missionType, float p4, Any p5, float p6, float p7, BOOL DriveAgainstTraffic) { return invoke<void>(0x659427E0EF36BCDE, driver, vehicle, vehicleTarget, missionType, p4, p5, p6, p7, DriveAgainstTraffic); } // 0x659427E0EF36BCDE 0x20609E56 b323
	 // See TASK_VEHICLE_MISSION
	static void TASK_VEHICLE_MISSION_PED_TARGET(Ped ped, Vehicle vehicle, Ped pedTarget, int missionType, float maxSpeed, int drivingStyle, float minDistance, float p7, BOOL DriveAgainstTraffic) { return invoke<void>(0x9454528DF15D657A, ped, vehicle, pedTarget, missionType, maxSpeed, drivingStyle, minDistance, p7, DriveAgainstTraffic); } // 0x9454528DF15D657A 0xC81C4677 b323
	 // See TASK_VEHICLE_MISSION
	static void TASK_VEHICLE_MISSION_COORS_TARGET(Ped ped, Vehicle vehicle, float x, float y, float z, int p5, int p6, int p7, float p8, float p9, BOOL DriveAgainstTraffic) { return invoke<void>(0xF0AF20AA7731F8C3, ped, vehicle, x, y, z, p5, p6, p7, p8, p9, DriveAgainstTraffic); } // 0xF0AF20AA7731F8C3 0x6719C109 b323
	 // Makes a ped follow the targetVehicle with <minDistance> in between.
	 // 
	 // note: minDistance is ignored if drivingstyle is avoiding traffic, but Rushed is fine.
	 // 
	 // Mode: The mode defines the relative position to the targetVehicle. The ped will try to position its vehicle there.
	 // -1 = behind
	 // 0 = ahead
	 // 1 = left
	 // 2 = right
	 // 3 = back left
	 // 4 = back right
	 // 
	 // if the target is closer than noRoadsDistance, the driver will ignore pathing/roads and follow you directly.
	 // 
	 // Driving Styles guide: gtaforums.com/topic/822314-guide-driving-styles/
	static void TASK_VEHICLE_ESCORT(Ped ped, Vehicle vehicle, Vehicle targetVehicle, int mode, float speed, int drivingStyle, float minDistance, int p7, float noRoadsDistance) { return invoke<void>(0x0FA6E4B75F302400, ped, vehicle, targetVehicle, mode, speed, drivingStyle, minDistance, p7, noRoadsDistance); } // 0x0FA6E4B75F302400 0x9FDCB250 b323
	 // chases targetEnt fast and aggressively
	 // --
	 // Makes ped (needs to be in vehicle) chase targetEnt.
	static void TASK_VEHICLE_CHASE(Ped driver, Entity targetEnt) { return invoke<void>(0x3C08A8E30363B353, driver, targetEnt); } // 0x3C08A8E30363B353 0x55634798 b323
	static void SET_TASK_VEHICLE_CHASE_BEHAVIOR_FLAG(Ped ped, int flag, BOOL set) { return invoke<void>(0xCC665AAC360D31E7, ped, flag, set); } // 0xCC665AAC360D31E7 0x2A83083F b323
	 // Needs more research.
	 // 
	 // Default value of p13 is -1.0 or 0xBF800000.
	 // Default value of p14 is 0.
	 // 
	 // Modified examples from "fm_mission_controller.ysc", line ~203551:
	 // AI::TASK_HELI_MISSION(ped, vehicle, 0, 0, posX, posY, posZ, 4, 1.0, -1.0, -1.0, 10, 10, 5.0, 0);
	 // AI::TASK_HELI_MISSION(ped, vehicle, 0, 0, posX, posY, posZ, 4, 1.0, -1.0, -1.0, 0, ?, 5.0, 4096);
	 // 
	 // int mode seams to set mission type 4 = coords target, 23 = ped target.
	 // int 14 set to 32 = ped will land at destination.
	 // 
	 // My findings:
	 // mode 4 or 7 forces heli to snap to the heading set
	 // 8 makes the heli flee from the ped.
	 // 9 circles around ped with angle set
	 // 10, 11 normal + imitate ped heading
	 // 20 makes the heli land when he's near the ped. It won't resume chasing.
	 // 21 emulates an helicopter crash
	 // 23 makes the heli circle erratically around ped
	 // 
	 // I change p2 to 'vehicleToFollow' as it seems to work like the task natives to set targets. In the heli_taxi script where as the merryweather heli takes you to your waypoint it has no need to follow a vehicle or a ped, so of course both have 0 set.
	static void TASK_HELI_MISSION(Ped pilot, Vehicle aircraft, Vehicle targetVehicle, Ped targetPed, float destinationX, float destinationY, float destinationZ, int missionFlag, float maxSpeed, float landingRadius, float targetHeading, int unk1, int unk2, Hash unk3, int landingFlags) { return invoke<void>(0xDAD029E187A2BEB4, pilot, aircraft, targetVehicle, targetPed, destinationX, destinationY, destinationZ, missionFlag, maxSpeed, landingRadius, targetHeading, unk1, unk2, unk3, landingFlags); } // 0xDAD029E187A2BEB4 0x0C143E97 b323
	 // EXAMPLE USAGE:
	 // 
	 // Fly around target (Precautiously, keeps high altitude):
	 // Function.Call(Hash.TASK_PLANE_MISSION, pilot, selectedAirplane, 0, 0, Target.X, Target.Y, Target.Z, 4, 100f, 0f, 90f, 0, 200f);
	 // 
	 // Fly around target (Dangerously, keeps VERY low altitude):
	 // Function.Call(Hash.TASK_PLANE_MISSION, pilot, selectedAirplane, 0, 0, Target.X, Target.Y, Target.Z, 4, 100f, 0f, 90f, 0, -500f);
	 // 
	 // Fly directly into target:
	 // Function.Call(Hash.TASK_PLANE_MISSION, pilot, selectedAirplane, 0, 0, Target.X, Target.Y, Target.Z, 4, 100f, 0f, 90f, 0, -5000f);
	 // 
	 // EXPANDED INFORMATION FOR ADVANCED USAGE (custom pilot)
	 // 
	 // 'physicsSpeed': (THIS IS NOT YOUR ORDINARY SPEED PARAMETER: READ!!)
	 // Think of this -first- as a radius value, not a true speed value.  The ACTUAL effective speed of the plane will be that of the maximum speed permissible to successfully fly in a -circle- with a radius of 'physicsSpeed'.  This also means that the plane must complete a circle before it can begin its "bombing run", its straight line pass towards the target.  p9 appears to influence the angle at which a "bombing run" begins, although I can't confirm yet.
	 // 
	 // VERY IMPORTANT: A "bombing run" will only occur if a plane can successfully determine a possible navigable route (the slower the value of 'physicsSpeed', the more precise the pilot can be due to less influence of physics on flightpath).  Otherwise, the pilot will continue to patrol around Destination (be it a dynamic Entity position vector or a fixed world coordinate vector.)
	 // 
	 // 0 = Plane's physics are almost entirely frozen, plane appears to "orbit" around precise destination point
	 // 1-299 = Blend of "frozen, small radius" vs. normal vs. "accelerated, hyperfast, large radius"
	 // 300+ =  Vehicle behaves entirely like a normal gameplay plane.
	 // 
	 // 'patrolBlend' (The lower the value, the more the Destination is treated as a "fly AT" rather than a "fly AROUND point".)
	 // 
	 // Scenario: Destination is an Entity on ground level, wide open field
	 // -5000 = Pilot kamikazes directly into Entity
	 // -1000 = Pilot flies extremely low -around- Entity, very prone to crashing
	 // -200 = Pilot flies lower than average around Entity.
	 // 0 = Pilot flies around Entity, normal altitude
	 // 200 = Pilot flies an extra eighty units or so higher than 0 while flying around Destination (this doesn't seem to correlate directly into distance units.)
	 // 
	 // -- Valid mission types found in the exe: --
	 // 
	 // 0 = None
	 // 1 = Unk
	 // 2 = CTaskVehicleRam
	 // 3 = CTaskVehicleBlock
	 // 4 = CTaskVehicleGoToPlane
	 // 5 = CTaskVehicleStop
	 // 6 = CTaskVehicleAttack
	 // 7 = CTaskVehicleFollow
	 // 8 = CTaskVehicleFleeAirborne
	 // 9= CTaskVehicleCircle
	 // 10 = CTaskVehicleEscort
	 // 15 = CTaskVehicleFollowRecording
	 // 16 = CTaskVehiclePoliceBehaviour
	 // 17 = CTaskVehicleCrash
	static void TASK_PLANE_MISSION(Ped pilot, Vehicle aircraft, Vehicle targetVehicle, Ped targetPed, float destinationX, float destinationY, float destinationZ, int missionFlag, float angularDrag, float unk, float targetHeading, float maxZ, float minZ, Any p13) { return invoke<void>(0x23703CD154E83B88, pilot, aircraft, targetVehicle, targetPed, destinationX, destinationY, destinationZ, missionFlag, angularDrag, unk, targetHeading, maxZ, minZ, p13); } // 0x23703CD154E83B88 0x1D007E65 b323
	 // You need to call PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS after TASK_BOAT_MISSION in order for the task to execute.
	 // 
	 // Working example
	 // float vehicleMaxSpeed = VEHICLE::_GET_VEHICLE_MAX_SPEED(ENTITY::GET_ENTITY_MODEL(pedVehicle));
	 // AI::TASK_BOAT_MISSION(pedDriver, pedVehicle, 0, 0, waypointCoord.x, waypointCoord.y, waypointCoord.z, 4, vehicleMaxSpeed, 786469, -1.0, 7);
	 // PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(pedDriver, 1);
	 // 
	 // P8 appears to be driving style flag - see gtaforums.com/topic/822314-guide-driving-styles/ for documentation
	static void TASK_BOAT_MISSION(Ped pedDriver, Vehicle boat, Any p2, Any p3, float x, float y, float z, Any p7, float maxSpeed, int drivingStyle, float p10, Any p11) { return invoke<void>(0x15C86013127CE63F, pedDriver, boat, p2, p3, x, y, z, p7, maxSpeed, drivingStyle, p10, p11); } // 0x15C86013127CE63F 0x5865B031 b323
	 // Example:
	 // 
	 // AI::TASK_DRIVE_BY(l_467[1/*22*/], PLAYER::PLAYER_PED_ID(), 0, 0.0, 0.0, 2.0, 300.0, 100, 0, ${firing_pattern_burst_fire_driveby});
	 // 
	 // 
	 // 
	 // 
	 // Needs working example. Doesn't seem to do anything.
	 // 
	 // I marked p2 as targetVehicle as all these shooting related tasks seem to have that in common.
	 // I marked p6 as distanceToShoot as if you think of GTA's Logic with the native SET_VEHICLE_SHOOT natives, it won't shoot till it gets within a certain distance of the target.
	 // I marked p7 as pedAccuracy as it seems it's mostly 100 (Completely Accurate), 75, 90, etc. Although this could be the ammo count within the gun, but I highly doubt it. I will change this comment once I find out if it's ammo count or not.
	static void TASK_DRIVE_BY(Ped driverPed, Ped targetPed, Vehicle targetVehicle, float targetX, float targetY, float targetZ, float distanceToShoot, int pedAccuracy, BOOL p8, Hash firingPattern) { return invoke<void>(0x2F8AF0E82773A171, driverPed, targetPed, targetVehicle, targetX, targetY, targetZ, distanceToShoot, pedAccuracy, p8, firingPattern); } // 0x2F8AF0E82773A171 0x2B84D1C4 b323
	static void CLEAR_DRIVEBY_TASK_UNDERNEATH_DRIVING_TASK(Ped ped) { return invoke<void>(0xC35B5CDB2824CF69, ped); } // 0xC35B5CDB2824CF69 0x9B76F7E6 b323
	static BOOL IS_DRIVEBY_TASK_UNDERNEATH_DRIVING_TASK(Ped ped) { return invoke<BOOL>(0x8785E6E40C7A8818, ped); } // 0x8785E6E40C7A8818 0xB23F46E6 b323
	 // Actually has 3 params, not 2.
	 // 
	 // p0: Ped
	 // p1: int (or bool?)
	 // p2: int
	static void TASK_USE_MOBILE_PHONE(Ped ped, int p1, Any p2) { return invoke<void>(0xBD2A8EC3AF4DE7DB, ped, p1, p2); } // 0xBD2A8EC3AF4DE7DB 0x225A38C8 b323
	static void TASK_USE_MOBILE_PHONE_TIMED(Ped ped, int duration) { return invoke<void>(0x5EE02954A14C69DB, ped, duration); } // 0x5EE02954A14C69DB 0xC99C19F5 b323
	 // p2 tend to be 16, 17 or 1
	 // p3 to p7 tend to be 0.0
	static void TASK_CHAT_TO_PED(Ped ped, Ped target, Any p2, float p3, float p4, float p5, float p6, float p7) { return invoke<void>(0x8C338E0263E4FD19, ped, target, p2, p3, p4, p5, p6, p7); } // 0x8C338E0263E4FD19 0xA2BE1821 b323
	 // //this part of the code is to determine at which entity the player is aiming, for example if you want to create a mod where you give orders to peds
	 // Entity aimedentity;
	 // Player player = PLAYER::PLAYER_ID();
	 // PLAYER::_GET_AIMED_ENTITY(player, &aimedentity);
	 // 
	 // //bg is an array of peds
	 // AI::TASK_SHOOT_AT_ENTITY(bg[i], aimedentity, 5000, GAMEPLAY::GET_HASH_KEY("FIRING_PATTERN_FULL_AUTO"));
	 // 
	 // in practical usage, getting the entity the player is aiming at and then task the peds to shoot at the entity, at a button press event would be better.
	static void TASK_SHOOT_AT_ENTITY(Entity entity, Entity target, int duration, Hash firingPattern) { return invoke<void>(0x08DA95E8298AE772, entity, target, duration, firingPattern); } // 0x08DA95E8298AE772 0xAC0631C9 b323
	static void TASK_CLIMB_LADDER(Ped ped, int p1) { return invoke<void>(0xB6C987F9285A3814, ped, p1); } // 0xB6C987F9285A3814 0x35BB4EE0 b323
	 // Immediately stops the pedestrian from whatever it's doing. They stop fighting, animations, etc. they forget what they were doing.
	static void CLEAR_PED_TASKS_IMMEDIATELY(Ped ped) { return invoke<void>(0xAAA34F8A7CB32098, ped); } // 0xAAA34F8A7CB32098 0xBC045625 b323
	static void SET_PED_DESIRED_MOVE_BLEND_RATIO(Ped ped, float p1) { return invoke<void>(0x1E982AC8716912C5, ped, p1); } // 0x1E982AC8716912C5 0xC65FC712 b323
	static float GET_PED_DESIRED_MOVE_BLEND_RATIO(Ped ped) { return invoke<float>(0x8517D4A6CA8513ED, ped); } // 0x8517D4A6CA8513ED 0x5FEFAB72 b323
	 // p1 is always GET_HASH_KEY("empty") in scripts, for the rare times this is used
	static void TASK_SET_DECISION_MAKER(Ped ped, Hash p1) { return invoke<void>(0xEB8517DDA73720DA, ped, p1); } // 0xEB8517DDA73720DA 0x830AD50C b323
	static void TASK_CLEAR_DEFENSIVE_AREA(Any p0) { return invoke<void>(0x95A6C46A31D1917D, p0); } // 0x95A6C46A31D1917D 0x7A05BF0D b323
	static void TASK_PED_SLIDE_TO_COORD(Ped ped, float x, float y, float z, float heading, float p5) { return invoke<void>(0xD04FE6765D990A06, ped, x, y, z, heading, p5); } // 0xD04FE6765D990A06 0x225380EF b323
	static ScrHandle ADD_COVER_POINT(float p0, float p1, float p2, float p3, Any p4, Any p5, Any p6, BOOL p7) { return invoke<ScrHandle>(0xD5C12A75C7B9497F, p0, p1, p2, p3, p4, p5, p6, p7); } // 0xD5C12A75C7B9497F 0xA0AF0B98 b323
	static void REMOVE_COVER_POINT(ScrHandle coverpoint) { return invoke<void>(0xAE287C923D891715, coverpoint); } // 0xAE287C923D891715 0x0776888B b323
	 // Checks if there is a cover point at position
	static BOOL DOES_SCRIPTED_COVER_POINT_EXIST_AT_COORDS(float x, float y, float z) { return invoke<BOOL>(0xA98B8E3C088E5A31, x, y, z); } // 0xA98B8E3C088E5A31 0x29F97A71 b323
	 // Makes the specified ped attack the target ped.
	 // p2 should be 0
	 // p3 should be 16
	static void TASK_COMBAT_PED(Ped ped, Ped targetPed, int p2, int p3) { return invoke<void>(0xF166E48407BAC484, ped, targetPed, p2, p3); } // 0xF166E48407BAC484 0xCB0D8932 b323
	static void TASK_SEEK_COVER_FROM_POS(Ped ped, float x, float y, float z, int duration, BOOL p5) { return invoke<void>(0x75AC2B60386D89F2, ped, x, y, z, duration, p5); } // 0x75AC2B60386D89F2 0x83F18EE9 b323
	static void TASK_SEEK_COVER_FROM_PED(Ped ped, Ped target, int duration, BOOL p3) { return invoke<void>(0x84D32B3BEC531324, ped, target, duration, p3); } // 0x84D32B3BEC531324 0xC1EC907E b323
	static void TASK_PUT_PED_DIRECTLY_INTO_COVER(Ped ped, float x, float y, float z, Any timeout, BOOL p5, float p6, BOOL p7, BOOL p8, Any p9, BOOL p10) { return invoke<void>(0x4172393E6BE1FECE, ped, x, y, z, timeout, p5, p6, p7, p8, p9, p10); } // 0x4172393E6BE1FECE 0xC9F00E68 b323
	 // from armenian3.c4
	 // 
	 // AI::TASK_PUT_PED_DIRECTLY_INTO_MELEE(PlayerPed, armenianPed, 0.0, -1.0, 0.0, 0);
	 // 
	static void TASK_PUT_PED_DIRECTLY_INTO_MELEE(Ped ped, Ped meleeTarget, float p2, float p3, float p4, BOOL p5) { return invoke<void>(0x1C6CD14A876FFE39, ped, meleeTarget, p2, p3, p4, p5); } // 0x1C6CD14A876FFE39 0x79E1D27D b323
	 // used in sequence task
	 // 
	 // both parameters seems to be always 0
	static void TASK_TOGGLE_DUCK(BOOL p0, BOOL p1) { return invoke<void>(0xAC96609B9995EDF8, p0, p1); } // 0xAC96609B9995EDF8 0x61CFBCBF b323
	 // From re_prisonvanbreak:
	 // 
	 // AI::TASK_GUARD_CURRENT_POSITION(l_DD, 35.0, 35.0, 1);
	static void TASK_GUARD_CURRENT_POSITION(Ped p0, float p1, float p2, BOOL p3) { return invoke<void>(0x4A58A47A72E3FCB4, p0, p1, p2, p3); } // 0x4A58A47A72E3FCB4 0x2FB099E9 b323
	static void SET_DRIVE_TASK_CRUISE_SPEED(Ped driver, float cruiseSpeed) { return invoke<void>(0x5C9B84BD7D31D908, driver, cruiseSpeed); } // 0x5C9B84BD7D31D908 0x3CEC07B1 b323
	static void SET_DRIVE_TASK_MAX_CRUISE_SPEED(Any p0, float p1) { return invoke<void>(0x404A5AA9B9F0B746, p0, p1); } // 0x404A5AA9B9F0B746 0x7FDF6131 b323
	 // This native is used to set the driving style for specific ped.
	 // 
	 // Driving styles id seems to be:
	 // 786468
	 // 262144
	 // 786469
	 // 
	 // http://gtaforums.com/topic/822314-guide-driving-styles/
	static void SET_DRIVE_TASK_DRIVING_STYLE(Ped ped, int drivingStyle) { return invoke<void>(0xDACE1BE37D88AF67, ped, drivingStyle); } // 0xDACE1BE37D88AF67 0x59C5FAD7 b323
	static void ADD_COVER_BLOCKING_AREA(float playerX, float playerY, float playerZ, float radiusX, float radiusY, float radiusZ, BOOL p6, BOOL p7, BOOL p8, BOOL p9) { return invoke<void>(0x45C597097DD7CB81, playerX, playerY, playerZ, radiusX, radiusY, radiusZ, p6, p7, p8, p9); } // 0x45C597097DD7CB81 0x3536946F b323
	static void REMOVE_ALL_COVER_BLOCKING_AREAS() { return invoke<void>(0xDB6708C0B46F56D8); } // 0xDB6708C0B46F56D8 0xCF9221A7 b323
	 // Plays a scenario on a Ped at their current location.
	 // 
	 // unkDelay - Usually 0 or -1, doesn't seem to have any effect. Might be a delay between sequences.
	 // playEnterAnim - Plays the "Enter" anim if true, otherwise plays the "Exit" anim. Scenarios that don't have any "Enter" anims won't play if this is set to true.
	 // 
	 // ----
	 // 
	 // From "am_hold_up.ysc.c4" at line 339:
	 // 
	 // AI::TASK_START_SCENARIO_IN_PLACE(NETWORK::NET_TO_PED(l_8D._f4), sub_adf(), 0, 1);
	 // 
	 // I'm unsure of what the last two parameters are, however sub_adf() randomly returns 1 of 3 scenarios, those being:
	 // WORLD_HUMAN_SMOKING
	 // WORLD_HUMAN_HANG_OUT_STREET
	 // WORLD_HUMAN_STAND_MOBILE
	 // 
	 // This makes sense, as these are what I commonly see when going by a liquor store.
	 // -------------------------
	 // List of scenarioNames: pastebin.com/6mrYTdQv
	 // (^ Thank you so fucking much for this)
	 // 
	 // Also these:
	 // WORLD_FISH_FLEE
	 // DRIVE
	 // WORLD_HUMAN_HIKER
	 // WORLD_VEHICLE_ATTRACTOR
	 // WORLD_VEHICLE_BICYCLE_MOUNTAIN
	 // WORLD_VEHICLE_BIKE_OFF_ROAD_RACE
	 // WORLD_VEHICLE_BIKER
	 // WORLD_VEHICLE_CONSTRUCTION_PASSENGERS
	 // WORLD_VEHICLE_CONSTRUCTION_SOLO
	 // WORLD_VEHICLE_DRIVE_PASSENGERS
	 // WORLD_VEHICLE_DRIVE_SOLO
	 // WORLD_VEHICLE_EMPTY
	 // WORLD_VEHICLE_PARK_PARALLEL
	 // WORLD_VEHICLE_PARK_PERPENDICULAR_NOSE_IN
	 // WORLD_VEHICLE_POLICE_BIKE
	 // WORLD_VEHICLE_POLICE_CAR
	 // WORLD_VEHICLE_POLICE_NEXT_TO_CAR
	 // WORLD_VEHICLE_SALTON_DIRT_BIKE
	 // WORLD_VEHICLE_TRUCK_LOGS
	static void TASK_START_SCENARIO_IN_PLACE(Ped ped, const char* scenarioName, int unkDelay, BOOL playEnterAnim) { return invoke<void>(0x142A02425FF02BD9, ped, scenarioName, unkDelay, playEnterAnim); } // 0x142A02425FF02BD9 0xE50D6DDE b323
	 // List of scenarioNames: pastebin.com/6mrYTdQv
	 // 
	 // Also a few more listed at AI::TASK_START_SCENARIO_IN_PLACE just above.
	 // ---------------
	 // The first parameter in every scenario has always been a Ped of some sort. The second like TASK_START_SCENARIO_IN_PLACE is the name of the scenario. 
	 // 
	 // The next 4 parameters were harder to decipher. After viewing "hairdo_shop_mp.ysc.c4", and being confused from seeing the case in other scripts, they passed the first three of the arguments as one array from a function, and it looked like it was obviously x, y, and z.
	 // 
	 // I haven't seen the sixth parameter go to or over 360, making me believe that it is rotation, but I really can't confirm anything.
	 // 
	 // I have no idea what the last 3 parameters are, but I'll try to find out.
	 // 
	 // -going on the last 3 parameters, they appear to always be "0, 0, 1"
	 // 
	 // p6 -1 also used in scrips
	 // 
	 // p7 used for sitting scenarios
	 // 
	 // p8 teleports ped to position
	static void TASK_START_SCENARIO_AT_POSITION(Ped ped, const char* scenarioName, float x, float y, float z, float heading, int duration, BOOL sittingScenario, BOOL teleport) { return invoke<void>(0xFA4EFC79F69D4F07, ped, scenarioName, x, y, z, heading, duration, sittingScenario, teleport); } // 0xFA4EFC79F69D4F07 0xAA2C4AC2 b323
	 // Updated variables
	 // 
	 // An alternative to AI::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP. Makes the ped walk to the scenario instead.
	static void TASK_USE_NEAREST_SCENARIO_TO_COORD(Ped ped, float x, float y, float z, float distance, int duration) { return invoke<void>(0x277F471BA9DB000B, ped, x, y, z, distance, duration); } // 0x277F471BA9DB000B 0x9C50FBF0 b323
	static void TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(Ped ped, float x, float y, float z, float radius, Any p5) { return invoke<void>(0x58E2E0F23F6B76C3, ped, x, y, z, radius, p5); } // 0x58E2E0F23F6B76C3 0x1BE9D65C b323
	static void TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(Any p0, float p1, float p2, float p3, float p4, Any p5) { return invoke<void>(0x9FDA1B3D7E7028B3, p0, p1, p2, p3, p4, p5); } // 0x9FDA1B3D7E7028B3 0xE32FFB22 b323
	static void TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD_WARP(Any p0, float p1, float p2, float p3, float p4, Any p5) { return invoke<void>(0x97A28E63F0BA5631, p0, p1, p2, p3, p4, p5); } // 0x97A28E63F0BA5631 0xBAB4C0AE b323
	static BOOL DOES_SCENARIO_EXIST_IN_AREA(float x, float y, float z, float radius, BOOL b) { return invoke<BOOL>(0x5A59271FFADD33C1, x, y, z, radius, b); } // 0x5A59271FFADD33C1 0xFA7F5047 b323
	static BOOL DOES_SCENARIO_OF_TYPE_EXIST_IN_AREA(float p0, float p1, float p2, Any* p3, float p4, BOOL p5) { return invoke<BOOL>(0x0A9D0C2A3BBC86C1, p0, p1, p2, p3, p4, p5); } // 0x0A9D0C2A3BBC86C1 0x0FB138A5 b323
	static BOOL IS_SCENARIO_OCCUPIED(float p0, float p1, float p2, float p3, BOOL p4) { return invoke<BOOL>(0x788756D73AC2E07C, p0, p1, p2, p3, p4); } // 0x788756D73AC2E07C 0x697FC008 b323
	static BOOL PED_HAS_USE_SCENARIO_TASK(Ped ped) { return invoke<BOOL>(0x295E3CCEC879CCD7, ped); } // 0x295E3CCEC879CCD7 0x9BE9C691 b323
	 // Occurrences in the b617d scripts:
	 // 
	 // "ARMY_GUARD",
	 // "ARMY_HELI",
	 // "Cinema_Downtown",
	 // "Cinema_Morningwood",
	 // "Cinema_Textile",
	 // "City_Banks",
	 // "Countryside_Banks",
	 // "DEALERSHIP",
	 // "GRAPESEED_PLANES",
	 // "KORTZ_SECURITY",
	 // "LOST_BIKERS",
	 // "LSA_Planes",
	 // "LSA_Planes",
	 // "MP_POLICE",
	 // "Observatory_Bikers", 
	 // "POLICE_POUND1",
	 // "POLICE_POUND2",
	 // "POLICE_POUND3",
	 // "POLICE_POUND4",
	 // "POLICE_POUND5"
	 // "QUARRY",
	 // "SANDY_PLANES",
	 // "SCRAP_SECURITY",
	 // "SEW_MACHINE",
	 // "SOLOMON_GATE",
	 // "Triathlon_1_Start", 
	 // "Triathlon_2_Start", 
	 // "Triathlon_3_Start"
	 // 
	 // Sometimes used with IS_SCENARIO_GROUP_ENABLED:
	 // if (AI::DOES_SCENARIO_GROUP_EXIST("Observatory_Bikers") && (!AI::IS_SCENARIO_GROUP_ENABLED("Observatory_Bikers"))) {
	 // else if (AI::IS_SCENARIO_GROUP_ENABLED("BLIMP")) {
	 // 
	static BOOL DOES_SCENARIO_GROUP_EXIST(const char* scenarioGroup) { return invoke<BOOL>(0xF9034C136C9E00D3, scenarioGroup); } // 0xF9034C136C9E00D3 0x5F072EB9 b323
	 //  Occurrences in the b617d scripts: 
	 // 
	 //  "ARMY_GUARD",
	 //  "ARMY_HELI",
	 //  "BLIMP",
	 //  "Cinema_Downtown",
	 //  "Cinema_Morningwood",
	 //  "Cinema_Textile",
	 //  "City_Banks",
	 //  "Countryside_Banks",
	 //  "DEALERSHIP",
	 //  "KORTZ_SECURITY",
	 //  "LSA_Planes",
	 //  "MP_POLICE",
	 //  "Observatory_Bikers",
	 //  "POLICE_POUND1",
	 //  "POLICE_POUND2",
	 //  "POLICE_POUND3",
	 //  "POLICE_POUND4",
	 //  "POLICE_POUND5",
	 //  "Rampage1",
	 //  "SANDY_PLANES",
	 //  "SCRAP_SECURITY",
	 //  "SEW_MACHINE",
	 //  "SOLOMON_GATE"
	 // 
	 // Sometimes used with DOES_SCENARIO_GROUP_EXIST:
	 // if (AI::DOES_SCENARIO_GROUP_EXIST("Observatory_Bikers") &&   (!AI::IS_SCENARIO_GROUP_ENABLED("Observatory_Bikers"))) {
	 // else if (AI::IS_SCENARIO_GROUP_ENABLED("BLIMP")) {
	static BOOL IS_SCENARIO_GROUP_ENABLED(const char* scenarioGroup) { return invoke<BOOL>(0x367A09DED4E05B99, scenarioGroup); } // 0x367A09DED4E05B99 0x90991122 b323
	 // Occurrences in the b617d scripts: pastebin.com/Tvg2PRHU
	static void SET_SCENARIO_GROUP_ENABLED(const char* scenarioGroup, BOOL p1) { return invoke<void>(0x02C8E5B49848664E, scenarioGroup, p1); } // 0x02C8E5B49848664E 0x116997B1 b323
	 // Groups found in the scripts used with this native:
	 // 
	 // "AMMUNATION",
	 // "QUARRY",
	 // "Triathlon_1",
	 // "Triathlon_2",
	 // "Triathlon_3"
	static void SET_EXCLUSIVE_SCENARIO_GROUP(const char* scenarioGroup) { return invoke<void>(0x535E97E1F7FC0C6A, scenarioGroup); } // 0x535E97E1F7FC0C6A 0x59DB8F26 b323
	static void RESET_EXCLUSIVE_SCENARIO_GROUP() { return invoke<void>(0x4202BBCB8684563D); } // 0x4202BBCB8684563D 0x17F9DFE8 b323
	 // Occurrences in the b617d scripts:
	 // "PROP_HUMAN_SEAT_CHAIR",
	 // "WORLD_HUMAN_DRINKING",
	 // "WORLD_HUMAN_HANG_OUT_STREET",
	 // "WORLD_HUMAN_SMOKING",
	 // "WORLD_MOUNTAIN_LION_WANDER",
	 // "WORLD_HUMAN_DRINKING"
	 // 
	 // Sometimes used together with GAMEPLAY::IS_STRING_NULL_OR_EMPTY in the scripts.
	 // 
	 // scenarioType could be the same as scenarioName, used in for example AI::TASK_START_SCENARIO_AT_POSITION.
	 // 
	static BOOL IS_SCENARIO_TYPE_ENABLED(const char* scenarioType) { return invoke<BOOL>(0x3A815DB3EA088722, scenarioType); } // 0x3A815DB3EA088722 0xAE37E969 b323
	 // seems to enable/disable specific scenario-types from happening in the game world.
	 // 
	 // Here are some scenario types from the scripts:
	 // "WORLD_MOUNTAIN_LION_REST"                                             
	 // "WORLD_MOUNTAIN_LION_WANDER"                                            
	 // "DRIVE"                                                                  
	 // "WORLD_VEHICLE_POLICE_BIKE"                                             
	 // "WORLD_VEHICLE_POLICE_CAR"                                             
	 // "WORLD_VEHICLE_POLICE_NEXT_TO_CAR"                                        
	 // "WORLD_VEHICLE_DRIVE_SOLO"                                                 
	 // "WORLD_VEHICLE_BIKER"                                                      
	 // "WORLD_VEHICLE_DRIVE_PASSENGERS"                                           
	 // "WORLD_VEHICLE_SALTON_DIRT_BIKE"                                           
	 // "WORLD_VEHICLE_BICYCLE_MOUNTAIN"                                           
	 // "PROP_HUMAN_SEAT_CHAIR"                                             
	 // "WORLD_VEHICLE_ATTRACTOR"                                             
	 // "WORLD_HUMAN_LEANING"                                                 
	 // "WORLD_HUMAN_HANG_OUT_STREET"                                        
	 // "WORLD_HUMAN_DRINKING"                                                
	 // "WORLD_HUMAN_SMOKING"                                                
	 // "WORLD_HUMAN_GUARD_STAND"                                            
	 // "WORLD_HUMAN_CLIPBOARD"                                              
	 // "WORLD_HUMAN_HIKER"                                                  
	 // "WORLD_VEHICLE_EMPTY"                                                      
	 // "WORLD_VEHICLE_BIKE_OFF_ROAD_RACE"                                      
	 // "WORLD_HUMAN_PAPARAZZI"                                               
	 // "WORLD_VEHICLE_PARK_PERPENDICULAR_NOSE_IN"                            
	 // "WORLD_VEHICLE_PARK_PARALLEL"                                              
	 // "WORLD_VEHICLE_CONSTRUCTION_SOLO"                               
	 // "WORLD_VEHICLE_CONSTRUCTION_PASSENGERS"                                                                    
	 // "WORLD_VEHICLE_TRUCK_LOGS" 
	 // -alphazolam
	 // 
	 // scenarioType could be the same as scenarioName, used in for example AI::TASK_START_SCENARIO_AT_POSITION.
	static void SET_SCENARIO_TYPE_ENABLED(const char* scenarioType, BOOL toggle) { return invoke<void>(0xEB47EC4E34FB7EE1, scenarioType, toggle); } // 0xEB47EC4E34FB7EE1 0xDB18E5DE b323
	static void RESET_SCENARIO_TYPES_ENABLED() { return invoke<void>(0x0D40EE2A7F2B2D6D); } // 0x0D40EE2A7F2B2D6D 0xF58FDEB4 b323
	static BOOL IS_PED_ACTIVE_IN_SCENARIO(Ped ped) { return invoke<BOOL>(0xAA135F9482C82CC3, ped); } // 0xAA135F9482C82CC3 0x05038F1A b323
	 // Despite its name, it only attacks ONE hated target. The one closest hated target.
	 // 
	 // p2 seems to be always 0
	static void TASK_COMBAT_HATED_TARGETS_AROUND_PED(Ped ped, float radius, int p2) { return invoke<void>(0x7BF835BB9E2698C8, ped, radius, p2); } // 0x7BF835BB9E2698C8 0x2E7064E4 b323
	static void TASK_COMBAT_HATED_TARGETS_AROUND_PED_TIMED(Any p0, float p1, Any p2, Any p3) { return invoke<void>(0x2BBA30B854534A0C, p0, p1, p2, p3); } // 0x2BBA30B854534A0C 0xF127AD6A b323
	 // In every case of this native, I've only seen the first parameter passed as 0, although I believe it's a Ped after seeing tasks around it using 0. That's because it's used in a Sequence Task.
	 // 
	 // The last 3 parameters are definitely coordinates after seeing them passed in other scripts, and even being used straight from the player's coordinates.
	 // ---
	 // It seems that - in the decompiled scripts - this native was used on a ped who was in a vehicle to throw a projectile out the window at the player. This is something any ped will naturally do if they have a throwable and they are doing driveby-combat (although not very accurately).
	 // It is possible, however, that this is how SWAT throws smoke grenades at the player when in cover.
	 // ----------------------------------------------------
	 // The first comment is right it definately is the ped as if you look in script finale_heist2b.c line 59628 in Xbox Scripts atleast you will see task_throw_projectile and the first param is Local_559[2 <14>] if you look above it a little bit line 59622 give_weapon_to_ped uses the same exact param Local_559[2 <14>] and we all know the first param of that native is ped. So it guaranteed has to be ped. 0 just may mean to use your ped by default for some reason.
	static void TASK_THROW_PROJECTILE(Ped ped, float x, float y, float z, Any p4, Any p5) { return invoke<void>(0x7285951DBF6B5A51, ped, x, y, z, p4, p5); } // 0x7285951DBF6B5A51 0xF65C20A7 b323
	static void TASK_SWAP_WEAPON(Ped ped, BOOL p1) { return invoke<void>(0xA21C51255B205245, ped, p1); } // 0xA21C51255B205245 0xDAF4F8FC b323
	 // The 2nd param (unused) is not implemented.
	 // 
	 // -----------------------------------------------------------------------
	 // 
	 // The only occurrence I found in a R* script ("assassin_construction.ysc.c4"):
	 // 
	 //             if (((v_3 < v_4) && (AI::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), 0x6a67a5cc) != 1)) && (v_5 > v_3)) {
	 //                 AI::TASK_RELOAD_WEAPON(PLAYER::PLAYER_PED_ID(), 1);
	 //             }
	static void TASK_RELOAD_WEAPON(Ped ped, BOOL unused) { return invoke<void>(0x62D2916F56B9CD2D, ped, unused); } // 0x62D2916F56B9CD2D 0xCA6E91FD b323
	static BOOL IS_PED_GETTING_UP(Ped ped) { return invoke<BOOL>(0x2A74E1D5F2F00EEC, ped); } // 0x2A74E1D5F2F00EEC 0x320813E6 b323
	 // returns true is the ped is on the ground whining like a little female dog from a gunshot wound
	static BOOL IS_PED_IN_WRITHE(Ped ped) { return invoke<BOOL>(0xDEB6D52126E7D640, ped); } // 0xDEB6D52126E7D640 0x09E61921 b323
	 //  patrolRoutes found in the b617d scripts:
	 //  "miss_Ass0",
	 //  "miss_Ass1",
	 //  "miss_Ass2",
	 //  "miss_Ass3",
	 //  "miss_Ass4",
	 //  "miss_Ass5",
	 //  "miss_Ass6",
	 //  "MISS_PATROL_6",
	 //  "MISS_PATROL_7",
	 //  "MISS_PATROL_8",
	 //  "MISS_PATROL_9",
	 //  "miss_Tower_01",
	 //  "miss_Tower_02",
	 //  "miss_Tower_03",
	 //  "miss_Tower_04",
	 //  "miss_Tower_05",
	 //  "miss_Tower_06",
	 //  "miss_Tower_07",
	 //  "miss_Tower_08",
	 //  "miss_Tower_10"
	static void OPEN_PATROL_ROUTE(const char* patrolRoute) { return invoke<void>(0xA36BFB5EE89F3D82, patrolRoute); } // 0xA36BFB5EE89F3D82 0xF33F83CA b323
	static void CLOSE_PATROL_ROUTE() { return invoke<void>(0xB043ECA801B8CBC1); } // 0xB043ECA801B8CBC1 0x67305E59 b323
	 // Example: 
	 // AI::ADD_PATROL_ROUTE_NODE(2, "WORLD_HUMAN_GUARD_STAND", -193.4915, -2378.864990234375, 10.9719, -193.4915, -2378.864990234375, 10.9719, 3000);
	 // 
	 // p0 is between 0 and 4 in the scripts.
	 // 
	 // p1 is "WORLD_HUMAN_GUARD_STAND" or "StandGuard".
	 // 
	 // p2, p3 and p4 is only one parameter sometimes in the scripts. Most likely a Vector3 hence p2, p3 and p4 are coordinates. 
	 // Examples: 
	 // AI::ADD_PATROL_ROUTE_NODE(1, "WORLD_HUMAN_GUARD_STAND", l_739[7/*3*/], 0.0, 0.0, 0.0, 0);
	 // 
	 // AI::ADD_PATROL_ROUTE_NODE(1, "WORLD_HUMAN_GUARD_STAND", l_B0[17/*44*/]._f3, l_B0[17/*44*/]._f3, 2000);
	 // 
	 // p5, p6 and p7 are for example set to: 1599.0406494140625, 2713.392578125, 44.4309.
	 // 
	 // p8 is an int, often random set to for example: GAMEPLAY::GET_RANDOM_INT_IN_RANGE(5000, 10000).
	static void ADD_PATROL_ROUTE_NODE(int p0, const char* p1, float x1, float y1, float z1, float x2, float y2, float z2, int p8) { return invoke<void>(0x8EDF950167586B7C, p0, p1, x1, y1, z1, x2, y2, z2, p8); } // 0x8EDF950167586B7C 0x21B48F10 b323
	static void ADD_PATROL_ROUTE_LINK(Any p0, Any p1) { return invoke<void>(0x23083260DEC3A551, p0, p1); } // 0x23083260DEC3A551 0xD8761BB3 b323
	static void CREATE_PATROL_ROUTE() { return invoke<void>(0xAF8A443CCC8018DC); } // 0xAF8A443CCC8018DC 0x0A6C7864 b323
	 // After looking at some scripts the second parameter seems to be an id of some kind. Here are some I found from some R* scripts:
	 // 
	 // "miss_Tower_01" (this went from 01 - 10)
	 // "miss_Ass0" (0, 4, 6, 3)
	 // "MISS_PATROL_8"
	 // 
	 // I think they're patrol routes, but I'm not sure. And I believe the 3rd parameter is a BOOL, but I can't confirm other than only seeing 0 and 1 being passed.
	 // 
	 // 
	 // As far as I can see the patrol routes names such as "miss_Ass0" have been defined earlier in the scripts. This leads me to believe we can defined our own new patrol routes by following the same approach. 
	 // From the scripts
	 // 
	 //     AI::OPEN_PATROL_ROUTE("miss_Ass0");
	 //     AI::ADD_PATROL_ROUTE_NODE(0, "WORLD_HUMAN_GUARD_STAND", l_738[0/*3*/], -139.4076690673828, -993.4732055664062, 26.2754, GAMEPLAY::GET_RANDOM_INT_IN_RANGE(5000, 10000));
	 //     AI::ADD_PATROL_ROUTE_NODE(1, "WORLD_HUMAN_GUARD_STAND", l_738[1/*3*/], -116.1391830444336, -987.4984130859375, 26.38541030883789, GAMEPLAY::GET_RANDOM_INT_IN_RANGE(5000, 10000));
	 //     AI::ADD_PATROL_ROUTE_NODE(2, "WORLD_HUMAN_GUARD_STAND", l_738[2/*3*/], -128.46847534179688, -979.0340576171875, 26.2754, GAMEPLAY::GET_RANDOM_INT_IN_RANGE(5000, 10000));
	 //     AI::ADD_PATROL_ROUTE_LINK(0, 1);
	 //     AI::ADD_PATROL_ROUTE_LINK(1, 2);
	 //     AI::ADD_PATROL_ROUTE_LINK(2, 0);
	 //     AI::CLOSE_PATROL_ROUTE();
	 //     AI::CREATE_PATROL_ROUTE();
	 // 
	 // 
	static void TASK_PATROL(Ped ped, const char* p1, Any p2, BOOL p3, BOOL p4) { return invoke<void>(0xBDA5DF49D080FE4E, ped, p1, p2, p3, p4); } // 0xBDA5DF49D080FE4E 0xB92E5AF6 b323
	 // Makes the ped run to take cover
	static void TASK_STAY_IN_COVER(Ped ped) { return invoke<void>(0xE5DA8615A6180789, ped); } // 0xE5DA8615A6180789 0xA27A9413 b323
	static void ADD_VEHICLE_SUBTASK_ATTACK_PED(Ped ped, Ped ped2) { return invoke<void>(0x85F462BADC7DA47F, ped, ped2); } // 0x85F462BADC7DA47F 0x80461113 b323
	static void TASK_VEHICLE_SHOOT_AT_PED(Ped ped, Ped target, float p2) { return invoke<void>(0x10AB107B887214D8, ped, target, p2); } // 0x10AB107B887214D8 0x59677BA0 b323
	static void TASK_VEHICLE_SHOOT_AT_COORD(Ped ped, float x, float y, float z, float p4) { return invoke<void>(0x5190796ED39C9B6D, ped, x, y, z, p4); } // 0x5190796ED39C9B6D 0xA7AAA4D6 b323
	static void TASK_VEHICLE_AIM_AT_COORD(Ped ped, float x, float y, float z) { return invoke<void>(0x447C1E9EF844BC0F, ped, x, y, z); } // 0x447C1E9EF844BC0F 0x010F47CE b323
	 // Differs from TASK_VEHICLE_DRIVE_TO_COORDS in that it will pick the shortest possible road route without taking one-way streets and other "road laws" into consideration.
	 // 
	 // WARNING:
	 // A behaviorFlag value of 0 will result in a clunky, stupid driver!
	 // 
	 // Recommended settings:
	 // speed = 30.0f,
	 // behaviorFlag = 156, 
	 // stoppingRange = 5.0f;
	 // 
	 // If you simply want to have your driver move to a fixed location, call it only once, or, when necessary in the event of interruption. 
	 // 
	 // If using this to continually follow a Ped who is on foot:  You will need to run this in a tick loop.  Call it in with the Ped's updated coordinates every 20 ticks or so and you will have one hell of a smart, fast-reacting NPC driver -- provided he doesn't get stuck.  If your update frequency is too fast, the Ped may not have enough time to figure his way out of being stuck, and thus, remain stuck.  One way around this would be to implement an "anti-stuck" mechanism, which allows the driver to realize he's stuck, temporarily pause the tick, unstuck, then resume the tick.
	 // 
	 // EDIT:  This is being discussed in more detail at http://gtaforums.com/topic/818504-any-idea-on-how-to-make-peds-clever-and-insanely-fast-c/  
	static void TASK_VEHICLE_GOTO_NAVMESH(Ped ped, Vehicle vehicle, float x, float y, float z, float speed, int behaviorFlag, float stoppingRange) { return invoke<void>(0x195AEEB13CEFE2EE, ped, vehicle, x, y, z, speed, behaviorFlag, stoppingRange); } // 0x195AEEB13CEFE2EE 0x55CF3BCD b323
	 // movement_speed: mostly 2f, but also 1/1.2f, etc.
	 // p8: always false
	 // p9: 2f
	 // p10: 0.5f
	 // p11: true
	 // p12: 0 / 512 / 513, etc.
	 // p13: 0
	 // firing_pattern: ${firing_pattern_full_auto}, 0xC6EE6B4C
	static void TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(Ped ped, float x, float y, float z, float aimAtX, float aimAtY, float aimAtZ, float moveSpeed, BOOL p8, float p9, float p10, BOOL p11, Any flags, BOOL p13, Hash firingPattern) { return invoke<void>(0x11315AB3385B8AC0, ped, x, y, z, aimAtX, aimAtY, aimAtZ, moveSpeed, p8, p9, p10, p11, flags, p13, firingPattern); } // 0x11315AB3385B8AC0 0x1552DC91 b323
	static void TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(Any p0, float p1, float p2, float p3, Any p4, float p5, BOOL p6, float p7, float p8, BOOL p9, Any p10, BOOL p11, Any p12, Any p13) { return invoke<void>(0xB2A16444EAD9AE47, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13); } // 0xB2A16444EAD9AE47 0x9BD52ABD b323
	static void TASK_GO_TO_ENTITY_WHILE_AIMING_AT_COORD(Any p0, Any p1, float p2, float p3, float p4, float p5, BOOL p6, float p7, float p8, BOOL p9, BOOL p10, Any p11) { return invoke<void>(0x04701832B739DCE5, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11); } // 0x04701832B739DCE5 0xD896CD82 b323
	 // shootatEntity:
	 // If true, peds will shoot at Entity till it is dead.
	 // If false, peds will just walk till they reach the entity and will cease shooting.
	static void TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY(Ped ped, Entity entityToWalkTo, Entity entityToAimAt, float speed, BOOL shootatEntity, float p5, float p6, BOOL p7, BOOL p8, Hash firingPattern) { return invoke<void>(0x97465886D35210E9, ped, entityToWalkTo, entityToAimAt, speed, shootatEntity, p5, p6, p7, p8, firingPattern); } // 0x97465886D35210E9 0x68E36B7A b323
	 // For a full list, see here: pastebin.com/Tp0XpBMN
	 // For a full list of the points, see here: goo.gl/wIH0vn
	 // 
	 // Max number of loaded recordings is 32.
	static void REQUEST_WAYPOINT_RECORDING(const char* name) { return invoke<void>(0x9EEFB62EB27B5792, name); } // 0x9EEFB62EB27B5792 0xAFABFB5D b323
	 // For a full list, see here: pastebin.com/Tp0XpBMN
	static BOOL GET_IS_WAYPOINT_RECORDING_LOADED(const char* name) { return invoke<BOOL>(0xCB4E8BE8A0063C5D, name); } // 0xCB4E8BE8A0063C5D 0x87125F5D b323
	 // For a full list, see here: pastebin.com/Tp0XpBMN
	static void REMOVE_WAYPOINT_RECORDING(const char* name) { return invoke<void>(0xFF1B8B4AA1C25DC8, name); } // 0xFF1B8B4AA1C25DC8 0x624530B0 b323
	 // For a full list, see here: pastebin.com/Tp0XpBMN
	 // For a full list of the points, see here: goo.gl/wIH0vn
	static BOOL WAYPOINT_RECORDING_GET_NUM_POINTS(const char* name, int* points) { return invoke<BOOL>(0x5343532C01A07234, name, points); } // 0x5343532C01A07234 0xF5F9B71E b323
	 // For a full list, see here: pastebin.com/Tp0XpBMN
	 // For a full list of the points, see here: goo.gl/wIH0vn
	static BOOL WAYPOINT_RECORDING_GET_COORD(const char* name, int point, Vector3* coord) { return invoke<BOOL>(0x2FB897405C90B361, name, point, coord); } // 0x2FB897405C90B361 0x19266913 b323
	 // For a full list, see here: pastebin.com/Tp0XpBMN
	 // For a full list of the points, see here: goo.gl/wIH0vn
	static BOOL WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(const char* name, float x, float y, float z, int* point) { return invoke<BOOL>(0xB629A298081F876F, name, x, y, z, point); } // 0xB629A298081F876F 0xC4CD35AF b323
	static void TASK_FOLLOW_WAYPOINT_RECORDING(Any p0, Any p1, Any p2, Any p3, Any p4) { return invoke<void>(0x0759591819534F7B, p0, p1, p2, p3, p4); } // 0x0759591819534F7B 0xADF9904D b323
	static BOOL IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Any p0) { return invoke<BOOL>(0xE03B3F2D3DC59B64, p0); } // 0xE03B3F2D3DC59B64 0x85B7725F b323
	static int GET_PED_WAYPOINT_PROGRESS(Ped ped) { return invoke<int>(0x2720AAA75001E094, ped); } // 0x2720AAA75001E094 0x3595B104 b323
	static BOOL WAYPOINT_PLAYBACK_GET_IS_PAUSED(Any p0) { return invoke<BOOL>(0x701375A7D43F01CB, p0); } // 0x701375A7D43F01CB 0xA6BB5717 b323
	static void WAYPOINT_PLAYBACK_PAUSE(Any p0, BOOL p1, BOOL p2) { return invoke<void>(0x0F342546AA06FED5, p0, p1, p2); } // 0x0F342546AA06FED5 0xFE39ECF8 b323
	static void WAYPOINT_PLAYBACK_RESUME(Any p0, BOOL p1, Any p2, Any p3) { return invoke<void>(0x244F70C84C547D2D, p0, p1, p2, p3); } // 0x244F70C84C547D2D 0x50F392EF b323
	static void WAYPOINT_PLAYBACK_OVERRIDE_SPEED(Any p0, float p1, BOOL p2) { return invoke<void>(0x7D7D2B47FA788E85, p0, p1, p2); } // 0x7D7D2B47FA788E85 0x23E6BA96 b323
	static void USE_WAYPOINT_RECORDING_AS_ASSISTED_MOVEMENT_ROUTE(Any* p0, BOOL p1, float p2, float p3) { return invoke<void>(0x5A353B8E6B1095B5, p0, p1, p2, p3); } // 0x5A353B8E6B1095B5 0x4DFD5FEC b323
	 // Routes: "1_FIBStairs", "2_FIBStairs", "3_FIBStairs", "4_FIBStairs", "5_FIBStairs", "5_TowardsFire", "6a_FIBStairs", "7_FIBStairs", "8_FIBStairs", "Aprtmnt_1", "AssAfterLift", "ATM_1", "coroner2", "coroner_stairs", "f5_jimmy1", "fame1", "family5b", "family5c", "Family5d", "family5d", "FIB_Glass1", "FIB_Glass2", "FIB_Glass3", "finaBroute1A", "finalb1st", "finalB1sta", "finalbround", "finalbroute2", "Hairdresser1", "jan_foyet_ft_door", "Jo_3", "Lemar1", "Lemar2", "mansion_1", "Mansion_1", "pols_1", "pols_2", "pols_3", "pols_4", "pols_5", "pols_6", "pols_7", "pols_8", "Pro_S1", "Pro_S1a", "Pro_S2", "Towards_case", "trev_steps", "tunrs1", "tunrs2", "tunrs3", "Wave01457s"
	static void ASSISTED_MOVEMENT_REQUEST_ROUTE(const char* route) { return invoke<void>(0x817268968605947A, route); } // 0x817268968605947A 0x48262EDA b323
	static void ASSISTED_MOVEMENT_REMOVE_ROUTE(const char* route) { return invoke<void>(0x3548536485DD792B, route); } // 0x3548536485DD792B 0xB3CEC06F b323
	static BOOL ASSISTED_MOVEMENT_IS_ROUTE_LOADED(const char* route) { return invoke<BOOL>(0x60F9A4393A21F741, route); } // 0x60F9A4393A21F741 0x79B067AF b323
	static void ASSISTED_MOVEMENT_SET_ROUTE_PROPERTIES(const char* route, int props) { return invoke<void>(0xD5002D78B7162E1B, route, props); } // 0xD5002D78B7162E1B 0x01CAAFCC b323
	 // task_vehicle_follow_waypoint_recording(Ped p0, Vehicle p1, string p2, int p3, int p4, int p5, int p6, float.x p7, float.Y p8, float.Z p9, bool p10, int p11)
	 // 
	 // p2 = Waypoint recording string (found in update\update.rpf\x64\levels\gta5\waypointrec.rpf
	 // p3 = 786468
	 // p4 = 0
	 // p5 = 16
	 // p6 = -1 (angle?)
	 // p7/8/9 = usually v3.zero
	 // p10 = bool (repeat?)
	 // p11 = 1073741824
	 // 
	 // -khorio
	static void TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(Ped ped, Vehicle vehicle, const char* WPRecording, int p3, int p4, int p5, int p6, float p7, BOOL p8, float p9) { return invoke<void>(0x3123FAA6DB1CF7ED, ped, vehicle, WPRecording, p3, p4, p5, p6, p7, p8, p9); } // 0x3123FAA6DB1CF7ED 0x959818B6 b323
	static BOOL IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(Vehicle vehicle) { return invoke<BOOL>(0xF5134943EA29868C, vehicle); } // 0xF5134943EA29868C 0x80DD15DB b323
	static int GET_VEHICLE_WAYPOINT_PROGRESS(Vehicle vehicle) { return invoke<int>(0x9824CFF8FC66E159, vehicle); } // 0x9824CFF8FC66E159 0xD3CCF64E b323
	static int GET_VEHICLE_WAYPOINT_TARGET_POINT(Vehicle vehicle) { return invoke<int>(0x416B62AC8B9E5BBD, vehicle); } // 0x416B62AC8B9E5BBD 0x81049608 b323
	static void VEHICLE_WAYPOINT_PLAYBACK_PAUSE(Vehicle vehicle) { return invoke<void>(0x8A4E6AC373666BC5, vehicle); } // 0x8A4E6AC373666BC5 0x7C00B415 b323
	 // I cant believe I have to define this, this is one of the best natives.
	 // 
	 // It makes the ped ignore basically all shocking events around it. Occasionally the ped may comment or gesture, but other than that they just continue their daily activities. This includes shooting and wounding the ped. And - most importantly - they do not flee.
	 // 
	 // Since it is a task, every time the native is called the ped will stop for a moment. 
	static void TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Ped ped, BOOL toggle) { return invoke<void>(0x90D2156198831D69, ped, toggle); } // 0x90D2156198831D69 0x1B54FB6B b323
	 // p2 always false
	 // 
	 // [30/03/2017] ins1de :
	 // 
	 // See FORCE_PED_MOTION_STATE
	static void TASK_FORCE_MOTION_STATE(Ped ped, Hash state, BOOL p2) { return invoke<void>(0x4F056E1AFFEF17AB, ped, state, p2); } // 0x4F056E1AFFEF17AB 0xCAD2EF77 b323
	 // Example:
	 // TASK::TASK_MOVE_NETWORK_BY_NAME(PLAYER::PLAYER_PED_ID(), "arm_wrestling_sweep_paired_a_rev3", 0.0f, true, "mini@arm_wrestling", 0);
	static void TASK_MOVE_NETWORK_BY_NAME(Ped ped, const char* task, float multiplier, BOOL p3, const char* animDict, int flags) { return invoke<void>(0x2D537BA194896636, ped, task, multiplier, p3, animDict, flags); } // 0x2D537BA194896636 0x6F5D215F b323
	static BOOL IS_TASK_MOVE_NETWORK_ACTIVE(Ped ped) { return invoke<BOOL>(0x921CE12C489C4C41, ped); } // 0x921CE12C489C4C41 0x902656EB b323
	static BOOL IS_TASK_MOVE_NETWORK_READY_FOR_TRANSITION(Ped ped) { return invoke<BOOL>(0x30ED88D5E0C56A37, ped); } // 0x30ED88D5E0C56A37 0x92FDBAE6 b323
	static BOOL REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(Ped ped, const char* name) { return invoke<BOOL>(0xD01015C7316AE176, ped, name); } // 0xD01015C7316AE176 0x885724DE b323
	static const char* GET_TASK_MOVE_NETWORK_STATE(Ped ped) { return invoke<const char*>(0x717E4D1F2048376D, ped); } // 0x717E4D1F2048376D 0x96C0277B b323
	 // p0 - PLAYER::PLAYER_PED_ID();
	 // p1 - "Phase", "Wobble", "x_axis","y_axis","introphase","speed".
	 // p2 - From what i can see it goes up to 1f (maybe).
	 // 
	 // -LcGamingHD
	 // 
	 // Example: AI::_D5BB4025AE449A4E(PLAYER::PLAYER_PED_ID(), "Phase", 0.5);
	static void SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(Ped ped, const char* signalName, float value) { return invoke<void>(0xD5BB4025AE449A4E, ped, signalName, value); } // 0xD5BB4025AE449A4E 0xA79BE783 b323
	static void SET_TASK_MOVE_NETWORK_SIGNAL_BOOL(Ped ped, const char* signalName, BOOL value) { return invoke<void>(0xB0A6CFD2C69C1088, ped, signalName, value); } // 0xB0A6CFD2C69C1088 0xF3538041 b323
	static BOOL GET_TASK_MOVE_NETWORK_EVENT(Ped ped, const char* eventName) { return invoke<BOOL>(0xB4F47213DF45A64C, ped, eventName); } // 0xB4F47213DF45A64C 0x72FA5EF2 b323
	static BOOL IS_PED_STILL(Ped ped) { return invoke<BOOL>(0xAC29253EEF8F0180, ped); } // 0xAC29253EEF8F0180 0x09E3418D b323
	static BOOL IS_PED_WALKING(Ped ped) { return invoke<BOOL>(0xDE4C184B2B9B071A, ped); } // 0xDE4C184B2B9B071A 0x4B865C4A b323
	static BOOL IS_PED_RUNNING(Ped ped) { return invoke<BOOL>(0xC5286FFC176F28A2, ped); } // 0xC5286FFC176F28A2 0xE9A5578F b323
	static BOOL IS_PED_SPRINTING(Ped ped) { return invoke<BOOL>(0x57E457CD2C0FC168, ped); } // 0x57E457CD2C0FC168 0x4F3E0633 b323
	 // What's strafing?
	static BOOL IS_PED_STRAFING(Ped ped) { return invoke<BOOL>(0xE45B7F222DE47E09, ped); } // 0xE45B7F222DE47E09 0xEFEED13C b323
	 //  AI::TASK_SYNCHRONIZED_SCENE(ped, scene, "creatures@rottweiler@in_vehicle@std_car", "get_in", 1000.0, -8.0, 4, 0, 0x447a0000, 0);
	 // 
	 // Animations List : www.ls-multiplayer.com/dev/index.php?section=3
	static void TASK_SYNCHRONIZED_SCENE(Ped ped, int scene, const char* animDictionary, const char* animationName, float speed, float speedMultiplier, int duration, int flag, float playbackRate, Any p9) { return invoke<void>(0xEEA929141F699854, ped, scene, animDictionary, animationName, speed, speedMultiplier, duration, flag, playbackRate, p9); } // 0xEEA929141F699854 0x4F217E7B b323
	 // This function is called on peds in vehicles.
	 // 
	 // anim: animation name
	 // p2, p3, p4: "sweep_low", "sweep_med" or "sweep_high"
	 // p5: no idea what it does but is usually -1
	static void TASK_SWEEP_AIM_ENTITY(Ped ped, const char* anim, const char* p2, const char* p3, const char* p4, int p5, Vehicle vehicle, float p7, float p8) { return invoke<void>(0x2047C02158D6405A, ped, anim, p2, p3, p4, p5, vehicle, p7, p8); } // 0x2047C02158D6405A 0x4D210467 b323
	 // Example from "me_amanda1.ysc.c4":
	 // AI::TASK_ARREST_PED(l_19F /* This is a Ped */ , PLAYER::PLAYER_PED_ID());
	 // 
	 // Example from "armenian1.ysc.c4":
	 // if (!PED::IS_PED_INJURED(l_B18[0/*1*/])) {
	 //     AI::TASK_ARREST_PED(l_B18[0/*1*/], PLAYER::PLAYER_PED_ID());
	 // }
	 // 
	 // I would love to have time to experiment to see if a player Ped can arrest another Ped. Might make for a good cop mod.
	 // 
	 // 
	 // Looks like only the player can be arrested this way. Peds react and try to arrest you if you task them, but the player charater doesn't do anything if tasked to arrest another ped.
	static void TASK_ARREST_PED(Ped ped, Ped target) { return invoke<void>(0xF3B9A78A178572B1, ped, target); } // 0xF3B9A78A178572B1 0xBC0F153D b323
	static BOOL IS_PED_RUNNING_ARREST_TASK(Ped ped) { return invoke<BOOL>(0x3DC52677769B4AE0, ped); } // 0x3DC52677769B4AE0 0x6942DB7A b323
	 // This function is hard-coded to always return 0.
	static BOOL IS_PED_BEING_ARRESTED(Ped ped) { return invoke<BOOL>(0x90A09F3A45FED688, ped); } // 0x90A09F3A45FED688 0x5FF6C2ED b323
}

namespace VEHICLE
{
	static Vehicle CREATE_VEHICLE(Hash modelHash, float x, float y, float z, float heading, BOOL isNetwork, BOOL netMissionEntity, BOOL p7) { return invoke<Vehicle>(0xAF35D0D2583051B0, modelHash, x, y, z, heading, isNetwork, netMissionEntity, p7); } // 0xAF35D0D2583051B0 0xDD75460A b323
	 // Deletes a vehicle.
	 // The vehicle must be a mission entity to delete, so call this before deleting: SET_ENTITY_AS_MISSION_ENTITY(vehicle, true, true);
	 // 
	 // eg how to use:
	 // SET_ENTITY_AS_MISSION_ENTITY(vehicle, true, true);
	 // DELETE_VEHICLE(&vehicle);
	 // 
	 // Deletes the specified vehicle, then sets the handle pointed to by the pointer to NULL.
	static void DELETE_VEHICLE(Vehicle* vehicle) { return invoke<void>(0xEA386986E786A54F, vehicle); } // 0xEA386986E786A54F 0x9803AF60 b323
	 // SET_VEHICLE_AL*
	static void _0x7D6F9A3EF26136A0(Vehicle vehicle, BOOL toggle, BOOL p2) { return invoke<void>(0x7D6F9A3EF26136A0, vehicle, toggle, p2); } // 0x7D6F9A3EF26136A0 0xBB54ECCA b323
	 // SET_VEHICLE_AL*
	static void _SET_VEHICLE_CAN_BE_LOCKED_ON(Vehicle vehicle, BOOL canBeLockedOn, BOOL unk) { return invoke<void>(0x1DDA078D12879EEE, vehicle, canBeLockedOn, unk); } // 0x1DDA078D12879EEE b463
	static Any _0x6EAAEFC76ACC311F(Any p0) { return invoke<Any>(0x6EAAEFC76ACC311F, p0); } // 0x6EAAEFC76ACC311F b757
	static void _0x407DC5E97DB1A4D3(Any p0, Any p1) { return invoke<void>(0x407DC5E97DB1A4D3, p0, p1); } // 0x407DC5E97DB1A4D3 b1493
	static BOOL IS_VEHICLE_MODEL(Vehicle vehicle, Hash model) { return invoke<BOOL>(0x423E8DE37D934D89, vehicle, model); } // 0x423E8DE37D934D89 0x013B10B6 b323
	static BOOL DOES_SCRIPT_VEHICLE_GENERATOR_EXIST(int vehicleGenerator) { return invoke<BOOL>(0xF6086BC836400876, vehicleGenerator); } // 0xF6086BC836400876 0xF6BDDA30 b323
	 // Creates a script vehicle generator at the given coordinates. Most parameters after the model hash are unknown.
	 // 
	 // Parameters:
	 // x/y/z - Generator position
	 // heading - Generator heading
	 // p4 - Unknown (always 5.0)
	 // p5 - Unknown (always 3.0)
	 // modelHash - Vehicle model hash
	 // p7/8/9/10 - Unknown (always -1)
	 // p11 - Unknown (usually TRUE, only one instance of FALSE)
	 // p12/13 - Unknown (always FALSE)
	 // p14 - Unknown (usally FALSE, only two instances of TRUE)
	 // p15 - Unknown (always TRUE)
	 // p16 - Unknown (always -1)
	 // 
	 // Vector3 coords = GET_ENTITY_COORDS(PLAYER_PED_ID(), 0);    CREATE_SCRIPT_VEHICLE_GENERATOR(coords.x, coords.y, coords.z, 1.0f, 5.0f, 3.0f, GET_HASH_KEY("adder"), -1. -1, -1, -1, -1, true, false, false, false, true, -1);
	static int CREATE_SCRIPT_VEHICLE_GENERATOR(float x, float y, float z, float heading, float p4, float p5, Hash modelHash, int p7, int p8, int p9, int p10, BOOL p11, BOOL p12, BOOL p13, BOOL p14, BOOL p15, int p16) { return invoke<int>(0x9DEF883114668116, x, y, z, heading, p4, p5, modelHash, p7, p8, p9, p10, p11, p12, p13, p14, p15, p16); } // 0x9DEF883114668116 0x25A9A261 b323
	static void DELETE_SCRIPT_VEHICLE_GENERATOR(int vehicleGenerator) { return invoke<void>(0x22102C9ABFCF125D, vehicleGenerator); } // 0x22102C9ABFCF125D 0xE4328E3F b323
	static void SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(float x1, float y1, float z1, float x2, float y2, float z2, BOOL p6, BOOL p7) { return invoke<void>(0xC12321827687FE4D, x1, y1, z1, x2, y2, z2, p6, p7); } // 0xC12321827687FE4D 0xB4E0E69A b323
	static void SET_ALL_VEHICLE_GENERATORS_ACTIVE() { return invoke<void>(0x34AD89078831A4BC); } // 0x34AD89078831A4BC 0xAB1FDD76 b323
	static void SET_ALL_LOW_PRIORITY_VEHICLE_GENERATORS_ACTIVE(BOOL active) { return invoke<void>(0x608207E7A8FB787C, active); } // 0x608207E7A8FB787C 0x87F767F2 b323
	 // Related to car generators & CPlayerSwitchMgrLong
	 // 
	 // SET_VEHICLE_*
	 // 
	 // SET_VEHICLE_GENERATORS_EXPECTED_GAMEPLAY_PT ?
	static void _0x9A75585FB2E54FAD(float x, float y, float z, float radius) { return invoke<void>(0x9A75585FB2E54FAD, x, y, z, radius); } // 0x9A75585FB2E54FAD 0x935A95DA b323
	 // CLEAR_VEHICLE_*
	static void _0x0A436B8643716D14() { return invoke<void>(0x0A436B8643716D14); } // 0x0A436B8643716D14 0x6C73E45A b323
	 // Sets a vehicle on the ground on all wheels.  Returns whether or not the operation was successful.
	 // 
	 // sfink: This has an additional param(Vehicle vehicle, float p1) which is always set to 5.0f in the b944 scripts.
	static BOOL SET_VEHICLE_ON_GROUND_PROPERLY(Vehicle vehicle, float p1) { return invoke<BOOL>(0x49733E92263139D1, vehicle, p1); } // 0x49733E92263139D1 0xE14FDBA6 b323
	static Any SET_VEHICLE_USE_CUTSCENE_WHEEL_COMPRESSION(Vehicle p0, BOOL p1, BOOL p2, BOOL p3) { return invoke<Any>(0xE023E8AC4EF7C117, p0, p1, p2, p3); } // 0xE023E8AC4EF7C117 0xA0909ADB b323
	static BOOL IS_VEHICLE_STUCK_ON_ROOF(Vehicle vehicle) { return invoke<BOOL>(0xB497F06B288DCFDF, vehicle); } // 0xB497F06B288DCFDF 0x18D07C6C b323
	static void ADD_VEHICLE_UPSIDEDOWN_CHECK(Vehicle vehicle) { return invoke<void>(0xB72E26D81006005B, vehicle); } // 0xB72E26D81006005B 0x3A13D384 b323
	static void REMOVE_VEHICLE_UPSIDEDOWN_CHECK(Vehicle vehicle) { return invoke<void>(0xC53EB42A499A7E90, vehicle); } // 0xC53EB42A499A7E90 0xF390BA1B b323
	 // Returns true if the vehicle's current speed is less than, or equal to 0.0025f.
	 // 
	 // For some vehicles it returns true if the current speed is <= 0.00039999999.
	static BOOL IS_VEHICLE_STOPPED(Vehicle vehicle) { return invoke<BOOL>(0x5721B434AD84D57A, vehicle); } // 0x5721B434AD84D57A 0x655F072C b323
	 // Gets the number of passengers, NOT including the driver. Use IS_VEHICLE_SEAT_FREE(Vehicle, -1) to also check for the driver
	static int GET_VEHICLE_NUMBER_OF_PASSENGERS(Vehicle vehicle) { return invoke<int>(0x24CB2137731FFE89, vehicle); } // 0x24CB2137731FFE89 0x1EF20849 b323
	static int GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(Vehicle vehicle) { return invoke<int>(0xA7C4F2C6E744A550, vehicle); } // 0xA7C4F2C6E744A550 0x0A2FC08C b323
	 // Returns max number of passengers (including the driver) for the specified vehicle model.
	 // 
	 // For a full list, see here: pastebin.com/MdETCS1j
	static int GET_VEHICLE_MODEL_NUMBER_OF_SEATS(Hash modelHash) { return invoke<int>(0x2AD93716F184EDA4, modelHash); } // 0x2AD93716F184EDA4 0x838F7BF7 b323
	static BOOL IS_SEAT_WARP_ONLY(Vehicle vehicle, int seatIndex) { return invoke<BOOL>(0xF7F203E31F96F6A1, vehicle, seatIndex); } // 0xF7F203E31F96F6A1 0x769E5CF2 b323
	static BOOL IS_TURRET_SEAT(Vehicle vehicle, int seatIndex) { return invoke<BOOL>(0xE33FFA906CE74880, vehicle, seatIndex); } // 0xE33FFA906CE74880 0x7C43D32A b323
	 // Returns true if the vehicle has the FLAG_ALLOWS_RAPPEL flag set.
	static BOOL _DOES_VEHICLE_ALLOW_RAPPEL(Vehicle vehicle) { return invoke<BOOL>(0x4E417C547182C84D, vehicle); } // 0x4E417C547182C84D b757
	static void SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(float multiplier) { return invoke<void>(0x245A6883D966D537, multiplier); } // 0x245A6883D966D537 0xF4187E51 b323
	static void SET_RANDOM_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(float multiplier) { return invoke<void>(0xB3B3359379FE77D3, multiplier); } // 0xB3B3359379FE77D3 0x543F712B b323
	static void SET_PARKED_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(float multiplier) { return invoke<void>(0xEAE6DCC7EEE3DB1D, multiplier); } // 0xEAE6DCC7EEE3DB1D 0xDD46CEBE b323
	static void SET_DISABLE_RANDOM_TRAINS_THIS_FRAME(BOOL toggle) { return invoke<void>(0xD4B8E3D1917BC86B, toggle); } // 0xD4B8E3D1917BC86B 0x09462665 b323
	static void SET_AMBIENT_VEHICLE_RANGE_MULTIPLIER_THIS_FRAME(float value) { return invoke<void>(0x90B6DA738A9A25DA, value); } // 0x90B6DA738A9A25DA 0xDAE2A2BE b323
	static void SET_NUMBER_OF_PARKED_VEHICLES(int value) { return invoke<void>(0xCAA15F13EBD417FF, value); } // 0xCAA15F13EBD417FF 0x206A58E8 b323
	 // 0 - CARLOCK_NONE
	 // 1 - CARLOCK_UNLOCKED
	 // 2 - CARLOCK_LOCKED (locked)
	 // 3 - CARLOCK_LOCKOUT_PLAYER_ONLY
	 // 4 - CARLOCK_LOCKED_PLAYER_INSIDE (can get in, can't leave)
	 // 
	 // (maybe, these are leftovers from GTA:VC)
	 // 5 - CARLOCK_LOCKED_INITIALLY
	 // 6 - CARLOCK_FORCE_SHUT_DOORS
	 // 7 - CARLOCK_LOCKED_BUT_CAN_BE_DAMAGED
	 // 
	 // (source: GTA VC miss2 leak, matching constants for 0/2/4, testing)
	 // 
	 // They use 10 in am_mp_property_int, don't know what it does atm.
	static void SET_VEHICLE_DOORS_LOCKED(Vehicle vehicle, int doorLockStatus) { return invoke<void>(0xB664292EAECF7FA6, vehicle, doorLockStatus); } // 0xB664292EAECF7FA6 0x4CDD35D0 b323
	 // if set to true, prevents vehicle sirens from having sound, leaving only the lights.
	static void SET_VEHICLE_HAS_MUTED_SIRENS(Vehicle vehicle, BOOL toggle) { return invoke<void>(0xD8050E0EB60CF274, vehicle, toggle); } // 0xD8050E0EB60CF274 0xC54156A9 b323
	static void SET_VEHICLE_DOORS_LOCKED_FOR_PLAYER(Vehicle vehicle, Player player, BOOL toggle) { return invoke<void>(0x517AAF684BB50CD1, vehicle, player, toggle); } // 0x517AAF684BB50CD1 0x49829236 b323
	 // After some analysis, I've decided that these are what the parameters are.
	 // 
	 // We can see this being used in R* scripts such as "am_mp_property_int.ysc.c4":
	 // l_11A1 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 1);
	 // ...
	 // VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_ALL_PLAYERS(l_11A1, 1);
	static void SET_VEHICLE_DOORS_LOCKED_FOR_ALL_PLAYERS(Vehicle vehicle, BOOL toggle) { return invoke<void>(0xA2F80B8D040727CC, vehicle, toggle); } // 0xA2F80B8D040727CC 0x891BA8A4 b323
	static void SET_VEHICLE_DOORS_LOCKED_FOR_NON_SCRIPT_PLAYERS(Vehicle vehicle, BOOL toggle) { return invoke<void>(0x9737A37136F07E75, vehicle, toggle); } // 0x9737A37136F07E75 0xE4EF6514 b323
	 // Explodes a selected vehicle.
	 // 
	 // Vehicle vehicle = Vehicle you want to explode.
	 // BOOL isAudible = If explosion makes a sound.
	 // BOOL isInvisible = If the explosion is invisible or not.
	 // 
	 // First BOOL does not give any visual explosion, the vehicle just falls apart completely but slowly and starts to burn.
	static void EXPLODE_VEHICLE(Vehicle vehicle, BOOL isAudible, BOOL isInvisible) { return invoke<void>(0xBA71116ADF5B514C, vehicle, isAudible, isInvisible); } // 0xBA71116ADF5B514C 0xBEDEACEB b323
	 // Tested on the player's current vehicle. Unless you kill the driver, the vehicle doesn't loose control, however, if enabled, explodeOnImpact is still active. The moment you crash, boom.
	static void SET_VEHICLE_OUT_OF_CONTROL(Vehicle vehicle, BOOL killDriver, BOOL explodeOnImpact) { return invoke<void>(0xF19D095E42D430CC, vehicle, killDriver, explodeOnImpact); } // 0xF19D095E42D430CC 0x3764D734 b323
	 // This is not tested - it's just an assumption.
	 // - Nac
	 // 
	 // Doesn't seem to work.  I'll try with an int instead. --JT
	 // 
	 // Read the scripts, im dumpass. 
	 // 
	 //                             if (!VEHICLE::IS_TAXI_LIGHT_ON(l_115)) {
	 //                                 VEHICLE::SET_TAXI_LIGHTS(l_115, 1);
	 //                             }
	static void SET_TAXI_LIGHTS(Vehicle vehicle, BOOL state) { return invoke<void>(0x598803E85E8448D9, vehicle, state); } // 0x598803E85E8448D9 0x68639D85 b323
	static BOOL IS_TAXI_LIGHT_ON(Vehicle vehicle) { return invoke<BOOL>(0x7504C0F113AB50FC, vehicle); } // 0x7504C0F113AB50FC 0x6FC4924A b323
	 // garageName example "Michael - Beverly Hills"
	 // 
	 // For a full list, see here: pastebin.com/73VfwsmS
	static BOOL IS_VEHICLE_IN_GARAGE_AREA(const char* garageName, Vehicle vehicle) { return invoke<BOOL>(0xCEE4490CD57BB3C2, garageName, vehicle); } // 0xCEE4490CD57BB3C2 0xA90EC257 b323
	 // colorPrimary & colorSecondary are the paint index for the vehicle.
	 // For a list of valid paint indexes, view: pastebin.com/pwHci0xK
	 // -------------------------------------------------------------------------
	 // Use this to get the number of color indices: pastebin.com/RQEeqTSM
	 // Note: minimum color index is 0, maximum color index is (numColorIndices - 1)
	static void SET_VEHICLE_COLOURS(Vehicle vehicle, int colorPrimary, int colorSecondary) { return invoke<void>(0x4F1D4BE3A7F24601, vehicle, colorPrimary, colorSecondary); } // 0x4F1D4BE3A7F24601 0x57F24253 b323
	 // It switch to highbeam when p1 is set to true.
	static void SET_VEHICLE_FULLBEAM(Vehicle vehicle, BOOL toggle) { return invoke<void>(0x8B7FD87F0DDB421E, vehicle, toggle); } // 0x8B7FD87F0DDB421E 0x9C49CC15 b323
	 // p1 (toggle) was always 1 (true) except in one case in the b678 scripts.
	static void SET_VEHICLE_IS_RACING(Vehicle vehicle, BOOL toggle) { return invoke<void>(0x07116E24E9D1929D, vehicle, toggle); } // 0x07116E24E9D1929D 0xA59E3DCD b323
	 // p1, p2, p3 are RGB values for color (255,0,0 for Red, ect)
	static void SET_VEHICLE_CUSTOM_PRIMARY_COLOUR(Vehicle vehicle, int r, int g, int b) { return invoke<void>(0x7141766F91D15BEA, vehicle, r, g, b); } // 0x7141766F91D15BEA 0x8DF9F9BC b323
	static void GET_VEHICLE_CUSTOM_PRIMARY_COLOUR(Vehicle vehicle, int* r, int* g, int* b) { return invoke<void>(0xB64CF2CCA9D95F52, vehicle, r, g, b); } // 0xB64CF2CCA9D95F52 0x1C2B9FEF b323
	static void CLEAR_VEHICLE_CUSTOM_PRIMARY_COLOUR(Vehicle vehicle) { return invoke<void>(0x55E1D2758F34E437, vehicle); } // 0x55E1D2758F34E437 0x51E1E33D b323
	static BOOL GET_IS_VEHICLE_PRIMARY_COLOUR_CUSTOM(Vehicle vehicle) { return invoke<BOOL>(0xF095C0405307B21B, vehicle); } // 0xF095C0405307B21B 0xD7EC8760 b323
	 // p1, p2, p3 are RGB values for color (255,0,0 for Red, ect)
	static void SET_VEHICLE_CUSTOM_SECONDARY_COLOUR(Vehicle vehicle, int r, int g, int b) { return invoke<void>(0x36CED73BFED89754, vehicle, r, g, b); } // 0x36CED73BFED89754 0x9D77259E b323
	static void GET_VEHICLE_CUSTOM_SECONDARY_COLOUR(Vehicle vehicle, int* r, int* g, int* b) { return invoke<void>(0x8389CD56CA8072DC, vehicle, r, g, b); } // 0x8389CD56CA8072DC 0x3FF247A2 b323
	static void CLEAR_VEHICLE_CUSTOM_SECONDARY_COLOUR(Vehicle vehicle) { return invoke<void>(0x5FFBDEEC3E8E2009, vehicle); } // 0x5FFBDEEC3E8E2009 0x7CE00B29 b323
	 // Check if Vehicle Secondary is avaliable for customize
	static BOOL GET_IS_VEHICLE_SECONDARY_COLOUR_CUSTOM(Vehicle vehicle) { return invoke<BOOL>(0x910A32E7AAD2656C, vehicle); } // 0x910A32E7AAD2656C 0x288AD228 b323
	 // formerly known as _SET_VEHICLE_PAINT_FADE
	 // 
	 // The parameter fade is a value from 0-1, where 0 is fresh paint.
	static void SET_VEHICLE_ENVEFF_SCALE(Vehicle vehicle, float fade) { return invoke<void>(0x3AFDC536C3D01674, vehicle, fade); } // 0x3AFDC536C3D01674 0x8332730C b323
	 // formerly known as _GET_VEHICLE_PAINT_FADE
	 // 
	 // The result is a value from 0-1, where 0 is fresh paint.
	static float GET_VEHICLE_ENVEFF_SCALE(Vehicle vehicle) { return invoke<float>(0xA82819CAC9C4C403, vehicle); } // 0xA82819CAC9C4C403 0xD5F1EEE1 b323
	 // Hardcoded to not work in multiplayer.
	static void SET_CAN_RESPRAY_VEHICLE(Vehicle vehicle, BOOL state) { return invoke<void>(0x52BBA29D5EC69356, vehicle, state); } // 0x52BBA29D5EC69356 0x37677590 b323
	static void SET_BOAT_ANCHOR(Vehicle vehicle, BOOL toggle) { return invoke<void>(0x75DBEC174AEEAD10, vehicle, toggle); } // 0x75DBEC174AEEAD10 0xA3906284 b323
	static BOOL CAN_ANCHOR_BOAT_HERE(Vehicle vehicle) { return invoke<BOOL>(0x26C10ECBDA5D043B, vehicle); } // 0x26C10ECBDA5D043B 0xE97A4F5E b323
	static void _SET_BOAT_FROZEN_WHEN_ANCHORED(Vehicle vehicle, BOOL toggle) { return invoke<void>(0xE3EBAAE484798530, vehicle, toggle); } // 0xE3EBAAE484798530 0x0ED84792 b323
	 // No observed effect.
	static void _0xB28B1FE5BFADD7F5(Vehicle vehicle, BOOL p1) { return invoke<void>(0xB28B1FE5BFADD7F5, vehicle, p1); } // 0xB28B1FE5BFADD7F5 0xA739012A b323
	static void _SET_BOAT_MOVEMENT_RESISTANCE(Vehicle vehicle, float value) { return invoke<void>(0xE842A9398079BD82, vehicle, value); } // 0xE842A9398079BD82 0x66FA450C b323
	static void SET_BOAT_SINKS_WHEN_WRECKED(Vehicle vehicle, BOOL toggle) { return invoke<void>(0x8F719973E1445BA2, vehicle, toggle); } // 0x8F719973E1445BA2 0x35614622 b323
	 // Activate siren on vehicle (Only works if the vehicle has a siren).
	static void SET_VEHICLE_SIREN(Vehicle vehicle, BOOL toggle) { return invoke<void>(0xF4924635A19EB37D, vehicle, toggle); } // 0xF4924635A19EB37D 0x4AC1EFC7 b323
	static BOOL IS_VEHICLE_SIREN_ON(Vehicle vehicle) { return invoke<BOOL>(0x4C9BF537BE2634B2, vehicle); } // 0x4C9BF537BE2634B2 0x25EB5873 b323
	 // If set to true, vehicle will not take crash damage, but is still susceptible to damage from bullets and explosives
	static void SET_VEHICLE_STRONG(Vehicle vehicle, BOOL toggle) { return invoke<void>(0x3E8C8727991A8A0B, vehicle, toggle); } // 0x3E8C8727991A8A0B 0xC758D19F b323
	static void REMOVE_VEHICLE_STUCK_CHECK(Vehicle vehicle) { return invoke<void>(0x8386BFB614D06749, vehicle); } // 0x8386BFB614D06749 0x81594917 b323
	static void GET_VEHICLE_COLOURS(Vehicle vehicle, int* colorPrimary, int* colorSecondary) { return invoke<void>(0xA19435F193E081AC, vehicle, colorPrimary, colorSecondary); } // 0xA19435F193E081AC 0x40D82D88 b323
	 // Has an additional BOOL parameter since version [???].
	 // 
	 // Check if a vehicle seat is free.
	 // -1 being the driver seat.
	 // Use GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(vehicle) - 1 for last seat index.
	static BOOL IS_VEHICLE_SEAT_FREE(Vehicle vehicle, int seatIndex, BOOL p2) { return invoke<BOOL>(0x22AC59A870E6A669, vehicle, seatIndex, p2); } // 0x22AC59A870E6A669 0xDAF42B02 b323
	 // -1 (driver) <= index < GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(vehicle)
	static Ped GET_PED_IN_VEHICLE_SEAT(Vehicle vehicle, int index, Any p2) { return invoke<Ped>(0xBB40DD2270B65366, vehicle, index, p2); } // 0xBB40DD2270B65366 0x388FDE9A b323
	static Ped GET_LAST_PED_IN_VEHICLE_SEAT(Vehicle vehicle, int seatIndex) { return invoke<Ped>(0x83F969AA1EE2A664, vehicle, seatIndex); } // 0x83F969AA1EE2A664 0xF7C6792D b323
	static BOOL GET_VEHICLE_LIGHTS_STATE(Vehicle vehicle, BOOL* lightsOn, BOOL* highbeamsOn) { return invoke<BOOL>(0xB91B4C20085BD12F, vehicle, lightsOn, highbeamsOn); } // 0xB91B4C20085BD12F 0x7C278621 b323
	 // wheelID used for 4 wheelers seem to be (0, 1, 4, 5)
	 // completely - is to check if tire completely gone from rim.
	 // 
	 // '0 = wheel_lf / bike, plane or jet front
	 // '1 = wheel_rf
	 // '2 = wheel_lm / in 6 wheels trailer, plane or jet is first one on left
	 // '3 = wheel_rm / in 6 wheels trailer, plane or jet is first one on right
	 // '4 = wheel_lr / bike rear / in 6 wheels trailer, plane or jet is last one on left
	 // '5 = wheel_rr / in 6 wheels trailer, plane or jet is last one on right
	 // '45 = 6 wheels trailer mid wheel left
	 // '47 = 6 wheels trailer mid wheel right
	static BOOL IS_VEHICLE_TYRE_BURST(Vehicle vehicle, int wheelID, BOOL completely) { return invoke<BOOL>(0xBA291848A0815CA9, vehicle, wheelID, completely); } // 0xBA291848A0815CA9 0x48C80210 b323
	 // SCALE: Setting the speed to 30 would result in a speed of roughly 60mph, according to speedometer.
	 // 
	 // Speed is in meters per second
	 // You can convert meters/s to mph here:
	 // http://www.calculateme.com/Speed/MetersperSecond/ToMilesperHour.htm
	static void SET_VEHICLE_FORWARD_SPEED(Vehicle vehicle, float speed) { return invoke<void>(0xAB54A438726D25D5, vehicle, speed); } // 0xAB54A438726D25D5 0x69880D14 b323
	 // This native makes the vehicle stop immediately, as happens when we enter a MP garage.
	 // 
	 // . distance defines how far it will travel until stopping. Garage doors use 3.0.
	 // 
	 // . If killEngine is set to 1, you cannot resume driving the vehicle once it stops. This looks like is a bitmapped integer.
	static void BRING_VEHICLE_TO_HALT(Vehicle vehicle, float distance, int duration, BOOL unknown) { return invoke<void>(0x260BE8F09E326A20, vehicle, distance, duration, unknown); } // 0x260BE8F09E326A20 0xCBC7D3C8 b323
	static BOOL _0x62CA17B74C435651(Vehicle vehicle) { return invoke<BOOL>(0x62CA17B74C435651, vehicle); } // 0x62CA17B74C435651 0x593143B9 b323
	static BOOL _IS_HANDLER_FRAME_ABOVE_CONTAINER(Vehicle vehicle, Entity entity) { return invoke<BOOL>(0x89D630CF5EA96D23, vehicle, entity); } // 0x89D630CF5EA96D23 0xFBF5536A b323
	static void _0x6A98C2ECF57FA5D4(Vehicle vehicle, Entity entity) { return invoke<void>(0x6A98C2ECF57FA5D4, vehicle, entity); } // 0x6A98C2ECF57FA5D4 0x20AB5783 b323
	static BOOL IS_HELI_LANDING_AREA_BLOCKED(Vehicle vehicle) { return invoke<BOOL>(0x634148744F385576, vehicle); } // 0x634148744F385576 0x6346B7CC b323
	static void SET_HELI_TURBULENCE_SCALAR(Vehicle vehicle, float p1) { return invoke<void>(0xE6F13851780394DA, vehicle, p1); } // 0xE6F13851780394DA 0xCCB41A55 b323
	 // Initially used in Max Payne 3, that's why we know the name.
	static void SET_CAR_BOOT_OPEN(Vehicle vehicle) { return invoke<void>(0xFC40CBF7B90CA77C, vehicle); } // 0xFC40CBF7B90CA77C b877
	 // "To burst tyres VEHICLE::SET_VEHICLE_TYRE_BURST(vehicle, 0, true, 1000.0)
	 // to burst all tyres type it 8 times where p1 = 0 to 7.
	 // 
	 // p3 seems to be how much damage it has taken. 0 doesn't deflate them, 1000 completely deflates them.
	 // 
	 // '0 = wheel_lf / bike, plane or jet front
	 // '1 = wheel_rf
	 // '2 = wheel_lm / in 6 wheels trailer, plane or jet is first one on left
	 // '3 = wheel_rm / in 6 wheels trailer, plane or jet is first one on right
	 // '4 = wheel_lr / bike rear / in 6 wheels trailer, plane or jet is last one on left
	 // '5 = wheel_rr / in 6 wheels trailer, plane or jet is last one on right
	 // '45 = 6 wheels trailer mid wheel left
	 // '47 = 6 wheels trailer mid wheel right
	static void SET_VEHICLE_TYRE_BURST(Vehicle vehicle, int index, BOOL onRim, float p3) { return invoke<void>(0xEC6A202EE4960385, vehicle, index, onRim, p3); } // 0xEC6A202EE4960385 0x89D28068 b323
	 // Closes all doors of a vehicle:
	static void SET_VEHICLE_DOORS_SHUT(Vehicle vehicle, BOOL closeInstantly) { return invoke<void>(0x781B3D62BB013EF5, vehicle, closeInstantly); } // 0x781B3D62BB013EF5 0xBB1FF6E7 b323
	 // Allows you to toggle bulletproof tires.
	static void SET_VEHICLE_TYRES_CAN_BURST(Vehicle vehicle, BOOL toggle) { return invoke<void>(0xEB9DC3C7D8596C46, vehicle, toggle); } // 0xEB9DC3C7D8596C46 0xA198DB54 b323
	static BOOL GET_VEHICLE_TYRES_CAN_BURST(Vehicle vehicle) { return invoke<BOOL>(0x678B9BB8C3F58FEB, vehicle); } // 0x678B9BB8C3F58FEB 0x4D76CD2F b323
	 // doorIndex:
	 // 0 = Front Left Door
	 // 1 = Front Right Door
	 // 2 = Back Left Door
	 // 3 = Back Right Door
	 // 4 = Hood
	 // 5 = Trunk
	 // 6 = Back
	 // 7 = Back2
	static void SET_VEHICLE_DOOR_OPEN(Vehicle vehicle, int doorIndex, BOOL loose, BOOL openInstantly) { return invoke<void>(0x7C65DAC73C35C862, vehicle, doorIndex, loose, openInstantly); } // 0x7C65DAC73C35C862 0xBB75D38B b323
	 // windowIndex:
	 // 0 = Front Right Window
	 // 1 = Front Left Window
	 // 2 = Back Right Window
	 // 3 = Back Left Window
	 // 4 = Unknown
	 // 5 = Unknown
	 // 6 = Windscreen
	 // 7 = Rear Windscreen
	static void REMOVE_VEHICLE_WINDOW(Vehicle vehicle, int windowIndex) { return invoke<void>(0xA711568EEDB43069, vehicle, windowIndex); } // 0xA711568EEDB43069 0xBB8104A3 b323
	 // Roll down all the windows of the vehicle passed through the first parameter.
	static void ROLL_DOWN_WINDOWS(Vehicle vehicle) { return invoke<void>(0x85796B0549DDE156, vehicle); } // 0x85796B0549DDE156 0x51A16DC6 b323
	 // windowIndex:
	 // 0 = Front Right Window
	 // 1 = Front Left Window
	 // 2 = Back Right Window
	 // 3 = Back Left Window
	static void ROLL_DOWN_WINDOW(Vehicle vehicle, int windowIndex) { return invoke<void>(0x7AD9E6CE657D69E3, vehicle, windowIndex); } // 0x7AD9E6CE657D69E3 0xF840134C b323
	 // windowIndex:
	 // 0 = Front Right Window
	 // 1 = Front Left Window
	 // 2 = Back Right Window
	 // 3 = Back Left Window
	 // 4 = Unknown
	 // 5 = Unknown
	 // 6 = Windscreen
	 // 7 = Rear Windscreen
	static void SMASH_VEHICLE_WINDOW(Vehicle vehicle, int index) { return invoke<void>(0x9E5B5E4D2CCD2259, vehicle, index); } // 0x9E5B5E4D2CCD2259 0xDDD9A8C2 b323
	 // set's if the vehicle has lights or not.
	 // not an on off toggle.
	 // p1 = 0 ;vehicle normal lights, off then lowbeams, then highbeams
	 // p1 = 1 ;vehicle doesn't have lights, always off
	 // p1 = 2 ;vehicle has always on lights
	 // p1 = 3 ;or even larger like 4,5,... normal lights like =1
	 // note1: when using =2 on day it's lowbeam,highbeam
	 // but at night it's lowbeam,lowbeam,highbeam
	 // note2: when using =0 it's affected by day or night for highbeams don't exist in daytime.
	static void SET_VEHICLE_LIGHTS(Vehicle vehicle, int state) { return invoke<void>(0x34E710FF01247C5A, vehicle, state); } // 0x34E710FF01247C5A 0xE8930226 b323
	static void _SET_VEHICLE_USE_PLAYER_LIGHT_SETTINGS(Vehicle vehicle, BOOL p1) { return invoke<void>(0xC45C27EF50F36ADC, vehicle, p1); } // 0xC45C27EF50F36ADC 0x4221E435 b323
	 // p1 can be either 0, 1 or 2.
	 // 
	 // Determines how vehicle lights behave when toggled.
	 // 
	 // 0 = Default (Lights can be toggled between off, normal and high beams)
	 // 1 = Lights Disabled (Lights are fully disabled, cannot be toggled)
	 // 2 = Always On (Lights can be toggled between normal and high beams)
	static void _SET_VEHICLE_LIGHTS_MODE(Vehicle vehicle, int p1) { return invoke<void>(0x1FD09E7390A74D54, vehicle, p1); } // 0x1FD09E7390A74D54 b323
	static void SET_VEHICLE_ALARM(Vehicle vehicle, BOOL state) { return invoke<void>(0xCDE5E70C1DDB954C, vehicle, state); } // 0xCDE5E70C1DDB954C 0x24877D84 b323
	static void START_VEHICLE_ALARM(Vehicle vehicle) { return invoke<void>(0xB8FF7AB45305C345, vehicle); } // 0xB8FF7AB45305C345 0x5B451FF7 b323
	static BOOL IS_VEHICLE_ALARM_ACTIVATED(Vehicle vehicle) { return invoke<BOOL>(0x4319E335B71FFF34, vehicle); } // 0x4319E335B71FFF34 0xF2630A4C b323
	static void SET_VEHICLE_INTERIORLIGHT(Vehicle vehicle, BOOL toggle) { return invoke<void>(0xBC2042F090AF6AD3, vehicle, toggle); } // 0xBC2042F090AF6AD3 0x9AD1FE1E b323
	static void ATTACH_VEHICLE_TO_TRAILER(Vehicle vehicle, Vehicle trailer, float radius) { return invoke<void>(0x3C7D42D58F770B54, vehicle, trailer, radius); } // 0x3C7D42D58F770B54 0x2133977F b323
	static void ATTACH_VEHICLE_ON_TO_TRAILER(Vehicle vehicle, Vehicle trailer, float p2, float p3, float p4, float p5, float p6, float p7, float p8, float p9, float p10, float p11) { return invoke<void>(0x16B5E274BDE402F8, vehicle, trailer, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11); } // 0x16B5E274BDE402F8 0x12AC1A16 b323
	static void DETACH_VEHICLE_FROM_TRAILER(Vehicle vehicle) { return invoke<void>(0x90532EDF0D2BDD86, vehicle); } // 0x90532EDF0D2BDD86 0xB5DBF91D b323
	static BOOL IS_VEHICLE_ATTACHED_TO_TRAILER(Vehicle vehicle) { return invoke<BOOL>(0xE7CF3C4F9F489F0C, vehicle); } // 0xE7CF3C4F9F489F0C 0xE142BBCC b323
	static void SET_TRAILER_INVERSE_MASS_SCALE(Vehicle vehicle, float p1) { return invoke<void>(0x2A8F319B392E7B3F, vehicle, p1); } // 0x2A8F319B392E7B3F 0xE74E85CE b323
	 // in the decompiled scripts, seems to be always called on the vehicle right after being attached to a trailer.
	static void SET_TRAILER_LEGS_RAISED(Vehicle vehicle) { return invoke<void>(0x95CF53B3D687F9FA, vehicle); } // 0x95CF53B3D687F9FA 0x06C47A6F b323
	 // Sets a vehicle's license plate text.  8 chars maximum.
	 // 
	 // Example:
	 // Ped playerPed = PLAYER::PLAYER_PED_ID();
	 // Vehicle veh = PED::GET_VEHICLE_PED_IS_USING(playerPed);
	 // char *plateText = "KING";
	 // VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(veh, plateText);
	static void SET_VEHICLE_NUMBER_PLATE_TEXT(Vehicle vehicle, const char* plateText) { return invoke<void>(0x95A88F0B409CDA47, vehicle, plateText); } // 0x95A88F0B409CDA47 0x400F9556 b323
	 // Returns the license plate text from a vehicle.  8 chars maximum.
	static const char* GET_VEHICLE_NUMBER_PLATE_TEXT(Vehicle vehicle) { return invoke<const char*>(0x7CE1CCB9B293020E, vehicle); } // 0x7CE1CCB9B293020E 0xE8522D58 b323
	 // Returns the number of *types* of licence plates, enumerated below in SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX.
	static int GET_NUMBER_OF_VEHICLE_NUMBER_PLATES() { return invoke<int>(0x4C4D6B2644F458CB); } // 0x4C4D6B2644F458CB 0xD24BC1AE b323
	 // Plates:
	 // Blue/White - 0
	 // Yellow/black - 1
	 // Yellow/Blue - 2
	 // Blue/White2 - 3
	 // Blue/White3 - 4
	 // Yankton - 5
	static void SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(Vehicle vehicle, int plateIndex) { return invoke<void>(0x9088EB5A43FFB0A1, vehicle, plateIndex); } // 0x9088EB5A43FFB0A1 0xA1A1890E b323
	 // Returns the PlateType of a vehicle
	 //       Blue_on_White_1 = 3,
	 //       Blue_on_White_2 = 0,
	 //       Blue_on_White_3 = 4,
	 //       Yellow_on_Blue = 2,
	 //        Yellow_on_Black = 1,
	 //       North_Yankton = 5,
	static int GET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(Vehicle vehicle) { return invoke<int>(0xF11BC2DD9A3E7195, vehicle); } // 0xF11BC2DD9A3E7195 0x499747B6 b323
	static void SET_RANDOM_TRAINS(BOOL toggle) { return invoke<void>(0x80D9F74197EA47D9, toggle); } // 0x80D9F74197EA47D9 0xD461CA7F b323
	 // Train models HAVE TO be loaded (requested) before you use this.
	 // For variation 15 - request:
	 // 
	 // freight
	 // freightcar
	 // freightgrain
	 // freightcont1
	 // freightcont2
	 // freighttrailer
	 // 
	 // 
	static Vehicle CREATE_MISSION_TRAIN(int variation, float x, float y, float z, BOOL direction) { return invoke<Vehicle>(0x63C6CCA8E68AE8C8, variation, x, y, z, direction); } // 0x63C6CCA8E68AE8C8 0xD4C2EAFD b323
	static void DELETE_ALL_TRAINS() { return invoke<void>(0x736A718577F39C7D); } // 0x736A718577F39C7D 0x83DE7ABF b323
	static void SET_TRAIN_SPEED(Vehicle train, float speed) { return invoke<void>(0xAA0BC91BE0B796E3, train, speed); } // 0xAA0BC91BE0B796E3 0xDFC35E4D b323
	static void SET_TRAIN_CRUISE_SPEED(Vehicle train, float speed) { return invoke<void>(0x16469284DB8C62B5, train, speed); } // 0x16469284DB8C62B5 0xB507F51D b323
	static void SET_GARBAGE_TRUCKS(BOOL toggle) { return invoke<void>(0x2AFD795EEAC8D30D, toggle); } // 0x2AFD795EEAC8D30D 0xD9ABB0FF b323
	 // Maximum amount of vehicles with vehicle stuck check appears to be 16.
	static BOOL DOES_VEHICLE_HAVE_STUCK_VEHICLE_CHECK(Vehicle vehicle) { return invoke<BOOL>(0x57E4C39DE5EE8470, vehicle); } // 0x57E4C39DE5EE8470 0x5D91D9AC b323
	 // See REQUEST_VEHICLE_RECORDING
	static int GET_VEHICLE_RECORDING_ID(int recording, const char* script) { return invoke<int>(0x21543C612379DB3C, recording, script); } // 0x21543C612379DB3C 0x328D601D b323
	 // Request the vehicle recording defined by the lowercase format string "%s%03d.yvr". For example, REQUEST_VEHICLE_RECORDING(1, "FBIs1UBER") corresponds to fbis1uber001.yvr.
	 // For all vehicle recording/playback natives, "script" is a common prefix that usually corresponds to the script/mission the recording is used in, "recording" is its int suffix, and "id" (e.g., in native GET_TOTAL_DURATION_OF_VEHICLE_RECORDING_ID) corresponds to a unique identifier within the recording streaming module.
	 // Note that only 24 recordings (hardcoded in multiple places) can ever active at a given time before clobbering begins.
	static void REQUEST_VEHICLE_RECORDING(int recording, const char* script) { return invoke<void>(0xAF514CABE74CBF15, recording, script); } // 0xAF514CABE74CBF15 0x91AFEFD9 b323
	 // See REQUEST_VEHICLE_RECORDING
	static BOOL HAS_VEHICLE_RECORDING_BEEN_LOADED(int recording, const char* script) { return invoke<BOOL>(0x300D614A4C785FC4, recording, script); } // 0x300D614A4C785FC4 0xF52CD7F5 b323
	 // See REQUEST_VEHICLE_RECORDING
	static void REMOVE_VEHICLE_RECORDING(int recording, const char* script) { return invoke<void>(0xF1160ACCF98A3FC8, recording, script); } // 0xF1160ACCF98A3FC8 0xD3C05B00 b323
	static Vector3 GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(int id, float time) { return invoke<Vector3>(0x92523B76657A517D, id, time); } // 0x92523B76657A517D 0xF31973BB b323
	 // This native does no interpolation between pathpoints. The same position will be returned for all times up to the next pathpoint in the recording.
	 // 
	 // See REQUEST_VEHICLE_RECORDING
	static Vector3 GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(int recording, float time, const char* script) { return invoke<Vector3>(0xD242728AA6F0FBA2, recording, time, script); } // 0xD242728AA6F0FBA2 0x7178558D b323
	static Vector3 GET_ROTATION_OF_VEHICLE_RECORDING_ID_AT_TIME(int id, float time) { return invoke<Vector3>(0xF0F2103EFAF8CBA7, id, time); } // 0xF0F2103EFAF8CBA7 0x4D1C15C2 b323
	static float GET_TOTAL_DURATION_OF_VEHICLE_RECORDING_ID(int id) { return invoke<float>(0x102D125411A7B6E6, id); } // 0x102D125411A7B6E6 0x7116785E b323
	 // See REQUEST_VEHICLE_RECORDING
	static float GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(int recording, const char* script) { return invoke<float>(0x0E48D1C262390950, recording, script); } // 0x0E48D1C262390950 0x5B35EEB7 b323
	static float GET_POSITION_IN_RECORDING(Vehicle vehicle) { return invoke<float>(0x2DACD605FC681475, vehicle); } // 0x2DACD605FC681475 0x7DCD644C b323
	 // Can be used with GET_TOTAL_DURATION_OF_VEHICLE_RECORDING{_ID} to compute a percentage.
	static float GET_TIME_POSITION_IN_RECORDING(Vehicle vehicle) { return invoke<float>(0x5746F3A7AB7FE544, vehicle); } // 0x5746F3A7AB7FE544 0xF8C3E4A2 b323
	 // p3 is some flag related to 'trailers' (invokes CVehicle::GetTrailer).
	 // 
	 // See REQUEST_VEHICLE_RECORDING
	static void START_PLAYBACK_RECORDED_VEHICLE(Vehicle vehicle, int recording, const char* script, BOOL p3) { return invoke<void>(0x3F878F92B3A7A071, vehicle, recording, script, p3); } // 0x3F878F92B3A7A071 0xCF614CA8 b323
	 // flags requires further research, e.g., 0x4/0x8 are related to the AI driving task and 0x20 is internally set and interacts with dynamic entity components.
	 // 
	 // time, often zero and capped at 500, is related to SET_PLAYBACK_TO_USE_AI_TRY_TO_REVERT_BACK_LATER
	static void START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(Vehicle vehicle, int recording, const char* script, int flags, int time, int drivingStyle) { return invoke<void>(0x7D80FD645D4DA346, vehicle, recording, script, flags, time, drivingStyle); } // 0x7D80FD645D4DA346 0x4E721AD2 b323
	 // Often called after START_PLAYBACK_RECORDED_VEHICLE and SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE; similar in use to FORCE_ENTITY_AI_AND_ANIMATION_UPDATE.
	static void FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Vehicle vehicle, BOOL p1) { return invoke<void>(0x1F2E4E06DEA8992B, vehicle, p1); } // 0x1F2E4E06DEA8992B 0x01B91CD0 b323
	static void STOP_PLAYBACK_RECORDED_VEHICLE(Vehicle vehicle) { return invoke<void>(0x54833611C17ABDEA, vehicle); } // 0x54833611C17ABDEA 0xAE99C57C b323
	static void PAUSE_PLAYBACK_RECORDED_VEHICLE(Vehicle vehicle) { return invoke<void>(0x632A689BF42301B1, vehicle); } // 0x632A689BF42301B1 0xCCF54912 b323
	static void UNPAUSE_PLAYBACK_RECORDED_VEHICLE(Vehicle vehicle) { return invoke<void>(0x8879EE09268305D5, vehicle); } // 0x8879EE09268305D5 0x59060F75 b323
	static BOOL IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Vehicle vehicle) { return invoke<BOOL>(0x1C8A4C2C19E68EEC, vehicle); } // 0x1C8A4C2C19E68EEC 0x61F7650D b323
	static BOOL IS_PLAYBACK_USING_AI_GOING_ON_FOR_VEHICLE(Vehicle vehicle) { return invoke<BOOL>(0xAEA8FD591FAD4106, vehicle); } // 0xAEA8FD591FAD4106 0x63022C58 b323
	static int GET_CURRENT_PLAYBACK_FOR_VEHICLE(Vehicle vehicle) { return invoke<int>(0x42BC05C27A946054, vehicle); } // 0x42BC05C27A946054 0xA3F44390 b323
	static void SET_PLAYBACK_SPEED(Vehicle vehicle, float speed) { return invoke<void>(0x6683AB880E427778, vehicle, speed); } // 0x6683AB880E427778 0x684E26E4 b323
	 // AI abides by the provided driving style (e.g., stopping at red lights or waiting behind traffic) while executing the specificed vehicle recording.
	 // 
	 // 0x1F2E4E06DEA8992B is a related native that deals with the AI physics for such recordings.
	static void START_PLAYBACK_RECORDED_VEHICLE_USING_AI(Vehicle vehicle, int recording, const char* script, float speed, int drivingStyle) { return invoke<void>(0x29DE5FA52D00428C, vehicle, recording, script, speed, drivingStyle); } // 0x29DE5FA52D00428C 0x8DE8E24E b323
	 // SET_TIME_POSITION_IN_RECORDING can be emulated by: desired_time - GET_TIME_POSITION_IN_RECORDING(vehicle)
	static void SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Vehicle vehicle, float time) { return invoke<void>(0x9438F7AD68771A20, vehicle, time); } // 0x9438F7AD68771A20 0xCF3EFA4B b323
	 // Identical to SET_PLAYBACK_TO_USE_AI_TRY_TO_REVERT_BACK_LATER with 0 as arguments for p1 and p3.
	static void SET_PLAYBACK_TO_USE_AI(Vehicle vehicle, int drivingStyle) { return invoke<void>(0xA549C3B37EA28131, vehicle, drivingStyle); } // 0xA549C3B37EA28131 0xB536CCD7 b323
	static void _0x796A877E459B99EA(Any p0, float p1, float p2, float p3) { return invoke<void>(0x796A877E459B99EA, p0, p1, p2, p3); } // 0x796A877E459B99EA 0x5C9F477C b323
	static void ADD_VEHICLE_STUCK_CHECK_WITH_WARP(Any p0, float p1, Any p2, BOOL p3, BOOL p4, BOOL p5, Any p6) { return invoke<void>(0x2FA9923062DD396C, p0, p1, p2, p3, p4, p5, p6); } // 0x2FA9923062DD396C 0xC8B789AD b323
	 // seems to make the vehicle stop spawning naturally in traffic. Here's an essential example:
	 // 
	 // VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(GAMEPLAY::GET_HASH_KEY("taco"), true);
	 // 
	 // god I hate taco vans
	 // 
	 // Confirmed to work? Needs to be looped? Can not get it to work.
	static void SET_VEHICLE_MODEL_IS_SUPPRESSED(Hash model, BOOL suppressed) { return invoke<void>(0x0FC2D89AC25A5814, model, suppressed); } // 0x0FC2D89AC25A5814 0x42A08C9B b323
	 // Gets a random vehicle in a sphere at the specified position, of the specified radius.
	 // 
	 // x: The X-component of the position of the sphere.
	 // y: The Y-component of the position of the sphere.
	 // z: The Z-component of the position of the sphere.
	 // radius: The radius of the sphere. Max is 9999.9004.
	 // modelHash: The vehicle model to limit the selection to. Pass 0 for any model.
	 // flags: The bitwise flags that modifies the behaviour of this function.
	static Vehicle GET_RANDOM_VEHICLE_IN_SPHERE(float x, float y, float z, float radius, Hash modelHash, int flags) { return invoke<Vehicle>(0x386F6CE5BAF6091C, x, y, z, radius, modelHash, flags); } // 0x386F6CE5BAF6091C 0x57216D03 b323
	 // Example usage
	 // VEHICLE::GET_CLOSEST_VEHICLE(x, y, z, radius, hash, unknown leave at 70) 
	 // 
	 // x, y, z: Position to get closest vehicle to.
	 // radius: Max radius to get a vehicle.
	 // modelHash: Limit to vehicles with this model. 0 for any.
	 // flags: The bitwise flags altering the function's behaviour.
	 // 
	 // Does not return police cars or helicopters.
	 // 
	 // It seems to return police cars for me, does not seem to return helicopters, planes or boats for some reason
	 // 
	 // Only returns non police cars and motorbikes with the flag set to 70 and modelHash to 0. ModelHash seems to always be 0 when not a modelHash in the scripts, as stated above. 
	 // 
	 // These flags were found in the b617d scripts: 0,2,4,6,7,23,127,260,2146,2175,12294,16384,16386,20503,32768,67590,67711,98309,100359.
	 // Converted to binary, each bit probably represents a flag as explained regarding another native here: gtaforums.com/topic/822314-guide-driving-styles
	 // 
	 // Conversion of found flags to binary: pastebin.com/kghNFkRi
	 // 
	 // At exactly 16384 which is 0100000000000000 in binary and 4000 in hexadecimal only planes are returned. 
	 // 
	 // It's probably more convenient to use worldGetAllVehicles(int *arr, int arrSize) and check the shortest distance yourself and sort if you want by checking the vehicle type with for example VEHICLE::IS_THIS_MODEL_A_BOAT
	 // 
	 // -------------------------------------------------------------------------
	 // 
	 // Conclusion: This native is not worth trying to use. Use something like this instead: pastebin.com/xiFdXa7h
	static Vehicle GET_CLOSEST_VEHICLE(float x, float y, float z, float radius, Hash modelHash, int flags) { return invoke<Vehicle>(0xF73EB622C4F1689B, x, y, z, radius, modelHash, flags); } // 0xF73EB622C4F1689B 0xD7E26B2C b323
	 // Corrected p1. it's basically the 'carriage/trailer number'. So if the train has 3 trailers you'd call the native once with a var or 3 times with 1, 2, 3.
	static Entity GET_TRAIN_CARRIAGE(Vehicle train, int trailerNumber) { return invoke<Entity>(0x08AAFD0814722BC3, train, trailerNumber); } // 0x08AAFD0814722BC3 0x2544E7A6 b323
	static void DELETE_MISSION_TRAIN(Vehicle* train) { return invoke<void>(0x5B76B14AE875C795, train); } // 0x5B76B14AE875C795 0x86C9497D b323
	 // p1 is always 0
	static void SET_MISSION_TRAIN_AS_NO_LONGER_NEEDED(Vehicle* train, BOOL p1) { return invoke<void>(0xBBE7648349B49BE8, train, p1); } // 0xBBE7648349B49BE8 0x19808560 b323
	static BOOL IS_THIS_MODEL_A_BOAT(Hash model) { return invoke<BOOL>(0x45A9187928F4B9E3, model); } // 0x45A9187928F4B9E3 0x10F6085C b323
	 // Checks if model is a boat, then checks for FLAG_IS_JETSKI.
	static BOOL IS_THIS_MODEL_A_JETSKI(Hash model) { return invoke<BOOL>(0x9537097412CF75FE, model); } // 0x9537097412CF75FE b323
	static BOOL IS_THIS_MODEL_A_PLANE(Hash model) { return invoke<BOOL>(0xA0948AB42D7BA0DE, model); } // 0xA0948AB42D7BA0DE 0x3B3907BB b323
	static BOOL IS_THIS_MODEL_A_HELI(Hash model) { return invoke<BOOL>(0xDCE4334788AF94EA, model); } // 0xDCE4334788AF94EA 0x8AF7F568 b323
	 // To check if the model is an amphibious car, see gtaforums.com/topic/717612-v-scriptnative-documentation-and-research/page-33#entry1069317363 (for build 944 and above only!)
	static BOOL IS_THIS_MODEL_A_CAR(Hash model) { return invoke<BOOL>(0x7F6DB52EEFC96DF8, model); } // 0x7F6DB52EEFC96DF8 0x60E4C22F b323
	static BOOL IS_THIS_MODEL_A_TRAIN(Hash model) { return invoke<BOOL>(0xAB935175B22E822B, model); } // 0xAB935175B22E822B 0xF87DCFFD b323
	static BOOL IS_THIS_MODEL_A_BIKE(Hash model) { return invoke<BOOL>(0xB50C0B0CEDC6CE84, model); } // 0xB50C0B0CEDC6CE84 0x7E702CDD b323
	static BOOL IS_THIS_MODEL_A_BICYCLE(Hash model) { return invoke<BOOL>(0xBF94DD42F63BDED2, model); } // 0xBF94DD42F63BDED2 0x328E6FF5 b323
	static BOOL IS_THIS_MODEL_A_QUADBIKE(Hash model) { return invoke<BOOL>(0x39DAC362EE65FA28, model); } // 0x39DAC362EE65FA28 0xC1625277 b323
	 // Equivalent of SET_HELI_BLADES_SPEED(vehicleHandle, 1.0f);
	 // 
	 // this native works on planes to?
	static void SET_HELI_BLADES_FULL_SPEED(Vehicle vehicle) { return invoke<void>(0xA178472EBB8AE60D, vehicle); } // 0xA178472EBB8AE60D 0x033A9408 b323
	 // Sets the speed of the helicopter blades in percentage of the full speed.
	 // 
	 // vehicleHandle: The helicopter.
	 // speed: The speed in percentage, 0.0f being 0% and 1.0f being 100%.
	static void SET_HELI_BLADES_SPEED(Vehicle vehicle, float speed) { return invoke<void>(0xFD280B4D7F3ABC4D, vehicle, speed); } // 0xFD280B4D7F3ABC4D 0x5C7D4EA9 b323
	 // This has not yet been tested - it's just an assumption of what the types could be.
	static void SET_VEHICLE_CAN_BE_TARGETTED(Vehicle vehicle, BOOL state) { return invoke<void>(0x3750146A28097A82, vehicle, state); } // 0x3750146A28097A82 0x64B70B1D b323
	 // Related to locking the vehicle or something similar.
	 // 
	 // In the decompiled scripts, its always called after
	 // VEHICLE::_SET_EXCLUSIVE_DRIVER(a_0, 0, 0);
	 // VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_ALL_PLAYERS(a_0, 1);
	 // VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_PLAYER(a_0, PLAYER::PLAYER_ID(), 0);
	 // -->VEHICLE::_DBC631F109350B8C(a_0, 1);
	static void _0xDBC631F109350B8C(Vehicle vehicle, BOOL p1) { return invoke<void>(0xDBC631F109350B8C, vehicle, p1); } // 0xDBC631F109350B8C 0x486C1280 b323
	static void SET_VEHICLE_CAN_BE_VISIBLY_DAMAGED(Vehicle vehicle, BOOL state) { return invoke<void>(0x4C7028F78FFD3681, vehicle, state); } // 0x4C7028F78FFD3681 0xC5D94017 b323
	static void _SET_VEHICLE_LIGHTS_CAN_BE_VISIBLY_DAMAGED(Vehicle vehicle, BOOL p1) { return invoke<void>(0x1AA8A837D2169D94, vehicle, p1); } // 0x1AA8A837D2169D94 0x009AB49E b323
	static void _0x2311DD7159F00582(Vehicle vehicle, BOOL p1) { return invoke<void>(0x2311DD7159F00582, vehicle, p1); } // 0x2311DD7159F00582 0x758C5E2E b323
	static void _0x065D03A9D6B2C6B5(Any p0, Any p1) { return invoke<void>(0x065D03A9D6B2C6B5, p0, p1); } // 0x065D03A9D6B2C6B5 b463
	 // Dirt level 0..15
	static float GET_VEHICLE_DIRT_LEVEL(Vehicle vehicle) { return invoke<float>(0x8F17BC8BA08DA62B, vehicle); } // 0x8F17BC8BA08DA62B 0xFD15C065 b323
	 // You can't use values greater than 15.0
	 // You can see why here: pastebin.com/Wbn34fGD
	 // 
	 // Also, R* does (float)(rand() % 15) to get a random dirt level when generating a vehicle.
	static void SET_VEHICLE_DIRT_LEVEL(Vehicle vehicle, float dirtLevel) { return invoke<void>(0x79D3B596FE44EE8B, vehicle, dirtLevel); } // 0x79D3B596FE44EE8B 0x2B39128B b323
	 // Appears to return true if the vehicle has any damage, including cosmetically.
	 // 
	 // GET_*
	static BOOL _IS_VEHICLE_DAMAGED(Vehicle vehicle) { return invoke<BOOL>(0xBCDC5017D3CE1E9E, vehicle); } // 0xBCDC5017D3CE1E9E 0xDAC523BC b323
	 // doorIndex:
	 // 0 = Front Left Door
	 // 1 = Front Right Door
	 // 2 = Back Left Door
	 // 3 = Back Right Door
	 // 4 = Hood
	 // 5 = Trunk
	 // 6 = Trunk2
	static BOOL IS_VEHICLE_DOOR_FULLY_OPEN(Vehicle vehicle, int doorIndex) { return invoke<BOOL>(0x3E933CFF7B111C22, vehicle, doorIndex); } // 0x3E933CFF7B111C22 0xC2385B6F b323
	 // Starts or stops the engine on the specified vehicle.
	 // 
	 // vehicle: The vehicle to start or stop the engine on.
	 // value: true to turn the vehicle on; false to turn it off.
	 // instantly: if true, the vehicle will be set to the state immediately; otherwise, the current driver will physically turn on or off the engine.
	 // 
	 // --------------------------------------
	 // from what I've tested when I do this to a helicopter the propellers turn off after the engine has started. so is there any way to keep the heli propellers on?
	 // --------------------------------------
	 // And what's with BOOL otherwise, what does it do???
	static void SET_VEHICLE_ENGINE_ON(Vehicle vehicle, BOOL value, BOOL instantly, BOOL noAutoTurnOn) { return invoke<void>(0x2497C4717C8B881E, vehicle, value, instantly, noAutoTurnOn); } // 0x2497C4717C8B881E 0x7FBC86F1 b323
	static void SET_VEHICLE_UNDRIVEABLE(Vehicle vehicle, BOOL toggle) { return invoke<void>(0x8ABA6AF54B942B95, vehicle, toggle); } // 0x8ABA6AF54B942B95 0x48D02A4E b323
	static void SET_VEHICLE_PROVIDES_COVER(Vehicle vehicle, BOOL toggle) { return invoke<void>(0x5AFEEDD9BB2899D7, vehicle, toggle); } // 0x5AFEEDD9BB2899D7 0xEFC01CA9 b323
	 // doorIndex:
	 // 0 = Front Left Door (driver door)
	 // 1 = Front Right Door
	 // 2 = Back Left Door
	 // 3 = Back Right Door
	 // 4 = Hood
	 // 5 = Trunk
	 // 6 = Trunk2
	 // 
	 // p2:
	 // mostly use 0 and 1, very rare using 3 and 5
	 // 
	 // p3:
	 // It seems it is an angle
	 // 
	 // Example in VB: 
	 //     Public Shared Sub Set_Vehicle_Door_Angle(Vehicle As Vehicle, Door As VehicleDoor, Angle As Single)
	 //         Native.Function.Call(Hash.SET_VEHICLE_DOOR_CONTROL, Vehicle.Handle, Door, 1, Angle)
	 //     End Sub
	 // 
	 // I'm Not MentaL
	 // 
	 // sfink: p2 is speed, 5 is fast, 1 is slow 3 is medium
	static void SET_VEHICLE_DOOR_CONTROL(Vehicle vehicle, int doorIndex, int speed, float angle) { return invoke<void>(0xF2BFA0430F0A0FCB, vehicle, doorIndex, speed, angle); } // 0xF2BFA0430F0A0FCB 0x572DD360 b323
	static void SET_VEHICLE_DOOR_LATCHED(Vehicle vehicle, int doorIndex, BOOL p2, BOOL p3, BOOL p4) { return invoke<void>(0xA5A9653A8D2CAF48, vehicle, doorIndex, p2, p3, p4); } // 0xA5A9653A8D2CAF48 0x4EB7BBFC b323
	 // example in vb:
	 //     Public Shared Function Get_Vehicle_Door_Angle(Vehicle As Vehicle, Door As VehicleDoor) As Single
	 //         Return Native.Function.Call(Of Single)(Hash.GET_VEHICLE_DOOR_ANGLE_RATIO, Vehicle.Handle, Door)
	 //     End Function
	 // 
	 // I'm Not MentaL
	static float GET_VEHICLE_DOOR_ANGLE_RATIO(Vehicle vehicle, int door) { return invoke<float>(0xFE3F9C29F7B32BD5, vehicle, door); } // 0xFE3F9C29F7B32BD5 0x0E399C26 b323
	 // doorIndex:
	 // 0 = Front Left Door
	 // 1 = Front Right Door
	 // 2 = Back Left Door
	 // 3 = Back Right Door
	 // 4 = Hood
	 // 5 = Trunk
	 // 6 = Trunk2
	static void SET_VEHICLE_DOOR_SHUT(Vehicle vehicle, int doorIndex, BOOL closeInstantly) { return invoke<void>(0x93D9BD300D7789E5, vehicle, doorIndex, closeInstantly); } // 0x93D9BD300D7789E5 0x142606BD b323
	 // doorIndex:
	 // 0 = Front Right Door
	 // 1 = Front Left Door
	 // 2 = Back Right Door
	 // 3 = Back Left Door
	 // 4 = Hood
	 // 5 = Trunk
	 // 
	 // Changed last paramater from CreateDoorObject To NoDoorOnTheFloor because when on false, the door object is created,and not created when on true...the former parameter name was counter intuitive...(by Calderon)
	 // 
	 // Calderon is a moron.
	static void SET_VEHICLE_DOOR_BROKEN(Vehicle vehicle, int doorIndex, BOOL deleteDoor) { return invoke<void>(0xD4D4F6A4AB575A33, vehicle, doorIndex, deleteDoor); } // 0xD4D4F6A4AB575A33 0x8147FEA7 b323
	static void SET_VEHICLE_CAN_BREAK(Vehicle vehicle, BOOL toggle) { return invoke<void>(0x59BF8C3D52C92F66, vehicle, toggle); } // 0x59BF8C3D52C92F66 0x90A810D1 b323
	static BOOL DOES_VEHICLE_HAVE_ROOF(Vehicle vehicle) { return invoke<BOOL>(0x8AC862B0B32C5B80, vehicle); } // 0x8AC862B0B32C5B80 0xDB817403 b323
	static BOOL IS_BIG_VEHICLE(Vehicle vehicle) { return invoke<BOOL>(0x9F243D3919F442FE, vehicle); } // 0x9F243D3919F442FE 0x9CDBA8DE b323
	 // Actually number of color combinations
	static int GET_NUMBER_OF_VEHICLE_COLOURS(Vehicle vehicle) { return invoke<int>(0x3B963160CD65D41E, vehicle); } // 0x3B963160CD65D41E 0xF2442EE2 b323
	static void SET_VEHICLE_COLOUR_COMBINATION(Vehicle vehicle, int colorCombination) { return invoke<void>(0x33E8CD3322E2FE31, vehicle, colorCombination); } // 0x33E8CD3322E2FE31 0xA557AEAD b323
	static int GET_VEHICLE_COLOUR_COMBINATION(Vehicle vehicle) { return invoke<int>(0x6A842D197F845D56, vehicle); } // 0x6A842D197F845D56 0x77AC1B4C b323
	static void _SET_VEHICLE_XENON_LIGHTS_COLOR(Vehicle vehicle, int colorIndex) { return invoke<void>(0xE41033B25D003A07, vehicle, colorIndex); } // 0xE41033B25D003A07 b1604
	static int _GET_VEHICLE_XENON_LIGHTS_COLOR(Vehicle vehicle) { return invoke<int>(0x3DFF319A831E0CDB, vehicle); } // 0x3DFF319A831E0CDB b1604
	 // Setting this to false, makes the specified vehicle to where if you press Y your character doesn't even attempt the animation to enter the vehicle. Hence it's not considered aka ignored.
	static void SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Vehicle vehicle, BOOL toggle) { return invoke<void>(0x31B927BBC44156CD, vehicle, toggle); } // 0x31B927BBC44156CD 0x14413319 b323
	static void _0xBE5C1255A1830FF5(Vehicle vehicle, BOOL toggle) { return invoke<void>(0xBE5C1255A1830FF5, vehicle, toggle); } // 0xBE5C1255A1830FF5 0xA6D8D7A5 b323
	static void _0x88BC673CA9E0AE99(Vehicle vehicle, BOOL p1) { return invoke<void>(0x88BC673CA9E0AE99, vehicle, p1); } // 0x88BC673CA9E0AE99 0xF0E5C41D b323
	 // 2 seems to disable getting vehicle in modshop
	static int GET_VEHICLE_DOOR_LOCK_STATUS(Vehicle vehicle) { return invoke<int>(0x25BC98A59C2EA962, vehicle); } // 0x25BC98A59C2EA962 0x0D72CEF2 b323
	 // doorID starts at 0, not seeming to skip any numbers. Four door vehicles intuitively range from 0 to 3.
	static BOOL IS_VEHICLE_DOOR_DAMAGED(Vehicle veh, int doorID) { return invoke<BOOL>(0xB8E181E559464527, veh, doorID); } // 0xB8E181E559464527 0x4999E3C3 b323
	 // Keeps Vehicle Doors/Hood/Trunk from breaking off
	static void _SET_VEHICLE_DOOR_CAN_BREAK(Vehicle vehicle, int doorIndex, BOOL isBreakable) { return invoke<void>(0x2FA133A4A9D37ED8, vehicle, doorIndex, isBreakable); } // 0x2FA133A4A9D37ED8 0x065B92B3 b323
	static BOOL IS_VEHICLE_BUMPER_BOUNCING(Vehicle vehicle, BOOL frontBumper) { return invoke<BOOL>(0x27B926779DEB502D, vehicle, frontBumper); } // 0x27B926779DEB502D 0xB3A2CC4F b323
	static BOOL IS_VEHICLE_BUMPER_BROKEN_OFF(Vehicle vehicle, BOOL front) { return invoke<BOOL>(0x468056A6BB6F3846, vehicle, front); } // 0x468056A6BB6F3846 0xAF25C027 b323
	 // Usage:
	 // 
	 // public bool isCopInRange(Vector3 Location, float Range)
	 //         {
	 //             return Function.Call<bool>(Hash.IS_COP_PED_IN_AREA_3D, Location.X - Range, Location.Y - Range, Location.Z - Range, Location.X + Range, Location.Y + Range, Location.Z + Range);
	 //         }
	static BOOL IS_COP_VEHICLE_IN_AREA_3D(float x1, float x2, float y1, float y2, float z1, float z2) { return invoke<BOOL>(0x7EEF65D5F153E26A, x1, x2, y1, y2, z1, z2); } // 0x7EEF65D5F153E26A 0xFB16C6D1 b323
	 //  Public Function isVehicleOnAllWheels(vh As Vehicle) As Boolean
	 //         Return Native.Function.Call(Of Boolean)(Hash.IS_VEHICLE_ON_ALL_WHEELS, vh)
	 //     End Function
	 // 
	static BOOL IS_VEHICLE_ON_ALL_WHEELS(Vehicle vehicle) { return invoke<BOOL>(0xB104CD1BABF302E2, vehicle); } // 0xB104CD1BABF302E2 0x10089F8E b323
	static Hash GET_VEHICLE_LAYOUT_HASH(Vehicle vehicle) { return invoke<Hash>(0x28D37D4F71AC5C58, vehicle); } // 0x28D37D4F71AC5C58 0xE0B35187 b323
	 // makes the train all jumbled up and derailed as it moves on the tracks (though that wont stop it from its normal operations)
	static void SET_RENDER_TRAIN_AS_DERAILED(Vehicle train, BOOL toggle) { return invoke<void>(0x317B11A312DF5534, train, toggle); } // 0x317B11A312DF5534 0x899D9092 b323
	 // They use the same color indexs as SET_VEHICLE_COLOURS.
	static void SET_VEHICLE_EXTRA_COLOURS(Vehicle vehicle, int pearlescentColor, int wheelColor) { return invoke<void>(0x2036F561ADD12E33, vehicle, pearlescentColor, wheelColor); } // 0x2036F561ADD12E33 0x515DB2A0 b323
	static void GET_VEHICLE_EXTRA_COLOURS(Vehicle vehicle, int* pearlescentColor, int* wheelColor) { return invoke<void>(0x3BC4245933A166F7, vehicle, pearlescentColor, wheelColor); } // 0x3BC4245933A166F7 0x80E4659B b323
	static void _GET_VEHICLE_INTERIOR_COLOR(Vehicle vehicle, int* color) { return invoke<void>(0x7D1464D472D32136, vehicle, color); } // 0x7D1464D472D32136 b505
	static void _GET_VEHICLE_DASHBOARD_COLOR(Vehicle vehicle, int* color) { return invoke<void>(0xB7635E80A5C31BFF, vehicle, color); } // 0xB7635E80A5C31BFF b505
	 // This fixes a vehicle.
	 // If the vehicle's engine's broken then you cannot fix it with this native.
	static void SET_VEHICLE_FIXED(Vehicle vehicle) { return invoke<void>(0x115722B1B9C14C1C, vehicle); } // 0x115722B1B9C14C1C 0x17469AA1 b323
	static void SET_VEHICLE_CAN_LEAK_OIL(Vehicle vehicle, BOOL toggle) { return invoke<void>(0x51BB2D88D31A914B, vehicle, toggle); } // 0x51BB2D88D31A914B 0x88F0F7E7 b323
	static void SET_VEHICLE_CAN_LEAK_PETROL(Vehicle vehicle, BOOL toggle) { return invoke<void>(0x192547247864DFDD, vehicle, toggle); } // 0x192547247864DFDD 0x90D6EE57 b323
	static void SET_DISABLE_VEHICLE_PETROL_TANK_FIRES(Vehicle vehicle, BOOL toggle) { return invoke<void>(0x465BF26AB9684352, vehicle, toggle); } // 0x465BF26AB9684352 0xC40192B5 b323
	static void SET_DISABLE_VEHICLE_ENGINE_FIRES(Vehicle vehicle, BOOL toggle) { return invoke<void>(0x91A0BD635321F145, vehicle, toggle); } // 0x91A0BD635321F145 0x1784BA1A b323
	 // SET_VEHICLE_LI*
	static void _0xC50CE861B55EAB8B(Vehicle vehicle, BOOL p1) { return invoke<void>(0xC50CE861B55EAB8B, vehicle, p1); } // 0xC50CE861B55EAB8B 0x40C323AE b323
	 // sfink: sets bit in vehicle's structure, used by maintransition, fm_mission_controller, mission_race and a couple of other scripts. see dissassembly: 
	 // CVehicle *__fastcall sub_140CDAA10(signed int a1, char a2)
	 // {
	 //     CVehicle *result; // rax@1
	 // 
	 //     result = EntityAsCVehicle(a1);
	 //     if ( result )
	 //     {
	 //         result->field_886 &= 0xEFu;
	 //         result->field_886 |= 16 * (a2 & 1);
	 //     }
	 //     return result;
	 // }
	static void _0x6EBFB22D646FFC18(Vehicle vehicle, BOOL p1) { return invoke<void>(0x6EBFB22D646FFC18, vehicle, p1); } // 0x6EBFB22D646FFC18 0x847F1304 b323
	static void SET_DISABLE_PRETEND_OCCUPANTS(Vehicle vehicle, BOOL toggle) { return invoke<void>(0x25367DE49D64CF16, vehicle, toggle); } // 0x25367DE49D64CF16 0xCBD98BA1 b323
	static void REMOVE_VEHICLES_FROM_GENERATORS_IN_AREA(float x1, float y1, float z1, float x2, float y2, float z2, Any unk) { return invoke<void>(0x46A1E1A299EC4BBA, x1, y1, z1, x2, y2, z2, unk); } // 0x46A1E1A299EC4BBA 0x42CC15E0 b323
	 // Locks the vehicle's steering to the desired angle, explained below.
	 // 
	 // Requires to be called onTick. Steering is unlocked the moment the function stops being called on the vehicle.
	 // 
	 // Steer bias:
	 // -1.0 = full right
	 // 0.0 = centered steering
	 // 1.0 = full left
	static void SET_VEHICLE_STEER_BIAS(Vehicle vehicle, float value) { return invoke<void>(0x42A8EC77D5150CBE, vehicle, value); } // 0x42A8EC77D5150CBE 0x7357C1EB b323
	static BOOL IS_VEHICLE_EXTRA_TURNED_ON(Vehicle vehicle, int extraId) { return invoke<BOOL>(0xD2E6822DBFD6C8BD, vehicle, extraId); } // 0xD2E6822DBFD6C8BD 0x042098B5 b323
	 // Note: only some vehicle have extras
	 // extra ids are from 1 - 9 depending on the vehicle
	 // 
	 // -------------------------------------------------
	 // 
	 // ^ not sure if outdated or simply wrong. Max extra ID for b944 is 14
	 // 
	 // -------------------------------------------------
	 // p2 is not a on/off toggle. mostly 0 means on and 1 means off.
	 // not sure if it really should be a BOOL.
	static void SET_VEHICLE_EXTRA(Vehicle vehicle, int extraId, BOOL disable) { return invoke<void>(0x7EE3A3C5E4A40CC9, vehicle, extraId, disable); } // 0x7EE3A3C5E4A40CC9 0x642D065C b323
	 // Checks via CVehicleModelInfo
	static BOOL DOES_EXTRA_EXIST(Vehicle vehicle, int extraId) { return invoke<BOOL>(0x1262D55792428154, vehicle, extraId); } // 0x1262D55792428154 0x409411CC b323
	static void SET_CONVERTIBLE_ROOF(Vehicle vehicle, BOOL p1) { return invoke<void>(0xF39C4F538B5124C2, vehicle, p1); } // 0xF39C4F538B5124C2 0xC87B6A51 b323
	static void LOWER_CONVERTIBLE_ROOF(Vehicle vehicle, BOOL instantlyLower) { return invoke<void>(0xDED51F703D0FA83D, vehicle, instantlyLower); } // 0xDED51F703D0FA83D 0xC5F72EAE b323
	static void RAISE_CONVERTIBLE_ROOF(Vehicle vehicle, BOOL instantlyRaise) { return invoke<void>(0x8F5FB35D7E88FC70, vehicle, instantlyRaise); } // 0x8F5FB35D7E88FC70 0xA4E4CBA3 b323
	 // 0 -> up
	 // 1 -> lowering down
	 // 2 -> down
	 // 3 -> raising up
	static int GET_CONVERTIBLE_ROOF_STATE(Vehicle vehicle) { return invoke<int>(0xF8C397922FC03F41, vehicle); } // 0xF8C397922FC03F41 0x1B09714D b323
	 // p1 is false almost always.
	 // 
	 // However, in launcher_carwash/carwash1/carwash2 scripts, p1 is true and is accompanied by DOES_VEHICLE_HAVE_ROOF 
	static BOOL IS_VEHICLE_A_CONVERTIBLE(Vehicle vehicle, BOOL p1) { return invoke<BOOL>(0x52F357A30698BCCE, vehicle, p1); } // 0x52F357A30698BCCE 0x6EF54490 b323
	 // is this for red lights only?  more testing required.
	static BOOL IS_VEHICLE_STOPPED_AT_TRAFFIC_LIGHTS(Vehicle vehicle) { return invoke<BOOL>(0x2959F696AE390A99, vehicle); } // 0x2959F696AE390A99 0x69200FA4 b323
	 // Apply damage to vehicle at a location. Location is relative to vehicle model (not world).
	 // 
	 // Radius of effect damage applied in a sphere at impact location
	static void SET_VEHICLE_DAMAGE(Vehicle vehicle, float xOffset, float yOffset, float zOffset, float damage, float radius, BOOL p6) { return invoke<void>(0xA1DD317EA8FD4F29, vehicle, xOffset, yOffset, zOffset, damage, radius, p6); } // 0xA1DD317EA8FD4F29 0x21B458B2 b323
	 // Returns 1000.0 if the function is unable to get the address of the specified vehicle or if it's not a vehicle.
	 // 
	 // Minimum: -4000
	 // Maximum: 1000
	 // 
	 // -4000: Engine is destroyed
	 // 0 and below: Engine catches fire and health rapidly declines
	 // 300: Engine is smoking and losing functionality
	 // 1000: Engine is perfect
	static float GET_VEHICLE_ENGINE_HEALTH(Vehicle vehicle) { return invoke<float>(0xC45D23BAF168AAB8, vehicle); } // 0xC45D23BAF168AAB8 0x8880038A b323
	 // 1000 is max health
	 // Begins leaking gas at around 650 health
	 // -999.90002441406 appears to be minimum health, although nothing special occurs <- false statement
	 // 
	 // -------------------------
	 // Minimum: -4000
	 // Maximum: 1000
	 // 
	 // -4000: Engine is destroyed
	 // 0 and below: Engine catches fire and health rapidly declines
	 // 300: Engine is smoking and losing functionality
	 // 1000: Engine is perfect
	static void SET_VEHICLE_ENGINE_HEALTH(Vehicle vehicle, float health) { return invoke<void>(0x45F6D8EEF34ABEF1, vehicle, health); } // 0x45F6D8EEF34ABEF1 0x1B760FB5 b323
	 // 1000 is max health
	 // Begins leaking gas at around 650 health
	 // -999.90002441406 appears to be minimum health, although nothing special occurs
	static float GET_VEHICLE_PETROL_TANK_HEALTH(Vehicle vehicle) { return invoke<float>(0x7D5DABE888D2D074, vehicle); } // 0x7D5DABE888D2D074 0xE41595CE b323
	 // 1000 is max health
	 // Begins leaking gas at around 650 health
	 // -999.90002441406 appears to be minimum health, although nothing special occurs
	static void SET_VEHICLE_PETROL_TANK_HEALTH(Vehicle vehicle, float health) { return invoke<void>(0x70DB57649FA8D0D8, vehicle, health); } // 0x70DB57649FA8D0D8 0x660A3692 b323
	 // p1 can be anywhere from 0 to 3 in the scripts. p2 is generally somewhere in the 1000 to 10000 range.
	static BOOL IS_VEHICLE_STUCK_TIMER_UP(Vehicle vehicle, int p1, int p2) { return invoke<BOOL>(0x679BE1DAF71DA874, vehicle, p1, p2); } // 0x679BE1DAF71DA874 0x2FCF58C1 b323
	 // The inner function has a switch on the second parameter. It's the stuck timer index.
	 // 
	 // Here's some pseudo code I wrote for the inner function:
	 // void __fastcall NATIVE_RESET_VEHICLE_STUCK_TIMER_INNER(CUnknown* unknownClassInVehicle, int timerIndex)
	 // {
	 //  switch (timerIndex)
	 //    {
	 //  case 0:
	 //        unknownClassInVehicle->FirstStuckTimer = (WORD)0u;
	 //  case 1:
	 //        unknownClassInVehicle->SecondStuckTimer = (WORD)0u;
	 //     case 2:
	 //        unknownClassInVehicle->ThirdStuckTimer = (WORD)0u;
	 //  case 3:
	 //        unknownClassInVehicle->FourthStuckTimer = (WORD)0u;
	 //     case 4:
	 //        unknownClassInVehicle->FirstStuckTimer = (WORD)0u;
	 //      unknownClassInVehicle->SecondStuckTimer = (WORD)0u;
	 //         unknownClassInVehicle->ThirdStuckTimer = (WORD)0u;
	 //      unknownClassInVehicle->FourthStuckTimer = (WORD)0u;
	 //         break;
	 //     };
	 // }
	static void RESET_VEHICLE_STUCK_TIMER(Vehicle vehicle, int nullAttributes) { return invoke<void>(0xD7591B0065AFAA7A, vehicle, nullAttributes); } // 0xD7591B0065AFAA7A 0xEF2A6016 b323
	 // p1 is always 0 in the scripts.
	 // 
	 // p1 = check if vehicle is on fire
	static BOOL IS_VEHICLE_DRIVEABLE(Vehicle vehicle, BOOL isOnFireCheck) { return invoke<BOOL>(0x4C241E39B23DF959, vehicle, isOnFireCheck); } // 0x4C241E39B23DF959 0x41A7267A b323
	static void SET_VEHICLE_HAS_BEEN_OWNED_BY_PLAYER(Vehicle vehicle, BOOL owned) { return invoke<void>(0x2B5F9D2AF1F1722D, vehicle, owned); } // 0x2B5F9D2AF1F1722D 0xB4D3DBFB b323
	static void SET_VEHICLE_NEEDS_TO_BE_HOTWIRED(Vehicle vehicle, BOOL toggle) { return invoke<void>(0xFBA550EA44404EE6, vehicle, toggle); } // 0xFBA550EA44404EE6 0xD8260751 b323
	static void _0x9F3F689B814F2599(Vehicle vehicle, BOOL p1) { return invoke<void>(0x9F3F689B814F2599, vehicle, p1); } // 0x9F3F689B814F2599 b323
	 // Sounds the horn for the specified vehicle.
	 // 
	 // vehicle: The vehicle to activate the horn for.
	 // mode: The hash of "NORMAL" or "HELDDOWN". Can be 0.
	 // duration: The duration to sound the horn, in milliseconds.
	 // 
	 // Note: If a player is in the vehicle, it will only sound briefly.
	static void START_VEHICLE_HORN(Vehicle vehicle, int duration, Hash mode, BOOL forever) { return invoke<void>(0x9C8C6504B5B63D2C, vehicle, duration, mode, forever); } // 0x9C8C6504B5B63D2C 0x0DF5ADB3 b323
	 // if true, axles won't bend.
	static void SET_VEHICLE_HAS_STRONG_AXLES(Vehicle vehicle, BOOL toggle) { return invoke<void>(0x92F0CF722BC4202F, vehicle, toggle); } // 0x92F0CF722BC4202F 0x0D1CBC65 b323
	 // Returns model name of vehicle in all caps. Needs to be displayed through localizing text natives to get proper display name.
	 // -----------------------------------------------------------------------------------------------------------------------------------------
	 // While often the case, this does not simply return the model name of the vehicle (which could be hashed to return the model hash). Variations of the same vehicle may also use the same display name.
	 // -----------------------------------------------------------------------------------------------------------------------------------------
	 // 
	 // Returns "CARNOTFOUND" if the hash doesn't match a vehicle hash.
	 // 
	 // Using UI::_GET_LABEL_TEXT, you can get the localized name.
	 // 
	 // For a full list, see here: pastebin.com/wvpyS4kS (pastebin.com/dA3TbkZw)
	 // 
	 // 
	static const char* GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(Hash modelHash) { return invoke<const char*>(0xB215AAC32D25D019, modelHash); } // 0xB215AAC32D25D019 0xEC86DF39 b323
	 // Returns "CARNOTFOUND" if the hash doesn't match a vehicle hash.
	static const char* _GET_MAKE_NAME_FROM_VEHICLE_MODEL(Hash modelHash) { return invoke<const char*>(0xF7AF4F159FF99F97, modelHash); } // 0xF7AF4F159FF99F97 b1868
	 // The only example I can find of this function in the scripts, is this:
	 // 
	 // struct _s = VEHICLE::GET_VEHICLE_DEFORMATION_AT_POS(rPtr((A_0) + 4), 1.21f, 6.15f, 0.3f);
	 // 
	 // -----------------------------------------------------------------------------------------------------------------------------------------
	 // PC scripts:
	 // 
	 // v_5/*{3}*/ = VEHICLE::GET_VEHICLE_DEFORMATION_AT_POS(a_0._f1, 1.21, 6.15, 0.3);
	static Vector3 GET_VEHICLE_DEFORMATION_AT_POS(Vehicle vehicle, float offsetX, float offsetY, float offsetZ) { return invoke<Vector3>(0x4EC6CFBC7B2E9536, vehicle, offsetX, offsetY, offsetZ); } // 0x4EC6CFBC7B2E9536 0xABF02075 b323
	static void SET_VEHICLE_LIVERY(Vehicle vehicle, int livery) { return invoke<void>(0x60BF608F1B8CD1B6, vehicle, livery); } // 0x60BF608F1B8CD1B6 0x7AD87059 b323
	 // -1 = no livery
	static int GET_VEHICLE_LIVERY(Vehicle vehicle) { return invoke<int>(0x2BB9230590DA5E8A, vehicle); } // 0x2BB9230590DA5E8A 0xEC82A51D b323
	 // Returns -1 if the vehicle has no livery
	static int GET_VEHICLE_LIVERY_COUNT(Vehicle vehicle) { return invoke<int>(0x87B63E25A529D526, vehicle); } // 0x87B63E25A529D526 0xFB0CA947 b323
	static int _GET_VEHICLE_ROOF_LIVERY(Vehicle vehicle) { return invoke<int>(0x60190048C0764A26, vehicle); } // 0x60190048C0764A26 b505
	static int _GET_VEHICLE_ROOF_LIVERY_COUNT(Vehicle vehicle) { return invoke<int>(0x5ECB40269053C0D4, vehicle); } // 0x5ECB40269053C0D4 b505
	static BOOL IS_VEHICLE_WINDOW_INTACT(Vehicle vehicle, int windowIndex) { return invoke<BOOL>(0x46E571A0E20D01F1, vehicle, windowIndex); } // 0x46E571A0E20D01F1 0xAC4EF23D b323
	 // Appears to return false if any window is broken.
	static BOOL ARE_ALL_VEHICLE_WINDOWS_INTACT(Vehicle vehicle) { return invoke<BOOL>(0x11D862A3E977A9EF, vehicle); } // 0x11D862A3E977A9EF 0xBB619744 b323
	static BOOL IS_HELI_PART_BROKEN(Vehicle vehicle, BOOL p1, BOOL p2, BOOL p3) { return invoke<BOOL>(0xBC74B4BE25EB6C8A, vehicle, p1, p2, p3); } // 0xBC74B4BE25EB6C8A 0xF4E4C439 b323
	static void _0x4056EA1105F5ABD7(Any p0, Any p1) { return invoke<void>(0x4056EA1105F5ABD7, p0, p1); } // 0x4056EA1105F5ABD7 b463
	static void _SET_HELI_TAIL_ROTOR_HEALTH(Any p0, Any p1) { return invoke<void>(0xFE205F38AAA58E5B, p0, p1); } // 0xFE205F38AAA58E5B b463
	 // NOTE: Debugging functions are not present in the retail version of the game.
	static void SET_VEHICLE_NAME_DEBUG(Vehicle vehicle, const char* name) { return invoke<void>(0xBFDF984E2C22B94F, vehicle, name); } // 0xBFDF984E2C22B94F 0xA712FF5C b323
	 // Sets a vehicle to be strongly resistant to explosions. p0 is the vehicle; set p1 to false to toggle the effect on/off.
	static void SET_VEHICLE_EXPLODES_ON_HIGH_EXPLOSION_DAMAGE(Vehicle vehicle, BOOL toggle) { return invoke<void>(0x71B0892EC081D60A, vehicle, toggle); } // 0x71B0892EC081D60A 0x38CC692B b323
	static void SET_VEHICLE_DISABLE_TOWING(Vehicle vehicle, BOOL toggle) { return invoke<void>(0x2B6747FAA9DB9D6B, vehicle, toggle); } // 0x2B6747FAA9DB9D6B 0x95A9ACCB b323
	static BOOL _DOES_VEHICLE_HAVE_LANDING_GEAR(Vehicle vehicle) { return invoke<BOOL>(0xE43701C36CAFF1A4, vehicle); } // 0xE43701C36CAFF1A4 b1180
	 // Works for vehicles with a retractable landing gear
	 // 
	 // landing gear states:
	 // 
	 // 0: Deployed
	 // 1: Closing
	 // 2: Opening
	 // 3: Retracted
	 // 
	 // what can I use to make the hydra thing forward?
	static void CONTROL_LANDING_GEAR(Vehicle vehicle, int state) { return invoke<void>(0xCFC8BE9A5E1FE575, vehicle, state); } // 0xCFC8BE9A5E1FE575 0x24F873FB b323
	 // landing gear states:
	 // 
	 // 0: Deployed
	 // 1: Closing
	 // 2: Opening
	 // 3: Retracted
	static int GET_LANDING_GEAR_STATE(Vehicle vehicle) { return invoke<int>(0x9B0F3DCA3DB0F4CD, vehicle); } // 0x9B0F3DCA3DB0F4CD 0xA6F02670 b323
	static BOOL IS_ANY_VEHICLE_NEAR_POINT(float x, float y, float z, float radius) { return invoke<BOOL>(0x61E1DD6125A3EEE6, x, y, z, radius); } // 0x61E1DD6125A3EEE6 0x2867A834 b323
	static void REQUEST_VEHICLE_HIGH_DETAIL_MODEL(Vehicle vehicle) { return invoke<void>(0xA6E9FDCB2C76785E, vehicle); } // 0xA6E9FDCB2C76785E 0x9DA21956 b323
	 // REQUEST_VEHICLE_ASSET(GET_HASH_KEY(cargobob3), 3);
	 // 
	 // vehicle found that have asset's:
	 // cargobob3
	 // submersible
	 // blazer
	static void REQUEST_VEHICLE_ASSET(Hash vehicleHash, int vehicleAsset) { return invoke<void>(0x81A15811460FAB3A, vehicleHash, vehicleAsset); } // 0x81A15811460FAB3A 0x902B4F06 b323
	static BOOL HAS_VEHICLE_ASSET_LOADED(int vehicleAsset) { return invoke<BOOL>(0x1BBE0523B8DB9A21, vehicleAsset); } // 0x1BBE0523B8DB9A21 0x8DAAC3CB b323
	static void REMOVE_VEHICLE_ASSET(int vehicleAsset) { return invoke<void>(0xACE699C71AB9DEB5, vehicleAsset); } // 0xACE699C71AB9DEB5 0x9620E9C6 b323
	 // First two parameters swapped. Scripts verify that towTruck is the first parameter, not the second.
	static void DETACH_VEHICLE_FROM_TOW_TRUCK(Vehicle towTruck, Vehicle vehicle) { return invoke<void>(0xC2DB6B6708350ED8, towTruck, vehicle); } // 0xC2DB6B6708350ED8 0xC666CF33 b323
	static BOOL DETACH_VEHICLE_FROM_ANY_TOW_TRUCK(Vehicle vehicle) { return invoke<BOOL>(0xD0E9CE05A1E68CD8, vehicle); } // 0xD0E9CE05A1E68CD8 0x3BF93651 b323
	 // Scripts verify that towTruck is the first parameter, not the second.
	static BOOL IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(Vehicle towTruck, Vehicle vehicle) { return invoke<BOOL>(0x146DF9EC4C4B9FD4, towTruck, vehicle); } // 0x146DF9EC4C4B9FD4 0x9699CFDC b323
	static Entity GET_ENTITY_ATTACHED_TO_TOW_TRUCK(Vehicle towTruck) { return invoke<Entity>(0xEFEA18DCF10F8F75, towTruck); } // 0xEFEA18DCF10F8F75 0x11EC7844 b323
	 // Please change to void.
	static Any SET_VEHICLE_AUTOMATICALLY_ATTACHES(Vehicle vehicle, BOOL p1, Any p2) { return invoke<Any>(0x8BA6F76BC53A1493, vehicle, p1, p2); } // 0x8BA6F76BC53A1493 0x4273A8D3 b323
	static void _DISABLE_VEHICLE_TURRET_MOVEMENT_THIS_FRAME(Any p0) { return invoke<void>(0x32CAEDF24A583345, p0); } // 0x32CAEDF24A583345 b463
	static float _GET_VEHICLE_FLIGHT_NOZZLE_POSITION(Vehicle plane) { return invoke<float>(0xDA62027C8BDB326E, plane); } // 0xDA62027C8BDB326E b1180
	static BOOL _0xA4822F1CF23F4810(Vector3* outVec, Any p1, Vector3* outVec1, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8) { return invoke<BOOL>(0xA4822F1CF23F4810, outVec, p1, outVec1, p3, p4, p5, p6, p7, p8); } // 0xA4822F1CF23F4810 0x34E02FCD b323
	 // Reduces grip significantly so it's hard to go anywhere.
	static void SET_VEHICLE_REDUCE_GRIP(Vehicle vehicle, BOOL toggle) { return invoke<void>(0x222FF6A823D122E2, vehicle, toggle); } // 0x222FF6A823D122E2 0x90D3A0D9 b323
	static void SET_VEHICLE_BRAKE_LIGHTS(Vehicle vehicle, BOOL toggle) { return invoke<void>(0x92B35082E0B42F66, vehicle, toggle); } // 0x92B35082E0B42F66 0x6D9BA11E b323
	static void SET_VEHICLE_HANDBRAKE(Vehicle vehicle, BOOL toggle) { return invoke<void>(0x684785568EF26A22, vehicle, toggle); } // 0x684785568EF26A22 0xBA729A25 b323
	 // INIT_VISIBLE_LATCH_POPULATION?
	static void _0x48ADC8A773564670() { return invoke<void>(0x48ADC8A773564670); } // 0x48ADC8A773564670 0x37BC6ACB b323
	 // HAS_*
	static BOOL _0x91D6DD290888CBAB() { return invoke<BOOL>(0x91D6DD290888CBAB); } // 0x91D6DD290888CBAB 0x71D898EF b323
	 // Gets the trailer of a vehicle and puts it into the trailer parameter.
	static BOOL GET_VEHICLE_TRAILER_VEHICLE(Vehicle vehicle, Vehicle* trailer) { return invoke<BOOL>(0x1CDD6BADC297830D, vehicle, trailer); } // 0x1CDD6BADC297830D 0xAE84D758 b323
	static float GET_VEHICLE_ESTIMATED_MAX_SPEED(Vehicle vehicle) { return invoke<float>(0x53AF99BAA671CA47, vehicle); } // 0x53AF99BAA671CA47 0x7D1A0616 b323
	 // Returns max speed (without mods) of the specified vehicle model in m/s.
	static float GET_VEHICLE_MODEL_ESTIMATED_MAX_SPEED(Hash modelHash) { return invoke<float>(0xF417C2502FFFED43, modelHash); } // 0xF417C2502FFFED43 0x8F291C4A b323
	 // Returns the acceleration of the specified model.
	static float GET_VEHICLE_MODEL_ACCELERATION(Hash modelHash) { return invoke<float>(0x8C044C5C84505B6A, modelHash); } // 0x8C044C5C84505B6A 0x29CB3537 b323
	 // ADD_*
	static int _ADD_SPEED_ZONE_FOR_COORD(float x, float y, float z, float radius, float speed, BOOL p5) { return invoke<int>(0x2CE544C68FB812A0, x, y, z, radius, speed, p5); } // 0x2CE544C68FB812A0 0xD6685803 b323
	 // REMOVE_*
	static BOOL _REMOVE_SPEED_ZONE(int speedzone) { return invoke<BOOL>(0x1033371FC8E842A7, speedzone); } // 0x1033371FC8E842A7 0x0C0332A6 b323
	static void OPEN_BOMB_BAY_DOORS(Vehicle vehicle) { return invoke<void>(0x87E7F24270732CB1, vehicle); } // 0x87E7F24270732CB1 0x6574041D b323
	static void CLOSE_BOMB_BAY_DOORS(Vehicle vehicle) { return invoke<void>(0x3556041742A0DC74, vehicle); } // 0x3556041742A0DC74 0xF8EC5751 b323
	 // Possibly: Returns whether the searchlight (found on police vehicles) is toggled on.
	 // 
	 // @Author Nac
	static BOOL IS_VEHICLE_SEARCHLIGHT_ON(Vehicle vehicle) { return invoke<BOOL>(0xC0F97FCE55094987, vehicle); } // 0xC0F97FCE55094987 0xADAF3513 b323
	 // Only works during nighttime.
	static void SET_VEHICLE_SEARCHLIGHT(Vehicle heli, BOOL toggle, BOOL canBeUsedByAI) { return invoke<void>(0x14E85C5EE7A4D542, heli, toggle, canBeUsedByAI); } // 0x14E85C5EE7A4D542 0xE2C0DD8A b323
	static BOOL _0x639431E895B9AA57(Ped ped, Vehicle vehicle, BOOL p2, BOOL p3, BOOL p4) { return invoke<BOOL>(0x639431E895B9AA57, ped, vehicle, p2, p3, p4); } // 0x639431E895B9AA57 0xAB0E79EB b323
	static int GET_NUM_MOD_KITS(Vehicle vehicle) { return invoke<int>(0x33F2E3FE70EAAE1D, vehicle); } // 0x33F2E3FE70EAAE1D 0xE4903AA0 b323
	 // Set modKit to 0 if you plan to call SET_VEHICLE_MOD. That's what the game does. Most body modifications through SET_VEHICLE_MOD will not take effect until this is set to 0.
	static void SET_VEHICLE_MOD_KIT(Vehicle vehicle, int modKit) { return invoke<void>(0x1F2AA07F00B3217A, vehicle, modKit); } // 0x1F2AA07F00B3217A 0xB8132158 b323
	static int GET_VEHICLE_MOD_KIT(Vehicle vehicle) { return invoke<int>(0x6325D1A044AE510D, vehicle); } // 0x6325D1A044AE510D 0x9FE60927 b323
	static int GET_VEHICLE_MOD_KIT_TYPE(Vehicle vehicle) { return invoke<int>(0xFC058F5121E54C32, vehicle); } // 0xFC058F5121E54C32 0xE5F76765 b323
	 // Returns an int
	 // 
	 // Wheel Types:
	 // 0: Sport
	 // 1: Muscle
	 // 2: Lowrider
	 // 3: SUV
	 // 4: Offroad
	 // 5: Tuner
	 // 6: Bike Wheels
	 // 7: High End
	 // 
	 // Tested in Los Santos Customs
	static int GET_VEHICLE_WHEEL_TYPE(Vehicle vehicle) { return invoke<int>(0xB3ED1BFB4BE636DC, vehicle); } // 0xB3ED1BFB4BE636DC 0xDA58D7AE b323
	 // 0: Sport
	 // 1: Muscle
	 // 2: Lowrider
	 // 3: SUV
	 // 4: Offroad
	 // 5: Tuner
	 // 6: Bike Wheels
	 // 7: High End
	static void SET_VEHICLE_WHEEL_TYPE(Vehicle vehicle, int WheelType) { return invoke<void>(0x487EB21CC7295BA1, vehicle, WheelType); } // 0x487EB21CC7295BA1 0x64BDAAAD b323
	static int GET_NUM_MOD_COLORS(int p0, BOOL p1) { return invoke<int>(0xA551BE18C11A476D, p0, p1); } // 0xA551BE18C11A476D 0x73722CD9 b323
	 // paintType:
	 // 0: Normal
	 // 1: Metallic
	 // 2: Pearl
	 // 3: Matte
	 // 4: Metal
	 // 5: Chrome
	 // 
	 // color: number of the color.
	 // 
	 // p3 seems to always be 0.
	static void SET_VEHICLE_MOD_COLOR_1(Vehicle vehicle, int paintType, int color, int p3) { return invoke<void>(0x43FEB945EE7F85B8, vehicle, paintType, color, p3); } // 0x43FEB945EE7F85B8 0xCBE9A54D b323
	 // Changes the secondary paint type and color
	 // paintType:
	 // 0: Normal
	 // 1: Metallic
	 // 2: Pearl
	 // 3: Matte
	 // 4: Metal
	 // 5: Chrome
	 // 
	 // color: number of the color
	static void SET_VEHICLE_MOD_COLOR_2(Vehicle vehicle, int paintType, int color) { return invoke<void>(0x816562BADFDEC83E, vehicle, paintType, color); } // 0x816562BADFDEC83E 0xC32613C2 b323
	static void GET_VEHICLE_MOD_COLOR_1(Vehicle vehicle, int* paintType, int* color, int* p3) { return invoke<void>(0xE8D65CA700C9A693, vehicle, paintType, color, p3); } // 0xE8D65CA700C9A693 0xE625510A b323
	static void GET_VEHICLE_MOD_COLOR_2(Vehicle vehicle, int* paintType, int* color) { return invoke<void>(0x81592BE4E3878728, vehicle, paintType, color); } // 0x81592BE4E3878728 0x9B76BB8E b323
	 // returns a string which is the codename of the vehicle's currently selected primary color
	 // 
	 // p1 is always 0
	static const char* GET_VEHICLE_MOD_COLOR_1_NAME(Vehicle vehicle, BOOL p1) { return invoke<const char*>(0xB45085B721EFD38C, vehicle, p1); } // 0xB45085B721EFD38C 0x9A0840FD b323
	 // returns a string which is the codename of the vehicle's currently selected secondary color
	static const char* GET_VEHICLE_MOD_COLOR_2_NAME(Vehicle vehicle) { return invoke<const char*>(0x4967A516ED23A5A1, vehicle); } // 0x4967A516ED23A5A1 0x9BDC0B49 b323
	 // Returns whether or not the vehicle has a CVehicleStreamRequestGfx that's trying to load mods.
	 // 
	 // True if it isn't loading mods, false if it is.
	static BOOL _IS_VEHICLE_MOD_LOAD_DONE(Vehicle vehicle) { return invoke<BOOL>(0x9A83F5F9963775EF, vehicle); } // 0x9A83F5F9963775EF 0x112D637A b323
	 // In b944, there are 50 (0 - 49) mod types.
	 // 
	 // Sets the vehicle mod.
	 // The vehicle must have a mod kit first.
	 // 
	 // Any out of range ModIndex is stock.
	 // 
	 // #Mod Type
	 // Spoilers - 0
	 // Front Bumper - 1
	 // Rear Bumper - 2
	 // Side Skirt - 3
	 // Exhaust - 4
	 // Frame - 5
	 // Grille - 6
	 // Hood - 7
	 // Fender - 8
	 // Right Fender - 9
	 // Roof - 10
	 // Engine - 11
	 // Brakes - 12
	 // Transmission - 13
	 // Horns - 14 (modIndex from 0 to 51)
	 // Suspension - 15
	 // Armor - 16
	 // Front Wheels - 23
	 // Back Wheels - 24 //only for motocycles
	 // Plate holders - 25
	 // Trim Design - 27
	 // Ornaments - 28
	 // Dial Design - 30
	 // Steering Wheel - 33
	 // Shifter Leavers - 34
	 // Plaques - 35
	 // Hydraulics - 38
	 // Livery - 48
	 // 
	 // ENUMS: pastebin.com/QzEAn02v
	static void SET_VEHICLE_MOD(Vehicle vehicle, int modType, int modIndex, BOOL customTires) { return invoke<void>(0x6AF0636DDEDCB6DD, vehicle, modType, modIndex, customTires); } // 0x6AF0636DDEDCB6DD 0xB52E5ED5 b323
	 // In b944, there are 50 (0 - 49) mod types.
	 // 
	 // Returns -1 if the vehicle mod is stock
	static int GET_VEHICLE_MOD(Vehicle vehicle, int modType) { return invoke<int>(0x772960298DA26FDB, vehicle, modType); } // 0x772960298DA26FDB 0xDC520069 b323
	 // Only used for wheels(ModType = 23/24) Returns true if the wheels are custom wheels
	static BOOL GET_VEHICLE_MOD_VARIATION(Vehicle vehicle, int modType) { return invoke<BOOL>(0xB3924ECD70E095DC, vehicle, modType); } // 0xB3924ECD70E095DC 0xC1B92003 b323
	 // Returns how many possible mods a vehicle has for a given mod type
	static int GET_NUM_VEHICLE_MODS(Vehicle vehicle, int modType) { return invoke<int>(0xE38E9162A2500646, vehicle, modType); } // 0xE38E9162A2500646 0x8A814FF9 b323
	static void REMOVE_VEHICLE_MOD(Vehicle vehicle, int modType) { return invoke<void>(0x92D619E420858204, vehicle, modType); } // 0x92D619E420858204 0x9CC80A43 b323
	 // Toggles:
	 // UNK17 - 17
	 // Turbo - 18
	 // UNK19 - 19
	 // Tire Smoke - 20
	 // UNK21 - 21
	 // Xenon Headlights - 22
	static void TOGGLE_VEHICLE_MOD(Vehicle vehicle, int modType, BOOL toggle) { return invoke<void>(0x2A1F4F37F95BAD08, vehicle, modType, toggle); } // 0x2A1F4F37F95BAD08 0xD095F811 b323
	static BOOL IS_TOGGLE_MOD_ON(Vehicle vehicle, int modType) { return invoke<BOOL>(0x84B233A8C8FC8AE7, vehicle, modType); } // 0x84B233A8C8FC8AE7 0xF0E1689F b323
	 // Returns the text label of a mod type for a given vehicle
	 // 
	 // Use _GET_LABEL_TEXT to get the part name in the game's language
	static const char* GET_MOD_TEXT_LABEL(Vehicle vehicle, int modType, int modValue) { return invoke<const char*>(0x8935624F8C5592CC, vehicle, modType, modValue); } // 0x8935624F8C5592CC 0x0BA39CA7 b323
	static float GET_VEHICLE_MOD_MODIFIER_VALUE(Vehicle vehicle, int modType, int modIndex) { return invoke<float>(0x90A38E9838E0A8C1, vehicle, modType, modIndex); } // 0x90A38E9838E0A8C1 0x73AE5505 b323
	 // Can be used for IS_DLC_VEHICLE_MOD and _0xC098810437312FFF
	static Hash GET_VEHICLE_MOD_IDENTIFIER_HASH(Vehicle vehicle, int modType, int modIndex) { return invoke<Hash>(0x4593CF82AA179706, vehicle, modType, modIndex); } // 0x4593CF82AA179706 0x94850968 b323
	static void PRELOAD_VEHICLE_MOD(Any p0, int modType, Any p2) { return invoke<void>(0x758F49C24925568A, p0, modType, p2); } // 0x758F49C24925568A 0x6EA5F4A8 b323
	static void RELEASE_PRELOAD_MODS(Vehicle vehicle) { return invoke<void>(0x445D79F995508307, vehicle); } // 0x445D79F995508307 0xD442521F b323
	 // Sets the tire smoke's color of this vehicle.
	 // 
	 // vehicle: The vehicle that is the target of this method.
	 // r: The red level in the RGB color code.
	 // g: The green level in the RGB color code.
	 // b: The blue level in the RGB color code.
	 // 
	 // Note:
	 // setting r,g,b to 0 will give the car independance day tyre smoke
	static void SET_VEHICLE_TYRE_SMOKE_COLOR(Vehicle vehicle, int r, int g, int b) { return invoke<void>(0xB5BA80F839791C0F, vehicle, r, g, b); } // 0xB5BA80F839791C0F 0x3EDEC0DB b323
	static void GET_VEHICLE_TYRE_SMOKE_COLOR(Vehicle vehicle, int* r, int* g, int* b) { return invoke<void>(0xB635392A4938B3C3, vehicle, r, g, b); } // 0xB635392A4938B3C3 0x75280015 b323
	 // enum WindowTints
	 // {
	 //  WINDOWTINT_NONE,
	 //   WINDOWTINT_PURE_BLACK,
	 //     WINDOWTINT_DARKSMOKE,
	 //  WINDOWTINT_LIGHTSMOKE,
	 //     WINDOWTINT_STOCK,
	 //  WINDOWTINT_LIMO,
	 //   WINDOWTINT_GREEN
	 // };
	static void SET_VEHICLE_WINDOW_TINT(Vehicle vehicle, int tint) { return invoke<void>(0x57C51E6BAD752696, vehicle, tint); } // 0x57C51E6BAD752696 0x497C8787 b323
	static int GET_VEHICLE_WINDOW_TINT(Vehicle vehicle) { return invoke<int>(0x0EE21293DAD47C95, vehicle); } // 0x0EE21293DAD47C95 0x13D53892 b323
	 // Some kind of flags.
	static int _0xEEBFC7A7EFDC35B4(Vehicle vehicle) { return invoke<int>(0xEEBFC7A7EFDC35B4, vehicle); } // 0xEEBFC7A7EFDC35B4 0x749DEEA2 b323
	 // iVar3 = get_vehicle_cause_of_destruction(uLocal_248[iVar2]);
	 // if (iVar3 == joaat("weapon_stickybomb"))
	 // {
	 // 	func_171(726);
	 // 	iLocal_260 = 1;
	 // }
	static Hash GET_VEHICLE_CAUSE_OF_DESTRUCTION(Vehicle vehicle) { return invoke<Hash>(0xE495D1EF4C91FD20, vehicle); } // 0xE495D1EF4C91FD20 0x7F8C20DD b323
	 // From the driver's perspective, is the left headlight broken.
	static BOOL GET_IS_LEFT_VEHICLE_HEADLIGHT_DAMAGED(Vehicle vehicle) { return invoke<BOOL>(0x5EF77C9ADD3B11A3, vehicle); } // 0x5EF77C9ADD3B11A3 0xA0777943 b323
	 // From the driver's perspective, is the right headlight broken.
	static BOOL GET_IS_RIGHT_VEHICLE_HEADLIGHT_DAMAGED(Vehicle vehicle) { return invoke<BOOL>(0xA7ECB73355EB2F20, vehicle); } // 0xA7ECB73355EB2F20 0xF178390B b323
	static void MODIFY_VEHICLE_TOP_SPEED(Vehicle vehicle, float value) { return invoke<void>(0x93A3996368C94158, vehicle, value); } // 0x93A3996368C94158 0xE943B09C b323
	static void _0x1CF38D529D7441D9(Vehicle vehicle, BOOL toggle) { return invoke<void>(0x1CF38D529D7441D9, vehicle, toggle); } // 0x1CF38D529D7441D9 0xDF594D8D b323
	static Any ADD_VEHICLE_COMBAT_ANGLED_AVOIDANCE_AREA(float p0, float p1, float p2, float p3, float p4, float p5, float p6) { return invoke<Any>(0x54B0F614960F4A5F, p0, p1, p2, p3, p4, p5, p6); } // 0x54B0F614960F4A5F 0x5AB26C2B b323
	static void REMOVE_VEHICLE_COMBAT_AVOIDANCE_AREA(Any p0) { return invoke<void>(0xE30524E1871F481D, p0); } // 0xE30524E1871F481D 0xEF05F807 b323
	static BOOL _IS_ANY_PASSENGER_RAPPELING_FROM_VEHICLE(Vehicle vehicle) { return invoke<BOOL>(0x291E373D483E7EE7, vehicle); } // 0x291E373D483E7EE7 0xD656E7E5 b323
	static void _0x0AD9E8F87FF7C16F(Any p0, BOOL p1) { return invoke<void>(0x0AD9E8F87FF7C16F, p0, p1); } // 0x0AD9E8F87FF7C16F 0x04F5546C b323
	 // Sets the wanted state of this vehicle.
	 // 
	static void SET_VEHICLE_IS_WANTED(Vehicle vehicle, BOOL state) { return invoke<void>(0xF7EC25A3EBEEC726, vehicle, state); } // 0xF7EC25A3EBEEC726 0xDAA388E8 b323
	 // Returns true when in a vehicle, false whilst entering/exiting.
	static BOOL GET_IS_VEHICLE_ENGINE_RUNNING(Vehicle vehicle) { return invoke<BOOL>(0xAE31E7DF9B5B132E, vehicle); } // 0xAE31E7DF9B5B132E 0x7DC6D022 b323
	static void SET_VEHICLE_USE_ALTERNATE_HANDLING(Vehicle vehicle, BOOL toggle) { return invoke<void>(0x1D97D1E3A70A649F, vehicle, toggle); } // 0x1D97D1E3A70A649F 0xA03E42DF b323
	static void _0xAB04325045427AAE(Vehicle vehicle, BOOL p1) { return invoke<void>(0xAB04325045427AAE, vehicle, p1); } // 0xAB04325045427AAE 0x1984F88D b323
	static void SET_LAST_DRIVEN_VEHICLE(Vehicle vehicle) { return invoke<void>(0xACFB2463CC22BED2, vehicle); } // 0xACFB2463CC22BED2 0xD1B71A25 b323
	static Vehicle GET_LAST_DRIVEN_VEHICLE() { return invoke<Vehicle>(0xB2D06FAEDE65B577); } // 0xB2D06FAEDE65B577 0xFEB0C0C8 b323
	static void SET_VEHICLE_HAS_BEEN_DRIVEN_FLAG(Vehicle vehicle, BOOL toggle) { return invoke<void>(0x02398B627547189C, vehicle, toggle); } // 0x02398B627547189C 0x08CD58F9 b323
	static void SET_TASK_VEHICLE_GOTO_PLANE_MIN_HEIGHT_ABOVE_TERRAIN(Vehicle plane, int height) { return invoke<void>(0xB893215D8D4C015B, plane, height); } // 0xB893215D8D4C015B 0x8C4B63E2 b323
	static void SET_VEHICLE_LOD_MULTIPLIER(Vehicle vehicle, float multiplier) { return invoke<void>(0x93AE6A61BE015BF1, vehicle, multiplier); } // 0x93AE6A61BE015BF1 0x569E5AE3 b323
	static void SET_VEHICLE_CAN_SAVE_IN_GARAGE(Vehicle vehicle, BOOL toggle) { return invoke<void>(0x428BACCDF5E26EAD, vehicle, toggle); } // 0x428BACCDF5E26EAD 0x1604C2F5 b323
	 // Also includes some "turnOffBones" when vehicle mods are installed.
	static int _GET_VEHICLE_NUMBER_OF_BROKEN_OFF_BONES(Vehicle vehicle) { return invoke<int>(0x42A4BEB35D372407, vehicle); } // 0x42A4BEB35D372407 0x8CDB0C09 b323
	static void _0x4D9D109F63FEE1D4(Any p0, BOOL p1) { return invoke<void>(0x4D9D109F63FEE1D4, p0, p1); } // 0x4D9D109F63FEE1D4 0x900C878C b323
	 // SET_VEHICLE_*
	static void _0x279D50DE5652D935(Vehicle vehicle, BOOL toggle) { return invoke<void>(0x279D50DE5652D935, vehicle, toggle); } // 0x279D50DE5652D935 0xB3200F72 b323
	static void SET_LIGHTS_CUTOFF_DISTANCE_TWEAK(float distance) { return invoke<void>(0xBC3CCA5844452B06, distance); } // 0xBC3CCA5844452B06 0x929801C6 b323
	 // Commands the driver of an armed vehicle (p0) to shoot its weapon at a target (p1). p3, p4 and p5 are the coordinates of the target. Example:
	 // 
	 // WEAPON::SET_CURRENT_PED_VEHICLE_WEAPON(pilot,GAMEPLAY::GET_HASH_KEY("VEHICLE_WEAPON_PLANE_ROCKET"));                        VEHICLE::SET_VEHICLE_SHOOT_AT_TARGET(pilot, target, targPos.x, targPos.y, targPos.z);
	static void SET_VEHICLE_SHOOT_AT_TARGET(Ped driver, Entity entity, float xTarget, float yTarget, float zTarget) { return invoke<void>(0x74CD9A9327A282EA, driver, entity, xTarget, yTarget, zTarget); } // 0x74CD9A9327A282EA 0x2343FFDF b323
	static void SET_FORCE_HD_VEHICLE(Vehicle vehicle, BOOL toggle) { return invoke<void>(0x97CE68CB032583F0, vehicle, toggle); } // 0x97CE68CB032583F0 0xE0FC6A32 b323
	static void _0x182F266C2D9E2BEB(Vehicle vehicle, float p1) { return invoke<void>(0x182F266C2D9E2BEB, vehicle, p1); } // 0x182F266C2D9E2BEB 0x7D0DE7EA b323
	 // in script hook .net 
	 // 
	 // Vehicle v = ...;
	 // Function.Call(Hash.TRACK_VEHICLE_VISIBILITY, v.Handle);
	static void TRACK_VEHICLE_VISIBILITY(Vehicle vehicle) { return invoke<void>(0x64473AEFDCF47DCA, vehicle); } // 0x64473AEFDCF47DCA 0x78122DC1 b323
	 // must be called after TRACK_VEHICLE_VISIBILITY 
	 // 
	 // it's not instant so probabilly must pass an 'update' to see correct result.
	static BOOL IS_VEHICLE_VISIBLE(Vehicle vehicle) { return invoke<BOOL>(0xAA0A52D24FB98293, vehicle); } // 0xAA0A52D24FB98293 0x7E0D6056 b323
	static void SET_VEHICLE_GRAVITY(Vehicle vehicle, BOOL toggle) { return invoke<void>(0x89F149B6131E57DA, vehicle, toggle); } // 0x89F149B6131E57DA 0x07B2A6DC b323
	static void SET_ENABLE_VEHICLE_SLIPSTREAMING(BOOL toggle) { return invoke<void>(0xE6C0C80B8C867537, toggle); } // 0xE6C0C80B8C867537 0xD2B8ACBD b323
	static void SET_VEHICLE_ACTIVE_DURING_PLAYBACK(Any p0, BOOL p1) { return invoke<void>(0xDFFCEF48E511DB48, p0, p1); } // 0xDFFCEF48E511DB48 0xEB7D7C27 b323
	static void SET_VEHICLE_ENGINE_CAN_DEGRADE(Vehicle vehicle, BOOL toggle) { return invoke<void>(0x983765856F2564F9, vehicle, toggle); } // 0x983765856F2564F9 0x081DAC12 b323
	static BOOL IS_PLANE_LANDING_GEAR_INTACT(Vehicle plane) { return invoke<BOOL>(0x4198AB0022B15F87, plane); } // 0x4198AB0022B15F87 0xBD085DCA b323
	static BOOL ARE_PLANE_PROPELLERS_INTACT(Vehicle plane) { return invoke<BOOL>(0x755D6D5267CBBD7E, plane); } // 0x755D6D5267CBBD7E 0xABBDD5C6 b323
	static void SET_VEHICLE_CAN_DEFORM_WHEELS(Vehicle vehicle, BOOL toggle) { return invoke<void>(0x0CDDA42F9E360CA6, vehicle, toggle); } // 0x0CDDA42F9E360CA6 0x9B581DE7 b323
	static BOOL IS_VEHICLE_STOLEN(Vehicle vehicle) { return invoke<BOOL>(0x4AF9BD80EEBEB453, vehicle); } // 0x4AF9BD80EEBEB453 0x20B61DDE b323
	static void SET_VEHICLE_IS_STOLEN(Vehicle vehicle, BOOL isStolen) { return invoke<void>(0x67B2C79AA7FF5738, vehicle, isStolen); } // 0x67B2C79AA7FF5738 0x70912E42 b323
	 // For planes only!
	 // 
	 // value can be 1.0 or lower (higher values will automatically result in 1.0).
	static void SET_PLANE_TURBULENCE_MULTIPLIER(Vehicle vehicle, float value) { return invoke<void>(0xAD2D28A1AFDFF131, vehicle, value); } // 0xAD2D28A1AFDFF131 0xED159AE6 b323
	static BOOL IS_VEHICLE_ATTACHED_TO_CARGOBOB(Vehicle cargobob, Vehicle vehicleAttached) { return invoke<BOOL>(0xD40148F22E81A1D9, cargobob, vehicleAttached); } // 0xD40148F22E81A1D9 0x5DEEC76C b323
	 // Returns attached vehicle (Vehicle in parameter must be cargobob)
	static Vehicle GET_VEHICLE_ATTACHED_TO_CARGOBOB(Vehicle cargobob) { return invoke<Vehicle>(0x873B82D42AC2B9E5, cargobob); } // 0x873B82D42AC2B9E5 0x301A1D24 b323
	 // Returns true only when the hook is active, will return false if the magnet is active
	static BOOL DOES_CARGOBOB_HAVE_PICK_UP_ROPE(Vehicle cargobob) { return invoke<BOOL>(0x1821D91AD4B56108, cargobob); } // 0x1821D91AD4B56108 0xAF769B81 b323
	 // SET_VEHICLE_W* (next character is either H or I)
	static void _0x2C4A1590ABF43E8B(Vehicle vehicle, BOOL p1) { return invoke<void>(0x2C4A1590ABF43E8B, vehicle, p1); } // 0x2C4A1590ABF43E8B 0x2EC19A8B b323
	 // how does this work?
	static void DISABLE_VEHICLE_WEAPON(BOOL disabled, Hash weaponHash, Vehicle vehicle, Ped owner) { return invoke<void>(0xF4FC6A6F67D8D856, disabled, weaponHash, vehicle, owner); } // 0xF4FC6A6F67D8D856 0xA688B7D1 b323
	static void _0xE05DD0E9707003A3(Any p0, BOOL p1) { return invoke<void>(0xE05DD0E9707003A3, p0, p1); } // 0xE05DD0E9707003A3 0x123E5B90 b323
	static void SET_VEHICLE_ACTIVE_FOR_PED_NAVIGATION(Vehicle vehicle, BOOL toggle) { return invoke<void>(0x21115BCD6E44656A, vehicle, toggle); } // 0x21115BCD6E44656A 0xEBC225C1 b323
	 // For a full enum, see here : pastebin.com/i2GGAjY0
	 // 
	 // char buffer[128];
	 // std::sprintf(buffer, "VEH_CLASS_%i", VEHICLE::GET_VEHICLE_CLASS_FROM_NAME (hash));
	 // 
	 // const char* className = UI::_GET_LABEL_TEXT(buffer);
	static int GET_VEHICLE_CLASS_FROM_NAME(Hash modelHash) { return invoke<int>(0xDEDF1C8BD47C2200, modelHash); } // 0xDEDF1C8BD47C2200 0xEA469980 b323
	static void SET_PLAYERS_LAST_VEHICLE(Vehicle vehicle) { return invoke<void>(0xBCDF8BAF56C87B6A, vehicle); } // 0xBCDF8BAF56C87B6A 0xDE86447D b323
	static void SET_VEHICLE_CAN_BE_USED_BY_FLEEING_PEDS(Vehicle vehicle, BOOL toggle) { return invoke<void>(0x300504B23BD3B711, vehicle, toggle); } // 0x300504B23BD3B711 0x5130DB1E b323
	static void _0xE5810AC70602F2F5(Vehicle vehicle, float p1) { return invoke<void>(0xE5810AC70602F2F5, vehicle, p1); } // 0xE5810AC70602F2F5 0xB6BE07E0 b323
	 // Money pickups are created around cars when they explode. Only works when the vehicle model is a car. A single pickup is between 1 and 18 dollars in size. All car models seem to give the same amount of money.
	 // 
	 // youtu.be/3arlUxzHl5Y 
	 // i.imgur.com/WrNpYFs.jpg
	static void SET_VEHICLE_DROPS_MONEY_WHEN_BLOWN_UP(Vehicle vehicle, BOOL toggle) { return invoke<void>(0x068F64F2470F9656, vehicle, toggle); } // 0x068F64F2470F9656 0x4BB5605D b323
	 // Max value is 32767
	static void SET_VEHICLE_EXTENDED_REMOVAL_RANGE(Vehicle vehicle, int range) { return invoke<void>(0x79DF7E806202CE01, vehicle, range); } // 0x79DF7E806202CE01 0xAEF9611C b323
	 // Seems to be related to the metal parts, not tyres (like i was expecting lol)
	static void SET_VEHICLE_FRICTION_OVERRIDE(Vehicle vehicle, float friction) { return invoke<void>(0x1837AF7C627009BA, vehicle, friction); } // 0x1837AF7C627009BA 0x32AFD42E b323
	static void _SET_DISABLE_VEHICLE_WINDOW_COLLISIONS(Vehicle vehicle, BOOL togle) { return invoke<void>(0x1087BC8EC540DAEB, vehicle, togle); } // 0x1087BC8EC540DAEB b1103
	 // Sets the color of the neon lights of the specified vehicle.
	 // 
	 // More info: pastebin.com/G49gqy8b
	static void _SET_VEHICLE_NEON_LIGHTS_COLOUR(Vehicle vehicle, int r, int g, int b) { return invoke<void>(0x8E0A582209A62695, vehicle, r, g, b); } // 0x8E0A582209A62695 b323
	 // Gets the color of the neon lights of the specified vehicle.
	 // 
	 // See _SET_VEHICLE_NEON_LIGHTS_COLOUR (0x8E0A582209A62695) for more information
	static void _GET_VEHICLE_NEON_LIGHTS_COLOUR(Vehicle vehicle, int* r, int* g, int* b) { return invoke<void>(0x7619EEE8C886757F, vehicle, r, g, b); } // 0x7619EEE8C886757F b323
	 // Sets the neon lights of the specified vehicle on/off.
	 // 
	 // Indices:
	 // 0 = Left
	 // 1 = Right
	 // 2 = Front
	 // 3 = Back
	static void _SET_VEHICLE_NEON_LIGHT_ENABLED(Vehicle vehicle, int index, BOOL toggle) { return invoke<void>(0x2AA720E4287BF269, vehicle, index, toggle); } // 0x2AA720E4287BF269 b323
	 // indices:
	 // 0 = Left
	 // 1 = Right
	 // 2 = Front
	 // 3 = Back
	static BOOL _IS_VEHICLE_NEON_LIGHT_ENABLED(Vehicle vehicle, int index) { return invoke<BOOL>(0x8C4B92553E4766A5, vehicle, index); } // 0x8C4B92553E4766A5 b323
	 // p2 often set to 1000.0 in the decompiled scripts.
	static void SET_VEHICLE_BODY_HEALTH(Vehicle vehicle, float value) { return invoke<void>(0xB77D05AC8C78AADB, vehicle, value); } // 0xB77D05AC8C78AADB 0x920C2517 b323
	 // Outputs 2 Vector3's.
	 // Scripts check if out2.x - out1.x > someshit.x
	 // Could be suspension related, as in max suspension height and min suspension height, considering the natives location.
	static void _GET_VEHICLE_SUSPENSION_BOUNDS(Vehicle vehicle, Vector3* out1, Vector3* out2) { return invoke<void>(0xDF7E3EEB29642C38, vehicle, out1, out2); } // 0xDF7E3EEB29642C38 b323
	static void _0xC361AA040D6637A8(Vehicle vehicle, BOOL p1) { return invoke<void>(0xC361AA040D6637A8, vehicle, p1); } // 0xC361AA040D6637A8 b323
	static void _0xE16142B94664DEFD(Vehicle vehicle, BOOL p1) { return invoke<void>(0xE16142B94664DEFD, vehicle, p1); } // 0xE16142B94664DEFD b323
	static void _0x26D99D5A82FD18E8(Any p0) { return invoke<void>(0x26D99D5A82FD18E8, p0); } // 0x26D99D5A82FD18E8 b463
	static void _0x80E3357FDEF45C21(Any p0, Any p1) { return invoke<void>(0x80E3357FDEF45C21, p0, p1); } // 0x80E3357FDEF45C21 b944
	static BOOL _GET_HAS_ROCKET_BOOST(Vehicle vehicle) { return invoke<BOOL>(0x36D782F68B309BDA, vehicle); } // 0x36D782F68B309BDA b944
	static BOOL _IS_VEHICLE_ROCKET_BOOST_ACTIVE(Vehicle vehicle) { return invoke<BOOL>(0x3D34E80EED4AE3BE, vehicle); } // 0x3D34E80EED4AE3BE b944
	static void _SET_VEHICLE_ROCKET_BOOST_ACTIVE(Vehicle vehicle, BOOL active) { return invoke<void>(0x81E1552E35DC3839, vehicle, active); } // 0x81E1552E35DC3839 b944
	 // SET_C*
	static void _0xB2E0C0D6922D31F2(Vehicle vehicle, BOOL toggle) { return invoke<void>(0xB2E0C0D6922D31F2, vehicle, toggle); } // 0xB2E0C0D6922D31F2 b944
	static int _GET_ALL_VEHICLES(int* vehsStruct) { return invoke<int>(0x9B8E1BF04B51F2E8, vehsStruct); } // 0x9B8E1BF04B51F2E8 b1103
	static void _0x78CEEE41F49F421F(Any p0, Any p1) { return invoke<void>(0x78CEEE41F49F421F, p0, p1); } // 0x78CEEE41F49F421F b1103
	static void _0xC60060EB0D8AC7B1(Any p0, Any p1, Any p2) { return invoke<void>(0xC60060EB0D8AC7B1, p0, p1, p2); } // 0xC60060EB0D8AC7B1 b1290
}

namespace WATER
{
	 // This function set height to the value of z-axis of the water surface.
	 // 
	 // This function works with sea and lake. However it does not work with shallow rivers (e.g. raton canyon will return -100000.0f)
	 // 
	 // note: seems to return true when you are in water
	static BOOL GET_WATER_HEIGHT(float x, float y, float z, float* height) { return invoke<BOOL>(0xF6829842C06AE524, x, y, z, height); } // 0xF6829842C06AE524 0xD864E17C b323
	static BOOL GET_WATER_HEIGHT_NO_WAVES(float x, float y, float z, float* height) { return invoke<BOOL>(0x8EE6B53CE13A9794, x, y, z, height); } // 0x8EE6B53CE13A9794 0x262017F8 b323
	static BOOL TEST_PROBE_AGAINST_WATER(float x1, float y1, float z1, float x2, float y2, float z2, Vector3* result) { return invoke<BOOL>(0xFFA5D878809819DB, x1, y1, z1, x2, y2, z2, result); } // 0xFFA5D878809819DB 0xAA4AE00C b323
}

namespace WEAPON
{
	static Hash GET_WEAPON_COMPONENT_TYPE_MODEL(Hash componentHash) { return invoke<Hash>(0x0DB57B41EC1DB083, componentHash); } // 0x0DB57B41EC1DB083 0x324FA47A b323
	 // Returns the model of any weapon.
	 // 
	 // Can also take an ammo hash?
	 // sub_6663a(&l_115B, WEAPON::GET_WEAPONTYPE_MODEL(${ammo_rpg}));
	static Hash GET_WEAPONTYPE_MODEL(Hash weaponHash) { return invoke<Hash>(0xF46CDC33180FDA94, weaponHash); } // 0xF46CDC33180FDA94 0x44E1C269 b323
	static Hash GET_WEAPONTYPE_GROUP(Hash weaponHash) { return invoke<Hash>(0xC3287EE3050FB74C, weaponHash); } // 0xC3287EE3050FB74C 0x5F2DE833 b323
	static void SET_CURRENT_PED_WEAPON(Ped ped, Hash weaponHash, BOOL equipNow) { return invoke<void>(0xADF692B254977C0C, ped, weaponHash, equipNow); } // 0xADF692B254977C0C 0xB8278882 b323
	 // The return value seems to indicate returns true if the hash of the weapon object weapon equals the weapon hash.
	 // p2 seems to be 1 most of the time.
	 // 
	 // 
	 // 
	 // 
	 // 
	 // p2 is not implemented
	 // 
	 // disassembly said that?
	 // 
	static BOOL GET_CURRENT_PED_WEAPON(Ped ped, Hash* weaponHash, BOOL p2) { return invoke<BOOL>(0x3A87E44BB9A01D54, ped, weaponHash, p2); } // 0x3A87E44BB9A01D54 0xB0237302 b323
	static Entity GET_CURRENT_PED_WEAPON_ENTITY_INDEX(Ped ped, Any p1) { return invoke<Entity>(0x3B390A939AF0B5FC, ped, p1); } // 0x3B390A939AF0B5FC 0x5D73CD20 b323
	 // p1 is always 0 in the scripts.
	static Hash GET_BEST_PED_WEAPON(Ped ped, BOOL p1) { return invoke<Hash>(0x8483E98E8B888AE2, ped, p1); } // 0x8483E98E8B888AE2 0xB998D444 b323
	static BOOL SET_CURRENT_PED_VEHICLE_WEAPON(Ped ped, Hash weaponHash) { return invoke<BOOL>(0x75C55983C2C39DAA, ped, weaponHash); } // 0x75C55983C2C39DAA 0x8E6F2AF1 b323
	 // Example in VB
	 // 
	 //     Public Shared Function GetVehicleCurrentWeapon(Ped As Ped) As Integer
	 //         Dim arg As New OutputArgument()
	 //         Native.Function.Call(Hash.GET_CURRENT_PED_VEHICLE_WEAPON, Ped, arg)
	 //         Return arg.GetResult(Of Integer)()
	 //     End Function
	 // 
	 // Usage:
	 // If GetVehicleCurrentWeapon(Game.Player.Character) = -821520672 Then ...Do something
	 // Note: -821520672 = VEHICLE_WEAPON_PLANE_ROCKET
	static BOOL GET_CURRENT_PED_VEHICLE_WEAPON(Ped ped, Hash* weaponHash) { return invoke<BOOL>(0x1017582BCD3832DC, ped, weaponHash); } // 0x1017582BCD3832DC 0xF26C5D65 b323
	 // p1 is anywhere from 4 to 7 in the scripts. Might be a weapon wheel group?
	 // 
	 // ^It's kinda like that. 
	 // 7 returns true if you are equipped with any weapon except your fists.
	 // 6 returns true if you are equipped with any weapon except melee weapons.
	 // 5 returns true if you are equipped with any weapon except the Explosives weapon group.
	 // 4 returns true if you are equipped with any weapon except Explosives weapon group AND melee weapons.
	 // 3 returns true if you are equipped with either Explosives or Melee weapons (the exact opposite of 4).
	 // 2 returns true only if you are equipped with any weapon from the Explosives weapon group.
	 // 1 returns true only if you are equipped with any Melee weapon.
	 // 0 never returns true.
	 // 
	 // Note: When I say "Explosives weapon group", it does not include the Jerry can and Fire Extinguisher.
	static BOOL IS_PED_ARMED(Ped ped, int p1) { return invoke<BOOL>(0x475768A975D5AD17, ped, p1); } // 0x475768A975D5AD17 0x0BFC892C b323
	static BOOL IS_WEAPON_VALID(Hash weaponHash) { return invoke<BOOL>(0x937C71165CF334B3, weaponHash); } // 0x937C71165CF334B3 0x38CA2954 b323
	 // p2 should be FALSE, otherwise it seems to always return FALSE
	 // 
	 // Bool does not check if the weapon is current equipped, unfortunately.
	static BOOL HAS_PED_GOT_WEAPON(Ped ped, Hash weaponHash, BOOL p2) { return invoke<BOOL>(0x8DECB02F88F428BC, ped, weaponHash, p2); } // 0x8DECB02F88F428BC 0x43D2FA82 b323
	static BOOL IS_PED_WEAPON_READY_TO_SHOOT(Ped ped) { return invoke<BOOL>(0xB80CA294F2F26749, ped); } // 0xB80CA294F2F26749 0x02A32CB0 b323
	static Hash GET_PED_WEAPONTYPE_IN_SLOT(Ped ped, Hash weaponSlot) { return invoke<Hash>(0xEFFED78E9011134D, ped, weaponSlot); } // 0xEFFED78E9011134D 0x9BC64E16 b323
	 // WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), a_0)
	 // 
	 // From decompiled scripts
	 // Returns total ammo in weapon
	 // 
	 // GTALua Example :
	 // natives.WEAPON.GET_AMMO_IN_PED_WEAPON(plyPed, WeaponHash)
	static int GET_AMMO_IN_PED_WEAPON(Ped ped, Hash weaponhash) { return invoke<int>(0x015A522136D7F951, ped, weaponhash); } // 0x015A522136D7F951 0x0C755733 b323
	static void ADD_AMMO_TO_PED(Ped ped, Hash weaponHash, int ammo) { return invoke<void>(0x78F0424C34306220, ped, weaponHash, ammo); } // 0x78F0424C34306220 0x7F0580C7 b323
	static void SET_PED_AMMO(Ped ped, Hash weaponHash, int ammo, BOOL p3) { return invoke<void>(0x14E56BC5B5DB6A19, ped, weaponHash, ammo, p3); } // 0x14E56BC5B5DB6A19 0xBF90DF1A b323
	static void SET_PED_INFINITE_AMMO(Ped ped, BOOL toggle, Hash weaponHash) { return invoke<void>(0x3EDCB0505123623B, ped, toggle, weaponHash); } // 0x3EDCB0505123623B 0x9CB8D278 b323
	 // isHidden - ????
	 // 
	 // All weapon names (add to the list if something is missing), use GAMEPLAY::GET_HASH_KEY((char *)weaponNames[i]) to get get the hash:
	 // 
	 // static LPCSTR weaponNames[] = {
	 //  "WEAPON_KNIFE", "WEAPON_NIGHTSTICK", "WEAPON_HAMMER", "WEAPON_BAT", "WEAPON_GOLFCLUB",
	 //   "WEAPON_CROWBAR", "WEAPON_PISTOL", "WEAPON_COMBATPISTOL", "WEAPON_APPISTOL", "WEAPON_PISTOL50",
	 //  "WEAPON_MICROSMG", "WEAPON_SMG", "WEAPON_ASSAULTSMG", "WEAPON_ASSAULTRIFLE",
	 //   "WEAPON_CARBINERIFLE", "WEAPON_ADVANCEDRIFLE", "WEAPON_MG", "WEAPON_COMBATMG", "WEAPON_PUMPSHOTGUN",
	 //     "WEAPON_SAWNOFFSHOTGUN", "WEAPON_ASSAULTSHOTGUN", "WEAPON_BULLPUPSHOTGUN", "WEAPON_STUNGUN", "WEAPON_SNIPERRIFLE",
	 //   "WEAPON_HEAVYSNIPER", "WEAPON_GRENADELAUNCHER", "WEAPON_GRENADELAUNCHER_SMOKE", "WEAPON_RPG", "WEAPON_MINIGUN",
	 //  "WEAPON_GRENADE", "WEAPON_STICKYBOMB", "WEAPON_SMOKEGRENADE", "WEAPON_BZGAS", "WEAPON_MOLOTOV",
	 //  "WEAPON_FIREEXTINGUISHER", "WEAPON_PETROLCAN", "WEAPON_FLARE", "WEAPON_SNSPISTOL", "WEAPON_SPECIALCARBINE",
	 //  "WEAPON_HEAVYPISTOL", "WEAPON_BULLPUPRIFLE", "WEAPON_HOMINGLAUNCHER", "WEAPON_PROXMINE", "WEAPON_SNOWBALL",
	 //  "WEAPON_VINTAGEPISTOL", "WEAPON_DAGGER", "WEAPON_FIREWORK", "WEAPON_MUSKET", "WEAPON_MARKSMANRIFLE",
	 //     "WEAPON_HEAVYSHOTGUN", "WEAPON_GUSENBERG", "WEAPON_HATCHET", "WEAPON_RAILGUN", "WEAPON_COMBATPDW",
	 //   "WEAPON_KNUCKLE", "WEAPON_MARKSMANPISTOL", "WEAPON_FLASHLIGHT", "WEAPON_MACHETE", "WEAPON_MACHINEPISTOL",
	 //    "WEAPON_SWITCHBLADE", "WEAPON_REVOLVER", "WEAPON_COMPACTRIFLE", "WEAPON_DBSHOTGUN", "WEAPON_FLAREGUN",
	 //   "WEAPON_AUTOSHOTGUN", "WEAPON_BATTLEAXE", "WEAPON_COMPACTLAUNCHER", "WEAPON_MINISMG", "WEAPON_PIPEBOMB",
	 //     "WEAPON_POOLCUE", "WEAPON_SWEEPER", "WEAPON_WRENCH"
	 // };
	 // ----------------------------------------------------------------------------------------------------------------------------------------
	 // Translation table:
	 // pastebin.com/a39K8Nz8
	static void GIVE_WEAPON_TO_PED(Ped ped, Hash weaponHash, int ammoCount, BOOL isHidden, BOOL equipNow) { return invoke<void>(0xBF0FD6E56C964FCB, ped, weaponHash, ammoCount, isHidden, equipNow); } // 0xBF0FD6E56C964FCB 0xC4D88A85 b323
	 // Gives a weapon to PED with a delay, example:
	 // 
	 // WEAPON::GIVE_DELAYED_WEAPON_TO_PED(PED::PLAYER_PED_ID(), GAMEPLAY::GET_HASH_KEY("WEAPON_PISTOL"), 1000, false)
	 // ----------------------------------------------------------------------------------------------------------------------------------------
	 // Translation table:
	 // pastebin.com/a39K8Nz8
	 // 
	 // 
	static void GIVE_DELAYED_WEAPON_TO_PED(Ped ped, Hash weaponHash, int ammoCount, BOOL equipNow) { return invoke<void>(0xB282DC6EBD803C75, ped, weaponHash, ammoCount, equipNow); } // 0xB282DC6EBD803C75 0x5868D20D b323
	 // setting the last params to false it does that same so I would suggest its not a toggle
	static void REMOVE_ALL_PED_WEAPONS(Ped ped, BOOL p1) { return invoke<void>(0xF25DF915FA38C5F3, ped, p1); } // 0xF25DF915FA38C5F3 0xA44CE817 b323
	 // This native removes a specified weapon from your selected ped.
	 // Weapon Hashes: pastebin.com/0wwDZgkF
	 // 
	 // Example:
	 // C#:
	 // Function.Call(Hash.REMOVE_WEAPON_FROM_PED, Game.Player.Character, 0x99B507EA);
	 // 
	 // C++:
	 // WEAPON::REMOVE_WEAPON_FROM_PED(PLAYER::PLAYER_PED_ID(), 0x99B507EA);
	 // 
	 // The code above removes the knife from the player.
	static void REMOVE_WEAPON_FROM_PED(Ped ped, Hash weaponHash) { return invoke<void>(0x4899CB088EDF59B8, ped, weaponHash); } // 0x4899CB088EDF59B8 0x9C37F220 b323
	 // Hides the players weapon during a cutscene.
	static void HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(Ped ped, BOOL toggle) { return invoke<void>(0x6F6981D2253C208F, ped, toggle); } // 0x6F6981D2253C208F 0x00CFD6E9 b323
	 // Has 5 parameters since latest patches.
	static void SET_PED_CURRENT_WEAPON_VISIBLE(Ped ped, BOOL visible, BOOL deselectWeapon, BOOL p3, BOOL p4) { return invoke<void>(0x0725A4CCFDED9A70, ped, visible, deselectWeapon, p3, p4); } // 0x0725A4CCFDED9A70 0x00BECD77 b323
	static void SET_PED_DROPS_WEAPONS_WHEN_DEAD(Ped ped, BOOL toggle) { return invoke<void>(0x476AE72C1D19D1A8, ped, toggle); } // 0x476AE72C1D19D1A8 0x8A444056 b323
	 // It determines what weapons caused damage:
	 // 
	 // If you want to define only a specific weapon, second parameter=weapon hash code, third parameter=0
	 // If you want to define any melee weapon, second parameter=0, third parameter=1.
	 // If you want to identify any weapon (firearms, melee, rockets, etc.), second parameter=0, third parameter=2.
	static BOOL HAS_PED_BEEN_DAMAGED_BY_WEAPON(Ped ped, Hash weaponHash, int weaponType) { return invoke<BOOL>(0x2D343D2219CD027A, ped, weaponHash, weaponType); } // 0x2D343D2219CD027A 0xCDFBBCC6 b323
	static void CLEAR_PED_LAST_WEAPON_DAMAGE(Ped ped) { return invoke<void>(0x0E98F88A24C5F4B8, ped); } // 0x0E98F88A24C5F4B8 0x52C68832 b323
	 // It determines what weapons caused damage:
	 // 
	 // If youu want to define only a specific weapon, second parameter=weapon hash code, third parameter=0
	 // If you want to define any melee weapon, second parameter=0, third parameter=1.
	 // If you want to identify any weapon (firearms, melee, rockets, etc.), second parameter=0, third parameter=2.
	static BOOL HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(Entity entity, Hash weaponHash, int weaponType) { return invoke<BOOL>(0x131D401334815E94, entity, weaponHash, weaponType); } // 0x131D401334815E94 0x6DAABB39 b323
	static void CLEAR_ENTITY_LAST_WEAPON_DAMAGE(Entity entity) { return invoke<void>(0xAC678E40BE7C74D2, entity); } // 0xAC678E40BE7C74D2 0xCEC2732B b323
	static void SET_PED_DROPS_WEAPON(Ped ped) { return invoke<void>(0x6B7513D9966FBEC0, ped); } // 0x6B7513D9966FBEC0 0x3D3329FA b323
	 // p2 is mostly 1 in the scripts.
	static int GET_MAX_AMMO_IN_CLIP(Ped ped, Hash weaponHash, BOOL p2) { return invoke<int>(0xA38DCFFCEA8962FA, ped, weaponHash, p2); } // 0xA38DCFFCEA8962FA 0x6961E2A4 b323
	static BOOL GET_AMMO_IN_CLIP(Ped ped, Hash weaponHash, int* ammo) { return invoke<BOOL>(0x2E1202248937775C, ped, weaponHash, ammo); } // 0x2E1202248937775C 0x73C100C3 b323
	static BOOL SET_AMMO_IN_CLIP(Ped ped, Hash weaponHash, int ammo) { return invoke<BOOL>(0xDCD2A934D65CB497, ped, weaponHash, ammo); } // 0xDCD2A934D65CB497 0xA54B0B10 b323
	static BOOL GET_MAX_AMMO(Ped ped, Hash weaponHash, int* ammo) { return invoke<BOOL>(0xDC16122C7A20C933, ped, weaponHash, ammo); } // 0xDC16122C7A20C933 0x0B294796 b323
	 // Ammo types: https://gist.github.com/root-cause/faf41f59f7a6d818b7db0b839bd147c1
	static BOOL _GET_MAX_AMMO_BY_TYPE(Ped ped, Hash ammoTypeHash, int* ammo) { return invoke<BOOL>(0x585847C5E4E11709, ped, ammoTypeHash, ammo); } // 0x585847C5E4E11709 b1103
	 // Ammo types: https://gist.github.com/root-cause/faf41f59f7a6d818b7db0b839bd147c1
	static void _ADD_AMMO_TO_PED_BY_TYPE(Ped ped, Hash ammoTypeHash, int ammo) { return invoke<void>(0x2472622CE1F2D45F, ped, ammoTypeHash, ammo); } // 0x2472622CE1F2D45F b1103
	 // Ammo types: https://gist.github.com/root-cause/faf41f59f7a6d818b7db0b839bd147c1
	static void SET_PED_AMMO_BY_TYPE(Ped ped, Hash ammoTypeHash, int ammo) { return invoke<void>(0x5FD1E1F011E76D7E, ped, ammoTypeHash, ammo); } // 0x5FD1E1F011E76D7E 0x311C52BB b323
	static int GET_PED_AMMO_BY_TYPE(Ped ped, Hash ammoTypeHash) { return invoke<int>(0x39D22031557946C1, ped, ammoTypeHash); } // 0x39D22031557946C1 0x54077C4D b323
	 // gadgetHash - was always 0xFBAB5776 ("GADGET_PARACHUTE").
	static BOOL GET_IS_PED_GADGET_EQUIPPED(Ped ped, Hash gadgetHash) { return invoke<BOOL>(0xF731332072F5156C, ped, gadgetHash); } // 0xF731332072F5156C 0x8DDD0B5B b323
	 // Returns the hash of the weapon. 
	 // 
	 //             var num7 = WEAPON::GET_SELECTED_PED_WEAPON(num4);
	 //             sub_27D3(num7);
	 //             switch (num7)
	 //             {
	 //                 case 0x24B17070:
	 // 
	 // Also see WEAPON::GET_CURRENT_PED_WEAPON. Difference?
	 // 
	 // -------------------------------------------------------------------------
	 // 
	 // The difference is that GET_SELECTED_PED_WEAPON simply returns the ped's current weapon hash but GET_CURRENT_PED_WEAPON also checks the weapon object and returns true if the hash of the weapon object equals the weapon hash
	static Hash GET_SELECTED_PED_WEAPON(Ped ped) { return invoke<Hash>(0x0A6DB4965674D243, ped); } // 0x0A6DB4965674D243 0xD240123E b323
	static float GET_LOCKON_DISTANCE_OF_CURRENT_PED_WEAPON(Ped ped) { return invoke<float>(0x840F03E9041E2C9C, ped); } // 0x840F03E9041E2C9C 0x3612110D b323
	 // Third Parameter = unsure, but pretty sure it is weapon hash
	 // --> get_hash_key("weapon_stickybomb")
	 // 
	 // Fourth Parameter = unsure, almost always -1
	static BOOL HAS_VEHICLE_GOT_PROJECTILE_ATTACHED(Ped driver, Vehicle vehicle, Hash weaponHash, Any p3) { return invoke<BOOL>(0x717C8481234E3B88, driver, vehicle, weaponHash, p3); } // 0x717C8481234E3B88 0xA57E2E80 b323
	static void GIVE_WEAPON_COMPONENT_TO_PED(Ped ped, Hash weaponHash, Hash componentHash) { return invoke<void>(0xD966D51AA5B28BB9, ped, weaponHash, componentHash); } // 0xD966D51AA5B28BB9 0x3E1E286D b323
	static BOOL HAS_PED_GOT_WEAPON_COMPONENT(Ped ped, Hash weaponHash, Hash componentHash) { return invoke<BOOL>(0xC593212475FAE340, ped, weaponHash, componentHash); } // 0xC593212475FAE340 0xDC0FC145 b323
	static BOOL IS_PED_WEAPON_COMPONENT_ACTIVE(Ped ped, Hash weaponHash, Hash componentHash) { return invoke<BOOL>(0x0D78DE0572D3969E, ped, weaponHash, componentHash); } // 0x0D78DE0572D3969E 0x7565FB19 b323
	 // Nearly every instance of p1 I found was 31. Nearly every instance of p2 I found was 0.
	 // 
	 // REQUEST_WEAPON_ASSET(iLocal_1888, 31, 26);
	static void REQUEST_WEAPON_ASSET(Hash weaponHash, int p1, int p2) { return invoke<void>(0x5443438F033E29C3, weaponHash, p1, p2); } // 0x5443438F033E29C3 0x65D139A5 b323
	static BOOL HAS_WEAPON_ASSET_LOADED(Hash weaponHash) { return invoke<BOOL>(0x36E353271F0E90EE, weaponHash); } // 0x36E353271F0E90EE 0x1891D5BB b323
	static void REMOVE_WEAPON_ASSET(Hash weaponHash) { return invoke<void>(0xAA08EF13F341C8FC, weaponHash); } // 0xAA08EF13F341C8FC 0x2C0DFE3C b323
	 // Now has 8 params.
	static Object CREATE_WEAPON_OBJECT(Hash weaponHash, int ammoCount, float x, float y, float z, BOOL showWorldModel, float heading, Any p7, Any p8, Any p9) { return invoke<Object>(0x9541D3CF0D398F36, weaponHash, ammoCount, x, y, z, showWorldModel, heading, p7, p8, p9); } // 0x9541D3CF0D398F36 0x62F5987F b323
	 // addonHash:
	 // (use WEAPON::GET_WEAPON_COMPONENT_TYPE_MODEL() to get hash value)
	 // ${component_at_ar_flsh}, ${component_at_ar_supp}, ${component_at_pi_flsh}, ${component_at_scope_large}, ${component_at_ar_supp_02}
	static void GIVE_WEAPON_COMPONENT_TO_WEAPON_OBJECT(Object weaponObject, Hash addonHash) { return invoke<void>(0x33E179436C0B31DB, weaponObject, addonHash); } // 0x33E179436C0B31DB 0xF7612A37 b323
	static void REMOVE_WEAPON_COMPONENT_FROM_WEAPON_OBJECT(Any p0, Any p1) { return invoke<void>(0xF7D82B0D66777611, p0, p1); } // 0xF7D82B0D66777611 0xA6E7ED3C b323
	static BOOL HAS_WEAPON_GOT_WEAPON_COMPONENT(Object weapon, Hash addonHash) { return invoke<BOOL>(0x76A18844E743BF91, weapon, addonHash); } // 0x76A18844E743BF91 0x1D368510 b323
	static void GIVE_WEAPON_OBJECT_TO_PED(Object weaponObject, Ped ped) { return invoke<void>(0xB1FA61371AF7C4B7, weaponObject, ped); } // 0xB1FA61371AF7C4B7 0x639AF3EF b323
	 // Drops the current weapon and returns the object
	 // 
	 // Unknown behavior when unarmed.
	static Object GET_WEAPON_OBJECT_FROM_PED(Ped ped, BOOL p1) { return invoke<Object>(0xCAE1DC9A0E22A16D, ped, p1); } // 0xCAE1DC9A0E22A16D 0xDF939A38 b323
	static int GET_PED_WEAPON_TINT_INDEX(Ped ped, Hash weaponHash) { return invoke<int>(0x2B9EEDC07BD06B9F, ped, weaponHash); } // 0x2B9EEDC07BD06B9F 0x3F9C90A7 b323
	static void SET_WEAPON_OBJECT_TINT_INDEX(Object weapon, int tintIndex) { return invoke<void>(0xF827589017D4E4A9, weapon, tintIndex); } // 0xF827589017D4E4A9 0x44ACC1DA b323
	static int GET_WEAPON_TINT_COUNT(Hash weaponHash) { return invoke<int>(0x5DCF6C5CAB2E9BF7, weaponHash); } // 0x5DCF6C5CAB2E9BF7 0x99E4EAAB b323
	 // GET_PED_WEAPON_*
	static int _0xA2C9AC24B4061285(Ped ped, Hash weaponHash) { return invoke<int>(0xA2C9AC24B4061285, ped, weaponHash); } // 0xA2C9AC24B4061285 b1103
	 // struct WeaponHudStatsData
	 // {
	 //     BYTE hudDamage; // 0x0000
	 //     char _0x0001[0x7]; // 0x0001
	 //     BYTE hudSpeed; // 0x0008
	 //     char _0x0009[0x7]; // 0x0009
	 //     BYTE hudCapacity; // 0x0010
	 //     char _0x0011[0x7]; // 0x0011
	 //     BYTE hudAccuracy; // 0x0018
	 //     char _0x0019[0x7]; // 0x0019
	 //     BYTE hudRange; // 0x0020
	 // };
	 // 
	 // Usage:
	 // 
	 // WeaponHudStatsData data;
	 // if (GET_WEAPON_HUD_STATS(weaponHash, (int *)&data))
	 // {
	 //     // BYTE damagePercentage = data.hudDamage and so on
	 // }
	static BOOL GET_WEAPON_HUD_STATS(Hash weaponHash, Any* outData) { return invoke<BOOL>(0xD92C739EE34C9EBA, weaponHash, outData); } // 0xD92C739EE34C9EBA 0xA9AD3D98 b323
	static BOOL GET_WEAPON_COMPONENT_HUD_STATS(Hash componentHash, int* outData) { return invoke<BOOL>(0xB3CAF387AE12E9F8, componentHash, outData); } // 0xB3CAF387AE12E9F8 0xBB5498F4 b323
	 // // Returns the size of the default weapon component clip.
	 // 
	 // Use it like this:
	 // 
	 // char cClipSize[32];
	 // Hash cur;
	 // if (WEAPON::GET_CURRENT_PED_WEAPON(playerPed, &cur, 1))
	 // {
	 //     if (WEAPON::IS_WEAPON_VALID(cur))
	 //     {
	 //         int iClipSize = WEAPON::GET_WEAPON_CLIP_SIZE(cur);
	 //         sprintf_s(cClipSize, "ClipSize: %.d", iClipSize);
	 //         vDrawString(cClipSize, 0.5f, 0.5f);
	 //     }
	 // }
	 // 
	static int GET_WEAPON_CLIP_SIZE(Hash weaponHash) { return invoke<int>(0x583BE370B1EC6EB4, weaponHash); } // 0x583BE370B1EC6EB4 0x8D515E66 b323
	static void SET_PED_CHANCE_OF_FIRING_BLANKS(Ped ped, float xBias, float yBias) { return invoke<void>(0x8378627201D5497D, ped, xBias, yBias); } // 0x8378627201D5497D 0xB4F44C6E b323
	 // This native returns a true or false value.
	 // 
	 // Ped ped = The ped whose weapon you want to check.
	static BOOL IS_PED_CURRENT_WEAPON_SILENCED(Ped ped) { return invoke<BOOL>(0x65F0C5AE05943EC7, ped); } // 0x65F0C5AE05943EC7 0xBAF7BFBE b323
	static BOOL IS_FLASH_LIGHT_ON(Ped ped) { return invoke<BOOL>(0x4B7620C47217126C, ped); } // 0x4B7620C47217126C 0x76876154 b323
	 // 0=unknown (or incorrect weaponHash)
	 // 1= no damage (flare,snowball, petrolcan)
	 // 2=melee
	 // 3=bullet
	 // 4=force ragdoll fall
	 // 5=explosive (RPG, Railgun, grenade)
	 // 6=fire(molotov)
	 // 8=fall(WEAPON_HELI_CRASH)
	 // 10=electric
	 // 11=barbed wire
	 // 12=extinguisher
	 // 13=gas
	 // 14=water cannon(WEAPON_HIT_BY_WATER_CANNON)
	static int GET_WEAPON_DAMAGE_TYPE(Hash weaponHash) { return invoke<int>(0x3BE0BB12D25FB305, weaponHash); } // 0x3BE0BB12D25FB305 0x013AFC13 b323
}

namespace ZONE
{
	static int GET_ZONE_AT_COORDS(float x, float y, float z) { return invoke<int>(0x27040C25DE6CB2F4, x, y, z); } // 0x27040C25DE6CB2F4 0xC9018181 b323
	 // 'zoneName' corresponds to an entry in 'popzone.ipl'.
	 // 
	 // AIRP = Los Santos International Airport
	 // ALAMO = Alamo Sea
	 // ALTA = Alta
	 // ARMYB = Fort Zancudo
	 // BANHAMC = Banham Canyon Dr
	 // BANNING = Banning
	 // BEACH = Vespucci Beach
	 // BHAMCA = Banham Canyon
	 // BRADP = Braddock Pass
	 // BRADT = Braddock Tunnel
	 // BURTON = Burton
	 // CALAFB = Calafia Bridge
	 // CANNY = Raton Canyon
	 // CCREAK = Cassidy Creek
	 // CHAMH = Chamberlain Hills
	 // CHIL = Vinewood Hills
	 // CHU = Chumash
	 // CMSW = Chiliad Mountain State Wilderness
	 // CYPRE = Cypress Flats
	 // DAVIS = Davis
	 // DELBE = Del Perro Beach
	 // DELPE = Del Perro
	 // DELSOL = La Puerta
	 // DESRT = Grand Senora Desert
	 // DOWNT = Downtown
	 // DTVINE = Downtown Vinewood
	 // EAST_V = East Vinewood
	 // EBURO = El Burro Heights
	 // ELGORL = El Gordo Lighthouse
	 // ELYSIAN = Elysian Island
	 // GALFISH = Galilee
	 // GOLF = GWC and Golfing Society
	 // GRAPES = Grapeseed
	 // GREATC = Great Chaparral
	 // HARMO = Harmony
	 // HAWICK = Hawick
	 // HORS = Vinewood Racetrack
	 // HUMLAB = Humane Labs and Research
	 // JAIL = Bolingbroke Penitentiary
	 // KOREAT = Little Seoul
	 // LACT = Land Act Reservoir
	 // LAGO = Lago Zancudo
	 // LDAM = Land Act Dam
	 // LEGSQU = Legion Square
	 // LMESA = La Mesa
	 // LOSPUER = La Puerta
	 // MIRR = Mirror Park
	 // MORN = Morningwood
	 // MOVIE = Richards Majestic
	 // MTCHIL = Mount Chiliad
	 // MTGORDO = Mount Gordo
	 // MTJOSE = Mount Josiah
	 // MURRI = Murrieta Heights
	 // NCHU = North Chumash
	 // NOOSE = N.O.O.S.E
	 // OCEANA = Pacific Ocean
	 // PALCOV = Paleto Cove
	 // PALETO = Paleto Bay
	 // PALFOR = Paleto Forest
	 // PALHIGH = Palomino Highlands
	 // PALMPOW = Palmer-Taylor Power Station
	 // PBLUFF = Pacific Bluffs
	 // PBOX = Pillbox Hill
	 // PROCOB = Procopio Beach
	 // RANCHO = Rancho
	 // RGLEN = Richman Glen
	 // RICHM = Richman
	 // ROCKF = Rockford Hills
	 // RTRAK = Redwood Lights Track
	 // SANAND = San Andreas
	 // SANCHIA = San Chianski Mountain Range
	 // SANDY = Sandy Shores
	 // SKID = Mission Row
	 // SLAB = Stab City
	 // STAD = Maze Bank Arena
	 // STRAW = Strawberry
	 // TATAMO = Tataviam Mountains
	 // TERMINA = Terminal
	 // TEXTI = Textile City
	 // TONGVAH = Tongva Hills
	 // TONGVAV = Tongva Valley
	 // VCANA = Vespucci Canals
	 // VESP = Vespucci
	 // VINE = Vinewood
	 // WINDF = Ron Alternates Wind Farm
	 // WVINE = West Vinewood
	 // ZANCUDO = Zancudo River
	 // ZP_ORT = Port of South Los Santos
	 // ZQ_UAR = Davis Quartz
	 // 
	static int GET_ZONE_FROM_NAME_ID(const char* zoneName) { return invoke<int>(0x98CD1D2934B76CC1, zoneName); } // 0x98CD1D2934B76CC1 0x8EC68304 b323
	static int GET_ZONE_POPSCHEDULE(int zoneId) { return invoke<int>(0x4334BC40AA0CB4BB, zoneId); } // 0x4334BC40AA0CB4BB 0x20AB2FC9 b323
	 // AIRP = Los Santos International Airport
	 // ALAMO = Alamo Sea
	 // ALTA = Alta
	 // ARMYB = Fort Zancudo
	 // BANHAMC = Banham Canyon Dr
	 // BANNING = Banning
	 // BEACH = Vespucci Beach
	 // BHAMCA = Banham Canyon
	 // BRADP = Braddock Pass
	 // BRADT = Braddock Tunnel
	 // BURTON = Burton
	 // CALAFB = Calafia Bridge
	 // CANNY = Raton Canyon
	 // CCREAK = Cassidy Creek
	 // CHAMH = Chamberlain Hills
	 // CHIL = Vinewood Hills
	 // CHU = Chumash
	 // CMSW = Chiliad Mountain State Wilderness
	 // CYPRE = Cypress Flats
	 // DAVIS = Davis
	 // DELBE = Del Perro Beach
	 // DELPE = Del Perro
	 // DELSOL = La Puerta
	 // DESRT = Grand Senora Desert
	 // DOWNT = Downtown
	 // DTVINE = Downtown Vinewood
	 // EAST_V = East Vinewood
	 // EBURO = El Burro Heights
	 // ELGORL = El Gordo Lighthouse
	 // ELYSIAN = Elysian Island
	 // GALFISH = Galilee
	 // GOLF = GWC and Golfing Society
	 // GRAPES = Grapeseed
	 // GREATC = Great Chaparral
	 // HARMO = Harmony
	 // HAWICK = Hawick
	 // HORS = Vinewood Racetrack
	 // HUMLAB = Humane Labs and Research
	 // JAIL = Bolingbroke Penitentiary
	 // KOREAT = Little Seoul
	 // LACT = Land Act Reservoir
	 // LAGO = Lago Zancudo
	 // LDAM = Land Act Dam
	 // LEGSQU = Legion Square
	 // LMESA = La Mesa
	 // LOSPUER = La Puerta
	 // MIRR = Mirror Park
	 // MORN = Morningwood
	 // MOVIE = Richards Majestic
	 // MTCHIL = Mount Chiliad
	 // MTGORDO = Mount Gordo
	 // MTJOSE = Mount Josiah
	 // MURRI = Murrieta Heights
	 // NCHU = North Chumash
	 // NOOSE = N.O.O.S.E
	 // OCEANA = Pacific Ocean
	 // PALCOV = Paleto Cove
	 // PALETO = Paleto Bay
	 // PALFOR = Paleto Forest
	 // PALHIGH = Palomino Highlands
	 // PALMPOW = Palmer-Taylor Power Station
	 // PBLUFF = Pacific Bluffs
	 // PBOX = Pillbox Hill
	 // PROCOB = Procopio Beach
	 // RANCHO = Rancho
	 // RGLEN = Richman Glen
	 // RICHM = Richman
	 // ROCKF = Rockford Hills
	 // RTRAK = Redwood Lights Track
	 // SANAND = San Andreas
	 // SANCHIA = San Chianski Mountain Range
	 // SANDY = Sandy Shores
	 // SKID = Mission Row
	 // SLAB = Stab City
	 // STAD = Maze Bank Arena
	 // STRAW = Strawberry
	 // TATAMO = Tataviam Mountains
	 // TERMINA = Terminal
	 // TEXTI = Textile City
	 // TONGVAH = Tongva Hills
	 // TONGVAV = Tongva Valley
	 // VCANA = Vespucci Canals
	 // VESP = Vespucci
	 // VINE = Vinewood
	 // WINDF = Ron Alternates Wind Farm
	 // WVINE = West Vinewood
	 // ZANCUDO = Zancudo River
	 // ZP_ORT = Port of South Los Santos
	 // ZQ_UAR = Davis Quartz
	 // 
	static const char* GET_NAME_OF_ZONE(float x, float y, float z) { return invoke<const char*>(0xCD90657D4C30E1CA, x, y, z); } // 0xCD90657D4C30E1CA 0x7875CE91 b323
	static void SET_ZONE_ENABLED(int zoneId, BOOL toggle) { return invoke<void>(0xBA5ECEEA120E5611, zoneId, toggle); } // 0xBA5ECEEA120E5611 0x04E21B03 b323
	 // cellphone range 1- 5 used for signal bar in iFruit phone
	static int GET_ZONE_SCUMMINESS(int zoneId) { return invoke<int>(0x5F7B268D15BA0739, zoneId); } // 0x5F7B268D15BA0739 0xB2FB5C4C b323
	 // Only used once in the decompiled scripts. Seems to be related to scripted vehicle generators.
	 // 
	 // Modified example from "am_imp_exp.c4", line 6406:
	 // /* popSchedules[0] = ZONE::GET_ZONE_POPSCHEDULE(ZONE::GET_ZONE_AT_COORDS(891.3, 807.9, 188.1));
	 // etc.
	 // */
	 // ZONE::OVERRIDE_POPSCHEDULE_VEHICLE_MODEL(popSchedules[index], vehicleHash);
	 // STREAMING::REQUEST_MODEL(vehicleHash);
	static void OVERRIDE_POPSCHEDULE_VEHICLE_MODEL(int scheduleId, Hash vehicleHash) { return invoke<void>(0x5F7D596BAC2E7777, scheduleId, vehicleHash); } // 0x5F7D596BAC2E7777 0x3F0A3680 b323
	 // Only used once in the decompiled scripts. Seems to be related to scripted vehicle generators.
	 // 
	 // Modified example from "am_imp_exp.c4", line 6418:
	 // /* popSchedules[0] = ZONE::GET_ZONE_POPSCHEDULE(ZONE::GET_ZONE_AT_COORDS(891.3, 807.9, 188.1));
	 // etc.
	 // */
	 // STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(vehicleHash);
	 // ZONE::CLEAR_POPSCHEDULE_OVERRIDE_VEHICLE_MODEL(popSchedules[index]);
	static void CLEAR_POPSCHEDULE_OVERRIDE_VEHICLE_MODEL(int scheduleId) { return invoke<void>(0x5C0DE367AA0D911C, scheduleId); } // 0x5C0DE367AA0D911C 0x7A72A24E b323
	 // Returns a hash representing which part of the map the given coords are located.
	 // 
	 // Possible return values:
	 // (Hash of) city -> -289320599
	 // (Hash of) countryside -> 2072609373
	 // 
	 // C# Example :
	 // 
	 // Ped player = Game.Player.Character;
	 // Hash h = Function.Call<Hash>(Hash.GET_HASH_OF_MAP_AREA_AT_COORDS, player.Position.X, player.Position.Y, player.Position.Z);
	static Hash GET_HASH_OF_MAP_AREA_AT_COORDS(float x, float y, float z) { return invoke<Hash>(0x7EE64D51E8498728, x, y, z); } // 0x7EE64D51E8498728 0xB5C5C99B b323
}

