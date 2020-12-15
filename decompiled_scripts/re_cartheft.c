#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	int iLocal_12 = 0;
	int iLocal_13 = 0;
	var uLocal_14 = 0;
	var uLocal_15 = 0;
	float fLocal_16 = 0f;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	int iLocal_19 = 0;
	char* sLocal_20 = NULL;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	float fLocal_27 = 0f;
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	float fLocal_34 = 0f;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	struct<3> Local_45 = { 0, 0, 0 } ;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	struct<3> Local_50 = { 0, 0, 0 } ;
	float fLocal_51 = 0f;
	float fLocal_52 = 0f;
	float fLocal_53 = 0f;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	bool bLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	bool bLocal_71 = 0;
	bool bLocal_72 = 0;
	bool bLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	bool bLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	char* sLocal_79 = NULL;
	char* sLocal_80 = NULL;
	char* sLocal_81 = NULL;
	char* sLocal_82 = NULL;
	struct<3> Local_83 = { 0, 0, 0 } ;
	struct<3> Local_84 = { 0, 0, 0 } ;
	struct<3> Local_85 = { 0, 0, 0 } ;
	struct<3> Local_86 = { 0, 0, 0 } ;
	struct<3> Local_87 = { 0, 0, 0 } ;
	struct<3> Local_88 = { 0, 0, 0 } ;
	float fLocal_89 = 0f;
	float fLocal_90 = 0f;
	bool bLocal_91 = 0;
	bool bLocal_92 = 0;
	bool bLocal_93 = 0;
	float fLocal_94 = 0f;
	float fLocal_95 = 0f;
	float fLocal_96 = 0f;
	struct<3> Local_97 = { 0, 0, 0 } ;
	struct<3> Local_98 = { 0, 0, 0 } ;
	float fLocal_99 = 0f;
	char* sLocal_100 = NULL;
	char* sLocal_101 = NULL;
	struct<10> Local_102[16];
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	char* sLocal_107 = NULL;
	char* sLocal_108 = NULL;
	char* sLocal_109 = NULL;
	char* sLocal_110 = NULL;
	char* sLocal_111 = NULL;
	char* sLocal_112 = NULL;
	char* sLocal_113 = NULL;
	char[] cLocal_114[8] = 0;
	int iLocal_115 = 0;
	bool bLocal_116 = 0;
	int iLocal_117 = 0;
	int iLocal_118 = 0;
	int iLocal_119 = 0;
	int iLocal_120 = 0;
	int iLocal_121 = 0;
	int iLocal_122 = 0;
	int iLocal_123 = 0;
	int iLocal_124 = 0;
	int iLocal_125 = 0;
	char* sLocal_126 = NULL;
	char* sLocal_127 = NULL;
	char* sLocal_128 = NULL;
	char* sLocal_129 = NULL;
	struct<3> Local_130 = { 0, 0, 0 } ;
	struct<3> Local_131 = { 0, 0, 0 } ;
	int iLocal_132 = 0;
	struct<3> Local_133 = { 0, 0, 0 } ;
	struct<3> Local_134 = { 0, 0, 0 } ;
	struct<3> Local_135 = { 0, 0, 0 } ;
	struct<3> Local_136 = { 0, 0, 0 } ;
	int iLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = -1;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 1000;
	var uLocal_148 = 1000;
	var uLocal_149 = 0;
	bool bLocal_150 = 0;
	struct<18> Local_151 = { 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5 } ;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
#endregion

void __EntryFunction__()
{
	struct<3> Var0;
	bool bVar1;
	
	iLocal_3 = 3;
	iLocal_4 = 1;
	iLocal_5 = 134;
	iLocal_6 = 134;
	iLocal_7 = 1;
	iLocal_8 = 1;
	iLocal_9 = 1;
	iLocal_10 = 134;
	iLocal_11 = 1;
	iLocal_12 = 12;
	iLocal_13 = 12;
	fLocal_16 = 0.001f;
	iLocal_19 = -1;
	sLocal_20 = "NULL";
	fLocal_23 = 0f;
	fLocal_27 = -0.0375f;
	fLocal_28 = 0.17f;
	fLocal_32 = 80f;
	fLocal_33 = 140f;
	fLocal_34 = 180f;
	iLocal_41 = 1;
	iLocal_42 = 65;
	iLocal_43 = 49;
	iLocal_44 = 64;
	fLocal_52 = 10f;
	fLocal_53 = 7f;
	iLocal_54 = 1;
	sLocal_80 = "random@car_thief@waving_ig_1";
	fLocal_99 = 1f;
	iLocal_119 = 786603;
	iLocal_120 = 786469;
	sLocal_127 = "car_returned_peyote";
	sLocal_128 = "girl_car_returned";
	sLocal_129 = "player_car_returned";
	Local_50 = { ScriptParam_151.f_1[0 /*3*/] };
	fLocal_51 = ScriptParam_151.f_17[0];
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(11))
	{
		func_237();
	}
	func_236();
	if (iLocal_121 == 2)
	{
		if (func_235(34))
		{
			ENTITY::STOP_ENTITY_ANIM();
		}
		if (!PED::IS_PED_IN_ANY_POLICE_VEHICLE(unk_0x9B0761B4C3EB8BC7(), 0) && !STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(unk_0x9B0761B4C3EB8BC7()))
		{
			if (!PED::IS_PED_IN_FLYING_VEHICLE(unk_0x9B0761B4C3EB8BC7()))
			{
				Var0 = { NETWORK::NETWORK_ARE_HANDLES_THE_SAME(unk_0x9B0761B4C3EB8BC7(), 1) };
				if (Var0.f_2 > 23f || unk_0x1037B9D45CE6B788(unk_0x9B0761B4C3EB8BC7(), -743.3924f, -2129.82f, 12.07619f, -708.892f, -2160.705f, 19.7035f, 124.5f, 0, 1, 0))
				{
					ENTITY::STOP_ENTITY_ANIM();
				}
			}
		}
	}
	if (func_194(Local_50, 17, iLocal_121, 0, 0))
	{
		func_191(-1);
	}
	else
	{
		ENTITY::STOP_ENTITY_ANIM();
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		func_190();
		func_189(iLocal_59, &uLocal_62);
		if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_ID()))
		{
			PLAYER::_0xC3376F42B1FACCC6(PLAYER::PLAYER_ID());
		}
		func_188();
		if (!func_187())
		{
			if (func_186())
			{
				func_237();
			}
			if (BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
			{
				switch (iLocal_46)
				{
					case 0:
						if (func_169())
						{
							PED::SET_CREATE_RANDOM_COPS(false);
							iLocal_46 = 1;
						}
						break;
					
					case 1:
						if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_72))
						{
							if (((!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(unk_0x9B0761B4C3EB8BC7()) && !STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_71)) && func_168(bLocal_73)) && !func_167(0))
							{
								if (func_166())
								{
									if (func_168(bLocal_76))
									{
										VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(bLocal_76, false);
									}
									func_157(1);
									PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.1f);
									func_152(39, 1);
									func_152(40, 1);
									func_152(41, 1);
									func_152(42, 1);
									func_152(43, 1);
									func_152(44, 1);
									SYSTEM::SETTIMERA(0);
								}
							}
							else
							{
								if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_71))
								{
									TASK::TASK_SMART_FLEE_PED(bLocal_71, unk_0x9B0761B4C3EB8BC7(), 150f, -1, false, false);
									PED::SET_PED_KEEP_TASK(bLocal_71, true);
									SYSTEM::WAIT(0);
								}
								func_237();
							}
						}
						else
						{
							if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_71) && func_168(bLocal_73))
							{
								TASK::TASK_VEHICLE_DRIVE_WANDER(bLocal_71, bLocal_73, 20f, iLocal_119);
								PED::SET_PED_KEEP_TASK(bLocal_71, true);
								SYSTEM::WAIT(0);
							}
							func_120(0);
						}
						break;
				}
			}
			else
			{
				func_237();
			}
		}
		else
		{
			if (STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_72))
			{
				if (Local_102[2 /*10*/].f_7)
				{
					func_119(&Local_102, 2);
				}
			}
			PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
			func_111();
			if (func_168(bLocal_73) && !func_110())
			{
				if (func_108())
				{
					if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_71))
					{
						switch (iLocal_47)
						{
							case 0:
								if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_72))
								{
									if (unk_0xE0B3BC41DDA88DF0(bLocal_72, bLocal_73, 0))
									{
										if (iLocal_121 == 2)
										{
											ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(bLocal_72, true, 1);
											ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(bLocal_73, true, 1);
											TASK::OPEN_SEQUENCE_TASK(&iLocal_74);
											TASK::TASK_VEHICLE_MISSION_PED_TARGET(false, bLocal_73, unk_0x9B0761B4C3EB8BC7(), 8, 30f, iLocal_120, 200f, 10f, false);
											TASK::CLOSE_SEQUENCE_TASK(iLocal_74);
											AUDIO::STOP_SCRIPTED_CONVERSATION(bLocal_72, iLocal_74);
											TASK::CLEAR_SEQUENCE_TASK(&iLocal_74);
										}
										else
										{
											ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(bLocal_72, true, 1);
											TASK::OPEN_SEQUENCE_TASK(&iLocal_74);
											TASK::TASK_VEHICLE_TEMP_ACTION(0, bLocal_73, 30, 1000);
											TASK::TASK_VEHICLE_MISSION_PED_TARGET(false, bLocal_73, unk_0x9B0761B4C3EB8BC7(), 8, 40f, iLocal_120, 200f, 10f, true);
											TASK::CLOSE_SEQUENCE_TASK(iLocal_74);
											AUDIO::STOP_SCRIPTED_CONVERSATION(bLocal_72, iLocal_74);
											TASK::CLEAR_SEQUENCE_TASK(&iLocal_74);
										}
										Local_133 = { ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(bLocal_73, ENTITY::_GET_ENTITY_BONE_ROTATION_LOCAL(bLocal_73, "wheel_lr")) };
										Local_134 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(bLocal_73, Local_133) };
										GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_ENTITY("scr_wheel_burnout", bLocal_73, Local_134 + Vector(-0.5f, -1f, 0f), 0f, 180f, 0f, 0.25f, false, false, false);
										Local_135 = { ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(bLocal_73, ENTITY::_GET_ENTITY_BONE_ROTATION_LOCAL(bLocal_73, "wheel_rr")) };
										Local_136 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(bLocal_73, Local_135) };
										GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_ENTITY("scr_wheel_burnout", bLocal_73, Local_136 + Vector(-0.5f, -1f, 0f), 0f, 180f, 0f, 0.25f, false, false, false);
										SYSTEM::SETTIMERA(0);
										if (!SYSTEM::VMAG(iLocal_60))
										{
											iLocal_60 = func_106(bLocal_73, 1, 0);
										}
										MISC::SET_INSTANCE_PRIORITY_HINT(2);
										iLocal_47 = 1;
									}
									else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(bLocal_73, unk_0x9B0761B4C3EB8BC7(), true))
									{
										if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_72))
										{
											TASK::TASK_SMART_FLEE_PED(bLocal_72, unk_0x9B0761B4C3EB8BC7(), 150f, -1, false, false);
											PED::SET_PED_KEEP_TASK(bLocal_72, true);
											SYSTEM::WAIT(0);
										}
										func_237();
									}
								}
								else
								{
									TASK::TASK_VEHICLE_DRIVE_WANDER(bLocal_71, bLocal_73, 20f, iLocal_119);
									PED::SET_PED_KEEP_TASK(bLocal_71, true);
									SYSTEM::WAIT(0);
									func_120(0);
								}
								break;
							
							case 1:
								if (func_168(bLocal_73))
								{
									if (iLocal_121 == 1)
									{
										if (SYSTEM::TIMERA() < 5000)
										{
											if (SYSTEM::TIMERA() > 2000)
											{
												fLocal_99 = (fLocal_99 + 0.4f);
											}
											else
											{
												fLocal_99 = (fLocal_99 + 0.2f);
											}
											if (fLocal_99 > 30f)
											{
												fLocal_99 = 30f;
											}
											VEHICLE::SET_VEHICLE_FORWARD_SPEED(bLocal_73, fLocal_99);
											bVar1 = unk_0xC2E2CC6CF95AF8A3(NETWORK::NETWORK_ARE_HANDLES_THE_SAME(bLocal_73, 1), 5f, 0, 4);
											if (SYSTEM::VDIST(unk_0x9B0761B4C3EB8BC7(), 0))
											{
												if (func_168(ENTITY::GET_ENTITY_MODEL(unk_0x9B0761B4C3EB8BC7(), 0)))
												{
													if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(ENTITY::GET_ENTITY_MODEL(unk_0x9B0761B4C3EB8BC7(), 0), bLocal_73))
													{
														SYSTEM::SETTIMERA(5000);
													}
												}
												if (func_168(bVar1))
												{
													if (bVar1 != bLocal_73)
													{
														if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(bVar1, bLocal_73))
														{
															SYSTEM::SETTIMERA(5000);
														}
													}
												}
											}
										}
									}
									if (VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(bLocal_73) < 700f)
									{
										func_237();
									}
								}
								func_76();
								if ((((((func_75() || func_74()) || ENTITY::IS_ENTITY_UPSIDEDOWN(bLocal_73)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(bLocal_73, 1, 5000)) || FIRE::IS_ENTITY_ON_FIRE(bLocal_73)) || STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_72)) || !unk_0xE0B3BC41DDA88DF0(bLocal_72, bLocal_73, 0))
								{
									if (AUDIO::IS_AUDIO_SCENE_ACTIVE("RE_CAR_STEAL_SCENE"))
									{
										if (func_168(bLocal_73))
										{
											AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(bLocal_73, 0f);
										}
										AUDIO::STOP_AUDIO_SCENE("RE_CAR_STEAL_SCENE");
									}
									if (SYSTEM::VMAG(iLocal_60))
									{
										unk_0x93370FA10F15BE44(&iLocal_60);
									}
									func_73();
									if (SYSTEM::VMAG(iLocal_59))
									{
										unk_0x93370FA10F15BE44(&iLocal_59);
									}
									ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(bLocal_71);
									VEHICLE::BRING_VEHICLE_TO_HALT(bLocal_73, 50f, 5, false);
									iLocal_61 = func_106(bLocal_73, 0, 0);
									bLocal_93 = SYSTEM::VDIST(NETWORK::NETWORK_ARE_HANDLES_THE_SAME(bLocal_73, 1), NETWORK::NETWORK_ARE_HANDLES_THE_SAME(unk_0x9B0761B4C3EB8BC7(), 1));
									bLocal_91 = SYSTEM::VDIST(NETWORK::NETWORK_ARE_HANDLES_THE_SAME(bLocal_73, 1), NETWORK::NETWORK_ARE_HANDLES_THE_SAME(bLocal_71, 1));
									bLocal_92 = SYSTEM::VDIST(NETWORK::NETWORK_ARE_HANDLES_THE_SAME(unk_0x9B0761B4C3EB8BC7(), 1), NETWORK::NETWORK_ARE_HANDLES_THE_SAME(bLocal_71, 1));
									func_71(&uLocal_138, 0, 0);
									iLocal_47 = 2;
								}
								break;
							
							case 2:
								if (func_168(bLocal_73))
								{
									if (VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(bLocal_73) < 700f)
									{
										func_237();
									}
								}
								if (AUDIO::SET_SCRIPT_UPDATE_DOOR_AUDIO(PLAYER::PLAYER_ID()) > 0)
								{
									func_237();
								}
								if (!PED::IS_PED_IN_ANY_POLICE_VEHICLE(bLocal_72, 0))
								{
									if (!unk_0xE0B3BC41DDA88DF0(bLocal_72, bLocal_73, 0))
									{
										func_70(bLocal_72, &uLocal_63, -1, 0, 0, 0, -1082130432, 0, -1, -1, 1);
									}
								}
								else
								{
									func_69(&uLocal_63);
								}
								if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_72))
								{
									if (!PED::IS_PED_IN_COMBAT(bLocal_72, unk_0x9B0761B4C3EB8BC7()))
									{
										TASK::TASK_COMBAT_PED(bLocal_72, unk_0x9B0761B4C3EB8BC7(), 0, 16);
										unk_0x74528AC0906CBABE(MISC::GET_MODEL_DIMENSIONS(bLocal_72));
									}
								}
								if ((SYSTEM::VDIST(NETWORK::NETWORK_ARE_HANDLES_THE_SAME(bLocal_73, 1), NETWORK::NETWORK_ARE_HANDLES_THE_SAME(unk_0x9B0761B4C3EB8BC7(), 1)) > (bLocal_93 + 220f) || SYSTEM::VDIST(NETWORK::NETWORK_ARE_HANDLES_THE_SAME(bLocal_73, 1), NETWORK::NETWORK_ARE_HANDLES_THE_SAME(bLocal_71, 1)) > (bLocal_91 + 220f)) || SYSTEM::VDIST(NETWORK::NETWORK_ARE_HANDLES_THE_SAME(unk_0x9B0761B4C3EB8BC7(), 1), NETWORK::NETWORK_ARE_HANDLES_THE_SAME(bLocal_71, 1)) > (bLocal_92 + 220f))
								{
									if (unk_0xE0B3BC41DDA88DF0(unk_0x9B0761B4C3EB8BC7(), bLocal_73, 0))
									{
										func_120(0);
									}
									else
									{
										func_237();
									}
								}
								if (SYSTEM::VMAG(iLocal_61))
								{
									if (unk_0xE0B3BC41DDA88DF0(unk_0x9B0761B4C3EB8BC7(), bLocal_73, 0))
									{
										unk_0x93370FA10F15BE44(&iLocal_61);
										iLocal_59 = func_65(bLocal_71, 0, 0);
										func_64(&uLocal_62);
										func_71(&uLocal_138, 0, 0);
										if (!iLocal_56)
										{
											if (iLocal_121 == 1)
											{
												Local_85 = { -2258.759f, 4274.059f, 45.9166f };
											}
											else if (bLocal_57)
											{
												Local_85 = { -483.4162f, -2160.874f, 8.359f };
											}
											else
											{
												Local_85 = { -485.9905f, -2153.542f, 8.1999f };
											}
											if (!CAM::IS_SPHERE_VISIBLE(Local_85, 2f) && !ENTITY::IS_ENTITY_ON_SCREEN(bLocal_71))
											{
												unk_0x03D382CB0B44E2FC(bLocal_71, Local_85, 1, 0, 0, 1);
												ENTITY::SET_ENTITY_HEADING(bLocal_71, fLocal_90);
												iLocal_56 = 1;
											}
										}
										iLocal_48 = 3;
										iLocal_124 = MISC::GET_GAME_TIMER();
									}
									else if (ENTITY::IS_ENTITY_AT_ENTITY(bLocal_73, bLocal_71, 20f, 20f, 7f, false, true, 0))
									{
										func_63();
										if (func_62())
										{
											if (VEHICLE::_0x639431E895B9AA57(bLocal_71, bLocal_73, -1, false, false))
											{
												if (!bLocal_116)
												{
													if (func_47(&Local_102, cLocal_114, sLocal_110, 4, 0, 0, 0))
													{
													}
												}
												TASK::TASK_VEHICLE_DRIVE_WANDER(bLocal_71, bLocal_73, 35f, iLocal_119);
												PED::SET_PED_KEEP_TASK(bLocal_71, true);
												func_120(1);
											}
										}
									}
								}
								else if (SYSTEM::VMAG(iLocal_59))
								{
									if (unk_0xE0B3BC41DDA88DF0(unk_0x9B0761B4C3EB8BC7(), bLocal_73, 0))
									{
										if (ENTITY::IS_ENTITY_AT_ENTITY(unk_0x9B0761B4C3EB8BC7(), bLocal_71, fLocal_52, fLocal_52, fLocal_52, false, true, 0))
										{
											if (func_46(1, 0, 1))
											{
												unk_0x93370FA10F15BE44(&iLocal_59);
												if (iLocal_121 == 1)
												{
													if (func_45(ENTITY::IS_ENTITY_IN_WATER(bLocal_73), 336f, 90f))
													{
														sLocal_126 = "RANDOM@CAR_THEFT_1@MCS_2";
													}
													else
													{
														sLocal_126 = "RANDOM@CAR_THEFT_1@MCS_2";
													}
												}
												else
												{
													sLocal_126 = "RANDOM@CAR_THEFT_1@MCS_3";
												}
												STREAMING::REQUEST_ANIM_DICT(sLocal_126);
												iLocal_48 = 4;
												iLocal_47 = 3;
											}
										}
										else
										{
											func_43(NETWORK::NETWORK_ARE_HANDLES_THE_SAME(bLocal_71, 1), &fLocal_52, &fLocal_53);
										}
									}
									else
									{
										unk_0x93370FA10F15BE44(&iLocal_59);
										iLocal_61 = func_106(bLocal_73, 0, 0);
										iLocal_48 = 0;
									}
								}
								break;
							
							case 3:
								if (iLocal_121 == 1)
								{
									if (func_4())
									{
										if (func_3(bLocal_71))
										{
											PED::SET_PED_RESET_FLAG(bLocal_71, 310, true);
										}
										func_120(1);
									}
								}
								else if (func_4())
								{
									if (func_3(bLocal_71))
									{
										PED::SET_PED_RESET_FLAG(bLocal_71, 310, true);
									}
									func_120(1);
								}
								break;
						}
					}
					else
					{
						if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_72))
						{
							if (unk_0xE0B3BC41DDA88DF0(bLocal_72, bLocal_73, 0))
							{
								TASK::TASK_VEHICLE_MISSION_PED_TARGET(bLocal_72, bLocal_73, unk_0x9B0761B4C3EB8BC7(), 8, 50f, iLocal_120, 10f, 10f, false);
								PED::SET_PED_KEEP_TASK(bLocal_72, true);
								unk_0x74528AC0906CBABE(MISC::GET_MODEL_DIMENSIONS(bLocal_72));
							}
							else
							{
								TASK::TASK_SMART_FLEE_PED(bLocal_72, unk_0x9B0761B4C3EB8BC7(), 150f, -1, false, false);
								PED::SET_PED_KEEP_TASK(bLocal_72, true);
								unk_0x74528AC0906CBABE(MISC::GET_MODEL_DIMENSIONS(bLocal_72));
							}
						}
						SYSTEM::WAIT(0);
						func_237();
					}
				}
				else
				{
					if (iLocal_47 == 1)
					{
						if (func_168(bLocal_73))
						{
							VEHICLE::DELETE_VEHICLE(&bLocal_73);
						}
						if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_72))
						{
							PED::DELETE_PED(&bLocal_72);
						}
					}
					if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_71))
					{
						if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(bLocal_71, sLocal_79, "agitated_idle_a", 3))
						{
							NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(bLocal_71, "waiting", sLocal_79, -2f);
						}
						func_1(bLocal_71, "GENERIC_CURSE_HIGH", 24);
						TASK::OPEN_SEQUENCE_TASK(&iLocal_74);
						HUD::_THEFEED_DISABLE(false, Local_88, 1f, 20000, 40000f, 1056964608);
						TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_STAND_MOBILE", 0, false);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_74);
						AUDIO::STOP_SCRIPTED_CONVERSATION(bLocal_71, iLocal_74);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_74);
					}
					func_237();
				}
			}
			else
			{
				if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_72))
				{
					TASK::TASK_SMART_FLEE_PED(bLocal_72, unk_0x9B0761B4C3EB8BC7(), 150f, -1, false, false);
					PED::SET_PED_KEEP_TASK(bLocal_72, true);
				}
				if (MISC::IS_BIT_SET(bLocal_73))
				{
					VEHICLE::SET_VEHICLE_ENGINE_HEALTH(bLocal_73, 50f);
				}
				func_237();
			}
		}
	}
}

void func_1(bool bParam0, char* sParam1, int iParam2)
{
	AUDIO::_PLAY_AMBIENT_SPEECH1(bParam0, sParam1, func_2(iParam2), 1);
}

int func_2(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			return "SPEECH_PARAMS_STANDARD";
		
		case 1:
			return "SPEECH_PARAMS_ALLOW_REPEAT";
		
		case 2:
			return "SPEECH_PARAMS_BEAT";
		
		case 3:
			return "SPEECH_PARAMS_FORCE";
		
		case 4:
			return "SPEECH_PARAMS_FORCE_FRONTEND";
		
		case 5:
			return "SPEECH_PARAMS_FORCE_NO_REPEAT_FRONTEND";
		
		case 6:
			return "SPEECH_PARAMS_FORCE_NORMAL";
		
		case 7:
			return "SPEECH_PARAMS_FORCE_NORMAL_CLEAR";
		
		case 8:
			return "SPEECH_PARAMS_FORCE_NORMAL_CRITICAL";
		
		case 9:
			return "SPEECH_PARAMS_FORCE_SHOUTED";
		
		case 10:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR";
		
		case 11:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL";
		
		case 12:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY";
		
		case 13:
			return "SPEECH_PARAMS_MEGAPHONE";
		
		case 14:
			return "SPEECH_PARAMS_HELI";
		
		case 15:
			return "SPEECH_PARAMS_FORCE_MEGAPHONE";
		
		case 16:
			return "SPEECH_PARAMS_FORCE_HELI";
		
		case 17:
			return "SPEECH_PARAMS_INTERRUPT";
		
		case 18:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED";
		
		case 19:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CLEAR";
		
		case 20:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CRITICAL";
		
		case 21:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE";
		
		case 22:
			return "SPEECH_PARAMS_INTERRUPT_FRONTEND";
		
		case 23:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE_FRONTEND";
		
		case 24:
			return "SPEECH_PARAMS_ADD_BLIP";
		
		case 25:
			return "SPEECH_PARAMS_ADD_BLIP_ALLOW_REPEAT";
		
		case 26:
			return "SPEECH_PARAMS_ADD_BLIP_FORCE";
		
		case 27:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED";
		
		case 28:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED_FORCE";
		
		case 29:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT";
		
		case 30:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT_FORCE";
		
		case 31:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED";
		
		case 32:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CLEAR";
		
		case 33:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CRITICAL";
		
		case 34:
			return "SPEECH_PARAMS_SHOUTED";
		
		case 35:
			return "SPEECH_PARAMS_SHOUTED_CLEAR";
		
		case 36:
			return "SPEECH_PARAMS_SHOUTED_CRITICAL";
		
		default:
	}
	iVar0 = 0;
	return iVar0;
}

