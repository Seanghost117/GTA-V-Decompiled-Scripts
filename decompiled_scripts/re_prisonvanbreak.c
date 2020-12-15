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
	struct<3> Local_43 = { 0, 0, 0 } ;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	bool bLocal_47 = 0;
	bool bLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	var uLocal_52 = 16;
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
	struct<3> Local_217 = { 0, 0, 0 } ;
	bool bLocal_218 = 0;
	bool bLocal_219 = 0;
	bool bLocal_220 = 0;
	bool bLocal_221 = 0;
	int iLocal_222[3] = { 0, 0, 0 };
	bool bLocal_223 = 0;
	bool bLocal_224 = 0;
	int iLocal_225[3] = { 0, 0, 0 };
	bool bLocal_226 = 0;
	bool bLocal_227 = 0;
	int iLocal_228 = 0;
	int iLocal_229 = 0;
	int iLocal_230 = 0;
	int iLocal_231 = 0;
	int iLocal_232 = 0;
	var uLocal_233[16] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	bool bLocal_234 = 0;
	bool bLocal_235 = 0;
	int iLocal_236 = 0;
	int iLocal_237 = 0;
	int iLocal_238 = 0;
	int iLocal_239 = 0;
	int iLocal_240 = 0;
	int iLocal_241 = 0;
	int iLocal_242 = 0;
	int iLocal_243 = 0;
	bool bLocal_244 = 0;
	struct<3> Local_245 = { 0, 0, 0 } ;
	int iLocal_246 = 0;
	int iLocal_247 = 0;
	int iLocal_248 = 0;
	int iLocal_249 = 0;
	int iLocal_250 = 0;
	int iLocal_251 = 0;
	int iLocal_252 = 0;
	int iLocal_253 = 0;
	int iLocal_254 = 0;
	int iLocal_255 = 0;
	bool bLocal_256 = 0;
	int iLocal_257 = 0;
	bool bLocal_258 = 0;
	bool bLocal_259 = 0;
	int iLocal_260 = 0;
	int iLocal_261 = 0;
	int iLocal_262 = 0;
	bool bLocal_263 = 0;
	int iLocal_264[2] = { 0, 0 };
	int iLocal_265 = 0;
	int iLocal_266 = 0;
	var uLocal_267[3] = { 0, 0, 0 };
	var uLocal_268[2] = { 0, 0 };
	struct<2> Local_269 = { 0, 5 } ;
	var uLocal_270 = 0;
	var uLocal_271 = 0;
	var uLocal_272 = 0;
	var uLocal_273 = 0;
	var uLocal_274 = 0;
	var uLocal_275 = 0;
	var uLocal_276 = 0;
	var uLocal_277 = 0;
	var uLocal_278 = 0;
	var uLocal_279 = 0;
	var uLocal_280 = 0;
	var uLocal_281 = 0;
	var uLocal_282 = 0;
	var uLocal_283 = 0;
	var uLocal_284 = 0;
	var uLocal_285 = 5;
	var uLocal_286 = 0;
	var uLocal_287 = 0;
	var uLocal_288 = 0;
	var uLocal_289 = 0;
	var uLocal_290 = 0;
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
	iLocal_18 = 3;
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
	Local_217 = { ScriptParam_269.f_1[0 /*3*/] };
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(11))
	{
		func_148();
	}
	if (func_95(Local_217, -1, 0, 0, 0))
	{
		func_92(-1);
	}
	else
	{
		ENTITY::STOP_ENTITY_ANIM();
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		if (BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE() || iLocal_246)
		{
			RECORDING::_0x208784099002BC30("RE_CR", 0);
			switch (iLocal_44)
			{
				case 0:
					if (unk_0xC2169C00B643278B(unk_0x9B0761B4C3EB8BC7(), Local_217, 100f, 100f, 100f, 0, 1, 0))
					{
						func_148();
					}
					if (iLocal_45)
					{
						iLocal_44 = 1;
					}
					else
					{
						func_91();
						iLocal_46 = 1;
					}
					break;
				
				case 1:
					PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
					func_90();
					func_88();
					if (!func_87())
					{
						func_84();
					}
					if (!bLocal_47)
					{
						func_73();
					}
					if (!bLocal_48 && !bLocal_256)
					{
						func_69();
					}
					if (iLocal_240 && !bLocal_47)
					{
						func_68(iLocal_222[0]);
						func_68(iLocal_222[1]);
						func_68(iLocal_222[2]);
					}
					if ((!iLocal_240 && !bLocal_256) && func_87())
					{
						func_67(iLocal_225[0], &(uLocal_233[0]), 1, 0.7f);
						func_67(iLocal_225[0], &(uLocal_233[1]), 5, 0.7f);
						func_67(iLocal_225[0], &(uLocal_233[2]), 0, 0.7f);
						func_67(iLocal_225[0], &(uLocal_233[3]), 4, 0.7f);
						func_67(iLocal_225[1], &(uLocal_233[4]), 1, 0.7f);
						func_67(iLocal_225[1], &(uLocal_233[5]), 5, 0.7f);
						func_67(iLocal_225[1], &(uLocal_233[6]), 0, 0.7f);
						func_67(iLocal_225[1], &(uLocal_233[7]), 4, 0.7f);
						func_67(iLocal_225[2], &(uLocal_233[8]), 1, 0.7f);
						func_67(iLocal_225[2], &(uLocal_233[9]), 5, 0.7f);
						func_67(iLocal_225[2], &(uLocal_233[10]), 0, 0.7f);
						func_67(iLocal_225[2], &(uLocal_233[11]), 4, 0.7f);
						func_67(bLocal_226, &(uLocal_233[12]), 1, 0.7f);
						func_67(bLocal_226, &(uLocal_233[13]), 5, 0.7f);
						func_67(bLocal_226, &(uLocal_233[14]), 0, 0.7f);
						func_67(bLocal_226, &(uLocal_233[15]), 4, 0.7f);
					}
					if (!iLocal_238)
					{
						func_65();
					}
					else
					{
						if (!bLocal_256)
						{
							func_64();
						}
						else if (!iLocal_253 && bLocal_47)
						{
							func_62();
						}
						if (!iLocal_257)
						{
							func_61();
						}
						func_60();
					}
					func_2();
					func_1();
					break;
			}
		}
		else
		{
			func_148();
		}
	}
}

void func_1()
{
}

void func_2()
{
	int iVar0;
	
	if (!iLocal_251)
	{
		if (PED::IS_PED_IN_ANY_POLICE_VEHICLE(iLocal_222[0], 0) || STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(iLocal_222[0]))
		{
			func_59(&uLocal_52, 4);
			iLocal_251 = 1;
		}
	}
	if (!bLocal_234)
	{
		if ((PED::IS_PED_IN_ANY_POLICE_VEHICLE(bLocal_218, 0) || STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_218)) || PED::IS_PED_HURT(bLocal_218))
		{
			unk_0x78FCB2E22C41B9D5(joaat("prop_security_case_01"));
			if (ENTITY::DOES_ENTITY_EXIST(joaat("prop_security_case_01")))
			{
				Local_245 = { PED::GET_DEAD_PED_PICKUP_COORDS(bLocal_218, 1.2f, 1.5f) };
				Local_245.f_2 = (Local_245.f_2 + 0.3f);
				iLocal_264[0] = OBJECT::CREATE_PICKUP_ROTATE(joaat("pickup_money_case"), Local_245 + Vector(-0.49f, 0f, 0f), -90f, 0f, 0f, 0, 5000, 2, true, joaat("prop_security_case_01"));
				if (!SYSTEM::VMAG(uLocal_268[0]))
				{
					uLocal_268[0] = func_57(iLocal_264[0]);
				}
				bLocal_234 = true;
				func_59(&uLocal_52, 5);
			}
		}
	}
	if (!bLocal_235)
	{
		if ((PED::IS_PED_IN_ANY_POLICE_VEHICLE(bLocal_219, 0) || STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_219)) || PED::IS_PED_HURT(bLocal_219))
		{
			unk_0x78FCB2E22C41B9D5(joaat("prop_security_case_01"));
			if (ENTITY::DOES_ENTITY_EXIST(joaat("prop_security_case_01")))
			{
				Local_245 = { PED::GET_DEAD_PED_PICKUP_COORDS(bLocal_219, 1.2f, 1.5f) };
				Local_245.f_2 = (Local_245.f_2 + 0.3f);
				iLocal_264[1] = OBJECT::CREATE_PICKUP_ROTATE(joaat("pickup_money_case"), Local_245 + Vector(-0.49f, 0f, 0f), -90f, 0f, 0f, 0, 5000, 2, true, joaat("prop_security_case_01"));
				if (!SYSTEM::VMAG(uLocal_268[1]))
				{
					uLocal_268[1] = func_57(iLocal_264[1]);
				}
				bLocal_235 = true;
				func_59(&uLocal_52, 6);
			}
		}
	}
	if (!bLocal_256)
	{
		if (!iLocal_248)
		{
			if (MISC::IS_BIT_SET(bLocal_218))
			{
				if (PED::IS_PED_IN_ANY_POLICE_VEHICLE(bLocal_218, 0) || STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_218))
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(bLocal_218, unk_0x9B0761B4C3EB8BC7(), true))
					{
						unk_0x93370FA10F15BE44(&iLocal_265);
						iLocal_248 = 1;
						bLocal_48 = true;
						PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_241, 1862763509);
						if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_219))
						{
							TASK::TASK_COMBAT_PED(bLocal_219, unk_0x9B0761B4C3EB8BC7(), 0, 16);
							PED::SET_PED_KEEP_TASK(bLocal_219, true);
							PED::REGISTER_TARGET(bLocal_219, unk_0x9B0761B4C3EB8BC7());
							PED::SET_PED_HIGHLY_PERCEPTIVE(bLocal_219, true);
							func_59(&uLocal_52, 5);
							func_56(&uLocal_52, 5, bLocal_219, "RECSBRobber1", 0, 1);
							func_39(&uLocal_52, "recsbau", "recsb_deadcr", 3, 0, 0, 0);
						}
					}
				}
			}
		}
		if (!iLocal_247)
		{
			if (MISC::IS_BIT_SET(bLocal_219))
			{
				if (PED::IS_PED_IN_ANY_POLICE_VEHICLE(bLocal_219, 0) || STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_219))
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(bLocal_219, unk_0x9B0761B4C3EB8BC7(), true))
					{
						unk_0x93370FA10F15BE44(&iLocal_266);
						iLocal_247 = 1;
						bLocal_48 = true;
						PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_241, 1862763509);
						if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_218))
						{
							TASK::TASK_COMBAT_PED(bLocal_218, unk_0x9B0761B4C3EB8BC7(), 0, 16);
							PED::SET_PED_KEEP_TASK(bLocal_218, true);
							PED::REGISTER_TARGET(bLocal_218, unk_0x9B0761B4C3EB8BC7());
							PED::SET_PED_HIGHLY_PERCEPTIVE(bLocal_218, true);
							func_39(&uLocal_52, "recsbau", "recsb_deadcr", 3, 0, 0, 0);
						}
					}
				}
			}
		}
		if (func_38() || !unk_0xC2169C00B643278B(unk_0x9B0761B4C3EB8BC7(), 310.6203f, 2642.854f, 43.5173f, 150f, 150f, 180f, 0, 1, 0))
		{
			if (STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_218) && STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_219))
			{
				if (func_38() && !unk_0xC2169C00B643278B(unk_0x9B0761B4C3EB8BC7(), Local_217, 50f, 50f, 50f, 0, 1, 0))
				{
					func_7();
				}
				if (bLocal_48 && !bLocal_47)
				{
					if (!unk_0xC2169C00B643278B(unk_0x9B0761B4C3EB8BC7(), 310.6203f, 2642.854f, 43.5173f, 150f, 150f, 180f, 0, 1, 0))
					{
						func_6(5);
						func_7();
					}
				}
			}
			else if (!unk_0xC2169C00B643278B(unk_0x9B0761B4C3EB8BC7(), 310.6203f, 2642.854f, 43.5173f, 200f, 200f, 180f, 0, 1, 0))
			{
				func_5();
			}
		}
	}
	if (bLocal_256)
	{
		if (func_38())
		{
			if (PED::IS_PED_IN_ANY_POLICE_VEHICLE(bLocal_218, 0) && PED::IS_PED_IN_ANY_POLICE_VEHICLE(bLocal_219, 0))
			{
				func_7();
			}
			if (bLocal_256)
			{
				if (MISC::IS_BIT_SET(bLocal_218))
				{
					if (!ENTITY::IS_ENTITY_AT_ENTITY(unk_0x9B0761B4C3EB8BC7(), bLocal_218, 150f, 150f, 150f, false, false, 0))
					{
						if (!bLocal_48)
						{
							func_6(6);
						}
						func_7();
					}
				}
				if (!MISC::IS_BIT_SET(bLocal_219))
				{
					if (!ENTITY::IS_ENTITY_AT_ENTITY(unk_0x9B0761B4C3EB8BC7(), bLocal_219, 150f, 150f, 150f, false, false, 0))
					{
						if (!bLocal_48)
						{
							func_6(6);
						}
						func_7();
					}
				}
			}
		}
	}
	else if (!iLocal_240 && !bLocal_47)
	{
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(418.2996f, 2650.597f, 42.84723f, 297.8981f, 2617.968f, 53.6412f, 49.6875f, 1);
		unk_0x78FCB2E22C41B9D5(joaat("ambulance"));
		STREAMING::REQUEST_ANIM_DICT("random@countrysiderobbery");
		if (((PED::IS_PED_IN_ANY_POLICE_VEHICLE(bLocal_218, 0) && PED::IS_PED_IN_ANY_POLICE_VEHICLE(bLocal_219, 0)) && ENTITY::DOES_ENTITY_EXIST(joaat("ambulance"))) && STREAMING::HAS_ANIM_DICT_LOADED("random@countrysiderobbery"))
		{
			unk_0x93370FA10F15BE44(&iLocal_265);
			unk_0x93370FA10F15BE44(&iLocal_266);
			func_59(&uLocal_52, 5);
			func_59(&uLocal_52, 6);
			iVar0 = 0;
			while (iVar0 < iLocal_222)
			{
				if (SYSTEM::VMAG(uLocal_267[iVar0]))
				{
					unk_0x93370FA10F15BE44(&(uLocal_267[iVar0]));
				}
				iVar0++;
			}
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_242, 1862763509);
			MISC::ENABLE_DISPATCH_SERVICE(5, true);
			MISC::ENABLE_DISPATCH_SERVICE(3, true);
			if (unk_0xC2169C00B643278B(unk_0x9B0761B4C3EB8BC7(), 267.94f, 2700.48f, 43.6f, 15f, 15f, 15f, 0, 1, 0))
			{
				iLocal_227 = VEHICLE::CREATE_VEHICLE(joaat("ambulance"), 267.94f, 2700.48f, 43.1f, 180f, true, true, false);
			}
			else
			{
				iLocal_227 = VEHICLE::CREATE_VEHICLE(joaat("ambulance"), 185.94f, 2603.48f, 46.9f, 0f, true, true, false);
			}
			VEHICLE::SET_VEHICLE_SIREN(iLocal_227, true);
			bLocal_220 = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_227, 20, joaat("s_m_m_paramedic_01"), -1, true, true);
			bLocal_221 = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_227, 20, joaat("s_m_m_paramedic_01"), 0, true, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(bLocal_220, 17, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(bLocal_221, 17, true);
			PLAYER::SET_PLAYER_VEHICLE_DEFENSE_MODIFIER(bLocal_220, 2.592402E-43f, 1);
			PLAYER::SET_PLAYER_VEHICLE_DEFENSE_MODIFIER(bLocal_221, 2.592402E-43f, 1);
			if (MISC::IS_BIT_SET(bLocal_218))
			{
				TASK::OPEN_SEQUENCE_TASK(&iLocal_243);
				TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, iLocal_227, 307.1379f, 2640.042f, 43.4639f, 18f, 0, joaat("ambulance"), 786475, 5f, 5f);
				TASK::TASK_GO_TO_ENTITY(0, bLocal_218, -1, 2f, 1f, 10f, 0);
				TASK::TASK_LOOK_AT_ENTITY(0, bLocal_218, -1, 2052, 2);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, bLocal_218, 0);
				TASK::TASK_PLAY_ANIM(0, "random@countrysiderobbery", "enter", 2f, -2f, -1, 0, 0f, false, false, false);
				TASK::TASK_PLAY_ANIM(0, "random@countrysiderobbery", "base", 2f, -2f, -1, 1, 0f, false, false, false);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_243);
				AUDIO::STOP_SCRIPTED_CONVERSATION(bLocal_220, iLocal_243);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_243);
				PED::SET_PED_KEEP_TASK(bLocal_220, true);
			}
			if (MISC::IS_BIT_SET(bLocal_219))
			{
				TASK::OPEN_SEQUENCE_TASK(&iLocal_243);
				TASK::TASK_PAUSE(0, 15000);
				TASK::TASK_GO_TO_ENTITY(0, bLocal_219, -1, 2f, 1f, 10f, 0);
				TASK::TASK_LOOK_AT_ENTITY(0, bLocal_219, -1, 2052, 2);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, bLocal_219, 0);
				TASK::TASK_PLAY_ANIM(0, "random@countrysiderobbery", "enter", 2f, -2f, -1, 0, 0f, false, false, false);
				TASK::TASK_PLAY_ANIM(0, "random@countrysiderobbery", "base", 2f, -2f, -1, 1, 0f, false, false, false);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_243);
				AUDIO::STOP_SCRIPTED_CONVERSATION(bLocal_221, iLocal_243);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_243);
				PED::SET_PED_KEEP_TASK(bLocal_221, true);
			}
			if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(iLocal_222[0]) && MISC::IS_BIT_SET(bLocal_226))
			{
				PLAYER::SET_PLAYER_VEHICLE_DEFENSE_MODIFIER(iLocal_222[0], 2.592402E-43f, 1);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_243);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, NETWORK::NETWORK_ARE_HANDLES_THE_SAME(bLocal_226, 0) + Vector(0f, 5f, 0f), 1f, -1, 0.25f, false, 40000f);
				TASK::TASK_SWAP_WEAPON(0, false);
				TASK::TASK_PLAY_ANIM(0, "random@countrysiderobbery", "idle_a", 2f, -2f, -1, 0, 0f, false, false, false);
				TASK::TASK_PLAY_ANIM(0, "random@countrysiderobbery", "idle_d", 2f, -2f, -1, 1, 0f, false, false, false);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_243);
				AUDIO::STOP_SCRIPTED_CONVERSATION(iLocal_222[0], iLocal_243);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_243);
				PED::SET_PED_KEEP_TASK(iLocal_222[0], true);
			}
			if (!PED::IS_PED_IN_ANY_POLICE_VEHICLE(iLocal_222[1], 0) && MISC::IS_BIT_SET(bLocal_223))
			{
				PLAYER::SET_PLAYER_VEHICLE_DEFENSE_MODIFIER(iLocal_222[1], 2.592402E-43f, 1);
				ENTITY::SET_ENTITY_HEALTH(iLocal_222[1], joaat("weapon_unarmed"), 1);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_243);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, NETWORK::NETWORK_ARE_HANDLES_THE_SAME(bLocal_223, 0) + Vector(0f, 1f, 0f), 2f, -1, 0.25f, false, 40000f);
				TASK::TASK_LOOK_AT_COORD(0, NETWORK::NETWORK_ARE_HANDLES_THE_SAME(bLocal_223, 0), -1, 2052, 2);
				TASK::TASK_TURN_PED_TO_FACE_COORD(0, NETWORK::NETWORK_ARE_HANDLES_THE_SAME(bLocal_223, 0), 0);
				TASK::TASK_PLAY_ANIM(0, "random@countrysiderobbery", "enter", 2f, -2f, -1, 0, 0f, false, false, false);
				TASK::TASK_PLAY_ANIM(0, "random@countrysiderobbery", "base", 2f, -2f, -1, 1, 0f, false, false, false);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_243);
				AUDIO::STOP_SCRIPTED_CONVERSATION(iLocal_222[1], iLocal_243);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_243);
				PED::SET_PED_KEEP_TASK(iLocal_222[1], true);
			}
			if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(iLocal_222[2]) && MISC::IS_BIT_SET(bLocal_219))
			{
				PLAYER::SET_PLAYER_VEHICLE_DEFENSE_MODIFIER(iLocal_222[2], 2.592402E-43f, 1);
				if (MISC::IS_BIT_SET(bLocal_219))
				{
					TASK::OPEN_SEQUENCE_TASK(&iLocal_243);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, NETWORK::NETWORK_ARE_HANDLES_THE_SAME(bLocal_219, 0) + Vector(0f, 1f, 0f), 1f, -1, 0.25f, false, 40000f);
					TASK::TASK_SWAP_WEAPON(0, false);
					TASK::TASK_PLAY_ANIM(0, "random@countrysiderobbery", "idle_d", 2f, -2f, -1, 0, 0f, false, false, false);
					TASK::TASK_PLAY_ANIM(0, "random@countrysiderobbery", "idle_a", 2f, -2f, -1, 1, 0f, false, false, false);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_243);
					AUDIO::STOP_SCRIPTED_CONVERSATION(iLocal_222[2], iLocal_243);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_243);
				}
				PED::SET_PED_KEEP_TASK(iLocal_222[2], true);
			}
			func_3();
			SYSTEM::WAIT(0);
			if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(iLocal_222[0]))
			{
				func_56(&uLocal_52, 4, iLocal_222[0], "RECSBCop1", 0, 1);
				func_39(&uLocal_52, "recsbau", "recsb_ntouch", 4, 0, 0, 0);
			}
			else if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(iLocal_222[1]))
			{
				AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_222[1], "S_M_Y_RANGER_01_WHITE_FULL_01");
				func_59(&uLocal_52, 4);
				func_56(&uLocal_52, 4, iLocal_222[1], "RECSBCop1", 0, 1);
				func_39(&uLocal_52, "recsbau", "recsb_ntouch", 4, 0, 0, 0);
			}
			else if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(iLocal_222[2]))
			{
				AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_222[2], "S_M_Y_RANGER_01_WHITE_FULL_01");
				func_59(&uLocal_52, 4);
				func_56(&uLocal_52, 4, iLocal_222[2], "RECSBCop1", 0, 1);
				func_39(&uLocal_52, "recsbau", "recsb_ntouch", 4, 0, 0, 0);
			}
			func_3();
			SYSTEM::WAIT(0);
			if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(iLocal_222[0]))
			{
				func_56(&uLocal_52, 4, iLocal_222[0], "RECSBCop1", 0, 1);
				func_39(&uLocal_52, "recsbau", "recsb_ntouch", 4, 0, 0, 0);
			}
			else if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(iLocal_222[1]))
			{
				AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_222[1], "S_M_Y_RANGER_01_WHITE_FULL_01");
				func_59(&uLocal_52, 4);
				func_56(&uLocal_52, 4, iLocal_222[1], "RECSBCop1", 0, 1);
				func_39(&uLocal_52, "recsbau", "recsb_ntouch", 4, 0, 0, 0);
			}
			else if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(iLocal_222[2]))
			{
				AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_222[2], "S_M_Y_RANGER_01_WHITE_FULL_01");
				func_59(&uLocal_52, 4);
				func_56(&uLocal_52, 4, iLocal_222[2], "RECSBCop1", 0, 1);
				func_39(&uLocal_52, "recsbau", "recsb_ntouch", 4, 0, 0, 0);
			}
			SYSTEM::SETTIMERB(0);
			iLocal_240 = 1;
		}
	}
	if (iLocal_238 && !func_87())
	{
		func_5();
	}
	if (((((PED::IS_PED_IN_ANY_POLICE_VEHICLE(bLocal_218, 0) && PED::IS_PED_IN_ANY_POLICE_VEHICLE(bLocal_219, 0)) && PED::IS_PED_IN_ANY_POLICE_VEHICLE(iLocal_222[0], 0)) && PED::IS_PED_IN_ANY_POLICE_VEHICLE(iLocal_222[1], 0)) && PED::IS_PED_IN_ANY_POLICE_VEHICLE(iLocal_222[2], 0)) && (func_38() || !unk_0xC2169C00B643278B(unk_0x9B0761B4C3EB8BC7(), 310.6203f, 2642.854f, 43.5173f, 200f, 200f, 180f, 0, 1, 0)))
	{
		PLAYER::SET_PLAYER_WANTED_LEVEL_NO_DROP(PLAYER::PLAYER_ID(), 2, false);
		PLAYER::SET_WANTED_LEVEL_DIFFICULTY(PLAYER::PLAYER_ID(), 0f);
		func_7();
	}
}

