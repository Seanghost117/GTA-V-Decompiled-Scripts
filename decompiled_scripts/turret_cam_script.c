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
	char* sLocal_20 = NULL;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	int iLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	int iLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	struct<96> Local_64 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 3, 3, 3, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<62> Local_65 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0 } ;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
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
	sLocal_20 = "NULL";
	fLocal_23 = 80f;
	fLocal_24 = 140f;
	fLocal_25 = 180f;
	fLocal_28 = 0f;
	fLocal_32 = -0.0375f;
	fLocal_33 = 0.17f;
	iLocal_36 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	if (MISC::SET_BIT())
	{
		func_137(&uScriptParam_68);
	}
	else
	{
		func_128();
	}
	while (true)
	{
		func_127();
		MONEY::NETWORK_MONEY_CAN_BET(2, 199, true);
		MONEY::NETWORK_MONEY_CAN_BET(2, 200, true);
		if (func_116())
		{
			func_128();
		}
		if (func_115())
		{
			func_128();
		}
		func_1();
	}
}

void func_1()
{
	func_109(0);
	CAM::SET_CINEMATIC_BUTTON_ACTIVE(false);
	switch (Local_65.f_16)
	{
		case 0:
			func_106();
			break;
		
		case 1:
			func_2();
			break;
	}
}

void func_2()
{
	if (unk_0xCE990E643CD9D0E5(Global_2515683, 1))
	{
		VEHICLE::IS_VEHICLE_DRIVEABLE(&Global_2515683, true);
		func_96(Global_2515682);
	}
	if (Local_65.f_61 != Global_2515813)
	{
		Local_65.f_61 = { Global_2515813 };
	}
	else
	{
		Local_65.f_61.f_1 = 0;
		Local_65.f_61.f_2 = 0;
	}
	if (!HUD::DISABLE_FRONTEND_THIS_FRAME() && !func_95())
	{
		func_50();
		func_41();
		func_37();
		func_34();
		func_33();
		func_13();
	}
	func_10(&(Local_64.f_67), unk_0xCE990E643CD9D0E5(Local_65.f_60, 3));
	func_3(&(Local_65.f_38), &(Local_65.f_39));
	VEHICLE::IS_VEHICLE_DRIVEABLE(&Global_2515683, 4);
	VEHICLE::IS_VEHICLE_DRIVEABLE(&(Local_65.f_60), true);
	VEHICLE::IS_VEHICLE_DRIVEABLE(&(Local_65.f_60), 2);
	VEHICLE::IS_VEHICLE_DRIVEABLE(&(Local_65.f_60), 3);
	VEHICLE::IS_VEHICLE_DRIVEABLE(&(Local_65.f_60), 6);
	VEHICLE::IS_VEHICLE_DRIVEABLE(&(Local_65.f_60), 7);
}

void func_3(var uParam0, var uParam1)
{
	struct<3> Var0;
	int iVar1;
	struct<3> Var2;
	
	func_9();
	Var0 = { CAM::SET_WIDESCREEN_BORDERS() };
	if ((((HUD::DISABLE_FRONTEND_THIS_FRAME() || func_8()) || PAD::IS_DISABLED_CONTROL_PRESSED(2, 199)) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 199)) || STATS::STAT_GET_MASKED_INT(2, 199))
	{
		HUD::_SET_PLAYER_BLIP_POSITION_THIS_FRAME(Var0.x, Var0.f_1);
		HUD::_0xA17784FCA9548D15(Var0.x, Var0.f_1, 0);
		if (HUD::DISABLE_FRONTEND_THIS_FRAME() || func_8())
		{
			if (SYSTEM::VMAG(HUD::GET_MAIN_PLAYER_BLIP_ID()))
			{
				HUD::SET_BLIP_ALPHA(HUD::GET_MAIN_PLAYER_BLIP_ID(), 255);
			}
		}
	}
	else if (SYSTEM::VMAG(HUD::GET_MAIN_PLAYER_BLIP_ID()))
	{
		HUD::SET_BLIP_ALPHA(HUD::GET_MAIN_PLAYER_BLIP_ID(), 0);
	}
	HUD::LOCK_MINIMAP_POSITION(Var0.x, Var0.f_1);
	iVar1 = CAM::GET_RENDERING_CAM();
	if (CAM::DOES_CAM_EXIST(iVar1))
	{
		CAM::_0x661B5C8654ADD825(iVar1, true);
	}
	Var2 = { CAM::GET_FINAL_RENDERED_CAM_ROT(0) };
	Var2 = { func_7(Var2) };
	if (!SYSTEM::VMAG(*uParam0))
	{
		*uParam1 = func_5(Var0, 0);
		HUD::SET_BLIP_SPRITE(*uParam1, 425);
		HUD::SHOW_HEIGHT_ON_BLIP(*uParam1, false);
		HUD::SET_BLIP_DISPLAY(*uParam1, 4);
		HUD::SET_BLIP_COLOUR(*uParam1, func_4(2));
		HUD::SET_BLIP_SHOW_CONE(*uParam1, true, 11);
		HUD::SET_BLIP_SCALE(*uParam1, 0.54f);
		HUD::SET_BLIP_PRIORITY(*uParam1, 13 + 1);
		*uParam0 = func_5(Var0, 0);
		HUD::SET_BLIP_SPRITE(*uParam0, 425);
		HUD::SHOW_HEIGHT_ON_BLIP(*uParam0, false);
		HUD::SET_BLIP_DISPLAY(*uParam0, 4);
		HUD::SET_BLIP_COLOUR(*uParam0, func_4(18));
		HUD::SET_BLIP_SHOW_CONE(*uParam0, true, 11);
		HUD::SET_BLIP_SCALE(*uParam0, 0.44f);
		HUD::SET_BLIP_PRIORITY(*uParam0, 13 + 1);
		HUD::SET_BLIP_HIDDEN_ON_LEGEND(*uParam0, true);
		HUD::SET_BLIP_ROTATION(*uParam0, SYSTEM::ROUND(unk_0x9075769DD4F148B7(Var2.x, Var2.f_1)));
		HUD::SET_BLIP_HIDDEN_ON_LEGEND(*uParam1, true);
		HUD::SET_BLIP_ROTATION(*uParam1, SYSTEM::ROUND(unk_0x9075769DD4F148B7(Var2.x, Var2.f_1)));
	}
	else
	{
		HUD::SET_BLIP_COORDS(*uParam0, Var0);
		HUD::SET_BLIP_ROTATION(*uParam0, SYSTEM::ROUND(unk_0x9075769DD4F148B7(Var2.x, Var2.f_1)));
		HUD::SET_BLIP_DISPLAY(*uParam0, 5);
		HUD::SET_BLIP_COORDS(*uParam1, Var0);
		HUD::SET_BLIP_ROTATION(*uParam1, SYSTEM::ROUND(unk_0x9075769DD4F148B7(Var2.x, Var2.f_1)));
		HUD::SET_BLIP_DISPLAY(*uParam1, 5);
	}
}

int func_4(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	switch (iParam0)
	{
		case 1:
			return 4;
		
		case 0:
			return 4;
		
		case 6:
			return 59;
		
		case 18:
			return 2;
		
		case 13:
			return 5;
		
		case 116:
			return 38;
		
		case 28:
			return 6;
		
		case 29:
			return 7;
		
		case 30:
			return 8;
		
		case 31:
			return 9;
		
		case 32:
			return 10;
		
		case 33:
			return 11;
		
		case 34:
			return 12;
		
		case 35:
			return 13;
		
		case 36:
			return 14;
		
		case 37:
			return 15;
		
		case 38:
			return 16;
		
		case 39:
			return 17;
		
		case 40:
			return 18;
		
		case 41:
			return 19;
		
		case 42:
			return 20;
		
		case 43:
			return 21;
		
		case 44:
			return 22;
		
		case 45:
			return 23;
		
		case 46:
			return 24;
		
		case 47:
			return 25;
		
		case 48:
			return 26;
		
		case 49:
			return 27;
		
		case 50:
			return 28;
		
		case 51:
			return 29;
		
		case 52:
			return 30;
		
		case 53:
			return 31;
		
		case 54:
			return 32;
		
		case 55:
			return 33;
		
		case 56:
			return 34;
		
		case 57:
			return 35;
		
		case 58:
			return 36;
		
		case 59:
			return 37;
		
		case 9:
			return 57;
		
		case 10:
			return 53;
		
		case 118:
			return 57;
		
		case 14:
			return 56;
		
		case 3:
			return 55;
		
		case 21:
			return 50;
		
		case 15:
			return 51;
		
		case 20:
			return 52;
		
		case 11:
			return 54;
		
		case 23:
			return 58;
		
		case 12:
			return 60;
		
		case 24:
			return 61;
		
		case 4:
			return 62;
		
		default:
	}
	HUD::GET_HUD_COLOUR(iParam0, &iVar0, &iVar1, &iVar2, &iVar3);
	return ((((iVar0 * 16777216) + (iVar1 * 65536)) + iVar2 * 256) + iVar3);
	return 0;
}

int func_5(struct<3> Param0, bool bParam1)
{
	int iVar0;
	
	iVar0 = HUD::ADD_BLIP_FOR_COORD(Param0);
	HUD::SET_BLIP_SCALE(iVar0, func_6(MISC::SET_BIT(), 1f, 1f));
	HUD::SET_BLIP_ROUTE(iVar0, bParam1);
	return iVar0;
}

