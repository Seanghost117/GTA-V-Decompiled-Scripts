#region Local Var
	int iLocal_0 = 0;
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
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	float fLocal_15 = 0f;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	int iLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	char* sLocal_21 = NULL;
	float fLocal_22 = 0f;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	float fLocal_26 = 0f;
	float fLocal_27 = 0f;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	int iLocal_45 = 0;
	struct<3> Local_46 = { 0, 0, 0 } ;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	var uLocal_53 = 16;
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
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	var uLocal_162 = 0;
	var uLocal_163 = 0;
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	var uLocal_166 = 0;
	var uLocal_167 = 0;
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	var uLocal_171 = 0;
	var uLocal_172 = 0;
	var uLocal_173 = 0;
	var uLocal_174 = 0;
	var uLocal_175 = 0;
	var uLocal_176 = 0;
	var uLocal_177 = 0;
	var uLocal_178 = 0;
	var uLocal_179 = 0;
	var uLocal_180 = 0;
	var uLocal_181 = 0;
	var uLocal_182 = 0;
	var uLocal_183 = 0;
	var uLocal_184 = 0;
	var uLocal_185 = 0;
	var uLocal_186 = 0;
	var uLocal_187 = 0;
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	var uLocal_190 = 0;
	var uLocal_191 = 0;
	var uLocal_192 = 0;
	var uLocal_193 = 0;
	var uLocal_194 = 0;
	var uLocal_195 = 0;
	var uLocal_196 = 0;
	var uLocal_197 = 0;
	var uLocal_198 = 0;
	var uLocal_199 = 0;
	var uLocal_200 = 0;
	var uLocal_201 = 0;
	var uLocal_202 = 0;
	var uLocal_203 = 0;
	var uLocal_204 = 0;
	var uLocal_205 = 0;
	var uLocal_206 = 0;
	var uLocal_207 = 0;
	var uLocal_208 = 0;
	var uLocal_209 = 0;
	var uLocal_210 = 0;
	var uLocal_211 = 0;
	var uLocal_212 = 0;
	var uLocal_213 = 0;
	var uLocal_214 = 0;
	var uLocal_215 = 0;
	var uLocal_216 = 0;
	var uLocal_217 = 0;
	var uLocal_218[3] = { 0, 0, 0 };
	float fLocal_219 = 0f;
	float fLocal_220 = 0f;
	struct<3> Local_221 = { 0, 0, 0 } ;
	struct<3> Local_222[3];
	float fLocal_223[3] = { 0f, 0f, 0f };
	struct<3> Local_224 = { 0, 0, 0 } ;
	int iLocal_225 = 0;
	int iLocal_226 = 0;
	int iLocal_227 = 0;
	int iLocal_228 = 0;
	int iLocal_229 = 0;
	int iLocal_230 = 0;
	int iLocal_231 = 0;
	var uLocal_232 = 0;
	int iLocal_233 = 0;
	int iLocal_234 = 0;
	bool bLocal_235 = 0;
	struct<3> Local_236 = { 0, 0, 0 } ;
	struct<2> Local_237 = { 0, 5 } ;
	var uLocal_238 = 0;
	var uLocal_239 = 0;
	var uLocal_240 = 0;
	var uLocal_241 = 0;
	var uLocal_242 = 0;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	var uLocal_245 = 0;
	var uLocal_246 = 0;
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	var uLocal_249 = 0;
	var uLocal_250 = 0;
	var uLocal_251 = 0;
	var uLocal_252 = 0;
	var uLocal_253 = 5;
	var uLocal_254 = 0;
	var uLocal_255 = 0;
	var uLocal_256 = 0;
	var uLocal_257 = 0;
	var uLocal_258 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;
	struct<6> Var1;
	int iVar2;
	bool bVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	bool bVar7;
	int iVar8;
	struct<3> Var9;
	float fVar10;
	int iVar11[3];
	bool bVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	
	iLocal_0 = 3;
	iLocal_3 = 1;
	iLocal_4 = 134;
	iLocal_5 = 134;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 1;
	iLocal_9 = 134;
	iLocal_10 = 1;
	iLocal_11 = 12;
	iLocal_12 = 12;
	fLocal_15 = 0.001f;
	iLocal_18 = -1;
	sLocal_21 = "NULL";
	fLocal_22 = 0f;
	fLocal_26 = -0.0375f;
	fLocal_27 = 0.17f;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	iVar0 = 0;
	Var1 = 3;
	iVar2 = 0;
	iLocal_49 = 3;
	Local_221 = { ScriptParam_237.f_1[0 /*3*/] };
	Local_222[0 /*3*/] = { 1283.85f, -1622.501f, 53.2255f };
	fLocal_223[0] = 198.9926f;
	Local_222[1 /*3*/] = { 1286.655f, -1627f, 53.225f };
	fLocal_223[1] = 22.3073f;
	Local_222[2 /*3*/] = { 1286.452f, -1624.782f, 53.225f };
	fLocal_223[2] = 49.6773f;
	Var9 = { 1298.391f, -1580.895f, 50.7937f };
	fVar10 = 332.006f;
	Local_224 = { 1277.725f, -1617.897f, 53.2254f };
	if (func_164())
	{
		Var1[0] = joaat("g_m_y_mexgoon_02");
		Var1[1] = joaat("g_m_y_mexgoon_02");
		Var1[2] = joaat("g_m_y_mexgoon_02");
		Var1.f_4 = joaat("a_f_y_eastsa_03");
	}
	else
	{
		Var1[0] = joaat("g_m_y_mexgoon_02");
		Var1[1] = joaat("g_m_y_mexgoon_02");
		Var1[2] = joaat("g_m_y_mexgoon_02");
		Var1.f_4 = joaat("a_f_y_eastsa_03");
	}
	Var1.f_5 = "amb_sit_wall_m";
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(11))
	{
		func_152(Var1, iVar8, &iVar11, bVar12);
	}
	if (func_119(Local_221, -1, 0, 0, 0))
	{
		func_116(-1);
	}
	else
	{
		ENTITY::STOP_ENTITY_ANIM();
	}
	func_115(1, Var1);
	while (iVar0 != 7)
	{
		SYSTEM::WAIT(0);
		iVar13 = 600;
		if (!BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
		{
			iVar13 = 0;
			iVar0 = 7;
			func_152(Var1, iVar8, &iVar11, bVar12);
		}
		if (!func_114())
		{
			if (func_113())
			{
				iVar13 = 0;
				iVar0 = 7;
				func_152(Var1, iVar8, &iVar11, bVar12);
			}
		}
		RECORDING::_0x208784099002BC30("RE_GI", 0);
		switch (iVar0)
		{
			case 0:
				if (func_101())
				{
					iVar13 = 0;
					iVar0 = 7;
					func_152(Var1, iVar8, &iVar11, bVar12);
				}
				if (func_115(1, Var1))
				{
					iVar13 = 0;
					iVar0 = 2;
				}
				break;
			
			case 2:
				if (func_90(3))
				{
					func_89(1);
					iVar0 = 4;
				}
				else
				{
					iVar0 = 6;
				}
				iVar13 = 0;
				break;
			
			case 4:
				iVar13 = 0;
				PATHFIND::SET_ROADS_IN_AREA(Local_224 - Vector(10f, 30f, 30f), Local_224 + Vector(10f, 30f, 30f), false, true, 1, 1);
				PED::SET_PED_NON_CREATION_AREA(Local_224 - Vector(50f, 50f, 50f), Local_224 + Vector(100f, 100f, 100f));
				unk_0xAF7D4BF357E8B79E(Local_224 - Vector(15f, 15f, 15f), Local_224 + Vector(15f, 15f, 15f), 0, 1);
				unk_0xBE20AB8238688965(&bVar3, 4);
				unk_0xBE20AB8238688965(&bVar3, 1);
				unk_0xBE20AB8238688965(&bVar3, 5);
				PED::ADD_RELATIONSHIP_GROUP("GangOne", &iLocal_47);
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_47, 1862763509);
				bVar12 = PED::CREATE_PED(12, Var1.f_4, Var9, fVar10, true, true);
				PED::_0x2208438012482A1A(bVar12, 1);
				unk_0x74528AC0906CBABE(Var1.f_4);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(bVar12, iLocal_47);
				PED::SET_PED_CAN_BE_TARGETTED(bVar12, false);
				PED::SET_PED_COMPONENT_VARIATION(bVar12, 2, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(bVar12, 0, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(bVar12, 3, 2, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(bVar12, 4, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(bVar12, 8, 1, 1, 0);
				AUDIO::SET_AMBIENT_VOICE_NAME(bVar12, "G_F_Y_Vagos_01_LATINO_MINI_02");
				if (func_88() == 0)
				{
					func_87(&uLocal_53, 0, unk_0x9B0761B4C3EB8BC7(), "MICHAEL", 0, 1);
				}
				else if (func_88() == 1)
				{
					func_87(&uLocal_53, 0, unk_0x9B0761B4C3EB8BC7(), "FRANKLIN", 0, 1);
				}
				else if (func_88() == 2)
				{
					func_87(&uLocal_53, 0, unk_0x9B0761B4C3EB8BC7(), "TREVOR", 0, 1);
				}
				func_87(&uLocal_53, 3, bVar12, "REGIFemale", 0, 1);
				func_87(&uLocal_53, 4, iVar11[2], "REGIMale", 0, 1);
				TASK::TASK_PLAY_ANIM(bVar12, "random@gang_intimidation@", "001445_01_gangintimidation_1_female_idle_b", 2f, -2f, -1, 49, 0f, false, false, false);
				if (!SYSTEM::VMAG(fLocal_219))
				{
				}
				iVar14 = 0;
				while (iVar14 <= (iLocal_49 - 1))
				{
					if (!MISC::IS_BIT_SET(iVar11[iVar14]))
					{
						iVar11[iVar14] = PED::CREATE_PED(12, Var1[iVar14], Local_222[iVar14 /*3*/], fLocal_223[iVar14], true, true);
						PED::_0x2208438012482A1A(iVar11[iVar14], 1);
						unk_0x74528AC0906CBABE(Var1[iVar14]);
						PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar11[iVar14], iLocal_47);
						PLAYER::SET_PLAYER_VEHICLE_DEFENSE_MODIFIER(iVar11[iVar14], 5.885454E-44f, 1);
						unk_0x92BD213E6A0E666B(iVar11[iVar14], func_86(), -1, 1, 1);
						PED::SET_PED_COMBAT_MOVEMENT(iVar11[iVar14], 2);
						PED::SET_PED_COMBAT_RANGE(iVar11[iVar14], 0);
						PED::SET_PED_ACCURACY(iVar11[iVar14], 13);
						PED::SET_PED_MONEY(iVar11[iVar14], NETWORK::_NETWORK_GET_ROS_PRIVILEGE_25(200, 500));
					}
					iVar14++;
				}
				unk_0x92BD213E6A0E666B(iVar11[0], joaat("weapon_sawnoffshotgun"), 40, 1, 1);
				iLocal_50 = PED::CREATE_SYNCHRONIZED_SCENE(1283.205f, -1622.71f, 54.299f, 0f, 0f, 103.68f, 2);
				if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(iVar11[0]))
				{
					TASK::TASK_SYNCHRONIZED_SCENE(iVar11[0], iLocal_50, "random@gang_intimidation@", "001446_02_gangintimidation_2_idle_thug_b", 4f, -4f, 17, 0, 1000f, 0);
				}
				if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(iVar11[1]))
				{
					TASK::TASK_SYNCHRONIZED_SCENE(iVar11[1], iLocal_50, "random@gang_intimidation@", "001446_02_gangintimidation_2_idle_thug_c", 4f, -4f, 17, 0, 1000f, 0);
				}
				if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(iVar11[2]))
				{
					TASK::TASK_SYNCHRONIZED_SCENE(iVar11[2], iLocal_50, "random@gang_intimidation@", "001446_02_gangintimidation_2_idle_thug_d", 4f, -4f, 17, 0, 1000f, 0);
				}
				PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_50, true);
				iLocal_228 = 1;
				iVar0 = 5;
				break;
			
			case 5:
				PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
				PLAYER::_0xC3376F42B1FACCC6(PLAYER::PLAYER_ID());
				if (iVar2 < 3)
				{
					if ((((((((func_79(&iVar11, &uVar6, &uVar5, &uVar4, bVar3, bVar7, 1075838976, 0) || func_78(iVar11[0], 0)) || func_78(iVar11[1], 0)) || func_78(iVar11[2], 0)) || MISC::IS_BULLET_IN_AREA(Local_222[0 /*3*/], 40f, true)) || MISC::IS_PROJECTILE_TYPE_IN_AREA(Local_222[0 /*3*/] - Vector(25f, 25f, 25f), Local_222[0 /*3*/] + Vector(25f, 25f, 25f), joaat("weapon_smokegrenade"), true)) || MISC::IS_PROJECTILE_TYPE_IN_AREA(Local_222[0 /*3*/] - Vector(25f, 25f, 25f), Local_222[0 /*3*/] + Vector(25f, 25f, 25f), joaat("weapon_grenade"), true)) || MISC::IS_PROJECTILE_TYPE_IN_AREA(Local_222[0 /*3*/] - Vector(25f, 25f, 25f), Local_222[0 /*3*/] + Vector(25f, 25f, 25f), joaat("weapon_grenadelauncher"), true)) || MISC::IS_PROJECTILE_TYPE_IN_AREA(Local_222[0 /*3*/] - Vector(25f, 25f, 25f), Local_222[0 /*3*/] + Vector(25f, 25f, 25f), joaat("weapon_stickybomb"), true))
					{
						iVar15 = 0;
						while (iVar15 < iVar11)
						{
							if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(iVar11[iVar15]))
							{
								func_76();
								if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(iVar11[iVar15]))
								{
									HUD::HIDE_HUD_AND_RADAR_THIS_FRAME(iVar11[iVar15]);
									TASK::OPEN_SEQUENCE_TASK(&iLocal_48);
									TASK::TASK_LOOK_AT_ENTITY(false, unk_0x9B0761B4C3EB8BC7(), 1000, 2048, 2);
									TASK::TASK_SMART_FLEE_PED(false, unk_0x9B0761B4C3EB8BC7(), 200f, -1, false, false);
									TASK::CLOSE_SEQUENCE_TASK(iLocal_48);
									AUDIO::STOP_SCRIPTED_CONVERSATION(iVar11[iVar15], iLocal_48);
									TASK::CLEAR_SEQUENCE_TASK(&iLocal_48);
									PED::SET_PED_KEEP_TASK(iVar11[iVar15], true);
								}
							}
							iVar15++;
						}
						if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bVar12))
						{
							if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bVar12))
							{
								HUD::HIDE_HUD_AND_RADAR_THIS_FRAME(bVar12);
								TASK::OPEN_SEQUENCE_TASK(&iLocal_48);
								TASK::TASK_LOOK_AT_ENTITY(false, unk_0x9B0761B4C3EB8BC7(), 1000, 2048, 2);
								TASK::TASK_SMART_FLEE_PED(false, unk_0x9B0761B4C3EB8BC7(), 200f, -1, false, false);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_48);
								AUDIO::STOP_SCRIPTED_CONVERSATION(bVar12, iLocal_48);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_48);
								PED::SET_PED_KEEP_TASK(bVar12, true);
							}
						}
						iLocal_227 = 1;
					}
				}
				else
				{
					iVar16 = 0;
					while (iVar16 < iVar11)
					{
						if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(iVar11[iVar16]))
						{
							if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iVar11[iVar16], unk_0x9B0761B4C3EB8BC7(), true))
							{
								func_76();
								iVar2 = 6;
							}
						}
						else
						{
							func_76();
							iVar2 = 6;
						}
						iVar16++;
					}
				}
				if (iLocal_226)
				{
					iVar0 = 6;
				}
				if (iLocal_52)
				{
					if (!func_75())
					{
						iVar2 = 6;
					}
				}
				if (STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(unk_0x9B0761B4C3EB8BC7()))
				{
					iVar13 = 0;
					iVar0 = 6;
					break;
				}
				if (func_74(Local_221, 150))
				{
					iVar0 = 6;
					break;
				}
				if (iVar0 != 6)
				{
					if (func_1(&iVar2, Var1, bVar12, &iVar11, &iVar13, &iVar8) || iLocal_227)
					{
						iVar0 = 6;
						break;
					}
				}
				break;
			
			case 6:
				iVar13 = 0;
				func_152(Var1, iVar8, &iVar11, bVar12);
				iVar0 = 7;
				break;
				break;
			
			case 7:
				iVar13 = 0;
				break;
		}
		if (iVar0 != 7)
		{
		}
	}
	func_152(Var1, iVar8, &iVar11, bVar12);
}

