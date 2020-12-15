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
	var uLocal_50 = 0;
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
	struct<11> Local_61 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_62 = 0;
	struct<3> Local_63[32];
	bool bLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	struct<21> Local_73 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	fLocal_28 = 0f;
	fLocal_32 = -0.0375f;
	fLocal_33 = 0.17f;
	iLocal_36 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	iLocal_69 = 20;
	if (MISC::SET_BIT() && func_71(PLAYER::PLAYER_ID(), 0, 1))
	{
		func_64(ScriptParam_73);
	}
	else
	{
		func_60();
	}
	while (true)
	{
		func_59();
		if (func_48() || func_44(9))
		{
			func_60();
		}
		if (STATS::STAT_SET_INT())
		{
			func_60();
		}
		switch (func_43(NETWORK::PARTICIPANT_ID_TO_INT()))
		{
			case 0:
				if (func_42() == 1)
				{
					func_41();
					Local_63[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/] = 1;
				}
				else if (func_42() == 4)
				{
					Local_63[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/] = 3;
				}
				break;
			
			case 1:
				if (func_42() == 1)
				{
					func_39();
				}
				else if (func_42() == 4)
				{
					Local_63[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/] = 3;
				}
				break;
			
			case 3:
				func_37(&(Local_61.f_10));
				if (func_36(&(Local_61.f_10)))
				{
					Local_63[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/] = 4;
				}
				break;
			
			case 2:
				Local_63[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/] = 4;
			
			case 4:
				func_60();
				break;
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			switch (func_42())
			{
				case 0:
					if (func_35())
					{
						if (func_8())
						{
							Local_61 = 1;
						}
					}
					break;
				
				case 1:
					func_7();
					func_6();
					if (func_1())
					{
						Local_61 = 4;
					}
					break;
				
				case 4:
					break;
				}
		}
	}
}

int func_1()
{
	if (func_2())
	{
		return 1;
	}
	return 0;
}

int func_2()
{
	if (Local_61.f_9 == 0)
	{
		if (!func_4(Local_61.f_2))
		{
			return 1;
		}
		else if (func_3(Local_61.f_3))
		{
			return 1;
		}
		else
		{
			if (iLocal_72 == 1)
			{
				if (unk_0xCE990E643CD9D0E5(Local_61.f_1, 0))
				{
					return 1;
				}
			}
			if (!unk_0xE0B3BC41DDA88DF0(NETWORK::NET_TO_PED(Local_61.f_3), unk_0x770D3B2B4702434A(Local_61.f_2), 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_3(int iParam0)
{
	if (HUD::DOES_BLIP_EXIST(iParam0))
	{
		return STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(NETWORK::NET_TO_PED(iParam0));
	}
	return 1;
}

int func_4(int iParam0)
{
	if (HUD::DOES_BLIP_EXIST(iParam0))
	{
		return !func_5(unk_0x770D3B2B4702434A(iParam0));
	}
	return 0;
}

int func_5(int iParam0)
{
	if (MISC::IS_BIT_SET(iParam0))
	{
		if (PED::IS_PED_IN_ANY_POLICE_VEHICLE(iParam0, 0))
		{
			return 1;
		}
		else if (!ENTITY::GET_ENTITY_COORDS(iParam0, false))
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_6()
{
	switch (Local_61.f_9)
	{
		case 0:
			break;
		
		case 1:
			break;
	}
}

void func_7()
{
	int iVar0;
	bool bVar1;
	int iVar2;
	
	if (iLocal_71 == 0)
	{
		iLocal_72 = 0;
		unk_0xBE20AB8238688965(&(Local_61.f_1), 0);
	}
	if (func_4(Local_61.f_2))
	{
		iVar0 = 1;
	}
	if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_71)))
	{
		bVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_71));
		iVar2 = PLAYER::GET_PLAYER_PED(bVar1);
		if (func_71(bVar1, 1, 1))
		{
			if (unk_0xCE990E643CD9D0E5(Local_61.f_1, 0))
			{
				if (iVar0 == 1)
				{
					if (ENTITY::IS_ENTITY_AT_ENTITY(iVar2, unk_0x770D3B2B4702434A(Local_61.f_2), 250f, 250f, 250f, false, true, 0))
					{
						VEHICLE::IS_VEHICLE_DRIVEABLE(&(Local_61.f_1), false);
					}
				}
				else
				{
					VEHICLE::IS_VEHICLE_DRIVEABLE(&(Local_61.f_1), false);
				}
			}
		}
	}
	iLocal_71++;
	if (iLocal_71 == NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		iLocal_71 = 0;
		iLocal_72 = 1;
	}
}

int func_8()
{
	if (NETWORK::CAN_REGISTER_MISSION_ENTITIES(1, 1, 0, 0))
	{
		if (func_34(Local_61.f_4) && func_34(Local_61.f_5))
		{
			if (func_12() && func_9())
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_9()
{
	bool bVar0;
	
	if ((!HUD::DOES_BLIP_EXIST(Local_61.f_3) && func_34(Local_61.f_5)) && HUD::DOES_BLIP_EXIST(Local_61.f_2))
	{
		if (func_4(Local_61.f_2))
		{
			if (func_11(&(Local_61.f_3), Local_61.f_2, 22, Local_61.f_5, -1, 1, 1, 1))
			{
				PED::SET_PED_RANDOM_COMPONENT_VARIATION(NETWORK::NET_TO_PED(Local_61.f_3), 0);
				if (func_10())
				{
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(NETWORK::NET_TO_PED(Local_61.f_3), Global_1575008);
				}
				else
				{
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(NETWORK::NET_TO_PED(Local_61.f_3), Global_1575011);
				}
				PED::SET_PED_KEEP_TASK(NETWORK::NET_TO_PED(Local_61.f_3), true);
				if (func_10())
				{
					bVar0 = NETWORK::_NETWORK_GET_ROS_PRIVILEGE_25(0, 10);
					if (bVar0 < 5)
					{
						WEAPON::GIVE_DELAYED_WEAPON_TO_PED(NETWORK::NET_TO_PED(Local_61.f_3), joaat("weapon_pistol"), 25000, func_10());
					}
					else if (bVar0 > 6)
					{
						WEAPON::GIVE_DELAYED_WEAPON_TO_PED(NETWORK::NET_TO_PED(Local_61.f_3), joaat("weapon_microsmg"), 25000, func_10());
					}
					else
					{
						WEAPON::GIVE_DELAYED_WEAPON_TO_PED(NETWORK::NET_TO_PED(Local_61.f_3), joaat("weapon_pumpshotgun"), 25000, func_10());
					}
				}
				bVar0 = NETWORK::_NETWORK_GET_ROS_PRIVILEGE_25(0, 10);
				if (bVar0 == 0 || bVar0 == 1)
				{
					PED::SET_PED_COMBAT_ABILITY(NETWORK::NET_TO_PED(Local_61.f_3), 0);
				}
				else if ((bVar0 == 2 || bVar0 == 3) || bVar0 == 4)
				{
					PED::SET_PED_COMBAT_ABILITY(NETWORK::NET_TO_PED(Local_61.f_3), 2);
				}
				else
				{
					PED::SET_PED_COMBAT_ABILITY(NETWORK::NET_TO_PED(Local_61.f_3), 1);
				}
				bVar0 = NETWORK::_NETWORK_GET_ROS_PRIVILEGE_25(0, 4);
				if (bVar0 == 0)
				{
					PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_61.f_3), 5, true);
				}
				else if (bVar0 == 1)
				{
					PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_61.f_3), 17, true);
				}
				else if (bVar0 == 2)
				{
					PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_61.f_3), 13, true);
				}
				if (func_10())
				{
					PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_61.f_3), 20, true);
				}
				if (func_10())
				{
					PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_61.f_3), 2, true);
				}
				bVar0 = NETWORK::_NETWORK_GET_ROS_PRIVILEGE_25(0, 4);
				if (bVar0 == 0)
				{
					PED::SET_PED_COMBAT_MOVEMENT(NETWORK::NET_TO_PED(Local_61.f_3), 2);
				}
				else if (bVar0 == 1)
				{
					PED::SET_PED_COMBAT_MOVEMENT(NETWORK::NET_TO_PED(Local_61.f_3), 1);
				}
				else if (bVar0 == 2)
				{
					PED::SET_PED_COMBAT_MOVEMENT(NETWORK::NET_TO_PED(Local_61.f_3), 3);
				}
				PED::_0x49E50BDB8BA4DAB2(NETWORK::NET_TO_PED(Local_61.f_3), true);
				PED::SET_PED_GET_OUT_UPSIDE_DOWN_VEHICLE(NETWORK::NET_TO_PED(Local_61.f_3), true);
				PLAYER::SET_PLAYER_VEHICLE_DEFENSE_MODIFIER(NETWORK::NET_TO_PED(Local_61.f_3), 4.063766E-44f, 1);
				PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(NETWORK::NET_TO_PED(Local_61.f_3), 3);
				CAM::IS_AIM_CAM_ACTIVE(NETWORK::NET_TO_PED(Local_61.f_3), SYSTEM::ROUND((200f * Global_262145.f_154)), 0);
				AUDIO::SET_VEHICLE_RADIO_LOUD(unk_0x770D3B2B4702434A(Local_61.f_2), true);
				VEHICLE::SET_DISABLE_PRETEND_OCCUPANTS(unk_0x770D3B2B4702434A(Local_61.f_2), true);
				func_41();
				AUDIO::STOP_SCRIPTED_CONVERSATION(NETWORK::NET_TO_PED(Local_61.f_3), iLocal_65);
				unk_0x74528AC0906CBABE(Local_61.f_5);
			}
		}
	}
	if (!HUD::DOES_BLIP_EXIST(Local_61.f_3))
	{
		return 0;
	}
	return 1;
}