float func_6(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

Vector3 func_7(struct<3> Param0)
{
	struct<3> Var0;
	
	Var0.x = SYSTEM::COS(Param0.x);
	Var0.f_1 = SYSTEM::COS(Param0.f_2);
	Var0.f_2 = SYSTEM::SIN(Param0.x);
	Var0.f_1 = (Var0.f_1 * Var0.x);
	Var0.x = (Var0.x * -SYSTEM::SIN(Param0.f_2));
	return Var0;
}

bool func_8()
{
	return GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN() != 0;
}

void func_9()
{
	Global_1312684 = 1;
}

void func_10(char* sParam0, bool bParam1)
{
	if (CAM::IS_SCREEN_FADED_OUT(sParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (func_12(sParam0))
		{
			unk_0xD289B55B6AADBA10(1);
		}
		return;
	}
	if (!func_12(sParam0))
	{
		unk_0xD289B55B6AADBA10(1);
		func_11(sParam0);
	}
}

void func_11(char* sParam0)
{
	unk_0x17751E107423AFE9(sParam0);
	FILES::GET_DLC_VEHICLE_FLAGS(0, 1, 1, -1);
}

bool func_12(char* sParam0)
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_13()
{
	if (unk_0xCE990E643CD9D0E5(Global_2515683, 5))
	{
		VEHICLE::IS_VEHICLE_DRIVEABLE(&Global_2515683, 5);
		Local_65.f_35 = 0;
	}
	func_14(&(Local_64.f_24), &(Local_65.f_35));
}

void func_14(var uParam0, var uParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (*uParam0 > 0)
	{
		bVar0 = func_31(0, -1, 0);
		if (bVar0)
		{
			if ((!*uParam1 || PAD::_0x6CD79468A1E595C6(2)) || PAD::_0x6CD79468A1E595C6(0))
			{
				func_30(-1);
				iVar1 = 0;
				while (iVar1 < *uParam0)
				{
					iVar2 = uParam0->f_34[iVar1];
					if (iVar2 < 32)
					{
						func_29(iVar2, &(uParam0->f_1[iVar1 /*4*/]), -1);
					}
					else
					{
						iVar3 = (iVar2 - 32);
						func_28(iVar3, &(uParam0->f_1[iVar1 /*4*/]), -1, 0);
					}
					iVar1++;
				}
				*uParam1 = 1;
			}
			func_27(1);
			func_15(0, -1, 0, 1, 0, 0, 1, 1, 0);
		}
	}
}

void func_15(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (!func_26(&iVar0, 0, iParam1))
	{
		return;
	}
	iParam0 = iParam0;
	if (iParam3 && !func_23(bParam4, bParam8))
	{
		return;
	}
	if (func_21())
	{
		return;
	}
	if (GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU())
	{
		return;
	}
	if (iParam7 == 0)
	{
		if (func_18(PLAYER::PLAYER_ID(), 0))
		{
			return;
		}
	}
	if (ENTITY::GET_ENTITY_HEADING())
	{
		if (GRAPHICS::RESET_SCRIPT_GFX_ALIGN() == 0 || GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU())
		{
			return;
		}
	}
	if (Global_22550.f_4769 != 0)
	{
		if (PAD::_0x6CD79468A1E595C6(2))
		{
			iVar1 = 0;
			while (iVar1 < Global_22550.f_4769)
			{
				if (Global_22550.f_5026[iVar1] != 361)
				{
					StringCopy(&(Global_22550.f_4771[iVar1 /*16*/]), MOBILE::GET_MOBILE_PHONE_POSITION(2, Global_22550.f_5026[iVar1], 1), 64);
				}
				else if (Global_22550.f_5039[iVar1] != 32)
				{
					StringCopy(&(Global_22550.f_4771[iVar1 /*16*/]), MOBILE::SET_MOBILE_PHONE_POSITION(2.802597E-45f, Global_22550.f_5039[iVar1], 1.401298E-45f), 64);
				}
				iVar1++;
			}
			Global_22550.f_4770 = 0;
		}
		if (!Global_22550.f_4770)
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_22550.f_5660[iVar0 /*10*/], "CLEAR_ALL");
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_22550.f_5660[iVar0 /*10*/], "SET_MAX_WIDTH");
			DLC::IS_DLC_PRESENT((1f - (Global_22550.f_5081 / 100f)));
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			if (ENTITY::GET_ENTITY_HEADING())
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_22550.f_5660[iVar0 /*10*/], "TOGGLE_MOUSE_BUTTONS");
				unk_0xF1B28F753235CE2A(1);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			iVar1 = 0;
			while (iVar1 < Global_22550.f_4769)
			{
				if (AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT(&(Global_22550.f_4964[iVar1 /*4*/])) != AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("PREV"))
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_22550.f_5660[iVar0 /*10*/], "SET_DATA_SLOT");
					NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE(iVar1);
					func_17(&(Global_22550.f_4771[iVar1 /*16*/]));
					iVar2 = iVar1 + 1;
					while (iVar2 < 12 && AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT(&(Global_22550.f_4964[iVar2 /*4*/])) == AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("PREV"))
					{
						func_17(&(Global_22550.f_4771[iVar2 /*16*/]));
						iVar2++;
					}
					if (Global_22550.f_5013[iVar1] == -1)
					{
						func_16(&(Global_22550.f_4964[iVar1 /*4*/]));
					}
					else
					{
						iVar3 = Global_22550.f_5013[iVar1];
						if (iParam2 >= 0)
						{
							iVar3 = iParam2;
						}
						MISC::UPDATE_ONSCREEN_KEYBOARD(&(Global_22550.f_4964[iVar1 /*4*/]));
						if (bParam5)
						{
							NETWORK::UGC_GET_CACHED_DESCRIPTION(iVar3, 70);
						}
						else
						{
							unk_0x42710E9E08FA375A(iVar3);
						}
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT();
					}
					if (ENTITY::GET_ENTITY_HEADING())
					{
						if (Global_22550.f_5026[iVar1] != 361 && unk_0xCE990E643CD9D0E5(Global_22550.f_5052, iVar1))
						{
							unk_0xF1B28F753235CE2A(1);
							NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE(Global_22550.f_5026[iVar1]);
						}
						else
						{
							unk_0xF1B28F753235CE2A(0);
							NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE(361);
						}
					}
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				iVar1++;
			}
			if (AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT(&(Global_4269680.f_16)) != AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT(""))
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_22550.f_5660[iVar0 /*10*/], "SET_DATA_SLOT");
				NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE(Global_22550.f_4769);
				func_17(&Global_4269680);
				if (Global_4269680.f_20 == -1)
				{
					func_16(&(Global_4269680.f_16));
				}
				else
				{
					iVar4 = Global_22550.f_5013[iVar1];
					if (iParam2 >= 0)
					{
						iVar4 = iParam2;
					}
					MISC::UPDATE_ONSCREEN_KEYBOARD(&(Global_4269680.f_16));
					if (bParam5)
					{
						NETWORK::UGC_GET_CACHED_DESCRIPTION(iVar4, 70);
					}
					else
					{
						unk_0x42710E9E08FA375A(iVar4);
					}
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT();
				}
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_22550.f_5660[iVar0 /*10*/], "SET_BACKGROUND_COLOUR");
			NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE(0);
			NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE(0);
			NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE(0);
			NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE(80);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_22550.f_5660[iVar0 /*10*/], "DRAW_INSTRUCTIONAL_BUTTONS");
			if (Global_22550.f_5082)
			{
				NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE(1);
			}
			else
			{
				NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE(0);
			}
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			Global_22550.f_4770 = 1;
		}
		iVar1 = 0;
		while (iVar1 < Global_22550.f_4769)
		{
			if (Global_22550.f_5013[iVar1] != -1)
			{
				if (iParam2 > 0)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_22550.f_5660[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
					NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE(iVar1);
					MISC::UPDATE_ONSCREEN_KEYBOARD(&(Global_22550.f_4964[iVar1 /*4*/]));
					if (bParam5)
					{
						NETWORK::UGC_GET_CACHED_DESCRIPTION(iParam2, 70);
					}
					else
					{
						unk_0x42710E9E08FA375A(iParam2);
					}
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT();
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
			}
			iVar1++;
		}
		if (Global_4269680.f_20 != -1)
		{
			if (iParam2 > 0)
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_22550.f_5660[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
				NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE(iVar1);
				MISC::UPDATE_ONSCREEN_KEYBOARD(&(Global_4269680.f_16));
				if (bParam5)
				{
					NETWORK::UGC_GET_CACHED_DESCRIPTION(iParam2, 70);
				}
				else
				{
					unk_0x42710E9E08FA375A(iParam2);
				}
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT();
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
		}
		PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(76, 66);
		GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(0f, 0f, 0f, 0f);
		if (bParam6)
		{
			if (!Global_22550.f_8417)
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(15, 0f, -0.0375f);
				Global_22550.f_8417 = 1;
			}
		}
		else if (Global_22550.f_8417)
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(15);
			Global_22550.f_8417 = 0;
		}
		HUD::END_TEXT_COMMAND_DISPLAY_TEXT();
		if (Global_22550.f_5055)
		{
			PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(82, 66);
			GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(0f, 0f, 0f, 0f);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(Global_22550.f_5660[iVar0 /*10*/], Global_22550.f_5053, Global_22550.f_5054, 1f, 1f, 255, 255, 255, 255, 0);
			HUD::END_TEXT_COMMAND_DISPLAY_TEXT();
		}
		else
		{
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING(Global_22550.f_5660[iVar0 /*10*/], 255, 255, 255, 255, 0);
		}
	}
}

void func_16(var uParam0)
{
	MISC::UPDATE_ONSCREEN_KEYBOARD(uParam0);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT();
}

void func_17(bool bParam0)
{
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam0);
}

