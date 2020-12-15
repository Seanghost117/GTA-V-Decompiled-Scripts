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
	int iLocal_28 = 0;
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
	float fLocal_43 = 0f;
	var uLocal_44 = 0;
	struct<3> Local_45 = { 0, 0, 0 } ;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	struct<3> Local_50 = { 0, 0, 0 } ;
	bool bLocal_51 = 0;
	bool bLocal_52 = 0;
	bool bLocal_53 = 0;
	bool bLocal_54 = 0;
	bool bLocal_55 = 0;
	int iLocal_56[4] = { 0, 0, 0, 0 };
	bool bLocal_57 = 0;
	bool bLocal_58 = 0;
	struct<3> Local_59 = { 0, 0, 0 } ;
	struct<3> Local_60 = { 0, 0, 0 } ;
	struct<3> Local_61 = { 0, 0, 0 } ;
	float fLocal_62 = 0f;
	struct<3> Local_63 = { 0, 0, 0 } ;
	struct<3> Local_64 = { 0, 0, 0 } ;
	struct<3> Local_65 = { 0, 0, 0 } ;
	float fLocal_66 = 0f;
	struct<3> Local_67 = { 0, 0, 0 } ;
	struct<3> Local_68 = { 0, 0, 0 } ;
	struct<3> Local_69 = { 0, 0, 0 } ;
	struct<3> Local_70 = { 0, 0, 0 } ;
	struct<3> Local_71 = { 0, 0, 0 } ;
	float fLocal_72 = 0f;
	struct<3> Local_73 = { 0, 0, 0 } ;
	struct<3> Local_74 = { 0, 0, 0 } ;
	struct<3> Local_75 = { 0, 0, 0 } ;
	float fLocal_76 = 0f;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	bool bLocal_80 = 0;
	int iLocal_81 = 0;
	bool bLocal_82 = 0;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	bool bLocal_85 = 0;
	int iLocal_86 = 0;
	bool bLocal_87 = 0;
	bool bLocal_88 = 0;
	int iLocal_89 = 0;
	int iLocal_90 = 0;
	int iLocal_91 = 0;
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	bool bLocal_96 = 0;
	bool bLocal_97 = 0;
	int iLocal_98 = 0;
	int iLocal_99 = 0;
	var uLocal_100 = 16;
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
	int iLocal_265 = 0;
	char* sLocal_266 = NULL;
	int iLocal_267 = 0;
	int iLocal_268 = 0;
	int iLocal_269 = 0;
	int iLocal_270 = 0;
	int iLocal_271 = 0;
	int iLocal_272 = 0;
	int iLocal_273 = 0;
	int iLocal_274 = 0;
	int iLocal_275 = 0;
	int iLocal_276 = 0;
	int iLocal_277 = 0;
	int iLocal_278 = 0;
	int iLocal_279 = 0;
	int iLocal_280 = 0;
	int iLocal_281 = 0;
	int iLocal_282 = 0;
	bool bLocal_283 = 0;
	bool bLocal_284 = 0;
	bool bLocal_285 = 0;
	bool bLocal_286 = 0;
	struct<2> Local_287 = { 0, 5 } ;
	var uLocal_288 = 0;
	var uLocal_289 = 0;
	var uLocal_290 = 0;
	var uLocal_291 = 0;
	var uLocal_292 = 0;
	var uLocal_293 = 0;
	var uLocal_294 = 0;
	var uLocal_295 = 0;
	var uLocal_296 = 0;
	var uLocal_297 = 0;
	var uLocal_298 = 0;
	var uLocal_299 = 0;
	var uLocal_300 = 0;
	var uLocal_301 = 0;
	var uLocal_302 = 0;
	var uLocal_303 = 5;
	var uLocal_304 = 0;
	var uLocal_305 = 0;
	var uLocal_306 = 0;
	var uLocal_307 = 0;
	var uLocal_308 = 0;
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
	iLocal_28 = 3;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	fLocal_43 = 20f;
	iLocal_81 = 1;
	iLocal_272 = 6000;
	Local_50 = { ScriptParam_287.f_1[0 /*3*/] };
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(11))
	{
		if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_51))
		{
			if (PED::IS_PED_IN_GROUP(bLocal_51))
			{
				PED::REMOVE_PED_FROM_GROUP(bLocal_51);
			}
		}
		if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_53))
		{
			if (PED::IS_PED_IN_GROUP(bLocal_53))
			{
				PED::REMOVE_PED_FROM_GROUP(bLocal_53);
			}
		}
		func_183();
	}
	if (func_182(283, 1))
	{
		ENTITY::STOP_ENTITY_ANIM();
	}
	if (func_153(Local_50, -1, 0, 0, 0))
	{
		if ((CLOCK::GET_CLOCK_DAY_OF_MONTH() > 2 && CLOCK::GET_CLOCK_DAY_OF_MONTH() < 15) && !PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
		{
		}
		else
		{
			ENTITY::STOP_ENTITY_ANIM();
		}
		func_150(-1);
	}
	else
	{
		ENTITY::STOP_ENTITY_ANIM();
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		if (BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE() || bLocal_80)
		{
			if (!func_149())
			{
				if (func_148())
				{
					func_183();
				}
			}
			RECORDING::_0x208784099002BC30("RE_SDRM", 0);
			switch (iLocal_46)
			{
				case 0:
					if (func_136())
					{
						func_183();
					}
					if (iLocal_48)
					{
						iLocal_49 = 1;
						iLocal_46 = 1;
					}
					else
					{
						func_127();
					}
					break;
				
				case 1:
					func_126();
					if (!iLocal_78)
					{
						func_125();
						func_122();
						func_111();
						if (!PED::DETACH_SYNCHRONIZED_SCENE(iLocal_282))
						{
							func_110();
						}
					}
					else
					{
						func_107();
						if (!bLocal_88)
						{
							func_105();
						}
						func_97();
						func_95();
						func_79();
						func_78(bLocal_51, 0);
						if (!bLocal_85)
						{
						}
						if (iLocal_47 == 0 && !bLocal_82)
						{
							func_74();
							func_72();
						}
						else
						{
							func_67();
						}
						if (iLocal_47 == 3)
						{
							if (HUD::SET_BLIP_NAME_FROM_TEXT_FILE(NETWORK::NETWORK_ARE_HANDLES_THE_SAME(unk_0x9B0761B4C3EB8BC7(), 1), Local_67, 1) < 100f)
							{
								if (!NETWORK::_0xC87E740D9F3872CC())
								{
									CUTSCENE::REQUEST_CUTSCENE("sdrm_mcs_2", 8);
								}
								if (NETWORK::_0xC87E740D9F3872CC())
								{
									if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
									{
										if ((((!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_51) && !STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_53)) && !STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_52)) && !STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_54)) && !PED::IS_PED_IN_ANY_POLICE_VEHICLE(bLocal_96, 0))
										{
											CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Groom", bLocal_51, 0);
											CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Groomsman", bLocal_53, 0);
											CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Bride", bLocal_52, 0);
											CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Father_of_the_bride", bLocal_54, 0);
										}
									}
								}
							}
							else if (NETWORK::_0xC87E740D9F3872CC())
							{
								CUTSCENE::REMOVE_CUTSCENE();
							}
							if (bLocal_82)
							{
								if (func_66(1, 0, 1))
								{
									func_31();
								}
							}
							else if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_53))
							{
								if (SYSTEM::VDIST(bLocal_53, 0))
								{
									if (SYSTEM::VMAG(bLocal_286))
									{
										unk_0x93370FA10F15BE44(&bLocal_286);
										if (SYSTEM::VMAG(fLocal_284))
										{
											unk_0x93370FA10F15BE44(&bLocal_284);
										}
										if (!SYSTEM::VMAG(bLocal_284))
										{
											bLocal_284 = func_29(Local_59, 1);
										}
									}
								}
							}
						}
						if (func_3())
						{
							if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_51))
							{
								TASK::TASK_SMART_FLEE_PED(bLocal_51, unk_0x9B0761B4C3EB8BC7(), 1000f, -1, false, false);
							}
							if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_53))
							{
								TASK::TASK_SMART_FLEE_PED(bLocal_53, unk_0x9B0761B4C3EB8BC7(), 1000f, -1, false, false);
							}
							if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_52))
							{
								TASK::TASK_SMART_FLEE_PED(bLocal_52, unk_0x9B0761B4C3EB8BC7(), 1000f, -1, false, false);
							}
							if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_54))
							{
								TASK::TASK_SMART_FLEE_PED(bLocal_54, unk_0x9B0761B4C3EB8BC7(), 1000f, -1, false, false);
							}
							func_2();
						}
					}
					func_1();
					break;
			}
		}
		else
		{
			func_183();
		}
	}
}

void func_1()
{
}

void func_2()
{
	func_183();
}

