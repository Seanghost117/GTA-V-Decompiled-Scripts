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
	var uLocal_20 = 0;
	char* sLocal_21 = NULL;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	float fLocal_24 = 0f;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	float fLocal_29 = 0f;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	float fLocal_33 = 0f;
	float fLocal_34 = 0f;
	float fLocal_35 = 0f;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	int iLocal_38 = 0;
	var uLocal_39 = 0;
	int* iLocal_40 = NULL;
	int* iLocal_41 = NULL;
	int* iLocal_42 = NULL;
	int iLocal_43 = 0;
	char* sLocal_44 = NULL;
	char* sLocal_45 = NULL;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	struct<3> Local_49 = { 0, 0, 0 } ;
	struct<3> Local_50 = { 0, 0, 0 } ;
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
	sLocal_21 = "NULL";
	fLocal_24 = 0f;
	fLocal_28 = -0.0375f;
	fLocal_29 = 0.17f;
	fLocal_33 = 80f;
	fLocal_34 = 140f;
	fLocal_35 = 180f;
	iLocal_38 = 3;
	sLocal_44 = "RCMBarryLeadInOut";
	sLocal_45 = "idle";
	Local_49 = { 189.5964f, -956.0344f, 29.5771f };
	Local_50 = { 190.2424f, -956.379f, 28.63f };
	MONEY::NETWORK_MONEY_CAN_BET(0, 26, true);
	if (func_25(unk_0x9B0761B4C3EB8BC7()))
	{
		if (AUDIO::SET_SCRIPT_UPDATE_DOOR_AUDIO(PLAYER::PLAYER_ID()) != 0)
		{
			PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_ID(), 0, false);
		}
	}
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(83))
	{
		func_22(0);
	}
	STREAMING::REQUEST_ANIM_DICT(sLocal_44);
	HUD::HAS_ADDITIONAL_TEXT_LOADED("BARY1", 7);
	while (!STREAMING::HAS_ANIM_DICT_LOADED(sLocal_44) || !HUD::REQUEST_ADDITIONAL_TEXT_FOR_DLC(7))
	{
		MONEY::NETWORK_MONEY_CAN_BET(0, 26, true);
		SYSTEM::WAIT(0);
	}
	MONEY::NETWORK_MONEY_CAN_BET(0, 26, true);
	func_25(unk_0x9B0761B4C3EB8BC7());
	iLocal_46 = MISC::GET_GAME_TIMER() + 13000;
	iLocal_47 = NETWORK::_NETWORK_GET_ROS_PRIVILEGE_25(0, 5);
	func_19();
	while (!func_13(&iLocal_43, 49, Local_50, func_18(1.12f), 0))
	{
		MONEY::NETWORK_MONEY_CAN_BET(0, 26, true);
		SYSTEM::WAIT(0);
	}
	MONEY::NETWORK_MONEY_CAN_BET(0, 26, true);
	func_12();
	iLocal_48 = MISC::GET_GAME_TIMER() + 1000;
	MONEY::NETWORK_MONEY_CAN_BET(0, 26, true);
	while (true)
	{
		func_25(unk_0x9B0761B4C3EB8BC7());
		if (MISC::GET_GAME_TIMER() < iLocal_48)
		{
			MONEY::NETWORK_MONEY_CAN_BET(0, 26, true);
		}
		func_11();
		if (!func_25(iLocal_43))
		{
			func_22(0);
		}
		if (func_3())
		{
		}
		if (func_2(unk_0x9B0761B4C3EB8BC7(), Local_50, 1) > 70f)
		{
			func_1(&iLocal_40, 0);
			func_1(&iLocal_41, 0);
			func_1(&iLocal_42, 0);
			func_22(0);
		}
		SYSTEM::WAIT(0);
	}
}

void func_1(int* iParam0, bool bParam1)
{
	if (MISC::IS_BIT_SET(*iParam0))
	{
		if (AUDIO::PLAY_SOUND_FROM_ENTITY(*iParam0))
		{
			ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(*iParam0, 1, 1);
		}
		if (!bParam1)
		{
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(iParam0);
		}
		else
		{
			OBJECT::_MARK_OBJECT_FOR_DELETION(*iParam0);
		}
	}
}

float func_2(int iParam0, struct<3> Param1, int iParam2)
{
	struct<3> Var0;
	
	if (!PED::IS_PED_IN_ANY_POLICE_VEHICLE(iParam0, 0))
	{
		Var0 = { NETWORK::NETWORK_ARE_HANDLES_THE_SAME(iParam0, 1) };
	}
	else
	{
		Var0 = { NETWORK::NETWORK_ARE_HANDLES_THE_SAME(iParam0, 0) };
	}
	return HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Var0, Param1, iParam2);
}