bool func_18(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_19(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1590682[iParam0 /*883*/].f_211 == 8;
	}
	if (iParam1 == 1)
	{
		if (AUDIO::PLAY_STREAM_FROM_VEHICLE(iParam0))
		{
			bVar0 = unk_0x6CC163E30ECE0790(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_19(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_20();
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

int func_20()
{
	return Global_1312763;
}

int func_21()
{
	struct<3> Var0;
	
	if (Global_19681.f_1 > 3)
	{
		return 1;
	}
	if (func_22())
	{
		Var0 = { 0f, -500f, 0f };
		unk_0x1F1B1269BB6217F7(&Var0);
		if (Global_19626 == 0)
		{
			if (Var0.f_1 > -119f)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else if (Var0.f_1 > -101f)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_22()
{
	if (INTERIOR::GET_INTERIOR_AT_COORDS(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_23(bool bParam0, bool bParam1)
{
	if (Global_2440049.f_2005.f_701 != 0)
	{
		return 1;
	}
	if ((((((((!GRAPHICS::DRAW_SCALEFORM_MOVIE() || (func_25(8, -1) && func_24() != 65)) || (GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN() != 0 && !bParam1)) || (LOCALIZATION::GET_CURRENT_LANGUAGE() && !bParam0)) || NETWORK::IS_COMMERCE_STORE_OPEN()) || Global_77093) || Global_22550.f_8416) || CAM::IS_SCREEN_FADED_IN()) || Global_99007.f_1425)
	{
		return 0;
	}
	return 1;
}

int func_24()
{
	return Global_1312830;
}

bool func_25(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1377236.f_203[iParam1];
			}
			break;
	}
	return unk_0xCE990E643CD9D0E5(Global_1377236.f_1048, iParam0);
}

int func_26(var uParam0, bool bParam1, int iParam2)
{
	char cVar0[64];
	void fVar1;
	int iVar2;
	int iVar3;
	
	if (iParam2 == -1)
	{
		if (MISC::SET_BIT() && NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
		{
			iParam2 = NETWORK::_0x638A3A81733086DB();
		}
	}
	StringCopy(&cVar0, TASK::IS_PED_BEING_ARRESTED(), 64);
	StringIntConCat(&cVar0, iParam2, 64);
	fVar1 = AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT(&cVar0);
	iVar3 = -1;
	iVar2 = 0;
	while (iVar2 < 6)
	{
		if (Global_22550.f_5721[iVar2] == fVar1)
		{
			*uParam0 = iVar2;
			return 1;
		}
		else if (Global_22550.f_5721[iVar2] == 0)
		{
			iVar3 = iVar2;
		}
		iVar2++;
	}
	if (bParam1)
	{
		if (iVar3 != -1)
		{
			Global_22550.f_5721[iVar3] = fVar1;
			*uParam0 = iVar3;
			return 1;
		}
	}
	return 0;
}

void func_27(int iParam0)
{
	Global_1378744.f_1121 = iParam0;
}

void func_28(int iParam0, char* sParam1, int iParam2, bool bParam3)
{
	char* sVar0;
	
	sVar0 = MOBILE::GET_MOBILE_PHONE_POSITION(2, iParam0, 1);
	if (Global_22550.f_4769 >= 12)
	{
		StringCopy(&Global_4269680, sVar0, 64);
		StringCopy(&(Global_4269680.f_16), sParam1, 16);
		Global_4269680.f_20 = iParam2;
		return;
		return;
	}
	if (!bParam3)
	{
		unk_0xBE20AB8238688965(&(Global_22550.f_5052), Global_22550.f_4769);
	}
	StringCopy(&(Global_22550.f_4771[Global_22550.f_4769 /*16*/]), sVar0, 64);
	StringCopy(&(Global_22550.f_4964[Global_22550.f_4769 /*4*/]), sParam1, 16);
	Global_22550.f_5013[Global_22550.f_4769] = iParam2;
	Global_22550.f_5026[Global_22550.f_4769] = iParam0;
	Global_22550.f_5039[Global_22550.f_4769] = 32;
	Global_22550.f_4769++;
}

void func_29(float fParam0, char* sParam1, int iParam2)
{
	char* sVar0;
	
	sVar0 = MOBILE::SET_MOBILE_PHONE_POSITION(2.802597E-45f, fParam0, 1.401298E-45f);
	if (Global_22550.f_4769 >= 12)
	{
		StringCopy(&Global_4269680, sVar0, 64);
		StringCopy(&(Global_4269680.f_16), sParam1, 16);
		Global_4269680.f_20 = iParam2;
		return;
		return;
	}
	VEHICLE::IS_VEHICLE_DRIVEABLE(&(Global_22550.f_5052), Global_22550.f_4769);
	StringCopy(&(Global_22550.f_4771[Global_22550.f_4769 /*16*/]), sVar0, 64);
	StringCopy(&(Global_22550.f_4964[Global_22550.f_4769 /*4*/]), sParam1, 16);
	Global_22550.f_5013[Global_22550.f_4769] = iParam2;
	Global_22550.f_5026[Global_22550.f_4769] = 361;
	Global_22550.f_5039[Global_22550.f_4769] = fParam0;
	Global_22550.f_4769++;
}

void func_30(int iParam0)
{
	int iVar0;
	int iVar1;
	
	Global_22550.f_4769 = 0;
	Global_22550.f_4770 = 0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		StringCopy(&(Global_22550.f_4964[iVar0 /*4*/]), "", 16);
		Global_22550.f_5013[iVar0] = -1;
		Global_22550.f_5026[iVar0] = 361;
		Global_22550.f_5039[iVar0] = 32;
		iVar0++;
	}
	Global_22550.f_5052 = 0;
	StringCopy(&(Global_4269680.f_16), "", 16);
	Global_4269680.f_20 = -1;
	if (ENTITY::GET_ENTITY_HEADING())
	{
		if (!func_26(&iVar1, 0, iParam0))
		{
			return;
		}
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_22550.f_5660[iVar1 /*10*/], "TOGGLE_MOUSE_BUTTONS");
		unk_0xF1B28F753235CE2A(0);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

bool func_31(char* sParam0, int iParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	if (!func_26(&iVar0, 1, iParam1))
	{
		return 0;
	}
	bVar1 = true;
	StringCopy(&(Global_22550.f_5635[iVar0 /*4*/]), sParam0, 16);
	if (!CAM::IS_SCREEN_FADED_OUT(&(Global_22550.f_5635[iVar0 /*4*/])))
	{
		HUD::HAS_ADDITIONAL_TEXT_LOADED(&(Global_22550.f_5635[iVar0 /*4*/]), 9);
		Global_22550.f_5628[iVar0] = 1;
		if (!HUD::HAS_THIS_ADDITIONAL_TEXT_LOADED(&(Global_22550.f_5635[iVar0 /*4*/]), 9))
		{
			bVar1 = false;
		}
	}
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("CommonMenu", false);
	Global_22550.f_5614[iVar0] = 1;
	if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("CommonMenu"))
	{
		bVar1 = false;
	}
	if (bParam2)
	{
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPShopSale", false);
		Global_22550.f_5621[iVar0] = 1;
		if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPShopSale"))
		{
			bVar1 = false;
		}
	}
	bVar2 = false;
	StringCopy(&(Global_22550.f_5660[iVar0 /*10*/].f_1), "instructional_buttons", 24);
	bVar2 = func_32(&(Global_22550.f_5660[iVar0 /*10*/]));
	if (!bVar1 || !bVar2)
	{
	}
	return (bVar1 && bVar2);
}

bool func_32(var uParam0)
{
	switch (uParam0->f_9)
	{
		case 0:
			if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
			{
				*uParam0 = unk_0x5DEA4192B46CB99B(&(uParam0->f_1));
				uParam0->f_9 = 1;
				if (uParam0->f_7)
				{
					if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
					{
						uParam0->f_8 = MISC::GET_GAME_TIMER();
						uParam0->f_9 = 2;
					}
				}
			}
			else
			{
				uParam0->f_8 = MISC::GET_GAME_TIMER();
				uParam0->f_9 = 2;
			}
			break;
		
		case 1:
			if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
			{
				uParam0->f_8 = MISC::GET_GAME_TIMER();
				uParam0->f_9 = 2;
			}
			break;
		
		case 2:
			if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
			{
				uParam0->f_9 = 0;
			}
			break;
	}
	return uParam0->f_9 == 2;
}

void func_33()
{
	int iVar0;
	
	if (!unk_0xCE990E643CD9D0E5(Local_65.f_60, 7))
	{
		iVar0 = GRAPHICS::GET_TIMECYCLE_MODIFIER_INDEX();
		if (Local_65.f_56 != iVar0)
		{
			GRAPHICS::SET_TIMECYCLE_MODIFIER("eyeinthesky");
			Local_65.f_56 = GRAPHICS::GET_TIMECYCLE_MODIFIER_INDEX();
		}
	}
}

void func_34()
{
	if (unk_0xCE990E643CD9D0E5(Local_65.f_60, 6))
	{
		if (unk_0xCE990E643CD9D0E5(Local_65.f_60, 5))
		{
			func_36();
		}
	}
	else if (!unk_0xCE990E643CD9D0E5(Local_65.f_60, 5) && !CAM::IS_SCREEN_FADED_OUT(&(Local_64.f_80)))
	{
		func_35(&(Local_64.f_80));
	}
}

void func_35(char* sParam0)
{
	if (CAM::IS_SCREEN_FADED_OUT(sParam0))
	{
		return;
	}
	if (unk_0xCE990E643CD9D0E5(Local_65.f_60, 5))
	{
	}
	else
	{
		PAD::_SWITCH_TO_INPUT_MAPPING_SCHEME(sParam0);
		unk_0xBE20AB8238688965(&(Local_65.f_60), 5);
	}
}

void func_36()
{
	if (unk_0xCE990E643CD9D0E5(Local_65.f_60, 5))
	{
		PAD::_RESET_INPUT_MAPPING_SCHEME();
		VEHICLE::IS_VEHICLE_DRIVEABLE(&(Local_65.f_60), 5);
	}
}

void func_37()
{
	struct<3> Var0;
	
	if (Local_64.f_17 == 4)
	{
		return;
	}
	if (unk_0xCE990E643CD9D0E5(Local_65.f_60, 1))
	{
		return;
	}
	if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Local_65.f_36))
	{
		Local_65.f_36 = unk_0x5DEA4192B46CB99B(Local_64.f_86.f_1);
		return;
	}
	Var0 = { CAM::GET_CAM_ROT(Local_65, 2) };
	switch (Local_64.f_17)
	{
		case 1:
		case 2:
		case 3:
			if (!Local_65.f_37)
			{
				Local_65.f_37 = 1;
				func_40(Local_65.f_36, Local_64.f_20);
				func_39(Local_65.f_36, Local_64.f_20.f_1, Local_64.f_20.f_2, Local_64.f_20.f_3);
			}
		
		case 0:
			func_38(Local_65.f_36, 0f, CAM::GET_CAM_FOV(Local_65), Local_64.f_4, Local_64.f_5, Var0.f_2);
			break;
	}
	unk_0x9D15035C6653D1B1(0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING(Local_65.f_36, 255, 255, 255, 0, 0);
}

void func_38(int iParam0, int iParam1, float fParam2, float fParam3, float fParam4, int iParam5)
{
	fParam2 = ((fParam2 - fParam3) / (fParam4 - fParam3));
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_ALT_FOV_HEADING");
	DLC::IS_DLC_PRESENT(iParam1);
	DLC::IS_DLC_PRESENT(fParam2);
	DLC::IS_DLC_PRESENT(iParam5);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_39(int iParam0, int iParam1, int iParam2, int iParam3)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_WEAPON_VALUES");
	NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE(uParam1);
	NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE(uParam2);
	NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE(uParam3);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_40(int iParam0, int iParam1)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_ZOOM_VISIBLE");
	unk_0xF1B28F753235CE2A(uParam1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_41()
{
	struct<4> Var0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	
	if (Local_64.f_94 != 0)
	{
		Local_65.f_4 = { NETWORK::NETWORK_ARE_HANDLES_THE_SAME(Local_64.f_95, 1) };
		Local_65.f_4.f_3 = { NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(Local_64.f_95, 2) };
	}
	if (!unk_0xCE990E643CD9D0E5(Local_65.f_60, 2))
	{
		Var0 = { func_46(Local_65, &(Local_65.f_1), Local_64, Local_64.f_6.f_1, Local_64.f_6) };
	}
	Var1 = { Local_64.f_91 + Local_65.f_1 };
	Var2 = { func_45(Local_64.f_71, Var1.f_2) };
	Var3 = { Local_64.f_88 + Var2 };
	switch (Local_64.f_94)
	{
		case 0:
			func_44(Local_65, Var3, Var1);
			break;
		
		case 1:
			func_43(Local_65, Var3, Var1, Local_64.f_95);
			break;
	}
	func_42(Local_65.f_40, Local_65.f_40.f_2, Local_65.f_40.f_8, Local_65.f_40.f_3, Local_65.f_40.f_9, Local_65.f_40.f_4, Local_65.f_40.f_10, Local_65.f_40.f_5, Local_65.f_40.f_11, Local_65.f_40.f_6, Local_65.f_40.f_12, Local_65.f_40.f_7, Var0, Var0.f_1, Local_65.f_61.f_1, Local_65.f_61.f_2 > 0);
	Local_65.f_4.f_6 = { CAM::GET_CAM_COORD(Local_65) };
	Local_65.f_4.f_9 = { CAM::GET_CAM_ROT(Local_65, 2) };
}

void func_42(char* sParam0, int iParam1, int iParam2, char* sParam3, int iParam4, char* sParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, char* sParam11, bool bParam12, struct<3> Param13, int iParam14, bool bParam15)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	float fVar4;
	
	if (CAM::IS_SCREEN_FADED_OUT(sParam0) || AUDIO::REQUEST_SCRIPT_AUDIO_BANK(sParam0, false, -1))
	{
		if (fParam12 != 0f)
		{
			if (iParam4 != -1)
			{
				if (AUDIO::HAS_SOUND_FINISHED(iParam4))
				{
					DATAFILE::UGC_UPDATE_CONTENT(iParam4, uParam5, iParam1, 1);
				}
				ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iParam4, "Ctrl", fParam12);
				if (bParam12 < 0f)
				{
					ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iParam4, "Dir", -1f);
				}
				else
				{
					ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iParam4, "Dir", 1f);
				}
			}
		}
		else if (iParam4 != -1)
		{
			if (!AUDIO::HAS_SOUND_FINISHED(iParam4))
			{
				AUDIO::STOP_SOUND(iParam4);
			}
		}
		bVar0 = SYSTEM::VMAG(Param13);
		if (bVar0 > 0f)
		{
			if (iParam2 != -1)
			{
				if (AUDIO::HAS_SOUND_FINISHED(iParam2))
				{
					DATAFILE::UGC_UPDATE_CONTENT(iParam2, uParam3, iParam1, 1);
				}
				ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iParam2, "Ctrl", bVar0);
			}
		}
		else if (iParam2 != -1)
		{
			if (!AUDIO::HAS_SOUND_FINISHED(iParam2))
			{
				AUDIO::STOP_SOUND(iParam2);
			}
		}
		if (iParam6 != -1)
		{
			if (AUDIO::HAS_SOUND_FINISHED(iParam6))
			{
				DATAFILE::UGC_UPDATE_CONTENT(iParam6, uParam7, iParam1, 1);
			}
		}
		iVar1 = unk_0x9B0761B4C3EB8BC7();
		if (SYSTEM::VDIST(iVar1, 0))
		{
			iVar2 = ENTITY::GET_ENTITY_MODEL(iVar1, 0);
		}
		else
		{
			iVar2 = iVar1;
		}
		if (iParam8 != -1)
		{
			bVar3 = bParam15;
			if (!bVar3)
			{
				fVar4 = SYSTEM::TO_FLOAT(ENTITY::GET_ENTITY_MAX_HEALTH(iVar2));
				bVar3 = (IntToFloat(iParam14) / fVar4) > 0.1f;
			}
			if (bVar3)
			{
				if (AUDIO::HAS_SOUND_FINISHED(iParam8))
				{
					DATAFILE::UGC_UPDATE_CONTENT(iParam8, iParam9, iParam9, 1);
				}
			}
		}
		if (iParam10 != -1)
		{
			if ((IntToFloat(ENTITY::GET_ENTITY_HEALTH(iVar1)) / SYSTEM::TO_FLOAT(ENTITY::GET_ENTITY_MAX_HEALTH(iVar1))) < 0.15f || (IntToFloat(ENTITY::GET_ENTITY_HEALTH(iVar2)) / SYSTEM::TO_FLOAT(ENTITY::GET_ENTITY_MAX_HEALTH(iVar2))) < 0.15f)
			{
				if (AUDIO::HAS_SOUND_FINISHED(iParam10))
				{
					DATAFILE::UGC_UPDATE_CONTENT(iParam10, uParam11, iParam1, 1);
				}
			}
			else if (!AUDIO::HAS_SOUND_FINISHED(iParam10))
			{
				AUDIO::STOP_SOUND(iParam10);
			}
		}
	}
}

void func_43(int iParam0, struct<3> Param1, struct<3> Param2, int iParam3)
{
	CAM::ATTACH_CAM_TO_ENTITY(iParam0, iParam3, Param1, true);
	CAM::SET_CAM_ROT(iParam0, Param2 + NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(iParam3, 2), 2);
}

void func_44(int iParam0, struct<3> Param1, struct<3> Param2)
{
	CAM::SET_CAM_COORD(iParam0, Param1);
	CAM::SET_CAM_ROT(iParam0, Param2, 2);
}

Vector3 func_45(struct<3> Param0, float fParam1)
{
	struct<3> Var0;
	float fVar1;
	float fVar2;
	
	fVar1 = SYSTEM::SIN(fParam1);
	fVar2 = SYSTEM::COS(fParam1);
	Var0.x = ((Param0.x * fVar2) - (Param0.f_1 * fVar1));
	Var0.f_1 = ((Param0.x * fVar1) + (Param0.f_1 * fVar2));
	Var0.f_2 = Param0.f_2;
	return Var0;
}

struct<4> func_46(int iParam0, var uParam1, struct<6> Param2, float fParam3, float fParam4)
{
	float fVar0;
	struct<4> Var1;
	void fVar2;
	struct<3> Var3;
	float fVar4;
	float fVar5;
	float fVar6;
	struct<3> Var7;
	struct<3> Var8;
	float fVar9;
	struct<3> Var10;
	bool bVar11;
	
	fVar0 = CAM::GET_CAM_FOV(iParam0);
	Var1 = -fVar0;
	Var1.f_1 = { -*uParam1 };
	fVar2 = HUD::_SET_MOUSE_CURSOR_ACTIVE_THIS_FRAME(0, 39);
	Var3 = { -Vector(PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0, 290), 0f, PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0, 291)) };
	if (HUD::_0x5BFF36D6ED83E0AE(2))
	{
		fParam3 = (fParam3 * 8f);
	}
	else
	{
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(fVar2) < 0.06f)
		{
			fVar2 = 0f;
		}
		if (SYSTEM::VMAG(Var3) < 0.06f)
		{
			Var3 = { 0f, 0f, 0f };
		}
	}
	fVar4 = MISC::GET_FRAME_TIME();
	fVar5 = func_49((fVar0 + ((fVar2 * fParam4) * fVar4)), Param2.f_4, Param2.f_5);
	CAM::SET_CAM_FOV(iParam0, fVar5);
	CAM::SET_CAM_NEAR_CLIP(iParam0, 0.01f);
	fVar6 = ((fVar5 - 5f) / 42f);
	CAM::_0x487A82C650EB7799(1f);
	GRAPHICS::_0xE2892E7E55D7073A(fVar6);
	Var7.x = Param2.f_2;
	Var7.f_1 = 0f;
	Var7.f_2 = Param2;
	Var8.x = Param2.f_3;
	Var8.f_1 = 0f;
	Var8.f_2 = Param2.f_1;
	fVar9 = (((fVar4 * fVar5) * fParam3) * (1f + ((fVar5 - Param2.f_4) / (Param2.f_5 - Param2.f_4))));
	Var10 = { Var3 };
	Var10.f_2 = (Var10.f_2 * fVar9);
	Var10.x = (Var10.x * fVar9);
	*uParam1 = { *uParam1 + Var10 };
	bVar11 = Var7.f_2 > Var8.f_2;
	if (bVar11)
	{
		*uParam1 = func_49(*uParam1, Var7.x, Var8.x);
		uParam1->f_1 = func_49(uParam1->f_1, Var7.f_1, Var8.f_1);
		uParam1->f_2 = func_48(uParam1->f_2);
	}
	else
	{
		*uParam1 = { func_47(*uParam1, Var7, Var8) };
	}
	Var1 = (Var1 + fVar5);
	Var1.f_1 = { Var1.f_1 + *uParam1 };
	return Var1;
}

Vector3 func_47(struct<3> Param0, struct<3> Param1, struct<3> Param2)
{
	Param0.x = func_49(Param0.x, Param1.x, Param2.x);
	Param0.f_1 = func_49(Param0.f_1, Param1.f_1, Param2.f_1);
	Param0.f_2 = func_49(Param0.f_2, Param1.f_2, Param2.f_2);
	return Param0;
}

float func_48(float fParam0)
{
	while (fParam0 > 180f)
	{
		fParam0 = (fParam0 - 360f);
	}
	while (fParam0 < -180f)
	{
		fParam0 = (fParam0 + 360f);
	}
	return fParam0;
}

float func_49(float fParam0, float fParam1, float fParam2)
{
	if (fParam0 > fParam2)
	{
		return fParam2;
	}
	else if (fParam0 < fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

void func_50()
{
	switch (Local_64.f_8.f_1)
	{
		case 1:
			func_85();
			break;
		
		case 2:
			func_70();
			break;
		
		case 3:
			func_51();
			break;
	}
}

void func_51()
{
	var uVar0;
	var uVar1;
	struct<3> Var2;
	
	if (INTERIOR::GET_INTERIOR_AT_COORDS(joaat("am_mp_drone")) < 1)
	{
		if (!Local_65.f_29.f_5)
		{
			Local_65.f_29.f_5 = 1;
		}
		if (!func_65(4, 0f, 0f, 0f, Local_65.f_4.f_6, 0f, 0f, 0f, 0))
		{
			if (func_64())
			{
				DATAFILE::UGC_UPDATE_CONTENT(-1, "ERROR", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
			}
			return;
		}
	}
	if (Local_65.f_29)
	{
		if (PED::REMOVE_SCENARIO_BLOCKING_AREA())
		{
			if (Local_65.f_29.f_1)
			{
				if (func_62(PLAYER::PLAYER_ID()))
				{
					CAM::DO_SCREEN_FADE_IN(250);
					AUDIO::SET_VARIABLE_ON_SOUND(Local_65.f_40.f_13.f_2, Local_65.f_40.f_13.f_1, Local_65.f_29.f_2, Local_65.f_40.f_13, 1, 500, 0);
					Local_65.f_29.f_1 = 0;
					Local_65.f_29 = 0;
				}
			}
			else
			{
				Local_65.f_29.f_1 = 1;
				func_61(&(Local_65.f_17), 0, 0);
				unk_0xBE20AB8238688965(&Global_2515683, 0);
				func_58(3f, 100f, &(Local_65.f_29.f_2), &uVar0, &uVar1, &Var2);
				func_57(1);
				func_55(Local_65.f_29.f_2, Var2);
			}
		}
	}
	if (func_54() || Local_65.f_29)
	{
		unk_0xBE20AB8238688965(&(Local_65.f_60), 1);
		unk_0xBE20AB8238688965(&(Local_65.f_60), 2);
		unk_0xBE20AB8238688965(&(Local_65.f_60), 3);
		if (!Local_65.f_29)
		{
			unk_0xBE20AB8238688965(&(Local_65.f_60), 6);
			unk_0xBE20AB8238688965(&(Local_65.f_60), 7);
		}
		return;
	}
	if (func_64())
	{
		if (func_52(&(Local_65.f_17), Local_64.f_8.f_2, 0))
		{
			Local_65.f_29 = 1;
			CAM::DO_SCREEN_FADE_OUT(250);
		}
		else
		{
			DATAFILE::UGC_UPDATE_CONTENT(-1, "ERROR", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
		}
	}
}

int func_52(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_53(uParam0, bParam2, 0);
	if (MISC::SET_BIT() && !bParam2)
	{
		if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_53(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (MISC::SET_BIT() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = NETWORK::GET_NETWORK_TIME();
			}
			else
			{
				*uParam0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
			}
		}
		else
		{
			*uParam0 = MISC::GET_GAME_TIMER();
		}
		uParam0->f_1 = 1;
	}
}

bool func_54()
{
	return unk_0xCE990E643CD9D0E5(Global_1689730, 5);
}

void func_55(struct<3> Param0, struct<3> Param1)
{
	if (!func_56(Global_1689730.f_13, Param0, 0))
	{
		Global_1689730.f_13 = { Param0 };
		Param1 = { Param1 + Vector(0f, -180f, 180f) };
		Global_1689730.f_16 = { Param1 };
	}
}

bool func_56(struct<3> Param0, struct<3> Param1, bool bParam2)
{
	if (bParam2)
	{
		return (Param0.x == Param1.x && Param0.f_1 == Param1.f_1);
	}
	return ((Param0.x == Param1.x && Param0.f_1 == Param1.f_1) && Param0.f_2 == Param1.f_2);
}

void func_57(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0xCE990E643CD9D0E5(Global_1689730.f_2, 4))
		{
			Global_1689730.f_2 = 0;
			unk_0xBE20AB8238688965(&(Global_1689730.f_2), 4);
		}
	}
	else if (unk_0xCE990E643CD9D0E5(Global_1689730.f_2, 4))
	{
		VEHICLE::IS_VEHICLE_DRIVEABLE(&(Global_1689730.f_2), 4);
	}
}

void func_58(float fParam0, float fParam1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	int iVar4;
	float fVar5;
	int iVar6;
	float fVar7;
	
	if (Local_64.f_74 == 0)
	{
		*uParam5 = { CAM::GET_CAM_ROT(Local_65, 2) };
		*uParam4 = { func_7(*uParam5) };
		*uParam2 = { Local_65.f_4.f_6 + Vector(fParam0, fParam0, fParam0) * *uParam4 };
		*uParam3 = { func_60(*uParam2, fParam1) };
	}
	else
	{
		Var0 = { func_7(CAM::GET_CAM_ROT(Local_65, 2)) };
		Var1 = { unk_0x7EC595B99EA7C4B1(Local_64.f_95, Local_64.f_88) };
		Var2 = { ENTITY::_GET_ENTITY_BONE_COORDS(Local_64.f_95, Local_64.f_74.f_1[0]) };
		Var3 = { Var2 - Var1 };
		*uParam2 = { Var2 };
		iVar4 = 0;
		fVar5 = func_59(Var3, Var0);
		iVar6 = 1;
		while (iVar6 <= (Local_64.f_74 - 1))
		{
			Var2 = { ENTITY::_GET_ENTITY_BONE_COORDS(Local_64.f_95, Local_64.f_74.f_1[iVar6]) };
			Var3 = { Var2 - Var1 };
			fVar7 = func_59(Var3, Var0);
			if (fVar7 > fVar5)
			{
				fVar5 = fVar7;
				iVar4 = iVar6;
				*uParam2 = { Var2 };
			}
			iVar6++;
		}
		*uParam5 = { ENTITY::_GET_ENTITY_BONE_ROTATION(Local_64.f_95, Local_64.f_74.f_1[iVar4]) };
		*uParam4 = { func_7(*uParam5) };
		*uParam2 = { *uParam2 + Vector(fParam0, fParam0, fParam0) * *uParam4 };
		*uParam3 = { *uParam2 + Vector(fParam1, fParam1, fParam1) * *uParam4 };
	}
}

float func_59(struct<3> Param0, struct<3> Param1)
{
	return (((Param0.x * Param1.x) + (Param0.f_1 * Param1.f_1)) + (Param0.f_2 * Param1.f_2));
}

Vector3 func_60(struct<3> Param0, float fParam1)
{
	struct<3> Var0;
	struct<3> Var1;
	
	Var0 = { CAM::GET_FINAL_RENDERED_CAM_ROT(2) };
	Var1 = { func_7(Var0) };
	return Param0 + Vector(fParam1, fParam1, fParam1) * Var1;
}

void func_61(var uParam0, bool bParam1, bool bParam2)
{
	if (MISC::SET_BIT() && !bParam1)
	{
		if (!bParam2)
		{
			*uParam0 = NETWORK::GET_NETWORK_TIME();
		}
		else
		{
			*uParam0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		}
	}
	else
	{
		*uParam0 = MISC::GET_GAME_TIMER();
	}
	uParam0->f_1 = 1;
}

int func_62(int iParam0)
{
	if (iParam0 != func_63())
	{
		return unk_0xCE990E643CD9D0E5(Global_1590682[iParam0 /*883*/].f_274.f_334, 26);
	}
	return 0;
}

int func_63()
{
	return -1;
}

bool func_64()
{
	return (unk_0xCE990E643CD9D0E5(Global_2515683, 4) || PAD::IS_CONTROL_JUST_PRESSED(0, 229));
}

int func_65(int iParam0, struct<3> Param1, struct<3> Param2, struct<3> Param3, int iParam4)
{
	struct<12> Var0;
	
	if (func_69())
	{
		if (!func_68(&uLocal_48))
		{
			func_53(&uLocal_48, 0, 0);
		}
		else if (func_52(&uLocal_48, 8000, 0))
		{
			func_67(&uLocal_48);
			func_66(0);
		}
	}
	if (!SCRIPT::IS_THREAD_ACTIVE(iLocal_50) && !SCRIPT::HAS_SCRIPT_WITH_NAME_HASH_LOADED(joaat("am_mp_drone")))
	{
		SCRIPT::REQUEST_SCRIPT("AM_MP_DRONE");
	}
	if ((SCRIPT::HAS_SCRIPT_WITH_NAME_HASH_LOADED(joaat("am_mp_drone")) && !SCRIPT::IS_THREAD_ACTIVE(iLocal_50)) && !func_69())
	{
		Var0.f_1 = -1;
		Var0 = 0;
		Var0.f_2 = { Param1 };
		Var0.f_5 = { Param2 };
		Var0.f_8 = { Param3 };
		Var0.f_1 = iParam0;
		Var0.f_11 = iParam4;
		if (INTERIOR::GET_INTERIOR_AT_COORDS(joaat("am_mp_drone")) < 1)
		{
			if (!NETWORK::NETWORK_IS_SCRIPT_ACTIVE("AM_MP_DRONE", Var0, true, 0))
			{
				iLocal_50 = SYSTEM::START_NEW_SCRIPT_WITH_NAME_HASH_AND_ARGS(joaat("am_mp_drone"), &Var0, 12, 1424);
				SCRIPT::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(joaat("am_mp_drone"));
				func_67(&uLocal_48);
			}
			else
			{
				return 1;
			}
		}
	}
	else if (SCRIPT::IS_THREAD_ACTIVE(iLocal_50) && !func_69())
	{
		return 1;
	}
	return 0;
}

void func_66(bool bParam0)
{
	if (bParam0)
	{
		if (INTERIOR::GET_INTERIOR_AT_COORDS(AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("AM_MP_DRONE")) > 0)
		{
			if (!func_69())
			{
				unk_0xBE20AB8238688965(&Global_1689730, 0);
			}
		}
	}
	else if (func_69())
	{
		VEHICLE::IS_VEHICLE_DRIVEABLE(&Global_1689730, false);
	}
}

void func_67(var uParam0)
{
	uParam0->f_1 = 0;
}

bool func_68(var uParam0)
{
	return uParam0->f_1;
}

bool func_69()
{
	return unk_0xCE990E643CD9D0E5(Global_1689730, 0);
}

void func_70()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<3> Var4;
	struct<3> Var5;
	
	func_77();
	if (Local_65.f_22 != -1)
	{
		bVar0 = func_52(&(Local_65.f_22.f_2), 2000, 0);
		if (bVar0)
		{
			if (ENTITY::IS_ENTITY_A_VEHICLE(Local_65.f_22.f_4))
			{
				iVar2 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(Local_65.f_22.f_4);
				VEHICLE::_0x407DC5E97DB1A4D3(iVar2, 2);
			}
			func_76(&(Local_65.f_22.f_5));
			func_75(&(Local_65.f_22.f_6), "Bleep", "DLC_IE_Steal_EITS_Sounds", 1);
			iVar1 = 6;
		}
		else
		{
			if (ENTITY::IS_ENTITY_A_VEHICLE(Local_65.f_22.f_4))
			{
				iVar3 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(Local_65.f_22.f_4);
				VEHICLE::_0x407DC5E97DB1A4D3(iVar3, 1);
			}
			func_75(&(Local_65.f_22.f_5), "VULKAN_LOCK_ON_AMBER", 0, 1);
			iVar1 = 9;
		}
		func_72(Local_65.f_22.f_4, !bVar0, iVar1);
		if (func_64())
		{
			if (Local_64.f_16 != 0 && !ENTITY::DOES_ENTITY_EXIST(Local_64.f_16))
			{
				DATAFILE::UGC_UPDATE_CONTENT(-1, "ERROR", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
				return;
			}
			if (bVar0 && func_52(&(Local_65.f_17), Local_64.f_8.f_2, 0))
			{
				func_61(&(Local_65.f_17), 0, 0);
				func_71(1f, &Var4, &Var5);
				MISC::SHOOT_SINGLE_BULLET_BETWEEN_COORDS_IGNORE_ENTITY_NEW(Var4, Var5, Local_64.f_8.f_3, true, Local_64.f_8, unk_0x9B0761B4C3EB8BC7(), true, true, -1f, Local_64.f_95, false, false, Local_65.f_22, true, 0, Local_64.f_94 != 0, 0);
				AUDIO::SET_VARIABLE_ON_SOUND(Local_65.f_40.f_13.f_2, Local_65.f_40.f_13.f_1, Var4, Local_65.f_40.f_13, 1, 500, 0);
			}
			else
			{
				DATAFILE::UGC_UPDATE_CONTENT(-1, "ERROR", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
			}
		}
	}
}

void func_71(float fParam0, var uParam1, var uParam2)
{
	var uVar0;
	
	func_58(0f, fParam0, uParam1, uParam2, &uVar0, &uVar0);
}

void func_72(int* iParam0, bool bParam1, int iParam2)
{
	float fVar0;
	float fVar1;
	struct<3> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("helicopterhud"))
	{
		return;
	}
	unk_0x9D15035C6653D1B1(1);
	Var2 = { NETWORK::NETWORK_ARE_HANDLES_THE_SAME(iParam0, 1) };
	GRAPHICS::SET_DRAW_ORIGIN(Var2, 0);
	fVar0 = func_74(iParam0, Local_65, 0.5f);
	fVar0 = func_49(fVar0, 0.015f, fVar0);
	fVar1 = (fVar0 * unk_0x8940B46482DD0A7D(0));
	HUD::GET_HUD_COLOUR(iParam2, &iVar3, &iVar4, &iVar5, &iVar6);
	iVar7 = func_73((bParam1 && (MISC::GET_GAME_TIMER() % 300) < 150), SYSTEM::CEIL((SYSTEM::TO_FLOAT(iVar6) / 4f)), iVar6);
	GRAPHICS::DRAW_SPRITE("helicopterhud", "hud_outline", 0f, 0f, fVar0, fVar1, 0f, iVar3, iVar4, iVar5, iVar7, false);
	GRAPHICS::CLEAR_DRAW_ORIGIN();
}

int func_73(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

float func_74(int* iParam0, int iParam1, float fParam2)
{
	struct<3> Var0;
	struct<3> Var1;
	void fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	
	Var0 = { CAM::GET_CAM_COORD(iParam1) };
	Var1 = { NETWORK::NETWORK_ARE_HANDLES_THE_SAME(iParam0, 1) };
	fVar2 = HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Var0, Var1, 1);
	fVar3 = CAM::GET_CAM_FOV(iParam1);
	fVar4 = 1f;
	fVar5 = (fVar4 / MISC::TAN((fVar3 / 2f)));
	fVar6 = ((fVar5 * fParam2) / fVar2);
	return fVar6;
}

void func_75(var uParam0, char* sParam1, int iParam2, int iParam3)
{
	if (*uParam0 == -1)
	{
		*uParam0 = AUDIO::PLAY_SOUND_FROM_COORD();
		DATAFILE::UGC_UPDATE_CONTENT(*uParam0, sParam1, iParam2, iParam3);
	}
}

void func_76(var uParam0)
{
	if (*uParam0 != -1)
	{
		AUDIO::STOP_SOUND(*uParam0);
		AUDIO::RELEASE_SOUND_ID(*uParam0);
		*uParam0 = -1;
	}
}

void func_77()
{
	bool bVar0;
	var uVar1;
	
	if (func_84(&(Local_65.f_22.f_1), Local_65.f_22.f_4, &bVar0))
	{
		if (bVar0)
		{
			if (Local_65.f_22 != Local_65.f_22.f_4)
			{
				func_61(&(Local_65.f_22.f_2), 0, 0);
				func_76(&(Local_65.f_22.f_5));
				func_76(&(Local_65.f_22.f_6));
			}
			Local_65.f_22 = Local_65.f_22.f_4;
		}
		else
		{
			func_83();
			uVar1 = func_81(Local_64.f_8.f_4);
			Local_65.f_22.f_4 = uVar1;
		}
		if (Local_65.f_22.f_4 != -1)
		{
			func_79(Local_65.f_22.f_4);
		}
	}
	if (Local_65.f_22 != -1)
	{
		if (((Local_65.f_22.f_4 != Local_65.f_22 || PED::IS_PED_IN_ANY_POLICE_VEHICLE(Local_65.f_22, 0)) || func_78(Local_65.f_22) > 0.04f) || SYSTEM::VMAG(NETWORK::NETWORK_ARE_HANDLES_THE_SAME(Local_65.f_22, 1) - Local_65.f_4.f_6) > Local_64.f_8.f_4)
		{
			func_83();
		}
	}
}

float func_78(int* iParam0)
{
	struct<3> Var0;
	
	Var0 = { NETWORK::NETWORK_ARE_HANDLES_THE_SAME(iParam0, 1) };
	if (!GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(Var0, &Var0, &(Var0.f_1)))
	{
		return 1f;
	}
	Var0 = { Var0 - Vector(0f, 0.5f, 0.5f) };
	Var0.f_2 = 0f;
	return SYSTEM::VMAG2(Var0);
}

void func_79(int* iParam0)
{
	struct<3> Var0;
	struct<3> Var1;
	
	Var0 = { CAM::GET_CAM_COORD(Local_65) };
	Var1 = { NETWORK::NETWORK_ARE_HANDLES_THE_SAME(iParam0, 1) };
	Var1 = { Var1 + Vector(2f, 2f, 2f) * func_80(Var1 - Var0) };
	Local_65.f_22.f_1 = SHAPETEST::START_SHAPE_TEST_LOS_PROBE(Var0, Var1, 511, 0, 4);
	if (Local_65.f_22.f_1 == 0)
	{
	}
}

Vector3 func_80(struct<3> Param0)
{
	bool bVar0;
	float fVar1;
	
	bVar0 = SYSTEM::VMAG(Param0);
	if (bVar0 != 0f)
	{
		fVar1 = (1f / bVar0);
		Param0 = { Param0 * Vector(fVar1, fVar1, fVar1) };
	}
	else
	{
		Param0.x = 0f;
		Param0.f_1 = 0f;
		Param0.f_2 = 0f;
	}
	return Param0;
}

int func_81(float fParam0)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	float fVar3;
	bool bVar4;
	float fVar5;
	int iVar6;
	int iVar7;
	int* iVar8;
	float fVar9;
	int iVar10;
	int iVar11;
	
	iVar0 = unk_0x6CC163E30ECE0790(PLAYER::PLAYER_ID());
	bVar1 = iVar0 != -1;
	fVar3 = 0.005f;
	bVar4 = false;
	fVar5 = (fParam0 * fParam0);
	iVar6 = 0;
	while (iVar6 < 32)
	{
		iVar7 = iVar6;
		iVar8 = PLAYER::GET_PLAYER_PED(iVar7);
		if (((!AUDIO::PLAY_STREAM_FROM_VEHICLE(iVar7) || !func_82(iVar7, 1, 1)) || (bVar1 && unk_0x6CC163E30ECE0790(iVar7) == iVar0)) || SYSTEM::VMAG2(Local_65.f_4.f_6 - NETWORK::NETWORK_ARE_HANDLES_THE_SAME(iVar8, 1)) > fVar5)
		{
		}
		else
		{
			fVar9 = func_78(iVar8);
			if (fVar9 < fVar3)
			{
				iVar2 = iVar7;
				fVar3 = fVar9;
				bVar4 = true;
			}
		}
		iVar6++;
	}
	if (bVar4)
	{
		iVar10 = PLAYER::GET_PLAYER_PED(iVar2);
		if (SYSTEM::VDIST(iVar10, 0))
		{
			iVar11 = ENTITY::GET_ENTITY_MODEL(iVar10, 0);
			if (!PED::IS_PED_IN_ANY_POLICE_VEHICLE(iVar11, 0))
			{
				return iVar11;
			}
		}
	}
	return -1;
}

int func_82(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (AUDIO::PLAY_STREAM_FROM_VEHICLE(iParam0))
		{
			if (bParam1)
			{
				if (!ENTITY::IS_ENTITY_AT_COORD(iParam0))
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

void func_83()
{
	Local_65.f_22 = -1;
	Local_65.f_22.f_4 = -1;
	func_76(&(Local_65.f_22.f_5));
	func_76(&(Local_65.f_22.f_6));
}

int func_84(var uParam0, int iParam1, var uParam2)
{
	int iVar0;
	var uVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	*uParam2 = 0;
	if (*uParam0 == 0 || iParam1 == -1)
	{
		return 1;
	}
	iVar4 = SHAPETEST::GET_SHAPE_TEST_RESULT(*uParam0, &iVar0, &uVar2, &uVar1, &iVar3);
	if (!ENTITY::IS_ENTITY_A_VEHICLE(iVar3))
	{
		if (ENTITY::IS_ENTITY_A_PED(iVar3))
		{
			iVar5 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar3);
			if (SYSTEM::VDIST(iVar5, 0))
			{
				iVar3 = ENTITY::GET_ENTITY_MODEL(iVar5, 0);
			}
		}
	}
	if (iVar4 == 2)
	{
		if (iVar0 != 0)
		{
			if (MISC::IS_BIT_SET(iVar3))
			{
				*uParam2 = (iParam1 == iVar3 && !PED::IS_PED_IN_ANY_POLICE_VEHICLE(iVar3, 0));
			}
		}
		return 1;
	}
	else if (iVar4 == 0)
	{
		return 1;
	}
	return 0;
}

void func_85()
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	int iVar5;
	struct<3> Var6;
	struct<3> Var7;
	var uVar8;
	struct<3> Var9;
	struct<3> Var10;
	
	PED::SET_PED_RESET_FLAG(unk_0x9B0761B4C3EB8BC7(), 452, true);
	bVar0 = Local_64.f_13.f_1 > 0;
	bVar1 = (bVar0 && !func_52(&(Local_65.f_19), Local_64.f_13.f_2, 0));
	if (bVar0)
	{
		if (bVar1)
		{
			iVar2 = 6;
			sVar3 = "TC_RELOAD";
			iVar5 = Local_64.f_13.f_2;
			iVar4 = func_94(&(Local_65.f_19), 0, 0);
		}
		else
		{
			iVar2 = 1;
			sVar3 = "TC_AMMO";
			iVar5 = Local_64.f_13.f_1;
			iVar4 = (iVar5 - Local_65.f_19.f_2);
		}
		func_91(iVar4, iVar5, sVar3, iVar2, -1, 11, -1082130432, -1082130432, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 1, -1, 0, -1, -1082130432, -1082130432, 0, 1, 0, 0, 1, -1, 0);
	}
	if (bVar0 && !bVar1)
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(0, 225))
		{
			func_90();
		}
	}
	if (!bVar1 && func_89())
	{
		Local_65.f_19.f_2 = (Local_65.f_19.f_2 + SYSTEM::ROUND((MISC::GET_FRAME_TIME() * 1000f)));
		if (func_52(&(Local_65.f_17), Local_64.f_8.f_2, 0))
		{
			func_61(&(Local_65.f_17), 0, 0);
			if (Local_64.f_13.f_1 > 0 && Local_65.f_19.f_2 >= Local_64.f_13.f_1)
			{
				func_61(&(Local_65.f_19), 0, 0);
				Local_65.f_19.f_2 = 0;
			}
			func_58(0f, Local_64.f_8.f_4, &Var6, &Var7, &uVar8, &Var9);
			Var10 = { Vector(Local_64.f_13, Local_64.f_13, Local_64.f_13) * func_86(0f, 0f, 0f, 1f) };
			Var10.f_1 = 0f;
			Var9 = { Var9 + Var10 };
			Var7 = { Var6 + FtoV(SYSTEM::VMAG(Var7 - Var6)) * func_7(Var9) };
			Var6.f_2 = (Var6.f_2 - 1f);
			MISC::SHOOT_SINGLE_BULLET_BETWEEN_COORDS_IGNORE_ENTITY_NEW(Var6, Var7, Local_64.f_8.f_3, false, Local_64.f_8, unk_0x9B0761B4C3EB8BC7(), true, true, -1f, Local_64.f_95, false, false, false, true, 0, Local_64.f_94 != 0, 0);
			if (Local_65.f_40.f_13.f_2 != -1 && AUDIO::HAS_SOUND_FINISHED(Local_65.f_40.f_13.f_2))
			{
				AUDIO::SET_VARIABLE_ON_SOUND(Local_65.f_40.f_13.f_2, Local_65.f_40.f_13.f_1, Var6, Local_65.f_40.f_13, 1, 500, 0);
			}
		}
	}
	else if (Local_65.f_40.f_13.f_2 != -1 && !AUDIO::HAS_SOUND_FINISHED(Local_65.f_40.f_13.f_2))
	{
		AUDIO::STOP_SOUND(Local_65.f_40.f_13.f_2);
	}
}

Vector3 func_86(struct<3> Param0, float fParam1)
{
	struct<3> Var0;
	float fVar1;
	int iVar2;
	
	fVar1 = (fParam1 * fParam1);
	iVar2 = 0;
	while (iVar2 < 20)
	{
		Var0 = { MISC::GET_RANDOM_FLOAT_IN_RANGE(-fParam1, fParam1), MISC::GET_RANDOM_FLOAT_IN_RANGE(-fParam1, fParam1), MISC::GET_RANDOM_FLOAT_IN_RANGE(-fParam1, fParam1) };
		if (SYSTEM::VDIST2(Var0, 0f, 0f, 0f) <= fVar1)
		{
			return Param0 + Var0;
		}
		iVar2++;
	}
	return func_87(Param0, fParam1);
}

Vector3 func_87(struct<3> Param0, float fParam1)
{
	struct<3> Var0;
	
	Var0 = { MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f) };
	return Param0 + func_88(Var0, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, fParam1));
}

