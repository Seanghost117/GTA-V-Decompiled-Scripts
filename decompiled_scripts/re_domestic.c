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
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	float fLocal_15 = 0f;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	int iLocal_18 = 0;
	int iLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	char* sLocal_22 = NULL;
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
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	struct<3> Local_44 = { 0, 0, 0 } ;
	bool bLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	bool bLocal_48 = 0;
	struct<3> Local_49 = { 0, 0, 0 } ;
	bool bLocal_50 = 0;
	int iLocal_51 = 0;
	bool bLocal_52 = 0;
	bool bLocal_53 = 0;
	bool bLocal_54 = 0;
	bool bLocal_55 = 0;
	struct<3> Local_56 = { 0, 0, 0 } ;
	struct<3> Local_57 = { 0, 0, 0 } ;
	float fLocal_58 = 0f;
	float fLocal_59 = 0f;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	struct<6> Local_64 = { 0, 0, 0, 0, 0, 0 } ;
	struct<6> Local_65 = { 0, 0, 0, 0, 0, 0 } ;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	float fLocal_82 = 0f;
	float fLocal_83 = 0f;
	var uLocal_84[2] = { 0, 0 };
	float fLocal_85 = 0f;
	struct<3> Local_86 = { 0, 0, 0 } ;
	struct<3> Local_87 = { 0, 0, 0 } ;
	struct<3> Local_88 = { 0, 0, 0 } ;
	struct<3> Local_89 = { 0, 0, 0 } ;
	struct<3> Local_90 = { 0, 0, 0 } ;
	int iLocal_91[11] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_92 = 0;
	var uLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	bool bLocal_97 = 0;
	int iLocal_98 = 0;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	int iLocal_101 = 0;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	bool bLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	int iLocal_108 = 0;
	int iLocal_109 = 0;
	int iLocal_110 = 0;
	int iLocal_111 = 0;
	char* sLocal_112 = NULL;
	char* sLocal_113 = NULL;
	var uLocal_114 = 16;
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
	var uLocal_218 = 0;
	var uLocal_219 = 0;
	var uLocal_220 = 0;
	var uLocal_221 = 0;
	var uLocal_222 = 0;
	var uLocal_223 = 0;
	var uLocal_224 = 0;
	var uLocal_225 = 0;
	var uLocal_226 = 0;
	var uLocal_227 = 0;
	var uLocal_228 = 0;
	var uLocal_229 = 0;
	var uLocal_230 = 0;
	var uLocal_231 = 0;
	var uLocal_232 = 0;
	var uLocal_233 = 0;
	var uLocal_234 = 0;
	var uLocal_235 = 0;
	var uLocal_236 = 0;
	var uLocal_237 = 0;
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
	var uLocal_253 = 0;
	var uLocal_254 = 0;
	var uLocal_255 = 0;
	var uLocal_256 = 0;
	var uLocal_257 = 0;
	var uLocal_258 = 0;
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	var uLocal_261 = 0;
	var uLocal_262 = 0;
	var uLocal_263 = 0;
	var uLocal_264 = 0;
	var uLocal_265 = 0;
	var uLocal_266 = 0;
	var uLocal_267 = 0;
	var uLocal_268 = 0;
	var uLocal_269 = 0;
	var uLocal_270 = 0;
	var uLocal_271 = 0;
	var uLocal_272 = 0;
	var uLocal_273 = 0;
	var uLocal_274 = 0;
	var uLocal_275 = 0;
	var uLocal_276 = 0;
	var uLocal_277 = 0;
	var uLocal_278 = 0;
	struct<2> Local_279 = { 0, 5 } ;
	var uLocal_280 = 0;
	var uLocal_281 = 0;
	var uLocal_282 = 0;
	var uLocal_283 = 0;
	var uLocal_284 = 0;
	var uLocal_285 = 0;
	var uLocal_286 = 0;
	var uLocal_287 = 0;
	var uLocal_288 = 0;
	var uLocal_289 = 0;
	var uLocal_290 = 0;
	var uLocal_291 = 0;
	var uLocal_292 = 0;
	var uLocal_293 = 0;
	var uLocal_294 = 0;
	var uLocal_295 = 5;
	var uLocal_296 = 0;
	var uLocal_297 = 0;
	var uLocal_298 = 0;
	var uLocal_299 = 0;
	var uLocal_300 = 0;
#endregion

void __EntryFunction__()
{
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
	iLocal_19 = 3;
	sLocal_22 = "NULL";
	fLocal_23 = 0f;
	fLocal_27 = -0.0375f;
	fLocal_28 = 0.17f;
	fLocal_32 = 80f;
	fLocal_33 = 140f;
	fLocal_34 = 180f;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	bLocal_45 = -1f;
	StringCopy(&Local_64, "", 24);
	Local_90 = { -1034.6f, 4918.6f, 205.9f };
	iLocal_94 = -1;
	Local_49 = { ScriptParam_279.f_1[0 /*3*/] };
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(11))
	{
		if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_54))
		{
			if (PED::IS_PED_IN_GROUP(bLocal_54))
			{
				PED::REMOVE_PED_FROM_GROUP(bLocal_54);
			}
		}
		func_228();
	}
	if (func_227(256, 1))
	{
		ENTITY::STOP_ENTITY_ANIM();
	}
	if (func_185(Local_49, -1, 0, 0, 0))
	{
		func_182(-1);
	}
	else
	{
		ENTITY::STOP_ENTITY_ANIM();
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		if ((BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE() || iLocal_47 == 4) || iLocal_60 > 18)
		{
			if (!func_181())
			{
				if (func_180())
				{
					func_228();
				}
			}
			RECORDING::_0x208784099002BC30("RE_DO", 0);
			if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_ID()))
			{
				switch (iLocal_46)
				{
					case 0:
						if (!bLocal_48)
						{
							if (func_168())
							{
								func_228();
							}
							if (!bLocal_55)
							{
								func_167();
							}
							if (bLocal_55)
							{
								func_166();
							}
						}
						if (bLocal_48)
						{
							iLocal_46 = 1;
						}
						break;
					
					case 1:
						func_158();
						if (iLocal_61 > 3)
						{
							if (!iLocal_74 && !func_157())
							{
								func_156(&uLocal_114, "REDO2AU", "REDO2_THK", 4, 0, 0, 0);
								iLocal_74 = 1;
							}
						}
						switch (iLocal_47)
						{
							case 0:
								func_152();
								iLocal_47 = 1;
								break;
							
							case 1:
								if (!iLocal_81)
								{
									if ((unk_0xC2169C00B643278B(unk_0x9B0761B4C3EB8BC7(), -467.0595f, 540.1724f, 125.3034f, 91.875f, 90.875f, 30f, 0, 1, 0) && CAM::IS_SPHERE_VISIBLE(Local_86, 1f)) || unk_0xC2169C00B643278B(unk_0x9B0761B4C3EB8BC7(), Local_86, 20f, 20f, 20f, 0, 1, 0))
									{
										func_151();
										func_142(1);
										iLocal_81 = 1;
									}
								}
								else
								{
									if (unk_0xC2169C00B643278B(unk_0x9B0761B4C3EB8BC7(), Local_86, 50f, 50f, 50f, 0, 1, 0))
									{
										func_140();
									}
									if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_54))
									{
										if (!unk_0xC2169C00B643278B(bLocal_54, Local_57, 30f, 30f, 30f, 0, 1, 0))
										{
											iLocal_47 = 11;
										}
									}
								}
								break;
							
							case 3:
								func_138();
								if (iLocal_60 > 18)
								{
									func_137();
								}
								else if (!func_157())
								{
									func_137();
								}
								break;
							
							case 7:
								func_138();
								func_133();
								break;
							
							case 4:
								func_138();
								func_81();
								if (func_80(Local_88))
								{
									func_57(0);
									func_55();
									SYSTEM::WAIT(0);
									func_156(&uLocal_114, "REDO2AU", "REDO2_CULT", 4, 0, 0, 0);
								}
								if (func_53())
								{
									func_57(0);
									func_55();
									SYSTEM::WAIT(0);
									func_156(&uLocal_114, "REDO2AU", "REDO2_NEAR", 4, 0, 0, 0);
								}
								if (!iLocal_71)
								{
									if (func_52())
									{
										if (unk_0xC2169C00B643278B(unk_0x9B0761B4C3EB8BC7(), Local_88, 23f, 60f, 20f, 0, 1, 0))
										{
											func_57(0);
											func_55();
											SYSTEM::WAIT(0);
											if (!func_157())
											{
												func_156(&uLocal_114, "REDO2AU", "REDO2_DRP", 4, 0, 0, 0);
												iLocal_71 = 1;
											}
										}
									}
								}
								break;
							
							case 11:
								func_51();
								break;
						}
						if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_53))
						{
							if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(bLocal_53, "random@domestic", "f_attack_end", 3))
							{
								func_49(bLocal_53, "WHIMPER", "WAVELOAD_PAIN_FEMALE", 24);
							}
						}
						if ((func_48() && !func_47()) && iLocal_46 != 2)
						{
							if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_54))
							{
								if (unk_0xC2169C00B643278B(bLocal_54, Local_90, 5f, 5f, 5f, 0, 1, 0))
								{
									if (!MISC::IS_BIT_SET(iLocal_91[8]))
									{
										iLocal_91[8] = OBJECT::CREATE_OBJECT(joaat("prop_golf_iron_01"), -473.4f, 536.8035f, 123.2482f, true, true, false);
										OBJECT::CREATE_OBJECT_NO_OFFSET(iLocal_91[8], bLocal_54, ENTITY::ATTACH_ENTITY_TO_ENTITY(bLocal_54, 57005), 0f, -0.15f, -0.05f, 70f, 110f, 200f, 1, 0, 0, 0, 2, 1);
									}
									func_46(0);
									SYSTEM::WAIT(0);
									func_55();
									iLocal_46 = 2;
								}
							}
						}
						if (func_45())
						{
							func_51();
						}
						break;
					
					case 2:
						if (func_44())
						{
							if (MISC::IS_BIT_SET(bLocal_54))
							{
								PED::DELETE_PED(&bLocal_54);
							}
							func_14();
						}
						break;
					
					case 3:
						func_1();
						break;
					}
			}
		}
		else
		{
			func_228();
		}
	}
}

void func_1()
{
	int iVar0;
	
	if (iLocal_109 && !iLocal_108)
	{
		func_3(0);
		if (Global_31209)
		{
			AUDIO::TRIGGER_MUSIC_EVENT("AC_STOP");
		}
		func_2();
		if (MISC::IS_BIT_SET(iLocal_91[8]))
		{
			iLocal_92 = OBJECT::CREATE_PICKUP_ROTATE(joaat("pickup_weapon_golfclub"), NETWORK::NETWORK_ARE_HANDLES_THE_SAME(iLocal_91[8], 1), NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(iLocal_91[8], 2) + Vector(2.8157f, -159.5768f, -14.1956f), 0, -1, 2, true, 0);
			PED::GET_PED_BONE_INDEX(&(iLocal_91[8]));
		}
		unk_0xAF7D4BF357E8B79E(Local_57 - Vector(10f, 10f, 10f), Local_57 + Vector(10f, 10f, 10f), 1, 1);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, iLocal_111, 1862763509);
		if (bLocal_55)
		{
			unk_0x74528AC0906CBABE(iLocal_78);
			unk_0x74528AC0906CBABE(iLocal_79);
		}
		if (MISC::IS_BIT_SET(bLocal_53))
		{
			if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_53))
			{
				PED::_0x2208438012482A1A(bLocal_53, 0);
			}
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&bLocal_53);
		}
		if (SYSTEM::VMAG(fLocal_85))
		{
			unk_0x93370FA10F15BE44(&fLocal_85);
		}
		if (SYSTEM::VMAG(uLocal_84[0]))
		{
			unk_0x93370FA10F15BE44(&(uLocal_84[0]));
		}
		if (MISC::IS_BIT_SET(bLocal_54))
		{
			if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_54))
			{
				if (!SYSTEM::VDIST(bLocal_54, 0))
				{
					PED::RESET_PED_LAST_VEHICLE(bLocal_54);
				}
				PED::REMOVE_PED_FROM_GROUP(bLocal_54);
				PED::_0x2208438012482A1A(bLocal_54, 0);
				PED::SET_PED_CAN_BE_TARGETTED(bLocal_54, true);
			}
		}
		iVar0 = 0;
		while (iVar0 < iLocal_91)
		{
			if (MISC::IS_BIT_SET(iLocal_91[iVar0]))
			{
				ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(iLocal_91[iVar0], 1, 1);
			}
			iVar0++;
		}
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(-499.9164f, 575.6557f, 124.5584f, -346.8641f, 483.3948f, 111.7201f, 74.0625f, 1);
		PED::REMOVE_SCENARIO_BLOCKING_AREAS();
		iLocal_108 = 1;
	}
	if ((!unk_0xC2169C00B643278B(unk_0x9B0761B4C3EB8BC7(), Local_57, 80f, 80f, 80f, 0, 1, 0) || OBJECT::HAS_PICKUP_BEEN_COLLECTED(iLocal_92)) || !(MISC::IS_BIT_SET(iLocal_91[8]) && !OBJECT::DOES_PICKUP_EXIST(iLocal_92)))
	{
		func_228();
	}
}

void func_2()
{
	Global_31205 = 0;
	Global_31206 = 0;
	Global_31208 = 0;
	Global_31209 = 0;
	Global_31210 = 0;
}

void func_3(bool bParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 54)
	{
		func_4(iVar0, bParam0);
		iVar0++;
	}
}

void func_4(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_13(iParam0, 2, 1))
		{
			func_12(iParam0, 2, 1);
		}
	}
	else if (func_13(iParam0, 2, 1))
	{
		func_5(iParam0, 2, 1);
	}
}

void func_5(int iParam0, bool bParam1, bool bParam2)
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
		if (func_11() == 0)
		{
			uVar0 = func_9(func_10(iParam0), -1, 0);
			VEHICLE::IS_VEHICLE_DRIVEABLE(&uVar0, bParam1);
			func_6(func_10(iParam0), uVar0, -1, 1, 0);
		}
	}
	else
	{
		VEHICLE::IS_VEHICLE_DRIVEABLE(&(Global_111858.f_668[iParam0]), bParam1);
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

int func_10(int iParam0)
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

int func_11()
{
	return Global_30968;
}

void func_12(int iParam0, int iParam1, bool bParam2)
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
		if (func_11() == 0)
		{
			uVar0 = func_9(func_10(iParam0), -1, 0);
			unk_0xBE20AB8238688965(&uVar0, iParam1);
			func_6(func_10(iParam0), uVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0xBE20AB8238688965(&(Global_111858.f_668[iParam0]), iParam1);
	}
}

int func_13(int iParam0, bool bParam1, bool bParam2)
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
		if (func_11() == 0)
		{
			return unk_0xCE990E643CD9D0E5(func_9(func_10(iParam0), -1, 0), bParam1);
		}
	}
	else
	{
		return unk_0xCE990E643CD9D0E5(Global_111858.f_668[iParam0], bParam1);
	}
	return 0;
}

void func_14()
{
	while (func_157())
	{
		SYSTEM::WAIT(0);
	}
	while (!func_43())
	{
		SYSTEM::WAIT(0);
	}
	Global_111858.f_18570.f_383 = func_42() + 1;
	func_18(-1, 0);
	func_15();
	iLocal_46 = 3;
}

void func_15()
{
	func_16();
}

int func_16()
{
	if (func_17(0))
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

bool func_17(bool bParam0)
{
	if (!bParam0 && INTERIOR::GET_INTERIOR_AT_COORDS(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xCE990E643CD9D0E5(Global_77081, false);
}

void func_18(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_40();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= func_39(iParam0))
	{
		func_38(iParam0, iParam1);
		if (!func_37(51))
		{
			func_27("RE_REWARD", 1, 0, 4000, 10000, func_30(), 0, 138, 0);
			func_26(51);
		}
		if (func_25(iParam0))
		{
			Global_111858.f_24991.f_2 = 3;
		}
		if (func_24(iParam0, iParam1) != 322)
		{
			func_20(func_24(iParam0, iParam1), Local_44.x, Local_44.f_1);
		}
		Global_111846 = iParam1;
		if (Global_111844 == 0)
		{
			if (((Global_111847 == 1 || Global_111847 == 5) || Global_111847 == 11) || Global_111847 == 25)
			{
				func_19(2);
			}
			else if ((Global_111847 == 26 || Global_111847 == 8) || Global_111847 == 17)
			{
				func_19(7);
			}
			else
			{
				func_19(1);
			}
		}
	}
}

void func_19(int iParam0)
{
	Global_111844 = iParam0;
}

void func_20(int iParam0, var uParam1, var uParam2)
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
		func_23((891 + iParam0), 1, -1, 1);
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
		func_21();
	}
}

void func_21()
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
		func_22(13, SYSTEM::FLOOR(Global_111858.f_10190.f_3853));
	}
	if (!DATAFILE::DATAFILE_IS_SAVE_PENDING())
	{
		if (!Global_76833)
		{
			if (func_11() == 2 == 0 && !MISC::SET_BIT())
			{
				if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE())
				{
					Global_111592 = 0;
				}
				if (!Global_61717)
				{
					func_16();
				}
			}
		}
	}
}

int func_22(int iParam0, bool bParam1)
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

var func_23(int iParam0, char* sParam1, int iParam2, int iParam3)
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

int func_24(int iParam0, int iParam1)
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

int func_25(int iParam0)
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

void func_26(int iParam0)
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

