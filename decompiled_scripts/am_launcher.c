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
	var uLocal_61 = 0;
	float fLocal_62 = 0f;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
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
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	int iLocal_95 = 0;
	struct<21> Local_96 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
	int iLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	int iLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	struct<3> Local_106[32];
	struct<21> Local_107 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_35 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_62 = ((0.05f + 0.275f) - 0.01f);
	iLocal_100 = 40;
	if (MISC::SET_BIT())
	{
		if (!func_276(ScriptParam_107))
		{
			func_275();
		}
	}
	while (true)
	{
		func_274();
		if (func_264())
		{
			func_275();
		}
		switch (func_263(STATS::_GET_PACKED_TITLE_UPDATE_BOOL_STAT_KEY()))
		{
			case 0:
				if (func_262() == 1)
				{
					if (func_261())
					{
						Local_106[STATS::_GET_PACKED_TITLE_UPDATE_BOOL_STAT_KEY() /*3*/] = 1;
					}
				}
				break;
			
			case 1:
				if (func_262() == 1)
				{
					func_175();
				}
				else if (func_262() == 3)
				{
					Local_106[STATS::_GET_PACKED_TITLE_UPDATE_BOOL_STAT_KEY() /*3*/] = 3;
				}
				break;
			
			case 3:
				func_275();
				break;
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			switch (func_262())
			{
				case 0:
					if (func_173())
					{
						Global_2508189 = 1;
					}
					break;
				
				case 1:
					if (func_172())
					{
						Global_2508189 = 3;
					}
					func_1();
					break;
				
				case 3:
					func_275();
					break;
				}
		}
	}
}

void func_1()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	switch (Global_2508189.f_2)
	{
		case 0:
			if (func_170())
			{
				func_169(&(Global_2508189.f_179));
				func_168(1);
			}
			break;
		
		case 1:
			if (MISC::SET_BIT())
			{
				iVar0 = 0;
				while (iVar0 < 21)
				{
					iVar1 = iVar0;
					if (func_159(iVar1))
					{
						func_157(iVar1, func_158(iVar1));
					}
					else
					{
						func_157(iVar1, 0f);
					}
					iVar0++;
				}
				func_168(3);
			}
			else
			{
				func_168(0);
			}
			break;
		
		case 3:
			iVar2 = func_156();
			if (iVar2 != -1)
			{
				Global_2508189.f_3 = { Global_2508189.f_8[iVar2 /*5*/] };
				func_168(4);
			}
			else
			{
				Global_2508189.f_181 = (Global_262145.f_8114 / 2);
				func_168(0);
			}
			break;
		
		case 4:
			switch (func_153(Global_2508189.f_3))
			{
				case 0:
					break;
				
				case 1:
					switch (Global_2508189.f_3)
					{
						case 1:
							func_151();
							if (func_150(4))
							{
								func_168(5);
							}
							else
							{
								func_168(6);
							}
							break;
						
						default:
							if (func_149(Global_2508189.f_3))
							{
								Global_2508189.f_183 = Global_2540384.f_6645;
								Global_2508189.f_184 = Global_2540384.f_6646;
								Global_2508189.f_185 = Global_2540384.f_6647;
								if (func_18(func_147(), &(Global_2508189.f_183), &(Global_2508189.f_184), func_146()))
								{
									func_168(6);
								}
								else
								{
									func_157(Global_2508189.f_3, 0f);
									func_168(3);
								}
							}
							else
							{
								func_168(6);
							}
							break;
					}
					break;
				
				case 2:
					func_157(Global_2508189.f_3, 0f);
					func_168(3);
					break;
			}
			break;
		
		case 5:
			if (!func_14())
			{
				func_168(6);
			}
			break;
		
		case 6:
			if (!func_11())
			{
				if (NETWORK::NETWORK_IS_SCRIPT_ACTIVE(func_6(Global_2508189.f_3.f_1), -1, false, 0))
				{
					func_168(7);
					func_4(Global_2508189.f_3);
				}
			}
			break;
		
		case 7:
			if (!func_3())
			{
				if (!NETWORK::NETWORK_IS_SCRIPT_ACTIVE(func_6(Global_2508189.f_3.f_1), -1, false, 0))
				{
					func_168(8);
				}
			}
			break;
		
		case 8:
			Global_2508189.f_181 = Global_262145.f_8114;
			Global_2508189.f_8[Global_2508189.f_3 /*5*/].f_4 = 1;
			if (func_150(1))
			{
				func_2(1);
			}
			if (func_150(4))
			{
				func_2(4);
			}
			Global_2508189.f_3 = -1;
			Global_2508189.f_3.f_1 = 0;
			Global_2508189.f_183 = -1;
			Global_2508189.f_184 = -1;
			Global_2508189.f_185 = -1;
			func_168(0);
			break;
	}
}

void func_2(bool bParam0)
{
	if (unk_0xCE990E643CD9D0E5(Global_2508189.f_1, bParam0))
	{
		VEHICLE::IS_VEHICLE_DRIVEABLE(&(Global_2508189.f_1), bParam0);
	}
}

int func_3()
{
	if (Global_2508189.f_3.f_1 != 19)
	{
		return 0;
	}
	if (Global_2540384.f_1721)
	{
		func_168(8);
		Global_2540384.f_1721 = 0;
	}
	return 1;
}

void func_4(int iParam0)
{
	int iVar0;
	
	if (iParam0 != 9 && !func_5(iParam0))
	{
		if (Global_262145.f_8112 > 0 && Global_262145.f_8112 <= 21)
		{
			if (!Global_2508189.f_114[(Global_262145.f_8112 - 1)] == -1)
			{
				iVar0 = 0;
				while (iVar0 < (Global_262145.f_8112 - 1))
				{
					Global_2508189.f_114[iVar0] = Global_2508189.f_114[iVar0 + 1];
					iVar0++;
				}
			}
			Global_2508189.f_114[(Global_262145.f_8112 - 1)] = iParam0;
		}
	}
	iVar0 = 18;
	while (iVar0 >= 0)
	{
		Global_2508189.f_136[iVar0 + 1 /*2*/] = { Global_2508189.f_136[iVar0 /*2*/] };
		iVar0 = (iVar0 + -1);
	}
	Global_2508189.f_136[0 /*2*/] = iParam0;
	Global_2508189.f_136[0 /*2*/].f_1 = -1;
	Global_2508189.f_182 = iParam0;
}

int func_5(int iParam0)
{
	switch (iParam0)
	{
		case 19:
		case 20:
			return 1;
		
		default:
	}
	return 0;
}

char* func_6(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "AM_HOLD_UP";
		
		case 32:
			return "AM_JOYRIDER";
		
		case 33:
			return "AM_PLANE_TAKEDOWN";
		
		case 34:
			return "AM_DISTRACT_COPS";
		
		case 35:
			return "AM_DESTROY_VEH";
		
		case 36:
			return "AM_HOT_TARGET";
		
		case 37:
			return "AM_KILL_LIST";
		
		case 38:
			return "AM_TIME_TRIAL";
		
		case 39:
			return "AM_CP_COLLECTION";
		
		case 40:
			return "AM_CHALLENGES";
		
		case 41:
			return "AM_PENNED_IN";
		
		case 42:
			return "AM_PASS_THE_PARCEL";
		
		case 43:
			return "AM_HOT_PROPERTY";
		
		case 44:
			return "AM_DEAD_DROP";
		
		case 45:
			return "AM_KING_OF_THE_CASTLE";
		
		case 46:
			return "AM_CRIMINAL_DAMAGE";
		
		case 47:
			return "AM_HUNT_THE_BEAST";
		
		case 48:
			return "GB_LIMO_ATTACK";
		
		case 49:
			return "GB_DEATHMATCH";
		
		case 50:
			return "GB_STEAL_VEH";
		
		case 51:
			return "GB_POINT_TO_POINT";
		
		case 52:
			return "GB_TERMINATE";
		
		case 53:
			return "GB_YACHT_ROB";
		
		case 54:
			return "GB_BELLYBEAST";
		
		case 55:
			return "GB_FIVESTAR";
		
		case 56:
			return "GB_ROB_SHOP";
		
		case 57:
			return "GB_COLLECT_MONEY";
		
		case 58:
			return "GB_ASSAULT";
		
		case 59:
			return "GB_VEH_SURV";
		
		case 60:
			return "GB_SIGHTSEER";
		
		case 61:
			return "GB_FLYING_IN_STYLE";
		
		case 62:
			return "GB_FINDERSKEEPERS";
		
		case 63:
			return "GB_HUNT_THE_BOSS";
		
		case 64:
			return "GB_CARJACKING";
		
		case 65:
			return "GB_HEADHUNTER";
		
		case 66:
			return "GB_CONTRABAND_BUY";
		
		case 67:
			return "GB_CONTRABAND_SELL";
		
		case 68:
			return "GB_CONTRABAND_DEFEND";
		
		case 69:
			return "GB_AIRFREIGHT";
		
		case 70:
			return "GB_CASHING_OUT";
		
		case 71:
			return "GB_SALVAGE";
		
		case 72:
			return "GB_FRAGILE_GOODS";
		
		case 165:
			return "dont_cross_the_line";
		
		case 168:
			return "grid_arcade_cabinet";
		
		case 169:
			return "scroll_arcade_cabinet";
		
		case 170:
			return "example_arcade";
		
		case 171:
			return "road_arcade";
		
		case 176:
			return "Degenatron Games";
		
		case 172:
			return "gunslinger_arcade";
		
		case 177:
			return "ggsm_arcade";
		
		case 173:
			return "wizard_arcade";
		
		case 174:
			return "AM_CASINO_LIMO";
		
		case 175:
			return "AM_CASINO_LUXURY_CAR";
		
		case 178:
			return "AM_QUB3D_ARCADE_CABINET";
		
		case 179:
			return "manhunt_arcade";
		
		case 73:
		case 74:
			return "GB_VEHICLE_EXPORT";
		
		case 84:
			return "GB_BIKER_JOUST";
		
		case 83:
			return "GB_BIKER_RACE_P2P";
		
		case 85:
			return "GB_BIKER_UNLOAD_WEAPONS";
		
		case 86:
			return "";
		
		case 87:
			return "GB_BIKER_BAD_DEAL";
		
		case 88:
			return "GB_BIKER_RESCUE_CONTACT";
		
		case 89:
			return "GB_BIKER_LAST_RESPECTS";
		
		case 90:
			return "GB_BIKER_CONTRACT_KILLING";
		
		case 91:
			return "GB_BIKER_CONTRABAND_SELL";
		
		case 92:
			return "GB_BIKER_CONTRABAND_DEFEND";
		
		case 93:
			return "GB_ILLICIT_GOODS_RESUPPLY";
		
		case 94:
			return "GB_BIKER_DRIVEBY_ASSASSIN";
		
		case 102:
			return "GB_BIKER_CRIMINAL_MISCHIEF";
		
		case 95:
			return "GB_BIKER_RIPPIN_IT_UP";
		
		case 75:
			return "GB_PLOUGHED";
		
		case 76:
			return "GB_FULLY_LOADED";
		
		case 77:
			return "GB_AMPHIBIOUS_ASSAULT";
		
		case 78:
			return "GB_TRANSPORTER";
		
		case joaat("MPSV_LP0_31"):
			return "GB_FORTIFIED";
		
		case 80:
			return "GB_VELOCITY";
		
		case 81:
			return "GB_RAMPED_UP";
		
		case 82:
			return "GB_STOCKPILING";
		
		case 96:
			return "GB_BIKER_FREE_PRISONER";
		
		case 97:
			return "GB_BIKER_SAFECRACKER";
		
		case 98:
			return "GB_BIKER_STEAL_BIKES";
		
		case 99:
			return "GB_BIKER_SEARCH_AND_DESTROY";
		
		case 100:
			return "AM_PENNED_IN";
		
		case 101:
			return "GB_BIKER_STAND_YOUR_GROUND";
		
		case 103:
			return "GB_BIKER_DESTROY_VANS";
		
		case 104:
			return "GB_BIKER_BURN_ASSETS";
		
		case 105:
			return "GB_BIKER_SHUTTLE";
		
		case 106:
			return "GB_BIKER_WHEELIE_RIDER";
		
		case 107:
		case 108:
			return "GB_GUNRUNNING";
		
		case 109:
			return "GB_GUNRUNNING_DEFEND";
		
		case 110:
		case 111:
		case 112:
			return "GB_SMUGGLER";
		
		case 113:
			return "GB_GANGOPS";
		
		case 114:
			return "BUSINESS_BATTLES";
		
		case 115:
			return "BUSINESS_BATTLES_SELL";
		
		case 116:
			return "BUSINESS_BATTLES_DEFEND";
		
		case 117:
			return "GB_SECURITY_VAN";
		
		case 118:
			return "GB_TARGET_PURSUIT";
		
		case 119:
			return "GB_JEWEL_STORE_GRAB";
		
		case 120:
			return "GB_BANK_JOB";
		
		case 121:
			return "GB_DATA_HACK";
		
		case 122:
			return "GB_INFILTRATION";
		
		case 123:
			return "BUSINESS_BATTLES_DEFEND";
		
		case 124:
			return "BUSINESS_BATTLES_SELL";
		
		case 125:
			return "GB_CASINO";
		
		case 126:
			return "GB_CASINO_HEIST";
		
		case 127:
			return "fm_content_business_battles";
		
		case 128:
			return "fm_content_drug_vehicle";
		
		case 129:
			return "fm_content_movie_props";
		
		case 130:
			return "fm_content_island_heist";
		
		case 131:
			return "fm_content_island_dj";
		
		case 133:
			return "fm_content_golden_gun";
		
		case 3:
			return "AM_CR_SELL_DRUGS";
		
		case 12:
			return "AM_Safehouse";
		
		case 16:
			return "MG_RACE_TO_POINT";
		
		case 18:
			return "AM_CRATE_DROP";
		
		case 28:
			return "AM_AMMO_DROP";
		
		case 29:
			return "AM_VEHICLE_DROP";
		
		case 30:
			return "AM_BRU_BOX";
		
		case 31:
			return "AM_GA_PICKUPS";
		
		case 26:
			return "AM_backup_heli";
		
		case 27:
			return "AM_airstrike";
		
		case 17:
			return "AM_PI_MENU";
		
		case 134:
			return "AM_BOAT_TAXI";
		
		case 135:
			return "AM_HELI_TAXI";
		
		case 19:
			return "AM_IMP_EXP";
		
		case 22:
			return "AM_TAXI";
		
		case 23:
			return "AM_TAXI_LAUNCHER";
		
		case 24:
			return "AM_GANG_CALL";
		
		case 25:
			return "heli_gun";
		
		case 148:
			return "am_rollercoaster";
		
		case 149:
			return "am_ferriswheel";
		
		case 150:
			return "AM_LAUNCHER";
		
		case 151:
			return "AM_DAILY_OBJECTIVES";
		
		case 4:
			return "AM_STRIPPER";
		
		case 13:
			return "AM_Hitchhiker";
		
		case 5:
			return "stripclub_mp";
		
		case 6:
			return "AM_ArmWrestling";
		
		case 8:
			return "AM_Tennis";
		
		case 9:
			return "AM_Darts";
		
		case 7:
			return "AM_ImportExport";
		
		case 10:
			return "AM_FistFight";
		
		case 11:
			return "AM_DropOffHooker";
		
		case 15:
			return "AM_DOORS";
		
		case 20:
			return "FM_INTRO";
		
		case 21:
			return "AM_PROSTITUTE";
		
		case 136:
			return "fm_hold_up_tut";
		
		case 137:
			return "AM_CAR_MOD_TUT";
		
		case 138:
			return "AM_CONTACT_REQUESTS";
		
		case 139:
			return "am_mission_launch";
		
		case 140:
			return "am_npc_invites";
		
		case 141:
			return "am_lester_cut";
		
		case 144:
			return "AM_VEHICLE_SPAWN";
		
		case 145:
			return "am_ronTrevor_Cut";
		
		case 146:
			return "AM_ARMYBASE";
		
		case 147:
			return "AM_PRISON";
		
		case 152:
			return "AM_ArmWrestling";
		
		case 159:
			return "fm_Bj_race_controler";
		
		case 153:
			return "AM_Darts";
		
		case 160:
			return "fm_deathmatch_controler";
		
		case 158:
			return "FM_Impromptu_DM_Controler";
		
		case 161:
			return "fm_hideout_controler";
		
		case 154:
			return "golf_mp";
		
		case 157:
			return "Pilot_School_MP";
		
		case 162:
			return func_8();
		
		case 163:
			return "FM_Race_Controler";
		
		case 155:
			return "Range_Modern_MP";
		
		case 164:
			if (func_7(Global_4456448.f_129348))
			{
				return "FM_Survival_Controller";
			}
			else
			{
				return "FM_Horde_Controler";
			}
			break;
		
		case 156:
			return "tennis_network_mp";
		
		case 142:
			return "am_heist_int";
		
		case 143:
			return "am_lowrider_int";
		
		case 166:
			return "am_darts_apartment";
		
		case 167:
			return "AM_Armwrestling_Apartment";
		
		case 132:
			return "AM_ISLAND_BACKUP_HELI";
		
		case 180:
			return "SCTV";
		
		case 0:
			return "";
		
		default:
			break;
	}
	return "";
}

bool func_7(int iParam0)
{
	return iParam0 == 998;
}

char* func_8()
{
	if (func_9())
	{
		return "fm_mission_controller";
	}
	return "fm_mission_controller_2020";
}

int func_9()
{
	if (func_10(2))
	{
		return 0;
	}
	return 1;
}

bool func_10(int iParam0)
{
	return Global_4456448.f_129349 >= iParam0;
}

int func_11()
{
	if (Global_2508189.f_3.f_1 != 19)
	{
		return 0;
	}
	if (INTERIOR::GET_INTERIOR_FROM_ENTITY("AM_IMP_EXP", -1, 0) != func_146())
	{
		func_12(func_13(INTERIOR::GET_INTERIOR_FROM_ENTITY("AM_IMP_EXP", -1, 0)), 1);
		Global_2540384.f_1721 = 0;
		func_168(7);
		func_4(Global_2508189.f_3);
	}
	return 1;
}

void func_12(int iParam0, int iParam1)
{
	struct<3> Var0;
	
	Var0.x = 889825697;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = iParam1;
	if (!iParam0 == 0)
	{
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Var0, 3, iParam0);
	}
}

int func_13(int iParam0)
{
	var uVar0;
	
	if (iParam0 != -1)
	{
		unk_0xBE20AB8238688965(&uVar0, iParam0);
	}
	return uVar0;
}

int func_14()
{
	if (Global_2508189.f_3.f_1 != 18)
	{
		return 0;
	}
	if (func_150(4))
	{
		if (!func_150(3))
		{
			func_169(&(Global_2508189.f_177));
			func_17(3);
		}
		else if (func_15(&(Global_2508189.f_177), (Global_262145.f_45 * 120000), 0))
		{
			func_2(3);
			func_168(6);
		}
	}
	else
	{
		func_168(6);
	}
	return 1;
}

int func_15(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_16(uParam0, bParam2, 0);
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

void func_16(var uParam0, bool bParam1, bool bParam2)
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

void func_17(bool bParam0)
{
	if (!unk_0xCE990E643CD9D0E5(Global_2508189.f_1, iParam0))
	{
		unk_0xBE20AB8238688965(&(Global_2508189.f_1), bParam0);
	}
}

int func_18(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	var uVar2;
	struct<20> Var3;
	
	if (*uParam1 != -1 && *uParam2 != -1)
	{
		return 1;
	}
	iVar0 = *uParam1;
	iVar1 = *uParam2;
	uVar2 = 1;
	if (iVar0 == -1)
	{
		iVar0 = func_117(iParam0, iParam3, &uVar2);
	}
	if (iVar0 != -1)
	{
		iVar1 = func_38(iParam0, iVar0, iParam3);
		if (*uParam1 == -1)
		{
			while (iVar1 == -1)
			{
				func_37(&uVar2, iVar0);
				iVar0 = func_33(iParam0, &uVar2);
				if (iVar0 == -1)
				{
				}
				else
				{
					iVar1 = func_38(iParam0, iVar0, iParam3);
				}
			}
		}
		if (iVar1 != -1)
		{
			*uParam1 = iVar0;
			*uParam2 = iVar1;
			switch (func_32(iParam0))
			{
				case 0:
					Var3 = 18;
					if (func_23(iParam3, iParam0, *uParam1, *uParam2, &Var3))
					{
						if (!func_19(Var3, iParam3))
						{
							return 0;
						}
					}
					break;
			}
			return 1;
		}
	}
	return 0;
}

int func_19(var[] uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, int iParam20)
{
	int iVar0;
	int iVar1;
	
	if (iParam20 == func_146())
	{
		return 0;
	}
	else if (!func_22(iParam20))
	{
		return 0;
	}
	else if (INTERIOR::GET_INTERIOR_FROM_ENTITY(func_21(), -1, 0) != PLAYER::PLAYER_ID())
	{
		return 0;
	}
	func_20();
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (Global_2419386.f_199.f_674[iVar0 /*57*/] == func_146() || Global_2419386.f_199.f_674[iVar0 /*57*/] == iParam20)
		{
			if (Global_2419386.f_199.f_674[iVar0 /*57*/] == iParam20)
			{
			}
			else
			{
				Global_2419386.f_199.f_674[iVar0 /*57*/] = iParam20;
			}
			iVar1 = 0;
			while (iVar1 < 18)
			{
				if (uParam0[iVar1] != 0)
				{
					Global_2419386.f_199.f_674[iVar0 /*57*/].f_1[iVar1] = uParam0[iVar1];
				}
				else
				{
					Global_2419386.f_199.f_674[iVar0 /*57*/].f_1[iVar1] = 0;
				}
				iVar1++;
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_20()
{
	int iVar0;
	int iVar1;
	struct<57> Var2;
	
	if (INTERIOR::GET_INTERIOR_FROM_ENTITY(func_21(), -1, 0) == PLAYER::PLAYER_ID())
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (Global_2419386.f_199.f_674[iVar0 /*57*/] == func_146())
			{
				iVar1 = iVar0;
				while (iVar1 <= 9)
				{
					if (Global_2419386.f_199.f_674[iVar1 /*57*/] != func_146())
					{
						Var2 = { Global_2419386.f_199.f_674[iVar1 /*57*/] };
						Global_2419386.f_199.f_674[iVar1 /*57*/] = { Global_2419386.f_199.f_674[iVar0 /*57*/] };
						Global_2419386.f_199.f_674[iVar0 /*57*/] = { Var2 };
					}
					else
					{
						iVar1++;
					}
				}
			}
			iVar0++;
		}
	}
}

char* func_21()
{
	switch (Global_2464595)
	{
		case 0:
			return "freemode";
		
		default:
	}
	return "freemode";
}

int func_22(int iParam0)
{
	if (iParam0 != func_146())
	{
		if (Global_1630317[iParam0 /*595*/].f_11 != func_146())
		{
			return Global_1630317[iParam0 /*595*/].f_11 == iParam0;
		}
	}
	return 0;
}

int func_23(int iParam0, int iParam1, int iParam2, var uParam3, var uParam4)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_29(iParam1, iParam2, uParam3);
	if (iVar0 <= 0)
	{
		return 0;
	}
	if (func_25(iParam0, iParam1, iParam2, uParam3, 0) == 0)
	{
		return 0;
	}
	func_24(uParam4);
	uParam4->f_19 = iVar0;
	iVar1 = 0;
	while (iVar1 < uParam4->f_19)
	{
		(*uParam4)[iVar1] = func_25(iParam0, iParam1, iParam2, uParam3, iVar1);
		iVar1++;
	}
	return 1;
}

void func_24(var uParam0)
{
	int iVar0;
	
	uParam0->f_20 = 0;
	uParam0->f_19 = 0;
	iVar0 = 0;
	while (iVar0 < 18)
	{
		(*uParam0)[iVar0] = 0;
		iVar0++;
	}
}

int func_25(int iParam0, int iParam1, int iParam2, var uParam3, int iParam4)
{
	switch (iParam1)
	{
		case 181:
			return 765;
		
		case 256:
			return func_27(iParam2, uParam3, iParam4, iParam0);
		
		case 258:
			return func_26(iParam2, uParam3, iParam4, iParam0);
		
		default:
	}
	return 0;
}

int func_26(int iParam0, var uParam1, var uParam2, int iParam3)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
			return 755;
			break;
	}
	return 756;
}

int func_27(int iParam0, var uParam1, var uParam2, int iParam3)
{
	switch (iParam0)
	{
		case 11:
		case 5:
		case 6:
		case 10:
			if (func_28(iParam3) == 1)
			{
				return 762;
			}
			else
			{
				return 761;
			}
			break;
		
		case 9:
			return 758;
		
		case 7:
			return 764;
		
		case 8:
			return 759;
		
		case 13:
			return 760;
		
		case 16:
		case 19:
		case 14:
		case 15:
		case 20:
		case 21:
		case 18:
			return 757;
		
		case 1:
			return 763;
	}
	return 0;
}

int func_28(int iParam0)
{
	if (iParam0 == func_146())
	{
		return 0;
	}
	return Global_1590682[iParam0 /*883*/].f_274.f_264;
}

int func_29(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 181:
			return 0;
		
		case 256:
			return func_31(iParam1, uParam2);
		
		case 258:
			return func_30(iParam1, uParam2);
		
		default:
	}
	return 0;
}

int func_30(int iParam0, var uParam1)
{
	return 1;
}

int func_31(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 11:
		case 5:
		case 6:
		case 10:
		case 9:
		case 7:
		case 8:
		case 13:
		case 16:
		case 19:
		case 14:
		case 15:
		case 20:
		case 21:
		case 18:
		case 1:
			return 1;
		
		default:
	}
	return 0;
}

int func_32(int iParam0)
{
	switch (iParam0)
	{
		case 150:
			return 1;
		
		case 24:
			return 2;
		
		case 26:
			return 2;
		
		case 256:
			return 0;
		
		case 258:
			return 0;
		
		case 259:
			return 2;
		
		default:
	}
	return -1;
}

int func_33(int iParam0, var uParam1)
{
	var uVar0[30];
	float fVar1;
	float fVar2;
	int iVar3;
	float fVar4;
	int iVar5;
	
	iVar3 = 0;
	while (iVar3 < func_36(iParam0))
	{
		if (func_35(uParam1, iVar3))
		{
			uVar0[iVar3] = func_34(iParam0, iVar3);
			fVar1 = (fVar1 + uVar0[iVar3]);
		}
		iVar3++;
	}
	if (fVar1 == 0f)
	{
		return -1;
	}
	fVar4 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, fVar1);
	iVar3 = 0;
	while (iVar3 < func_36(iParam0))
	{
		fVar2 = (fVar2 + uVar0[iVar3]);
		if (fVar4 < fVar2)
		{
			iVar5 = iVar3;
		}
		else
		{
			iVar3++;
		}
	}
	return iVar5;
}

float func_34(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 181:
			switch (iParam1)
			{
				case 0:
					return 1f;
				
				default:
			}
			break;
	}
	return 1f;
}

bool func_35(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam1 / 32);
	iVar1 = (iParam1 % 32);
	return unk_0xCE990E643CD9D0E5((*uParam0)[iVar0], iVar1);
}

int func_36(int iParam0)
{
	switch (iParam0)
	{
		case 150:
			return 3;
		
		case 24:
			return 1;
		
		case 26:
			return 3;
		
		case 256:
			return 25;
		
		case 258:
			return 7;
		
		case 259:
			return 1;
		
		default:
	}
	return 0;
}

void func_37(var uParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = (iParam1 / 32);
	bVar1 = (iParam1 % 32);
	VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0[iVar0], bVar1);
}

int func_38(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2[70];
	float fVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	float fVar7;
	int iVar8;
	
	iVar0 = func_116(iParam0, iParam1);
	iVar1 = ((iVar0 + func_115(iParam0, iParam1)) - 1);
	if (iVar0 == iVar1)
	{
	}
	iVar5 = -1;
	iVar6 = iVar0;
	while (iVar6 <= iVar1)
	{
		if (func_114(iParam0, iVar6))
		{
		}
		else if (func_112(iParam0, iVar6, iParam2))
		{
		}
		else if (!func_44(iParam0, iParam1, iVar6, iParam2))
		{
		}
		else if (!func_40(iParam0, iParam1, iVar6, iParam2))
		{
		}
		else
		{
			uVar2[iVar6] = func_39(iParam0, iVar6);
		}
		iVar6++;
	}
	iVar6 = iVar0;
	while (iVar6 <= iVar1)
	{
		fVar3 = (fVar3 + uVar2[iVar6]);
		iVar6++;
	}
	fVar7 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, fVar3);
	iVar8 = -1;
	iVar6 = iVar0;
	while (iVar6 <= iVar1)
	{
		fVar4 = (fVar4 + uVar2[iVar6]);
		if (fVar7 < fVar4)
		{
			iVar8 = iVar6;
		}
		else
		{
			iVar6++;
		}
	}
	if (iVar8 == -1)
	{
		if (iVar5 != -1)
		{
			iVar8 = iVar5;
		}
	}
	return iVar8;
}