int func_1(int iParam0, struct<6> Param1, bool bParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	if (*iParam0 >= 3)
	{
		if (!PED::DETACH_SYNCHRONIZED_SCENE(iLocal_51))
		{
			if ((!unk_0xC2169C00B643278B(unk_0x9B0761B4C3EB8BC7(), Local_236, 9f, 9f, 9f, 0, 1, 0) && !unk_0xC2169C00B643278B(unk_0x9B0761B4C3EB8BC7(), 1276.21f, -1613.05f, 53f, 9f, 9f, 9f, 0, 1, 0)) || unk_0x4D71E6F618DC5C0E(unk_0x9B0761B4C3EB8BC7()))
			{
				*iParam0 = 6;
			}
		}
	}
	switch (*iParam0)
	{
		case 0:
			if (func_60(bParam2, iParam3))
			{
				if (bLocal_235)
				{
					*iParam0 = 2;
				}
				if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bParam2))
				{
					PED::SET_PED_RESET_FLAG(bParam2, 247, true);
					if (!func_78(bParam2, 0))
					{
						if (ENTITY::IS_ENTITY_AT_ENTITY(unk_0x9B0761B4C3EB8BC7(), bParam2, 15f, 15f, 15f, false, true, 0))
						{
							if ((WEAPON::IS_PED_ARMED(unk_0x9B0761B4C3EB8BC7(), 6) && PED::CAN_PED_SEE_HATED_PED(bParam2, unk_0x9B0761B4C3EB8BC7())) && !SYSTEM::VDIST(unk_0x9B0761B4C3EB8BC7(), 0))
							{
								if ((WEAPON::IS_PED_ARMED(unk_0x9B0761B4C3EB8BC7(), 6) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), bParam2)) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), bParam2))
								{
									TASK::CLEAR_PED_SECONDARY_TASK(bParam2);
									TASK::TASK_LOOK_AT_ENTITY(bParam2, unk_0x9B0761B4C3EB8BC7(), 5000, 1024, 2);
									func_76();
									SYSTEM::WAIT(1000);
									func_45(&uLocal_53, "REGIAU", "REGIN_ARM", 4, 0, 0, 0);
									iVar0 = 0;
									while (iVar0 < *iParam3)
									{
										if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY((*iParam3)[iVar0]))
										{
											TASK::CLEAR_PED_SECONDARY_TASK((*iParam3)[iVar0]);
											TASK::TASK_SMART_FLEE_PED((*iParam3)[iVar0], unk_0x9B0761B4C3EB8BC7(), 200f, -1, false, false);
											PED::SET_PED_KEEP_TASK((*iParam3)[iVar0], true);
										}
										iVar0++;
									}
									if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bParam2))
									{
										TASK::TASK_SMART_FLEE_PED(bParam2, unk_0x9B0761B4C3EB8BC7(), 200f, -1, false, false);
										PED::SET_PED_KEEP_TASK(bParam2, true);
									}
									iLocal_227 = 1;
								}
							}
						}
					}
					else
					{
						func_43();
						if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bParam2))
						{
							HUD::HIDE_HUD_AND_RADAR_THIS_FRAME(bParam2);
							TASK::TASK_SMART_FLEE_PED(bParam2, unk_0x9B0761B4C3EB8BC7(), 200f, -1, false, false);
							PED::SET_PED_KEEP_TASK(bParam2, true);
						}
						iLocal_227 = 1;
					}
				}
				if ((STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY((*iParam3)[0]) || STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY((*iParam3)[1])) || STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY((*iParam3)[2]))
				{
					func_42(iParam3, bParam2);
				}
				if (STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bParam2))
				{
					if (iLocal_234 > 2)
					{
						func_42(iParam3, bParam2);
					}
					else
					{
						*iParam0 = 9;
					}
				}
				else if (MISC::IS_PC_VERSION(bParam2))
				{
					if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(bParam2, "random@gang_intimidation@", "001445_01_gangintimidation_1_female_wave_loop", 3))
					{
						TASK::STOP_ANIM_TASK(bParam2, "random@gang_intimidation@", "001445_01_gangintimidation_1_female_wave_loop", -8f);
					}
				}
			}
			else
			{
				*iParam0 = 9;
			}
			break;
		
		case 2:
			GRAPHICS::DRAW_DEBUG_LINE(NETWORK::NETWORK_ARE_HANDLES_THE_SAME(unk_0x9B0761B4C3EB8BC7(), 1), Local_224, 0, 0, 255, 255);
			TASK::TASK_PAUSE(unk_0x9B0761B4C3EB8BC7(), 1000);
			Local_236 = { NETWORK::NETWORK_ARE_HANDLES_THE_SAME(unk_0x9B0761B4C3EB8BC7(), 1) };
			if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY((*iParam3)[1]))
			{
				if (!SYSTEM::VMAG(uLocal_218[1]))
				{
				}
				AUDIO::TRIGGER_MUSIC_EVENT("RE28_OS");
				iLocal_51 = PED::CREATE_SYNCHRONIZED_SCENE(1283.205f, -1622.71f, 54.299f, 0f, 0f, 103.68f, 2);
				if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY((*iParam3)[0]))
				{
					TASK::TASK_SYNCHRONIZED_SCENE((*iParam3)[0], iLocal_51, "random@gang_intimidation@", "001446_02_gangintimidation_2_thug_b", 4f, -4f, 17, 0, 1000f, 0);
				}
				if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY((*iParam3)[1]))
				{
					TASK::TASK_SYNCHRONIZED_SCENE((*iParam3)[1], iLocal_51, "random@gang_intimidation@", "001446_02_gangintimidation_2_thug_c", 4f, -4f, 16, 0, 1000f, 0);
				}
				if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY((*iParam3)[2]))
				{
					TASK::TASK_SYNCHRONIZED_SCENE((*iParam3)[2], iLocal_51, "random@gang_intimidation@", "001446_02_gangintimidation_2_thug_d", 4f, -4f, 17, 0, 1000f, 0);
				}
				*iParam0 = 3;
			}
			break;
		
		case 3:
			*iParam4 = 0;
			if (PED::DETACH_SYNCHRONIZED_SCENE(iLocal_51))
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_51) > 0.3f)
				{
					if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY((*iParam3)[0]))
					{
						PED::SET_PED_RESET_FLAG((*iParam3)[0], 156, true);
						TASK::OPEN_SEQUENCE_TASK(&iLocal_48);
						TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, NETWORK::NETWORK_ARE_HANDLES_THE_SAME(unk_0x9B0761B4C3EB8BC7(), 1) - Vector(0f, 0f, 1f), unk_0x9B0761B4C3EB8BC7(), 2f, false, 3.5f, 5f, true, 0, false, -957453492, 20000);
						TASK::TASK_AIM_GUN_AT_ENTITY(0, unk_0x9B0761B4C3EB8BC7(), 25000, false);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_48);
						AUDIO::STOP_SCRIPTED_CONVERSATION((*iParam3)[0], iLocal_48);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_48);
						iLocal_48 = 0;
					}
				}
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_51) > 0.35f)
				{
					if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY((*iParam3)[1]))
					{
						PED::SET_PED_RESET_FLAG((*iParam3)[1], 156, true);
						TASK::OPEN_SEQUENCE_TASK(&iLocal_48);
						TASK::TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY(0, unk_0x9B0761B4C3EB8BC7(), unk_0x9B0761B4C3EB8BC7(), 2f, false, 5f, 4f, true, false, -957453492);
						TASK::TASK_AIM_GUN_AT_ENTITY(0, unk_0x9B0761B4C3EB8BC7(), 25000, false);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_48);
						AUDIO::STOP_SCRIPTED_CONVERSATION((*iParam3)[1], iLocal_48);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_48);
						iLocal_48 = 0;
					}
				}
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_51) > 0.275f)
				{
					if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY((*iParam3)[2]))
					{
						PED::SET_PED_RESET_FLAG((*iParam3)[2], 156, true);
						TASK::OPEN_SEQUENCE_TASK(&iLocal_48);
						TASK::TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY(0, unk_0x9B0761B4C3EB8BC7(), unk_0x9B0761B4C3EB8BC7(), 2f, false, 3.5f, 4f, true, false, -957453492);
						TASK::TASK_AIM_GUN_AT_ENTITY(0, unk_0x9B0761B4C3EB8BC7(), 25000, false);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_48);
						AUDIO::STOP_SCRIPTED_CONVERSATION((*iParam3)[2], iLocal_48);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_48);
						iLocal_48 = 0;
					}
				}
			}
			if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY((*iParam3)[2]))
			{
				if (ENTITY::IS_ENTITY_AT_ENTITY((*iParam3)[2], unk_0x9B0761B4C3EB8BC7(), 4f, 4f, 2f, false, true, 0))
				{
					func_41(fLocal_219);
					func_41(fLocal_220);
					func_37(iParam3);
					if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY((*iParam3)[0]))
					{
						TASK::OPEN_SEQUENCE_TASK(&iLocal_48);
						TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, NETWORK::NETWORK_ARE_HANDLES_THE_SAME(unk_0x9B0761B4C3EB8BC7(), 1) - Vector(0f, 0f, 1f), unk_0x9B0761B4C3EB8BC7(), 2f, false, 3.5f, 5f, true, 0, false, -957453492, 20000);
						TASK::TASK_AIM_GUN_AT_ENTITY(0, unk_0x9B0761B4C3EB8BC7(), 25000, false);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_48);
						AUDIO::STOP_SCRIPTED_CONVERSATION((*iParam3)[0], iLocal_48);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_48);
						iLocal_48 = 0;
					}
					if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY((*iParam3)[1]))
					{
						TASK::OPEN_SEQUENCE_TASK(&iLocal_48);
						TASK::TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY(0, unk_0x9B0761B4C3EB8BC7(), unk_0x9B0761B4C3EB8BC7(), 2f, false, 5f, 4f, true, false, -957453492);
						TASK::TASK_AIM_GUN_AT_ENTITY(0, unk_0x9B0761B4C3EB8BC7(), 25000, false);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_48);
						AUDIO::STOP_SCRIPTED_CONVERSATION((*iParam3)[1], iLocal_48);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_48);
						iLocal_48 = 0;
					}
					if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY((*iParam3)[2]))
					{
						TASK::OPEN_SEQUENCE_TASK(&iLocal_48);
						TASK::TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY(0, unk_0x9B0761B4C3EB8BC7(), unk_0x9B0761B4C3EB8BC7(), 2f, false, 3.5f, 4f, true, false, -957453492);
						TASK::TASK_AIM_GUN_AT_ENTITY(0, unk_0x9B0761B4C3EB8BC7(), 25000, false);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_48);
						AUDIO::STOP_SCRIPTED_CONVERSATION((*iParam3)[2], iLocal_48);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_48);
						iLocal_48 = 0;
					}
					iLocal_230 = MISC::GET_GAME_TIMER();
					*iParam0 = 4;
				}
			}
			break;
		
		case 4:
			if (func_35(Param1, (*iParam3)[2], iParam3))
			{
				func_41(uLocal_218[2]);
			}
			else if (WEAPON::IS_PED_ARMED(unk_0x9B0761B4C3EB8BC7(), 6))
			{
				*iParam0 = 6;
			}
			break;
		
		case 6:
			if (!iLocal_229)
			{
				func_76();
				SYSTEM::WAIT(0);
				func_45(&uLocal_53, "REGIAU", "REGIN_WARN2", 4, 0, 0, 0);
				PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.5f);
				func_37(iParam3);
				func_42(iParam3, bParam2);
				func_41(fLocal_220);
				func_41(fLocal_219);
				iLocal_229 = 1;
			}
			func_34(iParam3);
			func_33(iParam3);
			if (func_32(iParam3))
			{
				*iParam5 = 1;
				if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bParam2))
				{
					if (ENTITY::IS_ENTITY_AT_ENTITY(unk_0x9B0761B4C3EB8BC7(), bParam2, 8f, 8f, 8f, false, true, 0))
					{
						func_45(&uLocal_53, "REGIAU", "REGIN_SORRY", 4, 0, 0, 0);
					}
				}
				if (!SYSTEM::VMAG(fLocal_220))
				{
				}
				while (func_75())
				{
					SYSTEM::WAIT(0);
				}
				while (!func_31())
				{
					SYSTEM::WAIT(0);
				}
				func_5(-1, 0);
				func_2();
				return 1;
				*iParam0 = 9;
			}
			break;
		
		case 8:
			break;
		
		case 9:
			return 1;
			break;
	}
	return 0;
}