Vector3 func_88(struct<3> Param0, float fParam1)
{
	bool bVar0;
	
	if (fParam1 == 0f)
	{
		return 0f, 0f, 0f;
	}
	bVar0 = SYSTEM::VMAG(Param0);
	if (bVar0 != 0f)
	{
		return Param0 * FtoV((fParam1 / bVar0));
	}
	return 0f, 0f, 0f;
}

bool func_89()
{
	return (unk_0xCE990E643CD9D0E5(Global_2515683, 4) || unk_0xB9C0D9B37277621D(0, 229));
}

void func_90()
{
	func_61(&(Local_65.f_19), 0, 0);
	Local_65.f_19.f_2 = 0;
}

void func_91(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25, int iParam26, int iParam27, int iParam28, int iParam29, int iParam30, int iParam31, int iParam32, int iParam33, int iParam34)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_93(0, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1378744.f_1 = 1;
		func_92(0, iVar0);
		Global_1378744.f_1135[iVar0] = iParam0;
		Global_1378744.f_1135.f_11[iVar0] = iParam1;
		StringCopy(&(Global_1378744.f_1135.f_22[iVar0 /*16*/]), sParam2, 64);
		Global_1378744.f_1135.f_194[iVar0] = iParam3;
		Global_1378744.f_1135.f_183[iVar0] = iParam4;
		Global_1378744.f_1135.f_216[iVar0] = iParam5;
		Global_1378744.f_1135.f_227[iVar0 /*3*/] = iParam6;
		Global_1378744.f_1135.f_227[iVar0 /*3*/].f_1 = iParam7;
		Global_1378744.f_1135.f_258[iVar0] = iParam8;
		Global_1378744.f_1135.f_269[iVar0] = iParam9;
		Global_1378744.f_1135.f_312[iVar0] = iParam10;
		Global_1378744.f_1135.f_323[iVar0] = iParam11;
		Global_1378744.f_1135.f_334[iVar0] = iParam12;
		Global_1378744.f_1135.f_345[iVar0] = iParam13;
		Global_1378744.f_1130 = 1;
		Global_1378744.f_1135.f_356[iVar0] = iParam14;
		Global_1378744.f_1135.f_367[iVar0] = iParam15;
		Global_1378744.f_1135.f_378[iVar0] = iParam16;
		Global_1378744.f_1135.f_389[iVar0] = iParam17;
		Global_1378744.f_1135.f_400[iVar0] = iParam18;
		Global_1378744.f_1135.f_411[iVar0] = iParam19;
		Global_1378744.f_1135.f_422[iVar0] = iParam20;
		Global_1378744.f_1135.f_433[iVar0] = iParam21;
		Global_1378744.f_1135.f_444[iVar0] = iParam22;
		Global_1378744.f_1135.f_455[iVar0] = iParam23;
		Global_1378744.f_1135.f_466[iVar0] = iParam24;
		Global_1378744.f_1135.f_205[iVar0] = iParam25;
		Global_1378744.f_1135.f_477[iVar0] = iParam26;
		Global_1378744.f_1135.f_488[iVar0] = iParam27;
		Global_1378744.f_1135.f_499[iVar0] = iParam28;
		Global_1378744.f_1135.f_510[iVar0] = iParam29;
		Global_1378744.f_1135.f_521[iVar0] = iParam30;
		Global_1378744.f_1135.f_532[iVar0] = iParam31;
		Global_1378744.f_1135.f_543[iVar0] = iParam32;
		Global_1378744.f_1135.f_554[iVar0] = iParam33;
		Global_1378744.f_1135.f_565[iVar0] = iParam34;
	}
}