void func_27(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_28(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_28(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
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
		func_29();
	}
}

void func_29()
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
		if (unk_0xCE990E643CD9D0E5(Global_111858.f_20406[iVar0 /*16*/].f_11, false))
		{
			if (Global_111858.f_20406[iVar0 /*16*/].f_12 > Global_111858.f_20406.f_146[0])
			{
				Global_111858.f_20406.f_146[0] = Global_111858.f_20406[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0xCE990E643CD9D0E5(Global_111858.f_20406[iVar0 /*16*/].f_11, true))
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

int func_30()
{
	func_31();
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

void func_31()
{
	int iVar0;
	
	if (MISC::IS_BIT_SET(unk_0x9B0761B4C3EB8BC7()))
	{
		if (func_35(Global_111858.f_2359.f_539.f_4321) != MISC::GET_MODEL_DIMENSIONS(unk_0x9B0761B4C3EB8BC7()))
		{
			iVar0 = func_34(unk_0x9B0761B4C3EB8BC7());
			if (func_33(iVar0) && (!func_32(14) || Global_110809))
			{
				if (Global_111858.f_2359.f_539.f_4321 != iVar0 && func_33(Global_111858.f_2359.f_539.f_4321))
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

bool func_32(int iParam0)
{
	return Global_41631 == iParam0;
}

bool func_33(int iParam0)
{
	return iParam0 < 3;
}

int func_34(bool bParam0)
{
	int iVar0;
	void fVar1;
	
	if (MISC::IS_BIT_SET(iParam0))
	{
		fVar1 = MISC::GET_MODEL_DIMENSIONS(bParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_35(iVar0) == fVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_35(int iParam0)
{
	if (func_33(iParam0))
	{
		return func_36(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_36(int iParam0)
{
	return Global_1848[iParam0 /*29*/];
}

int func_37(int iParam0)
{
	bool bVar0;
	int iVar1;
	
	bVar0 = iParam0;
	iVar1 = 0;
	while (bVar0 > 31)
	{
		bVar0 = (bVar0 - 32);
		iVar1++;
	}
	if (iVar1 < 3)
	{
		return unk_0xCE990E643CD9D0E5(Global_111858.f_20406.f_150[iVar1], bVar0);
	}
	return 0;
}

void func_38(int iParam0, int iParam1)
{
	unk_0xBE20AB8238688965(&(Global_111858.f_24991.f_8[iParam0]), iParam1);
}

int func_39(int iParam0)
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

int func_40()
{
	struct<16> Var0;
	var uVar1;
	
	StringCopy(&Var0, TASK::IS_PED_BEING_ARRESTED(), 64);
	uVar1 = func_41(Var0);
	return uVar1;
}

int func_41(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
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

int func_42()
{
	return (Global_111858.f_10012.f_21 + Global_111858.f_18570.f_380);
}

int func_43()
{
	return 1;
}

int func_44()
{
	if (Global_31206)
	{
		func_19(4);
		return 1;
	}
	return 0;
}

int func_45()
{
	if (STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_53) && STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_54))
	{
		return 1;
	}
	return 0;
}

void func_46(int iParam0)
{
	Global_22016 = iParam0;
}

int func_47()
{
	if (Global_111858.f_24991.f_5 == 1000)
	{
		return 1;
	}
	return 0;
}

bool func_48()
{
	return Global_31205;
}

void func_49(bool bParam0, char* sParam1, char* sParam2, int iParam3)
{
	AUDIO::_PLAY_AMBIENT_SPEECH_WITH_VOICE(bParam0, sParam1, sParam2, func_50(iParam3), false);
}

int func_50(int iParam0)
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

void func_51()
{
	iLocal_46 = 3;
}

int func_52()
{
	if (SYSTEM::VDIST(unk_0x9B0761B4C3EB8BC7(), 0))
	{
		iLocal_110 = ENTITY::GET_ENTITY_MODEL(unk_0x9B0761B4C3EB8BC7(), 0);
		if (ENTITY::GET_ENTITY_COORDS(iLocal_110, false))
		{
			if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_54))
			{
				if (PED::IS_PED_SITTING_IN_VEHICLE(bLocal_54, iLocal_110))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_53()
{
	if (func_54() == 2)
	{
		if (func_48())
		{
			if (HUD::SET_BLIP_NAME_FROM_TEXT_FILE(-1014.154f, 4881.411f, 245.0001f, NETWORK::NETWORK_ARE_HANDLES_THE_SAME(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), 0), 1) < 400f)
			{
				if (!Global_31210)
				{
					AUDIO::TRIGGER_MUSIC_EVENT("AC_EN_ROUTE_CULT");
					Global_31210 = 1;
					if (!Global_31209)
					{
						Global_31209 = 1;
						return 1;
					}
				}
			}
			else if (Global_31210)
			{
				AUDIO::TRIGGER_MUSIC_EVENT("AC_LEFT_AREA");
				Global_31210 = 0;
			}
		}
	}
	return 0;
}

int func_54()
{
	func_31();
	return Global_111858.f_2359.f_539.f_4321;
}

void func_55()
{
	Global_19871 = 0;
	func_56();
}

void func_56()
{
	SYSTEM::ROUND();
	Global_22016 = 0;
	if (ENTITY::IS_ENTITY_DEAD())
	{
		unk_0xBE4122AC23440E7D(0);
		Global_21005 = 6;
	}
}

void func_57(bool bParam0)
{
	if (bParam0)
	{
		if (iLocal_63)
		{
			if (func_64(&uLocal_114, "REDO2AU", &Local_65, &Local_64, 8, 0, 0))
			{
				iLocal_63 = 0;
			}
		}
	}
	else if ((!iLocal_63 && ENTITY::IS_ENTITY_DEAD()) && !func_62())
	{
		Local_65 = { func_61() };
		Local_64 = { func_60() };
		func_58();
		iLocal_63 = 1;
	}
}

void func_58()
{
	Global_19871 = 0;
	func_59();
}

void func_59()
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

struct<6> func_60()
{
	struct<6> Var0;
	int iVar1;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_21005 == 4)
	{
		iVar1 = AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE();
		iVar1 = (iVar1 + Global_22015);
		if (iVar1 > -1)
		{
			return Global_19873[iVar1 /*6*/];
		}
		else
		{
			return Var0;
		}
	}
	return Var0;
}

struct<6> func_61()
{
	struct<6> Var0;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_21005 == 4)
	{
		return Global_20624;
	}
	return Var0;
}

int func_62()
{
	if (((((((func_63("REDO2_DRP") || func_63("REDO2_UV")) || func_63("REDO2_UV2")) || func_63("REDO2_CULT")) || func_63("REDO2_NEAR")) || func_63("REDO2_GETOUT")) || func_63("REDO2_JACK")) || func_63("REDO2_SHOOT"))
	{
		return 1;
	}
	return 0;
}

int func_63(char* sParam0)
{
	var uVar0;
	
	if (func_157())
	{
		MemCopy(&uVar0, {func_61()}, 4);
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS(sParam0, &uVar0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_64(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_79(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_21012 = 0;
	Global_21019 = 0;
	Global_21014 = 0;
	Global_21996 = 0;
	Global_21998 = 0;
	Global_22002 = 1;
	StringCopy(&Global_22009, sParam3, 24);
	Global_2621441 = 0;
	return func_65(sParam2, iParam4, 0);
}

int func_65(char* sParam0, int iParam1, bool bParam2)
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
					func_78();
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
		if (func_77(8, -1))
		{
			return 0;
		}
		Global_21081 = { Global_21075 };
		func_76();
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
				func_75();
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
				if (func_74())
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
			if (func_73())
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
			func_72();
			Global_21015 = bParam2;
		}
		Global_21007 = iParam1;
		StringCopy(&Global_20624, sParam0, 24);
		Global_19871 = 0;
		func_71();
		func_66();
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
		func_78();
	}
	return 0;
}

void func_66()
{
	if (!func_67())
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

int func_67()
{
	if (!Global_262145.f_28160)
	{
		return 0;
	}
	if (!Global_76833)
	{
		return 0;
	}
	if (PLAYER::PLAYER_ID() == func_70())
	{
		return 0;
	}
	if (func_68(PLAYER::PLAYER_ID()))
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

bool func_68(int iParam0)
{
	return func_69(iParam0, 20);
}

bool func_69(int iParam0, bool bParam1)
{
	return unk_0xCE990E643CD9D0E5(Global_1630317[iParam0 /*595*/].f_11.f_4, iParam1);
}

int func_70()
{
	return -1;
}

void func_71()
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

void func_72()
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

int func_73()
{
	if (Global_19681.f_1 == 1 || Global_19681.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_74()
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

void func_75()
{
	if (func_32(14))
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
		Global_19681 = func_54();
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

void func_76()
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

bool func_77(bool bParam0, int iParam1)
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

void func_78()
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

void func_79(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_20459 = { *uParam0 };
	Global_6867 = iParam1;
	StringCopy(&Global_21075, sParam2, 24);
	Global_21994 = iParam5;
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

int func_80(struct<3> Param0)
{
	if (func_54() == 2)
	{
		if (func_48() && !Global_31208)
		{
			if (bLocal_45 == -1f)
			{
				bLocal_45 = SYSTEM::VDIST(NETWORK::NETWORK_ARE_HANDLES_THE_SAME(unk_0x9B0761B4C3EB8BC7(), 1), Param0);
			}
			if (SYSTEM::VDIST(NETWORK::NETWORK_ARE_HANDLES_THE_SAME(unk_0x9B0761B4C3EB8BC7(), 1), Param0) > (bLocal_45 + 200f) || HUD::SET_BLIP_NAME_FROM_TEXT_FILE(-1014.154f, 4881.411f, 245.0001f, NETWORK::NETWORK_ARE_HANDLES_THE_SAME(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), 0), 1) < 400f)
			{
				Global_31208 = 1;
				return 1;
			}
		}
	}
	return 0;
}

void func_81()
{
	switch (iLocal_62)
	{
		case 0:
			if (iLocal_60 > 18)
			{
				iLocal_62++;
			}
			else if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_54))
			{
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(bLocal_54, 1f);
				if (ENTITY::IS_ENTITY_AT_ENTITY(bLocal_54, unk_0x9B0761B4C3EB8BC7(), 8f, 8f, 8f, false, true, 0))
				{
					if (iLocal_60 < 19)
					{
						if (func_156(&uLocal_114, "REDO2AU", "REDO2_LV", 4, 0, 0, 0))
						{
							iLocal_62++;
						}
					}
					else
					{
						iLocal_62++;
					}
				}
			}
			break;
		
		case 1:
			func_129();
			if (MISC::IS_BIT_SET(bLocal_54))
			{
				if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_54))
				{
					if (ENTITY::GET_ENTITY_COORDS(STATS::GET_PACKED_BOOL_STAT_KEY(unk_0x9B0761B4C3EB8BC7()), false))
					{
						if (PED::IS_PED_GETTING_INTO_A_VEHICLE(bLocal_54))
						{
							PED::GET_PED_BONE_INDEX(&(iLocal_91[8]));
						}
					}
					if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(bLocal_54))
					{
						func_127();
						func_121();
						if (func_156(&uLocal_114, "REDO2AU", "REDO2_TO", 4, 0, 0, 0))
						{
							SYSTEM::SETTIMERB(0);
							iLocal_62++;
						}
					}
					else
					{
						PED::SET_PED_MAX_MOVE_BLEND_RATIO(bLocal_54, 1f);
					}
				}
			}
			break;
		
		case 2:
			func_121();
			func_120();
			func_129();
			func_119();
			if (SYSTEM::TIMERB() > 1500)
			{
				func_118();
			}
			if (unk_0xC2169C00B643278B(unk_0x9B0761B4C3EB8BC7(), Local_88, 10f, 10f, 10f, 0, 1, 0))
			{
				HUD::CLEAR_ALL_HELP_MESSAGES();
			}
			if (MISC::IS_BIT_SET(bLocal_54))
			{
				if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_54))
				{
					if (unk_0xC2169C00B643278B(bLocal_54, Local_88, Global_19, 1, 1, 0) && func_117(1, 0, 1))
					{
						if (SYSTEM::VMAG(fLocal_82))
						{
							unk_0x93370FA10F15BE44(&fLocal_82);
						}
						if (SYSTEM::VMAG(fLocal_83))
						{
							unk_0x93370FA10F15BE44(&fLocal_83);
						}
						if (SYSTEM::VDIST(bLocal_54, 0))
						{
							VEHICLE::BRING_VEHICLE_TO_HALT(ENTITY::GET_ENTITY_MODEL(bLocal_54, 0), 10.5f, 3, false);
							iLocal_62++;
						}
						else
						{
							iLocal_62 = 4;
						}
					}
				}
			}
			break;
		
		case 3:
			func_116();
			if (bLocal_104)
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				func_14();
			}
			break;
		
		case 4:
			func_82();
			if (bLocal_104)
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				func_14();
			}
			break;
	}
}

void func_82()
{
	switch (iLocal_102)
	{
		case 0:
			HUD::CLEAR_ALL_HELP_MESSAGES();
			func_58();
			if (func_156(&uLocal_114, "REDO2AU", "REDO2_BY", 4, 0, 0, 0))
			{
				iLocal_102++;
			}
			break;
		
		case 1:
			iLocal_102++;
			break;
		
		case 2:
			HUD::CLEAR_ALL_HELP_MESSAGES();
			if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_54))
			{
				PED::REMOVE_PED_FROM_GROUP(bLocal_54);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_77);
				TASK::TASK_LOOK_AT_ENTITY(false, unk_0x9B0761B4C3EB8BC7(), 7000, 2048, 2);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(false, unk_0x9B0761B4C3EB8BC7(), 4000);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(false, Local_89, 1f, -1, 0.25f, false, 311.3569f);
				TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_SMOKING", 0, true);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_77);
				AUDIO::STOP_SCRIPTED_CONVERSATION(bLocal_54, iLocal_77);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_77);
				PED::SET_PED_KEEP_TASK(bLocal_54, true);
				iLocal_103 = MISC::GET_GAME_TIMER() + 4000;
				iLocal_102++;
			}
			break;
		
		case 3:
			if (iLocal_103 < MISC::GET_GAME_TIMER())
			{
				HUD::CLEAR_ALL_HELP_MESSAGES();
				iLocal_102++;
			}
			break;
		
		case 4:
			if (!func_157())
			{
				func_115("DOM_GOLF", -1);
				func_114(&(Global_111858.f_18975), 16);
				if (func_54() == 0)
				{
					func_113(&(Global_111858.f_18975.f_24), 1);
				}
				else if (func_54() == 1)
				{
					func_113(&(Global_111858.f_18975.f_24), 4);
				}
				else if (func_54() == 2)
				{
					func_113(&(Global_111858.f_18975.f_24), 2);
				}
				func_83(func_54(), 1, 80, 0, 1);
				SYSTEM::SETTIMERA(0);
				iLocal_102++;
			}
			break;
		
		case 5:
			if (SYSTEM::TIMERA() > 5000)
			{
				bLocal_104 = true;
			}
			break;
	}
}

void func_83(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (func_112(iParam0) == 3)
	{
		return;
	}
	if (func_112(iParam0) == 4)
	{
		return;
	}
	func_84(func_112(iParam0), 1, iParam1, bParam2, 0);
	if (bParam3)
	{
		iVar0 = 0;
		if (bParam4)
		{
			switch (iParam0)
			{
				case 0:
					iVar1 = joaat("SP0_MONEY_MADE_FROM_RANDOM_PEDS");
					break;
				
				case 1:
					iVar1 = joaat("SP1_MONEY_MADE_FROM_RANDOM_PEDS");
					break;
				
				case 2:
					iVar1 = joaat("SP2_MONEY_MADE_FROM_RANDOM_PEDS");
					break;
				
				default:
					return;
			}
		}
		else
		{
			switch (iParam0)
			{
				case 0:
					iVar1 = joaat("SP0_MONEY_MADE_FROM_MISSIONS");
					break;
				
				case 1:
					iVar1 = joaat("SP1_MONEY_MADE_FROM_MISSIONS");
					break;
				
				case 2:
					iVar1 = joaat("SP2_MONEY_MADE_FROM_MISSIONS");
					break;
				
				default:
					return;
				}
		}
		STATS::STAT_GET_INT(iVar1, &iVar0, -1);
		iVar0 = (iVar0 + bParam2);
		NETWORK::NETWORK_HAS_SOCIAL_CLUB_ACCOUNT(iVar1, iVar0, 1);
	}
}

int func_84(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	float fVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	
	func_111();
	if (bParam3 < 1)
	{
		return 0;
	}
	fVar0 = 1f;
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					func_110(99, 1);
					func_109(joaat("SP0_MONEY_TOTAL_SPENT"), bParam3);
					break;
				
				case 1:
					func_109(joaat("SP1_MONEY_TOTAL_SPENT"), bParam3);
					break;
				
				case 2:
					func_109(joaat("SP2_MONEY_TOTAL_SPENT"), bParam3);
					break;
			}
			func_95(0);
			switch (iParam2)
			{
				case 127:
				case 129:
				case 125:
				case 126:
				case 128:
					if (func_91(5))
					{
						fVar0 = 0.9f;
						bVar1 = 5;
					}
					break;
				
				case 63:
				case 64:
				case 65:
				case 66:
				case 67:
				case 68:
					switch (iParam0)
					{
						case 0:
							func_109(joaat("SP0_MONEY_SPENT_ON_TATTOOS"), bParam3);
							break;
						
						case 1:
							func_109(joaat("SP1_MONEY_SPENT_ON_TATTOOS"), bParam3);
							break;
						
						case 2:
							func_109(joaat("SP2_MONEY_SPENT_ON_TATTOOS"), bParam3);
							break;
					}
					if (func_91(1))
					{
						fVar0 = 0f;
						bVar1 = true;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_109(joaat("SP0_MONEY_SPENT_ON_TAXIS"), bParam3);
							break;
						
						case 1:
							func_109(joaat("SP1_MONEY_SPENT_ON_TAXIS"), bParam3);
							break;
						
						case 2:
							func_109(joaat("SP2_MONEY_SPENT_ON_TAXIS"), bParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_109(joaat("SP0_MONEY_SPENT_IN_STRIP_CLUBS"), bParam3);
							break;
						
						case 1:
							func_109(joaat("SP1_MONEY_SPENT_IN_STRIP_CLUBS"), bParam3);
							break;
						
						case 2:
							func_109(joaat("SP2_MONEY_SPENT_IN_STRIP_CLUBS"), bParam3);
							break;
					}
					break;
				
				case 99:
				case 100:
				case 101:
				case 102:
				case 104:
				case 105:
				case 106:
				case 107:
				case 108:
				case 109:
				case 110:
				case 111:
				case 112:
				case 113:
					switch (iParam0)
					{
						case 0:
							func_109(joaat("SP0_MONEY_SPENT_PROPERTY"), bParam3);
							break;
						
						case 1:
							func_109(joaat("SP1_MONEY_SPENT_PROPERTY"), bParam3);
							break;
						
						case 2:
							func_109(joaat("SP2_MONEY_SPENT_PROPERTY"), bParam3);
							break;
					}
					break;
				
				default:
					switch (SCRIPT::GET_HASH_OF_THIS_SCRIPT_NAME())
					{
						case joaat("clothes_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_109(joaat("SP0_MONEY_SPENT_IN_CLOTHES"), bParam3);
									break;
								
								case 1:
									func_109(joaat("SP1_MONEY_SPENT_IN_CLOTHES"), bParam3);
									break;
								
								case 2:
									func_109(joaat("SP2_MONEY_SPENT_IN_CLOTHES"), bParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_109(joaat("SP0_MONEY_SPENT_ON_HAIRDOS"), bParam3);
									break;
								
								case 1:
									func_109(joaat("SP1_MONEY_SPENT_ON_HAIRDOS"), bParam3);
									break;
								
								case 2:
									func_109(joaat("SP2_MONEY_SPENT_ON_HAIRDOS"), bParam3);
									break;
							}
							if (func_91(0))
							{
								fVar0 = 0f;
								bVar1 = false;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_109(joaat("SP0_MONEY_SPENT_IN_BUYING_GUNS"), bParam3);
									break;
								
								case 1:
									func_109(joaat("SP1_MONEY_SPENT_IN_BUYING_GUNS"), bParam3);
									break;
								
								case 2:
									func_109(joaat("SP2_MONEY_SPENT_IN_BUYING_GUNS"), bParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_109(joaat("SP0_MONEY_SPENT_CAR_MODS"), bParam3);
									break;
								
								case 1:
									func_109(joaat("SP1_MONEY_SPENT_CAR_MODS"), bParam3);
									break;
								
								case 2:
									func_109(joaat("SP2_MONEY_SPENT_CAR_MODS"), bParam3);
									break;
							}
							func_90(bParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_110(95, bParam3);
					break;
				
				case 1:
					func_110(97, bParam3);
					break;
				
				case 2:
					func_110(96, bParam3);
					break;
			}
			func_110(98, bParam3);
			break;
	}
	iVar2 = iParam0;
	bParam3 = SYSTEM::FLOOR((fVar0 * SYSTEM::TO_FLOAT(bParam3)));
	iVar3 = 0;
	bVar4 = bParam3;
	if (fVar0 == 0f)
	{
		func_87(bVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_87(bVar1);
	}
	iVar5 = (Global_58891[iVar2] + bParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_58891[iVar2] >= 0 && bParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_58891[iVar2] = 2147483647;
				}
				else
				{
					Global_58891[iVar2] = (Global_58891[iVar2] + bParam3);
				}
			}
			switch (iParam0)
			{
				case 0:
					func_109(joaat("SP0_TOTAL_CASH_EARNED"), bParam3);
					break;
				
				case 1:
					func_109(joaat("SP1_TOTAL_CASH_EARNED"), bParam3);
					break;
				
				case 2:
					func_109(joaat("SP2_TOTAL_CASH_EARNED"), bParam3);
					break;
			}
			break;
		
		case 0:
			if (!bParam4)
			{
				if ((Global_58891[iVar2] - bParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_58891[iVar2];
			Global_58891[iVar2] = (Global_58891[iVar2] - bParam3);
			if (bParam4)
			{
				bVar4 = iVar3;
			}
			break;
	}
	if (iParam2 == 1)
	{
		if (bVar4 > 20)
		{
		}
	}
	else
	{
		Global_111858.f_20560.f_233[iVar2 /*69*/].f_2[Global_111858.f_20560.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_111858.f_20560.f_233[iVar2 /*69*/].f_2[Global_111858.f_20560.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_111858.f_20560.f_233[iVar2 /*69*/].f_2[Global_111858.f_20560.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = bParam3;
		Global_111858.f_20560.f_233[iVar2 /*69*/]++;
		Global_111858.f_20560.f_233[iVar2 /*69*/].f_1++;
		if (Global_111858.f_20560.f_233[iVar2 /*69*/].f_1 > 10)
		{
			Global_111858.f_20560.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_86(iParam0);
	if (Global_41631 == 15)
	{
		func_85(0);
	}
	return 1;
}

void func_85(bool bParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = 0;
		while (iVar1 < 11)
		{
			Global_111858.f_20560.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_111858.f_20560.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_111858.f_20560.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_111858.f_20560.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_111858.f_20560.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_111858.f_20560.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_58899[iVar0 /*3*/][0] = Global_111858.f_20560[iVar0];
		Global_58899.f_31[iVar0 /*3*/][0] = Global_111858.f_20560.f_11[iVar0];
		Global_58899.f_62[iVar0 /*3*/][0] = Global_111858.f_20560.f_22[iVar0];
		Global_58899.f_93[iVar0 /*3*/][0] = Global_111858.f_20560.f_33[iVar0];
		Global_58899.f_124[iVar0 /*3*/][0] = Global_111858.f_20560.f_44[iVar0];
		Global_58899.f_155[iVar0 /*3*/][0] = Global_111858.f_20560.f_55[iVar0];
		Global_58899.f_186[iVar0 /*3*/][0] = Global_111858.f_20560.f_66[iVar0];
		Global_58899.f_217[iVar0 /*3*/][0] = Global_111858.f_20560.f_77[iVar0];
		Global_58899.f_248[iVar0 /*3*/][0] = Global_111858.f_20560.f_88[iVar0];
		if (!bParam0)
		{
			Global_58899[iVar0 /*3*/][1] = Global_111858.f_20560[iVar0];
			Global_58899.f_31[iVar0 /*3*/][1] = Global_111858.f_20560.f_11[iVar0];
			Global_58899.f_62[iVar0 /*3*/][1] = Global_111858.f_20560.f_22[iVar0];
			Global_58899.f_93[iVar0 /*3*/][1] = Global_111858.f_20560.f_33[iVar0];
			Global_58899.f_124[iVar0 /*3*/][1] = Global_111858.f_20560.f_44[iVar0];
			Global_58899.f_155[iVar0 /*3*/][1] = Global_111858.f_20560.f_55[iVar0];
			Global_58899.f_186[iVar0 /*3*/][1] = Global_111858.f_20560.f_66[iVar0];
			Global_58899.f_217[iVar0 /*3*/][1] = Global_111858.f_20560.f_77[iVar0];
			Global_58899.f_248[iVar0 /*3*/][1] = Global_111858.f_20560.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_86(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_58891[iParam0];
	switch (iParam0)
	{
		case 0:
			NETWORK::NETWORK_HAS_SOCIAL_CLUB_ACCOUNT(joaat("SP0_TOTAL_CASH"), iVar0, 1);
			break;
		
		case 1:
			NETWORK::NETWORK_HAS_SOCIAL_CLUB_ACCOUNT(joaat("SP1_TOTAL_CASH"), iVar0, 1);
			break;
		
		case 2:
			NETWORK::NETWORK_HAS_SOCIAL_CLUB_ACCOUNT(joaat("SP2_TOTAL_CASH"), iVar0, 1);
			break;
	}
}

void func_87(bool bParam0)
{
	bool bVar0;
	char cVar1[64];
	
	if (bParam0 == 8)
	{
		func_23(129, 0, -1, 1);
		return;
	}
	if (bParam0 == 9)
	{
		func_23(135, 0, -1, 1);
		return;
	}
	if (bParam0 == 10)
	{
		func_23(136, 0, -1, 1);
		return;
	}
	if (bParam0 == 11)
	{
		func_23(137, 0, -1, 1);
		return;
	}
	if (bParam0 == 12)
	{
		func_6(8270, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 13)
	{
		func_6(8271, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 14)
	{
		func_6(8272, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 15)
	{
		func_6(8273, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 16)
	{
		func_6(8274, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 17)
	{
		func_6(8275, 0, -1, 1, 0);
		return;
	}
	bVar0 = false;
	if (!MISC::SET_BIT())
	{
		if (unk_0xCE990E643CD9D0E5(Global_111858.f_20560.f_471, bParam0))
		{
			bVar0 = true;
			VEHICLE::IS_VEHICLE_DRIVEABLE(&(Global_111858.f_20560.f_471), bParam0);
		}
	}
	else if (unk_0xCE990E643CD9D0E5(Global_111858.f_20560.f_471, bParam0) || unk_0xCE990E643CD9D0E5(Global_2097152[func_89() /*10931*/].f_6175.f_10, bParam0))
	{
		bVar0 = true;
		VEHICLE::IS_VEHICLE_DRIVEABLE(&(Global_111858.f_20560.f_471), bParam0);
		VEHICLE::IS_VEHICLE_DRIVEABLE(&(Global_2097152[func_89() /*10931*/].f_6175.f_10), bParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("COUP_RED");
		HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(func_88(bParam0));
		HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar1, &cVar1, true, 0, "", 0);
	}
}

char* func_88(bool bParam0)
{
	switch (bParam0)
	{
		case 0:
			return "COUP_HAIRC";
		
		case 1:
			return "COUP_TATTOO";
		
		case 2:
			return "COUP_WARSTOCK";
		
		case 3:
			return "COUP_MOSPORT";
		
		case 4:
			return "COUP_ELITAS";
		
		case 5:
			return "COUP_MEDSPENS";
		
		case 6:
			return "COUP_SPRUNK";
		
		case 7:
			return "COUP_RESPRAY";
		
		case 8:
			return "COUP_XMAS2017";
		
		case 9:
			return "COUP_CAR_XMAS2018";
		
		case 10:
			return "COUP_HELI_XMAS2018";
		
		case 11:
			return "COUP_CAR2_XMAS2018";
		
		case 12:
			return "COUP_CAS_ELITAS";
		
		case 13:
			return "COUP_CAS_DOCKTEASE";
		
		case 14:
			return "COUP_CAS_MOSPORT";
		
		case 15:
			return "COUP_CAS_SSASA";
		
		case 16:
			return "COUP_CAS_WARSTOCK";
		
		case 17:
			return "COUP_CAS_PANDM";
		
		default:
	}
	return "";
}

int func_89()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_90(int iParam0)
{
	func_110(93, iParam0);
	func_110(29, iParam0);
	func_110(30, iParam0);
}

bool func_91(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	if (iParam0 == 8)
	{
		return func_92(129, -1, -1);
	}
	if (iParam0 == 9)
	{
		return func_92(135, -1, -1);
	}
	if (iParam0 == 10)
	{
		return func_92(136, -1, -1);
	}
	if (iParam0 == 11)
	{
		return func_92(137, -1, -1);
	}
	if (iParam0 == 12)
	{
		iVar0 = unk_0x5A002C4821A13338();
		iVar1 = func_9(8270, -1, 0);
		if (iVar1 == 0 || iVar0 >= iVar1)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 13)
	{
		iVar2 = unk_0x5A002C4821A13338();
		iVar3 = func_9(8271, -1, 0);
		if (iVar3 == 0 || iVar2 >= iVar3)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 14)
	{
		iVar4 = unk_0x5A002C4821A13338();
		iVar5 = func_9(8272, -1, 0);
		if (iVar5 == 0 || iVar4 >= iVar5)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 15)
	{
		iVar6 = unk_0x5A002C4821A13338();
		iVar7 = func_9(8273, -1, 0);
		if (iVar7 == 0 || iVar6 >= iVar7)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 16)
	{
		iVar8 = unk_0x5A002C4821A13338();
		iVar9 = func_9(8274, -1, 0);
		if (iVar9 == 0 || iVar8 >= iVar9)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 17)
	{
		iVar10 = unk_0x5A002C4821A13338();
		iVar11 = func_9(8275, -1, 0);
		if (iVar11 == 0 || iVar10 >= iVar11)
		{
			return 0;
		}
		return 1;
	}
	if (!MISC::SET_BIT())
	{
		return unk_0xCE990E643CD9D0E5(Global_111858.f_20560.f_471, iParam0);
	}
	return unk_0xCE990E643CD9D0E5(Global_2097152[func_89() /*10931*/].f_6175.f_10, bParam0);
}

bool func_92(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	bVar0 = false;
	if (iParam1 == -1)
	{
		iParam1 = func_8();
	}
	iVar1 = func_94(iParam0, iParam1);
	iVar2 = func_93(iParam0);
	if (0 != iVar1)
	{
		bVar0 = DECORATOR::DECOR_IS_REGISTERED_AS_TYPE(iVar1, iVar2, iParam2);
	}
	return bVar0;
}

int func_93(int iParam0)
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

bool func_94(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_8();
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

int func_95(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(27))
	{
		return 0;
	}
	if (STATS::STAT_GET_INT(joaat("SP0_MONEY_TOTAL_SPENT"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (STATS::STAT_GET_INT(joaat("SP1_MONEY_TOTAL_SPENT"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (STATS::STAT_GET_INT(joaat("SP2_MONEY_TOTAL_SPENT"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	STATS::STAT_GET_INT(joaat("NUM_CASH_SPENT"), &iVar2, -1);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		NETWORK::NETWORK_HAS_SOCIAL_CLUB_ACCOUNT(joaat("NUM_CASH_SPENT"), iVar1, 1);
		func_22(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_96(27, 1);
	return 1;
}

int func_96(int iParam0, int iParam1)
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_97(iParam0, iParam1);
}

int func_97(int iParam0, int iParam1)
{
	if (func_32(14) && !func_108(iParam0))
	{
		return 0;
	}
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_31217 != 0 && !Global_76833)
	{
		return 0;
	}
	if (func_107(&Global_4271324))
	{
		if (func_105(&Global_4271324, iParam0))
		{
			return 0;
		}
		if (func_98(&Global_4271324, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!PLAYER::GIVE_ACHIEVEMENT_TO_PLAYER(iParam0))
		{
			return 0;
		}
		if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_98(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[78];
	
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_32(14) && !func_108(iParam1))
	{
		return 0;
	}
	if (func_105(uParam0, iParam1))
	{
		return 0;
	}
	if (func_104(uParam0) < 0f)
	{
		func_103(uParam0, 0);
	}
	func_101(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_99(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_99(var uParam0, int iParam1)
{
	int iVar0;
	
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_32(14) && !func_108(iParam1))
	{
		return 0;
	}
	if (func_105(uParam0, iParam1))
	{
		return 0;
	}
	if (func_104(uParam0) < 0f)
	{
		func_103(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_100(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_100(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 78;
}

void func_101(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_102(uParam0, iVar0);
		iVar0++;
	}
	func_103(uParam0, (Global_4271323 - 0.5f));
}

void func_102(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 78;
}

void func_103(var uParam0, float fParam1)
{
	if (fParam1 == 0f)
	{
		uParam0->f_80 = 0f;
	}
	else
	{
		uParam0->f_80 = fParam1;
	}
}

float func_104(var uParam0)
{
	return uParam0->f_80;
}

bool func_105(var uParam0, int iParam1)
{
	return func_106(uParam0, iParam1) != -1;
}

int func_106(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_107(var uParam0)
{
	return uParam0->f_79 == 1;
}

int func_108(int iParam0)
{
	switch (iParam0)
	{
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
		
		default:
	}
	return 0;
}

void func_109(int iParam0, bool bParam1)
{
	int iVar0;
	
	STATS::STAT_GET_INT(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + bParam1);
	NETWORK::NETWORK_HAS_SOCIAL_CLUB_ACCOUNT(iParam0, iVar0, 1);
}

void func_110(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_57459[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (MISC::SET_BIT())
	{
		return;
	}
	if (Global_57459[iParam0 /*7*/])
	{
		STATS::STAT_GET_INT(Global_57459[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		NETWORK::NETWORK_HAS_SOCIAL_CLUB_ACCOUNT(Global_57459[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

void func_111()
{
	int iVar0;
	
	if (VEHICLE::IS_THIS_MODEL_A_BIKE())
	{
		STATS::STAT_GET_INT(joaat("SP0_TOTAL_CASH"), &iVar0, -1);
		if (!Global_58891[0] == iVar0)
		{
			Global_58891[0] = iVar0;
		}
		STATS::STAT_GET_INT(joaat("SP1_TOTAL_CASH"), &iVar0, -1);
		if (!Global_58891[1] == iVar0)
		{
			Global_58891[1] = iVar0;
		}
		STATS::STAT_GET_INT(joaat("SP2_TOTAL_CASH"), &iVar0, -1);
		if (!Global_58891[2] == iVar0)
		{
			Global_58891[2] = iVar0;
		}
	}
}

int func_112(int iParam0)
{
	return Global_1848[iParam0 /*29*/].f_17;
}

void func_113(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_114(var uParam0, int iParam1)
{
	uParam0->f_23 = (uParam0->f_23 || iParam1);
}

void func_115(char* sParam0, int iParam1)
{
	unk_0x17751E107423AFE9(sParam0);
	FILES::GET_DLC_VEHICLE_FLAGS(0, 0, 1, iParam1);
}

void func_116()
{
	switch (iLocal_102)
	{
		case 0:
			HUD::CLEAR_ALL_HELP_MESSAGES();
			func_58();
			if (func_156(&uLocal_114, "REDO2AU", "REDO2_BY", 4, 0, 0, 0))
			{
				iLocal_102++;
			}
			break;
		
		case 1:
			HUD::CLEAR_ALL_HELP_MESSAGES();
			iLocal_102++;
			break;
		
		case 2:
			HUD::CLEAR_ALL_HELP_MESSAGES();
			iLocal_102++;
			break;
		
		case 3:
			HUD::CLEAR_ALL_HELP_MESSAGES();
			if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_54))
			{
				PED::REMOVE_PED_FROM_GROUP(bLocal_54);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_77);
				TASK::TASK_LOOK_AT_ENTITY(false, unk_0x9B0761B4C3EB8BC7(), 7000, 2048, 2);
				TASK::TASK_PAUSE(0, 300);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(false, unk_0x9B0761B4C3EB8BC7(), 4000);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(false, Local_89, 1f, -1, 0.25f, false, 311.3569f);
				TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_SMOKING", 0, true);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_77);
				AUDIO::STOP_SCRIPTED_CONVERSATION(bLocal_54, iLocal_77);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_77);
				PED::SET_PED_KEEP_TASK(bLocal_54, true);
				if (!MISC::IS_BIT_SET(iLocal_91[8]))
				{
					iLocal_91[8] = OBJECT::CREATE_OBJECT(joaat("prop_golf_iron_01"), -473.4f, 536.8035f, 123.2482f, true, true, false);
					OBJECT::CREATE_OBJECT_NO_OFFSET(iLocal_91[8], bLocal_54, ENTITY::ATTACH_ENTITY_TO_ENTITY(bLocal_54, 57005), 0f, -0.15f, -0.05f, 70f, 110f, 200f, 1, 0, 0, 0, 2, 1);
				}
				iLocal_103 = MISC::GET_GAME_TIMER() + 1000;
				iLocal_102++;
			}
			break;
		
		case 4:
			HUD::CLEAR_ALL_HELP_MESSAGES();
			if (iLocal_103 < MISC::GET_GAME_TIMER())
			{
				if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_54))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
					iLocal_103 = MISC::GET_GAME_TIMER() + 3000;
					iLocal_102++;
				}
			}
			break;
		
		case 5:
			if (iLocal_103 < MISC::GET_GAME_TIMER())
			{
				HUD::CLEAR_ALL_HELP_MESSAGES();
				iLocal_102++;
			}
			break;
		
		case 6:
			if (!func_157())
			{
				func_115("DOM_GOLF", -1);
				func_114(&(Global_111858.f_18975), 16);
				if (func_54() == 0)
				{
					func_113(&(Global_111858.f_18975.f_24), 1);
				}
				else if (func_54() == 1)
				{
					func_113(&(Global_111858.f_18975.f_24), 4);
				}
				else if (func_54() == 2)
				{
					func_113(&(Global_111858.f_18975.f_24), 2);
				}
				func_83(func_54(), 1, 80, 0, 1);
				SYSTEM::SETTIMERA(0);
				iLocal_102++;
			}
			break;
		
		case 7:
			if (SYSTEM::TIMERA() > 5000)
			{
				bLocal_104 = true;
			}
			break;
	}
}

int func_117(bool bParam0, bool bParam1, bool bParam2)
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

void func_118()
{
	if (!func_62())
	{
		func_57(1);
	}
	if (!func_157())
	{
		switch (iLocal_100)
		{
			case 0:
				if (func_54() == 0)
				{
					func_156(&uLocal_114, "REDO2AU", "REDO2_CHTM", 4, 0, 0, 0);
				}
				else if (func_54() == 1)
				{
					func_156(&uLocal_114, "REDO2AU", "REDO2_CHTF", 4, 0, 0, 0);
				}
				else if (func_54() == 2)
				{
					func_156(&uLocal_114, "REDO2AU", "REDO2_CHTT", 4, 0, 0, 0);
				}
				iLocal_100++;
				break;
			
			case 1:
				func_156(&uLocal_114, "REDO2AU", "REDO2_CHT2", 4, 0, 0, 0);
				iLocal_100++;
				break;
			
			case 2:
				if (func_54() == 0)
				{
					func_156(&uLocal_114, "REDO2AU", "REDO2_CHT2M", 4, 0, 0, 0);
				}
				else if (func_54() == 1)
				{
					func_156(&uLocal_114, "REDO2AU", "REDO2_CHT2F", 4, 0, 0, 0);
				}
				else if (func_54() == 2)
				{
					func_156(&uLocal_114, "REDO2AU", "REDO2_CHT2T", 4, 0, 0, 0);
				}
				iLocal_100++;
				break;
			
			case 3:
				func_156(&uLocal_114, "REDO2AU", "REDO2_CHT3", 4, 0, 0, 0);
				iLocal_100++;
				break;
			
			case 4:
				if (func_54() == 0)
				{
					func_156(&uLocal_114, "REDO2AU", "REDO2_CHT3M", 4, 0, 0, 0);
				}
				else if (func_54() == 1)
				{
					func_156(&uLocal_114, "REDO2AU", "REDO2_CHT3F", 4, 0, 0, 0);
				}
				else if (func_54() == 2)
				{
					func_156(&uLocal_114, "REDO2AU", "REDO2_CHT3T", 4, 0, 0, 0);
				}
				iLocal_100++;
				break;
			
			case 5:
				func_156(&uLocal_114, "REDO2AU", "REDO_CHT4", 4, 0, 0, 0);
				iLocal_100++;
				break;
			
			case 6:
				iLocal_101 = MISC::GET_GAME_TIMER() + 1000;
				iLocal_100++;
				break;
			
			case 7:
				if (iLocal_101 < MISC::GET_GAME_TIMER())
				{
					if (func_54() == 0)
					{
						func_156(&uLocal_114, "REDO2AU", "REDO_CHT4M", 4, 0, 0, 0);
					}
					else if (func_54() == 1)
					{
						func_156(&uLocal_114, "REDO2AU", "REDO_CHT4F", 4, 0, 0, 0);
					}
					else if (func_54() == 2)
					{
						func_156(&uLocal_114, "REDO2AU", "REDO_CHT4T", 4, 0, 0, 0);
					}
					iLocal_100++;
				}
				break;
			
			case 8:
				func_156(&uLocal_114, "REDO2AU", "REDO2_CHT5", 4, 0, 0, 0);
				iLocal_100++;
				break;
			
			case 9:
				if (func_54() == 0)
				{
					func_156(&uLocal_114, "REDO2AU", "REDO2_CHT5M", 4, 0, 0, 0);
				}
				else if (func_54() == 1)
				{
					func_156(&uLocal_114, "REDO2AU", "REDO2_CHT5F", 4, 0, 0, 0);
				}
				else if (func_54() == 2)
				{
					func_156(&uLocal_114, "REDO2AU", "REDO2_CHT5T", 4, 0, 0, 0);
				}
				iLocal_100++;
				break;
			
			case 10:
				func_156(&uLocal_114, "REDO2AU", "REDO2_CHT6", 4, 0, 0, 0);
				iLocal_100++;
				break;
			
			case 11:
				if (func_54() == 0)
				{
					func_156(&uLocal_114, "REDO2AU", "REDO2_CHT6M", 4, 0, 0, 0);
				}
				else if (func_54() == 1)
				{
					func_156(&uLocal_114, "REDO2AU", "REDO2_CHT6F", 4, 0, 0, 0);
				}
				else if (func_54() == 2)
				{
					func_156(&uLocal_114, "REDO2AU", "REDO2_CHT6T", 4, 0, 0, 0);
				}
				iLocal_100++;
				break;
			
			case 12:
				func_156(&uLocal_114, "REDO2AU", "REDO2_CHT7", 4, 0, 0, 0);
				iLocal_100++;
				break;
			
			case 13:
				iLocal_101 = MISC::GET_GAME_TIMER() + 600;
				iLocal_100++;
				break;
			
			case 14:
				if (iLocal_101 < MISC::GET_GAME_TIMER())
				{
					if (func_54() == 0)
					{
						func_156(&uLocal_114, "REDO2AU", "REDO2_CHT7M", 4, 0, 0, 0);
					}
					else if (func_54() == 1)
					{
						func_156(&uLocal_114, "REDO2AU", "REDO2_CHT7F", 4, 0, 0, 0);
					}
					else if (func_54() == 2)
					{
						func_156(&uLocal_114, "REDO2AU", "REDO2_CHT7T", 4, 0, 0, 0);
					}
					iLocal_100++;
				}
				break;
			
			case 15:
				func_156(&uLocal_114, "REDO2AU", "REDO2_CHT8", 4, 0, 0, 0);
				iLocal_100++;
				break;
			
			case 16:
				if (func_54() == 0)
				{
					func_156(&uLocal_114, "REDO2AU", "REDO2_CHT8M", 4, 0, 0, 0);
				}
				else if (func_54() == 1)
				{
					func_156(&uLocal_114, "REDO2AU", "REDO2_CHT8F", 4, 0, 0, 0);
				}
				else if (func_54() == 2)
				{
					func_156(&uLocal_114, "REDO2AU", "REDO2_CHT8T", 4, 0, 0, 0);
				}
				iLocal_100++;
				break;
			
			case 17:
				iLocal_101 = MISC::GET_GAME_TIMER() + 800;
				iLocal_100++;
				break;
			
			case 18:
				if (iLocal_101 < MISC::GET_GAME_TIMER())
				{
					func_156(&uLocal_114, "REDO2AU", "REDO2_CHT9", 4, 0, 0, 0);
					iLocal_100++;
				}
				break;
			
			case 19:
				if (func_54() == 0)
				{
					func_156(&uLocal_114, "REDO2AU", "REDO2_CHT9M", 4, 0, 0, 0);
				}
				else if (func_54() == 1)
				{
					func_156(&uLocal_114, "REDO2AU", "REDO2_CHT9F", 4, 0, 0, 0);
				}
				else if (func_54() == 2)
				{
					func_156(&uLocal_114, "REDO2AU", "REDO2_CHT9T", 4, 0, 0, 0);
				}
				iLocal_100++;
				break;
			
			case 20:
				func_156(&uLocal_114, "REDO2AU", "REDO2_CHT10", 4, 0, 0, 0);
				iLocal_100++;
				break;
			}
	}
}

void func_119()
{
	if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_54))
	{
		if (!iLocal_66)
		{
			if (!PED::IS_PED_IN_ANY_POLICE_VEHICLE(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0))
			{
				if (!unk_0xE0B3BC41DDA88DF0(unk_0x9B0761B4C3EB8BC7(), PLAYER::GET_PLAYERS_LAST_VEHICLE(), 1) && unk_0xE0B3BC41DDA88DF0(bLocal_54, PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0))
				{
					func_57(0);
					func_55();
					SYSTEM::WAIT(0);
					func_156(&uLocal_114, "REDO2AU", "REDO2_GETOUT", 4, 0, 0, 0);
					iLocal_66 = 1;
				}
			}
		}
		else if (!PED::IS_PED_IN_ANY_POLICE_VEHICLE(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0))
		{
			if (unk_0xE0B3BC41DDA88DF0(unk_0x9B0761B4C3EB8BC7(), PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0) && unk_0xE0B3BC41DDA88DF0(bLocal_54, PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0))
			{
				iLocal_66 = 0;
			}
		}
		if (!iLocal_67)
		{
			if (PED::IS_PED_JACKING(unk_0x9B0761B4C3EB8BC7()))
			{
				func_57(0);
				func_55();
				SYSTEM::WAIT(0);
				func_156(&uLocal_114, "REDO2AU", "REDO2_JACK", 4, 0, 0, 0);
				iLocal_67 = 1;
			}
		}
		else if (!PED::IS_PED_JACKING(unk_0x9B0761B4C3EB8BC7()))
		{
			iLocal_67 = 0;
		}
		if (!iLocal_68)
		{
			if (PED::IS_PED_PRONE(unk_0x9B0761B4C3EB8BC7()))
			{
				func_57(0);
				func_55();
				SYSTEM::WAIT(0);
				func_156(&uLocal_114, "REDO2AU", "REDO2_SHOOT", 4, 0, 0, 0);
				iLocal_68 = 1;
			}
		}
		else if (PED::IS_PED_PRONE(unk_0x9B0761B4C3EB8BC7()))
		{
			iLocal_68 = 0;
		}
	}
}

void func_120()
{
	if (PED::IS_PED_STOPPED(unk_0x9B0761B4C3EB8BC7()))
	{
		if (iLocal_95 == 0)
		{
			iLocal_95 = MISC::GET_GAME_TIMER();
		}
		else
		{
			iLocal_96 = MISC::GET_GAME_TIMER();
		}
	}
	else
	{
		iLocal_96 = 0;
		iLocal_95 = 0;
	}
	if ((iLocal_96 - iLocal_95) > 60000)
	{
		func_55();
		SYSTEM::WAIT(0);
		func_156(&uLocal_114, "REDO2AU", "REDO2_TX", 4, 0, 0, 0);
		if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_54))
		{
			if (unk_0xC2169C00B643278B(bLocal_54, Local_89, 200f, 200f, 200f, 0, 1, 0))
			{
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(bLocal_54, Local_89, 1f, -1, 0.25f, false, 40000f);
			}
			else
			{
				TASK::TASK_WANDER_STANDARD(bLocal_54, 40000f, 0);
			}
			PED::SET_PED_KEEP_TASK(bLocal_54, true);
			PED::REMOVE_PED_FROM_GROUP(bLocal_54);
		}
		func_51();
	}
}

void func_121()
{
	if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_54))
	{
		if (ENTITY::IS_ENTITY_AT_ENTITY(unk_0x9B0761B4C3EB8BC7(), bLocal_54, 8f, 8f, 8f, false, true, 0) || PED::IS_PED_IN_ANY_TAXI(unk_0x9B0761B4C3EB8BC7()))
		{
			if ((SYSTEM::VDIST(unk_0x9B0761B4C3EB8BC7(), 0) && !SYSTEM::VDIST(bLocal_54, 0)) && !PED::IS_PED_IN_ANY_TAXI(unk_0x9B0761B4C3EB8BC7()))
			{
				if (!SYSTEM::VMAG(uLocal_84[0]))
				{
					uLocal_84[0] = func_125(bLocal_54, 0, 145);
				}
				if (SYSTEM::VMAG(fLocal_82))
				{
					unk_0x93370FA10F15BE44(&fLocal_82);
				}
			}
			else
			{
				if (SYSTEM::VMAG(uLocal_84[0]))
				{
					unk_0x93370FA10F15BE44(&(uLocal_84[0]));
				}
				if (!SYSTEM::VMAG(fLocal_82))
				{
					fLocal_82 = func_123(Local_88, 1);
				}
				if (func_54() == 2 && !func_47())
				{
					if (!SYSTEM::VMAG(fLocal_83))
					{
						fLocal_83 = func_123(Local_90, 0);
						HUD::SET_BLIP_SPRITE(fLocal_83, 269);
						func_122();
					}
				}
			}
		}
		else
		{
			if (!SYSTEM::VMAG(uLocal_84[0]))
			{
				uLocal_84[0] = func_125(bLocal_54, 0, 145);
			}
			if (SYSTEM::VMAG(fLocal_82))
			{
				unk_0x93370FA10F15BE44(&fLocal_82);
			}
		}
	}
}

void func_122()
{
	if (func_54() == 2)
	{
		if (!Global_31207)
		{
			func_115("CULT_BLIP_HELP", -1);
			Global_31207 = 1;
		}
	}
}

bool func_123(struct<3> Param0, bool bParam1)
{
	bool bVar0;
	
	bVar0 = HUD::ADD_BLIP_FOR_COORD(Param0);
	HUD::SET_BLIP_SCALE(bVar0, func_124(MISC::SET_BIT(), 1f, 1f));
	HUD::SET_BLIP_ROUTE(bVar0, bParam1);
	return bVar0;
}

float func_124(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

float func_125(bool bParam0, bool bParam1, int iParam2)
{
	float fVar0;
	
	fVar0 = func_126(bParam0, !bParam1, 0);
	if ((iParam2 != 145 && SYSTEM::VMAG(fVar0)) && unk_0x3030AE9FCF1BC243(&(Global_1848[iParam2 /*29*/].f_3)))
	{
		PED::IS_PED_IN_PARACHUTE_FREE_FALL(fVar0, &(Global_1848[iParam2 /*29*/].f_3));
	}
	return fVar0;
}

bool func_126(bool bParam0, bool bParam1, bool bParam2)
{
	bool bVar0;
	
	if (!MISC::IS_BIT_SET(bParam0))
	{
		return 0;
	}
	bVar0 = TASK::IS_PED_SPRINTING(bParam0);
	if (ENTITY::IS_ENTITY_A_VEHICLE(bParam0))
	{
		HUD::SET_BLIP_SCALE(bVar0, func_124(MISC::SET_BIT(), 1f, 1f));
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
		HUD::SET_BLIP_SCALE(bVar0, func_124(MISC::SET_BIT(), 0.7f, 0.7f));
		HUD::SET_BLIP_AS_FRIENDLY(bVar0, bParam1);
	}
	else if (ENTITY::IS_ENTITY_AN_OBJECT(bParam0))
	{
		HUD::SET_BLIP_SCALE(bVar0, func_124(MISC::SET_BIT(), 0.7f, 0.7f));
	}
	return bVar0;
}

void func_127()
{
	int iVar0;
	
	ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&bLocal_53);
	func_128(&uLocal_114, 4);
	iVar0 = 0;
	while (iVar0 < iLocal_91)
	{
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(iLocal_91[iVar0]));
		iVar0++;
	}
	unk_0x1082C25039B168F8("random@domestic");
}

void func_128(var uParam0, int iParam1)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

void func_129()
{
	if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_54))
	{
		if (SYSTEM::VDIST(unk_0x9B0761B4C3EB8BC7(), 1))
		{
			if (!func_132())
			{
				if (PED::IS_PED_IN_GROUP(bLocal_54))
				{
					PED::REMOVE_PED_FROM_GROUP(bLocal_54);
				}
				if (TASK::GET_SCRIPT_TASK_STATUS(bLocal_54, 1227113341) != 1 && TASK::GET_SCRIPT_TASK_STATUS(bLocal_54, 1227113341) != 0)
				{
					TASK::TASK_GO_TO_ENTITY(bLocal_54, unk_0x9B0761B4C3EB8BC7(), -1, 6f, 2f, 2f, 0);
				}
				if (SYSTEM::VDIST(bLocal_54, 0))
				{
					TASK::TASK_LEAVE_ANY_VEHICLE(bLocal_54, 0, 0);
				}
				if (!iLocal_73)
				{
					func_57(0);
					func_55();
					SYSTEM::WAIT(0);
					if (!func_157())
					{
						if (!func_131())
						{
							func_156(&uLocal_114, "REDO2AU", "REDO2_UV", 4, 0, 0, 0);
						}
						else
						{
							func_156(&uLocal_114, "REDO2AU", "REDO2_UV2", 4, 0, 0, 0);
						}
						iLocal_73 = 1;
					}
				}
			}
			else
			{
				iLocal_73 = 0;
				if (TASK::GET_SCRIPT_TASK_STATUS(bLocal_54, 1227113341) == 1 && TASK::GET_SCRIPT_TASK_STATUS(bLocal_54, 1227113341) == 0)
				{
					HUD::HIDE_HUD_AND_RADAR_THIS_FRAME(bLocal_54);
				}
			}
		}
		else if (!PED::IS_PED_IN_GROUP(bLocal_54))
		{
			PED::SET_PED_AS_GROUP_MEMBER(bLocal_54, func_130());
			PED::SET_PED_NEVER_LEAVES_GROUP(bLocal_54, true);
			PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(bLocal_54, 0);
		}
	}
}

int func_130()
{
	return PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX());
}

int func_131()
{
	if (SYSTEM::VDIST(unk_0x9B0761B4C3EB8BC7(), 1))
	{
		if (ENTITY::GET_ENTITY_COORDS(STATS::GET_PACKED_BOOL_STAT_KEY(unk_0x9B0761B4C3EB8BC7()), true))
		{
			if ((MONEY::NETWORK_SPENT_BUY_REVEAL_PLAYERS(MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(unk_0x9B0761B4C3EB8BC7(), 1))) || MONEY::NETWORK_SPENT_BULL_SHARK(MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(unk_0x9B0761B4C3EB8BC7(), 1)))) || MONEY::NETWORK_SPENT_BUY_OFFTHERADAR(MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(unk_0x9B0761B4C3EB8BC7(), 1))))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_132()
{
	if (SYSTEM::VDIST(unk_0x9B0761B4C3EB8BC7(), 0))
	{
		if (ENTITY::GET_ENTITY_COORDS(ENTITY::GET_ENTITY_MODEL(unk_0x9B0761B4C3EB8BC7(), 0), false))
		{
			if (((((!PED::IS_PED_IN_ANY_HELI(unk_0x9B0761B4C3EB8BC7()) && !PED::IS_PED_IN_ANY_PLANE(unk_0x9B0761B4C3EB8BC7())) && !PED::IS_PED_IN_ANY_BOAT(unk_0x9B0761B4C3EB8BC7())) && !PED::IS_PED_IN_ANY_SUB(unk_0x9B0761B4C3EB8BC7())) && !PED::IS_PED_IN_ANY_TRAIN(unk_0x9B0761B4C3EB8BC7())) && !PED::IS_PED_IN_MODEL(unk_0x9B0761B4C3EB8BC7(), joaat("rhino")))
			{
				if (PED::GET_VEHICLE_PED_IS_USING(ENTITY::GET_ENTITY_MODEL(unk_0x9B0761B4C3EB8BC7(), 0)) >= 1)
				{
					return 1;
				}
			}
		}
	}
	else if (SYSTEM::VDIST(unk_0x9B0761B4C3EB8BC7(), 1))
	{
		if (ENTITY::GET_ENTITY_COORDS(PED::GET_VEHICLE_PED_IS_ENTERING(unk_0x9B0761B4C3EB8BC7()), false))
		{
			if ((((!VEHICLE::IS_THIS_MODEL_A_HELI(MISC::GET_MODEL_DIMENSIONS(PED::GET_VEHICLE_PED_IS_ENTERING(unk_0x9B0761B4C3EB8BC7()))) && !VEHICLE::IS_THIS_MODEL_A_PLANE(MISC::GET_MODEL_DIMENSIONS(PED::GET_VEHICLE_PED_IS_ENTERING(unk_0x9B0761B4C3EB8BC7())))) && !VEHICLE::IS_THIS_MODEL_A_BOAT(MISC::GET_MODEL_DIMENSIONS(PED::GET_VEHICLE_PED_IS_ENTERING(unk_0x9B0761B4C3EB8BC7())))) && !VEHICLE::IS_THIS_MODEL_A_TRAIN(MISC::GET_MODEL_DIMENSIONS(PED::GET_VEHICLE_PED_IS_ENTERING(unk_0x9B0761B4C3EB8BC7())))) && MISC::GET_MODEL_DIMENSIONS(PED::GET_VEHICLE_PED_IS_ENTERING(unk_0x9B0761B4C3EB8BC7())) != joaat("rhino"))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_133()
{
	switch (iLocal_61)
	{
		case 0:
			if (!func_157())
			{
				if (SYSTEM::VDIST(unk_0x9B0761B4C3EB8BC7(), 0))
				{
					if (func_132())
					{
						if (func_54() == 0)
						{
							func_156(&uLocal_114, "REDO2AU", "REDO2_GLM", 4, 0, 0, 0);
						}
						if (func_54() == 1)
						{
							func_156(&uLocal_114, "REDO2AU", "REDO2_GLF", 4, 0, 0, 0);
						}
						if (func_54() == 2)
						{
							func_156(&uLocal_114, "REDO2AU", "REDO2_GLT", 4, 0, 0, 0);
						}
						iLocal_61 = 2;
					}
					else
					{
						if (func_54() == 0)
						{
							func_156(&uLocal_114, "REDO2AU", "REDO2_NCM", 4, 0, 0, 0);
						}
						if (func_54() == 1)
						{
							func_156(&uLocal_114, "REDO2AU", "REDO2_NCF", 4, 0, 0, 0);
						}
						if (func_54() == 2)
						{
							func_156(&uLocal_114, "REDO2AU", "REDO2_NCT", 4, 0, 0, 0);
						}
						iLocal_61++;
					}
				}
				else
				{
					if (func_54() == 0)
					{
						func_156(&uLocal_114, "REDO2AU", "REDO2_NCM", 4, 0, 0, 0);
					}
					if (func_54() == 1)
					{
						func_156(&uLocal_114, "REDO2AU", "REDO2_NCF", 4, 0, 0, 0);
					}
					if (func_54() == 2)
					{
						func_156(&uLocal_114, "REDO2AU", "REDO2_NCT", 4, 0, 0, 0);
					}
					iLocal_61++;
				}
			}
			break;
		
		case 1:
			if (SYSTEM::VDIST(unk_0x9B0761B4C3EB8BC7(), 0))
			{
				if (!func_132())
				{
					if (!func_157())
					{
						func_156(&uLocal_114, "REDO2AU", "REDO2_WT", 4, 0, 0, 0);
						iLocal_98 = MISC::GET_GAME_TIMER();
						iLocal_61++;
					}
				}
				else
				{
					iLocal_61++;
				}
			}
			else if (!func_157())
			{
				func_156(&uLocal_114, "REDO2AU", "REDO2_WT", 4, 0, 0, 0);
				iLocal_98 = MISC::GET_GAME_TIMER();
				iLocal_61++;
			}
			break;
		
		case 2:
			iLocal_99 = MISC::GET_GAME_TIMER();
			if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_54))
			{
				if (ENTITY::IS_ENTITY_AT_ENTITY(unk_0x9B0761B4C3EB8BC7(), bLocal_54, 12f, 12f, 5f, false, true, 2))
				{
					if (func_132())
					{
						PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, iLocal_111, 1862763509);
						if (func_136("REDO2_WT"))
						{
							func_55();
							SYSTEM::WAIT(0);
						}
						iLocal_61++;
					}
					else if (!func_157() && !iLocal_69)
					{
						if (!func_131())
						{
							func_156(&uLocal_114, "REDO2AU", "REDO2_UV", 4, 0, 0, 0);
						}
						else
						{
							func_156(&uLocal_114, "REDO2AU", "REDO2_UV2", 4, 0, 0, 0);
						}
						iLocal_69 = 1;
					}
				}
			}
			if (iLocal_98 != 0)
			{
				if ((iLocal_99 - iLocal_98) > 60000)
				{
					if (func_156(&uLocal_114, "REDO2AU", "REDO2_TX", 4, 0, 0, 0))
					{
						SYSTEM::WAIT(2000);
						if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_54))
						{
							TASK::OPEN_SEQUENCE_TASK(&iLocal_77);
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(false, unk_0x9B0761B4C3EB8BC7(), 2000);
							TASK::TASK_USE_MOBILE_PHONE_TIMED(0, -1);
							TASK::TASK_WANDER_STANDARD(false, 40000f, 0);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_77);
							AUDIO::STOP_SCRIPTED_CONVERSATION(bLocal_54, iLocal_77);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_77);
							PED::SET_PED_KEEP_TASK(bLocal_54, true);
							SYSTEM::WAIT(3000);
							iLocal_47 = 11;
						}
					}
				}
			}
			break;
		
		case 3:
			if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_54) && MISC::IS_BIT_SET(iLocal_91[8]))
			{
				TASK::OPEN_SEQUENCE_TASK(&iLocal_77);
				if (iLocal_60 > 18)
				{
				}
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(false, NETWORK::NETWORK_ARE_HANDLES_THE_SAME(iLocal_91[8], 1) + Vector(0f, 0.39f, 0.35f), 1f, -1, 0f, 512, func_135(NETWORK::NETWORK_ARE_HANDLES_THE_SAME(unk_0x9B0761B4C3EB8BC7(), 1), NETWORK::NETWORK_ARE_HANDLES_THE_SAME(iLocal_91[8], 1)));
				TASK::TASK_PLAY_ANIM(false, "random@domestic", "pickup_low", 2f, -2f, -1, 0, 0f, false, false, false);
				TASK::TASK_PLAY_ANIM(false, "random@security_van", "sec_hand_override", 8f, -4f, -1, 33, 0f, false, false, false);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_77);
				AUDIO::STOP_SCRIPTED_CONVERSATION(bLocal_54, iLocal_77);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_77);
				SYSTEM::SETTIMERB(0);
				iLocal_61++;
			}
			break;
		
		case 4:
		case 5:
			if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_54) && !PED::IS_PED_IN_ANY_POLICE_VEHICLE(iLocal_91[8], 0))
			{
				if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(bLocal_54, "random@domestic", "pickup_low", 3))
				{
					ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(bLocal_54, iLocal_91[8], false);
					if (NETWORK::_NETWORK_CONVERT_SYNCHRONISED_SCENE_TO_SYNCHRONIZED_SCENE(bLocal_54, "random@domestic", "pickup_low") > 0.388f)
					{
						iLocal_61 = 7;
					}
				}
				else if (SYSTEM::TIMERB() > 10000 || unk_0xC2169C00B643278B(unk_0x9B0761B4C3EB8BC7(), NETWORK::NETWORK_ARE_HANDLES_THE_SAME(iLocal_91[8], 1), 1.5f, 1.5f, 3f, 0, 1, 0))
				{
					if (!ENTITY::IS_ENTITY_ATTACHED(iLocal_91[8]))
					{
						TASK::OPEN_SEQUENCE_TASK(&iLocal_77);
						TASK::TASK_PLAY_ANIM(false, "random@domestic", "pickup_low", 2f, -2f, -1, 0, 0f, false, false, false);
						TASK::TASK_PLAY_ANIM(false, "random@security_van", "sec_hand_override", 8f, -4f, -1, 33, 0f, false, false, false);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_77);
						AUDIO::STOP_SCRIPTED_CONVERSATION(bLocal_54, iLocal_77);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_77);
						iLocal_61 = 6;
					}
				}
			}
			break;
		
		case 6:
			if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_54) && !PED::IS_PED_IN_ANY_POLICE_VEHICLE(iLocal_91[8], 0))
			{
				if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(bLocal_54, "random@domestic", "pickup_low", 3))
				{
					ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(bLocal_54, iLocal_91[8], false);
					if (NETWORK::_NETWORK_CONVERT_SYNCHRONISED_SCENE_TO_SYNCHRONIZED_SCENE(bLocal_54, "random@domestic", "pickup_low") > 0.388f)
					{
						iLocal_61++;
					}
				}
			}
			break;
		
		case 7:
			if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_54))
			{
				if (ENTITY::IS_ENTITY_AT_ENTITY(bLocal_54, unk_0x9B0761B4C3EB8BC7(), 20f, 20f, 20f, false, true, 0))
				{
					OBJECT::CREATE_OBJECT_NO_OFFSET(iLocal_91[8], bLocal_54, ENTITY::ATTACH_ENTITY_TO_ENTITY(bLocal_54, 57005), 0f, -0.15f, -0.05f, 70f, 110f, 200f, 1, 0, 0, 0, 2, 1);
					PED::SET_PED_AS_GROUP_MEMBER(bLocal_54, PLAYER::GET_PLAYER_GROUP(PLAYER::PLAYER_ID()));
					PED::SET_PED_NEVER_LEAVES_GROUP(bLocal_54, true);
					PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(bLocal_54, 0);
					func_134();
					iLocal_47 = 4;
				}
			}
			break;
	}
}

void func_134()
{
	if (!func_47())
	{
		if (func_54() == 2)
		{
			Global_31205 = 1;
		}
	}
}

var func_135(struct<2> Param0, bool bParam1, struct<2> Param2, bool bParam3)
{
	return unk_0x9075769DD4F148B7((Param2 - Param0), (Param2.f_1 - Param0.f_1));
}

int func_136(char* sParam0)
{
	var uVar0;
	
	if (func_157())
	{
		MemCopy(&uVar0, {func_60()}, 4);
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS(sParam0, &uVar0))
		{
			return 1;
		}
	}
	return 0;
}

void func_137()
{
	if (!iLocal_80)
	{
		if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_54))
		{
			if (ENTITY::IS_ENTITY_AT_ENTITY(bLocal_54, unk_0x9B0761B4C3EB8BC7(), 12f, 12f, 5f, false, true, 0))
			{
				HUD::HIDE_HUD_AND_RADAR_THIS_FRAME(bLocal_54);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_77);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(false, unk_0x9B0761B4C3EB8BC7(), 0);
				TASK::TASK_LOOK_AT_ENTITY(false, unk_0x9B0761B4C3EB8BC7(), 18000, 0, 2);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_77);
				AUDIO::STOP_SCRIPTED_CONVERSATION(bLocal_54, iLocal_77);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_77);
				TASK::TASK_LOOK_AT_ENTITY(unk_0x9B0761B4C3EB8BC7(), bLocal_54, 15000, 0, 2);
				iLocal_80 = 1;
			}
		}
	}
	if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_54))
	{
		if (ENTITY::IS_ENTITY_AT_ENTITY(bLocal_54, unk_0x9B0761B4C3EB8BC7(), 12f, 12f, 5f, false, true, 0))
		{
			if (!bLocal_97)
			{
				if (SYSTEM::VDIST(unk_0x9B0761B4C3EB8BC7(), 0))
				{
					HUD::HIDE_HUD_AND_RADAR_THIS_FRAME(bLocal_54);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_77);
					TASK::TASK_LOOK_AT_ENTITY(false, unk_0x9B0761B4C3EB8BC7(), -1, 0, 2);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(false, unk_0x9B0761B4C3EB8BC7(), -1);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_77);
					AUDIO::STOP_SCRIPTED_CONVERSATION(bLocal_54, iLocal_77);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_77);
					bLocal_97 = true;
				}
				else
				{
					HUD::HIDE_HUD_AND_RADAR_THIS_FRAME(bLocal_54);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_77);
					TASK::TASK_LOOK_AT_ENTITY(false, unk_0x9B0761B4C3EB8BC7(), -1, 0, 2);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(false, unk_0x9B0761B4C3EB8BC7(), -1);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_77);
					AUDIO::STOP_SCRIPTED_CONVERSATION(bLocal_54, iLocal_77);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_77);
					bLocal_97 = true;
				}
			}
			if (bLocal_97)
			{
				if (bLocal_50)
				{
					func_58();
					SYSTEM::WAIT(0);
					if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_54))
					{
						if (!func_157())
						{
							if (PED::IS_PED_FACING_PED(bLocal_54, unk_0x9B0761B4C3EB8BC7(), 90f))
							{
								if (func_156(&uLocal_114, "REDO2AU", "REDO2_LFT2", 4, 0, 0, 0))
								{
									SYSTEM::SETTIMERA(0);
									iLocal_47 = 7;
								}
							}
						}
					}
				}
				else if (!func_157())
				{
					if (func_156(&uLocal_114, "REDO2AU", "REDO2_LFT", 4, 0, 0, 0))
					{
						SYSTEM::SETTIMERA(0);
						iLocal_47 = 7;
					}
				}
			}
		}
	}
}