void func_3()
{
	Global_19871 = 0;
	func_4();
}

void func_4()
{
	SYSTEM::ROUND();
	Global_22016 = 0;
	if (ENTITY::IS_ENTITY_DEAD())
	{
		unk_0xBE4122AC23440E7D(0);
		Global_21005 = 6;
	}
}

void func_5()
{
	func_148();
}

void func_6(int iParam0)
{
	Global_111844 = iParam0;
}

void func_7()
{
	if (!bLocal_47)
	{
	}
	while (func_37())
	{
		SYSTEM::WAIT(0);
	}
	while (!func_36())
	{
		SYSTEM::WAIT(0);
	}
	func_11(-1, 0);
	func_8();
	func_148();
}

void func_8()
{
	func_9();
}

int func_9()
{
	if (func_10(0))
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

bool func_10(bool bParam0)
{
	if (!bParam0 && INTERIOR::GET_INTERIOR_AT_COORDS(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xCE990E643CD9D0E5(Global_77081, 0);
}

void func_11(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_34();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= func_33(iParam0))
	{
		func_32(iParam0, iParam1);
		if (!func_31(51))
		{
			func_21("RE_REWARD", 1, 0, 4000, 10000, func_24(), 0, 138, 0);
			func_20(51);
		}
		if (func_19(iParam0))
		{
			Global_111858.f_24991.f_2 = 3;
		}
		if (func_18(iParam0, iParam1) != 322)
		{
			func_12(func_18(iParam0, iParam1), Local_43.x, Local_43.f_1);
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

void func_12(int iParam0, var uParam1, var uParam2)
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
		func_16((891 + iParam0), 1, -1, 1);
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
		func_13();
	}
}

void func_13()
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
		func_15(13, SYSTEM::FLOOR(Global_111858.f_10190.f_3853));
	}
	if (!DATAFILE::DATAFILE_IS_SAVE_PENDING())
	{
		if (!Global_76833)
		{
			if (func_14() == 2 == 0 && !MISC::SET_BIT())
			{
				if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE())
				{
					Global_111592 = 0;
				}
				if (!Global_61717)
				{
					func_9();
				}
			}
		}
	}
}

int func_14()
{
	return Global_30968;
}

int func_15(int iParam0, bool bParam1)
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

var func_16(int iParam0, char* sParam1, int iParam2, int iParam3)
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
		iParam2 = func_17();
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

int func_17()
{
	return Global_1312763;
}

int func_18(int iParam0, int iParam1)
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

int func_19(int iParam0)
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

void func_20(int iParam0)
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

void func_21(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_22(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_22(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
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
		func_23();
	}
}

void func_23()
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

int func_24()
{
	func_25();
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

void func_25()
{
	int iVar0;
	
	if (MISC::IS_BIT_SET(unk_0x9B0761B4C3EB8BC7()))
	{
		if (func_29(Global_111858.f_2359.f_539.f_4321) != MISC::GET_MODEL_DIMENSIONS(unk_0x9B0761B4C3EB8BC7()))
		{
			iVar0 = func_28(unk_0x9B0761B4C3EB8BC7());
			if (func_27(iVar0) && (!func_26(14) || Global_110809))
			{
				if (Global_111858.f_2359.f_539.f_4321 != iVar0 && func_27(Global_111858.f_2359.f_539.f_4321))
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

bool func_26(int iParam0)
{
	return Global_41631 == iParam0;
}

bool func_27(int iParam0)
{
	return iParam0 < 3;
}

int func_28(bool bParam0)
{
	int iVar0;
	void fVar1;
	
	if (MISC::IS_BIT_SET(uParam0))
	{
		fVar1 = MISC::GET_MODEL_DIMENSIONS(bParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_29(iVar0) == fVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_29(int iParam0)
{
	if (func_27(iParam0))
	{
		return func_30(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_30(int iParam0)
{
	return Global_1848[iParam0 /*29*/];
}

int func_31(int iParam0)
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

void func_32(int iParam0, int iParam1)
{
	unk_0xBE20AB8238688965(&(Global_111858.f_24991.f_8[iParam0]), iParam1);
}

int func_33(int iParam0)
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

int func_34()
{
	struct<16> Var0;
	var uVar1;
	
	StringCopy(&Var0, TASK::IS_PED_BEING_ARRESTED(), 64);
	uVar1 = func_35(Var0);
	return uVar1;
}

int func_35(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
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

int func_36()
{
	return 1;
}

int func_37()
{
	if (Global_21005 != 0 || ENTITY::IS_ENTITY_DEAD())
	{
		return 1;
	}
	return 0;
}

int func_38()
{
	if (bLocal_234 || bLocal_235)
	{
		if (bLocal_234 && bLocal_235)
		{
			if (!SYSTEM::VMAG(uLocal_268[0]) && !SYSTEM::VMAG(uLocal_268[1]))
			{
				return 1;
			}
		}
		if (bLocal_234 && !bLocal_235)
		{
			if (!SYSTEM::VMAG(uLocal_268[0]))
			{
				return 1;
			}
		}
		if (bLocal_235 && !bLocal_234)
		{
			if (!SYSTEM::VMAG(uLocal_268[1]))
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

int func_39(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_55(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_40(sParam2, iParam3, 0);
}

int func_40(char* sParam0, int iParam1, bool bParam2)
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
					func_54();
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
		if (func_53(8, -1))
		{
			return 0;
		}
		Global_21081 = { Global_21075 };
		func_52();
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
				func_50();
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
				if (func_49())
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
			if (func_48())
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
			func_47();
			Global_21015 = bParam2;
		}
		Global_21007 = iParam1;
		StringCopy(&Global_20624, sParam0, 24);
		Global_19871 = 0;
		func_46();
		func_41();
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
		func_54();
	}
	return 0;
}

void func_41()
{
	if (!func_42())
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

int func_42()
{
	if (!Global_262145.f_28160)
	{
		return 0;
	}
	if (!Global_76833)
	{
		return 0;
	}
	if (PLAYER::PLAYER_ID() == func_45())
	{
		return 0;
	}
	if (func_43(PLAYER::PLAYER_ID()))
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

bool func_43(int iParam0)
{
	return func_44(iParam0, 20);
}

bool func_44(int iParam0, int iParam1)
{
	return unk_0xCE990E643CD9D0E5(Global_1630317[iParam0 /*595*/].f_11.f_4, iParam1);
}

int func_45()
{
	return -1;
}

void func_46()
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

void func_47()
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

int func_48()
{
	if (Global_19681.f_1 == 1 || Global_19681.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_49()
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

void func_50()
{
	if (func_26(14))
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
		Global_19681 = func_51();
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

int func_51()
{
	func_25();
	return Global_111858.f_2359.f_539.f_4321;
}

void func_52()
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

bool func_53(int iParam0, int iParam1)
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

void func_54()
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

void func_55(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

void func_56(var uParam0, int iParam1, bool bParam2, char* sParam3, int iParam4, int iParam5)
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

bool func_57(int iParam0)
{
	bool bVar0;
	
	if (!OBJECT::DOES_PICKUP_EXIST(iParam0))
	{
		return 0;
	}
	bVar0 = HUD::ADD_BLIP_FOR_PICKUP(iParam0);
	HUD::SET_BLIP_SCALE(bVar0, func_58(MISC::SET_BIT(), 0.7f, 0.7f));
	return bVar0;
}

float func_58(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_59(var uParam0, int iParam1)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

void func_60()
{
	if (!iLocal_254)
	{
		if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_218))
		{
			if (SYSTEM::VDIST(bLocal_218, 0))
			{
				bLocal_263 = ENTITY::GET_ENTITY_MODEL(bLocal_218, 0);
				if (((((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(bLocal_263, unk_0x9B0761B4C3EB8BC7(), true) && SYSTEM::VDIST(unk_0x9B0761B4C3EB8BC7(), 0)) && ENTITY::IS_ENTITY_AT_ENTITY(bLocal_263, unk_0x9B0761B4C3EB8BC7(), 10f, 10f, 10f, false, true, 0)) || PED::IS_PED_BEING_JACKED(bLocal_218)) || unk_0xE0B3BC41DDA88DF0(unk_0x9B0761B4C3EB8BC7(), bLocal_263, 0)) || WEAPON::HAS_VEHICLE_GOT_PROJECTILE_ATTACHED(unk_0x9B0761B4C3EB8BC7(), bLocal_263, joaat("weapon_stickybomb"), -1))
				{
					PED::_0x2208438012482A1A(bLocal_218, 0);
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_241, 1862763509);
					if (SYSTEM::VDIST(bLocal_218, 0))
					{
						unk_0x92BD213E6A0E666B(bLocal_218, joaat("weapon_microsmg"), 200, 1, 1);
						ENTITY::SET_ENTITY_HEALTH(bLocal_218, joaat("weapon_microsmg"), 1);
						TASK::TASK_DRIVE_BY(bLocal_218, unk_0x9B0761B4C3EB8BC7(), 0, 0f, 0f, 0f, 200f, 50, false, -753768974);
					}
					if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_219))
					{
						if (SYSTEM::VDIST(bLocal_219, 0))
						{
							PED::_0x2208438012482A1A(bLocal_219, 0);
							unk_0x92BD213E6A0E666B(bLocal_219, joaat("weapon_microsmg"), 200, 1, 1);
							ENTITY::SET_ENTITY_HEALTH(bLocal_219, joaat("weapon_microsmg"), 1);
							TASK::TASK_DRIVE_BY(bLocal_219, unk_0x9B0761B4C3EB8BC7(), 0, 0f, 0f, 0f, 200f, 50, false, -753768974);
						}
					}
					bLocal_48 = true;
					iLocal_254 = 1;
				}
			}
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(bLocal_218, unk_0x9B0761B4C3EB8BC7(), true))
			{
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_241, 1862763509);
				if ((SYSTEM::VDIST(bLocal_218, 0) && SYSTEM::VDIST(unk_0x9B0761B4C3EB8BC7(), 0)) && !PED::IS_PED_IN_ANY_POLICE_VEHICLE(bLocal_263, 0))
				{
					if (ENTITY::IS_ENTITY_AT_ENTITY(bLocal_263, unk_0x9B0761B4C3EB8BC7(), 10f, 10f, 10f, false, true, 0))
					{
						PED::_0x2208438012482A1A(bLocal_218, 0);
						unk_0x92BD213E6A0E666B(bLocal_218, joaat("weapon_microsmg"), 200, 1, 1);
						ENTITY::SET_ENTITY_HEALTH(bLocal_218, joaat("weapon_microsmg"), 1);
						TASK::TASK_DRIVE_BY(bLocal_218, unk_0x9B0761B4C3EB8BC7(), 0, 0f, 0f, 0f, 200f, 50, false, -753768974);
						bLocal_48 = true;
						iLocal_254 = 1;
					}
				}
				if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_219))
				{
					if ((SYSTEM::VDIST(bLocal_219, 0) && SYSTEM::VDIST(unk_0x9B0761B4C3EB8BC7(), 0)) && !PED::IS_PED_IN_ANY_POLICE_VEHICLE(bLocal_263, 0))
					{
						if (ENTITY::IS_ENTITY_AT_ENTITY(bLocal_263, unk_0x9B0761B4C3EB8BC7(), 10f, 10f, 10f, false, true, 0))
						{
							PED::_0x2208438012482A1A(bLocal_219, 0);
							unk_0x92BD213E6A0E666B(bLocal_219, joaat("weapon_microsmg"), 200, 1, 1);
							ENTITY::SET_ENTITY_HEALTH(bLocal_219, joaat("weapon_microsmg"), 1);
							TASK::TASK_DRIVE_BY(bLocal_219, unk_0x9B0761B4C3EB8BC7(), 0, 0f, 0f, 0f, 200f, 50, false, -753768974);
							bLocal_48 = true;
							iLocal_254 = 1;
						}
					}
				}
			}
		}
		if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_219))
		{
			if (SYSTEM::VDIST(bLocal_219, 0))
			{
				bLocal_263 = ENTITY::GET_ENTITY_MODEL(bLocal_219, 0);
				if (((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(bLocal_263, unk_0x9B0761B4C3EB8BC7(), true) || PED::IS_PED_BEING_JACKED(bLocal_219)) || unk_0xE0B3BC41DDA88DF0(unk_0x9B0761B4C3EB8BC7(), bLocal_263, 0)) || WEAPON::HAS_VEHICLE_GOT_PROJECTILE_ATTACHED(unk_0x9B0761B4C3EB8BC7(), bLocal_263, joaat("weapon_stickybomb"), -1))
				{
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_241, 1862763509);
					if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_218))
					{
						if ((SYSTEM::VDIST(bLocal_218, 0) && SYSTEM::VDIST(unk_0x9B0761B4C3EB8BC7(), 0)) && !PED::IS_PED_IN_ANY_POLICE_VEHICLE(bLocal_263, 0))
						{
							if (ENTITY::IS_ENTITY_AT_ENTITY(bLocal_263, unk_0x9B0761B4C3EB8BC7(), 10f, 10f, 10f, false, true, 0))
							{
								PED::_0x2208438012482A1A(bLocal_218, 0);
								unk_0x92BD213E6A0E666B(bLocal_218, joaat("weapon_microsmg"), 200, 1, 1);
								ENTITY::SET_ENTITY_HEALTH(bLocal_218, joaat("weapon_microsmg"), 1);
								TASK::TASK_DRIVE_BY(bLocal_218, unk_0x9B0761B4C3EB8BC7(), 0, 0f, 0f, 0f, 200f, 50, false, -753768974);
								bLocal_48 = true;
								iLocal_254 = 1;
							}
						}
					}
					if ((SYSTEM::VDIST(bLocal_219, 0) && SYSTEM::VDIST(unk_0x9B0761B4C3EB8BC7(), 0)) && !PED::IS_PED_IN_ANY_POLICE_VEHICLE(bLocal_263, 0))
					{
						if (ENTITY::IS_ENTITY_AT_ENTITY(bLocal_263, unk_0x9B0761B4C3EB8BC7(), 10f, 10f, 10f, false, true, 0))
						{
							PED::_0x2208438012482A1A(bLocal_219, 0);
							unk_0x92BD213E6A0E666B(bLocal_219, joaat("weapon_microsmg"), 200, 1, 1);
							ENTITY::SET_ENTITY_HEALTH(bLocal_219, joaat("weapon_microsmg"), 1);
							TASK::TASK_DRIVE_BY(bLocal_219, unk_0x9B0761B4C3EB8BC7(), 0, 0f, 0f, 0f, 200f, 50, false, -753768974);
							bLocal_48 = true;
							iLocal_254 = 1;
						}
					}
				}
			}
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(bLocal_219, unk_0x9B0761B4C3EB8BC7(), true))
			{
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_241, 1862763509);
				if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_218))
				{
					if ((SYSTEM::VDIST(bLocal_218, 0) && SYSTEM::VDIST(unk_0x9B0761B4C3EB8BC7(), 0)) && !PED::IS_PED_IN_ANY_POLICE_VEHICLE(bLocal_263, 0))
					{
						if (ENTITY::IS_ENTITY_AT_ENTITY(bLocal_263, unk_0x9B0761B4C3EB8BC7(), 10f, 10f, 10f, false, true, 0))
						{
							unk_0x92BD213E6A0E666B(bLocal_218, joaat("weapon_microsmg"), 200, 1, 1);
							ENTITY::SET_ENTITY_HEALTH(bLocal_218, joaat("weapon_microsmg"), 1);
							TASK::TASK_DRIVE_BY(bLocal_218, unk_0x9B0761B4C3EB8BC7(), 0, 0f, 0f, 0f, 200f, 50, false, -753768974);
							bLocal_48 = true;
							iLocal_254 = 1;
						}
					}
				}
				if ((SYSTEM::VDIST(bLocal_219, 0) && SYSTEM::VDIST(unk_0x9B0761B4C3EB8BC7(), 0)) && !PED::IS_PED_IN_ANY_POLICE_VEHICLE(bLocal_263, 0))
				{
					if (ENTITY::IS_ENTITY_AT_ENTITY(bLocal_263, unk_0x9B0761B4C3EB8BC7(), 10f, 10f, 10f, false, true, 0))
					{
						unk_0x92BD213E6A0E666B(bLocal_219, joaat("weapon_microsmg"), 200, 1, 1);
						ENTITY::SET_ENTITY_HEALTH(bLocal_219, joaat("weapon_microsmg"), 1);
						TASK::TASK_DRIVE_BY(bLocal_219, unk_0x9B0761B4C3EB8BC7(), 0, 0f, 0f, 0f, 200f, 50, false, -753768974);
						bLocal_48 = true;
						iLocal_254 = 1;
					}
				}
			}
		}
	}
}

void func_61()
{
	if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_218) && !PED::IS_PED_IN_ANY_POLICE_VEHICLE(bLocal_226, 0))
	{
		if (!VEHICLE::_0x639431E895B9AA57(bLocal_218, bLocal_226, -1, false, false) && !VEHICLE::_0x639431E895B9AA57(bLocal_218, bLocal_226, false, false, false))
		{
			TASK::TASK_SMART_FLEE_COORD(bLocal_218, Local_217, 1000f, -1, false, false);
			PED::SET_PED_KEEP_TASK(bLocal_218, true);
			iLocal_257 = 1;
		}
	}
	if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_219) && !PED::IS_PED_IN_ANY_POLICE_VEHICLE(bLocal_226, 0))
	{
		if (!VEHICLE::_0x639431E895B9AA57(bLocal_219, bLocal_226, -1, false, false) && !VEHICLE::_0x639431E895B9AA57(bLocal_219, bLocal_226, false, false, false))
		{
			TASK::TASK_SMART_FLEE_COORD(bLocal_219, Local_217, 1000f, -1, false, false);
			PED::SET_PED_KEEP_TASK(bLocal_219, true);
			iLocal_257 = 1;
		}
	}
}