void func_92(int iParam0, int iParam1)
{
	unk_0xBE20AB8238688965(&(Global_1378744.f_6304[iParam0]), iParam1);
}

bool func_93(int iParam0, int iParam1)
{
	return unk_0xCE990E643CD9D0E5(Global_1378744.f_6304[iParam0], iParam1);
}

int func_94(var uParam0, bool bParam1, bool bParam2)
{
	if (MISC::SET_BIT() && !bParam1)
	{
		if (!bParam2)
		{
			return NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0);
		}
		else
		{
			return NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME_ACCURATE(), *uParam0);
		}
	}
	return NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *uParam0);
}

bool func_95()
{
	return Global_74030;
}

void func_96(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	func_103(iParam0);
	if (func_102(&iVar0, 2))
	{
		func_61(&(Local_65.f_17), 0, 0);
		Local_64.f_8 = { Global_2515595.f_8 };
	}
	if (func_102(&iVar0, 6))
	{
		Local_64.f_19 = Global_2515595.f_19;
	}
	if (func_102(&iVar0, 10))
	{
		Local_64.f_74 = { Global_2515595.f_74 };
	}
	if (func_102(&iVar0, 8))
	{
		Local_64.f_67 = { Global_2515595.f_67 };
	}
	if (func_102(&iVar0, 12))
	{
		Local_64.f_20 = { Global_2515595.f_20 };
	}
	func_97(iParam0);
}