void func_138()
{
	if (MISC::IS_BIT_SET(bLocal_54))
	{
		if (ENTITY::IS_ENTITY_AT_ENTITY(unk_0x9B0761B4C3EB8BC7(), bLocal_54, 15f, 15f, 15f, false, true, 0))
		{
			if (func_139())
			{
				func_46(0);
				iLocal_72 = 0;
			}
		}
		else if (func_157() && !iLocal_72)
		{
			func_46(1);
			iLocal_72 = 1;
		}
	}
}

int func_139()
{
	if (Global_22016 == 1)
	{
		return 1;
	}
	return 0;
}

void func_140()
{
	switch (iLocal_60)
	{
		case 0:
			if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_54) && !STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_53))
			{
				if (CAM::IS_SPHERE_VISIBLE(NETWORK::NETWORK_ARE_HANDLES_THE_SAME(bLocal_53, 1), 3f))
				{
					if (!func_157())
					{
						if (func_156(&uLocal_114, "REDO2AU", "REDO2_ARMA", 4, 0, 0, 0))
						{
							TASK::TASK_PLAY_ANIM(bLocal_54, "random@domestic", "balcony_fight_male", 2f, -2f, -1, 0, 0.3f, false, false, false);
							TASK::TASK_PLAY_ANIM(bLocal_53, "random@domestic", "balcony_fight_female", 2f, -2f, -1, 0, 0.3f, false, false, false);
							iLocal_60++;
						}
					}
				}
			}
			break;
		
		case 1:
			if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_53) && MISC::IS_BIT_SET(iLocal_91[8]))
			{
				OBJECT::CREATE_OBJECT_NO_OFFSET(iLocal_91[8], bLocal_53, ENTITY::ATTACH_ENTITY_TO_ENTITY(bLocal_53, 28422), 0f, 0f, 0f, 0f, 0f, 0f, 1, 0, 0, 0, 2, 1);
				iLocal_60++;
			}
			break;
		
		case 2:
			if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_53) && MISC::IS_BIT_SET(iLocal_91[8]))
			{
				if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(bLocal_53, "random@domestic", "balcony_fight_female", 3))
				{
					if (NETWORK::_NETWORK_CONVERT_SYNCHRONISED_SCENE_TO_SYNCHRONIZED_SCENE(bLocal_53, "random@domestic", "balcony_fight_female") > 0.335f)
					{
						ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(iLocal_91[8], 0, 1);
						ENTITY::APPLY_FORCE_TO_ENTITY(iLocal_91[8], 1, 0f, 6f, 4f, 0f, 0f, 0f, 0, false, false, true, false, true);
						iLocal_60++;
					}
				}
			}
			break;
		
		case 3:
			if (!iLocal_70 && MISC::IS_BIT_SET(iLocal_91[8]))
			{
				if (ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(iLocal_91[8]))
				{
					ENTITY::GET_ENTITY_ALPHA(-1, "CLOTHES_THROWN", iLocal_91[8], "RE_DOMESTIC_SOUNDSET", 0, 0);
					iLocal_70 = 1;
				}
			}
			if (!func_157() || func_139())
			{
				func_156(&uLocal_114, "REDO2AU", "REDO2_ARFA", 4, 0, 0, 0);
				iLocal_70 = 0;
				iLocal_60++;
			}
			break;
		
		case 4:
			if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_53) && MISC::IS_BIT_SET(iLocal_91[9]))
			{
				if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(bLocal_53, "random@domestic", "balcony_fight_female", 3))
				{
					if (NETWORK::_NETWORK_CONVERT_SYNCHRONISED_SCENE_TO_SYNCHRONIZED_SCENE(bLocal_53, "random@domestic", "balcony_fight_female") > 0.473f)
					{
						OBJECT::CREATE_OBJECT_NO_OFFSET(iLocal_91[9], bLocal_53, ENTITY::ATTACH_ENTITY_TO_ENTITY(bLocal_53, 28422), 0f, 0f, 0f, 0f, 0f, 0f, 1, 0, 0, 0, 2, 1);
						iLocal_60++;
					}
				}
			}
			break;
		
		case 5:
			if (!func_157() || func_139())
			{
				func_156(&uLocal_114, "REDO2AU", "REDO2_ARMB", 4, 0, 0, 0);
				iLocal_60++;
			}
			break;
		
		case 6:
			if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_53) && MISC::IS_BIT_SET(iLocal_91[9]))
			{
				if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(bLocal_53, "random@domestic", "balcony_fight_female", 3))
				{
					if (NETWORK::_NETWORK_CONVERT_SYNCHRONISED_SCENE_TO_SYNCHRONIZED_SCENE(bLocal_53, "random@domestic", "balcony_fight_female") > 0.55f)
					{
						ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(iLocal_91[9], 0, 1);
						ENTITY::APPLY_FORCE_TO_ENTITY(iLocal_91[9], 1, 1f, 2f, 3f, 0f, 0f, 0f, 0, false, false, true, false, true);
						iLocal_60++;
					}
				}
			}
			break;
		
		case 7:
			if (!iLocal_70 && MISC::IS_BIT_SET(iLocal_91[9]))
			{
				if (ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(iLocal_91[9]))
				{
					ENTITY::GET_ENTITY_ALPHA(-1, "CLOTHES_THROWN", iLocal_91[9], "RE_DOMESTIC_SOUNDSET", 0, 0);
					iLocal_70 = 1;
				}
			}
			if (!func_157() || func_139())
			{
				func_156(&uLocal_114, "REDO2AU", "REDO2_ARFB", 4, 0, 0, 0);
				iLocal_70 = 0;
				iLocal_60++;
			}
			break;
		
		case 8:
			if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_53) && MISC::IS_BIT_SET(iLocal_91[10]))
			{
				if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(bLocal_53, "random@domestic", "balcony_fight_female", 3))
				{
					if (NETWORK::_NETWORK_CONVERT_SYNCHRONISED_SCENE_TO_SYNCHRONIZED_SCENE(bLocal_53, "random@domestic", "balcony_fight_female") > 0.705f)
					{
						OBJECT::CREATE_OBJECT_NO_OFFSET(iLocal_91[10], bLocal_53, ENTITY::ATTACH_ENTITY_TO_ENTITY(bLocal_53, 28422), 0f, 0f, 0f, 0f, 0f, 0f, 1, 0, 0, 0, 2, 1);
						iLocal_60++;
					}
				}
			}
			break;
		
		case 9:
			if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_53) && MISC::IS_BIT_SET(iLocal_91[10]))
			{
				if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(bLocal_53, "random@domestic", "balcony_fight_female", 3))
				{
					if (NETWORK::_NETWORK_CONVERT_SYNCHRONISED_SCENE_TO_SYNCHRONIZED_SCENE(bLocal_53, "random@domestic", "balcony_fight_female") > 0.838f)
					{
						ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(iLocal_91[10], 0, 1);
						ENTITY::APPLY_FORCE_TO_ENTITY(iLocal_91[10], 1, 1f, 3f, 3f, 0f, 0f, 0f, 0, false, false, true, false, true);
						iLocal_60++;
					}
				}
			}
			break;
		
		case 10:
			if (!iLocal_70 && MISC::IS_BIT_SET(iLocal_91[10]))
			{
				if (ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(iLocal_91[10]))
				{
					ENTITY::GET_ENTITY_ALPHA(-1, "CLOTHES_THROWN", iLocal_91[10], "RE_DOMESTIC_SOUNDSET", 0, 0);
					iLocal_70 = 1;
				}
			}
			if (!func_157() || func_139())
			{
				func_156(&uLocal_114, "REDO2AU", "REDO2_ARMC", 4, 0, 0, 0);
				iLocal_70 = 0;
				iLocal_60++;
			}
			break;
		
		case 11:
			if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_53) && !STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_54))
			{
				if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(bLocal_53, "random@domestic", "balcony_fight_female", 3))
				{
					if (NETWORK::_NETWORK_CONVERT_SYNCHRONISED_SCENE_TO_SYNCHRONIZED_SCENE(bLocal_53, "random@domestic", "balcony_fight_female") > 0.94f)
					{
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(bLocal_53, bLocal_54, 0);
					}
				}
			}
			if (!func_157() || func_139())
			{
				func_156(&uLocal_114, "REDO2AU", "REDO2_ARFC", 4, 0, 0, 0);
				iLocal_60 = 14;
			}
			break;
		
		case 14:
			if (!func_157())
			{
				if (func_156(&uLocal_114, "REDO2AU", "REDO2_ARFF", 4, 0, 0, 0))
				{
					func_141();
					iLocal_60++;
				}
			}
			break;
		
		case 15:
			if (!func_157())
			{
				if (func_156(&uLocal_114, "REDO2AU", "REDO2_ARMI", 4, 0, 0, 0))
				{
					iLocal_60++;
				}
			}
			break;
		
		case 16:
			if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_54))
			{
				TASK::OPEN_SEQUENCE_TASK(&iLocal_77);
				TASK::TASK_CLEAR_LOOK_AT(0);
				TASK::TASK_TURN_PED_TO_FACE_COORD(0, Local_87, 0);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_77);
				AUDIO::STOP_SCRIPTED_CONVERSATION(bLocal_54, iLocal_77);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_77);
				iLocal_60++;
			}
			break;
		
		case 17:
			if (MISC::IS_BIT_SET(bLocal_53))
			{
				if (!PED::IS_PED_IN_ANY_POLICE_VEHICLE(bLocal_53, 0))
				{
					if (unk_0xC2169C00B643278B(bLocal_53, Local_87, 1f, 1f, 5f, 0, 1, 0) && ENTITY::IS_ENTITY_OCCLUDED(bLocal_53))
					{
						PED::DELETE_PED(&bLocal_53);
					}
				}
			}
			if (iLocal_75 < MISC::GET_GAME_TIMER())
			{
				if (!func_157())
				{
					if (func_156(&uLocal_114, "REDO2AU", "REDO2_INS1", 4, 0, 0, 0))
					{
						iLocal_75 = MISC::GET_GAME_TIMER() + 5000;
						iLocal_76++;
					}
				}
			}
			if (iLocal_76 > 0)
			{
				iLocal_60++;
			}
			break;
		
		case 18:
			if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_54))
			{
				if (!func_157())
				{
					if (func_156(&uLocal_114, "REDO2AU", "REDO2_LV", 4, 0, 0, 0))
					{
						TASK::TASK_WANDER_STANDARD(bLocal_54, 40000f, 0);
						iLocal_60++;
					}
				}
			}
			break;
	}
	if (!bLocal_50)
	{
		if (iLocal_60 > 2 && iLocal_60 < 8)
		{
			if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_54))
			{
				if (ENTITY::IS_ENTITY_AT_ENTITY(unk_0x9B0761B4C3EB8BC7(), bLocal_54, 6f, 4f, 5f, false, true, 0) || (ENTITY::IS_ENTITY_AT_ENTITY(unk_0x9B0761B4C3EB8BC7(), bLocal_54, 12f, 12f, 5f, false, true, 2) && PLAYER::IS_PLAYER_PRESSING_HORN(PLAYER::PLAYER_ID())))
				{
					HUD::HIDE_HUD_AND_RADAR_THIS_FRAME(bLocal_54);
					func_141();
					if (iLocal_60 > 18)
					{
						iLocal_47 = 3;
					}
					else
					{
						func_58();
						while (func_157())
						{
							SYSTEM::WAIT(0);
						}
						if (func_156(&uLocal_114, "REDO2AU", "REDO2_FUCK", 4, 0, 0, 0))
						{
							bLocal_50 = true;
							iLocal_47 = 3;
						}
					}
				}
			}
		}
		else if (iLocal_60 > 7)
		{
			if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_54))
			{
				if (ENTITY::IS_ENTITY_AT_ENTITY(unk_0x9B0761B4C3EB8BC7(), bLocal_54, 6f, 8f, 5f, false, true, 0))
				{
					if (SYSTEM::VMAG(uLocal_84[0]))
					{
						HUD::SHOW_HEIGHT_ON_BLIP(uLocal_84[0], true);
					}
					HUD::HIDE_HUD_AND_RADAR_THIS_FRAME(bLocal_54);
					func_141();
					if (iLocal_60 > 18)
					{
						iLocal_47 = 3;
					}
					else
					{
						func_55();
						while (func_157())
						{
							SYSTEM::WAIT(0);
						}
						if (func_156(&uLocal_114, "REDO2AU", "REDO2_FUCK", 4, 0, 0, 0))
						{
							bLocal_50 = true;
							iLocal_47 = 3;
						}
					}
				}
			}
		}
	}
	if (bLocal_52)
	{
		if (iLocal_51 < MISC::GET_GAME_TIMER())
		{
			func_58();
			if (MISC::IS_BIT_SET(bLocal_53))
			{
				func_141();
			}
			iLocal_47 = 3;
		}
	}
}