float func_39(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 181:
			switch (iParam1)
			{
				case 0:
					return 1f;
				
				default:
			}
			break;
	}
	return 1f;
}

int func_40(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam0)
	{
		case 256:
			return func_41(iParam1, iParam2, iParam3);
		
		default:
	}
	return 1;
}

int func_41(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 4:
			switch (iParam1)
			{
				case 8:
					return !func_43(iParam2);
				
				case 9:
				case 10:
					return func_43(iParam2);
				
				default:
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 34:
					return !func_42(35, iParam2);
				
				case 35:
					return !func_42(34, iParam2);
				
				default:
			}
			break;
	}
	return 1;
}

int func_42(int iParam0, int iParam1)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
			return 0;
		
		default:
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (iVar0 != iParam1 && Global_1652336.f_11.f_610[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_43(int iParam0)
{
	if (iParam0 != -1)
	{
		return unk_0xCE990E643CD9D0E5(Global_1706028[iParam0 /*53*/].f_1, true);
	}
	return 0;
}

int func_44(int iParam0, int iParam1, int iParam2, int iParam3)
{
	struct<1687> Var0;
	
	Var0.f_16 = 1;
	Var0.f_18.f_1 = -1;
	Var0.f_18.f_1.f_1 = 12;
	Var0.f_18.f_1.f_2 = 1065353216;
	Var0.f_18.f_5 = 8;
	Var0.f_18.f_5.f_1 = 1;
	Var0.f_18.f_5.f_1.f_10 = -1;
	Var0.f_18.f_5.f_1.f_11 = 2;
	Var0.f_18.f_5.f_1.f_12 = 1;
	Var0.f_18.f_5.f_1.f_12.f_10 = -1;
	Var0.f_18.f_5.f_1.f_12.f_11 = 2;
	Var0.f_18.f_5.f_1.f_12.f_12 = 1;
	Var0.f_18.f_5.f_1.f_12.f_12.f_10 = -1;
	Var0.f_18.f_5.f_1.f_12.f_12.f_11 = 2;
	Var0.f_18.f_5.f_1.f_12.f_12.f_12 = 1;
	Var0.f_18.f_5.f_1.f_12.f_12.f_12.f_10 = -1;
	Var0.f_18.f_5.f_1.f_12.f_12.f_12.f_11 = 2;
	Var0.f_18.f_5.f_1.f_12.f_12.f_12.f_12 = 1;
	Var0.f_18.f_5.f_1.f_12.f_12.f_12.f_12.f_10 = -1;
	Var0.f_18.f_5.f_1.f_12.f_12.f_12.f_12.f_11 = 2;
	Var0.f_18.f_5.f_1.f_12.f_12.f_12.f_12.f_12 = 1;
	Var0.f_18.f_5.f_1.f_12.f_12.f_12.f_12.f_12.f_10 = -1;
	Var0.f_18.f_5.f_1.f_12.f_12.f_12.f_12.f_12.f_11 = 2;
	Var0.f_18.f_5.f_1.f_12.f_12.f_12.f_12.f_12.f_12 = 1;
	Var0.f_18.f_5.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_10 = -1;
	Var0.f_18.f_5.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_11 = 2;
	Var0.f_18.f_5.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = 1;
	Var0.f_18.f_5.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_10 = -1;
	Var0.f_18.f_5.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_11 = 2;
	Var0.f_120.f_1 = 30;
	Var0.f_120.f_1.f_1 = 1;
	Var0.f_120.f_1.f_1.f_8 = -1;
	Var0.f_120.f_1.f_1.f_10 = -1;
	Var0.f_120.f_1.f_1.f_11 = -1;
	Var0.f_120.f_1.f_1.f_12 = -1;
	Var0.f_120.f_1.f_1.f_13 = -1;
	Var0.f_120.f_1.f_1.f_15 = 2;
	Var0.f_120.f_1.f_1.f_16 = -1;
	Var0.f_120.f_1.f_1.f_17 = 1114636288;
	Var0.f_120.f_1.f_1.f_18 = 1114636288;
	Var0.f_120.f_1.f_1.f_19 = 1114636288;
	Var0.f_120.f_1.f_1.f_20 = -1082130432;
	Var0.f_120.f_1.f_1.f_21 = 1;
	Var0.f_120.f_1.f_1.f_21.f_8 = -1;
	Var0.f_120.f_1.f_1.f_21.f_10 = -1;
	Var0.f_120.f_1.f_1.f_21.f_11 = -1;
	Var0.f_120.f_1.f_1.f_21.f_12 = -1;
	Var0.f_120.f_1.f_1.f_21.f_13 = -1;
	Var0.f_120.f_1.f_1.f_21.f_15 = 2;
	Var0.f_120.f_1.f_1.f_21.f_16 = -1;
	Var0.f_120.f_1.f_1.f_21.f_17 = 1114636288;
	Var0.f_120.f_1.f_1.f_21.f_18 = 1114636288;
	Var0.f_120.f_1.f_1.f_21.f_19 = 1114636288;
	Var0.f_120.f_1.f_1.f_21.f_20 = -1082130432;
	Var0.f_120.f_1.f_1.f_21.f_21 = 1;
	Var0.f_120.f_1.f_1.f_21.f_21.f_8 = -1;
	Var0.f_120.f_1.f_1.f_21.f_21.f_10 = -1;
	Var0.f_120.f_1.f_1.f_21.f_21.f_11 = -1;
	Var0.f_120.f_1.f_1.f_21.f_21.f_12 = -1;
	Var0.f_120.f_1.f_1.f_21.f_21.f_13 = -1;
	Var0.f_120.f_1.f_1.f_21.f_21.f_15 = 2;
	Var0.f_120.f_1.f_1.f_21.f_21.f_16 = -1;
	Var0.f_120.f_1.f_1.f_21.f_21.f_17 = 1114636288;
	Var0.f_120.f_1.f_1.f_21.f_21.f_18 = 1114636288;
	Var0.f_120.f_1.f_1.f_21.f_21.f_19 = 1114636288;
	Var0.f_120.f_1.f_1.f_21.f_21.f_20 = -1082130432;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21 = 1;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_8 = -1;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_10 = -1;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_11 = -1;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_12 = -1;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_13 = -1;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_15 = 2;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_16 = -1;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_17 = 1114636288;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_18 = 1114636288;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_19 = 1114636288;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_20 = -1082130432;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21 = 1;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_8 = -1;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_10 = -1;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_11 = -1;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_12 = -1;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_13 = -1;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_15 = 2;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_16 = -1;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_17 = 1114636288;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_18 = 1114636288;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_19 = 1114636288;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_20 = -1082130432;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21 = 1;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_8 = -1;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_10 = -1;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_11 = -1;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_12 = -1;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_13 = -1;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_15 = 2;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_16 = -1;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_17 = 1114636288;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_18 = 1114636288;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_19 = 1114636288;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_20 = -1082130432;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21 = 1;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_8 = -1;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_10 = -1;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_11 = -1;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_12 = -1;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_13 = -1;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_15 = 2;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_16 = -1;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_17 = 1114636288;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_18 = 1114636288;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_19 = 1114636288;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_20 = -1082130432;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21 = 1;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_8 = -1;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_10 = -1;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_11 = -1;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_12 = -1;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_13 = -1;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_15 = 2;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_16 = -1;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_17 = 1114636288;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_18 = 1114636288;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_19 = 1114636288;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_20 = -1082130432;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21 = 1;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_8 = -1;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_10 = -1;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_11 = -1;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_12 = -1;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_13 = -1;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_15 = 2;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_16 = -1;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_17 = 1114636288;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_18 = 1114636288;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_19 = 1114636288;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_20 = -1082130432;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21 = 1;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_8 = -1;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_10 = -1;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_11 = -1;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_12 = -1;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_13 = -1;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_15 = 2;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_16 = -1;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_17 = 1114636288;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_18 = 1114636288;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_19 = 1114636288;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_20 = -1082130432;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21 = 1;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_8 = -1;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_10 = -1;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_11 = -1;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_12 = -1;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_13 = -1;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_15 = 2;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_16 = -1;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_17 = 1114636288;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_18 = 1114636288;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_19 = 1114636288;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_20 = -1082130432;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21 = 1;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_8 = -1;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_10 = -1;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_11 = -1;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_12 = -1;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_13 = -1;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_15 = 2;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_16 = -1;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_17 = 1114636288;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_18 = 1114636288;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_19 = 1114636288;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_20 = -1082130432;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21 = 1;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_8 = -1;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_10 = -1;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_11 = -1;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_12 = -1;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_13 = -1;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_15 = 2;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_16 = -1;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_17 = 1114636288;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_18 = 1114636288;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_19 = 1114636288;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_20 = -1082130432;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21 = 1;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_8 = -1;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_10 = -1;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_11 = -1;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_12 = -1;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_13 = -1;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_15 = 2;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_16 = -1;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_17 = 1114636288;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_18 = 1114636288;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_19 = 1114636288;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_20 = -1082130432;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21 = 1;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_8 = -1;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_10 = -1;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_11 = -1;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_12 = -1;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_13 = -1;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_15 = 2;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_16 = -1;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_17 = 1114636288;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_18 = 1114636288;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_19 = 1114636288;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_20 = -1082130432;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21 = 1;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_8 = -1;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_10 = -1;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_11 = -1;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_12 = -1;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_13 = -1;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_15 = 2;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_16 = -1;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_17 = 1114636288;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_18 = 1114636288;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_19 = 1114636288;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_20 = -1082130432;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21 = 1;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_8 = -1;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_10 = -1;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_11 = -1;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_12 = -1;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_13 = -1;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_15 = 2;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_16 = -1;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_17 = 1114636288;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_18 = 1114636288;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_19 = 1114636288;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_20 = -1082130432;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21 = 1;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_8 = -1;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_10 = -1;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_11 = -1;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_12 = -1;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_13 = -1;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_15 = 2;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_16 = -1;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_17 = 1114636288;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_18 = 1114636288;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_19 = 1114636288;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_20 = -1082130432;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21 = 1;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_8 = -1;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_10 = -1;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_11 = -1;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_12 = -1;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_13 = -1;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_15 = 2;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_16 = -1;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_17 = 1114636288;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_18 = 1114636288;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_19 = 1114636288;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_20 = -1082130432;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21 = 1;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_8 = -1;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_10 = -1;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_11 = -1;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_12 = -1;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_13 = -1;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_15 = 2;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_16 = -1;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_17 = 1114636288;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_18 = 1114636288;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_19 = 1114636288;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_20 = -1082130432;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21 = 1;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_8 = -1;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_10 = -1;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_11 = -1;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_12 = -1;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_13 = -1;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_15 = 2;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_16 = -1;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_17 = 1114636288;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_18 = 1114636288;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_19 = 1114636288;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_20 = -1082130432;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21 = 1;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_8 = -1;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_10 = -1;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_11 = -1;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_12 = -1;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_13 = -1;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_15 = 2;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_16 = -1;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_17 = 1114636288;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_18 = 1114636288;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_19 = 1114636288;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_20 = -1082130432;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21 = 1;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_8 = -1;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_10 = -1;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_11 = -1;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_12 = -1;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_13 = -1;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_15 = 2;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_16 = -1;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_17 = 1114636288;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_18 = 1114636288;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_19 = 1114636288;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_20 = -1082130432;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21 = 1;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_8 = -1;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_10 = -1;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_11 = -1;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_12 = -1;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_13 = -1;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_15 = 2;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_16 = -1;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_17 = 1114636288;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_18 = 1114636288;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_19 = 1114636288;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_20 = -1082130432;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21 = 1;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_8 = -1;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_10 = -1;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_11 = -1;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_12 = -1;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_13 = -1;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_15 = 2;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_16 = -1;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_17 = 1114636288;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_18 = 1114636288;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_19 = 1114636288;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_20 = -1082130432;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21 = 1;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_8 = -1;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_10 = -1;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_11 = -1;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_12 = -1;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_13 = -1;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_15 = 2;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_16 = -1;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_17 = 1114636288;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_18 = 1114636288;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_19 = 1114636288;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_20 = -1082130432;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21 = 1;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_8 = -1;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_10 = -1;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_11 = -1;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_12 = -1;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_13 = -1;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_15 = 2;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_16 = -1;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_17 = 1114636288;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_18 = 1114636288;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_19 = 1114636288;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_20 = -1082130432;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21 = 1;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_8 = -1;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_10 = -1;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_11 = -1;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_12 = -1;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_13 = -1;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_15 = 2;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_16 = -1;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_17 = 1114636288;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_18 = 1114636288;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_19 = 1114636288;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_20 = -1082130432;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21 = 1;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_8 = -1;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_10 = -1;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_11 = -1;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_12 = -1;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_13 = -1;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_15 = 2;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_16 = -1;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_17 = 1114636288;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_18 = 1114636288;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_19 = 1114636288;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_20 = -1082130432;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21 = 1;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_8 = -1;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_10 = -1;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_11 = -1;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_12 = -1;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_13 = -1;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_15 = 2;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_16 = -1;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_17 = 1114636288;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_18 = 1114636288;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_19 = 1114636288;
	Var0.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_20 = -1082130432;
	Var0.f_120.f_632 = 1;
	Var0.f_120.f_632.f_1 = 1443296302;
	Var0.f_120.f_632.f_1.f_1 = 1;
	Var0.f_120.f_632.f_1.f_1.f_1 = -1;
	Var0.f_120.f_632.f_1.f_4 = -1;
	Var0.f_758.f_1 = 30;
	Var0.f_758.f_1.f_1 = 1;
	Var0.f_758.f_1.f_1.f_7 = -1;
	Var0.f_758.f_1.f_1.f_8 = -1;
	Var0.f_758.f_1.f_1.f_9 = -1;
	Var0.f_758.f_1.f_1.f_9.f_1 = 12;
	Var0.f_758.f_1.f_1.f_9.f_2 = 1065353216;
	Var0.f_758.f_1.f_1.f_13 = 1;
	Var0.f_758.f_1.f_1.f_13.f_7 = -1;
	Var0.f_758.f_1.f_1.f_13.f_8 = -1;
	Var0.f_758.f_1.f_1.f_13.f_9 = -1;
	Var0.f_758.f_1.f_1.f_13.f_9.f_1 = 12;
	Var0.f_758.f_1.f_1.f_13.f_9.f_2 = 1065353216;
	Var0.f_758.f_1.f_1.f_13.f_13 = 1;
	Var0.f_758.f_1.f_1.f_13.f_13.f_7 = -1;
	Var0.f_758.f_1.f_1.f_13.f_13.f_8 = -1;
	Var0.f_758.f_1.f_1.f_13.f_13.f_9 = -1;
	Var0.f_758.f_1.f_1.f_13.f_13.f_9.f_1 = 12;
	Var0.f_758.f_1.f_1.f_13.f_13.f_9.f_2 = 1065353216;
	Var0.f_758.f_1.f_1.f_13.f_13.f_13 = 1;
	Var0.f_758.f_1.f_1.f_13.f_13.f_13.f_7 = -1;
	Var0.f_758.f_1.f_1.f_13.f_13.f_13.f_8 = -1;
	Var0.f_758.f_1.f_1.f_13.f_13.f_13.f_9 = -1;
	Var0.f_758.f_1.f_1.f_13.f_13.f_13.f_9.f_1 = 12;
	Var0.f_758.f_1.f_1.f_13.f_13.f_13.f_9.f_2 = 1065353216;
	Var0.f_758.f_1.f_1.f_13.f_13.f_13.f_13 = 1;
	Var0.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_7 = -1;
	Var0.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_8 = -1;
	Var0.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_9 = -1;
	Var0.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_9.f_1 = 12;
	Var0.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_9.f_2 = 1065353216;
	Var0.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13 = 1;
	Var0.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_7 = -1;
	Var0.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_8 = -1;
	Var0.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_9 = -1;
	Var0.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_9.f_1 = 12;
	Var0.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_9.f_2 = 1065353216;
	Var0.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13 = 1;
	Var0.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_7 = -1;
	Var0.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_8 = -1;
	Var0.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_9 = -1;
	Var0.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_9.f_1 = 12;
	Var0.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_9.f_2 = 1065353216;
	Var0.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13 = 1;
	Var0.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_7 = -1;
	Var0.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_8 = -1;
	Var0.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_9 = -1;
	Var0.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_9.f_1 = 12;
	Var0.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_9.f_2 = 1065353216;
	Var0.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13 = 1;
	Var0.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_7 = -1;
	Var0.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_8 = -1;
	Var0.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_9 = -1;
	Var0.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_9.f_1 = 12;
	Var0.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_9.f_2 = 1065353216;
	Var0.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13 = 1;
	Var0.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_7 = -1;
	Var0.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_8 = -1;
	Var0.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_9 = -1;
	Var0.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_9.f_1 = 12;
	Var0.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_9.f_2 = 1065353216;
	Var0.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13 = 1;
	Var0.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_7 = -1;
	Var0.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_8 = -1;
	Var0.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_9 = -1;
	Var0.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_9.f_1 = 12;
	Var0.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_9.f_2 = 1065353216;
	Var0.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13 = 1;
	Var0.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_7 = -1;
	Var0.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_8 = -1;
	Var0.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_9 = -1;
	Var0.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_9.f_1 = 12;
	Var0.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_9.f_2 = 1065353216;
	Var0.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13 = 1;
	Var0.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_7 = -1;
	Var0.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_8 = -1;
	Var0.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_9 = -1;
	Var0.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_9.f_1 = 12;
	Var0.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_9.f_2 = 1065353216;
	Var0.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13 = 1;
	Var0.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_7 = -1;
	Var0.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_8 = -1;
	Var0.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_9 = -1;
	Var0.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_9.f_1 = 12;
	Var0.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_9.f_2 = 1065353216;
	Var0.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13 = 1;
	Var0.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_7 = -1;
	Var0.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_8 = -1;
	Var0.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_9 = -1;
	Var0.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_9.f_1 = 12;
	Var0.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_9.f_2 = 1065353216;
	Var0.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13 = 1;
	Var0.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_7 = -1;
	Var0.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_8 = -1;
	Var0.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_9 = -1;
	Var0.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_9.f_1 = 12;
	Var0.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_9.f_2 = 1065353216;
	Var0.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13 = 1;
	Var0.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_7 = -1;
	Var0.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_8 = -1;
	Var0.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_9 = -1;
	Var0.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_9.f_1 = 12;
	Var0.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_9.f_2 = 1065353216;
	Var0.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13 = 1;
	Var0.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_7 = -1;
	Var0.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_8 = -1;
	Var0.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_9 = -1;
	Var0.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_9.f_1 = 12;
	Var0.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_9.f_2 = 1065353216;
	Var0.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13 = 1;
	Var0.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_7 = -1;
	Var0.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_8 = -1;
	Var0.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_9 = -1;
	Var0.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_9.f_1 = 12;
	Var0.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_9.f_2 = 1065353216;
	Var0.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13 = 1;
	Var0.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_7 = -1;
	Var0.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_8 = -1;
	Var0.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_9 = -1;
	Var0.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_9.f_1 = 12;
	Var0.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_9.f_2 = 1065353216;
	Var0.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13 = 1;
	Var0.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_7 = -1;
	Var0.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_8 = -1;
	Var0.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_9 = -1;
	Var0.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_9.f_1 = 12;
	Var0.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_9.f_2 = 1065353216;
	Var0.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13 = 1;
	Var0.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_7 = -1;
	Var0.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_8 = -1;
	Var0.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_9 = -1;
	Var0.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_9.f_1 = 12;
	Var0.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_9.f_2 = 1065353216;
	Var0.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13 = 1;
	Var0.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_7 = -1;
	Var0.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_8 = -1;
	Var0.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_9 = -1;
	Var0.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_9.f_1 = 12;
	Var0.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_9.f_2 = 1065353216;
	Var0.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13 = 1;
	Var0.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_7 = -1;
	Var0.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_8 = -1;
	Var0.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_9 = -1;
	Var0.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_9.f_1 = 12;
	Var0.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_9.f_2 = 1065353216;
	Var0.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13 = 1;
	Var0.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_7 = -1;
	Var0.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_8 = -1;
	Var0.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_9 = -1;
	Var0.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_9.f_1 = 12;
	Var0.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_9.f_2 = 1065353216;
	Var0.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13 = 1;
	Var0.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_7 = -1;
	Var0.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_8 = -1;
	Var0.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_9 = -1;
	Var0.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_9.f_1 = 12;
	Var0.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_9.f_2 = 1065353216;
	Var0.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13 = 1;
	Var0.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_7 = -1;
	Var0.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_8 = -1;
	Var0.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_9 = -1;
	Var0.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_9.f_1 = 12;
	Var0.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_9.f_2 = 1065353216;
	Var0.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13 = 1;
	Var0.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_7 = -1;
	Var0.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_8 = -1;
	Var0.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_9 = -1;
	Var0.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_9.f_1 = 12;
	Var0.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_9.f_2 = 1065353216;
	Var0.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13 = 1;
	Var0.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_7 = -1;
	Var0.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_8 = -1;
	Var0.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_9 = -1;
	Var0.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_9.f_1 = 12;
	Var0.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_9.f_2 = 1065353216;
	Var0.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13 = 1;
	Var0.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_7 = -1;
	Var0.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_8 = -1;
	Var0.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_9 = -1;
	Var0.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_9.f_1 = 12;
	Var0.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_9.f_2 = 1065353216;
	Var0.f_758.f_392 = -1;
	Var0.f_1151.f_1 = 30;
	Var0.f_1151.f_1.f_1 = 1;
	Var0.f_1151.f_1.f_1.f_10 = 1;
	Var0.f_1151.f_1.f_1.f_10.f_10 = 1;
	Var0.f_1151.f_1.f_1.f_10.f_10.f_10 = 1;
	Var0.f_1151.f_1.f_1.f_10.f_10.f_10.f_10 = 1;
	Var0.f_1151.f_1.f_1.f_10.f_10.f_10.f_10.f_10 = 1;
	Var0.f_1151.f_1.f_1.f_10.f_10.f_10.f_10.f_10.f_10 = 1;
	Var0.f_1151.f_1.f_1.f_10.f_10.f_10.f_10.f_10.f_10.f_10 = 1;
	Var0.f_1151.f_1.f_1.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10 = 1;
	Var0.f_1151.f_1.f_1.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10 = 1;
	Var0.f_1151.f_1.f_1.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10 = 1;
	Var0.f_1151.f_1.f_1.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10 = 1;
	Var0.f_1151.f_1.f_1.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10 = 1;
	Var0.f_1151.f_1.f_1.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10 = 1;
	Var0.f_1151.f_1.f_1.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10 = 1;
	Var0.f_1151.f_1.f_1.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10 = 1;
	Var0.f_1151.f_1.f_1.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10 = 1;
	Var0.f_1151.f_1.f_1.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10 = 1;
	Var0.f_1151.f_1.f_1.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10 = 1;
	Var0.f_1151.f_1.f_1.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10 = 1;
	Var0.f_1151.f_1.f_1.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10 = 1;
	Var0.f_1151.f_1.f_1.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10 = 1;
	Var0.f_1151.f_1.f_1.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10 = 1;
	Var0.f_1151.f_1.f_1.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10 = 1;
	Var0.f_1151.f_1.f_1.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10 = 1;
	Var0.f_1151.f_1.f_1.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10 = 1;
	Var0.f_1151.f_1.f_1.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10 = 1;
	Var0.f_1151.f_1.f_1.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10 = 1;
	Var0.f_1151.f_1.f_1.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10 = 1;
	Var0.f_1151.f_1.f_1.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10 = 1;
	Var0.f_1453.f_1 = -1;
	Var0.f_1453.f_2 = 1132068864;
	Var0.f_1456 = -1;
	Var0.f_1464 = 1;
	Var0.f_1464.f_1 = -1;
	Var0.f_1464.f_2 = 3;
	Var0.f_1464.f_3 = 15000;
	Var0.f_1464.f_4 = 5000;
	Var0.f_1464.f_5 = 1128792064;
	Var0.f_1470.f_1 = 1;
	Var0.f_1470.f_1.f_1 = 1;
	Var0.f_1481.f_1 = 1;
	Var0.f_1481.f_1.f_1 = -1;
	Var0.f_1481.f_1.f_1.f_1 = 1;
	Var0.f_1481.f_1.f_1.f_1.f_1 = -1;
	Var0.f_1481.f_1.f_1.f_1.f_1.f_7 = 2000;
	Var0.f_1493 = 12;
	Var0.f_1686 = 2;
	Var0.f_1686.f_1.f_4 = -1;
	Var0.f_1686.f_1.f_5 = -1;
	Var0.f_1686.f_1.f_6 = 1;
	Var0.f_1686.f_1.f_8.f_4 = -1;
	Var0.f_1686.f_1.f_8.f_5 = -1;
	Var0.f_1686.f_1.f_8.f_6 = 1;
	if (!func_84(&Var0, iParam0, iParam1, iParam2))
	{
		return 0;
	}
	if (!func_81(&Var0, iParam0, iParam1, iParam2, iParam3))
	{
		return 0;
	}
	if (!func_70(&Var0, iParam0, iParam3))
	{
		return 0;
	}
	if (func_69(iParam0, iParam1, iParam2))
	{
		if (!func_45(&Var0))
		{
			return 0;
		}
	}
	return 1;
}

int func_45(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar1 = uParam0->f_18;
	iVar2 = uParam0->f_120;
	iVar3 = uParam0->f_758;
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (!func_68(&(uParam0->f_18.f_5[iVar0 /*12*/]), iVar0))
		{
			return 0;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iVar2)
	{
		if (!func_67(&(uParam0->f_120.f_1[iVar0 /*21*/]), iVar0))
		{
			return 0;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iVar3)
	{
		if (!func_46(&(uParam0->f_758.f_1[iVar0 /*13*/]), iVar0))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

int func_46(var uParam0, int iParam1)
{
	int iVar0;
	float fVar1;
	struct<3> Var2;
	
	if (func_66(uParam0, 26) || uParam0->f_8 != -1)
	{
		return 1;
	}
	iVar0 = uParam0->f_2;
	fVar1 = func_64(iVar0);
	Var2 = { uParam0->f_3 };
	if (fVar1 == 0f)
	{
		fVar1 = 10f;
	}
	if (!func_47(Var2, fVar1, fVar1, fVar1, 0f, 0, 0, 0, 0f, 0, -1, 0, fVar1, 0, 0, 0, 1))
	{
		return 0;
	}
	return 1;
}

int func_47(struct<3> Param0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5, bool bParam6, int iParam7, float fParam8, bool bParam9, int iParam10, bool bParam11, float fParam12, bool bParam13, float fParam14, bool bParam15, bool bParam16)
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
		if (func_58(Param0, fParam12, 1, 1, bParam13, bParam15, bParam9, bParam13))
		{
			return 0;
		}
	}
	Global_2405074.f_2++;
	if (bParam6)
	{
		if (fParam4 > 0f)
		{
			if (func_48(Param0, fParam4, iParam5, iParam7, fParam8, bParam9, iParam10, fParam14, bParam15))
			{
				return 0;
			}
		}
	}
	Global_2405074.f_2++;
	return 1;
}

int func_48(struct<3> Param0, float fParam1, int iParam2, int iParam3, float fParam4, bool bParam5, int iParam6, float fParam7, bool bParam8)
{
	int iVar0;
	bool bVar1;
	float fVar2;
	
	if (iParam2 && !bParam5)
	{
		if (func_57(PLAYER::PLAYER_ID(), 1, 1))
		{
			if (!PED::REMOVE_SCENARIO_BLOCKING_AREA())
			{
				fVar2 = fParam4;
				if (fParam7 > 0f)
				{
					fVar2 = fParam7;
				}
				if (HUD::SET_BLIP_NAME_FROM_TEXT_FILE(func_53(PLAYER::PLAYER_ID()), Param0, 1) <= (fVar2 + fParam1))
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
		if (func_57(bVar1, 1, 1))
		{
			if (!func_50(bVar1, 0) && NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), bVar1))
			{
				if (iParam2 == 1 || (iParam2 == 0 && bVar1 != PLAYER::PLAYER_ID()))
				{
					if ((func_49(bVar1) || !bParam8) && !Global_2425869[bVar1 /*443*/].f_263)
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
								if (HUD::SET_BLIP_NAME_FROM_TEXT_FILE(func_53(bVar1), Param0, 1) <= (fVar2 + fParam1))
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
							if (HUD::SET_BLIP_NAME_FROM_TEXT_FILE(func_53(bVar1), Param0, 1) <= (fVar2 + fParam1))
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

int func_49(bool bParam0)
{
	if (ENTITY::IS_ENTITY_VISIBLE_TO_SCRIPT(PLAYER::GET_PLAYER_PED(bParam0)) || Global_2425869[bParam0 /*443*/].f_249)
	{
		return 1;
	}
	return 0;
}

bool func_50(bool bParam0, int iParam1)
{
	bool bVar0;
	
	if (bParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_51(-1, 0) == 8;
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

int func_51(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_52();
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

int func_52()
{
	return Global_1312763;
}

Vector3 func_53(bool bParam0)
{
	int iVar0;
	
	iVar0 = bParam0;
	if ((func_56() && Global_1590682[iVar0 /*883*/].f_854) && !func_55(Global_1590682[iVar0 /*883*/].f_855))
	{
		return Global_1590682[iVar0 /*883*/].f_855;
	}
	return func_54(bParam0);
}

Vector3 func_54(bool bParam0)
{
	return NETWORK::NETWORK_ARE_HANDLES_THE_SAME(PLAYER::GET_PLAYER_PED(bParam0), 0);
}

int func_55(struct<3> Param0)
{
	if ((Param0.x == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

var func_56()
{
	return Global_2451787.f_18;
}

int func_57(bool bParam0, bool bParam1, bool bParam2)
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

int func_58(struct<3> Param0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, var uParam7)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		bVar1 = iVar0;
		if ((iParam6 == 1 && PLAYER::PLAYER_ID() != bVar1) || iParam6 == 0)
		{
			if (func_57(bVar1, bParam2, bParam3))
			{
				if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), bVar1))
				{
					if (!bParam5 || (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(PLAYER::GET_PLAYER_PED(bVar1)) && func_49(bVar1)))
					{
						if ((!bParam4 || (bParam4 == 1 && unk_0x6CC163E30ECE0790(PLAYER::PLAYER_ID()) != unk_0x6CC163E30ECE0790(bVar1))) || unk_0x6CC163E30ECE0790(PLAYER::PLAYER_ID()) == -1)
						{
							if (((unk_0x6CC163E30ECE0790(PLAYER::PLAYER_ID()) == -1 && uParam7) && bParam4) && func_59(bVar1))
							{
							}
							else if (MISC::IS_BIT_SET(PLAYER::GET_PLAYER_PED(bVar1)))
							{
								if (HUD::SET_BLIP_NAME_FROM_TEXT_FILE(func_54(bVar1), Param0, 1) < fParam1)
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

int func_59(bool bParam0)
{
	if (func_63(PLAYER::PLAYER_ID(), bParam0))
	{
		return 1;
	}
	Global_2515173 = { func_62(bParam0) };
	if (NETWORK::NETWORK_IS_FRIEND_HANDLE_ONLINE(&Global_2515173))
	{
		return 1;
	}
	if (func_60(PLAYER::PLAYER_ID(), bParam0))
	{
		return 1;
	}
	return 0;
}

int func_60(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_61(iParam0);
	if (!iVar0 == func_146())
	{
		if (iVar0 == func_61(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_61(int iParam0)
{
	if (iParam0 != func_146())
	{
		return Global_1630317[iParam0 /*595*/].f_11;
	}
	return func_146();
}

struct<13> func_62(int iParam0)
{
	struct<13> Var0;
	
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
	return Var0;
}

int func_63(int iParam0, int iParam1)
{
	if (INTERIOR::GET_INTERIOR_GROUP_ID())
	{
		Global_2515173 = { func_62(iParam0) };
		Global_2515186 = { func_62(iParam1) };
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

var func_64(int iParam0)
{
	struct<2> Var0;
	struct<2> Var1;
	float fVar2;
	float fVar3;
	var uVar4;
	
	ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, &Var0, &Var1);
	fVar2 = (Var1 - Var0);
	fVar3 = (Var1.f_1 - Var0.f_1);
	uVar4 = func_65(fVar2, fVar3);
	return uVar4;
}

float func_65(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam0;
	}
	return fParam1;
}

bool func_66(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = iParam1;
	iVar1 = (iVar0 / 32);
	iVar2 = (iVar0 % 32);
	return unk_0xCE990E643CD9D0E5((*uParam0)[iVar1], iVar2);
}

int func_67(var uParam0, int iParam1)
{
	float fVar0;
	struct<3> Var1;
	
	if (func_66(uParam0, 16) || uParam0->f_12 != -1)
	{
		return 1;
	}
	fVar0 = 2f;
	Var1 = { uParam0->f_3 };
	if (!func_47(Var1, fVar0, fVar0, fVar0, 0f, 0, 0, 0, 0f, 0, -1, 0, 0, 0, 0, 0, 1))
	{
		return 0;
	}
	return 1;
}

int func_68(var uParam0, int iParam1)
{
	int iVar0;
	float fVar1;
	struct<3> Var2;
	
	if (func_66(uParam0, 11) || func_66(uParam0, 8))
	{
		return 1;
	}
	if (uParam0->f_10 != -1)
	{
		return 1;
	}
	iVar0 = uParam0->f_2;
	fVar1 = func_64(iVar0);
	Var2 = { uParam0->f_3 };
	if (!func_47(Var2, fVar1, fVar1, fVar1, 0f, 0, 0, 0, 0f, 0, -1, 0, 0, 0, 0, 0, 1))
	{
		return 0;
	}
	return 1;
}

int func_69(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 256:
			switch (iParam1)
			{
				case 0:
				case 2:
				case 4:
				case 3:
					return 0;
				
				default:
			}
			break;
	}
	return 1;
}

int func_70(var uParam0, int iParam1, bool bParam2)
{
	switch (func_32(iParam1))
	{
		case 0:
		case 2:
			if (iParam2 != func_146())
			{
				if (!func_80(uParam0->f_120, uParam0->f_758, uParam0->f_1151, NETWORK::NETWORK_ARE_HANDLES_THE_SAME(PLAYER::GET_PLAYER_PED(iParam2), 0)))
				{
					return 0;
				}
			}
			break;
		
		case 1:
			if (!func_71(uParam0->f_120, uParam0->f_758, uParam0->f_1151, 1, 1))
			{
				return 0;
			}
			break;
	}
	return 1;
}

int func_71(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if ((func_79(iParam0, bParam3, bParam4) || func_78(iParam1, bParam3, bParam4)) || func_72(iParam2, bParam3, bParam4))
	{
		return 1;
	}
	return 0;
}

int func_72(int iParam0, bool bParam1, bool bParam2)
{
	return func_73(2, iParam0, 0, bParam1, bParam2);
}

int func_73(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xCE990E643CD9D0E5(Global_1389439, false))
	{
		return 0;
	}
	if ((bParam2 && !bParam3) && iParam1 <= (func_77(iParam0) - func_76(iParam0, 0)))
	{
		return 1;
	}
	else
	{
		if (bParam3)
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_76(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_77(iParam0) - func_75(iParam0));
		}
		else
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_76(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_77(iParam0) - func_76(iParam0, 1));
		}
		if (!bParam4 && Global_1590682[PLAYER::PLAYER_ID() /*883*/] != 3)
		{
			iVar1 = (iVar1 - func_74(iParam0));
		}
		if (iVar0 < iVar1)
		{
			return 1;
		}
	}
	return 0;
}

int func_74(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 10;
			break;
		
		case 1:
			return 10;
			break;
		
		case 2:
			return 10;
			break;
	}
	return 0;
}

int func_75(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1389439.f_1;
			break;
		
		case 1:
			return Global_1389439.f_2;
			break;
		
		case 2:
			return Global_1389439.f_3;
			break;
	}
	return 0;
}

int func_76(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = PLAYER::PLAYER_ID();
	switch (iParam0)
	{
		case 0:
			if (!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
			{
				return Global_2425869[iVar0 /*443*/].f_213;
			}
			else
			{
				return MISC::ARE_PROFILE_SETTINGS_VALID(!bParam1, 0);
			}
			break;
		
		case 1:
			if (!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
			{
				return Global_2425869[iVar0 /*443*/].f_214;
			}
			else
			{
				return MISC::GET_PROFILE_SETTING(!bParam1, 0);
			}
			break;
		
		case 2:
			if (!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
			{
				return Global_2425869[iVar0 /*443*/].f_215;
			}
			else
			{
				return NETWORK::NETWORK_IS_SIGNED_IN(!bParam1, 0);
			}
			break;
	}
	return 0;
}

int func_77(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1389447;
			break;
		
		case 1:
			return Global_1389448;
			break;
		
		case 2:
			return Global_1389449;
			break;
	}
	return 0;
}

int func_78(int iParam0, bool bParam1, bool bParam2)
{
	return func_73(1, iParam0, 0, bParam1, bParam2);
}

int func_79(int iParam0, bool bParam1, bool bParam2)
{
	return func_73(0, iParam0, 0, bParam1, bParam2);
}

int func_80(int iParam0, int iParam1, int iParam2, struct<3> Param3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	unk_0x625707C5087CF3E1(Param3, 0, &iVar0, &iVar1, &iVar2);
	if ((iParam0 <= (func_77(0) - iVar0) && iParam1 <= (func_77(1) - iVar1)) && iParam2 <= (func_77(2) - iVar2))
	{
		return 1;
	}
	return 0;
}

int func_81(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<3> Var4;
	struct<3> Var5;
	float fVar6;
	struct<1687> Var7;
	int iVar8;
	int iVar9;
	struct<3> Var10;
	float fVar11;
	
	iVar0 = func_83(iParam1);
	if (iVar0 == -1)
	{
		return 1;
	}
	iVar1 = func_115(iParam1, iParam2);
	if (iVar1 <= iVar0)
	{
		return 1;
	}
	iVar2 = func_116(iParam1, iParam2);
	iVar3 = ((iVar2 + iVar1) - 1);
	Var4 = { func_54(iParam4) };
	Var5 = { func_82(uParam0, iParam1) };
	fVar6 = SYSTEM::VDIST2(Var4, Var5);
	Var7.f_16 = 1;
	Var7.f_18.f_1 = -1;
	Var7.f_18.f_1.f_1 = 12;
	Var7.f_18.f_1.f_2 = 1065353216;
	Var7.f_18.f_5 = 8;
	Var7.f_18.f_5.f_1 = 1;
	Var7.f_18.f_5.f_1.f_10 = -1;
	Var7.f_18.f_5.f_1.f_11 = 2;
	Var7.f_18.f_5.f_1.f_12 = 1;
	Var7.f_18.f_5.f_1.f_12.f_10 = -1;
	Var7.f_18.f_5.f_1.f_12.f_11 = 2;
	Var7.f_18.f_5.f_1.f_12.f_12 = 1;
	Var7.f_18.f_5.f_1.f_12.f_12.f_10 = -1;
	Var7.f_18.f_5.f_1.f_12.f_12.f_11 = 2;
	Var7.f_18.f_5.f_1.f_12.f_12.f_12 = 1;
	Var7.f_18.f_5.f_1.f_12.f_12.f_12.f_10 = -1;
	Var7.f_18.f_5.f_1.f_12.f_12.f_12.f_11 = 2;
	Var7.f_18.f_5.f_1.f_12.f_12.f_12.f_12 = 1;
	Var7.f_18.f_5.f_1.f_12.f_12.f_12.f_12.f_10 = -1;
	Var7.f_18.f_5.f_1.f_12.f_12.f_12.f_12.f_11 = 2;
	Var7.f_18.f_5.f_1.f_12.f_12.f_12.f_12.f_12 = 1;
	Var7.f_18.f_5.f_1.f_12.f_12.f_12.f_12.f_12.f_10 = -1;
	Var7.f_18.f_5.f_1.f_12.f_12.f_12.f_12.f_12.f_11 = 2;
	Var7.f_18.f_5.f_1.f_12.f_12.f_12.f_12.f_12.f_12 = 1;
	Var7.f_18.f_5.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_10 = -1;
	Var7.f_18.f_5.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_11 = 2;
	Var7.f_18.f_5.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = 1;
	Var7.f_18.f_5.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_10 = -1;
	Var7.f_18.f_5.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_11 = 2;
	Var7.f_120.f_1 = 30;
	Var7.f_120.f_1.f_1 = 1;
	Var7.f_120.f_1.f_1.f_8 = -1;
	Var7.f_120.f_1.f_1.f_10 = -1;
	Var7.f_120.f_1.f_1.f_11 = -1;
	Var7.f_120.f_1.f_1.f_12 = -1;
	Var7.f_120.f_1.f_1.f_13 = -1;
	Var7.f_120.f_1.f_1.f_15 = 2;
	Var7.f_120.f_1.f_1.f_16 = -1;
	Var7.f_120.f_1.f_1.f_17 = 1114636288;
	Var7.f_120.f_1.f_1.f_18 = 1114636288;
	Var7.f_120.f_1.f_1.f_19 = 1114636288;
	Var7.f_120.f_1.f_1.f_20 = -1082130432;
	Var7.f_120.f_1.f_1.f_21 = 1;
	Var7.f_120.f_1.f_1.f_21.f_8 = -1;
	Var7.f_120.f_1.f_1.f_21.f_10 = -1;
	Var7.f_120.f_1.f_1.f_21.f_11 = -1;
	Var7.f_120.f_1.f_1.f_21.f_12 = -1;
	Var7.f_120.f_1.f_1.f_21.f_13 = -1;
	Var7.f_120.f_1.f_1.f_21.f_15 = 2;
	Var7.f_120.f_1.f_1.f_21.f_16 = -1;
	Var7.f_120.f_1.f_1.f_21.f_17 = 1114636288;
	Var7.f_120.f_1.f_1.f_21.f_18 = 1114636288;
	Var7.f_120.f_1.f_1.f_21.f_19 = 1114636288;
	Var7.f_120.f_1.f_1.f_21.f_20 = -1082130432;
	Var7.f_120.f_1.f_1.f_21.f_21 = 1;
	Var7.f_120.f_1.f_1.f_21.f_21.f_8 = -1;
	Var7.f_120.f_1.f_1.f_21.f_21.f_10 = -1;
	Var7.f_120.f_1.f_1.f_21.f_21.f_11 = -1;
	Var7.f_120.f_1.f_1.f_21.f_21.f_12 = -1;
	Var7.f_120.f_1.f_1.f_21.f_21.f_13 = -1;
	Var7.f_120.f_1.f_1.f_21.f_21.f_15 = 2;
	Var7.f_120.f_1.f_1.f_21.f_21.f_16 = -1;
	Var7.f_120.f_1.f_1.f_21.f_21.f_17 = 1114636288;
	Var7.f_120.f_1.f_1.f_21.f_21.f_18 = 1114636288;
	Var7.f_120.f_1.f_1.f_21.f_21.f_19 = 1114636288;
	Var7.f_120.f_1.f_1.f_21.f_21.f_20 = -1082130432;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21 = 1;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_8 = -1;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_10 = -1;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_11 = -1;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_12 = -1;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_13 = -1;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_15 = 2;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_16 = -1;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_17 = 1114636288;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_18 = 1114636288;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_19 = 1114636288;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_20 = -1082130432;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21 = 1;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_8 = -1;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_10 = -1;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_11 = -1;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_12 = -1;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_13 = -1;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_15 = 2;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_16 = -1;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_17 = 1114636288;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_18 = 1114636288;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_19 = 1114636288;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_20 = -1082130432;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21 = 1;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_8 = -1;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_10 = -1;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_11 = -1;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_12 = -1;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_13 = -1;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_15 = 2;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_16 = -1;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_17 = 1114636288;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_18 = 1114636288;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_19 = 1114636288;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_20 = -1082130432;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21 = 1;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_8 = -1;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_10 = -1;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_11 = -1;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_12 = -1;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_13 = -1;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_15 = 2;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_16 = -1;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_17 = 1114636288;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_18 = 1114636288;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_19 = 1114636288;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_20 = -1082130432;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21 = 1;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_8 = -1;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_10 = -1;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_11 = -1;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_12 = -1;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_13 = -1;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_15 = 2;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_16 = -1;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_17 = 1114636288;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_18 = 1114636288;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_19 = 1114636288;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_20 = -1082130432;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21 = 1;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_8 = -1;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_10 = -1;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_11 = -1;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_12 = -1;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_13 = -1;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_15 = 2;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_16 = -1;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_17 = 1114636288;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_18 = 1114636288;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_19 = 1114636288;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_20 = -1082130432;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21 = 1;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_8 = -1;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_10 = -1;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_11 = -1;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_12 = -1;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_13 = -1;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_15 = 2;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_16 = -1;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_17 = 1114636288;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_18 = 1114636288;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_19 = 1114636288;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_20 = -1082130432;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21 = 1;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_8 = -1;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_10 = -1;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_11 = -1;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_12 = -1;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_13 = -1;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_15 = 2;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_16 = -1;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_17 = 1114636288;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_18 = 1114636288;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_19 = 1114636288;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_20 = -1082130432;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21 = 1;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_8 = -1;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_10 = -1;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_11 = -1;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_12 = -1;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_13 = -1;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_15 = 2;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_16 = -1;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_17 = 1114636288;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_18 = 1114636288;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_19 = 1114636288;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_20 = -1082130432;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21 = 1;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_8 = -1;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_10 = -1;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_11 = -1;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_12 = -1;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_13 = -1;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_15 = 2;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_16 = -1;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_17 = 1114636288;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_18 = 1114636288;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_19 = 1114636288;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_20 = -1082130432;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21 = 1;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_8 = -1;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_10 = -1;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_11 = -1;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_12 = -1;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_13 = -1;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_15 = 2;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_16 = -1;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_17 = 1114636288;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_18 = 1114636288;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_19 = 1114636288;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_20 = -1082130432;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21 = 1;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_8 = -1;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_10 = -1;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_11 = -1;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_12 = -1;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_13 = -1;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_15 = 2;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_16 = -1;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_17 = 1114636288;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_18 = 1114636288;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_19 = 1114636288;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_20 = -1082130432;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21 = 1;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_8 = -1;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_10 = -1;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_11 = -1;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_12 = -1;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_13 = -1;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_15 = 2;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_16 = -1;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_17 = 1114636288;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_18 = 1114636288;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_19 = 1114636288;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_20 = -1082130432;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21 = 1;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_8 = -1;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_10 = -1;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_11 = -1;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_12 = -1;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_13 = -1;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_15 = 2;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_16 = -1;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_17 = 1114636288;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_18 = 1114636288;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_19 = 1114636288;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_20 = -1082130432;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21 = 1;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_8 = -1;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_10 = -1;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_11 = -1;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_12 = -1;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_13 = -1;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_15 = 2;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_16 = -1;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_17 = 1114636288;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_18 = 1114636288;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_19 = 1114636288;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_20 = -1082130432;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21 = 1;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_8 = -1;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_10 = -1;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_11 = -1;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_12 = -1;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_13 = -1;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_15 = 2;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_16 = -1;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_17 = 1114636288;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_18 = 1114636288;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_19 = 1114636288;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_20 = -1082130432;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21 = 1;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_8 = -1;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_10 = -1;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_11 = -1;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_12 = -1;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_13 = -1;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_15 = 2;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_16 = -1;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_17 = 1114636288;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_18 = 1114636288;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_19 = 1114636288;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_20 = -1082130432;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21 = 1;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_8 = -1;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_10 = -1;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_11 = -1;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_12 = -1;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_13 = -1;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_15 = 2;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_16 = -1;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_17 = 1114636288;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_18 = 1114636288;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_19 = 1114636288;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_20 = -1082130432;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21 = 1;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_8 = -1;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_10 = -1;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_11 = -1;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_12 = -1;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_13 = -1;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_15 = 2;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_16 = -1;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_17 = 1114636288;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_18 = 1114636288;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_19 = 1114636288;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_20 = -1082130432;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21 = 1;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_8 = -1;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_10 = -1;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_11 = -1;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_12 = -1;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_13 = -1;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_15 = 2;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_16 = -1;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_17 = 1114636288;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_18 = 1114636288;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_19 = 1114636288;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_20 = -1082130432;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21 = 1;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_8 = -1;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_10 = -1;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_11 = -1;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_12 = -1;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_13 = -1;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_15 = 2;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_16 = -1;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_17 = 1114636288;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_18 = 1114636288;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_19 = 1114636288;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_20 = -1082130432;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21 = 1;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_8 = -1;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_10 = -1;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_11 = -1;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_12 = -1;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_13 = -1;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_15 = 2;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_16 = -1;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_17 = 1114636288;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_18 = 1114636288;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_19 = 1114636288;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_20 = -1082130432;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21 = 1;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_8 = -1;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_10 = -1;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_11 = -1;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_12 = -1;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_13 = -1;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_15 = 2;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_16 = -1;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_17 = 1114636288;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_18 = 1114636288;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_19 = 1114636288;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_20 = -1082130432;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21 = 1;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_8 = -1;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_10 = -1;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_11 = -1;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_12 = -1;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_13 = -1;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_15 = 2;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_16 = -1;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_17 = 1114636288;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_18 = 1114636288;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_19 = 1114636288;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_20 = -1082130432;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21 = 1;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_8 = -1;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_10 = -1;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_11 = -1;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_12 = -1;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_13 = -1;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_15 = 2;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_16 = -1;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_17 = 1114636288;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_18 = 1114636288;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_19 = 1114636288;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_20 = -1082130432;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21 = 1;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_8 = -1;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_10 = -1;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_11 = -1;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_12 = -1;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_13 = -1;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_15 = 2;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_16 = -1;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_17 = 1114636288;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_18 = 1114636288;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_19 = 1114636288;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_20 = -1082130432;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21 = 1;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_8 = -1;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_10 = -1;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_11 = -1;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_12 = -1;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_13 = -1;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_15 = 2;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_16 = -1;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_17 = 1114636288;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_18 = 1114636288;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_19 = 1114636288;
	Var7.f_120.f_1.f_1.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_21.f_20 = -1082130432;
	Var7.f_120.f_632 = 1;
	Var7.f_120.f_632.f_1 = 1443296302;
	Var7.f_120.f_632.f_1.f_1 = 1;
	Var7.f_120.f_632.f_1.f_1.f_1 = -1;
	Var7.f_120.f_632.f_1.f_4 = -1;
	Var7.f_758.f_1 = 30;
	Var7.f_758.f_1.f_1 = 1;
	Var7.f_758.f_1.f_1.f_7 = -1;
	Var7.f_758.f_1.f_1.f_8 = -1;
	Var7.f_758.f_1.f_1.f_9 = -1;
	Var7.f_758.f_1.f_1.f_9.f_1 = 12;
	Var7.f_758.f_1.f_1.f_9.f_2 = 1065353216;
	Var7.f_758.f_1.f_1.f_13 = 1;
	Var7.f_758.f_1.f_1.f_13.f_7 = -1;
	Var7.f_758.f_1.f_1.f_13.f_8 = -1;
	Var7.f_758.f_1.f_1.f_13.f_9 = -1;
	Var7.f_758.f_1.f_1.f_13.f_9.f_1 = 12;
	Var7.f_758.f_1.f_1.f_13.f_9.f_2 = 1065353216;
	Var7.f_758.f_1.f_1.f_13.f_13 = 1;
	Var7.f_758.f_1.f_1.f_13.f_13.f_7 = -1;
	Var7.f_758.f_1.f_1.f_13.f_13.f_8 = -1;
	Var7.f_758.f_1.f_1.f_13.f_13.f_9 = -1;
	Var7.f_758.f_1.f_1.f_13.f_13.f_9.f_1 = 12;
	Var7.f_758.f_1.f_1.f_13.f_13.f_9.f_2 = 1065353216;
	Var7.f_758.f_1.f_1.f_13.f_13.f_13 = 1;
	Var7.f_758.f_1.f_1.f_13.f_13.f_13.f_7 = -1;
	Var7.f_758.f_1.f_1.f_13.f_13.f_13.f_8 = -1;
	Var7.f_758.f_1.f_1.f_13.f_13.f_13.f_9 = -1;
	Var7.f_758.f_1.f_1.f_13.f_13.f_13.f_9.f_1 = 12;
	Var7.f_758.f_1.f_1.f_13.f_13.f_13.f_9.f_2 = 1065353216;
	Var7.f_758.f_1.f_1.f_13.f_13.f_13.f_13 = 1;
	Var7.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_7 = -1;
	Var7.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_8 = -1;
	Var7.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_9 = -1;
	Var7.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_9.f_1 = 12;
	Var7.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_9.f_2 = 1065353216;
	Var7.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13 = 1;
	Var7.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_7 = -1;
	Var7.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_8 = -1;
	Var7.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_9 = -1;
	Var7.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_9.f_1 = 12;
	Var7.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_9.f_2 = 1065353216;
	Var7.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13 = 1;
	Var7.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_7 = -1;
	Var7.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_8 = -1;
	Var7.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_9 = -1;
	Var7.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_9.f_1 = 12;
	Var7.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_9.f_2 = 1065353216;
	Var7.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13 = 1;
	Var7.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_7 = -1;
	Var7.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_8 = -1;
	Var7.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_9 = -1;
	Var7.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_9.f_1 = 12;
	Var7.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_9.f_2 = 1065353216;
	Var7.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13 = 1;
	Var7.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_7 = -1;
	Var7.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_8 = -1;
	Var7.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_9 = -1;
	Var7.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_9.f_1 = 12;
	Var7.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_9.f_2 = 1065353216;
	Var7.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13 = 1;
	Var7.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_7 = -1;
	Var7.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_8 = -1;
	Var7.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_9 = -1;
	Var7.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_9.f_1 = 12;
	Var7.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_9.f_2 = 1065353216;
	Var7.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13 = 1;
	Var7.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_7 = -1;
	Var7.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_8 = -1;
	Var7.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_9 = -1;
	Var7.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_9.f_1 = 12;
	Var7.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_9.f_2 = 1065353216;
	Var7.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13 = 1;
	Var7.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_7 = -1;
	Var7.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_8 = -1;
	Var7.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_9 = -1;
	Var7.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_9.f_1 = 12;
	Var7.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_9.f_2 = 1065353216;
	Var7.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13 = 1;
	Var7.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_7 = -1;
	Var7.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_8 = -1;
	Var7.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_9 = -1;
	Var7.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_9.f_1 = 12;
	Var7.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_9.f_2 = 1065353216;
	Var7.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13 = 1;
	Var7.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_7 = -1;
	Var7.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_8 = -1;
	Var7.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_9 = -1;
	Var7.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_9.f_1 = 12;
	Var7.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_9.f_2 = 1065353216;
	Var7.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13 = 1;
	Var7.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_7 = -1;
	Var7.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_8 = -1;
	Var7.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_9 = -1;
	Var7.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_9.f_1 = 12;
	Var7.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_9.f_2 = 1065353216;
	Var7.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13 = 1;
	Var7.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_7 = -1;
	Var7.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_8 = -1;
	Var7.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_9 = -1;
	Var7.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_9.f_1 = 12;
	Var7.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_9.f_2 = 1065353216;
	Var7.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13 = 1;
	Var7.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_7 = -1;
	Var7.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_8 = -1;
	Var7.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_9 = -1;
	Var7.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_9.f_1 = 12;
	Var7.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_9.f_2 = 1065353216;
	Var7.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13 = 1;
	Var7.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_7 = -1;
	Var7.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_8 = -1;
	Var7.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_9 = -1;
	Var7.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_9.f_1 = 12;
	Var7.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_9.f_2 = 1065353216;
	Var7.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13 = 1;
	Var7.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_7 = -1;
	Var7.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_8 = -1;
	Var7.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_9 = -1;
	Var7.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_9.f_1 = 12;
	Var7.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_9.f_2 = 1065353216;
	Var7.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13 = 1;
	Var7.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_7 = -1;
	Var7.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_8 = -1;
	Var7.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_9 = -1;
	Var7.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_9.f_1 = 12;
	Var7.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_9.f_2 = 1065353216;
	Var7.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13 = 1;
	Var7.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_7 = -1;
	Var7.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_8 = -1;
	Var7.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_9 = -1;
	Var7.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_9.f_1 = 12;
	Var7.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_9.f_2 = 1065353216;
	Var7.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13 = 1;
	Var7.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_7 = -1;
	Var7.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_8 = -1;
	Var7.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_9 = -1;
	Var7.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_9.f_1 = 12;
	Var7.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_9.f_2 = 1065353216;
	Var7.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13 = 1;
	Var7.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_7 = -1;
	Var7.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_8 = -1;
	Var7.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_9 = -1;
	Var7.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_9.f_1 = 12;
	Var7.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_9.f_2 = 1065353216;
	Var7.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13 = 1;
	Var7.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_7 = -1;
	Var7.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_8 = -1;
	Var7.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_9 = -1;
	Var7.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_9.f_1 = 12;
	Var7.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_9.f_2 = 1065353216;
	Var7.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13 = 1;
	Var7.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_7 = -1;
	Var7.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_8 = -1;
	Var7.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_9 = -1;
	Var7.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_9.f_1 = 12;
	Var7.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_9.f_2 = 1065353216;
	Var7.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13 = 1;
	Var7.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_7 = -1;
	Var7.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_8 = -1;
	Var7.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_9 = -1;
	Var7.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_9.f_1 = 12;
	Var7.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_9.f_2 = 1065353216;
	Var7.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13 = 1;
	Var7.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_7 = -1;
	Var7.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_8 = -1;
	Var7.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_9 = -1;
	Var7.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_9.f_1 = 12;
	Var7.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_9.f_2 = 1065353216;
	Var7.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13 = 1;
	Var7.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_7 = -1;
	Var7.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_8 = -1;
	Var7.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_9 = -1;
	Var7.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_9.f_1 = 12;
	Var7.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_9.f_2 = 1065353216;
	Var7.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13 = 1;
	Var7.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_7 = -1;
	Var7.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_8 = -1;
	Var7.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_9 = -1;
	Var7.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_9.f_1 = 12;
	Var7.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_9.f_2 = 1065353216;
	Var7.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13 = 1;
	Var7.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_7 = -1;
	Var7.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_8 = -1;
	Var7.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_9 = -1;
	Var7.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_9.f_1 = 12;
	Var7.f_758.f_1.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_9.f_2 = 1065353216;
	Var7.f_758.f_392 = -1;
	Var7.f_1151.f_1 = 30;
	Var7.f_1151.f_1.f_1 = 1;
	Var7.f_1151.f_1.f_1.f_10 = 1;
	Var7.f_1151.f_1.f_1.f_10.f_10 = 1;
	Var7.f_1151.f_1.f_1.f_10.f_10.f_10 = 1;
	Var7.f_1151.f_1.f_1.f_10.f_10.f_10.f_10 = 1;
	Var7.f_1151.f_1.f_1.f_10.f_10.f_10.f_10.f_10 = 1;
	Var7.f_1151.f_1.f_1.f_10.f_10.f_10.f_10.f_10.f_10 = 1;
	Var7.f_1151.f_1.f_1.f_10.f_10.f_10.f_10.f_10.f_10.f_10 = 1;
	Var7.f_1151.f_1.f_1.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10 = 1;
	Var7.f_1151.f_1.f_1.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10 = 1;
	Var7.f_1151.f_1.f_1.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10 = 1;
	Var7.f_1151.f_1.f_1.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10 = 1;
	Var7.f_1151.f_1.f_1.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10 = 1;
	Var7.f_1151.f_1.f_1.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10 = 1;
	Var7.f_1151.f_1.f_1.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10 = 1;
	Var7.f_1151.f_1.f_1.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10 = 1;
	Var7.f_1151.f_1.f_1.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10 = 1;
	Var7.f_1151.f_1.f_1.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10 = 1;
	Var7.f_1151.f_1.f_1.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10 = 1;
	Var7.f_1151.f_1.f_1.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10 = 1;
	Var7.f_1151.f_1.f_1.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10 = 1;
	Var7.f_1151.f_1.f_1.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10 = 1;
	Var7.f_1151.f_1.f_1.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10 = 1;
	Var7.f_1151.f_1.f_1.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10 = 1;
	Var7.f_1151.f_1.f_1.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10 = 1;
	Var7.f_1151.f_1.f_1.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10 = 1;
	Var7.f_1151.f_1.f_1.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10 = 1;
	Var7.f_1151.f_1.f_1.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10 = 1;
	Var7.f_1151.f_1.f_1.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10 = 1;
	Var7.f_1151.f_1.f_1.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10 = 1;
	Var7.f_1453.f_1 = -1;
	Var7.f_1453.f_2 = 1132068864;
	Var7.f_1456 = -1;
	Var7.f_1464 = 1;
	Var7.f_1464.f_1 = -1;
	Var7.f_1464.f_2 = 3;
	Var7.f_1464.f_3 = 15000;
	Var7.f_1464.f_4 = 5000;
	Var7.f_1464.f_5 = 1128792064;
	Var7.f_1470.f_1 = 1;
	Var7.f_1470.f_1.f_1 = 1;
	Var7.f_1481.f_1 = 1;
	Var7.f_1481.f_1.f_1 = -1;
	Var7.f_1481.f_1.f_1.f_1 = 1;
	Var7.f_1481.f_1.f_1.f_1.f_1 = -1;
	Var7.f_1481.f_1.f_1.f_1.f_1.f_7 = 2000;
	Var7.f_1493 = 12;
	Var7.f_1686 = 2;
	Var7.f_1686.f_1.f_4 = -1;
	Var7.f_1686.f_1.f_5 = -1;
	Var7.f_1686.f_1.f_6 = 1;
	Var7.f_1686.f_1.f_8.f_4 = -1;
	Var7.f_1686.f_1.f_8.f_5 = -1;
	Var7.f_1686.f_1.f_8.f_6 = 1;
	iVar9 = iVar2;
	while (iVar9 <= iVar3)
	{
		if (iVar9 == iParam3)
		{
		}
		else if (!func_84(&Var7, iParam1, iParam2, iVar9))
		{
		}
		else
		{
			Var10 = { func_82(&Var7, iParam1) };
			if (func_55(Var10))
			{
			}
			else
			{
				fVar11 = SYSTEM::VDIST2(Var4, Var10);
				if (fVar6 > fVar11)
				{
					iVar8++;
					if (iVar8 == iVar0)
					{
						return 0;
					}
				}
			}
		}
		iVar9++;
	}
	return 1;
}

Vector3 func_82(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 181:
			return uParam0->f_120.f_1[0 /*21*/].f_3;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_83(int iParam0)
{
	switch (iParam0)
	{
		case 181:
			return -1;
		
		default:
	}
	return -1;
}

int func_84(var uParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam1)
	{
		case 150:
		case 26:
		case 24:
		case 256:
		case 258:
		case 259:
			return func_85(func_105(iParam1, iParam2, iParam3), uParam0, &uLocal_75);
		
		default:
	}
	return 0;
}

int func_85(var uParam0, var uParam1, var uParam2)
{
	if (CAM::IS_SCREEN_FADED_OUT(uParam0))
	{
		return 0;
	}
	func_104();
	if (!NETWORK::UGC_CLEAR_OFFLINE_QUERY(uParam0))
	{
		return 0;
	}
	func_87(uParam1);
	func_86(uParam2);
	return 1;
}

void func_86(var uParam0)
{
	DATAFILE::DATAFILE_CREATE();
	*uParam0 = 0;
	uParam0->f_1 = 0;
	StringCopy(&(uParam0->f_2), "", 64);
	uParam0->f_18 = 0;
	uParam0->f_19 = 0;
}

void func_87(var uParam0)
{
	void fVar0;
	int iVar1;
	var uVar2;
	
	fVar0 = DATAFILE::DATAFILE_DELETE();
	iVar1 = DATAFILE::DATADICT_GET_INT(fVar0, "mission");
	Global_4456448.f_83138 = DATAFILE::DATAFILE_DELETE_REQUESTED_FILE(fVar0, "debugOnlyVersion");
	func_88(&iVar1, uParam0, 0, &uVar2);
}

bool func_88(int iParam0, var uParam1, bool bParam2, var uParam3)
{
	if (!bParam2 || *uParam3 == 0)
	{
		func_89(iParam0, uParam1);
	}
	if (!bParam2 || *uParam3 == 1)
	{
	}
	if (!bParam2 || *uParam3 == 2)
	{
		*uParam3 = 0;
		return 1;
	}
	*uParam3++;
	return !bParam2;
}

void func_89(var uParam0, var uParam1)
{
	struct<2> Var0;
	bool bVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	void fVar5;
	void fVar6;
	int iVar7;
	int iVar8[1];
	int iVar9[1];
	int iVar10;
	bool bVar11;
	int iVar12;
	bool bVar13;
	int iVar14;
	bool bVar15;
	int iVar16;
	bool bVar17;
	int iVar18;
	bool bVar19;
	int iVar20;
	bool bVar21;
	void fVar22;
	int iVar23;
	int iVar24[1];
	int iVar25[1];
	int iVar26;
	bool bVar27;
	int iVar28;
	bool bVar29;
	int iVar30;
	bool bVar31;
	int iVar32;
	bool bVar33;
	int iVar34;
	bool bVar35;
	int iVar36;
	bool bVar37;
	int iVar38;
	bool bVar39;
	int iVar40;
	bool bVar41;
	int iVar42;
	bool bVar43;
	int iVar44;
	bool bVar45;
	int iVar46;
	bool bVar47;
	int iVar48;
	bool bVar49;
	int iVar50;
	bool bVar51;
	int iVar52;
	bool bVar53;
	int iVar54;
	bool bVar55;
	int iVar56;
	bool bVar57;
	int iVar58;
	bool bVar59;
	void fVar60;
	var uVar61;
	int iVar62;
	int iVar63[1];
	int iVar64[1];
	int iVar65;
	bool bVar66;
	int iVar67;
	bool bVar68;
	void fVar69;
	void fVar70;
	int iVar71[1];
	int iVar72[1];
	int iVar73;
	bool bVar74;
	int iVar75;
	bool bVar76;
	int iVar77;
	bool bVar78;
	int iVar79;
	bool bVar80;
	int iVar81;
	bool bVar82;
	void fVar83;
	int iVar84;
	bool bVar85;
	int iVar86;
	bool bVar87;
	int iVar88;
	bool bVar89;
	char* sVar90;
	bool bVar91;
	void fVar92;
	void fVar93;
	int iVar94[1];
	int iVar95[1];
	int iVar96;
	bool bVar97;
	int iVar98;
	bool bVar99;
	int iVar100;
	bool bVar101;
	int iVar102;
	bool bVar103;
	void fVar104;
	void fVar105;
	int iVar106;
	bool bVar107;
	void fVar108;
	void fVar109;
	int iVar110[1];
	int iVar111[1];
	int iVar112;
	bool bVar113;
	int iVar114;
	bool bVar115;
	int iVar116;
	bool bVar117;
	void fVar118;
	void fVar119;
	int iVar120;
	bool bVar121;
	void fVar122;
	int iVar123[1];
	int iVar124[1];
	int iVar125[1];
	int iVar126[1];
	int iVar127[1];
	int iVar128[1];
	int iVar129[1];
	int iVar130[1];
	void fVar131;
	int iVar132;
	bool bVar133;
	void fVar134;
	int iVar135;
	bool bVar136;
	int iVar137;
	bool bVar138;
	int iVar139;
	bool bVar140;
	int iVar141[1];
	int iVar142[1];
	
	func_103(&fVar5, *uParam0, "me");
	func_103(&fVar6, fVar5, "blp");
	func_103(&iVar7, fVar5, "ents");
	func_103(&fVar22, *uParam0, "pd");
	func_103(&iVar23, fVar22, "pds");
	func_103(&fVar60, fVar22, "grp");
	func_103(&uVar61, fVar60, "rel");
	func_103(&iVar62, fVar60, "trg");
	func_103(&fVar69, *uParam0, "vh");
	func_103(&fVar70, fVar69, "veh");
	func_103(&fVar83, fVar70, "blp");
	func_103(&fVar92, *uParam0, "pp");
	func_103(&fVar93, fVar92, "prps");
	func_103(&fVar104, *uParam0, "amb");
	func_103(&fVar105, fVar104, "veh");
	func_103(&fVar108, *uParam0, "ta");
	func_103(&fVar109, fVar108, "ars");
	func_103(&fVar118, *uParam0, "ptrl");
	func_103(&fVar119, fVar118, "pat");
	func_103(&fVar122, fVar119, "nd");
	func_103(&fVar131, *uParam0, "sro");
	func_103(&fVar134, *uParam0, "port");
	if (func_102(*uParam0, "fmbs") == 7)
	{
		bVar4 = true;
	}
	iVar2 = 0;
	while (iVar2 < 1)
	{
		StringCopy(&Var0, "bs", 16);
		StringIntConCat(&Var0, iVar2, 16);
		if (func_102(iVar7, &Var0) == 7)
		{
			iVar9[iVar2] = 1;
		}
		iVar2++;
	}
	if (func_102(iVar7, "mn") == 7)
	{
		bVar11 = true;
	}
	if (func_102(iVar7, "pos") == 7)
	{
		bVar13 = true;
	}
	if (func_102(iVar7, "head") == 7)
	{
		bVar15 = true;
	}
	if (func_102(iVar7, "rot") == 7)
	{
		bVar17 = true;
	}
	if (func_102(iVar7, "cv") == 7)
	{
		bVar19 = true;
	}
	if (func_102(iVar7, "crt") == 7)
	{
		bVar21 = true;
	}
	iVar2 = 0;
	while (iVar2 < 1)
	{
		StringCopy(&Var0, "bs", 16);
		StringIntConCat(&Var0, iVar2, 16);
		if (func_102(iVar23, &Var0) == 7)
		{
			iVar25[iVar2] = 1;
		}
		iVar2++;
	}
	if (func_102(iVar23, "mn") == 7)
	{
		bVar27 = true;
	}
	if (func_102(iVar23, "pos") == 7)
	{
		bVar29 = true;
	}
	if (func_102(iVar23, "head") == 7)
	{
		bVar31 = true;
	}
	if (func_102(iVar23, "wpn") == 7)
	{
		bVar33 = true;
	}
	if (func_102(iVar23, "veh") == 7)
	{
		bVar35 = true;
	}
	if (func_102(iVar23, "st") == 7)
	{
		bVar37 = true;
	}
	if (func_102(iVar23, "scen") == 7)
	{
		bVar39 = true;
	}
	if (func_102(iVar23, "anim") == 7)
	{
		bVar41 = true;
	}
	if (func_102(iVar23, "int") == 7)
	{
		bVar43 = true;
	}
	if (func_102(iVar23, "asi") == 7)
	{
		bVar45 = true;
	}
	if (func_102(iVar23, "grp") == 7)
	{
		bVar47 = true;
	}
	if (func_102(iVar23, "mvmt") == 7)
	{
		bVar49 = true;
	}
	if (func_102(iVar23, "mrd") == 7)
	{
		bVar51 = true;
	}
	if (func_102(iVar23, "sr") == 7)
	{
		bVar53 = true;
	}
	if (func_102(iVar23, "sa") == 7)
	{
		bVar55 = true;
	}
	if (func_102(iVar23, "hr") == 7)
	{
		bVar57 = true;
	}
	if (func_102(iVar23, "dr") == 7)
	{
		bVar59 = true;
	}
	iVar2 = 0;
	while (iVar2 < 1)
	{
		StringCopy(&Var0, "ar", 16);
		StringIntConCat(&Var0, iVar2, 16);
		if (func_102(iVar62, &Var0) == 7)
		{
			iVar64[iVar2] = 1;
		}
		iVar2++;
	}
	if (func_102(fVar60, "ed") == 7)
	{
		bVar66 = true;
	}
	if (func_102(fVar60, "gt") == 7)
	{
		bVar68 = true;
	}
	iVar2 = 0;
	while (iVar2 < 1)
	{
		StringCopy(&Var0, "bsa", 16);
		StringIntConCat(&Var0, iVar2, 16);
		if (func_102(fVar70, &Var0) == 7)
		{
			iVar72[iVar2] = 1;
		}
		iVar2++;
	}
	if (func_102(fVar70, "mn") == 7)
	{
		bVar74 = true;
	}
	if (func_102(fVar70, "pos") == 7)
	{
		bVar76 = true;
	}
	if (func_102(fVar70, "head") == 7)
	{
		bVar78 = true;
	}
	if (func_102(fVar70, "col") == 7)
	{
		bVar80 = true;
	}
	if (func_102(fVar70, "int") == 7)
	{
		bVar82 = true;
	}
	if (func_102(fVar83, "sprt") == 7)
	{
		bVar85 = true;
	}
	if (func_102(fVar83, "hclr") == 7)
	{
		bVar87 = true;
	}
	if (func_102(fVar83, "scl") == 7)
	{
		bVar89 = true;
	}
	if (func_102(fVar83, "sh") == 7)
	{
		bVar91 = true;
	}
	iVar2 = 0;
	while (iVar2 < 1)
	{
		StringCopy(&Var0, "bsa", 16);
		StringIntConCat(&Var0, iVar2, 16);
		if (func_102(fVar93, &Var0) == 7)
		{
			iVar95[iVar2] = 1;
		}
		iVar2++;
	}
	if (func_102(fVar93, "mn") == 7)
	{
		bVar97 = true;
	}
	if (func_102(fVar93, "pos") == 7)
	{
		bVar99 = true;
	}
	if (func_102(fVar93, "head") == 7)
	{
		bVar101 = true;
	}
	if (func_102(fVar93, "rot") == 7)
	{
		bVar103 = true;
	}
	if (func_102(fVar105, "idx") == 7)
	{
		bVar107 = true;
	}
	iVar2 = 0;
	while (iVar2 < 1)
	{
		StringCopy(&Var0, "ibs", 16);
		StringIntConCat(&Var0, iVar2, 16);
		if (func_102(fVar109, &Var0) == 7)
		{
			iVar111[iVar2] = 1;
		}
		iVar2++;
	}
	if (func_102(fVar109, "vmn") == 7)
	{
		bVar113 = true;
	}
	if (func_102(fVar109, "vmx") == 7)
	{
		bVar115 = true;
	}
	if (func_102(fVar109, "fwd") == 7)
	{
		bVar117 = true;
	}
	if (func_102(fVar119, "pedi") == 7)
	{
		bVar121 = true;
	}
	iVar2 = 0;
	while (iVar2 < 1)
	{
		StringCopy(&Var0, "scro", 16);
		StringIntConCat(&Var0, iVar2, 16);
		if (func_102(fVar122, &Var0) == 7)
		{
			iVar124[iVar2] = 1;
		}
		StringCopy(&Var0, "pos", 16);
		StringIntConCat(&Var0, iVar2, 16);
		if (func_102(fVar122, &Var0) == 7)
		{
			iVar126[iVar2] = 1;
		}
		StringCopy(&Var0, "look", 16);
		StringIntConCat(&Var0, iVar2, 16);
		if (func_102(fVar122, &Var0) == 7)
		{
			iVar128[iVar2] = 1;
		}
		StringCopy(&Var0, "dur", 16);
		StringIntConCat(&Var0, iVar2, 16);
		if (func_102(fVar122, &Var0) == 7)
		{
			iVar130[iVar2] = 1;
		}
		iVar2++;
	}
	if (func_102(fVar131, "name") == 7)
	{
		bVar133 = true;
	}
	if (func_102(fVar134, "pos") == 7)
	{
		bVar136 = true;
	}
	if (func_102(fVar134, "head") == 7)
	{
		bVar138 = true;
	}
	if (func_102(fVar134, "plnkp") == 7)
	{
		bVar140 = true;
	}
	iVar2 = 0;
	while (iVar2 < 1)
	{
		StringCopy(&Var0, "ibs", 16);
		StringIntConCat(&Var0, iVar2, 16);
		if (func_102(fVar134, &Var0) == 7)
		{
			iVar142[iVar2] = 1;
		}
		iVar2++;
	}
	if (bVar4)
	{
		iVar3 = DATAFILE::DATAARRAY_GET_TYPE(*uParam0, "fmbs");
	}
	iVar2 = 0;
	while (iVar2 < 1)
	{
		if (iVar9[iVar2])
		{
			StringCopy(&Var0, "bs", 16);
			StringIntConCat(&Var0, iVar2, 16);
			iVar8[iVar2] = DATAFILE::DATAARRAY_GET_TYPE(iVar7, &Var0);
		}
		iVar2++;
	}
	if (bVar11)
	{
		iVar10 = DATAFILE::DATAARRAY_GET_TYPE(fVar7, "mn");
	}
	if (bVar13)
	{
		iVar12 = DATAFILE::DATAARRAY_GET_TYPE(fVar7, "pos");
	}
	if (bVar15)
	{
		iVar14 = DATAFILE::DATAARRAY_GET_TYPE(fVar7, "head");
	}
	if (bVar17)
	{
		iVar16 = DATAFILE::DATAARRAY_GET_TYPE(fVar7, "rot");
	}
	if (bVar19)
	{
		iVar18 = DATAFILE::DATAARRAY_GET_TYPE(fVar7, "cv");
	}
	if (bVar21)
	{
		iVar20 = DATAFILE::DATAARRAY_GET_TYPE(fVar7, "crt");
	}
	iVar2 = 0;
	while (iVar2 < 1)
	{
		if (iVar25[iVar2])
		{
			StringCopy(&Var0, "bs", 16);
			StringIntConCat(&Var0, iVar2, 16);
			iVar24[iVar2] = DATAFILE::DATAARRAY_GET_TYPE(iVar23, &Var0);
		}
		iVar2++;
	}
	if (bVar27)
	{
		iVar26 = DATAFILE::DATAARRAY_GET_TYPE(fVar23, "mn");
	}
	if (bVar29)
	{
		iVar28 = DATAFILE::DATAARRAY_GET_TYPE(fVar23, "pos");
	}
	if (bVar31)
	{
		iVar30 = DATAFILE::DATAARRAY_GET_TYPE(fVar23, "head");
	}
	if (bVar33)
	{
		iVar32 = DATAFILE::DATAARRAY_GET_TYPE(fVar23, "wpn");
	}
	if (bVar35)
	{
		iVar34 = DATAFILE::DATAARRAY_GET_TYPE(fVar23, "veh");
	}
	if (bVar37)
	{
		iVar36 = DATAFILE::DATAARRAY_GET_TYPE(fVar23, "st");
	}
	if (bVar39)
	{
		iVar38 = DATAFILE::DATAARRAY_GET_TYPE(fVar23, "scen");
	}
	if (bVar41)
	{
		iVar40 = DATAFILE::DATAARRAY_GET_TYPE(fVar23, "anim");
	}
	if (bVar43)
	{
		iVar42 = DATAFILE::DATAARRAY_GET_TYPE(fVar23, "int");
	}
	if (bVar45)
	{
		iVar44 = DATAFILE::DATAARRAY_GET_TYPE(fVar23, "asi");
	}
	if (bVar47)
	{
		iVar46 = DATAFILE::DATAARRAY_GET_TYPE(fVar23, "grp");
	}
	if (bVar49)
	{
		iVar48 = DATAFILE::DATAARRAY_GET_TYPE(fVar23, "mvmt");
	}
	if (bVar51)
	{
		iVar50 = DATAFILE::DATAARRAY_GET_TYPE(fVar23, "mrd");
	}
	if (bVar53)
	{
		iVar52 = DATAFILE::DATAARRAY_GET_TYPE(fVar23, "sr");
	}
	if (bVar55)
	{
		iVar54 = DATAFILE::DATAARRAY_GET_TYPE(fVar23, "sa");
	}
	if (bVar57)
	{
		iVar56 = DATAFILE::DATAARRAY_GET_TYPE(fVar23, "hr");
	}
	if (bVar59)
	{
		iVar58 = DATAFILE::DATAARRAY_GET_TYPE(fVar23, "dr");
	}
	iVar2 = 0;
	while (iVar2 < 1)
	{
		if (iVar64[iVar2])
		{
			StringCopy(&Var0, "ar", 16);
			StringIntConCat(&Var0, iVar2, 16);
			iVar63[iVar2] = DATAFILE::DATAARRAY_GET_TYPE(iVar62, &Var0);
		}
		iVar2++;
	}
	if (bVar66)
	{
		iVar65 = DATAFILE::DATAARRAY_GET_TYPE(fVar60, "ed");
	}
	if (bVar68)
	{
		iVar67 = DATAFILE::DATAARRAY_GET_TYPE(fVar60, "gt");
	}
	iVar2 = 0;
	while (iVar2 < 1)
	{
		if (iVar72[iVar2])
		{
			StringCopy(&Var0, "bsa", 16);
			StringIntConCat(&Var0, iVar2, 16);
			iVar71[iVar2] = DATAFILE::DATAARRAY_GET_TYPE(fVar70, &Var0);
		}
		iVar2++;
	}
	if (bVar74)
	{
		iVar73 = DATAFILE::DATAARRAY_GET_TYPE(fVar70, "mn");
	}
	if (bVar76)
	{
		iVar75 = DATAFILE::DATAARRAY_GET_TYPE(fVar70, "pos");
	}
	if (bVar78)
	{
		iVar77 = DATAFILE::DATAARRAY_GET_TYPE(fVar70, "head");
	}
	if (bVar80)
	{
		iVar79 = DATAFILE::DATAARRAY_GET_TYPE(fVar70, "col");
	}
	if (bVar82)
	{
		iVar81 = DATAFILE::DATAARRAY_GET_TYPE(fVar70, "int");
	}
	if (bVar85)
	{
		iVar84 = DATAFILE::DATAARRAY_GET_TYPE(fVar83, "sprt");
	}
	if (bVar87)
	{
		iVar86 = DATAFILE::DATAARRAY_GET_TYPE(fVar83, "hclr");
	}
	if (bVar89)
	{
		iVar88 = DATAFILE::DATAARRAY_GET_TYPE(fVar83, "scl");
	}
	if (bVar91)
	{
		sVar90 = DATAFILE::DATAARRAY_GET_TYPE(fVar83, "sh");
	}
	iVar2 = 0;
	while (iVar2 < 1)
	{
		if (iVar95[iVar2])
		{
			StringCopy(&Var0, "bsa", 16);
			StringIntConCat(&Var0, iVar2, 16);
			iVar94[iVar2] = DATAFILE::DATAARRAY_GET_TYPE(fVar93, &Var0);
		}
		iVar2++;
	}
	if (bVar97)
	{
		iVar96 = DATAFILE::DATAARRAY_GET_TYPE(fVar93, "mn");
	}
	if (bVar99)
	{
		iVar98 = DATAFILE::DATAARRAY_GET_TYPE(fVar93, "pos");
	}
	if (bVar101)
	{
		iVar100 = DATAFILE::DATAARRAY_GET_TYPE(fVar93, "head");
	}
	if (bVar103)
	{
		iVar102 = DATAFILE::DATAARRAY_GET_TYPE(fVar93, "rot");
	}
	if (bVar107)
	{
		iVar106 = DATAFILE::DATAARRAY_GET_TYPE(fVar105, "idx");
	}
	iVar2 = 0;
	while (iVar2 < 1)
	{
		if (iVar111[iVar2])
		{
			StringCopy(&Var0, "ibs", 16);
			StringIntConCat(&Var0, iVar2, 16);
			iVar110[iVar2] = DATAFILE::DATAARRAY_GET_TYPE(fVar109, &Var0);
		}
		iVar2++;
	}
	if (bVar113)
	{
		iVar112 = DATAFILE::DATAARRAY_GET_TYPE(fVar109, "vmn");
	}
	if (bVar115)
	{
		iVar114 = DATAFILE::DATAARRAY_GET_TYPE(fVar109, "vmx");
	}
	if (bVar117)
	{
		iVar116 = DATAFILE::DATAARRAY_GET_TYPE(fVar109, "fwd");
	}
	if (bVar121)
	{
		iVar120 = DATAFILE::DATAARRAY_GET_TYPE(fVar119, "pedi");
	}
	iVar2 = 0;
	while (iVar2 < 1)
	{
		if (iVar124[iVar2])
		{
			StringCopy(&Var0, "scro", 16);
			StringIntConCat(&Var0, iVar2, 16);
			iVar123[iVar2] = DATAFILE::DATAARRAY_GET_TYPE(fVar122, &Var0);
		}
		if (iVar126[iVar2])
		{
			StringCopy(&Var0, "pos", 16);
			StringIntConCat(&Var0, iVar2, 16);
			iVar125[iVar2] = DATAFILE::DATAARRAY_GET_TYPE(fVar122, &Var0);
		}
		if (iVar128[iVar2])
		{
			StringCopy(&Var0, "look", 16);
			StringIntConCat(&Var0, iVar2, 16);
			iVar127[iVar2] = DATAFILE::DATAARRAY_GET_TYPE(fVar122, &Var0);
		}
		if (iVar130[iVar2])
		{
			StringCopy(&Var0, "dur", 16);
			StringIntConCat(&Var0, iVar2, 16);
			iVar129[iVar2] = DATAFILE::DATAARRAY_GET_TYPE(fVar122, &Var0);
		}
		iVar2++;
	}
	if (bVar133)
	{
		iVar132 = DATAFILE::DATAARRAY_GET_TYPE(fVar131, "name");
	}
	if (bVar136)
	{
		iVar135 = DATAFILE::DATAARRAY_GET_TYPE(fVar134, "pos");
	}
	if (bVar138)
	{
		iVar137 = DATAFILE::DATAARRAY_GET_TYPE(fVar134, "head");
	}
	if (bVar140)
	{
		iVar139 = DATAFILE::DATAARRAY_GET_TYPE(fVar134, "plnkp");
	}
	iVar2 = 0;
	while (iVar2 < 1)
	{
		if (iVar142[iVar2])
		{
			StringCopy(&Var0, "ibs", 16);
			StringIntConCat(&Var0, iVar2, 16);
			iVar141[iVar2] = DATAFILE::DATAARRAY_GET_TYPE(fVar134, &Var0);
		}
		iVar2++;
	}
	*uParam1 = { func_101(*uParam0, "fmnm", "") };
	bVar1 = false;
	while (bVar1 < 1)
	{
		uParam1->f_16[bVar1] = func_100(iVar3, bVar1, 0, bVar4);
		bVar1++;
	}
	uParam1->f_18 = func_99(fVar5, "num", 0);
	uParam1->f_18.f_1 = func_98(fVar6, "sprt", -1);
	uParam1->f_18.f_1.f_1 = func_98(fVar6, "hclr", 12);
	uParam1->f_18.f_1.f_2 = func_97(fVar6, "scl", 1f);
	uParam1->f_18.f_1.f_3 = func_95(fVar6, "sh", 0);
	bVar1 = false;
	while (bVar1 < 8)
	{
		iVar2 = 0;
		while (iVar2 < 1)
		{
			uParam1->f_18.f_5[bVar1 /*12*/][iVar2] = func_100(iVar8[iVar2], bVar1, 0, iVar9[iVar2]);
			iVar2++;
		}
		uParam1->f_18.f_5[bVar1 /*12*/].f_2 = func_94(iVar10, bVar1, 0, bVar11);
		uParam1->f_18.f_5[bVar1 /*12*/].f_3 = { func_93(iVar12, bVar1, 0f, 0f, 0f, bVar13) };
		uParam1->f_18.f_5[bVar1 /*12*/].f_6 = func_92(iVar14, bVar1, 0f, bVar15);
		uParam1->f_18.f_5[bVar1 /*12*/].f_7 = { func_93(iVar16, bVar1, 0f, 0f, 0f, bVar17) };
		uParam1->f_18.f_5[bVar1 /*12*/].f_10 = func_100(iVar18, bVar1, -1, bVar19);
		uParam1->f_18.f_5[bVar1 /*12*/].f_11 = func_94(iVar20, bVar1, 2, bVar21);
		bVar1++;
	}
	uParam1->f_120 = func_99(fVar22, "num", 0);
	bVar1 = false;
	while (bVar1 < 30)
	{
		iVar2 = 0;
		while (iVar2 < 1)
		{
			uParam1->f_120.f_1[bVar1 /*21*/][iVar2] = func_100(iVar24[iVar2], bVar1, 0, iVar25[iVar2]);
			iVar2++;
		}
		uParam1->f_120.f_1[bVar1 /*21*/].f_2 = func_94(iVar26, bVar1, 0, bVar27);
		uParam1->f_120.f_1[bVar1 /*21*/].f_3 = { func_93(iVar28, bVar1, 0f, 0f, 0f, bVar29) };
		uParam1->f_120.f_1[bVar1 /*21*/].f_6 = func_92(iVar30, bVar1, 0f, bVar31);
		uParam1->f_120.f_1[bVar1 /*21*/].f_7 = func_94(iVar32, bVar1, 0, bVar33);
		uParam1->f_120.f_1[bVar1 /*21*/].f_8 = func_100(iVar34, bVar1, -1, bVar35);
		uParam1->f_120.f_1[bVar1 /*21*/].f_9 = func_94(iVar36, bVar1, 0, bVar37);
		uParam1->f_120.f_1[bVar1 /*21*/].f_10 = func_100(iVar38, bVar1, -1, bVar39);
		uParam1->f_120.f_1[bVar1 /*21*/].f_11 = func_100(iVar40, bVar1, -1, bVar41);
		uParam1->f_120.f_1[bVar1 /*21*/].f_12 = func_100(iVar42, bVar1, -1, bVar43);
		uParam1->f_120.f_1[bVar1 /*21*/].f_13 = func_100(iVar44, bVar1, -1, bVar45);
		uParam1->f_120.f_1[bVar1 /*21*/].f_14 = func_100(iVar46, bVar1, 0, bVar47);
		uParam1->f_120.f_1[bVar1 /*21*/].f_15 = func_94(iVar48, bVar1, 2, bVar49);
		uParam1->f_120.f_1[bVar1 /*21*/].f_16 = func_100(iVar50, bVar1, -1, bVar51);
		uParam1->f_120.f_1[bVar1 /*21*/].f_17 = func_92(iVar52, bVar1, 60f, bVar53);
		uParam1->f_120.f_1[bVar1 /*21*/].f_18 = func_92(iVar54, bVar1, 60f, bVar55);
		uParam1->f_120.f_1[bVar1 /*21*/].f_19 = func_92(iVar56, bVar1, 60f, bVar57);
		uParam1->f_120.f_1[bVar1 /*21*/].f_20 = func_92(iVar58, bVar1, -1f, bVar59);
		bVar1++;
	}
	bVar1 = false;
	while (bVar1 < 1)
	{
		iVar2 = 0;
		while (iVar2 < 1)
		{
			uParam1->f_120.f_632[bVar1 /*5*/].f_1[iVar2] = func_100(iVar63[iVar2], bVar1, -1, iVar64[iVar2]);
			iVar2++;
		}
		uParam1->f_120.f_632[bVar1 /*5*/].f_3 = func_100(iVar65, bVar1, 0, bVar66);
		uParam1->f_120.f_632[bVar1 /*5*/].f_4 = func_100(iVar67, bVar1, -1, bVar68);
		bVar1++;
	}
	uParam1->f_758 = func_99(fVar69, "num", 0);
	bVar1 = false;
	while (bVar1 < 30)
	{
		iVar2 = 0;
		while (iVar2 < 1)
		{
			uParam1->f_758.f_1[bVar1 /*13*/][iVar2] = func_100(iVar71[iVar2], bVar1, 0, iVar72[iVar2]);
			iVar2++;
		}
		uParam1->f_758.f_1[bVar1 /*13*/].f_2 = func_94(iVar73, bVar1, 0, bVar74);
		uParam1->f_758.f_1[bVar1 /*13*/].f_3 = { func_93(iVar75, bVar1, 0f, 0f, 0f, bVar76) };
		uParam1->f_758.f_1[bVar1 /*13*/].f_6 = func_92(iVar77, bVar1, 0f, bVar78);
		uParam1->f_758.f_1[bVar1 /*13*/].f_7 = func_100(iVar79, bVar1, -1, bVar80);
		uParam1->f_758.f_1[bVar1 /*13*/].f_8 = func_100(iVar81, bVar1, -1, bVar82);
		uParam1->f_758.f_1[bVar1 /*13*/].f_9 = func_94(iVar84, bVar1, -1, bVar85);
		uParam1->f_758.f_1[bVar1 /*13*/].f_9.f_1 = func_94(iVar86, bVar1, 12, bVar87);
		uParam1->f_758.f_1[bVar1 /*13*/].f_9.f_2 = func_92(iVar88, bVar1, 1f, bVar89);
		uParam1->f_758.f_1[bVar1 /*13*/].f_9.f_3 = func_91(sVar90, bVar1, 0, bVar91);
		bVar1++;
	}
	uParam1->f_758.f_392 = func_99(fVar69, "trv", -1);
	uParam1->f_1151 = func_99(fVar92, "num", 0);
	bVar1 = false;
	while (bVar1 < 30)
	{
		iVar2 = 0;
		while (iVar2 < 1)
		{
			uParam1->f_1151.f_1[bVar1 /*10*/][iVar2] = func_100(iVar94[iVar2], bVar1, 0, iVar95[iVar2]);
			iVar2++;
		}
		uParam1->f_1151.f_1[bVar1 /*10*/].f_2 = func_94(iVar96, bVar1, 0, bVar97);
		uParam1->f_1151.f_1[bVar1 /*10*/].f_3 = { func_93(iVar98, bVar1, 0f, 0f, 0f, bVar99) };
		uParam1->f_1151.f_1[bVar1 /*10*/].f_6 = func_92(iVar100, bVar1, 0f, bVar101);
		uParam1->f_1151.f_1[bVar1 /*10*/].f_7 = { func_93(iVar102, bVar1, 0f, 0f, 0f, bVar103) };
		bVar1++;
	}
	bVar1 = false;
	while (bVar1 < 1)
	{
		uParam1->f_1464[bVar1] = func_100(iVar106, bVar1, -1, bVar107);
		bVar1++;
	}
	uParam1->f_1464.f_2 = func_99(fVar104, "wvs", 3);
	uParam1->f_1464.f_3 = func_99(fVar104, "spd", 15000);
	uParam1->f_1464.f_4 = func_99(fVar104, "rspd", 5000);
	uParam1->f_1464.f_5 = func_97(fVar104, "sdst", 200f);
	uParam1->f_1470 = func_99(fVar108, "num", 0);
	bVar1 = false;
	while (bVar1 < 1)
	{
		iVar2 = 0;
		while (iVar2 < 1)
		{
			uParam1->f_1470.f_1[bVar1 /*9*/][iVar2] = func_100(iVar110[iVar2], bVar1, 0, iVar111[iVar2]);
			iVar2++;
		}
		uParam1->f_1470.f_1[bVar1 /*9*/].f_2 = { func_93(iVar112, bVar1, 0f, 0f, 0f, bVar113) };
		uParam1->f_1470.f_1[bVar1 /*9*/].f_5 = { func_93(iVar114, bVar1, 0f, 0f, 0f, bVar115) };
		uParam1->f_1470.f_1[bVar1 /*9*/].f_8 = func_92(iVar116, bVar1, 0f, bVar117);
		bVar1++;
	}
	uParam1->f_1481 = func_99(fVar118, "num", 0);
	bVar1 = false;
	while (bVar1 < 1)
	{
		uParam1->f_1481.f_1[bVar1 /*10*/] = func_100(iVar120, bVar1, -1, bVar121);
		iVar2 = 0;
		while (iVar2 < 1)
		{
			uParam1->f_1481.f_1[bVar1 /*10*/].f_1[iVar2 /*8*/] = func_100(iVar123[iVar2], bVar1, -1, iVar124[iVar2]);
			uParam1->f_1481.f_1[bVar1 /*10*/].f_1[iVar2 /*8*/].f_1 = { func_93(iVar125[iVar2], bVar1, 0f, 0f, 0f, iVar126[iVar2]) };
			uParam1->f_1481.f_1[bVar1 /*10*/].f_1[iVar2 /*8*/].f_4 = { func_93(iVar127[iVar2], bVar1, 0f, 0f, 0f, iVar128[iVar2]) };
			uParam1->f_1481.f_1[bVar1 /*10*/].f_1[iVar2 /*8*/].f_7 = func_100(iVar129[iVar2], bVar1, 2000, iVar130[iVar2]);
			iVar2++;
		}
		bVar1++;
	}
	bVar1 = false;
	while (bVar1 < 12)
	{
		uParam1->f_1493[bVar1 /*16*/] = { func_90(iVar132, bVar1, "", bVar133) };
		bVar1++;
	}
	bVar1 = false;
	while (bVar1 < 2)
	{
		uParam1->f_1686[bVar1 /*8*/] = { func_93(iVar135, bVar1, 0f, 0f, 0f, bVar136) };
		uParam1->f_1686[bVar1 /*8*/].f_3 = func_92(iVar137, bVar1, 0f, bVar138);
		uParam1->f_1686[bVar1 /*8*/].f_4 = func_100(iVar139, bVar1, -1, bVar140);
		iVar2 = 0;
		while (iVar2 < 1)
		{
			uParam1->f_1686[bVar1 /*8*/].f_6[iVar2] = func_100(iVar141[iVar2], bVar1, 0, iVar142[iVar2]);
			iVar2++;
		}
		bVar1++;
	}
}

struct<16> func_90(int iParam0, bool bParam1, char* sParam2, bool bParam3)
{
	struct<16> Var0;
	
	if (bParam3 && bParam1 < DATAFILE::DATAARRAY_GET_DICT(iParam0))
	{
		StringCopy(&Var0, DATAFILE::DATAARRAY_GET_VECTOR(iParam0, bParam1), 64);
	}
	else
	{
		StringCopy(&Var0, sParam2, 64);
	}
	return Var0;
}

int func_91(char* sParam0, bool bParam1, int iParam2, bool bParam3)
{
	if (bParam3 && bParam1 < DATAFILE::DATAARRAY_GET_DICT(sParam0))
	{
		return HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam0, bParam1);
	}
	return iParam2;
}

float func_92(int iParam0, bool bParam1, float fParam2, bool bParam3)
{
	if (bParam3 && bParam1 < DATAFILE::DATAARRAY_GET_DICT(iParam0))
	{
		return DATAFILE::DATAARRAY_GET_BOOL(iParam0, bParam1);
	}
	return fParam2;
}

Vector3 func_93(int iParam0, bool bParam1, struct<3> Param2, bool bParam3)
{
	if (bParam3 && bParam1 < DATAFILE::DATAARRAY_GET_DICT(iParam0))
	{
		return DATAFILE::DATAFILE_SELECT_UGC_STATS(iParam0, bParam1);
	}
	return Param2;
}

int func_94(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	if (bParam3 && bParam1 < DATAFILE::DATAARRAY_GET_DICT(iParam0))
	{
		return STREAMING::IS_MODEL_VALID(iParam0, bParam1);
	}
	return iParam2;
}

int func_95(void fParam0, char* sParam1, int iParam2)
{
	if (func_96(fParam0) && DATAFILE::DATADICT_GET_FLOAT(fParam0, sParam1) == 1)
	{
		return unk_0x98EB53BDF3A6E627(fParam0, sParam1);
	}
	return iParam2;
}

bool func_96(int iParam0)
{
	return iParam0 != 0;
}

float func_97(void fParam0, char* sParam1, float fParam2)
{
	if (func_96(fParam0) && DATAFILE::DATADICT_GET_FLOAT(fParam0, sParam1) == 3)
	{
		return SYSTEM::TO_FLOAT(fParam0, sParam1);
	}
	return fParam2;
}

int func_98(void fParam0, char* sParam1, int iParam2)
{
	if (func_96(fParam0) && DATAFILE::DATADICT_GET_FLOAT(fParam0, sParam1) == 2)
	{
		return DATAFILE::DATAFILE_DELETE_REQUESTED_FILE(fParam0, sParam1);
	}
	return iParam2;
}

int func_99(void fParam0, char* sParam1, int iParam2)
{
	if (func_96(fParam0) && DATAFILE::DATADICT_GET_FLOAT(fParam0, sParam1) == 2)
	{
		return DATAFILE::DATAFILE_DELETE_REQUESTED_FILE(fParam0, sParam1);
	}
	return iParam2;
}

int func_100(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	if (bParam3 && bParam1 < DATAFILE::DATAARRAY_GET_DICT(iParam0))
	{
		return STREAMING::IS_MODEL_VALID(iParam0, bParam1);
	}
	return iParam2;
}

struct<16> func_101(void fParam0, char* sParam1, char* sParam2)
{
	struct<16> Var0;
	
	if (func_96(iParam0) && DATAFILE::DATADICT_GET_FLOAT(iParam0, sParam1) == 4)
	{
		StringCopy(&Var0, DATAFILE::DATADICT_GET_TYPE(fParam0, sParam1), 64);
	}
	else
	{
		StringCopy(&Var0, sParam2, 64);
	}
	return Var0;
}

float func_102(void fParam0, char* sParam1)
{
	if (!func_96(fParam0))
	{
		return 0;
	}
	return DATAFILE::DATADICT_GET_FLOAT(fParam0, sParam1);
}

void func_103(var uParam0, void fParam1, char* sParam2)
{
	if (!func_96(fParam1))
	{
		return;
	}
	if (!func_96(*uParam0) && DATAFILE::DATADICT_GET_FLOAT(fParam1, sParam2) == 6)
	{
		*uParam0 = DATAFILE::DATADICT_GET_INT(fParam1, sParam2);
		if (!func_96(*uParam0))
		{
		}
	}
	if (!func_96(*uParam0))
	{
	}
}

void func_104()
{
	if (DATAFILE::DATAFILE_DELETE() != 0)
	{
		DATAFILE::DATAFILE_CREATE();
	}
}

var func_105(int iParam0, var uParam1, int iParam2)
{
	var uVar0;
	
	switch (iParam0)
	{
		case 150:
			uVar0 = func_111(uParam1, iParam2);
			break;
		
		case 26:
			uVar0 = func_110(uParam1, iParam2);
			break;
		
		case 24:
			uVar0 = func_109(uParam1, iParam2);
			break;
		
		case 256:
			uVar0 = func_108(uParam1, iParam2);
			break;
		
		case 258:
			uVar0 = func_107(uParam1, iParam2);
			break;
		
		case 259:
			uVar0 = func_106(uParam1, iParam2);
			break;
	}
	return uVar0;
}

char* func_106(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return "RE_Golden_Gun_1";
		
		case 1:
			return "RE_Golden_Gun_2";
		
		case 2:
			return "RE_Golden_Gun_3";
		
		case 3:
			return "RE_Golden_Gun_4";
		
		case 4:
			return "RE_Golden_Gun_5";
		
		case 5:
			return "RE_Golden_Gun_6";
		
		case 6:
			return "RE_Golden_Gun_7";
		
		case 7:
			return "RE_Golden_Gun_8";
		
		case 8:
			return "RE_Golden_Gun_9";
		
		case 9:
			return "RE_Golden_Gun_10";
		
		default:
	}
	return "";
}

char* func_107(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return "DJ_KM_Skate_Clothing_1";
		
		case 1:
			return "DJ_KM_Pizza";
		
		case 2:
			return "DJ_KM_Chakra_Stones_1";
		
		case 3:
			return "DJ_MM_Rental_Car_1";
		
		case 4:
			return "DJ_MM_Slippers_1";
		
		case 5:
			return "DJ_PT_Equipment_1";
		
		case 6:
			return "DJ_PT_Champagne_1";
		
		default:
	}
	return "LoadedDataTest3";
}

char* func_108(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 28:
			return "Prep_Pilot_1";
		
		case 29:
			return "Prep_Pilot_2";
		
		case 30:
			return "Prep_Pilot_3";
		
		case 31:
			return "Prep_Pilot2_1";
		
		case 32:
			return "Prep_Pilot2_2";
		
		case 33:
			return "Prep_Pilot2_3";
		
		case 0:
			return "Prep_Scoping_Intro_1";
		
		case 1:
			return "Prep_Scoping_Smuggler_1";
		
		case 2:
			return "Prep_Scoping_Smuggler_2";
		
		case 3:
			return "Prep_Scoping_Smuggler_3";
		
		case 4:
			return "Prep_Scoping_Smuggler_4";
		
		case 5:
			return "Prep_Scoping_Smuggler_5";
		
		case 6:
			return "Prep_Scoping_Party_1";
		
		case 7:
			return "Prep_Scoping_Return_1";
		
		case 8:
			return "Prep_Scoping_Island_1";
		
		case 9:
			return "Prep_Scoping_Island_2";
		
		case 10:
			return "Prep_Scoping_Island_3";
		
		case 11:
			return "Prep_Vehicles_Stealth_Heli_1";
		
		case 12:
			return "Prep_Vehicles_Stealth_Heli_2";
		
		case 13:
			return "Prep_Vehicles_Stealth_Heli_3";
		
		case 14:
			return "Prep_Vehicles_Stealth_Heli2_1";
		
		case 15:
			return "Prep_Vehicles_Gunboat_1";
		
		case 16:
			return "Prep_Vehicles_Gunboat2_1";
		
		case 17:
			return "Prep_Vehicles_Gunboat2_2";
		
		case 18:
			return "Prep_Vehicles_Gunboat2_3";
		
		case 19:
			return "Prep_Vehicles_Smuggler_Boat_1";
		
		case 20:
			return "Prep_Vehicles_Smuggler_Boat_2";
		
		case 21:
			return "Prep_Vehicles_Smuggler_Boat_3";
		
		case 22:
			return "Prep_Vehicles_Smuggler_Plane_1";
		
		case 23:
			return "Prep_Vehicles_Smuggler_Plane_2";
		
		case 25:
			return "Prep_Vehicles_Stealth_Plane_1";
		
		case 26:
			return "Prep_Vehicles_Stealth_Plane_2";
		
		case 27:
			return "Prep_Vehicles_Stealth_Plane_3";
		
		case 34:
			return "Prep_Equipment_Demolition_Charges_1";
		
		case 35:
			return "Prep_Equipment_Demolition_Charges_2";
		
		case 36:
			return "Prep_Equipment_Acetylene_Torch_1";
		
		case 37:
			return "Prep_Equipment_Acetylene_Torch_2";
		
		case 38:
			return "Prep_Equipment_Acetylene_Torch_3";
		
		case 39:
			return "Prep_Equipment_Plasma_Cutter_1";
		
		case 40:
			return "Prep_Equipment_Plasma_Cutter_2";
		
		case 41:
			return "Prep_Equipment_Plasma_Cutter_3";
		
		case 42:
			return "Prep_Equipment_Safe_Codes_1";
		
		case 43:
			return "Prep_Equipment_Safe_Codes_2";
		
		case 44:
			return "Prep_Equipment_Safe_Codes_3";
		
		case 45:
			return "Prep_Equipment_Fingerprint_Cracker_1";
		
		case 46:
			return "Prep_Equipment_Fingerprint_Cracker_2";
		
		case 47:
			return "Prep_Equipment_Fingerprint_Cracker_3";
		
		case 48:
			return "Prep_Equipment_Sonar_Jammer_1";
		
		case 49:
			return "Prep_Equipment_Sonar_Jammer_2";
		
		case 50:
			return "Prep_Equipment_Sonar_Jammer_3";
		
		case 51:
			return "Prep_Weapons_1";
		
		case 52:
			return "Prep_Weapons_2";
		
		case 53:
			return "Prep_Weapons_3";
		
		case 54:
			return "Prep_Weapons2_1";
		
		case 55:
			return "Prep_Weapons2_2";
		
		case 56:
			return "Prep_Weapons2_3";
		
		case 57:
			return "Prep_Disruption_Weapons_1";
		
		case 58:
			return "Prep_Disruption_Weapons_2";
		
		case 59:
			return "Prep_Disruption_Weapons_3";
		
		case 60:
			return "Prep_Disruption_Armor_1";
		
		case 61:
			return "Prep_Disruption_Armor_2";
		
		case 62:
			return "Prep_Disruption_Armor_3";
		
		case 63:
			return "Prep_Disruption_Backup_1";
		
		case 64:
			return "Prep_Disruption_Backup_2";
		
		case 65:
			return "Prep_Disruption_Backup_3";
		
		default:
	}
	return "";
}

char* func_109(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return "RE_DrugVehicle_1";
		
		case 1:
			return "RE_DrugVehicle_2";
		
		case 2:
			return "RE_DrugVehicle_3";
		
		case 3:
			return "RE_DrugVehicle_4";
		
		case 4:
			return "RE_DrugVehicle_5";
		
		case 5:
			return "RE_DrugVehicle_6";
		
		case 6:
			return "RE_DrugVehicle_7";
		
		case 7:
			return "RE_DrugVehicle_8";
		
		case 8:
			return "RE_DrugVehicle_9";
		
		case 9:
			return "RE_DrugVehicle_10";
		
		case 10:
			return "RE_DrugVehicle_11";
		
		case 11:
			return "RE_DrugVehicle_12";
		
		case 12:
			return "RE_DrugVehicle_13";
		
		case 13:
			return "RE_DrugVehicle_14";
		
		case 14:
			return "RE_DrugVehicle_15";
		
		case 15:
			return "RE_DrugVehicle_16";
		
		case 16:
			return "RE_DrugVehicle_17";
		
		case 17:
			return "RE_DrugVehicle_18";
		
		case 18:
			return "RE_DrugVehicle_19";
		
		case 19:
			return "RE_DrugVehicle_20";
		
		case 20:
			return "RE_DrugVehicle_21";
		
		case 21:
			return "RE_DrugVehicle_22";
		
		case 22:
			return "RE_DrugVehicle_23";
		
		case 23:
			return "RE_DrugVehicle_24";
		
		case 24:
			return "RE_DrugVehicle_25";
		
		case 25:
			return "RE_DrugVehicle_26";
		
		case 26:
			return "RE_DrugVehicle_27";
		
		case 27:
			return "RE_DrugVehicle_28";
		
		case 28:
			return "RE_DrugVehicle_29";
		
		case 29:
			return "RE_DrugVehicle_30";
		
		default:
	}
	return "";
}

char* func_110(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return "RE_MovieProps_DrinksGlobe_1";
		
		case 1:
			return "RE_MovieProps_DrinksGlobe_2";
		
		case 2:
			return "RE_MovieProps_DrinksGlobe_3";
		
		case 3:
			return "RE_MovieProps_Sarcophagus_1";
		
		case 4:
			return "RE_MovieProps_Sarcophagus_2";
		
		case 5:
			return "RE_MovieProps_Sarcophagus_3";
		
		case 6:
			return "RE_MovieProps_TigerRug_1";
		
		case 7:
			return "RE_MovieProps_TigerRug_2";
		
		case 8:
			return "RE_MovieProps_TigerRug_3";
		
		default:
	}
	return "";
}

char* func_111(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 1:
			return "BB_FactoryRaid_1";
			break;
		
		case 2:
			return "BB_FactoryRaid_2";
			break;
		
		case 3:
			return "BB_FactoryRaid_3";
			break;
		
		case 0:
			return "BB_AircraftCarrier";
			break;
		
		case 4:
			return "BB_CapturedUFO";
			break;
	}
	return "";
}

int func_112(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 181:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				default:
			}
			break;
		
		case 256:
			return func_42(iParam1, iParam2);
		
		case 258:
			return func_113(iParam1, iParam2);
	}
	return 0;
}

int func_113(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (iVar0 != iParam1 && Global_1652336.f_11.f_643[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_114(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 181:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				default:
			}
			break;
		
		case 150:
			switch (iParam1)
			{
				case 3:
					return 0;
					break;
			}
			break;
	}
	return 0;
}

int func_115(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 150:
			switch (iParam1)
			{
				case 0:
					return 1;
				
				case 1:
					return 3;
				
				case 2:
					return 1;
				
				default:
			}
			break;
		
		case 24:
			return 30;
		
		case 26:
			switch (iParam1)
			{
				case 0:
					return 3;
				
				case 1:
					return 3;
				
				case 2:
					return 3;
				
				default:
			}
			break;
		
		case 256:
			switch (iParam1)
			{
				case 12:
				case 13:
				case 5:
				case 8:
				case 9:
				case 15:
				case 16:
				case 17:
				case 18:
				case 19:
				case 20:
				case 21:
				case 22:
				case 23:
				case 24:
				case 11:
				case 4:
					return 3;
				
				case 10:
				case 14:
					return 2;
				
				case 1:
					return 5;
				
				default:
			}
			return 1;
			break;
		
		case 258:
			switch (iParam1)
			{
				case 0:
				case 1:
				case 2:
				case 3:
				case 4:
				case 5:
				case 6:
					return 1;
				
				default:
			}
			break;
		
		case 259:
			return 10;
	}
	return -1;
}

int func_116(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 150:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 1;
				
				case 2:
					return 4;
				
				default:
			}
			break;
		
		case 26:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 3;
				
				case 2:
					return 6;
				
				default:
			}
			break;
		
		case 24:
			return 0;
		
		case 256:
			switch (iParam1)
			{
				case 12:
					return 28;
				
				case 13:
					return 31;
				
				case 0:
					return 0;
				
				case 1:
					return 1;
				
				case 2:
					return 6;
				
				case 3:
					return 7;
				
				case 4:
					return 8;
				
				case 5:
					return 11;
				
				case 6:
					return 14;
				
				case 7:
					return 15;
				
				case 8:
					return 16;
				
				case 9:
					return 19;
				
				case 10:
					return 22;
				
				case 11:
					return 25;
				
				case 14:
					return 34;
				
				case 15:
					return 36;
				
				case 16:
					return 39;
				
				case 17:
					return 42;
				
				case 18:
					return 45;
				
				case 19:
					return 48;
				
				case 20:
					return 51;
				
				case 21:
					return 54;
				
				case 22:
					return 57;
				
				case 23:
					return 60;
				
				case 24:
					return 63;
				
				default:
			}
			break;
		
		case 258:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 1;
				
				case 2:
					return 2;
				
				case 3:
					return 3;
				
				case 4:
					return 4;
				
				case 5:
					return 5;
				
				case 6:
					return 6;
				
				default:
			}
			break;
		
		case 259:
			return 0;
	}
	return -1;
}

int func_117(int iParam0, int iParam1, var uParam2)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < func_36(iParam0))
	{
		if (func_145(iParam0, iVar0))
		{
		}
		else if (!func_119(iParam0, iVar0, iParam1))
		{
		}
		else
		{
			func_118(uParam2, iVar0);
		}
		iVar0++;
	}
	return func_33(iParam0, uParam2);
}

void func_118(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam1 / 32);
	iVar1 = (iParam1 % 32);
	unk_0xBE20AB8238688965(uParam0[iVar0], iVar1);
}

int func_119(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 150:
			switch (iParam1)
			{
				case 2:
					iVar0 = func_133(func_134());
					return (iVar0 >= 19 || iVar0 <= 3);
					break;
			}
			break;
		
		case 256:
			return func_127(iParam1, iParam2);
		
		case 258:
			return func_120(iParam1, iParam2);
	}
	return 1;
}

