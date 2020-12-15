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
	int iLocal_28 = 0;
	float fLocal_29 = 0f;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
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
	float fLocal_60 = 0f;
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
	struct<14> Local_75 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_76 = 0;
	bool bLocal_77 = 0;
	bool bLocal_78 = 0;
	int iLocal_79 = 0;
	bool bLocal_80 = 0;
	bool bLocal_81 = 0;
	bool bLocal_82 = 0;
	bool bLocal_83 = 0;
	bool bLocal_84 = 0;
	bool bLocal_85 = 0;
	bool bLocal_86 = 0;
	bool bLocal_87 = 0;
	bool bLocal_88 = 0;
	int iLocal_89 = 0;
	int iLocal_90 = 0;
	int iLocal_91 = 0;
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	bool bLocal_94 = 0;
	bool bLocal_95 = 0;
	int iLocal_96 = 0;
	bool bLocal_97 = 0;
	bool bLocal_98 = 0;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	int iLocal_101 = 0;
	int iLocal_102 = 0;
	bool bLocal_103 = 0;
	int iLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 16;
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
	var uLocal_265 = 0;
	var uLocal_266 = 0;
	var uLocal_267 = 0;
	var uLocal_268 = 0;
	var uLocal_269 = 0;
	var uLocal_270 = 0;
	var uLocal_271 = 0;
	var uLocal_272 = 0;
	var uLocal_273 = 0;
	bool bLocal_274 = 0;
	var uLocal_275 = 0;
	var uLocal_276 = 0;
	int iLocal_277[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_278 = 0;
	bool bLocal_279 = 0;
	bool bLocal_280 = 0;
	bool bLocal_281 = 0;
	int iLocal_282 = 0;
	int iLocal_283 = 0;
	int iLocal_284 = 0;
	int iLocal_285 = 0;
	int iLocal_286 = 0;
	int iLocal_287 = 0;
	float fLocal_288 = 0f;
	float fLocal_289 = 0f;
	int iLocal_290 = 0;
	int iLocal_291 = 0;
	int iLocal_292 = 0;
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
	var uLocal_303 = 0;
	var uLocal_304 = 0;
	var uLocal_305 = 0;
	var uLocal_306 = 0;
	int iLocal_307 = 0;
	int iLocal_308 = 0;
	int iLocal_309 = 0;
	var uLocal_310 = 0;
	var uLocal_311 = 0;
	int iLocal_312 = 0;
	int iLocal_313 = 0;
	int iLocal_314 = 0;
	int iLocal_315[4] = { 0, 0, 0, 0 };
	bool bLocal_316 = 0;
	bool bLocal_317 = 0;
	bool bLocal_318 = 0;
	void fLocal_319 = 0;
	int iLocal_320[12] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	struct<12> Local_321 = { 5, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0 } ;
	struct<70> Local_322 = { 5, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, -1, 0, 0, -15, -1, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_323 = 0;
	var uLocal_324 = 0;
	var uLocal_325 = 0;
	var uLocal_326 = 0;
	var uLocal_327 = 0;
	var uLocal_328 = 0;
	struct<4> Local_329[32];
	int iLocal_330 = 0;
	int iLocal_331 = 0;
	int iLocal_332 = 0;
	char* sLocal_333 = NULL;
	bool bLocal_334 = 0;
	bool bLocal_335 = 0;
	var uLocal_336 = 0;
	var uLocal_337 = 0;
	struct<21> Local_338 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	iLocal_28 = 3;
	fLocal_29 = 0f;
	fLocal_33 = -0.0375f;
	fLocal_34 = 0.17f;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_60 = ((0.05f + 0.275f) - 0.01f);
	iLocal_93 = 1;
	bLocal_95 = true;
	bLocal_97 = true;
	iLocal_102 = -1;
	bLocal_280 = true;
	bLocal_281 = true;
	iLocal_284 = -1;
	iLocal_285 = -1;
	iLocal_309 = -1;
	iLocal_312 = -1;
	if (!func_541(ScriptParam_338))
	{
		func_537();
	}
	iLocal_320[0] = ZONE::GET_ZONE_POPSCHEDULE(ZONE::GET_ZONE_AT_COORDS(-891.3f, 807.9f, 188.1f));
	iLocal_320[1] = ZONE::GET_ZONE_POPSCHEDULE(ZONE::GET_ZONE_AT_COORDS(-276.5f, -206.3f, 38.4f));
	iLocal_320[2] = ZONE::GET_ZONE_POPSCHEDULE(ZONE::GET_ZONE_AT_COORDS(-1485.5f, -644.5f, 30.1f));
	iLocal_320[3] = ZONE::GET_ZONE_POPSCHEDULE(ZONE::GET_ZONE_AT_COORDS(-1746.3f, -939.5f, 7.7f));
	iLocal_320[4] = ZONE::GET_ZONE_POPSCHEDULE(ZONE::GET_ZONE_AT_COORDS(-2106.4f, -345.3f, 13f));
	iLocal_320[5] = ZONE::GET_ZONE_POPSCHEDULE(ZONE::GET_ZONE_AT_COORDS(-1520f, 74.4f, 61.3f));
	iLocal_320[6] = ZONE::GET_ZONE_POPSCHEDULE(ZONE::GET_ZONE_AT_COORDS(-1333f, -286f, 40.3f));
	iLocal_320[7] = ZONE::GET_ZONE_POPSCHEDULE(ZONE::GET_ZONE_AT_COORDS(-1178.1f, 54.8f, 53.9f));
	iLocal_320[8] = ZONE::GET_ZONE_POPSCHEDULE(ZONE::GET_ZONE_AT_COORDS(-1298.7f, -359.4f, 36.7f));
	iLocal_320[9] = ZONE::GET_ZONE_POPSCHEDULE(ZONE::GET_ZONE_AT_COORDS(-355.2f, 147.5f, 75.8f));
	iLocal_320[10] = ZONE::GET_ZONE_POPSCHEDULE(ZONE::GET_ZONE_AT_COORDS(-982.1f, -1064.7f, 2.2f));
	iLocal_320[11] = ZONE::GET_ZONE_POPSCHEDULE(ZONE::GET_ZONE_AT_COORDS(-1313.1f, -1560.2f, 4.3f));
	while (true)
	{
		func_536();
		bLocal_78 = false;
		bLocal_80 = false;
		bLocal_83 = false;
		bLocal_86 = false;
		bLocal_88 = false;
		Global_2540384.f_1747 = 0;
		if (func_526() || func_525())
		{
			func_537();
		}
		if (func_519())
		{
			if (!func_518())
			{
				if (!func_517())
				{
					if (func_515())
					{
						if (!iLocal_76)
						{
							func_511();
							func_510(&Local_321, 5);
							func_509();
							bLocal_97 = true;
							bLocal_98 = true;
							if (unk_0xCE990E643CD9D0E5(iLocal_330, 1))
							{
								VEHICLE::IS_VEHICLE_DRIVEABLE(&iLocal_330, true);
							}
							iLocal_76 = 1;
							iLocal_312 = -999;
						}
					}
				}
			}
			else if (!func_517())
			{
				if (!bLocal_98)
				{
					if (!func_508(&uLocal_275))
					{
						func_507(&uLocal_275, 0, 0);
					}
					else if (func_506(&uLocal_275, 100, 0))
					{
						if (!unk_0xCE990E643CD9D0E5(iLocal_330, 1))
						{
							if (func_515())
							{
								func_496(&Local_321, 5, Global_2097152[func_505() /*10931*/].f_6175.f_37);
								bLocal_97 = false;
								bLocal_98 = true;
								iLocal_76 = 1;
								iLocal_312 = -999;
							}
						}
					}
				}
			}
			func_399();
			func_395();
			func_381();
			func_374();
			func_265();
			func_176();
		}
		func_172();
		func_142();
		func_76();
		func_73();
		if (!iLocal_100)
		{
			if (SYSTEM::VDIST2(NETWORK::NETWORK_ARE_HANDLES_THE_SAME(unk_0x9B0761B4C3EB8BC7(), 0), 471.9266f, -1308.596f, 28.2359f) < 1000f)
			{
				PLAYER::PLAYER_PED_ID(471.9266f, -1308.596f, 28.2359f, 2f, joaat("v_ilev_uvcheetah"), 1);
				PLAYER::PLAYER_PED_ID(471.9266f, -1308.596f, 28.2359f, 2f, joaat("v_ilev_uventity"), 1);
				PLAYER::PLAYER_PED_ID(471.9266f, -1308.596f, 28.2359f, 2f, joaat("v_ilev_uvjb700"), 1);
				PLAYER::PLAYER_PED_ID(471.9266f, -1308.596f, 28.2359f, 2f, joaat("v_ilev_uventity"), 1);
				PLAYER::PLAYER_PED_ID(471.9266f, -1308.596f, 28.2359f, 2f, joaat("v_ilev_uvmonroe"), 1);
				PLAYER::PLAYER_PED_ID(471.9266f, -1308.596f, 28.2359f, 2f, joaat("v_ilev_uvtext"), 1);
				iLocal_100 = 1;
			}
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			func_1();
		}
	}
}

void func_1()
{
	int iVar0;
	int iVar1;
	
	if (!bLocal_95)
	{
	}
	else
	{
		if (iLocal_96 >= Local_329)
		{
			iLocal_96 = 0;
			VEHICLE::IS_VEHICLE_DRIVEABLE(&iLocal_330, 10);
			VEHICLE::IS_VEHICLE_DRIVEABLE(&(Local_322.f_23), 7);
			VEHICLE::IS_VEHICLE_DRIVEABLE(&iLocal_330, 11);
			VEHICLE::IS_VEHICLE_DRIVEABLE(&iLocal_330, 23);
			if (unk_0xCE990E643CD9D0E5(Local_322.f_23, 0))
			{
				unk_0xBE20AB8238688965(&(Local_322.f_23), true);
				VEHICLE::IS_VEHICLE_DRIVEABLE(&(Local_322.f_23), 3);
			}
		}
		iVar0 = iLocal_96;
		if (Local_329[iVar0 /*4*/].f_1 == 2)
		{
			iVar1 = 0;
			while (iVar1 < 5)
			{
				if (!Local_322[iVar1] == -1)
				{
					if (!Local_322.f_6[iVar1])
					{
						if (Local_322[iVar1] == Local_329[iVar0 /*4*/])
						{
							if (Local_322[iVar1] == Local_322.f_28)
							{
								func_72();
							}
							Local_322.f_33 = 0;
							Local_322.f_32++;
						}
					}
				}
				iVar1++;
			}
		}
		if (unk_0xCE990E643CD9D0E5(Local_322.f_23, 0))
		{
			if (!unk_0xCE990E643CD9D0E5(Local_322.f_23, 7))
			{
				if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
				{
					if (Local_329[iVar0 /*4*/].f_3 > 0 || func_71(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)), 6))
					{
						if (Local_329[iVar0 /*4*/].f_3 < 3)
						{
							unk_0xBE20AB8238688965(&(Local_322.f_23), 7);
						}
					}
				}
			}
		}
		if (unk_0xCE990E643CD9D0E5(Local_322.f_23, 0))
		{
			if (!unk_0xCE990E643CD9D0E5(iLocal_330, 11))
			{
				if (unk_0xCE990E643CD9D0E5(Local_329[iVar0 /*4*/].f_2, 2))
				{
					unk_0xBE20AB8238688965(&iLocal_330, 11);
				}
			}
			if (!unk_0xCE990E643CD9D0E5(iLocal_330, 21))
			{
				if (!unk_0xCE990E643CD9D0E5(iLocal_330, 3))
				{
					if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
					{
						if (unk_0xCE990E643CD9D0E5(Local_329[iVar0 /*4*/].f_2, 3))
						{
							unk_0xBE20AB8238688965(&iLocal_330, 21);
						}
					}
				}
			}
		}
		iLocal_96++;
		if (iLocal_96 >= Local_329)
		{
			unk_0xBE20AB8238688965(&iLocal_330, 10);
			if (unk_0xCE990E643CD9D0E5(Local_322.f_23, 7) || unk_0xCE990E643CD9D0E5(iLocal_330, 23))
			{
				VEHICLE::IS_VEHICLE_DRIVEABLE(&(Local_322.f_23), true);
			}
			if (unk_0xCE990E643CD9D0E5(iLocal_330, 11))
			{
				unk_0xBE20AB8238688965(&(Local_322.f_23), 3);
			}
			if (unk_0xCE990E643CD9D0E5(iLocal_330, 21))
			{
				unk_0xBE20AB8238688965(&(Local_322.f_23), 6);
			}
		}
	}
	if (func_70())
	{
		if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Local_322.f_29) > 180000)
		{
			func_69();
		}
	}
	switch (Local_322.f_20)
	{
		case 0:
			func_66();
			Local_322.f_32++;
			Local_322.f_20 = 1;
			func_65();
			break;
		
		case 1:
			if (func_64())
			{
				iLocal_308 = NETWORK::GET_NETWORK_TIME();
				Local_322.f_20 = 2;
			}
			else if (Local_322.f_28 == -1)
			{
				func_72();
			}
			break;
		
		case 2:
			if (!Local_322.f_17 && NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), iLocal_308) > Global_262145.f_11477)
			{
				Local_322.f_20 = 0;
			}
			break;
		
		case 3:
			break;
	}
	func_2();
}

void func_2()
{
	struct<3> Var0;
	float fVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;
	
	switch (Local_322.f_26)
	{
		case 0:
			if (!unk_0xCE990E643CD9D0E5(Local_322.f_23, 0))
			{
				if (bLocal_280)
				{
					if (bLocal_281)
					{
						if (Global_2540384.f_1720)
						{
							VEHICLE::IS_VEHICLE_DRIVEABLE(&(Local_322.f_23), 2);
							VEHICLE::IS_VEHICLE_DRIVEABLE(&(Local_322.f_23), 6);
							VEHICLE::IS_VEHICLE_DRIVEABLE(&iLocal_330, 21);
							NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(0);
							Local_322.f_34 = 0;
							unk_0xBE20AB8238688965(&(Local_322.f_23), false);
							Global_2540384.f_1720 = 0;
						}
					}
					else if (Local_322.f_27 == -15)
					{
						VEHICLE::IS_VEHICLE_DRIVEABLE(&(Local_322.f_23), 2);
						VEHICLE::IS_VEHICLE_DRIVEABLE(&(Local_322.f_23), 6);
						VEHICLE::IS_VEHICLE_DRIVEABLE(&iLocal_330, 21);
						NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(0);
						Local_322.f_34 = 0;
						iVar2 = func_63();
						func_49(&(Local_322.f_27), func_62(iVar2), func_61(iVar2), func_60(iVar2), func_59(iVar2), func_58(iVar2), func_56(iVar2));
						func_48(&(Local_322.f_27), 0, NETWORK::_NETWORK_GET_ROS_PRIVILEGE_25(0, 60), NETWORK::_NETWORK_GET_ROS_PRIVILEGE_25(0, 8), 1, 0, 0);
					}
					else if (!func_47(6))
					{
						if (!func_508(&uLocal_297))
						{
							func_507(&uLocal_297, 0, 0);
						}
						else if (func_506(&uLocal_297, 10000, 0))
						{
							func_46(&uLocal_297);
							if (func_42(Local_322.f_27))
							{
								unk_0xBE20AB8238688965(&(Local_322.f_23), false);
							}
						}
					}
				}
			}
			else if (Local_322.f_67 == 0)
			{
				if (func_36(1, 1, 1))
				{
					if (NETWORK::NETWORK_ENTITY_AREA_DOES_EXIST(Local_322.f_24))
					{
						NETWORK::NETWORK_REMOVE_ENTITY_AREA(Local_322.f_24);
					}
					Local_322.f_24 = -1;
					iLocal_283 = NETWORK::_NETWORK_GET_ROS_PRIVILEGE_25(0, 10);
					iVar3 = func_33();
					if (iVar3 != 0)
					{
						Local_322.f_67 = iVar3;
						NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(1);
						Local_322.f_34 = 1;
					}
				}
			}
			else if (NETWORK::CAN_REGISTER_MISSION_VEHICLES(1))
			{
				if (func_32(Local_322.f_67))
				{
					if (!HUD::DOES_BLIP_EXIST(Local_322.f_22))
					{
						if (func_21(&Var0, &fVar1))
						{
							if (func_18(&(Local_322.f_22), Local_322.f_67, Var0, fVar1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0))
							{
								if (NETWORK::NET_TO_VEH("MPBitset", 3))
								{
									if (unk_0x871819940BD2E434(unk_0x770D3B2B4702434A(Local_322.f_22), "MPBitset"))
									{
										bVar4 = PED::IS_PED_IN_ANY_VEHICLE(unk_0x770D3B2B4702434A(Local_322.f_22), "MPBitset");
									}
									unk_0xBE20AB8238688965(&bVar4, 5);
									DECORATOR::DECOR_SET_INT(unk_0x770D3B2B4702434A(Local_322.f_22), "MPBitset", bVar4);
								}
								if (NETWORK::NET_TO_VEH("MPBitset", 3))
								{
									if (unk_0x871819940BD2E434(unk_0x770D3B2B4702434A(Local_322.f_22), "MPBitset"))
									{
										bVar5 = PED::IS_PED_IN_ANY_VEHICLE(unk_0x770D3B2B4702434A(Local_322.f_22), "MPBitset");
									}
									unk_0xBE20AB8238688965(&bVar5, 10);
									DECORATOR::DECOR_SET_INT(unk_0x770D3B2B4702434A(Local_322.f_22), "MPBitset", bVar5);
								}
								if (NETWORK::NET_TO_VEH("Not_Allow_As_Saved_Veh", 3))
								{
									DECORATOR::DECOR_SET_INT(unk_0x770D3B2B4702434A(Local_322.f_22), "Not_Allow_As_Saved_Veh", true);
								}
								unk_0xBE20AB8238688965(&(Local_322.f_23), false);
								VEHICLE::IS_VEHICLE_DRIVEABLE(&(Local_322.f_23), 2);
								VEHICLE::IS_VEHICLE_DRIVEABLE(&(Local_322.f_23), 4);
								VEHICLE::IS_VEHICLE_DRIVEABLE(&(Local_322.f_23), 3);
								VEHICLE::IS_VEHICLE_DRIVEABLE(&iLocal_330, 11);
								VEHICLE::IS_VEHICLE_DRIVEABLE(&(Local_322.f_23), 6);
								unk_0xBE20AB8238688965(&iLocal_330, 23);
								unk_0x74528AC0906CBABE(Local_322.f_67);
								Local_322.f_26 = 1;
								func_46(&(Local_322.f_30));
								func_507(&(Local_322.f_30), 0, 0);
								VEHICLE::SET_VEHICLE_DOORS_LOCKED(unk_0x770D3B2B4702434A(Local_322.f_22), 7);
								VEHICLE::SET_VEHICLE_NEEDS_TO_BE_HOTWIRED(unk_0x770D3B2B4702434A(Local_322.f_22), true);
								VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_322.f_67, true);
								NETWORK::_0x3FA36981311FA4FF(Local_322.f_22, true);
							}
						}
					}
				}
			}
			break;
		
		case 1:
			if (!unk_0xCE990E643CD9D0E5(Local_322.f_23, 2))
			{
				if (NETWORK::NETWORK_IS_HANDLE_VALID(Local_322.f_22))
				{
					if (!ENTITY::GET_ENTITY_COORDS(unk_0x770D3B2B4702434A(Local_322.f_22), false))
					{
						Local_75.f_2 = -1825697370;
						func_16(Local_75, func_17(1));
						unk_0xBE20AB8238688965(&(Local_322.f_23), 2);
					}
				}
			}
			if (unk_0xCE990E643CD9D0E5(iLocal_330, 3) || (unk_0xCE990E643CD9D0E5(iLocal_330, 10) && unk_0xCE990E643CD9D0E5(Local_322.f_23, 1)))
			{
				if (!unk_0xCE990E643CD9D0E5(iLocal_330, 3))
				{
					if (!unk_0xCE990E643CD9D0E5(Local_322.f_23, 2))
					{
						if (NETWORK::NETWORK_IS_HANDLE_VALID(Local_322.f_22))
						{
							if (!ENTITY::GET_ENTITY_COORDS(unk_0x770D3B2B4702434A(Local_322.f_22), false))
							{
								Local_75.f_2 = -1825697370;
								func_16(Local_75, func_17(1));
								unk_0xBE20AB8238688965(&(Local_322.f_23), 2);
							}
						}
					}
				}
				Local_322.f_26 = 2;
			}
			if (func_15(unk_0x770D3B2B4702434A(Local_322.f_22)))
			{
				Local_322.f_26 = 2;
				Local_75.f_2 = -1198496331;
				func_16(Local_75, func_17(1));
			}
			if (!unk_0xCE990E643CD9D0E5(Local_322.f_23, 4))
			{
				if (func_506(&(Local_322.f_30), 360000, 0))
				{
					unk_0xBE20AB8238688965(&(Local_322.f_23), 4);
					func_46(&(Local_322.f_30));
					func_507(&(Local_322.f_30), 0, 0);
				}
			}
			else if (unk_0xCE990E643CD9D0E5(iLocal_330, 10))
			{
				if (!unk_0xCE990E643CD9D0E5(Local_322.f_23, 3))
				{
					if (func_508(&(Local_322.f_30)))
					{
						if (func_506(&(Local_322.f_30), 120000, 0))
						{
							Local_322.f_26 = 2;
							Local_75.f_2 = -1198496331;
							func_16(Local_75, func_17(1));
						}
					}
					else
					{
						func_507(&(Local_322.f_30), 0, 0);
					}
				}
				else if (func_508(&(Local_322.f_30)))
				{
					func_46(&(Local_322.f_30));
				}
			}
			if (unk_0xCE990E643CD9D0E5(Local_322.f_23, 6))
			{
				if (!unk_0xCE990E643CD9D0E5(iLocal_330, 3))
				{
					if (Local_322.f_26 == 1)
					{
						Local_322.f_26 = 2;
					}
				}
			}
			if (func_11(6))
			{
				if (Local_322.f_26 == 1)
				{
					Local_322.f_26 = 2;
				}
			}
			break;
		
		case 2:
			if (NETWORK::NETWORK_IS_HANDLE_VALID(Local_322.f_22))
			{
				if (func_10(Local_322.f_22))
				{
					func_9(&(Local_322.f_22));
					Local_322.f_26 = 3;
				}
			}
			else
			{
				Local_322.f_26 = 3;
			}
			break;
		
		case 3:
			if (unk_0xCE990E643CD9D0E5(iLocal_330, 10))
			{
				if (unk_0xCE990E643CD9D0E5(Local_322.f_23, 1))
				{
					Local_322.f_26 = 0;
					VEHICLE::IS_VEHICLE_DRIVEABLE(&(Local_322.f_23), false);
					Local_322.f_27 = -15;
					if (Local_322.f_67 != 0)
					{
						VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_322.f_67, false);
					}
					Local_322.f_67 = 0;
					if (bLocal_281)
					{
						func_7(func_8(INTERIOR::GET_INTERIOR_FROM_ENTITY("AM_LAUNCHER", -1, 0)), 0);
					}
				}
			}
			break;
	}
	func_3();
}

void func_3()
{
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		switch (Local_322.f_69)
		{
			case 0:
				if (unk_0xCE990E643CD9D0E5(Local_322.f_23, 8))
				{
					if (NETWORK::NETWORK_IS_HANDLE_VALID(Local_322.f_22))
					{
						if (!func_6())
						{
							if (ENTITY::GET_ENTITY_COLLISION_DISABLED(unk_0x770D3B2B4702434A(Local_322.f_22)))
							{
								if (!unk_0x1037B9D45CE6B788(unk_0x770D3B2B4702434A(Local_322.f_22), 1204.053f, -3102.311f, 1.770506f, 1204.265f, -3121.974f, 17.92032f, 31.625f, 0, 1, 0))
								{
									if (!unk_0xCE990E643CD9D0E5(Local_322.f_23, 9))
									{
										unk_0xBE20AB8238688965(&(Local_322.f_23), 9);
									}
								}
							}
						}
						else if (unk_0xCE990E643CD9D0E5(Local_322.f_23, 9))
						{
							VEHICLE::IS_VEHICLE_DRIVEABLE(&(Local_322.f_23), 9);
						}
					}
				}
				break;
			}
	}
	if (unk_0xCE990E643CD9D0E5(Local_322.f_23, 9))
	{
		if (NETWORK::NETWORK_IS_HANDLE_VALID(Local_322.f_22))
		{
			if (func_4(Local_322.f_22))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_322.f_22))
				{
					ENTITY::SET_ENTITY_COLLISION(unk_0x770D3B2B4702434A(Local_322.f_22), true, false);
					VEHICLE::SET_VEHICLE_DOORS_LOCKED(unk_0x770D3B2B4702434A(Local_322.f_22), 1);
					ENTITY::SET_ENTITY_COORDS(unk_0x770D3B2B4702434A(Local_322.f_22), false);
					NETWORK::NETWORK_FADE_IN_ENTITY(unk_0x770D3B2B4702434A(Local_322.f_22), true, 1);
					VEHICLE::IS_VEHICLE_DRIVEABLE(&(Local_322.f_23), 9);
				}
				else
				{
					AUDIO::RESTART_SCRIPTED_CONVERSATION(Local_322.f_22);
				}
			}
			else
			{
				VEHICLE::IS_VEHICLE_DRIVEABLE(&(Local_322.f_23), 9);
			}
		}
		else
		{
			VEHICLE::IS_VEHICLE_DRIVEABLE(&(Local_322.f_23), 9);
		}
	}
}

int func_4(int iParam0)
{
	if (HUD::DOES_BLIP_EXIST(iParam0))
	{
		return !func_5(unk_0x770D3B2B4702434A(iParam0));
	}
	return 0;
}

int func_5(bool bParam0)
{
	if (MISC::IS_BIT_SET(iParam0))
	{
		if (PED::IS_PED_IN_ANY_POLICE_VEHICLE(bParam0, 0))
		{
			return 1;
		}
		else if (!ENTITY::GET_ENTITY_COORDS(bParam0, false))
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

int func_6()
{
	bool bVar0;
	
	if (NETWORK::NETWORK_IS_HANDLE_VALID(Local_322.f_22))
	{
		if (func_4(Local_322.f_22))
		{
			bVar0 = MISC::IS_MINIGAME_IN_PROGRESS(unk_0x770D3B2B4702434A(Local_322.f_22), -1, 0);
			if (bVar0 != 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_7(int iParam0, int iParam1)
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

int func_8(bool bParam0)
{
	var uVar0;
	
	if (iParam0 != -1)
	{
		unk_0xBE20AB8238688965(&uVar0, iParam0);
	}
	return uVar0;
}

void func_9(var uParam0)
{
	int iVar0;
	
	if (NETWORK::NETWORK_IS_HANDLE_VALID(*uParam0))
	{
		iVar0 = NETWORK::NET_TO_ENT(*uParam0);
		ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&iVar0);
	}
}

int func_10(int iParam0)
{
	if (HUD::DOES_BLIP_EXIST(iParam0))
	{
		AUDIO::RESTART_SCRIPTED_CONVERSATION(iParam0);
		return NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(iParam0);
	}
	return 0;
}

bool func_11(int iParam0)
{
	return !func_12(iParam0);
}

int func_12(int iParam0)
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
			if (func_71(PLAYER::PLAYER_ID(), 7))
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
			if (func_71(PLAYER::PLAYER_ID(), 7))
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
			if (func_71(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (unk_0xCE990E643CD9D0E5(Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_274.f_26, 0) || unk_0xCE990E643CD9D0E5(Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_274.f_26, 1))
			{
				return 0;
			}
			break;
		
		case 15:
			if (func_13(4))
			{
				return 0;
			}
			if (func_71(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (unk_0xCE990E643CD9D0E5(Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_274.f_26, 0) || unk_0xCE990E643CD9D0E5(Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_274.f_26, 1))
			{
				return 0;
			}
			break;
		
		case 17:
			if (func_13(4))
			{
				return 0;
			}
			if (func_71(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (unk_0xCE990E643CD9D0E5(Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_274.f_26, 0) || unk_0xCE990E643CD9D0E5(Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_274.f_26, 1))
			{
				return 0;
			}
			break;
		
		case 16:
			if (func_13(4))
			{
				return 0;
			}
			if (func_71(PLAYER::PLAYER_ID(), 7))
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
			if (func_13(4))
			{
				return 0;
			}
			if (func_71(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (unk_0xCE990E643CD9D0E5(Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_274.f_26, 0) || unk_0xCE990E643CD9D0E5(Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_274.f_26, 1))
			{
				return 0;
			}
			break;
		
		case 19:
			if (func_13(4))
			{
				return 0;
			}
			if (func_71(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			break;
		
		case 20:
			if (func_13(4))
			{
				return 0;
			}
			if (func_71(PLAYER::PLAYER_ID(), 7))
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

int func_13(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_14(NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar0), 0, 1))
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

int func_14(bool bParam0, bool bParam1, bool bParam2)
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

int func_15(bool bParam0)
{
	if (ENTITY::GET_ENTITY_COORDS(bParam0, false))
	{
		if (NETWORK::NET_TO_VEH("bombdec1", 3))
		{
			if (unk_0x871819940BD2E434(bParam0, "bombdec1"))
			{
				return 1;
			}
		}
		if (NETWORK::NET_TO_VEH("bombdec", 3))
		{
			if (unk_0x871819940BD2E434(bParam0, "bombdec"))
			{
				return 1;
			}
		}
		if (NETWORK::NET_TO_VEH("bombowner", 3))
		{
			if (unk_0x871819940BD2E434(bParam0, "bombowner"))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_16(struct<2> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, int iParam13)
{
	Param0 = -1949011582;
	Param0.f_1 = PLAYER::PLAYER_ID();
	if (!iParam13 == 0)
	{
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Param0, 14, iParam13);
	}
}

int func_17(int iParam0)
{
	var uVar0;
	int iVar1;
	bool bVar2;
	
	iVar1 = 0;
	while (iVar1 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1)))
		{
			bVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1));
			if (func_14(bVar2, 0, 0))
			{
				if (bVar2 != PLAYER::PLAYER_ID() || iParam0)
				{
					unk_0xBE20AB8238688965(&uVar0, bVar2);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_18(var uParam0, int iParam1, struct<3> Param2, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
{
	float fVar0;
	bool bVar1;
	
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
	bVar1 = VEHICLE::CREATE_VEHICLE(iParam1, Param2, fParam3, bParam5, bParam4, bParam12);
	if (MISC::IS_BIT_SET(bVar1))
	{
		*uParam0 = NETWORK::VEH_TO_NET(bVar1);
		Global_2540384.f_6583 = bVar1;
		if (HUD::DOES_BLIP_EXIST(*uParam0))
		{
			if (bParam13)
			{
				NETWORK::_NETWORK_SET_ENTITY_INVISIBLE_TO_NETWORK(bVar1, true);
			}
			ENTITY::_SET_ENTITY_SOMETHING(bVar1, bParam8);
			if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(bVar1))
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
			VEHICLE::SET_VEHICLE_IS_STOLEN(bVar1, bParam7);
			VEHICLE::_0xB2E0C0D6922D31F2(bVar1, true);
			if (bParam10)
			{
				VEHICLE::SET_CAR_BOOT_OPEN(bVar1);
				VEHICLE::SET_VEHICLE_DOOR_CONTROL(bVar1, 5, 5, 1f);
			}
			func_19(Param2, fParam3, iParam1, bVar1);
			return 1;
		}
	}
	return 0;
}

void func_19(struct<3> Param0, float fParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (func_20(PLAYER::PLAYER_ID(), Param0, iParam2) > -1)
	{
		if ((Global_2405074.f_2914[1 /*6*/].f_5 == bParam3 && Global_2405074.f_2914[1 /*6*/].f_4 == iParam2) && SYSTEM::VDIST(Global_2405074.f_2914[1 /*6*/], Param0) < 0.5f)
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
		Global_2405074.f_2914[1 /*6*/].f_5 = bParam3;
	}
}

int func_20(bool bParam0, struct<3> Param1, int iParam2)
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

int func_21(var uParam0, var uParam1)
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	float fVar3;
	
	if (!func_31(*uParam0, 0f, 0f, 0f, 0))
	{
		return 1;
	}
	switch (iLocal_283)
	{
		case 0:
			Var0 = { -810.8889f, -126.9419f, 33f };
			Var1 = { -807.2521f, -116.098f, 38f };
			Var2 = { -809.0935f, -121.9038f, 36.504f };
			fVar3 = 240.8011f;
			break;
		
		case 1:
			Var0 = { -804.004f, -1317.293f, 0.0005f };
			Var1 = { -797.881f, -1310.998f, 7.0005f };
			Var2 = { -801.6295f, -1313.865f, 4.0005f };
			fVar3 = 350.3062f;
			break;
		
		case 2:
			Var0 = { -194.8607f, -1955.005f, 25.6205f };
			Var1 = { -189.4078f, -1945.248f, 28.6205f };
			Var2 = { -191.5592f, -1950.239f, 26.6205f };
			fVar3 = 288.8187f;
			break;
		
		case 3:
			Var0 = { -2966.875f, 459.3981f, 13.4644f };
			Var1 = { -2961.456f, 466.0484f, 16.1725f };
			Var2 = { -2963.887f, 462.7986f, 14.2156f };
			fVar3 = 30.4415f;
			break;
		
		case 4:
			Var0 = { -420.6335f, 1217.742f, 322.7591f };
			Var1 = { -411.9892f, 1220.346f, 326.6421f };
			Var2 = { -416.0102f, 1219.771f, 324.6421f };
			fVar3 = 230.4509f;
			break;
		
		case 5:
			Var0 = { -1634.708f, -890.849f, 6.97f };
			Var1 = { -1633.903f, -879.869f, 9.1264f };
			Var2 = { -1634.006f, -885.3531f, 8.0518f };
			fVar3 = 321.31f;
			break;
		
		case 6:
			Var0 = { -338.4312f, -947.4233f, 28.0788f };
			Var1 = { -331.5926f, -944.408f, 32.0788f };
			Var2 = { -334.8547f, -945.2789f, 30.0788f };
			fVar3 = 69.0442f;
			break;
		
		case 7:
			Var0 = { 1093.925f, 245.6548f, 77.9908f };
			Var1 = { 1094.243f, 255.0715f, 82.8556f };
			Var2 = { 1093.686f, 250.4772f, 79.8556f };
			fVar3 = 328.5602f;
			break;
		
		case 8:
			Var0 = { -1407.823f, 58.1796f, 50.8018f };
			Var1 = { -1400.19f, 63.9074f, 54.3222f };
			Var2 = { -1404.459f, 62.1459f, 52.0258f };
			fVar3 = 241.2814f;
			break;
		
		case 9:
			Var0 = { -1230.324f, -1656.814f, 2.0412f };
			Var1 = { -1226.429f, -1648.143f, 4.1986f };
			Var2 = { -1228.901f, -1652.397f, 3.1204f };
			fVar3 = 305.0972f;
			break;
	}
	if (!func_31(Var0, 0f, 0f, 0f, 0))
	{
		if (iLocal_283 < 10)
		{
			if (Local_322.f_24 == -1)
			{
				Local_322.f_24 = NETWORK::NETWORK_ADD_ENTITY_AREA(Var0, Var1);
			}
			else if (NETWORK::NETWORK_ENTITY_AREA_DOES_EXIST(Local_322.f_24))
			{
				if (NETWORK::_0x4DF7CFFF471A7FB1(Local_322.f_24))
				{
					if (!NETWORK::NETWORK_ENTITY_AREA_IS_OCCUPIED(Local_322.f_24))
					{
						if (!func_22(Var2, 1084227584, 1, 1, 1123024896, 0, -1, 0, 0))
						{
							*uParam0 = { Var2 };
							*uParam1 = fVar3;
							NETWORK::NETWORK_REMOVE_ENTITY_AREA(Local_322.f_24);
							Local_322.f_24 = -1;
							return 1;
						}
						else
						{
							iLocal_283++;
							NETWORK::NETWORK_REMOVE_ENTITY_AREA(Local_322.f_24);
							Local_322.f_24 = -1;
						}
					}
					else
					{
						iLocal_283++;
						NETWORK::NETWORK_REMOVE_ENTITY_AREA(Local_322.f_24);
						Local_322.f_24 = -1;
					}
				}
			}
		}
		else
		{
			iLocal_283 = 0;
		}
	}
	return 0;
}

int func_22(struct<3> Param0, float fParam1, int iParam2, int iParam3, float fParam4, bool bParam5, int iParam6, float fParam7, bool bParam8)
{
	int iVar0;
	bool bVar1;
	float fVar2;
	
	if (iParam2 && !bParam5)
	{
		if (func_14(PLAYER::PLAYER_ID(), 1, 1))
		{
			if (!PED::REMOVE_SCENARIO_BLOCKING_AREA())
			{
				fVar2 = fParam4;
				if (fParam7 > 0f)
				{
					fVar2 = fParam7;
				}
				if (HUD::SET_BLIP_NAME_FROM_TEXT_FILE(func_27(PLAYER::PLAYER_ID()), Param0, 1) <= (fVar2 + fParam1))
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
		if (func_14(bVar1, 1, 1))
		{
			if (!func_24(bVar1, 0) && NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), bVar1))
			{
				if (iParam2 == 1 || (iParam2 == 0 && bVar1 != PLAYER::PLAYER_ID()))
				{
					if ((func_23(bVar1) || !bParam8) && !Global_2425869[bVar1 /*443*/].f_263)
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
								if (HUD::SET_BLIP_NAME_FROM_TEXT_FILE(func_27(bVar1), Param0, 1) <= (fVar2 + fParam1))
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
							if (HUD::SET_BLIP_NAME_FROM_TEXT_FILE(func_27(bVar1), Param0, 1) <= (fVar2 + fParam1))
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

int func_23(bool bParam0)
{
	if (ENTITY::IS_ENTITY_VISIBLE_TO_SCRIPT(PLAYER::GET_PLAYER_PED(bParam0)) || Global_2425869[bParam0 /*443*/].f_249)
	{
		return 1;
	}
	return 0;
}

bool func_24(bool bParam0, int iParam1)
{
	bool bVar0;
	
	if (bParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_25(-1, 0) == 8;
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

int func_25(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_26();
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

int func_26()
{
	return Global_1312763;
}

Vector3 func_27(bool bParam0)
{
	int iVar0;
	
	iVar0 = bParam0;
	if ((func_30() && Global_1590682[iVar0 /*883*/].f_854) && !func_29(Global_1590682[iVar0 /*883*/].f_855))
	{
		return Global_1590682[iVar0 /*883*/].f_855;
	}
	return func_28(bParam0);
}

Vector3 func_28(bool bParam0)
{
	return NETWORK::NETWORK_ARE_HANDLES_THE_SAME(PLAYER::GET_PLAYER_PED(iParam0), 0);
}

int func_29(struct<3> Param0)
{
	if ((Param0.x == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

var func_30()
{
	return Global_2451787.f_18;
}

bool func_31(struct<3> Param0, struct<3> Param1, bool bParam2)
{
	if (bParam2)
	{
		return (Param0.x == Param1.x && Param0.f_1 == Param1.f_1);
	}
	return ((Param0.x == Param1.x && Param0.f_1 == Param1.f_1) && Param0.f_2 == Param1.f_2);
}

bool func_32(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	unk_0x78FCB2E22C41B9D5(iParam0);
	return ENTITY::DOES_ENTITY_EXIST(iParam0);
}

int func_33()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	if (Global_262145.f_2335 != 0)
	{
		iVar1 = Global_262145.f_2335;
		if (STREAMING::IS_MODEL_IN_CDIMAGE(iVar1))
		{
			if (HUD::GET_PAUSE_MENU_STATE(iVar1))
			{
				iVar0 = iVar1;
			}
		}
	}
	if (iVar0 == 0)
	{
		iVar2 = func_35(&Local_322);
		iVar0 = func_34(iVar2);
	}
	return iVar0;
}

int func_34(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("zion");
		
		case 1:
			return joaat("serrano");
		
		case 2:
			return joaat("jackal");
		
		case 3:
			return joaat("schafter2");
		
		case 4:
			return joaat("dubsta");
		
		case 5:
			return joaat("f620");
		
		case 6:
			return joaat("schwarzer");
		
		case 7:
			return joaat("rocoto");
		
		case 8:
			return joaat("sentinel2");
		
		case 9:
			return joaat("felon2");
		
		case 10:
			return joaat("comet2");
		
		case 11:
			return joaat("banshee");
		
		case 12:
			return joaat("surano");
		
		case 13:
			return joaat("coquette");
		
		case 14:
			return joaat("carbonizzare");
		
		case 15:
			return joaat("exemplar");
		
		case 16:
			return joaat("feltzer2");
		
		case 17:
			return joaat("bullet");
		
		case 18:
			return joaat("superd");
		
		case 19:
			return joaat("infernus");
		
		default:
	}
	return 0;
}

int func_35(var uParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	bVar0 = NETWORK::_NETWORK_GET_ROS_PRIVILEGE_25(0, 5);
	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar2 = (iVar1 + bVar0);
		if (iVar2 >= 5)
		{
			iVar2 = (iVar2 - 5);
		}
		if (!(*uParam0)[iVar2] == -1)
		{
			if (uParam0->f_6[iVar2] == 0)
			{
				return (*uParam0)[iVar2];
			}
		}
		iVar1++;
	}
	return -1;
}

bool func_36(int iParam0, bool bParam1, bool bParam2)
{
	return func_37(1, iParam0, 1, bParam1, bParam2);
}

int func_37(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xCE990E643CD9D0E5(Global_1389439, 0))
	{
		return 0;
	}
	if ((bParam2 && !bParam3) && iParam1 <= (func_41(iParam0) - func_40(iParam0, 0)))
	{
		return 1;
	}
	else
	{
		if (bParam3)
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_40(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_41(iParam0) - func_39(iParam0));
		}
		else
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_40(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_41(iParam0) - func_40(iParam0, 1));
		}
		if (!bParam4 && Global_1590682[PLAYER::PLAYER_ID() /*883*/] != 3)
		{
			iVar1 = (iVar1 - func_38(iParam0));
		}
		if (iVar0 < iVar1)
		{
			return 1;
		}
	}
	return 0;
}

int func_38(int iParam0)
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

int func_39(int iParam0)
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

int func_40(int iParam0, bool bParam1)
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

int func_41(int iParam0)
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

bool func_42(int iParam0)
{
	return func_43(func_63(), iParam0);
}

int func_43(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_44(iParam1) || !func_44(iParam0))
	{
		return 1;
	}
	iVar0 = func_56(iParam0);
	iVar1 = func_56(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_58(iParam0);
	iVar1 = func_58(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_59(iParam0);
	iVar1 = func_59(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_60(iParam0);
	iVar1 = func_60(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_61(iParam0);
	iVar1 = func_61(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_62(iParam0);
	iVar1 = func_62(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_44(int iParam0)
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
	iVar0 = func_62(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_61(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_60(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_56(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_58(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_59(iParam0);
	if (iVar5 < 1 || iVar5 > func_45(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_45(int iParam0, int iParam1)
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

void func_46(var uParam0)
{
	uParam0->f_1 = 0;
}

bool func_47(int iParam0)
{
	return !func_12(iParam0);
}

void func_48(var uParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_56(*uParam0);
	iVar1 = func_58(*uParam0);
	iVar2 = func_59(*uParam0);
	iVar3 = func_60(*uParam0);
	iVar4 = func_61(*uParam0);
	iVar5 = func_62(*uParam0);
	if (((((iParam6 == 0 && iParam5 == 0) && iParam4 == 0) && bParam3 == 0) && bParam2 == 0) && iParam1 == 0)
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	if (bParam2 < 0)
	{
		return;
	}
	if (bParam3 < 0)
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
		bParam2++;
		iVar5 = (iVar5 - 60);
	}
	iVar4 = (iVar4 + bParam2);
	while (iVar4 >= 60)
	{
		bParam3++;
		iVar4 = (iVar4 - 60);
	}
	iVar3 = (iVar3 + bParam3);
	while (iVar3 >= 24)
	{
		iParam4++;
		iVar3 = (iVar3 - 24);
	}
	iVar2 = (iVar2 + iParam4);
	iVar6 = func_45(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_45(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_49(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_49(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_55(uParam0, iParam1);
	func_54(uParam0, iParam2);
	func_53(uParam0, iParam3);
	func_52(uParam0, iParam5);
	func_51(uParam0, iParam4);
	func_50(uParam0, iParam6);
}

void func_50(var uParam0, int iParam1)
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

void func_51(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_58(*uParam0);
	iVar1 = func_56(*uParam0);
	if (iParam1 < 1 || iParam1 > func_45(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

void func_52(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_53(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_54(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_55(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

int func_56(int iParam0)
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * func_57(unk_0xCE990E643CD9D0E5(iParam0, 31), -1, 1)) + 2011;
}

int func_57(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_58(int iParam0)
{
	return iParam0 & 15;
}

int func_59(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 4) & 31;
}

int func_60(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 9) & 31;
}

int func_61(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 14) & 63;
}

int func_62(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 20) & 63;
}

int func_63()
{
	var uVar0;
	
	func_55(&uVar0, CLOCK::GET_CLOCK_MINUTES());
	func_54(&uVar0, CLOCK::GET_CLOCK_HOURS());
	func_53(&uVar0, CLOCK::GET_CLOCK_DAY_OF_MONTH());
	func_51(&uVar0, CLOCK::GET_CLOCK_MONTH());
	func_52(&uVar0, CLOCK::GET_CLOCK_YEAR());
	func_50(&uVar0, SYSTEM::SHIFT_LEFT());
	return uVar0;
}

int func_64()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (!Local_322.f_6[iVar0])
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

void func_65()
{
	int iVar0;
	
	if (!unk_0xCE990E643CD9D0E5(Local_322.f_23, 5))
	{
		iVar0 = 0;
		while (iVar0 < 10)
		{
			Local_322.f_35[iVar0] = -1;
			iVar0++;
		}
		unk_0xBE20AB8238688965(&(Local_322.f_23), 5);
	}
}

void func_66()
{
	int iVar0;
	
	func_510(&Local_322, 5);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Local_322.f_12[iVar0] = func_67();
		iVar0++;
	}
	Local_322.f_33 = 1;
}

bool func_67()
{
	bool bVar0;
	
	bVar0 = NETWORK::_NETWORK_GET_ROS_PRIVILEGE_25(0, 10);
	while (func_68(bVar0))
	{
		bVar0 = NETWORK::_NETWORK_GET_ROS_PRIVILEGE_25(0, 10);
	}
	return bVar0;
}

int func_68(bool bParam0)
{
	int iVar0;
	
	if (!bParam0 == -1)
	{
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (Local_322.f_12[iVar0] == bParam0)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

void func_69()
{
	int iVar0;
	
	iVar0 = func_35(&Local_322);
	if (iVar0 != Local_322.f_28)
	{
		Local_322.f_28 = iVar0;
		Local_322.f_29 = NETWORK::GET_NETWORK_TIME();
	}
}

int func_70()
{
	if (Local_322.f_20 > 0)
	{
		if (Local_322[0] != Local_322[1])
		{
			return 1;
		}
	}
	return 0;
}

bool func_71(int iParam0, int iParam1)
{
	return unk_0xCE990E643CD9D0E5(Global_2425869[iParam0 /*443*/].f_212, iParam1);
}

void func_72()
{
	Local_322.f_29 = 0;
}

void func_73()
{
	int iVar0;
	
	if (func_70())
	{
		if (Global_2540384.f_4447 == 0 || unk_0xCE990E643CD9D0E5(Global_2540384.f_4448, 0))
		{
			if (!func_508(&uLocal_303) || func_506(&uLocal_303, 2000, 0))
			{
				iVar0 = func_35(&Local_321);
				if (iVar0 > -1)
				{
					Global_2540384.f_4447 = func_34(iVar0);
					func_46(&uLocal_301);
					func_507(&uLocal_301, 0, 0);
					if (unk_0xCE990E643CD9D0E5(Global_2540384.f_4448, 0))
					{
						VEHICLE::IS_VEHICLE_DRIVEABLE(&(Global_2540384.f_4448), false);
					}
				}
				else
				{
					func_46(&uLocal_303);
					func_507(&uLocal_303, 0, 0);
				}
			}
		}
		else if (Global_2540384.f_4447 != 0)
		{
			if (func_506(&uLocal_301, 20000, 0))
			{
				if (!func_74(&Local_321, Global_2540384.f_4447))
				{
					Global_2540384.f_4447 = 0;
				}
				func_46(&uLocal_301);
				func_507(&uLocal_301, 0, 0);
			}
		}
	}
}

int func_74(var uParam0, void fParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_75(fParam1);
	if (!iVar0 == -1)
	{
		iVar1 = 0;
		while (iVar1 < 5)
		{
			if (!(*uParam0)[iVar1] == -1)
			{
				if (!uParam0->f_6[iVar1])
				{
					if ((*uParam0)[iVar1] == iVar0)
					{
						return 1;
					}
				}
			}
			iVar1++;
		}
	}
	return 0;
}

int func_75(void fParam0)
{
	switch (fParam0)
	{
		case joaat("zion"):
			return 0;
		
		case joaat("serrano"):
			return 1;
		
		case joaat("jackal"):
			return 2;
		
		case joaat("schafter2"):
			return 3;
		
		case joaat("dubsta"):
			return 4;
		
		case joaat("f620"):
			return 5;
		
		case joaat("schwarzer"):
			return 6;
		
		case joaat("rocoto"):
			return 7;
		
		case joaat("sentinel2"):
			return 8;
		
		case joaat("felon2"):
			return 9;
		
		case joaat("comet2"):
			return 10;
		
		case joaat("banshee"):
			return 11;
		
		case joaat("surano"):
			return 12;
		
		case joaat("coquette"):
			return 13;
		
		case joaat("carbonizzare"):
			return 14;
		
		case joaat("exemplar"):
			return 15;
		
		case joaat("feltzer2"):
			return 16;
		
		case joaat("bullet"):
			return 17;
		
		case joaat("superd"):
			return 18;
		
		case joaat("infernus"):
			return 19;
		
		default:
	}
	return -1;
}

void func_76()
{
	bool bVar0;
	
	if (((((bLocal_82 || bLocal_83) || bLocal_84) || bLocal_86) || bLocal_85) || bLocal_87)
	{
		if (((((Global_2540384.f_28.f_41 || func_139(PLAYER::PLAYER_ID(), 1, 0)) || func_138(PLAYER::PLAYER_ID())) || !func_136()) || func_124()) || func_118())
		{
			bLocal_82 = false;
			bLocal_84 = false;
			bLocal_83 = false;
			bLocal_86 = false;
			bLocal_85 = false;
			func_117();
		}
	}
	if ((func_116("FM_CTUT_RSP") || func_116("FM_CTUT_REP")) || func_116("FM_CTUT_LLS"))
	{
		if (!func_115() || func_118())
		{
			func_117();
		}
	}
	if (bLocal_87)
	{
		if (!func_116("FM_IHELP_LCP"))
		{
			if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
			{
				if (func_98())
				{
					if (AUDIO::SET_SCRIPT_UPDATE_DOOR_AUDIO(PLAYER::PLAYER_ID()) > 0)
					{
						if (func_97())
						{
							func_91("FM_IHELP_LCP", 0);
						}
					}
				}
			}
		}
	}
	else if (!unk_0xCE990E643CD9D0E5(iLocal_330, 18))
	{
		if (func_116("FM_IHELP_LCP"))
		{
			func_84("FM_IHELP_LCP");
		}
	}
	if (bLocal_82)
	{
		if (!func_116("FM_CTUT_MOD"))
		{
			if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
			{
				if (func_98())
				{
					if (unk_0xCE990E643CD9D0E5(iLocal_307, 2))
					{
						if (func_97())
						{
							func_91("FM_CTUT_MOD", 0);
						}
					}
				}
			}
		}
	}
	else if (!unk_0xCE990E643CD9D0E5(iLocal_330, 18))
	{
		if (func_116("FM_CTUT_MOD"))
		{
			func_84("FM_CTUT_MOD");
		}
	}
	if (bLocal_84)
	{
		if (!func_116("FM_CTUT_RSP"))
		{
			if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
			{
				if (GRAPHICS::DRAW_SCALEFORM_MOVIE())
				{
					if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(unk_0x9B0761B4C3EB8BC7()))
					{
						if (!func_139(PLAYER::PLAYER_ID(), 1, 0))
						{
							if (func_97())
							{
								if (func_115())
								{
									func_91("FM_CTUT_RSP", 0);
								}
							}
						}
					}
				}
			}
		}
	}
	else if (!unk_0xCE990E643CD9D0E5(iLocal_330, 18))
	{
		if (func_116("FM_CTUT_RSP"))
		{
			func_84("FM_CTUT_RSP");
		}
	}
	if (bLocal_85)
	{
		if (!func_116("FM_CTUT_RSP"))
		{
			if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
			{
				if (GRAPHICS::DRAW_SCALEFORM_MOVIE())
				{
					if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(unk_0x9B0761B4C3EB8BC7()))
					{
						if (!func_139(PLAYER::PLAYER_ID(), 1, 0))
						{
							if (func_97())
							{
								if (func_115())
								{
									func_91("FM_CTUT_REP", 0);
								}
							}
						}
					}
				}
			}
		}
	}
	else if (!unk_0xCE990E643CD9D0E5(iLocal_330, 18))
	{
		if (func_116("FM_CTUT_REP"))
		{
			func_84("FM_CTUT_REP");
		}
	}
	if (bLocal_86)
	{
		if (!func_116("FM_CTUT_LLS"))
		{
			if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
			{
				if (func_98() || func_77())
				{
					if (func_97())
					{
						if (func_115())
						{
						}
					}
				}
			}
		}
	}
	else if (!unk_0xCE990E643CD9D0E5(iLocal_330, 18))
	{
		if (func_116("FM_CTUT_LLS"))
		{
			func_84("FM_CTUT_LLS");
		}
	}
	if (bLocal_83)
	{
		if (!func_116("FM_IMP_SIM"))
		{
			if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
			{
				if (func_98() || func_77())
				{
					if (unk_0xCE990E643CD9D0E5(iLocal_307, 3))
					{
						if (!iLocal_89)
						{
							if (func_97())
							{
								func_91("FM_IMP_SIM", 0);
								if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(unk_0x9B0761B4C3EB8BC7()))
								{
									if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(unk_0x9B0761B4C3EB8BC7()))
									{
										bLocal_318 = ENTITY::GET_ENTITY_MODEL(unk_0x9B0761B4C3EB8BC7(), 0);
									}
								}
							}
						}
						else if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(unk_0x9B0761B4C3EB8BC7()))
						{
							if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(unk_0x9B0761B4C3EB8BC7()))
							{
								bVar0 = ENTITY::GET_ENTITY_MODEL(unk_0x9B0761B4C3EB8BC7(), 0);
								if (bVar0 != bLocal_318)
								{
									iLocal_89 = 0;
									func_46(&uLocal_305);
								}
							}
						}
					}
				}
			}
		}
		else if (!func_508(&uLocal_305))
		{
			func_507(&uLocal_305, 0, 0);
		}
		else if (func_506(&uLocal_305, 20000, 0))
		{
			func_117();
			iLocal_89 = 1;
		}
	}
	else if (!unk_0xCE990E643CD9D0E5(iLocal_330, 18))
	{
		if (func_116("FM_IMP_SIM"))
		{
			func_84("FM_IMP_SIM");
		}
	}
}

bool func_77()
{
	return (((((func_78(39) || func_78(40)) || func_78(41)) || func_78(42)) || func_78(43)) || func_78(44));
}

int func_78(int iParam0)
{
	return func_79(iParam0, 6, 1);
}

int func_79(int iParam0, int iParam1, bool bParam2)
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
		if (func_83() == 0)
		{
			return unk_0xCE990E643CD9D0E5(func_80(func_82(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0xCE990E643CD9D0E5(Global_111858.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_80(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 11771)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2551832[iParam0 /*3*/][func_81(iParam1)];
		if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_81(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_26();
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

int func_82(int iParam0)
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

int func_83()
{
	return Global_30968;
}

void func_84(bool bParam0)
{
	bool bVar0;
	
	if (CAM::IS_SCREEN_FADED_OUT(bParam0))
	{
		return;
	}
	bVar0 = false;
	if (func_90())
	{
		if (Global_1312603 == 11)
		{
			if (HUD::_GET_TEXT_SUBSTRING_SLICE(bParam0) > 63)
			{
				return;
			}
			bVar0 = AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT(bParam0) == AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT(&(Global_1312603.f_16));
		}
		else
		{
			if (HUD::_GET_TEXT_SUBSTRING_SLICE(bParam0) > 23)
			{
				return;
			}
			bVar0 = AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT(bParam0) == AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT(&(Global_1312603.f_12));
		}
	}
	if (!bVar0)
	{
		return;
	}
	func_85();
}

void func_85()
{
	func_87();
	func_86(0);
}

void func_86(bool bParam0)
{
	bool bVar0;
	
	bVar0 = MISC::SET_BIT();
	Global_1312603 = 20;
	StringCopy(&(Global_1312603.f_1), "", 32);
	Global_1312603.f_9 = 0;
	if (bVar0)
	{
		Global_1312603.f_10 = NETWORK::GET_NETWORK_TIME();
		Global_1312603.f_11 = NETWORK::GET_NETWORK_TIME();
	}
	StringCopy(&(Global_1312603.f_12), "", 16);
	StringCopy(&(Global_1312603.f_16), "", 64);
	StringCopy(&(Global_1312603.f_32), "", 64);
	Global_1312603.f_52 = 0;
	Global_1312603.f_53 = 0;
	Global_1312603.f_54 = 0;
	Global_1312603.f_55 = -1;
	Global_1312603.f_56 = 0;
	Global_1312603.f_59 = 0;
	if (bParam0)
	{
		return;
	}
}

void func_87()
{
	if (!func_89())
	{
	}
	if (func_90())
	{
		HUD::BEGIN_TEXT_COMMAND_CLEAR_PRINT(&(Global_1312603.f_12));
		func_88();
		HUD::END_TEXT_COMMAND_CLEAR_PRINT();
	}
}

void func_88()
{
	switch (Global_1312603)
	{
		case 20:
			return;
		
		case 0:
			return;
		
		case 1:
			unk_0x42710E9E08FA375A(Global_1312603.f_52);
			return;
		
		case 2:
			unk_0x42710E9E08FA375A(Global_1312603.f_52);
			unk_0x42710E9E08FA375A(Global_1312603.f_53);
			return;
		
		case 3:
			HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(&(Global_1312603.f_16));
			return;
		
		case 4:
			HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(&(Global_1312603.f_16));
			HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(&(Global_1312603.f_32));
			return;
		
		case 5:
			unk_0x9EFD301E3BE8324E(&(Global_1312603.f_16));
			return;
		
		case 6:
			unk_0x7006FC1051C85FCA(Global_1312603.f_56);
			unk_0x9EFD301E3BE8324E(&(Global_1312603.f_16));
			return;
		
		case 7:
			HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(&(Global_1312603.f_16));
			return;
		
		case 8:
			unk_0x7006FC1051C85FCA(Global_1312603.f_56);
			HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(&(Global_1312603.f_16));
			return;
		
		case 9:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_KEYBOARD_DISPLAY(&(Global_1312603.f_16));
			return;
		
		case 10:
			unk_0x9EFD301E3BE8324E(&(Global_1312603.f_16));
			unk_0x9EFD301E3BE8324E(&(Global_1312603.f_32));
			return;
		
		case 12:
			unk_0x9EFD301E3BE8324E(&(Global_1312603.f_16));
			HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(&(Global_1312603.f_32));
			return;
		
		case 13:
			unk_0x7006FC1051C85FCA(Global_1312603.f_56);
			HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(&(Global_1312603.f_16));
			unk_0x7006FC1051C85FCA(Global_1312603.f_57);
			HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(&(Global_1312603.f_32));
			return;
		
		case 11:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_KEYBOARD_DISPLAY(&(Global_1312603.f_16));
			return;
		
		case 14:
			unk_0x7006FC1051C85FCA(Global_1312603.f_56);
			unk_0x9EFD301E3BE8324E(&(Global_1312603.f_16));
			unk_0x7006FC1051C85FCA(Global_1312603.f_56);
			HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(&(Global_1312603.f_32));
			return;
		
		case 15:
			unk_0x7006FC1051C85FCA(Global_1312603.f_56);
			unk_0x9EFD301E3BE8324E(&(Global_1312603.f_16));
			unk_0x7006FC1051C85FCA(Global_1312603.f_57);
			HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(&(Global_1312603.f_32));
			return;
		
		case 17:
			unk_0x9EFD301E3BE8324E(&(Global_1312603.f_16));
			unk_0x9EFD301E3BE8324E(&(Global_1312603.f_32));
			unk_0x7006FC1051C85FCA(Global_1312603.f_56);
			HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(&(Global_1312603.f_48));
			return;
		
		case 16:
			unk_0x7006FC1051C85FCA(Global_1312603.f_56);
			unk_0x9EFD301E3BE8324E(&(Global_1312603.f_16));
			return;
		
		case 19:
			unk_0x7006FC1051C85FCA(Global_1312603.f_56);
			HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(&(Global_1312603.f_16));
			return;
		
		case 18:
			unk_0x9EFD301E3BE8324E(&(Global_1312603.f_16));
			unk_0x7006FC1051C85FCA(Global_1312603.f_56);
			HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(&(Global_1312603.f_48));
			unk_0x9EFD301E3BE8324E(&(Global_1312603.f_32));
			return;
		
		default:
	}
}

bool func_89()
{
	if (!func_90())
	{
		return 0;
	}
	HUD::BEGIN_TEXT_COMMAND_IS_MESSAGE_DISPLAYED(&(Global_1312603.f_12));
	func_88();
	return HUD::END_TEXT_COMMAND_IS_MESSAGE_DISPLAYED();
}

int func_90()
{
	if (Global_1312603 == 20)
	{
		return 0;
	}
	return 1;
}

void func_91(bool bParam0, bool bParam1)
{
	if (CAM::IS_SCREEN_FADED_OUT(sParam0))
	{
		return;
	}
	if (HUD::_GET_TEXT_SUBSTRING_SLICE(bParam0) > 23)
	{
		return;
	}
	if (func_95(bParam0))
	{
		return;
	}
	func_85();
	Global_1312603 = 0;
	StringCopy(&(Global_1312603.f_1), TASK::IS_PED_BEING_ARRESTED(), 32);
	Global_1312603.f_9 = AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT(&(Global_1312603.f_1));
	StringCopy(&(Global_1312603.f_12), bParam0, 16);
	func_94();
	func_93(bParam1);
	func_92();
}

void func_92()
{
	unk_0xBE20AB8238688965(&(Global_1312603.f_59), true);
}

void func_93(bool bParam0)
{
	if (bParam0)
	{
		unk_0xBE20AB8238688965(&(Global_1312603.f_59), false);
		return;
	}
	VEHICLE::IS_VEHICLE_DRIVEABLE(&(Global_1312603.f_59), false);
}

void func_94()
{
	Global_1312603.f_10 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), 86400000);
	Global_1312603.f_11 = NETWORK::GET_NETWORK_TIME();
}

bool func_95(bool bParam0)
{
	if (!func_90())
	{
		return 0;
	}
	if (Global_1312603 == 11)
	{
		return func_96(bParam0);
	}
	if (CAM::IS_SCREEN_FADED_OUT(bParam0))
	{
		return 0;
	}
	return AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT(bParam0) == AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT(&(Global_1312603.f_12));
}

bool func_96(bool bParam0)
{
	if (!func_90())
	{
		return 0;
	}
	if (CAM::IS_SCREEN_FADED_OUT(bParam0))
	{
		return 0;
	}
	return AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT(bParam0) == AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT(&(Global_1312603.f_16));
}

bool func_97()
{
	bool bVar0;
	
	if (NETWORK::NETWORK_IS_HANDLE_VALID(Local_322.f_22))
	{
		if (func_4(Local_322.f_22))
		{
			if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(unk_0x9B0761B4C3EB8BC7()))
			{
				if (PED::IS_PED_SITTING_IN_VEHICLE(unk_0x9B0761B4C3EB8BC7(), unk_0x770D3B2B4702434A(Local_322.f_22)))
				{
				}
			}
		}
	}
	if (!unk_0xCE990E643CD9D0E5(iLocal_331, 0))
	{
		if (!unk_0xCE990E643CD9D0E5(iLocal_331, 1))
		{
			bVar0 = true;
		}
		else if (!unk_0xCE990E643CD9D0E5(iLocal_331, 2))
		{
			bVar0 = true;
		}
		else if (!unk_0xCE990E643CD9D0E5(iLocal_331, 3))
		{
			bVar0 = true;
		}
		if (!bVar0)
		{
			unk_0xBE20AB8238688965(&iLocal_331, false);
		}
	}
	return bVar0;
}

int func_98()
{
	if ((((((((((((((((((!func_14(PLAYER::PLAYER_ID(), 1, 1) || STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(unk_0x9B0761B4C3EB8BC7())) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || func_114(8, -1)) || func_114(15, -1)) || func_113()) || func_114(3, -1)) || func_139(PLAYER::PLAYER_ID(), 1, 0)) || func_112()) || func_115()) || func_111()) || func_110()) || func_108()) || func_107()) || HUD::IS_MESSAGE_BEING_DISPLAYED()) || func_106() > 0) || !func_136()) || func_99()) || func_118())
	{
		return 0;
	}
	return 1;
}

int func_99()
{
	if (func_71(PLAYER::PLAYER_ID(), 8))
	{
		return 1;
	}
	if (func_71(PLAYER::PLAYER_ID(), 10))
	{
		return 1;
	}
	if (func_71(PLAYER::PLAYER_ID(), 12))
	{
		return 1;
	}
	if (func_71(PLAYER::PLAYER_ID(), 14))
	{
		return 1;
	}
	if (func_71(PLAYER::PLAYER_ID(), 13))
	{
		return 1;
	}
	if (func_105())
	{
		return 1;
	}
	if (func_104())
	{
		return 1;
	}
	if (!func_103() && !func_102())
	{
		if (!func_101())
		{
			if (!func_100())
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_100()
{
	int iVar0;
	
	if (unk_0xCE990E643CD9D0E5(Global_2540384.f_1791, 7))
	{
		return 1;
	}
	iVar0 = Global_1388185[func_81(-1)];
	if (unk_0xCE990E643CD9D0E5(iVar0, 6))
	{
		unk_0xBE20AB8238688965(&(Global_2540384.f_1791), 7);
		return 1;
	}
	if (func_103())
	{
		return 1;
	}
	if (func_102())
	{
		return 1;
	}
	return 0;
}

bool func_101()
{
	return unk_0xCE990E643CD9D0E5(Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_142, 2);
}

bool func_102()
{
	return Global_1312884;
}

bool func_103()
{
	return Global_1312886;
}

int func_104()
{
	if (unk_0xCE990E643CD9D0E5(Global_2540384.f_1791, 28) && !unk_0xCE990E643CD9D0E5(Global_2540384.f_1791, 29))
	{
		return 1;
	}
	return 0;
}

bool func_105()
{
	return unk_0xCE990E643CD9D0E5(Global_2540384.f_1792, 3);
}

int func_106()
{
	return Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_197;
}

int func_107()
{
	if (Global_21005 != 0 || ENTITY::IS_ENTITY_DEAD())
	{
		return 1;
	}
	return 0;
}

bool func_108()
{
	return func_109();
}

bool func_109()
{
	return Global_1370593.f_40 == 3;
}

bool func_110()
{
	return Global_2440049.f_3158.f_578;
}

bool func_111()
{
	return Global_99007.f_352 > 0;
}

bool func_112()
{
	return unk_0xCE990E643CD9D0E5(Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_39.f_18, 0);
}

var func_113()
{
	return Global_2394809;
}

bool func_114(int iParam0, int iParam1)
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

bool func_115()
{
	return MISC::GET_GAME_TIMER() <= Global_22550.f_5878 + 100;
}

int func_116(bool bParam0)
{
	if (CAM::IS_SCREEN_FADED_OUT(bParam0))
	{
		return 0;
	}
	if (!func_90())
	{
		return 0;
	}
	if (Global_1312603 == 11)
	{
		if (HUD::_GET_TEXT_SUBSTRING_SLICE(bParam0) > 63)
		{
			return 0;
		}
	}
	else if (HUD::_GET_TEXT_SUBSTRING_SLICE(bParam0) > 23)
	{
		return 0;
	}
	return func_95(bParam0);
}

void func_117()
{
	if (!func_90())
	{
		return;
	}
	if (!AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT(TASK::IS_PED_BEING_ARRESTED()) == Global_1312603.f_9)
	{
		return;
	}
	func_85();
}

int func_118()
{
	if (func_123(17))
	{
		return 1;
	}
	if (func_123(0))
	{
		return 1;
	}
	if (func_122(PLAYER::PLAYER_ID(), 1))
	{
		return 1;
	}
	if (func_119(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	return 0;
}

int func_119(int iParam0)
{
	if (iParam0 != func_121())
	{
		if (func_14(iParam0, 1, 1))
		{
			if (Global_2425869[iParam0 /*443*/].f_314.f_6 != -1)
			{
				return func_120(Global_2425869[iParam0 /*443*/].f_314.f_6) == 14;
			}
		}
	}
	return 0;
}

int func_120(int iParam0)
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

int func_121()
{
	return -1;
}

int func_122(int iParam0, int iParam1)
{
	if (Global_1630317[iParam0 /*595*/].f_11.f_33 != -1 || (iParam1 && Global_1630317[iParam0 /*595*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

bool func_123(int iParam0)
{
	int iVar0;
	
	iVar0 = func_80(2481, -1, 0);
	return unk_0xCE990E643CD9D0E5(iVar0, iParam0);
}

int func_124()
{
	if (func_128())
	{
		return 1;
	}
	if (func_125(PLAYER::PLAYER_ID(), 1))
	{
		return 1;
	}
	if (func_122(PLAYER::PLAYER_ID(), 1))
	{
		return 1;
	}
	return 0;
}

int func_125(int iParam0, int iParam1)
{
	if (Global_1630317[iParam0 /*595*/].f_11.f_33 != -1 && func_126(Global_1630317[iParam0 /*595*/].f_11.f_33))
	{
		return 1;
	}
	if (iParam1 && Global_1630317[iParam0 /*595*/].f_11.f_32 != -1)
	{
		if (func_126(Global_1630317[iParam0 /*595*/].f_11.f_32))
		{
			return 1;
		}
	}
	return 0;
}

int func_126(int iParam0)
{
	switch (iParam0)
	{
		case 155:
		case 160:
		case 153:
		case 162:
		case 154:
		case 163:
		case 171:
		case 172:
		case 240:
		case 239:
			return 1;
		
		default:
	}
	return func_127(iParam0, 0);
	return 0;
}

int func_127(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 199:
		case 205:
		case 210:
		case 211:
			return 1;
		
		default:
	}
	if (iParam1 == 0)
	{
		switch (iParam0)
		{
			case 194:
			case 193:
			case 189:
			case 153:
				return 1;
			}
		
		default:
	}
	return 0;
}

int func_128()
{
	if (!func_135(PLAYER::PLAYER_ID()))
	{
		if (func_131(PLAYER::PLAYER_ID()) || func_130(PLAYER::PLAYER_ID()) != -1)
		{
			return 1;
		}
		if (func_129(PLAYER::PLAYER_ID()) && Global_1574656.f_4 == 133)
		{
			return 1;
		}
	}
	return 0;
}

bool func_129(int iParam0)
{
	return unk_0xCE990E643CD9D0E5(Global_1630317[iParam0 /*595*/].f_1, 4);
}

int func_130(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1630317[iVar0 /*595*/];
	}
	return -1;
}

int func_131(int iParam0)
{
	if (func_134(iParam0))
	{
		return 1;
	}
	if (func_132(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_132(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_133(iParam0, 9);
	}
	return 0;
}

bool func_133(int iParam0, int iParam1)
{
	return unk_0xCE990E643CD9D0E5(Global_1630317[iParam0 /*595*/].f_11.f_4, iParam1);
}

int func_134(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		return unk_0xCE990E643CD9D0E5(Global_1630317[iVar0 /*595*/].f_1, 0);
	}
	return 0;
}

bool func_135(int iParam0)
{
	return unk_0xCE990E643CD9D0E5(Global_1630317[iParam0 /*595*/].f_1, 2);
}

int func_136()
{
	if (func_137() == 0)
	{
		return 1;
	}
	return 0;
}

int func_137()
{
	return Global_1312485.f_18;
}

int func_138(int iParam0)
{
	if (!func_14(iParam0, 0, 1))
	{
		return 0;
	}
	return Global_1590682[iParam0 /*883*/].f_35;
}

int func_139(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_140(iParam0))
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

bool func_140(int iParam0)
{
	return func_141(iParam0);
}

bool func_141(int iParam0)
{
	return unk_0xCE990E643CD9D0E5(Global_1590682[iParam0 /*883*/].f_13.f_1, 0);
}

void func_142()
{
	if (bLocal_80)
	{
		if (!SYSTEM::VMAG(Global_1663732))
		{
			Global_1663732 = HUD::ADD_BLIP_FOR_COORD(Global_1663733);
			HUD::SET_BLIP_SPRITE(Global_1663732, 293);
			HUD::SET_BLIP_SCALE(Global_1663732, 1f);
			HUD::SET_BLIP_AS_SHORT_RANGE(Global_1663732, false);
			PED::IS_PED_IN_PARACHUTE_FREE_FALL(Global_1663732, "IMPEX_BLIP_FM");
			if (func_171())
			{
				HUD::SET_BLIP_FLASHES(Global_1663732, true);
			}
		}
	}
	else if (SYSTEM::VMAG(Global_1663732))
	{
		unk_0x93370FA10F15BE44(&Global_1663732);
		if (bLocal_279)
		{
			if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(unk_0x9B0761B4C3EB8BC7()))
			{
				if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(unk_0x9B0761B4C3EB8BC7()))
				{
					if (!func_166(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 1215605247, &uLocal_310, 0, 500, 1, 0))
					{
						if (func_118())
						{
							func_165("IMPEX_HIPR_DAM", -1);
						}
					}
				}
			}
		}
	}
	if (bLocal_81)
	{
		if (iLocal_102 == -1)
		{
			iLocal_102 = func_149(NETWORK::NETWORK_ARE_HANDLES_THE_SAME(unk_0x9B0761B4C3EB8BC7(), 1), 4, -1);
			if (iLocal_102 != -1)
			{
				func_143(iLocal_102, 1);
			}
		}
	}
	else if (iLocal_102 != -1)
	{
		func_143(iLocal_102, 0);
		iLocal_102 = -1;
	}
}

void func_143(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 39:
			func_144(39, bParam1);
			break;
		
		case 40:
			func_144(40, bParam1);
			break;
		
		case 41:
			func_144(41, bParam1);
			break;
		
		case 42:
			func_144(42, bParam1);
			break;
		
		case 43:
			func_144(43, bParam1);
			break;
		
		case 44:
			func_144(44, bParam1);
			break;
		
		default:
			break;
	}
}

void func_144(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_79(iParam0, 8, 0))
		{
			func_148(iParam0, 8, 0);
			func_147(iParam0);
		}
	}
	else if (func_79(iParam0, 8, 0))
	{
		func_145(iParam0, 8, 0);
		func_147(iParam0);
	}
}

void func_145(int iParam0, bool bParam1, bool bParam2)
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
		if (func_83() == 0)
		{
			uVar0 = func_80(func_82(iParam0), -1, 0);
			VEHICLE::IS_VEHICLE_DRIVEABLE(&uVar0, bParam1);
			func_146(func_82(iParam0), uVar0, -1, 1, 0);
		}
	}
	else
	{
		VEHICLE::IS_VEHICLE_DRIVEABLE(&(Global_111858.f_668[iParam0]), bParam1);
	}
}

void func_146(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2551832[iParam0 /*3*/][func_81(iParam2)];
	if (iVar0 != 0)
	{
		NETWORK::NETWORK_HAS_SOCIAL_CLUB_ACCOUNT(iVar0, iParam1, iParam3);
	}
}

void func_147(int iParam0)
{
	Global_99007.f_184[iParam0] = 1;
	Global_99007.f_183 = 1;
}

void func_148(int iParam0, bool bParam1, bool bParam2)
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
		if (func_83() == 0)
		{
			uVar0 = func_80(func_82(iParam0), -1, 0);
			unk_0xBE20AB8238688965(&uVar0, bParam1);
			func_146(func_82(iParam0), uVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0xBE20AB8238688965(&(Global_111858.f_668[iParam0]), bParam1);
	}
}

int func_149(struct<3> Param0, int iParam1, int iParam2)
{
	int iVar0;
	void fVar1;
	void fVar2;
	int iVar3;
	int iVar4;
	
	fVar2 = 1000000f;
	iVar3 = -1;
	iVar0 = 0;
	while (iVar0 <= 53)
	{
		if (iParam1 == 6 || iParam1 == func_164(iVar0))
		{
			iVar4 = iVar0;
			if (func_163(iVar4))
			{
				fVar1 = HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Param0, func_150(iVar0, 0), 1);
				if (fVar1 < fVar2 && (fVar1 <= IntToFloat(iParam2) || iParam2 == -1))
				{
					fVar2 = fVar1;
					iVar3 = iVar0;
				}
			}
		}
		iVar0++;
	}
	return iVar3;
}

Vector3 func_150(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case -1:
			return 0f, 0f, 0f;
			break;
		
		case 0:
			return -821.9946f, -187.1776f, 36.5689f;
			break;
		
		case 1:
			return 133.5702f, -1710.918f, 28.2916f;
			break;
		
		case 2:
			return -1287.082f, -1116.558f, 5.9901f;
			break;
		
		case 3:
			return 1933.119f, 3726.079f, 31.8444f;
			break;
		
		case 4:
			return 1208.333f, -470.917f, 65.208f;
			break;
		
		case 5:
			return -30.7448f, -148.4921f, 56.0765f;
			break;
		
		case 6:
			return -280.8165f, 6231.771f, 30.6955f;
			break;
		
		case 7:
			return 80.665f, -1391.669f, 28.3761f;
			break;
		
		case 8:
			return 1687.881f, 4820.55f, 41.0096f;
			break;
		
		case 9:
			return 419.531f, -807.5787f, 28.4896f;
			break;
		
		case 10:
			return -1094.049f, 2704.171f, 18.0873f;
			break;
		
		case 11:
			return 1197.972f, 2704.22f, 37.1572f;
			break;
		
		case 12:
			return -818.6218f, -1077.533f, 10.3282f;
			break;
		
		case 13:
			return -0.2361f, 6516.045f, 30.8684f;
			break;
		
		case 14:
			return -1199.809f, -776.6886f, 16.3237f;
			break;
		
		case 15:
			return 618.1857f, 2752.567f, 41.0881f;
			break;
		
		case 16:
			return 126.6853f, -212.5027f, 53.5578f;
			break;
		
		case 17:
			return -3168.966f, 1055.287f, 19.8632f;
			break;
		
		case 18:
			return -715.3598f, -155.7742f, 36.4105f;
			break;
		
		case 19:
			return -158.2199f, -304.9663f, 38.735f;
			break;
		
		case 20:
			return -1455.005f, -233.1862f, 48.7936f;
			break;
		
		case 21:
			return -1335.973f, -1278.555f, 3.8598f;
			break;
		
		case 22:
			return 321.6098f, 179.4165f, 102.5865f;
			break;
		
		case 23:
			return 1861.685f, 3750.08f, 32.0318f;
			break;
		
		case 24:
			return -290.1603f, 6199.095f, 30.4871f;
			break;
		
		case 25:
			return -1153.948f, -1425.019f, 3.9544f;
			break;
		
		case 26:
			return 1322.455f, -1651.125f, 51.1885f;
			break;
		
		case 27:
			return -3169.42f, 1074.727f, 19.8343f;
			break;
		
		case 28:
			return 17.6804f, -1114.288f, 28.797f;
			break;
		
		case 29:
			return 1697.979f, 3753.2f, 33.7053f;
			break;
		
		case 30:
			return 245.2711f, -45.8126f, 68.941f;
			break;
		
		case 31:
			return 844.1248f, -1025.571f, 27.1948f;
			break;
		
		case 32:
			return -325.8904f, 6077.026f, 30.4548f;
			break;
		
		case 33:
			return -664.2178f, -943.3646f, 20.8292f;
			break;
		
		case 34:
			return -1313.948f, -390.9637f, 35.592f;
			break;
		
		case 35:
			return -1111.238f, 2688.463f, 17.6131f;
			break;
		
		case 36:
			return -3165.231f, 1082.855f, 19.8438f;
			break;
		
		case 37:
			return 2569.612f, 302.576f, 107.7349f;
			break;
		
		case 38:
			return 811.8699f, -2149.102f, 28.6363f;
			break;
		
		case 39:
			return -1147.314f, -1992.434f, 12.1803f;
			break;
		
		case 40:
			return 724.524f, -1089.081f, 21.1692f;
			break;
		
		case 41:
			return -354.5272f, -135.4011f, 38.185f;
			break;
		
		case 42:
			return 113.2615f, 6624.28f, 30.7871f;
			break;
		
		case 43:
			return 1174.707f, 2644.45f, 36.7552f;
			break;
		
		case 44:
			if (bParam1)
			{
				return -211.5f, -1324.2f, 30.296f;
			}
			else
			{
				return -205.6654f, -1311.113f, 30.296f;
			}
			break;
		
		case 45:
			return func_160(Global_101058);
			break;
		
		case 46:
			if (Global_1590519 != func_121())
			{
				if (func_159(Global_1590519))
				{
					return func_152(2, 2);
				}
				else if (func_151(Global_1590519))
				{
					return func_152(45, 3);
				}
				else
				{
					return 1000000f, 1000000f, 1000000f;
				}
			}
			else
			{
				return 1000000f, 1000000f, 1000000f;
			}
			break;
		
		case 47:
			return 510.1f, 4749.5f, -69f;
			break;
		
		case 48:
			return -1422.197f, -3015.803f, -79.1603f;
			break;
		
		case 49:
			return 203.0799f, 5200.189f, -89.6f;
			break;
		
		case 52:
			return 2714.547f, -354.2701f, -55.1867f;
			break;
		
		case 50:
			return Global_1696916;
			break;
		
		case 51:
			return 1100f, 220f, -50f;
			break;
		
		case 53:
			return 1560f, 400f, -50f;
			break;
	}
	return 1000000f, 1000000f, 1000000f;
}

int func_151(int iParam0)
{
	if (iParam0 != func_121())
	{
		if ((unk_0xCE990E643CD9D0E5(Global_1590682[iParam0 /*883*/].f_274.f_259, 0) || unk_0xCE990E643CD9D0E5(Global_1590682[iParam0 /*883*/].f_274.f_259, 1)) || unk_0xCE990E643CD9D0E5(Global_1590682[iParam0 /*883*/].f_274.f_259, 2))
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_152(int iParam0, int iParam1)
{
	struct<3> Var0;
	struct<3> Var1;
	
	Var1 = { 1000000f, 1000000f, 1000000f };
	if (Global_1590519 != func_121())
	{
		if (iParam1 == 3)
		{
			if (func_153(iParam0, 1, &Var0, 0, 0))
			{
				Var1 = { Var0 };
			}
		}
		else if (iParam1 == 2)
		{
			if (unk_0xCE990E643CD9D0E5(Global_1590682[Global_1590519 /*883*/].f_274.f_259, 4))
			{
				if (func_153(iParam0, 1, &Var0, 0, 0))
				{
					Var1 = { Var0 };
				}
			}
			else if (unk_0xCE990E643CD9D0E5(Global_1590682[Global_1590519 /*883*/].f_274.f_259, 5))
			{
				if (func_153(iParam0, 2, &Var0, 0, 0))
				{
					Var1 = { Var0 };
				}
			}
		}
	}
	return Var1;
}

int func_153(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4)
{
	struct<4> Var0;
	struct<3> Var1;
	struct<4> Var2;
	struct<3> Var3;
	
	if (!func_158(iParam3, &Var0))
	{
		return 0;
	}
	if (!func_158(iParam1, &Var1))
	{
		return 0;
	}
	if (!bParam4)
	{
		Var2 = { func_156(iParam0) };
	}
	else
	{
		Var2 = { func_155(iParam0) };
	}
	Var3 = { Var2 - Var0 };
	Var3 = { func_154(Var3, -Var0.f_3.f_2) };
	Var3 = { func_154(Var3, Var1.f_3.f_2) };
	*uParam2 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Var1, 0f, Var3) };
	uParam2->f_3 = { Var2.f_3 };
	return 1;
}

Vector3 func_154(struct<3> Param0, float fParam1)
{
	struct<3> Var0;
	float fVar1;
	float fVar2;
	
	fVar1 = SYSTEM::SIN(fParam1);
	fVar2 = SYSTEM::COS(fParam1);
	Var0.x = ((Param0.x * fVar2) - (Param0.f_1 * fVar1));
	Var0.f_1 = ((Param0.x * fVar1) + (Param0.f_1 * fVar2));
	Var0.f_2 = Param0.f_2;
	return Var0;
}

struct<6> func_155(int iParam0)
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case 0:
			Var0 = { 1102.1f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 115.92f };
			break;
		
		case 1:
			Var0 = { 1105.05f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -103.32f };
			break;
		
		case 2:
			Var0 = { 1105.05f, -3008.75f, -39.35f };
			Var0.f_3 = { 0f, 0f, -77.76f };
			break;
		
		case 3:
			Var0 = { 1102.1f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, 102.96f };
			break;
		
		case 4:
			Var0 = { 1105.05f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, -101.88f };
			break;
		
		case 5:
			Var0 = { 1105.05f, -3000.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -81.36f };
			break;
		
		case 6:
			Var0 = { 1102.1f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 103.32f };
			break;
		
		case 7:
			Var0 = { 1105.05f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -109.8f };
			break;
		
		case 8:
			Var0 = { 1105.05f, -2992.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -84.96f };
			break;
	}
	return Var0;
}

struct<6> func_156(int iParam0)
{
	return func_157(iParam0);
}

struct<6> func_157(int iParam0)
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case 0:
			Var0 = { 1105.22f, -3013.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 1:
			Var0 = { 1104.105f, -3013.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 19:
			Var0 = { 1105.22f, -3005.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 20:
			Var0 = { 1104.105f, -3005.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 2:
			Var0 = { 1102f, -3011.925f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 3:
			Var0 = { 1103f, -3010f, -38.125f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 4:
			Var0 = { 1103.213f, -3013.483f, -39.03f };
			Var0.f_3 = { 0f, 0f, 31.32f };
			break;
		
		case 5:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1101.408f, -3012.32f, -38.45339f };
			break;
		
		case 6:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1103.037f, -3012.318f, -39.99874f };
			break;
		
		case 7:
			Var0 = { 1105.645f, -3012.04f, -39.542f };
			Var0.f_3 = { 0f, 0f, -86.04f };
			break;
		
		case 8:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1104.063f, -3012.368f, -39.99875f };
			break;
		
		case 9:
			Var0 = { 1105.665f, -3012.334f, -38.50835f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 10:
			Var0 = { 1102.504f, -3012.35f, -39.341f };
			Var0.f_3 = { 0f, 0f, -96.48f };
			break;
		
		case 11:
			Var0 = { 1102.928f, -3012.693f, -39.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 12:
			Var0 = { 1102.942f, -3011.315f, -37.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 61:
			Var0 = { 1101.994f, -3012.878f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 62:
			Var0 = { 1103.152f, -3013.032f, -38.24946f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 13:
			Var0 = { 1102.465f, -3009.515f, -39.341f };
			Var0.f_3 = { 0f, 0f, -12.96f };
			break;
		
		case 14:
			Var0 = { 1102.917f, -3009.525f, -39.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 15:
			Var0 = { 1102.922f, -3010.887f, -37.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 63:
			Var0 = { 1101.682f, -3009.227f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 64:
			Var0 = { 1102.453f, -3008.51f, -38.2f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 16:
			Var0 = { 1104.684f, -3009.561f, -39.341f };
			Var0.f_3 = { 0f, 0f, 169.56f };
			break;
		
		case 17:
			Var0 = { 1104.34f, -3008.698f, -39.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 18:
			Var0 = { 1104.344f, -3009.618f, -37.98172f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 65:
			Var0 = { 1105.459f, -3009.793f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 66:
			Var0 = { 1104.783f, -3010.433f, -38.2f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 44:
			Var0 = { 1104.025f, -3007.316f, -39.9987f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 21:
			Var0 = { 1103.562f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 22:
			Var0 = { 1103.562f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 23:
			Var0 = { 1102.1f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 115.92f };
			break;
		
		case 24:
			Var0 = { 1105.05f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -103.32f };
			break;
		
		case 25:
			Var0 = { 1105.05f, -3008.75f, -39.35f };
			Var0.f_3 = { 0f, 0f, -77.76f };
			break;
		
		case 26:
			Var0 = { 1102.05f, -3011.717f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 27:
			Var0 = { 1102.05f, -3012.653f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 28:
			Var0 = { 1105.05f, -3012.653f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 29:
			Var0 = { 1105.05f, -3011.717f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 30:
			Var0 = { 1102.1f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, 102.96f };
			break;
		
		case 31:
			Var0 = { 1105.05f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, -101.88f };
			break;
		
		case 32:
			Var0 = { 1105.05f, -3000.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -81.36f };
			break;
		
		case 33:
			Var0 = { 1102.05f, -3003.592f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 34:
			Var0 = { 1102.05f, -3004.541f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 35:
			Var0 = { 1105.05f, -3004.541f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 36:
			Var0 = { 1105.05f, -3003.592f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 37:
			Var0 = { 1102.1f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 103.32f };
			break;
		
		case 38:
			Var0 = { 1105.05f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -109.8f };
			break;
		
		case 39:
			Var0 = { 1105.05f, -2992.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -84.96f };
			break;
		
		case 40:
			Var0 = { 1102.05f, -2995.582f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 41:
			Var0 = { 1102.05f, -2996.501f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 42:
			Var0 = { 1105.05f, -2996.501f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 43:
			Var0 = { 1105.05f, -2995.582f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 45:
			Var0 = { 1101f, -3011.9f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 46:
			Var0 = { 1102f, -3010f, -38.115f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 47:
			Var0 = { 1105.174f, -3004.16f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 48:
			Var0 = { 1105.175f, -3005.818f, -37.91948f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 49:
			Var0 = { 1106.6f, -3000.847f, -39.89988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 50:
			Var0 = { 1106.601f, -3002.171f, -37.89988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 51:
			Var0 = { 1101.95f, -3011.9f, -39.2f };
			Var0.f_3 = { 0f, 0f, 49.5f };
			break;
		
		case 52:
			Var0 = { 1101.95f, -3010f, -39.2f };
			Var0.f_3 = { 0f, 0f, 130.32f };
			break;
		
		case 53:
			Var0 = { 1105.16f, -3009.06f, -39.2f };
			Var0.f_3 = { 0f, 0f, -44.64f };
			break;
		
		case 54:
			Var0 = { 1102.476f, -3008.508f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 55:
			Var0 = { 1099f, -3008.508f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 56:
			Var0 = { 1103.593f, -3008.27f, -39.9987f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 57:
			Var0 = { 1103.565f, -3014f, -39.988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 58:
			Var0 = { 1103.565f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 59:
			Var0 = { 1103.565f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 60:
			Var0 = { 1103.55f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 67:
			Var0 = { 1103.55f, -3013.762f, -40f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 68:
			Var0 = { 1103.55f, -3006.186f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 71:
		case 69:
		case 70:
		case 73:
		case 72:
		case 74:
			Var0 = { 1103.6f, -3013.933f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
	}
	return Var0;
}

int func_158(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 1103.562f, -3014f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return 1;
		
		case 1:
			*uParam1 = { 1103.562f, -3006f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return 1;
		
		case 2:
			*uParam1 = { 1103.562f, -2998f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return 1;
		
		default:
	}
	return 0;
}

int func_159(int iParam0)
{
	if (iParam0 != func_121())
	{
		if ((unk_0xCE990E643CD9D0E5(Global_1590682[iParam0 /*883*/].f_274.f_259, 3) || unk_0xCE990E643CD9D0E5(Global_1590682[iParam0 /*883*/].f_274.f_259, 4)) || unk_0xCE990E643CD9D0E5(Global_1590682[iParam0 /*883*/].f_274.f_259, 5))
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_160(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1060f, -2990f, -35f;
			break;
		
		case 2:
			return 1060f, -2990f, -35f;
			break;
		
		case 3:
			return 974.9542f, -3000.091f, -35f;
			break;
		
		case 6:
			return -1586.36f, -566.6f, 106.17f;
			break;
		
		case 7:
			return -1389.87f, -465.17f, 82.68f;
			break;
		
		case 8:
			return -145.81f, -590.2f, 171.13f;
			break;
		
		case 9:
			return -62.49f, -823.55f, 288.74f;
			break;
		
		case 4:
			return 1102.515f, -3158.888f, -38.5186f;
			break;
		
		case 5:
			return 1005.861f, -3156.162f, -39.907f;
			break;
		
		case 10:
			return 1103.562f, -3000f, -40f;
			break;
		
		case 11:
			return 938.3077f, -3196.112f, -100f;
			break;
		
		case 12:
			return -1266.802f, -3014.836f, -49.4895f;
			break;
		
		case 13:
			return 520.0001f, 4750f, -70f;
			break;
		
		case 14:
			return 345.0041f, 4842.001f, -59.9997f;
			break;
		
		case 15:
			return -1604.664f, -3012.583f, -79.9999f;
			break;
		
		case 16:
			return -1421.015f, -3012.587f, -80f;
			break;
		
		case 17:
			if (func_161() == 0)
			{
				return 205f, 5180f, -90f;
			}
			else
			{
				return 170f, 5190f, 10f;
			}
			break;
		
		default:
			return 0f, 0f, -200f;
			break;
	}
	return 0f, 0f, -200f;
}

int func_161()
{
	return func_162(PLAYER::PLAYER_ID());
}

int func_162(int iParam0)
{
	return MISC::GET_BITS_IN_RANGE(Global_2425869[iParam0 /*443*/].f_314.f_3, 28, 31);
}

bool func_163(int iParam0)
{
	bool bVar0;
	
	switch (iParam0)
	{
		case 39:
			bVar0 = SYSTEM::VMAG(Global_99007.f_239[39]);
			break;
		
		case 40:
			bVar0 = SYSTEM::VMAG(Global_99007.f_239[40]);
			break;
		
		case 41:
			bVar0 = SYSTEM::VMAG(Global_99007.f_239[41]);
			break;
		
		case 42:
			bVar0 = SYSTEM::VMAG(Global_99007.f_239[42]);
			break;
		
		case 43:
			bVar0 = SYSTEM::VMAG(Global_99007.f_239[43]);
			break;
		
		case 44:
			bVar0 = SYSTEM::VMAG(Global_99007.f_239[44]);
			break;
	}
	return bVar0;
}

int func_164(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return 6;
			break;
		
		case 0:
			return 0;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 0;
			break;
		
		case 3:
			return 0;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 0;
			break;
		
		case 6:
			return 0;
			break;
		
		case 50:
			return 0;
			break;
		
		case 7:
			return 1;
			break;
		
		case 8:
			return 1;
			break;
		
		case 9:
			return 1;
			break;
		
		case 10:
			return 1;
			break;
		
		case 11:
			return 1;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 1;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 1;
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
			return 2;
			break;
		
		case 23:
			return 2;
			break;
		
		case 24:
			return 2;
			break;
		
		case 25:
			return 2;
			break;
		
		case 26:
			return 2;
			break;
		
		case 27:
			return 2;
			break;
		
		case 28:
			return 3;
			break;
		
		case 29:
			return 3;
			break;
		
		case 30:
			return 3;
			break;
		
		case 31:
			return 3;
			break;
		
		case 32:
			return 3;
			break;
		
		case 33:
			return 3;
			break;
		
		case 34:
			return 3;
			break;
		
		case 35:
			return 3;
			break;
		
		case 36:
			return 3;
			break;
		
		case 37:
			return 3;
			break;
		
		case 38:
			return 3;
			break;
		
		case 39:
			return 4;
			break;
		
		case 40:
			return 4;
			break;
		
		case 41:
			return 4;
			break;
		
		case 42:
			return 4;
			break;
		
		case 43:
			return 4;
			break;
		
		case 44:
			return 4;
			break;
		
		case 45:
			return 5;
			break;
		
		case 46:
			return 3;
			break;
		
		case 47:
			return 3;
			break;
		
		case 48:
			return 3;
			break;
		
		case 49:
			return 3;
			break;
		
		case 52:
			return 3;
			break;
		
		case 51:
			return 1;
			break;
		
		case 53:
			return 3;
			break;
	}
	return 6;
}

void func_165(char* sParam0, int iParam1)
{
	unk_0x17751E107423AFE9(sParam0);
	FILES::GET_DLC_VEHICLE_FLAGS(0, 0, 1, iParam1);
}

int func_166(bool bParam0, int iParam1, var uParam2, float fParam3, int iParam4, bool bParam5, int iParam6)
{
	if (!func_508(uParam2))
	{
		func_507(uParam2, 0, 0);
	}
	fParam3 = 0f;
	if (func_167(bParam0, iParam1, 1, uParam2, fParam3, iParam4, bParam5, iParam6))
	{
		return 1;
	}
	return 0;
}

int func_167(bool bParam0, int iParam1, bool bParam2, var uParam3, float fParam4, int iParam5, bool bParam6, var uParam7)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	struct<8> Var3;
	
	if (!func_508(uParam3))
	{
		func_507(uParam3, 0, 0);
	}
	func_170(&Var3, iParam1);
	if (MISC::IS_BIT_SET(bParam0))
	{
		if (!PED::IS_PED_IN_ANY_POLICE_VEHICLE(bParam0, 0))
		{
			if (func_168(bParam0, iParam1, 30))
			{
				if (ENTITY::IS_ENTITY_A_PED(bParam0))
				{
					bVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(bParam0);
					if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bVar0))
					{
						if (PLAYER::SET_PLAYER_WANTED_LEVEL(bVar0))
						{
							iVar2 = VEHICLE::GET_VEHICLE_NUMBER_OF_PASSENGERS(bVar0);
							if (bParam2)
							{
								if (OBJECT::IS_PLAYER_ENTIRELY_INSIDE_GARAGE(iParam1, iVar2, fParam4, -1))
								{
									if (uParam7 || (!OBJECT::IS_PLAYER_PARTIALLY_INSIDE_GARAGE(iParam1, iVar2, 2) && !(Var3.f_7 != 0 && OBJECT::IS_PLAYER_PARTIALLY_INSIDE_GARAGE(iParam1, iVar2, 3))))
									{
										if (bParam6)
										{
											return 1;
										}
										else if (iParam5 <= 0 || MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam3)) >= iParam5)
										{
											return 1;
										}
										else
										{
											return 0;
										}
									}
								}
							}
							else if (OBJECT::IS_PLAYER_ENTIRELY_INSIDE_GARAGE(iParam1, iVar2, fParam4, -1))
							{
								if (bParam6)
								{
									return 1;
								}
								else if (iParam5 <= 0 || MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam3)) >= iParam5)
								{
									return 1;
								}
								else
								{
									return 0;
								}
							}
							else if (OBJECT::IS_PLAYER_PARTIALLY_INSIDE_GARAGE(iParam1, iVar2, 2))
							{
								if (bParam6)
								{
									return 1;
								}
								else if (iParam5 <= 0 || MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam3)) >= iParam5)
								{
									return 1;
								}
								else
								{
									return 0;
								}
							}
							else if (Var3.f_7 != 0 && OBJECT::IS_PLAYER_PARTIALLY_INSIDE_GARAGE(iParam1, iVar2, 3))
							{
								if (bParam6)
								{
									return 1;
								}
								else if (iParam5 <= 0 || MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam3)) >= iParam5)
								{
									return 1;
								}
								else
								{
									return 0;
								}
							}
						}
						else if (SYSTEM::VDIST(bVar0, 0))
						{
							bVar1 = ENTITY::GET_ENTITY_MODEL(bVar0, 0);
							if (MISC::IS_BIT_SET(bVar1))
							{
								if (bParam2)
								{
									if (OBJECT::IS_OBJECT_ENTIRELY_INSIDE_GARAGE(iParam1, bVar1, fParam4, -1))
									{
										if (uParam7 || (!OBJECT::IS_OBJECT_PARTIALLY_INSIDE_GARAGE(iParam1, bVar1, 2) && !(Var3.f_7 != 0 && OBJECT::IS_OBJECT_PARTIALLY_INSIDE_GARAGE(iParam1, bVar1, 3))))
										{
											if (bParam6)
											{
												return 1;
											}
											else if (iParam5 <= 0 || MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam3)) >= iParam5)
											{
												return 1;
											}
											else
											{
												return 0;
											}
										}
									}
								}
								else if (OBJECT::IS_OBJECT_ENTIRELY_INSIDE_GARAGE(iParam1, bVar1, fParam4, -1))
								{
									if (bParam6)
									{
										return 1;
									}
									else if (iParam5 <= 0 || MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam3)) >= iParam5)
									{
										return 1;
									}
									else
									{
										return 0;
									}
								}
								else if (OBJECT::IS_OBJECT_PARTIALLY_INSIDE_GARAGE(iParam1, bVar1, 2))
								{
									if (bParam6)
									{
										return 1;
									}
									else if (iParam5 <= 0 || MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam3)) >= iParam5)
									{
										return 1;
									}
									else
									{
										return 0;
									}
								}
								else if (Var3.f_7 != 0 && OBJECT::IS_OBJECT_PARTIALLY_INSIDE_GARAGE(iParam1, bVar1, 3))
								{
									if (bParam6)
									{
										return 1;
									}
									else if (iParam5 <= 0 || MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam3)) >= iParam5)
									{
										return 1;
									}
									else
									{
										return 0;
									}
								}
							}
						}
						else if (bParam2)
						{
							if (OBJECT::IS_OBJECT_ENTIRELY_INSIDE_GARAGE(iParam1, bParam0, fParam4, -1))
							{
								if (uParam7 || (!OBJECT::IS_OBJECT_PARTIALLY_INSIDE_GARAGE(iParam1, bParam0, 2) && !(Var3.f_7 != 0 && OBJECT::IS_OBJECT_PARTIALLY_INSIDE_GARAGE(iParam1, bParam0, 3))))
								{
									if (bParam6)
									{
										return 1;
									}
									else if (iParam5 <= 0 || MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam3)) >= iParam5)
									{
										return 1;
									}
									else
									{
										return 0;
									}
								}
							}
						}
						else if (OBJECT::IS_OBJECT_ENTIRELY_INSIDE_GARAGE(iParam1, bParam0, fParam4, -1))
						{
							if (bParam6)
							{
								return 1;
							}
							else if (iParam5 <= 0 || MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam3)) >= iParam5)
							{
								return 1;
							}
							else
							{
								return 0;
							}
						}
						else if (OBJECT::IS_OBJECT_PARTIALLY_INSIDE_GARAGE(iParam1, bParam0, 2))
						{
							if (bParam6)
							{
								return 1;
							}
							else if (iParam5 <= 0 || MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam3)) >= iParam5)
							{
								return 1;
							}
							else
							{
								return 0;
							}
						}
						else if (Var3.f_7 != 0 && OBJECT::IS_OBJECT_PARTIALLY_INSIDE_GARAGE(iParam1, bParam0, 3))
						{
							if (bParam6)
							{
								return 1;
							}
							else if (iParam5 <= 0 || MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam3)) >= iParam5)
							{
								return 1;
							}
							else
							{
								return 0;
							}
						}
					}
				}
				else if (ENTITY::IS_ENTITY_A_VEHICLE(bParam0) || ENTITY::IS_ENTITY_AN_OBJECT(bParam0))
				{
					if (bParam2)
					{
						if (OBJECT::IS_OBJECT_ENTIRELY_INSIDE_GARAGE(iParam1, bParam0, fParam4, -1))
						{
							if (uParam7 || (!OBJECT::IS_OBJECT_PARTIALLY_INSIDE_GARAGE(iParam1, bParam0, 2) && !(Var3.f_7 != 0 && OBJECT::IS_OBJECT_PARTIALLY_INSIDE_GARAGE(iParam1, bParam0, 3))))
							{
								if (bParam6)
								{
									return 1;
								}
								else if (iParam5 <= 0 || MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam3)) >= iParam5)
								{
									return 1;
								}
								else
								{
									return 0;
								}
							}
						}
					}
					else if (OBJECT::IS_OBJECT_ENTIRELY_INSIDE_GARAGE(iParam1, bParam0, fParam4, -1))
					{
						if (bParam6)
						{
							return 1;
						}
						else if (iParam5 <= 0 || MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam3)) >= iParam5)
						{
							return 1;
						}
						else
						{
							return 0;
						}
					}
					else if (OBJECT::IS_OBJECT_PARTIALLY_INSIDE_GARAGE(iParam1, bParam0, 2))
					{
						if (bParam6)
						{
							return 1;
						}
						else if (iParam5 <= 0 || MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam3)) >= iParam5)
						{
							return 1;
						}
						else
						{
							return 0;
						}
					}
					else if (Var3.f_7 != 0 && OBJECT::IS_OBJECT_PARTIALLY_INSIDE_GARAGE(iParam1, bParam0, 3))
					{
						if (bParam6)
						{
							return 1;
						}
						else if (iParam5 <= 0 || MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam3)) >= iParam5)
						{
							return 1;
						}
						else
						{
							return 0;
						}
					}
				}
			}
		}
	}
	func_46(uParam3);
	return 0;
}

int func_168(bool bParam0, int iParam1, int iParam2)
{
	if (iParam1 != -1)
	{
		if (HUD::SET_BLIP_NAME_FROM_TEXT_FILE(NETWORK::NETWORK_ARE_HANDLES_THE_SAME(bParam0, 1), func_169(iParam1), 1) <= IntToFloat(iParam2))
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_169(int iParam0)
{
	switch (iParam0)
	{
		case 1215605247:
			return 1204.429f, -3110.847f, 4.3988f;
			break;
		
		case -1710530912:
			return 725.1831f, -1089.349f, 21.1692f;
			break;
		
		case 1131590004:
			return -1164.887f, -2011.105f, 12.25371f;
			break;
		
		case 916723671:
			return -330.44f, -143.39f, 39.33f;
			break;
		
		case 1340820069:
			return 106.28f, 6620.01f, 32.12f;
			break;
		
		case -866958545:
			return 1182.65f, 2641.9f, 38.05f;
			break;
	}
	return 0f, 0f, 0f;
}

void func_170(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
		case 1215605247:
			*uParam0 = 99;
			uParam0->f_1 = 1215605247;
			uParam0->f_2 = 0;
			uParam0->f_3 = { 1204.429f, -3110.847f, 4.3988f };
			uParam0->f_6 = -247372382;
			uParam0->f_7 = 0;
			uParam0->f_8 = "MP_GAR_SIMEON";
			uParam0->f_9.f_1 = { 1210.884f, -3122.402f, 5.2118f };
			uParam0->f_9.f_4 = { 4.0534f, 0f, 32.6363f };
			uParam0->f_9.f_7 = 32.498f;
			uParam0->f_9.f_8 = { 1210.884f, -3122.402f, 5.2118f };
			uParam0->f_9.f_11 = { 4.0534f, 0f, 32.6363f };
			uParam0->f_9.f_14 = 32.498f;
			uParam0->f_27 = { 1204.157f, -3122.599f, 3.795331f };
			uParam0->f_27.f_3 = { 1204.24f, -3099.772f, 8.400777f };
			uParam0->f_27.f_6 = 7f;
			return;
			break;
		
		case 1:
		case -1710530912:
			*uParam0 = 99;
			uParam0->f_1 = -1710530912;
			uParam0->f_2 = 1;
			uParam0->f_3 = { 725.1831f, -1089.349f, 21.1692f };
			uParam0->f_7 = 0;
			uParam0->f_8 = "MP_GAR_PNS_2";
			uParam0->f_9.f_1 = { 734.3793f, -1078.791f, 23.4305f };
			uParam0->f_9.f_4 = { -16.432f, 0f, -19.7978f };
			uParam0->f_9.f_7 = 60.0199f;
			uParam0->f_9.f_8 = { 734.3027f, -1079.004f, 23.4973f };
			uParam0->f_9.f_11 = { -16.432f, 0f, -19.7978f };
			uParam0->f_9.f_14 = 60.0199f;
			uParam0->f_27 = { 738.8857f, -1088.516f, 20.55957f };
			uParam0->f_27.f_3 = { 718.613f, -1088.78f, 24.83263f };
			uParam0->f_27.f_6 = 7f;
			return;
			break;
		
		case 2:
		case 1131590004:
			*uParam0 = 99;
			uParam0->f_1 = 1131590004;
			uParam0->f_2 = 2;
			uParam0->f_3 = { -1164.887f, -2011.105f, 12.25371f };
			uParam0->f_7 = 0;
			uParam0->f_8 = "MP_GAR_NEUT_PNS_3";
			uParam0->f_9.f_1 = { -1161.774f, -2010.27f, 14.2468f };
			uParam0->f_9.f_4 = { -17.3415f, 0f, 113.6889f };
			uParam0->f_9.f_7 = 64.5334f;
			uParam0->f_9.f_8 = { -1161.639f, -2010.211f, 14.2928f };
			uParam0->f_9.f_11 = { -17.3415f, 0f, 113.6889f };
			uParam0->f_9.f_14 = 64.5334f;
			uParam0->f_27 = { -1169.723f, -2015.923f, 11.50441f };
			uParam0->f_27.f_3 = { -1160.558f, -2007.005f, 15.68027f };
			uParam0->f_27.f_6 = 5.5f;
			return;
			break;
		
		case 3:
		case 916723671:
			*uParam0 = 99;
			uParam0->f_1 = 916723671;
			uParam0->f_2 = 3;
			uParam0->f_3 = { -330.44f, -143.39f, 39.33f };
			uParam0->f_7 = 0;
			uParam0->f_8 = "MP_GAR_PNS_4";
			uParam0->f_9.f_1 = { -332.1567f, -141.0546f, 40.2864f };
			uParam0->f_9.f_4 = { -20.6629f, 0f, -134.7887f };
			uParam0->f_9.f_7 = 60.0241f;
			uParam0->f_9.f_8 = { -332.3621f, -140.8507f, 40.3956f };
			uParam0->f_9.f_11 = { -20.6629f, 0f, -134.7887f };
			uParam0->f_9.f_14 = 60.0241f;
			uParam0->f_27 = { -323.7998f, -146.2539f, 37.81492f };
			uParam0->f_27.f_3 = { -334.3432f, -141.7261f, 40.75964f };
			uParam0->f_27.f_6 = 5.5f;
			return;
			break;
		
		case 4:
		case 1340820069:
			*uParam0 = 99;
			uParam0->f_1 = 1340820069;
			uParam0->f_2 = 4;
			uParam0->f_3 = { 106.28f, 6620.01f, 32.12f };
			uParam0->f_7 = 0;
			uParam0->f_8 = "MP_GAR_PNS_5";
			uParam0->f_9.f_1 = { 106.688f, 6617.322f, 32.5026f };
			uParam0->f_9.f_4 = { -10.7437f, 0f, 21.7154f };
			uParam0->f_9.f_7 = 67.562f;
			uParam0->f_9.f_8 = { 106.7971f, 6617.048f, 32.5586f };
			uParam0->f_9.f_11 = { -10.7437f, 0f, 21.7154f };
			uParam0->f_9.f_14 = 67.562f;
			uParam0->f_27 = { 100.9759f, 6625.046f, 30.60301f };
			uParam0->f_27.f_3 = { 111.2522f, 6615.657f, 33.62929f };
			uParam0->f_27.f_6 = 5.5f;
			return;
			break;
		
		case 5:
		case -866958545:
			*uParam0 = 99;
			uParam0->f_1 = -866958545;
			uParam0->f_2 = 5;
			uParam0->f_3 = { 1182.65f, 2641.9f, 38.05f };
			uParam0->f_7 = 0;
			uParam0->f_9.f_1 = { 1184.206f, 2644.004f, 38.7458f };
			uParam0->f_9.f_4 = { -15.4014f, 0f, 161.4493f };
			uParam0->f_9.f_7 = 67.3374f;
			uParam0->f_9.f_8 = { 1184.345f, 2644.418f, 38.866f };
			uParam0->f_9.f_11 = { -15.4014f, 0f, 161.4493f };
			uParam0->f_9.f_14 = 67.3374f;
			uParam0->f_27 = { 1182.835f, 2634.775f, 36.55006f };
			uParam0->f_27.f_3 = { 1182.578f, 2647.955f, 39.58602f };
			uParam0->f_27.f_6 = 5.5f;
			return;
			break;
	}
}

int func_171()
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_80(1199, -1, 0);
	if (!unk_0xCE990E643CD9D0E5(iVar1, 1))
	{
		iVar0 = 1;
	}
	else if (!unk_0xCE990E643CD9D0E5(iVar1, 2))
	{
		iVar0 = 1;
	}
	return iVar0;
}

void func_172()
{
	if (bLocal_78)
	{
		if (!iLocal_79)
		{
			func_174(1215605247, 1, 0);
			func_173(1);
			iLocal_79 = 1;
		}
	}
	else if (iLocal_79)
	{
		func_174(1215605247, 0, 0);
		func_173(0);
		iLocal_79 = 0;
	}
}

void func_173(bool bParam0)
{
	if (Global_2540384.f_4582 != bParam0)
	{
		if (bParam0)
		{
		}
		Global_2540384.f_4582 = bParam0;
	}
}

void func_174(int iParam0, bool bParam1, bool bParam2)
{
	if (!MISC::SET_BIT())
	{
	}
	else if (bParam1)
	{
		if (!unk_0xCE990E643CD9D0E5(Global_2540384.f_4561, func_175(iParam0)))
		{
			if (bParam2)
			{
				unk_0xBE20AB8238688965(&(Global_2540384.f_4561.f_1), func_175(iParam0));
			}
			unk_0xBE20AB8238688965(&(Global_2540384.f_4561), func_175(iParam0));
		}
	}
	else if (unk_0xCE990E643CD9D0E5(Global_2540384.f_4561, func_175(iParam0)))
	{
		if (bParam2)
		{
			VEHICLE::IS_VEHICLE_DRIVEABLE(&(Global_2540384.f_4561.f_1), func_175(iParam0));
		}
		VEHICLE::IS_VEHICLE_DRIVEABLE(&(Global_2540384.f_4561), func_175(iParam0));
	}
}

int func_175(int iParam0)
{
	switch (iParam0)
	{
		case 1215605247:
			return 0;
			break;
		
		case -1710530912:
			return 1;
			break;
		
		case 1131590004:
			return 2;
			break;
		
		case 916723671:
			return 3;
			break;
		
		case 1340820069:
			return 4;
			break;
		
		case -866958545:
			return 5;
			break;
	}
	return 0;
}

void func_176()
{
	int iVar0;
	bool bVar1;
	
	if (unk_0xCE990E643CD9D0E5(Local_322.f_23, 0))
	{
		if (iLocal_313 >= 32)
		{
			VEHICLE::IS_VEHICLE_DRIVEABLE(&iLocal_330, 5);
			iLocal_313 = 0;
			iLocal_285 = -1;
		}
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_313)))
		{
			iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_313));
			bVar1 = PLAYER::GET_PLAYER_PED(iVar0);
			if (func_14(bVar0, 0, 1))
			{
				if (!unk_0xCE990E643CD9D0E5(iLocal_330, 3))
				{
					if (unk_0xCE990E643CD9D0E5(Local_329[iLocal_313 /*4*/].f_2, 1))
					{
						unk_0xBE20AB8238688965(&iLocal_330, 3);
					}
				}
				if (iLocal_285 == -1)
				{
					if (NETWORK::NETWORK_IS_HANDLE_VALID(Local_322.f_22))
					{
						if (func_4(Local_322.f_22))
						{
							if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bVar1))
							{
								if (PED::IS_PED_SITTING_IN_VEHICLE(bVar1, unk_0x770D3B2B4702434A(Local_322.f_22)))
								{
									if (MISC::IS_MINIGAME_IN_PROGRESS(unk_0x770D3B2B4702434A(Local_322.f_22), -1, 0) == bVar1)
									{
										iLocal_285 = iLocal_313;
									}
								}
							}
						}
					}
				}
			}
		}
		iLocal_313++;
		if (iLocal_313 >= 32)
		{
			unk_0xBE20AB8238688965(&iLocal_330, 5);
		}
		func_263();
		if (!unk_0xCE990E643CD9D0E5(iLocal_330, 3))
		{
			if (!unk_0xCE990E643CD9D0E5(Local_329[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_2, 3))
			{
				if (!unk_0xCE990E643CD9D0E5(Local_329[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_2, 1))
				{
					if (func_261())
					{
						unk_0xBE20AB8238688965(&(Local_329[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_2), 3);
					}
				}
			}
		}
	}
	if (iLocal_282 != Local_322.f_34)
	{
		if (Local_322.f_34 == 0)
		{
			if (!NETWORK::NETWORK_IS_HANDLE_VALID(Local_322.f_22))
			{
				iLocal_282 = Local_322.f_34;
				NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(iLocal_282);
			}
		}
		else
		{
			iLocal_282 = Local_322.f_34;
			NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(iLocal_282);
		}
	}
	if (unk_0xCE990E643CD9D0E5(Local_322.f_23, 0))
	{
		switch (Local_329[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_3)
		{
			case 0:
				if (!Global_2540384.f_1719)
				{
				}
				if (unk_0xCE990E643CD9D0E5(Local_329[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_2, 3))
				{
					VEHICLE::IS_VEHICLE_DRIVEABLE(&(Local_329[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_2), 3);
				}
				if (unk_0xCE990E643CD9D0E5(iLocal_330, 21))
				{
					VEHICLE::IS_VEHICLE_DRIVEABLE(&iLocal_330, 21);
				}
				if (unk_0xCE990E643CD9D0E5(Local_329[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_2, 1))
				{
					VEHICLE::IS_VEHICLE_DRIVEABLE(&(Local_329[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_2), true);
				}
				if (((!func_139(PLAYER::PLAYER_ID(), 1, 0) && !func_112()) && !func_260(PLAYER::PLAYER_ID(), 1, 0)) || func_71(PLAYER::PLAYER_ID(), 6))
				{
					if (unk_0xCE990E643CD9D0E5(iLocal_330, 3))
					{
						VEHICLE::IS_VEHICLE_DRIVEABLE(&iLocal_330, 3);
					}
					if (unk_0xCE990E643CD9D0E5(iLocal_330, 19))
					{
						VEHICLE::IS_VEHICLE_DRIVEABLE(&iLocal_330, 19);
					}
					if (unk_0xCE990E643CD9D0E5(Local_329[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_2, 3))
					{
						VEHICLE::IS_VEHICLE_DRIVEABLE(&(Local_329[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_2), 3);
					}
					if (iLocal_284 != -1)
					{
						iLocal_284 = -1;
					}
					if (unk_0xCE990E643CD9D0E5(Local_322.f_23, 0))
					{
						if (!unk_0xCE990E643CD9D0E5(iLocal_330, 16))
						{
							unk_0xBE20AB8238688965(&iLocal_330, 16);
							func_259(6, 1);
							unk_0xBE20AB8238688965(&iLocal_330, 7);
							Global_2540384.f_1718 = 1;
							Global_2540384.f_1719 = 0;
						}
						if (NETWORK::CAN_REGISTER_MISSION_VEHICLES(1))
						{
							if (NETWORK::NETWORK_IS_HANDLE_VALID(Local_322.f_22))
							{
								if (func_253())
								{
									if (Local_322.f_67 != 0)
									{
										VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_322.f_67, true);
									}
									Local_329[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_3 = 1;
									Global_1663742 = TASK::IS_PED_SPRINTING(unk_0x770D3B2B4702434A(Local_322.f_22));
									if (MONEY::NETWORK_SPENT_BULL_SHARK(MISC::GET_MODEL_DIMENSIONS(unk_0x770D3B2B4702434A(Local_322.f_22))))
									{
										HUD::SET_BLIP_SPRITE(Global_1663742, 348);
										func_165("IMPEX_HIPB_INT", -1);
									}
									else
									{
										HUD::SET_BLIP_SPRITE(Global_1663742, 225);
										func_165("IMPEX_HIPR_INT", -1);
									}
									HUD::SET_BLIP_COLOUR(Global_1663742, 2);
									PED::IS_PED_IN_PARACHUTE_FREE_FALL(Global_1663742, "IMPEX_HIPR_BLP");
									func_259(6, 1);
									unk_0xBE20AB8238688965(&iLocal_330, 7);
									Global_2540384.f_1718 = 1;
									if (func_118())
									{
										HUD::SET_BLIP_DISPLAY(Global_1663742, 0);
									}
								}
							}
						}
					}
				}
				else if (!Global_2540384.f_1719)
				{
					Global_2540384.f_1719 = 1;
				}
				break;
			
			case 1:
				if (NETWORK::NETWORK_IS_HANDLE_VALID(Local_322.f_22))
				{
					if (ENTITY::GET_ENTITY_COORDS(unk_0x770D3B2B4702434A(Local_322.f_22), false))
					{
						if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(unk_0x9B0761B4C3EB8BC7()))
						{
							if (PED::IS_PED_SITTING_IN_VEHICLE(unk_0x9B0761B4C3EB8BC7(), unk_0x770D3B2B4702434A(Local_322.f_22)))
							{
								func_252(1);
								if (func_251())
								{
									func_246(2, 0, 1);
								}
								if (SYSTEM::VMAG(Global_1663742))
								{
									unk_0x93370FA10F15BE44(&Global_1663742);
								}
							}
							else
							{
								func_252(0);
								if (!func_245(unk_0x770D3B2B4702434A(Local_322.f_22), 0))
								{
									if (!SYSTEM::VMAG(Global_1663742))
									{
										if (!iLocal_101)
										{
											func_244();
										}
									}
								}
							}
						}
						if (!unk_0xCE990E643CD9D0E5(iLocal_330, 19))
						{
							if (func_253())
							{
								if (func_242())
								{
									if (!PED::IS_PED_SITTING_IN_VEHICLE(unk_0x9B0761B4C3EB8BC7(), unk_0x770D3B2B4702434A(Local_322.f_22)))
									{
										if (SYSTEM::VDIST2(NETWORK::NETWORK_ARE_HANDLES_THE_SAME(unk_0x9B0761B4C3EB8BC7(), 1), NETWORK::NETWORK_ARE_HANDLES_THE_SAME(unk_0x770D3B2B4702434A(Local_322.f_22), 1)) < 2500f)
										{
											if (func_118())
											{
												func_165("FM_IMP_JAC", -1);
											}
											unk_0xBE20AB8238688965(&iLocal_330, 19);
										}
									}
								}
							}
						}
						if (func_241())
						{
						}
						func_239();
					}
					else
					{
						if (SYSTEM::VMAG(Global_1663742))
						{
							unk_0x93370FA10F15BE44(&Global_1663742);
						}
						func_259(6, 0);
						VEHICLE::IS_VEHICLE_DRIVEABLE(&iLocal_330, 7);
						Local_329[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_3 = 3;
					}
				}
				else
				{
					if (Local_322.f_67 != 0)
					{
						VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_322.f_67, false);
					}
					if (SYSTEM::VMAG(Global_1663742))
					{
						unk_0x93370FA10F15BE44(&Global_1663742);
					}
					func_259(6, 0);
					VEHICLE::IS_VEHICLE_DRIVEABLE(&iLocal_330, 7);
					Local_329[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_3 = 3;
				}
				if (unk_0xCE990E643CD9D0E5(iLocal_330, 3))
				{
					func_259(6, 0);
					VEHICLE::IS_VEHICLE_DRIVEABLE(&iLocal_330, 7);
					if (SYSTEM::VMAG(Global_1663742))
					{
						unk_0x93370FA10F15BE44(&Global_1663742);
					}
					Local_329[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_3 = 3;
				}
				if (Local_322.f_26 == 3)
				{
					if (Local_329[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_3 == 1)
					{
						if (Local_322.f_67 != 0)
						{
							VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_322.f_67, false);
						}
						if (SYSTEM::VMAG(Global_1663742))
						{
							unk_0x93370FA10F15BE44(&Global_1663742);
						}
						if (unk_0xCE990E643CD9D0E5(iLocal_330, 16))
						{
							VEHICLE::IS_VEHICLE_DRIVEABLE(&iLocal_330, 16);
						}
						func_259(6, 0);
						VEHICLE::IS_VEHICLE_DRIVEABLE(&iLocal_330, 7);
						Local_329[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_3 = 3;
					}
				}
				break;
			
			case 3:
				func_252(0);
				break;
		}
		if (func_236())
		{
			if (func_235("IMPEX_HIPR_INT"))
			{
				unk_0xD289B55B6AADBA10(1);
			}
			if (SYSTEM::VMAG(Global_1663742))
			{
				unk_0x93370FA10F15BE44(&Global_1663742);
			}
			if (Local_322.f_67 != 0)
			{
				VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_322.f_67, false);
			}
			Local_329[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_3 = 3;
			func_259(6, 0);
			VEHICLE::IS_VEHICLE_DRIVEABLE(&iLocal_330, 7);
			if (unk_0xCE990E643CD9D0E5(iLocal_330, 16))
			{
				VEHICLE::IS_VEHICLE_DRIVEABLE(&iLocal_330, 16);
			}
			func_252(0);
		}
		func_191();
		if (Local_329[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_3 > 0 && Local_329[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_3 < 3)
		{
			func_188();
		}
	}
	else
	{
		if (Local_329[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_3 != 0)
		{
			if (Local_322.f_67 != 0)
			{
				VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_322.f_67, false);
			}
			Local_329[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_3 = 0;
		}
		if (unk_0xCE990E643CD9D0E5(iLocal_330, 21))
		{
			VEHICLE::IS_VEHICLE_DRIVEABLE(&iLocal_330, 21);
		}
		if (Global_2540384.f_1718)
		{
			if (!func_508(&uLocal_295))
			{
				func_507(&uLocal_295, 0, 0);
			}
			else if (func_506(&uLocal_295, 5000, 0))
			{
				func_46(&uLocal_295);
				Global_2540384.f_1718 = 0;
			}
		}
		if (unk_0xCE990E643CD9D0E5(iLocal_330, 16))
		{
			if (Local_322.f_34 == 0)
			{
				VEHICLE::IS_VEHICLE_DRIVEABLE(&iLocal_330, 16);
			}
		}
	}
	func_177();
}

void func_177()
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	var uVar3;
	bool bVar4;
	
	if (NETWORK::NETWORK_IS_HANDLE_VALID(Local_322.f_22))
	{
		if (func_4(Local_322.f_22))
		{
			if (!func_242())
			{
				if (!func_508(&uLocal_336))
				{
					func_507(&uLocal_336, 0, 0);
				}
				if (func_506(&uLocal_336, 1000, 0))
				{
					if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_322.f_22))
					{
						Var1 = { NETWORK::NETWORK_ARE_HANDLES_THE_SAME(unk_0x770D3B2B4702434A(Local_322.f_22), 1) };
						if (func_185(Var1, func_186(39), func_150(39, 0)))
						{
							if (func_180(39, 0, &Var0, &fVar2, &uVar3, 0))
							{
								bVar4 = true;
							}
						}
						else if (func_185(Var1, func_186(40), func_150(40, 0)))
						{
							if (func_180(40, 0, &Var0, &fVar2, &uVar3, 0))
							{
								bVar4 = true;
							}
						}
						else if (func_185(Var1, func_186(41), func_150(41, 0)))
						{
							if (func_180(41, 0, &Var0, &fVar2, &uVar3, 0))
							{
								bVar4 = true;
							}
						}
						else if (func_185(Var1, func_186(42), func_150(42, 0)))
						{
							if (func_180(42, 0, &Var0, &fVar2, &uVar3, 0))
							{
								bVar4 = true;
							}
						}
						else if (func_185(Var1, func_186(43), func_150(43, 0)))
						{
							if (func_180(43, 0, &Var0, &fVar2, &uVar3, 0))
							{
								bVar4 = true;
							}
						}
						else if (func_185(Var1, func_186(44), func_150(44, 0)))
						{
							if (func_180(44, 0, &Var0, &fVar2, &uVar3, 0))
							{
								bVar4 = true;
							}
						}
					}
					func_46(&uLocal_336);
				}
				if (bVar4)
				{
					if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_322.f_22))
					{
						if (func_178(unk_0x770D3B2B4702434A(Local_322.f_22), 1, 0, 0, 0, 0, 1, 0, 1))
						{
							ENTITY::SET_ENTITY_COORDS_NO_OFFSET(unk_0x770D3B2B4702434A(Local_322.f_22), Var0, false, false, true);
							ENTITY::SET_ENTITY_HEADING(unk_0x770D3B2B4702434A(Local_322.f_22), fVar2);
							NETWORK::NETWORK_FADE_IN_ENTITY(unk_0x770D3B2B4702434A(Local_322.f_22), true, 1);
							ENTITY::SET_ENTITY_COORDS(unk_0x770D3B2B4702434A(Local_322.f_22), false);
							VEHICLE::SET_VEHICLE_DOORS_LOCKED(unk_0x770D3B2B4702434A(Local_322.f_22), 1);
						}
					}
				}
			}
		}
	}
}

int func_178(bool bParam0, int iParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7, int iParam8)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	
	iVar1 = PED::GET_VEHICLE_PED_IS_USING(bParam0) + 1;
	if (iParam4 || !PED::IS_PED_IN_ANY_POLICE_VEHICLE(bParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			bVar2 = func_179(bParam0, (iVar0 - 1), bParam6, iParam7);
			if (MISC::IS_BIT_SET(bVar2))
			{
				if (iParam3 && bVar2 == unk_0x9B0761B4C3EB8BC7())
				{
				}
				else if (bParam2)
				{
					if (PLAYER::SET_PLAYER_WANTED_LEVEL(bVar2))
					{
						iVar3 = VEHICLE::GET_VEHICLE_NUMBER_OF_PASSENGERS(bVar2);
						if (((!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bVar2) && iVar3 != func_121()) && func_14(iVar3, 1, 1)) || iParam8)
						{
							if (AUDIO::SET_SCRIPT_UPDATE_DOOR_AUDIO(VEHICLE::GET_VEHICLE_NUMBER_OF_PASSENGERS(bVar2)) == 0)
							{
								if (!bParam5)
								{
									return 0;
								}
							}
							else
							{
								return 0;
							}
						}
					}
				}
				else if (iParam1 == 0)
				{
					return 0;
				}
				else if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bVar2))
				{
					return 0;
				}
			}
			iVar0++;
		}
	}
	return 1;
}

bool func_179(bool bParam0, int iParam1, bool bParam2, int iParam3)
{
	bool bVar0;
	
	if (!SYSTEM::VDIST2(bParam0, iParam1, iParam3))
	{
		bVar0 = MISC::IS_MINIGAME_IN_PROGRESS(bParam0, iParam1, iParam3);
	}
	if (bParam2)
	{
		if (!MISC::IS_BIT_SET(bVar0) && !PED::IS_PED_IN_ANY_POLICE_VEHICLE(bParam0, 0))
		{
			bVar0 = VEHICLE::GET_LAST_PED_IN_VEHICLE_SEAT(bParam0, iParam1);
			if (!PED::IS_PED_IN_ANY_POLICE_VEHICLE(bVar0, 0))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(bVar0, 451360105) == 1 || TASK::GET_SCRIPT_TASK_STATUS(bVar0, -828834893) == 1)
				{
					if (SYSTEM::VDIST(NETWORK::NETWORK_ARE_HANDLES_THE_SAME(bParam0, 0), NETWORK::NETWORK_ARE_HANDLES_THE_SAME(bVar0, 0)) < 10f)
					{
						return bVar0;
					}
				}
			}
			bVar0 = -1;
		}
	}
	return bVar0;
}

bool func_180(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5)
{
	*uParam2 = { 0f, 0f, 0f };
	*uParam3 = 0f;
	*uParam4 = 1f;
	if (iParam0 == 39)
	{
		if (iParam1 == 0)
		{
			*uParam2 = { -1136.491f, -1991.127f, 12.1674f };
			*uParam3 = 312.0856f;
			*uParam4 = 1f;
		}
		else if (iParam1 == 1)
		{
			*uParam2 = { -1133.253f, -1993.854f, 12.1687f };
			*uParam3 = 314.389f;
			*uParam4 = 1f;
		}
		else if (iParam1 == 2)
		{
			*uParam2 = { -1130.806f, -1997.875f, 12.1713f };
			*uParam3 = 317.9671f;
			*uParam4 = 0.6f;
		}
		else if (iParam1 == 3)
		{
			*uParam2 = { -1127.329f, -2001.548f, 12.1741f };
			*uParam3 = 315.1484f;
			*uParam4 = 0.5f;
		}
		else if (iParam1 == 4)
		{
			*uParam2 = { -1123.286f, -2006.263f, 12.1791f };
			*uParam3 = 236.5043f;
			*uParam4 = 0.4f;
		}
		else if (iParam1 == 5)
		{
			*uParam2 = { -1115.469f, -2012.307f, 12.1802f };
			*uParam3 = 264.1943f;
			*uParam4 = 0.2f;
		}
		else if (iParam1 == 6)
		{
			*uParam2 = { -1110.562f, -2015.446f, 12.1999f };
			*uParam3 = 302.6618f;
			*uParam4 = 0.1f;
		}
		else if (iParam1 == 7)
		{
			*uParam2 = { -1121.69f, -2000.23f, 12.1718f };
			*uParam3 = 238.2144f;
			*uParam4 = 0.1f;
		}
		else if (iParam1 == 8)
		{
			*uParam2 = { -1111.589f, -2006.454f, 12.1692f };
			*uParam3 = 238.336f;
			*uParam4 = 0.3f;
		}
		else if (iParam1 == 9)
		{
			*uParam2 = { -1138.648f, -1979.826f, 12.1634f };
			*uParam3 = 278.7886f;
			*uParam4 = 0.9f;
		}
		else if (iParam1 == 10)
		{
			*uParam2 = { -1124.321f, -1978.124f, 12.1856f };
			*uParam3 = 276.276f;
			*uParam4 = 0.4f;
		}
		else if (iParam1 == 11)
		{
			*uParam2 = { -1110.264f, -1975.971f, 12.1588f };
			*uParam3 = 279.4681f;
			*uParam4 = 0.5f;
		}
		else if (iParam1 == 12)
		{
			*uParam2 = { -1128.293f, -1984.828f, 12.1659f };
			*uParam3 = 295.1603f;
			*uParam4 = 0.8f;
		}
		else if (iParam1 == 13)
		{
			*uParam2 = { -1126.066f, -1991.346f, 12.1683f };
			*uParam3 = 227.6551f;
			*uParam4 = 0.7f;
		}
	}
	else if (iParam0 == 40)
	{
		if (iParam1 == 0)
		{
			*uParam2 = { 717.5009f, -1082.013f, 21.2916f };
			*uParam3 = 3.6761f;
			*uParam4 = 1f;
		}
		else if (iParam1 == 1)
		{
			*uParam2 = { 716.7202f, -1069.264f, 21.2546f };
			*uParam3 = 3.5291f;
			*uParam4 = 1f;
		}
		else if (iParam1 == 2)
		{
			*uParam2 = { 717.009f, -1058.204f, 21.0152f };
			*uParam3 = 355.8705f;
			*uParam4 = 0.9f;
		}
		else if (iParam1 == 3)
		{
			*uParam2 = { 712.7385f, -1083.534f, 21.3647f };
			*uParam3 = 359.9393f;
			*uParam4 = 0.9f;
		}
		else if (iParam1 == 4)
		{
			*uParam2 = { 712.7766f, -1072.967f, 21.307f };
			*uParam3 = 359.9453f;
			*uParam4 = 0.8f;
		}
		else if (iParam1 == 5)
		{
			*uParam2 = { 712.8783f, -1061.094f, 21.1883f };
			*uParam3 = 357.2739f;
			*uParam4 = 0.8f;
		}
		else if (iParam1 == 6)
		{
			*uParam2 = { 708.5093f, -1081.285f, 21.3978f };
			*uParam3 = 358.5361f;
			*uParam4 = 0.7f;
		}
		else if (iParam1 == 7)
		{
			*uParam2 = { 708.9708f, -1068.358f, 21.3519f };
			*uParam3 = 357.9787f;
			*uParam4 = 0.7f;
		}
		else if (iParam1 == 8)
		{
			*uParam2 = { 710.7449f, -1053.611f, 21.2011f };
			*uParam3 = 339.2883f;
			*uParam4 = 0.6f;
		}
		else if (iParam1 == 9)
		{
			*uParam2 = { 704.6691f, -1079.536f, 21.3804f };
			*uParam3 = 359.4009f;
			*uParam4 = 0.5f;
		}
		else if (iParam1 == 10)
		{
			*uParam2 = { 704.4818f, -1065.911f, 21.4447f };
			*uParam3 = 0.9557f;
			*uParam4 = 0.4f;
		}
		else if (iParam1 == 11)
		{
			*uParam2 = { 716.4031f, -1044.615f, 20.9157f };
			*uParam3 = 280.6607f;
			*uParam4 = 0.3f;
		}
		else if (iParam1 == 12)
		{
			*uParam2 = { 725.7982f, -1044.226f, 21.046f };
			*uParam3 = 271.6107f;
			*uParam4 = 0.2f;
		}
		else if (iParam1 == 13)
		{
			*uParam2 = { 727.0708f, -1047.951f, 21.2648f };
			*uParam3 = 270.6534f;
			*uParam4 = 0.1f;
		}
	}
	else if (iParam0 == 41)
	{
		if (iParam1 == 0)
		{
			*uParam2 = { -365.9221f, -125.5196f, 37.6785f };
			*uParam3 = 65.4762f;
			*uParam4 = 1f;
		}
		else if (iParam1 == 1)
		{
			*uParam2 = { -362.3411f, -122.0465f, 37.6788f };
			*uParam3 = 68.8025f;
			*uParam4 = 1f;
		}
		else if (iParam1 == 2)
		{
			*uParam2 = { -363.4988f, -117.1944f, 37.6792f };
			*uParam3 = 78.9594f;
			*uParam4 = 0.9f;
		}
		else if (iParam1 == 3)
		{
			*uParam2 = { -372.3338f, -115.238f, 37.6796f };
			*uParam3 = 74.7182f;
			*uParam4 = 0.8f;
		}
		else if (iParam1 == 4)
		{
			*uParam2 = { -371.1733f, -121.0303f, 37.6797f };
			*uParam3 = 62.123f;
			*uParam4 = 0.5f;
		}
		else if (iParam1 == 5)
		{
			*uParam2 = { -369.2153f, -127.0247f, 37.6784f };
			*uParam3 = 61.9032f;
			*uParam4 = 0.7f;
		}
		else if (iParam1 == 6)
		{
			*uParam2 = { -371.8094f, -130.2364f, 37.6798f };
			*uParam3 = 52.11f;
			*uParam4 = 0.6f;
		}
		else if (iParam1 == 7)
		{
			*uParam2 = { -378.4785f, -130.0621f, 37.6796f };
			*uParam3 = 36.469f;
			*uParam4 = 0.5f;
		}
		else if (iParam1 == 8)
		{
			*uParam2 = { -387.4156f, -118.9469f, 37.6829f };
			*uParam3 = 38.3679f;
			*uParam4 = 0.4f;
		}
		else if (iParam1 == 9)
		{
			*uParam2 = { -382.709f, -112.8489f, 37.6985f };
			*uParam3 = 65.0749f;
			*uParam4 = 0.3f;
		}
		else if (iParam1 == 10)
		{
			*uParam2 = { -397.1963f, -107.1517f, 37.6834f };
			*uParam3 = 33.315f;
			*uParam4 = 0.2f;
		}
		else if (iParam1 == 11)
		{
			*uParam2 = { -404.3896f, -96.5394f, 39.0491f };
			*uParam3 = 34.1156f;
			*uParam4 = 0.1f;
		}
	}
	else if (iParam0 == 42)
	{
		if (iParam1 == 0)
		{
			*uParam2 = { 120.3574f, 6599.573f, 31.0156f };
			*uParam3 = 269.5703f;
			*uParam4 = 1f;
		}
		else if (iParam1 == 1)
		{
			*uParam2 = { 123.4549f, 6594.44f, 30.9958f };
			*uParam3 = 269.5584f;
			*uParam4 = 0.9f;
		}
		else if (iParam1 == 2)
		{
			*uParam2 = { 126.712f, 6589.798f, 30.9386f };
			*uParam3 = 269.5731f;
			*uParam4 = 0.5f;
		}
		else if (iParam1 == 3)
		{
			*uParam2 = { 133.9324f, 6585.555f, 30.9551f };
			*uParam3 = 269.4128f;
			*uParam4 = 0.5f;
		}
		else if (iParam1 == 4)
		{
			*uParam2 = { 136.8265f, 6580.12f, 31.013f };
			*uParam3 = 269.4126f;
			*uParam4 = 0.2f;
		}
		else if (iParam1 == 5)
		{
			*uParam2 = { 141.8716f, 6575.214f, 30.9522f };
			*uParam3 = 270.5616f;
			*uParam4 = 0.2f;
		}
		else if (iParam1 == 6)
		{
			*uParam2 = { 140.8046f, 6606.312f, 30.8449f };
			*uParam3 = 178.8423f;
			*uParam4 = 0.7f;
		}
		else if (iParam1 == 7)
		{
			*uParam2 = { 145.8316f, 6601.099f, 30.85f };
			*uParam3 = 180.9941f;
			*uParam4 = 0.6f;
		}
		else if (iParam1 == 8)
		{
			*uParam2 = { 150.5503f, 6596.533f, 30.8449f };
			*uParam3 = 177.9041f;
			*uParam4 = 0.4f;
		}
		else if (iParam1 == 9)
		{
			*uParam2 = { 155.6983f, 6591.292f, 30.8449f };
			*uParam3 = 177.9025f;
			*uParam4 = 0.2f;
		}
		else if (iParam1 == 10)
		{
			*uParam2 = { 159.1213f, 6580.544f, 30.841f };
			*uParam3 = 208.1021f;
			*uParam4 = 0.3f;
		}
		else if (iParam1 == 11)
		{
			*uParam2 = { 153.3835f, 6581.357f, 30.843f };
			*uParam3 = 208.9007f;
			*uParam4 = 0.3f;
		}
		else if (iParam1 == 12)
		{
			*uParam2 = { 160.6086f, 6567.498f, 30.8061f };
			*uParam3 = 210.3887f;
			*uParam4 = 0.1f;
		}
		else if (iParam1 == 13)
		{
			*uParam2 = { 166.7977f, 6567.135f, 30.7544f };
			*uParam3 = 210.3833f;
			*uParam4 = 0.2f;
		}
	}
	else if (iParam0 == 43)
	{
		if (iParam1 == 0)
		{
			*uParam2 = { 1182.498f, 2653.582f, 36.8099f };
			*uParam3 = 304.7889f;
			*uParam4 = 1f;
		}
		else if (iParam1 == 1)
		{
			*uParam2 = { 1190.678f, 2661.143f, 36.8165f };
			*uParam3 = 321.483f;
			*uParam4 = 1f;
		}
		else if (iParam1 == 2)
		{
			*uParam2 = { 1196.733f, 2669.66f, 36.7883f };
			*uParam3 = 345.6812f;
			*uParam4 = 0.8f;
		}
		else if (iParam1 == 3)
		{
			*uParam2 = { 1200.466f, 2666.494f, 36.8099f };
			*uParam3 = 347.5349f;
			*uParam4 = 0.6f;
		}
		else if (iParam1 == 4)
		{
			*uParam2 = { 1205.586f, 2667.136f, 36.8099f };
			*uParam3 = 352.7466f;
			*uParam4 = 0.5f;
		}
		else if (iParam1 == 5)
		{
			*uParam2 = { 1210.698f, 2666.592f, 36.8099f };
			*uParam3 = 7.6557f;
			*uParam4 = 0.1f;
		}
		else if (iParam1 == 6)
		{
			*uParam2 = { 1193.573f, 2688.714f, 36.7457f };
			*uParam3 = 87.5179f;
			*uParam4 = 0.2f;
		}
		else if (iParam1 == 7)
		{
			*uParam2 = { 1181.127f, 2689.26f, 36.8532f };
			*uParam3 = 87.4959f;
			*uParam4 = 0.4f;
		}
		else if (iParam1 == 8)
		{
			*uParam2 = { 1162.459f, 2689.204f, 37.1039f };
			*uParam3 = 87.5173f;
			*uParam4 = 0.3f;
		}
		else if (iParam1 == 9)
		{
			*uParam2 = { 1162.663f, 2677.458f, 37.078f };
			*uParam3 = 268.6483f;
			*uParam4 = 0.1f;
		}
		else if (iParam1 == 10)
		{
			*uParam2 = { 1171.858f, 2677.125f, 36.995f };
			*uParam3 = 267.8824f;
			*uParam4 = 0.2f;
		}
		else if (iParam1 == 11)
		{
			*uParam2 = { 1224.358f, 2677.226f, 36.6702f };
			*uParam3 = 272.1325f;
			*uParam4 = 0.1f;
		}
	}
	else if (iParam0 == 44)
	{
		if (iParam1 == 0)
		{
			*uParam2 = { -199.5331f, -1301.69f, 30.296f };
			*uParam3 = 263.703f;
			*uParam4 = 1f;
		}
		else if (iParam1 == 1)
		{
			*uParam2 = { -205.9477f, -1303.868f, 30.2575f };
			*uParam3 = 1.5267f;
			*uParam4 = 0.9f;
		}
		else if (iParam1 == 2)
		{
			*uParam2 = { -200.7847f, -1298.636f, 30.296f };
			*uParam3 = 89.6847f;
			*uParam4 = 0.8f;
		}
		else if (iParam1 == 3)
		{
			*uParam2 = { -193.9668f, -1305.65f, 30.3643f };
			*uParam3 = 86.5508f;
			*uParam4 = 0.7f;
		}
		else if (iParam1 == 4)
		{
			*uParam2 = { -213.389f, -1305.822f, 30.3533f };
			*uParam3 = 88.0277f;
			*uParam4 = 0.6f;
		}
		else if (iParam1 == 5)
		{
			*uParam2 = { -210.4487f, -1301.42f, 30.296f };
			*uParam3 = 50.2894f;
			*uParam4 = 0.5f;
		}
		else if (iParam1 == 6)
		{
			*uParam2 = { -193.1976f, -1302.892f, 30.296f };
			*uParam3 = 310.5602f;
			*uParam4 = 0.4f;
		}
		else if (iParam1 == 7)
		{
			*uParam2 = { -198.882f, -1304.772f, 30.325f };
			*uParam3 = 268.713f;
			*uParam4 = 0.3f;
		}
		else if (iParam1 == 8)
		{
			*uParam2 = { -230.2501f, -1305.596f, 30.3533f };
			*uParam3 = 89.1508f;
			*uParam4 = 0.2f;
		}
		else if (iParam1 == 9)
		{
			*uParam2 = { -186.4736f, -1305.746f, 30.3495f };
			*uParam3 = 270.2632f;
			*uParam4 = 0.2f;
		}
		else if (iParam1 == 10)
		{
			*uParam2 = { -236.5289f, -1302.071f, 30.296f };
			*uParam3 = 270.2677f;
			*uParam4 = 0.1f;
		}
		else if (iParam1 == 11)
		{
			*uParam2 = { -181.8344f, -1299.311f, 30.296f };
			*uParam3 = 88.0286f;
			*uParam4 = 0.1f;
		}
	}
	else if (func_184(iParam0, iParam5))
	{
		if (iParam1 == 0)
		{
			*uParam2 = { -795.6738f, 306.1536f, 84.7005f };
			*uParam3 = 175.3352f;
			*uParam4 = 1f;
		}
		else if (iParam1 == 1)
		{
			*uParam2 = { -795.6738f, 306.1536f, 84.7005f };
			*uParam3 = 175.3352f;
			*uParam4 = 0.9f;
		}
		else if (iParam1 == 2)
		{
			*uParam2 = { -795.6738f, 306.1536f, 84.7005f };
			*uParam3 = 175.3352f;
			*uParam4 = 0.8f;
		}
		else if (iParam1 == 3)
		{
			*uParam2 = { -795.6738f, 306.1536f, 84.7005f };
			*uParam3 = 175.3352f;
			*uParam4 = 0.7f;
		}
		else if (iParam1 == 4)
		{
			*uParam2 = { -795.6738f, 306.1536f, 84.7005f };
			*uParam3 = 175.3352f;
			*uParam4 = 0.6f;
		}
		else if (iParam1 == 5)
		{
			*uParam2 = { -795.6738f, 306.1536f, 84.7005f };
			*uParam3 = 175.3352f;
			*uParam4 = 0.5f;
		}
		else if (iParam1 == 6)
		{
			*uParam2 = { -795.6738f, 306.1536f, 84.7005f };
			*uParam3 = 175.3352f;
			*uParam4 = 0.4f;
		}
		else if (iParam1 == 7)
		{
			*uParam2 = { -795.6738f, 306.1536f, 84.7005f };
			*uParam3 = 175.3352f;
			*uParam4 = 0.3f;
		}
		else if (iParam1 == 8)
		{
			*uParam2 = { -795.6738f, 306.1536f, 84.7005f };
			*uParam3 = 175.3352f;
			*uParam4 = 0.2f;
		}
		else if (iParam1 == 9)
		{
			*uParam2 = { -795.6738f, 306.1536f, 84.7005f };
			*uParam3 = 175.3352f;
			*uParam4 = 0.2f;
		}
		else if (iParam1 == 10)
		{
			*uParam2 = { -795.6738f, 306.1536f, 84.7005f };
			*uParam3 = 175.3352f;
			*uParam4 = 0.1f;
		}
		else if (iParam1 == 11)
		{
			*uParam2 = { -795.6738f, 306.1536f, 84.7005f };
			*uParam3 = 175.3352f;
			*uParam4 = 0.1f;
		}
	}
	else if (func_183(iParam0, iParam5))
	{
		switch (iParam5)
		{
			case 6:
				if (iParam1 == 0)
				{
					*uParam2 = { -1574.907f, -569.6819f, 104.2001f };
					*uParam3 = 104.9486f;
					*uParam4 = 1f;
				}
				else if (iParam1 == 1)
				{
					*uParam2 = { -1573.983f, -570.0646f, 104.2001f };
					*uParam3 = 104.9486f;
					*uParam4 = 0.9f;
				}
				else if (iParam1 == 2)
				{
					*uParam2 = { -1575.289f, -570.6058f, 104.2001f };
					*uParam3 = 104.9486f;
					*uParam4 = 0.8f;
				}
				else if (iParam1 == 3)
				{
					*uParam2 = { -1575.83f, -569.2993f, 104.2001f };
					*uParam3 = 104.9486f;
					*uParam4 = 0.7f;
				}
				else if (iParam1 == 4)
				{
					*uParam2 = { -1574.524f, -568.7581f, 104.2001f };
					*uParam3 = 104.9486f;
					*uParam4 = 0.6f;
				}
				else if (iParam1 == 5)
				{
					*uParam2 = { -1574.365f, -570.9885f, 104.2001f };
					*uParam3 = 104.9486f;
					*uParam4 = 0.5f;
				}
				else if (iParam1 == 6)
				{
					*uParam2 = { -1576.213f, -570.2231f, 104.2001f };
					*uParam3 = 104.9486f;
					*uParam4 = 0.4f;
				}
				else if (iParam1 == 7)
				{
					*uParam2 = { -1575.448f, -568.3754f, 104.2001f };
					*uParam3 = 104.9486f;
					*uParam4 = 0.3f;
				}
				else if (iParam1 == 8)
				{
					*uParam2 = { -1573.6f, -569.1407f, 104.2001f };
					*uParam3 = 104.9486f;
					*uParam4 = 0.2f;
				}
				else if (iParam1 == 9)
				{
					*uParam2 = { -1573.059f, -570.4473f, 104.2001f };
					*uParam3 = 104.9486f;
					*uParam4 = 0.2f;
				}
				else if (iParam1 == 10)
				{
					*uParam2 = { -1575.672f, -571.5297f, 104.2001f };
					*uParam3 = 104.9486f;
					*uParam4 = 0.1f;
				}
				else if (iParam1 == 11)
				{
					*uParam2 = { -1576.754f, -568.9166f, 104.2001f };
					*uParam3 = 104.9486f;
					*uParam4 = 0.1f;
				}
				break;
			
			case 7:
				if (iParam1 == 0)
				{
					*uParam2 = { -1387.561f, -481.637f, 77.2001f };
					*uParam3 = 353.0411f;
					*uParam4 = 1f;
				}
				else if (iParam1 == 1)
				{
					*uParam2 = { -1386.637f, -482.0197f, 77.2001f };
					*uParam3 = 353.0411f;
					*uParam4 = 0.9f;
				}
				else if (iParam1 == 2)
				{
					*uParam2 = { -1387.944f, -482.5609f, 77.2001f };
					*uParam3 = 353.0411f;
					*uParam4 = 0.8f;
				}
				else if (iParam1 == 3)
				{
					*uParam2 = { -1388.485f, -481.2543f, 77.2001f };
					*uParam3 = 353.0411f;
					*uParam4 = 0.7f;
				}
				else if (iParam1 == 4)
				{
					*uParam2 = { -1387.178f, -480.7131f, 77.2001f };
					*uParam3 = 353.0411f;
					*uParam4 = 0.6f;
				}
				else if (iParam1 == 5)
				{
					*uParam2 = { -1387.02f, -482.9435f, 77.2001f };
					*uParam3 = 353.0411f;
					*uParam4 = 0.5f;
				}
				else if (iParam1 == 6)
				{
					*uParam2 = { -1388.868f, -482.1782f, 77.2001f };
					*uParam3 = 353.0411f;
					*uParam4 = 0.4f;
				}
				else if (iParam1 == 7)
				{
					*uParam2 = { -1388.102f, -480.3304f, 77.2001f };
					*uParam3 = 353.0411f;
					*uParam4 = 0.3f;
				}
				else if (iParam1 == 8)
				{
					*uParam2 = { -1386.255f, -481.0958f, 77.2001f };
					*uParam3 = 353.0411f;
					*uParam4 = 0.2f;
				}
				else if (iParam1 == 9)
				{
					*uParam2 = { -1385.713f, -482.4024f, 77.2001f };
					*uParam3 = 353.0411f;
					*uParam4 = 0.2f;
				}
				else if (iParam1 == 10)
				{
					*uParam2 = { -1388.327f, -483.4847f, 77.2001f };
					*uParam3 = 353.0411f;
					*uParam4 = 0.1f;
				}
				else if (iParam1 == 11)
				{
					*uParam2 = { -1389.409f, -480.8716f, 77.2001f };
					*uParam3 = 353.0411f;
					*uParam4 = 0.1f;
				}
				break;
			
			case 8:
				if (iParam1 == 0)
				{
					*uParam2 = { -142.5312f, -590.6586f, 166.0001f };
					*uParam3 = 110.9811f;
					*uParam4 = 1f;
				}
				else if (iParam1 == 1)
				{
					*uParam2 = { -141.6073f, -591.0413f, 166.0001f };
					*uParam3 = 110.9811f;
					*uParam4 = 0.9f;
				}
				else if (iParam1 == 2)
				{
					*uParam2 = { -142.9139f, -591.5825f, 166.0001f };
					*uParam3 = 110.9811f;
					*uParam4 = 0.8f;
				}
				else if (iParam1 == 3)
				{
					*uParam2 = { -143.4551f, -590.2759f, 166.0001f };
					*uParam3 = 110.9811f;
					*uParam4 = 0.7f;
				}
				else if (iParam1 == 4)
				{
					*uParam2 = { -142.1485f, -589.7347f, 166.0001f };
					*uParam3 = 110.9811f;
					*uParam4 = 0.6f;
				}
				else if (iParam1 == 5)
				{
					*uParam2 = { -141.99f, -591.9651f, 166.0001f };
					*uParam3 = 110.9811f;
					*uParam4 = 0.5f;
				}
				else if (iParam1 == 6)
				{
					*uParam2 = { -143.8378f, -591.1998f, 166.0001f };
					*uParam3 = 110.9811f;
					*uParam4 = 0.4f;
				}
				else if (iParam1 == 7)
				{
					*uParam2 = { -143.0724f, -589.352f, 166.0001f };
					*uParam3 = 110.9811f;
					*uParam4 = 0.3f;
				}
				else if (iParam1 == 8)
				{
					*uParam2 = { -141.2247f, -590.1174f, 166.0001f };
					*uParam3 = 110.9811f;
					*uParam4 = 0.2f;
				}
				else if (iParam1 == 9)
				{
					*uParam2 = { -141.2247f, -590.1174f, 166.0001f };
					*uParam3 = 110.9811f;
					*uParam4 = 0.2f;
				}
				else if (iParam1 == 10)
				{
					*uParam2 = { -140.6835f, -591.424f, 166.0001f };
					*uParam3 = 110.9811f;
					*uParam4 = 0.1f;
				}
				else if (iParam1 == 11)
				{
					*uParam2 = { -143.2966f, -592.5063f, 166.0001f };
					*uParam3 = 110.9811f;
					*uParam4 = 0.1f;
				}
				break;
			
			case 9:
				if (iParam1 == 0)
				{
					*uParam2 = { -74.8035f, -814.8599f, 284.0001f };
					*uParam3 = 146.2765f;
					*uParam4 = 1f;
				}
				else if (iParam1 == 1)
				{
					*uParam2 = { -73.8796f, -815.2426f, 284.0001f };
					*uParam3 = 146.2765f;
					*uParam4 = 0.9f;
				}
				else if (iParam1 == 2)
				{
					*uParam2 = { -75.1862f, -815.7838f, 284.0001f };
					*uParam3 = 146.2765f;
					*uParam4 = 0.8f;
				}
				else if (iParam1 == 3)
				{
					*uParam2 = { -75.7274f, -814.4772f, 284.0001f };
					*uParam3 = 146.2765f;
					*uParam4 = 0.7f;
				}
				else if (iParam1 == 4)
				{
					*uParam2 = { -74.4208f, -813.936f, 284.0001f };
					*uParam3 = 146.2765f;
					*uParam4 = 0.6f;
				}
				else if (iParam1 == 5)
				{
					*uParam2 = { -74.2623f, -816.1664f, 284.0001f };
					*uParam3 = 146.2765f;
					*uParam4 = 0.5f;
				}
				else if (iParam1 == 6)
				{
					*uParam2 = { -76.11f, -815.4011f, 284.0001f };
					*uParam3 = 146.2765f;
					*uParam4 = 0.4f;
				}
				else if (iParam1 == 7)
				{
					*uParam2 = { -75.3447f, -813.5533f, 284.0001f };
					*uParam3 = 146.2765f;
					*uParam4 = 0.3f;
				}
				else if (iParam1 == 8)
				{
					*uParam2 = { -73.4969f, -814.3187f, 284.0001f };
					*uParam3 = 146.2765f;
					*uParam4 = 0.2f;
				}
				else if (iParam1 == 9)
				{
					*uParam2 = { -72.9557f, -815.6252f, 284.0001f };
					*uParam3 = 146.2765f;
					*uParam4 = 0.2f;
				}
				else if (iParam1 == 10)
				{
					*uParam2 = { -75.5689f, -816.7076f, 284.0001f };
					*uParam3 = 146.2765f;
					*uParam4 = 0.1f;
				}
				else if (iParam1 == 11)
				{
					*uParam2 = { -76.6513f, -814.0945f, 284.0001f };
					*uParam3 = 146.2765f;
					*uParam4 = 0.1f;
				}
				break;
		}
	}
	else if (func_182(iParam0, iParam5))
	{
		if (iParam1 == 0)
		{
			*uParam2 = { -1200.862f, -1737.385f, 3.1713f };
			*uParam3 = 284.5345f;
			*uParam4 = 1f;
		}
		else if (iParam1 == 1)
		{
			*uParam2 = { -1200.862f, -1737.385f, 3.1713f };
			*uParam3 = 284.5345f;
			*uParam4 = 0.9f;
		}
		else if (iParam1 == 2)
		{
			*uParam2 = { -1200.862f, -1737.385f, 3.1713f };
			*uParam3 = 284.5345f;
			*uParam4 = 0.8f;
		}
		else if (iParam1 == 3)
		{
			*uParam2 = { -1200.862f, -1737.385f, 3.1713f };
			*uParam3 = 284.5345f;
			*uParam4 = 0.7f;
		}
		else if (iParam1 == 4)
		{
			*uParam2 = { -1200.862f, -1737.385f, 3.1713f };
			*uParam3 = 284.5345f;
			*uParam4 = 0.6f;
		}
		else if (iParam1 == 5)
		{
			*uParam2 = { -1200.862f, -1737.385f, 3.1713f };
			*uParam3 = 284.5345f;
			*uParam4 = 0.5f;
		}
		else if (iParam1 == 6)
		{
			*uParam2 = { -1200.862f, -1737.385f, 3.1713f };
			*uParam3 = 284.5345f;
			*uParam4 = 0.4f;
		}
		else if (iParam1 == 7)
		{
			*uParam2 = { -1200.862f, -1737.385f, 3.1713f };
			*uParam3 = 284.5345f;
			*uParam4 = 0.3f;
		}
		else if (iParam1 == 8)
		{
			*uParam2 = { -1200.862f, -1737.385f, 3.1713f };
			*uParam3 = 284.5345f;
			*uParam4 = 0.2f;
		}
		else if (iParam1 == 9)
		{
			*uParam2 = { -1200.862f, -1737.385f, 3.1713f };
			*uParam3 = 284.5345f;
			*uParam4 = 0.2f;
		}
		else if (iParam1 == 10)
		{
			*uParam2 = { -1200.862f, -1737.385f, 3.1713f };
			*uParam3 = 284.5345f;
			*uParam4 = 0.1f;
		}
		else if (iParam1 == 11)
		{
			*uParam2 = { -1200.862f, -1737.385f, 3.1713f };
			*uParam3 = 284.5345f;
			*uParam4 = 0.1f;
		}
	}
	else if (func_181(iParam0, iParam5))
	{
		if (iParam1 == 0)
		{
			*uParam2 = { 2799.313f, -3931.387f, 147.0031f };
			*uParam3 = 0f;
			*uParam4 = 1f;
		}
		else if (iParam1 == 1)
		{
			*uParam2 = { 2801.313f, -3931.387f, 147.0031f };
			*uParam3 = 0f;
			*uParam4 = 0.9f;
		}
		else if (iParam1 == 2)
		{
			*uParam2 = { 2799.313f, -3929.387f, 147.0031f };
			*uParam3 = 0f;
			*uParam4 = 0.8f;
		}
		else if (iParam1 == 3)
		{
			*uParam2 = { 2801.313f, -3929.387f, 147.0031f };
			*uParam3 = 0f;
			*uParam4 = 0.7f;
		}
		else if (iParam1 == 4)
		{
			*uParam2 = { 2799.313f, -3927.387f, 147.0031f };
			*uParam3 = 0f;
			*uParam4 = 0.6f;
		}
		else if (iParam1 == 5)
		{
			*uParam2 = { 2801.313f, -3927.387f, 147.0031f };
			*uParam3 = 0f;
			*uParam4 = 0.5f;
		}
		else if (iParam1 == 6)
		{
			*uParam2 = { 2799.313f, -3925.387f, 147.0031f };
			*uParam3 = 0f;
			*uParam4 = 0.4f;
		}
		else if (iParam1 == 7)
		{
			*uParam2 = { 2801.313f, -3925.387f, 147.0031f };
			*uParam3 = 0f;
			*uParam4 = 0.3f;
		}
		else if (iParam1 == 8)
		{
			*uParam2 = { 2801.313f, -3929.387f, 147.0031f };
			*uParam3 = 0f;
			*uParam4 = 0.2f;
		}
		else if (iParam1 == 9)
		{
			*uParam2 = { 2799.313f, -3929.387f, 147.0031f };
			*uParam3 = 0f;
			*uParam4 = 0.2f;
		}
		else if (iParam1 == 10)
		{
			*uParam2 = { 2801.313f, -3931.387f, 147.0031f };
			*uParam3 = 0f;
			*uParam4 = 0.1f;
		}
		else if (iParam1 == 11)
		{
			*uParam2 = { 2799.313f, -3931.387f, 147.0031f };
			*uParam3 = 0f;
			*uParam4 = 0.1f;
		}
	}
	return !func_31(*uParam2, 0f, 0f, 0f, 0);
}

int func_181(int iParam0, int iParam1)
{
	if (iParam0 == 45)
	{
		if (iParam1 == 17)
		{
			return 1;
		}
	}
	return 0;
}

int func_182(int iParam0, int iParam1)
{
	if (iParam0 == 45)
	{
		if (iParam1 == 10)
		{
			return 1;
		}
	}
	return 0;
}

int func_183(int iParam0, int iParam1)
{
	if (iParam0 == 45)
	{
		if (((iParam1 == 6 || iParam1 == 7) || iParam1 == 8) || iParam1 == 9)
		{
			return 1;
		}
	}
	return 0;
}

int func_184(int iParam0, int iParam1)
{
	if (iParam0 == 45)
	{
		if ((iParam1 == 1 || iParam1 == 2) || iParam1 == 3)
		{
			return 1;
		}
	}
	return 0;
}

int func_185(struct<3> Param0, var uParam1, struct<3> Param2)
{
	int iVar0;
	int iVar1;
	
	if (!AUDIO::IS_MOBILE_PHONE_CALL_ONGOING(Param0))
	{
		iVar0 = unk_0xC519B5898C2310B1(Param2, uParam1);
		if (!unk_0x0B1B45E748AD48BA(iVar0))
		{
			return 0;
		}
		iVar1 = INTERIOR::GET_INTERIOR_FROM_COLLISION(Param0);
		if (iVar1 == iVar0)
		{
			return 1;
		}
	}
	return 0;
}

char* func_186(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return "";
			break;
		
		case 0:
			return "v_hairdresser";
			break;
		
		case 1:
			return "v_barbers";
			break;
		
		case 2:
			return "v_barbers";
			break;
		
		case 3:
			return "v_barbers";
			break;
		
		case 4:
			return "v_barbers";
			break;
		
		case 5:
			return "v_barbers";
			break;
		
		case 6:
			return "v_barbers";
			break;
		
		case 7:
			return "v_clotheslo";
			break;
		
		case 8:
			return "v_clotheslo";
			break;
		
		case 9:
			return "v_clotheslo";
			break;
		
		case 10:
			return "v_clotheslo";
			break;
		
		case 11:
			return "v_clotheslo";
			break;
		
		case 12:
			return "v_clotheslo";
			break;
		
		case 13:
			return "v_clotheslo";
			break;
		
		case 14:
			return "v_clothesmid";
			break;
		
		case 15:
			return "v_clothesmid";
			break;
		
		case 16:
			return "v_clothesmid";
			break;
		
		case 17:
			return "v_clothesmid";
			break;
		
		case 18:
			return "v_clotheshi";
			break;
		
		case 19:
			return "v_clotheshi";
			break;
		
		case 20:
			return "v_clotheshi";
			break;
		
		case 21:
			return "";
			break;
		
		case 22:
			return "v_tattoo";
			break;
		
		case 23:
			return "v_tattoo2";
			break;
		
		case 24:
			return "v_tattoo2";
			break;
		
		case 25:
			return "v_tattoo";
			break;
		
		case 26:
			return "v_tattoo";
			break;
		
		case 27:
			return "v_tattoo";
			break;
		
		case 28:
			return "v_gun";
			break;
		
		case 29:
			return "v_gun2";
			break;
		
		case 30:
			return "v_gun2";
			break;
		
		case 31:
			return "v_gun2";
			break;
		
		case 32:
			return "v_gun2";
			break;
		
		case 33:
			return "v_gun2";
			break;
		
		case 34:
			return "v_gun2";
			break;
		
		case 35:
			return "v_gun2";
			break;
		
		case 36:
			return "v_gun2";
			break;
		
		case 37:
			return "v_gun2";
			break;
		
		case 38:
			return "v_gun";
			break;
		
		case 39:
			return "v_carmod";
			break;
		
		case 40:
			return "v_lockup";
			break;
		
		case 41:
			return "v_carmod";
			break;
		
		case 42:
			return "v_carmod3";
			break;
		
		case 43:
			return "v_carmod3";
			break;
		
		case 44:
			return "lr_supermod_int";
			break;
		
		case 45:
			return func_187(Global_101058);
			break;
		
		case 46:
			return "gr_grdlc_int_01";
			break;
		
		case 47:
			return "xm_x17dlc_int_01";
			break;
		
		case 48:
			return "ba_dlc_int_03_ba";
			break;
		
		case 49:
			return "xs_x18_int_mod";
			break;
		
		case 52:
			return "ch_dlc_plan";
			break;
		
		case 50:
			return "vw_dlc_casino_apart";
			break;
		
		case 51:
			return "vw_dlc_casino_main";
			break;
		
		case 53:
			return "h4_int_sub_h4";
			break;
	}
	return "";
}

char* func_187(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "imp_impexp_intwaremed";
			break;
		
		case 2:
			return "imp_impexp_intwaremed";
			break;
		
		case 3:
			return "imp_impexp_intwaremed";
			break;
		
		case 6:
		case 7:
		case 8:
		case 9:
			return "imp_imptexp_mod_int_01";
			break;
		
		case 4:
			return "Bkr_Biker_DLC_INT_01";
			break;
		
		case 5:
			return "Bkr_Biker_DLC_INT_02";
			break;
		
		case 10:
			return "gr_grdlc_int_01";
			break;
		
		case 11:
			return "gr_grdlc_int_02";
			break;
		
		case 12:
			return "sm_smugdlc_int_01";
			break;
		
		case 13:
			return "xm_x17dlc_int_01";
			break;
		
		case 14:
			return "xm_x17dlc_int_02";
			break;
		
		case 15:
			return "ba_dlc_int_01_ba";
			break;
		
		case 16:
			return "ba_dlc_int_03_ba";
			break;
		
		case 17:
			if (func_161() == 0)
			{
				return "xs_x18_int_mod";
			}
			else
			{
				return "xs_x18_int_mod2";
			}
			break;
		
		default:
			return "";
			break;
	}
	return "";
}

void func_188()
{
	int iVar0;
	bool bVar1;
	int iVar2;
	
	if (iLocal_285 > -1)
	{
		if (iLocal_285 != NETWORK::PARTICIPANT_ID_TO_INT())
		{
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_285)))
			{
				iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_285));
				bVar1 = true;
				if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(iVar0, PLAYER::PLAYER_ID()))
				{
					iVar2 = 1;
				}
			}
		}
	}
	if (NETWORK::NETWORK_IS_HANDLE_VALID(Local_322.f_22))
	{
		if (func_4(Local_322.f_22))
		{
			if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(unk_0x9B0761B4C3EB8BC7()))
			{
				if (!unk_0xE0B3BC41DDA88DF0(unk_0x9B0761B4C3EB8BC7(), unk_0x770D3B2B4702434A(Local_322.f_22), 0))
				{
					if (Local_329[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1 == 0)
					{
						if (!bVar1 || (bVar1 && iVar2))
						{
							func_189(unk_0x770D3B2B4702434A(Local_322.f_22), 0, 10);
						}
					}
				}
			}
		}
	}
}

void func_189(bool bParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	HUD::GET_HUD_COLOUR(iParam2, &iVar0, &iVar1, &iVar2, &uVar3);
	if (iParam1 == 0)
	{
	}
	VEHICLE::TRACK_VEHICLE_VISIBILITY(bParam0);
	if (func_14(PLAYER::PLAYER_ID(), 1, 1))
	{
		if (ENTITY::GET_ENTITY_COORDS(bParam0, false))
		{
			if (func_190(bParam0) == 0)
			{
				if (!unk_0xE0B3BC41DDA88DF0(unk_0x9B0761B4C3EB8BC7(), bParam0, 0))
				{
					if (VEHICLE::IS_VEHICLE_VISIBLE(bParam0))
					{
						GRAPHICS::ADD_ENTITY_ICON(bParam0, "MP_Arrow");
						GRAPHICS::SET_ENTITY_ICON_COLOR(bParam0, iVar0, iVar1, iVar2, 190);
						GRAPHICS::SET_ENTITY_ICON_VISIBILITY(bParam0, true);
					}
				}
			}
		}
	}
}

int func_190(bool bParam0)
{
	void fVar0;
	
	fVar0 = MISC::GET_MODEL_DIMENSIONS(bParam0);
	if (VEHICLE::IS_THIS_MODEL_A_HELI(fVar0) == 0 && VEHICLE::IS_THIS_MODEL_A_PLANE(fVar0) == 0)
	{
		return 0;
	}
	if (VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(bParam0))
	{
		return 0;
	}
	return 1;
}

void func_191()
{
	int iVar0;
	
	if (unk_0xCE990E643CD9D0E5(iLocal_330, 5))
	{
		if (iLocal_284 != iLocal_285)
		{
			if (iLocal_285 > -1)
			{
				if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_285)))
				{
					iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_285));
					if (iVar0 != PLAYER::PLAYER_ID())
					{
						if (!func_260(PLAYER::PLAYER_ID(), 1, 0))
						{
							func_192("IMPEX_TICK_DHPV", iVar0, 0, 0, 0, 1, 0);
						}
					}
					if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
					{
						if (!unk_0xCE990E643CD9D0E5(Local_322.f_23, 8))
						{
							unk_0xBE20AB8238688965(&(Local_322.f_23), 8);
						}
					}
				}
			}
			iLocal_284 = iLocal_285;
		}
	}
}

int func_192(char* sParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	struct<16> Var2;
	bool bVar3;
	bool bVar4;
	
	iVar0 = -1;
	iVar1 = unk_0x6CC163E30ECE0790(iParam1);
	if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), bParam1) || iParam3)
	{
		if (!bParam2)
		{
			StringCopy(&Var2, DATAFILE::DATADICT_GET_ARRAY(bParam1), 64);
		}
		else
		{
			StringCopy(&Var2, DATAFILE::DATADICT_GET_ARRAY(bParam1), 64);
		}
		if (CAM::IS_SCREEN_FADED_OUT(&Var2))
		{
		}
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
		if ((iVar1 != -1 && STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED()) && iVar1 < 4)
		{
			if (Global_4456448.f_77785[iVar1] != -1)
			{
				unk_0x7006FC1051C85FCA(func_233(iVar1, bParam1, 0));
			}
			else
			{
				unk_0x7006FC1051C85FCA(func_201(bParam1, -2, 1, 0, 0));
			}
		}
		else
		{
			unk_0x7006FC1051C85FCA(func_201(bParam1, -2, 1, 0, 0));
		}
		unk_0x9EFD301E3BE8324E(func_199(&Var2));
		if (!bParam4)
		{
			iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true);
		}
		else
		{
			Global_2515173 = { func_198(bParam1) };
			if (DATAFILE::DATAARRAY_GET_COUNT(&Global_2515103, 35, &Global_2515173))
			{
				bVar3 = false;
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS(&(Global_2515103.f_22), "Leader") && Global_2515103.f_30 == 0)
				{
					bVar3 = true;
				}
				if (Global_2515103.f_21 > 0)
				{
					bVar4 = false;
				}
				else
				{
					bVar4 = true;
				}
				if (bParam5)
				{
					if (bParam6)
					{
						Var2 = { func_197(&Var2) };
					}
					iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_CREWTAG_WITH_GAME_NAME(bVar4, NETWORK::NETWORK_CLAN_IS_ROCKSTAR_CLAN(&Global_2515103, 35), &(Global_2515103.f_17), Global_2515103.f_30, bVar3, false, Global_2515103, &Var2, Global_1314053, Global_1314054, Global_1314055);
				}
				else
				{
					iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_CREWTAG(bVar4, NETWORK::NETWORK_CLAN_IS_ROCKSTAR_CLAN(&Global_2515103, 35), &(Global_2515103.f_17), Global_2515103.f_30, bVar3, false, Global_2515103, Global_1314053, Global_1314054, Global_1314055);
				}
			}
			else
			{
				iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true);
			}
		}
		func_193(14, sParam0, 1, &Var2, 0, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_193(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_196() || !STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED()) || !func_24(PLAYER::PLAYER_ID(), 0))
	{
		return;
	}
	iVar0 = func_194(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1672611.f_5[iVar0 /*53*/] = iParam0;
		Global_1672611.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_1672611.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_1672611.f_5[iVar0 /*53*/].f_2[0] = iParam4;
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

int func_194(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1672611 - 1))
	{
		if (iParam0 > Global_1672611.f_5[iVar0 /*53*/].f_1)
		{
			func_195(iVar0);
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

void func_195(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1672611.f_5[iVar0 /*53*/] = { Global_1672611.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_196()
{
	return GRAPHICS::DRAW_RECT(-1762644250);
}

struct<16> func_197(char* sParam0)
{
	struct<16> Var0;
	
	StringCopy(&Var0, "<C>", 64);
	StringConCat(&Var0, "~HUD_COLOUR_SOCIAL_CLUB~", 64);
	StringConCat(&Var0, sParam0, 64);
	StringConCat(&Var0, "</C>", 64);
	return Var0;
}

struct<13> func_198(int iParam0)
{
	struct<13> Var0;
	
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
	return Var0;
}

var func_199(char* sParam0)
{
	char cVar0[64];
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_200(&cVar0);
}

var func_200(char[4] cParam0)
{
	return cParam0;
}

int func_201(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	
	if (func_231(iParam0) && !bParam4)
	{
		if (bParam2)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	if (iParam1 == -2)
	{
		iVar0 = unk_0x6CC163E30ECE0790(iParam0);
		if (iVar0 > -1 && iVar0 < 4)
		{
			if (Global_4456448.f_77785[iVar0] != -1)
			{
				iParam1 = iVar0;
			}
		}
	}
	if (((func_231(PLAYER::PLAYER_ID()) || (func_230() && func_229())) && !unk_0xCE990E643CD9D0E5(Global_2540384.f_4655, 31)) && !bParam4)
	{
		bVar1 = func_228();
		if (MISC::IS_BIT_SET(bVar1))
		{
			if (PLAYER::SET_PLAYER_WANTED_LEVEL(bVar1))
			{
				if (VEHICLE::GET_VEHICLE_NUMBER_OF_PASSENGERS(bVar1) != -1)
				{
					if (func_14(VEHICLE::GET_VEHICLE_NUMBER_OF_PASSENGERS(bVar1), 0, 1))
					{
						if ((iParam1 > -1 && STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED()) && iParam1 < 4)
						{
							if (Global_4456448.f_77785[iParam1] != -1)
							{
								return func_233(iParam1, bParam0, 0);
							}
							else
							{
								return func_214(bParam0, VEHICLE::GET_VEHICLE_NUMBER_OF_PASSENGERS(bVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_214(bParam0, VEHICLE::GET_VEHICLE_NUMBER_OF_PASSENGERS(bVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED()) && iParam1 < 4)
			{
				if (Global_4456448.f_77785[iParam1] != -1)
				{
					return func_233(iParam1, bParam0, 0);
				}
				else
				{
					return func_202(0, -1, 0);
				}
			}
			else
			{
				return func_202(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED()) && iParam1 < 4)
	{
		if (Global_4456448.f_77785[iParam1] != -1)
		{
			return func_233(iParam1, bParam0, 0);
		}
		else
		{
			return func_214(bParam0, PLAYER::PLAYER_ID(), iParam1, bParam2, bParam3);
		}
	}
	return func_214(bParam0, PLAYER::PLAYER_ID(), iParam1, bParam2, bParam3);
}

int func_202(bool bParam0, int iParam1, bool bParam2)
{
	return func_203(PLAYER::PLAYER_ID(), bParam0, iParam1, bParam2);
}

int func_203(bool bParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (!AUDIO::PLAY_STREAM_FROM_VEHICLE(iParam0))
	{
		return 3;
	}
	iVar0 = unk_0x6CC163E30ECE0790(bParam0);
	if ((func_213() || (func_212() && func_210())) && Global_1388252.f_1)
	{
		if (bParam1)
		{
			return func_209(iParam2, iVar0);
		}
		else
		{
			return func_209(iVar0, iVar0);
		}
	}
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_208(iVar0, iParam2, 0) && !unk_0xCE990E643CD9D0E5(Global_4456448.f_15, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_207(1);
				}
				else
				{
					return func_207(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (unk_0xCE990E643CD9D0E5(Global_4456448.f_4, 20))
			{
				return func_204(iVar0, iParam2, 1, 4);
			}
			else
			{
				return func_204(iVar0, iParam2, 0, 4);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_207(1);
	}
	return func_207(0);
}

int func_204(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_206(iParam0, iParam1, iParam3);
	if (func_205(Global_4456448.f_82708, 1))
	{
		if (iVar0 == 1)
		{
			iVar0 = 0;
		}
	}
	if (bParam2)
	{
		switch (iVar0)
		{
			case 0:
				return 28;
			
			case 1:
				return 29;
			
			case 2:
				return 30;
			
			case 3:
				return 31;
			
			case 4:
				return 32;
			
			case 5:
				return 33;
			
			case 6:
				return 34;
			
			case 7:
				return 35;
			
			case 8:
				return 36;
			
			case 9:
				return 37;
			
			case 10:
				return 38;
			
			case 11:
				return 39;
			
			case 12:
				return 40;
			
			case 13:
				return 41;
			
			case 14:
				return 42;
			
			case 15:
				return 43;
			
			default:
		}
	}
	else
	{
		switch (iVar0)
		{
			case 0:
				return 28;
			
			case 1:
				return 29;
			
			case 2:
				return 30;
			}
		
		default:
	}
	return 28;
}

int func_205(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (bParam1)
	{
		if (Global_4456448.f_129348 == 65)
		{
			return 1;
		}
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (iParam0 == Global_262145.f_9021[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_206(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < iParam2)
	{
		if (iVar0 == iParam1)
		{
			return iVar1;
		}
		else if (!iParam0 == iVar0)
		{
			if (!func_208(iParam0, iVar0, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_207(bool bParam0)
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_208(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 1)
	{
		if (iParam0 == iParam1)
		{
			return 1;
		}
		return 0;
	}
	if ((iParam0 > -1 && iParam1 > -1) && iParam0 == iParam1)
	{
		return 1;
	}
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return unk_0xCE990E643CD9D0E5(Global_4456448.f_541, 0);
				
				case 1:
					return unk_0xCE990E643CD9D0E5(Global_4456448.f_541, 1);
				
				case 2:
					return unk_0xCE990E643CD9D0E5(Global_4456448.f_541, 2);
				
				case 3:
					return unk_0xCE990E643CD9D0E5(Global_4456448.f_541, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return unk_0xCE990E643CD9D0E5(Global_4456448.f_541, 4);
				
				case 1:
					return unk_0xCE990E643CD9D0E5(Global_4456448.f_541, 5);
				
				case 2:
					return unk_0xCE990E643CD9D0E5(Global_4456448.f_541, 6);
				
				case 3:
					return unk_0xCE990E643CD9D0E5(Global_4456448.f_541, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return unk_0xCE990E643CD9D0E5(Global_4456448.f_541, 8);
				
				case 1:
					return unk_0xCE990E643CD9D0E5(Global_4456448.f_541, 9);
				
				case 2:
					return unk_0xCE990E643CD9D0E5(Global_4456448.f_541, 10);
				
				case 3:
					return unk_0xCE990E643CD9D0E5(Global_4456448.f_541, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return unk_0xCE990E643CD9D0E5(Global_4456448.f_541, 12);
				
				case 1:
					return unk_0xCE990E643CD9D0E5(Global_4456448.f_541, 13);
				
				case 2:
					return unk_0xCE990E643CD9D0E5(Global_4456448.f_541, 14);
				
				case 3:
					return unk_0xCE990E643CD9D0E5(Global_4456448.f_541, 15);
				
				default:
			}
			break;
	}
	return 0;
}

int func_209(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_206(iParam1, iParam0, 4);
	}
	switch (iParam0)
	{
		case 0:
			return 15;
		
		case 1:
			return 21;
		
		case 2:
			return 24;
		
		case 3:
			return 18;
		
		default:
	}
	return 28;
}

bool func_210()
{
	if (func_211())
	{
		return 1;
	}
	return unk_0xCE990E643CD9D0E5(Global_4456448.f_133494, 4);
}

bool func_211()
{
	return unk_0xCE990E643CD9D0E5(Global_4456448.f_123318, 12);
}

bool func_212()
{
	if (STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED())
	{
		return unk_0xCE990E643CD9D0E5(Global_4456448.f_133494, 0);
	}
	return ((unk_0xCE990E643CD9D0E5(Global_4456448.f_133494, 0) || Global_1655243) && INTERIOR::GET_INTERIOR_AT_COORDS(joaat("fm_deathmatch_creator")) > 0);
}

int func_213()
{
	if (func_211() && STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED())
	{
		return 1;
	}
	return 0;
}

int func_214(bool bParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (iParam2 == -2)
	{
		iVar0 = unk_0x6CC163E30ECE0790(iParam0);
	}
	else
	{
		iVar0 = iParam2;
	}
	if (Global_1590682[PLAYER::PLAYER_ID() /*883*/] == 148)
	{
		bVar1 = true;
	}
	iVar2 = bParam0;
	if (iVar2 > -1)
	{
		if (Global_1590682[iVar2 /*883*/] == 148)
		{
			bVar1 = true;
		}
	}
	if (!bVar1)
	{
		if (iVar0 != -1)
		{
			if (func_223())
			{
				iVar3 = func_219(bParam0);
				if (!iVar3 == -1)
				{
					return func_217(iVar3);
				}
			}
			if ((func_216(iParam1, bParam0, iVar0, 0) && !unk_0xCE990E643CD9D0E5(Global_4456448.f_15, 18)) || ((func_208(unk_0x6CC163E30ECE0790(iParam1), unk_0x6CC163E30ECE0790(bParam0), 0) && unk_0xCE990E643CD9D0E5(Global_4456448.f_15, 23)) && !unk_0xCE990E643CD9D0E5(Global_4456448.f_15, 18)))
			{
				return func_207(1);
			}
			else if (unk_0xCE990E643CD9D0E5(Global_4456448.f_15, 26))
			{
				return func_215(1);
			}
			else
			{
				return func_203(bParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1574416 || Global_1574407) || Global_1590682[bParam0 /*883*/] == 0)
		{
			if (bParam0 == bParam1 || (Global_1574416 == 1 && Global_1574426 == 0))
			{
				return func_207(1);
			}
			else
			{
				return func_203(bParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1574411 && Global_1573907.f_14 == bParam0)
		{
			return 28;
		}
	}
	iVar4 = func_219(bParam0);
	if (!iVar4 == -1)
	{
		return func_217(iVar4);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_215(bool bParam0)
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

bool func_216(bool bParam0, bool bParam1, int iParam2, int iParam3)
{
	if (iParam2 == -2)
	{
		if (iParam3 == 0)
		{
			if (unk_0x6CC163E30ECE0790(iParam0) == -1 && unk_0x6CC163E30ECE0790(iParam1) == -1)
			{
				return 0;
			}
		}
		return unk_0x6CC163E30ECE0790(bParam0) == unk_0x6CC163E30ECE0790(bParam1);
	}
	else
	{
		if (iParam3 == 0)
		{
			if (unk_0x6CC163E30ECE0790(bParam0) == -1 && iParam2 == -1)
			{
				return 0;
			}
		}
		return unk_0x6CC163E30ECE0790(bParam0) == iParam2;
	}
	return unk_0x6CC163E30ECE0790(bParam0) == iParam2;
}

int func_217(int iParam0)
{
	int iVar0;
	
	if (iParam0 > -1)
	{
		iVar0 = func_218(iParam0);
		switch (iVar0)
		{
			case 0:
				return 192;
			
			case 1:
				return 193;
			
			case 2:
				return 194;
			
			case 3:
				return 195;
			
			case 4:
				return 196;
			
			case 5:
				return 197;
			
			case 6:
				return 198;
			
			case 7:
				return 199;
			
			case 8:
				return 200;
			
			case 9:
				return 201;
			
			case 10:
				return 202;
			
			case 11:
				return 203;
			
			case 12:
				return 204;
			
			case 13:
				return 205;
			
			case 14:
				return 206;
			}
		
		default:
	}
	return 1;
}

var func_218(int iParam0)
{
	return Global_2417956.f_818.f_44[iParam0 /*2*/].f_1;
}

int func_219(int iParam0)
{
	if (!iParam0 == func_121())
	{
		if (func_221(iParam0, 1))
		{
			return Global_2417956.f_818.f_11[func_220(iParam0)];
		}
	}
	return -1;
}

int func_220(int iParam0)
{
	if (iParam0 != func_121())
	{
		return Global_1630317[iParam0 /*595*/].f_11;
	}
	return func_121();
}

bool func_221(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_222(iParam0))
		{
			return 0;
		}
	}
	return Global_1630317[iParam0 /*595*/].f_11 != func_121();
}

int func_222(int iParam0)
{
	if (iParam0 != func_121())
	{
		if (Global_1630317[iParam0 /*595*/].f_11 != func_121())
		{
			return Global_1630317[iParam0 /*595*/].f_11 == iParam0;
		}
	}
	return 0;
}

int func_223()
{
	if ((((func_227() || func_226()) || func_30()) || func_225()) || func_224())
	{
		return 1;
	}
	if (STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED() && unk_0xCE990E643CD9D0E5(Global_4456448.f_36, 1))
	{
		return 1;
	}
	return 0;
}

var func_224()
{
	return Global_2451787.f_23;
}

var func_225()
{
	return Global_2451787.f_20;
}

var func_226()
{
	return Global_2451787.f_17;
}

var func_227()
{
	return Global_2451787.f_16;
}

var func_228()
{
	return Global_2359302.f_2;
}

bool func_229()
{
	return unk_0xCE990E643CD9D0E5(Global_2359302, 4);
}

bool func_230()
{
	return unk_0xCE990E643CD9D0E5(Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_39.f_18, 14);
}

int func_231(int iParam0)
{
	if (func_24(iParam0, 0))
	{
		return 1;
	}
	if (func_232())
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

bool func_232()
{
	return unk_0xCE990E643CD9D0E5(Global_2359302, 3);
}

int func_233(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = Global_969055.f_14[iParam0];
	if (func_223())
	{
		iVar2 = func_219(iParam1);
		if (!iVar2 == -1)
		{
			return func_217(iVar2);
		}
	}
	if (iVar1 > -1 && iVar1 < 17)
	{
		if (unk_0xCE990E643CD9D0E5(Global_4456448.f_592[iParam0 /*16355*/].f_7079[iVar1], 24))
		{
			return 18;
		}
	}
	if (iParam0 > -1 && iParam1 != func_121())
	{
		if (Global_4456448.f_77785[iParam0] != -1 && Global_4456448.f_77785[iParam0] <= 4)
		{
			if (Global_4456448.f_77785[iParam0] == 0)
			{
				iVar0 = 15;
			}
			else if (Global_4456448.f_77785[iParam0] == 1)
			{
				iVar0 = 18;
			}
			else if (Global_4456448.f_77785[iParam0] == 2)
			{
				iVar0 = 24;
			}
			else if (Global_4456448.f_77785[iParam0] == 4)
			{
				if (unk_0xCE990E643CD9D0E5(Global_4456448.f_15, 29))
				{
					iVar0 = 21;
				}
				else
				{
					iVar0 = 6;
				}
			}
			else
			{
				iVar0 = Global_4456448.f_77785[iParam0];
			}
		}
		else
		{
			iVar0 = func_203(iParam1, !bParam2, iParam0, 0);
		}
		if (unk_0xCE990E643CD9D0E5(Global_4456448.f_21, 13))
		{
			iVar0 = func_234(iParam0);
		}
		if (unk_0xCE990E643CD9D0E5(Global_4456448.f_24, 29))
		{
			iVar0 = 0;
		}
		if (unk_0xCE990E643CD9D0E5(Global_4456448.f_15, 26) && !func_208(iParam0, unk_0x6CC163E30ECE0790(iParam1), 0))
		{
			iVar0 = func_215(1);
		}
	}
	else
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_234(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = Global_4456448.f_129476;
			break;
		
		case 1:
			iVar0 = Global_4456448.f_129477;
			break;
		
		case 2:
			iVar0 = Global_4456448.f_129478;
			break;
		
		case 3:
			iVar0 = Global_4456448.f_129479;
			break;
	}
	switch (iVar0)
	{
		case 0:
			return 15;
		
		case 1:
			return 21;
		
		case 2:
			return 24;
		
		case 3:
			return 18;
		
		case 4:
			return 6;
		
		case 5:
			return 9;
		
		case 6:
			return 3;
		
		case 7:
			return 1;
		
		case 8:
			return 12;
		
		case 9:
			return 2;
		
		default:
	}
	return 2;
}

bool func_235(char* sParam0)
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

int func_236()
{
	if ((Local_329[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_3 > 0 && Local_329[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_3 < 3) || (Local_329[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_3 == 0 && func_71(PLAYER::PLAYER_ID(), 6)))
	{
		if (func_139(PLAYER::PLAYER_ID(), 1, 0) || func_112())
		{
			if ((!func_237(PLAYER::PLAYER_ID(), 5) && !func_237(PLAYER::PLAYER_ID(), 32)) && !func_237(PLAYER::PLAYER_ID(), 148))
			{
				return 1;
			}
			else if (!iLocal_101)
			{
				if (SYSTEM::VMAG(Global_1663742))
				{
					unk_0x93370FA10F15BE44(&Global_1663742);
				}
				iLocal_101 = 1;
			}
		}
		else if (iLocal_101)
		{
			func_244();
			iLocal_101 = 0;
		}
		if (Local_322.f_26 == 3)
		{
			if (Local_329[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_3 == 0 && func_71(PLAYER::PLAYER_ID(), 6))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_237(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_83() != 0)
	{
		return 0;
	}
	if (!func_238(iParam0))
	{
		return 0;
	}
	iVar0 = iParam0;
	if (Global_1590682[iVar0 /*883*/] == iParam1)
	{
		return 1;
	}
	return 0;
}

int func_238(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	else
	{
		return unk_0xCE990E643CD9D0E5(Global_2440049.f_1, iParam0);
	}
	return 1;
}

void func_239()
{
	if (SYSTEM::VMAG(Global_1663742))
	{
		if (func_118() || func_240())
		{
			HUD::SET_BLIP_DISPLAY(Global_1663742, 0);
		}
		else
		{
			HUD::SET_BLIP_DISPLAY(Global_1663742, 4);
		}
		if (!iLocal_90)
		{
			if (func_260(PLAYER::PLAYER_ID(), 1, 0))
			{
				HUD::SET_BLIP_AS_SHORT_RANGE(Global_1663742, true);
				iLocal_90 = 1;
			}
		}
		else if (!func_260(PLAYER::PLAYER_ID(), 1, 0))
		{
			HUD::SET_BLIP_AS_SHORT_RANGE(Global_1663742, false);
			iLocal_90 = 0;
		}
	}
}

var func_240()
{
	return Global_2416085.f_1864;
}

int func_241()
{
	if (NETWORK::NETWORK_IS_HANDLE_VALID(Local_322.f_22))
	{
		if (func_4(Local_322.f_22))
		{
			if (VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(unk_0x770D3B2B4702434A(Local_322.f_22), 0, 7000) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(unk_0x770D3B2B4702434A(Local_322.f_22), 1, 40000))
			{
				if (NETWORK::IS_NETWORK_ID_OWNED_BY_PARTICIPANT(Local_322.f_22))
				{
					if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_322.f_22))
					{
						VEHICLE::SET_VEHICLE_ENGINE_HEALTH(unk_0x770D3B2B4702434A(Local_322.f_22), -2000f);
						VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(unk_0x770D3B2B4702434A(Local_322.f_22), 0f);
					}
					return 1;
				}
				else if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
				{
					if (func_10(Local_322.f_22))
					{
						VEHICLE::SET_VEHICLE_ENGINE_HEALTH(unk_0x770D3B2B4702434A(Local_322.f_22), -2000f);
						VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(unk_0x770D3B2B4702434A(Local_322.f_22), 0f);
						return 1;
					}
				}
				else
				{
					return 1;
				}
			}
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int func_242()
{
	int iVar0;
	bool bVar1;
	
	if (iLocal_285 == -1 && unk_0xCE990E643CD9D0E5(iLocal_330, 5))
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_HANDLE_VALID(Local_322.f_22))
	{
		if (func_4(Local_322.f_22))
		{
			if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(unk_0x9B0761B4C3EB8BC7()))
			{
				if (PED::IS_PED_SITTING_IN_VEHICLE(unk_0x9B0761B4C3EB8BC7(), unk_0x770D3B2B4702434A(Local_322.f_22)))
				{
					if (func_243(unk_0x9B0761B4C3EB8BC7(), unk_0x770D3B2B4702434A(Local_322.f_22), -1))
					{
						return 1;
					}
				}
			}
			if (iLocal_285 >= 0)
			{
				if (iLocal_285 != NETWORK::PARTICIPANT_ID_TO_INT())
				{
					if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_285)))
					{
						iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_285));
						if (func_14(iVar0, 1, 1))
						{
							bVar1 = PLAYER::GET_PLAYER_PED(iVar0);
							if (PED::IS_PED_SITTING_IN_VEHICLE(bVar1, unk_0x770D3B2B4702434A(Local_322.f_22)))
							{
								if (func_243(bVar1, unk_0x770D3B2B4702434A(Local_322.f_22), -1))
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_243(bool bParam0, bool bParam1, int iParam2)
{
	if (!PED::IS_PED_IN_ANY_POLICE_VEHICLE(bParam0, 0) && !PED::IS_PED_IN_ANY_POLICE_VEHICLE(bParam1, 0))
	{
		if (PED::IS_PED_SITTING_IN_VEHICLE(bParam0, bParam1))
		{
			if (MISC::IS_MINIGAME_IN_PROGRESS(bParam1, iParam2, 0) == bParam0)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_244()
{
	Global_1663742 = TASK::IS_PED_SPRINTING(unk_0x770D3B2B4702434A(Local_322.f_22));
	if (MONEY::NETWORK_SPENT_BULL_SHARK(MISC::GET_MODEL_DIMENSIONS(unk_0x770D3B2B4702434A(Local_322.f_22))))
	{
		HUD::SET_BLIP_SPRITE(Global_1663742, 348);
	}
	else
	{
		HUD::SET_BLIP_SPRITE(Global_1663742, 225);
	}
	HUD::SET_BLIP_COLOUR(Global_1663742, 2);
	PED::IS_PED_IN_PARACHUTE_FREE_FALL(Global_1663742, "IMPEX_HIPR_BLP");
	if (func_118())
	{
		HUD::SET_BLIP_DISPLAY(Global_1663742, 0);
	}
}

int func_245(bool bParam0, int iParam1)
{
	if (func_166(bParam0, 1215605247, &uLocal_310, 0f, 500, 1, iParam1))
	{
		return 1;
	}
	return 0;
}

void func_246(int iParam0, int iParam1, bool bParam2)
{
	if (func_251())
	{
		if (iParam1 == 1)
		{
			if (Global_2540384.f_4458 == -1)
			{
				Global_2540384.f_4458 = Global_262145.f_26466;
			}
			func_250(&(Global_2540384.f_4456), 0, 0);
			if (bParam2)
			{
				if (Global_2540384.f_4461 == -1)
				{
					Global_2540384.f_4461 = Global_262145.f_26467;
				}
				func_250(&(Global_2540384.f_4459), 0, 0);
			}
			else
			{
				Global_1312436 = 0;
				Global_1630317[PLAYER::PLAYER_ID() /*595*/].f_8 = 0;
				func_249(1);
			}
		}
		else
		{
			Global_1312436 = 0;
			Global_1630317[PLAYER::PLAYER_ID() /*595*/].f_8 = 0;
			func_249(1);
		}
		if ((!STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED() && !func_248()) && !func_247(PLAYER::PLAYER_ID()))
		{
			Global_968396 = 0;
		}
		PED::SET_PED_CAN_BE_DRAGGED_OUT(0, -1, -1, iParam0);
	}
}

int func_247(int iParam0)
{
	if (func_139(iParam0, 1, 0))
	{
		if (Global_1590682[iParam0 /*883*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

bool func_248()
{
	return Global_2451787.f_838;
}

void func_249(bool bParam0)
{
	if (MISC::SET_BIT())
	{
		if (!func_251())
		{
			if (func_14(PLAYER::PLAYER_ID(), 1, 0))
			{
				PED::SET_PED_CONFIG_FLAG(unk_0x9B0761B4C3EB8BC7(), 1);
				PLAYER::SET_PLAYER_VEHICLE_DEFENSE_MODIFIER(unk_0x9B0761B4C3EB8BC7(), 4.792441E-43f, 0);
				PLAYER::SET_PLAYER_VEHICLE_DEFENSE_MODIFIER(unk_0x9B0761B4C3EB8BC7(), 1.709584E-43f, 0);
			}
			NETWORK::NETWORK_SET_PLAYER_IS_PASSIVE(PLAYER::PLAYER_ID(), 1f);
			NETWORK::NETWORK_SET_FRIENDLY_FIRE_OPTION(false);
			NETWORK::USE_PLAYER_COLOUR_INSTEAD_OF_TEAM_COLOUR(1);
			if (Global_1312436.f_1 == 0 || Global_1312436.f_2 == 1)
			{
				Global_1312436.f_2 = 0;
				if (bParam0)
				{
					unk_0x6543AC06C231023E(0, 0);
				}
			}
		}
		else
		{
			if (func_14(PLAYER::PLAYER_ID(), 1, 1))
			{
				PED::SET_PED_CONFIG_FLAG(unk_0x9B0761B4C3EB8BC7(), 0);
				ENTITY::SET_ENTITY_HEALTH(unk_0x9B0761B4C3EB8BC7(), joaat("weapon_unarmed"), 1);
				PLAYER::SET_PLAYER_VEHICLE_DEFENSE_MODIFIER(unk_0x9B0761B4C3EB8BC7(), 4.792441E-43f, 1);
				PLAYER::SET_PLAYER_VEHICLE_DEFENSE_MODIFIER(unk_0x9B0761B4C3EB8BC7(), 1.709584E-43f, 1);
				NETWORK::NETWORK_SET_PLAYER_IS_PASSIVE(PLAYER::PLAYER_ID(), 0.5f);
				if (Global_1312436.f_1 == 0 || Global_1312436.f_2 == 1)
				{
					unk_0x6543AC06C231023E(1, 0);
				}
			}
			NETWORK::NETWORK_SET_FRIENDLY_FIRE_OPTION(true);
			NETWORK::USE_PLAYER_COLOUR_INSTEAD_OF_TEAM_COLOUR(0);
		}
	}
}

void func_250(var uParam0, bool bParam1, bool bParam2)
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

bool func_251()
{
	return Global_1312436;
}

void func_252(int iParam0)
{
	if (iParam0 == 1)
	{
		if (!unk_0xCE990E643CD9D0E5(Global_2540384.f_4655, 28))
		{
			unk_0xBE20AB8238688965(&(Global_2540384.f_4655), 28);
		}
	}
	else if (unk_0xCE990E643CD9D0E5(Global_2540384.f_4655, 28))
	{
		VEHICLE::IS_VEHICLE_DRIVEABLE(&(Global_2540384.f_4655), 28);
	}
}

int func_253()
{
	if (func_118())
	{
		return 0;
	}
	if (!func_254(0, 1, 1, 1))
	{
		return 0;
	}
	return 1;
}

int func_254(bool bParam0, bool bParam1, int iParam2, bool bParam3)
{
	if (iParam2 && HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
	{
		return 0;
	}
	if (func_107())
	{
		return 0;
	}
	if (!GRAPHICS::DRAW_SCALEFORM_MOVIE())
	{
		return 0;
	}
	if (func_115())
	{
		return 0;
	}
	if (func_112())
	{
		return 0;
	}
	if (bParam1)
	{
		if (func_139(PLAYER::PLAYER_ID(), 1, 0))
		{
			return 0;
		}
	}
	if (bParam0)
	{
		if (func_258(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
	}
	if (func_110())
	{
		return 0;
	}
	if (STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(unk_0x9B0761B4C3EB8BC7()))
	{
		return 0;
	}
	if (HUD::DISABLE_FRONTEND_THIS_FRAME())
	{
		return 0;
	}
	if (bParam3)
	{
		if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
	}
	if (Global_1574190)
	{
		return 0;
	}
	if (func_257())
	{
		return 0;
	}
	if (func_256())
	{
		return 0;
	}
	if (func_525())
	{
		return 0;
	}
	if (Global_74030)
	{
		return 0;
	}
	if (Global_2550454)
	{
		return 0;
	}
	if (func_255(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	return 1;
}

int func_255(bool bParam0)
{
	bool bVar0;
	void fVar1;
	
	if (!MISC::SET_BIT())
	{
		return 0;
	}
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return Global_2515846;
	}
	else
	{
		bVar0 = PLAYER::GET_PLAYER_PED(iParam0);
		if (MISC::IS_BIT_SET(bVar0))
		{
			fVar1 = MISC::GET_MODEL_DIMENSIONS(bVar0);
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

bool func_256()
{
	return Global_2451787.f_689;
}

bool func_257()
{
	return Global_2451787.f_842;
}

int func_258(int iParam0)
{
	if (Global_2425869[iParam0 /*443*/].f_212 == 0)
	{
		return 0;
	}
	return 1;
}

void func_259(bool bParam0, bool bParam1)
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

int func_260(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == func_121())
	{
		return 0;
	}
	if (unk_0xCE990E643CD9D0E5(Global_1590682[iParam0 /*883*/].f_274.f_26, false))
	{
		return 1;
	}
	if (bParam1)
	{
		if (unk_0xCE990E643CD9D0E5(Global_1590682[iParam0 /*883*/].f_274.f_26, true))
		{
			return 1;
		}
	}
	if (bParam2)
	{
		if (Global_2425869[iParam0 /*443*/].f_314.f_6 != -1)
		{
			return 1;
		}
	}
	return 0;
}

int func_261()
{
	struct<3> Var0;
	
	if (NETWORK::NETWORK_IS_HANDLE_VALID(Local_322.f_22))
	{
		if (func_4(Local_322.f_22))
		{
			if (!func_242())
			{
				Var0 = { NETWORK::NETWORK_ARE_HANDLES_THE_SAME(unk_0x770D3B2B4702434A(Local_322.f_22), 1) };
				if (func_262(Var0, 1215605247, 18))
				{
					if (func_245(unk_0x770D3B2B4702434A(Local_322.f_22), 1))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_262(struct<3> Param0, int iParam1, int iParam2)
{
	if (HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Param0, func_169(iParam1), 1) <= IntToFloat(iParam2))
	{
		return 1;
	}
	return 0;
}

void func_263()
{
	if (NETWORK::NETWORK_IS_HANDLE_VALID(Local_322.f_22))
	{
		if (func_4(Local_322.f_22))
		{
			if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(unk_0x9B0761B4C3EB8BC7()))
			{
				if (unk_0xE0B3BC41DDA88DF0(unk_0x9B0761B4C3EB8BC7(), unk_0x770D3B2B4702434A(Local_322.f_22), 0))
				{
					if (!unk_0xCE990E643CD9D0E5(Local_329[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_2, 2))
					{
						unk_0xBE20AB8238688965(&(Local_329[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_2), 2);
					}
				}
				else if (func_264(unk_0x9B0761B4C3EB8BC7(), unk_0x770D3B2B4702434A(Local_322.f_22), 1) < 180f)
				{
					if (!unk_0xCE990E643CD9D0E5(Local_329[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_2, 2))
					{
						unk_0xBE20AB8238688965(&(Local_329[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_2), 2);
					}
				}
				else if (unk_0xCE990E643CD9D0E5(Local_329[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_2, 2))
				{
					VEHICLE::IS_VEHICLE_DRIVEABLE(&(Local_329[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_2), 2);
				}
			}
		}
	}
}

float func_264(bool bParam0, bool bParam1, int iParam2)
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

void func_265()
{
	int iVar0;
	
	if (iLocal_76)
	{
		func_370();
		if (!unk_0xCE990E643CD9D0E5(iLocal_330, true))
		{
			if (Global_2540384.f_1743 > 0)
			{
				if (Global_2540384.f_1746 == 0)
				{
					Global_2540384.f_1746 = NETWORK::GET_NETWORK_TIME();
				}
				else if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2540384.f_1746) > Global_262145.f_11477)
				{
					if (!func_107())
					{
						if (func_70())
						{
							if (func_253())
							{
								if (!func_369())
								{
									if (!func_368(0) && !func_124())
									{
										Global_22110 = 0;
										iVar0 = func_80(1199, -1, 0);
										if (!unk_0xCE990E643CD9D0E5(iVar0, false))
										{
											if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2540384.f_1746) > 20000)
											{
												if (func_367(18, "CELL_CLTEST6", 2, "NULL", Global_2540384.f_1743, "TestSender1", 4, 0, 1, 0, 0, bLocal_97, 0, 0, 0, 0, 0))
												{
													unk_0xBE20AB8238688965(&iVar0, false);
													func_146(1199, iVar0, -1, 1, 0);
													unk_0xBE20AB8238688965(&iLocal_330, true);
													func_365(0f, 0f, 0f, func_366(19), "");
													Global_2540384.f_1745 = 1;
													iLocal_76 = 0;
												}
											}
										}
										else if (func_367(18, "CELL_CLTEST1", 2, "NULL", Global_2540384.f_1743, "TestSender1", 4, 0, 1, 0, 0, bLocal_97, 0, 0, 0, 0, 0))
										{
											func_365(0f, 0f, 0f, func_366(19), "");
											unk_0xBE20AB8238688965(&iLocal_330, true);
											Global_2540384.f_1745 = 1;
											iLocal_76 = 0;
										}
									}
								}
								else
								{
									Global_2540384.f_1746 = NETWORK::GET_NETWORK_TIME();
								}
							}
						}
					}
				}
			}
		}
	}
	else if (unk_0xCE990E643CD9D0E5(iLocal_330, true))
	{
		if (!unk_0xCE990E643CD9D0E5(iLocal_307, 5))
		{
			if (func_253())
			{
				if (bLocal_97)
				{
					func_165("IMPEX_HELP_LNCH", -1);
				}
				unk_0xBE20AB8238688965(&iLocal_307, 5);
				func_507(&uLocal_293, 0, 0);
			}
		}
	}
	if (iLocal_99)
	{
		if (func_515())
		{
			if (!func_508(&uLocal_107))
			{
				func_507(&uLocal_107, 0, 0);
			}
			else if (func_506(&uLocal_107, 10000, 0))
			{
				if (func_266(18, "CELL_IMPT", 0, 0))
				{
					iLocal_99 = 0;
					func_46(&uLocal_107);
				}
			}
		}
	}
}

bool func_266(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	
	bVar0 = false;
	bVar1 = false;
	iVar2 = -99;
	return func_267(iParam0, bParam1, bVar0, bVar1, iVar2, bVar0, bVar0, bParam2, iParam3);
}

int func_267(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, char* sParam5, char* sParam6, bool bParam7, int iParam8)
{
	var uVar0;
	int iVar1;
	
	uVar0 = 16;
	iVar1 = 2;
	if (bParam7)
	{
		iVar1 = 5;
	}
	return func_268(&uVar0, iParam0, func_364(), bParam1, iVar1, 3, iParam8, bParam2, bParam3, iParam4, sParam5, sParam6, -1);
}

int func_268(var uParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, int iParam5, int iParam6, bool bParam7, bool bParam8, int iParam9, char* sParam10, char* sParam11, int iParam12)
{
	void fVar0;
	int iVar1;
	void fVar2;
	
	if (CAM::IS_SCREEN_FADED_OUT(sParam2))
	{
		return 0;
	}
	if (HUD::_GET_TEXT_SUBSTRING_SLICE(bParam2) > 7)
	{
		return 0;
	}
	if (CAM::IS_SCREEN_FADED_OUT(bParam3))
	{
		return 0;
	}
	if (HUD::_GET_TEXT_SUBSTRING_SLICE(bParam3) > 15)
	{
		return 0;
	}
	fVar0 = AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT(TASK::IS_PED_BEING_ARRESTED());
	iVar1 = func_363(bParam2, bParam3);
	fVar2 = 0;
	if (!CAM::IS_SCREEN_FADED_OUT(bParam7))
	{
		fVar2 = AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT(bParam7);
	}
	if (func_362(fVar0, iVar1, fVar2))
	{
		return 1;
	}
	if (!func_358(iParam6))
	{
		return 0;
	}
	if (func_355(fVar0, iVar1, fVar2))
	{
		if (func_354())
		{
			return 0;
		}
		func_353();
		return func_275(uParam0, iParam1, iParam12, bParam2, bParam3, iParam4, iParam5, iParam6, bParam7, bParam8, iParam9, sParam10, sParam11);
	}
	if (!func_274(iParam4))
	{
		return 0;
	}
	func_269(fVar0, iVar1, fVar2, bParam3, iParam4, iParam5, iParam6);
	return 0;
}

void func_269(void fParam0, int iParam1, void fParam2, bool bParam3, int iParam4, int iParam5, int iParam6)
{
	Global_1370593.f_40.f_1 = fParam0;
	Global_1370593.f_40.f_2 = iParam1;
	Global_1370593.f_40.f_3 = fParam2;
	StringCopy(&(Global_1370593.f_40.f_4), bParam3, 16);
	Global_1370593.f_40.f_8 = iParam4;
	Global_1370593.f_40.f_9 = iParam5;
	Global_1370593.f_40.f_14 = iParam6;
	func_270(iParam4);
	func_353();
	Global_1370593.f_40.f_13 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), 7000);
}

void func_270(int iParam0)
{
	if (func_273(iParam0))
	{
		func_272();
		return;
	}
	func_271();
}

void func_271()
{
	Global_1370593.f_40.f_10 = 0;
}

void func_272()
{
	Global_1370593.f_40.f_10 = 1;
}

int func_273(int iParam0)
{
	switch (iParam0)
	{
		case 4:
		case 5:
			return 1;
		
		case 0:
		case 1:
		case 7:
		case 8:
		case 2:
		case 3:
			return 0;
		
		default:
	}
	return 0;
}

bool func_274(int iParam0)
{
	return iParam0 > Global_1370593.f_40.f_8;
}

int func_275(var uParam0, int iParam1, int iParam2, char* sParam3, bool bParam4, int iParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, int iParam10, char* sParam11, char* sParam12)
{
	struct<2> Var0;
	
	func_352();
	if (iParam6 == 5)
	{
		iParam6 = 0;
	}
	if (iParam5 == 8)
	{
		return func_349(uParam0, sParam3, bParam4);
	}
	if (iParam5 == 4)
	{
		StringCopy(&Var0, "CELL_226", 16);
		return func_346(uParam0, iParam1, sParam3, bParam4, &Var0);
	}
	if (iParam5 == 1 || iParam5 == 7)
	{
		if (iParam6 == 2)
		{
			return func_349(uParam0, sParam3, bParam4);
		}
		return func_329(uParam0, iParam1, sParam3, bParam4, iParam7);
	}
	if (iParam5 == 5)
	{
		return func_328(iParam1, iParam2, bParam4, iParam7, bParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 2)
	{
		return func_317(iParam1, iParam2, bParam4, iParam7, bParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 3)
	{
		return func_316(iParam1, iParam2, bParam4, iParam7, bParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 6)
	{
		return func_276(iParam1, iParam2, bParam4, iParam7, bParam8, bParam9, iParam10, sParam11, sParam12);
	}
	return 0;
}

int func_276(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	func_315();
	bVar0 = true;
	if (func_278(iParam0, iParam1, bParam2, bVar0, iParam3, iParam4, bParam5, iParam6, sParam7, sParam8))
	{
		func_277(120000);
		return 1;
	}
	return 0;
}

void func_277(int iParam0)
{
	Global_1370593.f_40.f_11 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), iParam0);
	Global_1370593.f_40.f_12 = 1;
}

int func_278(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, int iParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9)
{
	int iVar0;
	int iVar1;
	char* sVar2;
	int iVar3;
	char* sVar4;
	var uVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	bool bVar12;
	
	iVar0 = func_121();
	iVar1 = 0;
	if (iParam0 == 145)
	{
		iVar0 = iParam1;
		sVar2 = DATAFILE::DATADICT_GET_ARRAY(iVar0);
		iVar1 = func_309(bVar0);
		if (iVar1 == 0)
		{
			if (AUDIO::GET_SOUND_ID(NETWORK::GET_NETWORK_TIME(), Global_1370593.f_40.f_13))
			{
				return 0;
			}
		}
	}
	else
	{
		sVar2 = "";
	}
	iVar3 = 0;
	sVar4 = func_308(iParam5, bParam6, &iVar3);
	uVar5 = func_306(iParam7, &iVar3);
	iVar6 = 0;
	if (!CAM::IS_SCREEN_FADED_OUT(sParam8))
	{
		iVar6++;
		if (!CAM::IS_SCREEN_FADED_OUT(sParam9))
		{
			iVar6++;
		}
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS(sVar4, " "))
	{
		sVar4 = "";
	}
	bVar7 = true;
	iVar8 = 0;
	iVar9 = 0;
	iVar10 = 1;
	iVar11 = 0;
	if (bParam3)
	{
		iVar9 = 1;
		iVar10 = 2;
		iVar11 = 1;
		if (unk_0xCE990E643CD9D0E5(iParam4, true))
		{
			iVar8 = 1;
		}
	}
	if (unk_0xCE990E643CD9D0E5(iParam4, 2))
	{
		iVar10 = 2;
	}
	bVar12 = false;
	if (!iVar3 == 0 || !CAM::IS_SCREEN_FADED_OUT(sVar2))
	{
		bVar12 = func_305(iParam0, bParam2, iVar10, sVar4, uVar5, bVar2, iVar3, iVar11, 1, iVar9, 0, bVar7, iVar8, 0, iVar6, bParam8, bParam9);
	}
	else
	{
		bVar12 = func_282(iParam0, bParam2, iVar10, iVar11, 1, iVar9, 0, bVar7, iVar8, 0);
	}
	if (!bVar12)
	{
		return 0;
	}
	if (unk_0xCE990E643CD9D0E5(iParam4, false))
	{
		func_281();
	}
	func_315();
	func_280();
	func_279();
	return 1;
}

void func_279()
{
	Global_1370593.f_57 = 0;
	Global_1370593.f_57.f_1 = 0;
}

void func_280()
{
	Global_1370593.f_40 = 3;
}

void func_281()
{
	unk_0xBE20AB8238688965(&Global_7551, 8);
}

int func_282(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	char* sVar5;
	char* sVar6;
	int iVar7;
	
	iVar0 = 0;
	sVar1 = "NULL";
	iVar2 = -99;
	sVar3 = "NULL";
	iVar4 = 0;
	sVar5 = "NULL";
	sVar6 = "NULL";
	iVar7 = 3;
	if (func_283(iParam0, bParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_8258 = iParam6;
			unk_0xBE20AB8238688965(&Global_4271024, false);
		}
		return 1;
	}
	return 0;
}

int func_283(var uParam0, bool bParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	int iVar0;
	
	if (iParam13 > 99)
	{
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS(sParam14, sParam15))
	{
	}
	func_298();
	iVar0 = 0;
	switch (iParam16)
	{
		case 0:
			if (Global_19681 == 0)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 2:
			if (Global_19681 == 2)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 1:
			if (Global_19681 == 1)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 0;
			break;
	}
	if (iVar0 == 0)
	{
		if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_ID()))
		{
			if (PED::IS_PED_SWIMMING_UNDER_WATER(unk_0x9B0761B4C3EB8BC7()))
			{
				return 0;
			}
		}
		if (Global_4271009 == 1)
		{
			return 0;
		}
		if (INTERIOR::GET_INTERIOR_AT_COORDS(joaat("appemail")) > 0)
		{
			return 0;
		}
		if (INTERIOR::GET_INTERIOR_AT_COORDS(joaat("appmpemail")) > 0)
		{
			return 0;
		}
	}
	if (func_297() == 0)
	{
		func_295();
		return 0;
	}
	func_294(Global_4271008);
	StringCopy(&(Global_4269759[Global_4271008 /*104*/]), bParam1, 64);
	Global_4269759[Global_4271008 /*104*/].f_17 = uParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_4269759[Global_4271008 /*104*/].f_24 = iParam2;
	}
	Global_4269759[Global_4271008 /*104*/].f_25 = iParam7;
	Global_4269759[Global_4271008 /*104*/].f_26 = uParam8;
	Global_4269759[Global_4271008 /*104*/].f_29 = uParam9;
	Global_4269759[Global_4271008 /*104*/].f_30 = uParam12;
	Global_4269759[Global_4271008 /*104*/].f_31 = uParam11;
	Global_4269759[Global_4271008 /*104*/].f_28 = 0;
	Global_4269759[Global_4271008 /*104*/].f_32 = iParam3;
	StringCopy(&(Global_4269759[Global_4271008 /*104*/].f_33), sParam4, 64);
	Global_4269759[Global_4271008 /*104*/].f_49 = iParam6;
	StringCopy(&(Global_4269759[Global_4271008 /*104*/].f_50), sParam5, 64);
	Global_4269759[Global_4271008 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_4269759[Global_4271008 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_4269759[Global_4271008 /*104*/].f_83), sParam15, 64);
	func_298();
	switch (iParam16)
	{
		case 3:
			Global_4269759[Global_4271008 /*104*/].f_99[Global_19681] = 1;
			break;
		
		case 0:
			Global_4269759[Global_4271008 /*104*/].f_99[0] = 1;
			break;
		
		case 2:
			Global_4269759[Global_4271008 /*104*/].f_99[2] = 1;
			break;
		
		case 1:
			Global_4269759[Global_4271008 /*104*/].f_99[1] = 1;
			break;
	}
	if (iParam16 == 3)
	{
		switch (Global_19681)
		{
			case 0:
				func_293(0);
				break;
			
			case 1:
				func_293(1);
				break;
			
			case 2:
				func_293(2);
				break;
			
			case 3:
				func_293(3);
				break;
			
			default:
				break;
			}
	}
	if (iParam7 == 1)
	{
		switch (iParam16)
		{
			case 3:
				Global_4271009 = 1;
				break;
			
			case 0:
				Global_4271009 = 1;
				break;
			
			case 2:
				Global_4271009 = 1;
				break;
			
			case 1:
				Global_4271009 = 1;
				break;
			}
	}
	Global_22074[Global_4271008] = 0;
	if (bParam10)
	{
		func_298();
		if (Global_19624)
		{
			StringCopy(&Global_19670, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_19681)
			{
				case 0:
					StringCopy(&Global_19670, "Phone_SoundSet_Michael", 24);
					break;
				
				case 2:
					StringCopy(&Global_19670, "Phone_SoundSet_Trevor", 24);
					break;
				
				case 1:
					StringCopy(&Global_19670, "Phone_SoundSet_Franklin", 24);
					break;
				
				default:
					StringCopy(&Global_19670, "Phone_SoundSet_Default", 24);
					break;
				}
		}
		if (!Global_8356[Global_19681 /*2811*/][0 /*281*/].f_259 == 1)
		{
			if (!func_292())
			{
				DATAFILE::UGC_UPDATE_CONTENT(-1, "Text_Arrive_Tone", &Global_19670, 1);
			}
		}
	}
	if (!Global_19865)
	{
		if (Global_19681.f_1 == 6)
		{
			func_291(Global_19662, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_287(1);
			func_291(Global_19662, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_19661), -1082130432, -1082130432, -1082130432);
		}
	}
	func_284(uParam0, bParam1);
	return 1;
}

void func_284(var uParam0, bool bParam1)
{
	if (!func_285())
	{
		return;
	}
	unk_0x1A2DCF21E22955B0(uParam0, -1180597171, AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT(bParam1), 0);
}

int func_285()
{
	if (!Global_262145.f_28160)
	{
		return 0;
	}
	if (!Global_76833)
	{
		return 0;
	}
	if (PLAYER::PLAYER_ID() == func_121())
	{
		return 0;
	}
	if (func_286(PLAYER::PLAYER_ID()))
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

bool func_286(int iParam0)
{
	return func_133(iParam0, 20);
}

void func_287(int iParam0)
{
	void fVar0;
	int iVar1;
	void fVar2;
	int iVar3;
	void fVar4;
	int iVar5;
	void fVar6;
	void fVar7;
	void fVar8;
	void fVar9;
	
	Global_22073 = 0;
	Global_8156 = iParam0;
	fVar0 = 0;
	while (fVar0 < 9)
	{
		Global_8120[fVar0] = 0;
		fVar0++;
	}
	fVar0 = 0;
	while (fVar0 < 9)
	{
		iVar1 = 0;
		if (func_290(14))
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_7558[iVar1 /*15*/].f_11)
				{
					if (fVar0 == Global_7558[iVar1 /*15*/].f_4)
					{
						if (Global_8120[fVar0] == 0)
						{
							Global_8084[fVar0] = iVar1;
							if (iVar1 == 3)
							{
								if (unk_0xCE990E643CD9D0E5(Global_7552, 3))
								{
									fVar2 = 42;
									Global_19868 = 1;
								}
								else
								{
									fVar2 = 255;
									Global_19868 = 0;
								}
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_19662, "SET_DATA_SLOT");
								NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE(1);
								NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE(fVar0);
								NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE(Global_7558[iVar1 /*15*/].f_10);
								NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE(0);
								func_289(&(Global_7558[iVar1 /*15*/]));
								NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE(fVar2);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							if (Global_2462245)
							{
								if (iVar1 == 14)
								{
									func_288(Global_19662, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(fVar0), SYSTEM::TO_FLOAT(Global_7558[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_22068), -1f, &(Global_7558[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							Global_8120[fVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		else
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_7558[iVar1 /*15*/].f_11)
				{
					if (fVar0 == Global_7558[iVar1 /*15*/].f_4)
					{
						if (Global_8120[fVar0] == 0)
						{
							Global_8084[fVar0] = iVar1;
							if (iVar1 == 1)
							{
								iVar3 = 0;
								while (iVar3 < 35)
								{
									if (Global_111858.f_14137[iVar3 /*104*/].f_24 != 0)
									{
										if (Global_111858.f_14137[iVar3 /*104*/].f_28 == 0)
										{
											if (Global_111858.f_14137[iVar3 /*104*/].f_99[Global_19681] == 1)
											{
												Global_22073++;
											}
										}
									}
									iVar3++;
								}
								func_288(Global_19662, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(fVar0), SYSTEM::TO_FLOAT(Global_7558[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_22073), -1f, &(Global_7558[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_76833)
								{
									fVar4 = 0;
									fVar4 = Global_4269758;
									iVar5 = 0;
									while (iVar5 < 12)
									{
										if (Global_4269759[iVar5 /*104*/].f_24 != 0)
										{
											if (Global_4269759[iVar5 /*104*/].f_28 == 0)
											{
												if (Global_4269759[iVar5 /*104*/].f_99[Global_19681] == 1)
												{
													fVar4++;
												}
											}
										}
										iVar5++;
									}
									func_288(Global_19662, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(fVar0), SYSTEM::TO_FLOAT(Global_7558[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(fVar4), -1f, &(Global_7558[iVar1 /*15*/]), 0, 0, 0, 0);
								}
								else
								{
									switch (Global_19681)
									{
										case 0:
											fVar6 = Global_42812;
											break;
										
										case 1:
											fVar6 = Global_42813;
											break;
										
										case 2:
											fVar6 = Global_42814;
											break;
										
										default:
											break;
									}
									func_288(Global_19662, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(fVar0), SYSTEM::TO_FLOAT(Global_7558[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(fVar6), -1f, &(Global_7558[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_288(Global_19662, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(fVar0), SYSTEM::TO_FLOAT(Global_7558[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_22068), -1f, &(Global_7558[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_19662, "SET_DATA_SLOT");
								NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE(1);
								NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE(fVar0);
								NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE(Global_7558[iVar1 /*15*/].f_10);
								NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE(0);
								func_289(&(Global_7558[iVar1 /*15*/]));
								NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE(Global_7557);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (iVar1 == 2)
							{
								if (unk_0xCE990E643CD9D0E5(Global_7552, 6))
								{
									fVar7 = 42;
								}
								else
								{
									fVar7 = 255;
								}
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_19662, "SET_DATA_SLOT");
								NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE(1);
								NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE(fVar0);
								NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE(Global_7558[iVar1 /*15*/].f_10);
								NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE(0);
								func_289(&(Global_7558[iVar1 /*15*/]));
								NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE(fVar7);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (iVar1 == 3)
							{
								if (unk_0xCE990E643CD9D0E5(Global_7552, 3))
								{
									fVar8 = 42;
									Global_19868 = 1;
								}
								else
								{
									fVar8 = 255;
									Global_19868 = 0;
								}
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_19662, "SET_DATA_SLOT");
								NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE(1);
								NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE(fVar0);
								NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE(Global_7558[iVar1 /*15*/].f_10);
								NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE(0);
								func_289(&(Global_7558[iVar1 /*15*/]));
								NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE(fVar8);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (iVar1 == 8)
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_19662, "SET_DATA_SLOT");
								NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE(1);
								NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE(fVar0);
								NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE(Global_7558[iVar1 /*15*/].f_10);
								NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE(0);
								func_289(&(Global_7558[iVar1 /*15*/]));
								NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE(42);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if ((iVar1 == 23 && NETWORK::NETWORK_IS_GAME_IN_PROGRESS(&(Global_7558[iVar1 /*15*/]), "CELL_BENWEB")) && unk_0xCE990E643CD9D0E5(Global_7552, 6))
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_19662, "SET_DATA_SLOT");
								NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE(1);
								NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE(fVar0);
								NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE(Global_7558[iVar1 /*15*/].f_10);
								NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE(0);
								func_289(&(Global_7558[iVar1 /*15*/]));
								NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE(42);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (Global_7558[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								fVar9 = 0;
								fVar9 = Global_1627252.f_1;
								func_288(Global_19662, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(fVar0), SYSTEM::TO_FLOAT(Global_7558[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(fVar9), -1f, &(Global_7558[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_288(Global_19662, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(fVar0), SYSTEM::TO_FLOAT(Global_7558[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(0), -1f, &(Global_7558[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							Global_8120[fVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		fVar0++;
	}
}

void func_288(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, sParam1);
	NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE(SYSTEM::ROUND(fParam2));
	if (fParam3 != -1f)
	{
		NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE(SYSTEM::ROUND(fParam3));
	}
	if (fParam4 != -1f)
	{
		NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE(SYSTEM::ROUND(fParam4));
	}
	if (fParam5 != -1f)
	{
		NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE(SYSTEM::ROUND(fParam5));
	}
	if (fParam6 != -1f)
	{
		NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE(SYSTEM::ROUND(fParam6));
	}
	if (!CAM::IS_SCREEN_FADED_OUT(uParam7))
	{
		func_289(bParam7);
	}
	if (!CAM::IS_SCREEN_FADED_OUT(iParam8))
	{
		func_289(bParam8);
	}
	if (!CAM::IS_SCREEN_FADED_OUT(iParam9))
	{
		func_289(bParam9);
	}
	if (!CAM::IS_SCREEN_FADED_OUT(iParam10))
	{
		func_289(bParam10);
	}
	if (!CAM::IS_SCREEN_FADED_OUT(iParam11))
	{
		func_289(bParam11);
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_289(var uParam0)
{
	MISC::UPDATE_ONSCREEN_KEYBOARD(uParam0);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT();
}

bool func_290(int iParam0)
{
	return Global_41631 == iParam0;
}

void func_291(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, sParam1);
	NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE(SYSTEM::ROUND(fParam2));
	if (fParam3 != -1f)
	{
		NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE(SYSTEM::ROUND(fParam3));
	}
	if (fParam4 != -1f)
	{
		NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE(SYSTEM::ROUND(fParam4));
	}
	if (fParam5 != -1f)
	{
		NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE(SYSTEM::ROUND(fParam5));
	}
	if (fParam6 != -1f)
	{
		NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE(SYSTEM::ROUND(fParam6));
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

bool func_292()
{
	return Global_1312896;
}

void func_293(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_111858.f_14047[iParam0 /*20*/].f_8;
	uVar0 = uVar0;
	uVar1 = uVar1;
}

void func_294(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	
	iVar0 = CLOCK::GET_CLOCK_MINUTES();
	iVar1 = CLOCK::GET_CLOCK_HOURS();
	iVar2 = CLOCK::GET_CLOCK_DAY_OF_MONTH();
	iVar3 = CLOCK::GET_CLOCK_MONTH();
	uVar4 = CLOCK::GET_CLOCK_YEAR() + 1;
	iVar5 = SYSTEM::SHIFT_LEFT();
	Global_4269759[iParam0 /*104*/].f_18 = iVar0;
	Global_4269759[iParam0 /*104*/].f_18.f_1 = iVar1;
	Global_4269759[iParam0 /*104*/].f_18.f_2 = iVar2;
	Global_4269759[iParam0 /*104*/].f_18.f_3 = iVar3;
	Global_4269759[iParam0 /*104*/].f_18.f_4 = uVar4;
	Global_4269759[iParam0 /*104*/].f_18.f_5 = iVar5;
}

void func_295()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 10;
	iVar2 = iVar0;
	Global_4271008 = 11;
	Global_4269759[Global_4271008 /*104*/].f_18 = -1;
	Global_4269759[Global_4271008 /*104*/].f_18.f_1 = 0;
	Global_4269759[Global_4271008 /*104*/].f_18.f_2 = 0;
	Global_4269759[Global_4271008 /*104*/].f_18.f_3 = 0;
	Global_4269759[Global_4271008 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_296(Global_4269759[iVar2 /*104*/].f_18, Global_4269759[Global_4271008 /*104*/].f_18))
		{
			Global_4271008 = iVar2;
		}
		iVar2++;
	}
	Global_4269759[Global_4271008 /*104*/].f_24 = 1;
}

int func_296(struct<6> Param0, struct<6> Param1)
{
	struct<4> Var0;
	struct<4> Var1;
	int iVar2;
	int iVar3;
	
	if (Param0.f_5 < Param1.f_5)
	{
		return 0;
	}
	if (Param0.f_5 > Param1.f_5)
	{
		return 1;
	}
	if (Param0.f_5 == Param1.f_5)
	{
		if (Param0.f_4 < Param1.f_4)
		{
			return 0;
		}
		if (Param0.f_4 > Param1.f_4)
		{
			return 1;
		}
		if (Param0.f_4 == Param1.f_4)
		{
			Var0 = Param0;
			Var0.f_1 = Param0.f_1 * 60;
			Var0.f_2 = Param0.f_2 * 3600;
			Var0.f_3 = (Param0.f_3 * 86400);
			iVar2 = (((Var0 + Var0.f_1) + Var0.f_2) + Var0.f_3);
			Var1 = Param1;
			Var1.f_1 = Param1.f_1 * 60;
			Var1.f_2 = Param1.f_2 * 3600;
			Var1.f_3 = (Param1.f_3 * 86400);
			iVar3 = (((Var1 + Var1.f_1) + Var1.f_2) + Var1.f_3);
			if (iVar2 > iVar3 || iVar2 == iVar3)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	return 0;
}

int func_297()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 10;
	iVar2 = iVar0;
	while (iVar2 < iVar1)
	{
		if (Global_4269759[iVar2 /*104*/].f_24 == 0)
		{
			Global_4271008 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_4271008 = 11;
	Global_4269759[Global_4271008 /*104*/].f_18 = -1;
	Global_4269759[Global_4271008 /*104*/].f_18.f_1 = 0;
	Global_4269759[Global_4271008 /*104*/].f_18.f_2 = 0;
	Global_4269759[Global_4271008 /*104*/].f_18.f_3 = 0;
	Global_4269759[Global_4271008 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_4269759[iVar2 /*104*/].f_24 == 0 || Global_4269759[iVar2 /*104*/].f_24 == 1)
		{
			if (!func_296(Global_4269759[iVar2 /*104*/].f_18, Global_4269759[Global_4271008 /*104*/].f_18))
			{
				Global_4271008 = iVar2;
			}
		}
		iVar2++;
	}
	if (Global_4271008 == 11)
	{
		return 0;
	}
	Global_4269759[Global_4271008 /*104*/].f_99[0] = 0;
	Global_4269759[Global_4271008 /*104*/].f_99[1] = 0;
	Global_4269759[Global_4271008 /*104*/].f_99[2] = 0;
	return 1;
}

void func_298()
{
	if (func_290(14))
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
		Global_19681 = func_299();
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

var func_299()
{
	func_300();
	return Global_111858.f_2359.f_539.f_4321;
}

void func_300()
{
	int iVar0;
	
	if (MISC::IS_BIT_SET(unk_0x9B0761B4C3EB8BC7()))
	{
		if (func_303(Global_111858.f_2359.f_539.f_4321) != MISC::GET_MODEL_DIMENSIONS(unk_0x9B0761B4C3EB8BC7()))
		{
			iVar0 = func_302(unk_0x9B0761B4C3EB8BC7());
			if (func_301(iVar0) && (!func_290(14) || Global_110809))
			{
				if (Global_111858.f_2359.f_539.f_4321 != iVar0 && func_301(Global_111858.f_2359.f_539.f_4321))
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

bool func_301(int iParam0)
{
	return iParam0 < 3;
}

int func_302(bool bParam0)
{
	int iVar0;
	void fVar1;
	
	if (MISC::IS_BIT_SET(iParam0))
	{
		fVar1 = MISC::GET_MODEL_DIMENSIONS(bParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_303(iVar0) == fVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_303(int iParam0)
{
	if (func_301(iParam0))
	{
		return func_304(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_304(int iParam0)
{
	return Global_1848[iParam0 /*29*/];
}

int func_305(int iParam0, bool bParam1, int iParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, char* sParam15, char* sParam16)
{
	int iVar0;
	
	switch (iParam14)
	{
		case 0:
			sParam15 = "NULL";
			sParam16 = "NULL";
			break;
		
		case 1:
			sParam16 = "NULL";
			break;
		
		case 2:
			break;
		
		default:
			break;
	}
	iVar0 = 3;
	if (func_283(iParam0, bParam1, iParam2, iParam6, sParam3, sParam5, uParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0) == 1)
	{
		if (bParam11 == 1)
		{
			Global_8258 = iParam10;
			unk_0xBE20AB8238688965(&Global_4271024, false);
		}
		return 1;
	}
	return 0;
}

int func_306(int iParam0, int iParam1)
{
	if (iParam0 == -99)
	{
		return -99;
	}
	func_307(2, iParam1);
	return iParam0;
}

void func_307(int iParam0, var uParam1)
{
	bool bVar0;
	bool bVar1;
	
	if (iParam0 == 0)
	{
		return;
	}
	bVar0 = false;
	bVar1 = false;
	switch (iParam0)
	{
		case 1:
			bVar0 = true;
			break;
		
		case 2:
			bVar1 = true;
			break;
		
		default:
			return;
	}
	if (bVar0)
	{
		switch (*uParam1)
		{
			case 1:
			case 3:
				break;
			
			case 0:
				*uParam1 = 1;
				break;
			
			case 2:
				*uParam1 = 3;
				break;
			
			default:
				return;
		}
		return;
	}
	if (bVar1)
	{
		switch (*uParam1)
		{
			case 2:
			case 3:
				break;
			
			case 0:
				*uParam1 = 2;
				break;
			
			case 1:
				*uParam1 = 3;
				break;
			
			default:
				return;
		}
		return;
	}
}

bool func_308(bool bParam0, bool bParam1, int iParam2)
{
	if (CAM::IS_SCREEN_FADED_OUT(iParam0))
	{
		return sLocal_18;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS(bParam0, sLocal_18))
	{
		return sLocal_18;
	}
	func_307(1, iParam2);
	if (bParam1)
	{
		return bParam0;
	}
	return AUDIO::ADD_LINE_TO_CONVERSATION(bParam0);
}

int func_309(int iParam0)
{
	int iVar0;
	
	iVar0 = func_312(iParam0);
	if (iVar0 == -1)
	{
		func_310(iParam0, 1);
		return 0;
	}
	Global_1389221[iVar0 /*5*/].f_4 = 1;
	return Global_1389221[iVar0 /*5*/].f_2;
}

void func_310(int iParam0, bool bParam1)
{
	if (!func_14(iParam0, 0, 1))
	{
		return;
	}
	if (func_312(iParam0) != -1)
	{
		return;
	}
	if (Global_1389384)
	{
		if (iParam0 == Global_1389384.f_1)
		{
			return;
		}
	}
	if (func_311(iParam0))
	{
		return;
	}
	if (Global_1389422 >= 32)
	{
		return;
	}
	Global_1389389[Global_1389422] = iParam0;
	Global_1389422++;
	if (bParam1)
	{
	}
}

int func_311(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1389422)
	{
		if (Global_1389389[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_312(int iParam0)
{
	int iVar0;
	
	if (!func_14(iParam0, 0, 1))
	{
		return -1;
	}
	if (Global_1389382 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1389382)
	{
		if (Global_1389221[iVar0 /*5*/].f_1 == iParam0)
		{
			if (HUD::_GET_LABEL_TEXT(Global_1389221[iVar0 /*5*/].f_2) && MISC::ARE_STRINGS_EQUAL(Global_1389221[iVar0 /*5*/].f_2))
			{
				return iVar0;
			}
			func_313(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_313(int iParam0)
{
	char cVar0[64];
	char cVar1[64];
	int iVar2;
	int iVar3;
	
	if (iParam0 >= Global_1389382)
	{
		return;
	}
	if (HUD::_GET_LABEL_TEXT(Global_1389221[iParam0 /*5*/].f_2))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_1389221[iParam0 /*5*/].f_2 != 0)
		{
			StringCopy(&cVar1, unk_0x3EF2973864CBE5FC(Global_1389221[iParam0 /*5*/].f_2), 64);
			MONEY::NETWORK_GET_VC_BANK_BALANCE(&cVar1, &cVar1, &cVar0, &cVar0);
		}
		MONEY::NETWORK_GET_VC_WALLET_BALANCE(Global_1389221[iParam0 /*5*/].f_2);
	}
	iVar2 = iParam0;
	iVar3 = iVar2 + 1;
	while (iVar3 < Global_1389382)
	{
		Global_1389221[iVar2 /*5*/] = { Global_1389221[iVar3 /*5*/] };
		iVar2++;
		iVar3++;
	}
	func_314(&(Global_1389221[iVar2 /*5*/]));
	Global_1389382 = (Global_1389382 - 1);
}

void func_314(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_121();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (MISC::SET_BIT())
	{
		uParam0->f_3 = NETWORK::GET_NETWORK_TIME();
	}
}

void func_315()
{
	Global_1370593.f_40.f_9 = 4;
}

int func_316(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	func_315();
	bVar0 = false;
	return func_278(iParam0, iParam1, bParam2, bVar0, iParam3, iParam4, bParam5, iParam6, sParam7, sParam8);
}

int func_317(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	bVar0 = false;
	return func_318(iParam0, iParam1, bParam2, bVar0, iParam3, iParam4, bParam5, iParam6, sParam7, sParam8);
}

int func_318(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, int iParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9)
{
	int iVar0;
	int iVar1;
	char* sVar2;
	int iVar3;
	char* sVar4;
	var uVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	bool bVar12;
	
	iVar0 = func_121();
	iVar1 = 0;
	if (iParam0 == 145)
	{
		iVar0 = iParam1;
		sVar2 = DATAFILE::DATADICT_GET_ARRAY(iVar0);
		iVar1 = func_309(bVar0);
		if (iVar1 == 0)
		{
			if (AUDIO::GET_SOUND_ID(NETWORK::GET_NETWORK_TIME(), Global_1370593.f_40.f_13))
			{
				return 0;
			}
		}
		Global_22066 = iVar1;
	}
	else
	{
		sVar2 = "";
	}
	iVar3 = 0;
	sVar4 = func_308(iParam5, bParam6, &iVar3);
	uVar5 = func_306(iParam7, &iVar3);
	iVar6 = 0;
	if (!CAM::IS_SCREEN_FADED_OUT(sParam8))
	{
		iVar6++;
		if (!CAM::IS_SCREEN_FADED_OUT(sParam9))
		{
			iVar6++;
		}
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS(sVar4, " "))
	{
		bVar4 = "";
	}
	bVar7 = true;
	iVar8 = 0;
	iVar9 = 0;
	iVar10 = 1;
	iVar11 = 0;
	if (bParam3)
	{
		iVar9 = 1;
		iVar10 = 2;
		iVar11 = 1;
		if (unk_0xCE990E643CD9D0E5(iParam4, true))
		{
			iVar8 = 1;
		}
	}
	if (unk_0xCE990E643CD9D0E5(iParam4, 2))
	{
		iVar10 = 2;
	}
	bVar12 = false;
	if (!iVar3 == 0 || !CAM::IS_SCREEN_FADED_OUT(sVar2))
	{
		bVar12 = func_367(iParam0, bParam2, iVar10, bVar4, uVar5, bVar2, iVar3, iVar11, 1, iVar9, 0, bVar7, iVar8, 0, iVar6, bParam8, bParam9);
	}
	else
	{
		bVar12 = func_320(iParam0, bParam2, iVar10, iVar11, 1, iVar9, 0, bVar7, iVar8, 0);
	}
	if (!bVar12)
	{
		return 0;
	}
	if (unk_0xCE990E643CD9D0E5(iParam4, false))
	{
		func_281();
	}
	func_319();
	func_280();
	func_279();
	return 1;
}

void func_319()
{
	Global_1370593.f_40.f_9 = 3;
}

int func_320(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	char* sVar5;
	char* sVar6;
	int iVar7;
	
	VEHICLE::IS_VEHICLE_DRIVEABLE(&Global_7551, 10);
	iVar0 = 0;
	sVar1 = "NULL";
	iVar2 = -99;
	sVar3 = "NULL";
	iVar4 = 0;
	sVar5 = "NULL";
	sVar6 = "NULL";
	iVar7 = 3;
	if (func_322(iParam0, bParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_8258 = iParam6;
			Global_8161[3 /*6*/] = { func_321(iParam0) };
			Global_8238 = iParam0;
			unk_0xBE20AB8238688965(&Global_7551, true);
			unk_0xBE20AB8238688965(&Global_7551, 7);
		}
		return 1;
	}
	return 0;
}

struct<4> func_321(int iParam0)
{
	return Global_1848[iParam0 /*29*/].f_3;
}

int func_322(var uParam0, bool bParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, bool bParam14, char* sParam15, int iParam16)
{
	int iVar0;
	
	if (iParam13 > 99)
	{
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS(sParam14, sParam15))
	{
	}
	func_298();
	iVar0 = 0;
	switch (iParam16)
	{
		case 0:
			if (Global_19681 == 0)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 2:
			if (Global_19681 == 2)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 1:
			if (Global_19681 == 1)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 0;
			break;
	}
	if (iVar0 == 0)
	{
		if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_ID()))
		{
			if (PED::IS_PED_SWIMMING_UNDER_WATER(unk_0x9B0761B4C3EB8BC7()))
			{
				return 0;
			}
		}
		if (Global_111858.f_14047[Global_19681 /*20*/].f_17 == 1)
		{
			return 0;
		}
		if (INTERIOR::GET_INTERIOR_AT_COORDS(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
		if (INTERIOR::GET_INTERIOR_AT_COORDS(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
	}
	if (func_327() == 0)
	{
		func_325();
		return 0;
	}
	func_324(Global_22072);
	StringCopy(&(Global_111858.f_14137[Global_22072 /*104*/]), bParam1, 64);
	Global_111858.f_14137[Global_22072 /*104*/].f_17 = uParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_111858.f_14137[Global_22072 /*104*/].f_24 = iParam2;
	}
	Global_111858.f_14137[Global_22072 /*104*/].f_25 = iParam7;
	Global_111858.f_14137[Global_22072 /*104*/].f_26 = uParam8;
	Global_111858.f_14137[Global_22072 /*104*/].f_29 = uParam9;
	Global_111858.f_14137[Global_22072 /*104*/].f_30 = uParam12;
	Global_111858.f_14137[Global_22072 /*104*/].f_31 = uParam11;
	Global_111858.f_14137[Global_22072 /*104*/].f_28 = 0;
	Global_111858.f_14137[Global_22072 /*104*/].f_32 = iParam3;
	StringCopy(&(Global_111858.f_14137[Global_22072 /*104*/].f_33), sParam4, 64);
	Global_111858.f_14137[Global_22072 /*104*/].f_49 = iParam6;
	StringCopy(&(Global_111858.f_14137[Global_22072 /*104*/].f_50), sParam5, 64);
	Global_111858.f_14137[Global_22072 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_111858.f_14137[Global_22072 /*104*/].f_67), bParam14, 64);
	StringCopy(&(Global_111858.f_14137[Global_22072 /*104*/].f_83), sParam15, 64);
	if (unk_0xCE990E643CD9D0E5(Global_7551, 10))
	{
		Global_111858.f_14137[Global_22072 /*104*/].f_99[0] = 1;
		Global_111858.f_14137[Global_22072 /*104*/].f_99[1] = 1;
		Global_111858.f_14137[Global_22072 /*104*/].f_99[2] = 1;
		Global_8257 = 4;
		func_293(0);
		func_293(2);
		func_293(1);
	}
	else
	{
		func_298();
		switch (iParam16)
		{
			case 3:
				Global_111858.f_14137[Global_22072 /*104*/].f_99[Global_19681] = 1;
				break;
			
			case 0:
				Global_111858.f_14137[Global_22072 /*104*/].f_99[0] = 1;
				break;
			
			case 2:
				Global_111858.f_14137[Global_22072 /*104*/].f_99[2] = 1;
				break;
			
			case 1:
				Global_111858.f_14137[Global_22072 /*104*/].f_99[1] = 1;
				break;
		}
		if (iParam16 == 3)
		{
			switch (Global_19681)
			{
				case 0:
					func_293(0);
					Global_8257 = 0;
					break;
				
				case 1:
					func_293(1);
					Global_8257 = 1;
					break;
				
				case 2:
					func_293(2);
					Global_8257 = 2;
					break;
				
				case 3:
					func_293(3);
					Global_8257 = 3;
					break;
				
				default:
					Global_8257 = 4;
					break;
				}
			}
	}
	if (iParam7 == 1)
	{
		if (unk_0xCE990E643CD9D0E5(Global_7551, 10))
		{
			Global_111858.f_14047[0 /*20*/].f_17 = 1;
			Global_111858.f_14047[1 /*20*/].f_17 = 1;
			Global_111858.f_14047[2 /*20*/].f_17 = 1;
		}
		else
		{
			switch (iParam16)
			{
				case 3:
					Global_111858.f_14047[Global_19681 /*20*/].f_17 = 1;
					break;
				
				case 0:
					Global_111858.f_14047[0 /*20*/].f_17 = 1;
					break;
				
				case 2:
					Global_111858.f_14047[2 /*20*/].f_17 = 1;
					break;
				
				case 1:
					Global_111858.f_14047[1 /*20*/].f_17 = 1;
					break;
				}
			}
	}
	Global_22074[Global_22072] = 0;
	if (bParam10)
	{
		func_298();
		if (Global_19624)
		{
			StringCopy(&Global_19670, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_19681)
			{
				case 0:
					StringCopy(&Global_19670, "Phone_SoundSet_Michael", 24);
					break;
				
				case 2:
					StringCopy(&Global_19670, "Phone_SoundSet_Trevor", 24);
					break;
				
				case 1:
					StringCopy(&Global_19670, "Phone_SoundSet_Franklin", 24);
					break;
				
				default:
					StringCopy(&Global_19670, "Phone_SoundSet_Default", 24);
					break;
				}
		}
		if (!Global_8356[Global_19681 /*2811*/][0 /*281*/].f_259 == 1)
		{
			if (!func_292())
			{
				DATAFILE::UGC_UPDATE_CONTENT(-1, "Text_Arrive_Tone", &Global_19670, 1);
			}
		}
	}
	if (!Global_19865)
	{
		if (Global_19681.f_1 == 6)
		{
			func_291(Global_19662, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_287(1);
			func_291(Global_19662, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_19661), -1082130432, -1082130432, -1082130432);
		}
	}
	func_323(uParam0, bParam1);
	return 1;
}

void func_323(var uParam0, bool bParam1)
{
	if (!func_285())
	{
		return;
	}
	unk_0x1A2DCF21E22955B0(uParam0, 1654525105, AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT(bParam1), 0);
}

void func_324(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	
	iVar0 = CLOCK::GET_CLOCK_MINUTES();
	iVar1 = CLOCK::GET_CLOCK_HOURS();
	iVar2 = CLOCK::GET_CLOCK_DAY_OF_MONTH();
	iVar3 = CLOCK::GET_CLOCK_MONTH();
	uVar4 = CLOCK::GET_CLOCK_YEAR() + 1;
	iVar5 = SYSTEM::SHIFT_LEFT();
	Global_111858.f_14137[iParam0 /*104*/].f_18 = iVar0;
	Global_111858.f_14137[iParam0 /*104*/].f_18.f_1 = iVar1;
	Global_111858.f_14137[iParam0 /*104*/].f_18.f_2 = iVar2;
	Global_111858.f_14137[iParam0 /*104*/].f_18.f_3 = iVar3;
	Global_111858.f_14137[iParam0 /*104*/].f_18.f_4 = uVar4;
	Global_111858.f_14137[iParam0 /*104*/].f_18.f_5 = iVar5;
}

void func_325()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_76833)
	{
		iVar0 = 24;
		iVar1 = 33;
	}
	else
	{
		iVar0 = 0;
		iVar1 = 20;
	}
	iVar2 = iVar0;
	Global_22072 = 34;
	Global_111858.f_14137[Global_22072 /*104*/].f_18 = -1;
	Global_111858.f_14137[Global_22072 /*104*/].f_18.f_1 = 0;
	Global_111858.f_14137[Global_22072 /*104*/].f_18.f_2 = 0;
	Global_111858.f_14137[Global_22072 /*104*/].f_18.f_3 = 0;
	Global_111858.f_14137[Global_22072 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_326(Global_111858.f_14137[iVar2 /*104*/].f_18, Global_111858.f_14137[Global_22072 /*104*/].f_18))
		{
			Global_22072 = iVar2;
		}
		iVar2++;
	}
	Global_111858.f_14137[Global_22072 /*104*/].f_24 = 1;
}

int func_326(struct<6> Param0, struct<6> Param1)
{
	struct<4> Var0;
	struct<4> Var1;
	int iVar2;
	int iVar3;
	
	if (Param0.f_5 < Param1.f_5)
	{
		return 0;
	}
	if (Param0.f_5 > Param1.f_5)
	{
		return 1;
	}
	if (Param0.f_5 == Param1.f_5)
	{
		if (Param0.f_4 < Param1.f_4)
		{
			return 0;
		}
		if (Param0.f_4 > Param1.f_4)
		{
			return 1;
		}
		if (Param0.f_4 == Param1.f_4)
		{
			Var0 = Param0;
			Var0.f_1 = Param0.f_1 * 60;
			Var0.f_2 = Param0.f_2 * 3600;
			Var0.f_3 = (Param0.f_3 * 86400);
			iVar2 = (((Var0 + Var0.f_1) + Var0.f_2) + Var0.f_3);
			Var1 = Param1;
			Var1.f_1 = Param1.f_1 * 60;
			Var1.f_2 = Param1.f_2 * 3600;
			Var1.f_3 = (Param1.f_3 * 86400);
			iVar3 = (((Var1 + Var1.f_1) + Var1.f_2) + Var1.f_3);
			if (iVar2 > iVar3 || iVar2 == iVar3)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	return 0;
}

int func_327()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_76833)
	{
		iVar0 = 24;
		iVar1 = 33;
	}
	else
	{
		iVar0 = 0;
		iVar1 = 20;
	}
	iVar2 = iVar0;
	while (iVar2 < iVar1)
	{
		if (Global_111858.f_14137[iVar2 /*104*/].f_24 == 0)
		{
			Global_22072 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_22072 = 34;
	Global_111858.f_14137[Global_22072 /*104*/].f_18 = -1;
	Global_111858.f_14137[Global_22072 /*104*/].f_18.f_1 = 0;
	Global_111858.f_14137[Global_22072 /*104*/].f_18.f_2 = 0;
	Global_111858.f_14137[Global_22072 /*104*/].f_18.f_3 = 0;
	Global_111858.f_14137[Global_22072 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_111858.f_14137[iVar2 /*104*/].f_24 == 0 || Global_111858.f_14137[iVar2 /*104*/].f_24 == 1)
		{
			if (!func_326(Global_111858.f_14137[iVar2 /*104*/].f_18, Global_111858.f_14137[Global_22072 /*104*/].f_18))
			{
				Global_22072 = iVar2;
			}
		}
		if (Global_111858.f_14137[iVar2 /*104*/].f_24 == 2)
		{
		}
		iVar2++;
	}
	if (Global_22072 == 34)
	{
		return 0;
	}
	Global_111858.f_14137[Global_22072 /*104*/].f_99[0] = 0;
	Global_111858.f_14137[Global_22072 /*104*/].f_99[1] = 0;
	Global_111858.f_14137[Global_22072 /*104*/].f_99[2] = 0;
	return 1;
}

int func_328(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(unk_0x9B0761B4C3EB8BC7()))
	{
	}
	if (SYSTEM::FLOOR(unk_0x9B0761B4C3EB8BC7()))
	{
		return 0;
	}
	func_319();
	bVar0 = true;
	if (func_318(iParam0, iParam1, bParam2, bVar0, iParam3, iParam4, bParam5, iParam6, sParam7, sParam8))
	{
		func_277(120000);
		return 1;
	}
	return 0;
}

int func_329(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4)
{
	bool bVar0;
	int iVar1;
	
	if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(unk_0x9B0761B4C3EB8BC7()))
	{
		if (SYSTEM::FLOOR(unk_0x9B0761B4C3EB8BC7()))
		{
			return 0;
		}
	}
	bVar0 = false;
	iVar1 = 12;
	if (unk_0xCE990E643CD9D0E5(iParam4, 7))
	{
		iVar1 = 9;
	}
	if (unk_0xCE990E643CD9D0E5(iParam4, 4))
	{
		bVar0 = func_345(uParam0, iParam1, sParam2, sParam3, iVar1, 0, 0, 1);
	}
	else
	{
		bVar0 = func_335(uParam0, iParam1, sParam2, sParam3, iVar1, 0, 0, 1);
	}
	if (bVar0)
	{
		if (unk_0xCE990E643CD9D0E5(iParam4, 3))
		{
			func_334(1);
		}
		if (unk_0xCE990E643CD9D0E5(iParam4, 5))
		{
			func_333(1);
		}
		func_332();
		func_280();
		func_331();
		func_330();
		return 1;
	}
	return 0;
}

void func_330()
{
	Global_2549970 = 0;
}

void func_331()
{
	Global_1370593.f_57 = 1;
	Global_1370593.f_57.f_1 = 0;
}

void func_332()
{
	Global_1370593.f_40.f_9 = 1;
}

void func_333(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xBE20AB8238688965(&Global_7553, false);
	}
	else
	{
		VEHICLE::IS_VEHICLE_DRIVEABLE(&Global_7553, false);
	}
}

void func_334(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xBE20AB8238688965(&Global_7551, 20);
	}
	else
	{
		VEHICLE::IS_VEHICLE_DRIVEABLE(&Global_7551, 20);
	}
}

int func_335(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	func_344(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
	Global_21053 = 0;
	Global_21012 = 1;
	Global_21019 = 0;
	Global_21014 = 0;
	Global_21996 = 0;
	Global_21998 = 0;
	Global_22002 = 0;
	Global_21010 = 0;
	Global_21057 = 0;
	Global_21059 = 0;
	Global_2621441 = 0;
	return func_336(sParam3, iParam4, bParam7);
}

int func_336(char* sParam0, int iParam1, bool bParam2)
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
					func_343();
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
		if (func_114(8, -1))
		{
			return 0;
		}
		Global_21081 = { Global_21075 };
		func_342();
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
				func_298();
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
				if (func_341())
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
			if (func_340())
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
			func_339();
			Global_21015 = bParam2;
		}
		Global_21007 = iParam1;
		StringCopy(&Global_20624, sParam0, 24);
		Global_19871 = 0;
		func_338();
		func_337();
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
		func_343();
	}
	return 0;
}

void func_337()
{
	if (!func_285())
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

void func_338()
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

void func_339()
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

int func_340()
{
	if (Global_19681.f_1 == 1 || Global_19681.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_341()
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

void func_342()
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

void func_343()
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

void func_344(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

int func_345(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	func_344(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
	Global_21053 = 1;
	Global_21012 = 1;
	Global_21019 = 0;
	Global_21014 = 0;
	Global_21996 = 0;
	Global_21998 = 0;
	Global_22002 = 0;
	Global_21010 = 0;
	Global_21057 = 0;
	Global_21059 = 0;
	Global_2621441 = 0;
	return func_336(sParam3, iParam4, bParam7);
}

int func_346(var uParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4)
{
	if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(unk_0x9B0761B4C3EB8BC7()))
	{
	}
	if (SYSTEM::FLOOR(unk_0x9B0761B4C3EB8BC7()))
	{
		return 0;
	}
	if (func_348(uParam0, iParam1, sParam2, sParam3, 9, sParam4, 0, 0, 1))
	{
		func_347();
		func_332();
		func_280();
		func_331();
		func_330();
		return 1;
	}
	return 0;
}

void func_347()
{
	Global_22023 = 0;
}

bool func_348(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, char* sParam5, int iParam6, int iParam7, bool bParam8)
{
	func_344(uParam0, iParam1, sParam2, iParam6, iParam7, 0);
	Global_21053 = 0;
	Global_21012 = 1;
	Global_21019 = 0;
	Global_21014 = 1;
	Global_21996 = 0;
	Global_21998 = 0;
	Global_22002 = 0;
	Global_21010 = 0;
	Global_21057 = 1;
	Global_21059 = 0;
	StringCopy(&Global_21153, sParam5, 24);
	Global_2621441 = 0;
	return func_336(sParam3, iParam4, bParam8);
}

int func_349(var uParam0, char* sParam1, char* sParam2)
{
	if (func_351(uParam0, sParam1, sParam2, 12, 0, 0, 0))
	{
		func_350();
		func_280();
		func_331();
		return 1;
	}
	return 0;
}

void func_350()
{
	Global_1370593.f_40.f_9 = 2;
}

bool func_351(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_344(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_336(sParam2, iParam3, 0);
}

void func_352()
{
	Global_1370593.f_55 = Global_1370593.f_40.f_1;
	Global_1370593.f_55.f_1 = Global_1370593.f_40.f_10;
}

void func_353()
{
	Global_1370593.f_40 = 1;
}

bool func_354()
{
	return Global_1370593.f_40 == 1;
}

int func_355(void fParam0, int iParam1, void fParam2)
{
	if (!func_356(fParam0))
	{
		return 0;
	}
	if (Global_1370593.f_40.f_2 != iParam1)
	{
		return 0;
	}
	if (fParam2 != 0)
	{
		if (Global_1370593.f_40.f_3 != fParam2)
		{
			return 0;
		}
	}
	return 1;
}

int func_356(int iParam0)
{
	if (!func_357())
	{
		return 0;
	}
	if (!Global_1370593.f_40.f_1 == iParam0)
	{
		return 0;
	}
	return 1;
}

int func_357()
{
	if (Global_1370593.f_40 == 0)
	{
		return 0;
	}
	return 1;
}

int func_358(int iParam0)
{
	if (func_361())
	{
		return 0;
	}
	if (func_109())
	{
		return 0;
	}
	if (func_368(0))
	{
		return 0;
	}
	if (Global_1312485.f_18 != 0)
	{
		return 0;
	}
	if (Global_1663771 || func_360())
	{
		return 0;
	}
	if (!unk_0xCE990E643CD9D0E5(iParam0, 6))
	{
		if (func_359())
		{
			return 0;
		}
	}
	return 1;
}

bool func_359()
{
	return AUDIO::GET_SOUND_ID(NETWORK::GET_NETWORK_TIME(), Global_1387851);
}

int func_360()
{
	if (Global_4254512.f_943 > -1)
	{
		return 1;
	}
	return 0;
}

bool func_361()
{
	return func_340();
}

int func_362(void fParam0, int iParam1, void fParam2)
{
	if (!func_109())
	{
		return 0;
	}
	return func_355(fParam0, iParam1, fParam2);
}

var func_363(char* sParam0, char* sParam1)
{
	char cVar0[64];
	
	StringCopy(&cVar0, sParam0, 64);
	StringConCat(&cVar0, sParam1, 64);
	return AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT(&cVar0);
}

char* func_364()
{
	return "TXTMSG";
}

int func_365(struct<3> Param0, bool bParam1, char* sParam2)
{
	int iVar0;
	
	if (!CAM::IS_SCREEN_FADED_OUT(sParam1))
	{
		iVar0 = 0;
		while (iVar0 < 16)
		{
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS(&(Global_2540384.f_4029[iVar0 /*26*/].f_4), bParam1))
			{
				if (CAM::IS_SCREEN_FADED_OUT(&(Global_2540384.f_4029[iVar0 /*26*/].f_4)))
				{
					Global_2540384.f_4029[iVar0 /*26*/] = 1;
					Global_2540384.f_4029[iVar0 /*26*/].f_1 = { Param0 };
					StringCopy(&(Global_2540384.f_4029[iVar0 /*26*/].f_4), bParam1, 24);
					StringCopy(&(Global_2540384.f_4029[iVar0 /*26*/].f_10), sParam2, 64);
					return 1;
				}
			}
			else if (!func_31(Global_2540384.f_4029[iVar0 /*26*/].f_1, Param0, 0))
			{
				Global_2540384.f_4029[iVar0 /*26*/] = 1;
				Global_2540384.f_4029[iVar0 /*26*/].f_1 = { Param0 };
				StringCopy(&(Global_2540384.f_4029[iVar0 /*26*/].f_4), bParam1, 24);
				StringCopy(&(Global_2540384.f_4029[iVar0 /*26*/].f_10), sParam2, 64);
				return 1;
			}
			else
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

char* func_366(int iParam0)
{
	if (iParam0 == iParam0)
	{
	}
	return "";
}

int func_367(int iParam0, bool bParam1, int iParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, char* sParam15, char* sParam16)
{
	int iVar0;
	
	switch (iParam14)
	{
		case 0:
			sParam15 = "NULL";
			sParam16 = "NULL";
			break;
		
		case 1:
			sParam16 = "NULL";
			break;
		
		case 2:
			break;
		
		default:
			break;
	}
	VEHICLE::IS_VEHICLE_DRIVEABLE(&Global_7551, 10);
	iVar0 = 3;
	if (func_322(iParam0, bParam1, iParam2, iParam6, sParam3, sParam5, uParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0) == 1)
	{
		if (bParam11 == 1)
		{
			Global_8258 = iParam10;
			Global_8161[3 /*6*/] = { func_321(iParam0) };
			Global_8238 = iParam0;
			StringCopy(&Global_8239, sParam5, 64);
			unk_0xBE20AB8238688965(&Global_7551, true);
			unk_0xBE20AB8238688965(&Global_7551, 7);
		}
		return 1;
	}
	return 0;
}

int func_368(int iParam0)
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

bool func_369()
{
	return func_357();
}

void func_370()
{
	if (func_70())
	{
		if (!iLocal_312 == Local_322.f_32)
		{
			Global_2540384.f_1703 = { Local_321 };
			func_371();
			iLocal_312 = Local_322.f_32;
		}
	}
}

void func_371()
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 5)
	{
		StringCopy(&(Global_2540384.f_1722[iVar1 /*4*/]), "", 16);
		if (!Global_2540384.f_1703[iVar1] == -1 && Global_2540384.f_1703.f_6[iVar1] == 0)
		{
			StringCopy(&(Global_2540384.f_1722[iVar0 /*4*/]), func_372(Global_2540384.f_1703[iVar1], 1), 16);
			iVar0++;
		}
		iVar1++;
	}
	Global_2540384.f_1743 = iVar0;
}

char* func_372(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			return func_373(bParam1, "IMPEX_2020_0B", "IMPEX_2020_0");
		
		case 1:
			return func_373(bParam1, "IMPEX_2020_1B", "IMPEX_2020_1");
		
		case 2:
			return func_373(bParam1, "IMPEX_2020_2B", "IMPEX_2020_2");
		
		case 3:
			return func_373(bParam1, "IMPEX_2020_3B", "IMPEX_2020_3");
		
		case 4:
			return func_373(bParam1, "IMPEX_2020_4B", "IMPEX_2020_4");
		
		case 5:
			return func_373(bParam1, "IMPEX_2020_5B", "IMPEX_2020_5");
		
		case 6:
			return func_373(bParam1, "IMPEX_2020_6B", "IMPEX_2020_6");
		
		case 7:
			return func_373(bParam1, "IMPEX_2020_7B", "IMPEX_2020_7");
		
		case 8:
			return func_373(bParam1, "IMPEX_2020_8B", "IMPEX_2020_8");
		
		case 9:
			return func_373(bParam1, "IMPEX_2020_9B", "IMPEX_2020_9");
		
		case 10:
			return func_373(bParam1, "IMPEX_2020_10B", "IMPEX_2020_10");
		
		case 11:
			return func_373(bParam1, "IMPEX_2020_11B", "IMPEX_2020_11");
		
		case 12:
			return func_373(bParam1, "IMPEX_2020_12B", "IMPEX_2020_12");
		
		case 13:
			return func_373(bParam1, "IMPEX_2020_13B", "IMPEX_2020_13");
		
		case 14:
			return func_373(bParam1, "IMPEX_2020_14B", "IMPEX_2020_14");
		
		case 15:
			return func_373(bParam1, "IMPEX_2020_15B", "IMPEX_2020_15");
		
		case 16:
			return func_373(bParam1, "IMPEX_2020_16B", "IMPEX_2020_16");
		
		case 17:
			return func_373(bParam1, "IMPEX_2020_17B", "IMPEX_2020_17");
		
		case 18:
			return func_373(bParam1, "IMPEX_2020_18B", "IMPEX_2020_18");
		
		case 19:
			return func_373(bParam1, "IMPEX_2020_19B", "IMPEX_2020_19");
		
		default:
	}
	return "";
}

char* func_373(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

void func_374()
{
	int iVar0;
	
	if (!iLocal_91)
	{
		if (!func_379(PLAYER::PLAYER_ID(), 1))
		{
			if (!func_122(PLAYER::PLAYER_ID(), 0))
			{
				if (!Local_322.f_28 == -1)
				{
					if (!iLocal_314 == func_34(Local_322.f_28))
					{
						if (!func_378(unk_0x9B0761B4C3EB8BC7()))
						{
							if (!func_377(PLAYER::PLAYER_ID()))
							{
								iLocal_314 = func_34(Local_322.f_28);
								iVar0 = 0;
								while (iVar0 < iLocal_320)
								{
									ZONE::OVERRIDE_POPSCHEDULE_VEHICLE_MODEL(iLocal_320[iVar0], iLocal_314);
									iVar0++;
								}
								iLocal_91 = 1;
								unk_0x78FCB2E22C41B9D5(iLocal_314);
								func_376();
								func_375(iLocal_314);
							}
						}
					}
				}
			}
		}
	}
	else if ((((func_379(PLAYER::PLAYER_ID(), 1) || (Local_322.f_28 > -1 && !iLocal_314 == func_34(Local_322.f_28))) || func_378(unk_0x9B0761B4C3EB8BC7())) || func_122(PLAYER::PLAYER_ID(), 0)) || func_377(PLAYER::PLAYER_ID()))
	{
		unk_0x74528AC0906CBABE(iLocal_314);
		iVar0 = 0;
		while (iVar0 < iLocal_320)
		{
			ZONE::CLEAR_POPSCHEDULE_OVERRIDE_VEHICLE_MODEL(iLocal_320[iVar0]);
			iVar0++;
		}
		func_376();
		iLocal_314 = 0;
		iLocal_91 = 0;
	}
}

void func_375(int iParam0)
{
	if (unk_0xCE990E643CD9D0E5(Local_322.f_23, false))
	{
		if (iParam0 == Local_322.f_67)
		{
			return;
		}
	}
	switch (iParam0)
	{
		case joaat("sentinel"):
		case joaat("serrano"):
		case joaat("dominator"):
		case joaat("schafter2"):
		case joaat("surge"):
			iLocal_277[0] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(-54.2664f, -1679.549f, 28.4414f, 228.2736f, 5f, 3f, iParam0, -1, -1, -1, -1, true, false, false, false, true, -1);
			iLocal_277[1] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(-47.0703f, -1115.41f, 25.4327f, 204.5124f, 5f, 3f, iParam0, -1, -1, -1, -1, true, false, false, false, true, -1);
			iLocal_277[2] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(1227.06f, 2718.678f, 37.0051f, 359.6756f, 5f, 3f, iParam0, -1, -1, -1, -1, true, false, false, false, true, -1);
			iLocal_277[3] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(-1388.704f, 44.2178f, 52.6041f, 313.0655f, 5f, 3f, iParam0, -1, -1, -1, -1, true, false, false, false, true, -1);
			iLocal_277[4] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(430.9073f, -1154.745f, 28.2919f, 267.6113f, 5f, 3f, iParam0, -1, -1, -1, -1, true, false, false, false, true, -1);
			iLocal_277[5] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(1123.513f, 243.2258f, 79.8556f, 237.5495f, 5f, 3f, iParam0, -1, -1, -1, -1, true, false, false, false, true, -1);
			iLocal_277[6] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(-841.395f, -138.6138f, 36.5745f, 65.0431f, 5f, 3f, iParam0, -1, -1, -1, -1, true, false, false, false, true, -1);
			iLocal_277[7] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(-150.0053f, -618.0887f, 31.4271f, 249.907f, 5f, 3f, iParam0, -1, -1, -1, -1, true, false, false, false, true, -1);
			iLocal_277[8] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(-827.7974f, 170.3065f, 69.2223f, 158.4295f, 5f, 3f, iParam0, -1, -1, -1, -1, true, false, false, false, true, -1);
			iLocal_277[9] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(-1215.953f, -1675.18f, 2.9847f, 305.2072f, 5f, 3f, iParam0, -1, -1, -1, -1, true, false, false, false, true, -1);
			iLocal_278 = 1;
			break;
		
		case joaat("jackal"):
		case joaat("ztype"):
		case joaat("tailgater"):
		case joaat("landstalker"):
		case joaat("penumbra"):
			iLocal_277[0] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(443.759f, -1164.002f, 28.2918f, 87.9477f, 5f, 3f, iParam0, -1, -1, -1, -1, true, false, false, false, true, -1);
			iLocal_277[1] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(-1392.001f, 80.7104f, 52.8682f, 309.0381f, 5f, 3f, iParam0, -1, -1, -1, -1, true, false, false, false, true, -1);
			iLocal_277[2] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(1075.871f, 248.5613f, 79.8556f, 294.4635f, 5f, 3f, iParam0, -1, -1, -1, -1, true, false, false, false, true, -1);
			iLocal_277[3] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(-815.4279f, -1318.027f, 4.0003f, 170.2029f, 5f, 3f, iParam0, -1, -1, -1, -1, true, false, false, false, true, -1);
			iLocal_277[4] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(-1215.953f, -1675.18f, 2.9847f, 305.2072f, 5f, 3f, iParam0, -1, -1, -1, -1, true, false, false, false, true, -1);
			iLocal_277[5] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(-195.9823f, -1960.096f, 26.6205f, 284.8585f, 5f, 3f, iParam0, -1, -1, -1, -1, true, false, false, false, true, -1);
			iLocal_277[6] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(-1101.607f, -445.1016f, 34.6997f, 297.4066f, 5f, 3f, iParam0, -1, -1, -1, -1, true, false, false, false, true, -1);
			iLocal_277[7] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(-3018.759f, 739.4393f, 26.5749f, 101.9264f, 5f, 3f, iParam0, -1, -1, -1, -1, true, false, false, false, true, -1);
			iLocal_277[8] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(-1550.796f, 881.1625f, 177.8996f, 223.4805f, 5f, 3f, iParam0, -1, -1, -1, -1, true, false, false, false, true, -1);
			iLocal_277[9] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(-420.3277f, 1202.552f, 324.6421f, 50.857f, 5f, 3f, iParam0, -1, -1, -1, -1, true, false, false, false, true, -1);
			iLocal_278 = 1;
			break;
		
		case joaat("f620"):
		case joaat("fq2"):
		case joaat("patriot"):
		case joaat("habanero"):
		case joaat("prairie"):
		case joaat("gresley"):
			iLocal_277[0] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(464.1028f, 226.5939f, 102.1875f, 247.3152f, 5f, 3f, iParam0, -1, -1, -1, -1, true, false, false, false, true, -1);
			iLocal_277[1] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(-2437.372f, 3377.217f, 31.9214f, 29.7691f, 5f, 3f, iParam0, -1, -1, -1, -1, true, false, false, false, true, -1);
			iLocal_277[2] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(-1639.857f, -906.3636f, 7.7037f, 139.4463f, 5f, 3f, iParam0, -1, -1, -1, -1, true, false, false, false, true, -1);
			iLocal_277[3] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(-2981.245f, 612.5886f, 19.1798f, 105.0653f, 5f, 3f, iParam0, -1, -1, -1, -1, true, false, false, false, true, -1);
			iLocal_277[4] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(-1542.332f, 887.9052f, 180.491f, 19.9514f, 5f, 3f, iParam0, -1, -1, -1, -1, true, false, false, false, true, -1);
			iLocal_277[5] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(-420.3277f, 1202.552f, 324.6421f, 50.857f, 5f, 3f, iParam0, -1, -1, -1, -1, true, false, false, false, true, -1);
			iLocal_277[6] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(-331.3999f, -935.0096f, 30.0798f, 249.9035f, 5f, 3f, iParam0, -1, -1, -1, -1, true, false, false, false, true, -1);
			iLocal_277[7] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(-976.5854f, -2573.472f, 35.6066f, 240.851f, 5f, 3f, iParam0, -1, -1, -1, -1, true, false, false, false, true, -1);
			iLocal_277[8] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(-350.7184f, 427.0929f, 109.5371f, 17.3499f, 5f, 3f, iParam0, -1, -1, -1, -1, true, false, false, false, true, -1);
			iLocal_277[9] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(-208.5685f, -2077.887f, 26.6204f, 47.4426f, 5f, 3f, iParam0, -1, -1, -1, -1, true, false, false, false, true, -1);
			iLocal_278 = 1;
			break;
		
		case joaat("fusilade"):
		case joaat("bjxl"):
		case joaat("buccaneer"):
		case joaat("daemon"):
		case joaat("bagger"):
			iLocal_277[0] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(-815.4279f, -1318.027f, 4.0003f, 170.2029f, 5f, 3f, iParam0, -1, -1, -1, -1, true, false, false, false, true, -1);
			iLocal_277[1] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(-1215.953f, -1675.18f, 2.9847f, 305.2072f, 5f, 3f, iParam0, -1, -1, -1, -1, true, false, false, false, true, -1);
			iLocal_277[2] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(-195.9823f, -1960.096f, 26.6205f, 284.8585f, 5f, 3f, iParam0, -1, -1, -1, -1, true, false, false, false, true, -1);
			iLocal_277[3] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(-826.9526f, -236.9994f, 36.0555f, 209.0553f, 5f, 3f, iParam0, -1, -1, -1, -1, true, false, false, false, true, -1);
			iLocal_277[4] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(-819.5961f, 183.2204f, 71.0876f, 115.4816f, 5f, 3f, iParam0, -1, -1, -1, -1, true, false, false, false, true, -1);
			iLocal_277[5] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(-141.4775f, -594.4868f, 31.4271f, 69.7535f, 5f, 3f, iParam0, -1, -1, -1, -1, true, false, false, false, true, -1);
			iLocal_277[6] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(443.759f, -1164.002f, 28.2918f, 87.9477f, 5f, 3f, iParam0, -1, -1, -1, -1, true, false, false, false, true, -1);
			iLocal_277[7] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(-1392.001f, 80.7104f, 52.8682f, 309.0381f, 5f, 3f, iParam0, -1, -1, -1, -1, true, false, false, false, true, -1);
			iLocal_277[8] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(1075.871f, 248.5613f, 79.8556f, 294.4635f, 5f, 3f, iParam0, -1, -1, -1, -1, true, false, false, false, true, -1);
			iLocal_277[9] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(1218.18f, 2708.298f, 37.0054f, 359.1518f, 5f, 3f, iParam0, -1, -1, -1, -1, true, false, false, false, true, -1);
			iLocal_278 = 1;
			break;
	}
}

void func_376()
{
	int iVar0;
	
	if (iLocal_278)
	{
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (VEHICLE::DOES_SCRIPT_VEHICLE_GENERATOR_EXIST(iLocal_277[iVar0]))
		{
			VEHICLE::DELETE_SCRIPT_VEHICLE_GENERATOR(iLocal_277[iVar0]);
		}
		iLocal_277[iVar0] = 0;
		iVar0++;
	}
	iLocal_278 = 0;
}

int func_377(int iParam0)
{
	if (iParam0 != func_121())
	{
		if (func_14(iParam0, 1, 1))
		{
			if (Global_2425869[iParam0 /*443*/].f_314.f_6 != -1)
			{
				return func_120(Global_2425869[iParam0 /*443*/].f_314.f_6) == 11;
			}
		}
	}
	return 0;
}

bool func_378(bool bParam0)
{
	if (!MISC::IS_BIT_SET(bParam0))
	{
		return 0;
	}
	if (PED::IS_PED_IN_ANY_POLICE_VEHICLE(bParam0, 0))
	{
	}
	return MONEY::NETWORK_SPENT_REQUEST_HEIST(bParam0) == Global_150525;
}

bool func_379(int iParam0, bool bParam1)
{
	if (func_83() != 0)
	{
		return func_380(iParam0) != 0;
	}
	return func_139(iParam0, bParam1, 0);
}

int func_380(int iParam0)
{
	if (func_14(iParam0, 0, 1))
	{
		return Global_2425869[iParam0 /*443*/].f_1;
	}
	return 0;
}

void func_381()
{
	var uVar0;
	
	if (!func_508(&uLocal_299))
	{
		func_507(&uLocal_299, 0, 0);
	}
	else if (func_506(&uLocal_299, 250, 0))
	{
		func_46(&uLocal_299);
		if (func_394(1, 0))
		{
			if (!unk_0xCE990E643CD9D0E5(iLocal_307, 5) && !func_393())
			{
			}
			else if (SYSTEM::VDIST(unk_0x9B0761B4C3EB8BC7(), 0))
			{
				if ((func_392() || func_393()) || func_389())
				{
					if (!func_388(ENTITY::GET_ENTITY_MODEL(unk_0x9B0761B4C3EB8BC7(), 0)))
					{
						if (!func_387(ENTITY::GET_ENTITY_MODEL(unk_0x9B0761B4C3EB8BC7(), 0)) && !func_15(ENTITY::GET_ENTITY_MODEL(unk_0x9B0761B4C3EB8BC7(), 0)))
						{
							if (!PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
							{
								if (func_383(&uVar0))
								{
									if (!unk_0xCE990E643CD9D0E5(iLocal_307, 2))
									{
										if (func_253() && SYSTEM::TIMERA() > 500)
										{
											func_165("IMPEX_FSPRAY_FM", -1);
											unk_0xBE20AB8238688965(&iLocal_307, 2);
										}
									}
									else
									{
										SYSTEM::SETTIMERA(0);
									}
								}
								else if (!unk_0xCE990E643CD9D0E5(iLocal_307, 8))
								{
									if (func_253() && SYSTEM::TIMERA() > 500)
									{
										func_165("IMPEX_CASH_FM", -1);
										unk_0xBE20AB8238688965(&iLocal_307, 8);
									}
								}
								else
								{
									SYSTEM::SETTIMERA(0);
								}
							}
							else if (!unk_0xCE990E643CD9D0E5(iLocal_307, 11))
							{
								if (func_253() && SYSTEM::TIMERA() > 500)
								{
									func_165("IMPEX_WANTED_FM", -1);
									unk_0xBE20AB8238688965(&iLocal_307, 11);
								}
							}
							else
							{
								SYSTEM::SETTIMERA(0);
							}
						}
						else if (!PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
						{
							if (!func_382())
							{
								if (!func_15(ENTITY::GET_ENTITY_MODEL(unk_0x9B0761B4C3EB8BC7(), 0)))
								{
									if (!unk_0xCE990E643CD9D0E5(iLocal_307, 3))
									{
										VEHICLE::IS_VEHICLE_DRIVEABLE(&iLocal_307, 7);
										if (func_253() && SYSTEM::TIMERA() > 2000)
										{
											if (Global_2540384.f_4581 == 0)
											{
												if (!func_245(ENTITY::GET_ENTITY_MODEL(unk_0x9B0761B4C3EB8BC7(), 0), 0))
												{
													func_165("IMPEX_DELIVER_FM", -1);
													unk_0xBE20AB8238688965(&iLocal_307, 3);
												}
											}
										}
									}
									else
									{
										SYSTEM::SETTIMERA(0);
									}
								}
								else if (!unk_0xCE990E643CD9D0E5(iLocal_307, 7))
								{
									if (func_253() && SYSTEM::TIMERA() > 2000)
									{
										func_165("IMPEX_RIG_FM", -1);
										unk_0xBE20AB8238688965(&iLocal_307, 7);
									}
								}
								else
								{
									SYSTEM::SETTIMERA(0);
								}
							}
							else if (!unk_0xCE990E643CD9D0E5(iLocal_307, 6))
							{
								if (func_253() && SYSTEM::TIMERA() > 2000)
								{
									func_165("IMPEX_WANTED_P", -1);
									unk_0xBE20AB8238688965(&iLocal_307, 6);
								}
							}
							else
							{
								SYSTEM::SETTIMERA(0);
							}
						}
						else if (!unk_0xCE990E643CD9D0E5(iLocal_307, 4))
						{
							if (func_253() && SYSTEM::TIMERA() > 5000)
							{
								func_165("IMPEX_WANTED_FM", -1);
								unk_0xBE20AB8238688965(&iLocal_307, 4);
							}
						}
						else
						{
							SYSTEM::SETTIMERA(0);
						}
					}
				}
				else
				{
					if (func_235("IMPEX_FSPRAY_FM"))
					{
						unk_0xD289B55B6AADBA10(1);
					}
					VEHICLE::IS_VEHICLE_DRIVEABLE(&iLocal_307, 2);
					VEHICLE::IS_VEHICLE_DRIVEABLE(&iLocal_307, 3);
					VEHICLE::IS_VEHICLE_DRIVEABLE(&iLocal_307, 4);
					VEHICLE::IS_VEHICLE_DRIVEABLE(&iLocal_307, 6);
					VEHICLE::IS_VEHICLE_DRIVEABLE(&iLocal_307, 7);
					VEHICLE::IS_VEHICLE_DRIVEABLE(&iLocal_307, 8);
					VEHICLE::IS_VEHICLE_DRIVEABLE(&iLocal_307, 11);
					SYSTEM::SETTIMERA(0);
				}
			}
			else
			{
				if (func_235("IMPEX_FSPRAY_FM"))
				{
					unk_0xD289B55B6AADBA10(1);
				}
				VEHICLE::IS_VEHICLE_DRIVEABLE(&iLocal_307, 2);
				VEHICLE::IS_VEHICLE_DRIVEABLE(&iLocal_307, 3);
				VEHICLE::IS_VEHICLE_DRIVEABLE(&iLocal_307, 4);
				VEHICLE::IS_VEHICLE_DRIVEABLE(&iLocal_307, 6);
				VEHICLE::IS_VEHICLE_DRIVEABLE(&iLocal_307, 7);
				VEHICLE::IS_VEHICLE_DRIVEABLE(&iLocal_307, 8);
				VEHICLE::IS_VEHICLE_DRIVEABLE(&iLocal_307, 11);
				if (SYSTEM::TIMERA() > 0)
				{
					SYSTEM::SETTIMERA(0);
				}
			}
		}
		else if (func_235("IMPEX_FSPRAY_FM"))
		{
			unk_0xD289B55B6AADBA10(1);
		}
	}
}

int func_382()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar3 = ENTITY::GET_ENTITY_MODEL(unk_0x9B0761B4C3EB8BC7(), 0);
	iVar2 = 0;
	while (iVar2 < 4)
	{
		iVar1 = (iVar2 - 1);
		if (!SYSTEM::VDIST2(iVar3, iVar1, 0))
		{
			if (MISC::IS_BIT_SET(MISC::IS_MINIGAME_IN_PROGRESS(bVar3, iVar1, 0)))
			{
				if (!PED::IS_PED_IN_ANY_POLICE_VEHICLE(MISC::IS_MINIGAME_IN_PROGRESS(bVar3, iVar1, 0), 0))
				{
					bVar0 = MISC::IS_MINIGAME_IN_PROGRESS(bVar3, iVar1, 0);
					if (!PLAYER::SET_PLAYER_WANTED_LEVEL(bVar0))
					{
						return 1;
					}
				}
			}
		}
		iVar2++;
	}
	return 0;
}

int func_383(var uParam0)
{
	bool bVar0;
	
	if (SYSTEM::VDIST(unk_0x9B0761B4C3EB8BC7(), 0))
	{
		bVar0 = ENTITY::GET_ENTITY_MODEL(unk_0x9B0761B4C3EB8BC7(), 0);
		if (MISC::IS_BIT_SET(bVar0) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(bVar0))
		{
			*uParam0 = func_384(bVar0);
			if (!MONEY::_NETWORK_CASINO_CAN_PURCHASE_CHIPS_WITH_PVC_2((400 + *uParam0), 0, 0, 1, -1, 0))
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

int func_384(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	fVar3 = VEHICLE::GET_VEHICLE_DIRT_LEVEL(bParam0);
	if (fVar3 > 10f)
	{
		iVar9 = 8;
	}
	else if (fVar3 > 5f)
	{
		iVar9 = 4;
	}
	fVar3 = (VEHICLE::GET_VEHICLE_ENGINE_HEALTH(bParam0) / 1000f);
	if (fVar3 > 0.99f)
	{
		iVar5 = 0;
	}
	else if (fVar3 > 0.8f)
	{
		iVar5 = 20;
	}
	else if (fVar3 > 0.6f)
	{
		iVar5 = 40;
	}
	else if (fVar3 > 0.4f)
	{
		iVar5 = 80;
	}
	else
	{
		iVar5 = 100;
	}
	fVar3 = (VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(bParam0) / 1000f);
	if (fVar3 > 0.99f)
	{
		iVar6 = 0;
	}
	else if (fVar3 > 0.8f)
	{
		iVar6 = 20;
	}
	else if (fVar3 > 0.6f)
	{
		iVar6 = 40;
	}
	else if (fVar3 > 0.4f)
	{
		iVar6 = 60;
	}
	else
	{
		iVar6 = 75;
	}
	fVar3 = (SYSTEM::TO_FLOAT(ENTITY::GET_ENTITY_HEALTH(bParam0)) / 1000f);
	if (fVar3 > 0.99f)
	{
		iVar8 = 0;
	}
	else if (fVar3 > 0.8f)
	{
		iVar8 = 40;
	}
	else if (fVar3 > 0.6f)
	{
		iVar8 = 80;
	}
	else if (fVar3 > 0.4f)
	{
		iVar8 = 150;
	}
	else
	{
		iVar8 = 200;
	}
	if (VEHICLE::_IS_VEHICLE_DAMAGED(bParam0))
	{
		iVar8 += 50;
	}
	if (VEHICLE::IS_VEHICLE_BUMPER_BROKEN_OFF(bParam0, true))
	{
		iVar8 += 50;
	}
	else if (VEHICLE::IS_VEHICLE_BUMPER_BOUNCING(bParam0, true))
	{
		iVar8 += 25;
	}
	if (VEHICLE::IS_VEHICLE_BUMPER_BROKEN_OFF(bParam0, false))
	{
		iVar8 += 50;
	}
	else if (VEHICLE::IS_VEHICLE_BUMPER_BOUNCING(bParam0, false))
	{
		iVar8 += 25;
	}
	if (!VEHICLE::ARE_ALL_VEHICLE_WINDOWS_INTACT(bParam0))
	{
		iVar10 += 20;
		if (!VEHICLE::REMOVE_VEHICLE_WINDOW(bParam0, 6))
		{
			iVar10 += 40;
		}
		if (!VEHICLE::REMOVE_VEHICLE_WINDOW(bParam0, 7))
		{
			iVar10 += 40;
		}
	}
	if (MONEY::NETWORK_SPENT_HIRE_MERCENARY(MISC::GET_MODEL_DIMENSIONS(bParam0)))
	{
		iVar1 = 0;
		if (VEHICLE::IS_VEHICLE_DOOR_DAMAGED(bParam0, 0))
		{
			iVar1++;
		}
		if (VEHICLE::IS_VEHICLE_DOOR_DAMAGED(bParam0, 1))
		{
			iVar1++;
		}
		if (VEHICLE::IS_VEHICLE_DOOR_DAMAGED(bParam0, 2))
		{
			iVar1++;
		}
		if (VEHICLE::IS_VEHICLE_DOOR_DAMAGED(bParam0, 3))
		{
			iVar1++;
		}
		if (VEHICLE::IS_VEHICLE_DOOR_DAMAGED(bParam0, 4))
		{
			iVar1++;
		}
		if (VEHICLE::IS_VEHICLE_DOOR_DAMAGED(bParam0, 5))
		{
			iVar1++;
		}
		iVar8 = (iVar8 + iVar1 * 25);
	}
	if (VEHICLE::GET_IS_LEFT_VEHICLE_HEADLIGHT_DAMAGED(bParam0))
	{
		iVar8 += 15;
	}
	if (VEHICLE::GET_IS_RIGHT_VEHICLE_HEADLIGHT_DAMAGED(bParam0))
	{
		iVar8 += 15;
	}
	iVar1 = 0;
	iVar2 = 0;
	while (iVar2 < 8)
	{
		if (VEHICLE::IS_VEHICLE_TYRE_BURST(bParam0, iVar2, false))
		{
			iVar1++;
		}
		iVar2++;
	}
	iVar7 = iVar1 * 25;
	if (AUDIO::_0x5DB8010EE71FDEF2(bParam0))
	{
		iVar11 = 50;
	}
	iVar0 = (((((((iVar4 + iVar5) + iVar6) + iVar8) + iVar7) + iVar9) + iVar10) + iVar11);
	if (func_386(MISC::GET_MODEL_DIMENSIONS(bParam0), 0))
	{
		fVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_11559));
		if (fVar0 > SYSTEM::FLOOR((4f * Global_262145.f_11559)))
		{
			iVar4 = Global_262145.f_11557;
			fVar0 = (fVar0 + iVar4);
		}
		if (fVar0 > Global_262145.f_11558)
		{
			fVar0 = Global_262145.f_11558;
		}
	}
	else if (func_385(bParam0))
	{
		fVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(fVar0) * Global_262145.f_11562));
		if (fVar0 > SYSTEM::FLOOR((4f * Global_262145.f_11562)))
		{
			iVar4 = Global_262145.f_11560;
			fVar0 = (fVar0 + iVar4);
		}
		if (fVar0 > Global_262145.f_11561)
		{
			fVar0 = Global_262145.f_11561;
		}
	}
	else
	{
		if (fVar0 > 0)
		{
			iVar4 = 50;
			fVar0 = (fVar0 + iVar4);
		}
		if (fVar0 > 1250)
		{
			fVar0 = 1250;
		}
	}
	return fVar0;
}

int func_385(bool bParam0)
{
	switch (MISC::GET_MODEL_DIMENSIONS(bParam0))
	{
		case joaat("technical2"):
		case joaat("boxville5"):
		case joaat("wastelander"):
		case joaat("phantom2"):
		case joaat("voltic2"):
		case joaat("dune4"):
		case joaat("dune5"):
		case joaat("ruiner2"):
		case joaat("blazer5"):
			return 1;
			break;
	}
	return 0;
}

int func_386(void fParam0, int iParam1)
{
	switch (fParam0)
	{
		case joaat("faction2"):
		case joaat("buccaneer2"):
		case joaat("chino2"):
		case joaat("moonbeam2"):
		case joaat("primo2"):
		case joaat("voodoo"):
			return 1;
			break;
		
		case joaat("sabregt2"):
			if (!Global_262145.f_14227)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("tornado5"):
			if (!Global_262145.f_14228)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("virgo2"):
			if (!Global_262145.f_14226)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("minivan2"):
			if (!Global_262145.f_14229)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("slamvan3"):
			if (!Global_262145.f_14231)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("faction3"):
			if (!Global_262145.f_14230)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("sultanrs"):
		case joaat("banshee2"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("comet3"):
			if (Global_262145.f_18677)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("diablous2"):
			if (Global_262145.f_18679)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("fcr2"):
			if (Global_262145.f_18683)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("elegy"):
			if (Global_262145.f_18680)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("nero2"):
			if (Global_262145.f_18687)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("italigtb2"):
			if (Global_262145.f_18685)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("specter2"):
			if (Global_262145.f_18690)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("technical3"):
			if (Global_262145.f_20635)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("insurgent3"):
			if (Global_262145.f_20636)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("slamvan4"):
		case joaat("slamvan5"):
		case joaat("slamvan6"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("issi4"):
		case joaat("issi5"):
		case joaat("issi6"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("impaler2"):
		case joaat("impaler3"):
		case joaat("impaler4"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("deathbike"):
		case joaat("deathbike2"):
		case joaat("deathbike3"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("monster3"):
		case joaat("monster4"):
		case joaat("monster5"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("dominator4"):
		case joaat("dominator5"):
		case joaat("dominator6"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("bruiser"):
		case joaat("bruiser2"):
		case joaat("bruiser3"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("youga3"):
		case joaat("gauntlet5"):
		case joaat("yosemite3"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("manana2"):
		case joaat("peyote3"):
		case joaat("glendale2"):
			return 1;
			break;
	}
	return 0;
}

bool func_387(bool bParam0)
{
	return unk_0x871819940BD2E434(bParam0, "Sprayed_Vehicle_Decorator");
}

int func_388(bool bParam0)
{
	if (unk_0x871819940BD2E434(bParam0, "Veh_Modded_By_Player") && PED::IS_PED_IN_ANY_VEHICLE(bParam0, "Veh_Modded_By_Player") != PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	return 0;
}

int func_389()
{
	int iVar0;
	
	if (func_517())
	{
		return 0;
	}
	if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(unk_0x9B0761B4C3EB8BC7()))
	{
		iVar0 = ENTITY::GET_ENTITY_MODEL(unk_0x9B0761B4C3EB8BC7(), 0);
		if (!func_391(iVar0, 1))
		{
			if (func_390(MISC::GET_MODEL_DIMENSIONS(iVar0)))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_390(void fParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_75(fParam0);
	if (iVar0 > -1)
	{
		iVar1 = 0;
		while (iVar1 < 10)
		{
			if (Local_322.f_35[iVar1] == iVar0)
			{
				if (!func_506(&(Local_322.f_46[iVar1 /*2*/]), 120000, 0))
				{
					return 1;
				}
			}
			iVar1++;
		}
	}
	return 0;
}

int func_391(bool bParam0, bool bParam1)
{
	if (Global_76833)
	{
		if (MISC::IS_BIT_SET(bParam0) && (!bParam1 || ENTITY::GET_ENTITY_COORDS(bParam0, false)))
		{
			if (unk_0x871819940BD2E434(bParam0, "Player_Vehicle"))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_392()
{
	int iVar0;
	
	if (func_517())
	{
		return 0;
	}
	if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(unk_0x9B0761B4C3EB8BC7()))
	{
		if (!Global_1654395)
		{
			iVar0 = ENTITY::GET_ENTITY_MODEL(unk_0x9B0761B4C3EB8BC7(), 0);
			if (!func_391(iVar0, 1))
			{
				if (!GRAPHICS::DOES_VEHICLE_HAVE_CREW_EMBLEM(iVar0, 0))
				{
					if (ENTITY::GET_ENTITY_COORDS(bVar0, true))
					{
						if (Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_274.f_28 <= 0)
						{
							if (!unk_0x871819940BD2E434(bVar0, "Not_Allow_As_Saved_Veh"))
							{
								if (!Global_1654394)
								{
									if (bLocal_279)
									{
										bLocal_279 = false;
									}
									if (func_74(&Local_321, MISC::GET_MODEL_DIMENSIONS(bVar0)))
									{
										Global_2540384.f_1747 = 1;
										return 1;
									}
								}
							}
						}
					}
					else if (!bLocal_279)
					{
						bLocal_279 = true;
					}
				}
			}
		}
	}
	return 0;
}

int func_393()
{
	if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(unk_0x9B0761B4C3EB8BC7()))
	{
		if (unk_0xCE990E643CD9D0E5(Local_322.f_23, false))
		{
			if (NETWORK::NETWORK_IS_HANDLE_VALID(Local_322.f_22))
			{
				if (func_4(Local_322.f_22))
				{
					if (PED::IS_PED_SITTING_IN_VEHICLE(unk_0x9B0761B4C3EB8BC7(), unk_0x770D3B2B4702434A(Local_322.f_22)))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

bool func_394(bool bParam0, bool bParam1)
{
	bool bVar0;
	
	bVar0 = true;
	if (STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(unk_0x9B0761B4C3EB8BC7()))
	{
		bVar0 = false;
	}
	if (!bParam1)
	{
		if (bVar0)
		{
			if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
			{
				bVar0 = false;
			}
		}
	}
	if (!bParam0)
	{
		if (bVar0)
		{
			if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
			{
				bVar0 = false;
			}
		}
	}
	if (bVar0)
	{
		if (func_139(PLAYER::PLAYER_ID(), 1, 0))
		{
			bVar0 = false;
		}
	}
	if (bVar0)
	{
		if (func_112())
		{
			bVar0 = false;
		}
	}
	if (!func_14(PLAYER::PLAYER_ID(), 0, 0))
	{
		bVar0 = false;
	}
	if (func_71(PLAYER::PLAYER_ID(), 1))
	{
		bVar0 = false;
	}
	if (func_122(PLAYER::PLAYER_ID(), 1))
	{
		bVar0 = false;
	}
	return bVar0;
}

void func_395()
{
	bool bVar0;
	
	switch (iLocal_104)
	{
		case 0:
			if (!func_139(PLAYER::PLAYER_ID(), 1, 0))
			{
				if (!func_508(&uLocal_105) || func_506(&uLocal_105, 2000, 0))
				{
					if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(unk_0x9B0761B4C3EB8BC7()))
					{
						if (SYSTEM::VDIST2(NETWORK::NETWORK_ARE_HANDLES_THE_SAME(unk_0x9B0761B4C3EB8BC7(), 1), 1199.403f, -3113.591f, 4.5453f) < 400f)
						{
							func_398(&uLocal_109, 4, iLocal_103, "MECHANIC_IMP", 0, 1);
							iLocal_332 = 0;
							iLocal_104++;
						}
					}
					func_46(&uLocal_105);
					func_507(&uLocal_105, 0, 0);
				}
			}
			break;
		
		case 1:
			if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(unk_0x9B0761B4C3EB8BC7()))
			{
				if (!func_139(PLAYER::PLAYER_ID(), 1, 0))
				{
					if (SYSTEM::VDIST2(NETWORK::NETWORK_ARE_HANDLES_THE_SAME(unk_0x9B0761B4C3EB8BC7(), 1), 1199.403f, -3113.591f, 4.5453f) < 600f)
					{
						if (bLocal_88)
						{
							if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(unk_0x9B0761B4C3EB8BC7()))
							{
								if (unk_0x1037B9D45CE6B788(unk_0x9B0761B4C3EB8BC7(), 1204.224f, -3121.533f, 4.357823f, 1204.521f, -3107.603f, 8.653814f, 5.1875f, 0, 1, 0))
								{
									if (!iLocal_332)
									{
										bVar0 = ENTITY::GET_ENTITY_MODEL(unk_0x9B0761B4C3EB8BC7(), 0);
										if (func_384(bVar0) > 500)
										{
											sLocal_333 = "FM_IEPOOR";
										}
										else
										{
											sLocal_333 = "FM_IEGOOD";
										}
										iLocal_332 = 1;
									}
									else if (func_397(&uLocal_109, "FM_1AU", sLocal_333, 12, 0, 0, 0))
									{
										bLocal_274 = ENTITY::GET_ENTITY_MODEL(unk_0x9B0761B4C3EB8BC7(), 0);
										iLocal_104++;
										iLocal_332 = 0;
									}
								}
							}
						}
					}
					else
					{
						func_396();
						iLocal_104 = 0;
					}
				}
				else
				{
					func_396();
					iLocal_104 = 0;
				}
			}
			break;
		
		case 2:
			if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(unk_0x9B0761B4C3EB8BC7()))
			{
				if (!func_139(PLAYER::PLAYER_ID(), 1, 0))
				{
					if (SYSTEM::VDIST2(NETWORK::NETWORK_ARE_HANDLES_THE_SAME(unk_0x9B0761B4C3EB8BC7(), 1), 1199.403f, -3113.591f, 4.5453f) < 600f)
					{
						if (bLocal_88)
						{
							if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(unk_0x9B0761B4C3EB8BC7()))
							{
								if (ENTITY::GET_ENTITY_MODEL(unk_0x9B0761B4C3EB8BC7(), 0) != bLocal_274)
								{
									iLocal_104 = 1;
								}
							}
						}
					}
					else
					{
						func_396();
						iLocal_104 = 0;
					}
				}
				else
				{
					func_396();
					iLocal_104 = 0;
				}
			}
			break;
	}
}

void func_396()
{
	int iVar0;
	
	if (MISC::IS_BIT_SET(iLocal_103))
	{
		unk_0x74528AC0906CBABE(joaat("s_m_y_xmech_02"));
		iVar0 = bLocal_103;
		ENTITY::DELETE_ENTITY(&iVar0);
	}
}

bool func_397(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_344(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_336(sParam2, iParam3, 0);
}

void func_398(var uParam0, int iParam1, bool bParam2, char* sParam3, int iParam4, int iParam5)
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

void func_399()
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	struct<3> Var9;
	int iVar10;
	
	if (func_394(1, 1))
	{
		switch (Local_329[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1)
		{
			case 0:
				if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(unk_0x9B0761B4C3EB8BC7()))
				{
					bVar7 = func_389();
					if ((func_392() || func_393()) || bVar7)
					{
						if (!func_382())
						{
							if (AUDIO::SET_SCRIPT_UPDATE_DOOR_AUDIO(PLAYER::PLAYER_ID()) == 0)
							{
								if (!func_495())
								{
									if (bLocal_87)
									{
										bLocal_87 = false;
									}
									bVar3 = ENTITY::GET_ENTITY_MODEL(unk_0x9B0761B4C3EB8BC7(), 0);
									if (NETWORK::NET_TO_VEH("AllowModSprayRepair", 2))
									{
										if (!unk_0x871819940BD2E434(bVar3, "AllowModSprayRepair") || (unk_0x871819940BD2E434(bVar3, "AllowModSprayRepair") && DECORATOR::DECOR_GET_BOOL(bVar3, "AllowModSprayRepair") == 0))
										{
											DECORATOR::DECOR_SET_BOOL(bVar3, "AllowModSprayRepair", true);
										}
									}
									if (!iLocal_93)
									{
										if (func_494(bVar3))
										{
											PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_ID(), 2, false);
											PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
										}
									}
									bLocal_334 = bVar3;
									if (unk_0xCE990E643CD9D0E5(iLocal_330, 15))
									{
										VEHICLE::IS_VEHICLE_DRIVEABLE(&iLocal_330, 15);
									}
									if (unk_0xCE990E643CD9D0E5(iLocal_307, 9))
									{
										VEHICLE::IS_VEHICLE_DRIVEABLE(&iLocal_307, 9);
									}
									if (unk_0xCE990E643CD9D0E5(iLocal_307, 12))
									{
										VEHICLE::IS_VEHICLE_DRIVEABLE(&iLocal_307, 12);
									}
									if (unk_0xCE990E643CD9D0E5(iLocal_307, 10))
									{
										VEHICLE::IS_VEHICLE_DRIVEABLE(&iLocal_307, 10);
									}
									if (!unk_0xCE990E643CD9D0E5(iLocal_330, 12))
									{
										if (bVar7)
										{
											unk_0xBE20AB8238688965(&iLocal_330, 12);
										}
									}
									else if (!bVar7)
									{
										VEHICLE::IS_VEHICLE_DRIVEABLE(&iLocal_330, 12);
									}
									if (func_387(bVar3))
									{
										if (!func_15(bVar3))
										{
											bLocal_80 = true;
											if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
											{
												if (bLocal_86)
												{
													bLocal_86 = false;
												}
												if (MISC::IS_MINIGAME_IN_PROGRESS(bVar3, -1, 0) == unk_0x9B0761B4C3EB8BC7())
												{
													bLocal_83 = true;
												}
											}
											else if (func_77())
											{
												if (bLocal_83)
												{
													bLocal_83 = false;
												}
												bLocal_86 = true;
											}
											bLocal_81 = false;
											bLocal_82 = false;
											bLocal_84 = false;
											bLocal_85 = false;
											bLocal_87 = false;
											bLocal_88 = true;
											if (func_493(1215605247, 18))
											{
												bLocal_78 = true;
											}
											bLocal_316 = STATS::GET_PACKED_BOOL_STAT_KEY(unk_0x9B0761B4C3EB8BC7());
											if (!ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(bLocal_316))
											{
												if (func_245(bLocal_316, 0))
												{
													if (!unk_0xCE990E643CD9D0E5(iLocal_330, 17))
													{
														unk_0xBE20AB8238688965(&iLocal_330, 17);
													}
													else if (func_245(bLocal_316, 1))
													{
														Var9 = { ENTITY::GET_ENTITY_VELOCITY(bLocal_316) };
														if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(bLocal_316) < 0.5f || ENTITY::IS_ENTITY_PLAYING_ANIM(Var9.f_1) < 1.3f)
														{
															func_492();
															func_483(PLAYER::PLAYER_ID(), 0, 16388, 0);
															if (func_393())
															{
																unk_0xBE20AB8238688965(&iLocal_330, 4);
																unk_0xBE20AB8238688965(&(Local_329[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_2), true);
															}
															if (func_392() || func_389())
															{
																unk_0xBE20AB8238688965(&iLocal_330, 6);
															}
															if (func_482())
															{
																bLocal_77 = true;
															}
															else
															{
																bLocal_77 = false;
															}
															VEHICLE::SET_VEHICLE_DOORS_LOCKED(bLocal_316, 2);
															if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(bLocal_316))
															{
																ENTITY::SET_ENTITY_PROOFS(bLocal_316, true, true, true, true, true, false, false, false);
															}
															Local_329[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/] = func_75(MISC::GET_MODEL_DIMENSIONS(bLocal_316));
															Local_329[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1 = 1;
															iVar5 = 0;
															iVar4 = 0;
															while (iVar4 < 4)
															{
																iVar1 = (iVar4 - 1);
																iLocal_315[iVar4] = func_121();
																if (!SYSTEM::VDIST2(bLocal_316, iVar1, 0))
																{
																	if (MISC::IS_BIT_SET(MISC::IS_MINIGAME_IN_PROGRESS(bLocal_316, iVar1, 0)))
																	{
																		if (!PED::IS_PED_IN_ANY_POLICE_VEHICLE(MISC::IS_MINIGAME_IN_PROGRESS(bLocal_316, iVar1, 0), 0))
																		{
																			bVar0 = MISC::IS_MINIGAME_IN_PROGRESS(bLocal_316, iVar1, 0);
																			if (PLAYER::SET_PLAYER_WANTED_LEVEL(bVar0))
																			{
																				if (func_14(VEHICLE::GET_VEHICLE_NUMBER_OF_PASSENGERS(bVar0), 0, 0))
																				{
																					if (NETWORK::UGC_CLEAR_QUERY_RESULTS(VEHICLE::GET_VEHICLE_NUMBER_OF_PASSENGERS(bVar0)))
																					{
																						iLocal_315[iVar4] = VEHICLE::GET_VEHICLE_NUMBER_OF_PASSENGERS(bVar0);
																						iVar5++;
																					}
																				}
																			}
																		}
																	}
																}
																iVar4++;
															}
															iLocal_286 = func_481(MISC::GET_MODEL_DIMENSIONS(bLocal_316));
															iLocal_287 = func_384(bLocal_316);
															fLocal_288 = SYSTEM::TO_FLOAT((iLocal_286 - iLocal_287));
															fLocal_288 = (fLocal_288 * Global_262145.f_2412);
															if (unk_0xCE990E643CD9D0E5(iLocal_330, 4))
															{
																fLocal_288 = (fLocal_288 * 1.3f);
															}
															fLocal_288 = (fLocal_288 / SYSTEM::TO_FLOAT(iVar5));
															fLocal_289 = 500f;
															func_480();
															func_173(0);
															func_478(1247, 1, -1);
															if (func_235("IMPEX_DELIVER_FM"))
															{
																unk_0xD289B55B6AADBA10(1);
															}
															VEHICLE::IS_VEHICLE_DRIVEABLE(&iLocal_330, 12);
															iVar6 = func_80(1199, -1, 0);
															if (!unk_0xCE990E643CD9D0E5(iVar6, true))
															{
																unk_0xBE20AB8238688965(&iVar6, true);
																func_146(1199, iVar6, -1, 1, 0);
															}
															else if (!unk_0xCE990E643CD9D0E5(iVar6, 2))
															{
																unk_0xBE20AB8238688965(&iVar6, 2);
																func_146(1199, iVar6, -1, 1, 0);
															}
															func_477();
															iLocal_290 = 0;
															iLocal_290 = SYSTEM::ROUND(fLocal_288);
															iLocal_290 = (iLocal_290 - (iLocal_290 % 25));
															if (bLocal_335 == bVar3)
															{
																iLocal_290 = (iLocal_290 + iLocal_292);
															}
															if (!unk_0xCE990E643CD9D0E5(iLocal_330, 4))
															{
																if (iLocal_290 > Global_262145.f_164)
																{
																	iLocal_290 = Global_262145.f_164;
																}
															}
															else if (iLocal_290 > Global_262145.f_164)
															{
																iLocal_290 = Global_262145.f_164;
															}
															iLocal_291 = 0;
															fLocal_289 = (fLocal_289 * Global_262145.f_4228);
															iLocal_291 = SYSTEM::ROUND(fLocal_289);
															VEHICLE::IS_VEHICLE_DRIVEABLE(&iLocal_330, 17);
															bLocal_317 = bLocal_316;
															fLocal_319 = MISC::GET_MODEL_DIMENSIONS(bLocal_316);
															if (!unk_0xCE990E643CD9D0E5(iLocal_330, 4))
															{
																STATS::_PLAYSTATS_IMP_EXP(19, iLocal_291, iLocal_290, bLocal_316);
															}
															else
															{
																STATS::_PLAYSTATS_IMP_EXP(120, iLocal_291, iLocal_290, bLocal_316);
															}
															func_476(19, 1);
															func_475();
															func_511();
														}
														else if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
														{
															func_483(PLAYER::PLAYER_ID(), 0, 16388, 0);
														}
													}
												}
												else if (unk_0xCE990E643CD9D0E5(iLocal_330, 17))
												{
													VEHICLE::IS_VEHICLE_DRIVEABLE(&iLocal_330, 17);
												}
											}
										}
										else
										{
											if (bLocal_80)
											{
												bLocal_80 = false;
											}
											if (bLocal_88)
											{
												bLocal_88 = false;
											}
											if (bLocal_83)
											{
												bLocal_83 = false;
											}
											if (bLocal_86)
											{
												bLocal_86 = false;
											}
											if (bLocal_87)
											{
												bLocal_87 = false;
											}
										}
									}
									else if (!func_15(ENTITY::GET_ENTITY_MODEL(unk_0x9B0761B4C3EB8BC7(), 0)))
									{
										if (func_383(&iVar8))
										{
											if (!func_388(ENTITY::GET_ENTITY_MODEL(unk_0x9B0761B4C3EB8BC7(), 0)))
											{
												if (MISC::IS_MINIGAME_IN_PROGRESS(bVar3, -1, 0) == unk_0x9B0761B4C3EB8BC7())
												{
													if (bLocal_335 != bVar3)
													{
														bLocal_335 = bVar3;
														iLocal_292 = 0;
													}
													else if (iLocal_292 != iVar8)
													{
														if (iLocal_292 < iVar8)
														{
															iLocal_292 = iVar8;
														}
													}
												}
												if (!bLocal_81)
												{
													bLocal_81 = true;
												}
												if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
												{
													if (func_77())
													{
														if (bLocal_82)
														{
															bLocal_82 = false;
														}
														if (MISC::IS_MINIGAME_IN_PROGRESS(ENTITY::GET_ENTITY_MODEL(unk_0x9B0761B4C3EB8BC7(), 0), -1, 0) == unk_0x9B0761B4C3EB8BC7())
														{
															if (func_384(ENTITY::GET_ENTITY_MODEL(unk_0x9B0761B4C3EB8BC7(), 0)) > 0)
															{
																if (!bLocal_85)
																{
																	bLocal_85 = true;
																}
															}
															else
															{
																if (bLocal_85)
																{
																	bLocal_85 = false;
																}
																if (!bLocal_84)
																{
																	bLocal_84 = true;
																}
															}
														}
													}
												}
												else if (!func_77())
												{
													if (bLocal_84)
													{
														bLocal_84 = false;
													}
													if (bLocal_85)
													{
														bLocal_85 = false;
													}
													if (!bLocal_82)
													{
														if (MISC::IS_MINIGAME_IN_PROGRESS(ENTITY::GET_ENTITY_MODEL(unk_0x9B0761B4C3EB8BC7(), 0), -1, 0) == unk_0x9B0761B4C3EB8BC7())
														{
															bLocal_82 = true;
														}
													}
												}
											}
											else
											{
												func_474();
											}
										}
										else
										{
											func_474();
										}
									}
									else
									{
										func_474();
										if (bLocal_88)
										{
											bLocal_88 = false;
										}
									}
								}
							}
							else
							{
								bVar3 = ENTITY::GET_ENTITY_MODEL(unk_0x9B0761B4C3EB8BC7(), 0);
								if (bLocal_334 != bVar3)
								{
									if (!iLocal_93)
									{
										if (func_494(bVar3))
										{
											PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_ID(), 2, false);
											PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
										}
									}
									bLocal_334 = bVar3;
								}
								if (!bLocal_87)
								{
									func_474();
									bLocal_87 = true;
								}
							}
						}
					}
					else
					{
						func_474();
						if (bLocal_88)
						{
							bLocal_88 = false;
						}
						if (iLocal_93)
						{
							if (Local_322.f_33)
							{
								if (bLocal_98)
								{
									iLocal_93 = 0;
								}
							}
						}
						if (!SYSTEM::VDIST(unk_0x9B0761B4C3EB8BC7(), 0))
						{
							if ((func_235("IMPEX_NOT_NEED") || func_235("IMPEX_NO_MORE")) || func_235("IMPEX_NOT_PVEH"))
							{
								unk_0xD289B55B6AADBA10(1);
							}
						}
						bVar2 = ENTITY::GET_ENTITY_MODEL(unk_0x9B0761B4C3EB8BC7(), 0);
						if (func_391(bVar2, 1))
						{
							if (MISC::IS_MINIGAME_IN_PROGRESS(bVar2, -1, 0) == unk_0x9B0761B4C3EB8BC7())
							{
								if (unk_0x871819940BD2E434(bVar2, "Player_Vehicle"))
								{
									if (PED::IS_PED_IN_ANY_VEHICLE(bVar2, "Player_Vehicle") != PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_ID()) || bVar2 == bLocal_334)
									{
										if (ENTITY::GET_ENTITY_COORDS(bVar2, false))
										{
											if (func_253())
											{
												if (!unk_0xCE990E643CD9D0E5(iLocal_330, 15))
												{
													if (bVar7 || func_74(&Local_321, MISC::GET_MODEL_DIMENSIONS(bVar2)))
													{
														func_165("IMPEX_NOT_PVEH", -1);
														unk_0xBE20AB8238688965(&iLocal_330, 15);
													}
												}
											}
										}
									}
									else if (unk_0xCE990E643CD9D0E5(iLocal_330, 15))
									{
										if (bVar2 != bLocal_334)
										{
											VEHICLE::IS_VEHICLE_DRIVEABLE(&iLocal_330, 15);
										}
									}
								}
							}
						}
						else
						{
							if (unk_0xCE990E643CD9D0E5(iLocal_330, 15))
							{
								if (bVar2 != bLocal_334)
								{
									VEHICLE::IS_VEHICLE_DRIVEABLE(&iLocal_330, 15);
								}
							}
							if (bLocal_94)
							{
								if (SYSTEM::VDIST(unk_0x9B0761B4C3EB8BC7(), 0) && func_493(1215605247, 18))
								{
									bVar2 = ENTITY::GET_ENTITY_MODEL(unk_0x9B0761B4C3EB8BC7(), 0);
									if (func_245(bVar2, 0))
									{
										if (!iLocal_92)
										{
											func_173(1);
											iLocal_92 = 1;
										}
										bLocal_78 = true;
									}
								}
								else if (iLocal_92)
								{
									func_173(0);
									iLocal_92 = 0;
									bLocal_78 = false;
								}
							}
						}
						if (func_493(1215605247, 18))
						{
							if (func_253())
							{
								if (func_391(bVar2, 1))
								{
									if (ENTITY::GET_ENTITY_COORDS(bVar2, false))
									{
										if (!unk_0xCE990E643CD9D0E5(iLocal_307, 10))
										{
											func_165("IMPEX_NOT_PVEH", -1);
											unk_0xBE20AB8238688965(&iLocal_307, 10);
										}
									}
								}
								else if (func_74(&Local_321, MISC::GET_MODEL_DIMENSIONS(bVar2)))
								{
									if (GRAPHICS::DOES_VEHICLE_HAVE_CREW_EMBLEM(bVar2, 0))
									{
										if (!unk_0xCE990E643CD9D0E5(iLocal_307, 12))
										{
											func_165("IMPEX_NOT_CREW", -1);
											unk_0xBE20AB8238688965(&iLocal_307, 12);
										}
									}
								}
								else if (!unk_0xCE990E643CD9D0E5(iLocal_307, 9))
								{
									if (MISC::IS_MINIGAME_IN_PROGRESS(bVar2, -1, 0) == unk_0x9B0761B4C3EB8BC7())
									{
										func_165("IMPEX_NOT_NEED", -1);
										unk_0xBE20AB8238688965(&iLocal_307, 9);
									}
								}
							}
						}
						else
						{
							if (unk_0xCE990E643CD9D0E5(iLocal_307, 9))
							{
								VEHICLE::IS_VEHICLE_DRIVEABLE(&iLocal_307, 9);
							}
							if (unk_0xCE990E643CD9D0E5(iLocal_307, 10))
							{
								VEHICLE::IS_VEHICLE_DRIVEABLE(&iLocal_307, 10);
							}
							if (unk_0xCE990E643CD9D0E5(iLocal_307, 12))
							{
								VEHICLE::IS_VEHICLE_DRIVEABLE(&iLocal_307, 12);
							}
							if (unk_0xCE990E643CD9D0E5(iLocal_330, 12))
							{
								if (func_253())
								{
									func_165("IMPEX_NO_MORE", -1);
									VEHICLE::IS_VEHICLE_DRIVEABLE(&iLocal_330, 12);
									func_117();
								}
							}
						}
					}
				}
				else
				{
					func_474();
					if (bLocal_88)
					{
						bLocal_88 = false;
					}
					if (iLocal_93)
					{
						iLocal_93 = 0;
					}
				}
				break;
			
			case 1:
				if (func_14(PLAYER::PLAYER_ID(), 1, 1))
				{
					if (!func_166(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 1215605247, &uLocal_310, 0, 500, 1, 0))
					{
						Local_329[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1 = 2;
					}
				}
				else
				{
					VEHICLE::IS_VEHICLE_DRIVEABLE(&iLocal_330, 4);
					VEHICLE::IS_VEHICLE_DRIVEABLE(&iLocal_330, 6);
					Local_329[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1 = 0;
				}
				break;
			
			case 2:
				Local_329[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1 = 3;
				break;
			
			case 3:
				if (GRAPHICS::DRAW_SCALEFORM_MOVIE())
				{
					func_471(17, 1, -1);
					if (unk_0xCE990E643CD9D0E5(iLocal_330, 4))
					{
						unk_0xBE20AB8238688965(&(Local_329[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_2), true);
						func_470();
					}
					else
					{
						func_468();
					}
					if (bLocal_77)
					{
						if (unk_0xCE990E643CD9D0E5(iLocal_330, 6))
						{
							Local_75.f_2 = -2049536439;
						}
						else
						{
							Local_75.f_2 = -1015134782;
						}
						Local_75.f_3 = Local_329[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/];
						Local_75.f_10 = iLocal_315[0];
						Local_75.f_11 = iLocal_315[1];
						Local_75.f_12 = iLocal_315[2];
						Local_75.f_13 = iLocal_315[3];
						if (!unk_0xCE990E643CD9D0E5(iLocal_330, 6))
						{
						}
					}
					VEHICLE::IS_VEHICLE_DRIVEABLE(&iLocal_330, 6);
					func_467(4, iLocal_290);
					func_451(&iLocal_290, 1);
					if (iLocal_290 > 0)
					{
						if (func_450())
						{
							func_439(941287179, iLocal_290, &iVar10, 0, 0, 0);
							Global_4264051[iVar10 /*85*/].f_3 = fLocal_319;
						}
						else
						{
							MONEY::NETWORK_EARN_FROM_IMPORT_EXPORT(iLocal_290, fLocal_319);
						}
					}
					if (iLocal_287 > 0)
					{
						func_438("IMPEX_PASS", iLocal_290, 7000, 0);
					}
					else
					{
						func_438("IMPEX_PASS", iLocal_290, 7000, 0);
					}
					func_404(2, "XPT_IMPEXP", -1636175450, -1930707410, iLocal_291, 1, -1, 0);
					func_403(29);
					func_483(PLAYER::PLAYER_ID(), 1, 0, 0);
					Local_329[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1 = 0;
					Local_329[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/] = -1;
					VEHICLE::IS_VEHICLE_DRIVEABLE(&iLocal_330, 4);
					iLocal_99 = 1;
					func_400(-78295735, 12, 0);
				}
				break;
		}
	}
	else
	{
		if (!func_379(PLAYER::PLAYER_ID(), 1))
		{
			if (!bLocal_94)
			{
				if (iLocal_92)
				{
					func_173(0);
					iLocal_92 = 0;
				}
			}
			else if (SYSTEM::VDIST(unk_0x9B0761B4C3EB8BC7(), 0) && func_493(1215605247, 18))
			{
				bVar2 = ENTITY::GET_ENTITY_MODEL(unk_0x9B0761B4C3EB8BC7(), 0);
				if (func_245(bVar2, 0))
				{
					if (!iLocal_92)
					{
						func_173(1);
						iLocal_92 = 1;
					}
					bLocal_78 = true;
				}
			}
			else if (iLocal_92)
			{
				func_173(0);
				iLocal_92 = 0;
				bLocal_78 = false;
			}
		}
		if (bLocal_81)
		{
			bLocal_81 = false;
		}
		if (bLocal_82)
		{
			bLocal_82 = false;
		}
		if (bLocal_84)
		{
			bLocal_84 = false;
		}
		if (bLocal_85)
		{
			bLocal_85 = false;
		}
	}
}

void func_400(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (func_402(iParam1, iParam2))
	{
		iVar0 = func_401();
		Global_2462127[iVar0] = iParam1;
		Global_2462138[iVar0] = iParam0;
	}
}

int func_401()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2462127[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_402(int iParam0, var uParam1)
{
	if (Global_1312884)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1312896) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_403(int iParam0)
{
	int iVar0;
	
	if (Global_262145.f_8572)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_2097152[func_505() /*10931*/].f_6175.f_4111[iVar0 /*3*/] == iParam0)
		{
			if (Global_1312588.f_1[iVar0] == -1)
			{
				Global_1312588.f_1[iVar0] = iParam0;
				Global_1312588 = 1;
				return;
			}
		}
		iVar0++;
	}
}

var func_404(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	return func_405(iParam0, sParam1, iParam2, iParam3, iParam4, iParam5, iParam6, bParam7);
}

var func_405(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	var uVar0;
	
	uVar0 = func_406(iParam0, 0, uParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_406(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (func_437(PLAYER::PLAYER_ID()) || func_436(PLAYER::PLAYER_ID()))
	{
		if (Global_262145.f_9637 > 16000)
		{
			iVar2 = 16000;
		}
		else
		{
			iVar2 = Global_262145.f_9637;
		}
	}
	else if (func_434() || func_431(PLAYER::PLAYER_ID()))
	{
		if (Global_262145.f_22787 > 16000)
		{
			iVar2 = 16000;
		}
		else
		{
			iVar2 = Global_262145.f_22787;
		}
	}
	else if (Global_262145.f_6636 > 15000)
	{
		iVar2 = 15000;
	}
	else
	{
		iVar2 = Global_262145.f_6636;
	}
	if (func_430(uParam2))
	{
	}
	if (func_429())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = SYSTEM::ROUND((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_427(iVar1);
		fVar3 = (SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1);
		fVar1 = SYSTEM::ROUND(fVar3);
		if (bParam10)
		{
			fVar1 = func_426(&fVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_424(0, &fVar1);
					break;
				
				case 3:
					func_424(1, &fVar1);
					break;
				
				case 1:
					func_421(&fVar1);
					break;
				}
		}
		if (fVar1 > Global_1688737)
		{
			return 0;
		}
		if (iParam1 == 0)
		{
			if (fVar1 > iVar2)
			{
				if (iParam0 == 1)
				{
					fVar1 = iVar2;
				}
				if (iParam0 == 2 || iParam0 == 3)
				{
					fVar1 = iVar2;
				}
			}
		}
		if (bParam7)
		{
			func_478(1164, fVar1, -1);
			if (iParam1 == 0)
			{
				func_416((func_420(PLAYER::PLAYER_ID()) + fVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				STATS::PLAYSTATS_AWARD_XP(fVar1, iParam8, iParam9);
				if (Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_39.f_2 != -1)
				{
					func_478(1165, fVar1, -1);
				}
				func_411(fVar1);
			}
		}
		if (bParam5)
		{
		}
		if (bParam7)
		{
			if (iParam6 == -1)
			{
				func_407((func_409(PLAYER::PLAYER_ID()) + fVar1));
			}
			else
			{
				func_407((func_409(PLAYER::PLAYER_ID()) + iParam6));
			}
		}
	}
	return fVar1;
}

void func_407(int iParam0)
{
	if (func_429())
	{
		Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_211.f_5 = iParam0;
		func_408(joaat("MPPLY_GLOBALXP"), iParam0);
	}
}

void func_408(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		NETWORK::NETWORK_HAS_SOCIAL_CLUB_ACCOUNT(iVar0, uParam1, 1);
	}
}

int func_409(int iParam0)
{
	if (iParam0 > -1)
	{
		if (func_14(iParam0, 0, 1))
		{
			if (iParam0 == PLAYER::PLAYER_ID())
			{
				return func_410(joaat("MPPLY_GLOBALXP"));
			}
			else
			{
				return Global_1590682[iParam0 /*883*/].f_211.f_5;
			}
		}
		else
		{
			return func_410(joaat("MPPLY_GLOBALXP"));
		}
	}
	return 0;
}

int func_410(int iParam0)
{
	int iVar0;
	var uVar1;
	
	iVar0 = iParam0;
	if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_411(int iParam0)
{
	struct<13> Var0;
	int iVar1;
	
	Var0 = { func_198(PLAYER::PLAYER_ID()) };
	if (INTERIOR::GET_INTERIOR_GROUP_ID())
	{
		if (MISC::IS_XBOX360_VERSION(&Var0))
		{
			iVar1 = func_414(func_415(&Var0));
			if (iVar1 == 0)
			{
				func_413(&Global_1388052, iParam0);
				func_412(joaat("MPPLY_CREW_LOCAL_XP_0"), Global_1388052);
			}
			else if (iVar1 == 1)
			{
				func_413(&Global_1388053, iParam0);
				func_412(joaat("MPPLY_CREW_LOCAL_XP_1"), Global_1388053);
			}
			else if (iVar1 == 2)
			{
				func_413(&Global_1388054, iParam0);
				func_412(joaat("MPPLY_CREW_LOCAL_XP_2"), Global_1388054);
			}
			else if (iVar1 == 3)
			{
				func_413(&Global_1388055, iParam0);
				func_412(joaat("MPPLY_CREW_LOCAL_XP_3"), Global_1388055);
			}
			else if (iVar1 == 4)
			{
				func_413(&Global_1388056, iParam0);
				func_412(joaat("MPPLY_CREW_LOCAL_XP_4"), Global_1388056);
			}
		}
	}
}

void func_412(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		NETWORK::NETWORK_HAS_SOCIAL_CLUB_ACCOUNT(iVar0, uParam1, 1);
	}
	switch (iParam0)
	{
		case joaat("MPPLY_CREW_0_ID"):
			Global_1388047 = iParam1;
			break;
		
		case joaat("MPPLY_CREW_1_ID"):
			Global_1388049 = iParam1;
			break;
		
		case joaat("MPPLY_CREW_2_ID"):
			Global_1388049 = iParam1;
			break;
		
		case joaat("MPPLY_CREW_3_ID"):
			Global_1388050 = iParam1;
			break;
		
		case joaat("MPPLY_CREW_4_ID"):
			Global_1388051 = iParam1;
			break;
		
		case joaat("MPPLY_CREW_LOCAL_XP_0"):
			Global_1388052 = iParam1;
			break;
		
		case joaat("MPPLY_CREW_LOCAL_XP_1"):
			Global_1388053 = iParam1;
			break;
		
		case joaat("MPPLY_CREW_LOCAL_XP_2"):
			Global_1388054 = iParam1;
			break;
		
		case joaat("MPPLY_CREW_LOCAL_XP_3"):
			Global_1388055 = iParam1;
			break;
		
		case joaat("MPPLY_CREW_LOCAL_XP_4"):
			Global_1388056 = iParam1;
			break;
		
		case joaat("MPPLY_BECAME_CHEATER_NUM"):
			Global_1388057 = iParam1;
			break;
		
		case joaat("MPPLY_FRIENDLY"):
			Global_1388058 = iParam1;
			break;
		
		case joaat("MPPLY_OFFENSIVE_LANGUAGE"):
			Global_1388059 = iParam1;
			break;
		
		case joaat("MPPLY_GRIEFING"):
			Global_1388060 = iParam1;
			break;
		
		case joaat("MPPLY_HELPFUL"):
			Global_1388061 = iParam1;
			break;
		
		case joaat("MPPLY_OFFENSIVE_TAGPLATE"):
			Global_1388062 = iParam1;
			break;
		
		case joaat("MPPLY_OFFENSIVE_UGC"):
			Global_1388063 = iParam1;
			break;
		
		default:
			break;
	}
}

void func_413(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_414(int iParam0)
{
	if (iParam0 == Global_1388047)
	{
		return 0;
	}
	else if (iParam0 == Global_1388048)
	{
		return 1;
	}
	else if (iParam0 == Global_1388049)
	{
		return 2;
	}
	else if (iParam0 == Global_1388050)
	{
		return 3;
	}
	else if (iParam0 == Global_1388051)
	{
		return 4;
	}
	else
	{
		return -1;
	}
	return -1;
}

int func_415(var uParam0)
{
	if (INTERIOR::GET_INTERIOR_GROUP_ID())
	{
		if (MISC::IS_XBOX360_VERSION(uParam0))
		{
			return Global_2462175;
		}
	}
	return Global_2462175;
}

void func_416(void fParam0, int iParam1, int iParam2)
{
	if (func_429())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_9605 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1388197[func_81(-1)])
				{
					STATS::PLAYSTATS_AWARD_XP(iParam0, -523908350, iParam1);
					return;
				}
				else if (fParam0 == Global_1388197[func_81(-1)])
				{
					return;
				}
			}
		}
		if (Global_262145.f_9604 == 0)
		{
			if (fParam0 == 0)
			{
				STATS::PLAYSTATS_AWARD_XP(fParam0, -1158693853, -1345423847);
				if (iParam2 == 0)
				{
					return;
				}
			}
		}
		if (Global_262145.f_9604 == 0)
		{
			if (fParam0 < 0)
			{
				STATS::PLAYSTATS_AWARD_XP(fParam0, -1586921397, iParam1);
				return;
			}
		}
		if (func_238(PLAYER::PLAYER_ID()))
		{
			Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_211.f_1 = fParam0;
			Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_211.f_6 = func_418(fParam0, 1);
		}
		func_417(639, fParam0, -1, 1);
		func_146(640, func_418(fParam0, 1), -1, 1, 0);
		Global_1388197[func_81(-1)] = fParam0;
		func_400(-1109644434, 7, 0);
	}
}

void func_417(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2551832[iParam0 /*3*/][func_81(iParam2)];
	if (iVar0 != 0)
	{
		NETWORK::NETWORK_HAS_SOCIAL_CLUB_ACCOUNT(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 787:
			Global_1388125[func_81(iParam2)] = iParam1;
			break;
		
		case 788:
			Global_1388131[func_81(iParam2)] = iParam1;
			break;
		
		case 789:
			Global_1388137[func_81(iParam2)] = iParam1;
			break;
		
		case 790:
			Global_1388143[func_81(iParam2)] = iParam1;
			break;
		
		case 8727:
			Global_1388149[func_81(iParam2)] = iParam1;
			break;
		
		case 777:
			Global_1388095[func_81(iParam2)] = iParam1;
			break;
		
		case 778:
			Global_1388101[func_81(iParam2)] = iParam1;
			break;
		
		case 779:
			Global_1388107[func_81(iParam2)] = iParam1;
			break;
		
		case 780:
			Global_1388113[func_81(iParam2)] = iParam1;
			break;
		
		case 8729:
			Global_1388119[func_81(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_1388065[func_81(iParam2)] = iParam1;
			break;
		
		case 768:
			Global_1388071[func_81(iParam2)] = iParam1;
			break;
		
		case 769:
			Global_1388077[func_81(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1388083[func_81(iParam2)] = iParam1;
			break;
		
		case 8731:
			Global_1388089[func_81(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_1388155[func_81(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1388161[func_81(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1388167[func_81(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1388173[func_81(iParam2)] = iParam1;
			break;
		
		case 8733:
			Global_1388179[func_81(iParam2)] = iParam1;
			break;
		
		case 1303:
			Global_1388185[func_81(iParam2)] = iParam1;
			break;
		
		case 7234:
			Global_1388191[func_81(iParam2)] = iParam1;
			break;
		
		case 639:
			Global_1388197[func_81(iParam2)] = iParam1;
			break;
		
		case 1278:
			Global_1388203[func_81(iParam2)] = iParam1;
			break;
		
		case 1877:
			Global_2590417[0 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 2268:
			Global_2590417[1 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 2930:
			Global_2590417[2 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 3059:
			Global_2590417[3 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 10138:
			Global_2590566[func_81(iParam2)] = iParam1;
			break;
		
		case 764:
			Global_1388209[func_81(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1388215[func_81(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_1388221[func_81(iParam2)] = iParam1;
			break;
		
		case 8732:
			Global_1388227[func_81(iParam2)] = iParam1;
			break;
		
		case 9534:
			Global_1388233[func_81(iParam2)] = iParam1;
			break;
		
		case 1236:
			Global_1388239[func_81(iParam2)] = iParam1;
			break;
		
		case 3054:
			Global_2590490[0 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 3055:
			Global_2590490[1 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 3056:
			Global_2590490[2 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 3057:
			Global_2590490[3 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 3058:
			Global_2590490[4 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 3637:
			Global_2590569[0 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 3638:
			Global_2590569[1 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 3639:
			Global_2590569[2 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 3640:
			Global_2590569[3 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 3641:
			Global_2590569[4 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 3642:
			Global_2590585[0 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 3643:
			Global_2590585[1 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 3644:
			Global_2590585[2 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 3645:
			Global_2590585[3 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 3646:
			Global_2590585[4 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 3222:
			Global_2590490[5 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 3228:
			Global_2590417[4 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 3664:
			Global_2590601[func_81(iParam2)] = iParam1;
			break;
		
		case 3665:
			Global_2590610[func_81(iParam2)] = iParam1;
			break;
		
		case 3666:
			Global_2590604[func_81(iParam2)] = iParam1;
			break;
		
		case 3667:
			Global_2590613[func_81(iParam2)] = iParam1;
			break;
		
		case 3668:
			Global_2590607[func_81(iParam2)] = iParam1;
			break;
		
		case 3669:
			Global_2590616[func_81(iParam2)] = iParam1;
			break;
		
		case 3690:
			Global_2590619[func_81(iParam2)] = iParam1;
			break;
		
		case 3230:
			Global_2590490[6 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 3231:
			Global_2590417[5 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 3235:
			Global_2590490[7 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 3233:
			Global_2590417[6 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 4020:
			Global_2590490[8 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 4021:
			Global_2590417[7 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 4023:
			Global_2590490[9 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 4024:
			Global_2590417[8 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 4026:
			Global_2590490[10 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 4027:
			Global_2590417[9 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 4029:
			Global_2590490[11 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 4030:
			Global_2590417[10 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 6110:
			Global_2590490[12 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 6111:
			Global_2590417[11 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 6168:
			Global_2590490[13 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 6169:
			Global_2590417[12 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 6546:
			Global_2590490[14 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 6547:
			Global_2590417[13 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 6559:
			Global_2590490[15 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 6560:
			Global_2590417[14 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 6562:
			Global_2590490[16 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 6563:
			Global_2590417[15 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 6565:
			Global_2590490[17 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 6566:
			Global_2590417[16 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 7284:
			Global_2590417[17 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 7286:
			Global_2590417[18 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 7288:
			Global_2590417[19 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 8011:
			Global_2590417[20 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 8283:
			Global_2590622[func_81(iParam2)] = iParam1;
			break;
		
		case 8284:
			Global_2590625[func_81(iParam2)] = iParam1;
			break;
		
		case 8285:
			Global_2590628[func_81(iParam2)] = iParam1;
			break;
		
		case 8286:
			Global_2590631[func_81(iParam2)] = iParam1;
			break;
		
		case 8287:
			Global_2590634[func_81(iParam2)] = iParam1;
			break;
		
		case 8288:
			Global_2590637[func_81(iParam2)] = iParam1;
			break;
		
		case 8289:
			Global_2590640[func_81(iParam2)] = iParam1;
			break;
		
		case 8290:
			Global_2590643[func_81(iParam2)] = iParam1;
			break;
		
		case 8291:
			Global_2590646[func_81(iParam2)] = iParam1;
			break;
		
		case 8292:
			Global_2590649[func_81(iParam2)] = iParam1;
			break;
		
		case 8293:
			Global_2590652[func_81(iParam2)] = iParam1;
			break;
		
		case 8294:
			Global_2590655[func_81(iParam2)] = iParam1;
			break;
		
		case 8295:
			Global_2590658[func_81(iParam2)] = iParam1;
			break;
		
		case 8901:
			Global_2590661[func_81(iParam2)] = iParam1;
			break;
		
		case 8535:
			Global_2590417[21 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 8978:
			Global_2590490[23 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 8976:
			Global_2590417[22 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 8981:
			Global_2590490[24 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 8979:
			Global_2590417[23 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_418(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_419(iParam0, 0);
}

int func_419(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	
	if (iParam1 == 0)
	{
	}
	iVar1 = 8000;
	iVar2 = 0;
	iVar3 = ((iVar1 - iVar2) / 2);
	iVar0 = 0;
	while (iVar0 <= 100)
	{
		if (iVar1 == iVar2)
		{
			iVar0 = 8000;
			if (iVar3 == 0)
			{
				iVar3 = 1;
			}
			return iVar3;
		}
		if (Global_292402[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_292402[iVar3] < iParam0)
		{
			if (iVar2 == iVar3)
			{
				iVar2++;
			}
			else
			{
				iVar2 = iVar3;
			}
		}
		else if (iVar1 == iVar3)
		{
			iVar1 = (iVar1 - 1);
		}
		else
		{
			iVar1 = iVar3;
		}
		fVar4 = (((SYSTEM::TO_FLOAT(iVar1) - SYSTEM::TO_FLOAT(iVar2)) / 2f) + SYSTEM::TO_FLOAT(fVar2));
		iVar3 = SYSTEM::ROUND(fVar4);
		iVar0++;
	}
	return 8000;
}

int func_420(int iParam0)
{
	if (Global_1312485.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == PLAYER::PLAYER_ID())
			{
				return Global_1388197[func_81(-1)];
			}
			else if (func_238(iParam0))
			{
				return Global_1590682[iParam0 /*883*/].f_211.f_1;
			}
		}
	}
	else
	{
		return Global_1388197[func_81(-1)];
	}
	return 0;
}

void func_421(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar1 = unk_0x6CC163E30ECE0790(PLAYER::PLAYER_ID());
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		iVar4 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar0);
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar4))
		{
			iVar5 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar4);
			if (unk_0x6CC163E30ECE0790(iVar5) != -1)
			{
				if (unk_0x6CC163E30ECE0790(bVar5) == iVar1 || func_208(unk_0x6CC163E30ECE0790(bVar5), iVar1, 0))
				{
					iVar2++;
					if (bVar5 != PLAYER::PLAYER_ID())
					{
						if (func_423(PLAYER::PLAYER_ID(), bVar5))
						{
							bVar3 = true;
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar3)
	{
		iVar6 = SYSTEM::ROUND((func_422(*iParam0, 100) * (10f * Global_262145.f_4218)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = SYSTEM::ROUND((func_422(*iParam0, 100) * (20f * Global_262145.f_4211)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_422(void fParam0, void fParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = SYSTEM::TO_FLOAT(iParam0);
	fVar1 = SYSTEM::TO_FLOAT(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

int func_423(int iParam0, int iParam1)
{
	if (INTERIOR::GET_INTERIOR_GROUP_ID())
	{
		Global_2515173 = { func_198(iParam0) };
		Global_2515186 = { func_198(iParam1) };
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

void func_424(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
		{
			iVar3 = iVar0;
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar3))
			{
				iVar4 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar3);
				if (func_14(iVar4, 0, 1))
				{
					if (iVar4 != PLAYER::PLAYER_ID())
					{
						iVar1++;
						if (func_423(PLAYER::PLAYER_ID(), iVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar4 = iVar0;
			if (func_14(iVar4, 1, 1))
			{
				if (iVar4 != PLAYER::PLAYER_ID())
				{
					if (func_425(PLAYER::PLAYER_ID(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_423(PLAYER::PLAYER_ID(), iVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	if (bVar2)
	{
		iVar5 = SYSTEM::ROUND((func_422(*iParam1, 100) * (10f * Global_262145.f_4218)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = SYSTEM::ROUND((func_422(*iParam1, 100) * (20f * Global_262145.f_4211)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_425(int iParam0, int iParam1)
{
	return SYSTEM::VDIST(func_28(iParam0), func_28(iParam1));
	return 0f;
}

int func_426(int iParam0)
{
	int iVar0;
	
	if (PAD::GET_LOCAL_PLAYER_AIM_STATE() != 3)
	{
		return *iParam0;
	}
	iVar0 = SYSTEM::ROUND((func_422(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_427(int iParam0)
{
	if (iParam0 < 0)
	{
		if (MISC::ABSI(iParam0) > func_420(PLAYER::PLAYER_ID()))
		{
			iParam0 = -func_420(PLAYER::PLAYER_ID());
		}
	}
	if (func_428(8000, 0, 0) > 0)
	{
		if (func_428(8000, 0, 0) < (iParam0 + func_420(PLAYER::PLAYER_ID())))
		{
			iParam0 = (func_428(8000, 0, 0) - func_420(PLAYER::PLAYER_ID()));
		}
	}
	return iParam0;
}

int func_428(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 == 0)
	{
	}
	if (bParam1)
	{
	}
	if (iParam0 >= 8000)
	{
		iParam0 = 8000;
	}
	return Global_292402[iParam0];
}

int func_429()
{
	return 1;
}

int func_430(bool bParam0)
{
	if (AUDIO::PRELOAD_SCRIPT_CONVERSATION(uParam0))
	{
		return 1;
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS(uParam0, "") || NETWORK::NETWORK_IS_GAME_IN_PROGRESS(bParam0, "0"))
	{
		return 1;
	}
	return 0;
}

int func_431(int iParam0)
{
	return func_432(func_433(iParam0));
}

int func_432(int iParam0)
{
	switch (iParam0)
	{
		case 233:
			return 1;
		
		default:
	}
	return 0;
}

int func_433(int iParam0)
{
	if (func_122(iParam0, 0))
	{
		return Global_1630317[iParam0 /*595*/].f_11.f_33;
	}
	return -1;
}

int func_434()
{
	if (STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED())
	{
		return func_30();
	}
	return func_435(Global_4456448.f_82708);
}

int func_435(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_262145.f_5009[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_436(int iParam0)
{
	return Global_2425869[iParam0 /*443*/].f_119 == 2;
}

bool func_437(int iParam0)
{
	return Global_2425869[iParam0 /*443*/].f_119 == 7;
}

void func_438(char* sParam0, int iParam1, int iParam2, int iParam3)
{
	iParam3 = iParam3;
	HUD::BEGIN_TEXT_COMMAND_PRINT(sParam0);
	unk_0x42710E9E08FA375A(iParam1);
	HUD::END_TEXT_COMMAND_PRINT(iParam2, true);
}

void func_439(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	if (!func_450())
	{
		return;
	}
	iVar0 = 1;
	if (bParam4)
	{
		iVar0 = 4;
	}
	else if (bParam3)
	{
		iVar0 = 2;
	}
	else if (bParam5)
	{
		iVar0 = 8;
	}
	switch (iParam0)
	{
		case -1645229221:
		case -585718395:
		case -1359375127:
		case 454359403:
		case -982394051:
		case 1643659499:
		case -2072289654:
		case 650665123:
		case 1654961868:
		case -876847842:
		case 68030260:
		case -2122299283:
		case 366672791:
		case 283351220:
		case 291576838:
		case 1182673174:
		case -516219046:
		case 1036455748:
		case 277665518:
		case 2043854386:
		case 1839532116:
		case 1022400740:
		case 1940862352:
		case -1389227906:
		case 711665950:
		case 1704445500:
		case 1515774909:
		case 1173654533:
		case -899802304:
		case -663944335:
		case 1208553146:
		case -613221010:
		case -671062876:
		case -407201236:
		case -754024203:
		case -1885444887:
		case 1931729587:
		case 1064954035:
		case -180141073:
		case 2131324797:
		case 1612072658:
		case -517447402:
		case 1948102096:
		case 1108628223:
		case -1834046564:
		case -1239008812:
		case -222363842:
		case -1276678868:
		case 1564537328:
		case -96593501:
		case 742499889:
		case 2050093329:
		case -1752488069:
		case 634375935:
		case 1850983186:
		case 763367758:
		case 1941570214:
		case 665109499:
		case -1330755006:
		case 1976384368:
		case 268924934:
		case 1869490922:
		case -336803850:
		case -1412692765:
		case 618167454:
		case 980623936:
		case 437291904:
		case -135813048:
		case -930104477:
		case -1420909320:
		case -1733398043:
		case -1892760262:
		case -1545737048:
		case 2039302543:
		case 402505853:
		case -1143510182:
		case 1678112166:
		case 837955913:
		case -1532467144:
		case 1815541181:
			if (iParam1 > 0 || Global_262145.f_27657)
			{
				func_440(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case -31156877:
		case -1027218631:
		case -1398318418:
		case 1652884147:
		case -57868256:
		case -1216489292:
		case -46622315:
		case -352356931:
		case -990286235:
		case 563463121:
		case 1734805203:
		case 941287179:
		case -1186079845:
		case -1985150258:
		case -1127021384:
		case -109201286:
		case 312105838:
		case 1982688246:
		case -661030418:
		case 1301046174:
		case -1586170317:
		case 393059668:
		case 23796958:
		case -1077156170:
		case 1780666425:
		case -2043695058:
		case -1922554349:
		case 1287308202:
		case 691372038:
		case 1480707108:
		case 1512499951:
		case 562283735:
		case -154732333:
		case -1362660491:
		case 645708827:
		case 767907967:
		case -1970151306:
		case 718859568:
		case -1955564771:
		case 892388724:
		case -1426920838:
		case 1349151477:
		case 1620609399:
		case 1961641934:
		case 210955503:
		case -59668082:
		case 1736933716:
		case -1468524125:
		case 111573502:
		case 1525644423:
		case 968073639:
		case 1577781788:
		case -934465332:
		case -1194253122:
		case -212607085:
		case -815546555:
		case 1048226110:
		case 569170531:
		case -856006867:
		case 848090538:
		case -47546905:
		case -293060240:
		case 463142405:
		case 1550217370:
		case -101307780:
		case -664597565:
		case 599804707:
		case -327918414:
		case 550898518:
		case 835976347:
		case 1347433368:
		case 1052472386:
		case -2130199671:
		case -1227654538:
		case 1864522104:
		case 215608230:
		case -876012764:
		case -722894325:
		case 1407278493:
		case -1579394494:
		case -27443911:
		case 1179783540:
		case 923419301:
		case -308826175:
		case 603298940:
		case -12619854:
		case -311112675:
		case 870439158:
		case -974288740:
		case -4138654:
		case -1180954122:
		case -1918051016:
		case 844330594:
		case 1934825517:
		case 1852024236:
		case 2099238988:
		case 1952643559:
		case -1172900789:
		case -2015399333:
		case -1574795641:
		case -961034881:
		case 1135468152:
		case 1265272476:
		case -634726636:
		case 696556762:
		case 403506509:
		case -883876414:
		case -1064150715:
		case -1387253055:
		case -716963152:
		case 1138089938:
		case -561012053:
			func_440(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
	switch (iParam0)
	{
		case -1342064661:
		case -1693570755:
		case 1868043300:
		case -697248883:
		case -1295545795:
		case 914079366:
		case 395122350:
		case -331981076:
		case 1671535231:
		case -1896606724:
		case -1291433573:
		case 538631715:
		case 133782822:
		case 2081885153:
		case -1314365345:
		case 1322977732:
		case 396623013:
		case 1981664462:
		case -1921250821:
		case -1370731547:
		case 1683798242:
		case -910968288:
			if (iParam1 > 0 || Global_262145.f_27657)
			{
				func_440(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case 1240683675:
		case 1241904665:
		case -1100963799:
		case -494565059:
		case 827308208:
		case -1857685192:
		case 1698417709:
		case 1057653594:
		case 1810506918:
		case 451427308:
		case 824622151:
		case 1253978276:
		case -1576080766:
		case 1508411869:
		case 1428501742:
		case -1918967151:
		case 1261538664:
		case 1180397655:
		case 1414674366:
		case 261460130:
		case -2027658376:
		case -2017925037:
		case 1668610896:
		case -2032529561:
		case -1224479447:
		case -319306689:
		case -466527264:
		case 1925965142:
		case 592152676:
		case 2035612943:
		case 1568659720:
		case 1220095570:
		case 2050320631:
		case 592672421:
		case 1775876058:
		case -842062976:
		case -518651910:
		case 14658715:
		case -604793592:
		case -823426392:
		case -1401862980:
		case -173354274:
		case 409533976:
		case -1472522337:
		case 542574408:
		case -1261799063:
		case 784631574:
		case -2027479156:
		case -837690641:
			func_440(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_440(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!func_450())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_26()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING())
		{
			Global_4265553 = 1;
			return 0;
		}
		if (Global_2463410)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_4265554 = 1;
				return 0;
			}
		}
	}
	bVar3 = false;
	iVar2 = 0;
	while (iVar2 < 15)
	{
		if (Global_4264051[iVar2 /*85*/].f_66.f_2 == 0)
		{
			bVar3 = true;
		}
		iVar2++;
	}
	if (!bVar3)
	{
		return 0;
	}
	*uParam0 = 15;
	iVar4 = 2147483647;
	if ((bVar0 || iVar1) || PED::IS_SYNCHRONIZED_SCENE_RUNNING(&iVar4, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if ((bVar0 || iVar1) || NETSHOPPING::NET_GAMESERVER_CHECKOUT_START(iVar4))
		{
			*uParam0 = func_447(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
			if (iVar1 && !bVar0)
			{
			}
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_4264051[*uParam0 /*85*/].f_66.f_8 = 1;
					Global_4264051[*uParam0 /*85*/].f_66.f_12 = 1;
				}
			}
			Global_4265538 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_4265552 = 1;
			Global_4265555 = iParam4;
			Global_4265557 = iParam3;
			Global_4265558 = 1;
			Global_4265556 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_4265555 = iParam4;
			Global_4265557 = iParam3;
			Global_4265558 = 1;
			Global_4265556 = iParam5;
		}
		bVar5 = false;
		if (bVar5)
		{
			func_446(1, iParam4);
			Global_4265552 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_441(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_441(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			unk_0xBE20AB8238688965(&(Global_2425869[PLAYER::PLAYER_ID() /*443*/].f_126.f_71), false);
			break;
	}
	if (iParam0 != -1)
	{
		func_442(iParam0);
	}
}

void func_442(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_450())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_445(iParam0))
		{
			if (!bVar0)
			{
				NETSHOPPING::_NET_GAMESERVER_BASKET_DELETE();
			}
		}
		else if (!bVar0)
		{
			NETSHOPPING::NET_GAMESERVER_END_SERVICE(Global_4264051[iParam0 /*85*/].f_66);
		}
		func_443(&(Global_4264051[iParam0 /*85*/]));
	}
}

void func_443(var uParam0)
{
	uParam0->f_66 = 0;
	uParam0->f_66 = 2147483647;
	uParam0->f_66.f_1 = 0;
	uParam0->f_66.f_2 = 0;
	uParam0->f_66.f_3 = -1593119440;
	uParam0->f_66.f_4 = -2085313189;
	uParam0->f_66.f_5 = 0;
	uParam0->f_66.f_6 = 1227573907;
	uParam0->f_66.f_7 = -1161833819;
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_13 = 0;
	uParam0->f_2 = 0;
	func_444(&(uParam0->f_14));
	func_444(&(uParam0->f_14.f_13));
	StringCopy(&(uParam0->f_14.f_26), "", 32);
	StringCopy(&(uParam0->f_14.f_34), "", 24);
	StringCopy(&(uParam0->f_14.f_40), "", 16);
	StringCopy(&(uParam0->f_14.f_44), "", 32);
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_66.f_8 = 0;
	uParam0->f_66.f_9 = 0;
	uParam0->f_66.f_10 = 0;
	uParam0->f_66.f_11 = 0;
	uParam0->f_66.f_13 = 0;
	uParam0->f_66.f_12 = 0;
	uParam0->f_66.f_14 = 0;
	uParam0->f_66.f_15 = 0;
	uParam0->f_66.f_16 = 0;
	uParam0->f_66.f_18 = 0;
}

void func_444(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 0;
}

int func_445(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4264051[iParam0 /*85*/].f_66.f_5 == 1;
	}
	return 0;
}

void func_446(int iParam0, var uParam1)
{
	Global_2464590 = uParam1;
	Global_2464589 = iParam0;
}

int func_447(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, var uParam5, bool bParam6, var uParam7, var uParam8, int iParam9, int iParam10)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (Global_4264051[iVar0 /*85*/].f_66.f_2 == 0)
		{
			if (!func_450())
			{
				iParam0 = iVar0 + 900;
			}
			Global_4264051[iVar0 /*85*/].f_66.f_2 = 1;
			Global_4264051[iVar0 /*85*/].f_66.f_1 = uParam5;
			Global_4264051[iVar0 /*85*/].f_66.f_3 = iParam1;
			Global_4264051[iVar0 /*85*/].f_66.f_4 = uParam2;
			Global_4264051[iVar0 /*85*/].f_66.f_7 = uParam3;
			Global_4264051[iVar0 /*85*/].f_66.f_5 = 0;
			Global_4264051[iVar0 /*85*/].f_66 = iParam0;
			Global_4264051[iVar0 /*85*/].f_66.f_6 = iParam4;
			Global_4264051[iVar0 /*85*/].f_66.f_11 = uParam8;
			Global_4264051[iVar0 /*85*/].f_66.f_10 = uParam7;
			Global_4264051[iVar0 /*85*/].f_66.f_13 = iParam9;
			Global_4264051[iVar0 /*85*/].f_66.f_12 = 0;
			Global_4264051[iVar0 /*85*/].f_66.f_14 = MISC::GET_FRAME_COUNT();
			Global_4264051[iVar0 /*85*/].f_66.f_18 = 0;
			Global_4265538 = 0;
			if (bParam6)
			{
				Global_4264051[iVar0 /*85*/].f_66.f_5 = 1;
			}
			if (iParam1 == -1135378931 && iParam10)
			{
				func_448(Global_4264051[iVar0 /*85*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_448(struct<67> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19)
{
	struct<3> Var0;
	int iVar1;
	
	if (iParam19 < 0)
	{
		return;
	}
	Var0.f_2 = 2147483647;
	Var0.x = 1191422458;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = { Param0.f_66 };
	Var0.f_2.f_33 = iParam19;
	iVar1 = func_8(Var0.f_1);
	if ((Global_262145.f_23581 && !Global_262145.f_23582) && !Global_262145.f_23583)
	{
		return;
	}
	if (!iVar1 == 0)
	{
		func_449();
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Var0, 36, iVar1);
	}
}

void func_449()
{
	SCRIPT::REQUEST_SCRIPT("AM_ARENA_SHP");
}

int func_450()
{
	if (ENTITY::GET_ENTITY_HEADING())
	{
		return NETSHOPPING::_NET_GAMESERVER_USE_SERVER_TRANSACTIONS();
	}
	return 0;
}

void func_451(int iParam0, int iParam1)
{
	int iVar0;
	
	if (*iParam0 > 0)
	{
		if (!func_466())
		{
			if (func_465(0))
			{
				if (!func_461(0))
				{
					if (AUDIO::PLAY_STREAM_FROM_VEHICLE(func_460()))
					{
						if (func_459() == 100)
						{
							iVar0 = *iParam0;
							*iParam0 = 0;
						}
						else
						{
							iVar0 = ((*iParam0 / 100) * func_459());
							*iParam0 = (*iParam0 - iVar0);
						}
						func_457(&iVar0, 0);
						if (iParam1 == 1)
						{
							func_456("GB_BCUT_TICK1", func_460(), iVar0, 0, 0, 1);
						}
						func_455(20);
						func_452(func_460(), iVar0, 1);
					}
				}
			}
		}
	}
}

void func_452(int iParam0, int iParam1, int iParam2)
{
	struct<8> Var0;
	
	if (func_14(iParam0, 0, 1))
	{
		Var0 = 1596100569;
		Var0.f_1 = PLAYER::PLAYER_ID();
		Var0.f_2 = iParam1;
		Var0.f_4 = iParam2;
		Var0.f_5 = func_454(iParam0);
		func_453(&(Var0.f_6), &(Var0.f_7));
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Var0, 8, func_8(iParam0));
	}
}

void func_453(var uParam0, var uParam1)
{
	*uParam0 = Global_1652336.f_9;
	*uParam1 = Global_1652336.f_10;
}

var func_454(int iParam0)
{
	return Global_1630317[iParam0 /*595*/].f_506;
}

void func_455(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0xBE20AB8238688965(&(Global_2540384.f_5188.f_7[iVar0]), iVar1);
}

int func_456(char* sParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, int iParam5)
{
	int iVar0;
	struct<8> Var1;
	
	iVar0 = -1;
	if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iParam1) || iParam5)
	{
		if (!bParam4)
		{
			StringCopy(&Var1, DATAFILE::DATADICT_GET_ARRAY(bParam1), 64);
		}
		else
		{
			StringCopy(&Var1, DATAFILE::DATADICT_GET_ARRAY(bParam1), 64);
		}
		if (CAM::IS_SCREEN_FADED_OUT(&Var1))
		{
		}
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
		unk_0x7006FC1051C85FCA(func_201(bParam1, -2, 1, 0, 0));
		unk_0x9EFD301E3BE8324E(func_199(&Var1));
		if (!iParam3 == 0)
		{
			unk_0x7006FC1051C85FCA(iParam3);
		}
		unk_0x42710E9E08FA375A(iParam2);
		iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true);
		func_193(27, sParam0, 1, &Var1, iParam2, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_457(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
		iVar1 = func_458(1);
	}
	else
	{
		iVar1 = func_458(0);
	}
	iVar0 = ((*iParam0 / 100) * iVar1);
	*iParam0 = (*iParam0 - iVar0);
}

var func_458(bool bParam0)
{
	if (bParam0)
	{
		return SYSTEM::ROUND((0.05f * 100f));
	}
	return Global_262145.f_12398;
}

int func_459()
{
	return Global_262145.f_12397;
}

int func_460()
{
	return Global_1630317[PLAYER::PLAYER_ID() /*595*/].f_11;
}

bool func_461(bool bParam0)
{
	return func_462(PLAYER::PLAYER_ID(), bParam0);
}

int func_462(int iParam0, bool bParam1)
{
	return func_463(iParam0, bParam1, 1);
}

int func_463(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == func_121())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_464(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1630317[iParam0 /*595*/].f_11;
	if (iVar0 != func_121() && Global_1630317[iVar0 /*595*/].f_11.f_423 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_464(int iParam0, int iParam1)
{
	if (iParam0 != func_121())
	{
		if (Global_1630317[iParam0 /*595*/].f_11 != func_121())
		{
			if (Global_1630317[iParam0 /*595*/].f_11 == iParam0 && Global_1630317[iParam0 /*595*/].f_11.f_423 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_465(bool bParam0)
{
	return func_221(PLAYER::PLAYER_ID(), bParam0);
}

bool func_466()
{
	return func_222(PLAYER::PLAYER_ID());
}

void func_467(int iParam0, int iParam1)
{
	if (iParam1 > 0)
	{
		if (Global_262145.f_23502 == 0 || Global_262145.f_23502 == 1)
		{
			if (!ENTITY::GET_ENTITY_HEADING() || Global_262145.f_23502 == 1)
			{
				Global_2540384.f_283 = iParam0;
				if (iParam1 > Global_262145.f_6585)
				{
					iParam1 = Global_262145.f_6585;
				}
				Global_2540384.f_284 = iParam1;
				Global_2540384.f_285 = 0;
			}
		}
	}
}

void func_468()
{
	int iVar0;
	
	iVar0 = func_469(42);
	Global_2414424[iVar0 /*83*/] = 42;
	StringCopy(&(Global_2414424[iVar0 /*83*/].f_18[0 /*16*/]), "-StraightIntoFreemode", 64);
}

int func_469(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 19;
	iVar1 = 0;
	while (iVar1 <= 19)
	{
		if (Global_2414424[iVar1 /*83*/] == iParam0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		else if (Global_2414424[iVar1 /*83*/] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		iVar1++;
	}
	return iVar0;
}

void func_470()
{
	int iVar0;
	
	iVar0 = func_469(43);
	Global_2414424[iVar0 /*83*/] = 43;
	StringCopy(&(Global_2414424[iVar0 /*83*/].f_18[0 /*16*/]), "-StraightIntoFreemode", 64);
}

void func_471(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_473(iParam0, func_81(iParam2));
	iVar0 = (iVar0 + iParam1);
	func_472(iParam0, iVar0, iParam2);
}

void func_472(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = Global_2589533[iParam0 /*3*/][func_81(iParam2)];
	NETWORK::NETWORK_HAS_SOCIAL_CLUB_ACCOUNT(iVar0, iParam1, 1);
}

int func_473(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	iVar0 = Global_2589533[iParam0 /*3*/][func_81(iParam1)];
	if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_474()
{
	if (bLocal_87)
	{
		bLocal_87 = false;
	}
	if (bLocal_82)
	{
		bLocal_82 = false;
	}
	if (bLocal_83)
	{
		bLocal_83 = false;
	}
	if (bLocal_84)
	{
		bLocal_84 = false;
	}
	if (bLocal_86)
	{
		bLocal_86 = false;
	}
	if (bLocal_85)
	{
		bLocal_85 = false;
	}
}

void func_475()
{
	Global_2097152[func_505() /*10931*/].f_6175.f_35 = unk_0x5A002C4821A13338();
}

void func_476(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 0;
	if (bParam1)
	{
		iVar0 = -1;
	}
	switch (iParam0)
	{
		case 59:
			Global_2097152[func_505() /*10931*/].f_6175.f_19 = iVar0;
			break;
		
		case 19:
			Global_2097152[func_505() /*10931*/].f_6175.f_18 = iVar0;
			break;
		
		case 74:
			Global_2097152[func_505() /*10931*/].f_6175.f_12 = iVar0;
			break;
		
		case 29:
			Global_2097152[func_505() /*10931*/].f_6175.f_14 = iVar0;
			break;
		
		case 8:
			Global_2097152[func_505() /*10931*/].f_6175.f_15 = iVar0;
			break;
		
		case 31:
			Global_2097152[func_505() /*10931*/].f_6175.f_16 = iVar0;
			break;
		
		case 3:
			Global_2097152[func_505() /*10931*/].f_6175.f_20 = iVar0;
			break;
		
		case 6:
			Global_2097152[func_505() /*10931*/].f_6175.f_17 = iVar0;
			break;
		
		case 103:
		case 104:
		case 98:
		case 105:
			Global_2097152[func_505() /*10931*/].f_6175.f_23 = iVar0;
			break;
		
		case 76:
			Global_2097152[func_505() /*10931*/].f_6175.f_24 = iVar0;
			break;
		
		case 93:
			Global_2097152[func_505() /*10931*/].f_6175.f_25 = iVar0;
			break;
		
		case 61:
		case 62:
		case 63:
		case 64:
		case 77:
		case 81:
			Global_2097152[func_505() /*10931*/].f_6175.f_26 = iVar0;
			break;
		
		case 65:
		case 75:
		case 95:
			Global_2097152[func_505() /*10931*/].f_6175.f_27 = iVar0;
			break;
			break;
		
		case 97:
			Global_2097152[func_505() /*10931*/].f_6175.f_29 = iVar0;
			break;
		
		case 88:
			Global_2097152[func_505() /*10931*/].f_6175.f_28 = iVar0;
			break;
		
		case 100:
			Global_2097152[func_505() /*10931*/].f_6175.f_31 = iVar0;
			break;
		
		case 106:
			Global_2097152[func_505() /*10931*/].f_6175.f_32 = iVar0;
			break;
		
		case 99:
			Global_2097152[func_505() /*10931*/].f_6175.f_30 = iVar0;
			break;
	}
}

void func_477()
{
	int iVar0;
	bool bVar1;
	
	iVar0 = func_80(1199, -1, 0);
	if (!unk_0xCE990E643CD9D0E5(iVar0, 3))
	{
		unk_0xBE20AB8238688965(&iVar0, 3);
		unk_0xBE20AB8238688965(&iLocal_331, true);
		bVar1 = true;
	}
	else if (!unk_0xCE990E643CD9D0E5(iVar0, 4))
	{
		unk_0xBE20AB8238688965(&iVar0, 4);
		unk_0xBE20AB8238688965(&iLocal_331, 2);
		bVar1 = true;
	}
	else if (!unk_0xCE990E643CD9D0E5(iVar0, 5))
	{
		unk_0xBE20AB8238688965(&iVar0, 5);
		unk_0xBE20AB8238688965(&iLocal_331, 3);
		bVar1 = true;
	}
	if (bVar1)
	{
		func_146(1199, iVar0, -1, 1, 0);
	}
}

void func_478(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_80(iParam0, func_81(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_479(iParam0))
	{
		func_146(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_417(iParam0, iVar0, iParam2, 1);
	}
}

int func_479(int iParam0)
{
	if (Global_1388046)
	{
		switch (iParam0)
		{
			case 787:
			case 788:
			case 789:
			case 790:
			case 8727:
			case 777:
			case 778:
			case 779:
			case 780:
			case 8729:
			case 767:
			case 768:
			case 769:
			case 770:
			case 8731:
			case 757:
			case 758:
			case 759:
			case 760:
			case 8733:
			case 1303:
			case 7234:
			case 639:
			case 1278:
			case 764:
			case 765:
			case 766:
			case 8732:
			case 9534:
			case 1236:
			case 1877:
			case 2268:
			case 2930:
			case 3059:
			case 10138:
			case 3054:
			case 3055:
			case 3056:
			case 3057:
			case 3058:
			case 3233:
			case 3235:
			case 3637:
			case 3638:
			case 3639:
			case 3640:
			case 3641:
			case 3642:
			case 3643:
			case 3644:
			case 3645:
			case 3646:
			case 3228:
			case 3222:
			case 3664:
			case 3665:
			case 3666:
			case 3667:
			case 3668:
			case 3669:
			case 3690:
			case 3231:
			case 3230:
			case 4021:
			case 4020:
			case 4024:
			case 4023:
			case 4027:
			case 4026:
			case 4030:
			case 4029:
			case 6111:
			case 6110:
			case 6169:
			case 6168:
			case 6534:
			case 6533:
			case 6547:
			case 6546:
			case 6560:
			case 6559:
			case 6563:
			case 6562:
			case 6566:
			case 6565:
			case 7284:
			case 7286:
			case 7288:
			case 8283:
			case 8284:
			case 8285:
			case 8286:
			case 8287:
			case 8288:
			case 8289:
			case 8290:
			case 8291:
			case 8292:
			case 8293:
			case 8294:
			case 8295:
			case 8011:
			case 8535:
			case 8976:
			case 8978:
			case 8979:
			case 8981:
				return 1;
				break;
			}
	}
	return 0;
}

void func_480()
{
	if (!Global_2540384.f_4591)
	{
		Global_2540384.f_4591 = 1;
	}
	func_250(&(Global_2540384.f_4592), 0, 0);
}

int func_481(void fParam0)
{
	switch (fParam0)
	{
		case joaat("zion"):
			return 9000;
		
		case joaat("serrano"):
			return 9254;
		
		case joaat("jackal"):
			return 9350;
		
		case joaat("schafter2"):
			return 9804;
		
		case joaat("dubsta"):
			return 10500;
		
		case joaat("f620"):
			return 12000;
		
		case joaat("schwarzer"):
			return 12000;
		
		case joaat("rocoto"):
			return 12750;
		
		case joaat("sentinel2"):
			return 14250;
		
		case joaat("felon2"):
			return 14250;
		
		case joaat("comet2"):
			return 15000;
		
		case joaat("banshee"):
			return 15750;
		
		case joaat("surano"):
			return 16500;
		
		case joaat("coquette"):
			return 19800;
		
		case joaat("carbonizzare"):
			return 20000;
		
		case joaat("exemplar"):
			return 20000;
		
		case joaat("feltzer2"):
			return 20000;
		
		case joaat("bullet"):
			return 20000;
		
		case joaat("superd"):
			return 20000;
		
		case joaat("infernus"):
			return 20000;
		
		default:
	}
	return -1;
}

int func_482()
{
	int iVar0;
	
	if (func_14(PLAYER::PLAYER_ID(), 1, 1))
	{
		if (SYSTEM::VDIST(unk_0x9B0761B4C3EB8BC7(), 0))
		{
			iVar0 = ENTITY::GET_ENTITY_MODEL(unk_0x9B0761B4C3EB8BC7(), 0);
			if (ENTITY::GET_ENTITY_COORDS(iVar0, false))
			{
				if (!SYSTEM::VDIST2(bVar0, -1, 0))
				{
					if (MISC::IS_MINIGAME_IN_PROGRESS(bVar0, -1, 0) == unk_0x9B0761B4C3EB8BC7())
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_483(bool bParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
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
	bool bVar26;
	bool bVar27;
	int iVar28;
	
	if (bParam1)
	{
		if (SCRIPT::GET_NO_LOADING_SCREEN())
		{
			SCRIPT::SET_NO_LOADING_SCREEN(false);
		}
	}
	if (func_491())
	{
		if (bParam1)
		{
			return;
		}
		else
		{
			iParam3 = 1;
		}
	}
	if (!MISC::SET_BIT())
	{
		iVar0 = iParam2;
		PLAYER::SET_PLAYER_CONTROL(iParam0, bParam1, iVar0);
	}
	else
	{
		bVar1 = true;
		bVar2 = iParam2 & 2 != false;
		bVar3 = iParam2 & 4 != false;
		bVar4 = iParam2 & 8 != false;
		bVar5 = iParam2 & 16 != false;
		bVar6 = iParam2 & 32 != false;
		bVar7 = iParam2 & 64 != false;
		bVar8 = iParam2 & 128 != false;
		bVar9 = iParam2 & 256 != false;
		bVar10 = iParam2 & 512 != false;
		bVar11 = iParam2 & 1024 != false;
		bVar12 = iParam2 & 2048 != false;
		bVar13 = iParam2 & 4096 != false;
		bVar14 = iParam2 & 8192 != false;
		bVar15 = iParam2 & 16384 != false;
		bVar16 = iParam2 & 32768 != false;
		bVar17 = iParam2 & 65536 != false;
		bVar18 = iParam2 & 131072 != false;
		bVar19 = iParam2 & 262144 != false;
		bVar20 = iParam2 & 524288 != false;
		bVar21 = iParam2 & 1048576 != false;
		bVar22 = iParam2 & 2097152 != false;
		bVar23 = iParam2 & 4194304 != false;
		bVar24 = iParam2 & 8388608 != false;
		bVar25 = iParam2 & 16777216 != false;
		if (iParam2 & 33554432 != 0 || STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED())
		{
			bVar1 = false;
		}
		if (!func_136())
		{
			bVar26 = false;
			if (bParam1 == 1)
			{
				bVar26 = true;
			}
			if (bVar16 == 0 && !bVar21)
			{
				bVar26 = true;
			}
			if (bVar10 == 1)
			{
				bVar26 = true;
			}
			if (bVar26)
			{
				return;
			}
		}
		if (bVar18)
		{
		}
		if (AUDIO::PLAY_STREAM_FROM_VEHICLE(iParam0) && (ENTITY::IS_ENTITY_AT_COORD(bParam0) || iParam3 == 1))
		{
			if (iParam3 && PED::IS_PED_IN_ANY_POLICE_VEHICLE(PLAYER::GET_PLAYER_PED(bParam0), 0))
			{
				return;
			}
			bVar27 = PLAYER::GET_PLAYER_PED(bParam0);
			if (!bVar20)
			{
				if ((bVar19 && bParam1 == 0) && MISC::SET_BIT())
				{
					NETWORK::FADE_OUT_LOCAL_PLAYER(true);
				}
				else if (bVar14 || (!func_24(PLAYER::PLAYER_ID(), 0) && !func_232()))
				{
					ENTITY::SET_ENTITY_VISIBLE(bVar27, !bVar14, false);
				}
				if (!bVar14)
				{
					if (MISC::SET_BIT() && !bVar19)
					{
						NETWORK::FADE_OUT_LOCAL_PLAYER(false);
					}
					Global_2425869[bParam0 /*443*/].f_248 = 0;
				}
			}
			if (bParam1)
			{
				if (bVar1)
				{
					func_488(0, 0, 0);
					if (bVar25)
					{
						STREAMING::CLEAR_FOCUS();
					}
				}
				if (!func_487(bVar27) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(bVar27))
				{
					if (!bVar22)
					{
						ENTITY::SET_ENTITY_COLLISION(bVar27, true, false);
					}
				}
				if (!ENTITY::IS_ENTITY_ATTACHED(bVar27))
				{
					if (!bVar21)
					{
						ENTITY::SET_ENTITY_COORDS(bVar27, false);
					}
					ENTITY::_SET_ENTITY_SOMETHING(bVar27, true);
				}
				else if (!bVar21)
				{
					ENTITY::SET_ENTITY_COORDS(bVar27, false);
				}
				PED::SET_PED_CAN_BE_TARGETTED(bVar27, true);
				PLAYER::SET_PLAYER_INVINCIBLE(bParam0, false);
				PLAYER::_SET_PLAYER_INVINCIBLE_KEEP_RAGDOLL_ENABLED(bParam0, false);
				if (PED::HAS_PED_HEAD_BLEND_FINISHED(bVar27) && PED::_HAS_STREAMED_PED_ASSETS_LOADED(bVar27))
				{
					PED::_0x4668D80430D6C299(bVar27);
				}
				PED::SET_PED_CAN_RAGDOLL(bVar27, true);
				if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) == 0)
				{
					func_486();
					func_485();
				}
				if (PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
				{
					if (!bVar23)
					{
					}
				}
				if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
				{
				}
				Global_2425869[bParam0 /*443*/].f_249 = 0;
				if (!bVar24)
				{
					bVar3 = true;
				}
				if (Global_2405074.f_2674)
				{
					Global_2405074.f_2674 = 0;
				}
			}
			else
			{
				if (!func_487(bVar27) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(bVar27))
				{
					if (!bVar22)
					{
						ENTITY::SET_ENTITY_COLLISION(bVar27, !bVar15, false);
					}
					if (!ENTITY::IS_ENTITY_ATTACHED(bVar27))
					{
						if (!bVar21)
						{
							ENTITY::SET_ENTITY_COORDS(bVar27, bVar16);
						}
						if (!bVar16)
						{
							ENTITY::_SET_ENTITY_SOMETHING(bVar27, true);
						}
					}
					if (func_484(Global_4456448.f_129348))
					{
						ENTITY::SET_ENTITY_COORDS(bVar27, true);
					}
				}
				if (Global_1312872)
				{
					bVar10 = false;
				}
				if (bVar10)
				{
					PLAYER::SET_PLAYER_INVINCIBLE(bParam0, false);
				}
				else
				{
					PLAYER::SET_PLAYER_INVINCIBLE(bParam0, true);
				}
				PED::SET_PED_CAN_BE_TARGETTED(bVar27, bVar17);
				if (bVar3)
				{
					if (!PED::IS_PED_FATALLY_INJURED(bVar27) && !SYSTEM::VDIST(bVar27, 0))
					{
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(bVar27);
					}
				}
			}
			iVar28 = 0;
			if (bVar2)
			{
				iVar28 |= 2;
			}
			if (bVar3)
			{
				iVar28 |= 4;
			}
			if (bVar4)
			{
				iVar28 |= 8;
			}
			if (bVar5)
			{
				iVar28 |= 16;
			}
			if (bVar6)
			{
				iVar28 |= 32;
			}
			if (bVar7)
			{
				iVar28 |= 64;
			}
			if (bVar8)
			{
				iVar28 |= 128;
			}
			if (bVar9)
			{
				iVar28 |= 256;
			}
			if (bVar10)
			{
				iVar28 |= 512;
			}
			if (bVar11)
			{
				iVar28 |= 1024;
			}
			if (bVar12)
			{
				iVar28 |= 2048;
			}
			if (bVar13)
			{
				iVar28 |= 4096;
			}
			PLAYER::SET_PLAYER_CONTROL(bParam0, bParam1, iVar28);
		}
	}
}

bool func_484(int iParam0)
{
	return iParam0 == 17;
}

void func_485()
{
	struct<3> Var0;
	
	Global_2440049.f_1344 = 0;
	Global_2440049.f_1345 = 0;
	Global_2440049.f_1346 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2440049.f_1351 = -1;
	Global_2440049.f_1352 = 0;
	Global_2405074.f_2685 = { Var0 };
}

void func_486()
{
	Global_2405074.f_696 = 0;
	Global_2405074.f_2728 = 0;
	Global_2405074.f_512 = 0;
	Global_2405074.f_601 = 0;
	Global_2425869[PLAYER::PLAYER_ID() /*443*/].f_211 = 0;
	Global_2405074.f_2683 = 0;
}

int func_487(bool bParam0)
{
	int iVar0;
	
	if (SYSTEM::VDIST(bParam0, 1))
	{
		return 1;
	}
	else
	{
		iVar0 = TASK::GET_SCRIPT_TASK_STATUS(bParam0, -1794415470);
		if (iVar0 == 0)
		{
			return 1;
		}
	}
	return 0;
}

void func_488(bool bParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (PED::IS_PED_IN_ANY_POLICE_VEHICLE(bParam1, 0))
	{
	}
	if (bParam0 == 1)
	{
		if (MISC::IS_BIT_SET(bParam1))
		{
			if (PLAYER::SET_PLAYER_WANTED_LEVEL(bParam1))
			{
				if (!NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), VEHICLE::GET_VEHICLE_NUMBER_OF_PASSENGERS(bParam1)))
				{
					iVar0 = 1;
				}
			}
		}
	}
	if (iVar0 == 0)
	{
		if (iParam2 == 1)
		{
			if (bParam0 == 1)
			{
				func_490();
			}
			else if (!unk_0xCE990E643CD9D0E5(Global_2359302.f_67, true))
			{
				if (unk_0xCE990E643CD9D0E5(Global_2359302.f_67, 2))
				{
					iVar1 = 0;
					while (iVar1 < 8)
					{
						CAM::_0x2A2173E46DAECD12(iVar1, Global_2359302.f_58[iVar1]);
						iVar1++;
					}
				}
				unk_0xBE20AB8238688965(&(Global_2359302.f_67), true);
			}
		}
		if (func_24(PLAYER::PLAYER_ID(), 0))
		{
			NETWORK::NETWORK_SET_IN_SPECTATOR_MODE_EXTENDED(bParam0, bParam1, true);
		}
		else
		{
			NETWORK::NETWORK_SET_IN_SPECTATOR_MODE(bParam0, bParam1);
		}
		HUD::SET_MINIMAP_IN_SPECTATOR_MODE(bParam0, bParam1);
		func_489(joaat("MPPLY_IS_CHAR_SPECTATING"), bParam0);
	}
}

void func_489(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_BOOL(iVar0, bParam1, true);
	}
}

void func_490()
{
	int iVar0;
	
	if (!NETWORK::NETWORK_IS_IN_SPECTATOR_MODE())
	{
		if (!unk_0xCE990E643CD9D0E5(Global_2359302.f_67, 2))
		{
			iVar0 = 0;
			while (iVar0 < 8)
			{
				Global_2359302.f_58[iVar0] = CAM::_0xEE778F8C7E1142E2(iVar0);
				iVar0++;
			}
			unk_0xBE20AB8238688965(&(Global_2359302.f_67), 2);
			unk_0xBE20AB8238688965(&(Global_2359302.f_67), false);
		}
	}
}

int func_491()
{
	if (Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_35 && !Global_2452679.f_2846.f_215 == -1)
	{
		return 1;
	}
	return 0;
}

void func_492()
{
	func_117();
}

int func_493(int iParam0, int iParam1)
{
	if (HUD::SET_BLIP_NAME_FROM_TEXT_FILE(NETWORK::NETWORK_ARE_HANDLES_THE_SAME(unk_0x9B0761B4C3EB8BC7(), 1), func_169(iParam0), 1) <= IntToFloat(iParam1))
	{
		return 1;
	}
	return 0;
}

int func_494(bool bParam0)
{
	if (ENTITY::GET_ENTITY_COORDS(bParam0, false))
	{
		if (MISC::IS_MINIGAME_IN_PROGRESS(bParam0, -1, 0) == unk_0x9B0761B4C3EB8BC7())
		{
			if (!func_388(bParam0))
			{
				if (bParam0 != bLocal_334)
				{
					if (AUDIO::SET_SCRIPT_UPDATE_DOOR_AUDIO(PLAYER::PLAYER_ID()) < 2)
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_495()
{
	if (Global_2440049.f_502.f_16 || Global_2440049.f_502.f_17)
	{
		return 1;
	}
	return 0;
}

void func_496(var uParam0, int iParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	iVar1 = uParam2;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		(*uParam0)[iVar0] = -1;
		uParam0->f_6[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (iVar0 < iParam1)
		{
			(*uParam0)[iVar0] = func_497(iVar1, iVar0);
			uParam0->f_6[iVar0] = 0;
		}
		else
		{
			(*uParam0)[iVar0] = -1;
			uParam0->f_6[iVar0] = 1;
		}
		iVar0++;
	}
}

int func_497(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = -1;
	switch (iParam0)
	{
		case 0:
			iVar0 = func_504(iParam1);
			break;
		
		case 1:
			iVar0 = func_503(iParam1);
			break;
		
		case 2:
			iVar0 = func_502(iParam1);
			break;
		
		case 3:
			iVar0 = func_501(iParam1);
			break;
		
		case 4:
			iVar0 = func_500(iParam1);
			break;
		
		case 5:
			iVar0 = func_499(iParam1);
			break;
		
		case 6:
			iVar0 = func_498(iParam1);
			break;
	}
	return iVar0;
}

int func_498(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	switch (iParam0)
	{
		case 0:
			iVar0 = func_75(joaat("felon2"));
			break;
		
		case 1:
			iVar0 = func_75(joaat("serrano"));
			break;
		
		case 2:
			iVar0 = func_75(joaat("bullet"));
			break;
		
		case 3:
			iVar0 = func_75(joaat("infernus"));
			break;
		
		case 4:
			iVar0 = func_75(joaat("coquette"));
			break;
	}
	return iVar0;
}

int func_499(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	switch (iParam0)
	{
		case 0:
			iVar0 = func_75(joaat("zion"));
			break;
		
		case 1:
			iVar0 = func_75(joaat("banshee"));
			break;
		
		case 2:
			iVar0 = func_75(joaat("comet2"));
			break;
		
		case 3:
			iVar0 = func_75(joaat("surano"));
			break;
		
		case 4:
			iVar0 = func_75(joaat("exemplar"));
			break;
	}
	return iVar0;
}

int func_500(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	switch (iParam0)
	{
		case 0:
			iVar0 = func_75(joaat("sentinel2"));
			break;
		
		case 1:
			iVar0 = func_75(joaat("schwarzer"));
			break;
		
		case 2:
			iVar0 = func_75(joaat("superd"));
			break;
		
		case 3:
			iVar0 = func_75(joaat("jackal"));
			break;
		
		case 4:
			iVar0 = func_75(joaat("feltzer2"));
			break;
	}
	return iVar0;
}

int func_501(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	switch (iParam0)
	{
		case 0:
			iVar0 = func_75(joaat("schafter2"));
			break;
		
		case 1:
			iVar0 = func_75(joaat("bullet"));
			break;
		
		case 2:
			iVar0 = func_75(joaat("f620"));
			break;
		
		case 3:
			iVar0 = func_75(joaat("carbonizzare"));
			break;
		
		case 4:
			iVar0 = func_75(joaat("comet2"));
			break;
	}
	return iVar0;
}

int func_502(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	switch (iParam0)
	{
		case 0:
			iVar0 = func_75(joaat("feltzer2"));
			break;
		
		case 1:
			iVar0 = func_75(joaat("jackal"));
			break;
		
		case 2:
			iVar0 = func_75(joaat("f620"));
			break;
		
		case 3:
			iVar0 = func_75(joaat("superd"));
			break;
		
		case 4:
			iVar0 = func_75(joaat("rocoto"));
			break;
	}
	return iVar0;
}

int func_503(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	switch (iParam0)
	{
		case 0:
			iVar0 = func_75(joaat("banshee"));
			break;
		
		case 1:
			iVar0 = func_75(joaat("coquette"));
			break;
		
		case 2:
			iVar0 = func_75(joaat("sentinel2"));
			break;
		
		case 3:
			iVar0 = func_75(joaat("dubsta"));
			break;
		
		case 4:
			iVar0 = func_75(joaat("infernus"));
			break;
	}
	return iVar0;
}

int func_504(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	switch (iParam0)
	{
		case 0:
			iVar0 = func_75(joaat("rocoto"));
			break;
		
		case 1:
			iVar0 = func_75(joaat("felon2"));
			break;
		
		case 2:
			iVar0 = func_75(joaat("schafter2"));
			break;
		
		case 3:
			iVar0 = func_75(joaat("carbonizzare"));
			break;
		
		case 4:
			iVar0 = func_75(joaat("exemplar"));
			break;
	}
	return iVar0;
}

int func_505()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

int func_506(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_507(uParam0, bParam2, 0);
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

void func_507(var uParam0, bool bParam1, bool bParam2)
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

bool func_508(var uParam0)
{
	return uParam0->f_1;
}

void func_509()
{
	Global_2097152[func_505() /*10931*/].f_6175.f_36 = unk_0x5A002C4821A13338();
}

void func_510(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = CLOCK::GET_CLOCK_DAY_OF_WEEK();
	iVar0 = 0;
	while (iVar0 < 5)
	{
		(*uParam0)[iVar0] = -1;
		uParam0->f_6[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (iVar0 < iParam1)
		{
			(*uParam0)[iVar0] = func_497(iVar1, iVar0);
			uParam0->f_6[iVar0] = 0;
		}
		else
		{
			(*uParam0)[iVar0] = -1;
			uParam0->f_6[iVar0] = 1;
		}
		iVar0++;
	}
	Global_2097152[func_505() /*10931*/].f_6175.f_37 = iVar1;
}

void func_511()
{
	func_514("CELL_CLTEST1", 0);
	func_512("CELL_CLTEST1");
	func_514("CELL_CLTEST6", 0);
	func_512("CELL_CLTEST6");
}

void func_512(bool bParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (!AUDIO::PRELOAD_SCRIPT_CONVERSATION(&(Global_111858.f_14137[iVar0 /*104*/])))
		{
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS(&(Global_111858.f_14137[iVar0 /*104*/]), sParam0))
			{
				if (Global_111858.f_14137[iVar0 /*104*/].f_24 == 2)
				{
				}
				else
				{
					func_298();
					Global_111858.f_14137[iVar0 /*104*/].f_99[Global_19681] = 0;
					if (func_513(iVar0))
					{
					}
					else
					{
						Global_111858.f_14137[iVar0 /*104*/].f_24 = 0;
						Global_111858.f_14137[iVar0 /*104*/].f_28 = 0;
						Global_111858.f_14137[iVar0 /*104*/].f_29 = 0;
					}
					HUD::THEFEED_REMOVE_ITEM(Global_111858.f_14137[iVar0 /*104*/].f_16);
				}
			}
		}
		iVar0++;
	}
}

int func_513(int iParam0)
{
	if ((Global_111858.f_14137[iParam0 /*104*/].f_99[0] == 1 || Global_111858.f_14137[iParam0 /*104*/].f_99[1] == 1) || Global_111858.f_14137[iParam0 /*104*/].f_99[2] == 1)
	{
		return 1;
	}
	return 0;
}

void func_514(bool bParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (!AUDIO::PRELOAD_SCRIPT_CONVERSATION(&(Global_111858.f_14137[iVar0 /*104*/])))
		{
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS(&(Global_111858.f_14137[iVar0 /*104*/]), sParam0))
			{
				if (Global_111858.f_14137[iVar0 /*104*/].f_24 == 0)
				{
				}
				Global_111858.f_14137[iVar0 /*104*/].f_24 = 1;
				if (Global_111858.f_14137[iVar0 /*104*/].f_25 == 1)
				{
					if (Global_111858.f_14137[iVar0 /*104*/].f_99[0] == 1)
					{
						Global_111858.f_14047[0 /*20*/].f_17 = 0;
					}
					if (Global_111858.f_14137[iVar0 /*104*/].f_99[1] == 1)
					{
						Global_111858.f_14047[1 /*20*/].f_17 = 0;
					}
					if (Global_111858.f_14137[iVar0 /*104*/].f_99[2] == 1)
					{
						Global_111858.f_14047[2 /*20*/].f_17 = 0;
					}
					if (Global_111858.f_14137[iVar0 /*104*/].f_99[3] == 1)
					{
						Global_111858.f_14047[3 /*20*/].f_17 = 0;
					}
					Global_111858.f_14137[iVar0 /*104*/].f_25 = 0;
					if (iParam1 == 1)
					{
						Global_111858.f_14137[iVar0 /*104*/].f_27 = 1;
					}
				}
			}
		}
		iVar0++;
	}
}

int func_515()
{
	if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
	{
		return 0;
	}
	if (func_107())
	{
		return 0;
	}
	if (!GRAPHICS::DRAW_SCALEFORM_MOVIE())
	{
		return 0;
	}
	if (func_115())
	{
		return 0;
	}
	if (func_112())
	{
		return 0;
	}
	if (func_139(PLAYER::PLAYER_ID(), 1, 0))
	{
		return 0;
	}
	if (func_110())
	{
		return 0;
	}
	if (STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(unk_0x9B0761B4C3EB8BC7()))
	{
		return 0;
	}
	if (HUD::DISABLE_FRONTEND_THIS_FRAME())
	{
		return 0;
	}
	if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (Global_1574190)
	{
		return 0;
	}
	if (func_257())
	{
		return 0;
	}
	if (func_256())
	{
		return 0;
	}
	if (func_525())
	{
		return 0;
	}
	if (STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED())
	{
		return 0;
	}
	if (func_516())
	{
		return 0;
	}
	if (!func_136())
	{
		return 0;
	}
	if (func_108())
	{
		return 0;
	}
	if (STATS::STAT_SET_INT())
	{
		return 0;
	}
	return 1;
}

bool func_516()
{
	return Global_74030;
}

bool func_517()
{
	if (Global_2097152[func_505() /*10931*/].f_6175.f_35 == 0)
	{
		return 0;
	}
	return (unk_0x5A002C4821A13338() - Global_2097152[func_505() /*10931*/].f_6175.f_35) < 86400;
}

bool func_518()
{
	if (Global_2097152[func_505() /*10931*/].f_6175.f_36 == 0)
	{
		return 0;
	}
	return (unk_0x5A002C4821A13338() - Global_2097152[func_505() /*10931*/].f_6175.f_36) < 86400;
}

bool func_519()
{
	if (!unk_0xCE990E643CD9D0E5(iLocal_330, 2))
	{
		if (!func_24(PLAYER::PLAYER_ID(), 0))
		{
			if (((((!STATS::STAT_SET_INT() && !func_139(PLAYER::PLAYER_ID(), 1, 0)) && !func_112()) && (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(unk_0x9B0761B4C3EB8BC7()) && PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))) && GRAPHICS::DRAW_SCALEFORM_MOVIE()) && func_520(19))
			{
				unk_0xBE20AB8238688965(&iLocal_330, 2);
			}
		}
	}
	return unk_0xCE990E643CD9D0E5(iLocal_330, 2);
}

int func_520(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_522(iParam0);
	if (iVar0 == 1)
	{
		return 1;
	}
	iVar1 = func_521(PLAYER::PLAYER_ID(), 1);
	iVar2 = func_418(iVar1, 1);
	if (iVar2 >= iVar0 && iVar0 != -1)
	{
		return 1;
	}
	return 0;
}

int func_521(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_420(iParam0);
}

int func_522(int iParam0)
{
	if (func_103())
	{
		return 1;
	}
	if (func_102())
	{
		return 1;
	}
	switch (iParam0)
	{
		case 16:
		case 1:
		case 2:
		case 28:
			return 1;
		
		case 21:
			return 2;
		
		case 22:
		case 18:
		case 17:
		case 73:
		case 30:
		case 59:
		case 60:
		case 76:
		case 13:
		case 90:
		case 0:
		case 99:
		case 5:
		case 32:
		case 125:
		case 129:
		case 131:
		case 132:
		case 133:
		case 134:
		case 136:
		case 138:
		case 139:
		case 140:
		case 141:
		case 144:
		case 146:
		case 137:
		case 148:
		case 135:
		case 236:
		case 150:
			if (!func_523(-1))
			{
				return 3;
			}
			else
			{
				return 1;
			}
			break;
		
		case 23:
		case 102:
		case 110:
		case 156:
			return 5;
		
		case 12:
		case 11:
		case 14:
		case 15:
		case 27:
		case 122:
			return 6;
		
		case 97:
		case 107:
			return 7;
		
		case 4:
			return 8;
		
		case 19:
			return 8;
		
		case 29:
			return 10;
		
		case 8:
			return 11;
		
		case 61:
		case 119:
		case 121:
		case 96:
		case 128:
			return 12;
		
		case 89:
			return 13;
		
		case 31:
			return 14;
		
		case 3:
		case 103:
		case 124:
		case 126:
		case 127:
		case 78:
			return 15;
		
		case 109:
		case 88:
			return 16;
		
		case 74:
		case 100:
			return 17;
		
		case 6:
			return 18;
		
		case 20:
			return 19;
		
		case 62:
		case 108:
		case 130:
			return 20;
		
		case 65:
		case 93:
			return 21;
		
		case 63:
		case 104:
			return 25;
		
		case 77:
		case 106:
			return 30;
		
		case 81:
		case 98:
			return 35;
		
		case 75:
		case 95:
			return 40;
		
		case 105:
			return 45;
			break;
		
		case 67:
		case 64:
			return 50;
	}
	return -1;
}

bool func_523(int iParam0)
{
	return func_524(123, iParam0);
}

int func_524(int iParam0, var uParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2587834[iParam0 /*3*/][func_81(uParam1)];
	if (unk_0xB9112C701DE2A810(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

bool func_525()
{
	return Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_196 != 0;
}

int func_526()
{
	var uVar0;
	
	func_533(&uVar0);
	if (Global_1312872 == 0)
	{
		if (!MISC::SET_BIT())
		{
			return 1;
		}
	}
	if (func_532())
	{
		return 1;
	}
	if (Global_2464493)
	{
		return 1;
	}
	if (func_531())
	{
		return 1;
	}
	if (func_530(159))
	{
		if (!func_529())
		{
			return 1;
		}
	}
	if (func_530(157))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_SESSION_IS_IN_VOICE_SESSION())
	{
		return 1;
	}
	if (func_527() != 0)
	{
		if (INTERIOR::GET_INTERIOR_AT_COORDS(func_527()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_527()
{
	switch (func_83())
	{
		case 0:
			return func_528();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_528()
{
	switch (Global_2464595)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

bool func_529()
{
	return Global_2451787.f_696;
}

int func_530(int iParam0)
{
	if (unk_0x16F1FCCC54559709(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_531()
{
	return Global_2462250;
}

bool func_532()
{
	return Global_2451787.f_691;
}

void func_533(var uParam0)
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
					func_534(iVar0);
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

void func_534(int iParam0)
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
				if (SYSTEM::VDIST(bVar1, 0))
				{
					iVar2 = ENTITY::GET_ENTITY_MODEL(bVar1, 0);
					if (VEHICLE::REMOVE_VEHICLE_WINDOW(iVar2, Var0.f_2) && NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
					{
						if (func_535(bVar2, &bVar3))
						{
							ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(bVar2, Var0.f_2);
						}
						if (bVar3)
						{
							STREAMING::REMOVE_ANIM_DICT(&bVar2);
						}
					}
				}
			}
		}
	}
}

int func_535(bool bParam0, var uParam1)
{
	if (MISC::IS_BIT_SET(iParam0))
	{
		if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(bParam0))
		{
			if (NETWORK::NETWORK_GET_ENTITY_IS_LOCAL(bParam0))
			{
				if (!VEHICLE::IS_THIS_MODEL_A_TRAIN(MISC::GET_MODEL_DIMENSIONS(bParam0)))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(bParam0, false, true);
					*uParam1 = 1;
				}
			}
		}
		if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(bParam0, false))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(bParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_536()
{
	SYSTEM::WAIT(0);
}

void func_537()
{
	if (iLocal_102 != -1)
	{
		func_143(iLocal_102, 0);
	}
	func_539(&iLocal_309);
	if (unk_0xCE990E643CD9D0E5(iLocal_330, true))
	{
		func_538(0f, 0f, 0f, func_366(19), 1);
	}
	if (MISC::SET_BIT())
	{
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			if (NETWORK::NETWORK_ENTITY_AREA_DOES_EXIST(Local_322.f_24))
			{
				NETWORK::NETWORK_REMOVE_ENTITY_AREA(Local_322.f_24);
			}
			Local_322.f_24 = -1;
		}
	}
	func_376();
	Global_2540384.f_1715 = 0;
	Global_2540384.f_1716 = 0;
	Global_2540384.f_1718 = 0;
	Global_2540384.f_1744 = 0;
	if (unk_0xCE990E643CD9D0E5(iLocal_330, 7))
	{
		func_259(6, 0);
	}
	func_396();
	if (SYSTEM::VMAG(Global_1663732))
	{
		unk_0x93370FA10F15BE44(&Global_1663732);
	}
	func_252(0);
	if (SYSTEM::VMAG(Global_1663742))
	{
		unk_0x93370FA10F15BE44(&Global_1663742);
	}
	if (MISC::SET_BIT())
	{
		if (iLocal_79)
		{
			func_174(1215605247, 0, 0);
			func_173(0);
		}
		if (iLocal_92)
		{
			func_173(0);
		}
	}
	ENTITY::STOP_ENTITY_ANIM();
}

void func_538(struct<3> Param0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (!CAM::IS_SCREEN_FADED_OUT(uParam1))
	{
		iVar0 = 0;
		while (iVar0 < 16)
		{
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS(&(Global_2540384.f_4029[iVar0 /*26*/].f_4), bParam1))
			{
				if (iParam2 || func_31(Global_2540384.f_4029[iVar0 /*26*/].f_1, Param0, 0))
				{
					Global_2540384.f_4029[iVar0 /*26*/] = 0;
					Global_2540384.f_4029[iVar0 /*26*/].f_1 = { 0f, 0f, 0f };
					StringCopy(&(Global_2540384.f_4029[iVar0 /*26*/].f_4), "", 24);
					StringCopy(&(Global_2540384.f_4029[iVar0 /*26*/].f_10), "", 64);
				}
			}
			iVar0++;
		}
	}
}

void func_539(int iParam0)
{
	int iVar0;
	
	if (*iParam0 == -1)
	{
		return;
	}
	iVar0 = func_540(*iParam0);
	if (iVar0 == -1)
	{
		*iParam0 = -1;
		return;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_42356[iVar0 /*32*/])
		{
			Global_42356[iVar0 /*32*/].f_7 = 1;
			*iParam0 = -1;
			return;
		}
	}
	*iParam0 = -1;
}

int func_540(int iParam0)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_42356[iVar0 /*32*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_541(struct<21> Param0)
{
	func_547(func_548(Param0), Param0);
	func_544(0, -1, 0);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(&Local_322, 74);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_329, 129);
	WEAPON::GET_WEAPONTYPE_GROUP(0);
	if (!func_543())
	{
		return 0;
	}
	Global_2540384.f_1718 = 0;
	Global_2540384.f_4447 = 0;
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
	}
	if (func_71(PLAYER::PLAYER_ID(), 6))
	{
		func_259(6, 0);
	}
	func_542();
	return 1;
}

void func_542()
{
	var uVar0;
	
	uVar0 = func_80(1199, -1, 0);
	if (unk_0xCE990E643CD9D0E5(uVar0, 3))
	{
		unk_0xBE20AB8238688965(&iLocal_331, true);
	}
	if (unk_0xCE990E643CD9D0E5(iVar0, 4))
	{
		unk_0xBE20AB8238688965(&iLocal_331, 2);
	}
	if (unk_0xCE990E643CD9D0E5(iVar0, 5))
	{
		unk_0xBE20AB8238688965(&iLocal_331, 3);
		unk_0xBE20AB8238688965(&iLocal_331, false);
	}
}

int func_543()
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
		if (func_532())
		{
			return 0;
		}
		if (func_530(157))
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

int func_544(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_546();
			}
			else
			{
				return 0;
			}
		}
		if (!func_545())
		{
			if (iParam0 == 0)
			{
				if (!MISC::SET_BIT())
				{
					if (!bParam2)
					{
						func_546();
					}
					else
					{
						return 0;
					}
				}
				if (func_532())
				{
					if (!bParam2)
					{
						func_546();
					}
					else
					{
						return 0;
					}
				}
				if (func_530(157))
				{
					if (!bParam2)
					{
						func_546();
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
					func_546();
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
				func_546();
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
			func_546();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_545()
{
	return Global_1312872;
}

void func_546()
{
	ENTITY::STOP_ENTITY_ANIM();
}

void func_547(int* iParam0, struct<17> Param1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	if (!MISC::SET_BIT())
	{
		func_546();
	}
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(iParam0, 0, Param1.f_16);
}

int func_548(int iParam0)
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