void func_141()
{
	int iVar0;
	
	if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_53))
	{
		TASK::OPEN_SEQUENCE_TASK(&iLocal_77);
		HUD::_THEFEED_DISABLE(0, Local_87, 1f, -1, 1193033728, 1056964608);
		TASK::TASK_PLAY_ANIM(false, "random@domestic", "f_attack_end", 2f, -2f, -1, 1, 0f, false, false, false);
		TASK::CLOSE_SEQUENCE_TASK(iLocal_77);
		AUDIO::STOP_SCRIPTED_CONVERSATION(bLocal_53, iLocal_77);
		TASK::CLEAR_SEQUENCE_TASK(&iLocal_77);
		PED::SET_PED_KEEP_TASK(bLocal_53, true);
		iVar0 = 0;
		while (iVar0 < iLocal_91)
		{
			if (MISC::IS_BIT_SET(iLocal_91[iVar0]))
			{
				ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(iLocal_91[iVar0], 1, 1);
			}
			iVar0++;
		}
	}
}

int func_142(int iParam0)
{
	if (func_145())
	{
		Global_111848 = 1;
		Global_111845 = MISC::GET_GAME_TIMER();
		if (func_25(Global_111847))
		{
			func_143(0);
		}
		HUD::SET_MISSION_NAME(true, "RE_TITLE");
		if (iParam0 && func_25(Global_111847))
		{
			HUD::FLASH_MINIMAP_DISPLAY();
		}
		return 1;
	}
	return 0;
}

