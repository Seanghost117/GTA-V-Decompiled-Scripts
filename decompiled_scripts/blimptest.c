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
	float fLocal_21 = 0f;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	int iLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	char* sLocal_40 = NULL;
	int iLocal_41 = 0;
	var uLocal_42 = 0;
	int* iLocal_43 = NULL;
	int iLocal_44 = 0;
	int* iLocal_45 = NULL;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
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
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_35 = 3;
	iLocal_41 = joaat("blimp");
	iLocal_44 = joaat("s_m_m_pilot_02");
	iLocal_46 = joaat("buzzard");
	if (PED::REMOVE_SCENARIO_BLOCKING_AREA())
	{
		CAM::DO_SCREEN_FADE_IN(500);
	}
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(18))
	{
		func_18();
	}
	PLAYER::SET_MAX_WANTED_LEVEL(0);
	func_17();
	func_16();
	func_14();
	func_11();
	while (true)
	{
		HUD::SET_TEXT_COLOUR(255, 255, 255, 255);
		HUD::SET_TEXT_SCALE(0.75f, 0.9f);
		HUD::SET_TEXT_WRAP(0f, 1f);
		func_10(0.05f, 0.63f, "PLCHLD_MISS", 0);
		HUD::SET_TEXT_COLOUR(255, 255, 255, 255);
		HUD::SET_TEXT_SCALE(0.4f, 0.45f);
		HUD::SET_TEXT_WRAP(0f, 1f);
		func_10(0.05f, 0.7f, "PLCHLD_PASS", 0);
		func_1();
		SYSTEM::WAIT(0);
	}
}

void func_1()
{
	struct<3> Var0;
	
	if (MISC::IS_BIT_SET(sLocal_40))
	{
		if ((PED::IS_PED_IN_ANY_POLICE_VEHICLE(sLocal_40, 0) || ENTITY::GET_ENTITY_HEALTH(sLocal_40) <= 0) || VEHICLE::GET_VEHICLE_ENGINE_HEALTH(sLocal_40) <= 0f)
		{
			func_9(&uLocal_42);
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(sLocal_40))
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(sLocal_40);
			}
			if (iLocal_47 == 1)
			{
				Var0 = { NETWORK::NETWORK_ARE_HANDLES_THE_SAME(sLocal_40, 0) };
				func_8(Var0);
			}
			if (iLocal_47 == 1)
			{
				func_7(&iLocal_43);
				func_4(&sLocal_40);
			}
			else
			{
				func_3(&iLocal_43, 1, 0, 1);
				func_2(&sLocal_40);
			}
		}
		else if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(sLocal_40))
		{
			VEHICLE::SET_PLAYBACK_SPEED(sLocal_40, 0.25f);
		}
	}
}

void func_2(char* sParam0)
{
	if (MISC::IS_BIT_SET(*sParam0))
	{
		PED::IS_PED_IN_ANY_POLICE_VEHICLE(*sParam0, 0);
		if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(*sParam0) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*sParam0, true))
		{
			STREAMING::REMOVE_ANIM_DICT(sParam0);
		}
	}
}

void func_3(int* iParam0, bool bParam1, int iParam2, int iParam3)
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

void func_4(char* sParam0)
{
	if (MISC::IS_BIT_SET(*sParam0))
	{
		if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(*sParam0))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*sParam0, true, false);
		}
		if (func_6(*sParam0))
		{
			if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(*sParam0) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*sParam0, true))
			{
				if (func_5(unk_0x9B0761B4C3EB8BC7()))
				{
					if (unk_0xE0B3BC41DDA88DF0(unk_0x9B0761B4C3EB8BC7(), *sParam0, 0))
					{
						STREAMING::REMOVE_ANIM_DICT(sParam0);
						return;
					}
				}
				VEHICLE::DELETE_VEHICLE(sParam0);
			}
		}
		else
		{
			if (func_5(unk_0x9B0761B4C3EB8BC7()))
			{
				if (unk_0xE0B3BC41DDA88DF0(unk_0x9B0761B4C3EB8BC7(), *sParam0, 0))
				{
					STREAMING::REMOVE_ANIM_DICT(sParam0);
					return;
				}
			}
			VEHICLE::DELETE_VEHICLE(sParam0);
		}
	}
}