void func_62()
{
	if (!PED::IS_PED_IN_ANY_POLICE_VEHICLE(bLocal_218, 0))
	{
		Local_245 = { NETWORK::NETWORK_ARE_HANDLES_THE_SAME(bLocal_218, 1) };
	}
	else if (!PED::IS_PED_IN_ANY_POLICE_VEHICLE(bLocal_219, 0))
	{
		Local_245 = { NETWORK::NETWORK_ARE_HANDLES_THE_SAME(bLocal_219, 1) };
	}
	Local_245.f_2 = (Local_245.f_2 - 0.11f);
	if (!PED::IS_PED_IN_ANY_POLICE_VEHICLE(bLocal_218, 0))
	{
		SYSTEM::SETTIMERA(0);
		if (!bLocal_48)
		{
			func_3();
			SYSTEM::WAIT(0);
			if (!PED::IS_PED_IN_ANY_POLICE_VEHICLE(bLocal_218, 0))
			{
				func_63(&uLocal_52, "recsbau", "recsb_thanxa", "recsb_thanxa_3", 4, 0, 0);
			}
			else if (!PED::IS_PED_IN_ANY_POLICE_VEHICLE(bLocal_219, 0))
			{
				func_59(&uLocal_52, 5);
				func_56(&uLocal_52, 5, bLocal_219, "RECSBRobber1", 0, 1);
				func_63(&uLocal_52, "recsbau", "recsb_thanxa", "recsb_thanxa_3", 4, 0, 0);
			}
			OBJECT::CREATE_MONEY_PICKUPS(OBJECT::GET_SAFE_PICKUP_COORDS(Local_245, 1.2f, 1.5f), 1000, 5, 0);
			iLocal_253 = 1;
		}
	}
	if (!PED::IS_PED_IN_ANY_POLICE_VEHICLE(bLocal_219, 0) && !PED::IS_PED_IN_ANY_POLICE_VEHICLE(bLocal_226, 0))
	{
		if (unk_0xE0B3BC41DDA88DF0(bLocal_219, bLocal_226, 0))
		{
			SYSTEM::SETTIMERA(0);
			if (!PED::IS_PED_IN_ANY_POLICE_VEHICLE(bLocal_218, 0))
			{
			}
			else if (!PED::IS_PED_IN_ANY_POLICE_VEHICLE(bLocal_219, 0))
			{
			}
			iLocal_253 = 1;
		}
	}
}

int func_63(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_55(uParam0, 145, sParam1, iParam5, iParam6, 0);
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
	return func_40(sParam2, iParam4, 0);
}

void func_64()
{
	if (!bLocal_256)
	{
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(418.2996f, 2650.597f, 42.84723f, 297.8981f, 2617.968f, 53.6412f, 49.6875f, 1);
		if (iLocal_260)
		{
			if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_218))
			{
				if (PED::IS_PED_JACKING(bLocal_218))
				{
					func_3();
					SYSTEM::WAIT(0);
					func_39(&uLocal_52, "recsbau", "recsb_jack", 3, 0, 0, 0);
					iLocal_260 = 1;
				}
			}
			if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_219))
			{
				if (PED::IS_PED_JACKING(bLocal_219))
				{
					func_3();
					SYSTEM::WAIT(0);
					func_59(&uLocal_52, 5);
					func_56(&uLocal_52, 5, bLocal_219, "RECSBRobber1", 0, 1);
					func_39(&uLocal_52, "recsbau", "recsb_jack", 3, 0, 0, 0);
					iLocal_260 = 1;
				}
			}
		}
		if (iLocal_239 == 1)
		{
			if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_218) && !PED::IS_PED_IN_ANY_POLICE_VEHICLE(bLocal_226, 0))
			{
				if (unk_0xE0B3BC41DDA88DF0(bLocal_218, bLocal_226, 0))
				{
					PED::SET_PED_FLEE_ATTRIBUTES(bLocal_218, 2, true);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_243);
					TASK::TASK_VEHICLE_MISSION_PED_TARGET(0, bLocal_226, unk_0x9B0761B4C3EB8BC7(), 8, 100f, 786469, 1000f, 10f, true);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_243);
					AUDIO::STOP_SCRIPTED_CONVERSATION(bLocal_218, iLocal_243);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_243);
					PED::SET_PED_KEEP_TASK(bLocal_218, true);
					bLocal_256 = true;
				}
			}
		}
		if (iLocal_239 == 2)
		{
			if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_219) && !PED::IS_PED_IN_ANY_POLICE_VEHICLE(bLocal_226, 0))
			{
				if (unk_0xE0B3BC41DDA88DF0(bLocal_219, bLocal_226, 0))
				{
					PED::SET_PED_FLEE_ATTRIBUTES(bLocal_219, 2, true);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_243);
					TASK::TASK_VEHICLE_MISSION_PED_TARGET(0, bLocal_226, unk_0x9B0761B4C3EB8BC7(), 8, 100f, 786469, 1000f, 10f, true);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_243);
					AUDIO::STOP_SCRIPTED_CONVERSATION(bLocal_219, iLocal_243);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_243);
					PED::SET_PED_KEEP_TASK(bLocal_219, true);
					bLocal_256 = true;
				}
			}
		}
		if (iLocal_239 == 3)
		{
			if ((!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_219) && !STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_218)) && !PED::IS_PED_IN_ANY_POLICE_VEHICLE(bLocal_226, 0))
			{
				if (unk_0xE0B3BC41DDA88DF0(bLocal_218, bLocal_226, 0) && unk_0xE0B3BC41DDA88DF0(bLocal_219, bLocal_226, 0))
				{
					PED::SET_PED_FLEE_ATTRIBUTES(bLocal_218, 2, true);
					PED::SET_PED_FLEE_ATTRIBUTES(bLocal_219, 2, true);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_243);
					TASK::TASK_VEHICLE_MISSION_PED_TARGET(0, bLocal_226, unk_0x9B0761B4C3EB8BC7(), 8, 100f, 786469, 1000f, 10f, true);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_243);
					AUDIO::STOP_SCRIPTED_CONVERSATION(bLocal_218, iLocal_243);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_243);
					PED::_0x2208438012482A1A(bLocal_219, 0);
					PED::SET_PED_KEEP_TASK(bLocal_218, true);
					bLocal_256 = true;
				}
			}
			if (STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_218) && !STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_219))
			{
				func_59(&uLocal_52, 5);
				TASK::TASK_ENTER_VEHICLE(bLocal_219, bLocal_226, -1, -1, 2f, 8, 0);
				iLocal_239 = 2;
			}
			if (STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_219) && !STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_218))
			{
				func_59(&uLocal_52, 6);
				TASK::TASK_ENTER_VEHICLE(bLocal_218, bLocal_226, -1, -1, 2f, 8, 0);
				iLocal_239 = 1;
			}
		}
		if (iLocal_239 == 4)
		{
			if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_218))
			{
				HUD::HIDE_HUD_AND_RADAR_THIS_FRAME(bLocal_218);
				TASK::TASK_SMART_FLEE_COORD(bLocal_218, Local_217, 1000f, -1, false, false);
				PED::SET_PED_KEEP_TASK(bLocal_218, true);
			}
			if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_219))
			{
				HUD::HIDE_HUD_AND_RADAR_THIS_FRAME(bLocal_219);
				TASK::TASK_SMART_FLEE_COORD(bLocal_219, Local_217, 1000f, -1, false, false);
				PED::SET_PED_KEEP_TASK(bLocal_219, true);
			}
			bLocal_256 = true;
		}
	}
}

void func_65()
{
	if ((PED::IS_PED_IN_ANY_POLICE_VEHICLE(iLocal_222[0], 0) && PED::IS_PED_IN_ANY_POLICE_VEHICLE(iLocal_222[1], 0)) && PED::IS_PED_IN_ANY_POLICE_VEHICLE(iLocal_222[2], 0))
	{
		func_59(&uLocal_52, 4);
		iLocal_246 = 1;
		iLocal_238 = 1;
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_241, 1862763509);
		if (!bLocal_48 && bLocal_47)
		{
			unk_0x93370FA10F15BE44(&iLocal_265);
			unk_0x93370FA10F15BE44(&iLocal_266);
		}
		if (!bLocal_48)
		{
			if (!PED::IS_PED_IN_ANY_POLICE_VEHICLE(bLocal_218, 0))
			{
				func_66(&uLocal_52, "recsbau", "recsb_thanxa", "recsb_thanxa_1", 4, 0, 0);
			}
			else if (!PED::IS_PED_IN_ANY_POLICE_VEHICLE(bLocal_219, 0))
			{
				func_59(&uLocal_52, 5);
				func_56(&uLocal_52, 5, bLocal_219, "RECSBRobber1", 0, 1);
				func_66(&uLocal_52, "recsbau", "recsb_thanxa", "recsb_thanxa_1", 4, 0, 0);
			}
		}
		if (ENTITY::GET_ENTITY_COORDS(bLocal_226, false))
		{
			ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(bLocal_226);
			if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_218) && !PED::IS_PED_HURT(bLocal_218))
			{
				WEAPON::SET_PED_CURRENT_WEAPON_VISIBLE(bLocal_218, true, true, true, false);
				iLocal_239 = 1;
				HUD::HIDE_HUD_AND_RADAR_THIS_FRAME(bLocal_218);
				TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(bLocal_218, true);
				PED::_0x2208438012482A1A(bLocal_218, 1);
				ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(bLocal_218);
				ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(bLocal_226);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_243);
				TASK::TASK_ENTER_VEHICLE(false, bLocal_226, -1, -1, 2f, 9, 0);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_243);
				AUDIO::STOP_SCRIPTED_CONVERSATION(bLocal_218, iLocal_243);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_243);
				if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_219) && !PED::IS_PED_HURT(bLocal_219))
				{
					HUD::HIDE_HUD_AND_RADAR_THIS_FRAME(bLocal_219);
					PED::_0x2208438012482A1A(bLocal_219, 1);
					ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(bLocal_219);
					ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(bLocal_226);
					TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(bLocal_219, true);
					TASK::TASK_ENTER_VEHICLE(bLocal_219, bLocal_226, -1, 0, 2f, 1, 0);
					iLocal_239 = 3;
				}
			}
			else if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_219))
			{
				TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(bLocal_219, true);
				WEAPON::SET_PED_CURRENT_WEAPON_VISIBLE(bLocal_219, true, true, true, false);
				HUD::HIDE_HUD_AND_RADAR_THIS_FRAME(bLocal_219);
				PED::_0x2208438012482A1A(bLocal_219, 1);
				ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(bLocal_219);
				ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(bLocal_226);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_243);
				TASK::TASK_ENTER_VEHICLE(false, bLocal_226, -1, -1, 2f, 1, 0);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_243);
				AUDIO::STOP_SCRIPTED_CONVERSATION(bLocal_219, iLocal_243);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_243);
				iLocal_239 = 2;
			}
		}
		else
		{
			iLocal_239 = 4;
		}
	}
}

int func_66(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_55(uParam0, 145, sParam1, iParam5, iParam6, 0);
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
	Global_21996 = 1;
	Global_21998 = 0;
	Global_22002 = 0;
	StringCopy(&Global_22009, sParam3, 24);
	Global_2621441 = 0;
	return func_40(sParam2, iParam4, 0);
}

void func_67(bool bParam0, var uParam1, int iParam2, float fParam3)
{
	struct<3> Var0;
	struct<3> Var1;
	int iVar2;
	
	if (!PED::IS_PED_IN_ANY_POLICE_VEHICLE(bParam0, 0))
	{
		if (*uParam1 < 5)
		{
			switch (iParam2)
			{
				case 0:
					Var0 = { -1f, 1f, 0.5f };
					Var1 = { -0.5f, 0.75f, 0.05f };
					iVar2 = 0;
					break;
				
				case 1:
					Var0 = { 1f, 1f, 0.5f };
					Var1 = { 0.5f, 0.75f, 0.05f };
					iVar2 = 1;
					break;
				
				case 4:
					Var0 = { -1f, -1f, 0.5f };
					Var1 = { -0.5f, -0.75f, 0.05f };
					iVar2 = 2;
					break;
				
				case 5:
					Var0 = { 1f, -1f, 0.5f };
					Var1 = { 0.5f, -0.75f, 0.05f };
					iVar2 = 3;
					break;
			}
			if (MISC::HAS_BULLET_IMPACTED_IN_AREA(unk_0x7EC595B99EA7C4B1(bParam0, Var0), fParam3, true, true) || MISC::HAS_BULLET_IMPACTED_IN_AREA(unk_0x7EC595B99EA7C4B1(bParam0, Var0), fParam3, false, true))
			{
				switch (*uParam1)
				{
					case 0:
						VEHICLE::SET_VEHICLE_TYRE_BURST(bParam0, iParam2, false, 1000f);
						*uParam1++;
						break;
					
					case 1:
						VEHICLE::SMASH_VEHICLE_WINDOW(bParam0, iVar2);
						*uParam1++;
						break;
					
					case 2:
						*uParam1++;
						break;
					
					case 3:
						*uParam1++;
						break;
					
					case 4:
						VEHICLE::SET_VEHICLE_DAMAGE(bParam0, Var1, 150f, 50f, true);
						*uParam1++;
						break;
					}
				}
			}
	}
}

void func_68(bool bParam0)
{
	if ((!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bParam0) && !func_37()) && SYSTEM::TIMERA() > 12000)
	{
		func_56(&uLocal_52, 4, bParam0, "RECSBCop1", 0, 1);
		if (ENTITY::IS_ENTITY_AT_ENTITY(bParam0, unk_0x9B0761B4C3EB8BC7(), 20f, 20f, 20f, false, true, 0))
		{
			func_39(&uLocal_52, "recsbau", "recsb_sscene", 4, 0, 0, 0);
			SYSTEM::SETTIMERA(0);
		}
	}
}