void func_143(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_111858.f_24991.f_2 < 3)
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					func_115(func_144(iParam0), -1);
					Global_111858.f_24991.f_2++;
					unk_0xBE20AB8238688965(&Global_111854, 0);
				}
			}
			break;
		
		case 1:
			if (!unk_0xCE990E643CD9D0E5(Global_111854, true))
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					func_115(func_144(iParam0), -1);
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
					func_115(func_144(iParam0), -1);
					Global_111858.f_24991.f_4++;
					unk_0xBE20AB8238688965(&Global_111854, 2);
				}
			}
			break;
	}
}

char* func_144(int iParam0)
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

int func_145()
{
	switch (func_146(&Global_31027, 0, 5, 0, SCRIPT::GET_ID_OF_THIS_THREAD()))
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

int func_146(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
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
		if (func_150(0))
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
		if (!func_148(iParam2))
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
			func_147(uParam0, iParam4);
		}
	}
	return 2;
}

void func_147(var uParam0, int iParam1)
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

bool func_148(int iParam0)
{
	return func_149(iParam0, Global_41631);
}

int func_149(int iParam0, int iParam1)
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

int func_150(int iParam0)
{
	if (Global_41631 == 15)
	{
		return 0;
	}
	if (func_148(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_151()
{
	if (SYSTEM::VMAG(fLocal_85))
	{
		unk_0x93370FA10F15BE44(&fLocal_85);
	}
	if (!SYSTEM::VMAG(uLocal_84[0]))
	{
		uLocal_84[0] = func_125(bLocal_54, 0, 145);
		HUD::SHOW_HEIGHT_ON_BLIP(uLocal_84[0], false);
	}
}

void func_152()
{
	func_4(39, 1);
	func_4(40, 1);
	func_4(41, 1);
	func_4(42, 1);
	func_4(43, 1);
	func_4(44, 1);
	MISC::CLEAR_AREA(Local_57, 2f, true, false, false, false);
	MISC::CLEAR_AREA(Local_56, 2f, true, false, false, false);
	unk_0xAF7D4BF357E8B79E(Local_57 - Vector(10f, 10f, 10f), Local_57 + Vector(10f, 10f, 10f), 0, 1);
	PATHFIND::SET_ROADS_IN_ANGLED_AREA(-499.9164f, 575.6557f, 124.5584f, -346.8641f, 483.3948f, 111.7201f, 74.0625f, false, false, true);
	PATHFIND::SET_ROADS_IN_AREA(Local_57 - Vector(10f, 10f, 10f), Local_57 + Vector(10f, 10f, 10f), false, true, 1, 1);
	PATHFIND::SET_ROADS_IN_AREA(Local_88 - Vector(3f, 2f, 2f), Local_88 + Vector(3f, 2f, 2f), false, true, 1, 1);
	PATHFIND::SET_ROADS_IN_AREA(Vector(53.1038f, 56.6649f, -1366.481f) - Vector(1f, 1f, 1f), Vector(53.1038f, 56.6649f, -1366.481f) + Vector(1f, 1f, 1f), false, true, 1, 1);
	PED::ADD_RELATIONSHIP_GROUP("rghDomestic", &iLocal_111);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_111, 1862763509);
	bLocal_53 = PED::CREATE_PED(26, iLocal_78, Local_56, fLocal_58, true, true);
	PED::_0x2208438012482A1A(bLocal_53, 1);
	PED::SET_PED_COMBAT_ATTRIBUTES(bLocal_53, 17, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(bLocal_53, 8, false);
	PED::SET_PED_FLEE_ATTRIBUTES(bLocal_53, 1, false);
	PED::SET_PED_FLEE_ATTRIBUTES(bLocal_53, 2, false);
	PED::SET_PED_FLEE_ATTRIBUTES(bLocal_53, 128, true);
	PED::SET_PED_FLEE_ATTRIBUTES(bLocal_53, 8, false);
	TASK::TASK_PLAY_ANIM(bLocal_53, "random@domestic", "balcony_fight_idle_female", 8f, -4f, -1, 1, 0f, false, false, false);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(bLocal_53, iLocal_111);
	func_155(bLocal_53, "GENERIC_WHATEVER", 24);
	unk_0x74528AC0906CBABE(iLocal_78);
	PLAYER::SET_PLAYER_VEHICLE_DEFENSE_MODIFIER(bLocal_53, 2.592402E-43f, 1);
	bLocal_54 = PED::CREATE_PED(26, iLocal_79, Local_57, fLocal_59, true, true);
	PED::_0x2208438012482A1A(bLocal_54, 1);
	PED::SET_PED_FLEE_ATTRIBUTES(bLocal_54, 1, true);
	PED::SET_PED_FLEE_ATTRIBUTES(bLocal_54, 2, false);
	PED::SET_PED_FLEE_ATTRIBUTES(bLocal_54, 128, true);
	PED::SET_PED_FLEE_ATTRIBUTES(bLocal_54, 8, false);
	PED::SET_PED_FLEE_ATTRIBUTES(bLocal_54, 65536, true);
	PLAYER::SET_PLAYER_VEHICLE_DEFENSE_MODIFIER(bLocal_54, 2.592402E-43f, 1);
	PLAYER::SET_PLAYER_VEHICLE_DEFENSE_MODIFIER(bLocal_54, 2.886675E-43f, 1);
	PED::SET_PED_HELMET(bLocal_54, false);
	PED::SET_PED_CAN_BE_TARGETTED(bLocal_54, false);
	TASK::TASK_PLAY_ANIM(bLocal_54, "random@domestic", "balcony_fight_idle_male", 8f, -4f, -1, 1, 0f, false, false, false);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(bLocal_54, iLocal_111);
	func_155(bLocal_54, "GENERIC_WHATEVER", 24);
	unk_0x74528AC0906CBABE(iLocal_79);
	TASK::TASK_LOOK_AT_ENTITY(bLocal_54, bLocal_53, -1, 0, 2);
	TASK::TASK_LOOK_AT_ENTITY(bLocal_53, bLocal_54, -1, 0, 2);
	PED::SET_PED_COMPONENT_VARIATION(bLocal_53, 0, 1, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(bLocal_53, 2, 1, 1, 0);
	PED::SET_PED_COMPONENT_VARIATION(bLocal_53, 3, 1, 1, 0);
	PED::SET_PED_COMPONENT_VARIATION(bLocal_53, 4, 1, 2, 0);
	PED::SET_PED_COMPONENT_VARIATION(bLocal_54, 0, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(bLocal_54, 2, 1, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(bLocal_54, 3, 1, 2, 0);
	PED::SET_PED_COMPONENT_VARIATION(bLocal_54, 4, 1, 1, 0);
	PED::SET_PED_COMPONENT_VARIATION(bLocal_54, 8, 0, 0, 0);
	func_154();
	unk_0xBE20AB8238688965(&uLocal_93, 5);
	if (func_54() == 0)
	{
		func_153(&uLocal_114, 0, unk_0x9B0761B4C3EB8BC7(), "MICHAEL", 0, 1);
	}
	if (func_54() == 1)
	{
		func_153(&uLocal_114, 1, unk_0x9B0761B4C3EB8BC7(), "FRANKLIN", 0, 1);
	}
	if (func_54() == 2)
	{
		func_153(&uLocal_114, 2, unk_0x9B0761B4C3EB8BC7(), "TREVOR", 0, 1);
	}
	func_153(&uLocal_114, 3, bLocal_54, "REDOCastro", 0, 1);
	AUDIO::SET_AMBIENT_VOICE_NAME(bLocal_54, sLocal_112);
	func_153(&uLocal_114, 4, bLocal_53, "NATHALIA", 0, 1);
	AUDIO::SET_AMBIENT_VOICE_NAME(bLocal_53, sLocal_113);
	SYSTEM::SETTIMERA(0);
	iLocal_109 = 1;
}

void func_153(var uParam0, int iParam1, bool bParam2, char* sParam3, int iParam4, int iParam5)
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

void func_154()
{
	iLocal_91[0] = OBJECT::CREATE_OBJECT(joaat("prop_ld_tshirt_02"), -470.3661f, 541.385f, 120.0205f, true, true, false);
	ENTITY::DETACH_ENTITY(iLocal_91[0], -13.7262f, 0.5001f, -0.5886f, 2, 1);
	ENTITY::SET_ENTITY_COORDS(iLocal_91[0], 1);
	unk_0x74528AC0906CBABE(joaat("prop_ld_tshirt_02"));
	iLocal_91[1] = OBJECT::CREATE_OBJECT(joaat("prop_ld_jeans_02"), -470.8998f, 540.7595f, 120.169f, true, true, false);
	ENTITY::DETACH_ENTITY(iLocal_91[1], -7.3906f, -12.8136f, -63.733f, 2, 1);
	ENTITY::SET_ENTITY_COORDS(iLocal_91[1], 1);
	unk_0x74528AC0906CBABE(joaat("prop_ld_jeans_02"));
	iLocal_91[2] = OBJECT::CREATE_OBJECT(joaat("prop_ld_shoe_01"), -468.3266f, 540.7725f, 120.1762f, true, true, false);
	ENTITY::DETACH_ENTITY(iLocal_91[2], -7.041683f, 10.17298f, 45.7617f, 2, 1);
	ENTITY::SET_ENTITY_COORDS(iLocal_91[2], 1);
	unk_0x74528AC0906CBABE(joaat("prop_ld_shoe_01"));
	iLocal_91[3] = OBJECT::CREATE_OBJECT(joaat("prop_ld_jeans_01"), -468.7787f, 541.864f, 119.9098f, true, true, false);
	ENTITY::DETACH_ENTITY(iLocal_91[3], -8.5884f, 12.6893f, 57.1792f, 2, 1);
	ENTITY::SET_ENTITY_COORDS(iLocal_91[3], 1);
	unk_0x74528AC0906CBABE(joaat("prop_ld_jeans_01"));
	iLocal_91[4] = OBJECT::CREATE_OBJECT(joaat("prop_ld_shoe_02"), -470.9009f, 541.2538f, 120.0578f, true, true, false);
	ENTITY::DETACH_ENTITY(iLocal_91[4], -16.4886f, 2.4979f, -3.8769f, 2, 1);
	ENTITY::SET_ENTITY_COORDS(iLocal_91[4], 1);
	unk_0x74528AC0906CBABE(joaat("prop_ld_shoe_02"));
	iLocal_91[5] = OBJECT::CREATE_OBJECT(joaat("prop_ld_shirt_01"), -472.0366f, 542.0591f, 119.8243f, true, true, false);
	ENTITY::DETACH_ENTITY(iLocal_91[5], -3.5946f, -15.0978f, -75.5026f, 2, 1);
	ENTITY::SET_ENTITY_COORDS(iLocal_91[5], 1);
	unk_0x74528AC0906CBABE(joaat("prop_ld_shirt_01"));
	iLocal_91[6] = OBJECT::CREATE_OBJECT(joaat("prop_porn_mag_03"), -472.7543f, 542.3022f, 119.7628f, true, true, false);
	ENTITY::DETACH_ENTITY(iLocal_91[6], 6.402527f, -15.68665f, -104.1308f, 2, 1);
	ENTITY::SET_ENTITY_COORDS(iLocal_91[6], 1);
	unk_0x74528AC0906CBABE(joaat("prop_porn_mag_03"));
	iLocal_91[7] = OBJECT::CREATE_OBJECT(joaat("prop_porn_mag_01"), -471.8675f, 543.6655f, 119.4991f, true, true, false);
	ENTITY::DETACH_ENTITY(iLocal_91[7], -8.3642f, 1.9344f, 2.6889f, 2, 1);
	ENTITY::SET_ENTITY_COORDS(iLocal_91[7], 1);
	unk_0x74528AC0906CBABE(joaat("prop_porn_mag_01"));
	iLocal_91[8] = OBJECT::CREATE_OBJECT(joaat("prop_golf_iron_01"), -473.4f, 536.8035f, 123.2482f, true, true, false);
	iLocal_91[9] = OBJECT::CREATE_OBJECT(joaat("prop_cs_rub_binbag_01"), -473.195f, 537.2585f, 123.3303f, true, true, false);
	unk_0x74528AC0906CBABE(joaat("prop_cs_rub_binbag_01"));
	iLocal_91[10] = OBJECT::CREATE_OBJECT(joaat("prop_golf_bag_01"), -473.4f, 536.8035f, 123.2482f, true, true, false);
	unk_0x74528AC0906CBABE(joaat("prop_golf_bag_01"));
}

void func_155(int iParam0, char* sParam1, int iParam2)
{
	AUDIO::_PLAY_AMBIENT_SPEECH1(iParam0, sParam1, func_50(iParam2), 1);
}

bool func_156(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_79(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_65(sParam2, iParam3, 0);
}

int func_157()
{
	if (Global_21005 != 0 || ENTITY::IS_ENTITY_DEAD())
	{
		return 1;
	}
	return 0;
}

void func_158()
{
	if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_54) && !STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_53))
	{
		if (WEAPON::IS_PED_ARMED(unk_0x9B0761B4C3EB8BC7(), 6))
		{
			if (PED::CAN_PED_SEE_HATED_PED(bLocal_54, unk_0x9B0761B4C3EB8BC7()) || PED::CAN_PED_SEE_HATED_PED(bLocal_53, unk_0x9B0761B4C3EB8BC7()))
			{
				if (((PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), bLocal_54) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), bLocal_54)) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), bLocal_53)) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), bLocal_53))
				{
					if (iLocal_94 == -1)
					{
						iLocal_94 = MISC::GET_GAME_TIMER();
					}
				}
				else
				{
					iLocal_94 = -1;
				}
			}
			if ((iLocal_94 != -1 && MISC::GET_GAME_TIMER() > iLocal_94 + 500) || PED::IS_PED_PRONE(unk_0x9B0761B4C3EB8BC7()))
			{
				func_165();
			}
		}
	}
	if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
	{
		func_165();
	}
	if (iLocal_47 == 1)
	{
		if (MISC::IS_BIT_SET(bLocal_54))
		{
			if (func_164(bLocal_54))
			{
				func_163();
			}
		}
	}
	if (unk_0xC2169C00B643278B(unk_0x9B0761B4C3EB8BC7(), -471.1757f, 535.356f, 124.8557f, 3f, 2.5f, 1.5f, 0, 1, 0))
	{
		func_162();
	}
	if (MISC::IS_BIT_SET(bLocal_53))
	{
		if (func_161(bLocal_53))
		{
			func_159();
		}
	}
	if (MISC::IS_BIT_SET(bLocal_54))
	{
		if (func_161(bLocal_54) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(bLocal_54, unk_0x9B0761B4C3EB8BC7(), true))
		{
			func_159();
		}
	}
	if (MISC::IS_BIT_SET(bLocal_53))
	{
		if (func_161(bLocal_53) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(bLocal_53, unk_0x9B0761B4C3EB8BC7(), true))
		{
			func_159();
		}
	}
	if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_54))
	{
		if (!ENTITY::IS_ENTITY_AT_ENTITY(unk_0x9B0761B4C3EB8BC7(), bLocal_54, 250f, 250f, 250f, false, true, 0) || NETWORK::NETWORK_IS_PLAYER_ACTIVE(bLocal_54))
		{
			iLocal_47 = 11;
		}
	}
	if (PED::IS_PED_PRONE(unk_0x9B0761B4C3EB8BC7()))
	{
		func_159();
	}
}