int func_3()
{
	if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(unk_0x9B0761B4C3EB8BC7()))
	{
		if (STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_51))
		{
			return 1;
		}
		else
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(bLocal_51, unk_0x9B0761B4C3EB8BC7(), true) || NETWORK::NETWORK_IS_PLAYER_ACTIVE(bLocal_51))
			{
				return 1;
			}
			if (bLocal_80)
			{
				if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
				{
					func_27();
					if (func_4(&uLocal_100, "stagdau", "stagd_police", 4, 0, 0, 0))
					{
						return 1;
					}
				}
			}
		}
	}
	if (!PED::IS_PED_IN_ANY_POLICE_VEHICLE(bLocal_55, 0))
	{
		if ((!ENTITY::GET_ENTITY_COORDS(bLocal_55, false) || VEHICLE::IS_VEHICLE_STUCK_ON_ROOF(bLocal_55)) || NETWORK::NETWORK_IS_PLAYER_ACTIVE(bLocal_55))
		{
			func_27();
			if (func_4(&uLocal_100, "stagdau", "stagdwrcar", 4, 0, 0, 0))
			{
				return 1;
			}
		}
		if (SYSTEM::VDIST(unk_0x9B0761B4C3EB8BC7(), 0))
		{
			if (PED::IS_PED_IN_MODEL(unk_0x9B0761B4C3EB8BC7(), joaat("towtruck")) || PED::IS_PED_IN_MODEL(unk_0x9B0761B4C3EB8BC7(), joaat("towtruck2")))
			{
				if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(ENTITY::GET_ENTITY_MODEL(unk_0x9B0761B4C3EB8BC7(), 0), bLocal_55))
				{
					func_27();
					if (func_4(&uLocal_100, "stagdau", "stagdwrcar", 4, 0, 0, 0))
					{
						return 1;
					}
				}
			}
		}
	}
	else
	{
		func_27();
		if (func_4(&uLocal_100, "stagdau", "stagdwrcar", 4, 0, 0, 0))
		{
			return 1;
		}
	}
	if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_51))
	{
		if (!ENTITY::IS_ENTITY_AT_ENTITY(bLocal_51, unk_0x9B0761B4C3EB8BC7(), 150f, 150f, 150f, false, true, 0))
		{
			if (!PED::IS_PED_IN_ANY_POLICE_VEHICLE(bLocal_55, 0))
			{
				if (unk_0xE0B3BC41DDA88DF0(unk_0x9B0761B4C3EB8BC7(), bLocal_55, 0))
				{
					PLAYER::SET_PLAYER_WANTED_LEVEL_NO_DROP(PLAYER::PLAYER_ID(), 1, false);
					PLAYER::SET_WANTED_LEVEL_DIFFICULTY(PLAYER::PLAYER_ID(), 0f);
				}
			}
			return 1;
		}
	}
	if (iLocal_47 >= 1)
	{
		if (bLocal_87)
		{
			if (STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_53))
			{
				func_27();
				return 1;
			}
			else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(bLocal_53, unk_0x9B0761B4C3EB8BC7(), true))
			{
				func_27();
				return 1;
			}
		}
		if (!PED::IS_PED_IN_ANY_POLICE_VEHICLE(bLocal_55, 0))
		{
			if (!ENTITY::IS_ENTITY_AT_ENTITY(bLocal_55, unk_0x9B0761B4C3EB8BC7(), 20f, 20f, 20f, false, true, 0))
			{
				if (!iLocal_90)
				{
					func_27();
					if (func_4(&uLocal_100, "stagdau", "stagd_comeba", 4, 0, 0, 0))
					{
						iLocal_90 = 1;
					}
				}
			}
			else
			{
				iLocal_90 = 0;
			}
			if (!ENTITY::IS_ENTITY_AT_ENTITY(bLocal_55, unk_0x9B0761B4C3EB8BC7(), 150f, 150f, 150f, false, true, 0))
			{
				return 1;
			}
		}
	}
	if (iLocal_47 == 3)
	{
		if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(unk_0x9B0761B4C3EB8BC7()))
		{
			if (STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_52) || STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_54))
			{
				return 1;
			}
			else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(bLocal_52, unk_0x9B0761B4C3EB8BC7(), true) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(bLocal_54, unk_0x9B0761B4C3EB8BC7(), true))
			{
				return 1;
			}
		}
		if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_53))
		{
			if (!ENTITY::IS_ENTITY_AT_ENTITY(bLocal_53, unk_0x9B0761B4C3EB8BC7(), 20f, 20f, 20f, false, true, 0) && iLocal_274)
			{
				if (!iLocal_91)
				{
					func_27();
					if (func_4(&uLocal_100, "stagdau", "stagd_nobest", 4, 0, 0, 0))
					{
						iLocal_91 = 1;
					}
				}
			}
			else
			{
				iLocal_91 = 0;
			}
			if (!ENTITY::IS_ENTITY_AT_ENTITY(bLocal_53, unk_0x9B0761B4C3EB8BC7(), 150f, 150f, 150f, false, true, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_4(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_26(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_5(sParam2, iParam3, 0);
}

int func_5(char* sParam0, int iParam1, bool bParam2)
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
					func_25();
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
		if (func_24(8, -1))
		{
			return 0;
		}
		Global_21081 = { Global_21075 };
		func_23();
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
				func_15();
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
				if (func_14())
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
			if (func_13())
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
			func_12();
			Global_21015 = bParam2;
		}
		Global_21007 = iParam1;
		StringCopy(&Global_20624, sParam0, 24);
		Global_19871 = 0;
		func_11();
		func_6();
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
		func_25();
	}
	return 0;
}

void func_6()
{
	if (!func_7())
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

int func_7()
{
	if (!Global_262145.f_28160)
	{
		return 0;
	}
	if (!Global_76833)
	{
		return 0;
	}
	if (PLAYER::PLAYER_ID() == func_10())
	{
		return 0;
	}
	if (func_8(PLAYER::PLAYER_ID()))
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

bool func_8(int iParam0)
{
	return func_9(iParam0, 20);
}

bool func_9(int iParam0, int iParam1)
{
	return unk_0xCE990E643CD9D0E5(Global_1630317[iParam0 /*595*/].f_11.f_4, iParam1);
}

int func_10()
{
	return -1;
}

void func_11()
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

void func_12()
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

int func_13()
{
	if (Global_19681.f_1 == 1 || Global_19681.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_14()
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

void func_15()
{
	if (func_22(14))
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
		Global_19681 = func_16();
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

int func_16()
{
	func_17();
	return Global_111858.f_2359.f_539.f_4321;
}

void func_17()
{
	int iVar0;
	
	if (MISC::IS_BIT_SET(unk_0x9B0761B4C3EB8BC7()))
	{
		if (func_20(Global_111858.f_2359.f_539.f_4321) != MISC::GET_MODEL_DIMENSIONS(unk_0x9B0761B4C3EB8BC7()))
		{
			iVar0 = func_19(unk_0x9B0761B4C3EB8BC7());
			if (func_18(iVar0) && (!func_22(14) || Global_110809))
			{
				if (Global_111858.f_2359.f_539.f_4321 != iVar0 && func_18(Global_111858.f_2359.f_539.f_4321))
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

bool func_18(int iParam0)
{
	return iParam0 < 3;
}

int func_19(bool bParam0)
{
	int iVar0;
	void fVar1;
	
	if (MISC::IS_BIT_SET(bParam0))
	{
		fVar1 = MISC::GET_MODEL_DIMENSIONS(bParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_20(iVar0) == fVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_20(int iParam0)
{
	if (func_18(iParam0))
	{
		return func_21(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_21(int iParam0)
{
	return Global_1848[iParam0 /*29*/];
}

bool func_22(int iParam0)
{
	return Global_41631 == iParam0;
}

void func_23()
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

bool func_24(int iParam0, int iParam1)
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

void func_25()
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

void func_26(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

void func_27()
{
	Global_19871 = 0;
	func_28();
}

void func_28()
{
	SYSTEM::ROUND();
	Global_22016 = 0;
	if (ENTITY::IS_ENTITY_DEAD())
	{
		unk_0xBE4122AC23440E7D(0);
		Global_21005 = 6;
	}
}

bool func_29(struct<3> Param0, bool bParam1)
{
	int iVar0;
	
	iVar0 = HUD::ADD_BLIP_FOR_COORD(Param0);
	HUD::SET_BLIP_SCALE(iVar0, func_30(MISC::SET_BIT(), 1f, 1f));
	HUD::SET_BLIP_ROUTE(bVar0, bParam1);
	return bVar0;
}

float func_30(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_31()
{
	switch (iLocal_95)
	{
		case 0:
			func_27();
			SYSTEM::WAIT(0);
			func_58(1, 1, 1, 0, 0, 0, 0);
			AUDIO::SET_FRONTEND_RADIO_ACTIVE(false);
			iLocal_274 = 0;
			iLocal_95++;
			break;
		
		case 1:
			iLocal_95++;
			break;
		
		case 2:
			if ((((!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_51) && !STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_53)) && !STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_52)) && !STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_54)) && !PED::IS_PED_IN_ANY_POLICE_VEHICLE(bLocal_96, 0))
			{
				if (func_57())
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(bLocal_96, "SDRM_Car", 0, 0, 0);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(bLocal_51, "Groom", 0, 0, 0);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(bLocal_53, "Groomsman", 0, 0, 0);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(bLocal_52, "Bride", 0, 0, 0);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(bLocal_54, "Father_of_the_bride", 0, 0, 0);
					CUTSCENE::START_CUTSCENE(4);
					iLocal_95++;
				}
			}
			break;
		
		case 3:
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(false))
			{
				if (!PED::IS_PED_IN_ANY_POLICE_VEHICLE(bLocal_96, 0))
				{
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(bLocal_96, 5f);
					VEHICLE::SET_VEHICLE_DOORS_SHUT(bLocal_96, true);
					HUD::DISPLAY_HUD(true);
					SYSTEM::SIN(1.401298E-45f);
					unk_0x4C4FC7841A5FB983(0f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-7f, 1f);
				}
				iLocal_95++;
			}
			break;
		
		case 4:
			PED::DELETE_PED(&bLocal_51);
			PED::DELETE_PED(&bLocal_53);
			PED::DELETE_PED(&bLocal_52);
			PED::DELETE_PED(&bLocal_54);
			func_58(0, 1, 1, 0, 0, 0, 0);
			AUDIO::SET_FRONTEND_RADIO_ACTIVE(true);
			func_32();
			break;
	}
}

void func_32()
{
	while (!func_56())
	{
		SYSTEM::WAIT(0);
	}
	func_36(-1, 0);
	func_33();
	func_183();
}

void func_33()
{
	func_34();
}

int func_34()
{
	if (func_35(0))
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

bool func_35(bool bParam0)
{
	if (!bParam0 && INTERIOR::GET_INTERIOR_AT_COORDS(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xCE990E643CD9D0E5(Global_77081, 0);
}

void func_36(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_54();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= func_53(iParam0))
	{
		func_52(iParam0, iParam1);
		if (!func_51(51))
		{
			func_47("RE_REWARD", 1, 0, 4000, 10000, func_50(), 0, 138, 0);
			func_46(51);
		}
		if (func_45(iParam0))
		{
			Global_111858.f_24991.f_2 = 3;
		}
		if (func_44(iParam0, iParam1) != 322)
		{
			func_38(func_44(iParam0, iParam1), Local_45.x, Local_45.f_1);
		}
		Global_111846 = iParam1;
		if (Global_111844 == 0)
		{
			if (((Global_111847 == 1 || Global_111847 == 5) || Global_111847 == 11) || Global_111847 == 25)
			{
				func_37(2);
			}
			else if ((Global_111847 == 26 || Global_111847 == 8) || Global_111847 == 17)
			{
				func_37(7);
			}
			else
			{
				func_37(1);
			}
		}
	}
}

void func_37(int iParam0)
{
	Global_111844 = iParam0;
}

void func_38(int iParam0, var uParam1, var uParam2)
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
		func_42((891 + iParam0), 1, -1, 1);
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
		func_39();
	}
}

void func_39()
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
		func_41(13, SYSTEM::FLOOR(Global_111858.f_10190.f_3853));
	}
	if (!DATAFILE::DATAFILE_IS_SAVE_PENDING())
	{
		if (!Global_76833)
		{
			if (func_40() == 2 == 0 && !MISC::SET_BIT())
			{
				if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE())
				{
					Global_111592 = 0;
				}
				if (!Global_61717)
				{
					func_34();
				}
			}
		}
	}
}

int func_40()
{
	return Global_30968;
}

int func_41(int iParam0, bool bParam1)
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

var func_42(int iParam0, char* sParam1, int iParam2, int iParam3)
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
		iParam2 = func_43();
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

int func_43()
{
	return Global_1312763;
}

int func_44(int iParam0, int iParam1)
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

int func_45(int iParam0)
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

void func_46(int iParam0)
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

void func_47(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_48(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_48(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
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
		func_49();
	}
}

void func_49()
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

int func_50()
{
	func_17();
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

int func_51(int iParam0)
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

void func_52(int iParam0, int iParam1)
{
	unk_0xBE20AB8238688965(&(Global_111858.f_24991.f_8[iParam0]), iParam1);
}

int func_53(int iParam0)
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

int func_54()
{
	struct<16> Var0;
	var uVar1;
	
	StringCopy(&Var0, TASK::IS_PED_BEING_ARRESTED(), 64);
	uVar1 = func_55(Var0);
	return uVar1;
}

int func_55(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
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

int func_56()
{
	return 1;
}

bool func_57()
{
	bool bVar0;
	
	bVar0 = CUTSCENE::HAS_CUTSCENE_LOADED();
	if (!Global_76832)
	{
		if (!bVar0)
		{
			Global_76832 = 1;
		}
	}
	return bVar0;
}

void func_58(bool bParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (bParam0)
	{
		PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(PLAYER::PLAYER_ID(), 0);
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), true);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), true);
		func_65(1);
		HUD::THEFEED_FLUSH_QUEUE();
		HUD::THEFEED_PAUSE();
		if (Global_19681.f_1 > 3 && !bParam6)
		{
			if (unk_0x6B12213471F330A3())
			{
				unk_0xBE4122AC23440E7D(0);
			}
			if (!func_13())
			{
				Global_19681.f_1 = 3;
			}
			Global_21005 = 5;
		}
		func_64(1, bParam3, iParam2, 0);
		Global_61723 = 1;
		Global_74033 = 1;
		Global_76831 = 1;
	}
	else
	{
		func_65(0);
		HUD::THEFEED_RESUME();
		Global_61723 = 0;
		if (bParam1)
		{
			GRAPHICS::_0x03FC694AE06C5A20();
		}
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), false);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), false);
		func_64(0, bParam3, iParam2, 0);
		if (MISC::SET_BIT())
		{
			if (((((!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(unk_0x9B0761B4C3EB8BC7()) && !func_62(PLAYER::PLAYER_ID())) && !func_60(PLAYER::PLAYER_ID(), 0)) && !func_59()) && !bParam4) && !bParam5)
			{
				ENTITY::SET_ENTITY_INVINCIBLE(unk_0x9B0761B4C3EB8BC7(), false);
			}
		}
		else if (((!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(unk_0x9B0761B4C3EB8BC7()) && !func_62(PLAYER::PLAYER_ID())) && !bParam4) && !bParam5)
		{
			ENTITY::SET_ENTITY_INVINCIBLE(unk_0x9B0761B4C3EB8BC7(), false);
		}
		Global_76831 = 0;
	}
}

bool func_59()
{
	return unk_0xCE990E643CD9D0E5(Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_39.f_18, 14);
}

bool func_60(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_61(-1, 0) == 8;
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

int func_61(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_43();
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

int func_62(int iParam0)
{
	if (func_60(iParam0, 0))
	{
		return 1;
	}
	if (func_63())
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

bool func_63()
{
	return unk_0xCE990E643CD9D0E5(Global_2359302, 3);
}

int func_64(bool bParam0, bool bParam1, var uParam2, bool bParam3)
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

void func_65(int iParam0)
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

int func_66(bool bParam0, bool bParam1, bool bParam2)
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

void func_67()
{
	if (!PED::IS_PED_IN_ANY_POLICE_VEHICLE(bLocal_55, 0) && !PED::IS_PED_IN_ANY_POLICE_VEHICLE(bLocal_51, 0))
	{
		if (!iLocal_81)
		{
			if (unk_0xE0B3BC41DDA88DF0(unk_0x9B0761B4C3EB8BC7(), bLocal_55, 0) && unk_0xE0B3BC41DDA88DF0(bLocal_51, bLocal_55, 0))
			{
				iLocal_81 = 1;
				if (SYSTEM::VMAG(bLocal_283))
				{
					unk_0x93370FA10F15BE44(&bLocal_283);
				}
				if (iLocal_86 && !bLocal_82)
				{
					if (!SYSTEM::VMAG(bLocal_284))
					{
						bLocal_284 = func_29(Local_59, 1);
					}
				}
				if (!func_71())
				{
				}
			}
		}
		if (!iLocal_81 && !iLocal_83)
		{
			if (unk_0xE0B3BC41DDA88DF0(unk_0x9B0761B4C3EB8BC7(), bLocal_55, 0))
			{
				if (!unk_0xE0B3BC41DDA88DF0(bLocal_51, bLocal_55, 0))
				{
					if (!func_71())
					{
					}
					if (SYSTEM::VMAG(bLocal_283))
					{
						unk_0x93370FA10F15BE44(&bLocal_283);
					}
					if (!SYSTEM::VMAG(bLocal_283))
					{
						bLocal_283 = func_70(bLocal_51, 0, 145);
						HUD::SET_BLIP_AS_FRIENDLY(bLocal_283, true);
					}
					iLocal_81 = 0;
					iLocal_83 = 1;
				}
			}
		}
		if (iLocal_81)
		{
			if (!unk_0xE0B3BC41DDA88DF0(unk_0x9B0761B4C3EB8BC7(), bLocal_55, 0))
			{
				if (!func_71())
				{
				}
				if (!SYSTEM::VMAG(bLocal_283))
				{
					bLocal_283 = func_68(bLocal_55, 0, 0);
					HUD::SET_BLIP_AS_FRIENDLY(bLocal_283, true);
				}
				if (SYSTEM::VMAG(bLocal_284))
				{
					unk_0x93370FA10F15BE44(&bLocal_284);
				}
				iLocal_81 = 0;
			}
			if (!unk_0xE0B3BC41DDA88DF0(unk_0x9B0761B4C3EB8BC7(), bLocal_55, 0) && !unk_0xE0B3BC41DDA88DF0(bLocal_51, bLocal_55, 0))
			{
				if (!func_71())
				{
				}
				if (!SYSTEM::VMAG(bLocal_283))
				{
					bLocal_283 = func_68(bLocal_55, 0, 0);
					HUD::SET_BLIP_AS_FRIENDLY(bLocal_283, true);
				}
				if (SYSTEM::VMAG(bLocal_284))
				{
					unk_0x93370FA10F15BE44(&bLocal_284);
				}
				iLocal_81 = 0;
			}
		}
	}
}

float func_68(bool bParam0, bool bParam1, bool bParam2)
{
	return func_69(bParam0, !bParam1, bParam2);
}

bool func_69(bool bParam0, bool bParam1, bool bParam2)
{
	bool bVar0;
	
	if (!MISC::IS_BIT_SET(bParam0))
	{
		return 0;
	}
	bVar0 = TASK::IS_PED_SPRINTING(bParam0);
	if (ENTITY::IS_ENTITY_A_VEHICLE(bParam0))
	{
		HUD::SET_BLIP_SCALE(bVar0, func_30(MISC::SET_BIT(), 1f, 1f));
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
		HUD::SET_BLIP_SCALE(bVar0, func_30(MISC::SET_BIT(), 0.7f, 0.7f));
		HUD::SET_BLIP_AS_FRIENDLY(bVar0, bParam1);
	}
	else if (ENTITY::IS_ENTITY_AN_OBJECT(bParam0))
	{
		HUD::SET_BLIP_SCALE(bVar0, func_30(MISC::SET_BIT(), 0.7f, 0.7f));
	}
	return bVar0;
}

bool func_70(bool bParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_69(bParam0, !bParam1, 0);
	if ((iParam2 != 145 && SYSTEM::VMAG(iVar0)) && unk_0x3030AE9FCF1BC243(&(Global_1848[iParam2 /*29*/].f_3)))
	{
		PED::IS_PED_IN_PARACHUTE_FREE_FALL(bVar0, &(Global_1848[iParam2 /*29*/].f_3));
	}
	return bVar0;
}

int func_71()
{
	if (Global_21005 != 0 || ENTITY::IS_ENTITY_DEAD())
	{
		return 1;
	}
	return 0;
}

void func_72()
{
	if (MISC::IS_BIT_SET(bLocal_51))
	{
		if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_51))
		{
			if (ENTITY::IS_ENTITY_AT_ENTITY(bLocal_51, unk_0x9B0761B4C3EB8BC7(), 4f, 4f, 4f, false, true, 0))
			{
				if ((!SYSTEM::VDIST(unk_0x9B0761B4C3EB8BC7(), 0) && !SYSTEM::VDIST(bLocal_51, 0)) || PED::IS_PED_IN_ANY_TAXI(unk_0x9B0761B4C3EB8BC7()))
				{
					if (SYSTEM::VMAG(fLocal_285))
					{
						unk_0x93370FA10F15BE44(&bLocal_285);
						if (!SYSTEM::VMAG(bLocal_284))
						{
							bLocal_284 = func_29(Local_59, 1);
						}
					}
				}
				else if (SYSTEM::VDIST(unk_0x9B0761B4C3EB8BC7(), 0) && SYSTEM::VDIST(bLocal_51, 0))
				{
					if (SYSTEM::VMAG(bLocal_285))
					{
						unk_0x93370FA10F15BE44(&bLocal_285);
						if (!SYSTEM::VMAG(bLocal_284))
						{
							bLocal_284 = func_29(Local_59, 1);
						}
					}
				}
				else if (SYSTEM::VMAG(bLocal_284))
				{
					unk_0x93370FA10F15BE44(&bLocal_284);
					if (!SYSTEM::VMAG(bLocal_285))
					{
						bLocal_285 = func_70(bLocal_51, 0, 145);
					}
				}
				if (PED::IS_PED_IN_ANY_BOAT(unk_0x9B0761B4C3EB8BC7()))
				{
				}
			}
			else if (SYSTEM::VMAG(bLocal_284))
			{
				unk_0x93370FA10F15BE44(&bLocal_284);
				if (!SYSTEM::VMAG(bLocal_285))
				{
					bLocal_285 = func_70(bLocal_51, 0, 145);
				}
			}
			if (!PED::IS_PED_IN_GROUP(bLocal_51))
			{
				if (!ENTITY::IS_ENTITY_AT_ENTITY(unk_0x9B0761B4C3EB8BC7(), bLocal_51, 10f, 10f, 10f, false, true, 0))
				{
					HUD::HIDE_HUD_AND_RADAR_THIS_FRAME(bLocal_51);
					PED::SET_PED_AS_GROUP_MEMBER(bLocal_51, func_73());
					PED::SET_PED_NEVER_LEAVES_GROUP(bLocal_51, true);
					PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(bLocal_51, 0);
				}
				if (SYSTEM::VDIST(unk_0x9B0761B4C3EB8BC7(), 1))
				{
					HUD::HIDE_HUD_AND_RADAR_THIS_FRAME(bLocal_51);
					PED::SET_PED_AS_GROUP_MEMBER(bLocal_51, func_73());
					PED::SET_PED_NEVER_LEAVES_GROUP(bLocal_51, true);
					PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(bLocal_51, 0);
				}
			}
		}
	}
}

int func_73()
{
	return PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX());
}

void func_74()
{
	if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_51))
	{
		if (SYSTEM::VDIST(unk_0x9B0761B4C3EB8BC7(), 1))
		{
			if (!func_77())
			{
				if (PED::IS_PED_IN_GROUP(bLocal_51))
				{
					PED::REMOVE_PED_FROM_GROUP(bLocal_51);
				}
				if (TASK::GET_SCRIPT_TASK_STATUS(bLocal_51, 1227113341) != 1 && TASK::GET_SCRIPT_TASK_STATUS(bLocal_51, 1227113341) != 0)
				{
					TASK::TASK_GO_TO_ENTITY(bLocal_51, unk_0x9B0761B4C3EB8BC7(), -1, 6f, 2f, 2f, 0);
				}
				if (SYSTEM::VDIST(bLocal_51, 0))
				{
					TASK::TASK_LEAVE_ANY_VEHICLE(bLocal_51, 0, 0);
				}
				if (!iLocal_89)
				{
					if (!func_71())
					{
						iLocal_89 = 1;
						if (func_76())
						{
							func_75(&uLocal_100, "stagdau", "stagd_nogood", "stagd_nogood_1", 4, 0, 0);
						}
						else
						{
							func_75(&uLocal_100, "stagdau", "stagd_nogood", "stagd_nogood_2", 4, 0, 0);
						}
					}
				}
			}
			else
			{
				iLocal_89 = 0;
				if (((TASK::GET_SCRIPT_TASK_STATUS(bLocal_51, 1227113341) == 1 || TASK::GET_SCRIPT_TASK_STATUS(bLocal_51, 1227113341) == 0) || TASK::GET_SCRIPT_TASK_STATUS(bLocal_51, 242628503) == 1) || TASK::GET_SCRIPT_TASK_STATUS(bLocal_51, 242628503) == 0)
				{
					HUD::HIDE_HUD_AND_RADAR_THIS_FRAME(bLocal_51);
					if (!PED::IS_PED_IN_GROUP(bLocal_51))
					{
						PED::SET_PED_AS_GROUP_MEMBER(bLocal_51, func_73());
						PED::SET_PED_NEVER_LEAVES_GROUP(bLocal_51, true);
						PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(bLocal_51, 0);
					}
				}
			}
		}
		else if (((!PED::IS_PED_IN_GROUP(bLocal_51) && !SYSTEM::VDIST(bLocal_51, 0)) && TASK::GET_SCRIPT_TASK_STATUS(bLocal_51, 242628503) != 1) && TASK::GET_SCRIPT_TASK_STATUS(bLocal_51, 242628503) != 0)
		{
			PED::SET_PED_AS_GROUP_MEMBER(bLocal_51, func_73());
			PED::SET_PED_NEVER_LEAVES_GROUP(bLocal_51, true);
			PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(bLocal_51, 0);
		}
	}
}

int func_75(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_26(uParam0, 145, sParam1, iParam5, iParam6, 0);
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
	return func_5(sParam2, iParam4, 0);
}

int func_76()
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

int func_77()
{
	if (SYSTEM::VDIST(unk_0x9B0761B4C3EB8BC7(), 0))
	{
		if (ENTITY::GET_ENTITY_COORDS(ENTITY::GET_ENTITY_MODEL(unk_0x9B0761B4C3EB8BC7(), 0), false))
		{
			if (((((!PED::IS_PED_IN_ANY_BOAT(unk_0x9B0761B4C3EB8BC7()) && !PED::IS_PED_IN_ANY_HELI(unk_0x9B0761B4C3EB8BC7())) && !PED::IS_PED_IN_ANY_PLANE(unk_0x9B0761B4C3EB8BC7())) && !PED::IS_PED_IN_ANY_SUB(unk_0x9B0761B4C3EB8BC7())) && !PED::IS_PED_IN_ANY_TRAIN(unk_0x9B0761B4C3EB8BC7())) && !PED::IS_PED_IN_MODEL(unk_0x9B0761B4C3EB8BC7(), joaat("rhino")))
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
			if ((((!VEHICLE::IS_THIS_MODEL_A_BOAT(MISC::GET_MODEL_DIMENSIONS(PED::GET_VEHICLE_PED_IS_ENTERING(unk_0x9B0761B4C3EB8BC7()))) && !VEHICLE::IS_THIS_MODEL_A_HELI(MISC::GET_MODEL_DIMENSIONS(PED::GET_VEHICLE_PED_IS_ENTERING(unk_0x9B0761B4C3EB8BC7())))) && !VEHICLE::IS_THIS_MODEL_A_PLANE(MISC::GET_MODEL_DIMENSIONS(PED::GET_VEHICLE_PED_IS_ENTERING(unk_0x9B0761B4C3EB8BC7())))) && !VEHICLE::IS_THIS_MODEL_A_TRAIN(MISC::GET_MODEL_DIMENSIONS(PED::GET_VEHICLE_PED_IS_ENTERING(unk_0x9B0761B4C3EB8BC7())))) && MISC::GET_MODEL_DIMENSIONS(PED::GET_VEHICLE_PED_IS_ENTERING(unk_0x9B0761B4C3EB8BC7())) != joaat("rhino"))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_78(bool bParam0, bool bParam1)
{
	bool bVar0;
	
	if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bParam0))
	{
		bVar0 = false;
		if (bParam1)
		{
			if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(unk_0x9B0761B4C3EB8BC7()) && PED::IS_PED_SITTING_IN_ANY_VEHICLE(bParam0))
			{
				if (ENTITY::GET_ENTITY_MODEL(unk_0x9B0761B4C3EB8BC7(), 0) == ENTITY::GET_ENTITY_MODEL(bParam0, 0))
				{
					bVar0 = true;
				}
			}
		}
		else
		{
			bVar0 = false;
		}
		if (!PED::IS_PED_HEADTRACKING_ENTITY(bParam0, unk_0x9B0761B4C3EB8BC7()))
		{
			if (!bVar0)
			{
				TASK::TASK_LOOK_AT_ENTITY(bParam0, unk_0x9B0761B4C3EB8BC7(), -1, 2049, 2);
			}
		}
		else if (bVar0)
		{
			if (!AUDIO::IS_PED_IN_CURRENT_CONVERSATION(bParam0))
			{
				TASK::TASK_CLEAR_LOOK_AT(bParam0);
			}
		}
	}
}

void func_79()
{
	if (MISC::IS_BIT_SET(bLocal_51))
	{
		if (!PED::IS_PED_IN_ANY_POLICE_VEHICLE(bLocal_51, 0) && !PED::IS_PED_IN_ANY_POLICE_VEHICLE(unk_0x9B0761B4C3EB8BC7(), 0))
		{
			if (func_93("stagd_chape_1"))
			{
				if (!SYSTEM::VMAG(bLocal_284))
				{
					bLocal_284 = func_29(Local_59, 1);
				}
				iLocal_86 = 1;
			}
			if (func_93("stagd_chape_3"))
			{
				TASK::TASK_CLEAR_LOOK_AT(unk_0x9B0761B4C3EB8BC7());
				if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_51))
				{
					if (SYSTEM::VDIST(bLocal_51, 0))
					{
						TASK::OPEN_SEQUENCE_TASK(&iLocal_77);
						TASK::TASK_CLEAR_LOOK_AT(false);
						TASK::TASK_USE_MOBILE_PHONE_TIMED(0, 30600);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_77);
						AUDIO::STOP_SCRIPTED_CONVERSATION(bLocal_51, iLocal_77);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_77);
					}
				}
			}
			if (ENTITY::IS_ENTITY_AT_ENTITY(unk_0x9B0761B4C3EB8BC7(), bLocal_51, 13.5f, 13.5f, 13.5f, false, true, 0) && SYSTEM::VDIST(unk_0x9B0761B4C3EB8BC7(), 0))
			{
				if (unk_0xE0B3BC41DDA88DF0(bLocal_51, ENTITY::GET_ENTITY_MODEL(unk_0x9B0761B4C3EB8BC7(), 0), 0))
				{
					if (iLocal_47 == 0)
					{
						if (SYSTEM::TIMERB() > 5000)
						{
							if (iLocal_94 == 0)
							{
								if (!func_71())
								{
									func_92();
									if (func_4(&uLocal_100, "stagdau", sLocal_266, 4, 0, 0, 0))
									{
										iLocal_274 = 1;
									}
									bLocal_85 = true;
									iLocal_94++;
									SYSTEM::SETTIMERB(0);
								}
							}
						}
						if (SYSTEM::TIMERB() > 5000)
						{
							if (iLocal_94 == 1)
							{
								if (!func_71())
								{
									HUD::DISPLAY_HUD(true);
									SYSTEM::SIN(1.401298E-45f);
									iLocal_94++;
									SYSTEM::SETTIMERB(0);
								}
							}
						}
						if (SYSTEM::TIMERB() > 2500)
						{
							if (iLocal_94 == 2)
							{
								if (!func_71())
								{
									func_92();
									if (func_16() == 0)
									{
										func_4(&uLocal_100, "stagdau", "stagd_tailM", 4, 0, 0, 0);
									}
									if (func_16() == 1)
									{
										func_4(&uLocal_100, "stagdau", "stagd_tailF", 4, 0, 0, 0);
									}
									if (func_16() == 2)
									{
										func_4(&uLocal_100, "stagdau", "stagd_tailT", 4, 0, 0, 0);
									}
									iLocal_94++;
									SYSTEM::SETTIMERB(0);
								}
							}
						}
					}
					if (!bLocal_88)
					{
						if (iLocal_47 == 3)
						{
							if (!func_71())
							{
								if (iLocal_94 == 0)
								{
									func_4(&uLocal_100, "stagdau", "stagd_enough", 4, 0, 0, 0);
									iLocal_94++;
								}
							}
						}
						if (iLocal_47 == 3)
						{
							if (SYSTEM::TIMERB() > 5000)
							{
								if (iLocal_94 == 0)
								{
									if (!func_71())
									{
										iLocal_94++;
									}
								}
							}
						}
						if (!unk_0xC2169C00B643278B(unk_0x9B0761B4C3EB8BC7(), Local_67, 150f, 150f, 150f, 0, 1, 0))
						{
							if (iLocal_267 == 0)
							{
								if (iLocal_271 == func_80(func_81()) + 11)
								{
									if (!func_71())
									{
										func_4(&uLocal_100, "stagdau", "stagd_time10", 4, 0, 0, 0);
										iLocal_267 = 1;
									}
								}
							}
							if (iLocal_267 < 2)
							{
								if (iLocal_271 == func_80(func_81()) + 10)
								{
									if (!func_71())
									{
										func_4(&uLocal_100, "stagdau", "stagd_time9", 4, 0, 0, 0);
										iLocal_267 = 2;
									}
								}
							}
							if (iLocal_267 < 3)
							{
								if (iLocal_271 == func_80(func_81()) + 9)
								{
									if (!func_71())
									{
										func_4(&uLocal_100, "stagdau", "stagd_time8", 4, 0, 0, 0);
										iLocal_267 = 3;
									}
								}
							}
							if (iLocal_267 < 4)
							{
								if (iLocal_271 == func_80(func_81()) + 8)
								{
									if (!func_71())
									{
										func_4(&uLocal_100, "stagdau", "stagd_time7", 4, 0, 0, 0);
										iLocal_267 = 4;
									}
								}
							}
							if (iLocal_267 < 5)
							{
								if (iLocal_271 == func_80(func_81()) + 7)
								{
									if (!func_71())
									{
										iLocal_267 = 5;
									}
								}
							}
							if (iLocal_267 < 6)
							{
								if (iLocal_271 == func_80(func_81()) + 6)
								{
									if (!func_71())
									{
										iLocal_267 = 6;
									}
								}
							}
							if (iLocal_267 < 7)
							{
								if (iLocal_271 == func_80(func_81()) + 5)
								{
									if (!func_71())
									{
										iLocal_267 = 7;
									}
								}
							}
							if (iLocal_267 < 8)
							{
								if (iLocal_271 == func_80(func_81()) + 4)
								{
									if (!func_71())
									{
										iLocal_267 = 8;
									}
								}
							}
							if (iLocal_267 < 9)
							{
								if (iLocal_271 == func_80(func_81()) + 3)
								{
									if (!func_71())
									{
										func_4(&uLocal_100, "stagdau", "stagd_stress", 4, 0, 0, 0);
										iLocal_267 = 9;
									}
								}
							}
							if (iLocal_267 < 10)
							{
								if (iLocal_271 == func_80(func_81()) + 2)
								{
									if (!func_71())
									{
										func_4(&uLocal_100, "stagdau", "stagd_stress", 4, 0, 0, 0);
										iLocal_267 = 10;
									}
								}
							}
							if (iLocal_267 < 11)
							{
								if (iLocal_271 == func_80(func_81()) + 1)
								{
									if (!func_71())
									{
										func_4(&uLocal_100, "stagdau", "stagd_stress", 4, 0, 0, 0);
										iLocal_267 = 11;
									}
								}
							}
						}
						else
						{
							if (iLocal_267 < 6)
							{
								if (iLocal_271 == func_80(func_81()) + 6)
								{
									if (!func_71())
									{
										func_4(&uLocal_100, "stagdau", "stagd_stress", 4, 0, 0, 0);
										iLocal_267++;
									}
								}
							}
							if (iLocal_267 < 7)
							{
								if (iLocal_271 == func_80(func_81()) + 5)
								{
									if (!func_71())
									{
										func_4(&uLocal_100, "stagdau", "stagd_stress", 4, 0, 0, 0);
										iLocal_267++;
									}
								}
							}
							if (iLocal_267 < 8)
							{
								if (iLocal_271 == func_80(func_81()) + 4)
								{
									if (!func_71())
									{
										func_4(&uLocal_100, "stagdau", "stagd_stress", 4, 0, 0, 0);
										iLocal_267++;
									}
								}
							}
							if (iLocal_267 < 9)
							{
								if (iLocal_271 == func_80(func_81()) + 3)
								{
									if (!func_71())
									{
										func_4(&uLocal_100, "stagdau", "stagd_stress", 4, 0, 0, 0);
										iLocal_267++;
									}
								}
							}
							if (iLocal_267 < 10)
							{
								if (iLocal_271 == func_80(func_81()) + 2)
								{
									if (!func_71())
									{
										func_4(&uLocal_100, "stagdau", "stagd_stress", 4, 0, 0, 0);
										iLocal_267++;
									}
								}
							}
							if (iLocal_267 < 11)
							{
								if (iLocal_271 == func_80(func_81()) + 1)
								{
									if (!func_71())
									{
										func_4(&uLocal_100, "stagdau", "stagd_stress", 4, 0, 0, 0);
										iLocal_267++;
									}
								}
							}
						}
					}
				}
			}
		}
	}
}

int func_80(bool bParam0)
{
	return SYSTEM::SHIFT_RIGHT(bParam0, 9) & 31;
}

bool func_81()
{
	var uVar0;
	
	func_91(&uVar0, CLOCK::GET_CLOCK_MINUTES());
	func_90(&uVar0, CLOCK::GET_CLOCK_HOURS());
	func_89(&uVar0, CLOCK::GET_CLOCK_DAY_OF_MONTH());
	func_84(&uVar0, CLOCK::GET_CLOCK_MONTH());
	func_83(&uVar0, CLOCK::GET_CLOCK_YEAR());
	func_82(&uVar0, SYSTEM::SHIFT_LEFT());
	return uVar0;
}

void func_82(var uParam0, int iParam1)
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