int func_120(int iParam0, int iParam1)
{
	if (!func_123())
	{
		return 0;
	}
	switch (iParam0)
	{
		case 0:
			if (Global_262145.f_24208)
			{
				return 0;
			}
			if (func_122(iParam1, 0))
			{
				return 0;
			}
			if (!func_43(iParam1))
			{
				return 0;
			}
			if (Global_1316844.f_2 == 4)
			{
				return 0;
			}
			break;
		
		case 1:
			if (Global_262145.f_24208)
			{
				return 0;
			}
			if (func_122(iParam1, 1))
			{
				return 0;
			}
			if (!func_43(iParam1))
			{
				return 0;
			}
			if (Global_1316844.f_2 == 4)
			{
				return 0;
			}
			break;
		
		case 2:
			if (Global_262145.f_24208)
			{
				return 0;
			}
			if (func_122(iParam1, 2))
			{
				return 0;
			}
			if (!func_43(iParam1))
			{
				return 0;
			}
			if (Global_1316844.f_2 == 4)
			{
				return 0;
			}
			break;
		
		case 3:
			if (Global_262145.f_24207)
			{
				return 0;
			}
			if (func_122(iParam1, 3))
			{
				return 0;
			}
			if (!func_121(iParam1))
			{
				return 0;
			}
			break;
		
		case 4:
			if (Global_262145.f_24207)
			{
				return 0;
			}
			if (func_122(iParam1, 4))
			{
				return 0;
			}
			if (!func_121(iParam1))
			{
				return 0;
			}
			break;
		
		case 5:
			if (Global_262145.f_24209)
			{
				return 0;
			}
			if (func_122(iParam1, 5))
			{
				return 0;
			}
			if (!func_121(iParam1))
			{
				return 0;
			}
			break;
		
		case 6:
			if (Global_262145.f_24209)
			{
				return 0;
			}
			if (func_122(iParam1, 6))
			{
				return 0;
			}
			if (!func_121(iParam1))
			{
				return 0;
			}
			break;
		
		default:
			return 0;
	}
	return 1;
}