void func_159()
{
	func_55();
	SYSTEM::WAIT(0);
	if (PED::IS_PED_PRONE(unk_0x9B0761B4C3EB8BC7()))
	{
		func_156(&uLocal_114, "REDO2AU", "REDO2_SHOOT", 4, 0, 0, 0);
	}
	else
	{
		func_156(&uLocal_114, "REDO2AU", "REDO2_CRAZY", 4, 0, 0, 0);
	}
	if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_54))
	{
		HUD::HIDE_HUD_AND_RADAR_THIS_FRAME(bLocal_54);
		TASK::OPEN_SEQUENCE_TASK(&iLocal_77);
		TASK::TASK_SMART_FLEE_PED(0, unk_0x9B0761B4C3EB8BC7(), 250f, -1, false, false);
		TASK::CLOSE_SEQUENCE_TASK(iLocal_77);
		AUDIO::STOP_SCRIPTED_CONVERSATION(bLocal_54, iLocal_77);
		TASK::CLEAR_SEQUENCE_TASK(&iLocal_77);
		PED::SET_PED_KEEP_TASK(bLocal_54, true);
		SYSTEM::WAIT(3000);
	}
	func_160();
	SYSTEM::WAIT(0);
	func_51();
	iLocal_47 = 11;
}

void func_160()
{
	int iVar0;
	
	if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_53))
	{
		TASK::TASK_COWER(bLocal_53, -1);
		PED::SET_PED_KEEP_TASK(bLocal_53, true);
		iVar0 = 0;
		while (iVar0 < iLocal_91)
		{
			if (MISC::IS_BIT_SET(iLocal_91[iVar0]))
			{
				ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(iLocal_91[iVar0], 1, 1);
			}
			iVar0++;
		}
	}
}