void func_2()
{
	func_3();
}

int func_3()
{
	if (func_4(0))
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

bool func_4(bool bParam0)
{
	if (!bParam0 && INTERIOR::GET_INTERIOR_AT_COORDS(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xCE990E643CD9D0E5(Global_77081, 0);
}

void func_5(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_29();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= func_28(iParam0))
	{
		func_27(iParam0, iParam1);
		if (!func_26(51))
		{
			func_16("RE_REWARD", 1, 0, 4000, 10000, func_19(), 0, 138, 0);
			func_15(51);
		}
		if (func_14(iParam0))
		{
			Global_111858.f_24991.f_2 = 3;
		}
		if (func_13(iParam0, iParam1) != 322)
		{
			func_7(func_13(iParam0, iParam1), Local_46.x, Local_46.f_1);
		}
		Global_111846 = iParam1;
		if (Global_111844 == 0)
		{
			if (((Global_111847 == 1 || Global_111847 == 5) || Global_111847 == 11) || Global_111847 == 25)
			{
				func_6(2);
			}
			else if ((Global_111847 == 26 || Global_111847 == 8) || Global_111847 == 17)
			{
				func_6(7);
			}
			else
			{
				func_6(1);
			}
		}
	}
}

void func_6(int iParam0)
{
	Global_111844 = iParam0;
}

void func_7(int iParam0, var uParam1, var uParam2)
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
		func_11((891 + iParam0), 1, -1, 1);
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
		func_8();
	}
}

void func_8()
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	bool bVar8;
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
	bVar8 = Global_111858.f_10190.f_3853;
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
	if (bVar8 > 0f && SYSTEM::FLOOR(bVar8) < SYSTEM::FLOOR(Global_111858.f_10190.f_3853))
	{
		func_10(13, SYSTEM::FLOOR(Global_111858.f_10190.f_3853));
	}
	if (!DATAFILE::DATAFILE_IS_SAVE_PENDING())
	{
		if (!Global_76833)
		{
			if (func_9() == 2 == 0 && !MISC::SET_BIT())
			{
				if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE())
				{
					Global_111592 = 0;
				}
				if (!Global_61717)
				{
					func_3();
				}
			}
		}
	}
}

int func_9()
{
	return Global_30968;
}

int func_10(int iParam0, bool bParam1)
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
	if (bParam1 <= 0 || bParam1 > 100)
	{
		return 0;
	}
	iVar0 = PLAYER::_GET_ACHIEVEMENT_PROGRESS(iParam0);
	if (bParam1 > iVar0)
	{
		return PLAYER::_SET_ACHIEVEMENT_PROGRESS(iParam0, bParam1);
	}
	return 0;
}

var func_11(int iParam0, char* sParam1, int iParam2, int iParam3)
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
		iParam2 = func_12();
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

int func_12()
{
	return Global_1312763;
}

int func_13(int iParam0, int iParam1)
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

int func_14(int iParam0)
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

void func_15(int iParam0)
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

void func_16(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_17(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_17(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
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
		StringCopy(&(Global_111858.f_20406[Global_111858.f_20406.f_145 /*16*/]), sParam0, 16);
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
		func_18();
	}
}

void func_18()
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

int func_19()
{
	func_20();
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

void func_20()
{
	int iVar0;
	
	if (MISC::IS_BIT_SET(unk_0x9B0761B4C3EB8BC7()))
	{
		if (func_24(Global_111858.f_2359.f_539.f_4321) != MISC::GET_MODEL_DIMENSIONS(unk_0x9B0761B4C3EB8BC7()))
		{
			iVar0 = func_23(unk_0x9B0761B4C3EB8BC7());
			if (func_22(iVar0) && (!func_21(14) || Global_110809))
			{
				if (Global_111858.f_2359.f_539.f_4321 != iVar0 && func_22(Global_111858.f_2359.f_539.f_4321))
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

bool func_21(int iParam0)
{
	return Global_41631 == iParam0;
}

bool func_22(int iParam0)
{
	return iParam0 < 3;
}

int func_23(bool bParam0)
{
	int iVar0;
	void fVar1;
	
	if (MISC::IS_BIT_SET(uParam0))
	{
		fVar1 = MISC::GET_MODEL_DIMENSIONS(bParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_24(iVar0) == fVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_24(int iParam0)
{
	if (func_22(iParam0))
	{
		return func_25(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_25(int iParam0)
{
	return Global_1848[iParam0 /*29*/];
}

int func_26(int iParam0)
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

void func_27(int iParam0, int iParam1)
{
	unk_0xBE20AB8238688965(&(Global_111858.f_24991.f_8[iParam0]), iParam1);
}

int func_28(int iParam0)
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

int func_29()
{
	struct<16> Var0;
	var uVar1;
	
	StringCopy(&Var0, TASK::IS_PED_BEING_ARRESTED(), 64);
	uVar1 = func_30(Var0);
	return uVar1;
}

int func_30(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
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

int func_31()
{
	return 1;
}

int func_32(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		if (MISC::IS_BIT_SET((*uParam0)[iVar0]))
		{
			if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY((*uParam0)[iVar0]))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

void func_33(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		if (STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY((*uParam0)[iVar0]))
		{
			func_41(uLocal_218[iVar0]);
		}
		iVar0++;
	}
}

void func_34(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	if (iLocal_233 == 0)
	{
		iVar2 = 0;
		while (iVar2 <= (iLocal_49 - 1))
		{
			if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY((*uParam0)[iVar2]))
			{
				iVar0++;
				iVar1 = iVar2;
			}
			iVar2++;
		}
		if (iVar0 == 1)
		{
			if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY((*uParam0)[iVar1]))
			{
				PED::SET_PED_COMBAT_ATTRIBUTES((*uParam0)[iVar1], 0, true);
				PED::SET_PED_COMBAT_RANGE((*uParam0)[iVar1], 0);
				iLocal_233 = 1;
			}
		}
	}
}

int func_35(struct<6> Param0, bool bParam1, var uParam2)
{
	switch (iLocal_231)
	{
		case 0:
			if (func_36(iLocal_230, 0))
			{
				if (!func_75())
				{
					if (func_88() == 0)
					{
						func_45(&uLocal_53, "REGIAU", "REGIN_MONEYM", 4, 0, 0, 0);
						iLocal_231 = 1;
					}
					else if (func_88() == 1)
					{
						func_45(&uLocal_53, "REGIAU", "REGIN_MONEYF", 4, 0, 0, 0);
						iLocal_231 = 1;
					}
					else if (func_88() == 2)
					{
						func_45(&uLocal_53, "REGIAU", "REGIN_MONEYT", 4, 0, 0, 0);
						iLocal_231 = 1;
					}
				}
				iLocal_48 = 0;
			}
			break;
		
		case 1:
			if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bParam1))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(bParam1, 242628503) == 7 || ENTITY::IS_ENTITY_AT_ENTITY(bParam1, unk_0x9B0761B4C3EB8BC7(), 8f, 8f, 8f, false, true, 0))
				{
					if (!func_75())
					{
						func_45(&uLocal_53, "REGIAU", "REGIN_KILL", 4, 0, 0, 0);
						SYSTEM::SETTIMERA(0);
						iLocal_52 = 1;
						iLocal_231 = 4;
					}
				}
			}
			break;
		
		case 2:
			if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY((*uParam2)[2]))
			{
				if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY((*uParam2)[0]))
				{
					TASK::OPEN_SEQUENCE_TASK(&iLocal_48);
					TASK::TASK_STAND_STILL(0, 700);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_222[0 /*3*/], 1f, -1, 0.25f, false, 40000f);
					TASK::TASK_ACHIEVE_HEADING(0, fLocal_223[0], 0);
					TASK::TASK_PLAY_ANIM_ADVANCED(0, Param0.f_5, "sit_down_idle_01", Local_222[0 /*3*/], 0f, 0f, fLocal_223[0], 1000f, -4f, -1, 1, 0f, 2, 0);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_48);
					AUDIO::STOP_SCRIPTED_CONVERSATION((*uParam2)[0], iLocal_48);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_48);
					iLocal_48 = 0;
				}
				if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY((*uParam2)[1]))
				{
					TASK::OPEN_SEQUENCE_TASK(&iLocal_48);
					TASK::TASK_STAND_STILL(0, 200);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_222[1 /*3*/], 1f, -1, 0.25f, false, 40000f);
					TASK::TASK_WANDER_STANDARD(0, 40000f, 0);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_48);
					AUDIO::STOP_SCRIPTED_CONVERSATION((*uParam2)[1], iLocal_48);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_48);
					iLocal_48 = 0;
				}
				if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY((*uParam2)[2]))
				{
					TASK::OPEN_SEQUENCE_TASK(&iLocal_48);
					TASK::TASK_STAND_STILL(0, 1000);
					TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(0, (*uParam2)[0], 0f, -0.5f, 0f, 1f, 10000, 0.1f, true);
					TASK::TASK_WANDER_STANDARD(0, 40000f, 0);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_48);
					AUDIO::STOP_SCRIPTED_CONVERSATION((*uParam2)[2], iLocal_48);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_48);
					iLocal_48 = 0;
				}
			}
			iLocal_231 = 3;
			break;
		
		case 3:
			if (!func_75())
			{
				if (func_88() == 0)
				{
					func_45(&uLocal_53, "REGIAU", "REGIN_REALM", 4, 0, 0, 0);
				}
				else if (func_88() == 1)
				{
					func_45(&uLocal_53, "REGIAU", "REGIN_REALF", 4, 0, 0, 0);
				}
				else if (func_88() == 2)
				{
					func_45(&uLocal_53, "REGIAU", "REGIN_REALT", 4, 0, 0, 0);
				}
				iLocal_231 = 4;
			}
			break;
		
		case 4:
			return 1;
			break;
	}
	return 0;
}