int func_121(int iParam0)
{
	if (iParam0 != func_146())
	{
		return Global_1590682[iParam0 /*883*/].f_274.f_369 != 0;
	}
	return 0;
}

int func_122(int iParam0, bool bParam1)
{
	if (iParam0 != -1)
	{
		return unk_0xCE990E643CD9D0E5(Global_1706028[iParam0 /*53*/].f_3, iParam1);
	}
	return 0;
}

bool func_123()
{
	return func_124(30309, -1, -1);
}

bool func_124(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	bVar0 = false;
	if (iParam1 == -1)
	{
		iParam1 = func_52();
	}
	iVar1 = func_126(iParam0, iParam1);
	iVar2 = func_125(iParam0);
	if (0 != iVar1)
	{
		bVar0 = DECORATOR::DECOR_IS_REGISTERED_AS_TYPE(iVar1, iVar2, iParam2);
	}
	return bVar0;
}

int func_125(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = ((iParam0 - 0) - DECORATOR::DECOR_EXIST_ON((iParam0 - 0)) * 64);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = ((iParam0 - 192) - DECORATOR::DECOR_EXIST_ON((iParam0 - 192)) * 64);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = ((iParam0 - 513) - DECORATOR::DECOR_EXIST_ON((iParam0 - 513)) * 64);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = ((iParam0 - 705) - DECORATOR::DECOR_EXIST_ON((iParam0 - 705)) * 64);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = ((iParam0 - 2919) - DECORATOR::DECOR_EXIST_ON((iParam0 - 2919)) * 64);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = ((iParam0 - 3111) - DECORATOR::DECOR_EXIST_ON((iParam0 - 3111)) * 64);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = ((iParam0 - 4335) - DECORATOR::DECOR_EXIST_ON((iParam0 - 4335)) * 64);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = ((iParam0 - 4207) - DECORATOR::DECOR_EXIST_ON((iParam0 - 4207)) * 64);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = ((iParam0 - 6029) - DECORATOR::DECOR_EXIST_ON((iParam0 - 6029)) * 64);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = ((iParam0 - 7385) - DECORATOR::DECOR_EXIST_ON((iParam0 - 7385)) * 64);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = ((iParam0 - 7321) - DECORATOR::DECOR_EXIST_ON((iParam0 - 7321)) * 64);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = ((iParam0 - 9361) - DECORATOR::DECOR_EXIST_ON((iParam0 - 9361)) * 64);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = ((iParam0 - 15369) - DECORATOR::DECOR_EXIST_ON((iParam0 - 15369)) * 64);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = ((iParam0 - 15562) - DECORATOR::DECOR_EXIST_ON((iParam0 - 15562)) * 64);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = ((iParam0 - 15946) - DECORATOR::DECOR_EXIST_ON((iParam0 - 15946)) * 64);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = ((iParam0 - 18098) - DECORATOR::DECOR_EXIST_ON((iParam0 - 18098)) * 64);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar0 = ((iParam0 - 22066) - DECORATOR::DECOR_EXIST_ON((iParam0 - 22066)) * 64);
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar0 = ((iParam0 - 24962) - DECORATOR::DECOR_EXIST_ON((iParam0 - 24962)) * 64);
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		iVar0 = ((iParam0 - 26810) - DECORATOR::DECOR_EXIST_ON((iParam0 - 26810)) * 64);
	}
	else if (iParam0 >= 28098 && iParam0 < 28354)
	{
		iVar0 = ((iParam0 - 28098) - DECORATOR::DECOR_EXIST_ON((iParam0 - 28098)) * 64);
	}
	else if (iParam0 >= 28355 && iParam0 < 28483)
	{
		iVar0 = ((iParam0 - 28355) - DECORATOR::DECOR_EXIST_ON((iParam0 - 28355)) * 64);
	}
	else if (iParam0 >= 30227 && iParam0 < 30355)
	{
		iVar0 = ((iParam0 - 30227) - DECORATOR::DECOR_EXIST_ON((iParam0 - 30227)) * 64);
	}
	else if (iParam0 >= 30355 && iParam0 < 30483)
	{
		iVar0 = ((iParam0 - 30355) - DECORATOR::DECOR_EXIST_ON((iParam0 - 30355)) * 64);
	}
	else if (iParam0 >= 30515 && iParam0 < 30707)
	{
		iVar0 = ((iParam0 - 30515) - DECORATOR::DECOR_EXIST_ON((iParam0 - 30515)) * 64);
	}
	return iVar0;
}