int func_161(bool bParam0)
{
	if (MISC::IS_BIT_SET(bParam0))
	{
		if (PED::IS_PED_IN_ANY_POLICE_VEHICLE(bParam0, 0))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(bParam0, unk_0x9B0761B4C3EB8BC7(), true))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_162()
{
	func_160();
	func_55();
	SYSTEM::WAIT(0);
	func_156(&uLocal_114, "REDO2AU", "REDO2_CRAZY", 4, 0, 0, 0);
	if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_54))
	{
		HUD::HIDE_HUD_AND_RADAR_THIS_FRAME(bLocal_54);
		TASK::OPEN_SEQUENCE_TASK(&iLocal_77);
		TASK::TASK_SMART_FLEE_PED(0, unk_0x9B0761B4C3EB8BC7(), 250f, -1, false, false);
		TASK::CLOSE_SEQUENCE_TASK(iLocal_77);
		AUDIO::STOP_SCRIPTED_CONVERSATION(bLocal_54, iLocal_77);
		TASK::CLEAR_SEQUENCE_TASK(&iLocal_77);
		PED::SET_PED_KEEP_TASK(bLocal_54, true);
		SYSTEM::WAIT(3000);
	}
	func_51();
	iLocal_47 = 11;
}

void func_163()
{
	if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_54))
	{
		HUD::HIDE_HUD_AND_RADAR_THIS_FRAME(bLocal_54);
		TASK::TASK_SMART_FLEE_COORD(bLocal_54, NETWORK::NETWORK_ARE_HANDLES_THE_SAME(ENTITY::GET_ENTITY_MODEL(unk_0x9B0761B4C3EB8BC7(), 0), 1), 150f, -1, false, false);
		PED::SET_PED_KEEP_TASK(bLocal_54, true);
	}
	iLocal_47 = 11;
}

int func_164(bool bParam0)
{
	if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bParam0))
	{
		if (!SYSTEM::VDIST(bParam0, 0) && ENTITY::IS_ENTITY_AT_ENTITY(unk_0x9B0761B4C3EB8BC7(), bParam0, 1.5f, 1.5f, 8f, false, true, 2))
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(ENTITY::GET_ENTITY_MODEL(unk_0x9B0761B4C3EB8BC7(), 0)) > 4f)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_165()
{
	func_55();
	SYSTEM::WAIT(0);
	func_156(&uLocal_114, "REDO2AU", "REDO2_CRAZY", 4, 0, 0, 0);
	if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_54))
	{
		TASK::OPEN_SEQUENCE_TASK(&iLocal_77);
		TASK::TASK_LEAVE_ANY_VEHICLE(false, 0, 4096);
		TASK::TASK_SMART_FLEE_PED(0, unk_0x9B0761B4C3EB8BC7(), 250f, -1, false, false);
		TASK::CLOSE_SEQUENCE_TASK(iLocal_77);
		AUDIO::STOP_SCRIPTED_CONVERSATION(bLocal_54, iLocal_77);
		TASK::CLEAR_SEQUENCE_TASK(&iLocal_77);
		PED::SET_PED_KEEP_TASK(bLocal_54, true);
		SYSTEM::WAIT(3000);
	}
	func_51();
	iLocal_47 = 11;
}

void func_166()
{
	unk_0x78FCB2E22C41B9D5(iLocal_78);
	unk_0x78FCB2E22C41B9D5(iLocal_79);
	unk_0x78FCB2E22C41B9D5(joaat("prop_golf_iron_01"));
	unk_0x78FCB2E22C41B9D5(joaat("prop_cs_rub_binbag_01"));
	unk_0x78FCB2E22C41B9D5(joaat("prop_golf_bag_01"));
	unk_0x78FCB2E22C41B9D5(joaat("prop_ld_tshirt_02"));
	unk_0x78FCB2E22C41B9D5(joaat("prop_ld_jeans_02"));
	unk_0x78FCB2E22C41B9D5(joaat("prop_ld_shoe_01"));
	unk_0x78FCB2E22C41B9D5(joaat("prop_ld_jeans_01"));
	unk_0x78FCB2E22C41B9D5(joaat("prop_ld_shoe_02"));
	unk_0x78FCB2E22C41B9D5(joaat("prop_ld_shirt_01"));
	unk_0x78FCB2E22C41B9D5(joaat("prop_porn_mag_03"));
	unk_0x78FCB2E22C41B9D5(joaat("prop_porn_mag_01"));
	STREAMING::REQUEST_ANIM_DICT("random@domestic");
	STREAMING::REQUEST_ANIM_DICT("random@security_van");
	if ((((((((((((((ENTITY::DOES_ENTITY_EXIST(iLocal_78) && ENTITY::DOES_ENTITY_EXIST(iLocal_79)) && ENTITY::DOES_ENTITY_EXIST(joaat("prop_golf_iron_01"))) && ENTITY::DOES_ENTITY_EXIST(joaat("prop_cs_rub_binbag_01"))) && ENTITY::DOES_ENTITY_EXIST(joaat("prop_golf_bag_01"))) && ENTITY::DOES_ENTITY_EXIST(joaat("prop_ld_tshirt_02"))) && ENTITY::DOES_ENTITY_EXIST(joaat("prop_ld_jeans_02"))) && ENTITY::DOES_ENTITY_EXIST(joaat("prop_ld_shoe_01"))) && ENTITY::DOES_ENTITY_EXIST(joaat("prop_ld_jeans_01"))) && ENTITY::DOES_ENTITY_EXIST(joaat("prop_ld_shoe_02"))) && ENTITY::DOES_ENTITY_EXIST(joaat("prop_ld_shirt_01"))) && ENTITY::DOES_ENTITY_EXIST(joaat("prop_porn_mag_03"))) && ENTITY::DOES_ENTITY_EXIST(joaat("prop_porn_mag_01"))) && STREAMING::HAS_ANIM_DICT_LOADED("random@domestic")) && STREAMING::HAS_ANIM_DICT_LOADED("random@security_van"))
	{
		bLocal_48 = true;
	}
	else
	{
		unk_0x78FCB2E22C41B9D5(iLocal_78);
		unk_0x78FCB2E22C41B9D5(iLocal_79);
		unk_0x78FCB2E22C41B9D5(joaat("prop_golf_iron_01"));
		unk_0x78FCB2E22C41B9D5(joaat("prop_cs_rub_binbag_01"));
		unk_0x78FCB2E22C41B9D5(joaat("prop_golf_bag_01"));
		unk_0x78FCB2E22C41B9D5(joaat("prop_ld_tshirt_02"));
		unk_0x78FCB2E22C41B9D5(joaat("prop_ld_jeans_02"));
		unk_0x78FCB2E22C41B9D5(joaat("prop_ld_shoe_01"));
		unk_0x78FCB2E22C41B9D5(joaat("prop_ld_jeans_01"));
		unk_0x78FCB2E22C41B9D5(joaat("prop_ld_shoe_02"));
		unk_0x78FCB2E22C41B9D5(joaat("prop_ld_shirt_01"));
		unk_0x78FCB2E22C41B9D5(joaat("prop_porn_mag_03"));
		unk_0x78FCB2E22C41B9D5(joaat("prop_porn_mag_01"));
		STREAMING::REQUEST_ANIM_DICT("random@domestic");
		STREAMING::REQUEST_ANIM_DICT("random@security_van");
	}
}

void func_167()
{
	Local_86 = { -470.4934f, 540.0073f, 120.3715f };
	iLocal_78 = joaat("a_f_y_business_02");
	iLocal_79 = joaat("a_m_y_golfer_01");
	sLocal_112 = "REDOCastro";
	sLocal_113 = "A_F_Y_VINEWOOD_04_WHITE_MINI_02";
	Local_56 = { -472.6554f, 536.469f, 123.3555f };
	fLocal_58 = 348.9152f;
	Local_57 = { -470.1328f, 542.9949f, 119.6873f };
	fLocal_59 = 156.0666f;
	Local_87 = { -469.082f, 535.0479f, 123.3553f };
	Local_88 = { -1378.273f, 40.2254f, 52.6774f };
	Local_89 = { -1368.188f, 57.2309f, 52.7045f };
	bLocal_55 = true;
}