int func_3(bool bParam0)
{
	if (MISC::IS_BIT_SET(bParam0))
	{
		if (!PED::IS_PED_IN_ANY_POLICE_VEHICLE(bParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_4()
{
	struct<3> Var0;
	char* sVar1;
	struct<3> Var2;
	float fVar3;
	
	sVar1 = "chassis";
	func_63();
	if (((!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_71) && !STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(unk_0x9B0761B4C3EB8BC7())) && func_168(bLocal_73)) && STREAMING::HAS_ANIM_DICT_LOADED(sLocal_126))
	{
		switch (iLocal_49)
		{
			case 0:
				if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
				{
					if (func_46(1, 0, 1))
					{
						if (!unk_0xCE990E643CD9D0E5(Global_7551, 11))
						{
							if (!MISC::IS_PC_VERSION(unk_0x9B0761B4C3EB8BC7()))
							{
								func_35(1, 1, 1, 0, 0, 0, 0);
								if (SYSTEM::VDIST(unk_0x9B0761B4C3EB8BC7(), 0))
								{
									unk_0xD289B55B6AADBA10(1);
									while (!func_33(ENTITY::GET_ENTITY_MODEL(unk_0x9B0761B4C3EB8BC7(), 0), fLocal_53, 1, 1056964608, 0, 1, 0))
									{
										unk_0xA86915034F55A3BF();
										SYSTEM::WAIT(0);
									}
									func_33(ENTITY::GET_ENTITY_MODEL(unk_0x9B0761B4C3EB8BC7(), 0), fLocal_53, 0, 1056964608, 0, 1, 0);
								}
								unk_0xA86915034F55A3BF();
								if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_71))
								{
									PED::SET_PED_CAN_RAGDOLL(bLocal_71, false);
								}
								func_31();
								func_24(0);
								unk_0xA86915034F55A3BF();
								iLocal_49 = 1;
							}
						}
					}
				}
				break;
			
			case 1:
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
				VEHICLE::SET_VEHICLE_DOOR_CONTROL(bLocal_73, 0, 0, 0f);
				VEHICLE::SET_VEHICLE_DOOR_LATCHED(bLocal_73, 0, true, true, true);
				unk_0xA86915034F55A3BF();
				if (iLocal_121 == 1)
				{
					if (func_168(bLocal_73))
					{
						if (func_45(ENTITY::IS_ENTITY_IN_WATER(bLocal_73), 336f, 90f))
						{
							Local_84 = { -2254.3f, 4273.361f, 44.9697f };
							fLocal_89 = 336.6557f;
							Local_83 = { -2252.683f, 4274.16f, 45.0612f };
							Local_85 = { -2257.825f, 4269.189f, 44.6334f };
							fLocal_90 = 272.8688f;
							Local_97 = { -2254.588f, 4277.307f, 45.6133f };
							Local_98 = { 6.6248f, 0.0369f, 179.5595f };
						}
						else
						{
							Local_84 = { -2254.223f, 4272.33f, 44.9193f };
							fLocal_89 = 148.0287f;
							Local_85 = { -2255.733f, 4271.32f, 44.8166f };
							fLocal_90 = 179.4774f;
							Local_83 = { -2257.088f, 4268.938f, 44.6456f };
							Local_97 = { -2255.775f, 4274.144f, 46.0666f };
							Local_98 = { 2.8781f, 0.3464f, -146.6097f };
						}
					}
					Var2 = { -2269.34f, 4279.89f, 45.47f };
					fVar3 = 53.23f;
					fLocal_96 = 50f;
					unk_0x03D382CB0B44E2FC(unk_0x9B0761B4C3EB8BC7(), Local_83, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEALTH(unk_0x9B0761B4C3EB8BC7(), joaat("weapon_unarmed"), 1);
					unk_0x03D382CB0B44E2FC(bLocal_71, Local_85, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(bLocal_73, fLocal_89);
					unk_0x03D382CB0B44E2FC(bLocal_73, Local_84, 1, 0, 0, 1);
				}
				else
				{
					if (!func_45(ENTITY::IS_ENTITY_IN_WATER(bLocal_73), 64.6764f, 90f))
					{
						Local_97 = { -478.7095f, -2163.598f, 10.3091f };
						Local_98 = { -7.4391f, 0.0006f, 35.6865f };
						Local_84 = { -484.9581f, -2155.266f, 8.248f };
						fLocal_89 = 243.308f;
						fLocal_96 = 22f;
					}
					else
					{
						Local_97 = { -488.0143f, -2149.419f, 9.9817f };
						Local_98 = { -11.7475f, 0.0006f, -145.0045f };
						Local_84 = { -484.3195f, -2154.188f, 8.2182f };
						fLocal_89 = 64.6764f;
						fLocal_96 = 36.9289f;
					}
					Var2 = { -486.92f, -2169.01f, 8.89f };
					fVar3 = 63.1f;
					unk_0x03D382CB0B44E2FC(bLocal_73, Local_84, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEALTH(unk_0x9B0761B4C3EB8BC7(), joaat("weapon_unarmed"), 1);
					ENTITY::SET_ENTITY_HEADING(bLocal_73, fLocal_89);
				}
				PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_ID(), 0, false);
				if (func_168(bLocal_73))
				{
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(bLocal_73, 5f);
					if (MISC::IS_BIT_SET(bLocal_72))
					{
						if (unk_0xE0B3BC41DDA88DF0(bLocal_72, bLocal_73, 0))
						{
							PED::DELETE_PED(&bLocal_72);
						}
					}
				}
				Local_130 = { 0f, 0f, 0f };
				Local_131 = { 0f, 0f, 0f };
				iLocal_122 = PED::CREATE_SYNCHRONIZED_SCENE(Local_130, Local_131, 2);
				PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_122, bLocal_73, ENTITY::_GET_ENTITY_BONE_ROTATION_LOCAL(bLocal_73, sVar1));
				PED::SET_SYNCHRONIZED_SCENE_ORIGIN(iLocal_122, Local_130, Local_131, 2);
				TASK::TASK_SYNCHRONIZED_SCENE(bLocal_71, iLocal_122, sLocal_126, sLocal_128, 1000f, -2f, 0, 0, 1000f, 0);
				TASK::TASK_SYNCHRONIZED_SCENE(unk_0x9B0761B4C3EB8BC7(), iLocal_122, sLocal_126, sLocal_129, 1000f, -2f, 1024, 0, 1000f, 0);
				iLocal_75 = CAM::CREATE_CAM_WITH_PARAMS("DEFAULT_ANIMATED_CAMERA", Local_97, Local_98, fLocal_96, false, 2);
				CAM::PLAY_SYNCHRONIZED_CAM_ANIM(iLocal_75, iLocal_122, "car_returned_cam", sLocal_126);
				ENTITY::PLAY_ENTITY_ANIM(bLocal_73, sLocal_127, sLocal_126, 1000f, false, false, false, 0f, 262144);
				Local_130 = { NETWORK::NETWORK_ARE_HANDLES_THE_SAME(bLocal_73, 1) };
				Local_131 = { NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(bLocal_73, 2) };
				if (func_168(bLocal_76))
				{
					if (func_23(bLocal_76, Local_84, 1) <= 11f)
					{
						unk_0x03D382CB0B44E2FC(bLocal_76, Var2, 1, 0, 0, 1);
						ENTITY::SET_ENTITY_HEADING(bLocal_76, fVar3);
						VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(bLocal_76, 5f);
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(bLocal_76, true, false);
					}
				}
				MISC::CLEAR_AREA(Local_84, 10f, true, false, false, false);
				SYSTEM::SETTIMERA(0);
				if (iLocal_121 == 2)
				{
					VEHICLE::REQUEST_VEHICLE_ASSET(joaat("rocoto"), 15);
				}
				else
				{
					VEHICLE::REQUEST_VEHICLE_ASSET(joaat("peyote"), 15);
				}
				FIRE::STOP_FIRE_IN_RANGE(Local_84, 15f);
				CAM::SET_CAM_ACTIVE(iLocal_75, true);
				CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
				iLocal_49 = 3;
				STREAMING::_0xA76359FC80B2438E(1f);
				break;
			
			case 3:
				unk_0xA86915034F55A3BF();
				if (func_20())
				{
					iLocal_49 = 4;
				}
				if (iLocal_121 == 1)
				{
					if (SYSTEM::TIMERA() > 1500 && !bLocal_150)
					{
						if (func_47(&Local_102, cLocal_114, sLocal_101, 4, 0, 0, 0))
						{
							iLocal_49 = 4;
						}
					}
				}
				else if (PED::DETACH_SYNCHRONIZED_SCENE(iLocal_122) && !bLocal_150)
				{
					if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_122) >= 0.2f)
					{
						if (func_47(&Local_102, cLocal_114, sLocal_101, 4, 0, 0, 0))
						{
							iLocal_58 = 0;
							iLocal_49 = 4;
						}
					}
				}
				STREAMING::_0xA76359FC80B2438E(1f);
				break;
			
			case 4:
				unk_0xA86915034F55A3BF();
				if (iLocal_121 == 2)
				{
					if (!func_19())
					{
						if (iLocal_58 == 0)
						{
							if (func_47(&Local_102, cLocal_114, "RECT2_REWARD", 4, 0, 0, 0))
							{
								iLocal_58 = 1;
							}
						}
					}
				}
				STREAMING::_0xA76359FC80B2438E(1f);
				if (iLocal_121 == 1)
				{
					if (PED::DETACH_SYNCHRONIZED_SCENE(iLocal_122))
					{
						if (iLocal_132 == 0)
						{
							if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_122) >= 0.83f)
							{
								HUD::HIDE_HUD_AND_RADAR_THIS_FRAME(unk_0x9B0761B4C3EB8BC7());
								TASK::TASK_PLAY_ANIM(unk_0x9B0761B4C3EB8BC7(), sLocal_126, sLocal_129, 1000f, -2f, -1, 1048576, ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_122), false, false, false);
								ENTITY::FREEZE_ENTITY_POSITION(unk_0x9B0761B4C3EB8BC7(), true, 0);
								iLocal_132 = 1;
							}
						}
						if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_71))
						{
							if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_122) >= 0.83f)
							{
								if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(bLocal_71, sLocal_126, sLocal_128, 2))
								{
									ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(bLocal_71, -1000f, false);
									if (!SYSTEM::VDIST(bLocal_71, 0))
									{
										if (func_168(bLocal_73))
										{
											PED::SET_PED_INTO_VEHICLE(bLocal_71, bLocal_73, -1);
											PED::SET_PED_RESET_FLAG(bLocal_71, 310, true);
										}
									}
									ENTITY::FREEZE_ENTITY_POSITION(bLocal_71, true, 0);
								}
								else
								{
									PED::SET_PED_RESET_FLAG(bLocal_71, 310, true);
								}
							}
						}
					}
				}
				else if (PED::DETACH_SYNCHRONIZED_SCENE(iLocal_122))
				{
					if (iLocal_132 == 0)
					{
						if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_122) >= 0.86f)
						{
							HUD::HIDE_HUD_AND_RADAR_THIS_FRAME(unk_0x9B0761B4C3EB8BC7());
							TASK::TASK_PLAY_ANIM(unk_0x9B0761B4C3EB8BC7(), sLocal_126, sLocal_129, 1000f, -2f, -1, 1048576, ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_122), false, false, false);
							ENTITY::FREEZE_ENTITY_POSITION(unk_0x9B0761B4C3EB8BC7(), true, 0);
							iLocal_132 = 1;
						}
					}
					if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_71))
					{
						if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_122) > 0.847f)
						{
							if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(bLocal_71, sLocal_126, sLocal_128, 2))
							{
								ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(bLocal_71, -1000f, false);
								if (!SYSTEM::VDIST(bLocal_71, 0))
								{
									if (func_168(bLocal_73))
									{
										PED::SET_PED_INTO_VEHICLE(bLocal_71, bLocal_73, -1);
										PED::SET_PED_RESET_FLAG(bLocal_71, 310, true);
									}
								}
								ENTITY::FREEZE_ENTITY_POSITION(bLocal_71, true, 0);
							}
							else
							{
								PED::SET_PED_RESET_FLAG(bLocal_71, 310, true);
							}
						}
					}
				}
				if (((PED::DETACH_SYNCHRONIZED_SCENE(iLocal_122) && ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_122) >= 0.99f) || !PED::DETACH_SYNCHRONIZED_SCENE(iLocal_122)) || func_20())
				{
					if (!PED::IS_PED_IN_ANY_POLICE_VEHICLE(bLocal_73, 0) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(bLocal_73, sLocal_126, sLocal_127, 3))
					{
						ENTITY::SET_ENTITY_ANIM_CURRENT_TIME(bLocal_73, sLocal_126, sLocal_127, 1f);
					}
					if (PED::DETACH_SYNCHRONIZED_SCENE(iLocal_122))
					{
						PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_122, 1f);
					}
					if (bLocal_150)
					{
						Var0 = { unk_0xD7D25254A712E758(sLocal_126, sLocal_129, Local_130, Local_131, 1f, 2) };
						MISC::GET_GROUND_Z_FOR_3D_COORD(Var0, &(Var0.f_2), false, false);
						unk_0x03D382CB0B44E2FC(unk_0x9B0761B4C3EB8BC7(), Var0, 1, 0, 0, 1);
						Var0 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION(sLocal_126, sLocal_129, Local_130, Local_131, 1f, 2) };
						ENTITY::SET_ENTITY_HEADING(unk_0x9B0761B4C3EB8BC7(), Var0.f_2);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
						unk_0x4C4FC7841A5FB983(0);
					}
					PED::FORCE_PED_MOTION_STATE(unk_0x9B0761B4C3EB8BC7(), -1871534317, true, 0, true);
					if (!SYSTEM::VDIST(bLocal_71, 0))
					{
						if (func_168(bLocal_73))
						{
							PED::SET_PED_INTO_VEHICLE(bLocal_71, bLocal_73, -1);
							PED::SET_PED_RESET_FLAG(bLocal_71, 310, true);
						}
					}
					if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_71))
					{
						if (SYSTEM::VDIST(bLocal_71, 0))
						{
							if (func_168(bLocal_73))
							{
								VEHICLE::SET_VEHICLE_DOOR_CONTROL(bLocal_73, 0, 0, 0f);
								VEHICLE::SET_VEHICLE_DOOR_LATCHED(bLocal_73, 0, true, true, true);
								iLocal_125 = MISC::GET_GAME_TIMER();
								iLocal_49 = 5;
							}
						}
					}
				}
				break;
			
			case 5:
				unk_0xA86915034F55A3BF();
				if ((MISC::GET_GAME_TIMER() - iLocal_125) > 100)
				{
					if (func_3(bLocal_71) && func_168(bLocal_73))
					{
						TASK::OPEN_SEQUENCE_TASK(&iLocal_74);
						TASK::TASK_VEHICLE_TEMP_ACTION(0, bLocal_73, 9, 1000);
						TASK::TASK_VEHICLE_DRIVE_WANDER(false, bLocal_73, 25f, iLocal_119);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_74);
						AUDIO::STOP_SCRIPTED_CONVERSATION(bLocal_71, iLocal_74);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_74);
						PED::SET_PED_RESET_FLAG(bLocal_71, 310, true);
					}
					func_35(0, 1, 1, 0, 0, 0, 0);
					if (bLocal_150)
					{
						if (CAM::DOES_CAM_EXIST(iLocal_75))
						{
							CAM::SET_CAM_ACTIVE(iLocal_75, false);
							CAM::DESTROY_CAM(iLocal_75, false);
						}
						CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
						SYSTEM::WAIT(750);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
						unk_0x4C4FC7841A5FB983(0);
						func_18(500, 1);
					}
					else
					{
						CAM::_RENDER_FIRST_PERSON_CAM(false, 0f, 3, 0);
						CAM::SET_CAM_ACTIVE(iLocal_75, false);
					}
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
					func_17(&bLocal_73);
					func_5(func_10(), 4, 5);
					return 1;
				}
				else if (func_3(bLocal_71))
				{
					PED::SET_PED_RESET_FLAG(bLocal_71, 310, true);
				}
				break;
			}
	}
	return 0;
}

void func_5(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
			Global_111858.f_2359.f_539.f_2247[iParam1 /*4*/][iParam0] = (Global_111858.f_2359.f_539.f_2247[iParam1 /*4*/][iParam0] + iParam2);
			break;
		
		case 3:
			iVar1 = 11771;
			switch (iParam1)
			{
				case 1:
					iVar1 = 72;
					break;
				
				case 3:
					iVar1 = 74;
					break;
				
				case 2:
					iVar1 = 73;
					break;
				
				case 4:
					iVar1 = 75;
					break;
				
				case 5:
					iVar1 = 76;
					break;
				
				case 6:
					iVar1 = 77;
					break;
				
				case 7:
					iVar1 = 78;
					break;
			}
			if (iVar1 != 11771)
			{
				iVar0 = func_9(iVar1, -1, 0);
				iVar0 = (iVar0 + iParam2);
				if (iVar0 > 100)
				{
					iVar0 = 100;
				}
				func_6(iVar1, iVar0, -1, 1, 0);
			}
			break;
	}
}

void func_6(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2551832[iParam0 /*3*/][func_7(iParam2)];
	if (iVar0 != 0)
	{
		NETWORK::NETWORK_HAS_SOCIAL_CLUB_ACCOUNT(iVar0, iParam1, iParam3);
	}
}

