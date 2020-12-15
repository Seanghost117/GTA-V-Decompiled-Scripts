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
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	float fLocal_64 = 0f;
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
	struct<3> Local_84 = { 0, 0, 0 } ;
	struct<4> Local_85 = { 2, 0, 0, 3 } ;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 2;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 2;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	struct<8> Local_109[32];
	struct<184> Local_110 = { 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_111 = 0;
	bool bLocal_112 = 0;
	bool bLocal_113 = 0;
	bool bLocal_114 = 0;
	int iLocal_115 = 0;
	int iLocal_116 = 0;
	int iLocal_117 = 0;
	int iLocal_118 = 0;
	int iLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	struct<21> Local_124 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	fLocal_64 = ((0.05f + 0.275f) - 0.01f);
	Local_84 = { -2357.12f, 3250.68f, 106.04f };
	iLocal_119 = -1;
	if (MISC::SET_BIT())
	{
		func_187(ScriptParam_124);
	}
	else
	{
		func_184();
	}
	while (true)
	{
		func_183();
		func_175();
		if (func_164() || STATS::STAT_SET_INT())
		{
			func_184();
		}
		if (MISC::SET_BIT())
		{
			if ((func_160() && !Global_262145.f_21480) && !STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED())
			{
				func_151();
			}
			if (func_40())
			{
				func_184();
			}
			if (func_37(PLAYER::PLAYER_ID()))
			{
				if (!unk_0xCE990E643CD9D0E5(Local_110.f_182, 3))
				{
					unk_0xBE20AB8238688965(&(Local_110.f_182), 3);
				}
			}
			if ((((((((((!Global_1573985 && !func_36(2)) && !func_33(PLAYER::PLAYER_ID(), 0)) && !LOCALIZATION::GET_CURRENT_LANGUAGE()) && PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) && !func_31(PLAYER::PLAYER_ID())) && !func_29(func_30(PLAYER::PLAYER_ID()))) && !func_27(PLAYER::PLAYER_ID(), 146)) && !func_23(PLAYER::PLAYER_ID())) && !func_22(PLAYER::PLAYER_ID())) && !func_21())
			{
				if (func_20(NETWORK::NETWORK_ARE_HANDLES_THE_SAME(unk_0x9B0761B4C3EB8BC7(), 0), 3, 1000, 0) || func_19(NETWORK::NETWORK_ARE_HANDLES_THE_SAME(unk_0x9B0761B4C3EB8BC7(), 0), 1000))
				{
					if (!unk_0xCE990E643CD9D0E5(Global_2540384.f_4619, 0))
					{
						if (!PED::IS_PED_IN_ANY_POLICE_VEHICLE(unk_0x9B0761B4C3EB8BC7(), 0))
						{
							if (!func_160())
							{
								func_18();
								if (PED::IS_PED_IN_ANY_PLANE(unk_0x9B0761B4C3EB8BC7()) || PED::IS_PED_IN_ANY_HELI(unk_0x9B0761B4C3EB8BC7()))
								{
									if (func_20(NETWORK::NETWORK_ARE_HANDLES_THE_SAME(unk_0x9B0761B4C3EB8BC7(), 0), 3, 0, 0) || func_19(NETWORK::NETWORK_ARE_HANDLES_THE_SAME(unk_0x9B0761B4C3EB8BC7(), 0), 0))
									{
										if (AUDIO::SET_SCRIPT_UPDATE_DOOR_AUDIO(PLAYER::PLAYER_ID()) < 4)
										{
											PLAYER::REPORT_CRIME(PLAYER::PLAYER_ID(), 36, (PLAYER::GET_WANTED_LEVEL_THRESHOLD(4) - PLAYER::GET_WANTED_LEVEL_THRESHOLD(AUDIO::SET_SCRIPT_UPDATE_DOOR_AUDIO(PLAYER::PLAYER_ID()))));
										}
										else
										{
											PLAYER::REPORT_POLICE_SPOTTED_PLAYER(PLAYER::PLAYER_ID());
										}
									}
									else if (!func_17(&(Local_110.f_3)))
									{
										func_14(&(Local_110.f_3));
									}
									else if (func_11(&(Local_110.f_3)) > 20f || Local_110.f_177)
									{
										if (AUDIO::SET_SCRIPT_UPDATE_DOOR_AUDIO(PLAYER::PLAYER_ID()) < 4)
										{
											PLAYER::REPORT_CRIME(PLAYER::PLAYER_ID(), 36, (PLAYER::GET_WANTED_LEVEL_THRESHOLD(4) - PLAYER::GET_WANTED_LEVEL_THRESHOLD(AUDIO::SET_SCRIPT_UPDATE_DOOR_AUDIO(PLAYER::PLAYER_ID()))));
										}
										else
										{
											PLAYER::REPORT_POLICE_SPOTTED_PLAYER(PLAYER::PLAYER_ID());
										}
									}
								}
								else if (AUDIO::SET_SCRIPT_UPDATE_DOOR_AUDIO(PLAYER::PLAYER_ID()) < 4)
								{
									PLAYER::REPORT_CRIME(PLAYER::PLAYER_ID(), 36, (PLAYER::GET_WANTED_LEVEL_THRESHOLD(4) - PLAYER::GET_WANTED_LEVEL_THRESHOLD(AUDIO::SET_SCRIPT_UPDATE_DOOR_AUDIO(PLAYER::PLAYER_ID()))));
								}
								else
								{
									PLAYER::REPORT_POLICE_SPOTTED_PLAYER(PLAYER::PLAYER_ID());
								}
							}
							else
							{
								if (Global_2540384.f_6635)
								{
									bLocal_112 = false;
									Global_2540384.f_6635 = 0;
								}
								if (AUDIO::SET_SCRIPT_UPDATE_DOOR_AUDIO(PLAYER::PLAYER_ID()) == 0 && !iLocal_116)
								{
									iLocal_116 = 1;
								}
								if (Global_262145.f_21469 && !func_9(PLAYER::PLAYER_ID()))
								{
									if ((!bLocal_112 && AUDIO::SET_SCRIPT_UPDATE_DOOR_AUDIO(PLAYER::PLAYER_ID()) != 0) && iLocal_116)
									{
										PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
										PLAYER::SET_MAX_WANTED_LEVEL(0);
										iLocal_115 = 1;
									}
									if (func_2() && !bLocal_112)
									{
										bLocal_112 = true;
										PLAYER::SET_MAX_WANTED_LEVEL(5);
									}
								}
								if (func_2() && !bLocal_112)
								{
									bLocal_112 = true;
								}
								if (bLocal_112)
								{
									if (bLocal_113)
									{
										if (AUDIO::SET_SCRIPT_UPDATE_DOOR_AUDIO(PLAYER::PLAYER_ID()) < 2)
										{
											PLAYER::REPORT_CRIME(PLAYER::PLAYER_ID(), 36, (PLAYER::GET_WANTED_LEVEL_THRESHOLD(2) - PLAYER::GET_WANTED_LEVEL_THRESHOLD(AUDIO::SET_SCRIPT_UPDATE_DOOR_AUDIO(PLAYER::PLAYER_ID()))));
										}
										else
										{
											PLAYER::REPORT_POLICE_SPOTTED_PLAYER(PLAYER::PLAYER_ID());
										}
									}
									else if (bLocal_114)
									{
										if (AUDIO::SET_SCRIPT_UPDATE_DOOR_AUDIO(PLAYER::PLAYER_ID()) < 3)
										{
											PLAYER::REPORT_CRIME(PLAYER::PLAYER_ID(), 36, (PLAYER::GET_WANTED_LEVEL_THRESHOLD(3) - PLAYER::GET_WANTED_LEVEL_THRESHOLD(AUDIO::SET_SCRIPT_UPDATE_DOOR_AUDIO(PLAYER::PLAYER_ID()))));
										}
										else
										{
											PLAYER::REPORT_POLICE_SPOTTED_PLAYER(PLAYER::PLAYER_ID());
										}
									}
									else if (AUDIO::SET_SCRIPT_UPDATE_DOOR_AUDIO(PLAYER::PLAYER_ID()) < Global_262145.f_21406)
									{
										PLAYER::REPORT_CRIME(PLAYER::PLAYER_ID(), 36, (PLAYER::GET_WANTED_LEVEL_THRESHOLD(Global_262145.f_21406) - PLAYER::GET_WANTED_LEVEL_THRESHOLD(AUDIO::SET_SCRIPT_UPDATE_DOOR_AUDIO(PLAYER::PLAYER_ID()))));
									}
									else
									{
										PLAYER::REPORT_POLICE_SPOTTED_PLAYER(PLAYER::PLAYER_ID());
									}
								}
							}
						}
						else
						{
							if (func_17(&(Local_110.f_3)))
							{
								func_1(&(Local_110.f_3));
							}
							if (Local_110.f_177)
							{
								Local_110.f_177 = 0;
							}
							func_18();
						}
					}
					else
					{
						if (!Local_110.f_177)
						{
							Local_110.f_177 = 1;
						}
						func_18();
					}
				}
				else
				{
					if (Local_110.f_177)
					{
						Local_110.f_177 = 0;
					}
					func_18();
				}
			}
			else
			{
				func_18();
			}
		}
		else
		{
			func_184();
		}
	}
}

