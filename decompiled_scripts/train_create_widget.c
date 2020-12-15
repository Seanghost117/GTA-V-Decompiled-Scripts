#region Local Var
	int iLocal_0 = 0;
	struct<3> Local_1 = { 0, 0, 0 } ;
	int iLocal_2 = 0;
	float fLocal_3 = 0f;
	bool bLocal_4 = 0;
	int iLocal_5 = 0;
	bool bLocal_6 = 0;
	int iLocal_7 = 0;
#endregion

void __EntryFunction__()
{
	Local_1 = { 613f, 6438f, 31f };
	fLocal_3 = 5f;
	bLocal_4 = true;
	MISC::SET_MISSION_FLAG(true);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		func_1();
	}
	VEHICLE::SET_RANDOM_TRAINS(false);
	VEHICLE::DELETE_ALL_TRAINS();
	if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(unk_0x9B0761B4C3EB8BC7()))
	{
		unk_0x03D382CB0B44E2FC(unk_0x9B0761B4C3EB8BC7(), 626.68f, 6442.31f, 30.88f, 1, 0, 0, 1);
		ENTITY::SET_ENTITY_HEADING(unk_0x9B0761B4C3EB8BC7(), -177f);
		unk_0x4C4FC7841A5FB983(0);
	}
	unk_0x78FCB2E22C41B9D5(joaat("freight"));
	unk_0x78FCB2E22C41B9D5(joaat("freightcar"));
	unk_0x78FCB2E22C41B9D5(joaat("freightgrain"));
	unk_0x78FCB2E22C41B9D5(joaat("freightcont1"));
	unk_0x78FCB2E22C41B9D5(joaat("freightcont2"));
	unk_0x78FCB2E22C41B9D5(joaat("tankercar"));
	unk_0x78FCB2E22C41B9D5(joaat("metrotrain"));
	while ((((((!ENTITY::DOES_ENTITY_EXIST(joaat("freight")) || !ENTITY::DOES_ENTITY_EXIST(joaat("freightcar"))) || !ENTITY::DOES_ENTITY_EXIST(joaat("freightgrain"))) || !ENTITY::DOES_ENTITY_EXIST(joaat("freightcont1"))) || !ENTITY::DOES_ENTITY_EXIST(joaat("freightcont2"))) || !ENTITY::DOES_ENTITY_EXIST(joaat("tankercar"))) || !ENTITY::DOES_ENTITY_EXIST(joaat("metrotrain")))
	{
		SYSTEM::WAIT(0);
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(unk_0x9B0761B4C3EB8BC7()))
		{
			if (iLocal_5)
			{
				if (MISC::IS_BIT_SET(iLocal_0))
				{
					VEHICLE::DELETE_MISSION_TRAIN(&iLocal_0);
				}
				iLocal_0 = VEHICLE::CREATE_MISSION_TRAIN(iLocal_2, Local_1, bLocal_4);
				iLocal_5 = 0;
			}
			if (iLocal_7)
			{
				Local_1 = { CAM::SET_WIDESCREEN_BORDERS() };
				iLocal_7 = 0;
			}
			if (ENTITY::GET_ENTITY_COORDS(iLocal_0, false) && !PED::IS_PED_IN_ANY_POLICE_VEHICLE(iLocal_0, 0))
			{
				VEHICLE::SET_TRAIN_SPEED(iLocal_0, fLocal_3);
				VEHICLE::SET_TRAIN_CRUISE_SPEED(iLocal_0, fLocal_3);
			}
			if (bLocal_6)
			{
				func_1();
			}
		}
	}
}

void func_1()
{
	VEHICLE::SET_RANDOM_TRAINS(true);
	ENTITY::STOP_ENTITY_ANIM();
}