int func_7(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_8();
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

int func_8()
{
	return Global_1312763;
}

int func_9(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 11771)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2551832[iParam0 /*3*/][func_7(iParam1)];
		if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_10()
{
	func_11();
	return Global_111858.f_2359.f_539.f_4321;
}

void func_11()
{
	int iVar0;
	
	if (MISC::IS_BIT_SET(unk_0x9B0761B4C3EB8BC7()))
	{
		if (func_15(Global_111858.f_2359.f_539.f_4321) != MISC::GET_MODEL_DIMENSIONS(unk_0x9B0761B4C3EB8BC7()))
		{
			iVar0 = func_14(unk_0x9B0761B4C3EB8BC7());
			if (func_13(iVar0) && (!func_12(14) || Global_110809))
			{
				if (Global_111858.f_2359.f_539.f_4321 != iVar0 && func_13(Global_111858.f_2359.f_539.f_4321))
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

bool func_12(int iParam0)
{
	return Global_41631 == iParam0;
}

bool func_13(int iParam0)
{
	return iParam0 < 3;
}

int func_14(bool bParam0)
{
	int iVar0;
	void fVar1;
	
	if (MISC::IS_BIT_SET(iParam0))
	{
		fVar1 = MISC::GET_MODEL_DIMENSIONS(bParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_15(iVar0) == fVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_15(int iParam0)
{
	if (func_13(iParam0))
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

void func_17(bool bParam0)
{
	if (MISC::IS_BIT_SET(*bParam0))
	{
		PED::IS_PED_IN_ANY_POLICE_VEHICLE(*bParam0, 0);
		if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(*bParam0) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*bParam0, true))
		{
			STREAMING::REMOVE_ANIM_DICT(bParam0);
		}
	}
}

void func_18(int iParam0, bool bParam1)
{
	if (PED::REMOVE_SCENARIO_BLOCKING_AREA() || unk_0x5DA78AD6801A0523())
	{
		if (!CAM::IS_SCREEN_FADING_IN())
		{
			CAM::DO_SCREEN_FADE_IN(iParam0);
		}
	}
	if (bParam1)
	{
		while (!GRAPHICS::DRAW_SCALEFORM_MOVIE())
		{
			SYSTEM::WAIT(0);
		}
	}
}

int func_19()
{
	if (Global_21005 != 0 || ENTITY::IS_ENTITY_DEAD())
	{
		return 1;
	}
	return 0;
}

int func_20()
{
	int iVar0;
	
	iVar0 = joaat("peyote");
	if (iLocal_121 == 2)
	{
		iVar0 = joaat("rocoto");
	}
	if (func_21(1000))
	{
		if (VEHICLE::HAS_VEHICLE_ASSET_LOADED(iVar0))
		{
			CAM::SET_CAM_ACTIVE(iLocal_75, false);
			CAM::DO_SCREEN_FADE_OUT(500);
			while (unk_0x5DA78AD6801A0523())
			{
				unk_0xA86915034F55A3BF();
				SYSTEM::WAIT(0);
			}
			bLocal_150 = true;
			return 1;
		}
	}
	if (PED::REMOVE_SCENARIO_BLOCKING_AREA())
	{
		if (VEHICLE::HAS_VEHICLE_ASSET_LOADED(iVar0))
		{
			bLocal_150 = true;
			return 1;
		}
	}
	return 0;
}

int func_21(int iParam0)
{
	if (GRAPHICS::DRAW_SCALEFORM_MOVIE())
	{
		if ((MISC::GET_GAME_TIMER() - Global_28) > iParam0)
		{
			Global_27 = MISC::GET_GAME_TIMER();
		}
		Global_28 = MISC::GET_GAME_TIMER();
		if ((MISC::GET_GAME_TIMER() - Global_27) > iParam0)
		{
			if (func_22())
			{
				Global_27 = MISC::GET_GAME_TIMER();
				return 1;
			}
		}
	}
	return 0;
}

int func_22()
{
	if (HUD::DISABLE_FRONTEND_THIS_FRAME())
	{
		return 0;
	}
	if (PAD::IS_DISABLED_CONTROL_PRESSED(0, 18) || PAD::IS_DISABLED_CONTROL_PRESSED(2, 18))
	{
		return 1;
	}
	return 0;
}

float func_23(bool bParam0, struct<3> Param1, int iParam2)
{
	struct<3> Var0;
	
	if (!PED::IS_PED_IN_ANY_POLICE_VEHICLE(bParam0, 0))
	{
		Var0 = { NETWORK::NETWORK_ARE_HANDLES_THE_SAME(bParam0, 1) };
	}
	else
	{
		Var0 = { NETWORK::NETWORK_ARE_HANDLES_THE_SAME(bParam0, 0) };
	}
	return HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Var0, Param1, iParam2);
}

void func_24(int iParam0)
{
	if (func_30())
	{
		return;
	}
	if (!Global_19681.f_1 == 1)
	{
		if (func_29(0))
		{
			func_25(iParam0);
		}
		unk_0xBE20AB8238688965(&Global_7552, 2);
	}
}

void func_25(int iParam0)
{
	if (func_30())
	{
		return;
	}
	if (Global_19864)
	{
		if (func_28())
		{
			func_27(1, 1);
		}
		else
		{
			func_27(0, 0);
		}
	}
	if (Global_19681.f_1 == 10 || Global_19681.f_1 == 9)
	{
		unk_0xBE20AB8238688965(&Global_7552, 16);
	}
	if (unk_0x6B12213471F330A3())
	{
		unk_0xBE4122AC23440E7D(0);
	}
	Global_21005 = 5;
	if (iParam0 == 1)
	{
		unk_0xBE20AB8238688965(&Global_7551, 30);
	}
	else
	{
		VEHICLE::IS_VEHICLE_DRIVEABLE(&Global_7551, 30);
	}
	if (!func_26())
	{
		Global_19681.f_1 = 3;
	}
}

int func_26()
{
	if (Global_19681.f_1 == 1 || Global_19681.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_27(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_29(0))
		{
			Global_19864 = 1;
			if (bParam1)
			{
				unk_0x1F1B1269BB6217F7(&Global_19618);
			}
			Global_19609 = { Global_19627[Global_19626 /*3*/] };
			AUDIO::SKIP_TO_NEXT_SCRIPTED_CONVERSATION_LINE(Global_19609);
		}
	}
	else if (Global_19864 == 1)
	{
		Global_19864 = 0;
		Global_19609 = { Global_19634[Global_19626 /*3*/] };
		if (bParam1)
		{
			AUDIO::SKIP_TO_NEXT_SCRIPTED_CONVERSATION_LINE(Global_19618);
		}
		else
		{
			AUDIO::SKIP_TO_NEXT_SCRIPTED_CONVERSATION_LINE(Global_19609);
		}
	}
}

bool func_28()
{
	return unk_0xCE990E643CD9D0E5(Global_1689730, 5);
}

int func_29(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_19681.f_1 > 3)
		{
			if (unk_0xCE990E643CD9D0E5(Global_7551, 14))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	if (INTERIOR::GET_INTERIOR_AT_COORDS(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_19681.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

bool func_30()
{
	return unk_0xCE990E643CD9D0E5(Global_1689730, 19);
}

void func_31()
{
	Global_19871 = 0;
	func_32();
}

void func_32()
{
	SYSTEM::ROUND();
	Global_22016 = 0;
	if (ENTITY::IS_ENTITY_DEAD())
	{
		unk_0xBE4122AC23440E7D(0);
		Global_21005 = 6;
	}
}

int func_33(bool bParam0, float fParam1, int iParam2, float fParam3, bool bParam4, bool bParam5, bool bParam6)
{
	MONEY::NETWORK_MONEY_CAN_BET(0, 71, true);
	MONEY::NETWORK_MONEY_CAN_BET(0, 72, true);
	MONEY::NETWORK_MONEY_CAN_BET(0, 76, true);
	MONEY::NETWORK_MONEY_CAN_BET(0, 73, true);
	MONEY::NETWORK_MONEY_CAN_BET(0, 59, true);
	MONEY::NETWORK_MONEY_CAN_BET(0, 60, true);
	if (bParam5)
	{
		MONEY::NETWORK_MONEY_CAN_BET(0, 75, true);
	}
	MONEY::NETWORK_MONEY_CAN_BET(0, 80, true);
	if (!bParam6)
	{
		MONEY::NETWORK_MONEY_CAN_BET(0, 69, true);
		MONEY::NETWORK_MONEY_CAN_BET(0, 70, true);
		MONEY::NETWORK_MONEY_CAN_BET(0, 68, true);
	}
	MONEY::NETWORK_MONEY_CAN_BET(0, 74, true);
	MONEY::NETWORK_MONEY_CAN_BET(0, 86, true);
	MONEY::NETWORK_MONEY_CAN_BET(0, 81, true);
	MONEY::NETWORK_MONEY_CAN_BET(0, 82, true);
	MONEY::NETWORK_MONEY_CAN_BET(0, 138, true);
	MONEY::NETWORK_MONEY_CAN_BET(0, 136, true);
	MONEY::NETWORK_MONEY_CAN_BET(0, 114, true);
	MONEY::NETWORK_MONEY_CAN_BET(0, 107, true);
	MONEY::NETWORK_MONEY_CAN_BET(0, 110, true);
	MONEY::NETWORK_MONEY_CAN_BET(0, 89, true);
	MONEY::NETWORK_MONEY_CAN_BET(0, 89, true);
	MONEY::NETWORK_MONEY_CAN_BET(0, 87, true);
	MONEY::NETWORK_MONEY_CAN_BET(0, 88, true);
	MONEY::NETWORK_MONEY_CAN_BET(0, 113, true);
	MONEY::NETWORK_MONEY_CAN_BET(0, 115, true);
	MONEY::NETWORK_MONEY_CAN_BET(0, 116, true);
	MONEY::NETWORK_MONEY_CAN_BET(0, 117, true);
	MONEY::NETWORK_MONEY_CAN_BET(0, 118, true);
	MONEY::NETWORK_MONEY_CAN_BET(0, 119, true);
	MONEY::NETWORK_MONEY_CAN_BET(0, 352, true);
	MONEY::NETWORK_MONEY_CAN_BET(0, 131, true);
	MONEY::NETWORK_MONEY_CAN_BET(0, 132, true);
	MONEY::NETWORK_MONEY_CAN_BET(0, 123, true);
	MONEY::NETWORK_MONEY_CAN_BET(0, 126, true);
	MONEY::NETWORK_MONEY_CAN_BET(0, 129, true);
	MONEY::NETWORK_MONEY_CAN_BET(0, 130, true);
	MONEY::NETWORK_MONEY_CAN_BET(0, 133, true);
	MONEY::NETWORK_MONEY_CAN_BET(0, 134, true);
	CAM::_0x17FCA7199A530203();
	func_34(bParam0);
	if ((MISC::GET_GAME_TIMER() - Global_29) > 500)
	{
		VEHICLE::BRING_VEHICLE_TO_HALT(bParam0, fParam1, iParam2, bParam4);
	}
	Global_29 = MISC::GET_GAME_TIMER();
	if (!PED::IS_PED_IN_ANY_POLICE_VEHICLE(bParam0, 0))
	{
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(ENTITY::IS_ENTITY_IN_ANGLED_AREA(bParam0)) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

void func_34(bool bParam0)
{
	if (!PED::IS_PED_IN_ANY_POLICE_VEHICLE(bParam0, 0))
	{
		if (VEHICLE::_GET_HAS_ROCKET_BOOST(bParam0))
		{
			if (VEHICLE::_IS_VEHICLE_ROCKET_BOOST_ACTIVE(bParam0))
			{
				VEHICLE::_SET_VEHICLE_ROCKET_BOOST_ACTIVE(bParam0, false);
			}
		}
	}
}

void func_35(bool bParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (bParam0)
	{
		PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(PLAYER::PLAYER_ID(), 0);
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), true);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), true);
		func_42(1);
		HUD::THEFEED_FLUSH_QUEUE();
		HUD::THEFEED_PAUSE();
		if (Global_19681.f_1 > 3 && !bParam6)
		{
			if (unk_0x6B12213471F330A3())
			{
				unk_0xBE4122AC23440E7D(0);
			}
			if (!func_26())
			{
				Global_19681.f_1 = 3;
			}
			Global_21005 = 5;
		}
		func_41(1, bParam3, iParam2, 0);
		Global_61723 = 1;
		Global_74033 = 1;
		Global_76831 = 1;
	}
	else
	{
		func_42(0);
		HUD::THEFEED_RESUME();
		Global_61723 = 0;
		if (bParam1)
		{
			GRAPHICS::_0x03FC694AE06C5A20();
		}
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), false);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), false);
		func_41(0, bParam3, iParam2, 0);
		if (MISC::SET_BIT())
		{
			if (((((!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(unk_0x9B0761B4C3EB8BC7()) && !func_39(PLAYER::PLAYER_ID())) && !func_37(PLAYER::PLAYER_ID(), 0)) && !func_36()) && !bParam4) && !bParam5)
			{
				ENTITY::SET_ENTITY_INVINCIBLE(unk_0x9B0761B4C3EB8BC7(), false);
			}
		}
		else if (((!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(unk_0x9B0761B4C3EB8BC7()) && !func_39(PLAYER::PLAYER_ID())) && !bParam4) && !bParam5)
		{
			ENTITY::SET_ENTITY_INVINCIBLE(unk_0x9B0761B4C3EB8BC7(), false);
		}
		Global_76831 = 0;
	}
}

bool func_36()
{
	return unk_0xCE990E643CD9D0E5(Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_39.f_18, 14);
}

bool func_37(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_38(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1590682[iParam0 /*883*/].f_211 == 8;
	}
	if (iParam1 == 1)
	{
		if (AUDIO::PLAY_STREAM_FROM_VEHICLE(iParam0))
		{
			bVar0 = unk_0x6CC163E30ECE0790(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_38(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_8();
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

int func_39(int iParam0)
{
	if (func_37(iParam0, 0))
	{
		return 1;
	}
	if (func_40())
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

bool func_40()
{
	return unk_0xCE990E643CD9D0E5(Global_2359302, 3);
}

int func_41(bool bParam0, bool bParam1, var uParam2, bool bParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (ENTITY::GET_ENTITY_HEADING())
	{
		if (CUTSCENE::_0xA0FE76168A189DDB() != bParam0 && uParam2)
		{
			CUTSCENE::_0x20746F7B1032A3C7(bParam0, bParam1, true, bParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_42(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xBE20AB8238688965(&Global_7551, 13);
	}
	else
	{
		VEHICLE::IS_VEHICLE_DRIVEABLE(&Global_7551, 13);
	}
}

void func_43(struct<3> Param0, float fParam1, float fParam2)
{
	bool bVar0;
	struct<3> Var1;
	float fVar2;
	
	bVar0 = false;
	if (SYSTEM::VDIST(unk_0x9B0761B4C3EB8BC7(), 0))
	{
		Var1 = { NETWORK::NETWORK_ARE_HANDLES_THE_SAME(unk_0x9B0761B4C3EB8BC7(), 1) - Param0 };
		fVar2 = unk_0x9075769DD4F148B7(Var1.x, Var1.f_1);
		if (func_44(ENTITY::GET_ENTITY_MODEL(unk_0x9B0761B4C3EB8BC7(), 0), fVar2, 15f))
		{
			bVar0 = true;
		}
		Var1 = { Param0 - NETWORK::NETWORK_ARE_HANDLES_THE_SAME(unk_0x9B0761B4C3EB8BC7(), 1) };
		fVar2 = unk_0x9075769DD4F148B7(Var1.x, Var1.f_1);
		if (func_44(ENTITY::GET_ENTITY_MODEL(unk_0x9B0761B4C3EB8BC7(), 0), fVar2, 15f))
		{
			bVar0 = true;
		}
	}
	if (bVar0)
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(unk_0x9B0761B4C3EB8BC7()) > 30f)
		{
			*fParam1 = (6f * 4f);
		}
		else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(unk_0x9B0761B4C3EB8BC7()) > 20f)
		{
			*fParam1 = (6f * 3f);
		}
		else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(unk_0x9B0761B4C3EB8BC7()) > 10f)
		{
			*fParam1 = (6f * 2f);
		}
		else
		{
			*fParam1 = 6f;
		}
		*fParam2 = ((*fParam1 / 1.33f) - 1f);
	}
	else
	{
		*fParam1 = 6f;
		*fParam2 = ((*fParam1 / 1.33f) - 1f);
	}
}

int func_44(bool bParam0, float fParam1, float fParam2)
{
	bool bVar0;
	float fVar1;
	float fVar2;
	
	if (ENTITY::GET_ENTITY_COORDS(bParam0, false))
	{
		bVar0 = ENTITY::IS_ENTITY_IN_WATER(bParam0);
		fVar2 = (fParam1 - fParam2);
		if (fVar2 < 0f)
		{
			fVar2 = (fVar2 + 360f);
		}
		fVar1 = (fParam1 + fParam2);
		if (fVar1 >= 360f)
		{
			fVar1 = (fVar1 - 360f);
		}
		if (fVar1 > fVar2)
		{
			if (bVar0 < fVar1 && bVar0 > fVar2)
			{
				return 1;
			}
		}
		else if (bVar0 < fVar1 || bVar0 > fVar2)
		{
			return 1;
		}
	}
	return 0;
}

int func_45(bool bParam0, float fParam1, float fParam2)
{
	float fVar0;
	float fVar1;
	
	fVar1 = (fParam1 - fParam2);
	if (fVar1 < 0f)
	{
		fVar1 = (fVar1 + 360f);
	}
	fVar0 = (fParam1 + fParam2);
	if (fVar0 >= 360f)
	{
		fVar0 = (fVar0 - 360f);
	}
	if (fVar0 > fVar1)
	{
		if (bParam0 < fVar0 && bParam0 > fVar1)
		{
			return 1;
		}
	}
	else if (bParam0 < fVar0 || bParam0 > fVar1)
	{
		return 1;
	}
	return 0;
}

int func_46(bool bParam0, bool bParam1, bool bParam2)
{
	bool bVar0;
	
	if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
	{
		return 0;
	}
	if (bParam0)
	{
		if (PED::IS_PED_IN_ANY_POLICE_VEHICLE(unk_0x9B0761B4C3EB8BC7(), 0))
		{
			return 0;
		}
	}
	bVar0 = false;
	if (SYSTEM::VDIST(unk_0x9B0761B4C3EB8BC7(), 0))
	{
		if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(unk_0x9B0761B4C3EB8BC7()))
		{
			return 0;
		}
		bVar0 = ENTITY::GET_ENTITY_MODEL(unk_0x9B0761B4C3EB8BC7(), 0);
		if (bParam0)
		{
			if (PED::IS_PED_IN_ANY_POLICE_VEHICLE(bVar0, 0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!PED::IS_PED_IN_ANY_POLICE_VEHICLE(bVar0, 0))
			{
				if (MISC::IS_MINIGAME_IN_PROGRESS(bVar0, -1, 0) != unk_0x9B0761B4C3EB8BC7())
				{
					return 0;
				}
			}
		}
		if (!PED::IS_PED_IN_ANY_POLICE_VEHICLE(bVar0, 0))
		{
			if (ENTITY::GET_ENTITY_UPRIGHT_VALUE(bVar0) < 0.95f || ENTITY::GET_ENTITY_UPRIGHT_VALUE(bVar0) > 1.011f)
			{
				return 0;
			}
		}
	}
	else if (bParam1)
	{
		return 0;
	}
	if (!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (!PLAYER::CAN_PLAYER_START_MISSION(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	return 1;
}

bool func_47(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_61(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_48(sParam2, iParam3, 0);
}

int func_48(char* sParam0, int iParam1, bool bParam2)
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
					func_60();
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
		if (func_59(8, -1))
		{
			return 0;
		}
		Global_21081 = { Global_21075 };
		func_58();
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
				func_57();
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
				if (func_56())
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
			if (func_26())
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
			func_55();
			Global_21015 = bParam2;
		}
		Global_21007 = iParam1;
		StringCopy(&Global_20624, sParam0, 24);
		Global_19871 = 0;
		func_54();
		func_49();
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
		func_60();
	}
	return 0;
}

void func_49()
{
	if (!func_50())
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

int func_50()
{
	if (!Global_262145.f_28160)
	{
		return 0;
	}
	if (!Global_76833)
	{
		return 0;
	}
	if (PLAYER::PLAYER_ID() == func_53())
	{
		return 0;
	}
	if (func_51(PLAYER::PLAYER_ID()))
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

bool func_51(int iParam0)
{
	return func_52(iParam0, 20);
}

bool func_52(int iParam0, int iParam1)
{
	return unk_0xCE990E643CD9D0E5(Global_1630317[iParam0 /*595*/].f_11.f_4, iParam1);
}

int func_53()
{
	return -1;
}

void func_54()
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

void func_55()
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

int func_56()
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

void func_57()
{
	if (func_12(14))
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
		Global_19681 = func_10();
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

void func_58()
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

bool func_59(int iParam0, int iParam1)
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

void func_60()
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

void func_61(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
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

int func_62()
{
	if (STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_72))
	{
		return 1;
	}
	else if (func_168(bLocal_73))
	{
		if (!ENTITY::IS_ENTITY_AT_ENTITY(bLocal_72, bLocal_73, 10f, 10f, 10f, false, true, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_63()
{
	float fVar0;
	int iVar1;
	bool bVar2;
	
	if (func_168(bLocal_73))
	{
		fVar0 = VEHICLE::GET_VEHICLE_ENGINE_HEALTH(bLocal_73);
		if (fVar0 > 0f && fVar0 < 650f)
		{
			bVar2 = true;
		}
		else if (fVar0 > 650f && fVar0 < 950f)
		{
		}
		else
		{
			iVar1 = 1;
		}
		if (iVar1 && VEHICLE::ARE_ALL_VEHICLE_WINDOWS_INTACT(bLocal_73))
		{
			sLocal_101 = sLocal_113;
		}
		else if (bVar2)
		{
			sLocal_101 = sLocal_112;
		}
		else
		{
			sLocal_101 = sLocal_111;
		}
	}
}

void func_64(var uParam0)
{
	*uParam0 = -99;
}

int func_65(bool bParam0, bool bParam1, int iParam2)
{
	iParam2 = iParam2;
	return func_66(bParam0, bParam1, 145);
}

int func_66(bool bParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_67(bParam0, !bParam1, 0);
	if ((iParam2 != 145 && SYSTEM::VMAG(iVar0)) && unk_0x3030AE9FCF1BC243(&(Global_1848[iParam2 /*29*/].f_3)))
	{
		PED::IS_PED_IN_PARACHUTE_FREE_FALL(iVar0, &(Global_1848[iParam2 /*29*/].f_3));
	}
	return iVar0;
}

bool func_67(bool bParam0, bool bParam1, bool bParam2)
{
	bool bVar0;
	
	if (!MISC::IS_BIT_SET(bParam0))
	{
		return 0;
	}
	bVar0 = TASK::IS_PED_SPRINTING(bParam0);
	if (ENTITY::IS_ENTITY_A_VEHICLE(bParam0))
	{
		HUD::SET_BLIP_SCALE(bVar0, func_68(MISC::SET_BIT(), 1f, 1f));
		if (!bParam2)
		{
			HUD::SET_BLIP_AS_FRIENDLY(bVar0, bParam1);
		}
		else
		{
			HUD::SET_BLIP_COLOUR(bVar0, 2);
		}
	}
	else if (ENTITY::IS_ENTITY_A_PED(bParam0))
	{
		HUD::SET_BLIP_SCALE(bVar0, func_68(MISC::SET_BIT(), 0.7f, 0.7f));
		HUD::SET_BLIP_AS_FRIENDLY(bVar0, bParam1);
	}
	else if (ENTITY::IS_ENTITY_AN_OBJECT(bParam0))
	{
		HUD::SET_BLIP_SCALE(bVar0, func_68(MISC::SET_BIT(), 0.7f, 0.7f));
	}
	return bVar0;
}

float func_68(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_69(var uParam0)
{
	bool bVar0;
	struct<8> Var1;
	
	if (SYSTEM::VMAG(*uParam0))
	{
		unk_0x93370FA10F15BE44(uParam0);
		bVar0 = true;
	}
	if (SYSTEM::VMAG(uParam0->f_1))
	{
		unk_0x93370FA10F15BE44(&(uParam0->f_1));
		bVar0 = true;
	}
	if (MISC::IS_BIT_SET(uParam0->f_7))
	{
		if (!PED::IS_PED_IN_ANY_POLICE_VEHICLE(uParam0->f_7, 0))
		{
			if (HUD::DOES_PED_HAVE_AI_BLIP(uParam0->f_7))
			{
				HUD::SET_PED_HAS_AI_BLIP(uParam0->f_7, false);
			}
		}
		bVar0 = true;
	}
	if (bVar0)
	{
		*uParam0 = { Var1 };
	}
}

int func_70(bool bParam0, var uParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, float fParam6, int iParam7, int iParam8, int iParam9, bool bParam10)
{
	if (iParam3 == 0)
	{
		iParam3 = PLAYER::GET_PLAYER_INDEX();
	}
	if (fParam6 < 0f)
	{
		fParam6 = 100f;
	}
	if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bParam0))
	{
		if (!HUD::DOES_PED_HAVE_AI_BLIP(bParam0))
		{
			if (iParam8 == -1)
			{
				HUD::SET_PED_HAS_AI_BLIP(bParam0, true);
			}
			else
			{
				HUD::_SET_PED_HAS_AI_BLIP_WITH_COLOR(bParam0, true, iParam8);
			}
			uParam1->f_7 = bParam0;
			HUD::SET_PED_AI_BLIP_GANG_ID(bParam0, iParam2);
			HUD::SET_PED_AI_BLIP_NOTICE_RANGE(bParam0, fParam6);
			if (SYSTEM::VMAG(*uParam1))
			{
				HUD::SET_BLIP_PRIORITY(*uParam1, 7);
			}
		}
		if (!iParam9 == -1)
		{
			HUD::_SET_PED_AI_BLIP_SPRITE(bParam0, iParam9);
		}
		HUD::SET_PED_AI_BLIP_FORCED_ON(bParam0, bParam4);
		HUD::SET_PED_AI_BLIP_HAS_CONE(bParam0, bParam5);
		*uParam1 = HUD::_GET_AI_BLIP_2(bParam0);
		if (!iParam9 == -1)
		{
			if (SYSTEM::VMAG(*uParam1))
			{
				if (!iParam8 == -1)
				{
					HUD::SET_BLIP_COLOUR(*uParam1, iParam8);
				}
				if (!CAM::IS_SCREEN_FADED_OUT(iParam7))
				{
					HUD::BEGIN_TEXT_COMMAND_SET_BLIP_NAME("STRING");
					if (bParam10)
					{
						unk_0x9EFD301E3BE8324E(iParam7);
					}
					else
					{
						HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(iParam7);
					}
					HUD::END_TEXT_COMMAND_SET_BLIP_NAME(*uParam1);
				}
				HUD::SET_BLIP_PRIORITY(*uParam1, 7);
			}
		}
		if (!unk_0xCE990E643CD9D0E5(uParam1->f_6, 2))
		{
			if (SYSTEM::VMAG(*uParam1))
			{
				unk_0xBE20AB8238688965(&(uParam1->f_6), 2);
			}
		}
		if (SYSTEM::VDIST(bParam0, 0))
		{
			uParam1->f_1 = HUD::_GET_AI_BLIP(bParam0);
			if (!unk_0xCE990E643CD9D0E5(uParam1->f_6, 3))
			{
				if (SYSTEM::VMAG(uParam1->f_1))
				{
					if (!iParam8 == -1)
					{
						HUD::SET_BLIP_COLOUR(uParam1->f_1, iParam8);
					}
					if (!CAM::IS_SCREEN_FADED_OUT(iParam7))
					{
						HUD::BEGIN_TEXT_COMMAND_SET_BLIP_NAME("STRING");
						if (bParam10)
						{
							unk_0x9EFD301E3BE8324E(iParam7);
						}
						else
						{
							HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(iParam7);
						}
						HUD::END_TEXT_COMMAND_SET_BLIP_NAME(uParam1->f_1);
					}
					HUD::SET_BLIP_PRIORITY(uParam1->f_1, 7);
					unk_0xBE20AB8238688965(&(uParam1->f_6), 3);
				}
			}
			else if (!SYSTEM::VMAG(uParam1->f_1))
			{
				uParam1->f_1 = 0;
				VEHICLE::IS_VEHICLE_DRIVEABLE(&(uParam1->f_6), 3);
			}
		}
		else if (SYSTEM::VMAG(uParam1->f_1))
		{
			uParam1->f_1 = 0;
			VEHICLE::IS_VEHICLE_DRIVEABLE(&(uParam1->f_6), 3);
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_71(var uParam0, bool bParam1, bool bParam2)
{
	bool bVar0;
	
	if (MISC::SET_BIT())
	{
		if (unk_0xCE990E643CD9D0E5(Global_2540384.f_4655, 26))
		{
			return;
		}
	}
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::STOP_GAMEPLAY_HINT(bParam2);
		GRAPHICS::ANIMPOSTFX_STOP("FocusIn");
		AUDIO::STOP_AUDIO_SCENE("HINT_CAM_SCENE");
		if (uParam0->f_11)
		{
			GRAPHICS::ANIMPOSTFX_PLAY("FocusOut", 0, false);
			DATAFILE::UGC_UPDATE_CONTENT(-1, "FocusOut", "HintCamSounds", 1);
			uParam0->f_11 = 0;
		}
	}
	CAM::SET_CINEMATIC_BUTTON_ACTIVE(true);
	uParam0->f_1 = 0;
	*uParam0 = 0;
	uParam0->f_2 = -1;
	uParam0->f_8 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	bVar0 = bParam1;
	if (AUDIO::PRELOAD_SCRIPT_CONVERSATION(bVar0))
	{
		if (!MISC::SET_BIT())
		{
			bVar0 = "CMN_HINT";
		}
		else
		{
			bVar0 = "FM_IHELP_HNT";
		}
	}
	if (!AUDIO::PRELOAD_SCRIPT_CONVERSATION(uParam0->f_3))
	{
		if (func_72(uParam0->f_3))
		{
			unk_0xD289B55B6AADBA10(1);
		}
	}
	if (!AUDIO::PRELOAD_SCRIPT_CONVERSATION(bVar0))
	{
		if (func_72(bVar0))
		{
			unk_0xD289B55B6AADBA10(1);
		}
	}
}

bool func_72(bool bParam0)
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(bParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_73()
{
	if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_72))
	{
		PED::SET_PED_COMBAT_ATTRIBUTES(bLocal_72, 2, false);
		PED::SET_PED_COMBAT_ATTRIBUTES(bLocal_72, 6, false);
		PED::SET_PED_COMBAT_ATTRIBUTES(bLocal_72, 3, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(bLocal_72, 1, false);
		TASK::TASK_COMBAT_PED(bLocal_72, unk_0x9B0761B4C3EB8BC7(), 0, 16);
		PED::_0x2208438012482A1A(bLocal_72, 0);
		unk_0x74528AC0906CBABE(MISC::GET_MODEL_DIMENSIONS(bLocal_72));
	}
	else
	{
		unk_0x74528AC0906CBABE(MISC::GET_MODEL_DIMENSIONS(bLocal_72));
	}
	if (func_168(bLocal_73))
	{
		VEHICLE::SET_VEHICLE_DOORS_LOCKED(bLocal_73, 1);
	}
}

int func_74()
{
	if (func_168(bLocal_73))
	{
		if (ENTITY::IS_ENTITY_AT_ENTITY(unk_0x9B0761B4C3EB8BC7(), bLocal_73, 40f, 40f, 10f, false, true, 0))
		{
			if (iLocal_77)
			{
				if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_72))
				{
					if (!iLocal_118)
					{
						if (!ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(bLocal_73))
						{
							TASK::TASK_DRIVE_BY(bLocal_72, unk_0x9B0761B4C3EB8BC7(), 0, 0f, 0f, 0f, 40f, 100, true, -753768974);
							iLocal_118 = 1;
						}
					}
					if (MISC::GET_GAME_TIMER() > iLocal_123 + 7000)
					{
						if (ENTITY::IS_ENTITY_AT_ENTITY(unk_0x9B0761B4C3EB8BC7(), bLocal_73, 20f, 20f, 10f, false, true, 0))
						{
							if (func_47(&Local_102, cLocal_114, sLocal_109, 4, 0, 0, 0))
							{
								iLocal_123 = MISC::GET_GAME_TIMER();
							}
						}
					}
					ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(bLocal_73);
					WEAPON::CLEAR_ENTITY_LAST_WEAPON_DAMAGE(bLocal_73);
					iLocal_77 = 0;
				}
			}
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(bLocal_73, unk_0x9B0761B4C3EB8BC7(), true))
			{
				if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_72))
				{
					func_47(&Local_102, cLocal_114, sLocal_109, 4, 0, 0, 0);
				}
				iLocal_78++;
				iLocal_77 = 1;
			}
			if (iLocal_78 > 10)
			{
				return 1;
			}
		}
		else
		{
			iLocal_118 = 0;
			iLocal_77 = 0;
		}
	}
	return 0;
}

int func_75()
{
	if (func_168(bLocal_73))
	{
		if (((VEHICLE::IS_VEHICLE_TYRE_BURST(bLocal_73, 0, false) || VEHICLE::IS_VEHICLE_TYRE_BURST(bLocal_73, 1, false)) || VEHICLE::IS_VEHICLE_TYRE_BURST(bLocal_73, 4, false)) || VEHICLE::IS_VEHICLE_TYRE_BURST(bLocal_73, 5, false))
		{
			return 1;
		}
	}
	return 0;
}

void func_76()
{
	if (func_168(bLocal_73) && SYSTEM::VMAG(iLocal_60))
	{
		func_77(&uLocal_138, bLocal_73, 0, 0, 1, 1, 1);
	}
}

void func_77(var uParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	func_78(uParam0, bParam1, 0f, 0f, 0f, bParam2, iParam3, bParam4, iParam5, bParam6);
}

void func_78(var uParam0, bool bParam1, struct<3> Param2, bool bParam3, int iParam4, bool bParam5, var uParam6, bool bParam7)
{
	func_79(uParam0, bParam1, Param2, bParam3, iParam4, bParam5, uParam6, bParam7);
}

void func_79(var uParam0, bool bParam1, struct<3> Param2, bool bParam3, int iParam4, bool bParam5, var uParam6, bool bParam7)
{
	if (!SYSTEM::VDIST(unk_0x9B0761B4C3EB8BC7(), 1))
	{
		func_71(uParam0, 0, 0);
	}
	uParam0->f_6 = 2;
	func_80(uParam0, bParam1, Param2, bParam3, iParam4, bParam5, uParam6, bParam7);
}

void func_80(var uParam0, bool bParam1, struct<3> Param2, bool bParam3, int iParam4, bool bParam5, var uParam6, bool bParam7)
{
	bool bVar0;
	int iVar1;
	
	if (uParam0->f_1 && CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		if (MISC::GET_GAME_TIMER() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	bVar0 = bParam3;
	if (AUDIO::PRELOAD_SCRIPT_CONVERSATION(bVar0))
	{
		if (!MISC::SET_BIT())
		{
			bVar0 = "CMN_HINT";
		}
		else
		{
			bVar0 = "FM_IHELP_HNT";
		}
	}
	if (func_72(bVar0))
	{
		func_105();
	}
	if (func_104(bParam1) && ENTITY::IS_ENTITY_VISIBLE(bParam1))
	{
		iVar1 = 0;
		if (ENTITY::IS_ENTITY_A_PED(bParam1))
		{
			PED::REQUEST_PED_VISIBILITY_TRACKING(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(bParam1));
			PED::REQUEST_PED_VEHICLE_VISIBILITY_TRACKING(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(bParam1), true);
			if (PED::IS_TRACKED_PED_VISIBLE(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(bParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (ENTITY::IS_ENTITY_A_VEHICLE(bParam1))
		{
			VEHICLE::TRACK_VEHICLE_VISIBILITY(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(bParam1));
			if (VEHICLE::IS_VEHICLE_VISIBLE(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(bParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (ENTITY::IS_ENTITY_AN_OBJECT(bParam1))
		{
			OBJECT::TRACK_OBJECT_VISIBILITY(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(bParam1));
			if (OBJECT::IS_OBJECT_VISIBLE(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(bParam1)))
			{
				iVar1 = 1;
			}
		}
		if (!CAM::IS_GAMEPLAY_HINT_ACTIVE())
		{
			if (func_99(uParam0, bParam5, bParam7, 0))
			{
				func_95(uParam0, bParam1, Param2, iParam4);
			}
			if (*uParam0)
			{
				*uParam0 = 0;
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_85(bVar0))
				{
					if ((AUDIO::PRELOAD_SCRIPT_CONVERSATION(uParam0->f_3) && !AUDIO::PRELOAD_SCRIPT_CONVERSATION(bVar0)) && SYSTEM::VDIST(unk_0x9B0761B4C3EB8BC7(), 0))
					{
						if ((iVar1 && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && uParam6)
						{
							if (!func_72(bVar0))
							{
								func_84(bVar0, -1);
								uParam0->f_3 = bVar0;
								if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS("CMN_HINT", bVar0))
								{
									func_83(1);
								}
							}
						}
					}
				}
			}
			else if (func_85(bVar0))
			{
				if (AUDIO::PRELOAD_SCRIPT_CONVERSATION(uParam0->f_3) && !AUDIO::PRELOAD_SCRIPT_CONVERSATION(bVar0))
				{
					if (((ENTITY::IS_ENTITY_ON_SCREEN(bParam1) && iVar1) && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && uParam6)
					{
						if (!func_72(bVar0))
						{
							func_84(bVar0, -1);
							uParam0->f_3 = bVar0;
							if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS("CMN_HINT", bVar0))
							{
								func_83(1);
							}
						}
					}
				}
			}
		}
		else
		{
			if (!AUDIO::PRELOAD_SCRIPT_CONVERSATION(bParam3))
			{
				if (func_72(bParam3))
				{
					unk_0xD289B55B6AADBA10(1);
				}
			}
			if (SYSTEM::VDIST(unk_0x9B0761B4C3EB8BC7(), 1))
			{
				if (PED::IS_PED_IN_ANY_BOAT(unk_0x9B0761B4C3EB8BC7()))
				{
					if (CAM::_0xEE778F8C7E1142E2(3) == 3 || CAM::_0xEE778F8C7E1142E2(3) == 4)
					{
						func_71(uParam0, bVar0, 1);
					}
				}
				else if (PED::IS_PED_IN_ANY_HELI(unk_0x9B0761B4C3EB8BC7()))
				{
					if (CAM::_0xEE778F8C7E1142E2(6) == 3 || CAM::_0xEE778F8C7E1142E2(6) == 4)
					{
						func_71(uParam0, bVar0, 1);
					}
				}
				else if (PED::IS_PED_IN_ANY_PLANE(unk_0x9B0761B4C3EB8BC7()))
				{
					if (CAM::_0xEE778F8C7E1142E2(4) == 3 || CAM::_0xEE778F8C7E1142E2(4) == 4)
					{
						func_71(uParam0, bVar0, 1);
					}
				}
				else if (PED::IS_PED_IN_ANY_SUB(unk_0x9B0761B4C3EB8BC7()))
				{
					if (CAM::_0xEE778F8C7E1142E2(5) == 3 || CAM::_0xEE778F8C7E1142E2(5) == 4)
					{
						func_71(uParam0, bVar0, 1);
					}
				}
				else if (PED::IS_PED_ON_ANY_BIKE(unk_0x9B0761B4C3EB8BC7()))
				{
					if (CAM::_0xEE778F8C7E1142E2(2) == 3 || CAM::_0xEE778F8C7E1142E2(2) == 4)
					{
						func_71(uParam0, bVar0, 1);
					}
				}
				else if (CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 3 || CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 4)
				{
					func_71(uParam0, bVar0, 1);
				}
			}
			if (!func_99(uParam0, bParam5, bParam7, 0))
			{
				if ((!*uParam0 && !uParam0->f_1) && !func_82(uParam0))
				{
					func_81(uParam0);
				}
			}
		}
	}
	else
	{
		func_71(uParam0, bVar0, 0);
	}
}

void func_81(var uParam0)
{
	if (func_104(unk_0x9B0761B4C3EB8BC7()))
	{
		TASK::TASK_CLEAR_LOOK_AT(unk_0x9B0761B4C3EB8BC7());
	}
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::SET_CINEMATIC_BUTTON_ACTIVE(true);
		CAM::STOP_GAMEPLAY_HINT(false);
		AUDIO::STOP_AUDIO_SCENE("HINT_CAM_SCENE");
		GRAPHICS::ANIMPOSTFX_STOP("FocusIn");
		if (uParam0->f_11)
		{
			GRAPHICS::ANIMPOSTFX_PLAY("FocusOut", 0, false);
			DATAFILE::UGC_UPDATE_CONTENT(-1, "FocusOut", "HintCamSounds", 1);
			uParam0->f_11 = 0;
		}
	}
	uParam0->f_2 = -1;
	*uParam0 = 1;
}

int func_82(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_2 > 0)
	{
		iVar0 = (uParam0->f_10 / 2);
		if (uParam0->f_2 + iVar0) > MISC::GET_GAME_TIMER()
		{
			return 1;
		}
	}
	return 0;
}

int func_83(bool bParam0)
{
	switch (Global_41631)
	{
		case 0:
		case 3:
			if (bParam0)
			{
				Global_111858.f_10045.f_100++;
			}
			return Global_111858.f_10045.f_100;
			break;
		
		case 4:
			if (bParam0)
			{
				Global_111858.f_10045.f_101++;
			}
			return Global_111858.f_10045.f_101;
			break;
		
		case 5:
		case 15:
			if (bParam0)
			{
				Global_111858.f_10045.f_102++;
			}
			return Global_111858.f_10045.f_102;
			break;
		
		default:
			break;
	}
	return 3;
}

void func_84(bool bParam0, int iParam1)
{
	unk_0x17751E107423AFE9(bParam0);
	FILES::GET_DLC_VEHICLE_FLAGS(0, 0, 1, iParam1);
}

int func_85(bool bParam0)
{
	if (!func_86(1, 1, 0))
	{
		if ((!CAM::IS_SCREEN_FADED_OUT(bParam0) && func_72(bParam0)) || func_72("CMN_HINT"))
		{
			unk_0xD289B55B6AADBA10(1);
		}
		return 0;
	}
	switch (Global_41631)
	{
		case 0:
		case 3:
			if (func_83(0) < 3)
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_83(0) < 1)
			{
				return 1;
			}
			break;
		
		case 5:
		case 15:
			if (func_83(0) < 1)
			{
				return 1;
			}
			break;
		
		default:
			break;
	}
	return 0;
}

int func_86(bool bParam0, bool bParam1, bool bParam2)
{
	bool bVar0;
	int iVar1;
	
	if (bParam0)
	{
		if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
	}
	if (bParam2)
	{
		return 1;
	}
	if (LOCALIZATION::GET_CURRENT_LANGUAGE())
	{
		return 0;
	}
	if (func_29(0))
	{
		return 0;
	}
	if (func_94())
	{
		return 0;
	}
	if (GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU())
	{
		return 0;
	}
	if (Global_74030)
	{
		return 0;
	}
	if (INTERIOR::GET_INTERIOR_AT_COORDS(joaat("appinternet")) > 0)
	{
		return 0;
	}
	if (Global_58898)
	{
		return 0;
	}
	if (bParam1)
	{
		if (SYSTEM::VDIST(unk_0x9B0761B4C3EB8BC7(), 1))
		{
			if (PED::IS_PED_IN_ANY_BOAT(unk_0x9B0761B4C3EB8BC7()))
			{
				if (CAM::_0xEE778F8C7E1142E2(3) == 3 || CAM::_0xEE778F8C7E1142E2(3) == 4)
				{
					return 0;
				}
			}
			else if (PED::IS_PED_IN_ANY_HELI(unk_0x9B0761B4C3EB8BC7()))
			{
				if (CAM::_0xEE778F8C7E1142E2(6) == 3 || CAM::_0xEE778F8C7E1142E2(6) == 4)
				{
					return 0;
				}
			}
			else if (PED::IS_PED_IN_ANY_PLANE(unk_0x9B0761B4C3EB8BC7()))
			{
				if (CAM::_0xEE778F8C7E1142E2(4) == 3 || CAM::_0xEE778F8C7E1142E2(4) == 4)
				{
					return 0;
				}
			}
			else if (PED::IS_PED_IN_ANY_SUB(unk_0x9B0761B4C3EB8BC7()))
			{
				if (CAM::_0xEE778F8C7E1142E2(5) == 3 || CAM::_0xEE778F8C7E1142E2(5) == 4)
				{
					return 0;
				}
			}
			else if (PED::IS_PED_ON_ANY_BIKE(unk_0x9B0761B4C3EB8BC7()))
			{
				if (CAM::_0xEE778F8C7E1142E2(2) == 3 || CAM::_0xEE778F8C7E1142E2(2) == 4)
				{
					return 0;
				}
			}
			else if (CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 3 || CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 4)
			{
				return 0;
			}
			if (CAM::IS_GAMEPLAY_CAM_LOOKING_BEHIND())
			{
				return 0;
			}
		}
	}
	if ((func_93() || func_92(Global_4456448.f_129348)) || func_91())
	{
		if (SYSTEM::VDIST(unk_0x9B0761B4C3EB8BC7(), 0))
		{
			bVar0 = ENTITY::GET_ENTITY_MODEL(unk_0x9B0761B4C3EB8BC7(), 0);
			iVar1 = func_90(unk_0x9B0761B4C3EB8BC7(), 0);
			if (((VEHICLE::IS_TURRET_SEAT(bVar0, iVar1) || (MISC::GET_MODEL_DIMENSIONS(bVar0) == joaat("apc") && iVar1 != -1)) || (MISC::GET_MODEL_DIMENSIONS(bVar0) == joaat("akula") && iVar1 != -1)) || (((MISC::GET_MODEL_DIMENSIONS(bVar0) == joaat("riot2") && iVar1 == 0) && func_89(bVar0, 10)) && unk_0x7F8B14CBFB9813E5(bVar0, 10) != -1))
			{
				return 0;
			}
		}
	}
	if (Global_1688745)
	{
		return 0;
	}
	if (func_87(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	return 1;
}

int func_87(int iParam0)
{
	if (iParam0 != func_53())
	{
		if (func_88(iParam0, 1, 1))
		{
			return Global_2425869[iParam0 /*443*/].f_314.f_6 != -1;
		}
		else if ((Global_1312896 && iParam0 == PLAYER::PLAYER_ID()) && func_88(iParam0, 1, 0))
		{
			return Global_2425869[iParam0 /*443*/].f_314.f_6 != -1;
		}
	}
	return 0;
}

int func_88(int iParam0, bool bParam1, bool bParam2)
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

int func_89(bool bParam0, int iParam1)
{
	if (ENTITY::GET_ENTITY_COORDS(bParam0, false))
	{
		if (VEHICLE::GET_NUM_MOD_KITS(bParam0) > 0)
		{
			switch (iParam1)
			{
				case 17:
				case 18:
				case 19:
				case 20:
				case 21:
				case 22:
					return 1;
					break;
				
				default:
					if (VEHICLE::GET_NUM_VEHICLE_MODS(bParam0, iParam1) > 0)
					{
						return 1;
					}
					break;
				}
			}
	}
	return 0;
}

int func_90(bool bParam0, int iParam1)
{
	bool bVar0;
	void fVar1;
	int iVar2;
	int iVar3;
	
	if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bParam0))
	{
		if (SYSTEM::VDIST(bParam0, iParam1))
		{
			bVar0 = ENTITY::GET_ENTITY_MODEL(bParam0, iParam1);
			if (MISC::IS_BIT_SET(bVar0))
			{
				fVar1 = RECORDING::_STOP_RECORDING_THIS_FRAME(MISC::GET_MODEL_DIMENSIONS(bVar0));
				if (fVar1 == 1)
				{
					iVar3 = -1;
					return iVar3;
				}
				iVar2 = 0;
				while (iVar2 < fVar1)
				{
					iVar3 = (iVar2 - 1);
					if (!SYSTEM::VDIST2(bVar0, iVar3, 0))
					{
						if (MISC::IS_MINIGAME_IN_PROGRESS(bVar0, iVar3, 0) == bParam0)
						{
							return iVar3;
						}
					}
					iVar2++;
				}
			}
		}
	}
	return iVar3;
}

var func_91()
{
	return Global_2451787.f_18;
}

bool func_92(int iParam0)
{
	return iParam0 == 51;
}

var func_93()
{
	return Global_2451787.f_17;
}

bool func_94()
{
	return MISC::GET_GAME_TIMER() <= Global_22550.f_5878 + 100;
}

void func_95(var uParam0, bool bParam1, struct<3> Param2, int iParam3)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (Global_1319178 == 1)
	{
		return;
	}
	if (PED::IS_PED_IN_ANY_POLICE_VEHICLE(bParam1, 0))
	{
		func_71(uParam0, 0, 0);
	}
	if (func_98(Param2, 0f, 0f, 0f, 0))
	{
		if (ENTITY::IS_ENTITY_A_PED(bParam1))
		{
			bVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(bParam1);
			if (!SYSTEM::VDIST(bVar0, 0))
			{
				if (PLAYER::SET_PLAYER_WANTED_LEVEL(bVar0))
				{
					if (!func_96())
					{
						Param2 = { 0f, 0f, 1f };
					}
				}
				else if (PED::IS_PED_MALE(bVar0))
				{
					Param2 = { 0f, 0f, 1f };
				}
			}
		}
	}
	CAM::SET_CINEMATIC_BUTTON_ACTIVE(false);
	iVar1 = uParam0->f_9;
	iVar2 = uParam0->f_10;
	if (iParam3 == 1726668277)
	{
		if (iVar1 < 1500)
		{
			iVar1 = 1500;
		}
		if (iVar2 < 1500)
		{
			iVar2 = 1500;
		}
	}
	CAM::SET_GAMEPLAY_ENTITY_HINT(bParam1, Param2, true, -1, iVar1, iVar2, iParam3);
	iVar3 = 2048;
	iVar4 = 3;
	TASK::TASK_LOOK_AT_ENTITY(unk_0x9B0761B4C3EB8BC7(), bParam1, -1, iVar3, iVar4);
	GRAPHICS::ANIMPOSTFX_PLAY("FocusIn", 0, false);
	AUDIO::START_AUDIO_SCENE("HINT_CAM_SCENE");
	DATAFILE::UGC_UPDATE_CONTENT(-1, "FocusIn", "HintCamSounds", 1);
	uParam0->f_11 = 1;
	uParam0->f_8 = MISC::GET_GAME_TIMER();
	uParam0->f_1 = 1;
	*uParam0 = 0;
}

bool func_96()
{
	return func_97(PLAYER::PLAYER_ID());
}

int func_97(int iParam0)
{
	if (MISC::GET_MODEL_DIMENSIONS(PLAYER::GET_PLAYER_PED(iParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

bool func_98(struct<3> Param0, struct<3> Param1, bool bParam2)
{
	if (bParam2)
	{
		return (Param0.x == Param1.x && Param0.f_1 == Param1.f_1);
	}
	return ((Param0.x == Param1.x && Param0.f_1 == Param1.f_1) && Param0.f_2 == Param1.f_2);
}

int func_99(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (uParam0->f_1)
	{
		if (MISC::GET_GAME_TIMER() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	switch (uParam0->f_5)
	{
		case 0:
			uParam0->f_7 = 0;
			if (uParam0->f_6 == 0)
			{
				if (SYSTEM::VDIST(unk_0x9B0761B4C3EB8BC7(), 1))
				{
					if (func_103(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = MISC::GET_GAME_TIMER();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_102(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = MISC::GET_GAME_TIMER();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_102(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = MISC::GET_GAME_TIMER();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_103(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = MISC::GET_GAME_TIMER();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			if (func_82(uParam0))
			{
				uParam0->f_7 = 1;
				uParam0->f_5 = 4;
			}
			break;
		
		case 1:
			if ((MISC::GET_GAME_TIMER() - uParam0->f_4) <= 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (SYSTEM::VDIST(unk_0x9B0761B4C3EB8BC7(), 1))
					{
						if (!func_103(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = MISC::GET_GAME_TIMER();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_102(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = MISC::GET_GAME_TIMER();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_102(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = MISC::GET_GAME_TIMER();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_103(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = MISC::GET_GAME_TIMER();
						uParam0->f_5 = 3;
					}
				}
			}
			else
			{
				uParam0->f_5 = 2;
			}
			break;
		
		case 2:
			if (uParam0->f_6 == 0)
			{
				if (SYSTEM::VDIST(unk_0x9B0761B4C3EB8BC7(), 1))
				{
					if (!func_103(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (!func_102(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (!func_102(bParam1, bParam2, bParam3) || SYSTEM::VDIST(unk_0x9B0761B4C3EB8BC7(), 1))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (!SYSTEM::VDIST(unk_0x9B0761B4C3EB8BC7(), 1) || TASK::GET_IS_TASK_ACTIVE(unk_0x9B0761B4C3EB8BC7(), 2))
				{
					uParam0->f_5 = 0;
				}
				else if (!func_103(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			break;
		
		case 3:
			if ((MISC::GET_GAME_TIMER() - uParam0->f_4) > 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (SYSTEM::VDIST(unk_0x9B0761B4C3EB8BC7(), 1))
					{
						if (func_101(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0;
						}
					}
					else if (func_100(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (SYSTEM::VDIST(unk_0x9B0761B4C3EB8BC7(), 1) || func_100(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!SYSTEM::VDIST(unk_0x9B0761B4C3EB8BC7(), 1) || TASK::GET_IS_TASK_ACTIVE(unk_0x9B0761B4C3EB8BC7(), 2))
					{
						uParam0->f_5 = 0;
					}
					else if (func_101(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (!func_82(uParam0))
			{
				uParam0->f_5 = 0;
			}
			break;
	}
	if (!func_86(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}
	if (uParam0->f_7)
	{
		func_105();
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_100(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_86(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!SYSTEM::VDIST(unk_0x9B0761B4C3EB8BC7(), 0))
	{
		if (!PLAYER::IS_PLAYER_TARGETTING_ANYTHING(PLAYER::PLAYER_ID()))
		{
			MONEY::NETWORK_MONEY_CAN_BET(0, 140, true);
			MONEY::NETWORK_MONEY_CAN_BET(0, 80, true);
			if (HUD::_0x66E7CB63C97B7D20(0, 80))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_101(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_86(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (SYSTEM::VDIST(unk_0x9B0761B4C3EB8BC7(), 0))
	{
		MONEY::NETWORK_MONEY_CAN_BET(0, 80, true);
		if (CAM::IS_FOLLOW_VEHICLE_CAM_ACTIVE())
		{
			if (HUD::_0x66E7CB63C97B7D20(0, 80))
			{
				CAM::SET_CINEMATIC_BUTTON_ACTIVE(false);
				return 1;
			}
		}
	}
	return 0;
}

int func_102(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_86(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!SYSTEM::VDIST(unk_0x9B0761B4C3EB8BC7(), 0))
	{
		if (!PLAYER::IS_PLAYER_TARGETTING_ANYTHING(PLAYER::PLAYER_ID()))
		{
			MONEY::NETWORK_MONEY_CAN_BET(0, 140, true);
			MONEY::NETWORK_MONEY_CAN_BET(0, 80, true);
			if (unk_0xB9C0D9B37277621D(0, 80) && MISC::GET_GAME_TIMER() > Global_116)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_103(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_86(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (SYSTEM::VDIST(unk_0x9B0761B4C3EB8BC7(), 0))
	{
		MONEY::NETWORK_MONEY_CAN_BET(0, 80, true);
		if (CAM::IS_FOLLOW_VEHICLE_CAM_ACTIVE())
		{
			if (unk_0xB9C0D9B37277621D(0, 80) && MISC::GET_GAME_TIMER() > Global_116)
			{
				CAM::SET_CINEMATIC_BUTTON_ACTIVE(false);
				return 1;
			}
		}
	}
	return 0;
}

int func_104(bool bParam0)
{
	if (MISC::IS_BIT_SET(bParam0))
	{
		if (ENTITY::IS_ENTITY_A_VEHICLE(bParam0))
		{
			if (ENTITY::GET_ENTITY_COORDS(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(bParam0), false))
			{
				return 1;
			}
		}
		else if (ENTITY::IS_ENTITY_A_PED(bParam0))
		{
			if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(bParam0)))
			{
				return 1;
			}
		}
		else if (ENTITY::IS_ENTITY_AN_OBJECT(bParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_105()
{
	unk_0xBE20AB8238688965(&Global_7552, 4);
}

int func_106(bool bParam0, bool bParam1, int iParam2)
{
	iParam2 = iParam2;
	return func_107(bParam0, bParam1, 0);
}

bool func_107(bool bParam0, bool bParam1, bool bParam2)
{
	return func_67(bParam0, !bParam1, bParam2);
}

int func_108()
{
	float fVar0;
	
	fVar0 = 300f;
	if (iLocal_121 == 1)
	{
		fVar0 = 220f;
	}
	if (func_168(bLocal_73))
	{
		func_109(iLocal_60, bLocal_73, fVar0, 1061158912, 0);
		if (ENTITY::IS_ENTITY_AT_ENTITY(unk_0x9B0761B4C3EB8BC7(), bLocal_73, fVar0, fVar0, 100f, false, true, 0))
		{
			return 1;
		}
		else if (!ENTITY::IS_ENTITY_OCCLUDED(bLocal_73))
		{
			return 1;
		}
	}
	return 0;
}

void func_109(int iParam0, bool bParam1, float fParam2, float fParam3, int iParam4)
{
	void fVar0;
	void fVar1;
	float fVar2;
	
	fVar2 = (fParam2 * fParam3);
	if (SYSTEM::VMAG(iParam0))
	{
		if ((MISC::IS_BIT_SET(bParam1) && MISC::IS_BIT_SET(unk_0x9B0761B4C3EB8BC7())) && !STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(unk_0x9B0761B4C3EB8BC7()))
		{
			if (ENTITY::IS_ENTITY_A_VEHICLE(bParam1))
			{
				if (ENTITY::GET_ENTITY_COORDS(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(bParam1), false))
				{
					fVar1 = HUD::SET_BLIP_NAME_FROM_TEXT_FILE(NETWORK::NETWORK_ARE_HANDLES_THE_SAME(unk_0x9B0761B4C3EB8BC7(), 1), NETWORK::NETWORK_ARE_HANDLES_THE_SAME(bParam1, 1), 1);
					if (fVar1 >= fVar2 || iParam4)
					{
						fVar0 = SYSTEM::ROUND((255f * ((fVar1 - fVar2) / (fParam2 - fVar2))));
						if (fVar0 <= 0)
						{
							fVar0 = 0;
						}
						if (fVar0 >= 255)
						{
							fVar0 = 255;
						}
						HUD::SET_BLIP_FLASHES(iParam0, true);
						HUD::SET_BLIP_ALPHA(iParam0, (255 - fVar0));
					}
					else
					{
						HUD::SET_BLIP_FLASHES(iParam0, false);
						HUD::SET_BLIP_ALPHA(iParam0, 255);
					}
				}
			}
			else if (ENTITY::IS_ENTITY_A_PED(bParam1))
			{
				if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(bParam1)))
				{
					fVar1 = HUD::SET_BLIP_NAME_FROM_TEXT_FILE(NETWORK::NETWORK_ARE_HANDLES_THE_SAME(unk_0x9B0761B4C3EB8BC7(), 1), NETWORK::NETWORK_ARE_HANDLES_THE_SAME(bParam1, 1), 1);
					if (fVar1 >= fVar2 || iParam4)
					{
						fVar0 = SYSTEM::ROUND(((255f * (fVar1 - fVar2)) / (fParam2 - fVar2)));
						if (fVar0 <= 0)
						{
							fVar0 = 0;
						}
						if (fVar0 >= 255)
						{
							fVar0 = 255;
						}
						HUD::SET_BLIP_FLASHES(iParam0, true);
						HUD::SET_BLIP_ALPHA(iParam0, (255 - fVar0));
					}
					else
					{
						HUD::SET_BLIP_FLASHES(iParam0, false);
						HUD::SET_BLIP_ALPHA(iParam0, 255);
					}
				}
			}
		}
	}
}

int func_110()
{
	if (unk_0xE0B3BC41DDA88DF0(unk_0x9B0761B4C3EB8BC7(), bLocal_73, 0) && VEHICLE::IS_VEHICLE_STUCK_ON_ROOF(bLocal_73))
	{
		return 1;
	}
	return 0;
}

void func_111()
{
	if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_71) && !STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(unk_0x9B0761B4C3EB8BC7()))
	{
		switch (iLocal_48)
		{
			case 0:
				iLocal_54 = iLocal_54;
				if (!SYSTEM::VDIST(bLocal_71, 0))
				{
					if (iLocal_121 == 1)
					{
						if (func_118())
						{
							iLocal_48 = 1;
						}
					}
					else if (!MISC::IS_PC_VERSION(bLocal_71) && !TASK::IS_PED_GETTING_UP(bLocal_71))
					{
						TASK::TASK_LOOK_AT_ENTITY(bLocal_71, unk_0x9B0761B4C3EB8BC7(), -1, 0, 2);
						if (unk_0x1037B9D45CE6B788(unk_0x9B0761B4C3EB8BC7(), -539.4566f, -2094.491f, 6.967173f, -468.4296f, -2152.549f, 18.99127f, 26.75f, 0, 1, 0))
						{
							TASK::TASK_ACHIEVE_HEADING(bLocal_71, 345f, 0);
							iLocal_48 = 1;
						}
						else
						{
							TASK::OPEN_SEQUENCE_TASK(&iLocal_74);
							TASK::TASK_PLAY_ANIM(false, sLocal_80, "arms_waving", 2f, -8f, -1, 0, false, false, false, false);
							TASK::TASK_PLAY_ANIM(false, sLocal_80, "arms_waving", 8f, -8f, -1, 0, false, false, false, false);
							TASK::TASK_PLAY_ANIM(false, sLocal_80, "arms_waving", 8f, -2f, -1, 0, false, false, false, false);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_74);
							AUDIO::STOP_SCRIPTED_CONVERSATION(bLocal_71, iLocal_74);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_74);
							iLocal_124 = MISC::GET_GAME_TIMER();
							iLocal_48 = 2;
						}
					}
				}
				break;
			
			case 1:
				if (iLocal_121 == 1)
				{
					TASK::TASK_LOOK_AT_ENTITY(bLocal_71, unk_0x9B0761B4C3EB8BC7(), -1, 0, 2);
					if (TASK::GET_SCRIPT_TASK_STATUS(bLocal_71, 242628503) != 1)
					{
						TASK::OPEN_SEQUENCE_TASK(&iLocal_74);
						TASK::TASK_PLAY_ANIM(false, sLocal_80, sLocal_82, 4f, -2f, -1, 0, false, false, false, false);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_74);
						AUDIO::STOP_SCRIPTED_CONVERSATION(bLocal_71, iLocal_74);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_74);
						iLocal_48 = 2;
					}
				}
				else if (PED::IS_PED_FACING_PED(bLocal_71, unk_0x9B0761B4C3EB8BC7(), 60f))
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(bLocal_71, 242628503) != 1)
					{
						TASK::OPEN_SEQUENCE_TASK(&iLocal_74);
						TASK::TASK_PLAY_ANIM(false, sLocal_80, "arms_waving", 2f, -8f, -1, 0, false, false, false, false);
						if (bLocal_57 == 0)
						{
							TASK::TASK_PLAY_ANIM(false, sLocal_80, "pointing", 8f, -4f, -1, 0, false, false, false, false);
						}
						TASK::CLOSE_SEQUENCE_TASK(iLocal_74);
						AUDIO::STOP_SCRIPTED_CONVERSATION(bLocal_71, iLocal_74);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_74);
						iLocal_48 = 2;
					}
				}
				if (func_118())
				{
					if (func_117())
					{
					}
				}
				break;
			
			case 2:
				if (func_118())
				{
					if (func_117())
					{
					}
				}
				if (iLocal_121 == 2)
				{
					if (!PED::IS_PED_FACING_PED(bLocal_71, unk_0x9B0761B4C3EB8BC7(), 60f) && !func_115(bLocal_71, -875674219))
					{
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(bLocal_71, unk_0x9B0761B4C3EB8BC7(), 0);
					}
					if (func_114(bLocal_71, unk_0x9B0761B4C3EB8BC7(), 1) < 25f)
					{
						if (!func_19())
						{
							if ((MISC::GET_GAME_TIMER() - iLocal_124) > 6000)
							{
								func_113();
							}
						}
					}
				}
				if (TASK::GET_SCRIPT_TASK_STATUS(bLocal_71, 242628503) != 1 && !func_115(bLocal_71, -875674219))
				{
					if (iLocal_121 == 1)
					{
						Local_85 = { -2260.1f, 4274.24f, 44.9f };
						if (!unk_0xC2169C00B643278B(bLocal_71, Local_85, 1.5f, 1.5f, 1.5f, 0, 1, 0))
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(bLocal_71, 242628503) == 7)
							{
								TASK::OPEN_SEQUENCE_TASK(&iLocal_74);
								HUD::_THEFEED_DISABLE(false, Local_85, 1f, 20000, fLocal_90, 1056964608);
								TASK::TASK_TURN_PED_TO_FACE_ENTITY(false, unk_0x9B0761B4C3EB8BC7(), 0);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_74);
								AUDIO::STOP_SCRIPTED_CONVERSATION(bLocal_71, iLocal_74);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_74);
							}
						}
						else if (!ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(bLocal_71, sLocal_79, "waiting", 3))
						{
							TASK::TASK_PLAY_ANIM(bLocal_71, sLocal_79, "waiting", 4f, -4f, -1, 0, false, false, false, false);
							if (func_114(bLocal_71, unk_0x9B0761B4C3EB8BC7(), 1) < 25f)
							{
								func_113();
							}
						}
					}
					else if (!ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(bLocal_71, sLocal_79, "waiting", 3))
					{
						TASK::TASK_PLAY_ANIM(bLocal_71, sLocal_79, "waiting", 4f, -4f, -1, 0, false, false, false, false);
					}
				}
				break;
			
			case 3:
				if (!PED::IS_PED_HEADTRACKING_PED(bLocal_71, unk_0x9B0761B4C3EB8BC7()))
				{
					TASK::TASK_LOOK_AT_ENTITY(bLocal_71, unk_0x9B0761B4C3EB8BC7(), -1, 0, 2);
				}
				if (ENTITY::IS_ENTITY_AT_ENTITY(unk_0x9B0761B4C3EB8BC7(), bLocal_71, 40f, 40f, 10f, false, true, 0) && !ENTITY::IS_ENTITY_AT_ENTITY(unk_0x9B0761B4C3EB8BC7(), bLocal_71, 9f, 9f, 9f, false, true, 0))
				{
					if (func_112())
					{
						if (iLocal_55)
						{
							if (iLocal_121 == 1)
							{
								TASK::OPEN_SEQUENCE_TASK(&iLocal_74);
								TASK::TASK_TURN_PED_TO_FACE_ENTITY(false, unk_0x9B0761B4C3EB8BC7(), 0);
								TASK::TASK_PLAY_ANIM(false, "RANDOM@CAR_THIEF@WAITING_IG_4", "idle_a", 2f, -2f, -1, 0, false, false, false, false);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_74);
								AUDIO::STOP_SCRIPTED_CONVERSATION(bLocal_71, iLocal_74);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_74);
								iLocal_55 = 0;
								iLocal_124 = MISC::GET_GAME_TIMER();
							}
							else
							{
								TASK::OPEN_SEQUENCE_TASK(&iLocal_74);
								TASK::TASK_TURN_PED_TO_FACE_ENTITY(false, unk_0x9B0761B4C3EB8BC7(), 0);
								TASK::TASK_PLAY_ANIM(false, "RANDOM@CAR_THIEF@WAITING_IG_4", "idle_a", 2f, -2f, -1, 0, false, false, false, false);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_74);
								AUDIO::STOP_SCRIPTED_CONVERSATION(bLocal_71, iLocal_74);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_74);
								iLocal_55 = 0;
								iLocal_124 = MISC::GET_GAME_TIMER();
							}
						}
						else if (!ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(bLocal_71, "RANDOM@CAR_THIEF@WAITING_IG_4", "idle_a", 3))
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(bLocal_71, 242628503) == 7)
							{
								if (!PED::IS_PED_FACING_PED(bLocal_71, unk_0x9B0761B4C3EB8BC7(), 45f))
								{
									TASK::OPEN_SEQUENCE_TASK(&iLocal_74);
									TASK::TASK_TURN_PED_TO_FACE_ENTITY(false, unk_0x9B0761B4C3EB8BC7(), 0);
									TASK::CLOSE_SEQUENCE_TASK(iLocal_74);
									AUDIO::STOP_SCRIPTED_CONVERSATION(bLocal_71, iLocal_74);
									TASK::CLEAR_SEQUENCE_TASK(&iLocal_74);
								}
								else if ((MISC::GET_GAME_TIMER() - iLocal_124) > 6000)
								{
									iLocal_55 = 1;
								}
							}
						}
						else if (!PED::IS_PED_FACING_PED(bLocal_71, unk_0x9B0761B4C3EB8BC7(), 70f))
						{
							HUD::HIDE_HUD_AND_RADAR_THIS_FRAME(bLocal_71);
							TASK::OPEN_SEQUENCE_TASK(&iLocal_74);
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(false, unk_0x9B0761B4C3EB8BC7(), 0);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_74);
							AUDIO::STOP_SCRIPTED_CONVERSATION(bLocal_71, iLocal_74);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_74);
							iLocal_124 += 4000;
						}
					}
					if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_72))
					{
						TASK::TASK_SMART_FLEE_PED(bLocal_72, unk_0x9B0761B4C3EB8BC7(), 150f, -1, false, false);
						PED::SET_PED_KEEP_TASK(bLocal_72, true);
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&bLocal_72);
					}
				}
				else
				{
					if (iLocal_121 == 1)
					{
						Local_85 = { -2260.1f, 4274.24f, 44.9f };
					}
					else if (bLocal_57)
					{
						Local_85 = { -483.4162f, -2160.874f, 8.359f };
					}
					else
					{
						Local_85 = { -485.9905f, -2153.542f, 8.1999f };
					}
					if (!unk_0xC2169C00B643278B(bLocal_71, Local_85, 4f, 4f, 4f, 0, 1, 0))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(bLocal_71, 2106541073) == 7)
						{
							HUD::_THEFEED_DISABLE(bLocal_71, Local_85, 1f, 20000, fLocal_90, 1056964608);
						}
					}
					else if (!PED::IS_PED_FACING_PED(bLocal_71, unk_0x9B0761B4C3EB8BC7(), 50f))
					{
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(bLocal_71, unk_0x9B0761B4C3EB8BC7(), -1);
					}
					iLocal_55 = 1;
				}
				break;
			
			case 4:
				break;
			}
	}
	if (func_167(1))
	{
		if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_71))
		{
			TASK::TASK_SMART_FLEE_PED(bLocal_71, unk_0x9B0761B4C3EB8BC7(), 150f, -1, false, false);
			PED::SET_PED_KEEP_TASK(bLocal_71, true);
			SYSTEM::WAIT(0);
		}
		func_237();
	}
}

bool func_112()
{
	if (!bLocal_116)
	{
		if (func_47(&Local_102, cLocal_114, sLocal_110, 4, 0, 0, 0))
		{
			bLocal_116 = true;
		}
	}
	return bLocal_116;
}

int func_113()
{
	if (!iLocal_117)
	{
		if (func_47(&Local_102, cLocal_114, sLocal_108, 4, 0, 0, 0))
		{
			iLocal_117 = 1;
		}
	}
	return iLocal_117;
}

float func_114(bool bParam0, bool bParam1, int iParam2)
{
	struct<3> Var0;
	struct<3> Var1;
	
	if (!PED::IS_PED_IN_ANY_POLICE_VEHICLE(bParam0, 0))
	{
		Var0 = { NETWORK::NETWORK_ARE_HANDLES_THE_SAME(bParam0, 1) };
	}
	else
	{
		Var0 = { NETWORK::NETWORK_ARE_HANDLES_THE_SAME(bParam0, 0) };
	}
	if (!PED::IS_PED_IN_ANY_POLICE_VEHICLE(bParam1, 0))
	{
		Var1 = { NETWORK::NETWORK_ARE_HANDLES_THE_SAME(bParam1, 1) };
	}
	else
	{
		Var1 = { NETWORK::NETWORK_ARE_HANDLES_THE_SAME(bParam1, 0) };
	}
	return HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Var0, Var1, iParam2);
}

int func_115(bool bParam0, int iParam1)
{
	if (func_116(bParam0))
	{
		if (TASK::GET_SCRIPT_TASK_STATUS(bParam0, iParam1) == 1 || TASK::GET_SCRIPT_TASK_STATUS(bParam0, iParam1) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_116(bool bParam0)
{
	if (func_3(bParam0))
	{
		if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_117()
{
	if (!iLocal_115)
	{
		if (SYSTEM::TIMERA() > 2000)
		{
			if (func_47(&Local_102, cLocal_114, sLocal_107, 4, 0, 0, 0))
			{
				iLocal_115 = 1;
			}
		}
	}
	return iLocal_115;
}

int func_118()
{
	if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_72) && !STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_71))
	{
		if (func_168(bLocal_73))
		{
			if (PED::IS_PED_SITTING_IN_VEHICLE(bLocal_72, bLocal_73))
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

void func_119(var uParam0, int iParam1)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

void func_120(bool bParam0)
{
	int iVar0;
	
	if (iLocal_121 == 2)
	{
		iVar0 = func_10();
		switch (iVar0)
		{
			case 0:
				while (!func_143(319357731, 6, 1, 144, 7200000, 10000, -1, 199, -1, 0))
				{
					if (func_3(bLocal_71))
					{
						PED::SET_PED_RESET_FLAG(bLocal_71, 310, true);
					}
					SYSTEM::WAIT(0);
				}
				break;
			
			case 1:
				while (!func_143(-423103492, 6, 2, 144, 7200000, 10000, -1, 199, -1, 0))
				{
					if (func_3(bLocal_71))
					{
						PED::SET_PED_RESET_FLAG(bLocal_71, 310, true);
					}
					SYSTEM::WAIT(0);
				}
				break;
			
			case 2:
				while (!func_143(801546988, 6, 4, 144, 7200000, 10000, -1, 199, -1, 0))
				{
					if (func_3(bLocal_71))
					{
						PED::SET_PED_RESET_FLAG(bLocal_71, 310, true);
					}
					SYSTEM::WAIT(0);
				}
				break;
			}
	}
	if (bParam0)
	{
		func_142(8);
	}
	func_124(17, iLocal_121);
	func_121();
	func_237();
}

void func_121()
{
	func_122();
}

int func_122()
{
	if (func_123(0))
	{
		return 0;
	}
	if (Global_98994.f_8)
	{
		if (Global_98994.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_98994.f_10 > 1)
	{
		return 0;
	}
	Global_98994.f_10++;
	return 1;
}

bool func_123(bool bParam0)
{
	if (!bParam0 && INTERIOR::GET_INTERIOR_AT_COORDS(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xCE990E643CD9D0E5(Global_77081, 0);
}

void func_124(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_140();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= func_139(iParam0))
	{
		func_138(iParam0, iParam1);
		if (!func_137(51))
		{
			func_133("RE_REWARD", 1, 0, 4000, 10000, func_136(), 0, 138, 0);
			func_132(51);
		}
		if (func_131(iParam0))
		{
			Global_111858.f_24991.f_2 = 3;
		}
		if (func_130(iParam0, iParam1) != 322)
		{
			func_125(func_130(iParam0, iParam1), Local_45.x, Local_45.f_1);
		}
		Global_111846 = iParam1;
		if (Global_111844 == 0)
		{
			if (((Global_111847 == 1 || Global_111847 == 5) || Global_111847 == 11) || Global_111847 == 25)
			{
				func_142(2);
			}
			else if ((Global_111847 == 26 || Global_111847 == 8) || Global_111847 == 17)
			{
				func_142(7);
			}
			else
			{
				func_142(1);
			}
		}
	}
}

void func_125(int iParam0, var uParam1, var uParam2)
{
	bool bVar0;
	
	if (iParam0 < 0)
	{
	}
	if (iParam0 == 321 || iParam0 > 321)
	{
	}
	else
	{
		func_129((891 + iParam0), 1, -1, 1);
	}
	bVar0 = true;
	if (Global_111858.f_10190[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_111858.f_10190[iParam0 /*12*/].f_6 == 11 || Global_111858.f_10190[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_111858.f_10190[iParam0 /*12*/].f_5 = 1;
		Global_111858.f_10190[iParam0 /*12*/].f_10 = uParam1;
		Global_111858.f_10190[iParam0 /*12*/].f_11 = uParam2;
		if (iParam0 == 287)
		{
			STATS::_UPDATE_STAT_INT(joaat("NUM_HIDDEN_PACKAGES_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			STATS::_UPDATE_STAT_INT(joaat("NUM_HIDDEN_PACKAGES_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			STATS::_UPDATE_STAT_INT(joaat("NUM_HIDDEN_PACKAGES_3"), 50, 0);
		}
	}
	if (bVar0)
	{
		func_126();
	}
}

void func_126()
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	int iVar9;
	
	iVar0 = 0;
	Global_111594 = 0;
	Global_111595 = 0;
	Global_111596 = 0;
	Global_111597 = 0;
	Global_111598 = 0;
	Global_111599 = 0;
	Global_111600 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_111858.f_10190.f_3853;
	Global_111858.f_10190.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_111858.f_10190[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_111858.f_10190[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_111594++;
					fVar1 = (fVar1 + Global_111858.f_10190[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_111595++;
					fVar2 = (fVar2 + Global_111858.f_10190[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_111596++;
					fVar3 = (fVar3 + Global_111858.f_10190[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_111597++;
					fVar4 = (fVar4 + Global_111858.f_10190[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_111598++;
					fVar5 = (fVar5 + (Global_111858.f_10190[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_111599++;
					fVar6 = (fVar6 + Global_111858.f_10190[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_111600++;
					fVar7 = (fVar7 + Global_111858.f_10190[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_111577 > 0)
	{
		if (Global_111594 == Global_111577)
		{
			fVar1 = 55f;
		}
	}
	if (Global_111578 > 0)
	{
		if (Global_111595 == Global_111578)
		{
			fVar2 = 10f;
		}
	}
	if (Global_111579 > 0)
	{
		if (Global_111596 == Global_111579)
		{
			fVar3 = 0f;
		}
	}
	if (Global_111580 > 0)
	{
		if (Global_111597 == Global_111580)
		{
			fVar4 = 10f;
		}
	}
	if (Global_111581 > 0)
	{
		if (((Global_111598 == Global_111581 || (Global_111581 * 10 / Global_111598) < 41) || Global_111598 > Global_111584) || Global_111598 == Global_111584)
		{
			if (!unk_0xCE990E643CD9D0E5(Global_111858.f_10190.f_3856, 14))
			{
				if (Global_111598 == Global_111581)
				{
					STATS::_UPDATE_STAT_INT(joaat("NUM_RNDEVENTS_COMPLETED"), Global_111581, 0);
					unk_0xBE20AB8238688965(&(Global_111858.f_10190.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_111582 > 0)
	{
		if (Global_111599 == Global_111582)
		{
			fVar6 = 15f;
		}
	}
	if (Global_111583 > 0)
	{
		if (Global_111600 == Global_111583)
		{
			fVar7 = 5f;
		}
	}
	Global_111858.f_10190.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_111598 > Global_111584 || Global_111598 == Global_111584)
	{
		iVar9 = Global_111584;
	}
	else
	{
		iVar9 = Global_111598;
	}
	NETWORK::NETWORK_HAS_SOCIAL_CLUB_ACCOUNT(joaat("NUM_MISSIONS_COMPLETED"), Global_111594, 1);
	NETWORK::NETWORK_HAS_SOCIAL_CLUB_ACCOUNT(joaat("NUM_MISSIONS_AVAILABLE"), Global_111577, 1);
	NETWORK::NETWORK_HAS_SOCIAL_CLUB_ACCOUNT(joaat("NUM_MINIGAMES_COMPLETED"), Global_111595, 1);
	NETWORK::NETWORK_HAS_SOCIAL_CLUB_ACCOUNT(joaat("NUM_MINIGAMES_AVAILABLE"), Global_111578, 1);
	NETWORK::NETWORK_HAS_SOCIAL_CLUB_ACCOUNT(joaat("NUM_ODDJOBS_COMPLETED"), Global_111596, 1);
	NETWORK::NETWORK_HAS_SOCIAL_CLUB_ACCOUNT(joaat("NUM_ODDJOBS_AVAILABLE"), Global_111579, 1);
	NETWORK::NETWORK_HAS_SOCIAL_CLUB_ACCOUNT(joaat("NUM_RNDPEOPLE_COMPLETED"), Global_111597, 1);
	NETWORK::NETWORK_HAS_SOCIAL_CLUB_ACCOUNT(joaat("NUM_RNDPEOPLE_AVAILABLE"), Global_111580, 1);
	NETWORK::NETWORK_HAS_SOCIAL_CLUB_ACCOUNT(joaat("NUM_RNDEVENTS_COMPLETED"), iVar9, 1);
	NETWORK::NETWORK_HAS_SOCIAL_CLUB_ACCOUNT(joaat("NUM_RNDEVENTS_AVAILABLE"), Global_111584, 1);
	NETWORK::NETWORK_HAS_SOCIAL_CLUB_ACCOUNT(joaat("NUM_MISC_COMPLETED"), (Global_111600 + Global_111599), 1);
	NETWORK::NETWORK_HAS_SOCIAL_CLUB_ACCOUNT(joaat("NUM_MISC_AVAILABLE"), (Global_111583 + Global_111582), 1);
	Global_111601 = (Global_111594 * 100 / Global_111577);
	Global_111603 = ((Global_111596 + Global_111595) * 100 / (Global_111579 + Global_111578));
	Global_111602 = ((Global_111597 + iVar9) * 100 / (Global_111580 + Global_111584));
	Global_111604 = ((Global_111599 + Global_111600) * 100 / (Global_111582 + Global_111583));
	STATS::STAT_SET_FLOAT(joaat("TOTAL_PROGRESS_MADE"), Global_111858.f_10190.f_3853, true);
	NETWORK::NETWORK_HAS_SOCIAL_CLUB_ACCOUNT(joaat("PERCENT_STORY_MISSIONS"), Global_111601, 1);
	NETWORK::NETWORK_HAS_SOCIAL_CLUB_ACCOUNT(joaat("PERCENT_AMBIENT_MISSIONS"), Global_111602, 1);
	NETWORK::NETWORK_HAS_SOCIAL_CLUB_ACCOUNT(joaat("PERCENT_ODDJOBS"), Global_111603, 1);
	if (fVar8 > 0f && SYSTEM::FLOOR(fVar8) < SYSTEM::FLOOR(Global_111858.f_10190.f_3853))
	{
		func_128(13, SYSTEM::FLOOR(Global_111858.f_10190.f_3853));
	}
	if (!DATAFILE::DATAFILE_IS_SAVE_PENDING())
	{
		if (!Global_76833)
		{
			if (func_127() == 2 == 0 && !MISC::SET_BIT())
			{
				if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE())
				{
					Global_111592 = 0;
				}
				if (!Global_61717)
				{
					func_122();
				}
			}
		}
	}
}

int func_127()
{
	return Global_30968;
}

int func_128(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 > 78)
	{
		return 0;
	}
	if (iParam1 <= 0 || iParam1 > 100)
	{
		return 0;
	}
	iVar0 = PLAYER::_GET_ACHIEVEMENT_PROGRESS(iParam0);
	if (iParam1 > iVar0)
	{
		return PLAYER::_SET_ACHIEVEMENT_PROGRESS(iParam0, iParam1);
	}
	return 0;
}

var func_129(int iParam0, char* sParam1, int iParam2, int iParam3)
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
		iParam2 = func_8();
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

int func_130(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 250;
			break;
		
		case 1:
			return 226;
			break;
		
		case 2:
			return 243;
			break;
		
		case 3:
			return 256;
			break;
		
		case 4:
			return 259;
			break;
		
		case 5:
			if (iParam1 == 1)
			{
				return 281;
			}
			if (iParam1 == 2)
			{
				return 282;
			}
			break;
		
		case 6:
			return 265;
			break;
		
		case 7:
			return 218;
			break;
		
		case 9:
			if (iParam1 == 1)
			{
				return 271;
			}
			if (iParam1 == 2)
			{
				return 272;
			}
			if (iParam1 == 3)
			{
				return 273;
			}
			if (iParam1 == 4)
			{
				return 274;
			}
			if (iParam1 == 5)
			{
				return 275;
			}
			if (iParam1 == 6)
			{
				return 276;
			}
			if (iParam1 == 7)
			{
				return 277;
			}
			if (iParam1 == 8)
			{
				return 278;
			}
			if (iParam1 == 9)
			{
				return 279;
			}
			if (iParam1 == 10)
			{
				return 280;
			}
			break;
		
		case 10:
			return 219;
			break;
		
		case 11:
			if (iParam1 == 1)
			{
				return 246;
			}
			if (iParam1 == 2)
			{
				return 247;
			}
			if (iParam1 == 3)
			{
				return 248;
			}
			if (iParam1 == 4)
			{
				return 249;
			}
			break;
		
		case 12:
			return 254;
			break;
		
		case 13:
			if (iParam1 == 1)
			{
				return 260;
			}
			if (iParam1 == 2)
			{
				return 261;
			}
			if (iParam1 == 3)
			{
				return 262;
			}
			if (iParam1 == 4)
			{
				return 264;
			}
			break;
		
		case 14:
			return 283;
			break;
		
		case 15:
			if (iParam1 == 1)
			{
				return 224;
			}
			if (iParam1 == 2)
			{
				return 225;
			}
			break;
		
		case 16:
			return 252;
			break;
		
		case 17:
			if (iParam1 == 1)
			{
				return 244;
			}
			if (iParam1 == 2)
			{
				return 245;
			}
			break;
		
		case 18:
			return 253;
			break;
		
		case 19:
			return 215;
			break;
		
		case 20:
			return 216;
			break;
		
		case 21:
			return 251;
			break;
		
		case 22:
			if (iParam1 == 1)
			{
				return 221;
			}
			if (iParam1 == 2)
			{
				return 222;
			}
			break;
		
		case 23:
			if (iParam1 == 1)
			{
				return 213;
			}
			if (iParam1 == 2)
			{
				return 214;
			}
			break;
		
		case 24:
			return 242;
			break;
		
		case 25:
			if (iParam1 == 1)
			{
				return 267;
			}
			if (iParam1 == 2)
			{
				return 268;
			}
			if (iParam1 == 3)
			{
				return 269;
			}
			break;
		
		case 8:
			return 255;
			break;
		
		case 26:
			if (iParam1 == 1)
			{
				return 227;
			}
			if (iParam1 == 2)
			{
				return 228;
			}
			break;
		
		case 27:
			if (iParam1 == 1)
			{
				return 257;
			}
			if (iParam1 == 2)
			{
				return 258;
			}
			break;
		
		case 28:
			return 217;
			break;
		
		case 29:
			if (iParam1 == 1)
			{
				return 229;
			}
			if (iParam1 == 2)
			{
				return 230;
			}
			if (iParam1 == 3)
			{
				return 231;
			}
			break;
		
		case 30:
			return 285;
			break;
		
		case 31:
			return 318;
			break;
		
		case 32:
			return 319;
			break;
		
		case 33:
			return 320;
			break;
	}
	return 322;
}

int func_131(int iParam0)
{
	switch (iParam0)
	{
		case 29:
		case 30:
		case 2:
		case 18:
			return 0;
			break;
	}
	return 1;
}

void func_132(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 < 3)
	{
		unk_0xBE20AB8238688965(&(Global_111858.f_20406.f_150[iVar1]), iVar0);
	}
}

void func_133(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_134(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_134(bool bParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
{
	int iVar0;
	
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS(sParam0, ""))
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam5 < 500 && iParam5 != -1)
	{
		return;
	}
	if (iParam4 < 0 && iParam4 != -1)
	{
		return;
	}
	if (iParam6 < 1 || iParam6 > 7)
	{
		return;
	}
	if (iParam7 == 235)
	{
		return;
	}
	if (iParam8 == 235)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_111858.f_20406.f_145)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS(&(Global_111858.f_20406[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_111858.f_20406.f_145 < 9)
	{
		StringCopy(&(Global_111858.f_20406[Global_111858.f_20406.f_145 /*16*/]), bParam0, 16);
		StringCopy(&(Global_111858.f_20406[Global_111858.f_20406.f_145 /*16*/].f_4), sParam1, 16);
		Global_111858.f_20406[Global_111858.f_20406.f_145 /*16*/].f_8 = (MISC::GET_GAME_TIMER() + iParam3);
		Global_111858.f_20406[Global_111858.f_20406.f_145 /*16*/].f_9 = iParam5;
		Global_111858.f_20406[Global_111858.f_20406.f_145 /*16*/].f_11 = iParam6;
		Global_111858.f_20406[Global_111858.f_20406.f_145 /*16*/].f_12 = uParam2;
		Global_111858.f_20406[Global_111858.f_20406.f_145 /*16*/].f_13 = iParam7;
		Global_111858.f_20406[Global_111858.f_20406.f_145 /*16*/].f_14 = iParam8;
		Global_111858.f_20406[Global_111858.f_20406.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_111858.f_20406[Global_111858.f_20406.f_145 /*16*/].f_10 = ((MISC::GET_GAME_TIMER() + iParam3) + iParam4);
		}
		else
		{
			Global_111858.f_20406[Global_111858.f_20406.f_145 /*16*/].f_10 = -1;
		}
		Global_111858.f_20406.f_145++;
		func_135();
	}
}

void func_135()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_111858.f_20406.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_111858.f_20406.f_145)
	{
		if (unk_0xCE990E643CD9D0E5(Global_111858.f_20406[iVar0 /*16*/].f_11, 0))
		{
			if (Global_111858.f_20406[iVar0 /*16*/].f_12 > Global_111858.f_20406.f_146[0])
			{
				Global_111858.f_20406.f_146[0] = Global_111858.f_20406[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0xCE990E643CD9D0E5(Global_111858.f_20406[iVar0 /*16*/].f_11, 1))
		{
			if (Global_111858.f_20406[iVar0 /*16*/].f_12 > Global_111858.f_20406.f_146[1])
			{
				Global_111858.f_20406.f_146[1] = Global_111858.f_20406[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0xCE990E643CD9D0E5(Global_111858.f_20406[iVar0 /*16*/].f_11, 2))
		{
			if (Global_111858.f_20406[iVar0 /*16*/].f_12 > Global_111858.f_20406.f_146[2])
			{
				Global_111858.f_20406.f_146[2] = Global_111858.f_20406[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

int func_136()
{
	func_11();
	switch (Global_111858.f_2359.f_539.f_4321)
	{
		case 0:
			return 1;
			break;
		
		case 1:
			return 2;
			break;
		
		case 2:
			return 4;
			break;
	}
	return 0;
}

int func_137(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 < 3)
	{
		return unk_0xCE990E643CD9D0E5(Global_111858.f_20406.f_150[iVar1], iVar0);
	}
	return 0;
}

void func_138(int iParam0, int iParam1)
{
	unk_0xBE20AB8238688965(&(Global_111858.f_24991.f_8[iParam0]), iParam1);
}

int func_139(int iParam0)
{
	int iVar0;
	
	iVar0 = 1;
	switch (iParam0)
	{
		case 1:
			iVar0 = 5;
			break;
		
		case 5:
			iVar0 = 2;
			break;
		
		case 9:
			iVar0 = 10;
			break;
		
		case 11:
			iVar0 = 4;
			break;
		
		case 13:
			iVar0 = 4;
			break;
		
		case 15:
			iVar0 = 2;
			break;
		
		case 17:
			iVar0 = 2;
			break;
		
		case 22:
			iVar0 = 2;
			break;
		
		case 23:
			iVar0 = 2;
			break;
		
		case 25:
			iVar0 = 3;
			break;
		
		case 26:
			iVar0 = 2;
			break;
		
		case 27:
			iVar0 = 2;
			break;
		
		case 29:
			iVar0 = 3;
			break;
	}
	return iVar0;
}

int func_140()
{
	struct<16> Var0;
	var uVar1;
	
	StringCopy(&Var0, TASK::IS_PED_BEING_ARRESTED(), 64);
	uVar1 = func_141(Var0);
	return uVar1;
}

int func_141(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
{
	switch (AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT(&cParam0))
	{
		case joaat("re_abandonedcar"):
			return 23;
			break;
		
		case joaat("re_accident"):
			return 0;
			break;
		
		case joaat("re_arrests"):
			return 15;
			break;
		
		case joaat("re_atmrobbery"):
			return 1;
			break;
		
		case joaat("re_bikethief"):
			return 26;
			break;
		
		case joaat("re_border"):
			return 29;
			break;
		
		case joaat("re_burials"):
			return 24;
			break;
		
		case joaat("re_bus_tours"):
			return 2;
			break;
		
		case joaat("re_cartheft"):
			return 17;
			break;
		
		case joaat("re_chasethieves"):
			return 11;
			break;
		
		case joaat("re_crashrescue"):
			return 16;
			break;
		
		case joaat("re_cultshootout"):
			return 18;
			break;
		
		case joaat("re_dealgonewrong"):
			return 12;
			break;
		
		case joaat("re_domestic"):
			return 3;
			break;
		
		case joaat("re_drunkdriver"):
			return 27;
			break;
		
		case joaat("re_gang_intimidation"):
			return 20;
			break;
		
		case joaat("re_gangfight"):
			return 19;
			break;
		
		case joaat("re_getaway_driver"):
			return 4;
			break;
		
		case joaat("re_hitch_lift"):
			return 13;
			break;
		
		case joaat("re_homeland_security"):
			return 28;
			break;
		
		case joaat("re_lured"):
			return 7;
			break;
		
		case joaat("re_muggings"):
			return 25;
			break;
		
		case joaat("re_paparazzi"):
			return 10;
			break;
		
		case joaat("re_prisonerlift"):
			return 22;
			break;
		
		case joaat("re_prisonvanbreak"):
			return 21;
			break;
		
		case joaat("re_securityvan"):
			return 9;
			break;
		
		case joaat("re_shoprobbery"):
			return 5;
			break;
		
		case joaat("re_snatched"):
			return 6;
			break;
		
		case joaat("re_stag_do"):
			return 14;
			break;
		
		case joaat("re_yetarian"):
			return 30;
			break;
		
		case joaat("re_duel"):
			return 31;
			break;
		
		case joaat("re_seaplane"):
			return 32;
			break;
		
		case joaat("re_monkey"):
			return 33;
			break;
	}
	return -1;
}

void func_142(int iParam0)
{
	Global_111844 = iParam0;
}

int func_143(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	struct<10> Var0;
	struct<10> Var1;
	int iVar2;
	int iVar3;
	
	if (func_123(0))
	{
		return 0;
	}
	if (iParam4 < 0)
	{
		return 0;
	}
	if (iParam5 < 0)
	{
		return 0;
	}
	if (iParam6 == 76)
	{
		return 0;
	}
	if (iParam7 == 235)
	{
		return 0;
	}
	if (iParam3 < 3)
	{
		if (unk_0xCE990E643CD9D0E5(bParam2, iParam3))
		{
			return 0;
		}
	}
	if (bParam2 < 1 || bParam2 > 7)
	{
		return 0;
	}
	if (Global_111858.f_7684.f_866 < 10)
	{
		Var0 = iParam0;
		Var0.f_3 = func_151(iParam1);
		Var0.f_4 = (MISC::GET_GAME_TIMER() + iParam4);
		Var0.f_5 = iParam5;
		Var0.f_1 = iParam9;
		Var0.f_2 = bParam2;
		Var0.f_6 = iParam3;
		Var0.f_7 = iParam6;
		Var0.f_8 = iParam7;
		Var0.f_9 = iParam8;
		VEHICLE::IS_VEHICLE_DRIVEABLE(&(Var0.f_1), false);
		Global_111858.f_7684.f_765[Global_111858.f_7684.f_866 /*10*/] = { Var0 };
		Global_111858.f_7684.f_866++;
		return 1;
	}
	else
	{
		Var1 = { func_150(iParam0, iParam1, bParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9) };
		iVar2 = 0;
		func_149(&iVar2);
		iVar3 = func_148(Var1, Global_111858.f_7684.f_765[iVar2 /*10*/]);
		if (iVar3 == 2)
		{
			func_146(Global_111858.f_7684.f_765[iVar2 /*10*/]);
			Global_111858.f_7684.f_765[iVar2 /*10*/] = { Var1 };
			func_145(&Var1);
			return 1;
		}
		else if (iVar3 == 1)
		{
			if (func_144(Var1))
			{
				func_146(Global_111858.f_7684.f_765[iVar2 /*10*/]);
				Global_111858.f_7684.f_765[iVar2 /*10*/] = { Var1 };
				func_145(&Var1);
				return 1;
			}
			else
			{
				if (!func_144(Global_111858.f_7684.f_765[iVar2 /*10*/]))
				{
					Global_111858.f_7684.f_765[iVar2 /*10*/] = { Var1 };
					func_145(&Var1);
					return 1;
				}
				func_145(&Var1);
				return 1;
			}
		}
		else
		{
			func_146(Var1);
			func_145(&Var1);
			return 1;
		}
	}
	return 0;
}

int func_144(struct<9> Param0, var uParam1)
{
	if (Param0.f_8 == 0)
	{
		return 0;
	}
	return 1;
}

void func_145(var uParam0)
{
	struct<10> Var0;
	
	*uParam0 = { Var0 };
}

void func_146(struct<10> Param0)
{
	if (func_144(Param0))
	{
		func_147(Param0.f_8, 0);
	}
}

void func_147(int iParam0, int iParam1)
{
	if (iParam0 == 235 || iParam0 == 0)
	{
		return;
	}
	Global_111858.f_8609[iParam0] = 1;
	Global_111858.f_8609.f_236[iParam0] = (MISC::GET_GAME_TIMER() + iParam1);
}

int func_148(struct<4> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, struct<4> Param7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13)
{
	int iVar0;
	int iVar1;
	
	iVar0 = Param0.f_3;
	iVar1 = Param7.f_3;
	if (iVar0 > iVar1)
	{
		return 2;
	}
	if (iVar0 < iVar1)
	{
		return 0;
	}
	return 1;
}

void func_149(int iParam0)
{
	int iVar0;
	
	*iParam0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_111858.f_7684.f_866)
	{
		if (func_148(Global_111858.f_7684.f_765[iVar0 /*10*/], Global_111858.f_7684.f_765[*iParam0 /*10*/]) == 0)
		{
			*iParam0 = iVar0;
		}
		iVar0++;
	}
}

struct<10> func_150(var uParam0, int iParam1, bool bParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, var uParam8, var uParam9)
{
	struct<10> Var0;
	
	Var0 = uParam0;
	Var0.f_3 = func_151(iParam1);
	Var0.f_4 = (MISC::GET_GAME_TIMER() + iParam4);
	Var0.f_5 = iParam5;
	Var0.f_1 = uParam9;
	Var0.f_2 = bParam2;
	Var0.f_6 = iParam3;
	Var0.f_7 = iParam6;
	Var0.f_8 = iParam7;
	Var0.f_9 = uParam8;
	VEHICLE::IS_VEHICLE_DRIVEABLE(&(Var0.f_1), false);
	return Var0;
}

int func_151(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 4:
			return 5;
			break;
		
		case 7:
			return 4;
			break;
		
		case 2:
			return 3;
			break;
		
		case 1:
			return 2;
			break;
		
		case 3:
			return 1;
			break;
		
		case 5:
		case 6:
			return 0;
			break;
	}
	return 7;
}

void func_152(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_156(iParam0, 2, 1))
		{
			func_155(iParam0, 2, 1);
		}
	}
	else if (func_156(iParam0, 2, 1))
	{
		func_153(iParam0, 2, 1);
	}
}

void func_153(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		VEHICLE::IS_VEHICLE_DRIVEABLE(&(Global_99007.f_1364[iParam0]), bParam1);
	}
	else if (MISC::SET_BIT())
	{
		if (func_127() == 0)
		{
			uVar0 = func_9(func_154(iParam0), -1, 0);
			VEHICLE::IS_VEHICLE_DRIVEABLE(&uVar0, bParam1);
			func_6(func_154(iParam0), uVar0, -1, 1, 0);
		}
	}
	else
	{
		VEHICLE::IS_VEHICLE_DRIVEABLE(&(Global_111858.f_668[iParam0]), bParam1);
	}
}

int func_154(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 827;
			break;
		
		case 1:
			return 828;
			break;
		
		case 2:
			return 829;
			break;
		
		case 3:
			return 830;
			break;
		
		case 4:
			return 831;
			break;
		
		case 5:
			return 832;
			break;
		
		case 6:
			return 833;
			break;
		
		case 7:
			return 834;
			break;
		
		case 8:
			return 835;
			break;
		
		case 9:
			return 836;
			break;
		
		case 10:
			return 837;
			break;
		
		case 11:
			return 838;
			break;
		
		case 12:
			return 839;
			break;
		
		case 13:
			return 840;
			break;
		
		case 14:
			return 841;
			break;
		
		case 15:
			return 843;
			break;
		
		case 16:
			return 844;
			break;
		
		case 17:
			return 845;
			break;
		
		case 18:
			return 846;
			break;
		
		case 19:
			return 847;
			break;
		
		case 20:
			return 848;
			break;
		
		case 21:
			return 849;
			break;
		
		case 22:
			return 850;
			break;
		
		case 23:
			return 851;
			break;
		
		case 24:
			return 852;
			break;
		
		case 25:
			return 853;
			break;
		
		case 26:
			return 854;
			break;
		
		case 27:
			return 855;
			break;
		
		case 28:
			return 856;
			break;
		
		case 29:
			return 857;
			break;
		
		case 30:
			return 858;
			break;
		
		case 31:
			return 859;
			break;
		
		case 32:
			return 860;
			break;
		
		case 33:
			return 861;
			break;
		
		case 34:
			return 862;
			break;
		
		case 35:
			return 863;
			break;
		
		case 36:
			return 864;
			break;
		
		case 37:
			return 865;
			break;
		
		case 38:
			return 866;
			break;
		
		case 39:
			return 867;
			break;
		
		case 40:
			return 871;
			break;
		
		case 41:
			return 872;
			break;
		
		case 42:
			return 873;
			break;
		
		case 43:
			return 874;
			break;
		
		case 44:
			return 10099;
			break;
		
		case 45:
			return 3809;
			break;
		
		case 46:
			return 5384;
			break;
		
		case 47:
			return 6156;
			break;
		
		case 48:
			return 7233;
			break;
		
		case 49:
			return 7879;
			break;
		
		case 52:
			return 8913;
			break;
		
		case 50:
			return 8266;
			break;
		
		case 51:
			return 8268;
			break;
		
		case 53:
			return 9553;
			break;
		
		default:
			break;
	}
	return 11771;
}

void func_155(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		unk_0xBE20AB8238688965(&(Global_99007.f_1364[iParam0]), iParam1);
	}
	else if (MISC::SET_BIT())
	{
		if (func_127() == 0)
		{
			uVar0 = func_9(func_154(iParam0), -1, 0);
			unk_0xBE20AB8238688965(&uVar0, iParam1);
			func_6(func_154(iParam0), uVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0xBE20AB8238688965(&(Global_111858.f_668[iParam0]), iParam1);
	}
}

int func_156(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	if (bParam2)
	{
		return unk_0xCE990E643CD9D0E5(Global_99007.f_1364[iParam0], iParam1);
	}
	else if (MISC::SET_BIT())
	{
		if (func_127() == 0)
		{
			return unk_0xCE990E643CD9D0E5(func_9(func_154(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0xCE990E643CD9D0E5(Global_111858.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_157(int iParam0)
{
	if (func_160())
	{
		Global_111848 = 1;
		Global_111845 = MISC::GET_GAME_TIMER();
		if (func_131(Global_111847))
		{
			func_158(0);
		}
		HUD::SET_MISSION_NAME(true, "RE_TITLE");
		if (iParam0 && func_131(Global_111847))
		{
			HUD::FLASH_MINIMAP_DISPLAY();
		}
		return 1;
	}
	return 0;
}

void func_158(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_111858.f_24991.f_2 < 3)
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					func_84(func_159(iParam0), -1);
					Global_111858.f_24991.f_2++;
					unk_0xBE20AB8238688965(&Global_111854, 0);
				}
			}
			break;
		
		case 1:
			if (!unk_0xCE990E643CD9D0E5(Global_111854, 1))
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					func_84(func_159(iParam0), -1);
					Global_111858.f_24991.f_3++;
					unk_0xBE20AB8238688965(&Global_111854, 1);
				}
			}
			break;
		
		case 2:
			if (!unk_0xCE990E643CD9D0E5(Global_111854, 2))
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					func_84(func_159(iParam0), -1);
					Global_111858.f_24991.f_4++;
					unk_0xBE20AB8238688965(&Global_111854, 2);
				}
			}
			break;
	}
}

char* func_159(int iParam0)
{
	char* sVar0;
	
	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			sVar0 = "AM_H_REFS";
			break;
		
		case 1:
			sVar0 = "RE_FLASHBLIP";
			break;
		
		case 2:
			sVar0 = "RE_HANDOVER";
			break;
	}
	return sVar0;
}

int func_160()
{
	switch (func_161(&Global_31027, 0, 5, 0, SCRIPT::GET_ID_OF_THIS_THREAD()))
	{
		case 1:
			return 1;
			break;
		
		case 0:
			return 1;
			break;
	}
	return 0;
}

int func_161(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		return 0;
	}
	if (!bParam3)
	{
		if (Global_96433.f_44 == 1)
		{
			return 2;
		}
	}
	if (iParam1 == 0)
	{
		if (func_165(0))
		{
			return 0;
		}
		Global_41595++;
		*uParam0 = Global_41595;
		PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::GET_PLAYER_INDEX(), false);
		Global_22411.f_5 = 0;
		if (iParam2 != 5)
		{
			PLAYER::FORCE_CLEANUP(8);
		}
		Global_41631 = iParam2;
		Global_41593 = *uParam0;
		Global_41594 = iParam4;
		Global_41592 = 0;
		return 1;
	}
	if (*uParam0 != -1)
	{
		if (Global_41592 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_41592)
			{
				if (Global_41598[iVar0 /*4*/] == *uParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_41593 == *uParam0)
		{
			return 1;
		}
		*uParam0 = -1;
	}
	if (*uParam0 == -1)
	{
		if (!func_163(iParam2))
		{
			return 0;
		}
		if (Global_41592 == 8)
		{
			return 0;
		}
		Global_41595++;
		*uParam0 = Global_41595;
		Global_41598[Global_41592 /*4*/] = Global_41595;
		Global_41598[Global_41592 /*4*/].f_1 = iParam1;
		Global_41598[Global_41592 /*4*/].f_2 = iParam2;
		Global_41598[Global_41592 /*4*/].f_3 = 0;
		Global_41592++;
		if (iParam4 != 0)
		{
			func_162(uParam0, iParam4);
		}
	}
	return 2;
}

void func_162(var uParam0, int iParam1)
{
	int iVar0;
	
	if (Global_41592 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_41592)
	{
		if (Global_41598[iVar0 /*4*/] == *uParam0)
		{
			Global_41598[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

bool func_163(int iParam0)
{
	return func_164(iParam0, Global_41631);
}

int func_164(int iParam0, int iParam1)
{
	if (iParam1 == 15)
	{
		return 1;
	}
	if (iParam0 == 15)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 16:
			switch (iParam1)
			{
				case 9:
				case 10:
				case 7:
				case 13:
				case 14:
					return 0;
					break;
			}
			return 1;
			break;
		
		case 0:
			switch (iParam1)
			{
				case 5:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 2:
		case 3:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 4:
			if (iParam1 == 17)
			{
				return 1;
			}
			break;
		
		case 5:
			break;
		
		case 6:
		case 8:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 7:
			if (iParam1 == 6)
			{
				return 1;
			}
			break;
		
		case 9:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 11:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 17:
				case 12:
				case 5:
					return 1;
					break;
			}
			break;
		
		case 18:
		case 12:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
					return 1;
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
	}
	return 0;
}

int func_165(int iParam0)
{
	if (Global_41631 == 15)
	{
		return 0;
	}
	if (func_163(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_166()
{
	float fVar0;
	
	switch (iLocal_121)
	{
		case 1:
			if (unk_0x1037B9D45CE6B788(unk_0x9B0761B4C3EB8BC7(), -2300.317f, 4179.612f, 36.98159f, -2191.317f, 4368.794f, 74.89676f, 70.75f, 0, 1, 0))
			{
				return 1;
			}
			break;
		
		case 2:
			if (bLocal_57)
			{
				fVar0 = 80f;
			}
			else
			{
				fVar0 = 80f;
			}
			if (unk_0xC2169C00B643278B(unk_0x9B0761B4C3EB8BC7(), -487.5048f, -2157.99f, 8.2627f, fVar0, fVar0, 40f, 0, 1, 0))
			{
				return 1;
			}
			break;
	}
	if (CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE())
	{
		if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_71))
		{
			if (ENTITY::IS_ENTITY_ON_SCREEN(bLocal_71))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_167(int iParam0)
{
	bool bVar0;
	struct<3> Var1;
	struct<3> Var2;
	
	Var1 = { 6f, 6f, 6f };
	Var2 = { -6f, -6f, -6f };
	if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
	{
		if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_71))
		{
			if (iParam0 == 0 || func_114(bLocal_71, bLocal_72, 1) > 15f)
			{
				if (MISC::IS_BULLET_IN_AREA(PED::GET_PED_BONE_COORDS(bLocal_71, 31086, 0f, 0f, 0f), 4f, false))
				{
					bVar0 = true;
				}
				Var1 = { Var1 + PED::GET_PED_BONE_COORDS(bLocal_71, 31086, 0f, 0f, 0f) };
				Var2 = { Var2 + PED::GET_PED_BONE_COORDS(bLocal_71, 31086, 0f, 0f, 0f) };
				if ((MISC::IS_PROJECTILE_TYPE_IN_AREA(Var2, Var1, joaat("weapon_smokegrenade"), true) || MISC::IS_PROJECTILE_TYPE_IN_AREA(Var2, Var1, joaat("weapon_grenade"), true)) || MISC::IS_PROJECTILE_TYPE_IN_AREA(Var2, Var1, joaat("weapon_stickybomb"), true))
				{
					bVar0 = true;
				}
			}
			if (GRAPHICS::GET_IS_PETROL_DECAL_IN_RANGE(PED::GET_PED_BONE_COORDS(bLocal_71, 31086, 0f, 0f, 0f), 6f))
			{
				bVar0 = true;
			}
			if (FIRE::IS_EXPLOSION_IN_SPHERE(-1, PED::GET_PED_BONE_COORDS(bLocal_71, 31086, 0f, 0f, 0f), 6f))
			{
				bVar0 = true;
			}
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(bLocal_71, unk_0x9B0761B4C3EB8BC7(), true))
			{
				bVar0 = true;
			}
		}
	}
	if (bVar0)
	{
	}
	return bVar0;
}

int func_168(bool bParam0)
{
	if (func_3(bParam0))
	{
		if (ENTITY::GET_ENTITY_COORDS(bParam0, false))
		{
			if (!FIRE::IS_ENTITY_ON_FIRE(bParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_169()
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	int iVar3;
	int iVar4;
	void fVar5;
	char* sVar6;
	char* sVar7;
	char* sVar8;
	
	Var1 = { Local_87 };
	fVar2 = fLocal_95;
	switch (iLocal_121)
	{
		case 1:
			Local_86 = { -2257.482f, 4266.638f, 44.5095f };
			fLocal_94 = 293.9091f;
			Local_87 = { -2253.763f, 4273.17f, 44.977f };
			fLocal_95 = 185.5212f;
			iVar3 = joaat("a_f_y_vinewood_04");
			fVar5 = joaat("peyote");
			iVar4 = joaat("g_m_y_salvagoon_01");
			sVar6 = "CThiefVictim";
			sVar7 = "A_F_Y_VINEWOOD_04_WHITE_MINI_02";
			sLocal_107 = "RECT1_ATTR";
			sLocal_108 = "RECT1_HELP";
			sLocal_109 = "RECT1_FYOU";
			sLocal_110 = "RECT1_JOY";
			sLocal_111 = "RECT1_OK";
			sLocal_112 = "RECT1_BAD";
			sLocal_113 = "RECT1_GOOD";
			cLocal_114 = "RECT1AU";
			sLocal_79 = "RANDOM@CAR_THIEF@waiting_ig_4";
			sLocal_81 = "random@car_thief@waving_ig_1";
			Local_88 = { -2270.632f, 4287.437f, 44.9008f };
			fLocal_53 = 3f;
			if (SYSTEM::VDIST(NETWORK::NETWORK_ARE_HANDLES_THE_SAME(unk_0x9B0761B4C3EB8BC7(), 1), Local_86) < SYSTEM::VDIST(NETWORK::NETWORK_ARE_HANDLES_THE_SAME(unk_0x9B0761B4C3EB8BC7(), 1), Local_87))
			{
				Var1 = { Local_86 };
				fVar2 = fLocal_94;
				bLocal_57 = true;
				sLocal_80 = "random@car_thief@waving_ig_2";
				sLocal_82 = "waving_l";
			}
			else
			{
				sLocal_82 = "waving";
				sLocal_80 = "random@car_thief@waving_ig_1";
				Var1 = { Local_87 };
				fVar2 = fLocal_95;
			}
			break;
		
		case 2:
			Local_87 = { -538.6718f, -2183.442f, 5.2336f };
			Local_86 = { -365.7f, -2179.26f, 9.3184f };
			iVar3 = joaat("a_f_y_indian_01");
			fVar5 = joaat("rocoto");
			iVar4 = joaat("a_m_m_soucent_04");
			sVar6 = "CThiefGolfer";
			sVar8 = "A_M_M_SOUCENT_04_BLACK_MINI_01";
			sLocal_107 = "RECT2_ATTR";
			sLocal_108 = "RECT2_HELP";
			sLocal_109 = "RECT2_FYOU";
			sLocal_110 = "RECT2_JOY";
			sLocal_111 = "RECT2_OK";
			sLocal_112 = "RECT2_BAD";
			sLocal_113 = "RECT2_GOOD";
			cLocal_114 = "RECT2AU";
			sLocal_79 = "RANDOM@CAR_THIEF@waiting_ig_4";
			sLocal_80 = "RANDOM@CAR_THIEF@VICTIMPOINTS_IG_3";
			sLocal_81 = "RANDOM@CAR_THIEF@VICTIMPOINTS_IG_3";
			Local_88 = { -505.1966f, -2159.228f, 7.6466f };
			fLocal_52 = 15f;
			fLocal_53 = 3f;
			if (SYSTEM::VDIST(NETWORK::NETWORK_ARE_HANDLES_THE_SAME(unk_0x9B0761B4C3EB8BC7(), 1), Local_86) < SYSTEM::VDIST(NETWORK::NETWORK_ARE_HANDLES_THE_SAME(unk_0x9B0761B4C3EB8BC7(), 1), Local_87))
			{
				bLocal_57 = true;
			}
			break;
	}
	unk_0x78FCB2E22C41B9D5(iVar3);
	unk_0x78FCB2E22C41B9D5(iVar4);
	unk_0x78FCB2E22C41B9D5(fVar5);
	STREAMING::REQUEST_ANIM_DICT(sLocal_79);
	STREAMING::REQUEST_ANIM_DICT(sLocal_80);
	STREAMING::REQUEST_ANIM_DICT(sLocal_81);
	STREAMING::REQUEST_ANIM_DICT("RANDOM@CAR_THIEF@WAITING_IG_4");
	STREAMING::REQUEST_PTFX_ASSET();
	if (((((((ENTITY::DOES_ENTITY_EXIST(iVar3) && ENTITY::DOES_ENTITY_EXIST(iVar4)) && ENTITY::DOES_ENTITY_EXIST(fVar5)) && STREAMING::HAS_ANIM_DICT_LOADED(sLocal_79)) && STREAMING::HAS_ANIM_DICT_LOADED(sLocal_80)) && STREAMING::HAS_ANIM_DICT_LOADED(sLocal_81)) && STREAMING::HAS_ANIM_DICT_LOADED("RANDOM@CAR_THIEF@WAITING_IG_4")) && STREAMING::HAS_PTFX_ASSET_LOADED())
	{
		if (iLocal_121 == 1)
		{
			func_183("re_cartheft - Distance to vTop = ", SYSTEM::VDIST(NETWORK::NETWORK_ARE_HANDLES_THE_SAME(unk_0x9B0761B4C3EB8BC7(), 1), Local_86));
			func_183("re_cartheft - Distance to vBottom = ", SYSTEM::VDIST(NETWORK::NETWORK_ARE_HANDLES_THE_SAME(unk_0x9B0761B4C3EB8BC7(), 1), Local_87));
			bLocal_73 = VEHICLE::CREATE_VEHICLE(fVar5, Var1, fVar2, true, true, false);
			VEHICLE::_SET_VEHICLE_DOOR_CAN_BREAK(bLocal_73, 0, false);
			VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(bLocal_73, false);
			VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(bLocal_73, true);
			VEHICLE::SET_VEHICLE_CAN_LEAK_OIL(bLocal_73, false);
			VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(bLocal_73, false);
			VEHICLE::SET_VEHICLE_EXTRA(bLocal_73, 2, false);
			bLocal_72 = PED::CREATE_PED_INSIDE_VEHICLE(bLocal_73, 22, iVar4, -1, true, true);
			PLAYER::SET_PLAYER_VEHICLE_DEFENSE_MODIFIER(bLocal_72, 5.885454E-44f, 1);
			PED::SET_PED_COMBAT_ATTRIBUTES(bLocal_72, 3, true);
			unk_0x92BD213E6A0E666B(bLocal_72, joaat("weapon_pistol"), -1, 1, 1);
			PED::SET_PED_ACCURACY(bLocal_72, 10);
			PED::SET_DRIVER_ABILITY(bLocal_72, 1f);
			PED::SET_DRIVER_RACING_MODIFIER(bLocal_72, 1f);
			VEHICLE::SET_VEHICLE_COLOURS(bLocal_73, 135, 135);
			PED::ADD_RELATIONSHIP_GROUP("re_cartheft relGroupThief", &iLocal_137);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_137, 1862763509);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_137, 45677184);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, 45677184, iLocal_137);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(bLocal_72, iLocal_137);
			ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(bLocal_73, true);
			if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(unk_0x9B0761B4C3EB8BC7()))
			{
				Var0 = { NETWORK::NETWORK_ARE_HANDLES_THE_SAME(unk_0x9B0761B4C3EB8BC7(), 1) - Local_50 };
				fLocal_51 = unk_0x9075769DD4F148B7(Var0.x, Var0.f_1);
			}
			bLocal_71 = PED::CREATE_PED(5, iVar3, Local_50, fLocal_51, true, true);
			AUDIO::SET_AMBIENT_VOICE_NAME(bLocal_71, sVar7);
			TASK::TASK_LOOK_AT_ENTITY(bLocal_71, unk_0x9B0761B4C3EB8BC7(), -1, 2048, 2);
			PED::SET_PED_COMPONENT_VARIATION(bLocal_71, 0, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(bLocal_71, 2, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(bLocal_71, 3, 1, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(bLocal_71, 4, 1, 1, 0);
			AUDIO::STOP_PED_SPEAKING(bLocal_71, true);
			if (bLocal_57)
			{
				Local_84 = { -2254.413f, 4270.227f, 44.8028f };
				fLocal_89 = 124.6557f;
				Local_83 = { -2252.683f, 4274.16f, 45.0612f };
				Local_85 = { -2257.825f, 4269.189f, 44.6334f };
				fLocal_90 = 272.8688f;
				Local_97 = { -2258.04f, 4272.244f, 45.75466f };
				Local_98 = { 1.729481f, 0f, -114.9352f };
			}
			else
			{
				Local_84 = { -2253.634f, 4269.119f, 44.7686f };
				fLocal_89 = 336.143f;
				Local_85 = { -2255.733f, 4271.32f, 44.8166f };
				fLocal_90 = 179.4774f;
				Local_83 = { -2257.088f, 4268.938f, 44.6456f };
				Local_97 = { -2254.886f, 4273.539f, 46.2282f };
				Local_98 = { -7.492095f, 0f, -168.1909f };
			}
		}
		else
		{
			if (bLocal_57)
			{
				bLocal_73 = VEHICLE::CREATE_VEHICLE(fVar5, -488.7506f, -2159.325f, 8.2581f, 15.0886f, true, true, false);
			}
			else
			{
				bLocal_73 = VEHICLE::CREATE_VEHICLE(fVar5, -486.3563f, -2159.942f, 8.2887f, 288.8187f, true, true, false);
			}
			VEHICLE::_SET_VEHICLE_DOOR_CAN_BREAK(bLocal_73, 0, false);
			VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(bLocal_73, false);
			VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(bLocal_73, 3);
			VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(bLocal_73, true);
			VEHICLE::SET_VEHICLE_MOD_KIT(bLocal_73, 0);
			VEHICLE::SET_VEHICLE_MOD(bLocal_73, 11, 2, false);
			VEHICLE::SET_VEHICLE_MOD(bLocal_73, 16, 3, false);
			VEHICLE::SET_VEHICLE_MOD(bLocal_73, 12, 1, false);
			VEHICLE::SET_VEHICLE_MOD(bLocal_73, 13, 1, false);
			VEHICLE::SET_VEHICLE_WHEEL_TYPE(bLocal_73, 3);
			VEHICLE::SET_VEHICLE_MOD(bLocal_73, 23, 6, false);
			VEHICLE::SET_VEHICLE_WINDOW_TINT(bLocal_73, 3);
			VEHICLE::TOGGLE_VEHICLE_MOD(bLocal_73, 18, true);
			VEHICLE::TOGGLE_VEHICLE_MOD(bLocal_73, 22, true);
			VEHICLE::SET_VEHICLE_COLOURS(bLocal_73, 143, 0);
			VEHICLE::SET_VEHICLE_EXTRA_COLOURS(bLocal_73, 31, 2);
			VEHICLE::SET_VEHICLE_CAN_LEAK_OIL(bLocal_73, false);
			VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(bLocal_73, false);
			if (bLocal_57)
			{
				bLocal_71 = PED::CREATE_PED(5, iVar3, -490.4008f, -2160.755f, 8.2498f, 314.0037f, true, true);
			}
			else if (unk_0x1037B9D45CE6B788(unk_0x9B0761B4C3EB8BC7(), -583.0884f, -2234.249f, 4.523423f, -685.1817f, -2350.904f, 17.07073f, 178f, 0, 1, 0))
			{
				bLocal_71 = PED::CREATE_PED(5, iVar3, -486.81f, -2156.99f, 8.27f, -172.34f, true, true);
			}
			else
			{
				bLocal_71 = PED::CREATE_PED(5, iVar3, -486.2511f, -2161.808f, 8.3041f, 353.4264f, true, true);
			}
			PED::SET_PED_COMPONENT_VARIATION(bLocal_71, 0, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(bLocal_71, 2, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(bLocal_71, 3, 1, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(bLocal_71, 4, 1, 2, 0);
			bLocal_72 = PED::CREATE_PED_INSIDE_VEHICLE(bLocal_73, 22, iVar4, -1, true, true);
			unk_0x92BD213E6A0E666B(bLocal_72, joaat("weapon_pistol"), -1, 1, 1);
			PED::SET_PED_ACCURACY(bLocal_72, 10);
			PED::SET_DRIVER_ABILITY(bLocal_72, 1f);
			PED::SET_DRIVER_RACING_MODIFIER(bLocal_72, 1f);
			PLAYER::SET_PLAYER_VEHICLE_DEFENSE_MODIFIER(bLocal_72, 5.885454E-44f, 1);
			AUDIO::SET_AMBIENT_VOICE_NAME(bLocal_72, sVar8);
			Local_84 = { -501.9105f, -2148.019f, 8.0392f };
			fLocal_89 = 294.4744f;
			Local_83 = { -501.0442f, -2150.799f, 8.139f };
			Local_85 = { -493.8062f, -2156.036f, 8.1978f };
			Local_97 = { -504.365f, -2144.534f, 9.8585f };
			Local_98 = { -6.6935f, 0f, -127.8147f };
		}
		PED::SET_PED_CAN_BE_TARGETTED(bLocal_71, false);
		PLAYER::SET_PLAYER_VEHICLE_DEFENSE_MODIFIER(bLocal_71, 2.592402E-43f, 1);
		VEHICLE::SET_CAN_RESPRAY_VEHICLE(bLocal_73, false);
		VEHICLE::SET_VEHICLE_ENGINE_ON(bLocal_73, true, true, false);
		PED::_0x2208438012482A1A(bLocal_71, 1);
		PED::_0x2208438012482A1A(bLocal_72, 1);
		TASK::TASK_LOOK_AT_ENTITY(bLocal_71, bLocal_72, -1, 0, 2);
		VEHICLE::ADD_VEHICLE_UPSIDEDOWN_CHECK(bLocal_73);
		ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(bLocal_73, true);
		VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(bLocal_73, false, 0);
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(fVar5, true);
		AUDIO::START_AUDIO_SCENE("RE_CAR_STEAL_SCENE");
		AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(bLocal_73, "RE_CAR_STEAL_STOLEN_VEHICLE", 0f);
		VEHICLE::SET_DISABLE_PRETEND_OCCUPANTS(bLocal_73, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(bLocal_71, 17, false);
		PED::SET_PED_FLEE_ATTRIBUTES(bLocal_71, 512, true);
		switch (func_10())
		{
			case 0:
				sLocal_100 = "MICHAEL";
				break;
			
			case 1:
				sLocal_100 = "FRANKLIN";
				break;
			
			case 2:
				sLocal_100 = "TREVOR";
				break;
		}
		func_182(&Local_102, 0, unk_0x9B0761B4C3EB8BC7(), sLocal_100, 0, 1);
		func_182(&Local_102, 1, bLocal_71, sVar6, 0, 1);
		func_182(&Local_102, 2, bLocal_72, "CThief", 0, 1);
		return 1;
	}
	else if (func_170())
	{
		func_237();
	}
	return 0;
}

int func_170()
{
	if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_ID()) && !STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(unk_0x9B0761B4C3EB8BC7()))
	{
		if (SYSTEM::VDIST2(NETWORK::NETWORK_ARE_HANDLES_THE_SAME(unk_0x9B0761B4C3EB8BC7(), 1), Local_45) < (75f * 75f))
		{
			return 1;
		}
		if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(unk_0x9B0761B4C3EB8BC7())) > 1369f && !func_181())
		{
			return 0;
		}
	}
	if (func_177())
	{
		return 1;
	}
	if (func_171(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_171(float fParam0, bool bParam1)
{
	struct<27> Var0;
	int iVar1;
	int iVar2;
	void fVar3;
	void fVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	
	iVar2 = -1;
	fVar3 = fParam0;
	if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_ID()))
	{
		if (func_13(func_10()))
		{
			iVar5 = func_136();
			iVar6 = 0;
			iVar6 = 0;
			while (iVar6 < 63)
			{
				iVar1 = iVar6;
				if (unk_0xCE990E643CD9D0E5(Global_111858.f_18570[iVar1 /*6*/], 2) && !unk_0xCE990E643CD9D0E5(Global_111858.f_18570[iVar1 /*6*/], 3))
				{
					func_172(iVar1, &Var0);
					fVar4 = HUD::SET_BLIP_NAME_FROM_TEXT_FILE(NETWORK::NETWORK_ARE_HANDLES_THE_SAME(unk_0x9B0761B4C3EB8BC7(), 0), Var0.f_6, 1);
					if (fVar4 < fVar3)
					{
						bVar7 = true;
						if (bParam1)
						{
							if (iVar5 != Var0.f_26)
							{
								bVar7 = false;
							}
						}
						if (bVar7)
						{
							iVar2 = iVar1;
							fVar3 = fVar4;
						}
					}
				}
				iVar6++;
			}
		}
	}
	return iVar2;
}

void func_172(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_173(uParam1, "Abigail1", func_175(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_174(iParam0), 1, 0);
			break;
		
		case 1:
			func_173(uParam1, "Abigail2", func_175(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_174(iParam0), 1, 0);
			break;
		
		case 2:
			func_173(uParam1, "Barry1", func_175(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_174(iParam0), 1, 0);
			break;
		
		case 3:
			func_173(uParam1, "Barry2", func_175(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_174(iParam0), 1, 1);
			break;
		
		case 4:
			func_173(uParam1, "Barry3", func_175(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_174(iParam0), 0, 0);
			break;
		
		case 5:
			func_173(uParam1, "Barry3A", func_175(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_174(iParam0), 0, 1);
			break;
		
		case 6:
			func_173(uParam1, "Barry3C", func_175(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_174(iParam0), 0, 1);
			break;
		
		case 7:
			func_173(uParam1, "Barry4", func_175(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_174(iParam0), 0, 0);
			break;
		
		case 8:
			func_173(uParam1, "Dreyfuss1", func_175(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_174(iParam0), 0, 0);
			break;
		
		case 9:
			func_173(uParam1, "Epsilon1", func_175(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_174(iParam0), 0, 0);
			break;
		
		case 10:
			func_173(uParam1, "Epsilon2", func_175(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_174(iParam0), 1, 0);
			break;
		
		case 11:
			func_173(uParam1, "Epsilon3", func_175(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_174(iParam0), 0, 0);
			break;
		
		case 12:
			func_173(uParam1, "Epsilon4", func_175(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_174(iParam0), 0, 0);
			break;
		
		case 13:
			func_173(uParam1, "Epsilon5", func_175(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_174(iParam0), 1, 0);
			break;
		
		case 14:
			func_173(uParam1, "Epsilon6", func_175(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_174(iParam0), 0, 1);
			break;
		
		case 15:
			func_173(uParam1, "Epsilon7", func_175(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_174(iParam0), 0, 0);
			break;
		
		case 16:
			func_173(uParam1, "Epsilon8", func_175(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_174(iParam0), 1, 0);
			break;
		
		case 17:
			func_173(uParam1, "Extreme1", func_175(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_174(iParam0), 0, 1);
			break;
		
		case 18:
			func_173(uParam1, "Extreme2", func_175(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_174(iParam0), 0, 1);
			break;
		
		case 19:
			func_173(uParam1, "Extreme3", func_175(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_174(iParam0), 0, 1);
			break;
		
		case 20:
			func_173(uParam1, "Extreme4", func_175(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_174(iParam0), 0, 0);
			break;
		
		case 21:
			func_173(uParam1, "Fanatic1", func_175(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_174(iParam0), 1, 0);
			break;
		
		case 22:
			func_173(uParam1, "Fanatic2", func_175(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_174(iParam0), 1, 0);
			break;
		
		case 23:
			func_173(uParam1, "Fanatic3", func_175(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_174(iParam0), 0, 1);
			break;
		
		case 24:
			func_173(uParam1, "Hao1", func_175(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_174(iParam0), 0, 1);
			break;
		
		case 25:
			func_173(uParam1, "Hunting1", func_175(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_174(iParam0), 0, 1);
			break;
		
		case 26:
			func_173(uParam1, "Hunting2", func_175(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_174(iParam0), 0, 1);
			break;
		
		case 27:
			func_173(uParam1, "Josh1", func_175(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_174(iParam0), 1, 0);
			break;
		
		case 28:
			func_173(uParam1, "Josh2", func_175(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_174(iParam0), 1, 1);
			break;
		
		case 29:
			func_173(uParam1, "Josh3", func_175(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_174(iParam0), 1, 1);
			break;
		
		case 30:
			func_173(uParam1, "Josh4", func_175(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_174(iParam0), 1, 0);
			break;
		
		case 31:
			func_173(uParam1, "Maude1", func_175(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_174(iParam0), 0, 1);
			break;
		
		case 32:
			func_173(uParam1, "Minute1", func_175(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_174(iParam0), 0, 1);
			break;
		
		case 33:
			func_173(uParam1, "Minute2", func_175(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_174(iParam0), 0, 1);
			break;
		
		case 34:
			func_173(uParam1, "Minute3", func_175(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_174(iParam0), 0, 1);
			break;
		
		case 35:
			func_173(uParam1, "MrsPhilips1", func_175(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_174(iParam0), 0, 0);
			break;
		
		case 36:
			func_173(uParam1, "MrsPhilips2", func_175(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_174(iParam0), 0, 0);
			break;
		
		case 37:
			func_173(uParam1, "Nigel1", func_175(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_174(iParam0), 1, 0);
			break;
		
		case 38:
			func_173(uParam1, "Nigel1A", func_175(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_174(iParam0), 1, 1);
			break;
		
		case 39:
			func_173(uParam1, "Nigel1B", func_175(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_174(iParam0), 1, 1);
			break;
		
		case 40:
			func_173(uParam1, "Nigel1C", func_175(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_174(iParam0), 1, 1);
			break;
		
		case 41:
			func_173(uParam1, "Nigel1D", func_175(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_174(iParam0), 1, 1);
			break;
		
		case 42:
			func_173(uParam1, "Nigel2", func_175(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_174(iParam0), 1, 1);
			break;
		
		case 43:
			func_173(uParam1, "Nigel3", func_175(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_174(iParam0), 1, 1);
			break;
		
		case 44:
			func_173(uParam1, "Omega1", func_175(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_174(iParam0), 0, 0);
			break;
		
		case 45:
			func_173(uParam1, "Omega2", func_175(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_174(iParam0), 0, 0);
			break;
		
		case 46:
			func_173(uParam1, "Paparazzo1", func_175(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_174(iParam0), 0, 1);
			break;
		
		case 47:
			func_173(uParam1, "Paparazzo2", func_175(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_174(iParam0), 0, 1);
			break;
		
		case 48:
			func_173(uParam1, "Paparazzo3", func_175(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_174(iParam0), 0, 0);
			break;
		
		case 49:
			func_173(uParam1, "Paparazzo3A", func_175(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_174(iParam0), 0, 1);
			break;
		
		case 50:
			func_173(uParam1, "Paparazzo3B", func_175(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_174(iParam0), 0, 1);
			break;
		
		case 51:
			func_173(uParam1, "Paparazzo4", func_175(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_174(iParam0), 0, 0);
			break;
		
		case 52:
			func_173(uParam1, "Rampage1", func_175(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_174(iParam0), 0, 0);
			break;
		
		case 54:
			func_173(uParam1, "Rampage3", func_175(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_174(iParam0), 1, 0);
			break;
		
		case 55:
			func_173(uParam1, "Rampage4", func_175(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_174(iParam0), 1, 0);
			break;
		
		case 56:
			func_173(uParam1, "Rampage5", func_175(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_174(iParam0), 0, 0);
			break;
		
		case 53:
			func_173(uParam1, "Rampage2", func_175(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_174(iParam0), 1, 0);
			break;
		
		case 57:
			func_173(uParam1, "TheLastOne", func_175(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_174(iParam0), 0, 1);
			break;
		
		case 58:
			func_173(uParam1, "Tonya1", func_175(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_174(iParam0), 0, 1);
			break;
		
		case 59:
			func_173(uParam1, "Tonya2", func_175(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_174(iParam0), 0, 1);
			break;
		
		case 60:
			func_173(uParam1, "Tonya3", func_175(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_174(iParam0), 0, 1);
			break;
		
		case 61:
			func_173(uParam1, "Tonya4", func_175(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_174(iParam0), 0, 1);
			break;
		
		case 62:
			func_173(uParam1, "Tonya5", func_175(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_174(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_173(var uParam0, char* sParam1, struct<2> Param2, int iParam3, int iParam4, int iParam5, struct<3> Param6, int iParam7, char* sParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, var uParam19, int iParam20, int iParam21)
{
	uParam0->f_4 = iParam4;
	*uParam0 = sParam1;
	uParam0->f_1 = { Param2 };
	uParam0->f_3 = iParam3;
	uParam0->f_5 = iParam5;
	uParam0->f_6 = { Param6 };
	uParam0->f_9 = iParam7;
	StringCopy(&(uParam0->f_10), sParam8, 16);
	uParam0->f_14 = iParam9;
	uParam0->f_15 = iParam10;
	StringCopy(&(uParam0->f_16), sParam11, 24);
	uParam0->f_22 = iParam12;
	uParam0->f_23 = iParam13;
	uParam0->f_24 = iParam14;
	uParam0->f_25 = iParam15;
	uParam0->f_26 = iParam16;
	uParam0->f_27 = iParam17;
	uParam0->f_28 = iParam18;
	uParam0->f_29 = uParam19;
	uParam0->f_30 = iParam20;
	uParam0->f_31 = iParam21;
}

int func_174(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 1;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 1;
			break;
		
		case 6:
			return 1;
			break;
		
		case 7:
			return 0;
			break;
		
		case 8:
			return 1;
			break;
		
		case 9:
			return 0;
			break;
		
		case 10:
			return 0;
			break;
		
		case 11:
			return 0;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 0;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 0;
			break;
		
		case 16:
			return 1;
			break;
		
		case 17:
			return 1;
			break;
		
		case 18:
			return 1;
			break;
		
		case 19:
			return 1;
			break;
		
		case 20:
			return 1;
			break;
		
		case 21:
			return 1;
			break;
		
		case 22:
			return 1;
			break;
		
		case 23:
			return 1;
			break;
		
		case 24:
			return 1;
			break;
		
		case 25:
			return 1;
			break;
		
		case 26:
			return 1;
			break;
		
		case 27:
			return 0;
			break;
		
		case 28:
			return 1;
			break;
		
		case 29:
			return 1;
			break;
		
		case 30:
			return 1;
			break;
		
		case 31:
			return 0;
			break;
		
		case 32:
			return 1;
			break;
		
		case 33:
			return 1;
			break;
		
		case 34:
			return 1;
			break;
		
		case 35:
			return 0;
			break;
		
		case 36:
			return 0;
			break;
		
		case 37:
			return 0;
			break;
		
		case 38:
			return 1;
			break;
		
		case 39:
			return 1;
			break;
		
		case 40:
			return 1;
			break;
		
		case 41:
			return 1;
			break;
		
		case 42:
			return 1;
			break;
		
		case 43:
			return 1;
			break;
		
		case 44:
			return 0;
			break;
		
		case 45:
			return 0;
			break;
		
		case 46:
			return 1;
			break;
		
		case 47:
			return 1;
			break;
		
		case 48:
			return 0;
			break;
		
		case 49:
			return 1;
			break;
		
		case 50:
			return 1;
			break;
		
		case 51:
			return 1;
			break;
		
		case 52:
			return 1;
			break;
		
		case 54:
			return 1;
			break;
		
		case 55:
			return 1;
			break;
		
		case 56:
			return 1;
			break;
		
		case 53:
			return 1;
			break;
		
		case 57:
			return 1;
			break;
		
		case 58:
			return 1;
			break;
		
		case 59:
			return 1;
			break;
		
		case 60:
			return 1;
			break;
		
		case 61:
			return 1;
			break;
		
		case 62:
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

struct<2> func_175(int iParam0)
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	cVar1 = { func_176(iParam0) };
	if (CAM::IS_SCREEN_FADED_OUT(&cVar1))
	{
	}
	else
	{
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar1, 8);
	}
	return Var0;
}

struct<2> func_176(int iParam0)
{
	struct<2> Var0;
	
	StringCopy(&Var0, "", 8);
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, "ABI1", 8);
			break;
		
		case 1:
			StringCopy(&Var0, "ABI2", 8);
			break;
		
		case 2:
			StringCopy(&Var0, "BA1", 8);
			break;
		
		case 3:
			StringCopy(&Var0, "BA2", 8);
			break;
		
		case 4:
			StringCopy(&Var0, "BA3", 8);
			break;
		
		case 5:
			StringCopy(&Var0, "BA3A", 8);
			break;
		
		case 6:
			StringCopy(&Var0, "BA3C", 8);
			break;
		
		case 7:
			StringCopy(&Var0, "BA4", 8);
			break;
		
		case 8:
			StringCopy(&Var0, "DRE1", 8);
			break;
		
		case 9:
			StringCopy(&Var0, "EPS1", 8);
			break;
		
		case 10:
			StringCopy(&Var0, "EPS2", 8);
			break;
		
		case 11:
			StringCopy(&Var0, "EPS3", 8);
			break;
		
		case 12:
			StringCopy(&Var0, "EPS4", 8);
			break;
		
		case 13:
			StringCopy(&Var0, "EPS5", 8);
			break;
		
		case 14:
			StringCopy(&Var0, "EPS6", 8);
			break;
		
		case 15:
			StringCopy(&Var0, "EPS7", 8);
			break;
		
		case 16:
			StringCopy(&Var0, "EPS8", 8);
			break;
		
		case 17:
			StringCopy(&Var0, "EXT1", 8);
			break;
		
		case 18:
			StringCopy(&Var0, "EXT2", 8);
			break;
		
		case 19:
			StringCopy(&Var0, "EXT3", 8);
			break;
		
		case 20:
			StringCopy(&Var0, "EXT4", 8);
			break;
		
		case 21:
			StringCopy(&Var0, "FAN1", 8);
			break;
		
		case 22:
			StringCopy(&Var0, "FAN2", 8);
			break;
		
		case 23:
			StringCopy(&Var0, "FAN3", 8);
			break;
		
		case 24:
			StringCopy(&Var0, "HAO1", 8);
			break;
		
		case 25:
			StringCopy(&Var0, "HUN1", 8);
			break;
		
		case 26:
			StringCopy(&Var0, "HUN2", 8);
			break;
		
		case 27:
			StringCopy(&Var0, "JOS1", 8);
			break;
		
		case 28:
			StringCopy(&Var0, "JOS2", 8);
			break;
		
		case 29:
			StringCopy(&Var0, "JOS3", 8);
			break;
		
		case 30:
			StringCopy(&Var0, "JOS4", 8);
			break;
		
		case 31:
			StringCopy(&Var0, "MAU1", 8);
			break;
		
		case 32:
			StringCopy(&Var0, "MIN1", 8);
			break;
		
		case 33:
			StringCopy(&Var0, "MIN2", 8);
			break;
		
		case 34:
			StringCopy(&Var0, "MIN3", 8);
			break;
		
		case 35:
			StringCopy(&Var0, "MRS1", 8);
			break;
		
		case 36:
			StringCopy(&Var0, "MRS2", 8);
			break;
		
		case 37:
			StringCopy(&Var0, "NI1", 8);
			break;
		
		case 38:
			StringCopy(&Var0, "NI1A", 8);
			break;
		
		case 39:
			StringCopy(&Var0, "NI1B", 8);
			break;
		
		case 40:
			StringCopy(&Var0, "NI1C", 8);
			break;
		
		case 41:
			StringCopy(&Var0, "NI1D", 8);
			break;
		
		case 42:
			StringCopy(&Var0, "NI2", 8);
			break;
		
		case 43:
			StringCopy(&Var0, "NI3", 8);
			break;
		
		case 44:
			StringCopy(&Var0, "OME1", 8);
			break;
		
		case 45:
			StringCopy(&Var0, "OME2", 8);
			break;
		
		case 46:
			StringCopy(&Var0, "PA1", 8);
			break;
		
		case 47:
			StringCopy(&Var0, "PA2", 8);
			break;
		
		case 48:
			StringCopy(&Var0, "PA3", 8);
			break;
		
		case 49:
			StringCopy(&Var0, "PA3A", 8);
			break;
		
		case 50:
			StringCopy(&Var0, "PA3B", 8);
			break;
		
		case 51:
			StringCopy(&Var0, "PA4", 8);
			break;
		
		case 52:
			StringCopy(&Var0, "RAM1", 8);
			break;
		
		case 53:
			StringCopy(&Var0, "RAM2", 8);
			break;
		
		case 54:
			StringCopy(&Var0, "RAM3", 8);
			break;
		
		case 55:
			StringCopy(&Var0, "RAM4", 8);
			break;
		
		case 56:
			StringCopy(&Var0, "RAM5", 8);
			break;
		
		case 57:
			StringCopy(&Var0, "SAS1", 8);
			break;
		
		case 58:
			StringCopy(&Var0, "TON1", 8);
			break;
		
		case 59:
			StringCopy(&Var0, "TON2", 8);
			break;
		
		case 60:
			StringCopy(&Var0, "TON3", 8);
			break;
		
		case 61:
			StringCopy(&Var0, "TON4", 8);
			break;
		
		case 62:
			StringCopy(&Var0, "TON5", 8);
			break;
		
		default:
			break;
	}
	return Var0;
}

int func_177()
{
	if (func_180() && !func_181())
	{
		return 1;
	}
	if (func_179() && func_178())
	{
		return 1;
	}
	return 0;
}

bool func_178()
{
	return Global_111576 > 0;
}

int func_179()
{
	if (Global_95877 != -1)
	{
		return 1;
	}
	return 0;
}

int func_180()
{
	if (Global_95877 != -1)
	{
		return unk_0xCE990E643CD9D0E5(Global_89743[Global_95877 /*34*/].f_15, 20);
	}
	return 0;
}

int func_181()
{
	if (ENTITY::GET_ENTITY_HEADING())
	{
		if (MISC::_0xD10282B6E3751BA0() == 1f)
		{
			return 1;
		}
	}
	return 0;
}

void func_182(var uParam0, int iParam1, bool bParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = bParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_76833)
	{
		if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				STATS::_GET_NGSTAT_INT_HASH(bParam2, 0);
			}
			else
			{
				STATS::_GET_NGSTAT_INT_HASH(bParam2, 1);
			}
		}
		if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				STATS::STAT_SLOT_IS_LOADED(bParam2, 0);
			}
			else
			{
				STATS::STAT_SLOT_IS_LOADED(bParam2, 1);
			}
		}
	}
}

void func_183(char* sParam0, bool bParam1)
{
	func_185(sParam0);
	func_184(bParam1);
}

void func_184(float fParam0)
{
	if (fParam0 != 0f)
	{
	}
}

void func_185(bool bParam0)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS(uParam0, uParam0))
	{
	}
}

int func_186()
{
	if (!func_163(5))
	{
		return 1;
	}
	if (func_177())
	{
		return 1;
	}
	if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(unk_0x9B0761B4C3EB8BC7()))
	{
		if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(unk_0x9B0761B4C3EB8BC7())) > 1369f && !func_181())
		{
			return 0;
		}
	}
	if (func_171(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_187()
{
	if ((Global_111847 == func_140() && MISC::GET_RANDOM_EVENT_FLAG()) && Global_111848)
	{
		return 1;
	}
	return 0;
}

void func_188()
{
	if (func_116(unk_0x9B0761B4C3EB8BC7()))
	{
		if (SYSTEM::VDIST(unk_0x9B0761B4C3EB8BC7(), 0))
		{
			if (ENTITY::GET_ENTITY_MODEL(unk_0x9B0761B4C3EB8BC7(), 0) != bLocal_73 && ENTITY::GET_ENTITY_MODEL(unk_0x9B0761B4C3EB8BC7(), 0) != bLocal_76)
			{
				bLocal_76 = ENTITY::GET_ENTITY_MODEL(unk_0x9B0761B4C3EB8BC7(), 0);
			}
		}
	}
}

void func_189(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	if (*uParam1 == -99)
	{
		*uParam1 = MISC::GET_GAME_TIMER();
	}
	if (SYSTEM::VMAG(iParam0))
	{
		iVar0 = (MISC::GET_GAME_TIMER() - *uParam1);
		if (iVar0 < 5000)
		{
			iVar1 = SYSTEM::CEIL((SYSTEM::TO_FLOAT(iVar0) / 1000f));
			if ((iVar1 * 1000 - iVar0) < 500)
			{
				if (HUD::GET_BLIP_ALPHA(iParam0) != 255)
				{
					HUD::SET_BLIP_ALPHA(iParam0, 255);
				}
			}
			else if (HUD::GET_BLIP_ALPHA(iParam0) != 0)
			{
				HUD::SET_BLIP_ALPHA(iParam0, 0);
			}
		}
		else if (*uParam1 != -100)
		{
			*uParam1 = -100;
			if (HUD::GET_BLIP_ALPHA(iParam0) != 255)
			{
				HUD::SET_BLIP_ALPHA(iParam0, 255);
			}
		}
	}
}

void func_190()
{
}

void func_191(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_140();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_193(iParam0);
	MISC::_0x65D2EBB47E1CEC21(false);
	MISC::SET_RANDOM_EVENT_FLAG(true);
	Global_111844 = 0;
	func_192();
}

void func_192()
{
	if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(unk_0x9B0761B4C3EB8BC7()))
	{
		if (SYSTEM::VDIST(unk_0x9B0761B4C3EB8BC7(), 0))
		{
			VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(unk_0x9B0761B4C3EB8BC7(), 0)), true);
		}
		PLAYER::SET_PLAYER_VEHICLE_DEFENSE_MODIFIER(unk_0x9B0761B4C3EB8BC7(), 4.484155E-44f, 0);
	}
}

void func_193(int iParam0)
{
	Global_111847 = iParam0;
}

int func_194(struct<3> Param0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	bool bVar0;
	struct<3> Var1;
	int iVar2;
	struct<3> Var3;
	int iVar4;
	
	if (!Global_150438)
	{
		return 0;
	}
	if (iParam1 == -1)
	{
		iParam1 = func_140();
	}
	if (iParam1 == -1)
	{
		return 0;
	}
	if (iParam1 == 31 || iParam1 == 32)
	{
		if (!func_234())
		{
			return 0;
		}
	}
	Local_45 = { Param0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_ID()) && !STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(unk_0x9B0761B4C3EB8BC7()))
		{
			Var1 = { NETWORK::NETWORK_ARE_HANDLES_THE_SAME(unk_0x9B0761B4C3EB8BC7(), 1) };
			if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(unk_0x9B0761B4C3EB8BC7())) > 1369f && !func_181())
			{
				return 0;
			}
		}
		if (!Global_111858.f_9081)
		{
			return 0;
		}
		if (func_123(0))
		{
			return 0;
		}
		if (func_177())
		{
			return 0;
		}
		if (func_233())
		{
			return 0;
		}
		if (Global_111847 != -1)
		{
			return 0;
		}
		if (func_13(func_10()))
		{
			if (func_171(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_ID()) && !bParam4)
		{
			if ((Var1.f_2 - Local_45.f_2) > 50f)
			{
				return 0;
			}
		}
		if (!func_232(iParam1))
		{
			return 0;
		}
		if (func_13(func_10()))
		{
			if (func_231(func_10()) == 4 || func_231(func_10()) == 5)
			{
				return 0;
			}
		}
		if (func_13(func_10()))
		{
			if (!func_230(iParam1, iParam2, 145))
			{
				return 0;
			}
		}
		if (!func_229(Global_111858.f_24991.f_43[iParam1]))
		{
			return 0;
		}
		if ((MISC::GET_GAME_TIMER() - Global_111849) < 150000)
		{
			if (iParam1 != 30)
			{
				return 0;
			}
		}
		if (func_228())
		{
			return 0;
		}
		if (MISC::GET_MISSION_FLAG())
		{
			return 0;
		}
		if (MISC::GET_RANDOM_EVENT_FLAG())
		{
			return 0;
		}
		if (!func_219(4))
		{
			return 0;
		}
		if (!func_163(5))
		{
			return 0;
		}
		if (func_218(iParam1, iParam2) && !bParam3)
		{
			return 0;
		}
		if (Global_3 && iParam1 != 10)
		{
			return 0;
		}
		if (unk_0x0B1B45E748AD48BA(MONEY::NETWORK_SPENT_REQUEST_HEIST(unk_0x9B0761B4C3EB8BC7())))
		{
			if ((MONEY::NETWORK_SPENT_REQUEST_HEIST(unk_0x9B0761B4C3EB8BC7()) == CUTSCENE::IS_CUTSCENE_PLAYING(377.153f, -717.567f, 10.0536f) || MONEY::NETWORK_SPENT_REQUEST_HEIST(unk_0x9B0761B4C3EB8BC7()) == CUTSCENE::IS_CUTSCENE_PLAYING(320.9934f, 265.2515f, 82.1221f)) || MONEY::NETWORK_SPENT_REQUEST_HEIST(unk_0x9B0761B4C3EB8BC7()) == CUTSCENE::IS_CUTSCENE_PLAYING(-1425.564f, -244.3f, 15.8053f))
			{
				return 0;
			}
		}
		if ((iParam1 == 9 && (iParam2 == 2 || iParam2 == 5)) && !func_218(0, 0))
		{
			return 0;
		}
		if (Global_31114)
		{
			return 0;
		}
		if (func_232(30) && !func_218(30, 0))
		{
			if (iParam1 != 30)
			{
				if (SYSTEM::VDIST2(Var1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_13(func_10()))
		{
			iVar2 = 0;
			while (iVar2 < 3)
			{
				Var3 = { Global_111858.f_2359.f_539.f_2300[iVar2 /*3*/] };
				iVar4 = Global_111858.f_2359.f_539.f_2296[iVar2];
				if (func_217(iVar4))
				{
					if (func_195(iVar2))
					{
						if (!func_98(Var3, 0f, 0f, 0f, 0))
						{
							if (SYSTEM::VDIST2(NETWORK::NETWORK_ARE_HANDLES_THE_SAME(unk_0x9B0761B4C3EB8BC7(), 0), Var3) < (210f * 210f))
							{
								if (func_10() != iVar2)
								{
									return 0;
								}
							}
						}
					}
				}
				iVar2++;
			}
		}
	}
	return 1;
}

bool func_195(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_111858.f_2359.f_539.f_2296[iParam0];
	return func_196(iVar0);
}

int func_196(int iParam0)
{
	return func_197(iParam0, 1);
}

int func_197(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_217(iParam0))
	{
		return 0;
	}
	func_198(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_198(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	func_199(func_210(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_199(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_209(iParam0, iParam1))
	{
		iVar0 = func_208(iParam1);
		iVar1 = func_206(iParam0);
		iVar2 = (func_206(iParam0) - func_206(iParam1));
		iVar3 = (func_208(iParam0) - func_208(iParam1));
		iVar4 = (func_205(iParam0) - func_205(iParam1));
		iVar5 = (func_204(iParam0) - func_204(iParam1));
		iVar6 = (func_203(iParam0) - func_203(iParam1));
		iVar7 = (func_202(iParam0) - func_202(iParam1));
	}
	else
	{
		iVar0 = func_208(iParam0);
		iVar1 = func_206(iParam1);
		iVar2 = (func_206(iParam1) - func_206(iParam0));
		iVar3 = (func_208(iParam1) - func_208(iParam0));
		iVar4 = (func_205(iParam1) - func_205(iParam0));
		iVar5 = (func_204(iParam1) - func_204(iParam0));
		iVar6 = (func_203(iParam1) - func_203(iParam0));
		iVar7 = (func_202(iParam1) - func_202(iParam0));
	}
	while (iVar7 < 0)
	{
		iVar7 += 60;
		iVar6 = (iVar6 - 1);
	}
	while (iVar7 > 59)
	{
		iVar7 = (iVar7 - 60);
		iVar6++;
	}
	while (iVar6 < 0)
	{
		iVar6 += 60;
		iVar5 = (iVar5 - 1);
	}
	while (iVar6 > 59)
	{
		iVar6 = (iVar6 - 60);
		iVar5++;
	}
	while (iVar5 < 0)
	{
		iVar5 += 24;
		iVar4 = (iVar4 - 1);
	}
	while (iVar5 > 23)
	{
		iVar5 = (iVar5 - 24);
		iVar4++;
	}
	while (iVar4 < 0)
	{
		while (iVar3 < 0)
		{
			iVar3 += 12;
			iVar2 = (iVar2 - 1);
		}
		iVar4 = (iVar4 + func_201(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = SYSTEM::ROUND(func_200(SYSTEM::TO_FLOAT(iVar0 + 1), 0f, 12f));
	}
	while (iVar3 < 0)
	{
		iVar3 += 12;
		iVar2 = (iVar2 - 1);
	}
	while (iVar3 > 12)
	{
		iVar3 = (iVar3 - 12);
		iVar2++;
	}
	*uParam2 = iVar7;
	*uParam3 = iVar6;
	*uParam4 = iVar5;
	*uParam5 = iVar4;
	*uParam6 = iVar3;
	*uParam7 = iVar2;
}

float func_200(float fParam0, float fParam1, float fParam2)
{
	float fVar0;
	
	if (fParam1 == fParam2)
	{
		return fParam1;
	}
	fVar0 = (fParam2 - fParam1);
	fParam0 = (fParam0 - (IntToFloat(SYSTEM::ROUND(((fParam0 - fParam1) / fVar0))) * fVar0));
	if (fParam0 < fParam1)
	{
		fParam0 = (fParam0 + fVar0);
	}
	return fParam0;
}

int func_201(int iParam0, int iParam1)
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

int func_202(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 20) & 63;
}

int func_203(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 14) & 63;
}

int func_204(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 9) & 31;
}

int func_205(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 4) & 31;
}

int func_206(bool bParam0)
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * func_207(unk_0xCE990E643CD9D0E5(iParam0, 31), -1, 1)) + 2011;
}

int func_207(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_208(int iParam0)
{
	return iParam0 & 15;
}

int func_209(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_217(iParam1) || !func_217(iParam0))
	{
		return 1;
	}
	iVar0 = func_206(iParam0);
	iVar1 = func_206(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_208(iParam0);
	iVar1 = func_208(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_205(iParam0);
	iVar1 = func_205(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_204(iParam0);
	iVar1 = func_204(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_203(iParam0);
	iVar1 = func_203(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_202(iParam0);
	iVar1 = func_202(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_210()
{
	var uVar0;
	
	func_216(&uVar0, CLOCK::GET_CLOCK_MINUTES());
	func_215(&uVar0, CLOCK::GET_CLOCK_HOURS());
	func_214(&uVar0, CLOCK::GET_CLOCK_DAY_OF_MONTH());
	func_213(&uVar0, CLOCK::GET_CLOCK_MONTH());
	func_212(&uVar0, CLOCK::GET_CLOCK_YEAR());
	func_211(&uVar0, SYSTEM::SHIFT_LEFT());
	return uVar0;
}

void func_211(var uParam0, int iParam1)
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

void func_212(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_213(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_208(*uParam0);
	iVar1 = func_206(*uParam0);
	if (iParam1 < 1 || iParam1 > func_201(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

void func_214(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_215(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_216(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

int func_217(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (iParam0 == -15)
	{
		return 0;
	}
	iVar0 = func_202(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_203(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_204(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_206(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_208(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_205(iParam0);
	if (iVar5 < 1 || iVar5 > func_201(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_218(int iParam0, int iParam1)
{
	if (unk_0xCE990E643CD9D0E5(Global_111858.f_24991.f_8[iParam0], iParam1))
	{
		return 1;
	}
	return 0;
}

int func_219(int iParam0)
{
	int iVar0;
	
	if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_ID()))
	{
		if (MISC::IS_BIT_SET(unk_0x9B0761B4C3EB8BC7()))
		{
			if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(unk_0x9B0761B4C3EB8BC7()))
			{
				iVar0 = func_10();
				if (!func_13(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(unk_0x9B0761B4C3EB8BC7())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(unk_0x9B0761B4C3EB8BC7())) || MISC::IS_PC_VERSION(unk_0x9B0761B4C3EB8BC7())) || PED::IS_PED_SHOOTING(unk_0x9B0761B4C3EB8BC7())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())) || PED::IS_PED_IN_COMBAT(unk_0x9B0761B4C3EB8BC7(), false)) || func_227()) || Global_110905) || Global_30970) || func_226()) || func_59(8, -1)) || func_225()) || func_224()) || func_223()) || func_222()) || Global_111858.f_7684.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || func_227()) || Global_30970) || func_226()) || func_59(8, -1)) || func_223()) || func_225()) || func_224()) || func_222()) || Global_111858.f_7684.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(unk_0x9B0761B4C3EB8BC7())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(unk_0x9B0761B4C3EB8BC7())) || MISC::IS_PC_VERSION(unk_0x9B0761B4C3EB8BC7())) || PED::IS_PED_SHOOTING(unk_0x9B0761B4C3EB8BC7())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())) || PED::IS_PED_IN_COMBAT(unk_0x9B0761B4C3EB8BC7(), false)) || func_227()) || Global_110905) || Global_30970) || func_226()) || func_59(8, -1)) || func_223()) || func_225()) || func_224()) || func_222()) || Global_111858.f_7684.f_919[iVar0] == 5) || Global_42178 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((MISC::IS_PC_VERSION(unk_0x9B0761B4C3EB8BC7()) || PED::IS_PED_SHOOTING(unk_0x9B0761B4C3EB8BC7())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PED::IS_PED_IN_COMBAT(unk_0x9B0761B4C3EB8BC7(), false)) || func_227()) || Global_110905) || Global_30970) || func_226()) || func_59(8, -1)) || func_225()) || func_224()) || func_222()) || Global_111858.f_7684.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_227() || AUDIO::SET_SCRIPT_UPDATE_DOOR_AUDIO(PLAYER::PLAYER_ID()) > 0) || func_59(8, -1)) || func_222()) || func_221()) || Global_111858.f_7684.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_59(8, -1) || func_225()) || func_224()) || func_221()) || func_220())
						{
							return 0;
						}
						if ((LOCALIZATION::GET_CURRENT_LANGUAGE() && STREAMING::GET_PLAYER_SWITCH_TYPE() != 3) && STREAMING::GET_PLAYER_SWITCH_STATE() < 8)
						{
							return 0;
						}
						break;
					
					case 6:
						if (MISC::IS_BIT_SET(unk_0x9B0761B4C3EB8BC7()))
						{
							if ((((((((((((((PED::IS_PED_IN_COMBAT(unk_0x9B0761B4C3EB8BC7(), false) || AUDIO::SET_SCRIPT_UPDATE_DOOR_AUDIO(PLAYER::PLAYER_ID()) > 0) || ENTITY::IS_ENTITY_IN_AIR(unk_0x9B0761B4C3EB8BC7())) || MISC::IS_PC_VERSION(unk_0x9B0761B4C3EB8BC7())) || PED::IS_PED_SHOOTING(unk_0x9B0761B4C3EB8BC7())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())) || func_227()) || Global_30970) || func_226()) || func_59(8, -1)) || func_224()) || func_223()) || func_222()) || Global_111858.f_7684.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((PED::IS_PED_IN_COMBAT(unk_0x9B0761B4C3EB8BC7(), false) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) || !GRAPHICS::DRAW_SCALEFORM_MOVIE()) || ENTITY::IS_ENTITY_IN_AIR(unk_0x9B0761B4C3EB8BC7())) || MISC::IS_PC_VERSION(unk_0x9B0761B4C3EB8BC7())) || PED::IS_PED_SHOOTING(unk_0x9B0761B4C3EB8BC7())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || func_227()) || func_224()) || Global_110905) || Global_30970) || func_226()) || Global_42801) || func_59(8, -1)) || func_223()) || func_221()) || func_222()) || Global_111858.f_7684.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((PED::IS_PED_IN_COMBAT(unk_0x9B0761B4C3EB8BC7(), false) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) || !GRAPHICS::DRAW_SCALEFORM_MOVIE()) || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0)) || ENTITY::IS_ENTITY_IN_AIR(unk_0x9B0761B4C3EB8BC7())) || SYSTEM::VDIST(unk_0x9B0761B4C3EB8BC7(), 1)) || MISC::IS_PC_VERSION(unk_0x9B0761B4C3EB8BC7())) || PED::IS_PED_SHOOTING(unk_0x9B0761B4C3EB8BC7())) || PED::IS_PED_DIVING(unk_0x9B0761B4C3EB8BC7())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())) || func_227()) || Global_110905) || Global_30970) || func_226()) || func_59(8, -1)) || func_223()) || func_221()) || func_225()) || func_224()) || func_222())
						{
							return 0;
						}
						break;
				}
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	else
	{
		return 0;
	}
	return 1;
}

var func_220()
{
	return Global_98994.f_1;
}

int func_221()
{
	if (Global_95877 != -1)
	{
		return unk_0xCE990E643CD9D0E5(Global_89743[Global_95877 /*34*/].f_15, 13);
	}
	return 0;
}

int func_222()
{
	if (INTERIOR::GET_INTERIOR_AT_COORDS(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_223()
{
	if (Global_77093)
	{
		return 1;
	}
	else if (Global_61711 && !Global_61717)
	{
		return 1;
	}
	return 0;
}

bool func_224()
{
	return Global_99007.f_352 > 0;
}

bool func_225()
{
	return Global_99007.f_351 > 0;
}

var func_226()
{
	return Global_1312896;
}

int func_227()
{
	if (!MISC::SET_BIT())
	{
		return Global_96433.f_44 == 1;
	}
	return 0;
}

int func_228()
{
	func_57();
	if (Global_8356[Global_19681 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_229(int iParam0)
{
	return func_209(func_210(), iParam0);
}

int func_230(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_10();
	if (iParam2 != 145 && ((iParam2 == 0 || iParam2 == 1) || iParam2 == 2))
	{
		iVar1 = iParam2;
	}
	switch (iParam0)
	{
		case 18:
			if (iVar1 == 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 19:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 20:
			if (iVar1 != 1)
			{
				iVar0 = 1;
			}
			break;
		
		case 28:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 13:
			if (iVar1 == 0)
			{
				if (iParam1 == 2)
				{
					iVar0 = 0;
				}
				else
				{
					iVar0 = 1;
				}
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 22:
			if (iParam1 == 2 || iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 30:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 1;
			break;
	}
	return iVar0;
}

int func_231(int iParam0)
{
	if (!func_13(iParam0))
	{
		return 7;
	}
	return Global_111858.f_7684.f_919[iParam0];
}

bool func_232(int iParam0)
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_234())
		{
			return 0;
		}
	}
	iVar0 = iParam0;
	if (iVar0 < 31)
	{
		bVar1 = unk_0xCE990E643CD9D0E5(Global_111858.f_24991, iVar0);
	}
	else
	{
		iVar0 = (iVar0 - 31);
		bVar1 = unk_0xCE990E643CD9D0E5(Global_111858.f_24991.f_1, iVar0);
	}
	return bVar1;
}

int func_233()
{
	int iVar0;
	
	if (Global_31118)
	{
		if (SYSTEM::VDIST(unk_0x9B0761B4C3EB8BC7(), 0))
		{
			iVar0 = ENTITY::GET_ENTITY_MODEL(unk_0x9B0761B4C3EB8BC7(), 0);
			if (ENTITY::GET_ENTITY_COORDS(iVar0, false))
			{
				if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(MISC::IS_MINIGAME_IN_PROGRESS(bVar0, 0, 0)))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_234()
{
	bool bVar0;
	
	if (VEHICLE::IS_THIS_MODEL_A_BIKE())
	{
		if (VEHICLE::IS_THIS_MODEL_A_QUADBIKE())
		{
			if (MONEY::NETWORK_REFUND_CASH())
			{
				STATS::STAT_GET_INT(joaat("SP_UNLOCK_EXCLUS_CONTENT"), &bVar0, -1);
				unk_0xBE20AB8238688965(&bVar0, 2);
				unk_0xBE20AB8238688965(&bVar0, 4);
				unk_0xBE20AB8238688965(&bVar0, 6);
				unk_0xBE20AB8238688965(&Global_25, 2);
				unk_0xBE20AB8238688965(&Global_25, 4);
				unk_0xBE20AB8238688965(&Global_25, 6);
				NETWORK::NETWORK_HAS_SOCIAL_CLUB_ACCOUNT(joaat("SP_UNLOCK_EXCLUS_CONTENT"), bVar0, 1);
				if (STATS::STAT_SET_MASKED_INT())
				{
					bVar0 = VEHICLE::IS_THIS_MODEL_A_CAR(866);
					unk_0xBE20AB8238688965(&bVar0, 0);
					MONEY::NETWORK_CAN_SPEND_MONEY(bVar0);
				}
				return 1;
			}
		}
	}
	if (Global_150693 == 2)
	{
		return 1;
	}
	else if (Global_150693 == 3)
	{
		return 0;
	}
	if (STATS::STAT_SET_MASKED_INT())
	{
		if (unk_0xCE990E643CD9D0E5(VEHICLE::IS_THIS_MODEL_A_CAR(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_235(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	if (Global_92940[iParam0 /*2*/])
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < Global_89707)
	{
		if (Global_89707[iVar0 /*5*/] != -1)
		{
			if (Global_77102.f_109[Global_89707[iVar0 /*5*/] /*4*/] == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void func_236()
{
	if (SYSTEM::VDIST(Local_50, -2255.21f, 4271.04f, 44.875f) < 5f)
	{
		iLocal_121 = 1;
	}
	else if (SYSTEM::VDIST(Local_50, -500.924f, -2165.36f, 7.6988f) < 5f)
	{
		iLocal_121 = 2;
	}
}

void func_237()
{
	if (MISC::IS_BIT_SET(bLocal_72) && !PED::IS_PED_IN_ANY_POLICE_VEHICLE(bLocal_72, 0))
	{
		PED::_0x2208438012482A1A(bLocal_72, 0);
		unk_0x74528AC0906CBABE(MISC::GET_MODEL_DIMENSIONS(bLocal_72));
		func_249(&bLocal_72, 1, 0, 1);
	}
	if (MISC::IS_BIT_SET(bLocal_71) && !PED::IS_PED_IN_ANY_POLICE_VEHICLE(bLocal_71, 0))
	{
		PED::SET_PED_RESET_FLAG(bLocal_71, 310, true);
		PED::_0x2208438012482A1A(bLocal_71, 0);
	}
	if (SYSTEM::VMAG(iLocal_60))
	{
		unk_0x93370FA10F15BE44(&iLocal_60);
	}
	func_69(&uLocal_63);
	if (SYSTEM::VMAG(iLocal_61))
	{
		unk_0x93370FA10F15BE44(&iLocal_61);
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("RE_CAR_STEAL_SCENE"))
	{
		if (func_168(bLocal_73))
		{
			AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(bLocal_73, 0f);
		}
		AUDIO::STOP_AUDIO_SCENE("RE_CAR_STEAL_SCENE");
	}
	if (iLocal_121 == 2)
	{
		VEHICLE::REMOVE_VEHICLE_ASSET(joaat("rocoto"));
	}
	else
	{
		VEHICLE::REMOVE_VEHICLE_ASSET(joaat("peyote"));
	}
	func_17(&bLocal_73);
	if (func_168(bLocal_76))
	{
		VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(bLocal_76, true);
	}
	MISC::SET_INSTANCE_PRIORITY_HINT(0);
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	func_152(39, 0);
	func_152(40, 0);
	func_152(41, 0);
	func_152(42, 0);
	func_152(43, 0);
	func_152(44, 0);
	func_238(-1);
	func_71(&uLocal_138, 0, 0);
	ENTITY::STOP_ENTITY_ANIM();
}

void func_238(int iParam0)
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_140();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_187())
	{
		func_242(iParam0);
		HUD::SET_MISSION_NAME(false, 0);
		Global_111849 = MISC::GET_GAME_TIMER();
		func_241(30000);
		StringCopy(&cVar0, func_240(Global_111847, 1), 64);
		if (func_139(Global_111847) > 0)
		{
			StringConCat(&cVar0, " Variation ", 64);
			StringIntConCat(&cVar0, Global_111846, 64);
		}
		STATS::PLAYSTATS_RANDOM_MISSION_DONE(&cVar0, Global_111844, (MISC::GET_GAME_TIMER() - Global_111845), 0);
	}
	else if (unk_0xCE990E643CD9D0E5(Global_111854, 0) && Global_111858.f_24991.f_2 < 3)
	{
		VEHICLE::IS_VEHICLE_DRIVEABLE(&Global_111854, false);
	}
	func_239(&Global_31027);
	Global_111848 = 0;
	func_193(-1);
}

void func_239(var uParam0)
{
	if (*uParam0 == -1)
	{
		return;
	}
	if (!*uParam0 == Global_41593)
	{
		*uParam0 = -1;
		return;
	}
	*uParam0 = -1;
	Global_41592 = 0;
	Global_41594 = 0;
	Global_41631 = 15;
	Global_61714 = 0;
	Global_61715 = 0;
}

char* func_240(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			return "RE_ACCIDENT";
			break;
		
		case 1:
			return "RE_ATMROBBERY";
			break;
		
		case 2:
			return "RE_BUSTOUR";
			break;
		
		case 3:
			return "RE_DOMESTIC";
			break;
		
		case 4:
			return "RE_GETAWAYDRIVER";
			break;
		
		case 5:
			return "RE_SHOPROBBERY";
			break;
		
		case 6:
			return "RE_SNATCHED";
			break;
		
		case 7:
			return "RE_LURED";
			break;
		
		case 8:
			return "RE_BIKETHIEFSTAMP";
			break;
		
		case 9:
			return "RE_SECURITYVAN";
			break;
		
		case 10:
			return "RE_PAPARAZZI";
			break;
		
		case 11:
			return "RE_CHASETHIEVES";
			break;
		
		case 12:
			return "RE_DEALGONEWRONG";
			break;
		
		case 13:
			return "RE_HITCHLIFT";
			break;
		
		case 14:
			return "RE_STAG";
			break;
		
		case 15:
			return "RE_ARREST";
			break;
		
		case 16:
			return "RE_CRASHRESCUE";
			break;
		
		case 17:
			return "RE_CARTHEFT";
			break;
		
		case 18:
			return "RE_CULTSHOOTOUT";
			break;
		
		case 19:
			return "RE_GANGFIGHT";
			break;
		
		case 20:
			return "RE_GANGINTIMIDATION";
			break;
		
		case 21:
			return "RE_PRISONVANBREAK";
			break;
		
		case 22:
			return "RE_PRISONERLIFT";
			break;
		
		case 23:
			return "RE_ABANDONEDCAR";
			break;
		
		case 24:
			return "RE_BURIAL";
			break;
		
		case 25:
			return "RE_MUGGING";
			break;
		
		case 26:
			return "RE_BIKETHIEF";
			break;
		
		case 27:
			return "RE_DRUNKDRIVER";
			break;
		
		case 28:
			return "RE_HOMELANDSECURITY";
			break;
		
		case 29:
			return "RE_BORDERPATROL";
			break;
		
		case 30:
			return "RE_SIMEONYETARIAN";
			break;
		
		case 31:
			return "RE_DUEL";
			break;
		
		case 32:
			return "RE_SEAPLANE";
			break;
		
		case 33:
			return "RE_MONKEYPHOTO";
			break;
		
		case -1:
			return "RE_NONE";
			break;
	}
	if (!bParam1)
	{
	}
	return "UNKNOWN";
}

void func_241(int iParam0)
{
	Global_42182 = (MISC::GET_GAME_TIMER() + iParam0);
}

void func_242(int iParam0)
{
	func_243(iParam0, 0, func_248(iParam0));
}

void func_243(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_210();
	func_246(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_245(iParam0, &uVar0);
	Var1 = { func_244(&uVar0) };
}

struct<16> func_244(var uParam0)
{
	struct<16> Var0;
	int iVar1;
	
	StringCopy(&Var0, "", 64);
	iVar1 = func_204(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_203(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_202(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "  ", 64);
	iVar1 = func_205(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "/", 64);
	iVar1 = func_208(*uParam0);
	if (iVar1 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_206(*uParam0), 64);
	return Var0;
}

void func_245(int iParam0, var uParam1)
{
	Global_111858.f_24991.f_43[iParam0] = *uParam1;
}

void func_246(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_206(*uParam0);
	iVar1 = func_208(*uParam0);
	iVar2 = func_205(*uParam0);
	iVar3 = func_204(*uParam0);
	iVar4 = func_203(*uParam0);
	iVar5 = func_202(*uParam0);
	if (((((iParam6 == 0 && iParam5 == 0) && iParam4 == 0) && iParam3 == 0) && iParam2 == 0) && iParam1 == 0)
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam2 < 0)
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam4 < 0)
	{
		return;
	}
	if (iParam5 < 0)
	{
		return;
	}
	if (iParam6 < 0)
	{
		return;
	}
	iVar5 = (iVar5 + iParam1);
	while (iVar5 >= 60)
	{
		iParam2++;
		iVar5 = (iVar5 - 60);
	}
	iVar4 = (iVar4 + iParam2);
	while (iVar4 >= 60)
	{
		iParam3++;
		iVar4 = (iVar4 - 60);
	}
	iVar3 = (iVar3 + iParam3);
	while (iVar3 >= 24)
	{
		iParam4++;
		iVar3 = (iVar3 - 24);
	}
	iVar2 = (iVar2 + iParam4);
	iVar6 = func_201(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_201(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_247(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_247(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_216(uParam0, iParam1);
	func_215(uParam0, iParam2);
	func_214(uParam0, iParam3);
	func_212(uParam0, iParam5);
	func_213(uParam0, iParam4);
	func_211(uParam0, iParam6);
}

int func_248(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 23:
			iVar0 = 30;
			break;
		
		case 0:
			iVar0 = 30;
			break;
		
		case 15:
			iVar0 = 30;
			break;
		
		case 1:
			iVar0 = 200;
			break;
		
		case 26:
			iVar0 = 30;
			break;
		
		case 8:
			iVar0 = 30;
			break;
		
		case 29:
			iVar0 = 30;
			break;
		
		case 24:
			iVar0 = 30;
			break;
		
		case 2:
			iVar0 = 0;
			break;
		
		case 17:
			iVar0 = 30;
			break;
		
		case 11:
			iVar0 = 30;
			break;
		
		case 16:
			iVar0 = 30;
			break;
		
		case 18:
			iVar0 = 30;
			break;
		
		case 12:
			iVar0 = 120;
			break;
		
		case 3:
			iVar0 = 60;
			break;
		
		case 27:
			iVar0 = 60;
			break;
		
		case 19:
			iVar0 = 30;
			break;
		
		case 20:
			iVar0 = 30;
			break;
		
		case 4:
			iVar0 = 60;
			break;
		
		case 28:
			iVar0 = 30;
			break;
		
		case 13:
			iVar0 = 35;
			break;
		
		case 7:
			iVar0 = 30;
			break;
		
		case 25:
			iVar0 = 40;
			break;
		
		case 10:
			iVar0 = 30;
			break;
		
		case 22:
			iVar0 = 30;
			break;
		
		case 21:
			iVar0 = 30;
			break;
		
		case 5:
			iVar0 = 30;
			break;
		
		case 30:
			iVar0 = 60;
			break;
		
		case 9:
			iVar0 = 60;
			break;
		
		case 6:
			iVar0 = 40;
			break;
		
		case 14:
			iVar0 = 40;
			break;
	}
	return iVar0;
}

void func_249(int* iParam0, bool bParam1, int iParam2, int iParam3)
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