int func_5(int iParam0)
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

int func_6(int iParam0)
{
	if (func_5(iParam0))
	{
		if (ENTITY::GET_ENTITY_COORDS(iParam0, false))
		{
			if (!FIRE::IS_ENTITY_ON_FIRE(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_7(int* iParam0)
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

void func_8(struct<3> Param0)
{
	int iVar0;
	int iVar1;
	struct<3> Var2[12];
	
	iVar1 = 12;
	Var2[0 /*3*/] = { 5f, 0f, 0f };
	Var2[1 /*3*/] = { 0f, 5f, 0f };
	Var2[2 /*3*/] = { 0f, 0f, 5f };
	Var2[3 /*3*/] = { 5f, 5f, 0f };
	Var2[4 /*3*/] = { 5f, 0f, 5f };
	Var2[5 /*3*/] = { 0f, 5f, 5f };
	Var2[6 /*3*/] = { 20f, 0f, 0f };
	Var2[7 /*3*/] = { 0f, 20f, 0f };
	Var2[8 /*3*/] = { 0f, 0f, 20f };
	Var2[9 /*3*/] = { 20f, 20f, 0f };
	Var2[10 /*3*/] = { 20f, 0f, 20f };
	Var2[11 /*3*/] = { 0f, 20f, 20f };
	FIRE::ADD_EXPLOSION(Param0, 8, 1f, true, false, 1f, false);
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		FIRE::ADD_EXPLOSION(Param0 + Var2[iVar0 /*3*/], 8, 1f, true, false, 1f, false);
		iVar0++;
	}
}

void func_9(var uParam0)
{
	if (SYSTEM::VMAG(*uParam0))
	{
		HUD::SET_BLIP_ROUTE(*uParam0, false);
		unk_0x93370FA10F15BE44(uParam0);
	}
}

void func_10(char* sParam0, float fParam1, bool bParam2, int iParam3)
{
	NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(bParam2);
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam0, fParam1, iParam3);
}

void func_11()
{
	func_2(&iLocal_45);
	unk_0x78FCB2E22C41B9D5(iLocal_46);
	while (!ENTITY::DOES_ENTITY_EXIST(iLocal_46))
	{
		SYSTEM::WAIT(0);
	}
	if (func_6(sLocal_40))
	{
		iLocal_45 = VEHICLE::CREATE_VEHICLE(iLocal_46, unk_0x7EC595B99EA7C4B1(sLocal_40, 50f, 0f, 15f), 0f, true, true, false);
		VEHICLE::SET_HELI_BLADES_FULL_SPEED(iLocal_45);
		func_12(iLocal_45, sLocal_40);
		if (func_5(unk_0x9B0761B4C3EB8BC7()))
		{
			PED::SET_PED_INTO_VEHICLE(unk_0x9B0761B4C3EB8BC7(), iLocal_45, -1);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
			unk_0x4C4FC7841A5FB983(0f);
			MISC::CLEAR_AREA(NETWORK::NETWORK_ARE_HANDLES_THE_SAME(unk_0x9B0761B4C3EB8BC7(), 1), 500f, true, false, false, false);
		}
	}
	unk_0x74528AC0906CBABE(iLocal_46);
}

void func_12(int* iParam0, int* iParam1)
{
	float fVar0;
	
	fVar0 = func_13(NETWORK::NETWORK_ARE_HANDLES_THE_SAME(iParam0, 1), NETWORK::NETWORK_ARE_HANDLES_THE_SAME(iParam1, 1), 1);
	ENTITY::SET_ENTITY_HEADING(iParam0, fVar0);
}

float func_13(struct<2> Param0, bool bParam1, struct<2> Param2, bool bParam3, int iParam4)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar1 = (Param2 - Param0);
	fVar2 = (Param2.f_1 - Param0.f_1);
	if (fVar2 != 0f)
	{
		fVar0 = MISC::ATAN2(fVar1, fVar2);
	}
	else if (fVar1 < 0f)
	{
		fVar0 = -90f;
	}
	else
	{
		fVar0 = 90f;
	}
	if (iParam4 == 1)
	{
		fVar0 = (fVar0 * -1f);
		if (fVar0 < 0f)
		{
			fVar0 = (fVar0 + 360f);
		}
	}
	return fVar0;
}

void func_14()
{
	func_9(&uLocal_42);
	if (func_6(sLocal_40))
	{
		uLocal_42 = func_15(sLocal_40, 1, 5);
	}
}

bool func_15(int iParam0, bool bParam1, int iParam2)
{
	bool bVar0;
	
	bVar0 = false;
	if (func_5(iParam0))
	{
		bVar0 = TASK::IS_PED_SPRINTING(iParam0);
		HUD::SET_BLIP_AS_FRIENDLY(bVar0, bParam1);
		HUD::SET_BLIP_PRIORITY(bVar0, iParam2);
		HUD::SET_BLIP_SCALE(bVar0, 1f);
	}
	return bVar0;
}

void func_16()
{
	unk_0x78FCB2E22C41B9D5(iLocal_44);
	while (!ENTITY::DOES_ENTITY_EXIST(iLocal_44))
	{
		SYSTEM::WAIT(0);
	}
	if (func_6(sLocal_40))
	{
		iLocal_43 = PED::CREATE_PED_INSIDE_VEHICLE(sLocal_40, 26, iLocal_44, -1, true, true);
		if (func_5(iLocal_43))
		{
			PED::_0x2208438012482A1A(iLocal_43, 1);
			PLAYER::SET_PLAYER_VEHICLE_DEFENSE_MODIFIER(iLocal_43, 1.653532E-43f, 0);
			PLAYER::SET_PLAYER_VEHICLE_DEFENSE_MODIFIER(iLocal_43, 4.063766E-44f, 0);
			PLAYER::SET_PLAYER_VEHICLE_DEFENSE_MODIFIER(iLocal_43, 1.625506E-43f, 0);
		}
	}
	if (func_6(sLocal_40))
	{
		VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(sLocal_40, 1, "Blimp_City", true);
	}
	unk_0x74528AC0906CBABE(iLocal_44);
}

void func_17()
{
	struct<3> Var0;
	
	if (func_6(sLocal_40) && VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(sLocal_40))
	{
		VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(sLocal_40);
	}
	func_9(&uLocal_42);
	func_7(&iLocal_43);
	func_4(&sLocal_40);
	unk_0x78FCB2E22C41B9D5(iLocal_41);
	VEHICLE::REQUEST_VEHICLE_RECORDING(1, "Blimp_City");
	while (!ENTITY::DOES_ENTITY_EXIST(iLocal_41) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(1, "Blimp_City"))
	{
		SYSTEM::WAIT(0);
	}
	Var0 = { VEHICLE::GET_ROTATION_OF_VEHICLE_RECORDING_ID_AT_TIME(VEHICLE::GET_VEHICLE_RECORDING_ID(1, "Blimp_City"), 0f) };
	sLocal_40 = VEHICLE::CREATE_VEHICLE(iLocal_41, VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(VEHICLE::GET_VEHICLE_RECORDING_ID(1, "Blimp_City"), 0f), Var0.f_2, true, true, false);
	unk_0x74528AC0906CBABE(iLocal_41);
}

void func_18()
{
	if (func_6(sLocal_40) && VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(sLocal_40))
	{
		VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(sLocal_40);
	}
	VEHICLE::REMOVE_VEHICLE_RECORDING(1, "Blimp_city");
	func_9(&uLocal_42);
	func_3(&iLocal_43, 1, 0, 1);
	func_2(&sLocal_40);
	func_2(&iLocal_45);
	unk_0x74528AC0906CBABE(iLocal_44);
	unk_0x74528AC0906CBABE(iLocal_41);
	unk_0x74528AC0906CBABE(iLocal_46);
	PLAYER::SET_MAX_WANTED_LEVEL(6);
	ENTITY::STOP_ENTITY_ANIM();
}

