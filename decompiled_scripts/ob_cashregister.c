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
	struct<3> Local_19 = { 0, 0, 0 } ;
	int iLocal_20 = 0;
	int iLocal_21 = 0;
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
	if (MISC::SET_BIT())
	{
		if (unk_0xCE990E643CD9D0E5(Global_1389439, 1))
		{
			func_18();
		}
		else
		{
			NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(32, 0, -1);
			func_15(0, -1, 0);
			WEAPON::GET_WEAPONTYPE_GROUP(0);
			iLocal_20 = 1;
		}
	}
	else if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(2))
	{
		func_18();
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		if (iLocal_20 == 1)
		{
			if (func_3())
			{
				func_18();
			}
		}
		if (MISC::IS_BIT_SET(iScriptParam_21))
		{
			if (BRAIN::IS_OBJECT_WITHIN_BRAIN_ACTIVATION_RANGE(iScriptParam_21))
			{
				switch (iLocal_18)
				{
					case 0:
						if (ENTITY::DOES_ENTITY_HAVE_DRAWABLE(iScriptParam_21))
						{
							Local_19 = { NETWORK::NETWORK_ARE_HANDLES_THE_SAME(iScriptParam_21, 1) };
							iLocal_18 = 1;
						}
						break;
					
					case 1:
						if ((OBJECT::HAS_OBJECT_BEEN_BROKEN(iScriptParam_21, 0) && ENTITY::IS_ENTITY_VISIBLE(iScriptParam_21)) && !ENTITY::IS_ENTITY_A_MISSION_ENTITY(iScriptParam_21))
						{
							func_1();
							iLocal_18 = 2;
						}
						break;
					
					case 2:
						break;
				}
			}
			else
			{
				func_18();
			}
		}
		else
		{
			func_18();
		}
	}
}

void func_1()
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	iVar0 = joaat("prop_money_bag_01");
	iVar1 = joaat("pickup_money_med_bag");
	bVar3 = NETWORK::_NETWORK_GET_ROS_PRIVILEGE_25(70, 121);
	if (MISC::SET_BIT())
	{
		iVar0 = joaat("prop_cash_pile_01");
		bVar3 = NETWORK::_NETWORK_GET_ROS_PRIVILEGE_25(50, 101);
		bVar3 = func_2(bVar3, 1);
	}
	unk_0xBE20AB8238688965(&iVar2, 3);
	unk_0xBE20AB8238688965(&iVar2, 4);
	unk_0x78FCB2E22C41B9D5(iVar0);
	while (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		SYSTEM::WAIT(0);
	}
	if (MISC::SET_BIT())
	{
		OBJECT::CREATE_AMBIENT_PICKUP(iVar1, OBJECT::GET_SAFE_PICKUP_COORDS(Local_19, 1.2f, 1.5f), iVar2, bVar3, iVar0, false, false);
	}
	else
	{
		OBJECT::CREATE_PICKUP(iVar1, OBJECT::GET_SAFE_PICKUP_COORDS(Local_19, 1.2f, 1.5f), iVar2, bVar3, false, iVar0);
	}
}

bool func_2(bool bParam0, int iParam1)
{
	float fVar0;
	
	switch (iParam1)
	{
		case 0:
			break;
		
		case 1:
			if (bParam0 > 0)
			{
				fVar0 = (SYSTEM::TO_FLOAT(bParam0) * Global_262145);
				bParam0 = SYSTEM::ROUND(fVar0);
			}
			break;
		
		default:
			break;
	}
	return bParam0;
}

int func_3()
{
	var uVar0;
	
	func_11(&uVar0);
	if (Global_1312872 == 0)
	{
		if (!MISC::SET_BIT())
		{
			return 1;
		}
	}
	if (func_10())
	{
		return 1;
	}
	if (Global_2464493)
	{
		return 1;
	}
	if (func_9())
	{
		return 1;
	}
	if (func_8(159))
	{
		if (!func_7())
		{
			return 1;
		}
	}
	if (func_8(157))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_SESSION_IS_IN_VOICE_SESSION())
	{
		return 1;
	}
	if (func_4() != 0)
	{
		if (INTERIOR::GET_INTERIOR_AT_COORDS(func_4()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_4()
{
	switch (func_6())
	{
		case 0:
			return func_5();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_5()
{
	switch (Global_2464595)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_6()
{
	return Global_30968;
}

bool func_7()
{
	return Global_2451787.f_696;
}

int func_8(int iParam0)
{
	if (unk_0x16F1FCCC54559709(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_9()
{
	return Global_2462250;
}

bool func_10()
{
	return Global_2451787.f_691;
}

void func_11(var uParam0)
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
					func_12(iVar0);
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

void func_12(int iParam0)
{
	struct<3> Var0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	if (unk_0x477FAFFE21935947(1, iParam0, &Var0, 3))
	{
		if (func_14(Var0.f_1, 1, 1))
		{
			iVar1 = PLAYER::GET_PLAYER_PED(Var0.f_1);
			if (MISC::IS_BIT_SET(iVar1))
			{
				if (SYSTEM::VDIST(iVar1, 0))
				{
					iVar2 = ENTITY::GET_ENTITY_MODEL(iVar1, 0);
					if (VEHICLE::REMOVE_VEHICLE_WINDOW(iVar2, Var0.f_2) && NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
					{
						if (func_13(iVar2, &bVar3))
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

int func_13(int iParam0, var uParam1)
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

int func_14(int iParam0, bool bParam1, bool bParam2)
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

int func_15(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_17();
			}
			else
			{
				return 0;
			}
		}
		if (!func_16())
		{
			if (iParam0 == 0)
			{
				if (!MISC::SET_BIT())
				{
					if (!bParam2)
					{
						func_17();
					}
					else
					{
						return 0;
					}
				}
				if (func_10())
				{
					if (!bParam2)
					{
						func_17();
					}
					else
					{
						return 0;
					}
				}
				if (func_8(157))
				{
					if (!bParam2)
					{
						func_17();
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
					func_17();
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
				func_17();
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
			func_17();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_16()
{
	return Global_1312872;
}

void func_17()
{
	ENTITY::STOP_ENTITY_ANIM();
}

void func_18()
{
	ENTITY::STOP_ENTITY_ANIM();
}