bool func_126(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_52();
	}
	bVar0 = false;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		bVar0 = DECORATOR::DECOR_GET_INT((iParam0 - 0), 0, 1, iParam1);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		bVar0 = DECORATOR::DECOR_GET_INT((iParam0 - 192), 1, 1, iParam1);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		bVar0 = DECORATOR::DECOR_GET_INT((iParam0 - 513), 0, 0, 0);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		bVar0 = DECORATOR::DECOR_GET_INT((iParam0 - 705), 1, 0, 0);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		bVar0 = NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE((iParam0 - 2919), 0, 0, 0);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		bVar0 = NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE((iParam0 - 3111), 0, 1, iParam1);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		bVar0 = PED::IS_PED_DEAD_OR_DYING((iParam0 - 4335), false, 0, 0, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		bVar0 = PED::IS_PED_DEAD_OR_DYING((iParam0 - 4207), false, 1, iParam1, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		bVar0 = PED::IS_PED_DEAD_OR_DYING((iParam0 - 6029), false, 1, iParam1, "_NGTATPSTAT_BOOL");
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		bVar0 = PED::IS_PED_DEAD_OR_DYING((iParam0 - 7321), false, 0, 0, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		bVar0 = PED::IS_PED_DEAD_OR_DYING((iParam0 - 7385), false, 1, iParam1, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		bVar0 = PED::IS_PED_DEAD_OR_DYING((iParam0 - 9361), false, 1, iParam1, "_DLCBIKEPSTAT_BOOL");
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		bVar0 = PED::IS_PED_DEAD_OR_DYING((iParam0 - 15369), false, 1, iParam1, "_DLCGUNPSTAT_BOOL");
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		bVar0 = PED::IS_PED_DEAD_OR_DYING((iParam0 - 15562), false, 1, iParam1, "_GUNTATPSTAT_BOOL");
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		bVar0 = PED::IS_PED_DEAD_OR_DYING((iParam0 - 15946), false, 1, iParam1, "_DLCSMUGCHARPSTAT_BOOL");
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		bVar0 = PED::IS_PED_DEAD_OR_DYING((iParam0 - 18098), false, 1, iParam1, "_GANGOPSPSTAT_BOOL");
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		bVar0 = PED::IS_PED_DEAD_OR_DYING((iParam0 - 22066), false, 1, iParam1, "_BUSINESSBATPSTAT_BOOL");
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		bVar0 = PED::IS_PED_DEAD_OR_DYING((iParam0 - 24962), false, 1, iParam1, "_ARENAWARSPSTAT_BOOL");
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		bVar0 = PED::IS_PED_DEAD_OR_DYING((iParam0 - 26810), false, 1, iParam1, "_CASINOPSTAT_BOOL");
	}
	else if (iParam0 >= 28098 && iParam0 < 28354)
	{
		bVar0 = PED::IS_PED_DEAD_OR_DYING((iParam0 - 28098), false, 1, iParam1, "_CASINOHSTPSTAT_BOOL");
	}
	else if (iParam0 >= 28355 && iParam0 < 28483)
	{
		bVar0 = PED::IS_PED_DEAD_OR_DYING((iParam0 - 28355), false, 1, iParam1, "_HEIST3TATTOOSTAT_BOOL");
	}
	else if (iParam0 >= 30227 && iParam0 < 30355)
	{
		bVar0 = PED::IS_PED_DEAD_OR_DYING((iParam0 - 30227), false, 1, iParam1, "_SU20PSTAT_BOOL");
	}
	else if (iParam0 >= 30355 && iParam0 < 30483)
	{
		bVar0 = PED::IS_PED_DEAD_OR_DYING((iParam0 - 30355), false, 1, iParam1, "_SU20TATTOOSTAT_BOOL");
	}
	else if (iParam0 >= 30515 && iParam0 < 30707)
	{
		bVar0 = PED::IS_PED_DEAD_OR_DYING((iParam0 - 30515), false, 1, iParam1, "_HISLANDPSTAT_BOOL");
	}
	return bVar0;
}

int func_127(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_132(iParam1);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (func_131(iParam0) != iVar0)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 2:
		case 4:
			return 0;
		
		case 0:
			if (func_43(iParam1))
			{
				return 0;
			}
			if (func_128(iParam1, 0))
			{
				return 0;
			}
			return 1;
			break;
		
		case 1:
			if (!func_43(iParam1))
			{
				return 0;
			}
			if (func_128(iParam1, 0))
			{
				return 0;
			}
			break;
		
		case 3:
			return func_128(iParam1, 0);
	}
	return 1;
}

int func_128(int iParam0, int iParam1)
{
	if (iParam0 != -1)
	{
		return func_129(iParam0, func_130(iParam1));
	}
	return 0;
}

int func_129(int iParam0, bool bParam1)
{
	if (iParam0 != -1)
	{
		return unk_0xCE990E643CD9D0E5(Global_1706028[iParam0 /*53*/].f_2, iParam1);
	}
	return 0;
}

int func_130(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		
		case 7:
			return 1;
		
		case 1:
			return 2;
		
		case 5:
			return 3;
		
		case 2:
			return 4;
		
		case 3:
			return 5;
		
		case 4:
			return 6;
		
		case 6:
			return 7;
		
		case 8:
			return 8;
		
		case 9:
			return 9;
		
		case 10:
			return 10;
		
		case 11:
			return 10;
		
		case 12:
			return 11;
		
		case 13:
			return 12;
		
		case 14:
			return 13;
		
		case 15:
			return 14;
		
		case 16:
			return 15;
		
		default:
	}
	return -1;
}