int func_36(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = MISC::GET_GAME_TIMER();
	iVar1 = (iVar0 - iParam0);
	if (iVar1 > iParam1)
	{
		return 1;
	}
	return 0;
}

void func_37(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		if (!SYSTEM::VMAG(uLocal_218[iVar0]))
		{
			if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY((*uParam0)[iVar0]))
			{
				uLocal_218[iVar0] = func_38((*uParam0)[iVar0], 1, 145);
				ENTITY::SET_ENTITY_IS_TARGET_PRIORITY((*uParam0)[iVar0], true, 0f);
			}
		}
		iVar0++;
	}
}

int func_38(bool bParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_39(bParam0, !bParam1, 0);
	if ((iParam2 != 145 && SYSTEM::VMAG(iVar0)) && unk_0x3030AE9FCF1BC243(&(Global_1848[iParam2 /*29*/].f_3)))
	{
		PED::IS_PED_IN_PARACHUTE_FREE_FALL(iVar0, &(Global_1848[iParam2 /*29*/].f_3));
	}
	return iVar0;
}

bool func_39(bool bParam0, bool bParam1, bool bParam2)
{
	bool bVar0;
	
	if (!MISC::IS_BIT_SET(iParam0))
	{
		return 0;
	}
	bVar0 = TASK::IS_PED_SPRINTING(bParam0);
	if (ENTITY::IS_ENTITY_A_VEHICLE(bParam0))
	{
		HUD::SET_BLIP_SCALE(bVar0, func_40(MISC::SET_BIT(), 1f, 1f));
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
		HUD::SET_BLIP_SCALE(bVar0, func_40(MISC::SET_BIT(), 0.7f, 0.7f));
		HUD::SET_BLIP_AS_FRIENDLY(bVar0, bParam1);
	}
	else if (ENTITY::IS_ENTITY_AN_OBJECT(bParam0))
	{
		HUD::SET_BLIP_SCALE(bVar0, func_40(MISC::SET_BIT(), 0.7f, 0.7f));
	}
	return bVar0;
}

float func_40(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_41(float fParam0)
{
	if (SYSTEM::VMAG(fParam0))
	{
		unk_0x93370FA10F15BE44(&fParam0);
	}
}

void func_42(var uParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY((*uParam0)[iVar0]))
		{
			TASK::TASK_COMBAT_PED((*uParam0)[iVar0], unk_0x9B0761B4C3EB8BC7(), 0, 16);
			PED::SET_PED_COMBAT_ATTRIBUTES((*uParam0)[iVar0], 0, true);
			PED::SET_PED_KEEP_TASK((*uParam0)[iVar0], true);
		}
		iVar0++;
	}
	if (!PED::IS_PED_IN_ANY_POLICE_VEHICLE(bParam1, 0))
	{
		TASK::CLEAR_PED_SECONDARY_TASK(bParam1);
		TASK::TASK_COWER(bParam1, -1);
		PED::SET_PED_KEEP_TASK(bParam1, true);
	}
}

void func_43()
{
	Global_19871 = 0;
	func_44();
}

void func_44()
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

bool func_45(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_59(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_46(sParam2, iParam3, 0);
}

int func_46(char* sParam0, int iParam1, bool bParam2)
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
					func_44();
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
		if (func_58(8, -1))
		{
			return 0;
		}
		Global_21081 = { Global_21075 };
		func_57();
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
				func_56();
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
				if (func_55())
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
			if (func_54())
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
			func_53();
			Global_21015 = bParam2;
		}
		Global_21007 = iParam1;
		StringCopy(&Global_20624, sParam0, 24);
		Global_19871 = 0;
		func_52();
		func_47();
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
		func_44();
	}
	return 0;
}