void func_69()
{
	if (!PED::IS_PED_IN_ANY_POLICE_VEHICLE(bLocal_218, 0))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(bLocal_218, unk_0x9B0761B4C3EB8BC7(), true))
		{
			bLocal_48 = true;
			SYSTEM::SETTIMERA(0);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_241, 1862763509);
			if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_218))
			{
				TASK::TASK_COMBAT_PED(bLocal_218, unk_0x9B0761B4C3EB8BC7(), 0, 16);
				PED::SET_PED_KEEP_TASK(bLocal_218, true);
				PED::REGISTER_TARGET(bLocal_218, unk_0x9B0761B4C3EB8BC7());
				PED::SET_PED_HIGHLY_PERCEPTIVE(bLocal_218, true);
			}
			if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_219))
			{
				TASK::TASK_COMBAT_PED(bLocal_219, unk_0x9B0761B4C3EB8BC7(), 0, 16);
				PED::SET_PED_KEEP_TASK(bLocal_219, true);
				PED::REGISTER_TARGET(bLocal_219, unk_0x9B0761B4C3EB8BC7());
				PED::SET_PED_HIGHLY_PERCEPTIVE(bLocal_219, true);
			}
			if (!bLocal_47)
			{
				func_3();
				SYSTEM::WAIT(0);
				if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(iLocal_222[0]))
				{
					func_56(&uLocal_52, 4, iLocal_222[0], "RECSBCop1", 0, 1);
					func_39(&uLocal_52, "recsbau", "recsb_copsth", 4, 0, 0, 0);
				}
				else if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(iLocal_222[1]))
				{
					AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_222[1], "S_M_Y_RANGER_01_WHITE_FULL_01");
					func_59(&uLocal_52, 4);
					func_56(&uLocal_52, 4, iLocal_222[1], "RECSBCop1", 0, 1);
					func_39(&uLocal_52, "recsbau", "recsb_copsth", 4, 0, 0, 0);
				}
				else if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(iLocal_222[2]))
				{
					AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_222[2], "S_M_Y_RANGER_01_WHITE_FULL_01");
					func_59(&uLocal_52, 4);
					func_56(&uLocal_52, 4, iLocal_222[2], "RECSBCop1", 0, 1);
					func_39(&uLocal_52, "recsbau", "recsb_copsth", 4, 0, 0, 0);
				}
			}
		}
		if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_218))
		{
			if (!func_72() && WEAPON::IS_PED_ARMED(unk_0x9B0761B4C3EB8BC7(), 4))
			{
				if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), bLocal_218) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), bLocal_218))
				{
					if (ENTITY::IS_ENTITY_AT_ENTITY(unk_0x9B0761B4C3EB8BC7(), bLocal_218, 20f, 20f, 20f, false, true, 0) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(bLocal_218, unk_0x9B0761B4C3EB8BC7()))
					{
						iLocal_230++;
						if (!iLocal_231 && !func_70("recsb_theaim"))
						{
							func_3();
							SYSTEM::WAIT(0);
							if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_218))
							{
								func_39(&uLocal_52, "recsbau", "recsb_theaim", 4, 0, 0, 0);
							}
							else if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_219))
							{
								func_59(&uLocal_52, 5);
								func_56(&uLocal_52, 5, bLocal_219, "RECSBRobber1", 0, 1);
								func_39(&uLocal_52, "recsbau", "recsb_theaim", 4, 0, 0, 0);
							}
							iLocal_231 = 1;
						}
						if (iLocal_230 > 45)
						{
							bLocal_48 = true;
							SYSTEM::SETTIMERA(0);
							if (!bLocal_47)
							{
								func_3();
								SYSTEM::WAIT(0);
								if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(iLocal_222[0]))
								{
									func_56(&uLocal_52, 4, iLocal_222[0], "RECSBCop1", 0, 1);
									func_39(&uLocal_52, "recsbau", "recsb_copsth", 4, 0, 0, 0);
								}
								else if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(iLocal_222[1]))
								{
									AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_222[1], "S_M_Y_RANGER_01_WHITE_FULL_01");
									func_59(&uLocal_52, 4);
									func_56(&uLocal_52, 4, iLocal_222[1], "RECSBCop1", 0, 1);
									func_39(&uLocal_52, "recsbau", "recsb_copsth", 4, 0, 0, 0);
								}
								else if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(iLocal_222[2]))
								{
									AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_222[2], "S_M_Y_RANGER_01_WHITE_FULL_01");
									func_59(&uLocal_52, 4);
									func_56(&uLocal_52, 4, iLocal_222[2], "RECSBCop1", 0, 1);
									func_39(&uLocal_52, "recsbau", "recsb_copsth", 4, 0, 0, 0);
								}
							}
						}
					}
				}
				else if (iLocal_231 || iLocal_232)
				{
					iLocal_230 = 45;
				}
				else
				{
					iLocal_230 = 0;
				}
			}
		}
	}
	if (!PED::IS_PED_IN_ANY_POLICE_VEHICLE(bLocal_219, 0))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(bLocal_219, unk_0x9B0761B4C3EB8BC7(), true))
		{
			bLocal_48 = true;
			SYSTEM::SETTIMERA(0);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_241, 1862763509);
			if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_219))
			{
				TASK::TASK_COMBAT_PED(bLocal_219, unk_0x9B0761B4C3EB8BC7(), 0, 16);
				PED::SET_PED_KEEP_TASK(bLocal_219, true);
				PED::REGISTER_TARGET(bLocal_219, unk_0x9B0761B4C3EB8BC7());
				PED::SET_PED_HIGHLY_PERCEPTIVE(bLocal_219, true);
			}
			if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_218))
			{
				TASK::TASK_COMBAT_PED(bLocal_218, unk_0x9B0761B4C3EB8BC7(), 0, 16);
				PED::SET_PED_KEEP_TASK(bLocal_218, true);
				PED::REGISTER_TARGET(bLocal_218, unk_0x9B0761B4C3EB8BC7());
				PED::SET_PED_HIGHLY_PERCEPTIVE(bLocal_218, true);
			}
			if (!bLocal_47)
			{
				func_3();
				SYSTEM::WAIT(0);
				if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(iLocal_222[0]))
				{
					func_56(&uLocal_52, 4, iLocal_222[0], "RECSBCop1", 0, 1);
					func_39(&uLocal_52, "recsbau", "recsb_copsth", 4, 0, 0, 0);
				}
				else if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(iLocal_222[1]))
				{
					AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_222[1], "S_M_Y_RANGER_01_WHITE_FULL_01");
					func_59(&uLocal_52, 4);
					func_56(&uLocal_52, 4, iLocal_222[1], "RECSBCop1", 0, 1);
					func_39(&uLocal_52, "recsbau", "recsb_copsth", 4, 0, 0, 0);
				}
				else if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(iLocal_222[2]))
				{
					AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_222[2], "S_M_Y_RANGER_01_WHITE_FULL_01");
					func_59(&uLocal_52, 4);
					func_56(&uLocal_52, 4, iLocal_222[2], "RECSBCop1", 0, 1);
					func_39(&uLocal_52, "recsbau", "recsb_copsth", 4, 0, 0, 0);
				}
			}
		}
		if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_219))
		{
			if (!func_72() && WEAPON::IS_PED_ARMED(unk_0x9B0761B4C3EB8BC7(), 4))
			{
				if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), bLocal_219) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), bLocal_219))
				{
					if (ENTITY::IS_ENTITY_AT_ENTITY(unk_0x9B0761B4C3EB8BC7(), bLocal_219, 20f, 20f, 20f, false, true, 0) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(bLocal_219, unk_0x9B0761B4C3EB8BC7()))
					{
						if ((!iLocal_232 && !STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_218)) && !func_70("recsb_theaim"))
						{
							func_3();
							SYSTEM::WAIT(0);
							if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_218))
							{
								func_39(&uLocal_52, "recsbau", "recsb_theaim", 4, 0, 0, 0);
							}
							else if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_219))
							{
								func_59(&uLocal_52, 5);
								func_56(&uLocal_52, 5, bLocal_219, "RECSBRobber1", 0, 1);
								func_39(&uLocal_52, "recsbau", "recsb_theaim", 4, 0, 0, 0);
							}
							iLocal_232 = 1;
						}
						iLocal_229++;
						if (iLocal_229 > 45)
						{
							bLocal_48 = true;
							SYSTEM::SETTIMERA(0);
							if (!bLocal_47)
							{
								func_3();
								SYSTEM::WAIT(0);
								if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(iLocal_222[0]))
								{
									func_56(&uLocal_52, 4, iLocal_222[0], "RECSBCop1", 0, 1);
									func_39(&uLocal_52, "recsbau", "recsb_copsth", 4, 0, 0, 0);
								}
								else if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(iLocal_222[1]))
								{
									AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_222[1], "S_M_Y_RANGER_01_WHITE_FULL_01");
									func_59(&uLocal_52, 4);
									func_56(&uLocal_52, 4, iLocal_222[1], "RECSBCop1", 0, 1);
									func_39(&uLocal_52, "recsbau", "recsb_copsth", 4, 0, 0, 0);
								}
								else if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(iLocal_222[2]))
								{
									AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_222[2], "S_M_Y_RANGER_01_WHITE_FULL_01");
									func_59(&uLocal_52, 4);
									func_56(&uLocal_52, 4, iLocal_222[2], "RECSBCop1", 0, 1);
									func_39(&uLocal_52, "recsbau", "recsb_copsth", 4, 0, 0, 0);
								}
							}
						}
					}
				}
				else if (iLocal_231 || iLocal_232)
				{
					iLocal_230 = 45;
				}
				else
				{
					iLocal_230 = 0;
				}
			}
		}
	}
	if (!iLocal_261 && bLocal_234)
	{
		if (OBJECT::HAS_PICKUP_BEEN_COLLECTED(iLocal_264[0]))
		{
			if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_218))
			{
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(bLocal_218, unk_0x9B0761B4C3EB8BC7()) && ENTITY::IS_ENTITY_AT_ENTITY(bLocal_218, unk_0x9B0761B4C3EB8BC7(), 20f, 20f, 20f, false, true, 0))
				{
					bLocal_48 = true;
					func_3();
					SYSTEM::WAIT(0);
					func_39(&uLocal_52, "recsbau", "recsb_jack", 3, 0, 0, 0);
					iLocal_261 = 1;
				}
			}
			else if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_219))
			{
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(bLocal_219, unk_0x9B0761B4C3EB8BC7()) && ENTITY::IS_ENTITY_AT_ENTITY(bLocal_219, unk_0x9B0761B4C3EB8BC7(), 20f, 20f, 20f, false, true, 0))
				{
					bLocal_48 = true;
					func_59(&uLocal_52, 5);
					func_56(&uLocal_52, 5, bLocal_219, "RECSBRobber1", 0, 1);
					func_3();
					SYSTEM::WAIT(0);
					func_39(&uLocal_52, "recsbau", "recsb_jack", 3, 0, 0, 0);
					iLocal_261 = 1;
				}
			}
		}
	}
	if (!iLocal_262 && bLocal_235)
	{
		if (OBJECT::HAS_PICKUP_BEEN_COLLECTED(iLocal_264[1]))
		{
			if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_218))
			{
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(bLocal_218, unk_0x9B0761B4C3EB8BC7()) && ENTITY::IS_ENTITY_AT_ENTITY(bLocal_218, unk_0x9B0761B4C3EB8BC7(), 20f, 20f, 20f, false, true, 0))
				{
					bLocal_48 = true;
					func_3();
					SYSTEM::WAIT(0);
					func_39(&uLocal_52, "recsbau", "recsb_jack", 3, 0, 0, 0);
					iLocal_262 = 1;
				}
			}
			else if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_219))
			{
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(bLocal_219, unk_0x9B0761B4C3EB8BC7()) && ENTITY::IS_ENTITY_AT_ENTITY(bLocal_219, unk_0x9B0761B4C3EB8BC7(), 20f, 20f, 20f, false, true, 0))
				{
					bLocal_48 = true;
					func_59(&uLocal_52, 5);
					func_56(&uLocal_52, 5, bLocal_219, "RECSBRobber1", 0, 1);
					func_3();
					SYSTEM::WAIT(0);
					func_39(&uLocal_52, "recsbau", "recsb_jack", 3, 0, 0, 0);
					iLocal_262 = 1;
				}
			}
		}
	}
	if (!PED::IS_PED_IN_ANY_POLICE_VEHICLE(bLocal_226, 0))
	{
		if ((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(bLocal_226, unk_0x9B0761B4C3EB8BC7(), true) || unk_0xE0B3BC41DDA88DF0(unk_0x9B0761B4C3EB8BC7(), bLocal_226, 0)) || WEAPON::HAS_VEHICLE_GOT_PROJECTILE_ATTACHED(unk_0x9B0761B4C3EB8BC7(), bLocal_226, joaat("weapon_stickybomb"), -1))
		{
			bLocal_48 = true;
			SYSTEM::SETTIMERA(0);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_241, 1862763509);
			if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_218))
			{
				TASK::TASK_COMBAT_PED(bLocal_218, unk_0x9B0761B4C3EB8BC7(), 0, 16);
				PED::SET_PED_KEEP_TASK(bLocal_218, true);
				PED::REGISTER_TARGET(bLocal_218, unk_0x9B0761B4C3EB8BC7());
				PED::SET_PED_HIGHLY_PERCEPTIVE(bLocal_218, true);
			}
			if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_219))
			{
				TASK::TASK_COMBAT_PED(bLocal_219, unk_0x9B0761B4C3EB8BC7(), 0, 16);
				PED::SET_PED_KEEP_TASK(bLocal_219, true);
				PED::REGISTER_TARGET(bLocal_219, unk_0x9B0761B4C3EB8BC7());
				PED::SET_PED_HIGHLY_PERCEPTIVE(bLocal_219, true);
			}
			func_3();
			SYSTEM::WAIT(0);
			if (!PED::IS_PED_IN_ANY_POLICE_VEHICLE(bLocal_226, 0))
			{
				if (unk_0xE0B3BC41DDA88DF0(unk_0x9B0761B4C3EB8BC7(), bLocal_226, 0))
				{
					if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_218))
					{
						func_66(&uLocal_52, "recsbau", "recsb_deadcr", "recsb_deadcr_1", 4, 0, 0);
						TASK::TASK_ENTER_VEHICLE(bLocal_218, bLocal_226, -1, -1, 2f, 524296, 0);
					}
					else if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_219))
					{
						func_59(&uLocal_52, 5);
						func_56(&uLocal_52, 5, bLocal_219, "RECSBRobber1", 0, 1);
						func_66(&uLocal_52, "recsbau", "recsb_deadcr", "recsb_deadcr_1", 4, 0, 0);
						TASK::TASK_ENTER_VEHICLE(bLocal_219, bLocal_226, -1, -1, 2f, 524296, 0);
					}
				}
				else if (!bLocal_47)
				{
					if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(iLocal_222[0]))
					{
						func_56(&uLocal_52, 4, iLocal_222[0], "RECSBCop1", 0, 1);
						func_39(&uLocal_52, "recsbau", "recsb_copsth", 4, 0, 0, 0);
					}
					else if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(iLocal_222[1]))
					{
						AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_222[1], "S_M_Y_RANGER_01_WHITE_FULL_01");
						func_59(&uLocal_52, 4);
						func_56(&uLocal_52, 4, iLocal_222[1], "RECSBCop1", 0, 1);
						func_39(&uLocal_52, "recsbau", "recsb_copsth", 4, 0, 0, 0);
					}
					else if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(iLocal_222[2]))
					{
						AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_222[2], "S_M_Y_RANGER_01_WHITE_FULL_01");
						func_59(&uLocal_52, 4);
						func_56(&uLocal_52, 4, iLocal_222[2], "RECSBCop1", 0, 1);
						func_39(&uLocal_52, "recsbau", "recsb_copsth", 4, 0, 0, 0);
					}
				}
			}
		}
	}
}

int func_70(char* sParam0)
{
	var uVar0;
	
	if (func_37())
	{
		MemCopy(&uVar0, {func_71()}, 4);
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS(sParam0, &uVar0))
		{
			return 1;
		}
	}
	return 0;
}

struct<6> func_71()
{
	struct<6> Var0;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_21005 == 4)
	{
		return Global_20624;
	}
	return Var0;
}