int func_131(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			return 0;
		
		case 11:
			return 1;
		
		case 5:
		case 6:
			return 2;
		
		case 7:
		case 8:
			return 3;
		
		case 9:
			return 4;
		
		case 10:
			return 5;
		
		case 12:
		case 13:
			return 6;
		
		case 19:
			return 7;
		
		case 14:
			return 8;
		
		case 15:
			return 9;
		
		case 16:
			return 10;
		
		case 17:
			return 11;
		
		case 18:
			return 12;
		
		case 20:
		case 21:
			return 13;
		
		case 22:
			return 14;
		
		case 23:
			return 15;
		
		case 24:
			return 16;
		
		default:
	}
	return -1;
}

var func_132(int iParam0)
{
	return Global_1630317[iParam0 /*595*/].f_11.f_305;
}

int func_133(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 9) & 31;
}

int func_134()
{
	var uVar0;
	
	func_144(&uVar0, CLOCK::GET_CLOCK_MINUTES());
	func_143(&uVar0, CLOCK::GET_CLOCK_HOURS());
	func_142(&uVar0, CLOCK::GET_CLOCK_DAY_OF_MONTH());
	func_137(&uVar0, CLOCK::GET_CLOCK_MONTH());
	func_136(&uVar0, CLOCK::GET_CLOCK_YEAR());
	func_135(&uVar0, SYSTEM::SHIFT_LEFT());
	return uVar0;
}

void func_135(var uParam0, int iParam1)
{
	if (iParam1 <= 0)
	{
		return;
	}
	if (iParam1 > 2043 || iParam1 < 1979)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 2080374784);
	if (iParam1 < 2011)
	{
		*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT((2011 - iParam1), 26));
		*uParam0 |= -2147483648;
	}
	else
	{
		*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT((iParam1 - 2011), 26));
		*uParam0 = (*uParam0 - *uParam0 & -2147483648);
	}
}

void func_136(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_137(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_141(*uParam0);
	iVar1 = func_139(*uParam0);
	if (iParam1 < 1 || iParam1 > func_138(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

int func_138(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		iParam1 = 0;
	}
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 11:
			return 31;
			break;
		
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
			break;
		
		case 1:
			if ((iParam1 % 4) == 0)
			{
				if ((iParam1 % 100) != 0)
				{
					return 29;
				}
				else if ((iParam1 % 400) == 0)
				{
					return 29;
				}
			}
			return 28;
			break;
	}
	return 30;
}

var func_139(int iParam0)
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * func_140(unk_0xCE990E643CD9D0E5(iParam0, 31), -1, 1)) + 2011;
}

int func_140(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_141(var uParam0)
{
	return uParam0 & 15;
}

void func_142(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_143(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_144(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

int func_145(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 181:
			iParam1 = iParam1;
			break;
		
		case 150:
			switch (iParam1)
			{
				case 0:
					return !Global_262145.f_28928;
				
				case 2:
					return !Global_262145.f_28936;
				
				case 1:
					return !Global_262145.f_28932;
				
				default:
			}
			break;
	}
	return 0;
}

int func_146()
{
	return -1;
}

int func_147()
{
	return func_148(Global_2508189.f_3.f_1);
}

int func_148(int iParam0)
{
	switch (iParam0)
	{
		case 152:
			return 15;
		
		case 159:
			return 8;
		
		case 153:
			return 14;
		
		case 157:
			return 122;
		
		case 160:
			return 1;
		
		case 158:
			return 5;
		
		case 161:
			return 6;
		
		case 154:
			return 11;
		
		case 162:
			return 0;
		
		case 163:
			return 2;
		
		case 155:
			return 13;
		
		case 164:
			return 3;
		
		case 156:
			return 12;
		
		case 49:
			return 148;
		
		case 52:
			return 151;
		
		case 53:
			return 152;
		
		case 54:
			return 157;
		
		case 55:
			return 153;
		
		case 56:
			return 154;
		
		case 57:
			return 155;
		
		case 58:
			return 159;
		
		case 51:
			return 162;
		
		case 60:
			return 142;
		
		case 62:
			return 160;
		
		case 63:
			return 164;
		
		case 64:
			return 163;
		
		case 65:
			return 166;
		
		case 66:
			return 167;
		
		case 67:
			return 168;
		
		case 68:
			return 169;
		
		case 69:
			return 170;
		
		case 70:
			return 171;
		
		case 71:
			return 172;
		
		case 72:
			return 173;
		
		case 73:
			return 178;
		
		case 74:
			return 188;
		
		case 75:
			return 214;
		
		case 76:
			return 215;
		
		case 77:
			return 216;
		
		case 78:
			return 217;
		
		case joaat("MPSV_LP0_31"):
			return 218;
		
		case 80:
			return 219;
		
		case 81:
			return 220;
		
		case 82:
			return 221;
		
		case 84:
			return 179;
		
		case 83:
			return 189;
		
		case 85:
			return 180;
		
		case 87:
			return 182;
		
		case 88:
			return 183;
		
		case 89:
			return 185;
		
		case 90:
			return 186;
		
		case 91:
			return 190;
		
		case 92:
			return 191;
		
		case 93:
			return 192;
		
		case 94:
			return 193;
		
		case 102:
			return 205;
		
		case 95:
			return 194;
		
		case 96:
			return 197;
		
		case 97:
			return 198;
		
		case 99:
			return 199;
		
		case 100:
			return 200;
		
		case 101:
			return 201;
		
		case 103:
			return 207;
		
		case 104:
			return 208;
		
		case 105:
			return 209;
		
		case 106:
			return 210;
		
		case 98:
			return 195;
		
		case 107:
			return 225;
		
		case 108:
			return 226;
		
		case 109:
			return 227;
		
		case 110:
			return 229;
		
		case 111:
			return 230;
		
		case 113:
			return 233;
		
		case 115:
			return 237;
		
		case 116:
			return 238;
		
		case 117:
			return 239;
		
		case 118:
			return 240;
		
		case 119:
			return 241;
		
		case 120:
			return 242;
		
		case 121:
			return 244;
		
		case 122:
			return 248;
		
		case 123:
			return 249;
		
		case 124:
			return 250;
		
		case 125:
			return 243;
		
		case 126:
			return 158;
		
		case 86:
			return 181;
		
		case 127:
			return 150;
		
		case 128:
			return 24;
		
		case 129:
			return 26;
		
		case 130:
			return 256;
		
		case 131:
			return 258;
		
		case 133:
			return 259;
		
		default:
	}
	return 262;
}

int func_149(int iParam0)
{
	switch (iParam0)
	{
		case 20:
			return 1;
		
		default:
	}
	return 0;
}

bool func_150(bool bParam0)
{
	return unk_0xCE990E643CD9D0E5(Global_2508189.f_1, iParam0);
}

void func_151()
{
	func_152(func_13(INTERIOR::GET_INTERIOR_FROM_ENTITY(func_21(), -1, 0)), 0);
	if (NETWORK::_NETWORK_GET_ROS_PRIVILEGE_25(0, 100) < Global_262145.f_127)
	{
		if (NETWORK::NETWORK_GET_NUM_PARTICIPANTS() >= Global_262145.f_128)
		{
			func_152(func_13(INTERIOR::GET_INTERIOR_FROM_ENTITY(func_21(), -1, 0)), 1);
			func_17(4);
		}
	}
}

void func_152(int iParam0, int iParam1)
{
	struct<3> Var0;
	
	Var0.x = 764638896;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = iParam1;
	if (!iParam0 == 0)
	{
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Var0, 3, iParam0);
	}
}

int func_153(struct<2> Param0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;
	
	iLocal_97 = 0;
	iVar0 = 0;
	while (iVar0 < func_155())
	{
		if (AUDIO::PLAY_STREAM_FROM_VEHICLE(NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar0)) && func_57(NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar0), 1, 1))
		{
			if (unk_0xCE990E643CD9D0E5(Local_106[iVar0 /*3*/].f_1, false))
			{
				if (!unk_0xCE990E643CD9D0E5(Local_106[iVar0 /*3*/].f_1, 4))
				{
					iLocal_97++;
				}
				if (Param0.f_1 == 18)
				{
					if (NETWORK::NETWORK_GET_NUM_PARTICIPANTS() >= func_154(Param0))
					{
						return 1;
					}
					else
					{
						return 2;
					}
				}
				if (iLocal_97 >= func_154(Param0))
				{
					return 1;
				}
			}
			else if (unk_0xCE990E643CD9D0E5(Local_106[iVar0 /*3*/].f_1, true))
			{
			}
			else if (!unk_0xCE990E643CD9D0E5(Local_106[iVar0 /*3*/].f_1, true))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 2;
}

int func_154(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		
		case 1:
			return Global_262145.f_4720;
		
		case 2:
			return 1;
		
		case 3:
			return 1;
		
		case 4:
			return 2;
		
		case 5:
			return 1;
		
		case 6:
			return 1;
		
		case 7:
			return 1;
		
		case 8:
			return Global_262145.f_11123;
		
		case 9:
			return Global_262145.f_11028;
		
		case 10:
			return Global_262145.f_11075;
		
		case 11:
			return Global_262145.f_11096;
		
		case 12:
			return Global_262145.f_11146;
		
		case 13:
			return Global_262145.f_11164;
		
		case 14:
			return Global_262145.f_11179;
		
		case 15:
			return Global_262145.f_11190;
		
		case 16:
			return Global_262145.f_11198;
		
		case 17:
			return Global_262145.f_11212;
		
		case 18:
			return Global_262145.f_11221;
		
		case 19:
			return Global_262145.f_24010;
		
		case 20:
			return Global_262145.f_24010;
		
		default:
	}
	return 0;
}

int func_155()
{
	if (Global_2459539)
	{
		return 32;
	}
	return (32 - Global_2459540);
}

int func_156()
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	iVar0 = 0;
	while (iVar0 < 21)
	{
		fVar1 = (fVar1 + Global_2508189.f_8[iVar0 /*5*/].f_2);
		iVar0++;
	}
	fVar3 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, fVar1);
	iVar0 = 0;
	while (iVar0 < 21)
	{
		fVar2 = (fVar2 + Global_2508189.f_8[iVar0 /*5*/].f_2);
		if (fVar3 < fVar2)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_157(int iParam0, float fParam1)
{
	if (iParam0 != -1)
	{
		Global_2508189.f_8[iParam0 /*5*/].f_2 = fParam1;
	}
}

float func_158(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_262145.f_8154;
		
		case 1:
			return Global_262145.f_8151;
		
		case 2:
			return Global_262145.f_8152;
		
		case 3:
			return Global_262145.f_8153;
		
		case 4:
			return Global_262145.f_8155;
		
		case 5:
			return Global_262145.f_8156;
		
		case 6:
			return Global_262145.f_8157;
		
		case 7:
			return Global_262145.f_8574;
		
		case 8:
			return Global_262145.f_10184;
		
		case 9:
			return Global_262145.f_10186;
		
		case 10:
			return Global_262145.f_10182;
		
		case 11:
			return Global_262145.f_10189;
		
		case 12:
			return Global_262145.f_10631;
		
		case 13:
			return Global_262145.f_10633;
		
		case 14:
			return Global_262145.f_10634;
		
		case 15:
			return Global_262145.f_10635;
		
		case 16:
			return Global_262145.f_10636;
		
		case 17:
			return Global_262145.f_10640;
		
		case 18:
			return Global_262145.f_11222;
		
		case 19:
			return Global_262145.f_24009;
		
		case 20:
			return Global_262145.f_28927;
		
		default:
	}
	return 0f;
}

int func_159(int iParam0)
{
	if (func_167(iParam0))
	{
		return 0;
	}
	if (func_166(iParam0))
	{
		return 0;
	}
	if (func_165(iParam0))
	{
		return 0;
	}
	if (!func_71(func_164(iParam0), func_163(iParam0), func_162(iParam0), 1, 1))
	{
		return 0;
	}
	if (func_161(iParam0))
	{
		return 0;
	}
	if (!func_160(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_160(int iParam0)
{
	return 1;
}

int func_161(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_262145.f_6664;
		
		case 1:
			return Global_262145.f_6661;
		
		case 2:
			return Global_262145.f_6662;
		
		case 3:
			return Global_262145.f_6663;
		
		case 4:
			return Global_262145.f_8241;
		
		case 5:
			return Global_262145.f_8096;
		
		case 6:
			return Global_262145.f_8101;
		
		case 7:
			return Global_262145.f_8106;
		
		case 8:
			return Global_262145.f_10185;
		
		case 9:
			return Global_262145.f_10187;
		
		case 10:
			return Global_262145.f_10183;
		
		case 11:
			return (Global_262145.f_11369 && Global_262145.f_11368);
		
		case 12:
			return Global_262145.f_10625;
		
		case 13:
			return Global_262145.f_10627;
		
		case 14:
			return Global_262145.f_10628;
		
		case 15:
			return Global_262145.f_10629;
		
		case 16:
			return Global_262145.f_10630;
		
		case 17:
			return Global_262145.f_10639;
		
		case 18:
			return Global_262145.f_11223;
		
		case 19:
			return 0;
		
		case 20:
			return 0;
		
		default:
	}
	return 0;
}

int func_162(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		
		case 1:
			return 3;
		
		case 2:
			return 1;
		
		case 3:
			return 0;
		
		case 4:
			return 0;
		
		case 5:
			return 0;
		
		case 6:
			return 0;
		
		case 7:
			return 0;
		
		case 8:
			return 0;
		
		case 9:
			return 0;
		
		case 10:
			return 0;
		
		case 11:
			return 0;
		
		case 12:
			return 0;
		
		case 13:
			return 0;
		
		case 14:
			return 1;
		
		case 15:
			return 1;
		
		case 16:
			return 0;
		
		case 17:
			return 0;
		
		case 18:
			return 0;
		
		case 19:
			return 0;
		
		case 20:
			return 0;
		
		default:
	}
	return 0;
}

int func_163(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		
		case 1:
			return 1;
		
		case 2:
			return 1;
		
		case 3:
			return 1;
		
		case 4:
			return 1;
		
		case 5:
			return 1;
		
		case 6:
			return 0;
		
		case 7:
			return 1;
		
		case 8:
			return 10;
		
		case 9:
			return 10;
		
		case 10:
			return 1;
		
		case 11:
			return 6;
		
		case 12:
			return 0;
		
		case 13:
			return 1;
		
		case 14:
			return 0;
		
		case 15:
			return 0;
		
		case 16:
			return 0;
		
		case 17:
			return 0;
		
		case 18:
			return 0;
		
		case 19:
			return 0;
		
		case 20:
			return 0;
		
		default:
	}
	return 0;
}

int func_164(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		
		case 1:
			return 4;
		
		case 2:
			return 2;
		
		case 3:
			return 0;
		
		case 4:
			return 1;
		
		case 5:
			return 1;
		
		case 6:
			return 0;
		
		case 7:
			return 4;
		
		case 8:
			return 0;
		
		case 9:
			return 0;
		
		case 10:
			return 0;
		
		case 11:
			return 24;
		
		case 12:
			return 0;
		
		case 13:
			return 0;
		
		case 14:
			return 0;
		
		case 15:
			return 0;
		
		case 16:
			return 0;
		
		case 17:
			return 0;
		
		case 19:
			return 0;
		
		case 20:
			return 0;
		
		default:
	}
	return 0;
}