void func_97(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (func_102(&iVar0, 0))
	{
	}
	if (func_102(&iVar0, 1))
	{
	}
	if (func_102(&iVar0, 2))
	{
		Local_64.f_8 = { Global_2515595.f_8 };
		switch (Local_64.f_8.f_1)
		{
			case 1:
				GRAPHICS::SET_PARTICLE_FX_BULLET_IMPACT_SCALE(1.5f);
				if (Local_65.f_19.f_2 == 0 && func_101())
				{
					func_98(&(Local_65.f_19), Local_64.f_13.f_2, 0, 0);
				}
				else
				{
					func_90();
				}
				break;
			
			case 2:
				Local_64.f_86 = "helicopterhud";
				Local_64.f_16 = Global_2515595.f_16;
				if (Local_64.f_16 != 0)
				{
					unk_0x78FCB2E22C41B9D5(Local_64.f_16);
				}
				break;
			
			default:
				break;
		}
		if (!CAM::IS_SCREEN_FADED_OUT(Local_64.f_86))
		{
			GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(Local_64.f_86, false);
		}
	}
	if (func_102(&iVar0, 4))
	{
		switch (Local_64.f_17)
		{
			case 4:
				Local_64.f_86.f_1 = "";
				break;
			
			case 0:
				Local_64.f_86.f_1 = "turret_cam";
				break;
			
			case 1:
				Local_64.f_86.f_1 = "ARENA_GUN_CAM_APOCALYPSE";
				break;
			
			case 2:
				Local_64.f_86.f_1 = "ARENA_GUN_CAM_SCIFI";
				break;
			
			case 3:
				Local_64.f_86.f_1 = "ARENA_GUN_CAM_CONSUMER";
				break;
			
			default:
				Local_64.f_86.f_1 = "UNDEFINED";
				break;
		}
		if (!CAM::IS_SCREEN_FADED_OUT(Local_64.f_86.f_1))
		{
			Local_65.f_36 = unk_0x5DEA4192B46CB99B(Local_64.f_86.f_1);
		}
	}
	if (func_102(&iVar0, 6))
	{
		Local_65.f_40.f_13.f_2 = -1;
		switch (Local_64.f_19)
		{
			case 0:
				Local_65.f_40.f_13 = "dlc_aw_Arena_Spectator_Turret_turret_Sounds";
				Local_65.f_40.f_13.f_1 = "Fire_MG_Loop";
				Local_65.f_40.f_13.f_2 = AUDIO::PLAY_SOUND_FROM_COORD();
				break;
			
			case 1:
				Local_65.f_40.f_13 = "dlc_aw_Arena_Gun_Turret_Sounds";
				Local_65.f_40.f_13.f_1 = "Fire_MG_Loop";
				Local_65.f_40.f_13.f_2 = AUDIO::PLAY_SOUND_FROM_COORD();
				break;
			
			case 2:
				Local_65.f_40.f_13 = "dlc_aw_Arena_Gun_Turret_Sounds";
				Local_65.f_40.f_13.f_1 = "Fire_Rockets_Oneshot";
				Local_65.f_40.f_13.f_2 = AUDIO::PLAY_SOUND_FROM_COORD();
				break;
			
			case 3:
				Local_65.f_40.f_13 = "dlc_aw_Arena_Gun_Turret_Sounds";
				Local_65.f_40.f_13.f_1 = "Launch_Piloted_Missile";
				Local_65.f_40.f_13.f_2 = AUDIO::PLAY_SOUND_FROM_COORD();
				break;
			
			default:
				Local_65.f_40.f_13 = 0;
				Local_65.f_40.f_13.f_1 = 0;
				Local_65.f_40.f_13.f_2 = -1;
				break;
			}
	}
	if (func_102(&iVar0, 5))
	{
		Local_65.f_40.f_10 = -1;
		Local_65.f_40.f_8 = -1;
		Local_65.f_40.f_9 = -1;
		Local_65.f_40.f_11 = -1;
		Local_65.f_40.f_12 = -1;
		switch (Local_64.f_18)
		{
			case 0:
				Local_65.f_40 = "SCRIPT\POLICE_CHOPPER_CAM";
				Local_65.f_40.f_1 = "dlc_aw_arena_turret_scene";
				Local_65.f_40.f_2 = "dlc_aw_Arena_Spectator_Turret_turret_Sounds";
				Local_65.f_40.f_5 = "Turret_Camera_Hum_Loop";
				Local_65.f_40.f_10 = AUDIO::PLAY_SOUND_FROM_COORD();
				Local_65.f_40.f_3 = "Pan";
				Local_65.f_40.f_8 = AUDIO::PLAY_SOUND_FROM_COORD();
				Local_65.f_40.f_4 = "Zoom";
				Local_65.f_40.f_9 = AUDIO::PLAY_SOUND_FROM_COORD();
				break;
			
			case 1:
				Local_65.f_40 = "SCRIPT\POLICE_CHOPPER_CAM";
				Local_65.f_40.f_1 = "dlc_aw_arena_turret_scene";
				Local_65.f_40.f_2 = "dlc_aw_Arena_Gun_Turret_Sounds";
				Local_65.f_40.f_5 = "Turret_Camera_Hum_Loop";
				Local_65.f_40.f_10 = AUDIO::PLAY_SOUND_FROM_COORD();
				Local_65.f_40.f_3 = "Pan";
				Local_65.f_40.f_8 = AUDIO::PLAY_SOUND_FROM_COORD();
				Local_65.f_40.f_4 = "Zoom";
				Local_65.f_40.f_9 = AUDIO::PLAY_SOUND_FROM_COORD();
				Local_65.f_40.f_6 = "Take_Damage";
				Local_65.f_40.f_11 = AUDIO::PLAY_SOUND_FROM_COORD();
				Local_65.f_40.f_7 = "Low_Health_Warning";
				Local_65.f_40.f_12 = AUDIO::PLAY_SOUND_FROM_COORD();
				break;
			
			default:
				Local_65.f_40 = 0;
				Local_65.f_40.f_2 = 0;
				Local_65.f_40.f_5 = 0;
				Local_65.f_40.f_10 = -1;
				Local_65.f_40.f_3 = 0;
				Local_65.f_40.f_8 = -1;
				Local_65.f_40.f_4 = 0;
				Local_65.f_40.f_9 = -1;
				break;
		}
		if (!CAM::IS_SCREEN_FADED_OUT(Local_65.f_40))
		{
			AUDIO::HINT_SCRIPT_AUDIO_BANK(Local_65.f_40, 0, -1);
		}
	}
	if (func_102(&iVar0, 3))
	{
	}
	if (func_102(&iVar0, 7))
	{
		if (Local_64.f_24 > 0)
		{
			func_31(0, -1, 0);
		}
	}
	if (func_102(&iVar0, 8))
	{
	}
	if (func_102(&iVar0, 9))
	{
	}
	if (func_102(&iVar0, 10))
	{
	}
	if (func_102(&iVar0, 11))
	{
		if (!CAM::IS_SCREEN_FADED_OUT(&(Local_64.f_80)))
		{
			func_35(&(Local_64.f_80));
		}
	}
	if (func_102(&iVar0, 12))
	{
	}
}