void func_83(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_84(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_88(*uParam0);
	iVar1 = func_86(*uParam0);
	if (iParam1 < 1 || iParam1 > func_85(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

int func_85(int iParam0, int iParam1)
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

int func_86(bool bParam0)
{
	return (SYSTEM::SHIFT_RIGHT(bParam0, 26) & 31 * func_87(unk_0xCE990E643CD9D0E5(bParam0, 31), -1, 1)) + 2011;
}

int func_87(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

bool func_88(bool bParam0)
{
	return (bParam0 && 15);
}

void func_89(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_90(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_91(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

void func_92()
{
	Global_19871 = 0;
	func_25();
}

int func_93(char* sParam0)
{
	var uVar0;
	
	if (func_71())
	{
		MemCopy(&uVar0, {func_94()}, 4);
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS(sParam0, &uVar0))
		{
			return 1;
		}
	}
	return 0;
}

struct<6> func_94()
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

void func_95()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (MISC::IS_BIT_SET(bLocal_51))
	{
		if (!PED::IS_PED_IN_ANY_POLICE_VEHICLE(bLocal_51, 0))
		{
			if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_51))
			{
				if (!iLocal_93 && bLocal_82)
				{
					MONEY::NETWORK_MONEY_CAN_BET(0, 75, true);
					MONEY::NETWORK_MONEY_CAN_BET(0, 80, true);
					iVar0 = NETWORK::_GET_ONLINE_VERSION();
					if (iVar0 != 0)
					{
						iVar1 = CAM::_0xEE778F8C7E1142E2(iVar0);
						if (iVar1 != 4)
						{
							MONEY::NETWORK_MONEY_CAN_BET(0, 79, true);
							MONEY::NETWORK_MONEY_CAN_BET(0, 286, true);
							MONEY::NETWORK_MONEY_CAN_BET(0, 287, true);
							MONEY::NETWORK_MONEY_CAN_BET(0, 26, true);
							MONEY::NETWORK_MONEY_CAN_BET(0, 273, true);
							MONEY::NETWORK_MONEY_CAN_BET(0, 4, true);
							MONEY::NETWORK_MONEY_CAN_BET(0, 270, true);
							MONEY::NETWORK_MONEY_CAN_BET(0, 5, true);
							MONEY::NETWORK_MONEY_CAN_BET(0, true, true);
							MONEY::NETWORK_MONEY_CAN_BET(0, 271, true);
							MONEY::NETWORK_MONEY_CAN_BET(0, 6, true);
							MONEY::NETWORK_MONEY_CAN_BET(0, 2, true);
							MONEY::NETWORK_MONEY_CAN_BET(0, 272, true);
							MONEY::NETWORK_MONEY_CAN_BET(0, 3, true);
						}
					}
					if (unk_0x1037B9D45CE6B788(bLocal_51, -2002.008f, 455.58f, 101.0381f, -2009.761f, 453.2027f, 105.9135f, 12.4375f, 0, 1, 0) || SYSTEM::TIMERA() > 5000)
					{
						iLocal_93 = 1;
						SYSTEM::SETTIMERA(0);
						func_58(1, 1, 1, 0, 0, 0, 0);
						unk_0xD289B55B6AADBA10(1);
						HUD::DISPLAY_HUD(false);
						SYSTEM::SIN(0f);
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
						VEHICLE::REQUEST_VEHICLE_ASSET(joaat("superd"), 3);
						while (!VEHICLE::HAS_VEHICLE_ASSET_LOADED(joaat("superd")))
						{
							SYSTEM::WAIT(0);
						}
						iLocal_98 = CAM::CREATE_CAM_WITH_PARAMS("DEFAULT_SCRIPTED_CAMERA", -2014.228f, 456.4961f, 103.5524f, -6.509435f, -0.037031f, -95.98762f, 29.00143f, false, 2);
						iLocal_99 = CAM::CREATE_CAM_WITH_PARAMS("DEFAULT_SCRIPTED_CAMERA", -2014.334f, 456.418f, 103.3152f, -6.198685f, -0.037031f, -100.5736f, 29.00143f, false, 2);
						CAM::SHAKE_CAM(iLocal_98, "HAND_SHAKE", 0.25f);
						CAM::SHAKE_CAM(iLocal_99, "HAND_SHAKE", 0.25f);
						CAM::SET_CAM_ACTIVE(iLocal_98, true);
						CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
						SYSTEM::WAIT(1000);
						CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_99, iLocal_98, 4000, 1, 1);
						CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
						MISC::CLEAR_AREA_OF_VEHICLES(Local_71, 10f, false, false, false, false, false, false);
						if (!PED::IS_PED_IN_ANY_POLICE_VEHICLE(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0))
						{
							VEHICLE::REQUEST_VEHICLE_HIGH_DETAIL_MODEL(PLAYER::GET_PLAYERS_LAST_VEHICLE());
							if (unk_0xC2169C00B643278B(PLAYER::GET_PLAYERS_LAST_VEHICLE(), Local_71, 8f, 8f, 8f, 0, 1, 0))
							{
								bLocal_97 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
								ENTITY::SET_ENTITY_AS_MISSION_ENTITY(bLocal_97, true, false);
								VEHICLE::DELETE_VEHICLE(&bLocal_97);
							}
						}
						if (!PED::IS_PED_IN_ANY_POLICE_VEHICLE(bLocal_55, 0))
						{
							VEHICLE::SET_VEHICLE_DOORS_LOCKED(bLocal_55, 1);
							if (!SYSTEM::VMAG(bLocal_283))
							{
								bLocal_283 = func_68(bLocal_55, 0, 0);
								HUD::SET_BLIP_AS_FRIENDLY(bLocal_283, true);
							}
						}
						iLocal_81 = 0;
					}
				}
				if (iLocal_93 && CAM::DOES_CAM_EXIST(iLocal_98))
				{
					if (SYSTEM::TIMERA() > 5700 && !iLocal_281)
					{
						if ((PED::IS_PED_ON_FOOT(unk_0x9B0761B4C3EB8BC7()) && STATS::_PLAYSTATS_ARENA_WARS_ENDED() == 4) || (SYSTEM::VDIST(unk_0x9B0761B4C3EB8BC7(), 0) && CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 4))
						{
							GRAPHICS::ANIMPOSTFX_PLAY("CamPushInNeutral", 0, false);
							DATAFILE::UGC_UPDATE_CONTENT(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
							iLocal_281 = 1;
						}
					}
					if (SYSTEM::TIMERA() > 6000)
					{
						if (SYSTEM::VDIST(unk_0x9B0761B4C3EB8BC7(), 0))
						{
							TASK::TASK_LEAVE_ANY_VEHICLE(unk_0x9B0761B4C3EB8BC7(), 0, 0);
						}
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
						HUD::DISPLAY_HUD(true);
						SYSTEM::SIN(1.401298E-45f);
						func_58(0, 1, 1, 0, 0, 0, 0);
						CAM::SET_CAM_ACTIVE(iLocal_98, false);
						CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
						CAM::DESTROY_CAM(iLocal_98, false);
						CAM::STOP_GAMEPLAY_HINT(false);
					}
				}
				if (unk_0xC2169C00B643278B(unk_0x9B0761B4C3EB8BC7(), -2201.417f, 4296.06f, 47.5076f, 100f, 100f, 100f, 0, 1, 0))
				{
					MISC::CLEAR_AREA_OF_VEHICLES(Local_67, 5f, false, false, false, false, false, false);
				}
			}
			if (!bLocal_87)
			{
				if (unk_0xC2169C00B643278B(unk_0x9B0761B4C3EB8BC7(), Local_73, 100f, 100f, 100f, 0, 1, 0))
				{
					unk_0x78FCB2E22C41B9D5(joaat("ig_bestmen"));
					if (ENTITY::DOES_ENTITY_EXIST(joaat("ig_bestmen")))
					{
						bLocal_53 = PED::CREATE_PED(4, joaat("ig_bestmen"), -2202.747f, 4299.008f, 47.4293f, 73.0028f, true, true);
						func_96(&uLocal_100, 4, bLocal_53, "BESTMAN", 0, 1);
						PED::SET_PED_COMPONENT_VARIATION(bLocal_53, 0, 0, 0, 0);
						PED::SET_PED_RELATIONSHIP_GROUP_HASH(bLocal_53, 1862763509);
						PED::_0x2208438012482A1A(bLocal_53, 1);
						PLAYER::SET_PLAYER_VEHICLE_DEFENSE_MODIFIER(bLocal_53, 2.592402E-43f, 1);
						TASK::OPEN_SEQUENCE_TASK(&iLocal_77);
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(false, unk_0x9B0761B4C3EB8BC7(), -1);
						TASK::TASK_LOOK_AT_ENTITY(false, unk_0x9B0761B4C3EB8BC7(), -1, 2048, 2);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_77);
						AUDIO::STOP_SCRIPTED_CONVERSATION(bLocal_53, iLocal_77);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_77);
						bLocal_87 = true;
					}
				}
			}
			if (!bLocal_88)
			{
				if (unk_0xC2169C00B643278B(unk_0x9B0761B4C3EB8BC7(), Local_63, 20f, 20f, 20f, 0, 1, 0))
				{
					func_27();
					if (!func_71())
					{
						func_4(&uLocal_100, "stagdau", "stagd_spot", 4, 0, 0, 0);
						bLocal_88 = true;
					}
				}
			}
			if (((unk_0x1037B9D45CE6B788(unk_0x9B0761B4C3EB8BC7(), Local_60, Local_61, fLocal_62, 0, 1, 0) && unk_0x1037B9D45CE6B788(bLocal_51, Local_60, Local_61, fLocal_62, 0, 1, 0)) || (unk_0xC2169C00B643278B(bLocal_51, Local_59, 0f, 0f, 2f, 1, 1, 0) && func_66(1, 0, 1))) || bLocal_82)
			{
				switch (iLocal_47)
				{
					case 0:
						unk_0x93370FA10F15BE44(&bLocal_284);
						if (!bLocal_82)
						{
							Local_59 = { Local_73 };
							if (SYSTEM::VDIST(unk_0x9B0761B4C3EB8BC7(), 0))
							{
								if (!PED::IS_PED_IN_ANY_POLICE_VEHICLE(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0))
								{
									VEHICLE::BRING_VEHICLE_TO_HALT(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 10.5f, 4, false);
								}
							}
							if (!PED::IS_PED_IN_ANY_POLICE_VEHICLE(bLocal_55, 0))
							{
								iVar2 = NETWORK::_GET_ONLINE_VERSION();
								if (iVar2 != 0)
								{
									iVar3 = CAM::_0xEE778F8C7E1142E2(iVar2);
									if (iVar3 == 4)
									{
										TASK::TASK_LOOK_AT_ENTITY(unk_0x9B0761B4C3EB8BC7(), bLocal_51, 5000, 0, 2);
									}
									else
									{
										TASK::TASK_LOOK_AT_ENTITY(unk_0x9B0761B4C3EB8BC7(), bLocal_55, 5000, 2052, 4);
										CAM::SET_GAMEPLAY_VEHICLE_HINT(bLocal_55, 0f, 0f, 0f, true, -1, 3000, 2000);
									}
								}
							}
							func_27();
							if (!func_71())
							{
								func_4(&uLocal_100, "stagdau", "stagd_wait1", 4, 0, 0, 0);
								if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_51))
								{
									HUD::HIDE_HUD_AND_RADAR_THIS_FRAME(bLocal_51);
									TASK::OPEN_SEQUENCE_TASK(&iLocal_77);
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -2013.094f, 460.3515f, 101.8024f, 2f, 20000, 0.25f, false, 40000f);
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_71, 3f, 20000, 0.25f, false, 40000f);
									TASK::TASK_TURN_PED_TO_FACE_ENTITY(false, unk_0x9B0761B4C3EB8BC7(), -1);
									TASK::TASK_LOOK_AT_ENTITY(false, unk_0x9B0761B4C3EB8BC7(), -1, 2048, 2);
									TASK::CLOSE_SEQUENCE_TASK(iLocal_77);
									AUDIO::STOP_SCRIPTED_CONVERSATION(bLocal_51, iLocal_77);
									TASK::CLEAR_SEQUENCE_TASK(&iLocal_77);
									PED::SET_PED_KEEP_TASK(bLocal_51, true);
								}
								bLocal_82 = true;
								SYSTEM::SETTIMERA(0);
							}
						}
						if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_51) && !PED::IS_PED_IN_ANY_POLICE_VEHICLE(bLocal_55, 0))
						{
							if ((bLocal_82 && unk_0xC2169C00B643278B(bLocal_51, Local_71, 1f, 1f, 1f, 0, 1, 0)) && !SYSTEM::VDIST(bLocal_51, 0))
							{
								if (PED::IS_PED_IN_GROUP(bLocal_51))
								{
									if (!func_71())
									{
										if (func_16() == 2)
										{
											func_4(&uLocal_100, "stagdau", "stagd_reply", 4, 0, 0, 0);
										}
									}
									PED::REMOVE_PED_FROM_GROUP(bLocal_51);
								}
								if (ENTITY::IS_ENTITY_OCCLUDED(bLocal_51))
								{
									if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_51))
									{
										ENTITY::SET_ENTITY_VISIBLE(bLocal_51, false, false);
										ENTITY::SET_ENTITY_COLLISION(bLocal_51, false, false);
										ENTITY::SET_ENTITY_INVINCIBLE(bLocal_51, true);
										ENTITY::SET_ENTITY_COORDS(bLocal_51, 1);
									}
									if (SYSTEM::TIMERA() > 15000)
									{
										if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_51))
										{
											PED::SET_PED_COMPONENT_VARIATION(bLocal_51, 2, 1, 0, 0);
											PED::SET_PED_COMPONENT_VARIATION(bLocal_51, 0, 0, 1, 0);
											PED::SET_PED_COMPONENT_VARIATION(bLocal_51, 3, 1, 0, 0);
											PED::SET_PED_COMPONENT_VARIATION(bLocal_51, 4, 1, 0, 0);
											PED::SET_PED_COMPONENT_VARIATION(bLocal_51, 11, 0, 0, 0);
											ENTITY::SET_ENTITY_VISIBLE(bLocal_51, true, false);
											ENTITY::SET_ENTITY_COLLISION(bLocal_51, true, false);
											ENTITY::SET_ENTITY_INVINCIBLE(bLocal_51, false);
											ENTITY::SET_ENTITY_COORDS(bLocal_51, 0);
											unk_0x03D382CB0B44E2FC(bLocal_51, Local_71, 1, 0, 0, 1);
											ENTITY::SET_ENTITY_HEADING(bLocal_51, 106.5078f);
											PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(bLocal_51, 0);
											PED::SET_PED_COMBAT_ATTRIBUTES(bLocal_51, 17, true);
											PED::SET_PED_STAY_IN_VEHICLE_WHEN_JACKED(bLocal_51, true);
											TASK::TASK_LOOK_AT_ENTITY(unk_0x9B0761B4C3EB8BC7(), bLocal_51, -1, 2048, 4);
											if (!PED::IS_PED_IN_ANY_POLICE_VEHICLE(bLocal_55, 0))
											{
												TASK::OPEN_SEQUENCE_TASK(&iLocal_77);
												TASK::TASK_LOOK_AT_ENTITY(false, unk_0x9B0761B4C3EB8BC7(), -1, 2052, 4);
												TASK::TASK_ENTER_VEHICLE(0, bLocal_55, -1, 0, 2f, 1, 0);
												TASK::CLOSE_SEQUENCE_TASK(iLocal_77);
												AUDIO::STOP_SCRIPTED_CONVERSATION(bLocal_51, iLocal_77);
												TASK::CLEAR_SEQUENCE_TASK(&iLocal_77);
											}
										}
										SYSTEM::SETTIMERA(0);
										Local_59 = { Local_73 };
										Local_60 = { Local_74 };
										Local_61 = { Local_75 };
										fLocal_62 = fLocal_76;
										iLocal_47 = 1;
									}
								}
							}
						}
						break;
					
					case 1:
						if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_51) && !PED::IS_PED_IN_ANY_POLICE_VEHICLE(bLocal_55, 0))
						{
							if (ENTITY::IS_ENTITY_AT_ENTITY(bLocal_51, bLocal_55, 5f, 5f, 5f, false, true, 0) && !iLocal_92)
							{
								func_4(&uLocal_100, "stagdau", "stagd_suit", 4, 0, 0, 0);
								iLocal_92 = 1;
							}
							if (SYSTEM::VDIST(bLocal_51, 0))
							{
								if (unk_0xE0B3BC41DDA88DF0(unk_0x9B0761B4C3EB8BC7(), bLocal_55, 0))
								{
									if (func_4(&uLocal_100, "stagdau", "stagd_chape", 4, 0, 0, 0))
									{
										iLocal_47 = 2;
										bLocal_82 = false;
										iLocal_94 = 0;
									}
								}
								else
								{
									if (iLocal_272 == 0)
									{
										iLocal_272 = MISC::GET_GAME_TIMER();
									}
									if (iLocal_272 != 0 && MISC::GET_GAME_TIMER() > iLocal_272 + 6000)
									{
										func_4(&uLocal_100, "stagdau", "stagd_getin", 4, 0, 0, 0);
										iLocal_272 = 0;
									}
									SYSTEM::SETTIMERA(0);
								}
							}
						}
						break;
					
					case 2:
						if (!bLocal_82)
						{
							func_27();
							if (func_4(&uLocal_100, "stagdau", "stagd_hairc", 4, 0, 0, 0))
							{
								if (SYSTEM::VDIST(unk_0x9B0761B4C3EB8BC7(), 0))
								{
									if (!PED::IS_PED_IN_ANY_POLICE_VEHICLE(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0))
									{
										bLocal_96 = ENTITY::GET_ENTITY_MODEL(unk_0x9B0761B4C3EB8BC7(), 0);
										VEHICLE::BRING_VEHICLE_TO_HALT(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 10.5f, 2, false);
									}
								}
								if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_53) && !STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_51))
								{
									if (SYSTEM::VDIST(bLocal_51, 0))
									{
										bLocal_96 = ENTITY::GET_ENTITY_MODEL(bLocal_51, 0);
										TASK::OPEN_SEQUENCE_TASK(&iLocal_77);
										TASK::TASK_ENTER_VEHICLE(0, bLocal_96, -1, 2, 1f, 1, 0);
										TASK::TASK_CLEAR_LOOK_AT(false);
										TASK::CLOSE_SEQUENCE_TASK(iLocal_77);
										AUDIO::STOP_SCRIPTED_CONVERSATION(bLocal_53, iLocal_77);
										PLAYER::SET_PLAYER_VEHICLE_DEFENSE_MODIFIER(bLocal_53, 2.592402E-43f, 0);
									}
									else
									{
										TASK::TASK_GO_TO_ENTITY(bLocal_53, bLocal_51, -1, 8f, 2f, 2f, 0);
									}
									if (!SYSTEM::VMAG(bLocal_286))
									{
										bLocal_286 = func_70(bLocal_53, 0, 145);
									}
									if (SYSTEM::VMAG(bLocal_284))
									{
										unk_0x93370FA10F15BE44(&bLocal_284);
									}
								}
								SYSTEM::SETTIMERA(0);
								iLocal_84 = 1;
								bLocal_82 = true;
							}
						}
						if (bLocal_82 && !STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_51))
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(bLocal_51, 242628503) == 7 || SYSTEM::TIMERA() > 12000)
							{
								Local_59 = { Local_63 };
								Local_60 = { Local_64 };
								Local_61 = { Local_65 };
								fLocal_62 = fLocal_66;
								unk_0x78FCB2E22C41B9D5(joaat("ig_bride"));
								unk_0x78FCB2E22C41B9D5(joaat("washington"));
								unk_0x78FCB2E22C41B9D5(joaat("baller2"));
								unk_0x78FCB2E22C41B9D5(joaat("primo"));
								if (((ENTITY::DOES_ENTITY_EXIST(joaat("ig_bride")) && ENTITY::DOES_ENTITY_EXIST(joaat("washington"))) && ENTITY::DOES_ENTITY_EXIST(joaat("baller2"))) && ENTITY::DOES_ENTITY_EXIST(joaat("primo")))
								{
									bLocal_52 = PED::CREATE_PED(5, joaat("ig_bride"), -330.36f, 6154.03f, 30.8f, 90f, true, true);
									PED::_0x2208438012482A1A(bLocal_52, 1);
									TASK::OPEN_SEQUENCE_TASK(&iLocal_77);
									TASK::TASK_TURN_PED_TO_FACE_ENTITY(false, unk_0x9B0761B4C3EB8BC7(), -1);
									TASK::CLOSE_SEQUENCE_TASK(iLocal_77);
									AUDIO::STOP_SCRIPTED_CONVERSATION(bLocal_52, iLocal_77);
									TASK::CLEAR_SEQUENCE_TASK(&iLocal_77);
									bLocal_54 = PED::CREATE_PED(4, joaat("ig_bestmen"), -333.3692f, 6157.644f, 30.489f, 83.2763f, true, true);
									PED::_0x2208438012482A1A(bLocal_54, 1);
									TASK::TASK_TURN_PED_TO_FACE_ENTITY(bLocal_54, unk_0x9B0761B4C3EB8BC7(), -1);
									PED::SET_PED_COMPONENT_VARIATION(bLocal_54, 0, 1, 0, 0);
									iLocal_56[0] = VEHICLE::CREATE_VEHICLE(joaat("washington"), -342.1295f, 6141.404f, 30.4839f, 133.4604f, true, true, false);
									iLocal_56[1] = VEHICLE::CREATE_VEHICLE(joaat("baller2"), -338.3777f, 6137.41f, 30.476f, 135.6866f, true, true, false);
									iLocal_56[2] = VEHICLE::CREATE_VEHICLE(joaat("primo"), -329.4687f, 6143.247f, 30.4893f, 313.82f, true, true, false);
									iLocal_56[3] = VEHICLE::CREATE_VEHICLE(joaat("washington"), -322.3235f, 6135.427f, 30.4924f, 316.5898f, true, true, false);
									VEHICLE::SET_VEHICLE_COLOURS(iLocal_56[0], NETWORK::_NETWORK_GET_ROS_PRIVILEGE_25(0, 127), 0);
									VEHICLE::SET_VEHICLE_COLOURS(iLocal_56[1], NETWORK::_NETWORK_GET_ROS_PRIVILEGE_25(0, 127), 0);
									VEHICLE::SET_VEHICLE_COLOURS(iLocal_56[2], NETWORK::_NETWORK_GET_ROS_PRIVILEGE_25(0, 127), 0);
									VEHICLE::SET_VEHICLE_COLOURS(iLocal_56[3], NETWORK::_NETWORK_GET_ROS_PRIVILEGE_25(0, 127), 0);
									iLocal_47 = 3;
									bLocal_82 = false;
									iLocal_94 = 0;
								}
							}
						}
						break;
					
					case 3:
						if (!bLocal_82)
						{
							if (SYSTEM::VDIST(unk_0x9B0761B4C3EB8BC7(), 0))
							{
								if (!PED::IS_PED_IN_ANY_POLICE_VEHICLE(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0))
								{
									VEHICLE::BRING_VEHICLE_TO_HALT(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 10.5f, 2, false);
									bLocal_82 = true;
									SYSTEM::WAIT(3000);
									func_27();
									SYSTEM::WAIT(0);
								}
							}
						}
						break;
					}
			}
		}
		else if (PED::IS_PED_IN_ANY_POLICE_VEHICLE(bLocal_51, 0))
		{
			func_183();
		}
	}
}

void func_96(var uParam0, int iParam1, bool bParam2, char* sParam3, int iParam4, int iParam5)
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