int func_165(int iParam0)
{
	if (Global_2508189.f_182 == -1)
	{
		return 0;
	}
	if (func_5(Global_2508189.f_182))
	{
		if (func_5(iParam0))
		{
			return 1;
		}
	}
	else if (!func_5(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_166(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 9 || func_5(iParam0))
	{
		return 0;
	}
	if (Global_262145.f_8112 > 0 && Global_262145.f_8112 <= 21)
	{
		if (!Global_2508189.f_114[(Global_262145.f_8112 - 1)] == -1)
		{
			iVar0 = 0;
			while (iVar0 < Global_262145.f_8112)
			{
				if (Global_2508189.f_114[iVar0] == iParam0)
				{
					return 1;
				}
				iVar0++;
			}
		}
	}
	return 0;
}

int func_167(int iParam0)
{
	if (iParam0 == 12)
	{
		if (NETWORK::NETWORK_IS_SCRIPT_ACTIVE("AM_PENNED_IN", -1, false, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_168(int iParam0)
{
	Global_2508189.f_2 = iParam0;
}

void func_169(var uParam0)
{
	uParam0->f_1 = 0;
}

bool func_170()
{
	return func_15(&(Global_2508189.f_179), func_171(), 0);
}

int func_171()
{
	return Global_2508189.f_181;
}

int func_172()
{
	return 0;
}

int func_173()
{
	int iVar0;
	int iVar1;
	
	Global_2508189.f_181 = Global_262145.f_8114;
	iVar0 = 0;
	while (iVar0 < 21)
	{
		Global_2508189.f_8[iVar0 /*5*/] = iVar0;
		Global_2508189.f_8[iVar0 /*5*/].f_1 = func_174(iVar0);
		Global_2508189.f_8[iVar0 /*5*/].f_2 = 1f;
		iVar0++;
	}
	if (Global_262145.f_8112 > 0 && Global_262145.f_8112 <= 21)
	{
		iVar1 = 0;
		while (iVar1 < Global_262145.f_8112)
		{
			Global_2508189.f_114[iVar1] = -1;
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 20)
		{
			Global_2508189.f_136[iVar1 /*2*/] = -1;
			Global_2508189.f_136[iVar1 /*2*/].f_1 = -1;
			iVar1++;
		}
	}
	return 1;
}

int func_174(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 32;
		
		case 1:
			return 18;
		
		case 3:
			return 19;
		
		case 4:
			return 139;
		
		case 5:
			return 33;
		
		case 6:
			return 34;
		
		case 7:
			return 35;
		
		case 8:
			return 39;
		
		case 9:
			return 40;
		
		case 10:
			return 36;
		
		case 11:
			return 37;
		
		case 12:
			return 41;
		
		case 13:
			return 42;
		
		case 14:
			return 43;
		
		case 15:
			return 44;
		
		case 16:
			return 45;
		
		case 17:
			return 46;
		
		case 18:
			return 47;
		
		case 19:
			return 114;
		
		case 20:
			return 127;
		
		default:
	}
	return 0;
}

void func_175()
{
	int iVar0;
	char cVar1[64];
	
	iVar0 = 10000;
	switch (Local_106[STATS::_GET_PACKED_TITLE_UPDATE_BOOL_STAT_KEY() /*3*/].f_2)
	{
		case 0:
			if (Global_2508189.f_2 >= 4 && Global_2508189.f_2 != 8)
			{
				if (func_150(1))
				{
					unk_0xBE20AB8238688965(&(Local_106[STATS::_GET_PACKED_TITLE_UPDATE_BOOL_STAT_KEY() /*3*/].f_1), false);
					VEHICLE::IS_VEHICLE_DRIVEABLE(&(Local_106[STATS::_GET_PACKED_TITLE_UPDATE_BOOL_STAT_KEY() /*3*/].f_1), true);
				}
				if (!func_260(PLAYER::PLAYER_ID(), 1))
				{
					func_259(4);
				}
				else if (!func_260(PLAYER::PLAYER_ID(), 3))
				{
					func_169(&uLocal_98);
					unk_0xBE20AB8238688965(&(Local_106[STATS::_GET_PACKED_TITLE_UPDATE_BOOL_STAT_KEY() /*3*/].f_1), 3);
				}
				else
				{
					if (unk_0xCE990E643CD9D0E5(uLocal_95, true))
					{
						iVar0 = 500;
					}
					if (func_15(&uLocal_98, iVar0, 0))
					{
						VEHICLE::IS_VEHICLE_DRIVEABLE(&iLocal_95, true);
						func_259(4);
						VEHICLE::IS_VEHICLE_DRIVEABLE(&(Local_106[STATS::_GET_PACKED_TITLE_UPDATE_BOOL_STAT_KEY() /*3*/].f_1), 3);
					}
				}
			}
			else if (func_260(PLAYER::PLAYER_ID(), 1))
			{
				VEHICLE::IS_VEHICLE_DRIVEABLE(&(Local_106[STATS::_GET_PACKED_TITLE_UPDATE_BOOL_STAT_KEY() /*3*/].f_1), true);
			}
			break;
		
		case 4:
			if (func_260(PLAYER::PLAYER_ID(), 0))
			{
				if (Global_2508189.f_2 == 8)
				{
					func_259(8);
					VEHICLE::IS_VEHICLE_DRIVEABLE(&(Local_106[STATS::_GET_PACKED_TITLE_UPDATE_BOOL_STAT_KEY() /*3*/].f_1), false);
					VEHICLE::IS_VEHICLE_DRIVEABLE(&(Local_106[STATS::_GET_PACKED_TITLE_UPDATE_BOOL_STAT_KEY() /*3*/].f_1), 4);
				}
				else if (Global_2508189.f_2 == 5)
				{
					func_259(5);
					VEHICLE::IS_VEHICLE_DRIVEABLE(&(Local_106[STATS::_GET_PACKED_TITLE_UPDATE_BOOL_STAT_KEY() /*3*/].f_1), false);
					VEHICLE::IS_VEHICLE_DRIVEABLE(&(Local_106[STATS::_GET_PACKED_TITLE_UPDATE_BOOL_STAT_KEY() /*3*/].f_1), 4);
				}
				else if (Global_2508189.f_2 >= 6)
				{
					func_259(6);
					VEHICLE::IS_VEHICLE_DRIVEABLE(&(Local_106[STATS::_GET_PACKED_TITLE_UPDATE_BOOL_STAT_KEY() /*3*/].f_1), false);
					VEHICLE::IS_VEHICLE_DRIVEABLE(&(Local_106[STATS::_GET_PACKED_TITLE_UPDATE_BOOL_STAT_KEY() /*3*/].f_1), 4);
				}
				else if (Global_2508189.f_2 == 3)
				{
					func_259(0);
					VEHICLE::IS_VEHICLE_DRIVEABLE(&(Local_106[STATS::_GET_PACKED_TITLE_UPDATE_BOOL_STAT_KEY() /*3*/].f_1), false);
					VEHICLE::IS_VEHICLE_DRIVEABLE(&(Local_106[STATS::_GET_PACKED_TITLE_UPDATE_BOOL_STAT_KEY() /*3*/].f_1), 4);
				}
			}
			else
			{
				if (func_231())
				{
					if (!func_219())
					{
						unk_0xBE20AB8238688965(&(Local_106[STATS::_GET_PACKED_TITLE_UPDATE_BOOL_STAT_KEY() /*3*/].f_1), 4);
					}
					if (func_202(Global_2508189.f_3))
					{
						if (!func_260(PLAYER::PLAYER_ID(), 0))
						{
							unk_0xBE20AB8238688965(&(Local_106[STATS::_GET_PACKED_TITLE_UPDATE_BOOL_STAT_KEY() /*3*/].f_1), false);
						}
					}
				}
				if (!func_260(PLAYER::PLAYER_ID(), 0))
				{
					if (!func_200() && !unk_0xCE990E643CD9D0E5(iLocal_95, false))
					{
						unk_0xBE20AB8238688965(&iLocal_95, true);
					}
					func_259(0);
					unk_0xBE20AB8238688965(&(Local_106[STATS::_GET_PACKED_TITLE_UPDATE_BOOL_STAT_KEY() /*3*/].f_1), true);
					VEHICLE::IS_VEHICLE_DRIVEABLE(&(Local_106[STATS::_GET_PACKED_TITLE_UPDATE_BOOL_STAT_KEY() /*3*/].f_1), 4);
				}
			}
			break;
		
		case 5:
			if (Global_2508189.f_2 == 6)
			{
				VEHICLE::IS_VEHICLE_DRIVEABLE(&(Global_2540384.f_206.f_1), true);
				VEHICLE::IS_VEHICLE_DRIVEABLE(&(Global_2540384.f_206.f_1), 2);
				VEHICLE::IS_VEHICLE_DRIVEABLE(&(Global_2540384.f_206.f_1), 3);
				func_259(6);
			}
			else if (func_150(3) && func_199(&(Global_2508189.f_177)))
			{
				func_181();
			}
			break;
		
		case 6:
			StringCopy(&cVar1, func_6(Global_2508189.f_3.f_1), 64);
			if (!func_180())
			{
				if (!func_260(PLAYER::PLAYER_ID(), 2))
				{
					Local_96.f_16 = -1;
					if (INTERIOR::GET_INTERIOR_AT_COORDS(AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT(&cVar1)) == 0)
					{
						if (!NETWORK::NETWORK_IS_SCRIPT_ACTIVE(&cVar1, -1, false, 0) || NETWORK::NETWORK_GET_NUM_SCRIPT_PARTICIPANTS(&cVar1, -1, 0) < 32)
						{
							if (!NETWORK::NETWORK_IS_SCRIPT_ACTIVE(&cVar1, -1, true, 0))
							{
								Local_96 = Global_2508189.f_3.f_1;
								if (func_176(Local_96, 0))
								{
									unk_0xBE20AB8238688965(&(Local_106[STATS::_GET_PACKED_TITLE_UPDATE_BOOL_STAT_KEY() /*3*/].f_1), 2);
								}
							}
						}
					}
				}
				else if (INTERIOR::GET_INTERIOR_AT_COORDS(AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT(&cVar1)) != 0)
				{
					if (Global_2508189.f_2 == 7)
					{
						func_259(7);
						unk_0xBE20AB8238688965(&iLocal_95, false);
						VEHICLE::IS_VEHICLE_DRIVEABLE(&(Local_106[STATS::_GET_PACKED_TITLE_UPDATE_BOOL_STAT_KEY() /*3*/].f_1), 2);
					}
				}
			}
			break;
		
		case 7:
			if (Global_2508189.f_2 != 7)
			{
				func_259(8);
			}
			break;
		
		case 8:
			func_259(0);
			break;
	}
}

int func_176(struct<17> Param0, var uParam1, var uParam2, var uParam3, var uParam4, bool bParam5)
{
	char cVar0[32];
	bool bVar1;
	int iVar2;
	int iVar3;
	
	if (func_179())
	{
		return 0;
	}
	bParam5 = bParam5;
	StringCopy(&cVar0, func_6(Param0), 32);
	if (SCRIPT::DOES_SCRIPT_EXIST(&cVar0))
	{
		SCRIPT::REQUEST_SCRIPT(&cVar0);
		if (SCRIPT::HAS_SCRIPT_LOADED(&cVar0))
		{
			bVar1 = true;
			if (bParam5)
			{
				iVar2 = 0;
				iVar2 = 0;
				while (iVar2 < 16)
				{
					if (NETWORK::NETWORK_IS_SCRIPT_ACTIVE(&cVar0, iVar2, bVar1, 0))
					{
						return 0;
					}
					iVar2++;
				}
			}
			else if (NETWORK::NETWORK_IS_SCRIPT_ACTIVE(&cVar0, Param0.f_16, bVar1, 0))
			{
				return 0;
			}
			iVar3 = SYSTEM::START_NEW_SCRIPT_WITH_ARGS(&cVar0, &Param0, 21, func_177(Param0));
			SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(&cVar0);
			if (iVar3 > 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_177(int iParam0)
{
	switch (iParam0)
	{
		case 152:
		case 159:
		case 153:
		case 157:
		case 160:
		case 161:
		case 154:
		case 162:
		case 163:
		case 155:
		case 164:
		case 156:
		case 180:
		case 158:
		case 49:
		case 64:
		case 62:
		case 70:
		case 107:
		case 108:
		case 110:
		case 111:
		case 112:
		case 113:
		case 115:
		case 124:
		case 125:
		case 126:
		case 86:
		case 130:
		case 131:
			return 65000;
		
		default:
	}
	if (func_178(iParam0) == 3)
	{
		return 8344;
	}
	else if (func_178(iParam0) == 7)
	{
		switch (iParam0)
		{
			case 45:
			case 43:
			case 39:
			case 37:
			case 41:
			case 47:
			case 40:
				return 8344;
			
			case 114:
			case 127:
				return 15900;
			
			default:
		}
		return 4500;
	}
	else if (func_178(iParam0) == 0)
	{
		return 4500;
	}
	else if (func_178(iParam0) == 2)
	{
		return 4500;
	}
	else if (func_178(iParam0) == 6)
	{
		switch (iParam0)
		{
			case 18:
			case 22:
			case 24:
			case 17:
			case 148:
			case 149:
			case 60:
			case 140:
			case 65:
			case 71:
			case 66:
			case 67:
			case 68:
			case 73:
			case 74:
			case 78:
			case 75:
			case joaat("MPSV_LP0_31"):
			case 80:
			case 82:
			case 81:
			case 88:
			case 89:
			case 91:
			case 92:
			case 93:
			case 90:
			case 99:
			case 85:
			case 84:
			case 100:
			case 101:
			case 97:
			case 98:
			case 103:
			case 104:
			case 105:
			case 106:
			case 96:
			case 109:
			case 116:
			case 117:
			case 118:
			case 119:
			case 120:
			case 121:
			case 122:
			case 123:
			case 128:
			case 129:
			case 150:
			case 133:
				return 4500;
			
			case 174:
				return 4500;
			
			case 175:
				return 1424;
			
			case 138:
				return 8344;
			
			case 87:
			case 77:
			case 76:
				return 8344;
			
			case 9:
			case 16:
			case 15:
			case 135:
			case 134:
			case 19:
			case 139:
			case 136:
			case 21:
			case 151:
				return 2050;
			
			case 144:
				return 3568;
			
			case 165:
			case 168:
				return 1828;
			
			case 169:
			case 170:
			case 171:
				return 4500;
			
			case 177:
			case 172:
			case 173:
			case 179:
			case 176:
			case 178:
				return 8344;
			}
		
		default:
	}
	return 1424;
}

int func_178(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 7;
		
		case 1:
			return 7;
		
		case 32:
			return 7;
		
		case 33:
			return 7;
		
		case 34:
			return 7;
		
		case 35:
			return 7;
		
		case 36:
			return 7;
		
		case 37:
			return 7;
		
		case 38:
			return 7;
		
		case 39:
			return 7;
		
		case 40:
			return 7;
		
		case 41:
			return 7;
		
		case 42:
			return 7;
		
		case 43:
			return 7;
		
		case 44:
			return 7;
		
		case 45:
			return 7;
		
		case 46:
			return 7;
		
		case 47:
			return 7;
		
		case 48:
			return 6;
		
		case 49:
			return 6;
		
		case 50:
			return 6;
		
		case 51:
			return 6;
		
		case 52:
			return 6;
		
		case 53:
			return 6;
		
		case 54:
			return 6;
		
		case 55:
			return 6;
		
		case 56:
			return 6;
		
		case 57:
			return 6;
		
		case 58:
			return 6;
		
		case 59:
			return 6;
		
		case 60:
			return 6;
		
		case 61:
			return 6;
		
		case 62:
			return 6;
		
		case 63:
			return 6;
		
		case 64:
			return 6;
		
		case 65:
			return 6;
		
		case 66:
			return 6;
		
		case 67:
			return 6;
		
		case 68:
			return 6;
		
		case 69:
			return 6;
		
		case 70:
			return 6;
		
		case 71:
			return 6;
		
		case 72:
			return 6;
		
		case 165:
			return 6;
		
		case 168:
			return 6;
		
		case 169:
			return 6;
		
		case 170:
			return 6;
		
		case 176:
			return 6;
		
		case 172:
			return 6;
		
		case 177:
			return 6;
		
		case 173:
			return 6;
		
		case 171:
			return 6;
		
		case 174:
			return 6;
		
		case 175:
			return 6;
		
		case 178:
			return 6;
		
		case 179:
			return 6;
		
		case 73:
		case 74:
			return 6;
		
		case 75:
			return 6;
		
		case 76:
			return 6;
		
		case 77:
			return 6;
		
		case 78:
			return 6;
		
		case joaat("MPSV_LP0_31"):
			return 6;
		
		case 80:
			return 6;
		
		case 81:
			return 6;
		
		case 82:
			return 6;
		
		case 84:
			return 6;
		
		case 83:
			return 6;
		
		case 85:
			return 6;
		
		case 86:
			return 6;
		
		case 87:
			return 6;
		
		case 88:
			return 6;
		
		case 89:
			return 6;
		
		case 90:
			return 6;
		
		case 91:
			return 6;
		
		case 92:
			return 6;
		
		case 93:
			return 6;
		
		case 94:
			return 6;
		
		case 102:
			return 6;
		
		case 95:
			return 6;
		
		case 96:
			return 6;
		
		case 97:
			return 6;
		
		case 98:
			return 6;
		
		case 99:
			return 6;
		
		case 100:
			return 6;
		
		case 101:
			return 6;
		
		case 103:
			return 6;
		
		case 104:
			return 6;
		
		case 105:
			return 6;
		
		case 106:
			return 6;
		
		case 107:
			return 6;
		
		case 108:
			return 6;
		
		case 109:
			return 6;
		
		case 110:
			return 6;
		
		case 111:
			return 6;
		
		case 112:
			return 6;
		
		case 113:
			return 6;
		
		case 114:
			return 7;
		
		case 115:
			return 6;
		
		case 116:
			return 6;
		
		case 117:
			return 6;
		
		case 118:
			return 6;
		
		case 119:
			return 6;
		
		case 120:
			return 6;
		
		case 121:
			return 6;
		
		case 122:
			return 6;
		
		case 123:
			return 6;
		
		case 124:
			return 6;
		
		case 125:
			return 6;
		
		case 126:
			return 6;
		
		case 127:
			return 7;
		
		case 128:
			return 6;
		
		case 129:
			return 6;
		
		case 130:
			return 6;
		
		case 131:
			return 6;
		
		case 133:
			return 6;
		
		case 16:
			return 6;
		
		case 18:
			return 6;
		
		case 28:
			return 6;
		
		case 26:
			return 6;
		
		case 27:
			return 6;
		
		case 29:
			return 6;
		
		case 30:
			return 6;
		
		case 31:
			return 6;
		
		case 17:
			return 6;
		
		case 134:
			return 6;
		
		case 135:
			return 6;
		
		case 19:
			return 6;
		
		case 22:
			return 6;
		
		case 23:
			return 6;
		
		case 24:
			return 6;
		
		case 25:
			return 6;
		
		case 138:
			return 6;
		
		case 148:
			return 6;
		
		case 149:
			return 6;
		
		case 150:
			return 6;
		
		case 151:
			return 6;
		
		case 12:
			return 6;
		
		case 4:
			return 6;
		
		case 13:
			return 6;
		
		case 5:
			return 6;
		
		case 6:
			return 6;
		
		case 8:
			return 6;
		
		case 9:
			return 6;
		
		case 7:
			return 6;
		
		case 10:
			return 6;
		
		case 11:
			return 6;
		
		case 15:
			return 6;
		
		case 21:
			return 6;
		
		case 146:
			return 6;
		
		case 147:
			return 6;
		
		case 136:
			return 6;
		
		case 139:
			return 6;
		
		case 140:
			return 6;
		
		case 137:
			return 6;
		
		case 141:
			return 6;
		
		case 144:
			return 6;
		
		case 145:
			return 6;
		
		case 152:
			return 6;
		
		case 159:
			return 0;
		
		case 153:
			return 6;
		
		case 160:
			return 0;
		
		case 158:
			return 0;
		
		case 161:
			return 0;
		
		case 154:
			return 6;
		
		case 162:
			return 0;
		
		case 157:
			return 6;
		
		case 163:
			return 0;
		
		case 155:
			return 6;
		
		case 164:
			return 0;
		
		case 156:
			return 6;
		
		case 142:
			return 6;
		
		case 143:
			return 6;
		
		case 180:
			return 6;
		
		case 166:
			return 6;
		
		case 167:
			return 6;
		
		default:
	}
	return 11;
}

bool func_179()
{
	return Global_2451787.f_691;
}

int func_180()
{
	if (Global_2508189.f_3.f_1 != 19)
	{
		return 0;
	}
	if (Global_2540384.f_1718)
	{
		if (Global_2508189.f_2 == 7)
		{
			func_259(7);
		}
	}
	else if (Global_2540384.f_1719)
	{
		Global_2540384.f_1719 = 0;
		func_259(0);
		unk_0xBE20AB8238688965(&(Local_106[STATS::_GET_PACKED_TITLE_UPDATE_BOOL_STAT_KEY() /*3*/].f_1), true);
	}
	return 1;
}

void func_181()
{
	if (Global_2419386.f_84.f_2 == 1)
	{
		if (!unk_0xCE990E643CD9D0E5(Global_2540384.f_206.f_1, true))
		{
			if (((Global_262145.f_45 * 120000) - func_198(&(Global_2508189.f_177), 0, 0)) < 360000)
			{
				if (!unk_0xCE990E643CD9D0E5(Global_2540384.f_206.f_1, true))
				{
					if (func_188(31, 0, 0) && !func_187())
					{
						if (Global_262145.f_45 < 3)
						{
							func_182("ACD_TSCH", Global_262145.f_45);
						}
						else
						{
							func_182("ACD_TSCH", 3);
						}
					}
					unk_0xBE20AB8238688965(&(Global_2540384.f_206.f_1), true);
				}
			}
			else if (((Global_262145.f_45 * 120000) - func_198(&(Global_2508189.f_177), 0, 0)) < 600000)
			{
				if (!unk_0xCE990E643CD9D0E5(Global_2540384.f_206.f_1, 2))
				{
					if (func_188(31, 0, 0) && !func_187())
					{
						func_182("ACD_TSCH", 5);
					}
					unk_0xBE20AB8238688965(&(Global_2540384.f_206.f_1), 2);
				}
			}
			else if (((Global_262145.f_45 * 120000) - func_198(&(Global_2508189.f_177), 0, 0)) < 1200000)
			{
				if (!unk_0xCE990E643CD9D0E5(Global_2540384.f_206.f_1, 3))
				{
					if (func_188(31, 0, 0) && !func_187())
					{
						func_182("ACD_TSCH", 10);
					}
					unk_0xBE20AB8238688965(&(Global_2540384.f_206.f_1), 3);
				}
			}
		}
	}
}

int func_182(char* sParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = -1;
	HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
	unk_0x42710E9E08FA375A(iParam1);
	iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true);
	func_183(3, sParam0, 1, "", iParam1, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

void func_183(int iParam0, char* sParam1, int iParam2, char* sParam3, var uParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_186() || !STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED()) || !func_50(PLAYER::PLAYER_ID(), 0))
	{
		return;
	}
	iVar0 = func_184(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1672611.f_5[iVar0 /*53*/] = iParam0;
		Global_1672611.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_1672611.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_1672611.f_5[iVar0 /*53*/].f_2[0] = uParam4;
		Global_1672611.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_1672611.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_1672611.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_1672611.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_1672611.f_5[iVar0 /*53*/].f_12), sParam3, 64);
		StringCopy(&(Global_1672611.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_1672611.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_1672611.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
	}
}

int func_184(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1672611 - 1))
	{
		if (iParam0 > Global_1672611.f_5[iVar0 /*53*/].f_1)
		{
			func_185(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_1672611++;
	if (Global_1672611 > 5)
	{
		Global_1672611 = 5;
		return Global_1672611;
	}
	return (Global_1672611 - 1);
}

void func_185(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1672611.f_5[iVar0 /*53*/] = { Global_1672611.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_186()
{
	return GRAPHICS::DRAW_RECT(-1762644250);
}

bool func_187()
{
	return Global_1312896;
}

bool func_188(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	if (Global_262145.f_7687 == 1)
	{
		if (iParam0 == 67)
		{
			return 1;
		}
		if (iParam0 == 74)
		{
			return 1;
		}
		if (func_193(PLAYER::PLAYER_ID(), 85))
		{
			if (((((iParam0 == 64 || iParam0 == 77) || iParam0 == 61) || iParam0 == 81) || iParam0 == 63) || iParam0 == 62)
			{
				return 1;
			}
		}
		if ((((((((((iParam0 == 66 || iParam0 == 116) || iParam0 == 103) || iParam0 == 104) || iParam0 == 105) || iParam0 == 119) || iParam0 == 88) || iParam0 == 75) || iParam0 == 95) || iParam0 == 65) || iParam0 == 98)
		{
			return 1;
		}
	}
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 == 31)
	{
		if (Global_262145.f_4719 == 1)
		{
			return 1;
		}
	}
	if (func_192() || func_191())
	{
		return 1;
	}
	iVar0 = iParam0;
	iVar1 = (iVar0 / 32);
	iVar0 = (iVar0 % 32);
	if (bParam1)
	{
		if (iParam0 == 3)
		{
			if (func_189())
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	if (bParam2)
	{
		return 0;
	}
	return unk_0xCE990E643CD9D0E5(Global_1574643[iVar1], iVar0);
}

int func_189()
{
	var uVar0;
	
	if (Global_1312466)
	{
		return 1;
	}
	if (unk_0xCE990E643CD9D0E5(Global_2540384.f_1791, 23))
	{
		return 1;
	}
	if (func_192())
	{
		return 1;
	}
	if (func_191())
	{
		return 1;
	}
	uVar0 = Global_1388185[func_190(-1)];
	if (unk_0xCE990E643CD9D0E5(uVar0, 7))
	{
		unk_0xBE20AB8238688965(&(Global_2540384.f_1791), 23);
		return 1;
	}
	return 0;
}

int func_190(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_52();
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

bool func_191()
{
	return Global_1312884;
}

bool func_192()
{
	return Global_1312886;
}

bool func_193(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	
	if (!func_196())
	{
		return 0;
	}
	if (func_195())
	{
		return 0;
	}
	if (iParam1 == 86)
	{
		return 1;
	}
	uVar0 = func_194(iParam1);
	iVar1 = uVar0;
	return unk_0xCE990E643CD9D0E5(Global_1590682[iParam0 /*883*/].f_737, iVar1);
}

int func_194(int iParam0)
{
	switch (iParam0)
	{
		case 86:
			return 0;
		
		case 19:
			return 1;
		
		case 12:
			return 2;
		
		case 31:
			return 3;
		
		case 20:
			return 4;
		
		case 18:
			return 5;
		
		case 2:
			return 6;
		
		case 76:
			return 7;
		
		case 22:
			return 8;
		
		case 53:
			return 9;
		
		case 34:
			return 10;
		
		case 152:
			return 11;
		
		case 85:
			return 12;
		
		case 84:
			return 13;
		
		case 0:
			return 14;
		
		case 1:
			return 15;
		
		case 153:
			return 16;
		
		case 151:
			return 17;
		
		case 14:
			return 18;
		
		case 15:
			return 19;
		
		case 24:
			return 20;
		
		case 30:
			return 21;
		
		case 46:
			return 22;
		
		case 47:
			return 23;
		
		case 54:
			return 24;
		
		case 51:
			return 25;
		
		case 60:
			return 26;
		
		case 62:
			return 27;
		
		case 66:
			return 28;
		
		case 69:
			return 29;
		
		case 154:
			return 30;
		
		case 82:
			return 31;
		
		case 157:
			return 32;
		
		case 167:
			return 34;
		
		case 169:
			return 35;
		
		default:
	}
	return 1;
}

bool func_195()
{
	return unk_0xCE990E643CD9D0E5(Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_146, 3);
}

int func_196()
{
	if (Global_1312466)
	{
		return 1;
	}
	if (func_192())
	{
		return 1;
	}
	if (func_191())
	{
		return 1;
	}
	return func_197(120, -1);
}

int func_197(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2587834[iParam0 /*3*/][func_190(iParam1)];
	if (unk_0xB9112C701DE2A810(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_198(var uParam0, bool bParam1, bool bParam2)
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

var func_199(var uParam0)
{
	return uParam0->f_1;
}

int func_200()
{
	if (func_201() == 0)
	{
		return 1;
	}
	return 0;
}

int func_201()
{
	return Global_1312485.f_18;
}

int func_202(int iParam0)
{
	if (!func_218(iParam0) && !func_216(iParam0))
	{
		return 0;
	}
	switch (iParam0)
	{
		case 0:
			return (((func_208(0) && func_207(func_54(PLAYER::PLAYER_ID()), 40f, 40f, 40f)) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(unk_0x9B0761B4C3EB8BC7()) < 10f) && !func_206());
		
		case 4:
			return (((((func_188(20, 0, 0) && !func_205(PLAYER::PLAYER_ID(), 1)) && !func_205(PLAYER::PLAYER_ID(), 2)) && !func_205(PLAYER::PLAYER_ID(), 3)) && !Global_2440049.f_3858) && !func_203());
		
		default:
	}
	return 1;
}

int func_203()
{
	if (!func_204())
	{
		return 0;
	}
	if (Global_2404637.f_2 == Global_262145.f_8587 || Global_2404637.f_2 == Global_262145.f_8611)
	{
		return 1;
	}
	return 0;
}

int func_204()
{
	switch (Global_2404637)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 11:
		case 12:
			return 0;
		
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
			return 1;
		
		default:
	}
	return 0;
}

bool func_205(int iParam0, bool bParam1)
{
	return unk_0xCE990E643CD9D0E5(Global_2425869[iParam0 /*443*/].f_212, iParam1);
}

int func_206()
{
	if (unk_0x1037B9D45CE6B788(unk_0x9B0761B4C3EB8BC7(), 1216.995f, -3001.906f, 4.865235f, 835.3747f, -3013.846f, 54.7638f, 250f, 0, 1, 0))
	{
		return 1;
	}
	else if (unk_0x1037B9D45CE6B788(unk_0x9B0761B4C3EB8BC7(), 1284.885f, -3184.986f, 4.906164f, 833.8964f, -3182.306f, 54.90125f, 250f, 0, 1, 0))
	{
		return 1;
	}
	else if (unk_0x1037B9D45CE6B788(unk_0x9B0761B4C3EB8BC7(), 1284.793f, -3270.265f, 4.902858f, 838.3597f, -3268.248f, 55.07449f, 250f, 0, 1, 0))
	{
		return 1;
	}
	else if (unk_0x1037B9D45CE6B788(unk_0x9B0761B4C3EB8BC7(), 864.6642f, -2900.037f, 4.900886f, 864.0037f, -3345.969f, 54.90067f, 250f, 0, 1, 0))
	{
		return 1;
	}
	else if (unk_0x1037B9D45CE6B788(unk_0x9B0761B4C3EB8BC7(), 447.0059f, -2983.689f, 5.00868f, 750.05f, -2981.953f, 54.88502f, 250f, 0, 1, 0))
	{
		return 1;
	}
	return 0;
}

int func_207(struct<3> Param0, struct<3> Param1)
{
	struct<3> Var0;
	
	if (MISC::ABSF(Param0, &Var0, 0, 1077936128, 0))
	{
		if (unk_0xC2169C00B643278B(unk_0x9B0761B4C3EB8BC7(), Var0, Param1, 0, 1, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_208(bool bParam0)
{
	if (bParam0 == bParam0)
	{
		bParam0 = bParam0;
	}
	if (func_213(PLAYER::PLAYER_ID(), 1, 0))
	{
		if (bParam0)
		{
		}
		return 0;
	}
	if (func_212())
	{
		if (bParam0)
		{
		}
		return 0;
	}
	if (STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED())
	{
		if (bParam0)
		{
		}
		return 0;
	}
	if (STATS::STAT_SET_INT())
	{
		if (bParam0)
		{
		}
		return 0;
	}
	if (!func_188(19, 0, 0))
	{
		if (bParam0)
		{
		}
		return 0;
	}
	if (func_209(9))
	{
		if (bParam0)
		{
		}
		return 0;
	}
	return 1;
}

bool func_209(int iParam0)
{
	return !func_210(iParam0);
}

int func_210(int iParam0)
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
			if (func_205(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (unk_0xCE990E643CD9D0E5(Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_274.f_26, false) || unk_0xCE990E643CD9D0E5(Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_274.f_26, true))
			{
				return 0;
			}
			break;
		
		case 5:
			if (Global_262145.f_6662)
			{
				return 0;
			}
			if (func_205(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (unk_0xCE990E643CD9D0E5(Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_274.f_26, false) || unk_0xCE990E643CD9D0E5(Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_274.f_26, true))
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
			if (func_205(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (unk_0xCE990E643CD9D0E5(Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_274.f_26, false) || unk_0xCE990E643CD9D0E5(Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_274.f_26, true))
			{
				return 0;
			}
			break;
		
		case 15:
			if (func_211(4))
			{
				return 0;
			}
			if (func_205(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (unk_0xCE990E643CD9D0E5(Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_274.f_26, false) || unk_0xCE990E643CD9D0E5(Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_274.f_26, true))
			{
				return 0;
			}
			break;
		
		case 17:
			if (func_211(4))
			{
				return 0;
			}
			if (func_205(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (unk_0xCE990E643CD9D0E5(Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_274.f_26, false) || unk_0xCE990E643CD9D0E5(Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_274.f_26, true))
			{
				return 0;
			}
			break;
		
		case 16:
			if (func_211(4))
			{
				return 0;
			}
			if (func_205(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (unk_0xCE990E643CD9D0E5(Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_274.f_26, false) || unk_0xCE990E643CD9D0E5(Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_274.f_26, true))
			{
				return 0;
			}
			break;
		
		case 18:
		case 21:
		case 22:
		case 23:
			if (func_211(4))
			{
				return 0;
			}
			if (func_205(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (unk_0xCE990E643CD9D0E5(Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_274.f_26, false) || unk_0xCE990E643CD9D0E5(Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_274.f_26, true))
			{
				return 0;
			}
			break;
		
		case 19:
			if (func_211(4))
			{
				return 0;
			}
			if (func_205(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			break;
		
		case 20:
			if (func_211(4))
			{
				return 0;
			}
			if (func_205(PLAYER::PLAYER_ID(), 7))
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

int func_211(bool bParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_57(NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar0), 0, 1))
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

bool func_212()
{
	return unk_0xCE990E643CD9D0E5(Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_39.f_18, false);
}

int func_213(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_214(iParam0))
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

bool func_214(int iParam0)
{
	return func_215(iParam0);
}

bool func_215(int iParam0)
{
	return unk_0xCE990E643CD9D0E5(Global_1590682[iParam0 /*883*/].f_13.f_1, false);
}

bool func_216(int iParam0)
{
	return func_188(func_217(iParam0), 0, 0);
}

int func_217(int iParam0)
{
	switch (iParam0)
	{
		case 12:
			return 136;
		
		case 14:
			return 139;
		
		case 16:
			return 141;
		
		case 9:
			return 133;
		
		case 13:
			return 138;
		
		case 17:
			return 144;
		
		case 8:
			return 132;
		
		case 10:
			return 131;
		
		case 18:
			return 146;
		
		case 11:
			return 129;
		
		case 15:
			return 140;
		
		case 19:
			return 236;
		
		case 20:
			return 150;
		
		default:
	}
	return -1;
}

int func_218(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			return 0;
		
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
			return func_50(PLAYER::PLAYER_ID(), 0);
		
		default:
	}
	return 1;
}

int func_219()
{
	int iVar0;
	
	iVar0 = func_230(Global_2508189.f_3);
	if (((((iVar0 >= 0 && (func_228(iVar0) || func_228(0))) || func_226(PLAYER::PLAYER_ID())) || func_224(PLAYER::PLAYER_ID())) || !func_223(PLAYER::PLAYER_ID())) || !func_220())
	{
		return 0;
	}
	return 1;
}

int func_220()
{
	if (func_5(Global_2508189.f_3))
	{
		return !func_221(0);
	}
	return 1;
}

bool func_221(bool bParam0)
{
	return func_222(PLAYER::PLAYER_ID(), bParam0);
}

bool func_222(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_22(iParam0))
		{
			return 0;
		}
	}
	return Global_1630317[iParam0 /*595*/].f_11 != func_146();
}

bool func_223(int iParam0)
{
	return unk_0xCE990E643CD9D0E5(Global_1590682[iParam0 /*883*/].f_142, 22);
}

int func_224(int iParam0)
{
	if (func_50(iParam0, 0))
	{
		return 1;
	}
	if (func_225())
	{
		if (iParam0 == PLAYER::PLAYER_ID())
		{
			return 1;
		}
	}
	if (unk_0xCE990E643CD9D0E5(Global_2425869[iParam0 /*443*/].f_199, 2))
	{
		return 1;
	}
	return 0;
}

bool func_225()
{
	return unk_0xCE990E643CD9D0E5(Global_2359302, 3);
}

bool func_226(int iParam0)
{
	if (func_227(iParam0))
	{
		return 1;
	}
	return unk_0xCE990E643CD9D0E5(Global_1630317[iParam0 /*595*/].f_1, 8);
}

bool func_227(int iParam0)
{
	return unk_0xCE990E643CD9D0E5(Global_1630317[iParam0 /*595*/].f_1, 2);
}

bool func_228(bool bParam0)
{
	var uVar0;
	
	uVar0 = func_229(2481, -1, 0);
	return unk_0xCE990E643CD9D0E5(uVar0, iParam0);
}

int func_229(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 11771)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2551832[iParam0 /*3*/][func_190(iParam1)];
		if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_230(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 15;
		
		case 2:
			return 16;
		
		case 3:
			return 17;
		
		case 4:
			return 18;
		
		case 5:
			return 19;
		
		case 6:
			return 21;
		
		case 7:
			return 20;
		
		case 8:
			return 1;
		
		case 9:
			return 2;
		
		case 10:
			return 10;
		
		case 11:
			return 8;
		
		case 12:
			return 11;
		
		case 13:
			return 5;
		
		case 14:
			return 6;
		
		case 15:
			return 4;
		
		case 16:
			return 9;
		
		case 17:
			return 3;
		
		case 18:
			return 7;
		
		case 19:
			return 12;
		
		case 20:
			return 12;
		
		default:
	}
	return -1;
}

bool func_231()
{
	return ((((((((((((((((((((((!STATS::STAT_SET_INT() && !func_258(PLAYER::PLAYER_ID())) && !func_212()) && !func_257()) && !func_187()) && !func_256()) && !func_254(PLAYER::PLAYER_ID())) && !STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED()) && !func_214(PLAYER::PLAYER_ID())) && func_200()) && !func_205(PLAYER::PLAYER_ID(), 0)) && !func_205(PLAYER::PLAYER_ID(), 7)) && !func_205(PLAYER::PLAYER_ID(), 21)) && !func_205(PLAYER::PLAYER_ID(), 25)) && (!func_241(PLAYER::PLAYER_ID(), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0) || Global_2508189.f_3 == 11)) && func_57(PLAYER::PLAYER_ID(), 1, 1)) && !func_240(PLAYER::PLAYER_ID())) && func_223(PLAYER::PLAYER_ID())) && !func_239(PLAYER::PLAYER_ID())) && !func_238(PLAYER::PLAYER_ID())) && !func_236(PLAYER::PLAYER_ID())) && !func_234(PLAYER::PLAYER_ID())) && !func_232());
}

bool func_232()
{
	return func_233() == 1;
}

int func_233()
{
	return Global_1704006;
}

bool func_234(int iParam0)
{
	return func_235(&(Global_2425869[iParam0 /*443*/].f_429), 0);
}

bool func_235(var uParam0, bool bParam1)
{
	return unk_0xCE990E643CD9D0E5(*uParam0, iParam1);
}

int func_236(int iParam0)
{
	if (iParam0 != func_146())
	{
		if (func_57(iParam0, 1, 1))
		{
			if (Global_2425869[iParam0 /*443*/].f_314.f_6 != -1)
			{
				return func_237(Global_2425869[iParam0 /*443*/].f_314.f_6) == 15;
			}
		}
	}
	return 0;
}

int func_237(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
			return 0;
			break;
		
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
			return 1;
			break;
		
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
			return 2;
			break;
		
		case 43:
		case 42:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
		case 59:
		case 98:
		case 99:
		case 100:
		case 112:
		case 113:
		case 114:
		case 115:
		case 119:
		case 116:
		case 118:
		case 120:
		case 121:
		case 126:
		case 127:
		case 134:
		case 135:
		case 136:
		case 137:
		case 138:
		case 139:
		case 140:
		case 141:
		case 142:
		case 143:
		case 144:
			return 3;
			break;
		
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case joaat("MPSV_LP0_31"):
		case 80:
			return 4;
			break;
		
		case 81:
			return 5;
			break;
		
		case 82:
			return 6;
			break;
		
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
			return 7;
			break;
		
		case 88:
			return 8;
			break;
		
		case 89:
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
			return 9;
			break;
		
		case 101:
			return 10;
			break;
		
		case 102:
		case 103:
		case 104:
		case 105:
		case 106:
		case 107:
		case 108:
		case 109:
		case 110:
		case 111:
			return 11;
			break;
		
		case 117:
			return 12;
			break;
		
		case 122:
			return 13;
			break;
		
		case 123:
			return 14;
			break;
		
		case 124:
			return 15;
			break;
		
		case 125:
			return 16;
			break;
		
		case 128:
		case 129:
		case 130:
		case 131:
		case 132:
		case 133:
			return 17;
			break;
		
		case 145:
			return 18;
			break;
		
		case 146:
			return 19;
			break;
		
		case 147:
			return 20;
			break;
	}
	return -1;
}

int func_238(int iParam0)
{
	if (iParam0 != func_146())
	{
		if (func_57(iParam0, 1, 1))
		{
			if (Global_2425869[iParam0 /*443*/].f_314.f_6 != -1)
			{
				return func_237(Global_2425869[iParam0 /*443*/].f_314.f_6) == 16;
			}
		}
	}
	return 0;
}

int func_239(int iParam0)
{
	if (iParam0 != func_146())
	{
		if (func_57(iParam0, 1, 1))
		{
			if (Global_2425869[iParam0 /*443*/].f_314.f_6 != -1)
			{
				return func_237(Global_2425869[iParam0 /*443*/].f_314.f_6) == 14;
			}
		}
	}
	return 0;
}

int func_240(int iParam0)
{
	if (unk_0xCE990E643CD9D0E5(Global_1590682[iParam0 /*883*/].f_274.f_26, 14))
	{
		return 1;
	}
	if (unk_0xCE990E643CD9D0E5(Global_1590682[iParam0 /*883*/].f_274.f_26, 11))
	{
		return 1;
	}
	return 0;
}

int func_241(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14, bool bParam15, bool bParam16)
{
	if (Global_1590682[iParam0 /*883*/].f_274.f_28 > 0)
	{
		if (bParam1)
		{
			if (unk_0xCE990E643CD9D0E5(Global_1590682[iParam0 /*883*/].f_274.f_26, false))
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	if (!bParam2)
	{
		if (func_253(iParam0))
		{
			return 1;
		}
	}
	if (!bParam3)
	{
		if (func_252(iParam0))
		{
			return 1;
		}
	}
	if (!bParam4)
	{
		if (func_251(iParam0))
		{
			return 1;
		}
	}
	if (!bParam5)
	{
		if (func_250(iParam0))
		{
			return 1;
		}
	}
	if (!bParam6)
	{
		if (func_249(iParam0))
		{
			return 1;
		}
	}
	if (!bParam7)
	{
		if (func_248(iParam0))
		{
			return 1;
		}
	}
	if (!bParam8)
	{
		if (func_247(iParam0))
		{
			return 1;
		}
	}
	if (!bParam9)
	{
		if (func_246(iParam0))
		{
			return 1;
		}
	}
	if (!bParam10)
	{
		if (func_245(iParam0))
		{
			return 1;
		}
	}
	if (!bParam11)
	{
		if (func_244(iParam0, 0))
		{
			return 1;
		}
	}
	if (!bParam12)
	{
		if (func_243(iParam0))
		{
			return 1;
		}
	}
	if (!bParam13)
	{
		if (func_239(iParam0))
		{
			return 1;
		}
	}
	if (!bParam14)
	{
		if (func_236(iParam0))
		{
			return 1;
		}
	}
	if (!bParam15)
	{
		if (func_238(iParam0))
		{
			return 1;
		}
	}
	if (!bParam16)
	{
		if (func_242(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_242(int iParam0)
{
	if (iParam0 != func_146())
	{
		if (func_57(iParam0, 1, 1))
		{
			if (Global_2425869[iParam0 /*443*/].f_314.f_6 != -1)
			{
				return func_237(Global_2425869[iParam0 /*443*/].f_314.f_6) == 17;
			}
		}
	}
	return 0;
}

int func_243(int iParam0)
{
	if (iParam0 != func_146())
	{
		if (func_57(iParam0, 1, 1))
		{
			if (Global_2425869[iParam0 /*443*/].f_314.f_6 != -1)
			{
				return func_237(Global_2425869[iParam0 /*443*/].f_314.f_6) == 13;
			}
		}
	}
	return 0;
}

int func_244(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (bParam1)
	{
		if (SYSTEM::VDIST(unk_0x9B0761B4C3EB8BC7(), 0))
		{
			iVar0 = ENTITY::GET_ENTITY_MODEL(unk_0x9B0761B4C3EB8BC7(), 0);
			if (MISC::GET_MODEL_DIMENSIONS(iVar0) == joaat("terbyte"))
			{
				return 1;
			}
		}
	}
	if (iParam0 != func_146())
	{
		if (func_57(iParam0, 1, 1))
		{
			if (Global_2425869[iParam0 /*443*/].f_314.f_6 != -1 && Global_2425869[iParam0 /*443*/].f_314.f_9 != func_146())
			{
				return func_237(Global_2425869[iParam0 /*443*/].f_314.f_6) == 12;
			}
		}
	}
	return 0;
}

int func_245(int iParam0)
{
	if (iParam0 != func_146())
	{
		if (func_57(iParam0, 1, 1))
		{
			if (Global_2425869[iParam0 /*443*/].f_314.f_6 != -1)
			{
				return func_237(Global_2425869[iParam0 /*443*/].f_314.f_6) == 11;
			}
		}
	}
	return 0;
}

int func_246(int iParam0)
{
	if (iParam0 != func_146())
	{
		if (func_57(iParam0, 1, 1))
		{
			if (Global_2425869[iParam0 /*443*/].f_314.f_6 != -1)
			{
				return func_237(Global_2425869[iParam0 /*443*/].f_314.f_6) == 11;
			}
		}
	}
	return 0;
}

int func_247(int iParam0)
{
	if (iParam0 != func_146())
	{
		if (func_57(iParam0, 1, 1))
		{
			if (Global_2425869[iParam0 /*443*/].f_314.f_6 != -1 && Global_2425869[iParam0 /*443*/].f_314.f_9 != func_146())
			{
				return func_237(Global_2425869[iParam0 /*443*/].f_314.f_6) == 8;
			}
		}
	}
	return 0;
}

int func_248(int iParam0)
{
	if (iParam0 != func_146())
	{
		if (func_57(iParam0, 1, 1))
		{
			if (Global_2425869[iParam0 /*443*/].f_314.f_6 != -1)
			{
				return func_237(Global_2425869[iParam0 /*443*/].f_314.f_6) == 9;
			}
		}
	}
	return 0;
}

int func_249(int iParam0)
{
	if (iParam0 != func_146())
	{
		if (func_57(iParam0, 1, 1))
		{
			if (Global_2425869[iParam0 /*443*/].f_314.f_6 != -1)
			{
				return func_237(Global_2425869[iParam0 /*443*/].f_314.f_6) == 7;
			}
		}
	}
	return 0;
}

int func_250(int iParam0)
{
	if (iParam0 != func_146())
	{
		if (func_57(iParam0, 1, 1))
		{
			if (Global_2425869[iParam0 /*443*/].f_314.f_6 != -1)
			{
				return func_237(Global_2425869[iParam0 /*443*/].f_314.f_6) == 4;
			}
		}
	}
	return 0;
}

int func_251(int iParam0)
{
	if (iParam0 != func_146())
	{
		if (func_57(iParam0, 1, 1))
		{
			if (Global_2425869[iParam0 /*443*/].f_314.f_6 != -1)
			{
				return func_237(Global_2425869[iParam0 /*443*/].f_314.f_6) == 1;
			}
		}
	}
	return 0;
}

int func_252(int iParam0)
{
	if (iParam0 != func_146())
	{
		if (func_57(iParam0, 1, 1))
		{
			if (Global_2425869[iParam0 /*443*/].f_314.f_6 != -1)
			{
				return func_237(Global_2425869[iParam0 /*443*/].f_314.f_6) == 2;
			}
		}
	}
	return 0;
}

int func_253(int iParam0)
{
	if (iParam0 != func_146())
	{
		if (func_57(iParam0, 1, 1))
		{
			if (Global_2425869[iParam0 /*443*/].f_314.f_6 != -1)
			{
				return func_237(Global_2425869[iParam0 /*443*/].f_314.f_6) == 0;
			}
		}
	}
	return 0;
}

int func_254(int iParam0)
{
	switch (func_255(iParam0))
	{
		case 20:
		case 21:
		case 24:
		case 26:
		case 27:
		case 29:
		case 28:
		case 30:
		case 31:
		case 32:
		case 35:
		case 25:
		case 33:
		case 34:
			return 1;
		
		default:
	}
	return 0;
}

int func_255(int iParam0)
{
	return Global_1590682[iParam0 /*883*/].f_196;
}

bool func_256()
{
	return Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_196 != 0;
}

bool func_257()
{
	return Global_1590682[PLAYER::PLAYER_ID() /*883*/] == 5;
}

int func_258(int iParam0)
{
	if (func_213(iParam0, 1, 0))
	{
		if (Global_1590682[iParam0 /*883*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

void func_259(int iParam0)
{
	Local_106[STATS::_GET_PACKED_TITLE_UPDATE_BOOL_STAT_KEY() /*3*/].f_2 = iParam0;
}

bool func_260(int iParam0, bool bParam1)
{
	return unk_0xCE990E643CD9D0E5(Local_106[iParam0 /*3*/].f_1, iParam1);
}

int func_261()
{
	return 1;
}

int func_262()
{
	return Global_2508189;
}

int func_263(int iParam0)
{
	return Local_106[iParam0 /*3*/];
}

int func_264()
{
	var uVar0;
	
	func_271(&uVar0);
	if (Global_1312872 == 0)
	{
		if (!MISC::SET_BIT())
		{
			return 1;
		}
	}
	if (func_179())
	{
		return 1;
	}
	if (Global_2464493)
	{
		return 1;
	}
	if (func_270())
	{
		return 1;
	}
	if (func_269(159))
	{
		if (!func_268())
		{
			return 1;
		}
	}
	if (func_269(157))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_SESSION_IS_IN_VOICE_SESSION())
	{
		return 1;
	}
	if (func_265() != 0)
	{
		if (INTERIOR::GET_INTERIOR_AT_COORDS(func_265()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_265()
{
	switch (func_267())
	{
		case 0:
			return func_266();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_266()
{
	switch (Global_2464595)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_267()
{
	return Global_30968;
}

bool func_268()
{
	return Global_2451787.f_696;
}

int func_269(int iParam0)
{
	if (unk_0x16F1FCCC54559709(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_270()
{
	return Global_2462250;
}

void func_271(var uParam0)
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
					func_272(iVar0);
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

void func_272(int iParam0)
{
	struct<3> Var0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	if (unk_0x477FAFFE21935947(1, iParam0, &Var0, 3))
	{
		if (func_57(Var0.f_1, 1, 1))
		{
			iVar1 = PLAYER::GET_PLAYER_PED(Var0.f_1);
			if (MISC::IS_BIT_SET(iVar1))
			{
				if (SYSTEM::VDIST(iVar1, 0))
				{
					iVar2 = ENTITY::GET_ENTITY_MODEL(iVar1, 0);
					if (VEHICLE::REMOVE_VEHICLE_WINDOW(iVar2, Var0.f_2) && NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
					{
						if (func_273(iVar2, &bVar3))
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

int func_273(int iParam0, var uParam1)
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

void func_274()
{
	SYSTEM::WAIT(0);
}

void func_275()
{
	Global_2540384.f_1718 = 0;
	Global_2540384.f_1719 = 0;
	Global_2540384.f_1721 = 0;
	Global_2540384.f_1720 = 0;
	VEHICLE::IS_VEHICLE_DRIVEABLE(&(Global_2540384.f_206.f_1), true);
	VEHICLE::IS_VEHICLE_DRIVEABLE(&(Global_2540384.f_206.f_1), 2);
	VEHICLE::IS_VEHICLE_DRIVEABLE(&(Global_2540384.f_206.f_1), 3);
	ENTITY::STOP_ENTITY_ANIM();
}

int func_276(struct<21> Param0)
{
	func_282();
	func_280(func_281(Param0), Param0);
	NETWORK::RESERVE_NETWORK_MISSION_OBJECTS(0);
	func_277(0, -1, 0);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(&Global_2508189, 186);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_106, 97);
	WEAPON::GET_WEAPONTYPE_GROUP(0);
	Local_106[STATS::_GET_PACKED_TITLE_UPDATE_BOOL_STAT_KEY() /*3*/] = 0;
	func_259(0);
	return 1;
}

int func_277(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_279();
			}
			else
			{
				return 0;
			}
		}
		if (!func_278())
		{
			if (iParam0 == 0)
			{
				if (!MISC::SET_BIT())
				{
					if (!bParam2)
					{
						func_279();
					}
					else
					{
						return 0;
					}
				}
				if (func_179())
				{
					if (!bParam2)
					{
						func_279();
					}
					else
					{
						return 0;
					}
				}
				if (func_269(157))
				{
					if (!bParam2)
					{
						func_279();
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
					func_279();
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
				func_279();
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
			func_279();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_278()
{
	return Global_1312872;
}

void func_279()
{
	ENTITY::STOP_ENTITY_ANIM();
}

void func_280(int* iParam0, struct<17> Param1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	if (!MISC::SET_BIT())
	{
		func_279();
	}
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(iParam0, 0, Param1.f_16);
}

int func_281(int iParam0)
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

void func_282()
{
	struct<186> Var0;
	
	Var0.f_3 = -1;
	Var0.f_3.f_2 = 1065353216;
	Var0.f_8 = 21;
	Var0.f_8.f_1 = -1;
	Var0.f_8.f_1.f_2 = 1065353216;
	Var0.f_8.f_1.f_5 = -1;
	Var0.f_8.f_1.f_5.f_2 = 1065353216;
	Var0.f_8.f_1.f_5.f_5 = -1;
	Var0.f_8.f_1.f_5.f_5.f_2 = 1065353216;
	Var0.f_8.f_1.f_5.f_5.f_5 = -1;
	Var0.f_8.f_1.f_5.f_5.f_5.f_2 = 1065353216;
	Var0.f_8.f_1.f_5.f_5.f_5.f_5 = -1;
	Var0.f_8.f_1.f_5.f_5.f_5.f_5.f_2 = 1065353216;
	Var0.f_8.f_1.f_5.f_5.f_5.f_5.f_5 = -1;
	Var0.f_8.f_1.f_5.f_5.f_5.f_5.f_5.f_2 = 1065353216;
	Var0.f_8.f_1.f_5.f_5.f_5.f_5.f_5.f_5 = -1;
	Var0.f_8.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_2 = 1065353216;
	Var0.f_8.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = -1;
	Var0.f_8.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_2 = 1065353216;
	Var0.f_8.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = -1;
	Var0.f_8.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_2 = 1065353216;
	Var0.f_8.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = -1;
	Var0.f_8.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_2 = 1065353216;
	Var0.f_8.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = -1;
	Var0.f_8.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_2 = 1065353216;
	Var0.f_8.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = -1;
	Var0.f_8.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_2 = 1065353216;
	Var0.f_8.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = -1;
	Var0.f_8.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_2 = 1065353216;
	Var0.f_8.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = -1;
	Var0.f_8.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_2 = 1065353216;
	Var0.f_8.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = -1;
	Var0.f_8.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_2 = 1065353216;
	Var0.f_8.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = -1;
	Var0.f_8.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_2 = 1065353216;
	Var0.f_8.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = -1;
	Var0.f_8.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_2 = 1065353216;
	Var0.f_8.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = -1;
	Var0.f_8.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_2 = 1065353216;
	Var0.f_8.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = -1;
	Var0.f_8.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_2 = 1065353216;
	Var0.f_8.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = -1;
	Var0.f_8.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_2 = 1065353216;
	Var0.f_8.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = -1;
	Var0.f_8.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_2 = 1065353216;
	Var0.f_114 = 21;
	Var0.f_136 = 20;
	Var0.f_136.f_1 = -1;
	Var0.f_136.f_1.f_1 = -1;
	Var0.f_136.f_1.f_2 = -1;
	Var0.f_136.f_1.f_2.f_1 = -1;
	Var0.f_136.f_1.f_2.f_2 = -1;
	Var0.f_136.f_1.f_2.f_2.f_1 = -1;
	Var0.f_136.f_1.f_2.f_2.f_2 = -1;
	Var0.f_136.f_1.f_2.f_2.f_2.f_1 = -1;
	Var0.f_136.f_1.f_2.f_2.f_2.f_2 = -1;
	Var0.f_136.f_1.f_2.f_2.f_2.f_2.f_1 = -1;
	Var0.f_136.f_1.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_136.f_1.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
	Var0.f_136.f_1.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_136.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
	Var0.f_136.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_136.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
	Var0.f_136.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_136.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
	Var0.f_136.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_136.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
	Var0.f_136.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_136.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
	Var0.f_136.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_136.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
	Var0.f_136.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_136.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
	Var0.f_136.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_136.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
	Var0.f_136.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_136.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
	Var0.f_136.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_136.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
	Var0.f_136.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_136.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
	Var0.f_136.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_136.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
	Var0.f_136.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_136.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
	Var0.f_136.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_136.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
	Var0.f_182 = -1;
	Var0.f_183 = -1;
	Var0.f_184 = -1;
	Var0.f_185 = -1;
	Global_2508189 = { Var0 };
}