void func_47()
{
	if (!func_48())
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

int func_48()
{
	if (!Global_262145.f_28160)
	{
		return 0;
	}
	if (!Global_76833)
	{
		return 0;
	}
	if (PLAYER::PLAYER_ID() == func_51())
	{
		return 0;
	}
	if (func_49(PLAYER::PLAYER_ID()))
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

bool func_49(int iParam0)
{
	return func_50(iParam0, 20);
}

bool func_50(int iParam0, int iParam1)
{
	return unk_0xCE990E643CD9D0E5(Global_1630317[iParam0 /*595*/].f_11.f_4, iParam1);
}

int func_51()
{
	return -1;
}

void func_52()
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

void func_53()
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

int func_54()
{
	if (Global_19681.f_1 == 1 || Global_19681.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_55()
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

void func_56()
{
	if (func_21(14))
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
		Global_19681 = func_88();
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

void func_57()
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

bool func_58(int iParam0, int iParam1)
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

void func_59(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
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

int func_60(bool bParam0, var uParam1)
{
	switch (iLocal_234)
	{
		case 0:
			if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bParam0))
			{
				if ((unk_0x1037B9D45CE6B788(unk_0x9B0761B4C3EB8BC7(), 1272.878f, -1532.84f, 36.4104f, 1339.482f, -1623.636f, 71.4792f, 105.1875f, 0, 1, 0) && !ENTITY::IS_ENTITY_OCCLUDED(bParam0)) || ENTITY::IS_ENTITY_AT_ENTITY(unk_0x9B0761B4C3EB8BC7(), bParam0, 15f, 15f, 15f, false, true, 0))
				{
					if (!func_114())
					{
						func_64(1);
					}
					if (SYSTEM::VMAG(fLocal_219))
					{
						func_41(fLocal_219);
					}
					if (!SYSTEM::VMAG(fLocal_220))
					{
						fLocal_220 = func_38(bParam0, 0, 145);
						HUD::SHOW_HEIGHT_ON_BLIP(fLocal_220, false);
					}
					if (SYSTEM::VDIST(unk_0x9B0761B4C3EB8BC7(), 0))
					{
						if (!unk_0x653A331834B72BC0(unk_0x9B0761B4C3EB8BC7()))
						{
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(ENTITY::GET_ENTITY_MODEL(unk_0x9B0761B4C3EB8BC7(), 0)) < 5f)
							{
								if (ENTITY::IS_ENTITY_AT_ENTITY(unk_0x9B0761B4C3EB8BC7(), bParam0, 10f, 10f, 10f, false, true, 0))
								{
									TASK::CLEAR_PED_SECONDARY_TASK(bParam0);
									TASK::OPEN_SEQUENCE_TASK(&iLocal_48);
									TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, unk_0x9B0761B4C3EB8BC7(), -1);
									TASK::TASK_LOOK_AT_ENTITY(false, unk_0x9B0761B4C3EB8BC7(), 20000, 1024, 2);
									TASK::CLOSE_SEQUENCE_TASK(iLocal_48);
									AUDIO::STOP_SCRIPTED_CONVERSATION(bParam0, iLocal_48);
									TASK::CLEAR_SEQUENCE_TASK(&iLocal_48);
									if (SYSTEM::VMAG(fLocal_220))
									{
										HUD::SHOW_HEIGHT_ON_BLIP(fLocal_220, true);
									}
									ENTITY::SET_ENTITY_HEALTH(unk_0x9B0761B4C3EB8BC7(), joaat("weapon_unarmed"), 1);
									if (PED::IS_PED_FACING_PED(bParam0, unk_0x9B0761B4C3EB8BC7(), 45f))
									{
										func_43();
										SYSTEM::WAIT(0);
										func_45(&uLocal_53, "REGIAU", "REGIN_LR1F", 4, 0, 0, 0);
										iLocal_234 = 1;
									}
								}
							}
							else if (iLocal_225 == 0)
							{
								func_45(&uLocal_53, "REGIAU", "REGIN_CAR", 4, 0, 0, 0);
								if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bParam0))
								{
									TASK::OPEN_SEQUENCE_TASK(&iLocal_48);
									TASK::TASK_LOOK_AT_ENTITY(false, unk_0x9B0761B4C3EB8BC7(), 20000, 1024, 2);
									TASK::TASK_PLAY_ANIM(false, "random@gang_intimidation@", "001445_01_gangintimidation_1_female_wave_loop", 2f, -2f, -1, 49, 0f, false, false, false);
									TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, unk_0x9B0761B4C3EB8BC7(), -1);
									TASK::CLOSE_SEQUENCE_TASK(iLocal_48);
									AUDIO::STOP_SCRIPTED_CONVERSATION(bParam0, iLocal_48);
									TASK::CLEAR_SEQUENCE_TASK(&iLocal_48);
								}
								iLocal_225 = 1;
							}
						}
						else
						{
							func_43();
							SYSTEM::WAIT(0);
							func_45(&uLocal_53, "REGIAU", "REGIN_POLICE", 4, 0, 0, 0);
							if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bParam0))
							{
								HUD::HIDE_HUD_AND_RADAR_THIS_FRAME(bParam0);
								TASK::TASK_SMART_FLEE_PED(bParam0, unk_0x9B0761B4C3EB8BC7(), 200f, -1, false, false);
								PED::SET_PED_KEEP_TASK(bParam0, true);
								iLocal_226 = 1;
							}
						}
					}
					else if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bParam0))
					{
						if (ENTITY::IS_ENTITY_AT_ENTITY(unk_0x9B0761B4C3EB8BC7(), bParam0, 8f, 8f, 8f, false, true, 0))
						{
							TASK::OPEN_SEQUENCE_TASK(&iLocal_48);
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, unk_0x9B0761B4C3EB8BC7(), -1);
							TASK::TASK_LOOK_AT_ENTITY(false, unk_0x9B0761B4C3EB8BC7(), 20000, 1024, 2);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_48);
							AUDIO::STOP_SCRIPTED_CONVERSATION(bParam0, iLocal_48);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_48);
							if (PED::IS_PED_FACING_PED(bParam0, unk_0x9B0761B4C3EB8BC7(), 45f))
							{
								func_43();
								SYSTEM::WAIT(0);
								func_45(&uLocal_53, "REGIAU", "REGIN_LR1F", 4, 0, 0, 0);
								iLocal_234 = 1;
							}
						}
					}
				}
			}
			if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY((*uParam1)[2]))
			{
				if (unk_0x1037B9D45CE6B788(unk_0x9B0761B4C3EB8BC7(), 1273.098f, -1604.172f, 53.1535f, 1276.568f, -1615.127f, 56.7879f, 10f, 0, 1, 0) && !func_63())
				{
					iLocal_234 = 3;
				}
				else if (unk_0x1037B9D45CE6B788(unk_0x9B0761B4C3EB8BC7(), 1298.546f, -1617.742f, 53.2254f, 1262.868f, -1629.36f, 64.2894f, 30.4375f, 0, 1, 0))
				{
					func_62(bParam0, uParam1);
				}
			}
			break;
		
		case 1:
			if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY((*uParam1)[2]))
			{
				if (unk_0x1037B9D45CE6B788(unk_0x9B0761B4C3EB8BC7(), 1273.098f, -1604.172f, 53.1535f, 1276.568f, -1615.127f, 56.7879f, 10f, 0, 1, 0) && !func_63())
				{
					iLocal_234 = 3;
				}
				else if (unk_0x1037B9D45CE6B788(unk_0x9B0761B4C3EB8BC7(), 1298.546f, -1617.742f, 53.2254f, 1262.868f, -1629.36f, 64.2894f, 30.4375f, 0, 1, 0))
				{
					func_62(bParam0, uParam1);
				}
			}
			if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bParam0) && !SYSTEM::VDIST(unk_0x9B0761B4C3EB8BC7(), 0))
			{
				MISC::CLEAR_AREA_OF_VEHICLES(Local_224, 13f, false, false, false, false, false, false);
				TASK::CLEAR_PED_SECONDARY_TASK(bParam0);
				if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bParam0))
				{
					TASK::OPEN_SEQUENCE_TASK(&iLocal_48);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_224, 2f, 20000, 0.25f, false, 32.2195f);
					TASK::TASK_LOOK_AT_ENTITY(false, unk_0x9B0761B4C3EB8BC7(), -1, 1024, 2);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, unk_0x9B0761B4C3EB8BC7(), -1);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_48);
					AUDIO::STOP_SCRIPTED_CONVERSATION(bParam0, iLocal_48);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_48);
					iLocal_48 = 0;
					if ((WEAPON::IS_PED_ARMED(unk_0x9B0761B4C3EB8BC7(), 6) && ENTITY::IS_ENTITY_AT_ENTITY(unk_0x9B0761B4C3EB8BC7(), bParam0, 6f, 6f, 6f, false, true, 0)) && !SYSTEM::VDIST(unk_0x9B0761B4C3EB8BC7(), 0))
					{
					}
				}
				iLocal_234 = 2;
			}
			break;
		
		case 2:
			if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bParam0) && !func_75())
			{
				if (func_45(&uLocal_53, "REGIAU", "REGIN_LR1G", 4, 0, 0, 0))
				{
					SYSTEM::SETTIMERA(0);
					iLocal_234 = 3;
				}
			}
			break;
		
		case 3:
			if (unk_0x1037B9D45CE6B788(unk_0x9B0761B4C3EB8BC7(), 1273.098f, -1604.172f, 53.1535f, 1276.568f, -1615.127f, 56.7879f, 10f, 0, 1, 0) && !func_63())
			{
				func_61(bParam0);
				iLocal_234 = 4;
			}
			else if (unk_0x1037B9D45CE6B788(unk_0x9B0761B4C3EB8BC7(), 1298.546f, -1617.742f, 53.2254f, 1262.868f, -1629.36f, 64.2894f, 30.4375f, 0, 1, 0))
			{
				func_62(bParam0, uParam1);
			}
			else if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bParam0))
			{
				if (SYSTEM::TIMERA() > 8000 && unk_0xC2169C00B643278B(bParam0, Local_224, 3f, 3f, 3f, 0, 1, 0))
				{
					if (PED::IS_PED_FACING_PED(bParam0, unk_0x9B0761B4C3EB8BC7(), 60f))
					{
						if (func_164())
						{
							TASK::TASK_PLAY_ANIM(bParam0, "random@gang_intimidation@", "001445_01_gangintimidation_1_female_idle_a", 2f, -2f, -1, 48, 0f, false, false, false);
						}
						else
						{
							TASK::TASK_PLAY_ANIM(bParam0, "random@gang_intimidation@", "001445_01_gangintimidation_1_female_idle_b", 2f, -2f, -1, 0, 0f, false, false, false);
						}
						func_45(&uLocal_53, "REGIAU", "REGIN_HERE", 4, 0, 0, 0);
						SYSTEM::SETTIMERA(0);
					}
				}
				if ((WEAPON::IS_PED_ARMED(unk_0x9B0761B4C3EB8BC7(), 6) && PED::CAN_PED_SEE_HATED_PED(bParam0, unk_0x9B0761B4C3EB8BC7())) && !SYSTEM::VDIST(unk_0x9B0761B4C3EB8BC7(), 0))
				{
					if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), bParam0) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), bParam0))
					{
						func_62(bParam0, uParam1);
					}
				}
			}
			break;
		
		case 4:
			if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bParam0))
			{
				TASK::OPEN_SEQUENCE_TASK(&iLocal_48);
				TASK::TASK_STAND_STILL(0, 500);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_224, 2f, 20000, 0.25f, false, 40000f);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_48);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_48);
				iLocal_48 = 0;
			}
			func_76();
			SYSTEM::WAIT(0);
			if (!func_75())
			{
				func_45(&uLocal_53, "REGIAU", "REGIN_THRT", 4, 0, 0, 0);
				iLocal_234 = 5;
			}
			break;
		
		case 5:
			func_37(uParam1);
			func_41(fLocal_220);
			bLocal_235 = true;
			return 1;
			break;
	}
	return 1;
}

void func_61(bool bParam0)
{
	if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bParam0))
	{
		HUD::HIDE_HUD_AND_RADAR_THIS_FRAME(bParam0);
		TASK::OPEN_SEQUENCE_TASK(&iLocal_48);
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 1286.037f, -1623.207f, 53.2297f, 2f, -1, 0.25f, false, 40000f);
		TASK::TASK_COWER(false, -1);
		TASK::CLOSE_SEQUENCE_TASK(iLocal_48);
		AUDIO::STOP_SCRIPTED_CONVERSATION(bParam0, iLocal_48);
		TASK::CLEAR_SEQUENCE_TASK(&iLocal_48);
		iLocal_48 = 0;
		PED::SET_PED_CAN_BE_TARGETTED(bParam0, true);
		func_41(fLocal_220);
	}
}

void func_62(bool bParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY((*uParam1)[iVar0]) && !STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bParam0))
		{
			if ((PED::CAN_PED_SEE_HATED_PED((*uParam1)[iVar0], unk_0x9B0761B4C3EB8BC7()) || PLAYER::CAN_PED_HEAR_PLAYER(PLAYER::PLAYER_ID(), (*uParam1)[iVar0])) || PED::CAN_PED_SEE_HATED_PED(bParam0, unk_0x9B0761B4C3EB8BC7()))
			{
				func_76();
				if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY((*uParam1)[iVar0]))
				{
					HUD::HIDE_HUD_AND_RADAR_THIS_FRAME((*uParam1)[iVar0]);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_48);
					TASK::TASK_LOOK_AT_ENTITY(false, unk_0x9B0761B4C3EB8BC7(), 1000, 2048, 2);
					TASK::TASK_SMART_FLEE_PED(false, unk_0x9B0761B4C3EB8BC7(), 200f, -1, false, false);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_48);
					AUDIO::STOP_SCRIPTED_CONVERSATION((*uParam1)[iVar0], iLocal_48);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_48);
					PED::SET_PED_KEEP_TASK((*uParam1)[iVar0], true);
				}
				if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bParam0))
				{
					HUD::HIDE_HUD_AND_RADAR_THIS_FRAME(bParam0);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_48);
					TASK::TASK_LOOK_AT_ENTITY(false, unk_0x9B0761B4C3EB8BC7(), 1000, 2048, 2);
					TASK::TASK_SMART_FLEE_PED(false, unk_0x9B0761B4C3EB8BC7(), 200f, -1, false, false);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_48);
					AUDIO::STOP_SCRIPTED_CONVERSATION(bParam0, iLocal_48);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_48);
					PED::SET_PED_KEEP_TASK(bParam0, true);
				}
				iLocal_227 = 1;
			}
		}
		else
		{
			func_76();
			if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY((*uParam1)[iVar0]))
			{
				HUD::HIDE_HUD_AND_RADAR_THIS_FRAME((*uParam1)[iVar0]);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_48);
				TASK::TASK_LOOK_AT_ENTITY(false, unk_0x9B0761B4C3EB8BC7(), 1000, 2048, 2);
				TASK::TASK_SMART_FLEE_PED(false, unk_0x9B0761B4C3EB8BC7(), 200f, -1, false, false);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_48);
				AUDIO::STOP_SCRIPTED_CONVERSATION((*uParam1)[iVar0], iLocal_48);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_48);
				PED::SET_PED_KEEP_TASK((*uParam1)[iVar0], true);
			}
			if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bParam0))
			{
				HUD::HIDE_HUD_AND_RADAR_THIS_FRAME(bParam0);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_48);
				TASK::TASK_LOOK_AT_ENTITY(false, unk_0x9B0761B4C3EB8BC7(), 1000, 2048, 2);
				TASK::TASK_SMART_FLEE_PED(false, unk_0x9B0761B4C3EB8BC7(), 200f, -1, false, false);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_48);
				AUDIO::STOP_SCRIPTED_CONVERSATION(bParam0, iLocal_48);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_48);
				PED::SET_PED_KEEP_TASK(bParam0, true);
			}
			iLocal_227 = 1;
		}
		iVar0++;
	}
}

int func_63()
{
	if (SYSTEM::VDIST(unk_0x9B0761B4C3EB8BC7(), 0))
	{
		if (ENTITY::GET_ENTITY_COORDS(ENTITY::GET_ENTITY_MODEL(unk_0x9B0761B4C3EB8BC7(), 0), false))
		{
			if (PED::IS_PED_IN_MODEL(unk_0x9B0761B4C3EB8BC7(), joaat("rhino")))
			{
				return 1;
			}
		}
	}
	if (PED::IS_PED_IN_FLYING_VEHICLE(unk_0x9B0761B4C3EB8BC7()) || unk_0x653A331834B72BC0(unk_0x9B0761B4C3EB8BC7()))
	{
		return 1;
	}
	return 0;
}

int func_64(int iParam0)
{
	if (func_68())
	{
		Global_111848 = 1;
		Global_111845 = MISC::GET_GAME_TIMER();
		if (func_14(Global_111847))
		{
			func_65(0);
		}
		HUD::SET_MISSION_NAME(true, "RE_TITLE");
		if (iParam0 && func_14(Global_111847))
		{
			HUD::FLASH_MINIMAP_DISPLAY();
		}
		return 1;
	}
	return 0;
}

void func_65(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_111858.f_24991.f_2 < 3)
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					func_66(func_67(iParam0), -1);
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
					func_66(func_67(iParam0), -1);
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
					func_66(func_67(iParam0), -1);
					Global_111858.f_24991.f_4++;
					unk_0xBE20AB8238688965(&Global_111854, 2);
				}
			}
			break;
	}
}

void func_66(var uParam0, int iParam1)
{
	unk_0x17751E107423AFE9(uParam0);
	FILES::GET_DLC_VEHICLE_FLAGS(0, 0, 1, iParam1);
}

char* func_67(int iParam0)
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

int func_68()
{
	switch (func_69(&Global_31027, 0, 5, 0, SCRIPT::GET_ID_OF_THIS_THREAD()))
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

int func_69(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
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
		if (func_73(0))
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
		if (!func_71(iParam2))
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
			func_70(uParam0, iParam4);
		}
	}
	return 2;
}