void func_98(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (uParam0->f_1 == 0)
	{
		*uParam0 = NETWORK::GET_TIME_OFFSET(func_100(bParam2, bParam3), func_99(-iParam1, 0));
		uParam0->f_1 = 1;
	}
}

int func_99(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

int func_100(bool bParam0, bool bParam1)
{
	if (MISC::SET_BIT() && !bParam0)
	{
		if (!bParam1)
		{
			return NETWORK::GET_NETWORK_TIME();
		}
		else
		{
			return NETWORK::GET_NETWORK_TIME_ACCURATE();
		}
	}
	return MISC::GET_GAME_TIMER();
}

bool func_101()
{
	return (!func_68(&(Local_65.f_19)) || func_52(&(Local_65.f_19), Local_64.f_13.f_2, 0));
}

int func_102(int iParam0, bool bParam1)
{
	if (unk_0xCE990E643CD9D0E5(*iParam0, bParam1))
	{
		VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, bParam1);
		return 1;
	}
	return 0;
}

void func_103(int iParam0)
{
	if (func_102(&iParam0, 0))
	{
	}
	if (func_102(&iParam0, 1))
	{
	}
	if (func_102(&iParam0, 2))
	{
		Local_65.f_37 = 0;
		switch (Local_64.f_8.f_1)
		{
			case 1:
				GRAPHICS::SET_PARTICLE_FX_BULLET_IMPACT_SCALE(1f);
				break;
			
			case 3:
				if (Local_65.f_29)
				{
					CAM::DO_SCREEN_FADE_IN(250);
				}
				Local_65.f_29.f_1 = 0;
				Local_65.f_29 = 0;
				if (Local_65.f_29.f_5)
				{
					Local_65.f_29.f_5 = 0;
					func_66(1);
				}
				break;
			
			case 2:
				func_83();
				if (Local_64.f_16 != 0)
				{
					unk_0x74528AC0906CBABE(Local_64.f_16);
					Local_64.f_16 = 0;
				}
				break;
		}
		if (!CAM::IS_SCREEN_FADED_OUT(Local_64.f_86))
		{
			GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(Local_64.f_86);
			Local_64.f_86 = "";
		}
	}
	if (func_102(&iParam0, 3))
	{
	}
	if (func_102(&iParam0, 4))
	{
		Local_65.f_37 = 0;
		Local_64.f_86.f_1 = "";
		if (Local_65.f_36 != -1)
		{
			GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(Local_65.f_36));
			Local_65.f_36 = -1;
		}
	}
	if (func_102(&iParam0, 6))
	{
		func_76(&(Local_65.f_40.f_13.f_2));
	}
	if (func_102(&iParam0, 5))
	{
		AUDIO::STOP_AUDIO_SCENES();
		AUDIO::_0x9AC92EED5E4793AB();
		if (!CAM::IS_SCREEN_FADED_OUT(Local_65.f_40))
		{
			AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK(Local_65.f_40);
		}
		func_76(&(Local_65.f_40.f_8));
		func_76(&(Local_65.f_40.f_9));
		func_76(&(Local_65.f_40.f_10));
		func_76(&(Local_65.f_40.f_11));
		func_76(&(Local_65.f_40.f_12));
	}
	if (func_102(&iParam0, 7))
	{
		if (Local_64.f_24 > 0)
		{
			func_104(1, -1);
		}
	}
	if (func_102(&iParam0, 8))
	{
		if (!CAM::IS_SCREEN_FADED_OUT(&(Local_64.f_67)) && func_12(&(Local_64.f_67)))
		{
			unk_0xD289B55B6AADBA10(1);
		}
	}
	if (func_102(&iParam0, 9))
	{
	}
	if (func_102(&iParam0, 10))
	{
	}
	if (func_102(&iParam0, 11))
	{
		if (!CAM::IS_SCREEN_FADED_OUT(&(Local_64.f_80)))
		{
			func_36();
			StringCopy(&(Local_64.f_80), "", 16);
		}
	}
	if (func_102(&iParam0, 12))
	{
		Local_65.f_37 = 0;
	}
}

void func_104(bool bParam0, int iParam1)
{
	int iVar0;
	
	if (!func_26(&iVar0, 0, iParam1))
	{
		return;
	}
	if (Global_22550.f_8417)
	{
		GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(15);
		Global_22550.f_8417 = 0;
	}
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(0f);
	if (Global_22550.f_5628[iVar0])
	{
		HUD::CLEAR_ADDITIONAL_TEXT(9, false);
		Global_22550.f_5628[iVar0] = 0;
	}
	if (Global_22550.f_5614[iVar0])
	{
		GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("CommonMenu");
		Global_22550.f_5614[iVar0] = 0;
	}
	if (Global_22550.f_5621[iVar0])
	{
		GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("MPShopSale");
		Global_22550.f_5621[iVar0] = 0;
	}
	if (bParam0)
	{
		func_105(&(Global_22550.f_5660[iVar0 /*10*/]));
		Global_22550.f_5721[iVar0] = 0;
	}
	else
	{
		Global_22550.f_5721[iVar0] = 0;
	}
}

void func_105(int* iParam0)
{
	if (iParam0->f_9 != 0)
	{
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
		{
			GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(iParam0);
		}
		*iParam0 = 0;
		iParam0->f_9 = 0;
	}
}

void func_106()
{
	if ((!unk_0x5DA78AD6801A0523() && !PED::REMOVE_SCENARIO_BLOCKING_AREA()) && unk_0xCE990E643CD9D0E5(Local_64.f_84.f_1, true))
	{
		CAM::DO_SCREEN_FADE_OUT(Local_64.f_84);
	}
	if (func_52(&(Local_65.f_58), Local_64.f_84, 0))
	{
		if (!unk_0xCE990E643CD9D0E5(Local_64.f_84.f_1, false) || func_108(Local_64.f_88, 0))
		{
			if (!CAM::DOES_CAM_EXIST(Local_65))
			{
				Local_65 = CAM::CREATE_CAMERA(26379945, true);
				unk_0xBE20AB8238688965(&(Local_65.f_60), 2);
				func_41();
				VEHICLE::IS_VEHICLE_DRIVEABLE(&(Local_65.f_60), 2);
				PLAYER::_0x70A382ADEC069DD3(Local_65.f_4.f_6);
			}
			else
			{
				if (unk_0xCE990E643CD9D0E5(Local_64.f_84.f_1, false))
				{
					STREAMING::NEW_LOAD_SCENE_STOP();
				}
				CAM::RENDER_SCRIPT_CAMS(true, false, 0, true, true, 0);
				func_3(&(Local_65.f_38), &(Local_65.f_39));
				func_37();
				if (!CAM::IS_SCREEN_FADED_OUT(Local_65.f_40.f_1))
				{
					AUDIO::START_AUDIO_SCENE(Local_65.f_40.f_1);
				}
				func_61(&(Local_65.f_17), 0, 0);
				unk_0xBE20AB8238688965(&Global_2515683, 3);
				func_107(1);
				if (GRAPHICS::GET_TIMECYCLE_MODIFIER_INDEX() >= 0)
				{
					Local_65.f_57 = 1;
					GRAPHICS::PUSH_TIMECYCLE_MODIFIER();
				}
				GRAPHICS::SET_TIMECYCLE_MODIFIER("eyeinthesky");
				Local_65.f_56 = GRAPHICS::GET_TIMECYCLE_MODIFIER_INDEX();
				if (unk_0xCE990E643CD9D0E5(Local_64.f_84.f_1, 2))
				{
					if (unk_0x5DA78AD6801A0523() || PED::REMOVE_SCENARIO_BLOCKING_AREA())
					{
						CAM::DO_SCREEN_FADE_IN(800);
					}
				}
			}
		}
	}
}

void func_107(int iParam0)
{
	Local_65.f_16 = iParam0;
}

int func_108(struct<3> Param0, int iParam1)
{
	if (unk_0xCE990E643CD9D0E5(Local_65.f_60, false))
	{
		if (STREAMING::IS_NEW_LOAD_SCENE_LOADED())
		{
			return 1;
		}
	}
	else if (STREAMING::NEW_LOAD_SCENE_START_SPHERE(Param0, 100f, iParam1))
	{
		unk_0xBE20AB8238688965(&(Local_65.f_60), 0);
	}
	return 0;
}

void func_109(int iParam0)
{
	if (func_114())
	{
		return;
	}
	if (!Global_19681.f_1 == 1)
	{
		if (func_113(0))
		{
			func_110(iParam0);
		}
		unk_0xBE20AB8238688965(&Global_7552, 2);
	}
}

