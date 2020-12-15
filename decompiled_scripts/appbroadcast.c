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
	char* sLocal_18 = NULL;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	int iLocal_28 = 0;
	var uLocal_29 = 0;
	char cLocal_30[16] = "";
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	char cLocal_33[16] = "";
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	char cLocal_36[16] = "";
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	char cLocal_39[16] = "";
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	char cLocal_42[16] = "";
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	char cLocal_45[16] = "";
	var uLocal_46 = 0;
	var uLocal_47 = 0;
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
	sLocal_18 = "NULL";
	fLocal_23 = 80f;
	fLocal_24 = 140f;
	fLocal_25 = 180f;
	StringCopy(&cLocal_30, "CELL_212", 16);
	StringCopy(&cLocal_33, "CELL_213", 16);
	StringCopy(&cLocal_36, "CELL_39", 16);
	StringCopy(&cLocal_39, "CELL_MP_300", 16);
	StringCopy(&cLocal_42, "CELL_MP_301", 16);
	StringCopy(&cLocal_45, "CELL_MP_302", 16);
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	func_44(&iLocal_28);
	func_35();
	while (true)
	{
		SYSTEM::WAIT(0);
		if (!NETWORK::NETWORK_IS_IN_SESSION())
		{
			func_33(1);
			func_32();
		}
		if (!Global_19681.f_1 == 9 && Global_19681.f_1 > 3)
		{
			func_3();
			if (Global_19681.f_1 != 8)
			{
				if (func_2())
				{
					func_32();
				}
			}
		}
		if (func_1())
		{
			func_32();
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

int func_2()
{
	if (Global_8157 == 1 || Global_19681.f_1 < 7)
	{
		Global_19668 = 1;
		return 1;
	}
	return 0;
}

void func_3()
{
	if (func_28(&iLocal_28))
	{
		if (func_16())
		{
			if (Global_2462172)
			{
				NETWORK::NETWORK_OVERRIDE_SEND_RESTRICTIONS_ALL(false);
				func_10(-326397561, func_11(1, 1));
				Global_2462172 = 0;
			}
			else
			{
				NETWORK::NETWORK_OVERRIDE_SEND_RESTRICTIONS_ALL(true);
				func_10(178504896, func_11(1, 1));
				Global_2462172 = 1;
			}
			func_4(0);
			return;
		}
	}
}

void func_4(int iParam0)
{
	if (func_9())
	{
		return;
	}
	if (Global_19864)
	{
		if (func_8())
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
		if (func_7(0))
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

int func_7(int iParam0)
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

bool func_8()
{
	return unk_0xCE990E643CD9D0E5(Global_1689730, 5);
}

bool func_9()
{
	return unk_0xCE990E643CD9D0E5(Global_1689730, 19);
}

void func_10(int iParam0, int iParam1)
{
	struct<4> Var0;
	
	Var0 = 1120313136;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = iParam0;
	Var0.f_3 = NETWORK::_NETWORK_GET_ROS_PRIVILEGE_25(0, 9999);
	if (!iParam1 == 0)
	{
		if (MISC::SET_BIT())
		{
			SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Var0, 4, iParam1);
		}
	}
}

int func_11(int iParam0, bool bParam1)
{
	var uVar0;
	bool bVar1;
	bool bVar2;
	
	bVar1 = false;
	while (bVar1 < 32)
	{
		bVar2 = NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(bVar1);
		if (func_15(bVar2, 0, 0))
		{
			if (bVar2 != PLAYER::PLAYER_ID() || iParam0)
			{
				if (bParam1)
				{
					unk_0xBE20AB8238688965(&uVar0, bVar1);
				}
				else if (!func_12(bVar2, 0))
				{
					unk_0xBE20AB8238688965(&uVar0, bVar1);
				}
			}
		}
		bVar1++;
	}
	return uVar0;
}

bool func_12(bool bParam0, int iParam1)
{
	bool bVar0;
	
	if (bParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_13(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1590682[bParam0 /*883*/].f_211 == 8;
	}
	if (iParam1 == 1)
	{
		if (AUDIO::PLAY_STREAM_FROM_VEHICLE(bParam0))
		{
			bVar0 = unk_0x6CC163E30ECE0790(bParam0) == 8;
		}
	}
	return bVar0;
}

int func_13(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_14();
	}
	if (Global_1312876[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312757[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_14()
{
	return Global_1312763;
}

int func_15(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = bParam0;
	if (iVar0 != -1)
	{
		if (AUDIO::PLAY_STREAM_FROM_VEHICLE(bParam0))
		{
			if (bParam1)
			{
				if (!ENTITY::IS_ENTITY_AT_COORD(bParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2440049.f_3[iVar0])
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

int func_16()
{
	if (!func_22(PLAYER::PLAYER_ID(), 1) && func_17())
	{
		return 1;
	}
	return 0;
}

int func_17()
{
	if (Global_1312466)
	{
		return 1;
	}
	if (func_21())
	{
		return 1;
	}
	if (func_20())
	{
		return 1;
	}
	return func_18(120, -1);
}

int func_18(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2587834[iParam0 /*3*/][func_19(iParam1)];
	if (unk_0xB9112C701DE2A810(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_19(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_14();
		if (iVar1 > -1)
		{
			Global_2551544 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2551544 = 1;
		}
	}
	return iVar0;
}

bool func_20()
{
	return Global_1312884;
}

bool func_21()
{
	return Global_1312886;
}

bool func_22(int iParam0, bool bParam1)
{
	if (func_27() != 0)
	{
		return func_26(iParam0) != 0;
	}
	return func_23(iParam0, bParam1, 0);
}

int func_23(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_24(iParam0))
		{
			return 1;
		}
	}
	if (!bParam2)
	{
	}
	if (Global_1590682[iParam0 /*883*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_24(int iParam0)
{
	return func_25(iParam0);
}

bool func_25(int iParam0)
{
	return unk_0xCE990E643CD9D0E5(Global_1590682[iParam0 /*883*/].f_13.f_1, 0);
}

int func_26(int iParam0)
{
	if (func_15(iParam0, 0, 1))
	{
		return Global_2425869[iParam0 /*443*/].f_1;
	}
	return 0;
}

int func_27()
{
	return Global_30968;
}

int func_28(int iParam0)
{
	if (!unk_0xCE990E643CD9D0E5(*iParam0, 0))
	{
		return 0;
	}
	if (Global_19659)
	{
		return 0;
	}
	if (!GRAPHICS::DRAW_SCALEFORM_MOVIE())
	{
		return 0;
	}
	if (!PAD::IS_DISABLED_CONTROL_PRESSED(2, Global_19650))
	{
		return 0;
	}
	func_29();
	Global_19659 = 1;
	return 1;
}

void func_29()
{
	if (!PED::IS_PED_IN_ANY_POLICE_VEHICLE(unk_0x9B0761B4C3EB8BC7(), 0))
	{
		DATAFILE::UGC_UPDATE_CONTENT(-1, "Menu_Accept", &Global_19670, 1);
		func_30();
	}
}

void func_30()
{
	if (func_31())
	{
		MOBILE::_CELL_CAM_MOVE_FINGER(5);
	}
}

int func_31()
{
	char* sVar0;
	int iVar1;
	int iVar2;
	
	if (Global_76833)
	{
		return 0;
	}
	iVar2 = 0;
	sVar0 = NETWORK::_GET_ONLINE_VERSION();
	iVar1 = CAM::_0xEE778F8C7E1142E2(sVar0);
	if (iVar1 == 4)
	{
		iVar2 = 1;
	}
	if (Global_4271302 || iVar2)
	{
		return 1;
	}
	return 1;
}

void func_32()
{
	ENTITY::STOP_ENTITY_ANIM();
}

void func_33(bool bParam0)
{
	if (bParam0)
	{
		func_34();
		if (Global_19681.f_1 == 10 || Global_19681.f_1 == 9)
		{
			unk_0xBE20AB8238688965(&Global_7552, 16);
		}
		Global_19681.f_1 = 1;
		if (func_7(0))
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

void func_34()
{
	if (Global_19681.f_1 == 9 || Global_19681.f_1 == 10)
	{
		Global_21058 = 0;
		Global_21054 = 1;
	}
}

void func_35()
{
	if (!Global_19681.f_1 == 7)
	{
		Global_19681.f_1 = 7;
	}
	func_43(Global_19662, "SET_DATA_SLOT_EMPTY", SYSTEM::TO_FLOAT(13), -1082130432, -1082130432, -1082130432, -1082130432);
	if (func_16())
	{
		if (Global_2462172)
		{
			func_42(Global_19662, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(13), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(12), -1f, -1f, &cLocal_42, 0, 0, 0, 0);
		}
		else
		{
			func_42(Global_19662, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(13), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(12), -1f, -1f, &cLocal_39, 0, 0, 0, 0);
		}
	}
	else
	{
		func_42(Global_19662, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(13), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(12), -1f, -1f, &cLocal_45, 0, 0, 0, 0);
	}
	func_43(Global_19662, "DISPLAY_VIEW", SYSTEM::TO_FLOAT(13), -1082130432, -1082130432, -1082130432, -1082130432);
	func_39(&cLocal_36);
	if (func_16())
	{
		func_36(13, &cLocal_30, 1, "", 4, &cLocal_33, &iLocal_28);
	}
	else
	{
		func_36(1, "", 1, "", 4, &cLocal_33, &iLocal_28);
	}
}

void func_36(int iParam0, char[4] cParam1, int iParam2, char[4] cParam3, int iParam4, char[4] cParam5, int iParam6)
{
	func_37(2, iParam0, cParam1, 0, iParam6, -1);
	func_37(1, iParam2, cParam3, 1, iParam6, 17);
	func_37(3, iParam4, cParam5, 2, iParam6, -1);
}

void func_37(int iParam0, int iParam1, char[4] cParam2, bool bParam3, int iParam4, bool bParam5)
{
	if (iParam1 == 1)
	{
		func_42(Global_19662, "SET_SOFT_KEYS", SYSTEM::TO_FLOAT(iParam0), 0f, SYSTEM::TO_FLOAT(iParam1), -1f, -1f, 0, 0, 0, 0, 0);
		VEHICLE::IS_VEHICLE_DRIVEABLE(iParam4, bParam3);
		func_38(bParam5, 0);
		return;
	}
	if (Global_19669)
	{
		func_42(Global_19662, "SET_SOFT_KEYS", SYSTEM::TO_FLOAT(iParam0), 1f, SYSTEM::TO_FLOAT(iParam1), -1f, -1f, cParam2, 0, 0, 0, 0);
		unk_0xBE20AB8238688965(iParam4, bParam3);
		func_38(bParam5, 1);
		return;
	}
	func_42(Global_19662, "SET_SOFT_KEYS", SYSTEM::TO_FLOAT(iParam0), 1f, SYSTEM::TO_FLOAT(iParam1), -1f, -1f, 0, 0, 0, 0, 0);
	unk_0xBE20AB8238688965(iParam4, bParam3);
	func_38(bParam5, 1);
}

void func_38(bool bParam0, bool bParam1)
{
	if (bParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		unk_0xBE20AB8238688965(&Global_7551, bParam0);
		return;
	}
	VEHICLE::IS_VEHICLE_DRIVEABLE(&Global_7551, bParam0);
}

void func_39(char[4] cParam0)
{
	func_40(Global_19662, "SET_HEADER", cParam0, 0, 0, 0, 0);
}

void func_40(int iParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, sParam1);
	func_41(uParam2);
	if (!CAM::IS_SCREEN_FADED_OUT(iParam3))
	{
		func_41(iParam3);
	}
	if (!CAM::IS_SCREEN_FADED_OUT(iParam4))
	{
		func_41(iParam4);
	}
	if (!CAM::IS_SCREEN_FADED_OUT(iParam5))
	{
		func_41(iParam5);
	}
	if (!CAM::IS_SCREEN_FADED_OUT(iParam6))
	{
		func_41(iParam6);
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_41(var uParam0)
{
	MISC::UPDATE_ONSCREEN_KEYBOARD(uParam0);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT();
}

void func_42(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char[4] cParam7, int iParam8, int iParam9, int iParam10, int iParam11)
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
	if (!CAM::IS_SCREEN_FADED_OUT(cParam7))
	{
		func_41(cParam7);
	}
	if (!CAM::IS_SCREEN_FADED_OUT(iParam8))
	{
		func_41(iParam8);
	}
	if (!CAM::IS_SCREEN_FADED_OUT(iParam9))
	{
		func_41(iParam9);
	}
	if (!CAM::IS_SCREEN_FADED_OUT(iParam10))
	{
		func_41(iParam10);
	}
	if (!CAM::IS_SCREEN_FADED_OUT(iParam11))
	{
		func_41(iParam11);
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_43(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
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

void func_44(var uParam0)
{
	*uParam0 = 0;
}