void func_97()
{
	if ((iLocal_274 && iLocal_271 != func_80(func_81())) && !CAM::DOES_CAM_EXIST(iLocal_98))
	{
		func_101(((iLocal_271 * 1000 * 60 - func_80(func_81()) * 1000 * 60) + (iLocal_270 * 1000 - func_104(func_81()) * 1000)), "TIMER_TIME", 0, 0, -1, 0, 2, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
	}
	if (iLocal_270 == 0)
	{
		if (iLocal_271 == func_80(func_81()) + 1 && ((((iLocal_270 == (func_104(func_81()) - 55) || iLocal_270 == (func_104(func_81()) - 56)) || iLocal_270 == (func_104(func_81()) - 57)) || iLocal_270 == (func_104(func_81()) - 58)) || iLocal_270 == (func_104(func_81()) - 59)))
		{
			func_100();
		}
	}
	if (iLocal_271 == func_80(func_81()))
	{
		func_100();
		func_98();
		if (!func_71())
		{
			func_4(&uLocal_100, "stagdau", "stagd_failti", 4, 0, 0, 0);
			if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_51))
			{
				TASK::TASK_USE_MOBILE_PHONE(bLocal_51, 1, 1);
			}
			if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_52))
			{
				TASK::TASK_SMART_FLEE_PED(bLocal_52, unk_0x9B0761B4C3EB8BC7(), 300f, -1, false, false);
			}
			if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_54))
			{
				TASK::TASK_SMART_FLEE_PED(bLocal_54, unk_0x9B0761B4C3EB8BC7(), 300f, -1, false, false);
			}
			SYSTEM::WAIT(8500);
			if (SYSTEM::VDIST(unk_0x9B0761B4C3EB8BC7(), 0))
			{
				if (!PED::IS_PED_IN_ANY_POLICE_VEHICLE(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0))
				{
					VEHICLE::BRING_VEHICLE_TO_HALT(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 10.5f, 3, false);
				}
			}
			SYSTEM::WAIT(2000);
			if (!PED::IS_PED_IN_ANY_POLICE_VEHICLE(bLocal_51, 0))
			{
				HUD::HIDE_HUD_AND_RADAR_THIS_FRAME(bLocal_51);
				TASK::TASK_LOOK_AT_ENTITY(unk_0x9B0761B4C3EB8BC7(), bLocal_51, 5000, 2048, 2);
				TASK::TASK_LOOK_AT_ENTITY(bLocal_51, unk_0x9B0761B4C3EB8BC7(), 5000, 2048, 2);
				TASK::TASK_LEAVE_ANY_VEHICLE(bLocal_51, 0, 0);
				PED::REMOVE_PED_FROM_GROUP(bLocal_51);
			}
			if (!PED::IS_PED_IN_ANY_POLICE_VEHICLE(bLocal_53, 0))
			{
				TASK::TASK_LOOK_AT_ENTITY(unk_0x9B0761B4C3EB8BC7(), bLocal_51, 5000, 0, 2);
				TASK::TASK_LEAVE_ANY_VEHICLE(bLocal_53, 500, 0);
			}
			SYSTEM::WAIT(1000);
			if (!PED::IS_PED_IN_ANY_POLICE_VEHICLE(bLocal_55, 0))
			{
				if (unk_0xE0B3BC41DDA88DF0(unk_0x9B0761B4C3EB8BC7(), bLocal_55, 0))
				{
					TASK::TASK_LEAVE_ANY_VEHICLE(unk_0x9B0761B4C3EB8BC7(), 0, 0);
				}
			}
			if (!PED::IS_PED_IN_ANY_POLICE_VEHICLE(bLocal_51, 0) && !PED::IS_PED_IN_ANY_POLICE_VEHICLE(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0))
			{
				TASK::OPEN_SEQUENCE_TASK(&iLocal_77);
				if (PLAYER::GET_PLAYERS_LAST_VEHICLE() == bLocal_55)
				{
					TASK::TASK_ENTER_VEHICLE(0, bLocal_55, -1, -1, 1f, 8, 0);
					TASK::TASK_VEHICLE_MISSION_PED_TARGET(0, bLocal_55, unk_0x9B0761B4C3EB8BC7(), 8, 15f, 786469, 10f, 10f, true);
				}
				else
				{
					TASK::TASK_SMART_FLEE_PED(false, unk_0x9B0761B4C3EB8BC7(), 300f, -1, false, false);
				}
				TASK::CLOSE_SEQUENCE_TASK(iLocal_77);
				AUDIO::STOP_SCRIPTED_CONVERSATION(bLocal_51, iLocal_77);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_77);
				PED::SET_PED_KEEP_TASK(bLocal_51, true);
				if (!PED::IS_PED_IN_ANY_POLICE_VEHICLE(bLocal_53, 0))
				{
					TASK::OPEN_SEQUENCE_TASK(&iLocal_77);
					if (PLAYER::GET_PLAYERS_LAST_VEHICLE() == bLocal_55)
					{
						TASK::TASK_ENTER_VEHICLE(0, bLocal_55, -1, 0, 2f, 1, 0);
						TASK::TASK_PAUSE(0, 100000);
					}
					else
					{
						TASK::TASK_SMART_FLEE_PED(false, unk_0x9B0761B4C3EB8BC7(), 300f, -1, false, false);
					}
					TASK::CLOSE_SEQUENCE_TASK(iLocal_77);
					AUDIO::STOP_SCRIPTED_CONVERSATION(bLocal_53, iLocal_77);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_77);
					PED::SET_PED_KEEP_TASK(bLocal_53, true);
				}
			}
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			while (func_71())
			{
				SYSTEM::WAIT(0);
			}
			func_2();
		}
	}
}

void func_98()
{
	Global_19871 = 0;
	func_99();
}

void func_99()
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

void func_100()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = CLOCK::GET_CLOCK_DAY_OF_MONTH();
	iVar1 = CLOCK::GET_CLOCK_HOURS();
	iVar2 = CLOCK::GET_CLOCK_MINUTES();
	if (iLocal_273 == 0)
	{
		if (iVar1 == 55 && iVar2 >= 30)
		{
			DATAFILE::UGC_UPDATE_CONTENT(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
			iLocal_273++;
		}
	}
	else if (iLocal_273 == 1)
	{
		if (iVar1 == 56 && iVar2 >= 0)
		{
			DATAFILE::UGC_UPDATE_CONTENT(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
			iLocal_273++;
		}
	}
	else if (iLocal_273 == 2)
	{
		if (iVar1 == 56 && iVar2 >= 30)
		{
			DATAFILE::UGC_UPDATE_CONTENT(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
			iLocal_273++;
		}
	}
	else if (iLocal_273 == 3)
	{
		if (iVar1 == 57 && iVar2 >= 0)
		{
			DATAFILE::UGC_UPDATE_CONTENT(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
			iLocal_273++;
		}
	}
	else if (iLocal_273 == 4)
	{
		if (iVar1 == 57 && iVar2 >= 30)
		{
			DATAFILE::UGC_UPDATE_CONTENT(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
			iLocal_273++;
		}
	}
	else if (iLocal_273 == 5)
	{
		if (iVar1 == 58 && iVar2 >= 0)
		{
			DATAFILE::UGC_UPDATE_CONTENT(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
			iLocal_273++;
		}
	}
	else if (iLocal_273 == 6)
	{
		if (iVar1 == 58 && iVar2 >= 15)
		{
			DATAFILE::UGC_UPDATE_CONTENT(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
			iLocal_273++;
		}
	}
	else if (iLocal_273 == 7)
	{
		if (iVar1 == 58 && iVar2 >= 30)
		{
			DATAFILE::UGC_UPDATE_CONTENT(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
			iLocal_273++;
		}
	}
	else if (iLocal_273 == 8)
	{
		if (iVar1 == 58 && iVar2 >= 45)
		{
			DATAFILE::UGC_UPDATE_CONTENT(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
			iLocal_273++;
		}
	}
	else if (iLocal_273 == 9)
	{
		if (iVar1 == 59 && iVar2 >= 0)
		{
			DATAFILE::UGC_UPDATE_CONTENT(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
			iLocal_273++;
		}
	}
	else if (iLocal_273 == 10)
	{
		if (iVar1 == 59 && iVar2 >= 15)
		{
			DATAFILE::UGC_UPDATE_CONTENT(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
			iLocal_273++;
		}
	}
	else if (iLocal_273 == 11)
	{
		if (iVar1 == 59 && iVar2 >= 30)
		{
			DATAFILE::UGC_UPDATE_CONTENT(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
			iLocal_273++;
		}
	}
	else if (iLocal_273 == 12)
	{
		if (iVar1 == 59 && iVar2 >= 45)
		{
			DATAFILE::UGC_UPDATE_CONTENT(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
			iLocal_273++;
		}
	}
	else if (iLocal_273 == 13)
	{
		if (iVar1 >= 0 && iVar0 == iLocal_271)
		{
			DATAFILE::UGC_UPDATE_CONTENT(-1, "TIMER_STOP", "HUD_MINI_GAME_SOUNDSET", 1);
			iLocal_273++;
		}
	}
}

void func_101(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_103(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1378744.f_1 = 1;
		func_102(7, iVar0);
		Global_1378744.f_4573[iVar0] = iParam0;
		StringCopy(&(Global_1378744.f_4573.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1378744.f_4573.f_172[iVar0] = iParam2;
		Global_1378744.f_4573.f_216[iVar0] = iParam3;
		Global_1378744.f_4573.f_183[iVar0] = iParam4;
		Global_1378744.f_4573.f_194[iVar0] = iParam5;
		Global_1378744.f_4573.f_249[iVar0] = iParam6;
		Global_1378744.f_4573.f_260[iVar0] = iParam7;
		Global_1378744.f_4573.f_205[iVar0] = iParam8;
		Global_1378744.f_4573.f_314[iVar0] = iParam9;
		Global_1378744.f_4573.f_325[iVar0] = iParam10;
		Global_1378744.f_4573.f_357[iVar0] = iParam11;
		Global_1378744.f_4573.f_238[iVar0] = iParam12;
		Global_1378744.f_4573.f_271[iVar0] = iParam13;
		Global_1378744.f_4573.f_368[iVar0] = iParam14;
		Global_1378744.f_4573.f_379[iVar0] = iParam15;
		Global_1378744.f_4573.f_390[iVar0] = iParam16;
		Global_1378744.f_4573.f_227[iVar0] = iParam17;
	}
}

void func_102(int iParam0, int iParam1)
{
	unk_0xBE20AB8238688965(&(Global_1378744.f_6304[iParam0]), iParam1);
}

bool func_103(int iParam0, int iParam1)
{
	return unk_0xCE990E643CD9D0E5(Global_1378744.f_6304[iParam0], iParam1);
}

int func_104(bool bParam0)
{
	return SYSTEM::SHIFT_RIGHT(bParam0, 14) & 63;
}

void func_105()
{
	if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_51))
	{
		if (!PED::IS_PED_IN_ANY_POLICE_VEHICLE(bLocal_55, 0) && SYSTEM::VDIST(unk_0x9B0761B4C3EB8BC7(), 0))
		{
			if (unk_0xE0B3BC41DDA88DF0(bLocal_51, bLocal_55, 0) && ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(bLocal_55))
			{
				if (!func_71())
				{
					if (func_106())
					{
						func_4(&uLocal_100, "stagdau", "stagd_crash", 4, 0, 0, 0);
					}
					else
					{
						func_4(&uLocal_100, "stagdau", "stagd_bump1", 4, 0, 0, 0);
					}
				}
			}
			else if (unk_0xE0B3BC41DDA88DF0(bLocal_51, ENTITY::GET_ENTITY_MODEL(unk_0x9B0761B4C3EB8BC7(), 0), 0) && ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(ENTITY::GET_ENTITY_MODEL(unk_0x9B0761B4C3EB8BC7(), 0)))
			{
				if (!func_71())
				{
					func_4(&uLocal_100, "stagdau", "stagd_bump1", 4, 0, 0, 0);
				}
			}
		}
	}
}

int func_106()
{
	if (unk_0xCE990E643CD9D0E5(NETWORK::_NETWORK_GET_ROS_PRIVILEGE_25(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

void func_107()
{
	if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_51))
	{
		PED::SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(bLocal_51, false);
	}
	if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_53))
	{
		PED::SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(bLocal_53, false);
	}
	if (((((ENTITY::IS_ENTITY_AT_ENTITY(bLocal_51, unk_0x9B0761B4C3EB8BC7(), 4f, 4f, 4f, false, true, 0) || iLocal_47 == 1) || iLocal_90) || iLocal_91) || iLocal_89) || bLocal_82)
	{
		if ((((((iLocal_47 >= 2 && iLocal_84) && iLocal_47 != 1) && !iLocal_90) && !iLocal_91) && !iLocal_89) && !bLocal_82)
		{
			if (ENTITY::IS_ENTITY_AT_ENTITY(bLocal_53, unk_0x9B0761B4C3EB8BC7(), 4f, 4f, 4f, false, true, 0))
			{
				if (func_109())
				{
					func_108(0);
				}
			}
			else if (func_71() && !func_109())
			{
				func_108(1);
			}
		}
		else if (func_109())
		{
			func_108(0);
		}
	}
	else if (func_71() && !func_109())
	{
		func_108(1);
	}
}

void func_108(int iParam0)
{
	Global_22016 = iParam0;
}

int func_109()
{
	if (Global_22016 == 1)
	{
		return 1;
	}
	return 0;
}

void func_110()
{
	if ((CLOCK::GET_CLOCK_DAY_OF_MONTH() > 2 && CLOCK::GET_CLOCK_DAY_OF_MONTH() < 15) && !PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
	{
	}
	else
	{
		if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_51))
		{
			HUD::HIDE_HUD_AND_RADAR_THIS_FRAME(bLocal_51);
			func_27();
			SYSTEM::WAIT(0);
			func_4(&uLocal_100, "stagdau", "stagd_failda", 4, 0, 0, 0);
			if (MISC::IS_BIT_SET(bLocal_58))
			{
				ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(bLocal_58, 1, 1);
			}
		}
		while (func_71())
		{
			SYSTEM::WAIT(0);
		}
		func_2();
	}
}

void func_111()
{
	if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(unk_0x9B0761B4C3EB8BC7()) && !STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_51))
	{
		if (!iLocal_79)
		{
			if ((ENTITY::IS_ENTITY_AT_ENTITY(unk_0x9B0761B4C3EB8BC7(), bLocal_51, 130f, 60f, 50f, false, true, 0) && !ENTITY::IS_ENTITY_OCCLUDED(bLocal_51)) || ENTITY::IS_ENTITY_AT_ENTITY(unk_0x9B0761B4C3EB8BC7(), bLocal_51, 10f, 10f, 10f, false, true, 0))
			{
				if (!SYSTEM::VMAG(bLocal_285))
				{
					bLocal_285 = func_70(bLocal_51, 0, 145);
					HUD::SHOW_HEIGHT_ON_BLIP(bLocal_285, false);
					TASK::TASK_LOOK_AT_ENTITY(bLocal_51, unk_0x9B0761B4C3EB8BC7(), -1, 2052, 4);
				}
				if (ENTITY::IS_ENTITY_AT_ENTITY(unk_0x9B0761B4C3EB8BC7(), bLocal_51, 10f, 10f, 10f, false, true, 0))
				{
					if (SYSTEM::VMAG(bLocal_285))
					{
						HUD::SHOW_HEIGHT_ON_BLIP(bLocal_285, true);
					}
					SYSTEM::SETTIMERB(0);
					func_98();
					while (func_71())
					{
						SYSTEM::WAIT(0);
					}
					if (!func_71())
					{
						if (func_16() == 0)
						{
							func_4(&uLocal_100, "stagdau", "stagd_greetM", 4, 0, 0, 0);
						}
						if (func_16() == 1)
						{
							func_4(&uLocal_100, "stagdau", "stagd_greetF", 4, 0, 0, 0);
						}
						if (func_16() == 2)
						{
							func_4(&uLocal_100, "stagdau", "stagd_greetT", 4, 0, 0, 0);
						}
					}
					iLocal_79 = 1;
				}
			}
			if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(unk_0x9B0761B4C3EB8BC7()) && !STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_51))
			{
				if ((!func_149() && unk_0x1037B9D45CE6B788(unk_0x9B0761B4C3EB8BC7(), -1131.777f, 2636.418f, 15.589f, -1040.995f, 2717.077f, 31.715f, 60.75f, 0, 1, 0)) && SYSTEM::VMAG(bLocal_285))
				{
					if (!func_71())
					{
						func_4(&uLocal_100, "stagdau", "stagd_greet2", 4, 0, 0, 0);
					}
					if (!PED::IS_PED_IN_ANY_POLICE_VEHICLE(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0))
					{
						iLocal_57 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
					}
					func_112(1);
				}
			}
		}
		else if (!iLocal_265)
		{
			if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_51))
			{
				if (!ENTITY::IS_ENTITY_AT_ENTITY(unk_0x9B0761B4C3EB8BC7(), bLocal_51, 25f, 25f, 25f, false, true, 0))
				{
					func_27();
					SYSTEM::WAIT(0);
					func_4(&uLocal_100, "stagdau", "stagd_leave", 4, 0, 0, 0);
					iLocal_265 = 1;
				}
			}
		}
	}
}

int func_112(int iParam0)
{
	if (func_116())
	{
		Global_111848 = 1;
		Global_111845 = MISC::GET_GAME_TIMER();
		if (func_45(Global_111847))
		{
			func_113(0);
		}
		HUD::SET_MISSION_NAME(true, "RE_TITLE");
		if (iParam0 && func_45(Global_111847))
		{
			HUD::FLASH_MINIMAP_DISPLAY();
		}
		return 1;
	}
	return 0;
}

void func_113(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_111858.f_24991.f_2 < 3)
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					func_114(func_115(iParam0), -1);
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
					func_114(func_115(iParam0), -1);
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
					func_114(func_115(iParam0), -1);
					Global_111858.f_24991.f_4++;
					unk_0xBE20AB8238688965(&Global_111854, 2);
				}
			}
			break;
	}
}

void func_114(var uParam0, int iParam1)
{
	unk_0x17751E107423AFE9(uParam0);
	FILES::GET_DLC_VEHICLE_FLAGS(0, 0, 1, iParam1);
}

char* func_115(int iParam0)
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

int func_116()
{
	switch (func_117(&Global_31027, 0, 5, 0, SCRIPT::GET_ID_OF_THIS_THREAD()))
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

int func_117(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
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
		if (func_121(0))
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
		if (!func_119(iParam2))
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
			func_118(uParam0, iParam4);
		}
	}
	return 2;
}

void func_118(var uParam0, int iParam1)
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

bool func_119(int iParam0)
{
	return func_120(iParam0, Global_41631);
}

int func_120(int iParam0, int iParam1)
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

int func_121(int iParam0)
{
	if (Global_41631 == 15)
	{
		return 0;
	}
	if (func_119(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_122()
{
	if (MISC::IS_BIT_SET(bLocal_51))
	{
		if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_51))
		{
			if (FIRE::IS_EXPLOSION_IN_SPHERE(-1, NETWORK::NETWORK_ARE_HANDLES_THE_SAME(bLocal_51, 1), 3f))
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(bLocal_51);
				CAM::IS_AIM_CAM_ACTIVE(bLocal_51, 99, 0);
			}
			if (!PED::IS_PED_IN_ANY_POLICE_VEHICLE(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0))
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::GET_PLAYERS_LAST_VEHICLE()) < 3f)
				{
					ENTITY::SET_ENTITY_COORDS(bLocal_51, 1);
				}
				else
				{
					ENTITY::SET_ENTITY_COORDS(bLocal_51, 0);
					if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::GET_PLAYERS_LAST_VEHICLE(), bLocal_51))
					{
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(bLocal_51);
						CAM::IS_AIM_CAM_ACTIVE(bLocal_51, 99, 0);
					}
				}
			}
			if (ENTITY::IS_ENTITY_AT_ENTITY(unk_0x9B0761B4C3EB8BC7(), bLocal_51, 2f, 2f, 2f, false, true, 0))
			{
				if (!SYSTEM::VDIST(unk_0x9B0761B4C3EB8BC7(), 0))
				{
					if (func_66(1, 0, 1))
					{
						if (!iLocal_275)
						{
							func_112(1);
							func_58(1, 1, 1, 0, 0, 0, 0);
							PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
							WEAPON::HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(unk_0x9B0761B4C3EB8BC7(), true);
							unk_0xD289B55B6AADBA10(1);
							HUD::DISPLAY_HUD(false);
							SYSTEM::SIN(0f);
							if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_51))
							{
								MISC::CLEAR_AREA(NETWORK::NETWORK_ARE_HANDLES_THE_SAME(bLocal_51, 1), 5f, true, false, false, false);
								GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(NETWORK::NETWORK_ARE_HANDLES_THE_SAME(unk_0x9B0761B4C3EB8BC7(), 1), 5f);
							}
							if (!PED::IS_PED_IN_ANY_POLICE_VEHICLE(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0))
							{
								if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::GET_PLAYERS_LAST_VEHICLE(), bLocal_51, 5f, 5f, 5f, false, true, 0))
								{
									unk_0x03D382CB0B44E2FC(PLAYER::GET_PLAYERS_LAST_VEHICLE(), NETWORK::NETWORK_ARE_HANDLES_THE_SAME(bLocal_51, 1) - Vector(1.5f, 4f, 3f), 1, 0, 0, 1);
									VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 5f);
								}
							}
							if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_51))
							{
								iLocal_282 = PED::CREATE_SYNCHRONIZED_SCENE(-935.57f, 2767.616f, 24.448f, 2.433f, 0.152f, 53.743f, 2);
								iLocal_98 = CAM::CREATE_CAM("DEFAULT_ANIMATED_CAMERA", false);
								PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_282, 0.158f);
								CAM::PLAY_SYNCHRONIZED_CAM_ANIM(iLocal_98, iLocal_282, "untie_cam", "re@stag_do@");
								TASK::CLEAR_PED_TASKS_IMMEDIATELY(unk_0x9B0761B4C3EB8BC7());
								TASK::CLEAR_PED_TASKS_IMMEDIATELY(bLocal_51);
								TASK::TASK_SYNCHRONIZED_SCENE(bLocal_51, iLocal_282, "re@stag_do@", "untie_ped", 1000f, -1000f, 4, 0, 1000f, 0);
								ENTITY::FREEZE_ENTITY_POSITION(bLocal_51, false, 0);
								TASK::TASK_SYNCHRONIZED_SCENE(unk_0x9B0761B4C3EB8BC7(), iLocal_282, "re@stag_do@", "untie_player", 1000f, -1000f, 0, 0, 1000f, 0);
								ENTITY::FREEZE_ENTITY_POSITION(unk_0x9B0761B4C3EB8BC7(), false, 0);
								CAM::SET_CAM_ACTIVE(iLocal_98, true);
								CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
								iLocal_275 = 1;
							}
						}
					}
				}
			}
		}
		else
		{
			func_2();
		}
	}
	if (iLocal_275 && !iLocal_277)
	{
		func_27();
		SYSTEM::WAIT(0);
		if (func_16() == 0)
		{
			func_4(&uLocal_100, "stagdau", "stagd_untieM", 4, 0, 0, 0);
		}
		if (func_16() == 1)
		{
			func_4(&uLocal_100, "stagdau", "stagd_untieF", 4, 0, 0, 0);
		}
		if (func_16() == 2)
		{
			func_4(&uLocal_100, "stagdau", "stagd_untieT", 4, 0, 0, 0);
		}
		iLocal_277 = 1;
	}
	if (iLocal_275 && !iLocal_276)
	{
		if (!iLocal_280)
		{
			if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_282) > 0.2f && ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_282) < 0.3f)
			{
				ENTITY::GET_ENTITY_ALPHA(-1, "ROPE_CUT", unk_0x9B0761B4C3EB8BC7(), "ROPE_CUT_SOUNDSET", 0, 0);
				iLocal_280 = 1;
			}
		}
		if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_282) > 0.4647059f && !iLocal_281)
		{
			if (STATS::_PLAYSTATS_ARENA_WARS_ENDED() == 4)
			{
				GRAPHICS::ANIMPOSTFX_PLAY("CamPushInNeutral", 0, false);
				DATAFILE::UGC_UPDATE_CONTENT(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
				iLocal_281 = 1;
			}
		}
		if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_282) > 0.5f)
		{
			iLocal_276 = 1;
		}
		if (func_123(1000))
		{
			CAM::DO_SCREEN_FADE_OUT(800);
			while (unk_0x5DA78AD6801A0523())
			{
				SYSTEM::WAIT(0);
			}
			iLocal_276 = 1;
			iLocal_279 = 1;
		}
	}
	if (iLocal_276 && !iLocal_278)
	{
		if (MISC::IS_BIT_SET(bLocal_58))
		{
			ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(bLocal_58, 1, 1);
		}
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(unk_0x9B0761B4C3EB8BC7());
		unk_0x03D382CB0B44E2FC(unk_0x9B0761B4C3EB8BC7(), -936.6537f, 2767.497f, 24.4289f, 1, 0, 0, 1);
		ENTITY::SET_ENTITY_HEADING(unk_0x9B0761B4C3EB8BC7(), 208.4017f);
		ENTITY::FREEZE_ENTITY_POSITION(unk_0x9B0761B4C3EB8BC7(), false, 0);
		CAM::SET_CAM_ACTIVE(iLocal_98, false);
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		CAM::DESTROY_CAM(iLocal_98, false);
		unk_0x4C4FC7841A5FB983(0f);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-7f, 1f);
		func_58(0, 1, 1, 0, 0, 0, 0);
		WEAPON::HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(unk_0x9B0761B4C3EB8BC7(), false);
		HUD::DISPLAY_HUD(true);
		SYSTEM::SIN(1.401298E-45f);
		if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_51))
		{
			ENTITY::SET_ENTITY_COORDS(bLocal_51, 0);
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(bLocal_51);
			PED::SET_PED_CAN_RAGDOLL(bLocal_51, true);
			unk_0x03D382CB0B44E2FC(bLocal_51, -935.6716f, 2767.772f, 24.4289f, 1, 0, 0, 1);
			ENTITY::SET_ENTITY_HEADING(bLocal_51, 136.9073f);
			ENTITY::FREEZE_ENTITY_POSITION(bLocal_51, false, 0);
		}
		if (iLocal_279)
		{
			CAM::DO_SCREEN_FADE_IN(800);
			while (CAM::IS_SCREEN_FADING_IN())
			{
				SYSTEM::WAIT(0);
			}
			iLocal_279 = 0;
		}
		iLocal_281 = 0;
		iLocal_278 = 1;
	}
	if (iLocal_278 && !STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_51))
	{
		if (ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYERS_LAST_VEHICLE(), false))
		{
			if ((((((ENTITY::IS_ENTITY_AT_ENTITY(bLocal_51, PLAYER::GET_PLAYERS_LAST_VEHICLE(), 20f, 20f, 20f, false, true, 0) && PED::GET_VEHICLE_PED_IS_USING(PLAYER::GET_PLAYERS_LAST_VEHICLE()) >= 1) && !VEHICLE::IS_THIS_MODEL_A_BOAT(MISC::GET_MODEL_DIMENSIONS(PLAYER::GET_PLAYERS_LAST_VEHICLE()))) && !VEHICLE::IS_THIS_MODEL_A_HELI(MISC::GET_MODEL_DIMENSIONS(PLAYER::GET_PLAYERS_LAST_VEHICLE()))) && !VEHICLE::IS_THIS_MODEL_A_PLANE(MISC::GET_MODEL_DIMENSIONS(PLAYER::GET_PLAYERS_LAST_VEHICLE()))) && !VEHICLE::IS_THIS_MODEL_A_TRAIN(MISC::GET_MODEL_DIMENSIONS(PLAYER::GET_PLAYERS_LAST_VEHICLE()))) && MISC::GET_MODEL_DIMENSIONS(PLAYER::GET_PLAYERS_LAST_VEHICLE()) != joaat("rhino"))
			{
				TASK::OPEN_SEQUENCE_TASK(&iLocal_77);
				TASK::TASK_LOOK_AT_ENTITY(false, unk_0x9B0761B4C3EB8BC7(), 10000, 2048, 3);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(false, unk_0x9B0761B4C3EB8BC7(), 6500);
				TASK::TASK_ENTER_VEHICLE(0, PLAYER::GET_PLAYERS_LAST_VEHICLE(), -1, 0, 1f, 1, 0);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_77);
				AUDIO::STOP_SCRIPTED_CONVERSATION(bLocal_51, iLocal_77);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_77);
			}
			else if (!PED::IS_PED_IN_GROUP(bLocal_51))
			{
				PED::SET_PED_AS_GROUP_MEMBER(bLocal_51, func_73());
				PED::SET_PED_NEVER_LEAVES_GROUP(bLocal_51, true);
				PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(bLocal_51, 0);
			}
		}
		else if (!PED::IS_PED_IN_GROUP(bLocal_51))
		{
			PED::SET_PED_AS_GROUP_MEMBER(bLocal_51, func_73());
			PED::SET_PED_NEVER_LEAVES_GROUP(bLocal_51, true);
			PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(bLocal_51, 0);
		}
		PED::_0x2208438012482A1A(bLocal_51, 0);
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
		bLocal_284 = func_29(Local_59, 1);
		iLocal_78 = 1;
		bLocal_80 = true;
		unk_0x1082C25039B168F8("re@stag_do@");
		unk_0x1082C25039B168F8("re@stag_do@idle_a");
		iLocal_269 = func_80(func_81());
		iLocal_271 = iLocal_269 + 5;
		iLocal_268 = func_104(func_81());
		if (iLocal_268 >= 30)
		{
			iLocal_270 = 0;
			iLocal_271++;
		}
		if (iLocal_271 > 24)
		{
			iLocal_271 = (iLocal_271 - 24);
		}
		if (iLocal_271 == 0)
		{
			sLocal_266 = "stagd_ptime0";
		}
		else if (iLocal_271 == 1)
		{
			sLocal_266 = "stagd_ptime1";
		}
		else if (iLocal_271 == 2)
		{
			sLocal_266 = "stagd_ptime2";
		}
		else if (iLocal_271 == 3)
		{
			sLocal_266 = "stagd_ptime3";
		}
		else if (iLocal_271 == 4)
		{
			sLocal_266 = "stagd_ptime4";
		}
		else if (iLocal_271 == 5)
		{
			sLocal_266 = "stagd_ptime5";
		}
		else if (iLocal_271 == 6)
		{
			sLocal_266 = "stagd_ptime6";
		}
		else if (iLocal_271 == 7)
		{
			sLocal_266 = "stagd_ptime7";
		}
		else if (iLocal_271 == 8)
		{
			sLocal_266 = "stagd_ptime8";
		}
		else if (iLocal_271 == 9)
		{
			sLocal_266 = "stagd_ptime9";
		}
		else if (iLocal_271 == 10)
		{
			sLocal_266 = "stagd_ptim10";
		}
		else if (iLocal_271 == 11)
		{
			sLocal_266 = "stagd_ptim11";
		}
		else if (iLocal_271 == 12)
		{
			sLocal_266 = "stagd_ptim12";
		}
		else if (iLocal_271 == 13)
		{
			sLocal_266 = "stagd_ptim13";
		}
		else if (iLocal_271 == 14)
		{
			sLocal_266 = "stagd_ptim14";
		}
		else if (iLocal_271 == 15)
		{
			sLocal_266 = "stagd_ptim15";
		}
		else if (iLocal_271 == 16)
		{
			sLocal_266 = "stagd_ptim16";
		}
		else if (iLocal_271 == 17)
		{
			sLocal_266 = "stagd_ptim17";
		}
		else if (iLocal_271 == 18)
		{
			sLocal_266 = "stagd_ptim18";
		}
		else if (iLocal_271 == 19)
		{
			sLocal_266 = "stagd_ptim19";
		}
		else if (iLocal_271 == 20)
		{
			sLocal_266 = "stagd_ptim20";
		}
		else if (iLocal_271 == 21)
		{
			sLocal_266 = "stagd_ptim21";
		}
		else if (iLocal_271 == 22)
		{
			sLocal_266 = "stagd_ptim22";
		}
		else if (iLocal_271 == 23)
		{
			sLocal_266 = "stagd_ptim23";
		}
	}
}