void func_70(var uParam0, int iParam1)
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

bool func_71(int iParam0)
{
	return func_72(iParam0, Global_41631);
}

int func_72(int iParam0, int iParam1)
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

int func_73(int iParam0)
{
	if (Global_41631 == 15)
	{
		return 0;
	}
	if (func_71(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_74(struct<3> Param0, int iParam1)
{
	if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(unk_0x9B0761B4C3EB8BC7()))
	{
		if (SYSTEM::VDIST(NETWORK::NETWORK_ARE_HANDLES_THE_SAME(unk_0x9B0761B4C3EB8BC7(), 1), Param0) > IntToFloat(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_75()
{
	if (Global_21005 != 0 || ENTITY::IS_ENTITY_DEAD())
	{
		return 1;
	}
	return 0;
}

void func_76()
{
	Global_19871 = 0;
	func_77();
}

void func_77()
{
	SYSTEM::ROUND();
	Global_22016 = 0;
	if (ENTITY::IS_ENTITY_DEAD())
	{
		unk_0xBE4122AC23440E7D(0);
		Global_21005 = 6;
	}
}

int func_78(bool bParam0, int iParam1)
{
	if (PED::IS_PED_ON_FOOT(unk_0x9B0761B4C3EB8BC7()))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(bParam0, unk_0x9B0761B4C3EB8BC7(), true))
		{
			return 1;
		}
	}
	else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(bParam0, unk_0x9B0761B4C3EB8BC7(), true))
	{
		if ((PED::GET_PED_MAX_HEALTH(bParam0) - ENTITY::GET_ENTITY_HEALTH(bParam0)) > iParam1)
		{
			return 1;
		}
	}
	return 0;
}

int func_79(int iParam0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, float fParam6, int iParam7)
{
	int iVar0;
	
	fParam6 = fParam6;
	if (!bParam5)
	{
		iVar0 = 0;
		while (iVar0 < *iParam0)
		{
			if (func_80((*iParam0)[iVar0], uParam2, uParam3, bParam4, bParam5, fParam6, iParam7))
			{
				*uParam1 = iVar0;
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_80(bool bParam0, var uParam1, var uParam2, bool bParam3, bool bParam4, float fParam5, int iParam6)
{
	float fVar0;
	float fVar1;
	bool bVar2;
	struct<3> Var3;
	struct<3> Var4;
	bool bVar5;
	
	bVar2 = false;
	if (!PED::IS_PED_IN_ANY_POLICE_VEHICLE(bParam0, 0) && !bParam4)
	{
		if (PED::IS_PED_ON_FOOT(bParam0))
		{
			fVar1 = fParam5;
		}
		else
		{
			fVar1 = (fParam5 + 3f);
		}
	}
	if (!PED::IS_PED_IN_ANY_POLICE_VEHICLE(unk_0x9B0761B4C3EB8BC7(), 0))
	{
		if (!PED::IS_PED_IN_ANY_POLICE_VEHICLE(bParam0, 0) && !bParam4)
		{
			Var3 = { NETWORK::NETWORK_ARE_HANDLES_THE_SAME(unk_0x9B0761B4C3EB8BC7(), 1) };
			Var4 = { NETWORK::NETWORK_ARE_HANDLES_THE_SAME(bParam0, 1) };
			bVar5 = SYSTEM::VDIST(Var3, Var4);
			if (!unk_0xCE990E643CD9D0E5(bParam3, 3))
			{
				if (func_78(bParam0, iParam6))
				{
					func_85("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
					func_85("	aggroReason = EAggro_Attacked\n");
					*uParam1 = 3;
					func_84(bParam0);
					return 1;
				}
			}
			if (!unk_0xCE990E643CD9D0E5(bParam3, 1))
			{
				if (fVar1 < 20f)
				{
				}
				if (MISC::IS_BULLET_IN_AREA(Var4, fParam5, true))
				{
					func_85("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
					func_85("	aggroReason = EAggro_ShotNear\n");
					*uParam1 = 1;
					func_84(bParam0);
					return 1;
				}
				if (MISC::IS_PROJECTILE_IN_AREA(Var4 - Vector((fParam5 / 2f), (fParam5 / 2f), (fParam5 / 2f)), Var4 + Vector((fParam5 / 2f), (fParam5 / 2f), (fParam5 / 2f)), false))
				{
					func_85("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
					func_85("	aggroReason = EAggro_ShotNear\n");
					*uParam1 = 1;
					func_84(bParam0);
					return 1;
				}
			}
			if (!unk_0xCE990E643CD9D0E5(bParam3, 2))
			{
				fVar0 = WEAPON::GET_LOCKON_DISTANCE_OF_CURRENT_PED_WEAPON(unk_0x9B0761B4C3EB8BC7());
				if (fVar0 < 0f)
				{
					fVar0 = 25f;
				}
				else if (fVar0 > 25f)
				{
					fVar0 = 25f;
				}
				if (WEAPON::IS_PED_ARMED(unk_0x9B0761B4C3EB8BC7(), 6))
				{
					if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), bParam0) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), bParam0))
					{
						if (bVar5 < fVar0)
						{
							if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(bParam0, unk_0x9B0761B4C3EB8BC7(), 17))
							{
								func_85("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
								func_85("	aggro Ped knows player is pointing gun\n");
								func_81("		lockOnTimer = ", *uParam2);
								func_85("\n");
								func_81("		time since not LockedOn = ", (MISC::GET_GAME_TIMER() - iLocal_45));
								func_85("\n");
								bVar2 = true;
								if (MISC::GET_GAME_TIMER() > (iLocal_45 + *uParam2))
								{
									func_85("			aggroReason = EAggro_HostileOrEnemy\n");
									*uParam1 = 2;
									func_84(bParam0);
									return 1;
								}
							}
						}
						else
						{
							bVar2 = false;
						}
					}
					else
					{
						bVar2 = false;
					}
				}
			}
			if (!unk_0xCE990E643CD9D0E5(bParam3, 0))
			{
				if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
				{
					func_85("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
					func_85("			aggroReason = EAggro_Danger\n");
					*uParam1 = 0;
					func_84(bParam0);
					return 1;
				}
			}
		}
	}
	if (!bVar2)
	{
		iLocal_45 = MISC::GET_GAME_TIMER();
	}
	return 0;
}

void func_81(char* sParam0, int iParam1)
{
	func_83(sParam0);
	func_82(iParam1);
}

void func_82(int iParam0)
{
	if (iParam0 > 0)
	{
	}
}

void func_83(char* sParam0)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS(uParam0, uParam0))
	{
	}
}

void func_84(bool bParam0)
{
	AUDIO::STOP_CURRENT_PLAYING_AMBIENT_SPEECH(bParam0);
}

void func_85(char* sParam0)
{
	func_83(sParam0);
}

int func_86()
{
	bool bVar0;
	
	bVar0 = NETWORK::_NETWORK_GET_ROS_PRIVILEGE_25(0, 5);
	if (bVar0 == 0)
	{
		return joaat("weapon_combatpistol");
	}
	else if (bVar0 == 1)
	{
		return joaat("weapon_combatpistol");
	}
	else if (bVar0 == 2)
	{
		return joaat("weapon_pistol");
	}
	else if (bVar0 == 3)
	{
		return joaat("weapon_pistol");
	}
	else
	{
		return joaat("weapon_pistol");
	}
	return joaat("weapon_pistol");
}

void func_87(var uParam0, int iParam1, bool bParam2, char* sParam3, int iParam4, int iParam5)
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

int func_88()
{
	func_20();
	return Global_111858.f_2359.f_539.f_4321;
}

void func_89(bool bParam0)
{
	if (bParam0)
	{
	}
}

int func_90(int iParam0)
{
	if (BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
	{
		if (func_91(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_91(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
			break;
		
		case 1:
			if (func_21(6) || func_21(7))
			{
				return 1;
			}
			else
			{
				return func_91(3);
			}
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			if (func_71(5))
			{
				if (func_92(4))
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_92(int iParam0)
{
	int iVar0;
	
	if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_ID()))
	{
		if (MISC::IS_BIT_SET(unk_0x9B0761B4C3EB8BC7()))
		{
			if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(unk_0x9B0761B4C3EB8BC7()))
			{
				iVar0 = func_88();
				if (!func_22(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(unk_0x9B0761B4C3EB8BC7())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(unk_0x9B0761B4C3EB8BC7())) || MISC::IS_PC_VERSION(unk_0x9B0761B4C3EB8BC7())) || PED::IS_PED_SHOOTING(unk_0x9B0761B4C3EB8BC7())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())) || PED::IS_PED_IN_COMBAT(unk_0x9B0761B4C3EB8BC7(), 0)) || func_100()) || Global_110905) || Global_30970) || func_99()) || func_58(8, -1)) || func_98()) || func_97()) || func_96()) || func_95()) || Global_111858.f_7684.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || func_100()) || Global_30970) || func_99()) || func_58(8, -1)) || func_96()) || func_98()) || func_97()) || func_95()) || Global_111858.f_7684.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(unk_0x9B0761B4C3EB8BC7())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(unk_0x9B0761B4C3EB8BC7())) || MISC::IS_PC_VERSION(unk_0x9B0761B4C3EB8BC7())) || PED::IS_PED_SHOOTING(unk_0x9B0761B4C3EB8BC7())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())) || PED::IS_PED_IN_COMBAT(unk_0x9B0761B4C3EB8BC7(), 0)) || func_100()) || Global_110905) || Global_30970) || func_99()) || func_58(8, -1)) || func_96()) || func_98()) || func_97()) || func_95()) || Global_111858.f_7684.f_919[iVar0] == 5) || Global_42178 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((MISC::IS_PC_VERSION(unk_0x9B0761B4C3EB8BC7()) || PED::IS_PED_SHOOTING(unk_0x9B0761B4C3EB8BC7())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PED::IS_PED_IN_COMBAT(unk_0x9B0761B4C3EB8BC7(), 0)) || func_100()) || Global_110905) || Global_30970) || func_99()) || func_58(8, -1)) || func_98()) || func_97()) || func_95()) || Global_111858.f_7684.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_100() || AUDIO::SET_SCRIPT_UPDATE_DOOR_AUDIO(PLAYER::PLAYER_ID()) > 0) || func_58(8, -1)) || func_95()) || func_94()) || Global_111858.f_7684.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_58(8, -1) || func_98()) || func_97()) || func_94()) || func_93())
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
							if ((((((((((((((PED::IS_PED_IN_COMBAT(unk_0x9B0761B4C3EB8BC7(), 0) || AUDIO::SET_SCRIPT_UPDATE_DOOR_AUDIO(PLAYER::PLAYER_ID()) > 0) || ENTITY::IS_ENTITY_IN_AIR(unk_0x9B0761B4C3EB8BC7())) || MISC::IS_PC_VERSION(unk_0x9B0761B4C3EB8BC7())) || PED::IS_PED_SHOOTING(unk_0x9B0761B4C3EB8BC7())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())) || func_100()) || Global_30970) || func_99()) || func_58(8, -1)) || func_97()) || func_96()) || func_95()) || Global_111858.f_7684.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((PED::IS_PED_IN_COMBAT(unk_0x9B0761B4C3EB8BC7(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) || !GRAPHICS::DRAW_SCALEFORM_MOVIE()) || ENTITY::IS_ENTITY_IN_AIR(unk_0x9B0761B4C3EB8BC7())) || MISC::IS_PC_VERSION(unk_0x9B0761B4C3EB8BC7())) || PED::IS_PED_SHOOTING(unk_0x9B0761B4C3EB8BC7())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || func_100()) || func_97()) || Global_110905) || Global_30970) || func_99()) || Global_42801) || func_58(8, -1)) || func_96()) || func_94()) || func_95()) || Global_111858.f_7684.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((PED::IS_PED_IN_COMBAT(unk_0x9B0761B4C3EB8BC7(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) || !GRAPHICS::DRAW_SCALEFORM_MOVIE()) || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0)) || ENTITY::IS_ENTITY_IN_AIR(unk_0x9B0761B4C3EB8BC7())) || SYSTEM::VDIST(unk_0x9B0761B4C3EB8BC7(), 1)) || MISC::IS_PC_VERSION(unk_0x9B0761B4C3EB8BC7())) || PED::IS_PED_SHOOTING(unk_0x9B0761B4C3EB8BC7())) || PED::IS_PED_DIVING(unk_0x9B0761B4C3EB8BC7())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())) || func_100()) || Global_110905) || Global_30970) || func_99()) || func_58(8, -1)) || func_96()) || func_94()) || func_98()) || func_97()) || func_95())
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

