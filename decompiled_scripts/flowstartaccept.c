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
	int iLocal_21 = 0;
	int iLocal_22 = 0;
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
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(83))
	{
		func_6();
	}
	if ((!Global_1 && !ENTITY::GET_ENTITY_HEADING()) && MISC::_0x6FDDF453C0C756EC())
	{
		SCRIPT::SET_NO_LOADING_SCREEN(true);
		if (!PED::REMOVE_SCENARIO_BLOCKING_AREA())
		{
			if (!unk_0x5DA78AD6801A0523())
			{
				CAM::DO_SCREEN_FADE_OUT(800);
			}
		}
		iLocal_20 = unk_0x5DEA4192B46CB99B("MP_BIG_MESSAGE_FREEMODE");
		iLocal_21 = unk_0x5DEA4192B46CB99B("INSTRUCTIONAL_BUTTONS");
		while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_20) || !GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_21))
		{
			SYSTEM::WAIT(0);
		}
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_20, "SHOW_CENTERED_MP_MESSAGE");
		func_5("INSTALL_COMP");
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_21, "SET_DATA_SLOT_EMPTY");
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_21, "SET_DATA_SLOT");
		NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE(0);
		func_4(MOBILE::GET_MOBILE_PHONE_POSITION(2, 201, 1));
		func_5("HUD_CONTINUE");
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_21, "DRAW_INSTRUCTIONAL_BUTTONS");
		unk_0xF1B28F753235CE2A(0);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		while (!PED::REMOVE_SCENARIO_BLOCKING_AREA())
		{
			SYSTEM::WAIT(0);
		}
		SCRIPT::SHUTDOWN_LOADING_SCREEN();
		while (!iLocal_22)
		{
			HUD::HIDE_LOADING_ON_FADE_THIS_FRAME();
			unk_0x9D15035C6653D1B1(7);
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING(iLocal_20, 255, 255, 255, 0, 0);
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING(iLocal_21, 255, 255, 255, 0, 0);
			if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 201))
			{
				iLocal_22 = 1;
			}
			SYSTEM::WAIT(0);
		}
		SCRIPT::SET_NO_LOADING_SCREEN(false);
		func_3(1, 1);
		func_1();
	}
	Global_77102.f_1 = 0;
	unk_0xBE20AB8238688965(&(Global_111858.f_10012.f_25), 0);
	func_6();
}

int func_1()
{
	if (func_2(0))
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

int func_2(bool bParam0)
{
	if (!bParam0 && INTERIOR::GET_INTERIOR_AT_COORDS(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xCE990E643CD9D0E5(Global_77081, 0);
}

void func_3(int iParam0, int iParam1)
{
	Global_98994.f_7 = iParam0;
	Global_98994.f_8 = iParam1;
}

void func_4(bool bParam0)
{
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam0);
}

void func_5(char* sParam0)
{
	MISC::UPDATE_ONSCREEN_KEYBOARD(sParam0);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT();
}

void func_6()
{
	if (iLocal_20 != 0)
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&iLocal_20);
	}
	if (iLocal_21 != 0)
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&iLocal_21);
	}
	unk_0x9D15035C6653D1B1(4);
	SCRIPT::SET_NO_LOADING_SCREEN(false);
	ENTITY::STOP_ENTITY_ANIM();
}

