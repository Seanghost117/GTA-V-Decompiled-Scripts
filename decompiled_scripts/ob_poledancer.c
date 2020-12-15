#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	struct<3> Local_2 = { 0, 0, 0 } ;
	bool bLocal_3 = 0;
	char* sLocal_4 = NULL;
	int iLocal_5 = 0;
	char* sLocal_6 = NULL;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
#endregion

void __EntryFunction__()
{
	sLocal_4 = "Poledance_01";
	iLocal_5 = joaat("a_f_y_beach_01");
	sLocal_6 = "MISSSTRIP_CLUB";
	if (MISC::IS_BIT_SET(iScriptParam_8))
	{
		ENTITY::SET_ENTITY_COORDS(iScriptParam_8, 1);
		Local_2 = { unk_0x7EC595B99EA7C4B1(iScriptParam_8, 0f, 0f, 0f) };
		bLocal_3 = ENTITY::IS_ENTITY_IN_WATER(iScriptParam_8);
		ENTITY::SET_ENTITY_COLLISION(iScriptParam_8, false, false);
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		if (MISC::IS_BIT_SET(iScriptParam_8))
		{
			if (BRAIN::IS_OBJECT_WITHIN_BRAIN_ACTIVATION_RANGE(iScriptParam_8))
			{
				switch (iLocal_0)
				{
					case 0:
						if (func_5())
						{
							func_4();
							iLocal_0 = 2;
						}
						break;
					
					case 2:
						func_3();
						if (func_2())
						{
							ENTITY::SET_ENTITY_COLLISION(iScriptParam_8, true, false);
							iLocal_0 = 3;
						}
						break;
					
					case 3:
						if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(iLocal_1))
						{
							TASK::TASK_COWER(iLocal_1, -1);
							PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), true);
							PED::SET_PED_KEEP_TASK(iLocal_1, true);
							ENTITY::STOP_ENTITY_ANIM();
						}
						break;
				}
			}
			else
			{
				func_1();
			}
		}
		else
		{
			func_1();
		}
	}
}

void func_1()
{
	if (!PED::IS_PED_IN_ANY_POLICE_VEHICLE(iLocal_1, 0))
	{
		if (!ENTITY::IS_ENTITY_ON_SCREEN(iLocal_1))
		{
			PED::DELETE_PED(&iLocal_1);
		}
		else
		{
			PED::SET_PED_KEEP_TASK(iLocal_1, true);
		}
	}
	ENTITY::STOP_ENTITY_ANIM();
}

int func_2()
{
	struct<3> Var0;
	
	Var0 = { 2f, 2f, 0.5f };
	if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(unk_0x9B0761B4C3EB8BC7()))
	{
		if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(iLocal_1))
		{
			if (ENTITY::IS_ENTITY_AT_ENTITY(unk_0x9B0761B4C3EB8BC7(), iLocal_1, Var0, false, true, 0))
			{
				return 1;
			}
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_1, unk_0x9B0761B4C3EB8BC7(), true))
			{
				return 1;
			}
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(unk_0x9B0761B4C3EB8BC7(), iLocal_1))
			{
				return 1;
			}
		}
		if (PED::IS_PED_PRONE(unk_0x9B0761B4C3EB8BC7()))
		{
			return 1;
		}
	}
	return 0;
}

void func_3()
{
	if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(iLocal_1))
	{
		if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_1, -2017877118) == 7)
		{
			TASK::TASK_PLAY_ANIM(iLocal_1, sLocal_6, sLocal_4, 8f, -8f, -1, 0, 0f, false, false, false);
		}
		else if (ENTITY::HAS_ENTITY_ANIM_FINISHED(iLocal_1, sLocal_6, sLocal_4, 3))
		{
			TASK::TASK_PLAY_ANIM(iLocal_1, sLocal_6, sLocal_4, 8f, -8f, -1, 0, 0f, false, false, false);
		}
		else if (!iLocal_7)
		{
			if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_1, sLocal_6, sLocal_4, 3))
			{
				ENTITY::SET_ENTITY_ANIM_CURRENT_TIME(iLocal_1, sLocal_6, sLocal_4, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f));
				iLocal_7 = 1;
			}
		}
	}
}

void func_4()
{
	if (PED::IS_PED_IN_ANY_POLICE_VEHICLE(iLocal_1, 0))
	{
		iLocal_1 = PED::CREATE_PED(5, iLocal_5, Local_2.x, Local_2.f_1, Local_2.f_2, bLocal_3, true, true);
		PED::SET_PED_RANDOM_COMPONENT_VARIATION(iLocal_1, 0);
		PED::SET_PED_CAN_BE_TARGETTED(iLocal_1, false);
		PED::_0x2208438012482A1A(iLocal_1, 1);
	}
}

int func_5()
{
	unk_0x78FCB2E22C41B9D5(iLocal_5);
	STREAMING::REQUEST_ANIM_DICT(sLocal_6);
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_5) && STREAMING::HAS_ANIM_DICT_LOADED(sLocal_6))
	{
		return 1;
	}
	else
	{
		unk_0x78FCB2E22C41B9D5(iLocal_5);
		STREAMING::REQUEST_ANIM_DICT(sLocal_6);
	}
	return 0;
}