int func_10()
{
	if (unk_0xCE990E643CD9D0E5(NETWORK::_NETWORK_GET_ROS_PRIVILEGE_25(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

int func_11(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7)
{
	if (!NETWORK::CAN_REGISTER_MISSION_PEDS(1))
	{
		return 0;
	}
	if (!HUD::DOES_BLIP_EXIST(iParam1))
	{
		return 0;
	}
	if (!ENTITY::GET_ENTITY_COORDS(unk_0x770D3B2B4702434A(iParam1), false))
	{
		return 0;
	}
	*uParam0 = NETWORK::PED_TO_NET(PED::CREATE_PED_INSIDE_VEHICLE(unk_0x770D3B2B4702434A(iParam1), iParam2, iParam3, iParam4, bParam6, bParam5));
	if (HUD::DOES_BLIP_EXIST(*uParam0))
	{
		ENTITY::_SET_ENTITY_SOMETHING(NETWORK::NET_TO_PED(*uParam0), bParam7);
		if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(NETWORK::NET_TO_PED(*uParam0)))
		{
			if (bParam5)
			{
				NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, true);
			}
		}
		return 1;
	}
	return 0;
}

int func_12()
{
	struct<3> Var0;
	float fVar1;
	
	if (!HUD::DOES_BLIP_EXIST(Local_61.f_2))
	{
		if (func_34(Local_61.f_4))
		{
			if (func_16(&Var0, &fVar1))
			{
				if (func_13(&(Local_61.f_2), Local_61.f_4, Var0, fVar1, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
				{
					VEHICLE::SET_VEHICLE_ENGINE_ON(unk_0x770D3B2B4702434A(Local_61.f_2), true, true, false);
					VEHICLE::SET_VEHICLE_IS_WANTED(unk_0x770D3B2B4702434A(Local_61.f_2), true);
					VEHICLE::SET_VEHICLE_IS_STOLEN(unk_0x770D3B2B4702434A(Local_61.f_2), true);
					AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(unk_0x770D3B2B4702434A(Local_61.f_2), "JOYRIDER_GROUP", 0f);
					unk_0x74528AC0906CBABE(Local_61.f_4);
				}
			}
		}
	}
	if (!HUD::DOES_BLIP_EXIST(Local_61.f_2))
	{
		return 0;
	}
	return 1;
}

int func_13(var uParam0, int iParam1, struct<3> Param2, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
{
	float fVar0;
	int iVar1;
	
	if (!unk_0x003F998A2839DD5E(iParam1))
	{
		return 0;
	}
	if (!NETWORK::CAN_REGISTER_MISSION_VEHICLES(1))
	{
		return 0;
	}
	fVar0 = 1.5f;
	if (iParam1 == joaat("bombushka"))
	{
		fVar0 = 20f;
	}
	if (bParam9)
	{
		MISC::CLEAR_AREA_OF_VEHICLES(Param2, fVar0, false, false, false, false, false, false);
	}
	iVar1 = VEHICLE::CREATE_VEHICLE(iParam1, Param2, fParam3, bParam5, bParam4, bParam12);
	if (MISC::IS_BIT_SET(iVar1))
	{
		*uParam0 = NETWORK::VEH_TO_NET(iVar1);
		Global_2540384.f_6583 = iVar1;
		if (HUD::DOES_BLIP_EXIST(*uParam0))
		{
			if (bParam13)
			{
				NETWORK::_NETWORK_SET_ENTITY_INVISIBLE_TO_NETWORK(iVar1, true);
			}
			ENTITY::_SET_ENTITY_SOMETHING(iVar1, bParam8);
			if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(iVar1))
			{
				if (bParam6)
				{
					NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, true);
				}
				else
				{
					NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, false);
				}
				if (bParam11)
				{
					NETWORK::_SET_NETWORK_ID_SYNC_TO_PLAYER(*uParam0, PLAYER::PLAYER_ID(), true);
				}
			}
			VEHICLE::SET_VEHICLE_IS_STOLEN(iVar1, bParam7);
			VEHICLE::_0xB2E0C0D6922D31F2(iVar1, true);
			if (bParam10)
			{
				VEHICLE::SET_CAR_BOOT_OPEN(iVar1);
				VEHICLE::SET_VEHICLE_DOOR_CONTROL(iVar1, 5, 5, 1f);
			}
			func_14(Param2, fParam3, iParam1, iVar1);
			return 1;
		}
	}
	return 0;
}

void func_14(struct<3> Param0, float fParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_15(PLAYER::PLAYER_ID(), Param0, iParam2) > -1)
	{
		if ((Global_2405074.f_2914[1 /*6*/].f_5 == iParam3 && Global_2405074.f_2914[1 /*6*/].f_4 == iParam2) && SYSTEM::VDIST(Global_2405074.f_2914[1 /*6*/], Param0) < 0.5f)
		{
			return;
		}
		iVar0 = 0;
		while (iVar0 < 2)
		{
			if (iVar0 < 1)
			{
				Global_2405074.f_2914[iVar0 /*6*/] = { Global_2405074.f_2914[iVar0 + 1 /*6*/] };
			}
			iVar0++;
		}
		Global_2405074.f_2914[1 /*6*/] = { Param0 };
		Global_2405074.f_2914[1 /*6*/].f_3 = fParam1;
		Global_2405074.f_2914[1 /*6*/].f_4 = iParam2;
		Global_2405074.f_2914[1 /*6*/].f_5 = iParam3;
	}
}

int func_15(bool bParam0, struct<3> Param1, int iParam2)
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	
	iVar0 = bParam0;
	if (iVar0 > -1)
	{
		iVar1 = 0;
		while (iVar1 < 2)
		{
			if (Global_2417956.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4 == iParam2)
			{
				Var2 = { Param1 };
				if (ENTITY::IS_ENTITY_PLAYING_ANIM((Global_2417956.f_461[iVar0 /*11*/][iVar1 /*5*/].f_2 - Var2.f_2)) < 2f)
				{
					Var2.f_2 = Global_2417956.f_461[iVar0 /*11*/][iVar1 /*5*/].f_2;
				}
				if (SYSTEM::VDIST(Global_2417956.f_461[iVar0 /*11*/][iVar1 /*5*/], Var2) < 0.5f)
				{
					return iVar1;
				}
			}
			iVar1++;
		}
	}
	return -1;
}

