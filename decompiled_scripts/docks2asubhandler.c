#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	var uLocal_2 = 0;
	struct<2> ScriptParam_0 = { 0, 0 } ;
#endregion

void __EntryFunction__()
{
	float fVar0;
	
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(19))
	{
		func_1();
	}
	iLocal_0 = ScriptParam_3;
	iLocal_1 = ScriptParam_3.f_1;
	while (!unk_0xCE990E643CD9D0E5(uLocal_2, 1))
	{
		if (!unk_0xCE990E643CD9D0E5(uLocal_2, 0))
		{
			if (MISC::IS_BIT_SET(iLocal_0))
			{
				if (ENTITY::GET_ENTITY_COORDS(iLocal_0, false))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_0, false, true);
					ENTITY::SET_ENTITY_COORDS(iLocal_0, 1);
					ENTITY::SET_ENTITY_PROOFS(iLocal_0, true, true, true, true, true, false, false, false);
					if (MISC::IS_BIT_SET(iLocal_1))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_1, false, true);
						ENTITY::SET_ENTITY_COORDS(iLocal_1, 1);
						ENTITY::SET_ENTITY_PROOFS(iLocal_1, true, true, true, true, true, false, false, false);
					}
					unk_0xBE20AB8238688965(&uLocal_2, 0);
				}
			}
		}
		else if (!PED::IS_PED_IN_ANY_POLICE_VEHICLE(unk_0x9B0761B4C3EB8BC7(), 0))
		{
			if (ENTITY::GET_ENTITY_COORDS(iLocal_0, false))
			{
				fVar0 = SYSTEM::VDIST2(NETWORK::NETWORK_ARE_HANDLES_THE_SAME(unk_0x9B0761B4C3EB8BC7(), 1), NETWORK::NETWORK_ARE_HANDLES_THE_SAME(iLocal_0, 1));
				if (fVar0 > 90000f)
				{
					unk_0xBE20AB8238688965(&uLocal_2, 1);
				}
				else if (fVar0 > 40000f && !ENTITY::IS_ENTITY_ON_SCREEN(iLocal_0))
				{
					unk_0xBE20AB8238688965(&uLocal_2, 1);
				}
			}
			else
			{
				unk_0xBE20AB8238688965(&uLocal_2, 1);
			}
		}
		SYSTEM::WAIT(0);
	}
	func_1();
}

void func_1()
{
	STREAMING::REMOVE_ANIM_DICT(&iLocal_0);
	ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&iLocal_1);
	ENTITY::STOP_ENTITY_ANIM();
}

