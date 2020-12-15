#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
#endregion

void __EntryFunction__()
{
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(83))
	{
		func_10();
	}
	STREAMING::SET_GAME_PAUSES_FOR_STREAMING(false);
	VEHICLE::IS_VEHICLE_DRIVEABLE(&(Global_111858.f_10012.f_25), true);
	func_7();
	SCRIPT::SET_NO_LOADING_SCREEN(true);
	if (!PED::REMOVE_SCENARIO_BLOCKING_AREA())
	{
		CAM::DO_SCREEN_FADE_OUT(0);
	}
	iLocal_0 = unk_0x5DEA4192B46CB99B("OPENING_CREDITS");
	while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_0))
	{
		func_7();
		SYSTEM::WAIT(0);
	}
	while (!PED::REMOVE_SCENARIO_BLOCKING_AREA())
	{
		func_7();
		SYSTEM::WAIT(0);
	}
	func_6("TITLE", 0f, 1f, 1.5f, 1f, 0f, 1.5f, 15f);
	iLocal_1 = (MISC::GET_GAME_TIMER() + 8000 + SYSTEM::ROUND((2f * 1000f)));
	while (!OBJECT::ADD_DOOR_TO_SYSTEM())
	{
		func_7();
		if (!unk_0xCE990E643CD9D0E5(Global_111858.f_10012.f_25, 1))
		{
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING(iLocal_0, 255, 255, 255, 255, 0);
			if (!iLocal_2)
			{
				if (MISC::GET_GAME_TIMER() > iLocal_1)
				{
					func_5("TITLE");
					iLocal_2 = 1;
					iLocal_1 = (MISC::GET_GAME_TIMER() + SYSTEM::ROUND((2f * 1000f)));
				}
			}
			else if (MISC::GET_GAME_TIMER() > iLocal_1)
			{
				unk_0xBE20AB8238688965(&(Global_111858.f_10012.f_25), 1);
				if (MISC::_0x6FDDF453C0C756EC() || ENTITY::GET_ENTITY_HEADING())
				{
					func_4(1, 1);
					func_2();
				}
				else
				{
					func_1();
				}
			}
		}
		SYSTEM::WAIT(0);
	}
	func_10();
}

void func_1()
{
	Global_98994 = 1;
}

int func_2()
{
	if (func_3(0))
	{
		return 0;
	}
	if (Global_98994.f_8)
	{
		if (Global_98994.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_98994.f_10 > 1)
	{
		return 0;
	}
	Global_98994.f_10++;
	return 1;
}

bool func_3(bool bParam0)
{
	if (!bParam0 && INTERIOR::GET_INTERIOR_AT_COORDS(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xCE990E643CD9D0E5(Global_77081, 0);
}

void func_4(int iParam0, int iParam1)
{
	Global_98994.f_7 = iParam0;
	Global_98994.f_8 = iParam1;
}

void func_5(char* sParam0)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_0, "HIDE_LOGO");
	MISC::UPDATE_ONSCREEN_KEYBOARD("STRING");
	unk_0x9EFD301E3BE8324E(sParam0);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT();
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_6(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_0, "SHOW_LOGO");
	MISC::UPDATE_ONSCREEN_KEYBOARD("STRING");
	unk_0x9EFD301E3BE8324E(sParam0);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT();
	DLC::IS_DLC_PRESENT(iParam1);
	DLC::IS_DLC_PRESENT(iParam2);
	DLC::IS_DLC_PRESENT(iParam3);
	DLC::IS_DLC_PRESENT(iParam4);
	DLC::IS_DLC_PRESENT(iParam5);
	DLC::IS_DLC_PRESENT(iParam6);
	DLC::IS_DLC_PRESENT(iParam7);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_7()
{
	HUD::HIDE_LOADING_ON_FADE_THIS_FRAME();
	MONEY::NETWORK_MONEY_CAN_BET(2, 199, true);
	unk_0x9D15035C6653D1B1(7);
	func_8();
}

void func_8()
{
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME();
	func_9();
}

void func_9()
{
	Global_22411.f_134 = 1;
}

void func_10()
{
	unk_0xBE20AB8238688965(&(Global_111858.f_10012.f_25), 1);
	if (iLocal_0 != 0)
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&iLocal_0);
	}
	unk_0x9D15035C6653D1B1(4);
	SCRIPT::SET_NO_LOADING_SCREEN(false);
	STREAMING::SET_GAME_PAUSES_FOR_STREAMING(true);
	ENTITY::STOP_ENTITY_ANIM();
}

