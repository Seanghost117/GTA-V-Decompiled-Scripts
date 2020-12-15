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
	int iLocal_18 = 0;
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
	if (PED::REMOVE_SCENARIO_BLOCKING_AREA())
	{
		CAM::DO_SCREEN_FADE_IN(500);
	}
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		func_2();
	}
	iLocal_18 = unk_0x5DEA4192B46CB99B("graphic_design");
	while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_18))
	{
		SYSTEM::WAIT(0);
	}
	while (true)
	{
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iLocal_18, 0.5f, 0.5f, 1f, 1f, 255, 255, 255, 0, 0);
		func_1(iLocal_18);
		SYSTEM::WAIT(0);
	}
}

void func_1(int iParam0)
{
	if (Global_19660 == 0)
	{
		if (((((((PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 189) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 190)) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 188)) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 187)) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 205)) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 206)) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 201)) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 202))
		{
			Global_19660 = 1;
			SYSTEM::SETTIMERA(0);
		}
	}
	else if (SYSTEM::TIMERA() > 50)
	{
		Global_19660 = 0;
	}
	if (Global_19660 == 0)
	{
		if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 189))
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_INPUT_EVENT");
			NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE(10);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
		if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 190))
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_INPUT_EVENT");
			NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE(11);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
		if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 205))
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_INPUT_EVENT");
			NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE(4);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
		if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 206))
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_INPUT_EVENT");
			NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE(6);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
		if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 188))
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_INPUT_EVENT");
			NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE(8);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
		if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 187))
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_INPUT_EVENT");
			NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE(9);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
		if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 201))
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_INPUT_EVENT");
			NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE(16);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
		if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 202))
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_INPUT_EVENT");
			NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE(17);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
	}
}

void func_2()
{
	func_3(0);
	MISC::SET_GAME_PAUSED(false);
	GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&iLocal_18);
	ENTITY::STOP_ENTITY_ANIM();
}

void func_3(bool bParam0)
{
	if (bParam0)
	{
		func_10();
		if (Global_19681.f_1 == 10 || Global_19681.f_1 == 9)
		{
			unk_0xBE20AB8238688965(&Global_7552, 16);
		}
		Global_19681.f_1 = 1;
		if (func_9(0))
		{
			func_4(0);
		}
	}
	else if (Global_19681.f_1 == 1)
	{
		if (!Global_19681.f_1 == 0)
		{
			Global_19681.f_1 = 3;
		}
	}
}

void func_4(int iParam0)
{
	if (func_8())
	{
		return;
	}
	if (Global_19864)
	{
		if (func_7())
		{
			func_6(1, 1);
		}
		else
		{
			func_6(0, 0);
		}
	}
	if (Global_19681.f_1 == 10 || Global_19681.f_1 == 9)
	{
		unk_0xBE20AB8238688965(&Global_7552, 16);
	}
	if (unk_0x6B12213471F330A3())
	{
		unk_0xBE4122AC23440E7D(0);
	}
	Global_21005 = 5;
	if (iParam0 == 1)
	{
		unk_0xBE20AB8238688965(&Global_7551, 30);
	}
	else
	{
		VEHICLE::IS_VEHICLE_DRIVEABLE(&Global_7551, 30);
	}
	if (!func_5())
	{
		Global_19681.f_1 = 3;
	}
}

int func_5()
{
	if (Global_19681.f_1 == 1 || Global_19681.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_6(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_9(0))
		{
			Global_19864 = 1;
			if (bParam1)
			{
				unk_0x1F1B1269BB6217F7(&Global_19618);
			}
			Global_19609 = { Global_19627[Global_19626 /*3*/] };
			AUDIO::SKIP_TO_NEXT_SCRIPTED_CONVERSATION_LINE(Global_19609);
		}
	}
	else if (Global_19864 == 1)
	{
		Global_19864 = 0;
		Global_19609 = { Global_19634[Global_19626 /*3*/] };
		if (bParam1)
		{
			AUDIO::SKIP_TO_NEXT_SCRIPTED_CONVERSATION_LINE(Global_19618);
		}
		else
		{
			AUDIO::SKIP_TO_NEXT_SCRIPTED_CONVERSATION_LINE(Global_19609);
		}
	}
}

bool func_7()
{
	return unk_0xCE990E643CD9D0E5(Global_1689730, 5);
}

bool func_8()
{
	return unk_0xCE990E643CD9D0E5(Global_1689730, 19);
}

int func_9(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_19681.f_1 > 3)
		{
			if (unk_0xCE990E643CD9D0E5(Global_7551, 14))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	if (INTERIOR::GET_INTERIOR_AT_COORDS(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_19681.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_10()
{
	if (Global_19681.f_1 == 9 || Global_19681.f_1 == 10)
	{
		Global_21058 = 0;
		Global_21054 = 1;
	}
}