bool func_16(int iParam0, float* fParam1)
{
	bool bVar0;
	int iVar1;
	var uVar2;
	
	if (!bVar0)
	{
		if (VEHICLE::_0xA4822F1CF23F4810(&(Local_61.f_6), iParam0, &uVar2, 0f, 180f, 40f, 0, 1, 1))
		{
			PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_WITH_HEADING(*iParam0, 1, iParam0, fParam1, &iVar1, 4, 3f, 0f);
			if (iVar1 >= 1 || MISC::COMPARE_STRINGS(*iParam0) == -289320599)
			{
				if (HUD::SET_BLIP_NAME_FROM_TEXT_FILE(-1367.557f, -3220.598f, 12.9448f, Local_61.f_6, 1) >= 600f && HUD::SET_BLIP_NAME_FROM_TEXT_FILE(750f, -3200f, 6f, Local_61.f_6, 1) >= 700f)
				{
					if (HUD::SET_BLIP_NAME_FROM_TEXT_FILE(func_33(PLAYER::PLAYER_ID()), *iParam0, 1) <= (250f - 50f))
					{
						if (iLocal_70 <= 5)
						{
							if (func_17(*iParam0, 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
							{
								bVar0 = true;
							}
						}
						else
						{
							Local_61 = 4;
						}
					}
				}
			}
		}
	}
	if (!bVar0)
	{
		iLocal_69 += 4;
		if (iLocal_69 >= 80)
		{
			iLocal_69 = 20;
			iLocal_70++;
		}
	}
	return bVar0;
}

int func_17(struct<3> Param0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5, bool bParam6, int iParam7, float fParam8, bool bParam9, int iParam10, bool bParam11, float fParam12, bool bParam13, float fParam14, bool bParam15, bool bParam16)
{
	Global_2405074.f_2 = 0;
	if (fParam1 > 0f)
	{
		if (VEHICLE::IS_ANY_VEHICLE_NEAR_POINT(Param0, fParam1))
		{
			return 0;
		}
	}
	if (fParam2 > 0f)
	{
		if (PED::IS_ANY_PED_NEAR_POINT(Param0.x, Param0.f_1, (Param0.f_2 + 1f), fParam2) || PED::IS_ANY_PED_NEAR_POINT(Param0, fParam2))
		{
			return 0;
		}
	}
	if (fParam3 > 0f)
	{
		if (OBJECT::IS_ANY_OBJECT_NEAR_POINT(Param0, fParam3, bParam16))
		{
			return 0;
		}
	}
	Global_2405074.f_2++;
	if (bParam11)
	{
		if (FIRE::GET_NUMBER_OF_FIRES_IN_RANGE(Param0, 2.5f) > 0)
		{
			return 0;
		}
	}
	Global_2405074.f_2++;
	if (fParam12 > 0f)
	{
		if (func_26(Param0, fParam12, 1, 1, bParam13, bParam15, bParam9, bParam13))
		{
			return 0;
		}
	}
	Global_2405074.f_2++;
	if (bParam6)
	{
		if (fParam4 > 0f)
		{
			if (func_18(Param0, fParam4, iParam5, iParam7, fParam8, bParam9, iParam10, fParam14, bParam15))
			{
				return 0;
			}
		}
	}
	Global_2405074.f_2++;
	return 1;
}

int func_18(struct<3> Param0, float fParam1, int iParam2, int iParam3, float fParam4, bool bParam5, int iParam6, float fParam7, bool bParam8)
{
	int iVar0;
	bool bVar1;
	float fVar2;
	
	if (iParam2 && !bParam5)
	{
		if (func_71(PLAYER::PLAYER_ID(), 1, 1))
		{
			if (!PED::REMOVE_SCENARIO_BLOCKING_AREA())
			{
				fVar2 = fParam4;
				if (fParam7 > 0f)
				{
					fVar2 = fParam7;
				}
				if (HUD::SET_BLIP_NAME_FROM_TEXT_FILE(func_23(PLAYER::PLAYER_ID()), Param0, 1) <= (fVar2 + fParam1))
				{
					if (CAM::IS_SPHERE_VISIBLE(Param0, fParam1))
					{
						return 1;
					}
				}
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		bVar1 = iVar0;
		if (func_71(bVar1, 1, 1))
		{
			if (!func_20(bVar1, 0) && NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), bVar1))
			{
				if (iParam2 == 1 || (iParam2 == 0 && bVar1 != PLAYER::PLAYER_ID()))
				{
					if ((func_19(bVar1) || !bParam8) && !Global_2425869[bVar1 /*443*/].f_263)
					{
						fVar2 = fParam4;
						if (fParam7 > 0f)
						{
							if (!unk_0x6CC163E30ECE0790(bVar1) == -1)
							{
								if (unk_0x6CC163E30ECE0790(bVar1) == unk_0x6CC163E30ECE0790(PLAYER::PLAYER_ID()))
								{
									fVar2 = fParam7;
								}
							}
						}
						if (!bParam5)
						{
							if ((iParam3 || (iParam3 == 0 && unk_0x6CC163E30ECE0790(bVar1) != unk_0x6CC163E30ECE0790(PLAYER::PLAYER_ID()))) || unk_0x6CC163E30ECE0790(bVar1) == -1)
							{
								if (HUD::SET_BLIP_NAME_FROM_TEXT_FILE(func_23(bVar1), Param0, 1) <= (fVar2 + fParam1))
								{
									if (NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(bVar1, Param0, fParam1))
									{
										return 1;
									}
								}
							}
						}
						else if (unk_0x6CC163E30ECE0790(bVar1) != iParam6 || unk_0x6CC163E30ECE0790(bVar1) == -1)
						{
							if (HUD::SET_BLIP_NAME_FROM_TEXT_FILE(func_23(bVar1), Param0, 1) <= (fVar2 + fParam1))
							{
								if (NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(bVar1, Param0, fParam1))
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_19(bool bParam0)
{
	if (ENTITY::IS_ENTITY_VISIBLE_TO_SCRIPT(PLAYER::GET_PLAYER_PED(bParam0)) || Global_2425869[bParam0 /*443*/].f_249)
	{
		return 1;
	}
	return 0;
}

bool func_20(bool bParam0, int iParam1)
{
	bool bVar0;
	
	if (bParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_21(-1, 0) == 8;
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

int func_21(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_22();
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

int func_22()
{
	return Global_1312763;
}

Vector3 func_23(bool bParam0)
{
	int iVar0;
	
	iVar0 = bParam0;
	if ((func_25() && Global_1590682[iVar0 /*883*/].f_854) && !func_24(Global_1590682[iVar0 /*883*/].f_855))
	{
		return Global_1590682[iVar0 /*883*/].f_855;
	}
	return func_33(bParam0);
}

int func_24(struct<3> Param0)
{
	if ((Param0.x == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

var func_25()
{
	return Global_2451787.f_18;
}

int func_26(struct<3> Param0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, var uParam7)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		bVar1 = iVar0;
		if ((iParam6 == 1 && PLAYER::PLAYER_ID() != bVar1) || iParam6 == 0)
		{
			if (func_71(bVar1, bParam2, bParam3))
			{
				if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), bVar1))
				{
					if (!bParam5 || (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(PLAYER::GET_PLAYER_PED(bVar1)) && func_19(bVar1)))
					{
						if ((!bParam4 || (bParam4 == 1 && unk_0x6CC163E30ECE0790(PLAYER::PLAYER_ID()) != unk_0x6CC163E30ECE0790(bVar1))) || unk_0x6CC163E30ECE0790(PLAYER::PLAYER_ID()) == -1)
						{
							if (((unk_0x6CC163E30ECE0790(PLAYER::PLAYER_ID()) == -1 && uParam7) && bParam4) && func_27(bVar1))
							{
							}
							else if (MISC::IS_BIT_SET(PLAYER::GET_PLAYER_PED(bVar1)))
							{
								if (HUD::SET_BLIP_NAME_FROM_TEXT_FILE(func_33(bVar1), Param0, 1) < fParam1)
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_27(bool bParam0)
{
	if (func_32(PLAYER::PLAYER_ID(), bParam0))
	{
		return 1;
	}
	Global_2515173 = { func_31(bParam0) };
	if (NETWORK::NETWORK_IS_FRIEND_HANDLE_ONLINE(&Global_2515173))
	{
		return 1;
	}
	if (func_28(PLAYER::PLAYER_ID(), bParam0))
	{
		return 1;
	}
	return 0;
}

int func_28(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_30(iParam0);
	if (!iVar0 == func_29())
	{
		if (iVar0 == func_30(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_29()
{
	return -1;
}

int func_30(int iParam0)
{
	if (iParam0 != func_29())
	{
		return Global_1630317[iParam0 /*595*/].f_11;
	}
	return func_29();
}

struct<13> func_31(int iParam0)
{
	struct<13> Var0;
	
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
	return Var0;
}

int func_32(int iParam0, int iParam1)
{
	if (INTERIOR::GET_INTERIOR_GROUP_ID())
	{
		Global_2515173 = { func_31(iParam0) };
		Global_2515186 = { func_31(iParam1) };
		if (MISC::IS_XBOX360_VERSION(&Global_2515173))
		{
			if (MISC::IS_XBOX360_VERSION(&Global_2515186))
			{
				DATAFILE::DATAARRAY_GET_COUNT(&Global_2515103, 35, &Global_2515173);
				DATAFILE::DATAARRAY_GET_COUNT(&Global_2515138, 35, &Global_2515186);
				if (Global_2515103 == Global_2515138)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

Vector3 func_33(bool bParam0)
{
	return NETWORK::NETWORK_ARE_HANDLES_THE_SAME(PLAYER::GET_PLAYER_PED(bParam0), 0);
}

bool func_34(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	unk_0x78FCB2E22C41B9D5(iParam0);
	return ENTITY::DOES_ENTITY_EXIST(iParam0);
}

bool func_35()
{
	if (!unk_0xCE990E643CD9D0E5(uLocal_64, 1))
	{
		if (PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE(func_33(PLAYER::PLAYER_ID()), iLocal_68, &(Local_61.f_6), 4, 1077936128, 0))
		{
			unk_0xBE20AB8238688965(&bLocal_64, 1);
		}
		else
		{
			iLocal_68++;
		}
	}
	return unk_0xCE990E643CD9D0E5(bLocal_64, 1);
}

int func_36(var uParam0)
{
	if (uParam0->f_1)
	{
		if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0)) >= 1000)
		{
			return 1;
		}
	}
	return 0;
}

void func_37(var uParam0)
{
	if (!uParam0->f_1)
	{
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			func_38(uParam0, 0, 0);
		}
	}
}

void func_38(var uParam0, bool bParam1, bool bParam2)
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

void func_39()
{
	switch (Local_63[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2)
	{
		case 0:
			func_41();
			func_40();
			if (Local_61.f_9 > 0)
			{
				Local_63[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2 = 1;
			}
			break;
		
		case 1:
			func_60();
			break;
	}
}

void func_40()
{
	int iVar0;
	bool bVar1;
	
	if (!unk_0xCE990E643CD9D0E5(Local_63[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_1, 0))
	{
		if (func_4(Local_61.f_2) && !func_3(Local_61.f_3))
		{
			iVar0 = ENTITY::GET_ENTITY_HEALTH(unk_0x770D3B2B4702434A(Local_61.f_2));
			bVar1 = ENTITY::IS_ENTITY_IN_ANGLED_AREA(unk_0x770D3B2B4702434A(Local_61.f_2));
			if (iVar0 < 200)
			{
				func_41();
				AUDIO::STOP_SCRIPTED_CONVERSATION(NETWORK::NET_TO_PED(Local_61.f_3), iLocal_67);
				unk_0xBE20AB8238688965(&(Local_63[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_1), 0);
			}
			else if (bVar1 < 3f)
			{
				if ((((ENTITY::IS_ENTITY_UPSIDEDOWN(unk_0x770D3B2B4702434A(Local_61.f_2)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(unk_0x770D3B2B4702434A(Local_61.f_2), 3, 10000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(unk_0x770D3B2B4702434A(Local_61.f_2), 1, 10000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(unk_0x770D3B2B4702434A(Local_61.f_2), 0, 10000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(unk_0x770D3B2B4702434A(Local_61.f_2), 2, 10000))
				{
					func_41();
					AUDIO::STOP_SCRIPTED_CONVERSATION(NETWORK::NET_TO_PED(Local_61.f_3), iLocal_66);
					unk_0xBE20AB8238688965(&(Local_63[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_1), 0);
				}
			}
		}
	}
}

void func_41()
{
	if (!unk_0xCE990E643CD9D0E5(bLocal_64, 0))
	{
		if (func_4(Local_61.f_2))
		{
			TASK::OPEN_SEQUENCE_TASK(&iLocal_65);
			TASK::TASK_VEHICLE_MISSION_COORS_TARGET(0, unk_0x770D3B2B4702434A(Local_61.f_2), Local_61.f_6, 14, 30f, 786468, 15f, 1f, false);
			TASK::TASK_VEHICLE_DRIVE_WANDER(0, unk_0x770D3B2B4702434A(Local_61.f_2), 30f, 786468);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_65);
			TASK::OPEN_SEQUENCE_TASK(&iLocal_66);
			TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 1);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_66);
			TASK::OPEN_SEQUENCE_TASK(&iLocal_67);
			TASK::TASK_VEHICLE_MISSION_COORS_TARGET(0, unk_0x770D3B2B4702434A(Local_61.f_2), Local_61.f_6, 5, 30f, 786468, 99999f, 1f, false);
			TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 1);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_67);
			unk_0xBE20AB8238688965(&bLocal_64, 0);
		}
	}
}

int func_42()
{
	return Local_61;
}

int func_43(int iParam0)
{
	return Local_63[iParam0 /*3*/];
}

bool func_44(int iParam0)
{
	return !func_45(iParam0);
}

int func_45(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			break;
		
		case 1:
			break;
		
		case 2:
			break;
		
		case 3:
			break;
		
		case 4:
			if (Global_262145.f_6661)
			{
				return 0;
			}
			if (func_47(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (unk_0xCE990E643CD9D0E5(Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_274.f_26, 0) || unk_0xCE990E643CD9D0E5(Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_274.f_26, 1))
			{
				return 0;
			}
			break;
		
		case 5:
			if (Global_262145.f_6662)
			{
				return 0;
			}
			if (func_47(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (unk_0xCE990E643CD9D0E5(Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_274.f_26, 0) || unk_0xCE990E643CD9D0E5(Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_274.f_26, 1))
			{
				return 0;
			}
			break;
		
		case 6:
			if (Global_262145.f_6663)
			{
				return 0;
			}
			break;
		
		case 7:
			break;
		
		case 8:
			break;
		
		case 9:
			if (Global_262145.f_6664)
			{
				return 0;
			}
			if (func_47(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (unk_0xCE990E643CD9D0E5(Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_274.f_26, 0) || unk_0xCE990E643CD9D0E5(Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_274.f_26, 1))
			{
				return 0;
			}
			break;
		
		case 15:
			if (func_46(4))
			{
				return 0;
			}
			if (func_47(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (unk_0xCE990E643CD9D0E5(Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_274.f_26, 0) || unk_0xCE990E643CD9D0E5(Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_274.f_26, 1))
			{
				return 0;
			}
			break;
		
		case 17:
			if (func_46(4))
			{
				return 0;
			}
			if (func_47(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (unk_0xCE990E643CD9D0E5(Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_274.f_26, 0) || unk_0xCE990E643CD9D0E5(Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_274.f_26, 1))
			{
				return 0;
			}
			break;
		
		case 16:
			if (func_46(4))
			{
				return 0;
			}
			if (func_47(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (unk_0xCE990E643CD9D0E5(Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_274.f_26, 0) || unk_0xCE990E643CD9D0E5(Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_274.f_26, 1))
			{
				return 0;
			}
			break;
		
		case 18:
		case 21:
		case 22:
		case 23:
			if (func_46(4))
			{
				return 0;
			}
			if (func_47(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (unk_0xCE990E643CD9D0E5(Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_274.f_26, 0) || unk_0xCE990E643CD9D0E5(Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_274.f_26, 1))
			{
				return 0;
			}
			break;
		
		case 19:
			if (func_46(4))
			{
				return 0;
			}
			if (func_47(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			break;
		
		case 20:
			if (func_46(4))
			{
				return 0;
			}
			if (func_47(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			break;
		
		case 10:
			break;
		
		case 11:
			break;
		
		case 12:
			break;
	}
	return 1;
}

int func_46(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_71(NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar0), 0, 1))
		{
			if (unk_0xCE990E643CD9D0E5(Global_2425869[iVar0 /*443*/].f_212, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_47(int iParam0, int iParam1)
{
	return unk_0xCE990E643CD9D0E5(Global_2425869[iParam0 /*443*/].f_212, iParam1);
}

int func_48()
{
	var uVar0;
	
	func_56(&uVar0);
	if (Global_1312872 == 0)
	{
		if (!MISC::SET_BIT())
		{
			return 1;
		}
	}
	if (func_55())
	{
		return 1;
	}
	if (Global_2464493)
	{
		return 1;
	}
	if (func_54())
	{
		return 1;
	}
	if (func_53(159))
	{
		if (!func_52())
		{
			return 1;
		}
	}
	if (func_53(157))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_SESSION_IS_IN_VOICE_SESSION())
	{
		return 1;
	}
	if (func_49() != 0)
	{
		if (INTERIOR::GET_INTERIOR_AT_COORDS(func_49()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_49()
{
	switch (func_51())
	{
		case 0:
			return func_50();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_50()
{
	switch (Global_2464595)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_51()
{
	return Global_30968;
}

bool func_52()
{
	return Global_2451787.f_696;
}

int func_53(int iParam0)
{
	if (unk_0x16F1FCCC54559709(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_54()
{
	return Global_2462250;
}

bool func_55()
{
	return Global_2451787.f_691;
}

void func_56(var uParam0)
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
					func_57(iVar0);
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

void func_57(int iParam0)
{
	struct<3> Var0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	if (unk_0x477FAFFE21935947(1, iParam0, &Var0, 3))
	{
		if (func_71(Var0.f_1, 1, 1))
		{
			iVar1 = PLAYER::GET_PLAYER_PED(Var0.f_1);
			if (MISC::IS_BIT_SET(iVar1))
			{
				if (SYSTEM::VDIST(iVar1, 0))
				{
					iVar2 = ENTITY::GET_ENTITY_MODEL(iVar1, 0);
					if (VEHICLE::REMOVE_VEHICLE_WINDOW(iVar2, Var0.f_2) && NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
					{
						if (func_58(iVar2, &bVar3))
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

int func_58(int iParam0, var uParam1)
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

void func_59()
{
	SYSTEM::WAIT(0);
}

void func_60()
{
	func_63();
	if (func_42() == 4 && Local_61.f_4 != 0)
	{
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_61.f_4, false);
	}
	if (func_4(Local_61.f_2))
	{
		AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(unk_0x770D3B2B4702434A(Local_61.f_2), 0f);
	}
	AUDIO::STOP_AUDIO_SCENE("JOYRIDER_RADIO_SCENE");
	func_62(9, 0);
	func_61();
}

void func_61()
{
	ENTITY::STOP_ENTITY_ANIM();
}

void func_62(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!unk_0xCE990E643CD9D0E5(Global_2425869[PLAYER::PLAYER_ID() /*443*/].f_212, bParam0))
		{
			unk_0xBE20AB8238688965(&(Global_2425869[PLAYER::PLAYER_ID() /*443*/].f_212), bParam0);
		}
	}
	else if (unk_0xCE990E643CD9D0E5(Global_2425869[PLAYER::PLAYER_ID() /*443*/].f_212, bParam0))
	{
		VEHICLE::IS_VEHICLE_DRIVEABLE(&(Global_2425869[PLAYER::PLAYER_ID() /*443*/].f_212), bParam0);
	}
}

void func_63()
{
	TASK::CLEAR_SEQUENCE_TASK(&iLocal_65);
}

void func_64(struct<21> Param0)
{
	bool bVar0;
	
	func_69(func_70(Param0), Param0);
	NETWORK::RESERVE_NETWORK_MISSION_PEDS(1);
	NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(1);
	func_67(0, -1, 0);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(&Local_61, 12);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_63, 97);
	if (!func_66())
	{
		func_60();
	}
	if (MISC::SET_BIT())
	{
		WEAPON::GET_WEAPONTYPE_GROUP(0);
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			if (Global_2540384.f_4447 == 0)
			{
				bVar0 = NETWORK::_NETWORK_GET_ROS_PRIVILEGE_25(0, 7);
				switch (bVar0)
				{
					case 0:
						Local_61.f_4 = joaat("stingergt");
						break;
					
					case 1:
						Local_61.f_4 = joaat("entityxf");
						break;
					
					case 2:
						Local_61.f_4 = joaat("feltzer2");
						break;
					
					case 3:
						Local_61.f_4 = joaat("monroe");
						break;
					
					case 4:
						Local_61.f_4 = joaat("cogcabrio");
						break;
					
					case 5:
						Local_61.f_4 = joaat("superd");
						break;
					
					case 6:
						Local_61.f_4 = joaat("infernus");
						break;
				}
			}
			else
			{
				Local_61.f_4 = Global_2540384.f_4447;
				Global_2540384.f_4447 = 0;
			}
			VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_61.f_4, true);
			Local_61.f_5 = func_65(1);
		}
		func_62(9, 1);
		AUDIO::START_AUDIO_SCENE("JOYRIDER_RADIO_SCENE");
		Local_63[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/] = 0;
	}
	else
	{
		func_60();
	}
}

int func_65(bool bParam0)
{
	bool bVar0;
	
	bVar0 = NETWORK::_NETWORK_GET_ROS_PRIVILEGE_25(0, 32);
	if (bParam0)
	{
		switch (bVar0)
		{
			case 0:
				return joaat("a_m_m_eastsa_01");
			
			case 1:
				return joaat("a_m_m_bevhills_01");
			
			case 2:
				return joaat("a_m_m_bevhills_02");
			
			case 3:
				return joaat("a_m_m_business_01");
			
			case 4:
				return joaat("a_m_m_malibu_01");
			
			case 5:
				return joaat("a_m_m_eastsa_02");
			
			case 6:
				return joaat("a_m_m_hillbilly_01");
			
			case 7:
				return joaat("a_m_m_hillbilly_02");
			
			case 8:
				return joaat("a_m_m_og_boss_01");
			
			case 9:
				return joaat("a_m_m_stlat_02");
			
			case 10:
				return joaat("a_m_y_beachvesp_01");
			
			case 11:
				return joaat("a_m_y_epsilon_01");
			
			case 12:
				return joaat("a_m_m_prolhost_01");
			
			case 13:
				return joaat("a_m_m_salton_01");
			
			case 14:
				return joaat("a_m_m_skater_01");
			
			case 15:
				return joaat("a_m_y_skater_02");
			
			case 16:
				return joaat("a_m_y_methhead_01");
			
			case 17:
				return joaat("a_m_m_skidrow_01");
			
			case 18:
				return joaat("a_m_m_soucent_01");
			
			case 19:
				return joaat("a_m_m_soucent_02");
			
			case 20:
				return joaat("a_m_m_soucent_03");
			
			case 21:
				return joaat("a_m_y_genstreet_02");
			
			case 22:
				return joaat("a_m_y_roadcyc_01");
			
			case 23:
				return joaat("a_m_m_afriamer_01");
			
			case 24:
				return joaat("a_m_m_beach_01");
			
			case 25:
				return joaat("a_m_m_farmer_01");
			
			case 26:
				return joaat("a_m_m_fatlatin_01");
			
			case 27:
				return joaat("a_m_m_genfat_01");
			
			case 28:
				return joaat("a_m_m_indian_01");
			
			case 29:
				return joaat("a_m_m_ktown_01");
			
			case 30:
				return joaat("a_m_m_socenlat_01");
			
			case 31:
				return joaat("a_m_m_mexlabor_01");
			
			default:
		}
	}
	else
	{
		switch (bVar0)
		{
			case 0:
				return joaat("a_f_m_bevhills_01");
			
			case 1:
				return joaat("a_f_m_bevhills_02");
			
			case 2:
				return joaat("a_f_m_beach_01");
			
			case 3:
				return joaat("a_f_m_ktown_02");
			
			case 4:
				return joaat("a_f_m_prolhost_01");
			
			case 5:
				return joaat("a_f_m_bodybuild_01");
			
			case 6:
				return joaat("a_f_m_business_02");
			
			case 7:
				return joaat("a_f_m_downtown_01");
			
			case 8:
				return joaat("a_f_m_eastsa_01");
			
			case 9:
				return joaat("a_f_m_eastsa_02");
			
			case 10:
				return joaat("a_f_m_fatwhite_01");
			
			case 11:
				return joaat("a_f_m_ktown_01");
			
			case 12:
				return joaat("a_f_m_ktown_02");
			
			case 13:
				return joaat("a_f_m_salton_01");
			
			case 14:
				return joaat("a_f_m_skidrow_01");
			
			case 15:
				return joaat("a_f_m_soucent_01");
			
			case 16:
				return joaat("a_f_m_soucent_02");
			
			case 17:
				return joaat("a_f_m_soucentmc_01");
			
			case 18:
				return joaat("a_f_m_tramp_01");
			
			case 19:
				return joaat("a_f_m_trampbeac_01");
			
			case 20:
				return joaat("a_f_y_yoga_01");
			
			case 21:
				return joaat("a_f_y_vinewood_02");
			
			case 22:
				return joaat("a_f_y_vinewood_03");
			
			case 23:
				return joaat("a_f_y_vinewood_04");
			
			case 24:
				return joaat("a_f_y_tennis_01");
			
			case 25:
				return joaat("a_f_y_tourist_01");
			
			case 26:
				return joaat("a_f_y_hipster_01");
			
			case 27:
				return joaat("a_f_y_golfer_01");
			
			case 28:
				return joaat("a_f_y_fitness_01");
			
			case 29:
				return joaat("a_f_y_scdressy_01");
			
			case 30:
				return joaat("a_f_y_epsilon_01");
			
			case 31:
				return joaat("a_f_y_hiker_01");
			
			default:
		}
	}
	return joaat("a_f_m_bevhills_01");
}

int func_66()
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!MISC::SET_BIT())
		{
			return 0;
		}
		if (NETWORK::_0x5D10B3795F3FC886())
		{
			return 1;
		}
		if (func_55())
		{
			return 0;
		}
		if (func_53(157))
		{
			return 0;
		}
		if (iVar0 >= 3600)
		{
			return 0;
		}
		SYSTEM::WAIT(0);
	}
	return 0;
}

int func_67(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_61();
			}
			else
			{
				return 0;
			}
		}
		if (!func_68())
		{
			if (iParam0 == 0)
			{
				if (!MISC::SET_BIT())
				{
					if (!bParam2)
					{
						func_61();
					}
					else
					{
						return 0;
					}
				}
				if (func_55())
				{
					if (!bParam2)
					{
						func_61();
					}
					else
					{
						return 0;
					}
				}
				if (func_53(157))
				{
					if (!bParam2)
					{
						func_61();
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
					func_61();
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
				func_61();
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
			func_61();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_68()
{
	return Global_1312872;
}

void func_69(int* iParam0, struct<17> Param1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	if (!MISC::SET_BIT())
	{
		func_61();
	}
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(iParam0, 0, Param1.f_16);
}

int func_70(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 2;
		
		case 1:
			return 32;
		
		case 32:
			return 32;
		
		case 33:
			return 32;
		
		case 34:
			return 32;
		
		case 35:
			return 32;
		
		case 36:
			return 32;
		
		case 37:
			return 32;
		
		case 38:
			return 32;
		
		case 39:
			return 32;
		
		case 40:
			return 32;
		
		case 41:
			return 32;
		
		case 42:
			return 32;
		
		case 43:
			return 32;
		
		case 44:
			return 32;
		
		case 45:
			return 32;
		
		case 46:
			return 32;
		
		case 47:
			return 32;
		
		case 48:
			return 32;
		
		case 49:
			return 32;
		
		case 50:
			return 4;
		
		case 51:
			return 32;
		
		case 52:
			return 32;
		
		case 53:
			return 32;
		
		case 54:
			return 32;
		
		case 55:
			return 32;
		
		case 56:
			return 32;
		
		case 57:
			return 32;
		
		case 58:
			return 32;
		
		case 59:
			return 32;
		
		case 60:
			return 32;
		
		case 61:
			return 32;
		
		case 62:
			return 32;
		
		case 63:
			return 32;
		
		case 64:
			return 4;
		
		case 65:
			return 32;
		
		case 66:
			return 4;
		
		case 67:
			return 4;
		
		case 68:
			return 32;
		
		case 69:
			return 32;
		
		case 70:
			return 4;
		
		case 71:
			return 32;
		
		case 72:
			return 32;
		
		case 73:
		case 74:
			return 4;
		
		case 75:
			return 32;
		
		case 76:
			return 32;
		
		case 77:
			return 32;
		
		case 78:
			return 32;
		
		case joaat("MPSV_LP0_31"):
			return 32;
		
		case 80:
			return 32;
		
		case 81:
			return 32;
		
		case 82:
			return 32;
		
		case 84:
			return 32;
		
		case 83:
			return 32;
		
		case 85:
			return 32;
		
		case 86:
			return 8;
		
		case 87:
			return 32;
		
		case 88:
			return 32;
		
		case 89:
			return 32;
		
		case 90:
			return 32;
		
		case 91:
			return 8;
		
		case 92:
			return 32;
		
		case 93:
			return 8;
		
		case 94:
			return 8;
		
		case 102:
			return 8;
		
		case 95:
			return 8;
		
		case 96:
			return 32;
		
		case 97:
			return 32;
		
		case 98:
			return 32;
		
		case 99:
			return 8;
		
		case 100:
			return 32;
		
		case 101:
			return 32;
		
		case 103:
			return 32;
		
		case 104:
			return 32;
		
		case 105:
			return 32;
		
		case 106:
			return 8;
		
		case 107:
			return 8;
		
		case 108:
			return 8;
		
		case 109:
			return 8;
		
		case 110:
			return 8;
		
		case 111:
			return 8;
		
		case 112:
			return 8;
		
		case 113:
			return 8;
		
		case 114:
			return 32;
		
		case 115:
			return 8;
		
		case 116:
			return 8;
		
		case 117:
			return 8;
		
		case 118:
			return 8;
		
		case 119:
			return 32;
		
		case 120:
			return 32;
		
		case 121:
			return 32;
		
		case 122:
			return 32;
		
		case 123:
			return 8;
		
		case 124:
			return 8;
		
		case 125:
			return 8;
		
		case 126:
			return 8;
		
		case 127:
			return 32;
		
		case 128:
			return 32;
		
		case 129:
			return 32;
		
		case 130:
			return 8;
		
		case 131:
			return 8;
		
		case 132:
			return 32;
		
		case 133:
			return 32;
		
		case 12:
			return 32;
		
		case 4:
			return 16;
		
		case 13:
			return 32;
		
		case 5:
			return 16;
		
		case 6:
			return 2;
		
		case 8:
			return 2;
		
		case 9:
			return 2;
		
		case 7:
			return 16;
		
		case 10:
			return 2;
		
		case 11:
			return 4;
		
		case 15:
			return 32;
		
		case 16:
			return 32;
		
		case 27:
			return 2;
		
		case 25:
			return 2;
		
		case 26:
			return 2;
		
		case 18:
			return 32;
		
		case 28:
			return 32;
		
		case 29:
			return 2;
		
		case 30:
			return 32;
		
		case 31:
			return 32;
		
		case 17:
			return 2;
		
		case 134:
			return 32;
		
		case 135:
			return 32;
		
		case 19:
			return 32;
		
		case 22:
			return 32;
		
		case 23:
			return 32;
		
		case 24:
			return 32;
		
		case 20:
			return 2;
		
		case 0:
			return 0;
		
		case 21:
			return 32;
		
		case 146:
			return 32;
		
		case 147:
			return 32;
		
		case 136:
			return 32;
		
		case 137:
			return 32;
		
		case 141:
			return 32;
		
		case 139:
			return 32;
		
		case 140:
			return 32;
		
		case 144:
			return 32;
		
		case 145:
			return 32;
		
		case 142:
			return 32;
		
		case 143:
			return 32;
		
		case 148:
			return 32;
		
		case 149:
			return 32;
		
		case 150:
			return 32;
		
		case 151:
			return 32;
		
		case 152:
			return 2;
		
		case 157:
			return 1;
		
		case 153:
			return 2;
		
		case 154:
			return 4;
		
		case 155:
			return 2;
		
		case 156:
			return 2;
		
		case 138:
			return 1;
		
		case 158:
			return 2;
		
		case 159:
		case 160:
		case 161:
		case 162:
		case 163:
		case 164:
			return 0;
		
		case 180:
			return 1;
		
		case 165:
			return 4;
		
		case 168:
			return 4;
		
		case 169:
			return 1;
		
		case 170:
			return 1;
		
		case 176:
			return 1;
		
		case 172:
			return 2;
		
		case 177:
			return 1;
		
		case 173:
			return 1;
		
		case 171:
			return 2;
		
		case 174:
			return 8;
		
		case 175:
			return 8;
		
		case 178:
			return 1;
		
		case 179:
			return 2;
		
		case 166:
			return 16;
		
		case 167:
			return 32;
		
		default:
	}
	return 0;
}

int func_71(bool bParam0, bool bParam1, bool bParam2)
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

