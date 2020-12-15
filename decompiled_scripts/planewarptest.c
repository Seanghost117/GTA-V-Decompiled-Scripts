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
	struct<3> Local_19[2];
	float fLocal_20[2] = { 0f, 0f };
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
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		func_1();
	}
	MISC::SET_MISSION_FLAG(true);
	unk_0x78FCB2E22C41B9D5(joaat("cuban800"));
	while (!ENTITY::DOES_ENTITY_EXIST(joaat("cuban800")))
	{
		SYSTEM::WAIT(0);
	}
	Local_19[0 /*3*/] = { 1169.976f, 3592.572f, 32.6481f };
	Local_19[1 /*3*/] = { 1215.738f, 3586.608f, 33.5131f };
	fLocal_20[0] = 277.7043f;
	fLocal_20[1] = 77.1113f;
	if (!PED::IS_PED_IN_ANY_POLICE_VEHICLE(unk_0x9B0761B4C3EB8BC7(), 0))
	{
		unk_0x03D382CB0B44E2FC(unk_0x9B0761B4C3EB8BC7(), 1220.202f, 3596.281f, 33.259f, 1, 0, 0, 1);
	}
	STREAMING::LOAD_SCENE(1220.202f, 3596.281f, 33.259f);
	iLocal_18 = VEHICLE::CREATE_VEHICLE(joaat("cuban800"), Local_19[0 /*3*/], fLocal_20[0], true, true, false);
	VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_18, 5f);
	unk_0x74528AC0906CBABE(joaat("cuban800"));
	if (!PED::IS_PED_IN_ANY_POLICE_VEHICLE(unk_0x9B0761B4C3EB8BC7(), 0))
	{
		PED::SET_PED_INTO_VEHICLE(unk_0x9B0761B4C3EB8BC7(), iLocal_18, -1);
	}
	while (true)
	{
		func_1();
		SYSTEM::WAIT(0);
	}
}

void func_1()
{
	if (!PED::IS_PED_IN_ANY_POLICE_VEHICLE(unk_0x9B0761B4C3EB8BC7(), 0))
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(unk_0x9B0761B4C3EB8BC7());
	}
	if (MISC::IS_BIT_SET(iLocal_18))
	{
		VEHICLE::DELETE_VEHICLE(&iLocal_18);
	}
	unk_0x74528AC0906CBABE(joaat("cuban800"));
	ENTITY::STOP_ENTITY_ANIM();
}