int func_72()
{
	if (SYSTEM::VDIST(unk_0x9B0761B4C3EB8BC7(), 0))
	{
		if (ENTITY::GET_ENTITY_COORDS(ENTITY::GET_ENTITY_MODEL(unk_0x9B0761B4C3EB8BC7(), 0), false))
		{
			if (PED::IS_PED_IN_MODEL(unk_0x9B0761B4C3EB8BC7(), joaat("lazer")) || PED::IS_PED_IN_MODEL(unk_0x9B0761B4C3EB8BC7(), joaat("buzzard")))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_73()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!bLocal_258)
	{
		PLAYER::GET_ENTITY_PLAYER_IS_FREE_AIMING_AT(PLAYER::PLAYER_ID(), &bLocal_244);
		if (ENTITY::IS_ENTITY_A_PED(bLocal_244))
		{
			bLocal_224 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(bLocal_244);
		}
		if ((bLocal_224 == iLocal_222[0] || bLocal_224 == iLocal_222[1]) || bLocal_224 == iLocal_222[2])
		{
			if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_224))
			{
				if (!func_72() && WEAPON::IS_PED_ARMED(unk_0x9B0761B4C3EB8BC7(), 4))
				{
					if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), bLocal_224) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), bLocal_224))
					{
						if (ENTITY::IS_ENTITY_AT_ENTITY(unk_0x9B0761B4C3EB8BC7(), bLocal_224, 20f, 20f, 20f, false, true, 0))
						{
							if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(bLocal_224, unk_0x9B0761B4C3EB8BC7()) || ENTITY::IS_ENTITY_AT_ENTITY(unk_0x9B0761B4C3EB8BC7(), bLocal_224, 8f, 8f, 8f, false, true, 0))
							{
								if (!bLocal_259)
								{
									if (!func_70("recsb_coppon"))
									{
										if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(iLocal_222[0]))
										{
											func_56(&uLocal_52, 4, iLocal_222[0], "RECSBCop1", 0, 1);
											func_3();
											SYSTEM::WAIT(0);
											func_39(&uLocal_52, "recsbau", "recsb_coppon", 4, 0, 0, 0);
											bLocal_259 = true;
										}
										else if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(iLocal_222[1]))
										{
											AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_222[1], "S_M_Y_RANGER_01_WHITE_FULL_01");
											func_59(&uLocal_52, 4);
											func_56(&uLocal_52, 4, iLocal_222[1], "RECSBCop1", 0, 1);
											func_3();
											SYSTEM::WAIT(0);
											func_39(&uLocal_52, "recsbau", "recsb_coppon", 4, 0, 0, 0);
											bLocal_259 = true;
										}
										else if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(iLocal_222[2]))
										{
											AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_222[2], "S_M_Y_RANGER_01_WHITE_FULL_01");
											func_59(&uLocal_52, 4);
											func_56(&uLocal_52, 4, iLocal_222[2], "RECSBCop1", 0, 1);
											func_3();
											SYSTEM::WAIT(0);
											func_39(&uLocal_52, "recsbau", "recsb_coppon", 4, 0, 0, 0);
											bLocal_259 = true;
										}
									}
								}
								iLocal_228++;
								if (iLocal_228 > 40)
								{
									bLocal_258 = true;
									bLocal_47 = true;
									if (!PED::IS_PED_IN_ANY_POLICE_VEHICLE(bLocal_244, 0))
									{
										PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_242, 1862763509);
										iVar0 = 0;
										while (iVar0 < iLocal_222)
										{
											if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(iLocal_222[iVar0]))
											{
												TASK::TASK_COMBAT_PED(iLocal_222[iVar0], unk_0x9B0761B4C3EB8BC7(), 0, 16);
												PED::SET_PED_KEEP_TASK(iLocal_222[iVar0], true);
												PED::REGISTER_TARGET(iLocal_222[iVar0], unk_0x9B0761B4C3EB8BC7());
												PED::SET_PED_HIGHLY_PERCEPTIVE(iLocal_222[iVar0], true);
											}
											iVar0++;
										}
									}
								}
							}
						}
					}
					else if (bLocal_259)
					{
						iLocal_228 = 40;
					}
					else
					{
						iLocal_228 = 0;
					}
				}
			}
		}
	}
	iVar1 = 0;
	while (iVar1 < iLocal_222)
	{
		if (MISC::IS_BIT_SET(iLocal_222[iVar1]))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_222[iVar1], unk_0x9B0761B4C3EB8BC7(), true))
			{
				bLocal_47 = true;
			}
			if (ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYERS_LAST_VEHICLE(), false))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_222[iVar1], PLAYER::GET_PLAYERS_LAST_VEHICLE(), true))
				{
					bLocal_47 = true;
				}
			}
		}
		iVar1++;
	}
	if (bLocal_258)
	{
	}
	if (iLocal_240)
	{
		if (SYSTEM::TIMERB() > 6000)
		{
			if (SYSTEM::TIMERB() > 6000 && SYSTEM::TIMERB() < 7000)
			{
				FIRE::STOP_FIRE_IN_RANGE(330.1744f, 2629.238f, 43.5056f, 30f);
			}
			if (!iLocal_236)
			{
				if (bLocal_48)
				{
					if (!func_37())
					{
						if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(iLocal_222[0]))
						{
							func_56(&uLocal_52, 4, iLocal_222[0], "RECSBCop1", 0, 1);
							func_39(&uLocal_52, "recsbau", "recsb_crooks", 4, 0, 0, 0);
						}
						else if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(iLocal_222[1]))
						{
							AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_222[1], "S_M_Y_RANGER_01_WHITE_FULL_01");
							func_59(&uLocal_52, 4);
							func_56(&uLocal_52, 4, iLocal_222[1], "RECSBCop1", 0, 1);
							func_39(&uLocal_52, "recsbau", "recsb_crooks", 4, 0, 0, 0);
						}
						else if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(iLocal_222[2]))
						{
							AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_222[2], "S_M_Y_RANGER_01_WHITE_FULL_01");
							func_59(&uLocal_52, 4);
							func_56(&uLocal_52, 4, iLocal_222[2], "RECSBCop1", 0, 1);
							func_39(&uLocal_52, "recsbau", "recsb_crooks", 4, 0, 0, 0);
						}
						iLocal_236 = 1;
					}
				}
				else if (!iLocal_238)
				{
					if (!func_37())
					{
						if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(iLocal_222[0]))
						{
							func_56(&uLocal_52, 4, iLocal_222[0], "RECSBCop1", 0, 1);
							func_39(&uLocal_52, "recsbau", "recsb_crooka", 4, 0, 0, 0);
						}
						else if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(iLocal_222[1]))
						{
							AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_222[1], "S_M_Y_RANGER_01_WHITE_FULL_01");
							func_59(&uLocal_52, 4);
							func_56(&uLocal_52, 4, iLocal_222[1], "RECSBCop1", 0, 1);
							func_39(&uLocal_52, "recsbau", "recsb_crooka", 4, 0, 0, 0);
						}
						else if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(iLocal_222[2]))
						{
							AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_222[2], "S_M_Y_RANGER_01_WHITE_FULL_01");
							func_59(&uLocal_52, 4);
							func_56(&uLocal_52, 4, iLocal_222[2], "RECSBCop1", 0, 1);
							func_39(&uLocal_52, "recsbau", "recsb_crooka", 4, 0, 0, 0);
						}
						iLocal_236 = 1;
					}
				}
			}
			if (PED::IS_PED_SHOOTING_IN_AREA(unk_0x9B0761B4C3EB8BC7(), Vector(43.5005f, 2626.29f, 326.6079f) - Vector(50f, 50f, 50f), Vector(43.5005f, 2626.29f, 326.6079f) + Vector(50f, 50f, 50f), false, true))
			{
				bLocal_47 = true;
			}
			if (!PED::IS_PED_IN_ANY_POLICE_VEHICLE(bLocal_226, 0))
			{
				if (unk_0xE0B3BC41DDA88DF0(unk_0x9B0761B4C3EB8BC7(), bLocal_226, 0))
				{
					bLocal_47 = true;
					func_3();
					SYSTEM::WAIT(0);
					if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(iLocal_222[0]))
					{
						func_56(&uLocal_52, 4, iLocal_222[0], "RECSBCop1", 0, 1);
						func_39(&uLocal_52, "recsbau", "recsb_stealc", 4, 0, 0, 0);
					}
					else if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(iLocal_222[1]))
					{
						AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_222[1], "S_M_Y_RANGER_01_WHITE_FULL_01");
						func_59(&uLocal_52, 4);
						func_56(&uLocal_52, 4, iLocal_222[1], "RECSBCop1", 0, 1);
						func_39(&uLocal_52, "recsbau", "recsb_stealc", 4, 0, 0, 0);
					}
					else if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(iLocal_222[2]))
					{
						AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_222[2], "S_M_Y_RANGER_01_WHITE_FULL_01");
						func_59(&uLocal_52, 4);
						func_56(&uLocal_52, 4, iLocal_222[2], "RECSBCop1", 0, 1);
						func_39(&uLocal_52, "recsbau", "recsb_stealc", 4, 0, 0, 0);
					}
				}
			}
		}
		iVar1 = 0;
		while (iVar1 < iLocal_222)
		{
			if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(iLocal_222[iVar1]))
			{
				if (OBJECT::HAS_PICKUP_BEEN_COLLECTED(iLocal_264[0]) || OBJECT::HAS_PICKUP_BEEN_COLLECTED(iLocal_264[1]))
				{
					if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(iLocal_222[iVar1], unk_0x9B0761B4C3EB8BC7()) && ENTITY::IS_ENTITY_AT_ENTITY(iLocal_222[iVar1], unk_0x9B0761B4C3EB8BC7(), 20f, 20f, 20f, false, true, 0))
					{
						bLocal_47 = true;
						func_3();
						SYSTEM::WAIT(0);
						if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(iLocal_222[0]))
						{
							func_56(&uLocal_52, 4, iLocal_222[0], "RECSBCop1", 0, 1);
							func_39(&uLocal_52, "recsbau", "recsb_stealb", 4, 0, 0, 0);
						}
						else if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(iLocal_222[1]))
						{
							AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_222[1], "S_M_Y_RANGER_01_WHITE_FULL_01");
							func_59(&uLocal_52, 4);
							func_56(&uLocal_52, 4, iLocal_222[1], "RECSBCop1", 0, 1);
							func_39(&uLocal_52, "recsbau", "recsb_stealb", 4, 0, 0, 0);
						}
						else if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(iLocal_222[2]))
						{
							AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_222[2], "S_M_Y_RANGER_01_WHITE_FULL_01");
							func_59(&uLocal_52, 4);
							func_56(&uLocal_52, 4, iLocal_222[2], "RECSBCop1", 0, 1);
							func_39(&uLocal_52, "recsbau", "recsb_stealb", 4, 0, 0, 0);
						}
					}
				}
				if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(unk_0x9B0761B4C3EB8BC7(), iLocal_222[iVar1]))
				{
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(3, iLocal_242, 1862763509);
					bLocal_47 = true;
				}
			}
			iVar1++;
		}
		if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(iLocal_222[1]) && !PED::IS_PED_IN_ANY_POLICE_VEHICLE(iLocal_225[2], 0))
		{
			if (!ENTITY::IS_ENTITY_AT_ENTITY(iLocal_222[1], unk_0x9B0761B4C3EB8BC7(), 100f, 100f, 100f, false, true, 0))
			{
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_222[1]));
				STREAMING::REMOVE_ANIM_DICT(&(iLocal_225[2]));
			}
		}
	}
	iVar1 = 0;
	while (iVar1 < iLocal_225)
	{
		if (!PED::IS_PED_IN_ANY_POLICE_VEHICLE(iLocal_225[iVar1], 0))
		{
			if ((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_225[iVar1], unk_0x9B0761B4C3EB8BC7(), true) || unk_0xE0B3BC41DDA88DF0(unk_0x9B0761B4C3EB8BC7(), iLocal_225[iVar1], 0)) || WEAPON::HAS_VEHICLE_GOT_PROJECTILE_ATTACHED(unk_0x9B0761B4C3EB8BC7(), iLocal_225[iVar1], joaat("weapon_stickybomb"), -1))
			{
				bLocal_47 = true;
			}
			if (ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYERS_LAST_VEHICLE(), false))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_225[iVar1], PLAYER::GET_PLAYERS_LAST_VEHICLE(), true))
				{
					bLocal_47 = true;
				}
			}
		}
		iVar1++;
	}
	if (!PED::IS_PED_IN_ANY_POLICE_VEHICLE(iLocal_227, 0))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(bLocal_227, unk_0x9B0761B4C3EB8BC7(), true) || unk_0xE0B3BC41DDA88DF0(unk_0x9B0761B4C3EB8BC7(), bLocal_227, 0))
		{
			bLocal_47 = true;
		}
	}
	if (SYSTEM::VDIST(unk_0x9B0761B4C3EB8BC7(), 0))
	{
		if (PED::IS_PED_IN_MODEL(unk_0x9B0761B4C3EB8BC7(), joaat("towtruck")) || PED::IS_PED_IN_MODEL(unk_0x9B0761B4C3EB8BC7(), joaat("towtruck2")))
		{
			iVar2 = ENTITY::GET_ENTITY_MODEL(unk_0x9B0761B4C3EB8BC7(), 0);
			if (iLocal_240)
			{
				if (!PED::IS_PED_IN_ANY_POLICE_VEHICLE(bLocal_226, 0))
				{
					if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(iVar2, bLocal_226))
					{
						bLocal_47 = true;
						func_3();
						SYSTEM::WAIT(0);
						if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(iLocal_222[0]))
						{
							func_56(&uLocal_52, 4, iLocal_222[0], "RECSBCop1", 0, 1);
							func_39(&uLocal_52, "recsbau", "recsb_stealc", 4, 0, 0, 0);
						}
						else if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(iLocal_222[1]))
						{
							AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_222[1], "S_M_Y_RANGER_01_WHITE_FULL_01");
							func_59(&uLocal_52, 4);
							func_56(&uLocal_52, 4, iLocal_222[1], "RECSBCop1", 0, 1);
							func_39(&uLocal_52, "recsbau", "recsb_stealc", 4, 0, 0, 0);
						}
						else if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(iLocal_222[2]))
						{
							AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_222[2], "S_M_Y_RANGER_01_WHITE_FULL_01");
							func_59(&uLocal_52, 4);
							func_56(&uLocal_52, 4, iLocal_222[2], "RECSBCop1", 0, 1);
							func_39(&uLocal_52, "recsbau", "recsb_stealc", 4, 0, 0, 0);
						}
					}
				}
			}
			iVar1 = 0;
			while (iVar1 < iLocal_225)
			{
				if (!PED::IS_PED_IN_ANY_POLICE_VEHICLE(iLocal_225[iVar1], 0))
				{
					if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(iVar2, iLocal_225[iVar1]))
					{
						bLocal_47 = true;
					}
				}
				iVar1++;
			}
			if (!PED::IS_PED_IN_ANY_POLICE_VEHICLE(bLocal_227, 0))
			{
				if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(iVar2, bLocal_227))
				{
					bLocal_47 = true;
				}
			}
		}
	}
	if (bLocal_47 || bLocal_258)
	{
		SYSTEM::SETTIMERA(0);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), false);
		PLAYER::SET_PLAYER_WANTED_LEVEL_NO_DROP(PLAYER::PLAYER_ID(), 1, false);
		PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
		PLAYER::SET_WANTED_LEVEL_DIFFICULTY(PLAYER::PLAYER_ID(), 0f);
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.1f);
		MISC::SET_DISPATCH_IDEAL_SPAWN_DISTANCE(350f);
		bLocal_47 = true;
		if (!PED::IS_PED_IN_ANY_POLICE_VEHICLE(bLocal_226, 0) && unk_0xE0B3BC41DDA88DF0(unk_0x9B0761B4C3EB8BC7(), bLocal_226, 0))
		{
		}
		else
		{
			func_3();
			SYSTEM::WAIT(0);
			if (!iLocal_240)
			{
				if (STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_218) && !STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_219))
				{
					func_59(&uLocal_52, 5);
					func_56(&uLocal_52, 5, bLocal_219, "RECSBRobber1", 0, 1);
				}
				if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(iLocal_222[0]))
				{
					func_56(&uLocal_52, 4, iLocal_222[0], "RECSBCop1", 0, 1);
					func_39(&uLocal_52, "recsbau", "recsb_copsho", 4, 0, 0, 0);
				}
				else if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(iLocal_222[1]))
				{
					AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_222[1], "S_M_Y_RANGER_01_WHITE_FULL_01");
					func_59(&uLocal_52, 4);
					func_56(&uLocal_52, 4, iLocal_222[1], "RECSBCop1", 0, 1);
					func_39(&uLocal_52, "recsbau", "recsb_copsho", 4, 0, 0, 0);
				}
				else if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(iLocal_222[2]))
				{
					AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_222[2], "S_M_Y_RANGER_01_WHITE_FULL_01");
					func_59(&uLocal_52, 4);
					func_56(&uLocal_52, 4, iLocal_222[2], "RECSBCop1", 0, 1);
					func_39(&uLocal_52, "recsbau", "recsb_copsho", 4, 0, 0, 0);
				}
			}
			else if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(iLocal_222[0]))
			{
				func_56(&uLocal_52, 4, iLocal_222[0], "RECSBCop1", 0, 1);
				func_39(&uLocal_52, "recsbau", "recsb_sscen3", 4, 0, 0, 0);
			}
			else if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(iLocal_222[1]))
			{
				AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_222[1], "S_M_Y_RANGER_01_WHITE_FULL_01");
				func_59(&uLocal_52, 4);
				func_56(&uLocal_52, 4, iLocal_222[1], "RECSBCop1", 0, 1);
				func_39(&uLocal_52, "recsbau", "recsb_sscen3", 4, 0, 0, 0);
			}
			else if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(iLocal_222[2]))
			{
				AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_222[2], "S_M_Y_RANGER_01_WHITE_FULL_01");
				func_59(&uLocal_52, 4);
				func_56(&uLocal_52, 4, iLocal_222[2], "RECSBCop1", 0, 1);
				func_39(&uLocal_52, "recsbau", "recsb_sscen3", 4, 0, 0, 0);
			}
		}
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_242, 1862763509);
		if (!func_87())
		{
			SYSTEM::SETTIMERA(0);
			if (!func_87())
			{
				func_74(1);
			}
		}
		if (iLocal_240)
		{
			iVar1 = 0;
			while (iVar1 < iLocal_222)
			{
				if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(iLocal_222[iVar1]))
				{
					TASK::TASK_COMBAT_PED(iLocal_222[iVar1], unk_0x9B0761B4C3EB8BC7(), 0, 16);
					PED::SET_PED_KEEP_TASK(iLocal_222[iVar1], true);
					PED::REGISTER_TARGET(iLocal_222[iVar1], unk_0x9B0761B4C3EB8BC7());
					WEAPON::SET_PED_CURRENT_WEAPON_VISIBLE(iLocal_222[iVar1], true, true, true, false);
					PED::SET_PED_HIGHLY_PERCEPTIVE(iLocal_222[iVar1], true);
					PED::SET_PED_COMBAT_MOVEMENT(iLocal_222[iVar1], 2);
					PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_222[iVar1], 50, true);
				}
				iVar1++;
			}
		}
	}
	if (MISC::IS_BIT_SET(bLocal_220))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(bLocal_220, unk_0x9B0761B4C3EB8BC7(), true))
		{
			PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), false);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_242, 1862763509);
			bLocal_47 = true;
		}
	}
	if (MISC::IS_BIT_SET(bLocal_221))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(bLocal_221, unk_0x9B0761B4C3EB8BC7(), true))
		{
			PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), false);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_242, 1862763509);
			bLocal_47 = true;
		}
	}
	if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
	{
		bLocal_47 = true;
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), false);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_242, 1862763509);
	}
}

int func_74(int iParam0)
{
	if (func_78())
	{
		Global_111848 = 1;
		Global_111845 = MISC::GET_GAME_TIMER();
		if (func_19(Global_111847))
		{
			func_75(0);
		}
		HUD::SET_MISSION_NAME(true, "RE_TITLE");
		if (iParam0 && func_19(Global_111847))
		{
			HUD::FLASH_MINIMAP_DISPLAY();
		}
		return 1;
	}
	return 0;
}

void func_75(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_111858.f_24991.f_2 < 3)
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					func_76(func_77(iParam0), -1);
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
					func_76(func_77(iParam0), -1);
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
					func_76(func_77(iParam0), -1);
					Global_111858.f_24991.f_4++;
					unk_0xBE20AB8238688965(&Global_111854, 2);
				}
			}
			break;
	}
}

void func_76(var uParam0, int iParam1)
{
	unk_0x17751E107423AFE9(uParam0);
	FILES::GET_DLC_VEHICLE_FLAGS(0, 0, 1, iParam1);
}

char* func_77(int iParam0)
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