int func_123(int iParam0)
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
			if (func_124())
			{
				Global_27 = MISC::GET_GAME_TIMER();
				return 1;
			}
		}
	}
	return 0;
}

int func_124()
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

void func_125()
{
	if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_51))
	{
		if (SYSTEM::VDIST(unk_0x9B0761B4C3EB8BC7(), 0))
		{
			if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(ENTITY::GET_ENTITY_MODEL(unk_0x9B0761B4C3EB8BC7(), 0)))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(ENTITY::GET_ENTITY_MODEL(unk_0x9B0761B4C3EB8BC7(), 0), true, false);
			}
		}
		bLocal_97 = VEHICLE::GET_RANDOM_VEHICLE_IN_SPHERE(NETWORK::NETWORK_ARE_HANDLES_THE_SAME(bLocal_51, 0), 30f, 0, 4);
		if (!PED::IS_PED_IN_ANY_POLICE_VEHICLE(bLocal_97, 0))
		{
			if (!SYSTEM::VDIST2(bLocal_97, -1, 0))
			{
				if (ENTITY::IS_ENTITY_AT_ENTITY(bLocal_97, bLocal_51, 30f, 30f, 30f, false, true, 0))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(bLocal_97, true, false);
					if (ENTITY::GET_ENTITY_COORDS(bLocal_97, false))
					{
						VEHICLE::START_VEHICLE_HORN(bLocal_97, 3000, 0, false);
						if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_51))
						{
							if (!func_71() && !iLocal_79)
							{
								func_4(&uLocal_100, "stagdau", "stagd_greet2", 4, 0, 0, 0);
							}
						}
					}
				}
				else
				{
					STREAMING::REMOVE_ANIM_DICT(&bLocal_97);
				}
			}
		}
	}
}

void func_126()
{
	int iVar0;
	bool bVar1;
	
	if (SYSTEM::VDIST(unk_0x9B0761B4C3EB8BC7(), 1))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_ENTERING(unk_0x9B0761B4C3EB8BC7());
		if (ENTITY::GET_ENTITY_COORDS(iVar0, false))
		{
			bVar1 = MISC::IS_MINIGAME_IN_PROGRESS(bVar0, 0, 0);
			if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bVar1))
			{
				if (bVar1 != unk_0x9B0761B4C3EB8BC7())
				{
					if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(bVar1))
					{
						if (!PED::IS_PED_HEADTRACKING_ENTITY(bVar1, unk_0x9B0761B4C3EB8BC7()))
						{
							TASK::TASK_LOOK_AT_ENTITY(bVar1, unk_0x9B0761B4C3EB8BC7(), 2000, 2048, 2);
						}
					}
				}
			}
		}
	}
}