var func_93()
{
	return Global_98994.f_1;
}

int func_94()
{
	if (Global_95877 != -1)
	{
		return unk_0xCE990E643CD9D0E5(Global_89743[Global_95877 /*34*/].f_15, 13);
	}
	return 0;
}

int func_95()
{
	if (INTERIOR::GET_INTERIOR_AT_COORDS(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_96()
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

bool func_97()
{
	return Global_99007.f_352 > 0;
}

bool func_98()
{
	return Global_99007.f_351 > 0;
}

var func_99()
{
	return Global_1312896;
}

int func_100()
{
	if (!MISC::SET_BIT())
	{
		return Global_96433.f_44 == 1;
	}
	return 0;
}

int func_101()
{
	if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_ID()) && !STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(unk_0x9B0761B4C3EB8BC7()))
	{
		if (SYSTEM::VDIST2(NETWORK::NETWORK_ARE_HANDLES_THE_SAME(unk_0x9B0761B4C3EB8BC7(), 1), Local_46) < (75f * 75f))
		{
			return 1;
		}
		if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(unk_0x9B0761B4C3EB8BC7())) > 1369f && !func_112())
		{
			return 0;
		}
	}
	if (func_108())
	{
		return 1;
	}
	if (func_102(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_102(float fParam0, bool bParam1)
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
		if (func_22(func_88()))
		{
			iVar5 = func_19();
			iVar6 = 0;
			iVar6 = 0;
			while (iVar6 < 63)
			{
				iVar1 = iVar6;
				if (unk_0xCE990E643CD9D0E5(Global_111858.f_18570[iVar1 /*6*/], 2) && !unk_0xCE990E643CD9D0E5(Global_111858.f_18570[iVar1 /*6*/], 3))
				{
					func_103(iVar1, &Var0);
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

void func_103(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_104(uParam1, "Abigail1", func_106(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_105(iParam0), 1, 0);
			break;
		
		case 1:
			func_104(uParam1, "Abigail2", func_106(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_105(iParam0), 1, 0);
			break;
		
		case 2:
			func_104(uParam1, "Barry1", func_106(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_105(iParam0), 1, 0);
			break;
		
		case 3:
			func_104(uParam1, "Barry2", func_106(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_105(iParam0), 1, 1);
			break;
		
		case 4:
			func_104(uParam1, "Barry3", func_106(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_105(iParam0), 0, 0);
			break;
		
		case 5:
			func_104(uParam1, "Barry3A", func_106(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_105(iParam0), 0, 1);
			break;
		
		case 6:
			func_104(uParam1, "Barry3C", func_106(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_105(iParam0), 0, 1);
			break;
		
		case 7:
			func_104(uParam1, "Barry4", func_106(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_105(iParam0), 0, 0);
			break;
		
		case 8:
			func_104(uParam1, "Dreyfuss1", func_106(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_105(iParam0), 0, 0);
			break;
		
		case 9:
			func_104(uParam1, "Epsilon1", func_106(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_105(iParam0), 0, 0);
			break;
		
		case 10:
			func_104(uParam1, "Epsilon2", func_106(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_105(iParam0), 1, 0);
			break;
		
		case 11:
			func_104(uParam1, "Epsilon3", func_106(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_105(iParam0), 0, 0);
			break;
		
		case 12:
			func_104(uParam1, "Epsilon4", func_106(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_105(iParam0), 0, 0);
			break;
		
		case 13:
			func_104(uParam1, "Epsilon5", func_106(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_105(iParam0), 1, 0);
			break;
		
		case 14:
			func_104(uParam1, "Epsilon6", func_106(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_105(iParam0), 0, 1);
			break;
		
		case 15:
			func_104(uParam1, "Epsilon7", func_106(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_105(iParam0), 0, 0);
			break;
		
		case 16:
			func_104(uParam1, "Epsilon8", func_106(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_105(iParam0), 1, 0);
			break;
		
		case 17:
			func_104(uParam1, "Extreme1", func_106(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_105(iParam0), 0, 1);
			break;
		
		case 18:
			func_104(uParam1, "Extreme2", func_106(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_105(iParam0), 0, 1);
			break;
		
		case 19:
			func_104(uParam1, "Extreme3", func_106(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_105(iParam0), 0, 1);
			break;
		
		case 20:
			func_104(uParam1, "Extreme4", func_106(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_105(iParam0), 0, 0);
			break;
		
		case 21:
			func_104(uParam1, "Fanatic1", func_106(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_105(iParam0), 1, 0);
			break;
		
		case 22:
			func_104(uParam1, "Fanatic2", func_106(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_105(iParam0), 1, 0);
			break;
		
		case 23:
			func_104(uParam1, "Fanatic3", func_106(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_105(iParam0), 0, 1);
			break;
		
		case 24:
			func_104(uParam1, "Hao1", func_106(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_105(iParam0), 0, 1);
			break;
		
		case 25:
			func_104(uParam1, "Hunting1", func_106(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_105(iParam0), 0, 1);
			break;
		
		case 26:
			func_104(uParam1, "Hunting2", func_106(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_105(iParam0), 0, 1);
			break;
		
		case 27:
			func_104(uParam1, "Josh1", func_106(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_105(iParam0), 1, 0);
			break;
		
		case 28:
			func_104(uParam1, "Josh2", func_106(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_105(iParam0), 1, 1);
			break;
		
		case 29:
			func_104(uParam1, "Josh3", func_106(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_105(iParam0), 1, 1);
			break;
		
		case 30:
			func_104(uParam1, "Josh4", func_106(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_105(iParam0), 1, 0);
			break;
		
		case 31:
			func_104(uParam1, "Maude1", func_106(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_105(iParam0), 0, 1);
			break;
		
		case 32:
			func_104(uParam1, "Minute1", func_106(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_105(iParam0), 0, 1);
			break;
		
		case 33:
			func_104(uParam1, "Minute2", func_106(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_105(iParam0), 0, 1);
			break;
		
		case 34:
			func_104(uParam1, "Minute3", func_106(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_105(iParam0), 0, 1);
			break;
		
		case 35:
			func_104(uParam1, "MrsPhilips1", func_106(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_105(iParam0), 0, 0);
			break;
		
		case 36:
			func_104(uParam1, "MrsPhilips2", func_106(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_105(iParam0), 0, 0);
			break;
		
		case 37:
			func_104(uParam1, "Nigel1", func_106(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_105(iParam0), 1, 0);
			break;
		
		case 38:
			func_104(uParam1, "Nigel1A", func_106(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_105(iParam0), 1, 1);
			break;
		
		case 39:
			func_104(uParam1, "Nigel1B", func_106(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_105(iParam0), 1, 1);
			break;
		
		case 40:
			func_104(uParam1, "Nigel1C", func_106(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_105(iParam0), 1, 1);
			break;
		
		case 41:
			func_104(uParam1, "Nigel1D", func_106(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_105(iParam0), 1, 1);
			break;
		
		case 42:
			func_104(uParam1, "Nigel2", func_106(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_105(iParam0), 1, 1);
			break;
		
		case 43:
			func_104(uParam1, "Nigel3", func_106(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_105(iParam0), 1, 1);
			break;
		
		case 44:
			func_104(uParam1, "Omega1", func_106(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_105(iParam0), 0, 0);
			break;
		
		case 45:
			func_104(uParam1, "Omega2", func_106(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_105(iParam0), 0, 0);
			break;
		
		case 46:
			func_104(uParam1, "Paparazzo1", func_106(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_105(iParam0), 0, 1);
			break;
		
		case 47:
			func_104(uParam1, "Paparazzo2", func_106(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_105(iParam0), 0, 1);
			break;
		
		case 48:
			func_104(uParam1, "Paparazzo3", func_106(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_105(iParam0), 0, 0);
			break;
		
		case 49:
			func_104(uParam1, "Paparazzo3A", func_106(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_105(iParam0), 0, 1);
			break;
		
		case 50:
			func_104(uParam1, "Paparazzo3B", func_106(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_105(iParam0), 0, 1);
			break;
		
		case 51:
			func_104(uParam1, "Paparazzo4", func_106(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_105(iParam0), 0, 0);
			break;
		
		case 52:
			func_104(uParam1, "Rampage1", func_106(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_105(iParam0), 0, 0);
			break;
		
		case 54:
			func_104(uParam1, "Rampage3", func_106(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_105(iParam0), 1, 0);
			break;
		
		case 55:
			func_104(uParam1, "Rampage4", func_106(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_105(iParam0), 1, 0);
			break;
		
		case 56:
			func_104(uParam1, "Rampage5", func_106(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_105(iParam0), 0, 0);
			break;
		
		case 53:
			func_104(uParam1, "Rampage2", func_106(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_105(iParam0), 1, 0);
			break;
		
		case 57:
			func_104(uParam1, "TheLastOne", func_106(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_105(iParam0), 0, 1);
			break;
		
		case 58:
			func_104(uParam1, "Tonya1", func_106(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_105(iParam0), 0, 1);
			break;
		
		case 59:
			func_104(uParam1, "Tonya2", func_106(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_105(iParam0), 0, 1);
			break;
		
		case 60:
			func_104(uParam1, "Tonya3", func_106(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_105(iParam0), 0, 1);
			break;
		
		case 61:
			func_104(uParam1, "Tonya4", func_106(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_105(iParam0), 0, 1);
			break;
		
		case 62:
			func_104(uParam1, "Tonya5", func_106(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_105(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_104(var uParam0, char* sParam1, struct<2> Param2, int iParam3, int iParam4, int iParam5, struct<3> Param6, int iParam7, char* sParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, var uParam19, int iParam20, int iParam21)
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

int func_105(int iParam0)
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

struct<2> func_106(int iParam0)
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	cVar1 = { func_107(iParam0) };
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

struct<2> func_107(int iParam0)
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

int func_108()
{
	if (func_111() && !func_112())
	{
		return 1;
	}
	if (func_110() && func_109())
	{
		return 1;
	}
	return 0;
}

bool func_109()
{
	return Global_111576 > 0;
}

int func_110()
{
	if (Global_95877 != -1)
	{
		return 1;
	}
	return 0;
}

int func_111()
{
	if (Global_95877 != -1)
	{
		return unk_0xCE990E643CD9D0E5(Global_89743[Global_95877 /*34*/].f_15, 20);
	}
	return 0;
}

int func_112()
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

int func_113()
{
	if (!func_71(5))
	{
		return 1;
	}
	if (func_108())
	{
		return 1;
	}
	if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(unk_0x9B0761B4C3EB8BC7()))
	{
		if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(unk_0x9B0761B4C3EB8BC7())) > 1369f && !func_112())
		{
			return 0;
		}
	}
	if (func_102(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_114()
{
	if ((Global_111847 == func_29() && MISC::GET_RANDOM_EVENT_FLAG()) && Global_111848)
	{
		return 1;
	}
	return 0;
}

int func_115(int iParam0, struct<5> Param1, var uParam2)
{
	int iVar0;
	
	if (iParam0 == 1)
	{
		iVar0 = 0;
		while (iVar0 <= (iLocal_49 - 1))
		{
			unk_0x78FCB2E22C41B9D5(Param1[iVar0]);
			iVar0++;
		}
		unk_0x78FCB2E22C41B9D5(Param1.f_4);
		STREAMING::REQUEST_ANIM_DICT("random@gang_intimidation@");
		AUDIO::PREPARE_MUSIC_EVENT("RE28_OS");
		if (!ENTITY::DOES_ENTITY_EXIST(Param1.f_4))
		{
			return 0;
		}
		iVar0 = 0;
		while (iVar0 <= (iLocal_49 - 1))
		{
			if (!ENTITY::DOES_ENTITY_EXIST(Param1[iVar0]))
			{
				return 0;
			}
			iVar0++;
		}
		if (STREAMING::HAS_ANIM_DICT_LOADED("random@gang_intimidation@"))
		{
			return 1;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 <= (iLocal_49 - 1))
		{
			unk_0x74528AC0906CBABE(Param1[iVar0]);
			iVar0++;
		}
		unk_0x74528AC0906CBABE(Param1.f_4);
	}
	return 0;
}

void func_116(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_29();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_118(iParam0);
	MISC::_0x65D2EBB47E1CEC21(false);
	MISC::SET_RANDOM_EVENT_FLAG(true);
	Global_111844 = 0;
	func_117();
}

void func_117()
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

void func_118(int iParam0)
{
	Global_111847 = iParam0;
}

int func_119(struct<3> Param0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	bool bVar0;
	struct<3> Var1;
	int iVar2;
	struct<3> Var3;
	bool bVar4;
	
	if (!Global_150438)
	{
		return 0;
	}
	if (iParam1 == -1)
	{
		iParam1 = func_29();
	}
	if (iParam1 == -1)
	{
		return 0;
	}
	if (iParam1 == 31 || iParam1 == 32)
	{
		if (!func_151())
		{
			return 0;
		}
	}
	Local_46 = { Param0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_ID()) && !STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(unk_0x9B0761B4C3EB8BC7()))
		{
			Var1 = { NETWORK::NETWORK_ARE_HANDLES_THE_SAME(unk_0x9B0761B4C3EB8BC7(), 1) };
			if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(unk_0x9B0761B4C3EB8BC7())) > 1369f && !func_112())
			{
				return 0;
			}
		}
		if (!Global_111858.f_9081)
		{
			return 0;
		}
		if (func_4(0))
		{
			return 0;
		}
		if (func_108())
		{
			return 0;
		}
		if (func_150())
		{
			return 0;
		}
		if (Global_111847 != -1)
		{
			return 0;
		}
		if (func_22(func_88()))
		{
			if (func_102(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_ID()) && !bParam4)
		{
			if ((Var1.f_2 - Local_46.f_2) > 50f)
			{
				return 0;
			}
		}
		if (!func_149(iParam1))
		{
			return 0;
		}
		if (func_22(func_88()))
		{
			if (func_148(func_88()) == 4 || func_148(func_88()) == 5)
			{
				return 0;
			}
		}
		if (func_22(func_88()))
		{
			if (!func_147(iParam1, iParam2, 145))
			{
				return 0;
			}
		}
		if (!func_146(Global_111858.f_24991.f_43[iParam1]))
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
		if (func_145())
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
		if (!func_92(4))
		{
			return 0;
		}
		if (!func_71(5))
		{
			return 0;
		}
		if (func_144(iParam1, iParam2) && !bParam3)
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
		if ((iParam1 == 9 && (iParam2 == 2 || iParam2 == 5)) && !func_144(0, 0))
		{
			return 0;
		}
		if (Global_31114)
		{
			return 0;
		}
		if (func_149(30) && !func_144(30, 0))
		{
			if (iParam1 != 30)
			{
				if (SYSTEM::VDIST2(Var1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_22(func_88()))
		{
			iVar2 = 0;
			while (iVar2 < 3)
			{
				Var3 = { Global_111858.f_2359.f_539.f_2300[iVar2 /*3*/] };
				bVar4 = Global_111858.f_2359.f_539.f_2296[iVar2];
				if (func_143(bVar4))
				{
					if (func_121(iVar2))
					{
						if (!func_120(Var3, 0f, 0f, 0f, 0))
						{
							if (SYSTEM::VDIST2(NETWORK::NETWORK_ARE_HANDLES_THE_SAME(unk_0x9B0761B4C3EB8BC7(), 0), Var3) < (210f * 210f))
							{
								if (func_88() != iVar2)
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

bool func_120(struct<3> Param0, struct<3> Param1, bool bParam2)
{
	if (bParam2)
	{
		return (Param0.x == Param1.x && Param0.f_1 == Param1.f_1);
	}
	return ((Param0.x == Param1.x && Param0.f_1 == Param1.f_1) && Param0.f_2 == Param1.f_2);
}

bool func_121(int iParam0)
{
	bool bVar0;
	
	bVar0 = Global_111858.f_2359.f_539.f_2296[iParam0];
	return func_122(bVar0);
}

int func_122(bool bParam0)
{
	return func_123(bParam0, 1);
}

int func_123(bool bParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_143(bParam0))
	{
		return 0;
	}
	func_124(bParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_124(bool bParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	func_125(func_136(), bParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_125(bool bParam0, bool bParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_135(bParam0, bParam1))
	{
		iVar0 = func_134(bParam1);
		iVar1 = func_132(bParam0);
		iVar2 = (func_132(bParam0) - func_132(bParam1));
		iVar3 = (func_134(bParam0) - func_134(bParam1));
		iVar4 = (func_131(bParam0) - func_131(bParam1));
		iVar5 = (func_130(bParam0) - func_130(bParam1));
		iVar6 = (func_129(bParam0) - func_129(bParam1));
		iVar7 = (func_128(bParam0) - func_128(bParam1));
	}
	else
	{
		iVar0 = func_134(bParam0);
		iVar1 = func_132(bParam1);
		iVar2 = (func_132(bParam1) - func_132(bParam0));
		iVar3 = (func_134(bParam1) - func_134(bParam0));
		iVar4 = (func_131(bParam1) - func_131(bParam0));
		iVar5 = (func_130(bParam1) - func_130(bParam0));
		iVar6 = (func_129(bParam1) - func_129(bParam0));
		iVar7 = (func_128(bParam1) - func_128(bParam0));
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
		iVar4 = (iVar4 + func_127(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = SYSTEM::ROUND(func_126(SYSTEM::TO_FLOAT(iVar0 + 1), 0f, 12f));
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

float func_126(float fParam0, float fParam1, float fParam2)
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

int func_127(int iParam0, int iParam1)
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

int func_128(bool bParam0)
{
	return SYSTEM::SHIFT_RIGHT(bParam0, 20) & 63;
}

int func_129(bool bParam0)
{
	return SYSTEM::SHIFT_RIGHT(bParam0, 14) & 63;
}

int func_130(bool bParam0)
{
	return SYSTEM::SHIFT_RIGHT(bParam0, 9) & 31;
}

int func_131(bool bParam0)
{
	return SYSTEM::SHIFT_RIGHT(bParam0, 4) & 31;
}

int func_132(bool bParam0)
{
	return (SYSTEM::SHIFT_RIGHT(bParam0, 26) & 31 * func_133(unk_0xCE990E643CD9D0E5(bParam0, 31), -1, 1)) + 2011;
}

int func_133(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

bool func_134(bool bParam0)
{
	return (bParam0 && 15);
}

int func_135(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_143(bParam1) || !func_143(bParam0))
	{
		return 1;
	}
	iVar0 = func_132(bParam0);
	iVar1 = func_132(bParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_134(bParam0);
	iVar1 = func_134(bParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_131(bParam0);
	iVar1 = func_131(bParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_130(bParam0);
	iVar1 = func_130(bParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_129(bParam0);
	iVar1 = func_129(bParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_128(bParam0);
	iVar1 = func_128(bParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

bool func_136()
{
	var uVar0;
	
	func_142(&uVar0, CLOCK::GET_CLOCK_MINUTES());
	func_141(&uVar0, CLOCK::GET_CLOCK_HOURS());
	func_140(&uVar0, CLOCK::GET_CLOCK_DAY_OF_MONTH());
	func_139(&uVar0, CLOCK::GET_CLOCK_MONTH());
	func_138(&uVar0, CLOCK::GET_CLOCK_YEAR());
	func_137(&uVar0, SYSTEM::SHIFT_LEFT());
	return uVar0;
}

void func_137(var uParam0, int iParam1)
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

void func_138(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_139(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_134(*uParam0);
	iVar1 = func_132(*uParam0);
	if (iParam1 < 1 || iParam1 > func_127(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

void func_140(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_141(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_142(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

int func_143(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (bParam0 == -15)
	{
		return 0;
	}
	iVar0 = func_128(bParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_129(bParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_130(bParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_132(bParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_134(bParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_131(bParam0);
	if (iVar5 < 1 || iVar5 > func_127(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_144(int iParam0, int iParam1)
{
	if (unk_0xCE990E643CD9D0E5(Global_111858.f_24991.f_8[iParam0], iParam1))
	{
		return 1;
	}
	return 0;
}

int func_145()
{
	func_56();
	if (Global_8356[Global_19681 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_146(bool bParam0)
{
	return func_135(func_136(), bParam0);
}

int func_147(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_88();
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

int func_148(int iParam0)
{
	if (!func_22(iParam0))
	{
		return 7;
	}
	return Global_111858.f_7684.f_919[iParam0];
}

bool func_149(int iParam0)
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_151())
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

int func_150()
{
	int iVar0;
	
	if (Global_31118)
	{
		if (SYSTEM::VDIST(unk_0x9B0761B4C3EB8BC7(), 0))
		{
			iVar0 = ENTITY::GET_ENTITY_MODEL(unk_0x9B0761B4C3EB8BC7(), 0);
			if (ENTITY::GET_ENTITY_COORDS(iVar0, false))
			{
				if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(MISC::IS_MINIGAME_IN_PROGRESS(iVar0, 0, 0)))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_151()
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

void func_152(struct<6> Param0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (iParam1 == 0)
	{
	}
	if (iLocal_228)
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREAS();
		unk_0xAF7D4BF357E8B79E(Local_224 - Vector(10f, 10f, 10f), Local_224 + Vector(10f, 10f, 10f), 1, 1);
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		func_41(uLocal_218[0]);
		func_41(uLocal_218[1]);
		func_41(uLocal_218[2]);
		iVar0 = 0;
		while (iVar0 <= (iLocal_49 - 1))
		{
			if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY((*iParam2)[iVar0]))
			{
			}
			iVar0++;
		}
		if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bParam3))
		{
			PED::_0x2208438012482A1A(bParam3, 0);
		}
		func_89(0);
		func_115(0, Param0);
	}
	func_153(-1);
	ENTITY::STOP_ENTITY_ANIM();
}

void func_153(int iParam0)
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_29();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_114())
	{
		func_157(iParam0);
		HUD::SET_MISSION_NAME(false, 0);
		Global_111849 = MISC::GET_GAME_TIMER();
		func_156(30000);
		StringCopy(&cVar0, func_155(Global_111847, 1), 64);
		if (func_28(Global_111847) > 0)
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
	func_154(&Global_31027);
	Global_111848 = 0;
	func_118(-1);
}

void func_154(var uParam0)
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

char* func_155(int iParam0, bool bParam1)
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

void func_156(int iParam0)
{
	Global_42182 = (MISC::GET_GAME_TIMER() + iParam0);
}

void func_157(int iParam0)
{
	func_158(iParam0, 0, func_163(iParam0));
}

void func_158(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_136();
	func_161(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_160(iParam0, &uVar0);
	Var1 = { func_159(&uVar0) };
}

struct<16> func_159(var uParam0)
{
	struct<16> Var0;
	int iVar1;
	
	StringCopy(&Var0, "", 64);
	iVar1 = func_130(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_129(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_128(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "  ", 64);
	iVar1 = func_131(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "/", 64);
	iVar1 = func_134(*uParam0);
	if (iVar1 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_132(*uParam0), 64);
	return Var0;
}

void func_160(int iParam0, var uParam1)
{
	Global_111858.f_24991.f_43[iParam0] = *uParam1;
}

void func_161(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_132(*uParam0);
	iVar1 = func_134(*uParam0);
	iVar2 = func_131(*uParam0);
	iVar3 = func_130(*uParam0);
	iVar4 = func_129(*uParam0);
	iVar5 = func_128(*uParam0);
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
	iVar6 = func_127(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_127(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_162(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_162(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_142(uParam0, iParam1);
	func_141(uParam0, iParam2);
	func_140(uParam0, iParam3);
	func_138(uParam0, iParam5);
	func_139(uParam0, iParam4);
	func_137(uParam0, iParam6);
}

int func_163(int iParam0)
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

int func_164()
{
	if (unk_0xCE990E643CD9D0E5(NETWORK::_NETWORK_GET_ROS_PRIVILEGE_25(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