int func_168()
{
	if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_ID()) && !STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(unk_0x9B0761B4C3EB8BC7()))
	{
		if (SYSTEM::VDIST2(NETWORK::NETWORK_ARE_HANDLES_THE_SAME(unk_0x9B0761B4C3EB8BC7(), 1), Local_44) < (75f * 75f))
		{
			return 1;
		}
		if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(unk_0x9B0761B4C3EB8BC7())) > 1369f && !func_179())
		{
			return 0;
		}
	}
	if (func_175())
	{
		return 1;
	}
	if (func_169(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_169(float fParam0, bool bParam1)
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
		if (func_33(func_54()))
		{
			iVar5 = func_30();
			iVar6 = 0;
			iVar6 = 0;
			while (iVar6 < 63)
			{
				iVar1 = iVar6;
				if (unk_0xCE990E643CD9D0E5(Global_111858.f_18570[iVar1 /*6*/], 2) && !unk_0xCE990E643CD9D0E5(Global_111858.f_18570[iVar1 /*6*/], 3))
				{
					func_170(iVar1, &Var0);
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

void func_170(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_171(uParam1, "Abigail1", func_173(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_172(iParam0), 1, 0);
			break;
		
		case 1:
			func_171(uParam1, "Abigail2", func_173(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_172(iParam0), 1, 0);
			break;
		
		case 2:
			func_171(uParam1, "Barry1", func_173(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_172(iParam0), 1, 0);
			break;
		
		case 3:
			func_171(uParam1, "Barry2", func_173(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_172(iParam0), 1, 1);
			break;
		
		case 4:
			func_171(uParam1, "Barry3", func_173(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_172(iParam0), 0, 0);
			break;
		
		case 5:
			func_171(uParam1, "Barry3A", func_173(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_172(iParam0), 0, 1);
			break;
		
		case 6:
			func_171(uParam1, "Barry3C", func_173(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_172(iParam0), 0, 1);
			break;
		
		case 7:
			func_171(uParam1, "Barry4", func_173(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_172(iParam0), 0, 0);
			break;
		
		case 8:
			func_171(uParam1, "Dreyfuss1", func_173(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_172(iParam0), 0, 0);
			break;
		
		case 9:
			func_171(uParam1, "Epsilon1", func_173(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_172(iParam0), 0, 0);
			break;
		
		case 10:
			func_171(uParam1, "Epsilon2", func_173(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_172(iParam0), 1, 0);
			break;
		
		case 11:
			func_171(uParam1, "Epsilon3", func_173(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_172(iParam0), 0, 0);
			break;
		
		case 12:
			func_171(uParam1, "Epsilon4", func_173(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_172(iParam0), 0, 0);
			break;
		
		case 13:
			func_171(uParam1, "Epsilon5", func_173(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_172(iParam0), 1, 0);
			break;
		
		case 14:
			func_171(uParam1, "Epsilon6", func_173(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_172(iParam0), 0, 1);
			break;
		
		case 15:
			func_171(uParam1, "Epsilon7", func_173(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_172(iParam0), 0, 0);
			break;
		
		case 16:
			func_171(uParam1, "Epsilon8", func_173(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_172(iParam0), 1, 0);
			break;
		
		case 17:
			func_171(uParam1, "Extreme1", func_173(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_172(iParam0), 0, 1);
			break;
		
		case 18:
			func_171(uParam1, "Extreme2", func_173(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_172(iParam0), 0, 1);
			break;
		
		case 19:
			func_171(uParam1, "Extreme3", func_173(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_172(iParam0), 0, 1);
			break;
		
		case 20:
			func_171(uParam1, "Extreme4", func_173(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_172(iParam0), 0, 0);
			break;
		
		case 21:
			func_171(uParam1, "Fanatic1", func_173(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_172(iParam0), 1, 0);
			break;
		
		case 22:
			func_171(uParam1, "Fanatic2", func_173(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_172(iParam0), 1, 0);
			break;
		
		case 23:
			func_171(uParam1, "Fanatic3", func_173(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_172(iParam0), 0, 1);
			break;
		
		case 24:
			func_171(uParam1, "Hao1", func_173(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_172(iParam0), 0, 1);
			break;
		
		case 25:
			func_171(uParam1, "Hunting1", func_173(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_172(iParam0), 0, 1);
			break;
		
		case 26:
			func_171(uParam1, "Hunting2", func_173(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_172(iParam0), 0, 1);
			break;
		
		case 27:
			func_171(uParam1, "Josh1", func_173(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_172(iParam0), 1, 0);
			break;
		
		case 28:
			func_171(uParam1, "Josh2", func_173(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_172(iParam0), 1, 1);
			break;
		
		case 29:
			func_171(uParam1, "Josh3", func_173(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_172(iParam0), 1, 1);
			break;
		
		case 30:
			func_171(uParam1, "Josh4", func_173(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_172(iParam0), 1, 0);
			break;
		
		case 31:
			func_171(uParam1, "Maude1", func_173(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_172(iParam0), 0, 1);
			break;
		
		case 32:
			func_171(uParam1, "Minute1", func_173(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_172(iParam0), 0, 1);
			break;
		
		case 33:
			func_171(uParam1, "Minute2", func_173(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_172(iParam0), 0, 1);
			break;
		
		case 34:
			func_171(uParam1, "Minute3", func_173(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_172(iParam0), 0, 1);
			break;
		
		case 35:
			func_171(uParam1, "MrsPhilips1", func_173(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_172(iParam0), 0, 0);
			break;
		
		case 36:
			func_171(uParam1, "MrsPhilips2", func_173(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_172(iParam0), 0, 0);
			break;
		
		case 37:
			func_171(uParam1, "Nigel1", func_173(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_172(iParam0), 1, 0);
			break;
		
		case 38:
			func_171(uParam1, "Nigel1A", func_173(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_172(iParam0), 1, 1);
			break;
		
		case 39:
			func_171(uParam1, "Nigel1B", func_173(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_172(iParam0), 1, 1);
			break;
		
		case 40:
			func_171(uParam1, "Nigel1C", func_173(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_172(iParam0), 1, 1);
			break;
		
		case 41:
			func_171(uParam1, "Nigel1D", func_173(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_172(iParam0), 1, 1);
			break;
		
		case 42:
			func_171(uParam1, "Nigel2", func_173(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_172(iParam0), 1, 1);
			break;
		
		case 43:
			func_171(uParam1, "Nigel3", func_173(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_172(iParam0), 1, 1);
			break;
		
		case 44:
			func_171(uParam1, "Omega1", func_173(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_172(iParam0), 0, 0);
			break;
		
		case 45:
			func_171(uParam1, "Omega2", func_173(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_172(iParam0), 0, 0);
			break;
		
		case 46:
			func_171(uParam1, "Paparazzo1", func_173(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_172(iParam0), 0, 1);
			break;
		
		case 47:
			func_171(uParam1, "Paparazzo2", func_173(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_172(iParam0), 0, 1);
			break;
		
		case 48:
			func_171(uParam1, "Paparazzo3", func_173(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_172(iParam0), 0, 0);
			break;
		
		case 49:
			func_171(uParam1, "Paparazzo3A", func_173(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_172(iParam0), 0, 1);
			break;
		
		case 50:
			func_171(uParam1, "Paparazzo3B", func_173(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_172(iParam0), 0, 1);
			break;
		
		case 51:
			func_171(uParam1, "Paparazzo4", func_173(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_172(iParam0), 0, 0);
			break;
		
		case 52:
			func_171(uParam1, "Rampage1", func_173(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_172(iParam0), 0, 0);
			break;
		
		case 54:
			func_171(uParam1, "Rampage3", func_173(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_172(iParam0), 1, 0);
			break;
		
		case 55:
			func_171(uParam1, "Rampage4", func_173(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_172(iParam0), 1, 0);
			break;
		
		case 56:
			func_171(uParam1, "Rampage5", func_173(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_172(iParam0), 0, 0);
			break;
		
		case 53:
			func_171(uParam1, "Rampage2", func_173(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_172(iParam0), 1, 0);
			break;
		
		case 57:
			func_171(uParam1, "TheLastOne", func_173(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_172(iParam0), 0, 1);
			break;
		
		case 58:
			func_171(uParam1, "Tonya1", func_173(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_172(iParam0), 0, 1);
			break;
		
		case 59:
			func_171(uParam1, "Tonya2", func_173(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_172(iParam0), 0, 1);
			break;
		
		case 60:
			func_171(uParam1, "Tonya3", func_173(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_172(iParam0), 0, 1);
			break;
		
		case 61:
			func_171(uParam1, "Tonya4", func_173(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_172(iParam0), 0, 1);
			break;
		
		case 62:
			func_171(uParam1, "Tonya5", func_173(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_172(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_171(var uParam0, char* sParam1, struct<2> Param2, int iParam3, int iParam4, int iParam5, struct<3> Param6, int iParam7, char* sParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, var uParam19, int iParam20, int iParam21)
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

int func_172(int iParam0)
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

struct<2> func_173(int iParam0)
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	cVar1 = { func_174(iParam0) };
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

struct<2> func_174(int iParam0)
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

int func_175()
{
	if (func_178() && !func_179())
	{
		return 1;
	}
	if (func_177() && func_176())
	{
		return 1;
	}
	return 0;
}

bool func_176()
{
	return Global_111576 > 0;
}

int func_177()
{
	if (Global_95877 != -1)
	{
		return 1;
	}
	return 0;
}

int func_178()
{
	if (Global_95877 != -1)
	{
		return unk_0xCE990E643CD9D0E5(Global_89743[Global_95877 /*34*/].f_15, 20);
	}
	return 0;
}

int func_179()
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

int func_180()
{
	if (!func_148(5))
	{
		return 1;
	}
	if (func_175())
	{
		return 1;
	}
	if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(unk_0x9B0761B4C3EB8BC7()))
	{
		if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(unk_0x9B0761B4C3EB8BC7())) > 1369f && !func_179())
		{
			return 0;
		}
	}
	if (func_169(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_181()
{
	if ((Global_111847 == func_40() && MISC::GET_RANDOM_EVENT_FLAG()) && Global_111848)
	{
		return 1;
	}
	return 0;
}

void func_182(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_40();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_184(iParam0);
	MISC::_0x65D2EBB47E1CEC21(false);
	MISC::SET_RANDOM_EVENT_FLAG(true);
	Global_111844 = 0;
	func_183();
}

void func_183()
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

void func_184(int iParam0)
{
	Global_111847 = iParam0;
}

int func_185(struct<3> Param0, int iParam1, int iParam2, bool bParam3, bool bParam4)
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
		iParam1 = func_40();
	}
	if (iParam1 == -1)
	{
		return 0;
	}
	if (iParam1 == 31 || iParam1 == 32)
	{
		if (!func_226())
		{
			return 0;
		}
	}
	Local_44 = { Param0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_ID()) && !STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(unk_0x9B0761B4C3EB8BC7()))
		{
			Var1 = { NETWORK::NETWORK_ARE_HANDLES_THE_SAME(unk_0x9B0761B4C3EB8BC7(), 1) };
			if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(unk_0x9B0761B4C3EB8BC7())) > 1369f && !func_179())
			{
				return 0;
			}
		}
		if (!Global_111858.f_9081)
		{
			return 0;
		}
		if (func_17(0))
		{
			return 0;
		}
		if (func_175())
		{
			return 0;
		}
		if (func_225())
		{
			return 0;
		}
		if (Global_111847 != -1)
		{
			return 0;
		}
		if (func_33(func_54()))
		{
			if (func_169(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_ID()) && !bParam4)
		{
			if ((Var1.f_2 - Local_44.f_2) > 50f)
			{
				return 0;
			}
		}
		if (!func_224(iParam1))
		{
			return 0;
		}
		if (func_33(func_54()))
		{
			if (func_223(func_54()) == 4 || func_223(func_54()) == 5)
			{
				return 0;
			}
		}
		if (func_33(func_54()))
		{
			if (!func_222(iParam1, iParam2, 145))
			{
				return 0;
			}
		}
		if (!func_221(Global_111858.f_24991.f_43[iParam1]))
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
		if (func_220())
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
		if (!func_211(4))
		{
			return 0;
		}
		if (!func_148(5))
		{
			return 0;
		}
		if (func_210(iParam1, iParam2) && !bParam3)
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
		if ((iParam1 == 9 && (iParam2 == 2 || iParam2 == 5)) && !func_210(0, 0))
		{
			return 0;
		}
		if (Global_31114)
		{
			return 0;
		}
		if (func_224(30) && !func_210(30, 0))
		{
			if (iParam1 != 30)
			{
				if (SYSTEM::VDIST2(Var1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_33(func_54()))
		{
			iVar2 = 0;
			while (iVar2 < 3)
			{
				Var3 = { Global_111858.f_2359.f_539.f_2300[iVar2 /*3*/] };
				iVar4 = Global_111858.f_2359.f_539.f_2296[iVar2];
				if (func_209(iVar4))
				{
					if (func_187(iVar2))
					{
						if (!func_186(Var3, 0f, 0f, 0f, 0))
						{
							if (SYSTEM::VDIST2(NETWORK::NETWORK_ARE_HANDLES_THE_SAME(unk_0x9B0761B4C3EB8BC7(), 0), Var3) < (210f * 210f))
							{
								if (func_54() != iVar2)
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

bool func_186(struct<3> Param0, struct<3> Param1, bool bParam2)
{
	if (bParam2)
	{
		return (Param0.x == Param1.x && Param0.f_1 == Param1.f_1);
	}
	return ((Param0.x == Param1.x && Param0.f_1 == Param1.f_1) && Param0.f_2 == Param1.f_2);
}

bool func_187(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_111858.f_2359.f_539.f_2296[iParam0];
	return func_188(iVar0);
}

int func_188(int iParam0)
{
	return func_189(iParam0, 1);
}

int func_189(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_209(iParam0))
	{
		return 0;
	}
	func_190(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_190(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	func_191(func_202(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_191(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_201(iParam0, iParam1))
	{
		iVar0 = func_200(iParam1);
		iVar1 = func_198(iParam0);
		iVar2 = (func_198(iParam0) - func_198(iParam1));
		iVar3 = (func_200(iParam0) - func_200(iParam1));
		iVar4 = (func_197(iParam0) - func_197(iParam1));
		iVar5 = (func_196(iParam0) - func_196(iParam1));
		iVar6 = (func_195(iParam0) - func_195(iParam1));
		iVar7 = (func_194(iParam0) - func_194(iParam1));
	}
	else
	{
		iVar0 = func_200(iParam0);
		iVar1 = func_198(iParam1);
		iVar2 = (func_198(iParam1) - func_198(iParam0));
		iVar3 = (func_200(iParam1) - func_200(iParam0));
		iVar4 = (func_197(iParam1) - func_197(iParam0));
		iVar5 = (func_196(iParam1) - func_196(iParam0));
		iVar6 = (func_195(iParam1) - func_195(iParam0));
		iVar7 = (func_194(iParam1) - func_194(iParam0));
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
		iVar4 = (iVar4 + func_193(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = SYSTEM::ROUND(func_192(SYSTEM::TO_FLOAT(iVar0 + 1), 0f, 12f));
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

float func_192(float fParam0, float fParam1, float fParam2)
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

int func_193(int iParam0, int iParam1)
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

int func_194(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 20) & 63;
}

int func_195(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 14) & 63;
}

int func_196(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 9) & 31;
}

int func_197(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 4) & 31;
}

int func_198(bool bParam0)
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * func_199(unk_0xCE990E643CD9D0E5(iParam0, 31), -1, 1)) + 2011;
}

int func_199(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_200(int iParam0)
{
	return iParam0 & 15;
}

int func_201(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_209(iParam1) || !func_209(iParam0))
	{
		return 1;
	}
	iVar0 = func_198(iParam0);
	iVar1 = func_198(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_200(iParam0);
	iVar1 = func_200(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_197(iParam0);
	iVar1 = func_197(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_196(iParam0);
	iVar1 = func_196(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_195(iParam0);
	iVar1 = func_195(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_194(iParam0);
	iVar1 = func_194(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_202()
{
	var uVar0;
	
	func_208(&uVar0, CLOCK::GET_CLOCK_MINUTES());
	func_207(&uVar0, CLOCK::GET_CLOCK_HOURS());
	func_206(&uVar0, CLOCK::GET_CLOCK_DAY_OF_MONTH());
	func_205(&uVar0, CLOCK::GET_CLOCK_MONTH());
	func_204(&uVar0, CLOCK::GET_CLOCK_YEAR());
	func_203(&uVar0, SYSTEM::SHIFT_LEFT());
	return uVar0;
}

void func_203(var uParam0, int iParam1)
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

void func_204(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_205(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_200(*uParam0);
	iVar1 = func_198(*uParam0);
	if (iParam1 < 1 || iParam1 > func_193(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

void func_206(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_207(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_208(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

int func_209(int iParam0)
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
	iVar0 = func_194(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_195(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_196(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_198(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_200(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_197(iParam0);
	if (iVar5 < 1 || iVar5 > func_193(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_210(int iParam0, bool bParam1)
{
	if (unk_0xCE990E643CD9D0E5(Global_111858.f_24991.f_8[iParam0], iParam1))
	{
		return 1;
	}
	return 0;
}

int func_211(int iParam0)
{
	int iVar0;
	
	if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_ID()))
	{
		if (MISC::IS_BIT_SET(unk_0x9B0761B4C3EB8BC7()))
		{
			if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(unk_0x9B0761B4C3EB8BC7()))
			{
				iVar0 = func_54();
				if (!func_33(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(unk_0x9B0761B4C3EB8BC7())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(unk_0x9B0761B4C3EB8BC7())) || MISC::IS_PC_VERSION(unk_0x9B0761B4C3EB8BC7())) || PED::IS_PED_SHOOTING(unk_0x9B0761B4C3EB8BC7())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())) || PED::IS_PED_IN_COMBAT(unk_0x9B0761B4C3EB8BC7(), 0)) || func_219()) || Global_110905) || Global_30970) || func_218()) || func_77(8, -1)) || func_217()) || func_216()) || func_215()) || func_214()) || Global_111858.f_7684.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || func_219()) || Global_30970) || func_218()) || func_77(8, -1)) || func_215()) || func_217()) || func_216()) || func_214()) || Global_111858.f_7684.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(unk_0x9B0761B4C3EB8BC7())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(unk_0x9B0761B4C3EB8BC7())) || MISC::IS_PC_VERSION(unk_0x9B0761B4C3EB8BC7())) || PED::IS_PED_SHOOTING(unk_0x9B0761B4C3EB8BC7())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())) || PED::IS_PED_IN_COMBAT(unk_0x9B0761B4C3EB8BC7(), 0)) || func_219()) || Global_110905) || Global_30970) || func_218()) || func_77(8, -1)) || func_215()) || func_217()) || func_216()) || func_214()) || Global_111858.f_7684.f_919[iVar0] == 5) || Global_42178 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((MISC::IS_PC_VERSION(unk_0x9B0761B4C3EB8BC7()) || PED::IS_PED_SHOOTING(unk_0x9B0761B4C3EB8BC7())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PED::IS_PED_IN_COMBAT(unk_0x9B0761B4C3EB8BC7(), 0)) || func_219()) || Global_110905) || Global_30970) || func_218()) || func_77(8, -1)) || func_217()) || func_216()) || func_214()) || Global_111858.f_7684.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_219() || AUDIO::SET_SCRIPT_UPDATE_DOOR_AUDIO(PLAYER::PLAYER_ID()) > 0) || func_77(8, -1)) || func_214()) || func_213()) || Global_111858.f_7684.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_77(8, -1) || func_217()) || func_216()) || func_213()) || func_212())
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
							if ((((((((((((((PED::IS_PED_IN_COMBAT(unk_0x9B0761B4C3EB8BC7(), 0) || AUDIO::SET_SCRIPT_UPDATE_DOOR_AUDIO(PLAYER::PLAYER_ID()) > 0) || ENTITY::IS_ENTITY_IN_AIR(unk_0x9B0761B4C3EB8BC7())) || MISC::IS_PC_VERSION(unk_0x9B0761B4C3EB8BC7())) || PED::IS_PED_SHOOTING(unk_0x9B0761B4C3EB8BC7())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())) || func_219()) || Global_30970) || func_218()) || func_77(8, -1)) || func_216()) || func_215()) || func_214()) || Global_111858.f_7684.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((PED::IS_PED_IN_COMBAT(unk_0x9B0761B4C3EB8BC7(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) || !GRAPHICS::DRAW_SCALEFORM_MOVIE()) || ENTITY::IS_ENTITY_IN_AIR(unk_0x9B0761B4C3EB8BC7())) || MISC::IS_PC_VERSION(unk_0x9B0761B4C3EB8BC7())) || PED::IS_PED_SHOOTING(unk_0x9B0761B4C3EB8BC7())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || func_219()) || func_216()) || Global_110905) || Global_30970) || func_218()) || Global_42801) || func_77(8, -1)) || func_215()) || func_213()) || func_214()) || Global_111858.f_7684.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((PED::IS_PED_IN_COMBAT(unk_0x9B0761B4C3EB8BC7(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) || !GRAPHICS::DRAW_SCALEFORM_MOVIE()) || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0)) || ENTITY::IS_ENTITY_IN_AIR(unk_0x9B0761B4C3EB8BC7())) || SYSTEM::VDIST(unk_0x9B0761B4C3EB8BC7(), 1)) || MISC::IS_PC_VERSION(unk_0x9B0761B4C3EB8BC7())) || PED::IS_PED_SHOOTING(unk_0x9B0761B4C3EB8BC7())) || PED::IS_PED_DIVING(unk_0x9B0761B4C3EB8BC7())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())) || func_219()) || Global_110905) || Global_30970) || func_218()) || func_77(8, -1)) || func_215()) || func_213()) || func_217()) || func_216()) || func_214())
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

var func_212()
{
	return Global_98994.f_1;
}

int func_213()
{
	if (Global_95877 != -1)
	{
		return unk_0xCE990E643CD9D0E5(Global_89743[Global_95877 /*34*/].f_15, 13);
	}
	return 0;
}

int func_214()
{
	if (INTERIOR::GET_INTERIOR_AT_COORDS(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_215()
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

bool func_216()
{
	return Global_99007.f_352 > 0;
}

bool func_217()
{
	return Global_99007.f_351 > 0;
}

var func_218()
{
	return Global_1312896;
}

int func_219()
{
	if (!MISC::SET_BIT())
	{
		return Global_96433.f_44 == 1;
	}
	return 0;
}

int func_220()
{
	func_75();
	if (Global_8356[Global_19681 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_221(int iParam0)
{
	return func_201(func_202(), iParam0);
}

int func_222(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_54();
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

int func_223(int iParam0)
{
	if (!func_33(iParam0))
	{
		return 7;
	}
	return Global_111858.f_7684.f_919[iParam0];
}

bool func_224(int iParam0)
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_226())
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
		bVar0 = (bVar0 - 31);
		bVar1 = unk_0xCE990E643CD9D0E5(Global_111858.f_24991.f_1, bVar0);
	}
	return bVar1;
}

int func_225()
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

int func_226()
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
		if (unk_0xCE990E643CD9D0E5(VEHICLE::IS_THIS_MODEL_A_CAR(866), false))
		{
			return 1;
		}
	}
	return 0;
}

int func_227(int iParam0, int iParam1)
{
	if (Global_111858.f_10190[iParam0 /*12*/].f_5 == 1)
	{
		if (iParam1 == 1)
		{
		}
		return 1;
	}
	return 0;
}

void func_228()
{
	int iVar0;
	
	if (iLocal_109 && !iLocal_108)
	{
		func_3(0);
		if (Global_31209)
		{
			AUDIO::TRIGGER_MUSIC_EVENT("AC_STOP");
		}
		func_2();
		unk_0xAF7D4BF357E8B79E(Local_57 - Vector(10f, 10f, 10f), Local_57 + Vector(10f, 10f, 10f), 1, 1);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, iLocal_111, 1862763509);
		if (bLocal_55)
		{
			unk_0x74528AC0906CBABE(iLocal_78);
			unk_0x74528AC0906CBABE(iLocal_79);
		}
		if (MISC::IS_BIT_SET(bLocal_53))
		{
			if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_53))
			{
				PLAYER::SET_PLAYER_VEHICLE_DEFENSE_MODIFIER(bLocal_53, 4.442116E-43f, 1);
				PED::_0x2208438012482A1A(bLocal_53, 0);
			}
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&bLocal_53);
		}
		if (SYSTEM::VMAG(fLocal_85))
		{
			unk_0x93370FA10F15BE44(&fLocal_85);
		}
		if (SYSTEM::VMAG(uLocal_84[0]))
		{
			unk_0x93370FA10F15BE44(&(uLocal_84[0]));
		}
		if (MISC::IS_BIT_SET(bLocal_54))
		{
			if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_54))
			{
				PLAYER::SET_PLAYER_VEHICLE_DEFENSE_MODIFIER(bLocal_54, 4.442116E-43f, 1);
				if (!SYSTEM::VDIST(bLocal_54, 0))
				{
					PED::RESET_PED_LAST_VEHICLE(bLocal_54);
				}
				PED::REMOVE_PED_FROM_GROUP(bLocal_54);
				PED::_0x2208438012482A1A(bLocal_54, 0);
				PED::SET_PED_CAN_BE_TARGETTED(bLocal_54, true);
			}
		}
		iVar0 = 0;
		while (iVar0 < iLocal_91)
		{
			if (MISC::IS_BIT_SET(iLocal_91[iVar0]))
			{
				ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(iLocal_91[iVar0], 1, 1);
			}
			iVar0++;
		}
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(-499.9164f, 575.6557f, 124.5584f, -346.8641f, 483.3948f, 111.7201f, 74.0625f, 1);
		PED::REMOVE_SCENARIO_BLOCKING_AREAS();
	}
	func_229(-1);
	ENTITY::STOP_ENTITY_ANIM();
}

void func_229(int iParam0)
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_40();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_181())
	{
		func_233(iParam0);
		HUD::SET_MISSION_NAME(false, 0);
		Global_111849 = MISC::GET_GAME_TIMER();
		func_232(30000);
		StringCopy(&cVar0, func_231(Global_111847, 1), 64);
		if (func_39(Global_111847) > 0)
		{
			StringConCat(&cVar0, " Variation ", 64);
			StringIntConCat(&cVar0, Global_111846, 64);
		}
		STATS::PLAYSTATS_RANDOM_MISSION_DONE(&cVar0, Global_111844, (MISC::GET_GAME_TIMER() - Global_111845), 0);
	}
	else if (unk_0xCE990E643CD9D0E5(Global_111854, false) && Global_111858.f_24991.f_2 < 3)
	{
		VEHICLE::IS_VEHICLE_DRIVEABLE(&Global_111854, false);
	}
	func_230(&Global_31027);
	Global_111848 = 0;
	func_184(-1);
}

void func_230(var uParam0)
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

char* func_231(int iParam0, bool bParam1)
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

void func_232(int iParam0)
{
	Global_42182 = (MISC::GET_GAME_TIMER() + iParam0);
}

void func_233(int iParam0)
{
	func_234(iParam0, 0, func_239(iParam0));
}

void func_234(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_202();
	func_237(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_236(iParam0, &uVar0);
	Var1 = { func_235(&uVar0) };
}

struct<16> func_235(var uParam0)
{
	struct<16> Var0;
	int iVar1;
	
	StringCopy(&Var0, "", 64);
	iVar1 = func_196(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_195(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_194(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "  ", 64);
	iVar1 = func_197(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "/", 64);
	iVar1 = func_200(*uParam0);
	if (iVar1 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_198(*uParam0), 64);
	return Var0;
}

void func_236(int iParam0, var uParam1)
{
	Global_111858.f_24991.f_43[iParam0] = *uParam1;
}

void func_237(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_198(*uParam0);
	iVar1 = func_200(*uParam0);
	iVar2 = func_197(*uParam0);
	iVar3 = func_196(*uParam0);
	iVar4 = func_195(*uParam0);
	iVar5 = func_194(*uParam0);
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
	iVar6 = func_193(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_193(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_238(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_238(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_208(uParam0, iParam1);
	func_207(uParam0, iParam2);
	func_206(uParam0, iParam3);
	func_204(uParam0, iParam5);
	func_205(uParam0, iParam4);
	func_203(uParam0, iParam6);
}

int func_239(int iParam0)
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