void func_110(int iParam0)
{
	if (func_114())
	{
		return;
	}
	if (Global_19864)
	{
		if (func_54())
		{
			func_112(1, 1);
		}
		else
		{
			func_112(0, 0);
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
	if (!func_111())
	{
		Global_19681.f_1 = 3;
	}
}

int func_111()
{
	if (Global_19681.f_1 == 1 || Global_19681.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_112(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_113(0))
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

int func_113(int iParam0)
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

bool func_114()
{
	return unk_0xCE990E643CD9D0E5(Global_1689730, 19);
}

int func_115()
{
	if (Local_64.f_94 != 0)
	{
		if (!MISC::IS_BIT_SET(Local_64.f_95) || PED::IS_PED_IN_ANY_POLICE_VEHICLE(Local_64.f_95, 0))
		{
			return 1;
		}
	}
	if (!func_82(PLAYER::PLAYER_ID(), 1, 1))
	{
		return 1;
	}
	if (Global_2515593)
	{
		return 1;
	}
	return 0;
}

int func_116()
{
	var uVar0;
	
	func_124(&uVar0);
	if (Global_1312872 == 0)
	{
		if (!MISC::SET_BIT())
		{
			return 1;
		}
	}
	if (func_123())
	{
		return 1;
	}
	if (Global_2464493)
	{
		return 1;
	}
	if (func_122())
	{
		return 1;
	}
	if (func_121(159))
	{
		if (!func_120())
		{
			return 1;
		}
	}
	if (func_121(157))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_SESSION_IS_IN_VOICE_SESSION())
	{
		return 1;
	}
	if (func_117() != 0)
	{
		if (INTERIOR::GET_INTERIOR_AT_COORDS(func_117()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_117()
{
	switch (func_119())
	{
		case 0:
			return func_118();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_118()
{
	switch (Global_2464595)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_119()
{
	return Global_30968;
}

bool func_120()
{
	return Global_2451787.f_696;
}

int func_121(int iParam0)
{
	if (unk_0x16F1FCCC54559709(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_122()
{
	return Global_2462250;
}

bool func_123()
{
	return Global_2451787.f_691;
}

void func_124(var uParam0)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	struct<3> Var3;
	
	iVar0 = 0;
	while (iVar0 < SCRIPT::GET_EVENT_AT_INDEX(1))
	{
		bVar1 = SCRIPT::GET_EVENT_DATA(1, iVar0);
		if (bVar1 == 174)
		{
			unk_0x477FAFFE21935947(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case 1035596089:
					func_125(iVar0);
					break;
				
				case 1120313136:
					unk_0x477FAFFE21935947(1, iVar0, &Var3, 4);
					if (Var3.f_2 == 397890833)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_125(int iParam0)
{
	struct<3> Var0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	if (unk_0x477FAFFE21935947(1, iParam0, &Var0, 3))
	{
		if (func_82(Var0.f_1, 1, 1))
		{
			iVar1 = PLAYER::GET_PLAYER_PED(Var0.f_1);
			if (MISC::IS_BIT_SET(iVar1))
			{
				if (SYSTEM::VDIST(iVar1, 0))
				{
					iVar2 = ENTITY::GET_ENTITY_MODEL(iVar1, 0);
					if (VEHICLE::REMOVE_VEHICLE_WINDOW(iVar2, Var0.f_2) && NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
					{
						if (func_126(iVar2, &bVar3))
						{
							ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(iVar2, Var0.f_2);
						}
						if (bVar3)
						{
							STREAMING::REMOVE_ANIM_DICT(&iVar2);
						}
					}
				}
			}
		}
	}
}

int func_126(int iParam0, var uParam1)
{
	if (MISC::IS_BIT_SET(iParam0))
	{
		if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iParam0))
		{
			if (NETWORK::NETWORK_GET_ENTITY_IS_LOCAL(iParam0))
			{
				if (!VEHICLE::IS_THIS_MODEL_A_TRAIN(MISC::GET_MODEL_DIMENSIONS(iParam0)))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam0, false, true);
					*uParam1 = 1;
				}
			}
		}
		if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iParam0, false))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_127()
{
	SYSTEM::WAIT(0);
}

void func_128()
{
	int iVar0;
	int iVar1;
	
	if (Local_65.f_16 == 0 && unk_0xCE990E643CD9D0E5(Local_64.f_84.f_1, true))
	{
		CAM::DO_SCREEN_FADE_IN(250);
	}
	func_103(-1);
	if (func_136())
	{
		func_135(0);
	}
	CAM::SET_CINEMATIC_BUTTON_ACTIVE(true);
	HUD::UNLOCK_MINIMAP_ANGLE();
	HUD::UNLOCK_MINIMAP_POSITION();
	iVar0 = unk_0x9B0761B4C3EB8BC7();
	if (func_134(iVar0) && SYSTEM::VDIST(iVar0, 1))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(unk_0x9B0761B4C3EB8BC7(), 0);
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1))
		{
			AUDIO::SET_VEHICLE_RADIO_ENABLED(iVar1, true);
			func_132(1);
		}
	}
	if (unk_0xCE990E643CD9D0E5(Local_65.f_60, 4))
	{
		func_131();
	}
	PLAYER::_0x7148E0F43D11F0D9();
	GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
	if (Local_65.f_57)
	{
		GRAPHICS::POP_TIMECYCLE_MODIFIER();
	}
	func_130(Local_65.f_38);
	func_130(Local_65.f_39);
	Global_2515582 = 0;
	Global_2515683 = 0;
	func_129();
}

void func_129()
{
	ENTITY::STOP_ENTITY_ANIM();
}

void func_130(float fParam0)
{
	if (SYSTEM::VMAG(fParam0))
	{
		unk_0x93370FA10F15BE44(&fParam0);
	}
}

void func_131()
{
	Global_2440049.f_1267.f_10 = 0;
}

void func_132(int iParam0)
{
	int iVar0;
	
	if (Global_2405074.f_2683 == 1)
	{
		Global_2405074.f_2683 = 0;
		return;
	}
	if (SYSTEM::VDIST(unk_0x9B0761B4C3EB8BC7(), 0))
	{
		if (!Global_2405074.f_2685.f_1)
		{
			if (!Global_2405074.f_2681 == -1)
			{
				if (((Global_2405074.f_2681 < 255 && !func_133()) && !unk_0xCE990E643CD9D0E5(Global_4456448.f_129386, false)) && !(AUDIO::_0x2DD39BF3E2F9C47F() && (Global_2405074.f_2682 == 0 && iParam0 == 0)))
				{
					AUDIO::SET_RADIO_TO_STATION_INDEX(Global_2405074.f_2681);
				}
				else if (Global_2405074.f_2681 >= 255)
				{
					AUDIO::SET_RADIO_TO_STATION_NAME("OFF");
					iVar0 = ENTITY::GET_ENTITY_MODEL(unk_0x9B0761B4C3EB8BC7(), 0);
					if (MISC::IS_BIT_SET(iVar0))
					{
						if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
						{
							AUDIO::SET_VEH_RADIO_STATION(iVar0, "OFF");
						}
					}
				}
			}
			Global_2405074.f_2681 = -1;
			Global_2405074.f_2685.f_1 = 1;
		}
	}
}

bool func_133()
{
	return Global_1626881;
}

int func_134(int iParam0)
{
	if (MISC::IS_BIT_SET(iParam0))
	{
		if (!PED::IS_PED_IN_ANY_POLICE_VEHICLE(iParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_135(int iParam0)
{
	Global_2464530 = iParam0;
}

bool func_136()
{
	return Global_2464530;
}

void func_137(var uParam0)
{
	unk_0xBE20AB8238688965(&Global_2515683, 2);
	if (MISC::SET_BIT())
	{
		NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(32, 0, -1);
		func_155(0, -1, 0);
	}
	else
	{
		func_128();
	}
	func_138(uParam0);
}

void func_138(var uParam0)
{
	int iVar0;
	int iVar1;
	
	Local_64.f_88 = { *uParam0 };
	Local_64.f_91 = { uParam0->f_3 };
	Local_64.f_94 = uParam0->f_6;
	Local_64.f_95 = uParam0->f_7;
	Local_65.f_22.f_4 = -1;
	iVar0 = unk_0x9B0761B4C3EB8BC7();
	if (func_134(iVar0) && SYSTEM::VDIST(iVar0, 1))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(unk_0x9B0761B4C3EB8BC7(), 0);
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1))
		{
			func_154(1);
			AUDIO::SET_VEHICLE_RADIO_ENABLED(iVar1, false);
		}
	}
	if (!func_153())
	{
		unk_0xBE20AB8238688965(&(Local_65.f_60), 4);
		func_152();
	}
	func_139();
}

void func_139()
{
	if (!unk_0xCE990E643CD9D0E5(Global_2515681, false))
	{
		func_151(-1028390912, 1119092736, -1036779520, 1110704128, 1106247680, 1114636288);
	}
	if (!unk_0xCE990E643CD9D0E5(Global_2515681, true))
	{
		func_150(1058642330, 1101004800);
	}
	if (!unk_0xCE990E643CD9D0E5(Global_2515681, 2))
	{
		func_149();
	}
	if (!unk_0xCE990E643CD9D0E5(Global_2515681, 3))
	{
		func_147(1, 1, 0, 500);
	}
	if (!unk_0xCE990E643CD9D0E5(Global_2515681, 4))
	{
		func_146(0);
	}
	if (!unk_0xCE990E643CD9D0E5(Global_2515681, 5))
	{
		func_145(0);
	}
	if (!unk_0xCE990E643CD9D0E5(Global_2515681, 6))
	{
		func_144(0);
	}
	if (!unk_0xCE990E643CD9D0E5(Global_2515681, 7))
	{
		unk_0xBE20AB8238688965(&Global_2515681, 7);
		Global_2515595.f_24 = 0;
	}
	if (!unk_0xCE990E643CD9D0E5(Global_2515681, 8))
	{
		func_143(0);
	}
	if (!unk_0xCE990E643CD9D0E5(Global_2515681, 9))
	{
		func_142(0f, 0f, 0f);
	}
	if (!unk_0xCE990E643CD9D0E5(Global_2515681, 10))
	{
		unk_0xBE20AB8238688965(&Global_2515681, 10);
		Global_2515595.f_74 = 0;
	}
	if (!unk_0xCE990E643CD9D0E5(Global_2515681, 11))
	{
		func_141(0);
	}
	if (!unk_0xCE990E643CD9D0E5(Global_2515681, 12))
	{
		func_140(1, 3, 3, 3);
	}
	Local_64 = { Global_2515595 };
	func_97(Global_2515681);
	func_107(0);
}

void func_140(int iParam0, int iParam1, int iParam2, int iParam3)
{
	unk_0xBE20AB8238688965(&Global_2515681, 12);
	Global_2515595.f_20 = iParam0;
	Global_2515595.f_20.f_1 = iParam1;
	Global_2515595.f_20.f_2 = iParam2;
	Global_2515595.f_20.f_3 = iParam3;
}

void func_141(char* sParam0)
{
	unk_0xBE20AB8238688965(&Global_2515681, 11);
	StringCopy(&(Global_2515595.f_80), sParam0, 16);
}

void func_142(struct<3> Param0)
{
	unk_0xBE20AB8238688965(&Global_2515681, 9);
	Global_2515595.f_71 = { Param0 };
}

void func_143(char* sParam0)
{
	unk_0xBE20AB8238688965(&Global_2515681, 8);
	StringCopy(&(Global_2515595.f_67), sParam0, 16);
}

void func_144(int iParam0)
{
	unk_0xBE20AB8238688965(&Global_2515681, 6);
	Global_2515595.f_19 = iParam0;
}

void func_145(int iParam0)
{
	unk_0xBE20AB8238688965(&Global_2515681, 5);
	Global_2515595.f_18 = iParam0;
}

void func_146(int iParam0)
{
	unk_0xBE20AB8238688965(&Global_2515681, 4);
	Global_2515595.f_17 = iParam0;
}

void func_147(bool bParam0, bool bParam1, bool bParam2, int iParam3)
{
	unk_0xBE20AB8238688965(&Global_2515681, 3);
	Global_2515595.f_84 = iParam3;
	func_148(&(Global_2515595.f_84.f_1), 1, bParam0);
	func_148(&(Global_2515595.f_84.f_1), 2, bParam1);
	func_148(&(Global_2515595.f_84.f_1), 0, bParam2);
}

void func_148(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2)
	{
		unk_0xBE20AB8238688965(iParam0, bParam1);
	}
	else
	{
		VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, bParam1);
	}
}

void func_149()
{
	unk_0xBE20AB8238688965(&Global_2515681, 2);
	Global_2515595.f_8.f_1 = 0;
}

void func_150(int iParam0, int iParam1)
{
	unk_0xBE20AB8238688965(&Global_2515681, true);
	Global_2515595.f_6.f_1 = iParam0;
	Global_2515595.f_6 = iParam1;
}

void func_151(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	unk_0xBE20AB8238688965(&Global_2515681, false);
	Global_2515595 = iParam0;
	Global_2515595.f_1 = iParam1;
	Global_2515595.f_2 = iParam2;
	Global_2515595.f_3 = iParam3;
	Global_2515595.f_4 = iParam4;
	Global_2515595.f_5 = iParam5;
}

void func_152()
{
	Global_2440049.f_1267.f_10 = 1;
}

bool func_153()
{
	return Global_2440049.f_1267.f_10;
}

void func_154(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_2405074.f_2684;
	if ((AUDIO::_0x2DD39BF3E2F9C47F() && Global_2405074.f_2682 == 0) && iParam0 == 0)
	{
		iVar0 = 255;
	}
	if (!iVar0 == Global_2405074.f_2681)
	{
		if (!AUDIO::IS_RADIO_RETUNING())
		{
			Global_2405074.f_2681 = iVar0;
		}
	}
}

int func_155(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_129();
			}
			else
			{
				return 0;
			}
		}
		if (!func_156())
		{
			if (iParam0 == 0)
			{
				if (!MISC::SET_BIT())
				{
					if (!bParam2)
					{
						func_129();
					}
					else
					{
						return 0;
					}
				}
				if (func_123())
				{
					if (!bParam2)
					{
						func_129();
					}
					else
					{
						return 0;
					}
				}
				if (func_121(157))
				{
					if (!bParam2)
					{
						func_129();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!NETWORK::NETWORK_IS_IN_SESSION())
			{
				if (!bParam2)
				{
					func_129();
				}
				else
				{
					return 0;
				}
			}
		}
		SYSTEM::WAIT(0);
		iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	}
	if (iParam1 > -1)
	{
		Global_1312519 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!MISC::SET_BIT())
		{
			if (!bParam2)
			{
				func_129();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!NETWORK::NETWORK_IS_IN_SESSION())
	{
		if (!bParam2)
		{
			func_129();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_156()
{
	return Global_1312872;
}