int func_3()
{
	var uVar0;
	
	if (((((func_10(unk_0x9B0761B4C3EB8BC7()) && func_10(iLocal_43)) && !func_9()) && MISC::GET_GAME_TIMER() > iLocal_46) && func_8(unk_0x9B0761B4C3EB8BC7(), iLocal_43, 1) < 20f) && !MISC::GET_MISSION_FLAG())
	{
		uVar0 = 16;
		func_7(&uVar0, 0, iLocal_43, "BARRY", 0, 1);
		func_4(&uVar0, "BARY1AU", func_6(), 7, 0, 0);
		iLocal_46 = (MISC::GET_GAME_TIMER() + NETWORK::_NETWORK_GET_ROS_PRIVILEGE_25(12000, 18000));
		return 1;
	}
	return 0;
}

void func_4(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	func_5(uParam0, 145, sParam1, iParam4, iParam5, 0);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	unk_0xBE20AB8238688965(&Global_19871, 0);
	Global_21008 = iParam3;
	StringCopy(&Global_20995, sParam2, 24);
}

void func_5(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_20459 = { *uParam0 };
	Global_6867 = iParam1;
	StringCopy(&Global_21075, sParam2, 24);
	Global_21994 = iParam5;
	if (iParam3 == 0)
	{
		Global_21992 = 1;
		Global_21990 = 0;
	}
	else
	{
		Global_21992 = 0;
		Global_21990 = 1;
	}
	if (iParam4 == 0)
	{
		Global_21993 = 1;
		Global_21991 = 0;
	}
	else
	{
		Global_21993 = 0;
		Global_21991 = 1;
	}
}

char* func_6()
{
	char* sVar0;
	
	switch (iLocal_47)
	{
		case 0:
			sVar0 = "BARY1_RCMLI1";
			break;
		
		case 1:
			sVar0 = "BARY1_RCMLI2";
			break;
		
		case 2:
			sVar0 = "BARY1_RCMLI3";
			break;
		
		case 3:
			sVar0 = "BARY1_RCMLI4";
			break;
		
		case 4:
			sVar0 = "BARY1_RCMLI5";
			break;
	}
	iLocal_47++;
	if (iLocal_47 > 4)
	{
		iLocal_47 = 0;
	}
	return sVar0;
}

void func_7(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_76833)
	{
		if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				STATS::_GET_NGSTAT_INT_HASH(iParam2, 0);
			}
			else
			{
				STATS::_GET_NGSTAT_INT_HASH(iParam2, 1);
			}
		}
		if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				STATS::STAT_SLOT_IS_LOADED(iParam2, 0);
			}
			else
			{
				STATS::STAT_SLOT_IS_LOADED(iParam2, 1);
			}
		}
	}
}

float func_8(int iParam0, int iParam1, int iParam2)
{
	struct<3> Var0;
	struct<3> Var1;
	
	if (!PED::IS_PED_IN_ANY_POLICE_VEHICLE(iParam0, 0))
	{
		Var0 = { NETWORK::NETWORK_ARE_HANDLES_THE_SAME(iParam0, 1) };
	}
	else
	{
		Var0 = { NETWORK::NETWORK_ARE_HANDLES_THE_SAME(iParam0, 0) };
	}
	if (!PED::IS_PED_IN_ANY_POLICE_VEHICLE(iParam1, 0))
	{
		Var1 = { NETWORK::NETWORK_ARE_HANDLES_THE_SAME(iParam1, 1) };
	}
	else
	{
		Var1 = { NETWORK::NETWORK_ARE_HANDLES_THE_SAME(iParam1, 0) };
	}
	return HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Var0, Var1, iParam2);
}

int func_9()
{
	if (Global_21005 != 0 || ENTITY::IS_ENTITY_DEAD())
	{
		return 1;
	}
	return 0;
}

int func_10(int iParam0)
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

void func_11()
{
	if (FIRE::IS_EXPLOSION_IN_SPHERE(-1, Local_50, 5f))
	{
		if (func_10(iLocal_43))
		{
			ENTITY::SET_ENTITY_COORDS(iLocal_43, 0);
			PED::APPLY_DAMAGE_TO_PED(iLocal_43, 1000, true, 0);
		}
		if (func_10(iLocal_41))
		{
			ENTITY::SET_ENTITY_COORDS(iLocal_41, 0);
		}
		if (func_10(iLocal_40))
		{
			ENTITY::SET_ENTITY_COORDS(iLocal_40, 0);
		}
	}
}

