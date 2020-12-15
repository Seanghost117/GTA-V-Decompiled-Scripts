#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	float fLocal_14 = 0f;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	int iLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	int iLocal_20 = 0;
#endregion

void __EntryFunction__()
{
	iLocal_2 = 1;
	iLocal_3 = 134;
	iLocal_4 = 134;
	iLocal_5 = 1;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 134;
	iLocal_9 = 1;
	iLocal_10 = 12;
	iLocal_11 = 12;
	fLocal_14 = 0.001f;
	iLocal_17 = -1;
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	if (iLocal_20 == 0)
	{
		func_11();
		func_10();
		iLocal_20 = 1;
		SYSTEM::SETTIMERA(0);
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		if (Global_19681.f_1 != 9)
		{
			switch (Global_19681.f_1)
			{
				case 7:
					if (iLocal_20 == 1 && SYSTEM::TIMERA() > 1500)
					{
						func_6();
						SYSTEM::SETTIMERA(0);
					}
					break;
				
				case 8:
					if (func_5(2, Global_19649, 0))
					{
						func_4();
						Global_19659 = 1;
						if (Global_19681.f_1 > 3)
						{
							Global_19681.f_1 = 7;
						}
					}
					break;
				
				default:
					break;
			}
			if (func_3())
			{
				func_2();
			}
		}
		else
		{
			Global_19683 = 6;
			func_2();
		}
		if (func_1())
		{
			func_2();
		}
	}
}

int func_1()
{
	if (((Global_19681.f_1 == 1 || Global_19681.f_1 == 3) || Global_19681.f_1 == 0) || Global_19625 == 1)
	{
		Global_19668 = 1;
		return 1;
	}
	return 0;
}

void func_2()
{
	ENTITY::STOP_ENTITY_ANIM();
}

int func_3()
{
	if (Global_8157 == 1 || Global_19681.f_1 < 7)
	{
		Global_19668 = 1;
		return 1;
	}
	return 0;
}

void func_4()
{
	if (!PED::IS_PED_IN_ANY_POLICE_VEHICLE(unk_0x9B0761B4C3EB8BC7(), 0))
	{
		DATAFILE::UGC_UPDATE_CONTENT(-1, "Menu_Back", &Global_19670, 1);
	}
}

int func_5(int iParam0, int iParam1, int iParam2)
{
	if (PAD::IS_DISABLED_CONTROL_PRESSED(iParam0, iParam1) || (iParam2 == 1 && PAD::IS_CONTROL_JUST_PRESSED(iParam0, iParam1)))
	{
		if (ENTITY::GET_ENTITY_HEADING())
		{
			if (GRAPHICS::RESET_SCRIPT_GFX_ALIGN() == 0 || (GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU() && HUD::_0x5BFF36D6ED83E0AE(2)))
			{
				return 0;
			}
		}
		if (HUD::DISABLE_FRONTEND_THIS_FRAME() || CAM::IS_SCREEN_FADED_IN())
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

void func_6()
{
	func_7();
}

void func_7()
{
	func_9(Global_19662, "SET_DATA_SLOT_EMPTY", 24f, -1082130432, -1082130432, -1082130432, -1082130432);
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_19662, "SET_DATA_SLOT");
	NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE(24);
	NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE(0);
	if (unk_0xCE990E643CD9D0E5(Global_4271024, 23))
	{
		unk_0xF1B28F753235CE2A(0);
		func_8("CELL_EXTBYOU");
		NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE(Global_4271025);
		NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE(SYSTEM::FLOOR(Global_4271305));
		NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE(Global_4271026);
		NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE(SYSTEM::FLOOR(Global_4271305.f_1));
		NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE(Global_4271027);
		NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE(SYSTEM::FLOOR(Global_4271305.f_2));
		func_8("CELL_BODYG");
		NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE(Global_4271028);
		NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE(SYSTEM::FLOOR(Global_4271308));
		NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE(Global_4271029);
		NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE(SYSTEM::FLOOR(Global_4271308.f_1));
		NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE(Global_4271030);
		NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE(SYSTEM::FLOOR(Global_4271308.f_2));
	}
	else
	{
		unk_0xF1B28F753235CE2A(0);
		func_8("CELL_EXTBYOU");
		NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE(Global_4271028);
		NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE(SYSTEM::FLOOR(Global_4271308));
		NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE(Global_4271029);
		NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE(SYSTEM::FLOOR(Global_4271308.f_1));
		NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE(Global_4271030);
		NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE(SYSTEM::FLOOR(Global_4271308.f_2));
		func_8("CELL_EXTBTARG");
		NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE(Global_4271025);
		NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE(SYSTEM::FLOOR(Global_4271305));
		NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE(Global_4271026);
		NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE(SYSTEM::FLOOR(Global_4271305.f_1));
		NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE(Global_4271027);
		NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE(SYSTEM::FLOOR(Global_4271305.f_2));
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	func_9(Global_19662, "DISPLAY_VIEW", 24f, SYSTEM::TO_FLOAT(1), -1082130432, -1082130432, -1082130432);
}

void func_8(char* sParam0)
{
	MISC::UPDATE_ONSCREEN_KEYBOARD(sParam0);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT();
}

void func_9(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, sParam1);
	NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE(SYSTEM::ROUND(fParam2));
	if (fParam3 != -1f)
	{
		NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE(SYSTEM::ROUND(fParam3));
	}
	if (fParam4 != -1f)
	{
		NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE(SYSTEM::ROUND(fParam4));
	}
	if (fParam5 != -1f)
	{
		NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE(SYSTEM::ROUND(fParam5));
	}
	if (fParam6 != -1f)
	{
		NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE(SYSTEM::ROUND(fParam6));
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_10()
{
	func_7();
}

void func_11()
{
	if (Global_19669)
	{
		func_12(Global_19662, "SET_SOFT_KEYS", 2f, 0f, 13f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
		func_12(Global_19662, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
	}
	else
	{
		func_12(Global_19662, "SET_SOFT_KEYS", 2f, 0f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
		func_12(Global_19662, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	func_12(Global_19662, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	VEHICLE::IS_VEHICLE_DRIVEABLE(&Global_7551, 17);
}

void func_12(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, sParam1);
	NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE(SYSTEM::ROUND(fParam2));
	if (fParam3 != -1f)
	{
		NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE(SYSTEM::ROUND(fParam3));
	}
	if (fParam4 != -1f)
	{
		NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE(SYSTEM::ROUND(fParam4));
	}
	if (fParam5 != -1f)
	{
		NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE(SYSTEM::ROUND(fParam5));
	}
	if (fParam6 != -1f)
	{
		NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE(SYSTEM::ROUND(fParam6));
	}
	if (!CAM::IS_SCREEN_FADED_OUT(sParam7))
	{
		func_8(sParam7);
	}
	if (!CAM::IS_SCREEN_FADED_OUT(iParam8))
	{
		func_8(iParam8);
	}
	if (!CAM::IS_SCREEN_FADED_OUT(iParam9))
	{
		func_8(iParam9);
	}
	if (!CAM::IS_SCREEN_FADED_OUT(iParam10))
	{
		func_8(iParam10);
	}
	if (!CAM::IS_SCREEN_FADED_OUT(iParam11))
	{
		func_8(iParam11);
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