int func_78()
{
	switch (func_79(&Global_31027, 0, 5, 0, SCRIPT::GET_ID_OF_THIS_THREAD()))
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

int func_79(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
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
		if (func_83(0))
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
		if (!func_81(iParam2))
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
			func_80(uParam0, iParam4);
		}
	}
	return 2;
}

void func_80(var uParam0, int iParam1)
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

bool func_81(int iParam0)
{
	return func_82(iParam0, Global_41631);
}

int func_82(int iParam0, int iParam1)
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

int func_83(int iParam0)
{
	if (Global_41631 == 15)
	{
		return 0;
	}
	if (func_81(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_84()
{
	int iVar0;
	
	if ((!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(iLocal_222[0]) && !STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(unk_0x9B0761B4C3EB8BC7())) && !STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_218))
	{
	}
	if ((unk_0x1037B9D45CE6B788(unk_0x9B0761B4C3EB8BC7(), 220.6075f, 2615.145f, 35.8465f, 440.8339f, 2684.23f, 72.6324f, 183.125f, 0, 1, 0) && CAM::IS_SPHERE_VISIBLE(Local_217, 1f)) || unk_0xC2169C00B643278B(unk_0x9B0761B4C3EB8BC7(), 325.6556f, 2647.021f, 43.6289f, 30f, 30f, 30f, 0, 1, 0))
	{
		iVar0 = 0;
		while (iVar0 < iLocal_222)
		{
			if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(iLocal_222[iVar0]))
			{
				ENTITY::SET_ENTITY_CAN_BE_DAMAGED_BY_RELATIONSHIP_GROUP(iLocal_222[iVar0], true, iLocal_241);
				if (!SYSTEM::VMAG(uLocal_267[iVar0]))
				{
					uLocal_267[iVar0] = func_85(iLocal_222[iVar0], 0, 145);
					HUD::SHOW_HEIGHT_ON_BLIP(uLocal_267[iVar0], false);
				}
			}
			iVar0++;
		}
		if (!PED::IS_PED_IN_ANY_POLICE_VEHICLE(bLocal_218, 0) || (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_218) && !iLocal_249))
		{
			ENTITY::SET_ENTITY_CAN_BE_DAMAGED_BY_RELATIONSHIP_GROUP(bLocal_218, true, iLocal_242);
			iLocal_265 = func_85(bLocal_218, 0, 145);
			HUD::SHOW_HEIGHT_ON_BLIP(iLocal_265, false);
			iLocal_248 = 0;
			iLocal_249 = 1;
		}
		if (!PED::IS_PED_IN_ANY_POLICE_VEHICLE(bLocal_219, 0) || (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_219) && !iLocal_250))
		{
			ENTITY::SET_ENTITY_CAN_BE_DAMAGED_BY_RELATIONSHIP_GROUP(bLocal_219, true, iLocal_242);
			iLocal_266 = func_85(bLocal_219, 0, 145);
			HUD::SHOW_HEIGHT_ON_BLIP(iLocal_266, false);
			iLocal_247 = 0;
			iLocal_250 = 1;
		}
		SYSTEM::SETTIMERA(0);
		if (!func_87())
		{
			func_74(1);
		}
	}
}

int func_85(bool bParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_86(bParam0, !bParam1, 0);
	if ((iParam2 != 145 && SYSTEM::VMAG(iVar0)) && unk_0x3030AE9FCF1BC243(&(Global_1848[iParam2 /*29*/].f_3)))
	{
		PED::IS_PED_IN_PARACHUTE_FREE_FALL(iVar0, &(Global_1848[iParam2 /*29*/].f_3));
	}
	return iVar0;
}

bool func_86(bool bParam0, bool bParam1, bool bParam2)
{
	bool bVar0;
	
	if (!MISC::IS_BIT_SET(iParam0))
	{
		return 0;
	}
	bVar0 = TASK::IS_PED_SPRINTING(bParam0);
	if (ENTITY::IS_ENTITY_A_VEHICLE(bParam0))
	{
		HUD::SET_BLIP_SCALE(bVar0, func_58(MISC::SET_BIT(), 1f, 1f));
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
		HUD::SET_BLIP_SCALE(bVar0, func_58(MISC::SET_BIT(), 0.7f, 0.7f));
		HUD::SET_BLIP_AS_FRIENDLY(bVar0, bParam1);
	}
	else if (ENTITY::IS_ENTITY_AN_OBJECT(bParam0))
	{
		HUD::SET_BLIP_SCALE(bVar0, func_58(MISC::SET_BIT(), 0.7f, 0.7f));
	}
	return bVar0;
}

int func_87()
{
	if ((Global_111847 == func_34() && MISC::GET_RANDOM_EVENT_FLAG()) && Global_111848)
	{
		return 1;
	}
	return 0;
}

void func_88()
{
	int iVar0;
	
	if (!iLocal_252)
	{
		if (!bLocal_47 && !iLocal_240)
		{
			if (unk_0xC2169C00B643278B(unk_0x9B0761B4C3EB8BC7(), 325.6556f, 2647.021f, 43.6289f, 30f, 30f, 30f, 0, 1, 0))
			{
				iVar0 = 0;
				while (iVar0 < iLocal_222)
				{
					if (SYSTEM::VMAG(uLocal_267[iVar0]))
					{
						HUD::SHOW_HEIGHT_ON_BLIP(uLocal_267[iVar0], true);
					}
					iVar0++;
				}
				if (SYSTEM::VMAG(iLocal_265))
				{
					HUD::SHOW_HEIGHT_ON_BLIP(iLocal_265, true);
				}
				if (SYSTEM::VMAG(iLocal_266))
				{
					HUD::SHOW_HEIGHT_ON_BLIP(iLocal_266, true);
				}
				if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(iLocal_222[0]))
				{
					func_56(&uLocal_52, 4, iLocal_222[0], "RECSBCop1", 0, 1);
					func_39(&uLocal_52, "recsbau", "recsb_copswa", 4, 0, 0, 0);
				}
				else if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(iLocal_222[1]))
				{
					AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_222[1], "S_M_Y_RANGER_01_WHITE_FULL_01");
					func_59(&uLocal_52, 4);
					func_56(&uLocal_52, 4, iLocal_222[1], "RECSBCop1", 0, 1);
					func_39(&uLocal_52, "recsbau", "recsb_copswa", 4, 0, 0, 0);
				}
				else if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(iLocal_222[2]))
				{
					AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_222[2], "S_M_Y_RANGER_01_WHITE_FULL_01");
					func_59(&uLocal_52, 4);
					func_56(&uLocal_52, 4, iLocal_222[2], "RECSBCop1", 0, 1);
					func_39(&uLocal_52, "recsbau", "recsb_copswa", 4, 0, 0, 0);
				}
				iLocal_252 = 1;
			}
		}
	}
	if ((func_87() && !iLocal_238) && !iLocal_240)
	{
		if (iLocal_255 == 0 && !func_37())
		{
			SYSTEM::SETTIMERA(0);
			if (func_51() == 0)
			{
				func_39(&uLocal_52, "recsbau", "recsb_comm", 4, 0, 0, 0);
			}
			else if (func_51() == 1)
			{
				func_39(&uLocal_52, "recsbau", "recsb_comf", 4, 0, 0, 0);
			}
			else if (func_51() == 2)
			{
				func_39(&uLocal_52, "recsbau", "recsb_comt", 4, 0, 0, 0);
			}
			iLocal_255++;
			SYSTEM::SETTIMERA(0);
		}
		if (iLocal_255 == 1 && !func_37())
		{
			SYSTEM::SETTIMERA(0);
			if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(iLocal_222[0]))
			{
				func_56(&uLocal_52, 4, iLocal_222[0], "RECSBCop1", 0, 1);
				func_39(&uLocal_52, "recsbau", "recsb_banteb", 4, 0, 0, 0);
			}
			else if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(iLocal_222[1]))
			{
				AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_222[1], "S_M_Y_RANGER_01_WHITE_FULL_01");
				func_59(&uLocal_52, 4);
				func_56(&uLocal_52, 4, iLocal_222[1], "RECSBCop1", 0, 1);
				func_39(&uLocal_52, "recsbau", "recsb_banteb", 4, 0, 0, 0);
			}
			else if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(iLocal_222[2]))
			{
				AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_222[2], "S_M_Y_RANGER_01_WHITE_FULL_01");
				func_59(&uLocal_52, 4);
				func_56(&uLocal_52, 4, iLocal_222[2], "RECSBCop1", 0, 1);
				func_39(&uLocal_52, "recsbau", "recsb_banteb", 4, 0, 0, 0);
			}
			iLocal_255++;
			SYSTEM::SETTIMERA(0);
		}
		if ((iLocal_255 == 2 && SYSTEM::TIMERA() > 2000) && !func_37())
		{
			if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_218))
			{
				func_39(&uLocal_52, "recsbau", "recsb_bantea", 4, 0, 0, 0);
			}
			else if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_219))
			{
				func_59(&uLocal_52, 5);
				func_56(&uLocal_52, 5, bLocal_219, "RECSBRobber1", 0, 1);
				func_39(&uLocal_52, "recsbau", "recsb_bantea", 4, 0, 0, 0);
			}
			SYSTEM::SETTIMERA(0);
			iLocal_255++;
		}
		if ((iLocal_255 == 3 && SYSTEM::TIMERA() > 2000) && !func_37())
		{
			if (!bLocal_48)
			{
				if (!iLocal_237)
				{
					if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_218))
					{
						func_39(&uLocal_52, "recsbau", "recsb_croclo", 4, 0, 0, 0);
					}
					else if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_219))
					{
						func_59(&uLocal_52, 5);
						func_56(&uLocal_52, 5, bLocal_219, "RECSBRobber1", 0, 1);
						func_39(&uLocal_52, "recsbau", "recsb_croclo", 4, 0, 0, 0);
					}
					iLocal_237 = 1;
				}
			}
			if (!bLocal_47)
			{
				func_89(&(iLocal_222[0]), "recsb_copclo");
				func_89(&(iLocal_222[1]), "recsb_copclo");
				func_89(&(iLocal_222[2]), "recsb_copclo");
			}
		}
		if (iLocal_255 == 4 && SYSTEM::TIMERA() > 5000)
		{
			SYSTEM::SETTIMERA(0);
			iLocal_255++;
		}
	}
}

void func_89(var uParam0, char* sParam1)
{
	if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(*uParam0))
	{
		if (ENTITY::IS_ENTITY_AT_ENTITY(unk_0x9B0761B4C3EB8BC7(), *uParam0, 4f, 4f, 4f, false, true, 0))
		{
			if (!bLocal_47)
			{
				func_56(&uLocal_52, 4, *uParam0, "RECSBCop1", 0, 1);
				func_39(&uLocal_52, "recsbau", sParam1, 4, 0, 0, 0);
				TASK::TASK_LOOK_AT_ENTITY(*uParam0, unk_0x9B0761B4C3EB8BC7(), 10000, 48, 4);
			}
			SYSTEM::SETTIMERA(0);
			iLocal_255++;
		}
	}
}

void func_90()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iLocal_222)
	{
		if (STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(iLocal_222[iVar0]))
		{
			if (SYSTEM::VMAG(uLocal_267[iVar0]))
			{
				unk_0x93370FA10F15BE44(&(uLocal_267[iVar0]));
			}
		}
		iVar0++;
	}
	if (STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_218))
	{
		if (SYSTEM::VMAG(iLocal_265))
		{
			unk_0x93370FA10F15BE44(&iLocal_265);
		}
	}
	if (STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_219))
	{
		if (SYSTEM::VMAG(iLocal_266))
		{
			unk_0x93370FA10F15BE44(&iLocal_266);
		}
	}
	iVar0 = 0;
	while (iVar0 < iLocal_225)
	{
		if (!PED::IS_PED_IN_ANY_POLICE_VEHICLE(iLocal_225[iVar0], 0))
		{
			if (unk_0xE0B3BC41DDA88DF0(unk_0x9B0761B4C3EB8BC7(), iLocal_225[iVar0], 0))
			{
				VEHICLE::SET_VEHICLE_HAS_MUTED_SIRENS(iLocal_225[iVar0], false);
			}
		}
		iVar0++;
	}
	if (bLocal_48)
	{
		if (!iLocal_50)
		{
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_241, 1862763509);
			if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_218))
			{
				if (SYSTEM::VMAG(iLocal_265))
				{
					unk_0x93370FA10F15BE44(&iLocal_265);
				}
				if (!SYSTEM::VMAG(iLocal_265))
				{
					iLocal_265 = func_85(bLocal_218, 1, 145);
					PED::SET_PED_CAN_BE_TARGETTED(bLocal_218, true);
				}
				TASK::TASK_COMBAT_PED(bLocal_218, unk_0x9B0761B4C3EB8BC7(), 0, 16);
				PED::SET_PED_KEEP_TASK(bLocal_218, true);
				PED::REGISTER_TARGET(bLocal_218, unk_0x9B0761B4C3EB8BC7());
				PED::SET_PED_HIGHLY_PERCEPTIVE(bLocal_218, true);
			}
			if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_219))
			{
				if (SYSTEM::VMAG(iLocal_266))
				{
					unk_0x93370FA10F15BE44(&iLocal_266);
				}
				if (!SYSTEM::VMAG(iLocal_266))
				{
					iLocal_266 = func_85(bLocal_219, 1, 145);
					PED::SET_PED_CAN_BE_TARGETTED(bLocal_219, true);
				}
				TASK::TASK_COMBAT_PED(bLocal_219, unk_0x9B0761B4C3EB8BC7(), 0, 16);
				PED::SET_PED_KEEP_TASK(bLocal_219, true);
				PED::REGISTER_TARGET(bLocal_219, unk_0x9B0761B4C3EB8BC7());
				PED::SET_PED_HIGHLY_PERCEPTIVE(bLocal_219, true);
			}
			iLocal_50 = 1;
		}
		if (bLocal_47)
		{
			if (!iLocal_51)
			{
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_242, 1862763509);
				iVar0 = 0;
				while (iVar0 < iLocal_222)
				{
					if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(iLocal_222[iVar0]))
					{
						PED::SET_PED_CAN_BE_TARGETTED(iLocal_222[iVar0], true);
						if (SYSTEM::VMAG(uLocal_267[iVar0]))
						{
							unk_0x93370FA10F15BE44(&(uLocal_267[iVar0]));
						}
						TASK::TASK_COMBAT_PED(iLocal_222[iVar0], unk_0x9B0761B4C3EB8BC7(), 0, 16);
						PED::SET_PED_KEEP_TASK(iLocal_222[iVar0], true);
						PED::REGISTER_TARGET(iLocal_222[iVar0], unk_0x9B0761B4C3EB8BC7());
						PED::SET_PED_HIGHLY_PERCEPTIVE(iLocal_222[iVar0], true);
					}
					iVar0++;
				}
				iLocal_51 = 1;
			}
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < iLocal_222)
			{
				if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(iLocal_222[iVar0]))
				{
					PED::SET_PED_CAN_BE_TARGETTED(iLocal_222[iVar0], false);
				}
				iVar0++;
			}
		}
	}
	else if (bLocal_47)
	{
		if (!iLocal_49)
		{
			if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_218))
			{
				PED::SET_PED_CAN_BE_TARGETTED(bLocal_218, false);
			}
			if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_219))
			{
				PED::SET_PED_CAN_BE_TARGETTED(bLocal_219, false);
			}
			iLocal_49 = 1;
		}
		if (!iLocal_51)
		{
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_242, 1862763509);
			iVar0 = 0;
			while (iVar0 < iLocal_222)
			{
				if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(iLocal_222[iVar0]))
				{
					PED::SET_PED_CAN_BE_TARGETTED(iLocal_222[iVar0], true);
					HUD::_0xC594B315EDF2D4AF(iLocal_222[iVar0]);
					if (SYSTEM::VMAG(uLocal_267[iVar0]))
					{
						unk_0x93370FA10F15BE44(&(uLocal_267[iVar0]));
					}
					if (!SYSTEM::VMAG(uLocal_267[iVar0]))
					{
						uLocal_267[iVar0] = func_85(iLocal_222[iVar0], 1, 145);
					}
					TASK::TASK_COMBAT_PED(iLocal_222[iVar0], unk_0x9B0761B4C3EB8BC7(), 0, 16);
					PED::SET_PED_KEEP_TASK(iLocal_222[iVar0], true);
					PED::REGISTER_TARGET(iLocal_222[iVar0], unk_0x9B0761B4C3EB8BC7());
					PED::SET_PED_HIGHLY_PERCEPTIVE(iLocal_222[iVar0], true);
				}
				iVar0++;
			}
			iLocal_51 = 1;
		}
	}
}