void func_12()
{
	if (func_10(iLocal_43))
	{
		if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_43))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_43, true, false);
		}
		PED::SET_PED_PROP_INDEX(iLocal_43, 1, 0, 0, false);
		PED::_0x2208438012482A1A(iLocal_43, 1);
		PED::SET_PED_MONEY(iLocal_43, 0);
		PED::SET_PED_CAN_BE_TARGETTED(iLocal_43, false);
		PED::SET_PED_NAME_DEBUG(iLocal_43, "POSTBARRY");
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_43, 1862763509);
		ENTITY::SET_ENTITY_COLLISION(iLocal_43, false, false);
		ENTITY::SET_ENTITY_COORDS(iLocal_43, 1);
		unk_0x03D382CB0B44E2FC(iLocal_43, Local_50, 1, 0, 0, 1);
		ENTITY::SET_ENTITY_HEADING(iLocal_43, func_18(1.12f));
		ENTITY::SET_ENTITY_COORDS(iLocal_43, 1);
		TASK::TASK_PLAY_ANIM(iLocal_43, sLocal_44, sLocal_45, 8f, -8f, -1, 9, 0f, false, false, false);
		TASK::TASK_LOOK_AT_ENTITY(iLocal_43, unk_0x9B0761B4C3EB8BC7(), -1, 0, 2);
	}
}

int func_13(int* iParam0, int iParam1, struct<3> Param2, float fParam3, bool bParam4)
{
	int iVar0;
	
	if (!func_17(iParam1))
	{
		iVar0 = func_15(iParam1);
		unk_0x78FCB2E22C41B9D5(iVar0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			if (MISC::IS_BIT_SET(*iParam0))
			{
				PED::DELETE_PED(iParam0);
			}
			*iParam0 = PED::CREATE_PED(26, iVar0, Param2, fParam3, false, false);
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(*iParam0);
			if (iVar0 == joaat("ig_lamardavis"))
			{
				if (PED::GET_PED_DRAWABLE_VARIATION(*iParam0, 3) == 0)
				{
					PED::SET_PED_COMPONENT_VARIATION(*iParam0, 5, 2, 0, 0);
				}
			}
			func_14(*iParam0, iParam1);
			if (bParam4)
			{
				unk_0x74528AC0906CBABE(iVar0);
			}
			return 1;
		}
	}
	return 0;
}

int func_14(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 7;
	if (iParam1 == 19)
	{
		iVar0 = 3;
	}
	else if (iParam1 == 14)
	{
		iVar0 = 4;
	}
	else if (iParam1 == 17)
	{
		iVar0 = 5;
	}
	else
	{
		iVar0 = 7;
		return 0;
	}
	Global_94789[(iVar0 - 3)] = uParam0;
	return 1;
}