void func_1(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

int func_2()
{
	int iVar0;
	
	if (((func_20(NETWORK::NETWORK_ARE_HANDLES_THE_SAME(unk_0x9B0761B4C3EB8BC7(), 0), 3, 1000, 0) || func_19(NETWORK::NETWORK_ARE_HANDLES_THE_SAME(unk_0x9B0761B4C3EB8BC7(), 0), 1000)) && !func_8()) && !func_22(PLAYER::PLAYER_ID()))
	{
		if (Global_262145.f_21400)
		{
			return 0;
		}
		if (((unk_0x1037B9D45CE6B788(unk_0x9B0761B4C3EB8BC7(), -2346.975f, 3259.757f, 31.81074f, -2349.507f, 3261.232f, 33.81074f, 9.5625f, 0, 1, 0) || unk_0x1037B9D45CE6B788(unk_0x9B0761B4C3EB8BC7(), -2054.865f, 3240.977f, 30.51001f, -2056.552f, 3237.846f, 32.50156f, 4.0625f, 0, 1, 0)) || unk_0x1037B9D45CE6B788(unk_0x9B0761B4C3EB8BC7(), -1792.908f, 3091.104f, 31.81257f, -1812.707f, 3102.736f, 39.46682f, 18.187f, 0, 1, 0)) || func_7(PLAYER::PLAYER_ID()))
		{
			bLocal_113 = false;
			bLocal_114 = false;
			return 1;
		}
		if (Global_262145.f_21407)
		{
			if (SYSTEM::VDIST(unk_0x9B0761B4C3EB8BC7(), 0))
			{
				iVar0 = ENTITY::GET_ENTITY_MODEL(unk_0x9B0761B4C3EB8BC7(), 0);
				if (VEHICLE::IS_VEHICLE_STOLEN(iVar0))
				{
					if (func_6(iVar0))
					{
						if ((!func_5(iVar0, 1) && !func_4(iVar0)) && !func_3(iVar0))
						{
							bLocal_113 = true;
							bLocal_114 = false;
							return 1;
						}
					}
				}
			}
		}
		else if (SYSTEM::VDIST(unk_0x9B0761B4C3EB8BC7(), 0))
		{
			if (VEHICLE::IS_VEHICLE_STOLEN(ENTITY::GET_ENTITY_MODEL(unk_0x9B0761B4C3EB8BC7(), 0)))
			{
				if ((!func_5(ENTITY::GET_ENTITY_MODEL(unk_0x9B0761B4C3EB8BC7(), 0), 1) && !func_4(ENTITY::GET_ENTITY_MODEL(unk_0x9B0761B4C3EB8BC7(), 0))) && !func_3(ENTITY::GET_ENTITY_MODEL(unk_0x9B0761B4C3EB8BC7(), 0)))
				{
					bLocal_113 = true;
					bLocal_114 = false;
					return 1;
				}
			}
		}
		if (Global_2540384.f_6633 || Global_2540384.f_6634)
		{
			if (Global_2540384.f_6634)
			{
				bLocal_113 = false;
				bLocal_114 = true;
			}
			else
			{
				bLocal_113 = true;
				bLocal_114 = false;
			}
			Global_2540384.f_6633 = 0;
			Global_2540384.f_6634 = 0;
			return 1;
		}
	}
	return 0;
}

int func_3(int iParam0)
{
	bool bVar0;
	
	if (ENTITY::GET_ENTITY_COORDS(iParam0, false))
	{
		if (NETWORK::NET_TO_VEH("MPBitset", 3) && unk_0x871819940BD2E434(iParam0, "MPBitset"))
		{
			bVar0 = PED::IS_PED_IN_ANY_VEHICLE(iParam0, "MPBitset");
			if (unk_0xCE990E643CD9D0E5(bVar0, 17))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_4(int iParam0)
{
	if ((NETWORK::NET_TO_VEH("CreatedByPegasus", 2) && unk_0x871819940BD2E434(iParam0, "CreatedByPegasus")) && DECORATOR::DECOR_GET_BOOL(iParam0, "CreatedByPegasus"))
	{
		return 1;
	}
	return 0;
}

int func_5(int iParam0, bool bParam1)
{
	if (Global_76833)
	{
		if (MISC::IS_BIT_SET(iParam0) && (!bParam1 || ENTITY::GET_ENTITY_COORDS(iParam0, false)))
		{
			if (unk_0x871819940BD2E434(iParam0, "Player_Vehicle"))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_6(int iParam0)
{
	void fVar0;
	
	fVar0 = MISC::GET_MODEL_DIMENSIONS(iParam0);
	switch (fVar0)
	{
		case joaat("barracks"):
		case joaat("barracks2"):
		case joaat("barracks3"):
		case joaat("besra"):
		case joaat("buzzard"):
		case joaat("buzzard2"):
		case joaat("cargobob"):
		case joaat("crusader"):
		case joaat("firetruk"):
		case joaat("lazer"):
		case joaat("rhino"):
		case joaat("titan"):
			return 1;
		
		default:
	}
	return 0;
}

int func_7(bool bParam0)
{
	void fVar0;
	void fVar1;
	
	fVar0 = MONEY::NETWORK_SPENT_REQUEST_HEIST(PLAYER::GET_PLAYER_PED(bParam0));
	fVar1 = unk_0xC519B5898C2310B1(-2346.975f, 3259.757f, 31.81074f, "v_tower");
	if (unk_0x0B1B45E748AD48BA(fVar0) && unk_0x0B1B45E748AD48BA(fVar1))
	{
		if ((fVar0 == fVar1 && !unk_0x1037B9D45CE6B788(PLAYER::GET_PLAYER_PED(bParam0), -2345.4f, 3270.1f, 31.81f, -2347.9f, 3265.8f, 34.811f, 8.25f, 0, 1, 0)) && !unk_0x1037B9D45CE6B788(PLAYER::GET_PLAYER_PED(bParam0), -2349.3f, 3266.7f, 31.81f, -2350f, 3265.5f, 34.811f, 5.15f, 0, 1, 0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_8()
{
	return Global_4456448 == 3;
}

int func_9(bool bParam0)
{
	int iVar0;
	
	iVar0 = bParam0;
	if (iVar0 != -1)
	{
		return func_10(bParam0, 9);
	}
	return 0;
}

bool func_10(int iParam0, int iParam1)
{
	return unk_0xCE990E643CD9D0E5(Global_1630317[iParam0 /*595*/].f_11.f_4, iParam1);
}

float func_11(int iParam0)
{
	if (func_17(iParam0))
	{
		if (func_13(iParam0))
		{
			return iParam0->f_2;
		}
		else
		{
			return (func_12(unk_0xCE990E643CD9D0E5(*iParam0, 4)) - iParam0->f_1);
		}
	}
	return iParam0->f_1;
}

float func_12(bool bParam0)
{
	float fVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	
	if (bParam0)
	{
		fVar0 = SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER());
		fVar1 = (fVar0 / 1000f);
		return fVar1;
	}
	if (MISC::SET_BIT())
	{
		iVar2 = NETWORK::GET_NETWORK_TIME();
		fVar3 = SYSTEM::TO_FLOAT(iVar2);
		fVar4 = (fVar3 / 1000f);
		return fVar4;
	}
	return (SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

bool func_13(var uParam0)
{
	return unk_0xCE990E643CD9D0E5(*uParam0, 2);
}

void func_14(int iParam0)
{
	if (!func_17(iParam0))
	{
		func_15(iParam0);
	}
}

void func_15(int iParam0)
{
	func_16(iParam0, 0f);
}

void func_16(int iParam0, float fParam1)
{
	iParam0->f_1 = (func_12(unk_0xCE990E643CD9D0E5(*iParam0, 4)) - fParam1);
	unk_0xBE20AB8238688965(iParam0, 1);
	VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 2);
	iParam0->f_2 = 0f;
}

bool func_17(var uParam0)
{
	return unk_0xCE990E643CD9D0E5(*uParam0, 1);
}

void func_18()
{
	if (iLocal_115)
	{
		PLAYER::SET_MAX_WANTED_LEVEL(5);
	}
	Global_2540384.f_6633 = 0;
	Global_2540384.f_6634 = 0;
	iLocal_115 = 0;
	bLocal_112 = false;
	bLocal_113 = false;
	iLocal_116 = 0;
}

int func_19(struct<3> Param0, int iParam1)
{
	struct<3> Var0[15];
	struct<3> Var1[15];
	float fVar2[15];
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar5 = 0;
	Var0[0 /*3*/] = { -1877.436f, 2783.151f, 31.80618f };
	Var1[0 /*3*/] = { -1797.873f, 2924.37f, (307.1106f + IntToFloat(iParam1)) };
	fVar2[0] = 88f;
	Var0[1 /*3*/] = { -1761.116f, 2834.651f, 31.80622f };
	Var1[1 /*3*/] = { -1720.887f, 2906.419f, (281.8062f + IntToFloat(iParam1)) };
	fVar2[1] = 88f;
	Var0[2 /*3*/] = { -1761.493f, 2817.68f, 32.37125f };
	Var1[2 /*3*/] = { -1769.704f, 2913.734f, (281.8066f + IntToFloat(iParam1)) };
	fVar2[2] = 88f;
	Var0[3 /*3*/] = { -1879.297f, 2772.653f, 29.57795f };
	Var1[3 /*3*/] = { -1864.521f, 2825.472f, (281.8062f + IntToFloat(iParam1)) };
	fVar2[3] = 88f;
	Var0[4 /*3*/] = { -2676.74f, 3366.988f, 29.92394f };
	Var1[4 /*3*/] = { -2744.79f, 3340.347f, (37.80379f + IntToFloat(iParam1)) };
	fVar2[4] = 9f;
	Var0[5 /*3*/] = { -2676.74f, 3366.988f, 29.92394f };
	Var1[5 /*3*/] = { -2744.79f, 3340.347f, (37.80379f + IntToFloat(iParam1)) };
	fVar2[5] = 9.5f;
	Var0[6 /*3*/] = { -2807.397f, 3264.226f, 29.92764f };
	Var1[6 /*3*/] = { -2879.805f, 3309.01f, (37.57864f + IntToFloat(iParam1)) };
	fVar2[6] = 9.5f;
	Var0[7 /*3*/] = { -2808.236f, 3264.634f, 29.92764f };
	Var1[7 /*3*/] = { -2747.55f, 3187.8f, (37.45682f + IntToFloat(iParam1)) };
	fVar2[7] = 9.5f;
	Var0[8 /*3*/] = { -2530.996f, 3064.151f, 29.71081f };
	Var1[8 /*3*/] = { -2748.557f, 3189.939f, (37.45682f + IntToFloat(iParam1)) };
	fVar2[8] = 9.5f;
	Var0[9 /*3*/] = { -2533.902f, 3062.491f, 29.70715f };
	Var1[9 /*3*/] = { -2520.674f, 2996.817f, (37.45715f + IntToFloat(iParam1)) };
	fVar2[9] = 9.5f;
	Var0[10 /*3*/] = { -2500.716f, 2927.103f, 29.45663f };
	Var1[10 /*3*/] = { -2445.696f, 2896.657f, (37.68009f + IntToFloat(iParam1)) };
	fVar2[10] = 9.5f;
	Var0[11 /*3*/] = { -2020.543f, 2810.747f, 29.45658f };
	Var1[11 /*3*/] = { -1927.949f, 2785.779f, (37.67057f + IntToFloat(iParam1)) };
	fVar2[11] = 9.5f;
	Var0[12 /*3*/] = { -2261.899f, 3376.549f, 29.77859f };
	Var1[12 /*3*/] = { -2141.067f, 3376.773f, (37.90019f + IntToFloat(iParam1)) };
	fVar2[12] = 9.5f;
	iVar3 = 13;
	iVar4 = 0;
	while (iVar4 < iVar3)
	{
		if (HUD::GET_BLIP_INFO_ID_TYPE(Param0, Var0[iVar4 /*3*/], Var1[iVar4 /*3*/], fVar2[iVar4], iVar5, 1))
		{
			return 1;
		}
		iVar4++;
	}
	return 0;
}

int func_20(struct<3> Param0, int iParam1, int iParam2, bool bParam3)
{
	struct<3> Var0[15];
	struct<3> Var1[15];
	float fVar2[15];
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar5 = 0;
	switch (iParam1)
	{
		case 1:
			Var0[0 /*3*/] = { -1332.211f, 100.4608f, 40.38437f };
			Var1[0 /*3*/] = { -1094.238f, 148.4274f, 73f };
			fVar2[0] = 171.25f;
			Var0[1 /*3*/] = { -999.7344f, -110.2231f, 25.25706f };
			Var1[1 /*3*/] = { -1149.494f, 109.2558f, 73f };
			fVar2[1] = 132f;
			Var0[2 /*3*/] = { -1035.113f, -84.95885f, 28.2746f };
			Var1[2 /*3*/] = { -1261.103f, 50.08148f, 73f };
			fVar2[2] = 132f;
			iVar3 = 3;
			break;
		
		case 2:
			Var0[0 /*3*/] = { -804.3439f, -3346.5f, 10f };
			Var1[0 /*3*/] = { -1816.954f, -2768.893f, IntToFloat((250 + iParam2)) };
			fVar2[0] = 247f;
			Var0[1 /*3*/] = { -1911.488f, -2934.197f, 10f };
			Var1[1 /*3*/] = { -968.6236f, -3477.748f, IntToFloat((250 + iParam2)) };
			fVar2[1] = 149f;
			Var0[2 /*3*/] = { -844.9433f, -2802.785f, 10f };
			Var1[2 /*3*/] = { -1011.081f, -3086.904f, IntToFloat((250 + iParam2)) };
			fVar2[2] = 185.5f;
			Var0[3 /*3*/] = { -1021.086f, -2952.277f, 10f };
			Var1[3 /*3*/] = { -1599.008f, -2616.271f, IntToFloat((250 + iParam2)) };
			fVar2[3] = 250f;
			Var0[4 /*3*/] = { -1027.136f, -2436.457f, 10f };
			Var1[4 /*3*/] = { -1392.61f, -2226.763f, IntToFloat((250 + iParam2)) };
			fVar2[4] = 193.5f;
			Var0[5 /*3*/] = { -1497.549f, -2408.712f, 10f };
			Var1[5 /*3*/] = { -1136.917f, -2617.955f, IntToFloat((250 + iParam2)) };
			fVar2[5] = 234.5f;
			Var0[6 /*3*/] = { -982.7924f, -2831.709f, 12.93313f };
			Var1[6 /*3*/] = { -966.4677f, -2803.458f, 16.68313f };
			fVar2[6] = 16f;
			Var0[7 /*3*/] = { -1110.083f, -3496.806f, 12f };
			Var1[7 /*3*/] = { -1955.298f, -3010.431f, IntToFloat((250 + iParam2)) };
			fVar2[7] = 80f;
			Var0[8 /*3*/] = { -1886.899f, -3193.024f, 12f };
			Var1[8 /*3*/] = { -1836.143f, -3105.268f, IntToFloat((250 + iParam2)) };
			fVar2[8] = 142f;
			Var0[9 /*3*/] = { -1134.337f, -3535.648f, 12f };
			Var1[9 /*3*/] = { -1259.649f, -3463.486f, IntToFloat((250 + iParam2)) };
			fVar2[9] = 30.75f;
			Var0[10 /*3*/] = { -969.1279f, -3463.899f, 12f };
			Var1[10 /*3*/] = { -896.3734f, -3505.715f, IntToFloat((250 + iParam2)) };
			fVar2[10] = 150f;
			Var0[11 /*3*/] = { -1369.491f, -2173.579f, 10f };
			Var1[11 /*3*/] = { -1685.626f, -2720.364f, IntToFloat((250 + iParam2)) };
			fVar2[11] = 29.25f;
			Var0[12 /*3*/] = { -1010.926f, -3550.943f, 10f };
			Var1[12 /*3*/] = { -1110.198f, -3493.617f, IntToFloat((250 + iParam2)) };
			fVar2[12] = 43f;
			iVar3 = 13;
			break;
		
		case 3:
			Var0[0 /*3*/] = { -1773.944f, 3287.334f, 30f };
			Var1[0 /*3*/] = { -2029.776f, 2845.083f, IntToFloat((250 + iParam2)) };
			fVar2[0] = 255f;
			Var0[1 /*3*/] = { -2725.889f, 3291.099f, 30f };
			Var1[1 /*3*/] = { -2009.182f, 2879.835f, IntToFloat((250 + iParam2)) };
			fVar2[1] = 180f;
			Var0[2 /*3*/] = { -2442.026f, 3326.699f, 30f };
			Var1[2 /*3*/] = { -2033.928f, 3089.049f, IntToFloat((250 + iParam2)) };
			fVar2[2] = 205f;
			Var0[3 /*3*/] = { -1917.165f, 3374.209f, 30f };
			Var1[3 /*3*/] = { -2016.791f, 3195.058f, IntToFloat((250 + iParam2)) };
			fVar2[3] = 86.25f;
			Var0[4 /*3*/] = { -2192.753f, 3373.278f, 30f };
			Var1[4 /*3*/] = { -2191.544f, 3150.417f, IntToFloat((250 + iParam2)) };
			fVar2[4] = 150.5f;
			Var0[5 /*3*/] = { -2077.663f, 3344.514f, 30f };
			Var1[5 /*3*/] = { -2191.544f, 3150.417f, IntToFloat((250 + iParam2)) };
			fVar2[5] = 140.5f;
			Var0[6 /*3*/] = { -2861.755f, 3352.661f, 30f };
			Var1[6 /*3*/] = { -2715.871f, 3269.916f, IntToFloat((250 + iParam2)) };
			fVar2[6] = 90f;
			Var0[7 /*3*/] = { -2005.574f, 3364.533f, 30f };
			Var1[7 /*3*/] = { -1977.569f, 3330.888f, IntToFloat((250 + iParam2)) };
			fVar2[7] = 100f;
			Var0[8 /*3*/] = { -1682.235f, 3004.285f, 30f };
			Var1[8 /*3*/] = { -1942.747f, 2947.441f, IntToFloat((250 + iParam2)) };
			fVar2[8] = 248.75f;
			Var0[9 /*3*/] = { -2393.295f, 2936.406f, 31.6801f };
			Var1[9 /*3*/] = { -2453.037f, 3006.863f, 52.31003f };
			fVar2[9] = 128f;
			Var0[10 /*3*/] = { -2347.185f, 3023.83f, 31.56573f };
			Var1[10 /*3*/] = { -2517.33f, 2989.063f, 49.95644f };
			fVar2[10] = 140f;
			Var0[11 /*3*/] = { -2259.922f, 3358.04f, 29.99972f };
			Var1[11 /*3*/] = { -2299.772f, 3385.79f, 38.06014f };
			fVar2[11] = 16f;
			Var0[12 /*3*/] = { -2476.309f, 3363.914f, 31.67933f };
			Var1[12 /*3*/] = { -2431.981f, 3287.669f, 39.97826f };
			fVar2[12] = 214.25f;
			Var0[13 /*3*/] = { -2103.081f, 2797.783f, 29.37864f };
			Var1[13 /*3*/] = { -2096.821f, 2874.423f, 57.80989f };
			fVar2[13] = 65.75f;
			if (bParam3)
			{
				iVar6 = iParam2;
			}
			else
			{
				iVar6 = 0;
			}
			Var1[9 /*3*/].f_2 = (Var1[9 /*3*/].f_2 + IntToFloat(iVar6));
			Var1[10 /*3*/].f_2 = (Var1[10 /*3*/].f_2 + IntToFloat(iVar6));
			Var1[11 /*3*/].f_2 = (Var1[11 /*3*/].f_2 + IntToFloat(iVar6));
			Var1[12 /*3*/].f_2 = (Var1[12 /*3*/].f_2 + IntToFloat(iVar6));
			Var1[13 /*3*/].f_2 = (Var1[13 /*3*/].f_2 + IntToFloat(iVar6));
			iVar3 = 14;
			break;
		
		case 4:
			Var0[0 /*3*/] = { 1541.607f, 2527.555f, 40f };
			Var1[0 /*3*/] = { 1815.575f, 2535.06f, IntToFloat((150 + iParam2)) };
			fVar2[0] = 114f;
			Var0[1 /*3*/] = { 1788.879f, 2445.727f, 40f };
			Var1[1 /*3*/] = { 1716.96f, 2502.957f, IntToFloat((150 + iParam2)) };
			fVar2[1] = 88.5f;
			Var0[2 /*3*/] = { 1601.157f, 2436.244f, 40f };
			Var1[2 /*3*/] = { 1650.078f, 2515.923f, IntToFloat((150 + iParam2)) };
			fVar2[2] = 133.25f;
			Var0[3 /*3*/] = { 1706.331f, 2407.597f, 40f };
			Var1[3 /*3*/] = { 1698.555f, 2460.208f, IntToFloat((150 + iParam2)) };
			fVar2[3] = 104.5f;
			Var0[4 /*3*/] = { 1712.452f, 2756.218f, 40f };
			Var1[4 /*3*/] = { 1718.848f, 2589.162f, IntToFloat((150 + iParam2)) };
			fVar2[4] = 121.75f;
			Var0[5 /*3*/] = { 1830.228f, 2661.24f, 40f };
			Var1[5 /*3*/] = { 1774.812f, 2679.419f, IntToFloat((150 + iParam2)) };
			fVar2[5] = 84.5f;
			Var0[6 /*3*/] = { 1559.05f, 2632.22f, 40f };
			Var1[6 /*3*/] = { 1657.208f, 2595.484f, IntToFloat((150 + iParam2)) };
			fVar2[6] = 103.75f;
			Var0[7 /*3*/] = { 1612.021f, 2716.869f, 40f };
			Var1[7 /*3*/] = { 1657.165f, 2669.721f, IntToFloat((150 + iParam2)) };
			fVar2[7] = 104.25f;
			Var0[8 /*3*/] = { 1809.872f, 2729.827f, 40f };
			Var1[8 /*3*/] = { 1789.855f, 2705.037f, IntToFloat((150 + iParam2)) };
			fVar2[8] = 91f;
			Var0[9 /*3*/] = { 1818.789f, 2605.948f, 40f };
			Var1[9 /*3*/] = { 1783.114f, 2606.783f, IntToFloat((150 + iParam2)) };
			fVar2[9] = 51.25f;
			iVar3 = 10;
			break;
		
		case 5:
			Var0[0 /*3*/] = { 3411.002f, 3663.185f, 20f };
			Var1[0 /*3*/] = { 3615.583f, 3626.194f, IntToFloat((40 + iParam2)) };
			fVar2[0] = 45.75f;
			Var0[1 /*3*/] = { 3426.66f, 3733.078f, 20f };
			Var1[1 /*3*/] = { 3643.801f, 3694.362f, IntToFloat((40 + iParam2)) };
			fVar2[1] = 99f;
			Var0[2 /*3*/] = { 3446.036f, 3795.688f, 20f };
			Var1[2 /*3*/] = { 3650.914f, 3766.152f, IntToFloat((40 + iParam2)) };
			fVar2[2] = 81.5f;
			iVar3 = 3;
			break;
		
		case 6:
			Var0[0 /*3*/] = { 526.053f, -3391.497f, -10f };
			Var1[0 /*3*/] = { 523.2289f, -3118.678f, IntToFloat((10 + iParam2)) };
			fVar2[0] = 120f;
			Var0[1 /*3*/] = { 459.4397f, -3199.99f, 4.819676f };
			Var1[1 /*3*/] = { 593.8928f, -3199.998f, 30.06926f };
			fVar2[1] = 170f;
			Var0[2 /*3*/] = { 552.8467f, -3111.054f, 4.819394f };
			Var1[2 /*3*/] = { 585.3137f, -3111.844f, 17.56923f };
			fVar2[2] = 12.5f;
			Var0[3 /*3*/] = { 598.4666f, -3140.147f, 4.819257f };
			Var1[3 /*3*/] = { 597.4973f, -3117.063f, 17.31926f };
			fVar2[3] = 9.75f;
			iVar3 = 4;
			break;
		
		case 7:
			Var0[0 /*3*/] = { -1108.55f, -570.8798f, 20f };
			Var1[0 /*3*/] = { -1187.811f, -477.5037f, IntToFloat((50 + iParam2)) };
			fVar2[0] = 162f;
			Var0[1 /*3*/] = { -1201.378f, -485.9673f, 20f };
			Var1[1 /*3*/] = { -1215.796f, -464.8281f, IntToFloat((50 + iParam2)) };
			fVar2[1] = 124f;
			Var0[2 /*3*/] = { -985.6311f, -525.4233f, 20f };
			Var1[2 /*3*/] = { -1013.393f, -475.2057f, IntToFloat((50 + iParam2)) };
			fVar2[2] = 55f;
			Var0[3 /*3*/] = { -1055.849f, -477.8226f, 20f };
			Var1[3 /*3*/] = { -1073.333f, -498.717f, IntToFloat((50 + iParam2)) };
			fVar2[3] = 142f;
			iVar3 = 4;
			break;
		
		case 8:
			Var0[0 /*3*/] = { 461.5684f, -984.572f, 29.43951f };
			Var1[0 /*3*/] = { 471.17f, -984.4292f, 40.14212f };
			fVar2[0] = 7.75f;
			Var0[1 /*3*/] = { 457.3404f, -984.756f, 34.43951f };
			Var1[1 /*3*/] = { 457.2084f, -993.7189f, 29.38958f };
			fVar2[1] = 14.75f;
			Var0[2 /*3*/] = { 477.6227f, -986.6f, 40.00819f };
			Var1[2 /*3*/] = { 424.8687f, -986.3279f, 48.71241f };
			fVar2[2] = 31.5f;
			Var0[3 /*3*/] = { 474.3889f, -974.4613f, 39.55761f };
			Var1[3 /*3*/] = { 474.0358f, -1021.972f, 49.10033f };
			fVar2[3] = 30.5f;
			Var0[4 /*3*/] = { 442.1768f, -974.1888f, 29.68951f };
			Var1[4 /*3*/] = { 442.1855f, -979.8635f, 33.43951f };
			fVar2[4] = 6.75f;
			iVar3 = 5;
			break;
	}
	iVar4 = 0;
	while (iVar4 < iVar3)
	{
		if (HUD::GET_BLIP_INFO_ID_TYPE(Param0, Var0[iVar4 /*3*/], Var1[iVar4 /*3*/], fVar2[iVar4], iVar5, 1))
		{
			return 1;
		}
		iVar4++;
	}
	return 0;
}

bool func_21()
{
	return Global_2540384.f_6636;
}

int func_22(bool bParam0)
{
	int iVar0;
	void fVar1;
	
	if (!MISC::SET_BIT())
	{
		return 0;
	}
	if (bParam0 == PLAYER::PLAYER_ID())
	{
		return Global_2515846;
	}
	else
	{
		iVar0 = PLAYER::GET_PLAYER_PED(bParam0);
		if (MISC::IS_BIT_SET(iVar0))
		{
			fVar1 = MISC::GET_MODEL_DIMENSIONS(iVar0);
			if (fVar1 == joaat("mp_m_freemode_01") || fVar1 == joaat("mp_f_freemode_01"))
			{
				return 0;
			}
			else
			{
				return 1;
			}
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

bool func_23(bool bParam0)
{
	return func_24(func_25(bParam0));
}

int func_24(int iParam0)
{
	switch (iParam0)
	{
		case 167:
		case 169:
		case 168:
			return 1;
		
		default:
	}
	return 0;
}

int func_25(bool bParam0)
{
	if (func_26(bParam0, 0))
	{
		return Global_1630317[bParam0 /*595*/].f_11.f_33;
	}
	return -1;
}

int func_26(int iParam0, int iParam1)
{
	if (Global_1630317[iParam0 /*595*/].f_11.f_33 != -1 || (iParam1 && Global_1630317[iParam0 /*595*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_27(bool bParam0, int iParam1)
{
	if (Global_1630317[bParam0 /*595*/] == iParam1)
	{
		return func_28(bParam0);
	}
	return 0;
}

int func_28(bool bParam0)
{
	int iVar0;
	
	iVar0 = bParam0;
	if (iVar0 != -1)
	{
		return unk_0xCE990E643CD9D0E5(Global_1630317[iVar0 /*595*/].f_1, 0);
	}
	return 0;
}

int func_29(int iParam0)
{
	switch (iParam0)
	{
		case 136:
		case 144:
		case 129:
			return 1;
		
		case 141:
			if (func_28(PLAYER::PLAYER_ID()))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_30(bool bParam0)
{
	int iVar0;
	
	iVar0 = bParam0;
	if (iVar0 != -1)
	{
		return Global_1630317[iVar0 /*595*/];
	}
	return -1;
}

int func_31(bool bParam0)
{
	if (func_33(bParam0, 0))
	{
		return 1;
	}
	if (func_32())
	{
		if (bParam0 == PLAYER::PLAYER_ID())
		{
			return 1;
		}
	}
	if (unk_0xCE990E643CD9D0E5(Global_2425869[bParam0 /*443*/].f_199, 2))
	{
		return 1;
	}
	return 0;
}

bool func_32()
{
	return unk_0xCE990E643CD9D0E5(Global_2359302, 3);
}

bool func_33(bool bParam0, int iParam1)
{
	bool bVar0;
	
	if (bParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_34(-1, 0) == 8;
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

int func_34(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_35();
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

int func_35()
{
	return Global_1312763;
}

bool func_36(int iParam0)
{
	return unk_0xCE990E643CD9D0E5(Global_1573984, iParam0);
}

int func_37(bool bParam0)
{
	if (bParam0 != func_39() && func_38(bParam0, 1, 1))
	{
		return unk_0xCE990E643CD9D0E5(Global_2425869[bParam0 /*443*/].f_314, 3);
	}
	return 0;
}

int func_38(bool bParam0, bool bParam1, bool bParam2)
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

int func_39()
{
	return -1;
}

int func_40()
{
	int iVar0;
	
	iVar0 = 0;
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		if (func_128())
		{
			iVar0 = 1;
		}
	}
	if (func_41())
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_41()
{
	int iVar0;
	
	switch (Local_110.f_6)
	{
		case 0:
			func_127();
			if ((((((((func_124(PLAYER::PLAYER_ID(), 1, 0) && func_123()) || func_25(PLAYER::PLAYER_ID()) == 159) || func_25(PLAYER::PLAYER_ID()) == 225) || func_25(PLAYER::PLAYER_ID()) == 233) || func_122(PLAYER::PLAYER_ID())) || func_21()) || Global_1574416) || (STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED() && func_8()))
			{
				VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("rhino"), true);
			}
			func_120(&(Local_109[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/]), 1);
			Local_110.f_176 = 1;
			Local_110.f_6 = 1;
			break;
		
		case 1:
			if (func_119())
			{
				func_120(&(Local_109[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/]), 2);
				Local_110.f_6 = 2;
			}
			break;
		
		case 2:
			if (func_118(Local_85.f_20, 1))
			{
				Local_110.f_6 = 3;
			}
			break;
		
		case 3:
			if ((!func_124(PLAYER::PLAYER_ID(), 1, 0) && !func_123()) && !func_160())
			{
				iVar0 = 0;
				while (iVar0 < 2)
				{
					func_112(iVar0);
					iVar0++;
				}
			}
			if (MISC::SET_BIT())
			{
				if ((((func_110() && !func_124(PLAYER::PLAYER_ID(), 1, 0)) && !func_123()) && !STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED()) && func_108(PLAYER::PLAYER_ID()) != 6)
				{
					func_49();
				}
			}
			iVar0 = 0;
			while (iVar0 < 3)
			{
				func_42(iVar0);
				iVar0++;
			}
			if (((((func_25(PLAYER::PLAYER_ID()) == 225 || func_25(PLAYER::PLAYER_ID()) == 233) || func_122(PLAYER::PLAYER_ID())) || Global_1574416) || func_21()) || (STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED() && func_8()))
			{
				VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("rhino"), true);
			}
			if (SYSTEM::VDIST2(NETWORK::NETWORK_ARE_HANDLES_THE_SAME(unk_0x9B0761B4C3EB8BC7(), 0), -2076.374f, 3112.294f, 33.13584f) >= 1030225f)
			{
				Local_110.f_6 = 4;
			}
			break;
		
		case 4:
			if ((((((((func_124(PLAYER::PLAYER_ID(), 1, 0) && func_123()) || func_25(PLAYER::PLAYER_ID()) == 159) || func_25(PLAYER::PLAYER_ID()) == 225) || func_25(PLAYER::PLAYER_ID()) == 233) || func_122(PLAYER::PLAYER_ID())) || Global_1574416) || func_21()) || (STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED() && func_8()))
			{
				VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("rhino"), false);
			}
			return 1;
			break;
	}
	return 0;
}

void func_42(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (Local_85.f_3[iParam0 /*5*/].f_2 > 2 && NETWORK::NETWORK_IS_HANDLE_VALID(Local_85.f_3[iParam0 /*5*/]))
	{
		if (PED::IS_PED_IN_ANY_POLICE_VEHICLE(unk_0x770D3B2B4702434A(Local_85.f_3[iParam0 /*5*/]), 0))
		{
			if (SYSTEM::VMAG(Local_110.f_172[iParam0]))
			{
				unk_0x93370FA10F15BE44(&(Local_110.f_172[iParam0]));
			}
		}
		else if (!SYSTEM::VMAG(Local_110.f_172[iParam0]) && AUDIO::SET_SCRIPT_UPDATE_DOOR_AUDIO(PLAYER::PLAYER_ID()) >= 2)
		{
			Local_110.f_172[iParam0] = TASK::IS_PED_SPRINTING(NETWORK::NET_TO_ENT(Local_85.f_3[iParam0 /*5*/]));
			HUD::SET_BLIP_COLOUR(Local_110.f_172[iParam0], 1);
		}
	}
	else if (SYSTEM::VMAG(Local_110.f_172[iParam0]))
	{
		unk_0x93370FA10F15BE44(&(Local_110.f_172[iParam0]));
	}
	switch (Local_85.f_3[iParam0 /*5*/].f_2)
	{
		case 0:
			if (!func_48(Local_109[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_4[iParam0], 16))
			{
				Local_109[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_4[iParam0] = 0;
				func_47(&(Local_109[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_4[iParam0]), 16);
			}
			break;
		
		case 1:
			if (!func_48(Local_109[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_4[iParam0], 1))
			{
				if (!PED::IS_PED_IN_ANY_POLICE_VEHICLE(unk_0x9B0761B4C3EB8BC7(), 0))
				{
					if (PED::IS_PED_IN_ANY_PLANE(unk_0x9B0761B4C3EB8BC7()) || PED::IS_PED_IN_ANY_HELI(unk_0x9B0761B4C3EB8BC7()))
					{
						if (AUDIO::SET_SCRIPT_UPDATE_DOOR_AUDIO(PLAYER::PLAYER_ID()) >= 4)
						{
							if (func_20(NETWORK::NETWORK_ARE_HANDLES_THE_SAME(unk_0x9B0761B4C3EB8BC7(), 0), 3, 500, 0))
							{
								func_47(&(Local_109[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_4[iParam0]), 1);
							}
						}
					}
				}
			}
			break;
		
		case 2:
			break;
		
		case 3:
			if (!func_48(Local_109[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_4[iParam0], 2))
			{
				if (func_46(iParam0))
				{
					iVar2 = PLAYER::GET_PLAYER_PED(Local_85.f_3[iParam0 /*5*/].f_4);
					iVar0 = NETWORK::NET_TO_PED(Local_85.f_3[iParam0 /*5*/].f_1);
					iVar1 = unk_0x770D3B2B4702434A(Local_85.f_3[iParam0 /*5*/]);
					if (!PED::IS_PED_IN_ANY_POLICE_VEHICLE(iVar2, 0))
					{
						if (PED::IS_PED_IN_ANY_PLANE(iVar2))
						{
							iVar3 = ENTITY::GET_ENTITY_MODEL(iVar2, 0);
							if ((!PED::IS_PED_IN_ANY_POLICE_VEHICLE(iVar0, 0) && !PED::IS_PED_IN_ANY_POLICE_VEHICLE(iVar1, 0)) && !PED::IS_PED_IN_ANY_POLICE_VEHICLE(iVar3, 0))
							{
								TASK::TASK_PLANE_MISSION(iVar0, iVar1, iVar3, iVar2, NETWORK::NETWORK_ARE_HANDLES_THE_SAME(iVar2, 1), 6, 70f, -1f, 30f, 7.006492E-43f, 7.006492E-44f, 1);
								WEAPON::SET_CURRENT_PED_VEHICLE_WEAPON(iVar0, joaat("vehicle_weapon_space_rocket"));
								PED::SET_PED_CAN_SWITCH_WEAPON(iVar0, false);
							}
						}
					}
				}
				if (func_45(iParam0))
				{
					iVar0 = NETWORK::NET_TO_PED(Local_85.f_3[iParam0 /*5*/].f_1);
					iVar2 = PLAYER::GET_PLAYER_PED(Local_85.f_3[iParam0 /*5*/].f_4);
					if (!PED::IS_PED_IN_ANY_POLICE_VEHICLE(iVar2, 0))
					{
						if (PED::IS_PED_IN_ANY_PLANE(iVar2))
						{
							VEHICLE::SET_VEHICLE_SHOOT_AT_TARGET(iVar0, iVar2, NETWORK::NETWORK_ARE_HANDLES_THE_SAME(iVar2, 1));
						}
					}
				}
				if (func_44(iParam0, 6))
				{
					func_47(&(Local_109[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_4[iParam0]), 2);
				}
			}
			break;
		
		case 4:
			break;
		
		case 5:
			if (!func_48(Local_109[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_4[iParam0], 8))
			{
				if (func_46(iParam0))
				{
					iVar0 = NETWORK::NET_TO_PED(Local_85.f_3[iParam0 /*5*/].f_1);
					iVar1 = unk_0x770D3B2B4702434A(Local_85.f_3[iParam0 /*5*/]);
					if (!PED::IS_PED_IN_ANY_POLICE_VEHICLE(iVar0, 0) && !PED::IS_PED_IN_ANY_POLICE_VEHICLE(iVar1, 0))
					{
						TASK::TASK_PLANE_MISSION(iVar0, iVar1, 0, 0, -2076.374f, 3112.294f, 33.13584f, 9, 70f, -1f, 30f, 7.006492E-43f, 7.006492E-44f, 1);
					}
				}
				if (func_44(iParam0, 9))
				{
					func_47(&(Local_109[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_4[iParam0]), 8);
				}
			}
			break;
		
		case 6:
			if (HUD::DOES_BLIP_EXIST(Local_85.f_3[iParam0 /*5*/]) || HUD::DOES_BLIP_EXIST(Local_85.f_3[iParam0 /*5*/].f_1))
			{
				if (!CAM::IS_SPHERE_VISIBLE(NETWORK::NETWORK_ARE_HANDLES_THE_SAME(NETWORK::NET_TO_ENT(Local_85.f_3[iParam0 /*5*/]), 0), 10f) && !NETWORK::IS_SPHERE_VISIBLE_TO_ANOTHER_MACHINE(NETWORK::NETWORK_ARE_HANDLES_THE_SAME(NETWORK::NET_TO_ENT(Local_85.f_3[iParam0 /*5*/]), 0), 10f))
				{
					if (NETWORK::NETWORK_IS_HANDLE_VALID(Local_85.f_3[iParam0 /*5*/].f_1) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_85.f_3[iParam0 /*5*/].f_1))
					{
						iVar4 = NETWORK::NET_TO_ENT(Local_85.f_3[iParam0 /*5*/].f_1);
						ENTITY::DELETE_ENTITY(&iVar4);
					}
					if (NETWORK::NETWORK_IS_HANDLE_VALID(Local_85.f_3[iParam0 /*5*/]) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_85.f_3[iParam0 /*5*/]))
					{
						iVar5 = NETWORK::NET_TO_ENT(Local_85.f_3[iParam0 /*5*/]);
						ENTITY::DELETE_ENTITY(&iVar5);
					}
				}
			}
			else if (func_48(Local_109[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_4[iParam0], 16))
			{
				func_43(&(Local_109[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_4[iParam0]), 16);
			}
			break;
	}
}

void func_43(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_44(int iParam0, int iParam1)
{
	int iVar0;
	
	if (!NETWORK::NETWORK_IS_HANDLE_VALID(Local_85.f_3[iParam0 /*5*/]))
	{
		return 1;
	}
	iVar0 = unk_0x770D3B2B4702434A(Local_85.f_3[iParam0 /*5*/]);
	if (PED::IS_PED_IN_ANY_POLICE_VEHICLE(iVar0, 0))
	{
		return 1;
	}
	if (TASK::GET_ACTIVE_VEHICLE_MISSION_TYPE(iVar0) != iParam1)
	{
		return 0;
	}
	return 1;
}

int func_45(int iParam0)
{
	int iVar0;
	
	if (!NETWORK::NETWORK_IS_HANDLE_VALID(Local_85.f_3[iParam0 /*5*/].f_1))
	{
		return 0;
	}
	iVar0 = NETWORK::NET_TO_PED(Local_85.f_3[iParam0 /*5*/].f_1);
	if (PED::IS_PED_IN_ANY_POLICE_VEHICLE(iVar0, 0))
	{
		return 0;
	}
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
	{
		return 0;
	}
	return 1;
}

int func_46(int iParam0)
{
	int iVar0;
	
	if (!NETWORK::NETWORK_IS_HANDLE_VALID(Local_85.f_3[iParam0 /*5*/]))
	{
		return 0;
	}
	iVar0 = unk_0x770D3B2B4702434A(Local_85.f_3[iParam0 /*5*/]);
	if (PED::IS_PED_IN_ANY_POLICE_VEHICLE(iVar0, 0))
	{
		return 0;
	}
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
	{
		return 0;
	}
	return 1;
}

void func_47(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_48(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_49()
{
	bool bVar0;
	bool bVar1;
	struct<3> Var2;
	struct<6> Var3;
	
	func_107();
	func_102();
	Var2 = { Local_84 };
	if (((func_20(NETWORK::NETWORK_ARE_HANDLES_THE_SAME(unk_0x9B0761B4C3EB8BC7(), 0), 3, 1000, 0) || func_19(NETWORK::NETWORK_ARE_HANDLES_THE_SAME(unk_0x9B0761B4C3EB8BC7(), 0), 1000)) || func_100(unk_0x9B0761B4C3EB8BC7())) && func_99(unk_0x9B0761B4C3EB8BC7()))
	{
		bVar0 = true;
	}
	else
	{
		Local_110.f_178 = 0;
	}
	if (unk_0x1037B9D45CE6B788(unk_0x9B0761B4C3EB8BC7(), -1588.977f, 2793.941f, 14.98289f, -1575.664f, 2779.558f, 26.11536f, 29.75f, 0, 1, 0) || unk_0x1037B9D45CE6B788(unk_0x9B0761B4C3EB8BC7(), -2306.916f, 3390.545f, 29.17826f, -2322.245f, 3401.719f, 35.63131f, 36f, 0, 1, 0))
	{
		bVar1 = true;
	}
	else
	{
		Local_110.f_179 = 0;
	}
	if (unk_0x1037B9D45CE6B788(unk_0x9B0761B4C3EB8BC7(), -1588.977f, 2793.941f, 14.98289f, -1575.664f, 2779.558f, 26.11536f, 29.75f, 0, 1, 0))
	{
		Var2 = { -1592.1f, 2797.2f, 17.1f };
		Local_110.f_181 = 1;
	}
	else if (unk_0x1037B9D45CE6B788(unk_0x9B0761B4C3EB8BC7(), -2306.916f, 3390.545f, 29.17826f, -2322.245f, 3401.719f, 35.63131f, 36f, 0, 1, 0))
	{
		Var2 = { -2303.9f, 3388f, 31.3f };
		Local_110.f_181 = 2;
	}
	if (func_97(bVar0, bVar1))
	{
		func_95();
		if (!func_94())
		{
			Global_1573348 = 1;
			func_93(&(Local_110.f_7), 2);
			func_92(&(Local_110.f_7), 2);
			func_91(&(Local_110.f_7), 2, 0, "AIRMECH", 0, 1);
			func_90(&(Local_110.f_7), 2, Var2);
			Global_20294.f_162 = { Var2 };
			Var3 = { func_89() };
			if (!CAM::IS_SCREEN_FADED_OUT(&Var3))
			{
				if (func_68(&(Local_110.f_7), "SMGFZAU", &Var3, 7, 0, 0, 0))
				{
					func_50(bVar0, bVar1);
				}
			}
		}
	}
	else if (!func_94())
	{
		if (!unk_0xCE990E643CD9D0E5(Local_110.f_182, 2))
		{
			Global_1573348 = 0;
			func_93(&(Local_110.f_7), 2);
			func_92(&(Local_110.f_7), 2);
			unk_0xBE20AB8238688965(&(Local_110.f_182), 2);
		}
	}
}

void func_50(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (!func_65(16000, -1, -1))
		{
			func_64(16000, 1, -1, 1);
			if (Global_2540384.f_6641)
			{
				if (func_58())
				{
					func_56("AB_ENTRY_HT");
					Local_110.f_180 = 1;
				}
			}
			else if (func_58())
			{
				func_55("AB_ENTRY_HT", -1);
			}
		}
		else if (!func_65(16001, -1, -1))
		{
			func_64(16001, 1, -1, 1);
			if (Global_2540384.f_6641)
			{
				if (func_58())
				{
					func_56("AB_ENTRY_HT");
					Local_110.f_180 = 1;
				}
			}
			else if (func_58())
			{
				func_55("AB_ENTRY_HT", -1);
			}
		}
		Local_110.f_178 = 1;
	}
	else if (bParam1)
	{
		if (!func_65(15999, -1, -1))
		{
			func_64(15999, 1, -1, 1);
			if (Global_2540384.f_6641)
			{
				if (func_58())
				{
					func_56("AB_ENTRY_HT");
					Local_110.f_180 = 1;
				}
			}
			else if (func_58())
			{
				func_55("AB_ENTRY_HT", -1);
			}
		}
		else if (Local_110.f_181 == 1)
		{
			if (!func_65(16002, -1, -1))
			{
				func_64(16002, 1, -1, 1);
				if (Global_2540384.f_6641)
				{
					if (func_58())
					{
						func_56("AB_ENTRY_HT");
						Local_110.f_180 = 1;
					}
				}
				else if (func_58())
				{
					func_55("AB_ENTRY_HT", -1);
				}
			}
		}
		else if (Local_110.f_181 == 2)
		{
			if (func_52(18097, -1, -1) == 0)
			{
				func_51(18097, 1, -1, 1);
				if (Global_2540384.f_6641)
				{
					if (func_58())
					{
						func_56("AB_ENTRY_HT");
						Local_110.f_180 = 1;
					}
				}
				else if (func_58())
				{
					func_55("AB_ENTRY_HT", -1);
				}
			}
		}
		Local_110.f_179 = 1;
		Local_110.f_181 = 0;
	}
	if (unk_0xCE990E643CD9D0E5(Local_110.f_182, 2))
	{
		VEHICLE::IS_VEHICLE_DRIVEABLE(&(Local_110.f_182), 2);
	}
}

var func_51(int iParam0, int iParam1, int iParam2, int iParam3)
{
	bool bVar0;
	int iVar1;
	var uVar2;
	
	if (iParam2 == -1)
	{
		iParam2 = func_35();
	}
	if (iParam1 < 0)
	{
		iParam1 = 255;
	}
	bVar0 = false;
	iVar1 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		bVar0 = unk_0x169039D5869899DA((iParam0 - 384), 0, 1, iParam2);
		iVar1 = ((iParam0 - 384) - NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		bVar0 = unk_0x169039D5869899DA((iParam0 - 457), 1, 1, iParam2);
		iVar1 = ((iParam0 - 457) - NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		bVar0 = unk_0x169039D5869899DA((iParam0 - 1281), 0, 0, 0);
		iVar1 = ((iParam0 - 1281) - NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		bVar0 = unk_0x169039D5869899DA((iParam0 - 1305), 1, 0, 0);
		iVar1 = ((iParam0 - 1305) - NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		bVar0 = MISC::GET_RANDOM_INT_IN_RANGE((iParam0 - 1393), 0, 1, iParam2);
		iVar1 = ((iParam0 - 1393) - NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		bVar0 = MISC::GET_RANDOM_INT_IN_RANGE((iParam0 - 1361), 0, 0, 0);
		iVar1 = ((iParam0 - 1361) - NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		bVar0 = NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION((iParam0 - 3879), 0, 1, iParam2, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 3879) - NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		bVar0 = NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION((iParam0 - 4143), 0, 0, 0, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 4143) - NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		bVar0 = NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION((iParam0 - 4399), 0, 1, iParam2, "_LRPSTAT_INT");
		iVar1 = ((iParam0 - 4399) - NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		bVar0 = NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION((iParam0 - 6413), 0, 1, iParam2, "_APAPSTAT_INT");
		iVar1 = ((iParam0 - 6413) - NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		bVar0 = NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION((iParam0 - 7262), 0, 1, iParam2, "_LR2PSTAT_INT");
		iVar1 = ((iParam0 - 7262) - NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		bVar0 = NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION((iParam0 - 7681), 0, 1, iParam2, "_BIKEPSTAT_INT");
		iVar1 = ((iParam0 - 7681) - NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		bVar0 = NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION((iParam0 - 9553), 0, 1, iParam2, "_IMPEXPPSTAT_INT");
		iVar1 = ((iParam0 - 9553) - NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED((iParam0 - 9553)) * 8) * 8;
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		bVar0 = NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION((iParam0 - 15265), 0, 1, iParam2, "_GUNRPSTAT_INT");
		iVar1 = ((iParam0 - 15265) - NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED((iParam0 - 15265)) * 8) * 8;
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		bVar0 = NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION((iParam0 - 16010), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_INT");
		iVar1 = ((iParam0 - 16010) - NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED((iParam0 - 16010)) * 8) * 8;
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		bVar0 = NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION((iParam0 - 18162), 0, 1, iParam2, "_GANGOPSPSTAT_INT");
		iVar1 = ((iParam0 - 18162) - NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED((iParam0 - 18162)) * 8) * 8;
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		bVar0 = NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION((iParam0 - 19018), 0, 1, iParam2, "_BUSINESSBATPSTAT_INT");
		iVar1 = ((iParam0 - 19018) - NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED((iParam0 - 19018)) * 8) * 8;
	}
	else if (iParam0 >= 22194 && iParam0 < 24962)
	{
		bVar0 = NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION((iParam0 - 22194), 0, 1, iParam2, "_ARENAWARSPSTAT_INT");
		iVar1 = ((iParam0 - 22194) - NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED((iParam0 - 22194)) * 8) * 8;
	}
	else if (iParam0 >= 25538 && iParam0 < 26810)
	{
		bVar0 = NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION((iParam0 - 25538), 0, 1, iParam2, "_CASINOPSTAT_INT");
		iVar1 = ((iParam0 - 25538) - NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED((iParam0 - 25538)) * 8) * 8;
	}
	else if (iParam0 >= 27258 && iParam0 < 28098)
	{
		bVar0 = NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION((iParam0 - 27258), 0, 1, iParam2, "_CASINOHSTPSTAT_INT");
		iVar1 = ((iParam0 - 27258) - NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED((iParam0 - 27258)) * 8) * 8;
	}
	else if (iParam0 >= 28483 && iParam0 < 30227)
	{
		bVar0 = NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION((iParam0 - 28483), 0, 1, iParam2, "_SU20PSTAT_INT");
		iVar1 = ((iParam0 - 28483) - NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED((iParam0 - 28483)) * 8) * 8;
	}
	else if (iParam0 >= 30483 && iParam0 < 30515)
	{
		bVar0 = NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION((iParam0 - 30483), 0, 1, iParam2, "_HISLANDPSTAT_INT");
		iVar1 = ((iParam0 - 30483) - NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED((iParam0 - 30483)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		bVar0 = NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION((iParam0 - 7641), 0, 1, iParam2, "_NGDLCPSTAT_INT");
		iVar1 = ((iParam0 - 7641) - NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED((iParam0 - 7641)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		bVar0 = NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION((iParam0 - 7313), 0, 0, 0, "_NGDLCPSTAT_INT");
		iVar1 = ((iParam0 - 7313) - NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED((iParam0 - 7313)) * 8) * 8;
	}
	uVar2 = unk_0x9972E0F3B8651981(bVar0, iParam1, iVar1, 8, iParam3);
	return uVar2;
}

int func_52(int iParam0, int iParam1, float fParam2)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam1 == -1)
	{
		iParam1 = func_35();
	}
	iVar0 = 0;
	iVar1 = func_54(iParam0, iParam1);
	fVar2 = func_53(iParam0);
	if (0 != iVar1)
	{
		if (!OBJECT::IS_POINT_IN_ANGLED_AREA(iVar1, &iVar0, fVar2, 8, fParam2))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_53(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = ((iParam0 - 384) - NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = ((iParam0 - 457) - NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = ((iParam0 - 1281) - NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = ((iParam0 - 1305) - NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = ((iParam0 - 1361) - NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = ((iParam0 - 1393) - NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = ((iParam0 - 4143) - NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = ((iParam0 - 3879) - NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = ((iParam0 - 4399) - NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = ((iParam0 - 6413) - NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = ((iParam0 - 7262) - NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = ((iParam0 - 7681) - NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = ((iParam0 - 9553) - NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED((iParam0 - 9553)) * 8) * 8;
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = ((iParam0 - 15265) - NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED((iParam0 - 15265)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = ((iParam0 - 7313) - NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED((iParam0 - 7313)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = ((iParam0 - 7641) - NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED((iParam0 - 7641)) * 8) * 8;
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = ((iParam0 - 16010) - NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED((iParam0 - 16010)) * 8) * 8;
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		iVar0 = ((iParam0 - 18162) - NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED((iParam0 - 18162)) * 8) * 8;
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		iVar0 = ((iParam0 - 19018) - NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED((iParam0 - 19018)) * 8) * 8;
	}
	else if (iParam0 >= 22194 && iParam0 < 24962)
	{
		iVar0 = ((iParam0 - 22194) - NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED((iParam0 - 22194)) * 8) * 8;
	}
	else if (iParam0 >= 25538 && iParam0 < 26810)
	{
		iVar0 = ((iParam0 - 25538) - NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED((iParam0 - 25538)) * 8) * 8;
	}
	else if (iParam0 >= 27258 && iParam0 < 28098)
	{
		iVar0 = ((iParam0 - 27258) - NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED((iParam0 - 27258)) * 8) * 8;
	}
	else if (iParam0 >= 28483 && iParam0 < 30227)
	{
		iVar0 = ((iParam0 - 28483) - NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED((iParam0 - 28483)) * 8) * 8;
	}
	else if (iParam0 >= 30483 && iParam0 < 30515)
	{
		iVar0 = ((iParam0 - 30483) - NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED((iParam0 - 30483)) * 8) * 8;
	}
	return iVar0;
}

bool func_54(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_35();
	}
	bVar0 = false;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		bVar0 = unk_0x169039D5869899DA((iParam0 - 384), 0, 1, iParam1);
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		bVar0 = unk_0x169039D5869899DA((iParam0 - 457), 1, 1, iParam1);
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		bVar0 = unk_0x169039D5869899DA((iParam0 - 1281), 0, 0, 0);
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		bVar0 = unk_0x169039D5869899DA((iParam0 - 1305), 1, 0, 0);
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		bVar0 = MISC::GET_RANDOM_INT_IN_RANGE((iParam0 - 1361), 0, 0, 0);
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		bVar0 = MISC::GET_RANDOM_INT_IN_RANGE((iParam0 - 1393), 0, 1, iParam1);
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		bVar0 = NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION((iParam0 - 4143), 0, 0, 0, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		bVar0 = NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION((iParam0 - 3879), 0, 1, iParam1, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		bVar0 = NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION((iParam0 - 4399), 0, 1, iParam1, "_LRPSTAT_INT");
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		bVar0 = NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION((iParam0 - 6413), 0, 1, iParam1, "_APAPSTAT_INT");
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		bVar0 = NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION((iParam0 - 7262), 0, 1, iParam1, "_LR2PSTAT_INT");
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		bVar0 = NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION((iParam0 - 7681), 0, 1, iParam1, "_BIKEPSTAT_INT");
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		bVar0 = NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION((iParam0 - 9553), 0, 1, iParam1, "_IMPEXPPSTAT_INT");
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		bVar0 = NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION((iParam0 - 15265), 0, 1, iParam1, "_GUNRPSTAT_INT");
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		bVar0 = NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION((iParam0 - 7313), 0, 0, 0, "_NGDLCPSTAT_INT");
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		bVar0 = NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION((iParam0 - 7641), 0, 1, iParam1, "_NGDLCPSTAT_INT");
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		bVar0 = NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION((iParam0 - 16010), 0, 1, iParam1, "_DLCSMUGCHARPSTAT_INT");
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		bVar0 = NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION((iParam0 - 18162), 0, 1, iParam1, "_GANGOPSPSTAT_INT");
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		bVar0 = NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION((iParam0 - 19018), 0, 1, iParam1, "_BUSINESSBATPSTAT_INT");
	}
	else if (iParam0 >= 22194 && iParam0 < 24962)
	{
		bVar0 = NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION((iParam0 - 22194), 0, 1, iParam1, "_ARENAWARSPSTAT_INT");
	}
	else if (iParam0 >= 25538 && iParam0 < 26810)
	{
		bVar0 = NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION((iParam0 - 25538), 0, 1, iParam1, "_CASINOPSTAT_INT");
	}
	else if (iParam0 >= 27258 && iParam0 < 28098)
	{
		bVar0 = NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION((iParam0 - 27258), 0, 1, iParam1, "_CASINOHSTPSTAT_INT");
	}
	else if (iParam0 >= 28483 && iParam0 < 30227)
	{
		bVar0 = NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION((iParam0 - 28483), 0, 1, iParam1, "_SU20PSTAT_INT");
	}
	else if (iParam0 >= 30483 && iParam0 < 30515)
	{
		bVar0 = NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION((iParam0 - 30483), 0, 1, iParam1, "_HISLANDPSTAT_INT");
	}
	return bVar0;
}

void func_55(char* sParam0, int iParam1)
{
	unk_0x17751E107423AFE9(sParam0);
	FILES::GET_DLC_VEHICLE_FLAGS(0, 0, 1, iParam1);
}

void func_56(char* sParam0)
{
	if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
	{
		unk_0xD289B55B6AADBA10(1);
	}
	if (!func_57(sParam0))
	{
		func_55(sParam0, -1);
	}
}

bool func_57(char* sParam0)
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

int func_58()
{
	if (func_61(PLAYER::PLAYER_ID()) && !func_59(PLAYER::PLAYER_ID(), 0))
	{
		return 1;
	}
	return 0;
}

bool func_59(bool bParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_60(bParam0))
		{
			return 0;
		}
	}
	return Global_1630317[bParam0 /*595*/].f_11 != func_39();
}

int func_60(int iParam0)
{
	if (iParam0 != func_39())
	{
		if (Global_1630317[iParam0 /*595*/].f_11 != func_39())
		{
			return Global_1630317[iParam0 /*595*/].f_11 == iParam0;
		}
	}
	return 0;
}

int func_61(bool bParam0)
{
	int iVar0;
	
	if (func_63(bParam0))
	{
		iVar0 = func_62(bParam0);
		if ((iVar0 == 3 || iVar0 == 4) || iVar0 == 5)
		{
			return 1;
		}
	}
	return 0;
}

int func_62(int iParam0)
{
	if (iParam0 != func_39())
	{
		return Global_1590682[iParam0 /*883*/].f_274.f_264;
	}
	return 0;
}

int func_63(int iParam0)
{
	if (iParam0 != func_39())
	{
		return Global_1590682[iParam0 /*883*/].f_274.f_264 != 0;
	}
	return 0;
}

var func_64(int iParam0, char* sParam1, int iParam2, int iParam3)
{
	void fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	bool bVar14;
	bool bVar15;
	bool bVar16;
	bool bVar17;
	bool bVar18;
	bool bVar19;
	bool bVar20;
	bool bVar21;
	bool bVar22;
	bool bVar23;
	bool bVar24;
	bool bVar25;
	
	if (iParam2 == -1)
	{
		iParam2 = func_35();
	}
	fVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar2 = DECORATOR::DECOR_GET_INT((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - DECORATOR::DECOR_EXIST_ON((iParam0 - 0)) * 64);
		fVar0 = NETWORK::OPEN_COMMERCE_STORE(iVar2, sParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar3 = DECORATOR::DECOR_GET_INT((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - DECORATOR::DECOR_EXIST_ON((iParam0 - 192)) * 64);
		fVar0 = NETWORK::OPEN_COMMERCE_STORE(iVar3, sParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar4 = DECORATOR::DECOR_GET_INT((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - DECORATOR::DECOR_EXIST_ON((iParam0 - 513)) * 64);
		fVar0 = NETWORK::OPEN_COMMERCE_STORE(iVar4, sParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar5 = DECORATOR::DECOR_GET_INT((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - DECORATOR::DECOR_EXIST_ON((iParam0 - 705)) * 64);
		fVar0 = NETWORK::OPEN_COMMERCE_STORE(iVar5, sParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar6 = NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - DECORATOR::DECOR_EXIST_ON((iParam0 - 3111)) * 64);
		fVar0 = NETWORK::OPEN_COMMERCE_STORE(iVar6, sParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar7 = NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - DECORATOR::DECOR_EXIST_ON((iParam0 - 2919)) * 64);
		fVar0 = NETWORK::OPEN_COMMERCE_STORE(iVar7, sParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		bVar8 = PED::IS_PED_DEAD_OR_DYING((iParam0 - 4207), false, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - DECORATOR::DECOR_EXIST_ON((iParam0 - 4207)) * 64);
		fVar0 = NETWORK::OPEN_COMMERCE_STORE(bVar8, sParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		bVar9 = PED::IS_PED_DEAD_OR_DYING((iParam0 - 4335), false, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - DECORATOR::DECOR_EXIST_ON((iParam0 - 4335)) * 64);
		fVar0 = NETWORK::OPEN_COMMERCE_STORE(bVar9, sParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		bVar10 = PED::IS_PED_DEAD_OR_DYING((iParam0 - 6029), false, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - DECORATOR::DECOR_EXIST_ON((iParam0 - 6029)) * 64);
		fVar0 = NETWORK::OPEN_COMMERCE_STORE(bVar10, sParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		bVar11 = PED::IS_PED_DEAD_OR_DYING((iParam0 - 7385), false, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - DECORATOR::DECOR_EXIST_ON((iParam0 - 7385)) * 64);
		fVar0 = NETWORK::OPEN_COMMERCE_STORE(bVar11, sParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		bVar12 = PED::IS_PED_DEAD_OR_DYING((iParam0 - 7321), false, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - DECORATOR::DECOR_EXIST_ON((iParam0 - 7321)) * 64);
		fVar0 = NETWORK::OPEN_COMMERCE_STORE(bVar12, sParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		bVar13 = PED::IS_PED_DEAD_OR_DYING((iParam0 - 9361), false, 1, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - DECORATOR::DECOR_EXIST_ON((iParam0 - 9361)) * 64);
		fVar0 = NETWORK::OPEN_COMMERCE_STORE(bVar13, sParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		bVar14 = PED::IS_PED_DEAD_OR_DYING((iParam0 - 15369), false, 1, iParam2, "_DLCGUNPSTAT_BOOL");
		iVar1 = ((iParam0 - 15369) - DECORATOR::DECOR_EXIST_ON((iParam0 - 15369)) * 64);
		fVar0 = NETWORK::OPEN_COMMERCE_STORE(bVar14, sParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		bVar15 = PED::IS_PED_DEAD_OR_DYING((iParam0 - 15562), false, 1, iParam2, "_GUNTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 15562) - DECORATOR::DECOR_EXIST_ON((iParam0 - 15562)) * 64);
		fVar0 = NETWORK::OPEN_COMMERCE_STORE(bVar15, sParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		bVar16 = PED::IS_PED_DEAD_OR_DYING((iParam0 - 15946), false, 1, iParam2, "_DLCSMUGCHARPSTAT_BOOL");
		iVar1 = ((iParam0 - 15946) - DECORATOR::DECOR_EXIST_ON((iParam0 - 15946)) * 64);
		fVar0 = NETWORK::OPEN_COMMERCE_STORE(bVar16, sParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		bVar17 = PED::IS_PED_DEAD_OR_DYING((iParam0 - 18098), false, 1, iParam2, "_GANGOPSPSTAT_BOOL");
		iVar1 = ((iParam0 - 18098) - DECORATOR::DECOR_EXIST_ON((iParam0 - 18098)) * 64);
		fVar0 = NETWORK::OPEN_COMMERCE_STORE(bVar17, sParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		bVar18 = PED::IS_PED_DEAD_OR_DYING((iParam0 - 22066), false, 1, iParam2, "_BUSINESSBATPSTAT_BOOL");
		iVar1 = ((iParam0 - 22066) - DECORATOR::DECOR_EXIST_ON((iParam0 - 22066)) * 64);
		fVar0 = NETWORK::OPEN_COMMERCE_STORE(bVar18, sParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		bVar19 = PED::IS_PED_DEAD_OR_DYING((iParam0 - 24962), false, 1, iParam2, "_ARENAWARSPSTAT_BOOL");
		iVar1 = ((iParam0 - 24962) - DECORATOR::DECOR_EXIST_ON((iParam0 - 24962)) * 64);
		fVar0 = NETWORK::OPEN_COMMERCE_STORE(bVar19, sParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		bVar20 = PED::IS_PED_DEAD_OR_DYING((iParam0 - 26810), false, 1, iParam2, "_CASINOPSTAT_BOOL");
		iVar1 = ((iParam0 - 26810) - DECORATOR::DECOR_EXIST_ON((iParam0 - 26810)) * 64);
		fVar0 = NETWORK::OPEN_COMMERCE_STORE(bVar20, sParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 28098 && iParam0 < 28354)
	{
		bVar21 = PED::IS_PED_DEAD_OR_DYING((iParam0 - 28098), false, 1, iParam2, "_CASINOHSTPSTAT_BOOL");
		iVar1 = ((iParam0 - 28098) - DECORATOR::DECOR_EXIST_ON((iParam0 - 28098)) * 64);
		fVar0 = NETWORK::OPEN_COMMERCE_STORE(bVar21, sParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 28355 && iParam0 < 28483)
	{
		bVar22 = PED::IS_PED_DEAD_OR_DYING((iParam0 - 28355), false, 1, iParam2, "_HEIST3TATTOOSTAT_BOOL");
		iVar1 = ((iParam0 - 28355) - DECORATOR::DECOR_EXIST_ON((iParam0 - 28355)) * 64);
		fVar0 = NETWORK::OPEN_COMMERCE_STORE(bVar22, sParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 30227 && iParam0 < 30355)
	{
		bVar23 = PED::IS_PED_DEAD_OR_DYING((iParam0 - 30227), false, 1, iParam2, "_SU20PSTAT_BOOL");
		iVar1 = ((iParam0 - 30227) - DECORATOR::DECOR_EXIST_ON((iParam0 - 30227)) * 64);
		fVar0 = NETWORK::OPEN_COMMERCE_STORE(bVar23, sParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 30355 && iParam0 < 30483)
	{
		bVar24 = PED::IS_PED_DEAD_OR_DYING((iParam0 - 30355), false, 1, iParam2, "_SU20TATTOOSTAT_BOOL");
		iVar1 = ((iParam0 - 30355) - DECORATOR::DECOR_EXIST_ON((iParam0 - 30355)) * 64);
		fVar0 = NETWORK::OPEN_COMMERCE_STORE(bVar24, sParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 30515 && iParam0 < 30707)
	{
		bVar25 = PED::IS_PED_DEAD_OR_DYING((iParam0 - 30515), false, 1, iParam2, "_HISLANDPSTAT_BOOL");
		iVar1 = ((iParam0 - 30515) - DECORATOR::DECOR_EXIST_ON((iParam0 - 30515)) * 64);
		fVar0 = NETWORK::OPEN_COMMERCE_STORE(bVar25, sParam1, iVar1, iParam3);
	}
	return fVar0;
}

bool func_65(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	bVar0 = false;
	if (iParam1 == -1)
	{
		iParam1 = func_35();
	}
	iVar1 = func_67(iParam0, iParam1);
	iVar2 = func_66(iParam0);
	if (0 != iVar1)
	{
		bVar0 = DECORATOR::DECOR_IS_REGISTERED_AS_TYPE(iVar1, iVar2, iParam2);
	}
	return bVar0;
}

int func_66(int iParam0)
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

bool func_67(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_35();
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

bool func_68(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_88(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_21012 = 0;
	Global_21014 = 0;
	Global_21019 = 0;
	Global_21996 = 0;
	Global_21998 = 0;
	Global_22002 = 0;
	Global_2621441 = 0;
	return func_69(sParam2, iParam3, 0);
}

int func_69(char* sParam0, int iParam1, bool bParam2)
{
	Global_21006 = 0;
	if (Global_21005 == 0 || Global_21007 == 2)
	{
		if (Global_21005 != 0)
		{
			if (iParam1 > Global_21007)
			{
				if (Global_21012 == 0)
				{
					unk_0xBE4122AC23440E7D(0);
					Global_19681.f_1 = 3;
					Global_21005 = 0;
					Global_21006 = 1;
					Global_21058 = 0;
					Global_21001 = 0;
					Global_21002 = 0;
					Global_21016 = 0;
					Global_21015 = 0;
					Global_19680 = 0;
				}
				else
				{
					func_87();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (ENTITY::IS_ENTITY_DEAD())
		{
			return 0;
		}
		if (func_86(8, -1))
		{
			return 0;
		}
		Global_21081 = { Global_21075 };
		func_85();
		Global_20294 = { Global_20459 };
		Global_21011 = Global_21012;
		Global_21018 = Global_21019;
		Global_2621442 = Global_2621441;
		Global_21020 = { Global_21036 };
		Global_21013 = Global_21014;
		Global_21995 = Global_21996;
		Global_22003 = { Global_22009 };
		Global_21997 = Global_21998;
		Global_21999 = Global_22000;
		Global_22001 = Global_22002;
		Global_20624.f_370 = Global_21994;
		Global_20624.f_368 = Global_21992;
		Global_20624.f_369 = Global_21993;
		Global_21001 = Global_21002;
		if (Global_21011)
		{
			VEHICLE::IS_VEHICLE_DRIVEABLE(&Global_7551, 20);
			VEHICLE::IS_VEHICLE_DRIVEABLE(&Global_7552, 17);
			VEHICLE::IS_VEHICLE_DRIVEABLE(&Global_7553, false);
			if (bParam2)
			{
				func_77();
				if (Global_8356[Global_19681 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_19681.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_19647 == 1)
			{
				return 0;
			}
			if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_ID()))
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(unk_0x9B0761B4C3EB8BC7()))
				{
					return 0;
				}
				if (func_76())
				{
					return 0;
				}
				if (SYSTEM::FLOOR(unk_0x9B0761B4C3EB8BC7()))
				{
					return 0;
				}
				if (MISC::IS_PC_VERSION(unk_0x9B0761B4C3EB8BC7()))
				{
					return 0;
				}
				if (unk_0xAACBFCE60AF94F2D(unk_0x9B0761B4C3EB8BC7()))
				{
					return 0;
				}
				if (unk_0x02D1369035663875(unk_0x9B0761B4C3EB8BC7(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_76833)
				{
					if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(unk_0x9B0761B4C3EB8BC7()))
					{
						return 0;
					}
					if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
					{
						return 0;
					}
					if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(unk_0x9B0761B4C3EB8BC7()))
					{
						return 0;
					}
					if (WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_ID(), 0))
					{
						return 0;
					}
				}
			}
			if (func_75())
			{
				return 0;
			}
			else
			{
				switch (Global_19681.f_1)
				{
					case 7:
						return 0;
						break;
					
					case 8:
						return 0;
						break;
					
					case 9:
						break;
					
					case 10:
						break;
					
					default:
						break;
				}
				if (unk_0xCE990E643CD9D0E5(Global_7551, 9))
				{
					return 0;
				}
			}
			func_74();
			Global_21015 = bParam2;
		}
		Global_21007 = iParam1;
		StringCopy(&Global_20624, sParam0, 24);
		Global_19871 = 0;
		func_73();
		func_70();
		return 1;
	}
	if (Global_21005 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_21007 || iParam1 == Global_21007)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_87();
	}
	return 0;
}

void func_70()
{
	if (!func_71())
	{
		return;
	}
	if (Global_21011)
	{
		MemCopy(&(Global_1703978.f_1), {Global_20624}, 4);
		Global_1703978 = Global_6866;
		Global_1703978.f_6 = Global_21015;
	}
}

int func_71()
{
	if (!Global_262145.f_28160)
	{
		return 0;
	}
	if (!Global_76833)
	{
		return 0;
	}
	if (PLAYER::PLAYER_ID() == func_39())
	{
		return 0;
	}
	if (func_72(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (unk_0xCE990E643CD9D0E5(Global_1630317[PLAYER::PLAYER_ID() /*595*/].f_1, 7))
	{
		return 0;
	}
	if (STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED())
	{
		return 0;
	}
	return 1;
}

bool func_72(bool bParam0)
{
	return func_10(bParam0, 20);
}

void func_73()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_19873[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0xBE4122AC23440E7D(0);
	Global_21005 = 1;
}

void func_74()
{
	Global_21058 = Global_21057;
	Global_21052 = Global_21053;
	Global_21099 = { Global_21087 };
	Global_21105 = { Global_21093 };
	Global_21060 = Global_21059;
	Global_21129 = { Global_21111 };
	Global_21135 = { Global_21117 };
	Global_21141 = { Global_21123 };
	Global_21147 = { Global_21153 };
	Global_6866 = Global_6867;
	Global_6868 = Global_6869;
	Global_21016 = Global_21017;
	Global_21018 = Global_21019;
	Global_21020 = { Global_21036 };
	Global_21009 = Global_21010;
	Global_22021 = 0;
	Global_21054 = 0;
	Global_21055 = 0;
	VEHICLE::IS_VEHICLE_DRIVEABLE(&Global_7552, 16);
}

int func_75()
{
	if (Global_19681.f_1 == 1 || Global_19681.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_76()
{
	int iVar0;
	int iVar1;
	
	if (Global_76833)
	{
		iVar0 = 0;
		MISC::GET_COORDS_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(unk_0x9B0761B4C3EB8BC7(), &iVar1, 1);
		if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_ID()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (HUD::CLEAR_HELP() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_ID()))
	{
		if (TASK::CLEAR_PED_TASKS(unk_0x9B0761B4C3EB8BC7(), 78, 1))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_77()
{
	if (func_84(14))
	{
		if (!PED::IS_PED_IN_ANY_POLICE_VEHICLE(unk_0x9B0761B4C3EB8BC7(), 0))
		{
			if (MISC::GET_MODEL_DIMENSIONS(unk_0x9B0761B4C3EB8BC7()) == Global_111858.f_28046[0 /*29*/])
			{
				Global_19681 = 0;
			}
			else if (MISC::GET_MODEL_DIMENSIONS(unk_0x9B0761B4C3EB8BC7()) == Global_111858.f_28046[1 /*29*/])
			{
				Global_19681 = 1;
			}
			else if (MISC::GET_MODEL_DIMENSIONS(unk_0x9B0761B4C3EB8BC7()) == Global_111858.f_28046[2 /*29*/])
			{
				Global_19681 = 2;
			}
			else
			{
				Global_19681 = 0;
			}
		}
	}
	else
	{
		Global_19681 = func_78();
		if (Global_19681 == 145)
		{
			Global_19681 = 3;
		}
		if (Global_76833)
		{
			Global_19681 = 3;
		}
		if (Global_19681 > 3)
		{
			Global_19681 = 3;
		}
	}
}

var func_78()
{
	func_79();
	return Global_111858.f_2359.f_539.f_4321;
}

void func_79()
{
	int iVar0;
	
	if (MISC::IS_BIT_SET(unk_0x9B0761B4C3EB8BC7()))
	{
		if (func_82(Global_111858.f_2359.f_539.f_4321) != MISC::GET_MODEL_DIMENSIONS(unk_0x9B0761B4C3EB8BC7()))
		{
			iVar0 = func_81(unk_0x9B0761B4C3EB8BC7());
			if (func_80(iVar0) && (!func_84(14) || Global_110809))
			{
				if (Global_111858.f_2359.f_539.f_4321 != iVar0 && func_80(Global_111858.f_2359.f_539.f_4321))
				{
					Global_111858.f_2359.f_539.f_4322 = Global_111858.f_2359.f_539.f_4321;
				}
				Global_111858.f_2359.f_539.f_4323 = iVar0;
				Global_111858.f_2359.f_539.f_4321 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_111858.f_2359.f_539.f_4321 != 145)
			{
				Global_111858.f_2359.f_539.f_4323 = Global_111858.f_2359.f_539.f_4321;
			}
			return;
		}
	}
	Global_111858.f_2359.f_539.f_4321 = 145;
}

bool func_80(int iParam0)
{
	return iParam0 < 3;
}

int func_81(int iParam0)
{
	int iVar0;
	void fVar1;
	
	if (MISC::IS_BIT_SET(iParam0))
	{
		fVar1 = MISC::GET_MODEL_DIMENSIONS(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_82(iVar0) == fVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_82(int iParam0)
{
	if (func_80(iParam0))
	{
		return func_83(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_83(int iParam0)
{
	return Global_1848[iParam0 /*29*/];
}

bool func_84(int iParam0)
{
	return Global_41631 == iParam0;
}

void func_85()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_20294[iVar0 /*10*/] = 0;
		StringCopy(&(Global_20294[iVar0 /*10*/].f_1), "", 24);
		Global_20294[iVar0 /*10*/].f_7 = 0;
		Global_20294[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_20294.f_161 = -99;
	Global_20294.f_162 = { 0f, 0f, 0f };
}

bool func_86(int iParam0, int iParam1)
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

void func_87()
{
	SYSTEM::ROUND();
	Global_22016 = 0;
	if ((unk_0x6B12213471F330A3() || Global_19681.f_1 == 9) || Global_19680 == 1)
	{
		unk_0xBE4122AC23440E7D(0);
		Global_21005 = 6;
		Global_19681.f_1 = 3;
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD())
	{
		unk_0xBE4122AC23440E7D(1);
		Global_21005 = 6;
		return;
	}
}

void func_88(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
{
	Global_20459 = { *uParam0 };
	Global_6867 = iParam1;
	StringCopy(&Global_21075, sParam2, 24);
	Global_21994 = uParam5;
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

struct<6> func_89()
{
	struct<6> Var0;
	
	StringCopy(&Var0, "", 24);
	if (unk_0x1037B9D45CE6B788(unk_0x9B0761B4C3EB8BC7(), -1588.977f, 2793.941f, 14.98289f, -1575.664f, 2779.558f, 26.11536f, 29.75f, 0, 1, 0) || unk_0x1037B9D45CE6B788(unk_0x9B0761B4C3EB8BC7(), -2306.916f, 3390.545f, 29.17826f, -2322.245f, 3401.719f, 35.63131f, 36f, 0, 1, 0))
	{
		if (!func_65(15999, -1, -1))
		{
			StringCopy(&Var0, "SMGFZ_WLK1ST", 24);
		}
		else if (!func_65(16002, -1, -1) || func_52(18097, -1, -1) == 0)
		{
			StringCopy(&Var0, "SMGFZ_WLKENT", 24);
		}
	}
	else if (((func_20(NETWORK::NETWORK_ARE_HANDLES_THE_SAME(unk_0x9B0761B4C3EB8BC7(), 0), 3, 1000, 0) || func_19(NETWORK::NETWORK_ARE_HANDLES_THE_SAME(unk_0x9B0761B4C3EB8BC7(), 0), 1000)) || func_100(unk_0x9B0761B4C3EB8BC7())) && func_99(unk_0x9B0761B4C3EB8BC7()))
	{
		if (!func_65(16000, -1, -1))
		{
			StringCopy(&Var0, "SMGFZ_FLY1ST", 24);
		}
		else if (!func_65(16001, -1, -1))
		{
			StringCopy(&Var0, "SMGFZ_FLYENT", 24);
		}
	}
	return Var0;
}

void func_90(var uParam0, int iParam1, struct<3> Param2)
{
	uParam0->f_161 = iParam1;
	uParam0->f_162 = { Param2 };
}

void func_91(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

void func_92(var uParam0, int iParam1)
{
	uParam0->f_161 = -99;
	uParam0->f_162 = { 0f, 0f, 0f };
	if (iParam1 < 0)
	{
	}
}

void func_93(var uParam0, int iParam1)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

int func_94()
{
	if (Global_21005 != 0 || ENTITY::IS_ENTITY_DEAD())
	{
		return 1;
	}
	return 0;
}

void func_95()
{
	Global_19871 = 0;
	func_96();
}

void func_96()
{
	if (ENTITY::IS_ENTITY_DEAD())
	{
		SYSTEM::ROUND();
		Global_22016 = 0;
		unk_0xBE4122AC23440E7D(1);
		Global_21005 = 6;
		return;
	}
}

int func_97(bool bParam0, bool bParam1)
{
	if (func_22(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (bParam0)
	{
		if (!Local_110.f_178)
		{
			if (unk_0xCE990E643CD9D0E5(Local_110.f_182, 1))
			{
				if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
				{
					if (!func_65(16000, -1, -1) || !func_65(16001, -1, -1))
					{
						return 1;
					}
				}
			}
		}
	}
	else if (bParam1)
	{
		if (!Local_110.f_179)
		{
			if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) && AUDIO::SET_SCRIPT_UPDATE_DOOR_AUDIO(PLAYER::PLAYER_ID()) == 0)
			{
				if (!SYSTEM::VDIST(unk_0x9B0761B4C3EB8BC7(), 0) || func_98())
				{
					if (unk_0x1037B9D45CE6B788(unk_0x9B0761B4C3EB8BC7(), -1588.977f, 2793.941f, 14.98289f, -1575.664f, 2779.558f, 26.11536f, 29.75f, 0, 1, 0))
					{
						if (!func_65(15999, -1, -1) || !func_65(16002, -1, -1))
						{
							if (ENTITY::IS_ENTITY_IN_WATER(unk_0x9B0761B4C3EB8BC7()) >= -25f && ENTITY::IS_ENTITY_IN_WATER(unk_0x9B0761B4C3EB8BC7()) <= 125f)
							{
								return 1;
							}
						}
					}
					else if (unk_0x1037B9D45CE6B788(unk_0x9B0761B4C3EB8BC7(), -2306.916f, 3390.545f, 29.17826f, -2322.245f, 3401.719f, 35.63131f, 36f, 0, 1, 0))
					{
						if (!func_65(15999, -1, -1) || func_52(18097, -1, -1) == 0)
						{
							if (ENTITY::IS_ENTITY_IN_WATER(unk_0x9B0761B4C3EB8BC7()) >= 160f && ENTITY::IS_ENTITY_IN_WATER(unk_0x9B0761B4C3EB8BC7()) <= 290f)
							{
								return 1;
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_98()
{
	int iVar0;
	
	if (SYSTEM::VDIST(unk_0x9B0761B4C3EB8BC7(), 0))
	{
		iVar0 = ENTITY::GET_ENTITY_MODEL(unk_0x9B0761B4C3EB8BC7(), 0);
		if (VEHICLE::IS_VEHICLE_STOLEN(iVar0))
		{
			if (func_6(iVar0))
			{
				if (!func_5(iVar0, 1) && !func_4(iVar0))
				{
					return 0;
				}
			}
		}
	}
	return 1;
}

int func_99(int iParam0)
{
	if (PED::IS_PED_IN_ANY_PLANE(iParam0) || PED::IS_PED_IN_ANY_HELI(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_100(int iParam0)
{
	if (MISC::IS_BIT_SET(iParam0) && func_101(iParam0))
	{
		if ((unk_0x1037B9D45CE6B788(iParam0, -2013.3f, 2878.6f, 1000f, -2864.6f, 3357.6f, 31f, 400f, 0, 1, 0) || unk_0x1037B9D45CE6B788(iParam0, -1700f, 3150f, 1000f, -2039f, 3342f, 30f, 175f, 0, 1, 0)) || unk_0x1037B9D45CE6B788(iParam0, -1950f, 2786f, 1000f, -1856f, 3141f, 31f, 270f, 0, 1, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_101(int iParam0)
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

void func_102()
{
	if (Local_110.f_180)
	{
		if (!func_106(&(Local_110.f_183)))
		{
			func_105(&(Local_110.f_183), 0, 0);
		}
		else if (!func_104(&(Local_110.f_183), 17000, 0))
		{
			if (!func_57("AB_ENTRY_HT"))
			{
				func_55("AB_ENTRY_HT", -1);
			}
		}
		else if (func_104(&(Local_110.f_183), 17000, 0))
		{
			if (func_57("AB_ENTRY_HT"))
			{
				unk_0xD289B55B6AADBA10(1);
			}
			func_103(&(Local_110.f_183));
			Local_110.f_180 = 0;
		}
	}
}

void func_103(var uParam0)
{
	uParam0->f_1 = 0;
}

int func_104(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_105(uParam0, bParam2, 0);
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

void func_105(var uParam0, bool bParam1, bool bParam2)
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

bool func_106(var uParam0)
{
	return uParam0->f_1;
}

void func_107()
{
	if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
	{
		if ((func_20(NETWORK::NETWORK_ARE_HANDLES_THE_SAME(unk_0x9B0761B4C3EB8BC7(), 0), 3, 1000, 0) || func_19(NETWORK::NETWORK_ARE_HANDLES_THE_SAME(unk_0x9B0761B4C3EB8BC7(), 0), 1000)) || func_100(unk_0x9B0761B4C3EB8BC7()))
		{
			if (!unk_0xCE990E643CD9D0E5(Local_110.f_182, 0))
			{
				if ((((func_99(unk_0x9B0761B4C3EB8BC7()) && ENTITY::IS_ENTITY_IN_AIR(ENTITY::GET_ENTITY_MODEL(unk_0x9B0761B4C3EB8BC7(), 0))) && AUDIO::SET_SCRIPT_UPDATE_DOOR_AUDIO(PLAYER::PLAYER_ID()) == 0) && func_98()) && !Global_1689648)
				{
					if (!unk_0xCE990E643CD9D0E5(Local_110.f_182, 1) && !unk_0xCE990E643CD9D0E5(Local_110.f_182, 3))
					{
						unk_0xBE20AB8238688965(&(Local_110.f_182), 1);
					}
				}
				unk_0xBE20AB8238688965(&(Local_110.f_182), 0);
			}
		}
		else
		{
			if (unk_0xCE990E643CD9D0E5(Local_110.f_182, 0))
			{
				VEHICLE::IS_VEHICLE_DRIVEABLE(&(Local_110.f_182), false);
			}
			if (unk_0xCE990E643CD9D0E5(Local_110.f_182, 1))
			{
				VEHICLE::IS_VEHICLE_DRIVEABLE(&(Local_110.f_182), true);
			}
			if (unk_0xCE990E643CD9D0E5(Local_110.f_182, 3))
			{
				VEHICLE::IS_VEHICLE_DRIVEABLE(&(Local_110.f_182), 3);
			}
			if (Global_1689648)
			{
				Global_1689648 = 0;
			}
		}
	}
}

int func_108(bool bParam0)
{
	if (func_25(bParam0) == 233)
	{
		return func_109(bParam0);
	}
	return -1;
}

int func_109(bool bParam0)
{
	if (func_26(bParam0, 0))
	{
		return Global_1630317[bParam0 /*595*/].f_11.f_181;
	}
	return -1;
}

int func_110()
{
	int iVar0;
	bool bVar1;
	int iVar2;
	
	if (func_61(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		bVar1 = NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar0);
		if (func_38(bVar1, 0, 1))
		{
			if (bVar1 != PLAYER::PLAYER_ID())
			{
				if (func_111(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), PLAYER::GET_PLAYER_PED(bVar1)))
				{
					iVar2 = ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYER_PED(bVar1), 0);
					if (MISC::IS_MINIGAME_IN_PROGRESS(iVar2, -1, 0) == PLAYER::GET_PLAYER_PED(bVar1))
					{
						if (func_61(bVar1))
						{
							return 1;
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_111(int iParam0, int iParam1)
{
	if (iParam0 == iParam1)
	{
		return 1;
	}
	if (!SYSTEM::VDIST(iParam0, 0) || !SYSTEM::VDIST(iParam1, 0))
	{
		return 0;
	}
	return ENTITY::GET_ENTITY_MODEL(iParam0, 0) == ENTITY::GET_ENTITY_MODEL(iParam1, 0);
}

void func_112(int iParam0)
{
	int iVar0;
	
	if (!NETWORK::NETWORK_IS_HANDLE_VALID(Local_85[iParam0]))
	{
		return;
	}
	iVar0 = NETWORK::NET_TO_PED(Local_85[iParam0]);
	if (PED::IS_PED_IN_ANY_POLICE_VEHICLE(iVar0, 0))
	{
		return;
	}
	switch (Local_85.f_21[iParam0])
	{
		case 0:
			if (!func_48(Local_109[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1[iParam0], 64))
			{
				Local_109[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1[iParam0] = 0;
				func_47(&(Local_109[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1[iParam0]), 64);
			}
			break;
		
		case 1:
			if (!func_48(Local_109[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1[iParam0], 1))
			{
				if (!PED::IS_PED_IN_ANY_POLICE_VEHICLE(unk_0x9B0761B4C3EB8BC7(), 0))
				{
					if (SYSTEM::VDIST2(NETWORK::NETWORK_ARE_HANDLES_THE_SAME(unk_0x9B0761B4C3EB8BC7(), 1), NETWORK::NETWORK_ARE_HANDLES_THE_SAME(iVar0, 1)) <= 900f)
					{
						func_47(&(Local_109[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1[iParam0]), 1);
					}
				}
			}
			break;
		
		case 2:
			if ((!func_48(Local_109[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1[iParam0], 2) && SYSTEM::VDIST2(NETWORK::NETWORK_ARE_HANDLES_THE_SAME(unk_0x9B0761B4C3EB8BC7(), 1), NETWORK::NETWORK_ARE_HANDLES_THE_SAME(iVar0, 1)) <= 900f) && !func_22(PLAYER::PLAYER_ID()))
			{
				func_91(&(Local_110.f_7), 4, iVar0, "ARMY_Guard01", 0, 1);
				func_117(&(Local_110.f_7), "ARMYAUD", "ARMY_WRN1", 12, 0, 0, 0);
				func_47(&(Local_109[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1[iParam0]), 2);
			}
			break;
		
		case 3:
			if (!func_48(Local_109[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1[iParam0], 4))
			{
				if (func_116(iParam0))
				{
					TASK::TASK_AIM_GUN_AT_ENTITY(iVar0, func_115(iParam0), -1, false);
				}
				if (func_114(iParam0, 1630799643))
				{
					func_47(&(Local_109[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1[iParam0]), 4);
				}
			}
			break;
		
		case 4:
			if ((!func_48(Local_109[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1[iParam0], 8) && SYSTEM::VDIST2(NETWORK::NETWORK_ARE_HANDLES_THE_SAME(unk_0x9B0761B4C3EB8BC7(), 0), NETWORK::NETWORK_ARE_HANDLES_THE_SAME(iVar0, 1)) <= 900f) && AUDIO::SET_SCRIPT_UPDATE_DOOR_AUDIO(PLAYER::PLAYER_ID()) < 1)
			{
				if (!func_17(&Local_110))
				{
					func_14(&Local_110);
				}
				if (func_11(&Local_110) >= 7f && !func_22(PLAYER::PLAYER_ID()))
				{
					func_47(&(Local_109[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1[iParam0]), 8);
					func_117(&(Local_110.f_7), "ARMYAUD", "ARMY_WRN1a", 12, 0, 0, 0);
				}
			}
			else if (func_17(&Local_110))
			{
				func_1(&Local_110);
			}
			if (!func_48(Local_109[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1[iParam0], 16))
			{
				if (func_113(iParam0) && SYSTEM::VDIST2(NETWORK::NETWORK_ARE_HANDLES_THE_SAME(unk_0x9B0761B4C3EB8BC7(), 0), NETWORK::NETWORK_ARE_HANDLES_THE_SAME(iVar0, 1)) <= 900f)
				{
					func_47(&(Local_109[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1[iParam0]), 16);
					if (!func_160())
					{
						PLAYER::REPORT_CRIME(PLAYER::PLAYER_ID(), 36, PLAYER::GET_WANTED_LEVEL_THRESHOLD(4));
					}
					else
					{
						PLAYER::REPORT_CRIME(PLAYER::PLAYER_ID(), 36, PLAYER::GET_WANTED_LEVEL_THRESHOLD(Global_262145.f_21406));
					}
				}
			}
			if (func_48(Local_109[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1[iParam0], 1))
			{
				if (!PED::IS_PED_IN_ANY_POLICE_VEHICLE(unk_0x9B0761B4C3EB8BC7(), 0))
				{
					if (SYSTEM::VDIST2(NETWORK::NETWORK_ARE_HANDLES_THE_SAME(unk_0x9B0761B4C3EB8BC7(), 1), NETWORK::NETWORK_ARE_HANDLES_THE_SAME(iVar0, 1)) > 900f)
					{
						func_43(&(Local_109[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1[iParam0]), 1);
					}
				}
			}
			break;
		
		case 5:
			if (!func_48(Local_109[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1[iParam0], 16))
			{
				if (func_113(iParam0) && SYSTEM::VDIST2(NETWORK::NETWORK_ARE_HANDLES_THE_SAME(unk_0x9B0761B4C3EB8BC7(), 0), NETWORK::NETWORK_ARE_HANDLES_THE_SAME(iVar0, 1)) <= 900f)
				{
					func_47(&(Local_109[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1[iParam0]), 16);
					if (!func_160())
					{
						PLAYER::REPORT_CRIME(PLAYER::PLAYER_ID(), 36, (PLAYER::GET_WANTED_LEVEL_THRESHOLD(4) - PLAYER::GET_WANTED_LEVEL_THRESHOLD(AUDIO::SET_SCRIPT_UPDATE_DOOR_AUDIO(PLAYER::PLAYER_ID()))));
					}
					else
					{
						PLAYER::REPORT_CRIME(PLAYER::PLAYER_ID(), 36, (PLAYER::GET_WANTED_LEVEL_THRESHOLD(Global_262145.f_21406) - PLAYER::GET_WANTED_LEVEL_THRESHOLD(AUDIO::SET_SCRIPT_UPDATE_DOOR_AUDIO(PLAYER::PLAYER_ID()))));
					}
				}
			}
			if (func_48(Local_109[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1[iParam0], 1))
			{
				if (!PED::IS_PED_IN_ANY_POLICE_VEHICLE(unk_0x9B0761B4C3EB8BC7(), 0))
				{
					if (SYSTEM::VDIST2(NETWORK::NETWORK_ARE_HANDLES_THE_SAME(unk_0x9B0761B4C3EB8BC7(), 1), NETWORK::NETWORK_ARE_HANDLES_THE_SAME(iVar0, 1)) > 900f)
					{
						func_43(&(Local_109[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1[iParam0]), 1);
					}
				}
			}
			if (!func_114(iParam0, 1630799643))
			{
				if (func_116(iParam0))
				{
					TASK::TASK_AIM_GUN_AT_ENTITY(iVar0, func_115(iParam0), -1, false);
				}
			}
			break;
		
		case 6:
			break;
		
		case 7:
			if (func_48(Local_109[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1[iParam0], 4))
			{
				if (func_116(iParam0))
				{
					HUD::HIDE_HUD_AND_RADAR_THIS_FRAME(iVar0);
				}
				if (!func_114(iParam0, 1435919172))
				{
					func_43(&(Local_109[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1[iParam0]), 4);
					func_43(&(Local_109[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1[iParam0]), 64);
				}
			}
			break;
	}
}

int func_113(int iParam0)
{
	int iVar0;
	
	if (!NETWORK::NETWORK_IS_HANDLE_VALID(Local_85[iParam0]))
	{
		return 0;
	}
	iVar0 = NETWORK::NET_TO_PED(Local_85[iParam0]);
	if (PED::IS_PED_IN_ANY_POLICE_VEHICLE(iVar0, 0))
	{
		return 0;
	}
	if (PED::IS_PED_IN_ANY_POLICE_VEHICLE(unk_0x9B0761B4C3EB8BC7(), 0))
	{
		return 0;
	}
	if (PED::IS_PED_PRONE(unk_0x9B0761B4C3EB8BC7()))
	{
		return 1;
	}
	if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iVar0))
	{
		return 1;
	}
	if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iVar0))
	{
		return 1;
	}
	if (SYSTEM::VDIST2(NETWORK::NETWORK_ARE_HANDLES_THE_SAME(unk_0x9B0761B4C3EB8BC7(), 1), NETWORK::NETWORK_ARE_HANDLES_THE_SAME(iVar0, 1)) <= 64f)
	{
		return 1;
	}
	return 0;
}

int func_114(int iParam0, int iParam1)
{
	int iVar0;
	
	if (!NETWORK::NETWORK_IS_HANDLE_VALID(Local_85[iParam0]))
	{
		return 1;
	}
	iVar0 = NETWORK::NET_TO_PED(Local_85[iParam0]);
	if (PED::IS_PED_IN_ANY_POLICE_VEHICLE(iVar0, 0))
	{
		return 1;
	}
	if (TASK::GET_SCRIPT_TASK_STATUS(iVar0, iParam1) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iVar0, iParam1) != 0)
	{
		return 0;
	}
	return 1;
}

int func_115(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	
	fVar3 = 1E+11f;
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			iVar2 = PLAYER::GET_PLAYER_PED(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)));
			if (!PED::IS_PED_IN_ANY_POLICE_VEHICLE(iVar2, 0))
			{
				fVar4 = SYSTEM::VDIST2(NETWORK::NETWORK_ARE_HANDLES_THE_SAME(iVar2, 1), NETWORK::NETWORK_ARE_HANDLES_THE_SAME(NETWORK::NET_TO_ENT(Local_85[iParam0]), 1));
				if (fVar4 < fVar3)
				{
					iVar1 = iVar2;
					fVar3 = fVar4;
				}
			}
		}
		iVar0++;
	}
	return iVar1;
}

int func_116(int iParam0)
{
	int iVar0;
	
	if (!NETWORK::NETWORK_IS_HANDLE_VALID(Local_85[iParam0]))
	{
		return 0;
	}
	iVar0 = NETWORK::NET_TO_PED(Local_85[iParam0]);
	if (PED::IS_PED_IN_ANY_POLICE_VEHICLE(iVar0, 0))
	{
		return 0;
	}
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
	{
		return 0;
	}
	return 1;
}

int func_117(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_88(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_21012 = 0;
	Global_21014 = 0;
	Global_21019 = 0;
	Global_21996 = 0;
	Global_21998 = 0;
	Global_22002 = 0;
	Global_2621441 = 1;
	return func_69(sParam2, iParam3, 0);
}

bool func_118(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_119()
{
	if (!ENTITY::DOES_ENTITY_EXIST(joaat("s_m_y_marine_01")))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(joaat("lazer")))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(joaat("s_m_y_pilot_01")))
	{
		return 0;
	}
	return 1;
}

void func_120(var uParam0, int iParam1)
{
	func_121(uParam0, iParam1);
}

void func_121(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

int func_122(bool bParam0)
{
	if (func_30(bParam0) == 236 || func_30(bParam0) == 150)
	{
		return 1;
	}
	return 0;
}

bool func_123()
{
	return unk_0xCE990E643CD9D0E5(Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_39.f_18, 0);
}

int func_124(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_125(bParam0))
		{
			return 1;
		}
	}
	if (!bParam2)
	{
	}
	if (Global_1590682[bParam0 /*883*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_125(int iParam0)
{
	return func_126(iParam0);
}

bool func_126(int iParam0)
{
	return unk_0xCE990E643CD9D0E5(Global_1590682[iParam0 /*883*/].f_13.f_1, 0);
}

void func_127()
{
	unk_0x78FCB2E22C41B9D5(joaat("s_m_y_marine_01"));
	unk_0x78FCB2E22C41B9D5(joaat("lazer"));
	unk_0x78FCB2E22C41B9D5(joaat("s_m_y_pilot_01"));
}

int func_128()
{
	int iVar0;
	
	switch (Local_85.f_19)
	{
		case 0:
			if (func_150())
			{
				Local_85.f_19 = 1;
			}
			break;
		
		case 1:
			if (func_149())
			{
				Local_85.f_19 = 2;
			}
			break;
		
		case 2:
			if (((((((func_124(PLAYER::PLAYER_ID(), 1, 0) || func_123()) || func_25(PLAYER::PLAYER_ID()) == 225) || func_25(PLAYER::PLAYER_ID()) == 233) || func_122(PLAYER::PLAYER_ID())) || func_21()) || Global_1574416) || (STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED() && func_8()))
			{
				func_120(&(Local_85.f_20), 1);
				Local_85.f_19 = 3;
			}
			else if (func_147())
			{
				func_120(&(Local_85.f_20), 1);
				Local_85.f_19 = 3;
			}
			break;
		
		case 3:
			if (!func_124(PLAYER::PLAYER_ID(), 1, 0) && !func_123())
			{
				iVar0 = 0;
				while (iVar0 < 2)
				{
					func_144(iVar0);
					iVar0++;
				}
				iVar0 = 0;
				while (iVar0 < 3)
				{
					func_131(iVar0);
					iVar0++;
				}
			}
			if (((((func_25(PLAYER::PLAYER_ID()) == 225 || func_25(PLAYER::PLAYER_ID()) == 233) || func_122(PLAYER::PLAYER_ID())) || Global_1574416) || func_21()) || (STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED() && func_8()))
			{
				func_130();
			}
			if (func_129())
			{
				Local_85.f_19 = 4;
			}
			break;
		
		case 4:
			func_130();
			return 1;
			break;
	}
	return 0;
}

int func_129()
{
	if (NETWORK::NETWORK_GET_NUM_PARTICIPANTS() > 1)
	{
		return 0;
	}
	if (SYSTEM::VDIST2(NETWORK::NETWORK_ARE_HANDLES_THE_SAME(unk_0x9B0761B4C3EB8BC7(), 0), -2076.374f, 3112.294f, 33.13584f) >= 1030225f)
	{
		return 1;
	}
	return 0;
}

void func_130()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (NETWORK::NETWORK_IS_HANDLE_VALID(Local_85[iVar0]))
		{
			iVar1 = NETWORK::NET_TO_PED(Local_85[iVar0]);
			if (!PED::IS_PED_IN_ANY_POLICE_VEHICLE(iVar1, 0))
			{
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (NETWORK::NETWORK_IS_HANDLE_VALID(Local_85.f_3[iVar0 /*5*/].f_1))
		{
			iVar1 = NETWORK::NET_TO_PED(Local_85.f_3[iVar0 /*5*/].f_1);
			if (!PED::IS_PED_IN_ANY_POLICE_VEHICLE(iVar1, 0))
			{
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar1);
			}
		}
		if (NETWORK::NETWORK_IS_HANDLE_VALID(Local_85.f_3[iVar0 /*5*/]))
		{
			iVar2 = unk_0x770D3B2B4702434A(Local_85.f_3[iVar0 /*5*/]);
			if (!PED::IS_PED_IN_ANY_POLICE_VEHICLE(iVar2, 0))
			{
				STREAMING::REMOVE_ANIM_DICT(&iVar2);
			}
		}
		iVar0++;
	}
}

void func_131(int iParam0)
{
	int iVar0;
	struct<3> Var1;
	var uVar2;
	struct<3> Var3;
	int iVar4;
	
	if (Local_85.f_3[iParam0 /*5*/].f_2 > 2)
	{
		if (NETWORK::NETWORK_IS_HANDLE_VALID(Local_85.f_3[iParam0 /*5*/].f_1))
		{
			if (!PED::IS_PED_IN_ANY_POLICE_VEHICLE(NETWORK::NET_TO_PED(Local_85.f_3[iParam0 /*5*/].f_1), 0))
			{
				iVar0 = NETWORK::NET_TO_PED(Local_85.f_3[iParam0 /*5*/].f_1);
				Var1 = { NETWORK::NETWORK_ARE_HANDLES_THE_SAME(iVar0, 1) };
				if (Var1.f_2 <= -150f)
				{
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar0);
					if (NETWORK::NETWORK_IS_HANDLE_VALID(Local_85.f_3[iParam0 /*5*/]))
					{
						if (!PED::IS_PED_IN_ANY_POLICE_VEHICLE(unk_0x770D3B2B4702434A(Local_85.f_3[iParam0 /*5*/]), 0))
						{
							uVar2 = unk_0x770D3B2B4702434A(Local_85.f_3[iParam0 /*5*/]);
							STREAMING::REMOVE_ANIM_DICT(&uVar2);
						}
					}
				}
			}
		}
	}
	switch (Local_85.f_3[iParam0 /*5*/].f_2)
	{
		case 0:
			if (func_143(iParam0, 16))
			{
				Local_85.f_3[iParam0 /*5*/].f_4 = -1;
				Local_85.f_3[iParam0 /*5*/].f_2 = 1;
			}
			break;
		
		case 1:
			if (func_141(iParam0))
			{
				Local_85.f_3[iParam0 /*5*/].f_2 = 2;
			}
			break;
		
		case 2:
			Var3 = { func_140(iParam0) };
			if (!func_139(Var3))
			{
				if (!NETWORK::IS_SPHERE_VISIBLE_TO_ANOTHER_MACHINE(Var3, 20f) && !CAM::IS_SPHERE_VISIBLE(Var3, 20f))
				{
					if (func_134(Var3, ENTITY::IS_ENTITY_IN_WATER(PLAYER::GET_PLAYER_PED(Local_85.f_3[iParam0 /*5*/].f_4)), iParam0))
					{
						Local_85.f_3[iParam0 /*5*/].f_2 = 3;
					}
				}
			}
			break;
		
		case 3:
			if (func_143(iParam0, 2))
			{
				Local_85.f_3[iParam0 /*5*/].f_2 = 4;
			}
			break;
		
		case 4:
			iVar4 = PLAYER::GET_PLAYER_PED(Local_85.f_3[iParam0 /*5*/].f_4);
			if (!MISC::IS_BIT_SET(iVar4))
			{
				Local_85.f_3[iParam0 /*5*/].f_2 = 5;
			}
			else if (PED::IS_PED_IN_ANY_POLICE_VEHICLE(iVar4, 0))
			{
				Local_85.f_3[iParam0 /*5*/].f_2 = 5;
			}
			else if (PED::IS_PED_IN_ANY_PLANE(iVar4) || PED::IS_PED_IN_ANY_HELI(iVar4))
			{
				if (func_133(ENTITY::GET_ENTITY_MODEL(iVar4, 0)))
				{
					Local_85.f_3[iParam0 /*5*/].f_2 = 5;
				}
			}
			break;
		
		case 5:
			if (func_143(iParam0, 8))
			{
				Local_85.f_3[iParam0 /*5*/].f_2 = 6;
				Local_85.f_3[iParam0 /*5*/].f_4 = -1;
			}
			break;
		
		case 6:
			if (!func_132(iParam0, 16))
			{
				Local_85.f_3[iParam0 /*5*/].f_2 = 0;
			}
			if (func_141(iParam0))
			{
				Local_85.f_3[iParam0 /*5*/].f_2 = 3;
			}
			break;
	}
}

int func_132(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			if (func_48(Local_109[iVar0 /*8*/].f_4[iParam0], iParam1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_133(int iParam0)
{
	if (MISC::IS_BIT_SET(iParam0))
	{
		if (PED::IS_PED_IN_ANY_POLICE_VEHICLE(iParam0, 0))
		{
			return 1;
		}
		else if (!ENTITY::GET_ENTITY_COORDS(iParam0, false))
		{
			if (!FIRE::IS_ENTITY_ON_FIRE(iParam0))
			{
				return 1;
			}
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_134(struct<3> Param0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return 1;
	}
	iVar0 = 1;
	if (!NETWORK::NETWORK_IS_HANDLE_VALID(Local_85.f_3[iParam2 /*5*/]))
	{
		if (!func_136(&(Local_85.f_3[iParam2 /*5*/]), joaat("lazer"), Param0, bParam1, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
		{
			iVar0 = 0;
		}
		else
		{
			VEHICLE::CONTROL_LANDING_GEAR(unk_0x770D3B2B4702434A(Local_85.f_3[iParam2 /*5*/]), 3);
		}
	}
	if (NETWORK::NETWORK_IS_HANDLE_VALID(Local_85.f_3[iParam2 /*5*/]))
	{
		if (!NETWORK::NETWORK_IS_HANDLE_VALID(Local_85.f_3[iParam2 /*5*/].f_1))
		{
			if (!func_135(&(Local_85.f_3[iParam2 /*5*/].f_1), Local_85.f_3[iParam2 /*5*/], 29, joaat("s_m_y_pilot_01"), -1, 1, 1, 1))
			{
				iVar0 = 0;
			}
			else
			{
				WEAPON::SET_CURRENT_PED_VEHICLE_WEAPON(NETWORK::NET_TO_PED(Local_85.f_3[iParam2 /*5*/].f_1), joaat("vehicle_weapon_space_rocket"));
				PED::SET_PED_CAN_SWITCH_WEAPON(NETWORK::NET_TO_PED(Local_85.f_3[iParam2 /*5*/].f_1), false);
			}
		}
	}
	else
	{
		iVar0 = 0;
	}
	return iVar0;
}

int func_135(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7)
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

int func_136(var uParam0, int iParam1, struct<3> Param2, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
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
			func_137(Param2, fParam3, iParam1, iVar1);
			return 1;
		}
	}
	return 0;
}

void func_137(struct<3> Param0, float fParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_138(PLAYER::PLAYER_ID(), Param0, iParam2) > -1)
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

int func_138(bool bParam0, struct<3> Param1, int iParam2)
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

int func_139(struct<3> Param0)
{
	if ((Param0.x == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

Vector3 func_140(int iParam0)
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = PLAYER::GET_PLAYER_PED(Local_85.f_3[iParam0 /*5*/].f_4);
	if (PED::IS_PED_IN_ANY_POLICE_VEHICLE(iVar0, 0))
	{
		return 0f, 0f, 0f;
	}
	Var1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(NETWORK::NETWORK_ARE_HANDLES_THE_SAME(iVar0, 1), ENTITY::IS_ENTITY_IN_WATER(iVar0), 0f, -250f, (40f * SYSTEM::TO_FLOAT(iParam0))) };
	if (Var1.f_2 < 100f)
	{
		Var1.f_2 = 100f;
	}
	return Var1;
}

int func_141(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			iVar1 = PLAYER::GET_PLAYER_PED(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)));
			if (!func_142(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0))))
			{
				if (PED::IS_PED_IN_ANY_PLANE(iVar1) || PED::IS_PED_IN_ANY_HELI(iVar1))
				{
					if (AUDIO::SET_SCRIPT_UPDATE_DOOR_AUDIO(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0))) >= 4)
					{
						Var2 = { NETWORK::NETWORK_ARE_HANDLES_THE_SAME(iVar1, 0) };
						if (func_20(Var2, 3, 1000, 0) && Var2.f_2 > 90f)
						{
							Local_85.f_3[iParam0 /*5*/].f_4 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
							return 1;
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_142(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = PLAYER::GET_PLAYER_PED(bParam0);
	if (!MISC::IS_BIT_SET(iVar0))
	{
		return 1;
	}
	if (PED::IS_PED_IN_ANY_POLICE_VEHICLE(iVar0, 0))
	{
		return 1;
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = PLAYER::GET_PLAYER_PED(Local_85.f_3[iVar1 /*5*/].f_4);
		if (MISC::IS_BIT_SET(iVar2))
		{
			if (bParam0 == Local_85.f_3[iVar1 /*5*/].f_4)
			{
				return 1;
			}
		}
		iVar1++;
	}
	return 0;
}

int func_143(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			if (!func_48(Local_109[iVar0 /*8*/].f_4[iParam0], iParam1))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

void func_144(int iParam0)
{
	switch (Local_85.f_21[iParam0])
	{
		case 0:
			if (func_146(iParam0, 64))
			{
				Local_85.f_21[iParam0] = 1;
			}
			break;
		
		case 1:
			if (func_145(iParam0, 1))
			{
				Local_85.f_21[iParam0] = 2;
			}
			break;
		
		case 2:
			if (func_145(iParam0, 2))
			{
				Local_85.f_21[iParam0] = 3;
			}
			break;
		
		case 3:
			if (func_146(iParam0, 4))
			{
				Local_85.f_21[iParam0] = 4;
			}
			break;
		
		case 4:
			if (func_145(iParam0, 8))
			{
				Local_85.f_21[iParam0] = 5;
			}
			if (!func_145(iParam0, 1))
			{
				Local_85.f_21[iParam0] = 7;
			}
			if (func_145(iParam0, 16))
			{
				Local_85.f_21[iParam0] = 6;
			}
			break;
		
		case 5:
			if (func_145(iParam0, 16))
			{
				Local_85.f_21[iParam0] = 6;
			}
			if (!func_145(iParam0, 1))
			{
				Local_85.f_21[iParam0] = 7;
			}
			break;
		
		case 6:
			break;
		
		case 7:
			if (!func_145(iParam0, 4))
			{
				Local_85.f_21[iParam0] = 0;
			}
			break;
	}
}

int func_145(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			if (func_48(Local_109[iVar0 /*8*/].f_1[iParam0], iParam1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_146(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			if (!func_48(Local_109[iVar0 /*8*/].f_1[iParam0], iParam1))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

int func_147()
{
	int iVar0;
	
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return 1;
	}
	iVar0 = 1;
	if (!func_148(&(Local_85[0]), 29, joaat("s_m_y_marine_01"), -2308.4f, 3391f, 30.0601f, 55.8214f, 1, 1, 1))
	{
		iVar0 = 0;
	}
	else if (NETWORK::NETWORK_IS_HANDLE_VALID(Local_85[0]))
	{
		unk_0x92BD213E6A0E666B(NETWORK::NET_TO_PED(Local_85[0]), joaat("weapon_assaultrifle"), 200, 1, 1);
	}
	if (!func_148(&(Local_85[1]), 29, joaat("s_m_y_marine_01"), -1588.9f, 2792.9f, 16.1385f, 229.437f, 1, 1, 1))
	{
		iVar0 = 0;
	}
	else if (NETWORK::NETWORK_IS_HANDLE_VALID(Local_85[1]))
	{
		unk_0x92BD213E6A0E666B(NETWORK::NET_TO_PED(Local_85[1]), joaat("weapon_assaultrifle"), 200, 1, 1);
	}
	return iVar0;
}

int func_148(var uParam0, int iParam1, int iParam2, struct<3> Param3, float fParam4, bool bParam5, bool bParam6, bool bParam7)
{
	int iVar0;
	
	if (!NETWORK::CAN_REGISTER_MISSION_PEDS(1))
	{
		return 0;
	}
	iVar0 = PED::CREATE_PED(iParam1, iParam2, Param3, fParam4, bParam6, bParam5);
	*uParam0 = NETWORK::PED_TO_NET(iVar0);
	if (HUD::DOES_BLIP_EXIST(*uParam0))
	{
		ENTITY::_SET_ENTITY_SOMETHING(iVar0, bParam7);
		if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(iVar0))
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

int func_149()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1)))
		{
			if (!func_118(Local_109[iVar1 /*8*/], 2))
			{
				iVar0 = 0;
			}
		}
		iVar1++;
	}
	return iVar0;
}

int func_150()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1)))
		{
			if (!func_118(Local_109[iVar1 /*8*/], 1))
			{
				iVar0 = 0;
			}
		}
		iVar1++;
	}
	return iVar0;
}

void func_151()
{
	if (!func_156())
	{
		return;
	}
	if (func_106(&uLocal_122) && func_104(&uLocal_122, Global_262145.f_21481, 0))
	{
		func_103(&uLocal_122);
	}
	if (func_106(&uLocal_120) && func_104(&uLocal_120, Global_262145.f_21482, 0))
	{
		func_103(&uLocal_120);
		iLocal_117 = 0;
	}
	if (AUDIO::SET_SCRIPT_UPDATE_DOOR_AUDIO(PLAYER::PLAYER_ID()) <= 0)
	{
		if (func_152())
		{
			if (!Global_2540384.f_6642)
			{
				Global_2540384.f_6642 = 1;
				func_55("BASE_EXP_WARN", -1);
			}
			if (!iLocal_117)
			{
				iLocal_117 = 1;
				func_105(&uLocal_122, 0, 0);
				func_105(&uLocal_120, 0, 0);
			}
			else if (!func_106(&uLocal_122))
			{
				PLAYER::SET_MAX_WANTED_LEVEL(5);
				bLocal_112 = true;
				bLocal_113 = true;
				iLocal_117 = 0;
				func_103(&uLocal_122);
				func_103(&uLocal_120);
			}
		}
	}
}

int func_152()
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 26)
	{
		func_155(&iLocal_118, iVar1);
		iLocal_119 = func_154();
		if (iLocal_119 >= 0)
		{
			iVar0 = func_153(iLocal_119);
			if (MISC::IS_BIT_SET(iVar0) && ENTITY::IS_ENTITY_A_PED(iVar0))
			{
				if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0) == unk_0x9B0761B4C3EB8BC7())
				{
					return 1;
				}
			}
		}
		iVar1++;
	}
	return 0;
}

int func_153(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = FIRE::_GET_ENTITY_INSIDE_EXPLOSION_AREA(iLocal_118, -1773.944f, 3287.334f, 30f, -2029.776f, 2845.083f, 1250f, 255f);
			break;
		
		case 1:
			iVar0 = FIRE::_GET_ENTITY_INSIDE_EXPLOSION_AREA(iLocal_118, -2725.889f, 3291.099f, 30f, -2009.182f, 2879.835f, 1250f, 180f);
			break;
		
		case 2:
			iVar0 = FIRE::_GET_ENTITY_INSIDE_EXPLOSION_AREA(iLocal_118, -2442.026f, 3326.699f, 30f, -2033.928f, 3089.049f, 1250f, 205f);
			break;
		
		case 3:
			iVar0 = FIRE::_GET_ENTITY_INSIDE_EXPLOSION_AREA(iLocal_118, -1917.165f, 3374.209f, 30f, -2016.791f, 3195.058f, 1250f, 86.25f);
			break;
		
		case 4:
			iVar0 = FIRE::_GET_ENTITY_INSIDE_EXPLOSION_AREA(iLocal_118, -2192.753f, 3373.278f, 30f, -2191.544f, 3150.417f, 1250f, 150f);
			break;
		
		case 5:
			iVar0 = FIRE::_GET_ENTITY_INSIDE_EXPLOSION_AREA(iLocal_118, -2077.663f, 3344.514f, 30f, -2191.544f, 3150.417f, 1250f, 140.5f);
			break;
		
		case 6:
			iVar0 = FIRE::_GET_ENTITY_INSIDE_EXPLOSION_AREA(iLocal_118, -2861.755f, 3352.661f, 30f, -2715.871f, 3269.916f, 1250f, 90f);
			break;
		
		case 7:
			iVar0 = FIRE::_GET_ENTITY_INSIDE_EXPLOSION_AREA(iLocal_118, -2005.574f, 3364.533f, 30f, -1977.569f, 3330.888f, 1250f, 100f);
			break;
		
		case 8:
			iVar0 = FIRE::_GET_ENTITY_INSIDE_EXPLOSION_AREA(iLocal_118, -1682.235f, 3004.285f, 30f, -1942.747f, 2947.441f, 1250f, 248.75f);
			break;
		
		case 9:
			iVar0 = FIRE::_GET_ENTITY_INSIDE_EXPLOSION_AREA(iLocal_118, -2393.295f, 2936.406f, 31.6801f, -2453.037f, 3006.863f, 52.31003f, 128f);
			break;
		
		case 10:
			iVar0 = FIRE::_GET_ENTITY_INSIDE_EXPLOSION_AREA(iLocal_118, -2347.185f, 3023.83f, 31.56573f, -2517.33f, 2989.063f, 49.95644f, 127.25f);
			break;
		
		case 11:
			iVar0 = FIRE::_GET_ENTITY_INSIDE_EXPLOSION_AREA(iLocal_118, -2259.922f, 3358.04f, 29.99972f, -2299.772f, 3385.79f, 38.06014f, 16f);
			break;
		
		case 12:
			iVar0 = FIRE::_GET_ENTITY_INSIDE_EXPLOSION_AREA(iLocal_118, -2476.309f, 3363.914f, 31.67933f, -2431.981f, 3287.669f, 39.97826f, 214.25f);
			break;
		
		case 13:
			iVar0 = FIRE::_GET_ENTITY_INSIDE_EXPLOSION_AREA(iLocal_118, -2103.081f, 2797.783f, 29.37864f, -2096.821f, 2874.423f, 57.80989f, 65.75f);
			break;
		
		case 14:
			iVar0 = FIRE::_GET_ENTITY_INSIDE_EXPLOSION_AREA(iLocal_118, -1877.436f, 2783.151f, 31.80618f, -1797.873f, 2924.37f, 1307.111f, 88f);
			break;
		
		case 15:
			iVar0 = FIRE::_GET_ENTITY_INSIDE_EXPLOSION_AREA(iLocal_118, -1761.116f, 2834.651f, 31.80622f, -1720.887f, 2906.419f, 1281.806f, 88f);
			break;
		
		case 16:
			iVar0 = FIRE::_GET_ENTITY_INSIDE_EXPLOSION_AREA(iLocal_118, -1761.493f, 2817.68f, 32.37125f, -1769.704f, 2913.734f, 1281.807f, 88f);
			break;
		
		case 17:
			iVar0 = FIRE::_GET_ENTITY_INSIDE_EXPLOSION_AREA(iLocal_118, -1879.297f, 2772.653f, 29.57795f, -1864.521f, 2825.472f, 1281.806f, 88f);
			break;
		
		case 18:
			iVar0 = FIRE::_GET_ENTITY_INSIDE_EXPLOSION_AREA(iLocal_118, -2676.74f, 3366.988f, 29.92394f, -2744.79f, 3340.347f, 1037.804f, 9f);
			break;
		
		case 19:
			iVar0 = FIRE::_GET_ENTITY_INSIDE_EXPLOSION_AREA(iLocal_118, -2676.74f, 3366.988f, 29.92394f, -2744.79f, 3340.347f, 1037.804f, 9.5f);
			break;
		
		case 20:
			iVar0 = FIRE::_GET_ENTITY_INSIDE_EXPLOSION_AREA(iLocal_118, -2807.397f, 3264.226f, 29.92764f, -2744.79f, 3340.347f, 1037.804f, 9.5f);
			break;
		
		case 21:
			iVar0 = FIRE::_GET_ENTITY_INSIDE_EXPLOSION_AREA(iLocal_118, -2808.236f, 3264.634f, 29.92764f, -2747.55f, 3187.8f, 1037.457f, 9.5f);
			break;
		
		case 22:
			iVar0 = FIRE::_GET_ENTITY_INSIDE_EXPLOSION_AREA(iLocal_118, -2530.996f, 3064.151f, 29.71081f, -2748.557f, 3189.939f, 1037.457f, 9.5f);
			break;
		
		case 23:
			iVar0 = FIRE::_GET_ENTITY_INSIDE_EXPLOSION_AREA(iLocal_118, -2533.902f, 3062.491f, 29.70715f, -2520.674f, 2996.817f, 1037.457f, 9.5f);
			break;
		
		case 24:
			iVar0 = FIRE::_GET_ENTITY_INSIDE_EXPLOSION_AREA(iLocal_118, -2500.716f, 2927.103f, 29.45663f, -2445.696f, 2896.657f, 1037.68f, 9.5f);
			break;
		
		case 25:
			iVar0 = FIRE::_GET_ENTITY_INSIDE_EXPLOSION_AREA(iLocal_118, -2020.543f, 2810.747f, 29.45658f, -1927.949f, 2785.779f, 1037.671f, 9.5f);
			break;
		
		case 26:
			iVar0 = FIRE::_GET_ENTITY_INSIDE_EXPLOSION_AREA(iLocal_118, -2261.899f, 3376.549f, 29.77859f, -2141.067f, 3376.773f, 1037.9f, 9.5f);
			break;
	}
	return iVar0;
}

int func_154()
{
	if (FIRE::IS_EXPLOSION_IN_ANGLED_AREA(iLocal_118, -1773.944f, 3287.334f, 30f, -2029.776f, 2845.083f, 1250f, 255f))
	{
		return 0;
	}
	else if (FIRE::IS_EXPLOSION_IN_ANGLED_AREA(iLocal_118, -2725.889f, 3291.099f, 30f, -2009.182f, 2879.835f, 1250f, 180f))
	{
		return 1;
	}
	else if (FIRE::IS_EXPLOSION_IN_ANGLED_AREA(iLocal_118, -2442.026f, 3326.699f, 30f, -2033.928f, 3089.049f, 1250f, 205f))
	{
		return 2;
	}
	else if (FIRE::IS_EXPLOSION_IN_ANGLED_AREA(iLocal_118, -1917.165f, 3374.209f, 30f, -2016.791f, 3195.058f, 1250f, 86.25f))
	{
		return 3;
	}
	else if (FIRE::IS_EXPLOSION_IN_ANGLED_AREA(iLocal_118, -2192.753f, 3373.278f, 30f, -2191.544f, 3150.417f, 1250f, 150f))
	{
		return 4;
	}
	else if (FIRE::IS_EXPLOSION_IN_ANGLED_AREA(iLocal_118, -2077.663f, 3344.514f, 30f, -2191.544f, 3150.417f, 1250f, 140.5f))
	{
		return 5;
	}
	else if (FIRE::IS_EXPLOSION_IN_ANGLED_AREA(iLocal_118, -2861.755f, 3352.661f, 30f, -2715.871f, 3269.916f, 1250f, 90f))
	{
		return 6;
	}
	else if (FIRE::IS_EXPLOSION_IN_ANGLED_AREA(iLocal_118, -2005.574f, 3364.533f, 30f, -1977.569f, 3330.888f, 1250f, 100f))
	{
		return 7;
	}
	else if (FIRE::IS_EXPLOSION_IN_ANGLED_AREA(iLocal_118, -1682.235f, 3004.285f, 30f, -1942.747f, 2947.441f, 1250f, 248.75f))
	{
		return 8;
	}
	else if (FIRE::IS_EXPLOSION_IN_ANGLED_AREA(iLocal_118, -2393.295f, 2936.406f, 31.6801f, -2453.037f, 3006.863f, 52.31003f, 128f))
	{
		return 9;
	}
	else if (FIRE::IS_EXPLOSION_IN_ANGLED_AREA(iLocal_118, -2347.185f, 3023.83f, 31.56573f, -2517.33f, 2989.063f, 49.95644f, 127.25f))
	{
		return 10;
	}
	else if (FIRE::IS_EXPLOSION_IN_ANGLED_AREA(iLocal_118, -2259.922f, 3358.04f, 29.99972f, -2299.772f, 3385.79f, 38.06014f, 16f))
	{
		return 11;
	}
	else if (FIRE::IS_EXPLOSION_IN_ANGLED_AREA(iLocal_118, -2476.309f, 3363.914f, 31.67933f, -2431.981f, 3287.669f, 39.97826f, 214.25f))
	{
		return 12;
	}
	else if (FIRE::IS_EXPLOSION_IN_ANGLED_AREA(iLocal_118, -2103.081f, 2797.783f, 29.37864f, -2096.821f, 2874.423f, 57.80989f, 65.75f))
	{
		return 13;
	}
	else if (FIRE::IS_EXPLOSION_IN_ANGLED_AREA(iLocal_118, -1877.436f, 2783.151f, 31.80618f, -1797.873f, 2924.37f, 1307.111f, 88f))
	{
		return 14;
	}
	else if (FIRE::IS_EXPLOSION_IN_ANGLED_AREA(iLocal_118, -1761.116f, 2834.651f, 31.80622f, -1720.887f, 2906.419f, 1281.806f, 88f))
	{
		return 15;
	}
	else if (FIRE::IS_EXPLOSION_IN_ANGLED_AREA(iLocal_118, -1761.493f, 2817.68f, 32.37125f, -1769.704f, 2913.734f, 1281.807f, 88f))
	{
		return 16;
	}
	else if (FIRE::IS_EXPLOSION_IN_ANGLED_AREA(iLocal_118, -1879.297f, 2772.653f, 29.57795f, -1864.521f, 2825.472f, 1281.806f, 88f))
	{
		return 17;
	}
	else if (FIRE::IS_EXPLOSION_IN_ANGLED_AREA(iLocal_118, -2676.74f, 3366.988f, 29.92394f, -2744.79f, 3340.347f, 1037.804f, 9f))
	{
		return 18;
	}
	else if (FIRE::IS_EXPLOSION_IN_ANGLED_AREA(iLocal_118, -2676.74f, 3366.988f, 29.92394f, -2744.79f, 3340.347f, 1037.804f, 9.5f))
	{
		return 19;
	}
	else if (FIRE::IS_EXPLOSION_IN_ANGLED_AREA(iLocal_118, -2807.397f, 3264.226f, 29.92764f, -2744.79f, 3340.347f, 1037.804f, 9.5f))
	{
		return 20;
	}
	else if (FIRE::IS_EXPLOSION_IN_ANGLED_AREA(iLocal_118, -2808.236f, 3264.634f, 29.92764f, -2747.55f, 3187.8f, 1037.457f, 9.5f))
	{
		return 21;
	}
	else if (FIRE::IS_EXPLOSION_IN_ANGLED_AREA(iLocal_118, -2530.996f, 3064.151f, 29.71081f, -2748.557f, 3189.939f, 1037.457f, 9.5f))
	{
		return 22;
	}
	else if (FIRE::IS_EXPLOSION_IN_ANGLED_AREA(iLocal_118, -2533.902f, 3062.491f, 29.70715f, -2520.674f, 2996.817f, 1037.457f, 9.5f))
	{
		return 23;
	}
	else if (FIRE::IS_EXPLOSION_IN_ANGLED_AREA(iLocal_118, -2500.716f, 2927.103f, 29.45663f, -2445.696f, 2896.657f, 1037.68f, 9.5f))
	{
		return 24;
	}
	else if (FIRE::IS_EXPLOSION_IN_ANGLED_AREA(iLocal_118, -2020.543f, 2810.747f, 29.45658f, -1927.949f, 2785.779f, 1037.671f, 9.5f))
	{
		return 25;
	}
	else if (FIRE::IS_EXPLOSION_IN_ANGLED_AREA(iLocal_118, -2261.899f, 3376.549f, 29.77859f, -2141.067f, 3376.773f, 1037.9f, 9.5f))
	{
		return 26;
	}
	return -1;
}

void func_155(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 0;
			break;
		
		case 1:
			*uParam0 = 1;
			break;
		
		case 2:
			*uParam0 = 2;
			break;
		
		case 3:
			*uParam0 = 3;
			break;
		
		case 4:
			*uParam0 = 4;
			break;
		
		case 5:
			*uParam0 = 5;
			break;
		
		case 6:
			*uParam0 = 19;
			break;
		
		case 7:
			*uParam0 = 20;
			break;
		
		case 8:
			*uParam0 = 21;
			break;
		
		case 9:
			*uParam0 = 32;
			break;
		
		case 10:
			*uParam0 = 36;
			break;
		
		case 11:
			*uParam0 = 40;
			break;
		
		case 12:
			*uParam0 = 41;
			break;
		
		case 13:
			*uParam0 = 43;
			break;
		
		case 14:
			*uParam0 = 44;
			break;
		
		case 15:
			*uParam0 = 45;
			break;
		
		case 16:
			*uParam0 = 46;
			break;
		
		case 17:
			*uParam0 = 47;
			break;
		
		case 18:
			*uParam0 = 48;
			break;
		
		case 19:
			*uParam0 = 49;
			break;
		
		case 20:
			*uParam0 = 50;
			break;
		
		case 21:
			*uParam0 = 53;
			break;
		
		case 22:
			*uParam0 = 54;
			break;
		
		case 23:
			*uParam0 = 55;
			break;
		
		case 24:
			*uParam0 = 56;
			break;
		
		case 25:
			*uParam0 = 57;
			break;
	}
}

int func_156()
{
	bool bVar0;
	
	if (func_159(PLAYER::PLAYER_ID(), 150) == 2)
	{
		return 0;
	}
	if (func_61(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	if (func_158(1))
	{
		bVar0 = func_157();
		if (bVar0 != func_39())
		{
			if (func_61(bVar0))
			{
				return 1;
			}
		}
	}
	return 0;
}

var func_157()
{
	return Global_1630317[PLAYER::PLAYER_ID() /*595*/].f_11;
}

bool func_158(bool bParam0)
{
	return func_59(PLAYER::PLAYER_ID(), bParam0);
}

int func_159(int iParam0, int iParam1)
{
	if (func_30(iParam0) == iParam1)
	{
		return Global_1630317[iParam0 /*595*/].f_11.f_469;
	}
	return -1;
}

int func_160()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	
	if (func_159(PLAYER::PLAYER_ID(), 150) == 2)
	{
		return 1;
	}
	if (func_61(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	if (func_158(1))
	{
		iVar0 = func_157();
		if (iVar0 != func_39())
		{
			if (func_61(iVar0))
			{
				return 1;
			}
		}
	}
	iVar1 = 0;
	while (iVar1 < 32)
	{
		bVar2 = NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar1);
		if (func_38(bVar2, 0, 1))
		{
			if (bVar2 != PLAYER::PLAYER_ID())
			{
				if (func_158(1))
				{
					if (func_162(PLAYER::PLAYER_ID(), bVar2))
					{
						if (func_61(bVar2))
						{
							return 1;
						}
					}
				}
				if (func_161(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), PLAYER::GET_PLAYER_PED(bVar2)))
				{
					iVar3 = ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYER_PED(bVar2), 0);
					if (MISC::IS_MINIGAME_IN_PROGRESS(iVar3, -1, 0) == PLAYER::GET_PLAYER_PED(bVar2))
					{
						if (func_61(bVar2))
						{
							return 1;
						}
					}
				}
			}
		}
		iVar1++;
	}
	return 0;
}

int func_161(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (MISC::IS_BIT_SET(iParam0) && MISC::IS_BIT_SET(iParam1))
	{
		if (!PED::IS_PED_IN_ANY_POLICE_VEHICLE(iParam0, 0) && !PED::IS_PED_IN_ANY_POLICE_VEHICLE(iParam1, 0))
		{
			if (SYSTEM::VDIST(iParam0, 0) && SYSTEM::VDIST(iParam1, 0))
			{
				iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0, 0);
				iVar1 = ENTITY::GET_ENTITY_MODEL(iParam1, 0);
				if (MISC::IS_BIT_SET(iVar0) && MISC::IS_BIT_SET(iVar1))
				{
					if (iVar0 == iVar1)
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_162(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = func_163(iParam0);
	if (!iVar0 == func_39())
	{
		if (iVar0 == func_163(bParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_163(int iParam0)
{
	if (iParam0 != func_39())
	{
		return Global_1630317[iParam0 /*595*/].f_11;
	}
	return func_39();
}

int func_164()
{
	var uVar0;
	
	func_172(&uVar0);
	if (Global_1312872 == 0)
	{
		if (!MISC::SET_BIT())
		{
			return 1;
		}
	}
	if (func_171())
	{
		return 1;
	}
	if (Global_2464493)
	{
		return 1;
	}
	if (func_170())
	{
		return 1;
	}
	if (func_169(159))
	{
		if (!func_168())
		{
			return 1;
		}
	}
	if (func_169(157))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_SESSION_IS_IN_VOICE_SESSION())
	{
		return 1;
	}
	if (func_165() != 0)
	{
		if (INTERIOR::GET_INTERIOR_AT_COORDS(func_165()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_165()
{
	switch (func_167())
	{
		case 0:
			return func_166();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_166()
{
	switch (Global_2464595)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_167()
{
	return Global_30968;
}

bool func_168()
{
	return Global_2451787.f_696;
}

int func_169(int iParam0)
{
	if (unk_0x16F1FCCC54559709(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_170()
{
	return Global_2462250;
}

bool func_171()
{
	return Global_2451787.f_691;
}

void func_172(var uParam0)
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
					func_173(iVar0);
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

void func_173(int iParam0)
{
	struct<3> Var0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	if (unk_0x477FAFFE21935947(1, iParam0, &Var0, 3))
	{
		if (func_38(Var0.f_1, 1, 1))
		{
			iVar1 = PLAYER::GET_PLAYER_PED(Var0.f_1);
			if (MISC::IS_BIT_SET(iVar1))
			{
				if (SYSTEM::VDIST(iVar1, 0))
				{
					iVar2 = ENTITY::GET_ENTITY_MODEL(iVar1, 0);
					if (VEHICLE::REMOVE_VEHICLE_WINDOW(iVar2, Var0.f_2) && NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
					{
						if (func_174(iVar2, &bVar3))
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

int func_174(int iParam0, var uParam1)
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

void func_175()
{
	if (MISC::ARE_PROFILE_SETTINGS_VALID(false, 0) != 5)
	{
		if (func_182(5, 0, 1))
		{
			if (NETWORK::GET_NUM_CREATED_MISSION_PEDS(false) <= 5)
			{
				NETWORK::RESERVE_NETWORK_MISSION_PEDS(5);
			}
		}
	}
	if (MISC::GET_PROFILE_SETTING(0, 0) != 3)
	{
		if (func_176(3, 0, 1))
		{
			if (NETWORK::GET_NUM_CREATED_MISSION_VEHICLES(false) <= 3)
			{
				NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(3);
			}
		}
	}
}

bool func_176(int iParam0, bool bParam1, bool bParam2)
{
	return func_177(1, iParam0, 1, bParam1, bParam2);
}

int func_177(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xCE990E643CD9D0E5(Global_1389439, 0))
	{
		return 0;
	}
	if ((bParam2 && !bParam3) && iParam1 <= (func_181(iParam0) - func_180(iParam0, 0)))
	{
		return 1;
	}
	else
	{
		if (bParam3)
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_180(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_181(iParam0) - func_179(iParam0));
		}
		else
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_180(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_181(iParam0) - func_180(iParam0, 1));
		}
		if (!bParam4 && Global_1590682[PLAYER::PLAYER_ID() /*883*/] != 3)
		{
			iVar1 = (iVar1 - func_178(iParam0));
		}
		if (iVar0 < iVar1)
		{
			return 1;
		}
	}
	return 0;
}

int func_178(int iParam0)
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

int func_179(int iParam0)
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

int func_180(int iParam0, bool bParam1)
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

int func_181(int iParam0)
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

bool func_182(int iParam0, bool bParam1, bool bParam2)
{
	return func_177(0, iParam0, 1, bParam1, bParam2);
}

void func_183()
{
	SYSTEM::WAIT(0);
}

void func_184()
{
	int iVar0;
	
	if (MISC::SET_BIT())
	{
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			if (func_129())
			{
				func_130();
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (SYSTEM::VMAG(Local_110.f_172[iVar0]))
		{
			unk_0x93370FA10F15BE44(&(Local_110.f_172[iVar0]));
		}
		iVar0++;
	}
	if (iLocal_115)
	{
		PLAYER::SET_MAX_WANTED_LEVEL(5);
		iLocal_115 = 0;
	}
	Global_1689648 = 0;
	func_186();
	func_185();
}

void func_185()
{
	ENTITY::STOP_ENTITY_ANIM();
}

void func_186()
{
	if (!Local_110.f_176)
	{
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(joaat("s_m_y_marine_01")))
	{
		unk_0x74528AC0906CBABE(joaat("s_m_y_marine_01"));
	}
	if (ENTITY::DOES_ENTITY_EXIST(joaat("lazer")))
	{
		unk_0x74528AC0906CBABE(joaat("lazer"));
	}
	if (ENTITY::DOES_ENTITY_EXIST(joaat("s_m_y_pilot_01")))
	{
		unk_0x74528AC0906CBABE(joaat("s_m_y_pilot_01"));
	}
}

void func_187(struct<21> Param0)
{
	func_191(func_192(Param0), Param0);
	func_189(0, -1, 0);
	NETWORK::RESERVE_NETWORK_MISSION_PEDS(5);
	NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(3);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(&Local_85, 27);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_109, 257);
	WEAPON::GET_WEAPONTYPE_GROUP(0);
	if (!func_188())
	{
		func_184();
	}
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		func_184();
	}
	Global_2540384.f_6635 = 0;
}

int func_188()
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
		if (func_171())
		{
			return 0;
		}
		if (func_169(157))
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

int func_189(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_185();
			}
			else
			{
				return 0;
			}
		}
		if (!func_190())
		{
			if (iParam0 == 0)
			{
				if (!MISC::SET_BIT())
				{
					if (!bParam2)
					{
						func_185();
					}
					else
					{
						return 0;
					}
				}
				if (func_171())
				{
					if (!bParam2)
					{
						func_185();
					}
					else
					{
						return 0;
					}
				}
				if (func_169(157))
				{
					if (!bParam2)
					{
						func_185();
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
					func_185();
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
				func_185();
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
			func_185();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_190()
{
	return Global_1312872;
}

void func_191(int* iParam0, struct<17> Param1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	if (!MISC::SET_BIT())
	{
		func_185();
	}
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(iParam0, 0, Param1.f_16);
}

int func_192(int iParam0)
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