void func_91()
{
	unk_0x78FCB2E22C41B9D5(joaat("s_m_y_ranger_01"));
	unk_0x78FCB2E22C41B9D5(joaat("a_m_y_genstreet_01"));
	unk_0x78FCB2E22C41B9D5(joaat("s_m_m_paramedic_01"));
	unk_0x78FCB2E22C41B9D5(joaat("sheriff"));
	unk_0x78FCB2E22C41B9D5(joaat("phoenix"));
	if ((((ENTITY::DOES_ENTITY_EXIST(joaat("s_m_y_ranger_01")) && ENTITY::DOES_ENTITY_EXIST(joaat("a_m_y_genstreet_01"))) && ENTITY::DOES_ENTITY_EXIST(joaat("s_m_m_paramedic_01"))) && ENTITY::DOES_ENTITY_EXIST(joaat("sheriff"))) && ENTITY::DOES_ENTITY_EXIST(joaat("phoenix")))
	{
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("phoenix"), true);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), true);
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
		PATHFIND::SET_ROADS_IN_AREA(Vector(44.49f, 2630.83f, 335.22f) - Vector(20f, 50f, 50f), Vector(44.49f, 2630.83f, 335.22f) + Vector(20f, 50f, 50f), false, true, 1, 1);
		PATHFIND::SET_ROADS_IN_ANGLED_AREA(418.2996f, 2650.597f, 42.84723f, 297.8981f, 2617.968f, 53.6412f, 49.6875f, false, false, true);
		unk_0xAF7D4BF357E8B79E(Vector(43.4932f, 2612.694f, 328.0555f) - Vector(10f, 10f, 10f), Vector(43.4932f, 2612.694f, 328.0555f) + Vector(10f, 10f, 10f), 0, 1);
		MISC::CLEAR_AREA_OF_VEHICLES(328.0555f, 2612.694f, 43.4932f, 5f, false, false, false, false, false, false);
		bLocal_226 = VEHICLE::CREATE_VEHICLE(joaat("phoenix"), 326.78f, 2626.56f, 43.5081f, 45.21f, true, true, false);
		iLocal_225[0] = VEHICLE::CREATE_VEHICLE(joaat("sheriff"), 314.1008f, 2641.67f, 43.5055f, 258.9436f, true, true, false);
		iLocal_225[1] = VEHICLE::CREATE_VEHICLE(joaat("sheriff"), 330.7097f, 2646.913f, 43.685f, 120.9436f, true, true, false);
		iLocal_225[2] = VEHICLE::CREATE_VEHICLE(joaat("sheriff"), 321.4496f, 2649.388f, 43.5706f, 105.9436f, true, true, false);
		AUDIO::SET_SIREN_WITH_NO_DRIVER(iLocal_225[2], true);
		AUDIO::SET_SIREN_WITH_NO_DRIVER(iLocal_225[1], true);
		AUDIO::SET_SIREN_WITH_NO_DRIVER(iLocal_225[0], true);
		VEHICLE::SET_VEHICLE_SIREN(iLocal_225[2], true);
		VEHICLE::SET_VEHICLE_SIREN(iLocal_225[1], true);
		VEHICLE::SET_VEHICLE_SIREN(iLocal_225[0], true);
		VEHICLE::SET_VEHICLE_HAS_MUTED_SIRENS(iLocal_225[0], true);
		VEHICLE::SET_VEHICLE_HAS_MUTED_SIRENS(iLocal_225[2], true);
		VEHICLE::SET_VEHICLE_HAS_MUTED_SIRENS(iLocal_225[1], true);
		VEHICLE::SET_VEHICLE_PROVIDES_COVER(bLocal_226, true);
		VEHICLE::SET_VEHICLE_PROVIDES_COVER(iLocal_225[0], true);
		VEHICLE::SET_VEHICLE_PROVIDES_COVER(iLocal_225[1], true);
		VEHICLE::SET_VEHICLE_PROVIDES_COVER(iLocal_225[2], true);
		bLocal_218 = PED::CREATE_PED(19, joaat("a_m_y_genstreet_01"), 321.31f, 2615.66f, 43.4963f, 346f, true, true);
		bLocal_219 = PED::CREATE_PED(19, joaat("a_m_y_genstreet_01"), 326.25f, 2624.51f, 43.4846f, 341f, true, true);
		bLocal_223 = PED::CREATE_PED(6, joaat("s_m_y_ranger_01"), 325.3731f, 2631.16f, 43.5248f, 87f, true, true);
		iLocal_222[0] = PED::CREATE_PED(6, joaat("s_m_y_ranger_01"), 310.6203f, 2642.854f, 43.5173f, 226f, true, true);
		iLocal_222[1] = PED::CREATE_PED(6, joaat("s_m_y_ranger_01"), 319.5652f, 2650.067f, 43.5411f, 189f, true, true);
		iLocal_222[2] = PED::CREATE_PED(6, joaat("s_m_y_ranger_01"), 324.0396f, 2650.964f, 43.5983f, 214f, true, true);
		PED::SET_PED_NAME_DEBUG(iLocal_222[0], "ped_cops[0]");
		PED::SET_PED_NAME_DEBUG(iLocal_222[1], "ped_cops[1]");
		PED::SET_PED_NAME_DEBUG(iLocal_222[2], "ped_cops[2]");
		PED::SET_PED_USING_ACTION_MODE(iLocal_222[0], true, -1, 0);
		PED::SET_PED_USING_ACTION_MODE(iLocal_222[1], true, -1, 0);
		PED::SET_PED_USING_ACTION_MODE(iLocal_222[2], true, -1, 0);
		PED::SET_PED_SPHERE_DEFENSIVE_AREA(bLocal_219, 326.25f, 2624.51f, 43.4846f, 3.5f, false, false);
		PED::SET_PED_SPHERE_DEFENSIVE_AREA(bLocal_218, 321.31f, 2615.66f, 43.4963f, 3.5f, false, false);
		PED::SET_PED_SPHERE_DEFENSIVE_AREA(iLocal_222[0], 310.6203f, 2642.854f, 43.5173f, 3.5f, false, false);
		PED::SET_PED_SPHERE_DEFENSIVE_AREA(iLocal_222[1], 319.5652f, 2650.067f, 43.5411f, 3.5f, false, false);
		PED::SET_PED_SPHERE_DEFENSIVE_AREA(iLocal_222[2], 324.0396f, 2650.964f, 43.5983f, 3.5f, false, false);
		TASK::TASK_STAY_IN_COVER(iLocal_222[0]);
		TASK::TASK_STAY_IN_COVER(iLocal_222[1]);
		TASK::TASK_STAY_IN_COVER(iLocal_222[2]);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_222[0], 0, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_222[1], 0, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_222[2], 0, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_222[0], 1, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_222[1], 1, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_222[2], 1, true);
		PED::SET_PED_ACCURACY(iLocal_222[0], 13);
		PED::SET_PED_ACCURACY(iLocal_222[1], 13);
		PED::SET_PED_ACCURACY(iLocal_222[2], 13);
		PED::SET_PED_COMBAT_ATTRIBUTES(bLocal_219, 0, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(bLocal_218, 0, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(bLocal_219, 1, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(bLocal_218, 1, true);
		VEHICLE::SET_VEHICLE_DOOR_OPEN(iLocal_225[0], 0, false, false);
		VEHICLE::SET_VEHICLE_DOOR_OPEN(iLocal_225[0], 1, false, false);
		VEHICLE::SET_VEHICLE_DOOR_OPEN(iLocal_225[1], 1, false, false);
		VEHICLE::SET_VEHICLE_DOOR_OPEN(iLocal_225[1], 0, false, false);
		VEHICLE::SET_VEHICLE_DOOR_OPEN(iLocal_225[2], 1, false, false);
		VEHICLE::SET_VEHICLE_DOOR_OPEN(iLocal_225[2], 0, false, false);
		VEHICLE::SET_VEHICLE_DOOR_OPEN(bLocal_226, 1, false, false);
		VEHICLE::SET_VEHICLE_DOOR_OPEN(bLocal_226, 0, false, false);
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(bLocal_226, true, 1);
		PED::ADD_RELATIONSHIP_GROUP("robbers", &iLocal_241);
		PED::ADD_RELATIONSHIP_GROUP("cops", &iLocal_242);
		CAM::IS_AIM_CAM_ACTIVE(bLocal_223, 0, 0);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(bLocal_219, iLocal_241);
		ENTITY::SET_ENTITY_CAN_BE_DAMAGED_BY_RELATIONSHIP_GROUP(bLocal_219, false, iLocal_242);
		CAM::IS_AIM_CAM_ACTIVE(bLocal_219, 300, 0);
		unk_0x92BD213E6A0E666B(bLocal_219, joaat("weapon_pistol"), 200, 1, 1);
		PED::SET_PED_SEEING_RANGE(bLocal_219, 100f);
		PED::SET_PED_HEARING_RANGE(bLocal_219, 100f);
		TASK::TASK_GUARD_CURRENT_POSITION(bLocal_219, 35f, 35f, true);
		PED::SET_PED_ACCURACY(bLocal_219, 13);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(bLocal_218, iLocal_241);
		ENTITY::SET_ENTITY_CAN_BE_DAMAGED_BY_RELATIONSHIP_GROUP(bLocal_218, false, iLocal_242);
		CAM::IS_AIM_CAM_ACTIVE(bLocal_218, 300, 0);
		unk_0x92BD213E6A0E666B(bLocal_218, joaat("weapon_pistol"), 200, 1, 1);
		PED::SET_PED_SEEING_RANGE(bLocal_218, 100f);
		PED::SET_PED_HEARING_RANGE(bLocal_218, 100f);
		TASK::TASK_GUARD_CURRENT_POSITION(bLocal_218, 35f, 35f, true);
		PED::SET_PED_ACCURACY(bLocal_218, 13);
		ENTITY::SET_ENTITY_CAN_BE_DAMAGED_BY_RELATIONSHIP_GROUP(iLocal_222[0], false, iLocal_241);
		ENTITY::SET_ENTITY_CAN_BE_DAMAGED_BY_RELATIONSHIP_GROUP(iLocal_222[1], false, iLocal_241);
		ENTITY::SET_ENTITY_CAN_BE_DAMAGED_BY_RELATIONSHIP_GROUP(iLocal_222[2], false, iLocal_241);
		unk_0x92BD213E6A0E666B(iLocal_222[0], joaat("weapon_pumpshotgun"), 200, 1, 1);
		unk_0x92BD213E6A0E666B(iLocal_222[1], joaat("weapon_pistol"), 200, 1, 1);
		unk_0x92BD213E6A0E666B(iLocal_222[2], joaat("weapon_pumpshotgun"), 200, 1, 1);
		PED::SET_PED_SEEING_RANGE(iLocal_222[0], 100f);
		PED::SET_PED_HEARING_RANGE(iLocal_222[0], 100f);
		PED::SET_PED_SEEING_RANGE(iLocal_222[1], 100f);
		PED::SET_PED_HEARING_RANGE(iLocal_222[1], 100f);
		PED::SET_PED_SEEING_RANGE(iLocal_222[2], 100f);
		PED::SET_PED_HEARING_RANGE(iLocal_222[2], 100f);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_222[0], iLocal_242);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_222[1], iLocal_242);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_222[2], iLocal_242);
		MISC::ENABLE_DISPATCH_SERVICE(5, false);
		MISC::ENABLE_DISPATCH_SERVICE(3, false);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_242, joaat("COP"));
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("COP"), iLocal_242);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_242, 1862763509);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_241, 1862763509);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_242, iLocal_241);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, joaat("COP"), iLocal_241);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_241, iLocal_242);
		TASK::TASK_SEEK_COVER_FROM_PED(iLocal_222[0], bLocal_218, 3000, false);
		TASK::TASK_SEEK_COVER_FROM_PED(iLocal_222[1], bLocal_218, 3000, false);
		TASK::TASK_SEEK_COVER_FROM_PED(iLocal_222[2], bLocal_218, 3000, false);
		if (func_51() == 0)
		{
			func_56(&uLocal_52, 0, unk_0x9B0761B4C3EB8BC7(), "MICHAEL", 0, 1);
		}
		else if (func_51() == 1)
		{
			func_56(&uLocal_52, 0, unk_0x9B0761B4C3EB8BC7(), "FRANKLIN", 0, 1);
		}
		else if (func_51() == 2)
		{
			func_56(&uLocal_52, 0, unk_0x9B0761B4C3EB8BC7(), "TREVOR", 0, 1);
		}
		func_56(&uLocal_52, 4, iLocal_222[0], "RECSBCop1", 0, 1);
		func_56(&uLocal_52, 5, bLocal_218, "RECSBRobber1", 0, 1);
		AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_222[0], "S_M_Y_RANGER_01_WHITE_FULL_01");
		AUDIO::SET_AMBIENT_VOICE_NAME(bLocal_218, "G_M_Y_ArmGoon_02_White_Armenian_MINI_01");
		AUDIO::SET_AMBIENT_VOICE_NAME(bLocal_218, "G_M_Y_ArmGoon_02_White_Armenian_MINI_01");
		iLocal_45 = 1;
	}
}

void func_92(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_34();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_94(iParam0);
	MISC::_0x65D2EBB47E1CEC21(false);
	MISC::SET_RANDOM_EVENT_FLAG(true);
	Global_111844 = 0;
	func_93();
}

void func_93()
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

void func_94(int iParam0)
{
	Global_111847 = iParam0;
}

int func_95(struct<3> Param0, int iParam1, int iParam2, bool bParam3, bool bParam4)
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
		iParam1 = func_34();
	}
	if (iParam1 == -1)
	{
		return 0;
	}
	if (iParam1 == 31 || iParam1 == 32)
	{
		if (!func_147())
		{
			return 0;
		}
	}
	Local_43 = { Param0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_ID()) && !STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(unk_0x9B0761B4C3EB8BC7()))
		{
			Var1 = { NETWORK::NETWORK_ARE_HANDLES_THE_SAME(unk_0x9B0761B4C3EB8BC7(), 1) };
			if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(unk_0x9B0761B4C3EB8BC7())) > 1369f && !func_146())
			{
				return 0;
			}
		}
		if (!Global_111858.f_9081)
		{
			return 0;
		}
		if (func_10(0))
		{
			return 0;
		}
		if (func_142())
		{
			return 0;
		}
		if (func_141())
		{
			return 0;
		}
		if (Global_111847 != -1)
		{
			return 0;
		}
		if (func_27(func_51()))
		{
			if (func_135(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_ID()) && !bParam4)
		{
			if ((Var1.f_2 - Local_43.f_2) > 50f)
			{
				return 0;
			}
		}
		if (!func_134(iParam1))
		{
			return 0;
		}
		if (func_27(func_51()))
		{
			if (func_133(func_51()) == 4 || func_133(func_51()) == 5)
			{
				return 0;
			}
		}
		if (func_27(func_51()))
		{
			if (!func_132(iParam1, iParam2, 145))
			{
				return 0;
			}
		}
		if (!func_131(Global_111858.f_24991.f_43[iParam1]))
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
		if (func_130())
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
		if (!func_121(4))
		{
			return 0;
		}
		if (!func_81(5))
		{
			return 0;
		}
		if (func_120(iParam1, iParam2) && !bParam3)
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
		if ((iParam1 == 9 && (iParam2 == 2 || iParam2 == 5)) && !func_120(0, 0))
		{
			return 0;
		}
		if (Global_31114)
		{
			return 0;
		}
		if (func_134(30) && !func_120(30, 0))
		{
			if (iParam1 != 30)
			{
				if (SYSTEM::VDIST2(Var1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_27(func_51()))
		{
			iVar2 = 0;
			while (iVar2 < 3)
			{
				Var3 = { Global_111858.f_2359.f_539.f_2300[iVar2 /*3*/] };
				iVar4 = Global_111858.f_2359.f_539.f_2296[iVar2];
				if (func_119(iVar4))
				{
					if (func_97(iVar2))
					{
						if (!func_96(Var3, 0f, 0f, 0f, 0))
						{
							if (SYSTEM::VDIST2(NETWORK::NETWORK_ARE_HANDLES_THE_SAME(unk_0x9B0761B4C3EB8BC7(), 0), Var3) < (210f * 210f))
							{
								if (func_51() != iVar2)
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

bool func_96(struct<3> Param0, struct<3> Param1, bool bParam2)
{
	if (bParam2)
	{
		return (Param0.x == Param1.x && Param0.f_1 == Param1.f_1);
	}
	return ((Param0.x == Param1.x && Param0.f_1 == Param1.f_1) && Param0.f_2 == Param1.f_2);
}

bool func_97(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_111858.f_2359.f_539.f_2296[iParam0];
	return func_98(iVar0);
}

int func_98(int iParam0)
{
	return func_99(iParam0, 1);
}

int func_99(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_119(iParam0))
	{
		return 0;
	}
	func_100(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_100(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	func_101(func_112(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_101(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_111(iParam0, iParam1))
	{
		iVar0 = func_110(iParam1);
		iVar1 = func_108(iParam0);
		iVar2 = (func_108(iParam0) - func_108(iParam1));
		iVar3 = (func_110(iParam0) - func_110(iParam1));
		iVar4 = (func_107(iParam0) - func_107(iParam1));
		iVar5 = (func_106(iParam0) - func_106(iParam1));
		iVar6 = (func_105(iParam0) - func_105(iParam1));
		iVar7 = (func_104(iParam0) - func_104(iParam1));
	}
	else
	{
		iVar0 = func_110(iParam0);
		iVar1 = func_108(iParam1);
		iVar2 = (func_108(iParam1) - func_108(iParam0));
		iVar3 = (func_110(iParam1) - func_110(iParam0));
		iVar4 = (func_107(iParam1) - func_107(iParam0));
		iVar5 = (func_106(iParam1) - func_106(iParam0));
		iVar6 = (func_105(iParam1) - func_105(iParam0));
		iVar7 = (func_104(iParam1) - func_104(iParam0));
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
		iVar4 = (iVar4 + func_103(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = SYSTEM::ROUND(func_102(SYSTEM::TO_FLOAT(iVar0 + 1), 0f, 12f));
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

float func_102(float fParam0, float fParam1, float fParam2)
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

int func_103(int iParam0, int iParam1)
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

int func_104(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 20) & 63;
}

int func_105(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 14) & 63;
}

int func_106(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 9) & 31;
}

int func_107(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 4) & 31;
}

int func_108(bool bParam0)
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * func_109(unk_0xCE990E643CD9D0E5(iParam0, 31), -1, 1)) + 2011;
}

int func_109(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_110(int iParam0)
{
	return iParam0 & 15;
}

int func_111(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_119(iParam1) || !func_119(iParam0))
	{
		return 1;
	}
	iVar0 = func_108(iParam0);
	iVar1 = func_108(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_110(iParam0);
	iVar1 = func_110(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_107(iParam0);
	iVar1 = func_107(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_106(iParam0);
	iVar1 = func_106(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_105(iParam0);
	iVar1 = func_105(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_104(iParam0);
	iVar1 = func_104(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_112()
{
	var uVar0;
	
	func_118(&uVar0, CLOCK::GET_CLOCK_MINUTES());
	func_117(&uVar0, CLOCK::GET_CLOCK_HOURS());
	func_116(&uVar0, CLOCK::GET_CLOCK_DAY_OF_MONTH());
	func_115(&uVar0, CLOCK::GET_CLOCK_MONTH());
	func_114(&uVar0, CLOCK::GET_CLOCK_YEAR());
	func_113(&uVar0, SYSTEM::SHIFT_LEFT());
	return uVar0;
}

void func_113(var uParam0, int iParam1)
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

void func_114(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_115(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_110(*uParam0);
	iVar1 = func_108(*uParam0);
	if (iParam1 < 1 || iParam1 > func_103(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

void func_116(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_117(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_118(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

int func_119(int iParam0)
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
	iVar0 = func_104(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_105(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_106(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_108(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_110(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_107(iParam0);
	if (iVar5 < 1 || iVar5 > func_103(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_120(int iParam0, int iParam1)
{
	if (unk_0xCE990E643CD9D0E5(Global_111858.f_24991.f_8[iParam0], iParam1))
	{
		return 1;
	}
	return 0;
}

int func_121(int iParam0)
{
	int iVar0;
	
	if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_ID()))
	{
		if (MISC::IS_BIT_SET(unk_0x9B0761B4C3EB8BC7()))
		{
			if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(unk_0x9B0761B4C3EB8BC7()))
			{
				iVar0 = func_51();
				if (!func_27(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(unk_0x9B0761B4C3EB8BC7())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(unk_0x9B0761B4C3EB8BC7())) || MISC::IS_PC_VERSION(unk_0x9B0761B4C3EB8BC7())) || PED::IS_PED_SHOOTING(unk_0x9B0761B4C3EB8BC7())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())) || PED::IS_PED_IN_COMBAT(unk_0x9B0761B4C3EB8BC7(), 0)) || func_129()) || Global_110905) || Global_30970) || func_128()) || func_53(8, -1)) || func_127()) || func_126()) || func_125()) || func_124()) || Global_111858.f_7684.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || func_129()) || Global_30970) || func_128()) || func_53(8, -1)) || func_125()) || func_127()) || func_126()) || func_124()) || Global_111858.f_7684.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(unk_0x9B0761B4C3EB8BC7())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(unk_0x9B0761B4C3EB8BC7())) || MISC::IS_PC_VERSION(unk_0x9B0761B4C3EB8BC7())) || PED::IS_PED_SHOOTING(unk_0x9B0761B4C3EB8BC7())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())) || PED::IS_PED_IN_COMBAT(unk_0x9B0761B4C3EB8BC7(), 0)) || func_129()) || Global_110905) || Global_30970) || func_128()) || func_53(8, -1)) || func_125()) || func_127()) || func_126()) || func_124()) || Global_111858.f_7684.f_919[iVar0] == 5) || Global_42178 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((MISC::IS_PC_VERSION(unk_0x9B0761B4C3EB8BC7()) || PED::IS_PED_SHOOTING(unk_0x9B0761B4C3EB8BC7())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PED::IS_PED_IN_COMBAT(unk_0x9B0761B4C3EB8BC7(), 0)) || func_129()) || Global_110905) || Global_30970) || func_128()) || func_53(8, -1)) || func_127()) || func_126()) || func_124()) || Global_111858.f_7684.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_129() || AUDIO::SET_SCRIPT_UPDATE_DOOR_AUDIO(PLAYER::PLAYER_ID()) > 0) || func_53(8, -1)) || func_124()) || func_123()) || Global_111858.f_7684.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_53(8, -1) || func_127()) || func_126()) || func_123()) || func_122())
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
							if ((((((((((((((PED::IS_PED_IN_COMBAT(unk_0x9B0761B4C3EB8BC7(), 0) || AUDIO::SET_SCRIPT_UPDATE_DOOR_AUDIO(PLAYER::PLAYER_ID()) > 0) || ENTITY::IS_ENTITY_IN_AIR(unk_0x9B0761B4C3EB8BC7())) || MISC::IS_PC_VERSION(unk_0x9B0761B4C3EB8BC7())) || PED::IS_PED_SHOOTING(unk_0x9B0761B4C3EB8BC7())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())) || func_129()) || Global_30970) || func_128()) || func_53(8, -1)) || func_126()) || func_125()) || func_124()) || Global_111858.f_7684.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((PED::IS_PED_IN_COMBAT(unk_0x9B0761B4C3EB8BC7(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) || !GRAPHICS::DRAW_SCALEFORM_MOVIE()) || ENTITY::IS_ENTITY_IN_AIR(unk_0x9B0761B4C3EB8BC7())) || MISC::IS_PC_VERSION(unk_0x9B0761B4C3EB8BC7())) || PED::IS_PED_SHOOTING(unk_0x9B0761B4C3EB8BC7())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || func_129()) || func_126()) || Global_110905) || Global_30970) || func_128()) || Global_42801) || func_53(8, -1)) || func_125()) || func_123()) || func_124()) || Global_111858.f_7684.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((PED::IS_PED_IN_COMBAT(unk_0x9B0761B4C3EB8BC7(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) || !GRAPHICS::DRAW_SCALEFORM_MOVIE()) || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0)) || ENTITY::IS_ENTITY_IN_AIR(unk_0x9B0761B4C3EB8BC7())) || SYSTEM::VDIST(unk_0x9B0761B4C3EB8BC7(), 1)) || MISC::IS_PC_VERSION(unk_0x9B0761B4C3EB8BC7())) || PED::IS_PED_SHOOTING(unk_0x9B0761B4C3EB8BC7())) || PED::IS_PED_DIVING(unk_0x9B0761B4C3EB8BC7())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())) || func_129()) || Global_110905) || Global_30970) || func_128()) || func_53(8, -1)) || func_125()) || func_123()) || func_127()) || func_126()) || func_124())
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