int func_15(int iParam0)
{
	if (!func_17(iParam0))
	{
		return func_16(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_16(int iParam0)
{
	return Global_1848[iParam0 /*29*/];
}

bool func_17(int iParam0)
{
	return iParam0 < 3;
}

float func_18(float fParam0)
{
	return (fParam0 * 57.29578f);
}

void func_19()
{
	if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(190.56f, -956.4f, 28.63f, 20f, joaat("prop_protest_table_01"), false))
	{
		iLocal_41 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(190.56f, -956.4f, 28.63f, 20f, joaat("prop_protest_table_01"), false, false, true);
		if (func_25(iLocal_41))
		{
			if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_41))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_41, true, false);
			}
			Local_49 = { 189.5964f, -956.0344f, 29.54f };
			unk_0x03D382CB0B44E2FC(iLocal_41, Local_49, 1, 0, 0, 1);
			ENTITY::SET_ENTITY_HEADING(iLocal_41, func_18(-2.01f));
			ENTITY::SET_ENTITY_COORDS(iLocal_41, 1);
		}
	}
	if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(190.56f, -956.4f, 28.63f, 20f, joaat("prop_chair_08"), false))
	{
		iLocal_40 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(190.56f, -956.4f, 28.63f, 20f, joaat("prop_chair_08"), false, false, true);
		if (func_25(iLocal_40))
		{
			if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_40))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_40, true, false);
			}
			Local_49 = { 190.2574f, -956.3513f, 29.621f };
			unk_0x03D382CB0B44E2FC(iLocal_40, Local_49, 1, 0, 0, 1);
			ENTITY::SET_ENTITY_HEADING(iLocal_40, func_18(-1.68f));
			ENTITY::SET_ENTITY_COORDS(iLocal_40, 1);
		}
	}
	else
	{
		Local_49 = { 190.2574f, -956.3513f, 29.621f };
		func_20(&iLocal_40, joaat("prop_chair_08"), Local_49, func_18(-1.68f));
		unk_0x03D382CB0B44E2FC(iLocal_40, Local_49, 1, 0, 0, 1);
		ENTITY::SET_ENTITY_HEADING(iLocal_40, func_18(-1.68f));
		ENTITY::SET_ENTITY_COORDS(iLocal_40, 1);
	}
	Local_49 = { 192.4462f, -953.5946f, 29.0919f };
	if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(Local_49, 25f, joaat("prop_protest_sign_01"), false))
	{
		iLocal_42 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(Local_49, 25f, joaat("prop_protest_sign_01"), false, false, true);
		if (func_25(iLocal_42))
		{
			if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_42))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_42, true, false);
			}
			Local_49.f_2 = 29.603f;
			unk_0x03D382CB0B44E2FC(iLocal_42, Local_49, 1, 0, 0, 1);
			ENTITY::SET_ENTITY_HEADING(iLocal_42, 23.45f);
		}
	}
	else
	{
		func_20(&iLocal_42, joaat("prop_protest_sign_01"), Local_49, 23.45f);
		unk_0x03D382CB0B44E2FC(iLocal_42, Local_49, 1, 0, 0, 1);
		ENTITY::SET_ENTITY_HEADING(iLocal_42, 23.45f);
	}
}

void func_20(int iParam0, int iParam1, struct<3> Param2, float fParam3)
{
	func_21(iParam0);
	*iParam0 = OBJECT::CREATE_OBJECT(iParam1, Param2, true, true, false);
	ENTITY::SET_ENTITY_HEADING(*iParam0, fParam3);
}

void func_21(int iParam0)
{
	if (MISC::IS_BIT_SET(*iParam0))
	{
		if (AUDIO::PLAY_SOUND_FROM_ENTITY(*iParam0))
		{
			ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(*iParam0, 1, 1);
		}
		PED::GET_PED_BONE_INDEX(iParam0);
	}
}

void func_22(bool bParam0)
{
	if (bParam0)
	{
		func_24(&iLocal_43);
	}
	else
	{
		func_23(&iLocal_43, 1, 0, 1);
	}
	if (func_10(iLocal_41))
	{
		ENTITY::SET_ENTITY_COORDS(iLocal_41, 0);
	}
	if (func_10(iLocal_40))
	{
		ENTITY::SET_ENTITY_COORDS(iLocal_40, 0);
	}
	if (bParam0)
	{
		func_21(&iLocal_40);
		func_21(&iLocal_41);
		func_21(&iLocal_42);
	}
	else
	{
		func_1(&iLocal_40, 0);
		func_1(&iLocal_41, 0);
		func_1(&iLocal_42, 0);
	}
	unk_0x1082C25039B168F8(sLocal_44);
	HUD::CLEAR_ADDITIONAL_TEXT(7, false);
	ENTITY::STOP_ENTITY_ANIM();
}

void func_23(int* iParam0, bool bParam1, int iParam2, int iParam3)
{
	if (MISC::IS_BIT_SET(*iParam0))
	{
		if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(*iParam0))
		{
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(*iParam0, false, 1);
			if (iParam3 == 0)
			{
				TASK::CLEAR_PED_SECONDARY_TASK(*iParam0);
			}
			PED::SET_PED_KEEP_TASK(*iParam0, bParam1);
			if (iParam2 == 1)
			{
				PED::_0x2208438012482A1A(*iParam0, 0);
			}
		}
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(iParam0);
	}
}

void func_24(int* iParam0)
{
	if (MISC::IS_BIT_SET(*iParam0))
	{
		if (!PED::IS_PED_IN_ANY_POLICE_VEHICLE(*iParam0, 0))
		{
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(*iParam0, false, 1);
		}
		if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(*iParam0))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*iParam0, true, false);
		}
		PED::DELETE_PED(iParam0);
	}
}

bool func_25(int iParam0)
{
	if (!MISC::IS_BIT_SET(iParam0))
	{
		return 0;
	}
	return !PED::IS_PED_IN_ANY_POLICE_VEHICLE(iParam0, 0);
}