void func_127()
{
	func_128(39, 1);
	func_128(40, 1);
	func_128(41, 1);
	func_128(42, 1);
	func_128(43, 1);
	func_128(44, 1);
	unk_0x78FCB2E22C41B9D5(joaat("u_m_y_staggrm_01"));
	unk_0x78FCB2E22C41B9D5(joaat("superd"));
	unk_0x78FCB2E22C41B9D5(joaat("prop_stag_do_rope"));
	while ((!ENTITY::DOES_ENTITY_EXIST(joaat("u_m_y_staggrm_01")) || !ENTITY::DOES_ENTITY_EXIST(joaat("superd"))) || !ENTITY::DOES_ENTITY_EXIST(joaat("prop_stag_do_rope")))
	{
		SYSTEM::WAIT(0);
	}
	STREAMING::REQUEST_ANIM_DICT("re@stag_do@");
	STREAMING::REQUEST_ANIM_DICT("re@stag_do@idle_a");
	AUDIO::REQUEST_SCRIPT_AUDIO_BANK("ROPE_CUT", false, -1);
	while ((!STREAMING::HAS_ANIM_DICT_LOADED("re@stag_do@") || !STREAMING::HAS_ANIM_DICT_LOADED("re@stag_do@idle_a")) || !AUDIO::REQUEST_SCRIPT_AUDIO_BANK("ROPE_CUT", false, -1))
	{
		SYSTEM::WAIT(0);
	}
	bLocal_51 = PED::CREATE_PED(26, joaat("u_m_y_staggrm_01"), -935.57f, 2767.616f, 24.448f, 140.5f, true, true);
	AUDIO::SET_AMBIENT_VOICE_NAME(bLocal_51, "GROOM");
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(bLocal_51, 1862763509);
	PED::_0x2208438012482A1A(bLocal_51, 1);
	PED::SET_PED_MONEY(bLocal_51, 0);
	PED::SET_PED_COMPONENT_VARIATION(bLocal_51, 2, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(bLocal_51, 0, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(bLocal_51, 3, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(bLocal_51, 4, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(bLocal_51, 11, 1, 0, 0);
	TASK::TASK_SET_DECISION_MAKER(bLocal_51, -1143637011);
	PED::SET_PED_COMBAT_MOVEMENT(bLocal_51, 3);
	PLAYER::SET_PLAYER_VEHICLE_DEFENSE_MODIFIER(bLocal_51, 2.886675E-43f, 1);
	PLAYER::SET_PLAYER_VEHICLE_DEFENSE_MODIFIER(bLocal_51, 1.87774E-43f, 1);
	bLocal_58 = OBJECT::CREATE_OBJECT(joaat("prop_stag_do_rope"), NETWORK::NETWORK_ARE_HANDLES_THE_SAME(bLocal_51, 1), true, true, false);
	OBJECT::CREATE_OBJECT_NO_OFFSET(bLocal_58, bLocal_51, ENTITY::ATTACH_ENTITY_TO_ENTITY(bLocal_51, 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
	bLocal_55 = VEHICLE::CREATE_VEHICLE(joaat("superd"), -2009.015f, 455.3556f, 101.6528f, 274.8103f, false, false, false);
	VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(bLocal_55, true);
	VEHICLE::SET_VEHICLE_DIRT_LEVEL(bLocal_55, 0f);
	VEHICLE::SET_VEHICLE_DOORS_LOCKED(bLocal_55, 3);
	VEHICLE::SET_VEHICLE_MOD_KIT(bLocal_55, 0);
	VEHICLE::SET_VEHICLE_MOD_COLOR_1(bLocal_55, 0, 73, 0);
	VEHICLE::SET_VEHICLE_MOD_COLOR_2(bLocal_55, 2, 48);
	VEHICLE::SET_VEHICLE_MOD(bLocal_55, 11, 1, false);
	VEHICLE::SET_VEHICLE_MOD(bLocal_55, 12, 1, false);
	VEHICLE::REQUEST_VEHICLE_ASSET(joaat("superd"), 3);
	ENTITY::SET_ENTITY_LOD_DIST(bLocal_55, 10000);
	VEHICLE::SET_VEHICLE_LOD_MULTIPLIER(bLocal_55, 5f);
	VEHICLE::ADD_VEHICLE_UPSIDEDOWN_CHECK(bLocal_55);
	Local_63 = { -352.88f, 6164.31f, 30.5f };
	Local_64 = { -355.2565f, 6164.931f, 30.2944f };
	Local_65 = { -330.5575f, 6139.852f, 34.4886f };
	fLocal_66 = 25.375f;
	Local_67 = { -343.5804f, 6156.198f, 30.489f };
	Local_68 = { -1991.126f, 457.991f, 101.1808f };
	Local_69 = { -2002.69f, 460.539f, 99.828f };
	Local_70 = { -1997.605f, 445.6651f, 105.0519f };
	Local_71 = { -2026.817f, 450.3329f, 104.8771f };
	fLocal_72 = 24.6875f;
	Local_73 = { -2205.351f, 4298.79f, 47.265f };
	Local_74 = { -2207.525f, 4301.697f, 47.1803f };
	Local_75 = { -2195.637f, 4295.407f, 51.1889f };
	fLocal_76 = 12.5625f;
	Local_59 = { Local_68 };
	Local_60 = { Local_69 };
	Local_61 = { Local_70 };
	fLocal_62 = fLocal_72;
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("superd"), true);
	unk_0xAF7D4BF357E8B79E(Local_67 - Vector(10f, 10f, 10f), Local_67 + Vector(10f, 10f, 10f), 0, 1);
	PATHFIND::SET_ROADS_IN_AREA(Local_67 - Vector(20f, 20f, 20f), Local_67 + Vector(20f, 20f, 20f), false, true, 1, 1);
	PATHFIND::SET_ROADS_IN_AREA(NETWORK::NETWORK_ARE_HANDLES_THE_SAME(bLocal_51, 0) - Vector(10f, 10f, 10f), NETWORK::NETWORK_ARE_HANDLES_THE_SAME(bLocal_51, 0) + Vector(10f, 10f, 10f), false, true, 1, 1);
	PATHFIND::SET_ROADS_IN_AREA(Vector(101.6406f, 455.1994f, -2007.751f) - Vector(15f, 15f, 15f), Vector(101.6406f, 455.1994f, -2007.751f) + Vector(15f, 15f, 15f), false, true, 1, 1);
	PATHFIND::SET_ROADS_IN_AREA(Vector(47.4293f, 4299.008f, -2202.747f) - Vector(15f, 25f, 25f), Vector(47.4293f, 4299.008f, -2202.747f) + Vector(15f, 25f, 25f), false, true, 1, 1);
	MISC::CLEAR_AREA_OF_PEDS(NETWORK::NETWORK_ARE_HANDLES_THE_SAME(bLocal_51, 1), 10f, 0);
	if (!PED::IS_PED_IN_ANY_POLICE_VEHICLE(bLocal_51, 0))
	{
		TASK::OPEN_SEQUENCE_TASK(&iLocal_77);
		TASK::TASK_PLAY_ANIM(0, "re@stag_do@idle_a", "idle_a_ped", 8f, -8f, -1, 9, 0f, false, false, false);
		TASK::CLOSE_SEQUENCE_TASK(iLocal_77);
		AUDIO::STOP_SCRIPTED_CONVERSATION(bLocal_51, iLocal_77);
		TASK::CLEAR_SEQUENCE_TASK(&iLocal_77);
		PED::SET_PED_KEEP_TASK(bLocal_51, true);
	}
	if (func_16() == 0)
	{
		func_96(&uLocal_100, 0, unk_0x9B0761B4C3EB8BC7(), "MICHAEL", 0, 1);
	}
	if (func_16() == 1)
	{
		func_96(&uLocal_100, 0, unk_0x9B0761B4C3EB8BC7(), "FRANKLIN", 0, 1);
	}
	if (func_16() == 2)
	{
		func_96(&uLocal_100, 0, unk_0x9B0761B4C3EB8BC7(), "TREVOR", 0, 1);
	}
	func_96(&uLocal_100, 3, bLocal_51, "GROOM", 0, 1);
	iLocal_48 = 1;
}

void func_128(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_135(iParam0, 2, 1))
		{
			func_134(iParam0, 2, 1);
		}
	}
	else if (func_135(iParam0, 2, 1))
	{
		func_129(iParam0, 2, 1);
	}
}

void func_129(int iParam0, bool bParam1, bool bParam2)
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
		if (func_40() == 0)
		{
			uVar0 = func_132(func_133(iParam0), -1, 0);
			VEHICLE::IS_VEHICLE_DRIVEABLE(&uVar0, bParam1);
			func_130(func_133(iParam0), uVar0, -1, 1, 0);
		}
	}
	else
	{
		VEHICLE::IS_VEHICLE_DRIVEABLE(&(Global_111858.f_668[iParam0]), bParam1);
	}
}

void func_130(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2551832[iParam0 /*3*/][func_131(iParam2)];
	if (iVar0 != 0)
	{
		NETWORK::NETWORK_HAS_SOCIAL_CLUB_ACCOUNT(iVar0, uParam1, iParam3);
	}
}

int func_131(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_43();
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

int func_132(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 11771)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2551832[iParam0 /*3*/][func_131(iParam1)];
		if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_133(int iParam0)
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

void func_134(int iParam0, int iParam1, bool bParam2)
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
		if (func_40() == 0)
		{
			uVar0 = func_132(func_133(iParam0), -1, 0);
			unk_0xBE20AB8238688965(&uVar0, iParam1);
			func_130(func_133(iParam0), uVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0xBE20AB8238688965(&(Global_111858.f_668[iParam0]), iParam1);
	}
}

int func_135(int iParam0, int iParam1, bool bParam2)
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
		if (func_40() == 0)
		{
			return unk_0xCE990E643CD9D0E5(func_132(func_133(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0xCE990E643CD9D0E5(Global_111858.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_136()
{
	if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_ID()) && !STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(unk_0x9B0761B4C3EB8BC7()))
	{
		if (SYSTEM::VDIST2(NETWORK::NETWORK_ARE_HANDLES_THE_SAME(unk_0x9B0761B4C3EB8BC7(), 1), Local_45) < (75f * 75f))
		{
			return 1;
		}
		if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(unk_0x9B0761B4C3EB8BC7())) > 1369f && !func_147())
		{
			return 0;
		}
	}
	if (func_143())
	{
		return 1;
	}
	if (func_137(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_137(float fParam0, bool bParam1)
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
		if (func_18(func_16()))
		{
			iVar5 = func_50();
			iVar6 = 0;
			iVar6 = 0;
			while (iVar6 < 63)
			{
				iVar1 = iVar6;
				if (unk_0xCE990E643CD9D0E5(Global_111858.f_18570[iVar1 /*6*/], 2) && !unk_0xCE990E643CD9D0E5(Global_111858.f_18570[iVar1 /*6*/], 3))
				{
					func_138(iVar1, &Var0);
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

void func_138(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_139(uParam1, "Abigail1", func_141(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_140(iParam0), 1, 0);
			break;
		
		case 1:
			func_139(uParam1, "Abigail2", func_141(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_140(iParam0), 1, 0);
			break;
		
		case 2:
			func_139(uParam1, "Barry1", func_141(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_140(iParam0), 1, 0);
			break;
		
		case 3:
			func_139(uParam1, "Barry2", func_141(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_140(iParam0), 1, 1);
			break;
		
		case 4:
			func_139(uParam1, "Barry3", func_141(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_140(iParam0), 0, 0);
			break;
		
		case 5:
			func_139(uParam1, "Barry3A", func_141(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_140(iParam0), 0, 1);
			break;
		
		case 6:
			func_139(uParam1, "Barry3C", func_141(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_140(iParam0), 0, 1);
			break;
		
		case 7:
			func_139(uParam1, "Barry4", func_141(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_140(iParam0), 0, 0);
			break;
		
		case 8:
			func_139(uParam1, "Dreyfuss1", func_141(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_140(iParam0), 0, 0);
			break;
		
		case 9:
			func_139(uParam1, "Epsilon1", func_141(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_140(iParam0), 0, 0);
			break;
		
		case 10:
			func_139(uParam1, "Epsilon2", func_141(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_140(iParam0), 1, 0);
			break;
		
		case 11:
			func_139(uParam1, "Epsilon3", func_141(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_140(iParam0), 0, 0);
			break;
		
		case 12:
			func_139(uParam1, "Epsilon4", func_141(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_140(iParam0), 0, 0);
			break;
		
		case 13:
			func_139(uParam1, "Epsilon5", func_141(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_140(iParam0), 1, 0);
			break;
		
		case 14:
			func_139(uParam1, "Epsilon6", func_141(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_140(iParam0), 0, 1);
			break;
		
		case 15:
			func_139(uParam1, "Epsilon7", func_141(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_140(iParam0), 0, 0);
			break;
		
		case 16:
			func_139(uParam1, "Epsilon8", func_141(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_140(iParam0), 1, 0);
			break;
		
		case 17:
			func_139(uParam1, "Extreme1", func_141(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_140(iParam0), 0, 1);
			break;
		
		case 18:
			func_139(uParam1, "Extreme2", func_141(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_140(iParam0), 0, 1);
			break;
		
		case 19:
			func_139(uParam1, "Extreme3", func_141(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_140(iParam0), 0, 1);
			break;
		
		case 20:
			func_139(uParam1, "Extreme4", func_141(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_140(iParam0), 0, 0);
			break;
		
		case 21:
			func_139(uParam1, "Fanatic1", func_141(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_140(iParam0), 1, 0);
			break;
		
		case 22:
			func_139(uParam1, "Fanatic2", func_141(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_140(iParam0), 1, 0);
			break;
		
		case 23:
			func_139(uParam1, "Fanatic3", func_141(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_140(iParam0), 0, 1);
			break;
		
		case 24:
			func_139(uParam1, "Hao1", func_141(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_140(iParam0), 0, 1);
			break;
		
		case 25:
			func_139(uParam1, "Hunting1", func_141(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_140(iParam0), 0, 1);
			break;
		
		case 26:
			func_139(uParam1, "Hunting2", func_141(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_140(iParam0), 0, 1);
			break;
		
		case 27:
			func_139(uParam1, "Josh1", func_141(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_140(iParam0), 1, 0);
			break;
		
		case 28:
			func_139(uParam1, "Josh2", func_141(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_140(iParam0), 1, 1);
			break;
		
		case 29:
			func_139(uParam1, "Josh3", func_141(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_140(iParam0), 1, 1);
			break;
		
		case 30:
			func_139(uParam1, "Josh4", func_141(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_140(iParam0), 1, 0);
			break;
		
		case 31:
			func_139(uParam1, "Maude1", func_141(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_140(iParam0), 0, 1);
			break;
		
		case 32:
			func_139(uParam1, "Minute1", func_141(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_140(iParam0), 0, 1);
			break;
		
		case 33:
			func_139(uParam1, "Minute2", func_141(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_140(iParam0), 0, 1);
			break;
		
		case 34:
			func_139(uParam1, "Minute3", func_141(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_140(iParam0), 0, 1);
			break;
		
		case 35:
			func_139(uParam1, "MrsPhilips1", func_141(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_140(iParam0), 0, 0);
			break;
		
		case 36:
			func_139(uParam1, "MrsPhilips2", func_141(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_140(iParam0), 0, 0);
			break;
		
		case 37:
			func_139(uParam1, "Nigel1", func_141(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_140(iParam0), 1, 0);
			break;
		
		case 38:
			func_139(uParam1, "Nigel1A", func_141(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_140(iParam0), 1, 1);
			break;
		
		case 39:
			func_139(uParam1, "Nigel1B", func_141(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_140(iParam0), 1, 1);
			break;
		
		case 40:
			func_139(uParam1, "Nigel1C", func_141(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_140(iParam0), 1, 1);
			break;
		
		case 41:
			func_139(uParam1, "Nigel1D", func_141(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_140(iParam0), 1, 1);
			break;
		
		case 42:
			func_139(uParam1, "Nigel2", func_141(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_140(iParam0), 1, 1);
			break;
		
		case 43:
			func_139(uParam1, "Nigel3", func_141(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_140(iParam0), 1, 1);
			break;
		
		case 44:
			func_139(uParam1, "Omega1", func_141(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_140(iParam0), 0, 0);
			break;
		
		case 45:
			func_139(uParam1, "Omega2", func_141(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_140(iParam0), 0, 0);
			break;
		
		case 46:
			func_139(uParam1, "Paparazzo1", func_141(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_140(iParam0), 0, 1);
			break;
		
		case 47:
			func_139(uParam1, "Paparazzo2", func_141(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_140(iParam0), 0, 1);
			break;
		
		case 48:
			func_139(uParam1, "Paparazzo3", func_141(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_140(iParam0), 0, 0);
			break;
		
		case 49:
			func_139(uParam1, "Paparazzo3A", func_141(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_140(iParam0), 0, 1);
			break;
		
		case 50:
			func_139(uParam1, "Paparazzo3B", func_141(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_140(iParam0), 0, 1);
			break;
		
		case 51:
			func_139(uParam1, "Paparazzo4", func_141(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_140(iParam0), 0, 0);
			break;
		
		case 52:
			func_139(uParam1, "Rampage1", func_141(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_140(iParam0), 0, 0);
			break;
		
		case 54:
			func_139(uParam1, "Rampage3", func_141(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_140(iParam0), 1, 0);
			break;
		
		case 55:
			func_139(uParam1, "Rampage4", func_141(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_140(iParam0), 1, 0);
			break;
		
		case 56:
			func_139(uParam1, "Rampage5", func_141(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_140(iParam0), 0, 0);
			break;
		
		case 53:
			func_139(uParam1, "Rampage2", func_141(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_140(iParam0), 1, 0);
			break;
		
		case 57:
			func_139(uParam1, "TheLastOne", func_141(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_140(iParam0), 0, 1);
			break;
		
		case 58:
			func_139(uParam1, "Tonya1", func_141(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_140(iParam0), 0, 1);
			break;
		
		case 59:
			func_139(uParam1, "Tonya2", func_141(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_140(iParam0), 0, 1);
			break;
		
		case 60:
			func_139(uParam1, "Tonya3", func_141(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_140(iParam0), 0, 1);
			break;
		
		case 61:
			func_139(uParam1, "Tonya4", func_141(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_140(iParam0), 0, 1);
			break;
		
		case 62:
			func_139(uParam1, "Tonya5", func_141(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_140(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_139(var uParam0, char* sParam1, struct<2> Param2, int iParam3, int iParam4, int iParam5, struct<3> Param6, int iParam7, char* sParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, var uParam19, int iParam20, int iParam21)
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

int func_140(int iParam0)
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

struct<2> func_141(int iParam0)
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	cVar1 = { func_142(iParam0) };
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

struct<2> func_142(int iParam0)
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

int func_143()
{
	if (func_146() && !func_147())
	{
		return 1;
	}
	if (func_145() && func_144())
	{
		return 1;
	}
	return 0;
}

bool func_144()
{
	return Global_111576 > 0;
}

int func_145()
{
	if (Global_95877 != -1)
	{
		return 1;
	}
	return 0;
}

int func_146()
{
	if (Global_95877 != -1)
	{
		return unk_0xCE990E643CD9D0E5(Global_89743[Global_95877 /*34*/].f_15, 20);
	}
	return 0;
}

int func_147()
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

int func_148()
{
	if (!func_119(5))
	{
		return 1;
	}
	if (func_143())
	{
		return 1;
	}
	if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(unk_0x9B0761B4C3EB8BC7()))
	{
		if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(unk_0x9B0761B4C3EB8BC7())) > 1369f && !func_147())
		{
			return 0;
		}
	}
	if (func_137(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_149()
{
	if ((Global_111847 == func_54() && MISC::GET_RANDOM_EVENT_FLAG()) && Global_111848)
	{
		return 1;
	}
	return 0;
}

void func_150(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_54();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_152(iParam0);
	MISC::_0x65D2EBB47E1CEC21(false);
	MISC::SET_RANDOM_EVENT_FLAG(true);
	Global_111844 = 0;
	func_151();
}

void func_151()
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

void func_152(int iParam0)
{
	Global_111847 = iParam0;
}

int func_153(struct<3> Param0, int iParam1, int iParam2, bool bParam3, bool bParam4)
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
		iParam1 = func_54();
	}
	if (iParam1 == -1)
	{
		return 0;
	}
	if (iParam1 == 31 || iParam1 == 32)
	{
		if (!func_181())
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
			if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(unk_0x9B0761B4C3EB8BC7())) > 1369f && !func_147())
			{
				return 0;
			}
		}
		if (!Global_111858.f_9081)
		{
			return 0;
		}
		if (func_35(0))
		{
			return 0;
		}
		if (func_143())
		{
			return 0;
		}
		if (func_180())
		{
			return 0;
		}
		if (Global_111847 != -1)
		{
			return 0;
		}
		if (func_18(func_16()))
		{
			if (func_137(100f, 1) != -1)
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
		if (!func_179(iParam1))
		{
			return 0;
		}
		if (func_18(func_16()))
		{
			if (func_178(func_16()) == 4 || func_178(func_16()) == 5)
			{
				return 0;
			}
		}
		if (func_18(func_16()))
		{
			if (!func_177(iParam1, iParam2, 145))
			{
				return 0;
			}
		}
		if (!func_176(Global_111858.f_24991.f_43[iParam1]))
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
		if (func_175())
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
		if (!func_166(4))
		{
			return 0;
		}
		if (!func_119(5))
		{
			return 0;
		}
		if (func_165(iParam1, iParam2) && !bParam3)
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
		if ((iParam1 == 9 && (iParam2 == 2 || iParam2 == 5)) && !func_165(0, 0))
		{
			return 0;
		}
		if (Global_31114)
		{
			return 0;
		}
		if (func_179(30) && !func_165(30, 0))
		{
			if (iParam1 != 30)
			{
				if (SYSTEM::VDIST2(Var1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_18(func_16()))
		{
			iVar2 = 0;
			while (iVar2 < 3)
			{
				Var3 = { Global_111858.f_2359.f_539.f_2300[iVar2 /*3*/] };
				bVar4 = Global_111858.f_2359.f_539.f_2296[iVar2];
				if (func_164(bVar4))
				{
					if (func_155(iVar2))
					{
						if (!func_154(Var3, 0f, 0f, 0f, 0))
						{
							if (SYSTEM::VDIST2(NETWORK::NETWORK_ARE_HANDLES_THE_SAME(unk_0x9B0761B4C3EB8BC7(), 0), Var3) < (210f * 210f))
							{
								if (func_16() != iVar2)
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

bool func_154(struct<3> Param0, struct<3> Param1, bool bParam2)
{
	if (bParam2)
	{
		return (Param0.x == Param1.x && Param0.f_1 == Param1.f_1);
	}
	return ((Param0.x == Param1.x && Param0.f_1 == Param1.f_1) && Param0.f_2 == Param1.f_2);
}

bool func_155(int iParam0)
{
	bool bVar0;
	
	bVar0 = Global_111858.f_2359.f_539.f_2296[iParam0];
	return func_156(bVar0);
}

int func_156(bool bParam0)
{
	return func_157(bParam0, 1);
}

int func_157(bool bParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_164(bParam0))
	{
		return 0;
	}
	func_158(bParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_158(bool bParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	func_159(func_81(), bParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_159(bool bParam0, bool bParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	void fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_163(bParam0, bParam1))
	{
		fVar0 = func_88(bParam1);
		iVar1 = func_86(bParam0);
		iVar2 = (func_86(bParam0) - func_86(bParam1));
		iVar3 = (func_88(bParam0) - func_88(bParam1));
		iVar4 = (func_162(bParam0) - func_162(bParam1));
		iVar5 = (func_80(bParam0) - func_80(bParam1));
		iVar6 = (func_104(bParam0) - func_104(bParam1));
		iVar7 = (func_161(bParam0) - func_161(bParam1));
	}
	else
	{
		fVar0 = func_88(bParam0);
		iVar1 = func_86(bParam1);
		iVar2 = (func_86(bParam1) - func_86(bParam0));
		iVar3 = (func_88(bParam1) - func_88(bParam0));
		iVar4 = (func_162(bParam1) - func_162(bParam0));
		iVar5 = (func_80(bParam1) - func_80(bParam0));
		iVar6 = (func_104(bParam1) - func_104(bParam0));
		iVar7 = (func_161(bParam1) - func_161(bParam0));
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
		iVar4 = (iVar4 + func_85(fVar0, iVar1));
		iVar3 = (iVar3 - 1);
		fVar0 = SYSTEM::ROUND(func_160(SYSTEM::TO_FLOAT(fVar0 + 1), 0f, 12f));
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

float func_160(float fParam0, float fParam1, float fParam2)
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

int func_161(bool bParam0)
{
	return SYSTEM::SHIFT_RIGHT(bParam0, 20) & 63;
}

int func_162(bool bParam0)
{
	return SYSTEM::SHIFT_RIGHT(bParam0, 4) & 31;
}

int func_163(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_164(bParam1) || !func_164(bParam0))
	{
		return 1;
	}
	iVar0 = func_86(bParam0);
	iVar1 = func_86(bParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_88(bParam0);
	iVar1 = func_88(bParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_162(bParam0);
	iVar1 = func_162(bParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_80(bParam0);
	iVar1 = func_80(bParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_104(bParam0);
	iVar1 = func_104(bParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_161(bParam0);
	iVar1 = func_161(bParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_164(bool bParam0)
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
	iVar0 = func_161(bParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_104(bParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_80(bParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_86(bParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_88(bParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_162(bParam0);
	if (iVar5 < 1 || iVar5 > func_85(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_165(int iParam0, int iParam1)
{
	if (unk_0xCE990E643CD9D0E5(Global_111858.f_24991.f_8[iParam0], iParam1))
	{
		return 1;
	}
	return 0;
}

int func_166(int iParam0)
{
	int iVar0;
	
	if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_ID()))
	{
		if (MISC::IS_BIT_SET(unk_0x9B0761B4C3EB8BC7()))
		{
			if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(unk_0x9B0761B4C3EB8BC7()))
			{
				iVar0 = func_16();
				if (!func_18(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(unk_0x9B0761B4C3EB8BC7())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(unk_0x9B0761B4C3EB8BC7())) || MISC::IS_PC_VERSION(unk_0x9B0761B4C3EB8BC7())) || PED::IS_PED_SHOOTING(unk_0x9B0761B4C3EB8BC7())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())) || PED::IS_PED_IN_COMBAT(unk_0x9B0761B4C3EB8BC7(), 0)) || func_174()) || Global_110905) || Global_30970) || func_173()) || func_24(8, -1)) || func_172()) || func_171()) || func_170()) || func_169()) || Global_111858.f_7684.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || func_174()) || Global_30970) || func_173()) || func_24(8, -1)) || func_170()) || func_172()) || func_171()) || func_169()) || Global_111858.f_7684.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(unk_0x9B0761B4C3EB8BC7())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(unk_0x9B0761B4C3EB8BC7())) || MISC::IS_PC_VERSION(unk_0x9B0761B4C3EB8BC7())) || PED::IS_PED_SHOOTING(unk_0x9B0761B4C3EB8BC7())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())) || PED::IS_PED_IN_COMBAT(unk_0x9B0761B4C3EB8BC7(), 0)) || func_174()) || Global_110905) || Global_30970) || func_173()) || func_24(8, -1)) || func_170()) || func_172()) || func_171()) || func_169()) || Global_111858.f_7684.f_919[iVar0] == 5) || Global_42178 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((MISC::IS_PC_VERSION(unk_0x9B0761B4C3EB8BC7()) || PED::IS_PED_SHOOTING(unk_0x9B0761B4C3EB8BC7())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PED::IS_PED_IN_COMBAT(unk_0x9B0761B4C3EB8BC7(), 0)) || func_174()) || Global_110905) || Global_30970) || func_173()) || func_24(8, -1)) || func_172()) || func_171()) || func_169()) || Global_111858.f_7684.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_174() || AUDIO::SET_SCRIPT_UPDATE_DOOR_AUDIO(PLAYER::PLAYER_ID()) > 0) || func_24(8, -1)) || func_169()) || func_168()) || Global_111858.f_7684.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_24(8, -1) || func_172()) || func_171()) || func_168()) || func_167())
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
							if ((((((((((((((PED::IS_PED_IN_COMBAT(unk_0x9B0761B4C3EB8BC7(), 0) || AUDIO::SET_SCRIPT_UPDATE_DOOR_AUDIO(PLAYER::PLAYER_ID()) > 0) || ENTITY::IS_ENTITY_IN_AIR(unk_0x9B0761B4C3EB8BC7())) || MISC::IS_PC_VERSION(unk_0x9B0761B4C3EB8BC7())) || PED::IS_PED_SHOOTING(unk_0x9B0761B4C3EB8BC7())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())) || func_174()) || Global_30970) || func_173()) || func_24(8, -1)) || func_171()) || func_170()) || func_169()) || Global_111858.f_7684.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((PED::IS_PED_IN_COMBAT(unk_0x9B0761B4C3EB8BC7(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) || !GRAPHICS::DRAW_SCALEFORM_MOVIE()) || ENTITY::IS_ENTITY_IN_AIR(unk_0x9B0761B4C3EB8BC7())) || MISC::IS_PC_VERSION(unk_0x9B0761B4C3EB8BC7())) || PED::IS_PED_SHOOTING(unk_0x9B0761B4C3EB8BC7())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || func_174()) || func_171()) || Global_110905) || Global_30970) || func_173()) || Global_42801) || func_24(8, -1)) || func_170()) || func_168()) || func_169()) || Global_111858.f_7684.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((PED::IS_PED_IN_COMBAT(unk_0x9B0761B4C3EB8BC7(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) || !GRAPHICS::DRAW_SCALEFORM_MOVIE()) || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0)) || ENTITY::IS_ENTITY_IN_AIR(unk_0x9B0761B4C3EB8BC7())) || SYSTEM::VDIST(unk_0x9B0761B4C3EB8BC7(), 1)) || MISC::IS_PC_VERSION(unk_0x9B0761B4C3EB8BC7())) || PED::IS_PED_SHOOTING(unk_0x9B0761B4C3EB8BC7())) || PED::IS_PED_DIVING(unk_0x9B0761B4C3EB8BC7())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())) || func_174()) || Global_110905) || Global_30970) || func_173()) || func_24(8, -1)) || func_170()) || func_168()) || func_172()) || func_171()) || func_169())
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

var func_167()
{
	return Global_98994.f_1;
}

int func_168()
{
	if (Global_95877 != -1)
	{
		return unk_0xCE990E643CD9D0E5(Global_89743[Global_95877 /*34*/].f_15, 13);
	}
	return 0;
}

int func_169()
{
	if (INTERIOR::GET_INTERIOR_AT_COORDS(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_170()
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

bool func_171()
{
	return Global_99007.f_352 > 0;
}

bool func_172()
{
	return Global_99007.f_351 > 0;
}

var func_173()
{
	return Global_1312896;
}

int func_174()
{
	if (!MISC::SET_BIT())
	{
		return Global_96433.f_44 == 1;
	}
	return 0;
}

int func_175()
{
	func_15();
	if (Global_8356[Global_19681 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_176(bool bParam0)
{
	return func_163(func_81(), bParam0);
}

int func_177(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_16();
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

int func_178(int iParam0)
{
	if (!func_18(iParam0))
	{
		return 7;
	}
	return Global_111858.f_7684.f_919[iParam0];
}

bool func_179(int iParam0)
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_181())
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

int func_180()
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

int func_181()
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

int func_182(int iParam0, int iParam1)
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

void func_183()
{
	if (iLocal_49)
	{
		func_219(0);
		unk_0xAF7D4BF357E8B79E(Local_67 - Vector(10f, 10f, 10f), Local_67 + Vector(10f, 10f, 10f), 1, 1);
		PED::REMOVE_SCENARIO_BLOCKING_AREAS();
		func_27();
		PLAYER::RESET_WANTED_LEVEL_DIFFICULTY(PLAYER::PLAYER_ID());
		if (!PED::IS_PED_IN_ANY_POLICE_VEHICLE(iLocal_57, 0))
		{
			if (!unk_0xE0B3BC41DDA88DF0(unk_0x9B0761B4C3EB8BC7(), bLocal_57, 0) && !ENTITY::IS_ENTITY_AT_ENTITY(unk_0x9B0761B4C3EB8BC7(), bLocal_57, 50f, 50f, 50f, false, true, 0))
			{
				func_195(bLocal_57, 0, 145);
			}
		}
		if (unk_0xC2169C00B643278B(unk_0x9B0761B4C3EB8BC7(), Local_67, 100f, 100f, 100f, 0, 1, 0))
		{
			if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_51) && !STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_53))
			{
				TASK::OPEN_SEQUENCE_TASK(&iLocal_77);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -330.36f, 6154.03f, 31.8f, 1f, -1, 0.25f, false, 40000f);
				TASK::TASK_CHAT_TO_PED(0, bLocal_53, 16, 0f, 0f, 0f, 0f, 0f);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_77);
				AUDIO::STOP_SCRIPTED_CONVERSATION(bLocal_51, iLocal_77);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_77);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_77);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -330.36f, 6155.03f, 31.8f, 1f, -1, 0.25f, false, 40000f);
				TASK::TASK_CHAT_TO_PED(0, bLocal_51, 16, 0f, 0f, 0f, 0f, 0f);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_77);
				AUDIO::STOP_SCRIPTED_CONVERSATION(bLocal_53, iLocal_77);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_77);
			}
		}
		STREAMING::REMOVE_ANIM_DICT(&bLocal_97);
		STREAMING::REMOVE_ANIM_DICT(&bLocal_55);
		if (!PLAYER::IS_PLAYER_DEAD(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
		}
		if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_51))
		{
			PLAYER::SET_PLAYER_VEHICLE_DEFENSE_MODIFIER(bLocal_51, 4.442116E-43f, 1);
			if (!ENTITY::IS_ENTITY_ATTACHED(bLocal_51))
			{
				ENTITY::SET_ENTITY_COORDS(bLocal_51, 0);
			}
			PED::REMOVE_PED_FROM_GROUP(bLocal_51);
			PED::_0x2208438012482A1A(bLocal_51, 0);
		}
		else if (MISC::IS_BIT_SET(bLocal_58))
		{
			ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(bLocal_58, 1, 1);
		}
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&bLocal_51);
		if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_53))
		{
			PLAYER::SET_PLAYER_VEHICLE_DEFENSE_MODIFIER(bLocal_53, 4.442116E-43f, 1);
			PED::_0x2208438012482A1A(bLocal_53, 0);
		}
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&bLocal_53);
		if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_52))
		{
			PED::_0x2208438012482A1A(bLocal_52, 0);
		}
		if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_54))
		{
			PED::_0x2208438012482A1A(bLocal_54, 0);
		}
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&bLocal_52);
	}
	func_184(-1);
	ENTITY::STOP_ENTITY_ANIM();
}

void func_184(int iParam0)
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_54();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_149())
	{
		func_188(iParam0);
		HUD::SET_MISSION_NAME(false, 0);
		Global_111849 = MISC::GET_GAME_TIMER();
		func_187(30000);
		StringCopy(&cVar0, func_186(Global_111847, 1), 64);
		if (func_53(Global_111847) > 0)
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
	func_185(&Global_31027);
	Global_111848 = 0;
	func_152(-1);
}

void func_185(var uParam0)
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

char* func_186(int iParam0, bool bParam1)
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

void func_187(int iParam0)
{
	Global_42182 = (MISC::GET_GAME_TIMER() + iParam0);
}

void func_188(int iParam0)
{
	func_189(iParam0, 0, func_194(iParam0));
}

void func_189(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_81();
	func_192(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_191(iParam0, &uVar0);
	Var1 = { func_190(&uVar0) };
}

struct<16> func_190(var uParam0)
{
	struct<16> Var0;
	int iVar1;
	
	StringCopy(&Var0, "", 64);
	iVar1 = func_80(*uParam0);
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
	StringConCat(&Var0, ":", 64);
	iVar1 = func_161(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "  ", 64);
	iVar1 = func_162(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "/", 64);
	iVar1 = func_88(*uParam0);
	if (iVar1 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_86(*uParam0), 64);
	return Var0;
}

void func_191(int iParam0, var uParam1)
{
	Global_111858.f_24991.f_43[iParam0] = *uParam1;
}

void func_192(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_86(*uParam0);
	iVar1 = func_88(*uParam0);
	iVar2 = func_162(*uParam0);
	iVar3 = func_80(*uParam0);
	iVar4 = func_104(*uParam0);
	iVar5 = func_161(*uParam0);
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
	iVar6 = func_85(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_85(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_193(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_193(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_91(uParam0, iParam1);
	func_90(uParam0, iParam2);
	func_89(uParam0, iParam3);
	func_83(uParam0, iParam5);
	func_84(uParam0, iParam4);
	func_82(uParam0, iParam6);
}

int func_194(int iParam0)
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

int func_195(bool bParam0, int iParam1, int iParam2)
{
	var uVar0;
	char* sVar1;
	
	if (iParam1 == 0)
	{
		sVar1 = ENTITY::GET_ENTITY_SCRIPT(bParam0, &uVar0);
		if (!CAM::IS_SCREEN_FADED_OUT(sVar1))
		{
			if (AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT(sVar1) == AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("vehicle_gen_controller"))
			{
				return 0;
			}
		}
	}
	func_196(bParam0, iParam2);
	return 1;
}

void func_196(bool bParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	if (!func_202(bParam0))
	{
		return;
	}
	if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
	{
		bVar0 = MISC::IS_MINIGAME_IN_PROGRESS(bParam0, -1, 0);
		if (!MISC::IS_BIT_SET(bVar0))
		{
			bVar0 = VEHICLE::GET_LAST_PED_IN_VEHICLE_SEAT(bParam0, -1);
		}
		if (MISC::IS_BIT_SET(bVar0) && !STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bVar0))
		{
			if (MISC::GET_MODEL_DIMENSIONS(bVar0) == joaat("player_zero"))
			{
				iParam1 = 0;
			}
			else if (MISC::GET_MODEL_DIMENSIONS(bVar0) == joaat("player_one"))
			{
				iParam1 = 1;
			}
			else if (MISC::GET_MODEL_DIMENSIONS(bVar0) == joaat("player_two"))
			{
				iParam1 = 2;
			}
		}
		if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
		{
			iParam1 = Global_111858.f_2359.f_539.f_4321;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			if (MISC::GET_MODEL_DIMENSIONS(bParam0) == Global_111858.f_32745.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66)
			{
				if (!CAM::IS_SCREEN_FADED_OUT(&(Global_111858.f_32745.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
				{
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS(VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(bParam0), &(Global_111858.f_32745.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
					{
						Global_111858.f_32745.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66 = 0;
						Global_111858.f_32745.f_5592[iVar1] = iVar2;
					}
				}
			}
			iVar2++;
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (MISC::GET_MODEL_DIMENSIONS(bParam0) == Global_111858.f_32745.f_5600[iVar1 /*78*/].f_66)
		{
			if (!CAM::IS_SCREEN_FADED_OUT(&(Global_111858.f_32745.f_5600[iVar1 /*78*/].f_1)))
			{
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS(VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(bParam0), &(Global_111858.f_32745.f_5600[iVar1 /*78*/].f_1)))
				{
					Global_111858.f_32745.f_5600[iVar1 /*78*/].f_66 = 0;
				}
			}
		}
		iVar1++;
	}
	Global_111858.f_32745.f_5590 = iParam1;
	Global_76559 = bParam0;
	Global_111858.f_32745.f_5588 = 1;
	func_197(bParam0, &(Global_111858.f_32745.f_5510));
}

void func_197(bool bParam0, var uParam1)
{
	int iVar0;
	
	if (ENTITY::GET_ENTITY_COORDS(bParam0, false))
	{
		func_201(uParam1);
		uParam1->f_66 = MISC::GET_MODEL_DIMENSIONS(bParam0);
		StringCopy(&(uParam1->f_1), VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(bParam0), 16);
		*uParam1 = VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(bParam0);
		VEHICLE::GET_VEHICLE_COLOURS(bParam0, &(uParam1->f_5), &(uParam1->f_6));
		VEHICLE::GET_VEHICLE_EXTRA_COLOURS(bParam0, &(uParam1->f_7), &(uParam1->f_8));
		VEHICLE::GET_VEHICLE_TYRE_SMOKE_COLOR(bParam0, &(uParam1->f_62), &(uParam1->f_63), &(uParam1->f_64));
		uParam1->f_65 = VEHICLE::GET_VEHICLE_WINDOW_TINT(bParam0);
		uParam1->f_67 = VEHICLE::GET_VEHICLE_LIVERY(bParam0);
		uParam1->f_69 = VEHICLE::GET_VEHICLE_WHEEL_TYPE(bParam0);
		uParam1->f_70 = VEHICLE::GET_VEHICLE_DOOR_LOCK_STATUS(bParam0);
		VEHICLE::GET_VEHICLE_CUSTOM_SECONDARY_COLOUR(bParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		VEHICLE::_GET_VEHICLE_NEON_LIGHTS_COLOUR(bParam0, &(uParam1->f_74), &(uParam1->f_75), &(uParam1->f_76));
		if (VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(bParam0, 2))
		{
			unk_0xBE20AB8238688965(&(uParam1->f_77), 28);
		}
		if (VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(bParam0, 3))
		{
			unk_0xBE20AB8238688965(&(uParam1->f_77), 29);
		}
		if (VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(bParam0, 0))
		{
			unk_0xBE20AB8238688965(&(uParam1->f_77), 30);
		}
		if (VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(bParam0, 1))
		{
			unk_0xBE20AB8238688965(&(uParam1->f_77), 31);
		}
		if (uParam1->f_65 == -1 && !func_200(uParam1->f_66))
		{
			uParam1->f_65 = 0;
		}
		if (VEHICLE::IS_VEHICLE_A_CONVERTIBLE(bParam0, false))
		{
			uParam1->f_68 = VEHICLE::GET_CONVERTIBLE_ROOF_STATE(bParam0);
		}
		if (VEHICLE::IS_THIS_MODEL_A_PLANE(uParam1->f_66))
		{
			if (VEHICLE::IS_PLANE_LANDING_GEAR_INTACT(bParam0))
			{
				switch (VEHICLE::GET_LANDING_GEAR_STATE(bParam0))
				{
					case 3:
					case 0:
						VEHICLE::IS_VEHICLE_DRIVEABLE(&(uParam1->f_77), 23);
						unk_0xBE20AB8238688965(&(uParam1->f_77), 22);
						break;
					
					case 4:
					case 1:
						VEHICLE::IS_VEHICLE_DRIVEABLE(&(uParam1->f_77), 23);
						VEHICLE::IS_VEHICLE_DRIVEABLE(&(uParam1->f_77), 22);
						break;
					
					case 5:
						unk_0xBE20AB8238688965(&(uParam1->f_77), 23);
						break;
				}
			}
			else
			{
				unk_0xBE20AB8238688965(&(uParam1->f_77), 23);
			}
		}
		if (!VEHICLE::GET_VEHICLE_TYRES_CAN_BURST(bParam0))
		{
			unk_0xBE20AB8238688965(&(uParam1->f_77), 9);
		}
		if (VEHICLE::IS_VEHICLE_STOLEN(bParam0))
		{
			unk_0xBE20AB8238688965(&(uParam1->f_77), 10);
		}
		if (VEHICLE::GET_IS_VEHICLE_PRIMARY_COLOUR_CUSTOM(bParam0))
		{
			unk_0xBE20AB8238688965(&(uParam1->f_77), 13);
			VEHICLE::GET_VEHICLE_CUSTOM_PRIMARY_COLOUR(bParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		}
		if (VEHICLE::GET_IS_VEHICLE_SECONDARY_COLOUR_CUSTOM(bParam0))
		{
			unk_0xBE20AB8238688965(&(uParam1->f_77), 12);
		}
		func_199(&bParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(bParam0, iVar0 + 1))
			{
				unk_0xBE20AB8238688965(&(uParam1->f_77), func_198(iVar0 + 1));
			}
			iVar0++;
		}
		if (GRAPHICS::DOES_VEHICLE_HAVE_CREW_EMBLEM(bParam0, 0))
		{
			unk_0xBE20AB8238688965(&(uParam1->f_77), 11);
		}
		else
		{
			VEHICLE::IS_VEHICLE_DRIVEABLE(&(uParam1->f_77), 11);
		}
		if (unk_0x871819940BD2E434(bParam0, "IgnoredByQuickSave") && DECORATOR::DECOR_GET_BOOL(bParam0, "IgnoredByQuickSave"))
		{
			unk_0xBE20AB8238688965(&(uParam1->f_77), 27);
		}
		else
		{
			VEHICLE::IS_VEHICLE_DRIVEABLE(&(uParam1->f_77), 27);
		}
	}
}

int func_198(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 2;
			break;
		
		case 4:
			return 3;
			break;
		
		case 5:
			return 4;
			break;
		
		case 6:
			return 5;
			break;
		
		case 7:
			return 6;
			break;
		
		case 8:
			return 7;
			break;
		
		case 9:
			return 8;
			break;
		
		case 10:
			return 24;
			break;
		
		case 11:
			return 25;
			break;
		
		case 12:
			return 26;
			break;
	}
	return 0;
}

int func_199(bool bParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	if (!ENTITY::GET_ENTITY_COORDS(*bParam0, false))
	{
		return 0;
	}
	if (VEHICLE::GET_NUM_MOD_KITS(*bParam0) == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if ((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21)
		{
			(*uParam1)[iVar0] = 0;
			if (VEHICLE::IS_TOGGLE_MOD_ON(*bParam0, iVar1))
			{
				(*uParam1)[iVar0] = 1;
			}
		}
		else if (iVar1 == 22)
		{
			if (VEHICLE::IS_TOGGLE_MOD_ON(*bParam0, iVar1))
			{
				switch (VEHICLE::_GET_VEHICLE_XENON_LIGHTS_COLOR(*bParam0))
				{
					case 255:
						(*uParam1)[iVar0] = 1;
						break;
					
					case 0:
						(*uParam1)[iVar0] = 2;
						break;
					
					case 1:
						(*uParam1)[iVar0] = 3;
						break;
					
					case 2:
						(*uParam1)[iVar0] = 4;
						break;
					
					case 3:
						(*uParam1)[iVar0] = 5;
						break;
					
					case 4:
						(*uParam1)[iVar0] = 6;
						break;
					
					case 5:
						(*uParam1)[iVar0] = 7;
						break;
					
					case 6:
						(*uParam1)[iVar0] = 8;
						break;
					
					case 7:
						(*uParam1)[iVar0] = 9;
						break;
					
					case 8:
						(*uParam1)[iVar0] = 10;
						break;
					
					case 9:
						(*uParam1)[iVar0] = 11;
						break;
					
					case 10:
						(*uParam1)[iVar0] = 12;
						break;
					
					case 11:
						(*uParam1)[iVar0] = 13;
						break;
					
					case 12:
						(*uParam1)[iVar0] = 14;
						break;
					
					case 13:
						(*uParam1)[iVar0] = 15;
						break;
				}
			}
			else
			{
				(*uParam1)[iVar0] = 0;
			}
		}
		else
		{
			(*uParam1)[iVar0] = unk_0x7F8B14CBFB9813E5(*bParam0, iVar0) + 1;
			if (iVar0 == 23)
			{
				(*uParam2)[0] = VEHICLE::GET_VEHICLE_MOD_VARIATION(*bParam0, iVar0);
			}
			else if (iVar0 == 24)
			{
				(*uParam2)[1] = VEHICLE::GET_VEHICLE_MOD_VARIATION(*bParam0, iVar0);
			}
		}
		iVar0++;
	}
	return 1;
}

int func_200(int iParam0)
{
	switch (iParam0)
	{
		case joaat("granger"):
		case joaat("visione"):
			return 1;
		
		default:
	}
	return 0;
}

void func_201(var uParam0)
{
	int iVar0;
	
	uParam0->f_66 = 0;
	uParam0->f_77 = 0;
	uParam0->f_65 = 0;
	uParam0->f_62 = 0;
	uParam0->f_63 = 0;
	uParam0->f_64 = 0;
	uParam0->f_74 = 0;
	uParam0->f_75 = 0;
	uParam0->f_76 = 0;
	*uParam0 = 0;
	StringCopy(&(uParam0->f_1), "", 16);
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	iVar0 = 0;
	while (iVar0 < 49)
	{
		uParam0->f_9[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		uParam0->f_59[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_67 = 0;
	uParam0->f_68 = 0;
	uParam0->f_69 = 0;
	uParam0->f_70 = 1;
	uParam0->f_71 = 0;
	uParam0->f_72 = 0;
	uParam0->f_73 = 0;
}

int func_202(bool bParam0)
{
	if ((((((((((!MISC::IS_BIT_SET(iParam0) || !ENTITY::GET_ENTITY_COORDS(bParam0, false)) || func_217(bParam0, 0, 0)) || func_217(bParam0, 1, 0)) || func_217(bParam0, 2, 0)) || func_216(bParam0) != 145) || func_215(bParam0)) || func_214(bParam0)) || func_213(bParam0)) || func_212(bParam0)) || !func_203(MISC::GET_MODEL_DIMENSIONS(bParam0)))
	{
		if (func_214(bParam0))
		{
		}
		if (func_214(bParam0))
		{
		}
		if (func_217(bParam0, 0, 0))
		{
		}
		if (func_217(bParam0, 1, 0))
		{
		}
		if (func_217(bParam0, 2, 0))
		{
		}
		if (func_216(bParam0) != 145)
		{
		}
		return 0;
	}
	return 1;
}

int func_203(void fParam0)
{
	if (fParam0 == 0)
	{
		return 0;
	}
	if (!func_204(fParam0, 0))
	{
		return 0;
	}
	if (((VEHICLE::IS_THIS_MODEL_A_BOAT(fParam0) || VEHICLE::IS_THIS_MODEL_A_PLANE(fParam0)) || VEHICLE::IS_THIS_MODEL_A_HELI(fParam0)) || VEHICLE::IS_THIS_MODEL_A_TRAIN(fParam0))
	{
		return 0;
	}
	switch (fParam0)
	{
		case joaat("bus"):
		case joaat("stretch"):
		case joaat("barracks"):
		case joaat("armytanker"):
		case joaat("rhino"):
		case joaat("armytrailer"):
		case joaat("barracks2"):
		case joaat("flatbed"):
		case joaat("ripley"):
		case joaat("towtruck"):
		case joaat("towtruck2"):
		case joaat("airbus"):
		case joaat("coach"):
		case joaat("rentalbus"):
		case joaat("tourbus"):
		case joaat("firetruk"):
		case joaat("pbus"):
		case joaat("trash"):
		case joaat("benson"):
		case joaat("boattrailer"):
		case joaat("biff"):
		case joaat("hauler"):
		case joaat("docktrailer"):
		case joaat("phantom"):
		case joaat("pounder"):
		case joaat("tractor2"):
		case joaat("bulldozer"):
		case joaat("handler"):
		case joaat("tiptruck"):
		case joaat("cutter"):
		case joaat("dump"):
		case joaat("mixer"):
		case joaat("mixer2"):
		case joaat("rubble"):
		case joaat("scrap"):
		case joaat("tiptruck2"):
		case joaat("camper"):
		case joaat("taco"):
		case joaat("boxville"):
		case joaat("boxville2"):
		case joaat("boxville3"):
		case joaat("journey"):
		case joaat("mule"):
		case joaat("mule2"):
		case joaat("police"):
		case joaat("police2"):
		case joaat("police3"):
		case joaat("police4"):
		case joaat("policeb"):
		case joaat("policeold1"):
		case joaat("policeold2"):
		case joaat("policet"):
		case joaat("taxi"):
		case joaat("submersible"):
		case joaat("submersible2"):
		case joaat("monster"):
			return 0;
			break;
	}
	return 1;
}

int func_204(void fParam0, bool bParam1)
{
	int iVar0;
	struct<2> Var1;
	
	if (fParam0 == 0)
	{
		return 0;
	}
	if (!HUD::GET_PAUSE_MENU_STATE(fParam0))
	{
		return 0;
	}
	if (((((fParam0 == joaat("dominator2") && !MISC::SET_BIT()) || (fParam0 == joaat("buffalo3") && !MISC::SET_BIT())) || (fParam0 == joaat("gauntlet2") && !MISC::SET_BIT())) || fParam0 == joaat("blimp2")) || (fParam0 == joaat("stalion2") && !MISC::SET_BIT()))
	{
		if (!func_181())
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < unk_0x81BDFC133086F533())
		{
			if (GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING(iVar0, &Var1))
			{
				if (fParam0 == Var1.f_1)
				{
					if (unk_0x14AC70FD8926649E(Var1))
					{
						return 0;
					}
				}
			}
			iVar0++;
		}
	}
	if (fParam0 == joaat("blimp"))
	{
		if ((((!func_211() && !func_210()) && !func_209()) && !func_208()) && !func_181())
		{
			return 0;
		}
	}
	if ((fParam0 == joaat("hotknife") || fParam0 == joaat("carbonrs")) || fParam0 == joaat("khamelion"))
	{
		if ((NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE() || ENTITY::GET_ENTITY_HEADING()) || unk_0xDCA0815D900F27F8())
		{
		}
		else if (!func_209())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_207(fParam0))
		{
			return 0;
		}
	}
	if (!func_205(fParam0))
	{
		return 0;
	}
	return 1;
}

int func_205(int iParam0)
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_206())
	{
		return 1;
	}
	NETSHOPPING::_NET_GAMESERVER_GET_TRANSACTION_MANAGER_DATA(&iVar0, &uVar1);
	if (iVar0 == 4)
	{
		return 1;
	}
	switch (iParam0)
	{
		case joaat("dune4"):
			StringCopy(&cVar2, "VE_DUNE4_t0_v3", 64);
			break;
		
		case joaat("voltic2"):
			StringCopy(&cVar2, "VE_VOLTIC2_t0_v3", 64);
			break;
		
		case joaat("ruiner2"):
			StringCopy(&cVar2, "VE_RUINER2_t0_v3", 64);
			break;
		
		case joaat("phantom2"):
			StringCopy(&cVar2, "VE_PHANTOM2_t0_v3", 64);
			break;
		
		case joaat("technical2"):
			StringCopy(&cVar2, "VE_TECHNICAL2_t0_v3", 64);
			break;
		
		case joaat("boxville5"):
			StringCopy(&cVar2, "VE_BOXVILLE5_t0_v3", 64);
			break;
		
		case joaat("wastelander"):
			StringCopy(&cVar2, "VE_WASTELANDER_t0_v3", 64);
			break;
		
		case joaat("blazer5"):
			StringCopy(&cVar2, "VE_BLAZER5_t0_v3", 64);
			break;
		
		default:
			return 1;
			break;
	}
	if (!NETSHOPPING::_NET_GAMESERVER_CATALOG_ITEM_EXISTS(&cVar2))
	{
		return 0;
	}
	return 1;
}

int func_206()
{
	if (ENTITY::GET_ENTITY_HEADING())
	{
		return NETSHOPPING::_NET_GAMESERVER_USE_SERVER_TRANSACTIONS();
	}
	return 0;
}

int func_207(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (Global_2515213)
	{
		return 1;
	}
	iVar0 = 1;
	iVar1 = unk_0x5A002C4821A13338();
	if (iParam0 == joaat("btype3"))
	{
		if ((!Global_262145.f_6600 && !Global_262145.f_12930) && iVar1 < Global_262145.f_12931)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("faction3"))
	{
		if (!Global_262145.f_14230 && iVar1 < Global_262145.f_14242)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("virgo3") || iParam0 == joaat("virgo2"))
	{
		if (!Global_262145.f_14226 && iVar1 < Global_262145.f_14238)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sabregt2"))
	{
		if (!Global_262145.f_14227 && iVar1 < Global_262145.f_14239)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado5"))
	{
		if (!Global_262145.f_14228 && iVar1 < Global_262145.f_14240)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("minivan2"))
	{
		if (!Global_262145.f_14229 && iVar1 < Global_262145.f_14241)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("slamvan3"))
	{
		if (!Global_262145.f_14231 && iVar1 < Global_262145.f_14243)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("prototipo"))
	{
		if (!Global_262145.f_14232 && iVar1 < Global_262145.f_14235)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seven70"))
	{
		if (!Global_262145.f_14233 && iVar1 < Global_262145.f_14236)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pfister811"))
	{
		if (!Global_262145.f_14234 && iVar1 < Global_262145.f_14237)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("bf400"))
	{
		if (!Global_262145.f_16861 && iVar1 < Global_262145.f_16826)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("brioso"))
	{
		if (!Global_262145.f_16856 && iVar1 < Global_262145.f_16821)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cliffhanger"))
	{
		if (!Global_262145.f_16860 && iVar1 < Global_262145.f_16825)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("contender"))
	{
		if (!Global_262145.f_16859 && iVar1 < Global_262145.f_16824)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("le7b"))
	{
		if (!Global_262145.f_16853 && iVar1 < Global_262145.f_16818)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("omnis"))
	{
		if (!Global_262145.f_16854 && iVar1 < Global_262145.f_16819)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck"))
	{
		if (!Global_262145.f_16857 && iVar1 < Global_262145.f_16822)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck2"))
	{
		if (!Global_262145.f_16858 && iVar1 < Global_262145.f_16823)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tropos"))
	{
		if (!Global_262145.f_16855 && iVar1 < Global_262145.f_16820)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gargoyle"))
	{
		if (!Global_262145.f_16863 && iVar1 < Global_262145.f_16828)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rallytruck"))
	{
		if (!Global_262145.f_16864 && iVar1 < Global_262145.f_16829)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tampa2"))
	{
		if (!Global_262145.f_16852 && iVar1 < Global_262145.f_16817)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tyrus"))
	{
		if (!Global_262145.f_16851 && iVar1 < Global_262145.f_16816)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sheava"))
	{
		if (!Global_262145.f_16850 && iVar1 < Global_262145.f_16815)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("lynx"))
	{
		if (!Global_262145.f_16862 && iVar1 < Global_262145.f_16827)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stalion2"))
	{
		if (!Global_262145.f_16865 && iVar1 < Global_262145.f_16830)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet2"))
	{
		if (!Global_262145.f_16866 && iVar1 < Global_262145.f_16831)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator2"))
	{
		if (!Global_262145.f_16867 && iVar1 < Global_262145.f_16832)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("buffalo3"))
	{
		if (!Global_262145.f_16868 && iVar1 < Global_262145.f_16833)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("defiler"))
	{
		if (!Global_262145.f_17015 && iVar1 < Global_262145.f_17037)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nightblade"))
	{
		if (!Global_262145.f_17016 && iVar1 < Global_262145.f_17038)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombiea"))
	{
		if (!Global_262145.f_17017 && iVar1 < Global_262145.f_17039)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("esskey"))
	{
		if (!Global_262145.f_17018 && iVar1 < Global_262145.f_17040)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("avarus"))
	{
		if (!Global_262145.f_17019 && iVar1 < Global_262145.f_17041)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombieb"))
	{
		if (!Global_262145.f_17020 && iVar1 < Global_262145.f_17042)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hakuchou2"))
	{
		if (!Global_262145.f_17022 && iVar1 < Global_262145.f_17043)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vortex"))
	{
		if (!Global_262145.f_17023 && iVar1 < Global_262145.f_17044)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("shotaro"))
	{
		if (!Global_262145.f_17024 && iVar1 < Global_262145.f_17045)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("chimera"))
	{
		if (!Global_262145.f_17025 && iVar1 < Global_262145.f_17046)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("raptor"))
	{
		if (!Global_262145.f_17026 && iVar1 < Global_262145.f_17047)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("daemon2"))
	{
		if (!Global_262145.f_17027 && iVar1 < Global_262145.f_17048)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer4"))
	{
		if (!Global_262145.f_17028 && iVar1 < Global_262145.f_17049)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado6"))
	{
		if (!Global_262145.f_17034 && iVar1 < Global_262145.f_17056)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("youga2"))
	{
		if (!Global_262145.f_17031 && iVar1 < Global_262145.f_17052)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wolfsbane"))
	{
		if (!Global_262145.f_17032 && iVar1 < Global_262145.f_17053)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio3"))
	{
		if (!Global_262145.f_17033 && iVar1 < Global_262145.f_17054)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio"))
	{
		if (!Global_262145.f_17021 && iVar1 < Global_262145.f_17055)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bagger"))
	{
		if (!Global_262145.f_17035 && iVar1 < Global_262145.f_17057)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sanctus"))
	{
		if (!Global_262145.f_17029 && iVar1 < Global_262145.f_17050)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manchez"))
	{
		if (!Global_262145.f_17030 && iVar1 < Global_262145.f_17051)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ratbike"))
	{
		if (!Global_262145.f_17036 && iVar1 < Global_262145.f_17058)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("voltic2"))
	{
		if (!Global_262145.f_18667 && iVar1 < Global_262145.f_18764)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruiner2"))
	{
		if (!Global_262145.f_18668 && iVar1 < Global_262145.f_18765)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune4"))
	{
		if (!Global_262145.f_18669 && iVar1 < Global_262145.f_18766)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune5"))
	{
		if (!Global_262145.f_18670 && iVar1 < Global_262145.f_18767)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("phantom2"))
	{
		if (!Global_262145.f_18671 && iVar1 < Global_262145.f_18768)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("technical2"))
	{
		if (!Global_262145.f_18672 && iVar1 < Global_262145.f_18769)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("boxville5"))
	{
		if (!Global_262145.f_18673 && iVar1 < Global_262145.f_18770)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wastelander"))
	{
		if (!Global_262145.f_18674 && iVar1 < Global_262145.f_18771)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer5"))
	{
		if (!Global_262145.f_18675 && iVar1 < Global_262145.f_18772)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet2"))
	{
		if (!Global_262145.f_18676 && iVar1 < Global_262145.f_18773)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet3"))
	{
		if (!Global_262145.f_18677 && iVar1 < Global_262145.f_18774)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous"))
	{
		if (!Global_262145.f_18678 && iVar1 < Global_262145.f_18775)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous2"))
	{
		if (!Global_262145.f_18679 && iVar1 < Global_262145.f_18776)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy"))
	{
		if (!Global_262145.f_18680 && iVar1 < Global_262145.f_18777)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy2"))
	{
		if (!Global_262145.f_18681 && iVar1 < Global_262145.f_18778)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr"))
	{
		if (!Global_262145.f_18682 && iVar1 < Global_262145.f_18779)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr2"))
	{
		if (!Global_262145.f_18683 && iVar1 < Global_262145.f_18780)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb"))
	{
		if (!Global_262145.f_18684 && iVar1 < Global_262145.f_18781)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb2"))
	{
		if (!Global_262145.f_18685 && iVar1 < Global_262145.f_18782)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero"))
	{
		if (!Global_262145.f_18686 && iVar1 < Global_262145.f_18783)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero2"))
	{
		if (!Global_262145.f_18687 && iVar1 < Global_262145.f_18784)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("penetrator"))
	{
		if (!Global_262145.f_18688 && iVar1 < Global_262145.f_18785)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter"))
	{
		if (!Global_262145.f_18689 && iVar1 < Global_262145.f_18786)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter2"))
	{
		if (!Global_262145.f_18690 && iVar1 < Global_262145.f_18787)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tempesta"))
	{
		if (!Global_262145.f_18691 && iVar1 < Global_262145.f_18788)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("gp1"))
	{
		if (!Global_262145.f_19748 && iVar1 < Global_262145.f_19744)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("infernus2"))
	{
		if (!Global_262145.f_19749 && iVar1 < Global_262145.f_19745)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruston"))
	{
		if (!Global_262145.f_19750 && iVar1 < Global_262145.f_19746)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("turismo2"))
	{
		if (!Global_262145.f_19751 && iVar1 < Global_262145.f_19747)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("xa21"))
	{
		if (!Global_262145.f_20629 && iVar1 < Global_262145.f_20637)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cheetah2"))
	{
		if (!Global_262145.f_20630 && iVar1 < Global_262145.f_20638)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("torero"))
	{
		if (!Global_262145.f_20631 && iVar1 < Global_262145.f_20639)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vagner"))
	{
		if (!Global_262145.f_20632 && iVar1 < Global_262145.f_20640)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ardent"))
	{
		if (!Global_262145.f_20633 && iVar1 < Global_262145.f_20641)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nightshark"))
	{
		if (!Global_262145.f_20634 && iVar1 < Global_262145.f_20642)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("microlight"))
	{
		if (!Global_262145.f_21409 && iVar1 < Global_262145.f_21429)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("mogul"))
	{
		if (!Global_262145.f_21421 && iVar1 < Global_262145.f_21441)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rogue"))
	{
		if (!Global_262145.f_21412 && iVar1 < Global_262145.f_21432)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("starling"))
	{
		if (!Global_262145.f_21422 && iVar1 < Global_262145.f_21442)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seabreeze"))
	{
		if (!Global_262145.f_21410 && iVar1 < Global_262145.f_21430)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tula"))
	{
		if (!Global_262145.f_21426 && iVar1 < Global_262145.f_21446)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pyro"))
	{
		if (!Global_262145.f_21424 && iVar1 < Global_262145.f_21444)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("molotok"))
	{
		if (!Global_262145.f_21425 && iVar1 < Global_262145.f_21445)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nokota"))
	{
		if (!Global_262145.f_21420 && iVar1 < Global_262145.f_21440)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bombushka"))
	{
		if (!Global_262145.f_21427 && iVar1 < Global_262145.f_21447)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hunter"))
	{
		if (!Global_262145.f_21423 && iVar1 < Global_262145.f_21443)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("havok"))
	{
		if (!Global_262145.f_21419 && iVar1 < Global_262145.f_21439)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("howard"))
	{
		if (!Global_262145.f_21411 && iVar1 < Global_262145.f_21431)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("alphaz1"))
	{
		if (!Global_262145.f_21413 && iVar1 < Global_262145.f_21433)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cyclone"))
	{
		if (!Global_262145.f_21414 && iVar1 < Global_262145.f_21434)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("visione"))
	{
		if (!Global_262145.f_21415 && iVar1 < Global_262145.f_21435)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vigilante"))
	{
		if (!Global_262145.f_21416 && iVar1 < Global_262145.f_21436)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("retinue"))
	{
		if (!Global_262145.f_21417 && iVar1 < Global_262145.f_21437)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rapidgt3"))
	{
		if (!Global_262145.f_21418 && iVar1 < Global_262145.f_21438)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("deluxo"))
	{
		if (!Global_262145.f_22370 && iVar1 < Global_262145.f_22398)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stromberg"))
	{
		if (!Global_262145.f_22371 && iVar1 < Global_262145.f_22399)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("riot2"))
	{
		if (!Global_262145.f_22372 && iVar1 < Global_262145.f_22400)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("chernobog"))
	{
		if (!Global_262145.f_22373 && iVar1 < Global_262145.f_22401)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("khanjali"))
	{
		if (!Global_262145.f_22374 && iVar1 < Global_262145.f_22402)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("akula"))
	{
		if (!Global_262145.f_22375 && iVar1 < Global_262145.f_22403)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("thruster"))
	{
		if (!Global_262145.f_22376 && iVar1 < Global_262145.f_22404)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("barrage"))
	{
		if (!Global_262145.f_22377 && iVar1 < Global_262145.f_22405)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("volatol"))
	{
		if (!Global_262145.f_22378 && iVar1 < Global_262145.f_22406)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet4"))
	{
		if (!Global_262145.f_22379 && iVar1 < Global_262145.f_22407)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("neon"))
	{
		if (!Global_262145.f_22380 && iVar1 < Global_262145.f_22408)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("streiter"))
	{
		if (!Global_262145.f_22381 && iVar1 < Global_262145.f_22409)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sentinel3"))
	{
		if (!Global_262145.f_22382 && iVar1 < Global_262145.f_22410)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("yosemite"))
	{
		if (!Global_262145.f_22383 && iVar1 < Global_262145.f_22411)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sc1"))
	{
		if (!Global_262145.f_22384 && iVar1 < Global_262145.f_22412)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("autarch"))
	{
		if (!Global_262145.f_22385 && iVar1 < Global_262145.f_22413)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gt500"))
	{
		if (!Global_262145.f_22386 && iVar1 < Global_262145.f_22414)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hustler"))
	{
		if (!Global_262145.f_22387 && iVar1 < Global_262145.f_22415)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("revolter"))
	{
		if (!Global_262145.f_22388 && iVar1 < Global_262145.f_22416)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pariah"))
	{
		if (!Global_262145.f_22389 && iVar1 < Global_262145.f_22417)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("raiden"))
	{
		if (!Global_262145.f_22390 && iVar1 < Global_262145.f_22418)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("savestra"))
	{
		if (!Global_262145.f_22391 && iVar1 < Global_262145.f_22419)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("riata"))
	{
		if (!Global_262145.f_22392 && iVar1 < Global_262145.f_22420)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hermes"))
	{
		if (!Global_262145.f_22393 && iVar1 < Global_262145.f_22421)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet5"))
	{
		if (!Global_262145.f_22394 && iVar1 < Global_262145.f_22422)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("z190"))
	{
		if (!Global_262145.f_22395 && iVar1 < Global_262145.f_22423)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("viseris"))
	{
		if (!Global_262145.f_22396 && iVar1 < Global_262145.f_22424)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("kamacho"))
	{
		if (!Global_262145.f_22397 && iVar1 < Global_262145.f_22425)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("gb200"))
	{
		if (!Global_262145.f_23586 && iVar1 < Global_262145.f_23602)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fagaloa"))
	{
		if (!Global_262145.f_23587 && iVar1 < Global_262145.f_23603)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ellie"))
	{
		if (!Global_262145.f_23591 && iVar1 < Global_262145.f_23607)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("issi3"))
	{
		if (!Global_262145.f_23594 && iVar1 < Global_262145.f_23610)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("michelli"))
	{
		if (!Global_262145.f_23599 && iVar1 < Global_262145.f_23615)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("flashgt"))
	{
		if (!Global_262145.f_23593 && iVar1 < Global_262145.f_23609)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hotring"))
	{
		if (!Global_262145.f_23585 && iVar1 < Global_262145.f_23601)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tezeract"))
	{
		if (!Global_262145.f_23592 && iVar1 < Global_262145.f_23608)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tyrant"))
	{
		if (!Global_262145.f_23598 && iVar1 < Global_262145.f_23614)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator3"))
	{
		if (!Global_262145.f_23597 && iVar1 < Global_262145.f_23613)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("taipan"))
	{
		if (!Global_262145.f_23588 && iVar1 < Global_262145.f_23604)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("entity2"))
	{
		if (!Global_262145.f_23590 && iVar1 < Global_262145.f_23606)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jester3"))
	{
		if (!Global_262145.f_23600 && iVar1 < Global_262145.f_23616)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cheburek"))
	{
		if (!Global_262145.f_23596 && iVar1 < Global_262145.f_23612)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("caracara"))
	{
		if (!Global_262145.f_23589 && iVar1 < Global_262145.f_23605)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seasparrow"))
	{
		if (!Global_262145.f_23595 && iVar1 < Global_262145.f_23611)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("terbyte"))
	{
		if (!Global_262145.f_23676 && iVar1 < Global_262145.f_23663)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pbus2"))
	{
		if (!Global_262145.f_23677 && iVar1 < Global_262145.f_23664)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("mule4"))
	{
		if (!Global_262145.f_23682 && iVar1 < Global_262145.f_23669)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pounder2"))
	{
		if (!Global_262145.f_23681 && iVar1 < Global_262145.f_23668)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("swinger"))
	{
		if (!Global_262145.f_23679 && iVar1 < Global_262145.f_23666)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("menacer"))
	{
		if (!Global_262145.f_23685 && iVar1 < Global_262145.f_23672)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("scramjet"))
	{
		if (!Global_262145.f_23687 && iVar1 < Global_262145.f_23674)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("strikeforce"))
	{
		if (!Global_262145.f_23688 && iVar1 < Global_262145.f_23675)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("oppressor2"))
	{
		if (!Global_262145.f_23686 && iVar1 < Global_262145.f_23673)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("patriot2"))
	{
		if (!Global_262145.f_23678 && iVar1 < Global_262145.f_23665)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stafford"))
	{
		if (!Global_262145.f_23680 && iVar1 < Global_262145.f_23667)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("freecrawler"))
	{
		if (!Global_262145.f_23684 && iVar1 < Global_262145.f_23671)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blimp3"))
	{
		if (!Global_262145.f_23683 && iVar1 < Global_262145.f_23670)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("monster3"))
	{
	}
	else if (iParam0 == joaat("cerberus"))
	{
	}
	else if (iParam0 == joaat("cerberus2"))
	{
	}
	else if (iParam0 == joaat("cerberus3"))
	{
	}
	else if (iParam0 == joaat("brutus"))
	{
	}
	else if (iParam0 == joaat("brutus2"))
	{
	}
	else if (iParam0 == joaat("brutus3"))
	{
	}
	else if (iParam0 == joaat("scarab"))
	{
	}
	else if (iParam0 == joaat("scarab2"))
	{
	}
	else if (iParam0 == joaat("scarab3"))
	{
	}
	else if (iParam0 == joaat("imperator"))
	{
	}
	else if (iParam0 == joaat("imperator2"))
	{
	}
	else if (iParam0 == joaat("imperator3"))
	{
	}
	else if (iParam0 == joaat("zr380"))
	{
	}
	else if (iParam0 == joaat("zr3802"))
	{
	}
	else if (iParam0 == joaat("zr3803"))
	{
	}
	else if (iParam0 == joaat("impaler"))
	{
	}
	else if (iParam0 == joaat("deveste"))
	{
		if (!Global_262145.f_26051 && iVar1 < Global_262145.f_26053)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("toros"))
	{
		if (!Global_262145.f_25064 && iVar1 < Global_262145.f_25057)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("clique"))
	{
		if (!Global_262145.f_25065 && iVar1 < Global_262145.f_25058)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigto"))
	{
		if (!Global_262145.f_25066 && iVar1 < Global_262145.f_25059)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("deviant"))
	{
		if (!Global_262145.f_25067 && iVar1 < Global_262145.f_25060)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vamos"))
	{
		if (!Global_262145.f_26052 && iVar1 < Global_262145.f_26054)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tulip"))
	{
		if (!Global_262145.f_25068 && iVar1 < Global_262145.f_25061)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("schlagen"))
	{
		if (!Global_262145.f_25069 && iVar1 < Global_262145.f_25062)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rcbandito"))
	{
		if (!Global_262145.f_25070 && iVar1 < Global_262145.f_25063)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("thrax"))
	{
		if (!Global_262145.f_25075 && iVar1 < Global_262145.f_25096)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("drafter"))
	{
		if (!Global_262145.f_25076 && iVar1 < Global_262145.f_25097)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("locust"))
	{
		if (!Global_262145.f_25077 && iVar1 < Global_262145.f_25098)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("novak"))
	{
		if (!Global_262145.f_25078 && iVar1 < Global_262145.f_25099)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zorrusso"))
	{
		if (!Global_262145.f_25079 && iVar1 < Global_262145.f_25100)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet3"))
	{
		if (!Global_262145.f_25080 && iVar1 < Global_262145.f_25101)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("issi7"))
	{
		if (!Global_262145.f_25081 && iVar1 < Global_262145.f_25102)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zion3"))
	{
		if (!Global_262145.f_25082 && iVar1 < Global_262145.f_25103)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nebula"))
	{
		if (!Global_262145.f_25083 && iVar1 < Global_262145.f_25104)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hellion"))
	{
		if (!Global_262145.f_25084 && iVar1 < Global_262145.f_25105)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dynasty"))
	{
		if (!Global_262145.f_25085 && iVar1 < Global_262145.f_25106)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rrocket"))
	{
		if (!Global_262145.f_25086 && iVar1 < Global_262145.f_25107)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("peyote2"))
	{
		if (!Global_262145.f_25087 && iVar1 < Global_262145.f_25108)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet4"))
	{
		if (!Global_262145.f_25088 && iVar1 < Global_262145.f_25109)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("caracara2"))
	{
		if (!Global_262145.f_25089 && iVar1 < Global_262145.f_25110)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jugular"))
	{
		if (!Global_262145.f_25090 && iVar1 < Global_262145.f_25111)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("s80"))
	{
		if (!Global_262145.f_25091 && iVar1 < Global_262145.f_25112)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("krieger"))
	{
		if (!Global_262145.f_25092 && iVar1 < Global_262145.f_25113)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("emerus"))
	{
		if (!Global_262145.f_25093 && iVar1 < Global_262145.f_25114)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("neo"))
	{
		if (!Global_262145.f_25094 && iVar1 < Global_262145.f_25115)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("paragon"))
	{
		if (!Global_262145.f_25095 && iVar1 < Global_262145.f_25116)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("asbo"))
	{
		if (!Global_262145.f_27895 && iVar1 < Global_262145.f_27916)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("kanjo"))
	{
		if (!Global_262145.f_27896 && iVar1 < Global_262145.f_27917)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("everon"))
	{
		if (!Global_262145.f_27897 && iVar1 < Global_262145.f_27918)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("retinue2"))
	{
		if (!Global_262145.f_27898 && iVar1 < Global_262145.f_27919)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("yosemite2"))
	{
		if (!Global_262145.f_27899 && iVar1 < Global_262145.f_27920)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sugoi"))
	{
		if (!Global_262145.f_27900 && iVar1 < Global_262145.f_27921)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sultan2"))
	{
		if (!Global_262145.f_27901 && iVar1 < Global_262145.f_27922)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("outlaw"))
	{
		if (!Global_262145.f_27902 && iVar1 < Global_262145.f_27923)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vagrant"))
	{
		if (!Global_262145.f_27903 && iVar1 < Global_262145.f_27924)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("komoda"))
	{
		if (!Global_262145.f_27904 && iVar1 < Global_262145.f_27925)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stryder"))
	{
		if (!Global_262145.f_27905 && iVar1 < Global_262145.f_27926)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("furia"))
	{
		if (!Global_262145.f_27906 && iVar1 < Global_262145.f_27927)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zhaba"))
	{
		if (!Global_262145.f_27907 && iVar1 < Global_262145.f_27928)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jb7002"))
	{
		if (!Global_262145.f_27908 && iVar1 < Global_262145.f_27929)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("firetruk"))
	{
		if (!Global_262145.f_27909 && iVar1 < Global_262145.f_27930)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("burrito2"))
	{
		if (!Global_262145.f_27910 && iVar1 < Global_262145.f_27931)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("boxville"))
	{
		if (!Global_262145.f_27911 && iVar1 < Global_262145.f_27932)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stockade"))
	{
		if (!Global_262145.f_27912 && iVar1 < Global_262145.f_27933)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("minitank"))
	{
		if (!Global_262145.f_27913 && iVar1 < Global_262145.f_27934)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("lguard"))
	{
		if (!Global_262145.f_27914 && iVar1 < Global_262145.f_27935)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer2"))
	{
		if (!Global_262145.f_27915 && iVar1 < Global_262145.f_27936)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("formula"))
	{
		if ((!Global_262145.f_27938 && iVar1 < Global_262145.f_27939) && !Global_262145.f_27893)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("formula2"))
	{
		if ((!Global_262145.f_27941 && iVar1 < Global_262145.f_27942) && !Global_262145.f_27894)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("imorgon"))
	{
		if (!Global_262145.f_27946 && iVar1 < Global_262145.f_27949)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rebla"))
	{
		if (!Global_262145.f_27947 && iVar1 < Global_262145.f_27950)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vstr"))
	{
		if (!Global_262145.f_27948 && iVar1 < Global_262145.f_27951)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet5"))
	{
		if (!Global_262145.f_28950 && iVar1 < Global_262145.f_28615)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("club"))
	{
		if (!Global_262145.f_28601 && iVar1 < Global_262145.f_28622)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dukes3"))
	{
		if (!Global_262145.f_28602 && iVar1 < Global_262145.f_28608)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("yosemite3"))
	{
		if (!Global_262145.f_28948 && iVar1 < Global_262145.f_28616)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("peyote3"))
	{
		if (!Global_262145.f_28949 && iVar1 < Global_262145.f_28617)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("glendale2"))
	{
		if (!Global_262145.f_28595 && iVar1 < Global_262145.f_28614)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("penumbra2"))
	{
		if (!Global_262145.f_28596 && iVar1 < Global_262145.f_28623)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("landstalker2"))
	{
		if (!Global_262145.f_28597 && iVar1 < Global_262145.f_28613)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seminole2"))
	{
		if (!Global_262145.f_28598 && iVar1 < Global_262145.f_28611)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tigon"))
	{
		if (!Global_262145.f_28944 && iVar1 < Global_262145.f_28618)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("openwheel1"))
	{
		if (!Global_262145.f_28945 && iVar1 < Global_262145.f_28619)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("openwheel2"))
	{
		if (!Global_262145.f_28946 && iVar1 < Global_262145.f_28620)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("coquette4"))
	{
		if (!Global_262145.f_28947 && iVar1 < Global_262145.f_28621)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manana2"))
	{
		if (!Global_262145.f_28599 && iVar1 < Global_262145.f_28610)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("youga3"))
	{
		if (!Global_262145.f_28600 && iVar1 < Global_262145.f_28612)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("toreador"))
	{
		if (!Global_262145.f_29392 && iVar1 < Global_262145.f_29375)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("annihilator2"))
	{
		if (!Global_262145.f_29393 && iVar1 < Global_262145.f_29376)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("alkonost"))
	{
		if (!Global_262145.f_29394 && iVar1 < Global_262145.f_29377)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("patrolboat"))
	{
		if (!Global_262145.f_29395 && iVar1 < Global_262145.f_29378)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("longfin"))
	{
		if (!Global_262145.f_29396 && iVar1 < Global_262145.f_29379)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("winky"))
	{
		if (!Global_262145.f_29397 && iVar1 < Global_262145.f_29380)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("veto"))
	{
		if (!Global_262145.f_29398 && iVar1 < Global_262145.f_29381)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("veto2"))
	{
		if (!Global_262145.f_29399 && iVar1 < Global_262145.f_29382)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italirsx"))
	{
		if (!Global_262145.f_29400 && iVar1 < Global_262145.f_29383)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("weevil"))
	{
		if (Global_262145.f_29409)
		{
		}
		else if (!Global_262145.f_29401 && iVar1 < Global_262145.f_29384)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manchez2"))
	{
		if (!Global_262145.f_29402 && iVar1 < Global_262145.f_29385)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("slamtruck"))
	{
		if (!Global_262145.f_29403 && iVar1 < Global_262145.f_29386)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vetir"))
	{
		if (!Global_262145.f_29404 && iVar1 < Global_262145.f_29387)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("squaddie"))
	{
		if (!Global_262145.f_29405 && iVar1 < Global_262145.f_29388)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("brioso2"))
	{
		if (Global_262145.f_29410)
		{
		}
		else if (!Global_262145.f_29406 && iVar1 < Global_262145.f_29389)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dinghy5"))
	{
		if (!Global_262145.f_29407 && iVar1 < Global_262145.f_29390)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("verus"))
	{
		if (!Global_262145.f_29408 && iVar1 < Global_262145.f_29391)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_208()
{
	return 0;
}

int func_209()
{
	return 1;
}

int func_210()
{
	return 1;
}

int func_211()
{
	if (GRAPHICS::DRAW_RECT(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_212(bool bParam0)
{
	void fVar0;
	char* sVar1;
	
	fVar0 = MISC::GET_MODEL_DIMENSIONS(iParam0);
	sVar1 = VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(bParam0);
	if (fVar0 == joaat("speedo") && NETWORK::NETWORK_IS_GAME_IN_PROGRESS(sVar1, "LAMAR G "))
	{
		return 1;
	}
	if (!func_204(fVar0, 0))
	{
		return 1;
	}
	return 0;
}

int func_213(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (MISC::IS_BIT_SET(Global_96316[iVar0]))
		{
			if (Global_96316[iVar0] == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_214(bool bParam0)
{
	int iVar0;
	
	if (MISC::IS_BIT_SET(iParam0) && ENTITY::GET_ENTITY_COORDS(bParam0, false))
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (MISC::IS_BIT_SET(Global_96286[iVar0]) && ENTITY::GET_ENTITY_COORDS(Global_96286[iVar0], false))
			{
				if (Global_96286[iVar0] == bParam0 && MISC::GET_MODEL_DIMENSIONS(Global_96286[iVar0]) == MISC::GET_MODEL_DIMENSIONS(bParam0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_215(int iParam0)
{
	int iVar0;
	
	if (MISC::IS_BIT_SET(Global_75654.f_484[24]))
	{
		if (iParam0 == Global_75654.f_484[24])
		{
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (MISC::IS_BIT_SET(Global_75654.f_484[iVar0]))
		{
			if ((((((((((((iVar0 != 24 && iVar0 != 21) && iVar0 != 22) && iVar0 != 23) && iVar0 != 27) && iVar0 != 30) && iVar0 != 33) && iVar0 != 28) && iVar0 != 31) && iVar0 != 34) && iVar0 != 26) && iVar0 != 29) && iVar0 != 32)
			{
				if (iParam0 == Global_75654.f_484[iVar0])
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_216(bool bParam0)
{
	int iVar0;
	
	if (!MISC::IS_BIT_SET(iParam0))
	{
		return 145;
	}
	if (!ENTITY::GET_ENTITY_COORDS(bParam0, false))
	{
		return 145;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (MISC::IS_BIT_SET(Global_96286[iVar0]))
		{
			if (Global_96286[iVar0] == bParam0)
			{
				return Global_96296[iVar0];
			}
		}
		iVar0++;
	}
	return 145;
}

int func_217(bool bParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	
	if (!MISC::IS_BIT_SET(iParam0) || !ENTITY::GET_ENTITY_COORDS(bParam0, false))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_218(iParam1, iVar0, &sVar1, &iVar2))
	{
		if (!bParam2 || unk_0xCE990E643CD9D0E5(Global_111858.f_7225[iVar2], 0))
		{
			if (VEHICLE::IS_VEHICLE_IN_GARAGE_AREA(&sVar1, bParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_218(int iParam0, int iParam1, char* sParam2, var uParam3)
{
	StringCopy(sParam2, "", 32);
	switch (iParam0)
	{
		case 0:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Michael - Beverly Hills", 32);
				*uParam3 = 0;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 1;
				return 1;
			}
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Franklin - Aunt", 32);
				*uParam3 = 5;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Franklin - Hills", 32);
				*uParam3 = 6;
				return 1;
			}
			break;
		
		case 2:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 2;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - City", 32);
				*uParam3 = 3;
				return 1;
			}
			else if (iParam1 == 2)
			{
				StringCopy(sParam2, "Trevor - Stripclub", 32);
				*uParam3 = 4;
				return 1;
			}
			break;
	}
	return 0;
}

void func_219(bool bParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 54)
	{
		func_128(iVar0, bParam0);
		iVar0++;
	}
}