var func_122()
{
	return Global_98994.f_1;
}

int func_123()
{
	if (Global_95877 != -1)
	{
		return unk_0xCE990E643CD9D0E5(Global_89743[Global_95877 /*34*/].f_15, 13);
	}
	return 0;
}

int func_124()
{
	if (INTERIOR::GET_INTERIOR_AT_COORDS(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_125()
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

bool func_126()
{
	return Global_99007.f_352 > 0;
}

bool func_127()
{
	return Global_99007.f_351 > 0;
}

var func_128()
{
	return Global_1312896;
}

int func_129()
{
	if (!MISC::SET_BIT())
	{
		return Global_96433.f_44 == 1;
	}
	return 0;
}

int func_130()
{
	func_50();
	if (Global_8356[Global_19681 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_131(int iParam0)
{
	return func_111(func_112(), iParam0);
}

int func_132(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_51();
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

int func_133(int iParam0)
{
	if (!func_27(iParam0))
	{
		return 7;
	}
	return Global_111858.f_7684.f_919[iParam0];
}

bool func_134(int iParam0)
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_147())
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

int func_135(float fParam0, bool bParam1)
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
		if (func_27(func_51()))
		{
			iVar5 = func_24();
			iVar6 = 0;
			iVar6 = 0;
			while (iVar6 < 63)
			{
				iVar1 = iVar6;
				if (unk_0xCE990E643CD9D0E5(Global_111858.f_18570[iVar1 /*6*/], 2) && !unk_0xCE990E643CD9D0E5(Global_111858.f_18570[iVar1 /*6*/], 3))
				{
					func_136(iVar1, &Var0);
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

void func_136(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_137(uParam1, "Abigail1", func_139(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_138(iParam0), 1, 0);
			break;
		
		case 1:
			func_137(uParam1, "Abigail2", func_139(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_138(iParam0), 1, 0);
			break;
		
		case 2:
			func_137(uParam1, "Barry1", func_139(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_138(iParam0), 1, 0);
			break;
		
		case 3:
			func_137(uParam1, "Barry2", func_139(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_138(iParam0), 1, 1);
			break;
		
		case 4:
			func_137(uParam1, "Barry3", func_139(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_138(iParam0), 0, 0);
			break;
		
		case 5:
			func_137(uParam1, "Barry3A", func_139(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_138(iParam0), 0, 1);
			break;
		
		case 6:
			func_137(uParam1, "Barry3C", func_139(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_138(iParam0), 0, 1);
			break;
		
		case 7:
			func_137(uParam1, "Barry4", func_139(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_138(iParam0), 0, 0);
			break;
		
		case 8:
			func_137(uParam1, "Dreyfuss1", func_139(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_138(iParam0), 0, 0);
			break;
		
		case 9:
			func_137(uParam1, "Epsilon1", func_139(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_138(iParam0), 0, 0);
			break;
		
		case 10:
			func_137(uParam1, "Epsilon2", func_139(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_138(iParam0), 1, 0);
			break;
		
		case 11:
			func_137(uParam1, "Epsilon3", func_139(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_138(iParam0), 0, 0);
			break;
		
		case 12:
			func_137(uParam1, "Epsilon4", func_139(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_138(iParam0), 0, 0);
			break;
		
		case 13:
			func_137(uParam1, "Epsilon5", func_139(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_138(iParam0), 1, 0);
			break;
		
		case 14:
			func_137(uParam1, "Epsilon6", func_139(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_138(iParam0), 0, 1);
			break;
		
		case 15:
			func_137(uParam1, "Epsilon7", func_139(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_138(iParam0), 0, 0);
			break;
		
		case 16:
			func_137(uParam1, "Epsilon8", func_139(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_138(iParam0), 1, 0);
			break;
		
		case 17:
			func_137(uParam1, "Extreme1", func_139(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_138(iParam0), 0, 1);
			break;
		
		case 18:
			func_137(uParam1, "Extreme2", func_139(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_138(iParam0), 0, 1);
			break;
		
		case 19:
			func_137(uParam1, "Extreme3", func_139(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_138(iParam0), 0, 1);
			break;
		
		case 20:
			func_137(uParam1, "Extreme4", func_139(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_138(iParam0), 0, 0);
			break;
		
		case 21:
			func_137(uParam1, "Fanatic1", func_139(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_138(iParam0), 1, 0);
			break;
		
		case 22:
			func_137(uParam1, "Fanatic2", func_139(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_138(iParam0), 1, 0);
			break;
		
		case 23:
			func_137(uParam1, "Fanatic3", func_139(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_138(iParam0), 0, 1);
			break;
		
		case 24:
			func_137(uParam1, "Hao1", func_139(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_138(iParam0), 0, 1);
			break;
		
		case 25:
			func_137(uParam1, "Hunting1", func_139(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_138(iParam0), 0, 1);
			break;
		
		case 26:
			func_137(uParam1, "Hunting2", func_139(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_138(iParam0), 0, 1);
			break;
		
		case 27:
			func_137(uParam1, "Josh1", func_139(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_138(iParam0), 1, 0);
			break;
		
		case 28:
			func_137(uParam1, "Josh2", func_139(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_138(iParam0), 1, 1);
			break;
		
		case 29:
			func_137(uParam1, "Josh3", func_139(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_138(iParam0), 1, 1);
			break;
		
		case 30:
			func_137(uParam1, "Josh4", func_139(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_138(iParam0), 1, 0);
			break;
		
		case 31:
			func_137(uParam1, "Maude1", func_139(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_138(iParam0), 0, 1);
			break;
		
		case 32:
			func_137(uParam1, "Minute1", func_139(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_138(iParam0), 0, 1);
			break;
		
		case 33:
			func_137(uParam1, "Minute2", func_139(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_138(iParam0), 0, 1);
			break;
		
		case 34:
			func_137(uParam1, "Minute3", func_139(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_138(iParam0), 0, 1);
			break;
		
		case 35:
			func_137(uParam1, "MrsPhilips1", func_139(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_138(iParam0), 0, 0);
			break;
		
		case 36:
			func_137(uParam1, "MrsPhilips2", func_139(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_138(iParam0), 0, 0);
			break;
		
		case 37:
			func_137(uParam1, "Nigel1", func_139(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_138(iParam0), 1, 0);
			break;
		
		case 38:
			func_137(uParam1, "Nigel1A", func_139(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_138(iParam0), 1, 1);
			break;
		
		case 39:
			func_137(uParam1, "Nigel1B", func_139(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_138(iParam0), 1, 1);
			break;
		
		case 40:
			func_137(uParam1, "Nigel1C", func_139(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_138(iParam0), 1, 1);
			break;
		
		case 41:
			func_137(uParam1, "Nigel1D", func_139(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_138(iParam0), 1, 1);
			break;
		
		case 42:
			func_137(uParam1, "Nigel2", func_139(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_138(iParam0), 1, 1);
			break;
		
		case 43:
			func_137(uParam1, "Nigel3", func_139(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_138(iParam0), 1, 1);
			break;
		
		case 44:
			func_137(uParam1, "Omega1", func_139(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_138(iParam0), 0, 0);
			break;
		
		case 45:
			func_137(uParam1, "Omega2", func_139(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_138(iParam0), 0, 0);
			break;
		
		case 46:
			func_137(uParam1, "Paparazzo1", func_139(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_138(iParam0), 0, 1);
			break;
		
		case 47:
			func_137(uParam1, "Paparazzo2", func_139(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_138(iParam0), 0, 1);
			break;
		
		case 48:
			func_137(uParam1, "Paparazzo3", func_139(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_138(iParam0), 0, 0);
			break;
		
		case 49:
			func_137(uParam1, "Paparazzo3A", func_139(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_138(iParam0), 0, 1);
			break;
		
		case 50:
			func_137(uParam1, "Paparazzo3B", func_139(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_138(iParam0), 0, 1);
			break;
		
		case 51:
			func_137(uParam1, "Paparazzo4", func_139(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_138(iParam0), 0, 0);
			break;
		
		case 52:
			func_137(uParam1, "Rampage1", func_139(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_138(iParam0), 0, 0);
			break;
		
		case 54:
			func_137(uParam1, "Rampage3", func_139(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_138(iParam0), 1, 0);
			break;
		
		case 55:
			func_137(uParam1, "Rampage4", func_139(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_138(iParam0), 1, 0);
			break;
		
		case 56:
			func_137(uParam1, "Rampage5", func_139(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_138(iParam0), 0, 0);
			break;
		
		case 53:
			func_137(uParam1, "Rampage2", func_139(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_138(iParam0), 1, 0);
			break;
		
		case 57:
			func_137(uParam1, "TheLastOne", func_139(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_138(iParam0), 0, 1);
			break;
		
		case 58:
			func_137(uParam1, "Tonya1", func_139(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_138(iParam0), 0, 1);
			break;
		
		case 59:
			func_137(uParam1, "Tonya2", func_139(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_138(iParam0), 0, 1);
			break;
		
		case 60:
			func_137(uParam1, "Tonya3", func_139(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_138(iParam0), 0, 1);
			break;
		
		case 61:
			func_137(uParam1, "Tonya4", func_139(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_138(iParam0), 0, 1);
			break;
		
		case 62:
			func_137(uParam1, "Tonya5", func_139(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_138(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_137(var uParam0, char* sParam1, struct<2> Param2, int iParam3, int iParam4, int iParam5, struct<3> Param6, int iParam7, char* sParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, var uParam19, int iParam20, int iParam21)
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

int func_138(int iParam0)
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

struct<2> func_139(int iParam0)
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	cVar1 = { func_140(iParam0) };
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

struct<2> func_140(int iParam0)
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

int func_141()
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

int func_142()
{
	if (func_145() && !func_146())
	{
		return 1;
	}
	if (func_144() && func_143())
	{
		return 1;
	}
	return 0;
}

bool func_143()
{
	return Global_111576 > 0;
}

int func_144()
{
	if (Global_95877 != -1)
	{
		return 1;
	}
	return 0;
}

int func_145()
{
	if (Global_95877 != -1)
	{
		return unk_0xCE990E643CD9D0E5(Global_89743[Global_95877 /*34*/].f_15, 20);
	}
	return 0;
}

int func_146()
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

int func_147()
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

void func_148()
{
	int iVar0;
	
	if (iLocal_46)
	{
		unk_0x93370FA10F15BE44(&iLocal_265);
		unk_0x93370FA10F15BE44(&iLocal_266);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), false);
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		MISC::RESET_DISPATCH_IDEAL_SPAWN_DISTANCE();
		PLAYER::RESET_WANTED_LEVEL_DIFFICULTY(PLAYER::PLAYER_ID());
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(418.2996f, 2650.597f, 42.84723f, 297.8981f, 2617.968f, 53.6412f, 49.6875f, 1);
		PED::REMOVE_SCENARIO_BLOCKING_AREAS();
		unk_0xAF7D4BF357E8B79E(Vector(43.4932f, 2612.694f, 328.0555f) - Vector(10f, 10f, 10f), Vector(43.4932f, 2612.694f, 328.0555f) + Vector(10f, 10f, 10f), 1, 1);
		iVar0 = 0;
		while (iVar0 < iLocal_222)
		{
			if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(iLocal_222[iVar0]))
			{
				PED::_0x2208438012482A1A(iLocal_222[iVar0], 0);
				if (STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(unk_0x9B0761B4C3EB8BC7()))
				{
					TASK::TASK_STAY_IN_COVER(iLocal_222[iVar0]);
					PED::SET_PED_KEEP_TASK(iLocal_222[iVar0], true);
				}
			}
			if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_218))
			{
				PLAYER::SET_PLAYER_VEHICLE_DEFENSE_MODIFIER(bLocal_218, 4.442116E-43f, 1);
				PED::_0x2208438012482A1A(bLocal_218, 0);
				if (!ENTITY::GET_ENTITY_COORDS(bLocal_226, false))
				{
					if (unk_0xE0B3BC41DDA88DF0(bLocal_218, bLocal_226, 0))
					{
						VEHICLE::SET_DISABLE_PRETEND_OCCUPANTS(bLocal_226, true);
					}
				}
			}
			if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_219))
			{
				PLAYER::SET_PLAYER_VEHICLE_DEFENSE_MODIFIER(bLocal_219, 4.442116E-43f, 1);
				PED::_0x2208438012482A1A(bLocal_219, 0);
				if (!ENTITY::GET_ENTITY_COORDS(bLocal_226, false))
				{
					if (unk_0xE0B3BC41DDA88DF0(bLocal_219, bLocal_226, 0))
					{
						VEHICLE::SET_DISABLE_PRETEND_OCCUPANTS(bLocal_226, true);
					}
				}
			}
			iVar0++;
		}
	}
	func_149(-1);
	ENTITY::STOP_ENTITY_ANIM();
}

void func_149(int iParam0)
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_34();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_87())
	{
		func_153(iParam0);
		HUD::SET_MISSION_NAME(false, 0);
		Global_111849 = MISC::GET_GAME_TIMER();
		func_152(30000);
		StringCopy(&cVar0, func_151(Global_111847, 1), 64);
		if (func_33(Global_111847) > 0)
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
	func_150(&Global_31027);
	Global_111848 = 0;
	func_94(-1);
}

void func_150(var uParam0)
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

char* func_151(int iParam0, bool bParam1)
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

void func_152(int iParam0)
{
	Global_42182 = (MISC::GET_GAME_TIMER() + iParam0);
}

void func_153(int iParam0)
{
	func_154(iParam0, 0, func_159(iParam0));
}

void func_154(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_112();
	func_157(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_156(iParam0, &uVar0);
	Var1 = { func_155(&uVar0) };
}

struct<16> func_155(var uParam0)
{
	struct<16> Var0;
	int iVar1;
	
	StringCopy(&Var0, "", 64);
	iVar1 = func_106(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_105(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_104(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "  ", 64);
	iVar1 = func_107(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "/", 64);
	iVar1 = func_110(*uParam0);
	if (iVar1 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_108(*uParam0), 64);
	return Var0;
}

void func_156(int iParam0, var uParam1)
{
	Global_111858.f_24991.f_43[iParam0] = *uParam1;
}

void func_157(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_108(*uParam0);
	iVar1 = func_110(*uParam0);
	iVar2 = func_107(*uParam0);
	iVar3 = func_106(*uParam0);
	iVar4 = func_105(*uParam0);
	iVar5 = func_104(*uParam0);
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
	iVar6 = func_103(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_103(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_158(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_158(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_118(uParam0, iParam1);
	func_117(uParam0, iParam2);
	func_116(uParam0, iParam3);
	func_114(uParam0, iParam5);
	func_115(uParam0, iParam4);
	func_113(uParam0, iParam6);
}

int func_159(int iParam0)
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

