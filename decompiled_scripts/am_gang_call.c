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
	float fLocal_62 = 0f;
	struct<55> Local_63 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0 } ;
	var uLocal_64 = 0;
	struct<5> Local_65[32];
	bool bLocal_66 = 0;
	int iLocal_67[3] = { 0, 0, 0 };
	bool bLocal_68 = 0;
	bool bLocal_69 = 0;
	bool bLocal_70 = 0;
	bool bLocal_71 = 0;
	void fLocal_72 = 0;
	struct<3> Local_73 = { 0, 0, 0 } ;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	bool bLocal_76 = 0;
	int iLocal_77 = 0;
	float fLocal_78 = 0f;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 16;
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
	int iLocal_251 = 0;
	var uLocal_252[16] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_253 = 0;
	int iLocal_254 = 0;
	var uLocal_255 = 0;
	var uLocal_256 = 0;
	struct<21> Local_257 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
#endregion

void __EntryFunction__()
{
	int iVar0;
	
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
	fLocal_62 = ((0.05f + 0.275f) - 0.01f);
	bLocal_69 = -1;
	fLocal_72 = -1;
	if (MISC::SET_BIT())
	{
		func_557(ScriptParam_257);
	}
	while (true)
	{
		func_556();
		if (func_546())
		{
			func_543();
		}
		iLocal_74 = NETWORK::GET_NETWORK_TIME();
		func_534();
		func_531();
		func_526();
		func_525();
		switch (func_524(STATS::_GET_PACKED_TITLE_UPDATE_BOOL_STAT_KEY()))
		{
			case 0:
				if (func_523() == 1)
				{
					Local_65[STATS::_GET_PACKED_TITLE_UPDATE_BOOL_STAT_KEY() /*5*/] = 1;
				}
				else if (func_523() == 4)
				{
					Local_65[STATS::_GET_PACKED_TITLE_UPDATE_BOOL_STAT_KEY() /*5*/] = 3;
				}
				break;
			
			case 1:
				if (func_523() == 1)
				{
					func_517();
				}
				else if (func_523() == 0)
				{
					func_511();
					Local_65[STATS::_GET_PACKED_TITLE_UPDATE_BOOL_STAT_KEY() /*5*/] = 0;
				}
				else if (func_523() == 4)
				{
					Local_65[STATS::_GET_PACKED_TITLE_UPDATE_BOOL_STAT_KEY() /*5*/] = 3;
				}
				break;
			
			case 3:
				func_486();
				func_484(&(Local_63.f_54));
				if (func_483(&(Local_63.f_54)))
				{
					iVar0 = 0;
					while (iVar0 < func_482(bLocal_69))
					{
						func_486();
						iVar0++;
					}
					Local_65[STATS::_GET_PACKED_TITLE_UPDATE_BOOL_STAT_KEY() /*5*/] = 4;
				}
				break;
			
			case 2:
				Local_65[STATS::_GET_PACKED_TITLE_UPDATE_BOOL_STAT_KEY() /*5*/] = 4;
			
			case 4:
				func_262();
				break;
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			func_260();
			func_259();
			func_258();
			switch (func_523())
			{
				case 0:
					func_257();
					if (func_253())
					{
						if (!PED::IS_PED_IN_ANY_POLICE_VEHICLE(PLAYER::GET_PLAYER_PED(bLocal_71), 0))
						{
							func_251(PLAYER::GET_PLAYER_PED(bLocal_71));
						}
						else
						{
							Local_63.f_36 = { Local_73 };
						}
						VEHICLE::IS_VEHICLE_DRIVEABLE(&(Local_63.f_2), 6);
						Local_63 = 1;
					}
					break;
				
				case 1:
					if (func_65())
					{
						func_64();
						func_63();
					}
					func_45();
					break;
				
				case 4:
					break;
			}
			func_1();
		}
	}
}

void func_1()
{
	int iVar0;
	
	if (func_523() < 4)
	{
		if (func_22())
		{
			iLocal_75 = 0;
			iVar0 = 0;
			while (iVar0 <= (func_482(bLocal_69) - 1))
			{
				func_2();
				iVar0++;
			}
			Local_63 = 4;
		}
	}
}

void func_2()
{
	var uVar0;
	struct<14> Var1;
	
	if (unk_0xCE990E643CD9D0E5(Local_63.f_10[iLocal_75 /*7*/].f_2, true) || unk_0xCE990E643CD9D0E5(Local_63.f_10[iLocal_75 /*7*/].f_2, 6))
	{
		if (HUD::DOES_BLIP_EXIST(Local_63.f_10[iLocal_75 /*7*/]))
		{
			if (MISC::IS_BIT_SET(NETWORK::NET_TO_PED(Local_63.f_10[iLocal_75 /*7*/])))
			{
				if (PED::IS_PED_IN_ANY_POLICE_VEHICLE(NETWORK::NET_TO_PED(Local_63.f_10[iLocal_75 /*7*/]), 0))
				{
					if (!unk_0xCE990E643CD9D0E5(Local_63.f_10[iLocal_75 /*7*/].f_2, 6))
					{
						if (bLocal_69 == 0)
						{
							Local_63.f_48++;
							if (!unk_0xCE990E643CD9D0E5(Local_63.f_2, 12))
							{
								if (NETWORK::NETWORK_GET_DESTROYER_OF_NETWORK_ID(Local_63.f_10[iLocal_75 /*7*/], &uVar0) == bLocal_71)
								{
									unk_0xBE20AB8238688965(&(Local_63.f_2), 12);
								}
							}
							if ((Local_63.f_42 == iLocal_75 && !unk_0xCE990E643CD9D0E5(Local_63.f_2, 5)) || Local_63.f_48 == func_482(bLocal_69))
							{
								Var1.f_2 = -1258427879;
								Var1.f_10 = bLocal_71;
								Var1.f_11 = bLocal_70;
								if (func_482(bLocal_69) > 1)
								{
									Var1.f_12 = NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(true);
								}
								else
								{
									Var1.f_12 = NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(false);
								}
								Var1.f_3 = Local_63.f_43;
								func_20(Var1, func_21(1));
								if (Local_63.f_42 == iLocal_75)
								{
									unk_0xBE20AB8238688965(&(Local_63.f_2), 5);
								}
							}
							else if (!unk_0xCE990E643CD9D0E5(Local_63.f_2, 5))
							{
								Var1.f_2 = -884493306;
								Var1.f_11 = bLocal_70;
								func_20(Var1, func_21(1));
							}
						}
						unk_0xBE20AB8238688965(&(Local_63.f_10[iLocal_75 /*7*/].f_2), 6);
					}
				}
				else
				{
					if (!unk_0xCE990E643CD9D0E5(Local_63.f_10[iLocal_75 /*7*/].f_2, 5))
					{
						unk_0xBE20AB8238688965(&bLocal_66, 2);
					}
					unk_0xBE20AB8238688965(&bLocal_66, true);
				}
			}
		}
	}
	else
	{
		unk_0xBE20AB8238688965(&bLocal_66, true);
		unk_0xBE20AB8238688965(&bLocal_66, 2);
	}
	func_3(iLocal_75);
	iLocal_75++;
	if (iLocal_75 >= func_482(bLocal_69))
	{
		iLocal_75 = 0;
		if (unk_0xCE990E643CD9D0E5(Local_63.f_1, false))
		{
			if (!unk_0xCE990E643CD9D0E5(bLocal_66, true))
			{
				if (!unk_0xCE990E643CD9D0E5(Local_63.f_1, true))
				{
					unk_0xBE20AB8238688965(&(Local_63.f_1), true);
				}
			}
			if (!unk_0xCE990E643CD9D0E5(bLocal_66, 2))
			{
				if (!unk_0xCE990E643CD9D0E5(Local_63.f_1, 9))
				{
					unk_0xBE20AB8238688965(&(Local_63.f_1), 9);
				}
			}
		}
		VEHICLE::IS_VEHICLE_DRIVEABLE(&bLocal_66, true);
		VEHICLE::IS_VEHICLE_DRIVEABLE(&bLocal_66, 2);
	}
}

void func_3(int iParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		if (HUD::DOES_BLIP_EXIST(Local_63.f_10[iParam0 /*7*/]))
		{
			iVar0 = NETWORK::NET_TO_PED(Local_63.f_10[iParam0 /*7*/]);
			if (!PED::IS_PED_IN_ANY_POLICE_VEHICLE(iVar0, 0))
			{
				if (!unk_0xCE990E643CD9D0E5(Local_63.f_10[iParam0 /*7*/].f_2, 9))
				{
					bVar2 = false;
					switch (Local_63.f_10[iParam0 /*7*/].f_1)
					{
						case 0:
							if (func_19(iVar0, 3))
							{
								bVar2 = true;
							}
							break;
					}
					if (bVar2)
					{
						unk_0xBE20AB8238688965(&(Local_63.f_10[iParam0 /*7*/].f_2), 9);
					}
				}
				switch (Local_63.f_10[iParam0 /*7*/].f_5)
				{
					case 0:
						break;
					
					case 1:
						if (Local_63.f_10[iParam0 /*7*/].f_4 == 0)
						{
							if (!unk_0xCE990E643CD9D0E5(Local_63.f_10[iParam0 /*7*/].f_2, 7))
							{
								if ((((TASK::GET_NAVMESH_ROUTE_RESULT(iVar0) == 2 || (Global_2425869[bLocal_71 /*443*/].f_240 != -1 && func_18(Global_2425869[bLocal_71 /*443*/].f_240) == 4)) || Global_1590682[bLocal_71 /*883*/].f_755) || func_16(bLocal_71, 0)) || func_9(bLocal_71))
								{
									Local_63.f_10[iParam0 /*7*/].f_3 = iLocal_74;
									unk_0xBE20AB8238688965(&(Local_63.f_10[iParam0 /*7*/].f_2), 7);
								}
							}
							else if ((((TASK::GET_NAVMESH_ROUTE_RESULT(iVar0) != 2 && Global_2425869[bLocal_71 /*443*/].f_240 == -1) && !Global_1590682[bLocal_71 /*883*/].f_755) && !func_16(bLocal_71, 0)) && !func_9(bLocal_71))
							{
								VEHICLE::IS_VEHICLE_DRIVEABLE(&(Local_63.f_10[iParam0 /*7*/].f_2), 7);
							}
							else if (NETWORK::GET_TIME_DIFFERENCE(iLocal_74, Local_63.f_10[iParam0 /*7*/].f_3) > 10000 || TASK::GET_NAVMESH_ROUTE_RESULT(iVar0) != 2)
							{
								if (!unk_0xCE990E643CD9D0E5(Local_63.f_2, 10))
								{
									unk_0xBE20AB8238688965(&(Local_63.f_2), 10);
									Local_63.f_39 = { func_8(bLocal_71) };
									iVar1 = 0;
									iVar1 = 0;
									while (iVar1 < func_482(bLocal_69))
									{
										func_7(iVar1, 3);
										iVar1++;
									}
								}
							}
							if (unk_0xCE990E643CD9D0E5(Local_63.f_10[iParam0 /*7*/].f_2, 2))
							{
								if (!unk_0xCE990E643CD9D0E5(Local_63.f_10[iParam0 /*7*/].f_2, 3))
								{
									if (TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(iVar0) == 3f && !TASK::CLEAR_PED_TASKS(iVar0, 118, 1))
									{
										unk_0xBE20AB8238688965(&(Local_63.f_10[iParam0 /*7*/].f_2), 3);
									}
								}
							}
						}
						if (unk_0xCE990E643CD9D0E5(Local_63.f_2, true))
						{
							unk_0xBE20AB8238688965(&(Local_63.f_10[iParam0 /*7*/].f_2), 2);
							func_7(iParam0, 3);
						}
						else if (func_6(bLocal_71, 1, 1))
						{
							if (!unk_0xCE990E643CD9D0E5(Local_63.f_10[iParam0 /*7*/].f_2, 2))
							{
								if (func_5(NETWORK::NETWORK_ARE_HANDLES_THE_SAME(iVar0, 1), NETWORK::NETWORK_ARE_HANDLES_THE_SAME(PLAYER::GET_PLAYER_PED(bLocal_71), 1), 25f) || !func_5(NETWORK::NETWORK_ARE_HANDLES_THE_SAME(iVar0, 1), NETWORK::NETWORK_ARE_HANDLES_THE_SAME(PLAYER::GET_PLAYER_PED(bLocal_71), 1), 625f))
								{
									unk_0xBE20AB8238688965(&(Local_63.f_10[iParam0 /*7*/].f_2), 2);
								}
							}
							if (func_4(NETWORK::NETWORK_ARE_HANDLES_THE_SAME(iVar0, 1), NETWORK::NETWORK_ARE_HANDLES_THE_SAME(PLAYER::GET_PLAYER_PED(bLocal_71), 1)) || (PED::IS_PED_JACKING(iVar0) && PED::GET_JACK_TARGET(iVar0) == PLAYER::GET_PLAYER_PED(bLocal_71)))
							{
								func_7(iParam0, 2);
							}
						}
						break;
					
					case 2:
						if (unk_0xCE990E643CD9D0E5(Local_63.f_2, true))
						{
							unk_0xBE20AB8238688965(&(Local_63.f_10[iParam0 /*7*/].f_2), 2);
							func_7(iParam0, 3);
						}
						else if (func_6(bLocal_71, 1, 1))
						{
							if (!func_4(NETWORK::NETWORK_ARE_HANDLES_THE_SAME(iVar0, 1), NETWORK::NETWORK_ARE_HANDLES_THE_SAME(PLAYER::GET_PLAYER_PED(bLocal_71), 1)) && !(PED::IS_PED_JACKING(iVar0) && PED::GET_JACK_TARGET(iVar0) == PLAYER::GET_PLAYER_PED(bLocal_71)))
							{
								func_7(iParam0, 1);
							}
						}
						break;
					
					case 3:
						if (Local_63.f_10[iParam0 /*7*/].f_4 == 0)
						{
							if (!unk_0xCE990E643CD9D0E5(Local_63.f_10[iParam0 /*7*/].f_2, 4))
							{
								if (TASK::CLEAR_PED_TASKS(iVar0, 118, 1))
								{
									unk_0xBE20AB8238688965(&(Local_63.f_10[iParam0 /*7*/].f_2), 4);
								}
							}
						}
						break;
					
					case 4:
						break;
					}
				}
			}
	}
}

int func_4(struct<3> Param0, struct<3> Param1)
{
	struct<3> Var0;
	struct<3> Var1;
	
	if (ENTITY::IS_ENTITY_PLAYING_ANIM((Param1.f_2 - Param0.f_2)) < 2f)
	{
		Var0.x = Param0.x;
		Var0.f_1 = Param0.f_1;
		Var1.x = Param1.x;
		Var1.f_1 = Param1.f_1;
		if (func_5(Var0, Var1, 2f))
		{
			return 1;
		}
	}
	return 0;
}

int func_5(struct<3> Param0, struct<3> Param1, float fParam2)
{
	if (SYSTEM::VDIST2(Param0, Param1) < fParam2)
	{
		return 1;
	}
	return 0;
}

int func_6(bool bParam0, bool bParam1, bool bParam2)
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

void func_7(int iParam0, int iParam1)
{
	Local_63.f_10[iParam0 /*7*/].f_5 = iParam1;
}

Vector3 func_8(bool bParam0)
{
	return NETWORK::NETWORK_ARE_HANDLES_THE_SAME(PLAYER::GET_PLAYER_PED(bParam0), 0);
}

int func_9(bool bParam0)
{
	int iVar0;
	int iVar1;
	
	if (AUDIO::PLAY_STREAM_FROM_VEHICLE(bParam0))
	{
		if (func_14(bParam0, 1))
		{
			iVar0 = PLAYER::GET_PLAYER_PED(bParam0);
			iVar1 = func_11(bParam0);
			if (MISC::IS_BIT_SET(iVar1))
			{
				if (ENTITY::GET_ENTITY_COORDS(iVar1, false))
				{
					if (unk_0xE0B3BC41DDA88DF0(iVar0, iVar1, 0))
					{
						return func_10(iVar1);
					}
				}
			}
		}
	}
	return 0;
}

int func_10(int iParam0)
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

int func_11(bool bParam0)
{
	if (func_14(bParam0, 1))
	{
		return Global_2540384.f_5188.f_223[func_12(bParam0)];
	}
	return 0;
}

int func_12(bool bParam0)
{
	if (bParam0 != func_13())
	{
		return Global_1630317[bParam0 /*595*/].f_11;
	}
	return func_13();
}

int func_13()
{
	return -1;
}

bool func_14(bool bParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_15(bParam0))
		{
			return 0;
		}
	}
	return Global_1630317[bParam0 /*595*/].f_11 != func_13();
}

int func_15(int iParam0)
{
	if (iParam0 != func_13())
	{
		if (Global_1630317[iParam0 /*595*/].f_11 != func_13())
		{
			return Global_1630317[iParam0 /*595*/].f_11 == iParam0;
		}
	}
	return 0;
}

int func_16(bool bParam0, int iParam1)
{
	int iVar0;
	
	if (func_6(bParam0, 1, 1))
	{
		iVar0 = PLAYER::GET_PLAYER_PED(bParam0);
		if (SYSTEM::VDIST(iVar0, iParam1))
		{
			if (func_17(ENTITY::GET_ENTITY_MODEL(iVar0, iParam1), 1))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_17(int iParam0, bool bParam1)
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

int func_18(int iParam0)
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

int func_19(int iParam0, bool bParam1)
{
	if (NETWORK::NET_TO_VEH("AttributeDamage", 3))
	{
		if (unk_0x871819940BD2E434(iParam0, "AttributeDamage"))
		{
			if (unk_0xCE990E643CD9D0E5(PED::IS_PED_IN_ANY_VEHICLE(iParam0, "AttributeDamage"), iParam1))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_20(struct<2> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, int iParam13)
{
	Param0 = -1949011582;
	Param0.f_1 = PLAYER::PLAYER_ID();
	if (!iParam13 == 0)
	{
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Param0, 14, iParam13);
	}
}

int func_21(int iParam0)
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
			if (func_6(bVar2, 0, 0))
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

int func_22()
{
	if (unk_0xCE990E643CD9D0E5(Local_63.f_1, false))
	{
		if (bLocal_69 == 1)
		{
			if (unk_0xCE990E643CD9D0E5(Local_63.f_1, 4))
			{
				unk_0xBE20AB8238688965(&(Local_63.f_3), 11);
				return 1;
			}
		}
		else if (unk_0xCE990E643CD9D0E5(Local_63.f_1, true))
		{
			unk_0xBE20AB8238688965(&(Local_63.f_3), false);
			return 1;
		}
	}
	else if (unk_0xCE990E643CD9D0E5(Local_63.f_1, 2))
	{
		unk_0xBE20AB8238688965(&(Local_63.f_3), true);
		unk_0xBE20AB8238688965(&Global_1655300, bLocal_69);
		return 1;
	}
	if (unk_0xCE990E643CD9D0E5(Local_63.f_3, 12))
	{
		return 1;
	}
	if (bLocal_69 == 0)
	{
		if (unk_0xCE990E643CD9D0E5(Local_63.f_2, 2))
		{
			unk_0xBE20AB8238688965(&(Local_63.f_3), 2);
			return 1;
		}
		if (unk_0xCE990E643CD9D0E5(Local_63.f_2, 8))
		{
			unk_0xBE20AB8238688965(&(Local_63.f_3), 8);
			return 1;
		}
		if (unk_0xCE990E643CD9D0E5(Local_63.f_2, 5))
		{
			unk_0xBE20AB8238688965(&(Local_63.f_3), 3);
			return 1;
		}
		if (unk_0xCE990E643CD9D0E5(Local_63.f_2, 9))
		{
			unk_0xBE20AB8238688965(&(Local_63.f_3), 9);
			return 1;
		}
		if (unk_0xCE990E643CD9D0E5(Local_63.f_1, 15))
		{
			unk_0xBE20AB8238688965(&(Local_63.f_3), 10);
			return 1;
		}
	}
	if (!func_6(bLocal_71, 0, 1))
	{
		if (bLocal_69 != 0 || !unk_0xCE990E643CD9D0E5(Local_63.f_2, true))
		{
			unk_0xBE20AB8238688965(&(Local_63.f_3), 4);
			return 1;
		}
	}
	else
	{
		if (func_43(bLocal_71, 129))
		{
			unk_0xBE20AB8238688965(&(Local_63.f_2), 13);
			unk_0xBE20AB8238688965(&(Local_63.f_3), 8);
			return 1;
		}
		if (func_43(bLocal_71, 131) || unk_0xCE990E643CD9D0E5(Global_1630317[bLocal_71 /*595*/].f_1, 11))
		{
			unk_0xBE20AB8238688965(&(Local_63.f_2), 13);
			unk_0xBE20AB8238688965(&(Local_63.f_2), 8);
			return 1;
		}
		if (func_43(bLocal_71, 136) || (func_42(PLAYER::PLAYER_ID(), 24) && func_41(bLocal_71)))
		{
			unk_0xBE20AB8238688965(&(Local_63.f_2), 8);
			return 1;
		}
		if (func_43(bLocal_71, 146))
		{
			unk_0xBE20AB8238688965(&(Local_63.f_2), 8);
			return 1;
		}
		if (func_40(PLAYER::PLAYER_ID()) && ((func_39(PLAYER::PLAYER_ID()) == 148 || func_39(PLAYER::PLAYER_ID()) == 142) || func_39(PLAYER::PLAYER_ID()) == 164))
		{
			unk_0xBE20AB8238688965(&(Local_63.f_2), 8);
			return 1;
		}
		if (func_39(PLAYER::PLAYER_ID()) == 153)
		{
			unk_0xBE20AB8238688965(&(Local_63.f_2), 8);
			return 1;
		}
		if (func_37(PLAYER::PLAYER_ID()) && func_39(PLAYER::PLAYER_ID()) == 170)
		{
			unk_0xBE20AB8238688965(&(Local_63.f_2), 8);
			return 1;
		}
		if (func_39(PLAYER::PLAYER_ID()) == 167)
		{
			unk_0xBE20AB8238688965(&(Local_63.f_2), 8);
			return 1;
		}
		if (func_39(PLAYER::PLAYER_ID()) == 168)
		{
			unk_0xBE20AB8238688965(&(Local_63.f_2), 8);
			return 1;
		}
		if (func_37(PLAYER::PLAYER_ID()) && func_39(PLAYER::PLAYER_ID()) == 238)
		{
			unk_0xBE20AB8238688965(&(Local_63.f_2), 8);
			return 1;
		}
		if (func_37(PLAYER::PLAYER_ID()) && func_39(PLAYER::PLAYER_ID()) == 249)
		{
			unk_0xBE20AB8238688965(&(Local_63.f_2), 8);
			return 1;
		}
		switch (func_34(PLAYER::PLAYER_ID()))
		{
			case 6:
			case 7:
				if (func_33())
				{
					unk_0xBE20AB8238688965(&(Local_63.f_2), 8);
					return 1;
				}
				break;
		}
		if (func_32(bLocal_71))
		{
			unk_0xBE20AB8238688965(&(Local_63.f_2), 8);
			return 1;
		}
		if (func_31(bLocal_71))
		{
			unk_0xBE20AB8238688965(&(Local_63.f_2), 8);
			return 1;
		}
		if (PED::IS_PED_IN_ANY_POLICE_VEHICLE(PLAYER::GET_PLAYER_PED(bLocal_71), 0))
		{
			if (bLocal_69 == 1)
			{
				if (unk_0xCE990E643CD9D0E5(Local_63.f_1, false))
				{
					unk_0xBE20AB8238688965(&(Local_63.f_3), 6);
					return 1;
				}
			}
		}
		else
		{
			if (bLocal_69 == 1)
			{
				if (func_43(bLocal_71, 146))
				{
					unk_0xBE20AB8238688965(&(Local_63.f_3), 7);
					return 1;
				}
				if (!unk_0xCE990E643CD9D0E5(Local_63.f_1, 16))
				{
					if (NETWORK::GET_TIME_DIFFERENCE(iLocal_74, Local_63.f_9) > func_30())
					{
						unk_0xBE20AB8238688965(&(Local_63.f_3), 7);
						return 1;
					}
				}
				if (func_27())
				{
					unk_0xBE20AB8238688965(&(Local_63.f_3), 7);
					return 1;
				}
				if (func_23(bLocal_71, func_12(bLocal_70), 1))
				{
					unk_0xBE20AB8238688965(&(Local_63.f_3), 7);
					return 1;
				}
			}
			if (fLocal_72 != AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT(DATAFILE::DATADICT_GET_ARRAY(bLocal_71)))
			{
				unk_0xBE20AB8238688965(&(Local_63.f_3), 5);
				return 1;
			}
		}
	}
	return 0;
}

bool func_23(bool bParam0, int iParam1, bool bParam2)
{
	return func_24(bParam0, iParam1, bParam2, 1);
}

int func_24(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (iParam1 != func_13() && iParam0 != func_13())
	{
		if (!bParam2)
		{
			if (func_26(iParam0, iParam1, iParam3))
			{
				return 0;
			}
		}
		if (Global_1630317[iParam0 /*595*/].f_11 != func_13())
		{
			if (iParam1 == Global_1630317[iParam0 /*595*/].f_11)
			{
				return func_25(iParam1, iParam3);
			}
		}
	}
	return 0;
}

int func_25(int iParam0, int iParam1)
{
	if (func_15(iParam0))
	{
		return Global_1630317[iParam0 /*595*/].f_11.f_423 == iParam1;
	}
	return 0;
}

int func_26(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 != func_13())
	{
		if (iParam0 != func_13())
		{
			if (Global_1630317[iParam0 /*595*/].f_11 != func_13())
			{
				if (Global_1630317[iParam0 /*595*/].f_11 == iParam0)
				{
					if (Global_1630317[iParam0 /*595*/].f_11.f_423 == iParam2)
					{
						return iParam1 == iParam0;
					}
				}
			}
		}
	}
	return 0;
}

int func_27()
{
	if (((func_29(bLocal_71, 1, 1) || func_42(bLocal_71, 0)) || func_42(bLocal_71, 7)) || func_28(bLocal_71))
	{
		return 1;
	}
	return 0;
}

bool func_28(bool bParam0)
{
	return Global_1590682[bParam0 /*883*/].f_196 != 0;
}

int func_29(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam0 == func_13())
	{
		return 0;
	}
	if (unk_0xCE990E643CD9D0E5(Global_1590682[bParam0 /*883*/].f_274.f_26, false))
	{
		return 1;
	}
	if (bParam1)
	{
		if (unk_0xCE990E643CD9D0E5(Global_1590682[bParam0 /*883*/].f_274.f_26, true))
		{
			return 1;
		}
	}
	if (bParam2)
	{
		if (Global_2425869[bParam0 /*443*/].f_314.f_6 != -1)
		{
			return 1;
		}
	}
	return 0;
}

int func_30()
{
	if (Local_63.f_52)
	{
		return 300000;
	}
	return 120000;
}

int func_31(bool bParam0)
{
	int iVar0;
	
	iVar0 = bParam0;
	if (iVar0 != -1)
	{
		return Global_1627436[iVar0 /*90*/].f_77.f_12 != 0;
	}
	return 0;
}

int func_32(bool bParam0)
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

bool func_33()
{
	return Global_1573342;
}

int func_34(bool bParam0)
{
	if (func_39(bParam0) == 243)
	{
		return func_35(bParam0);
	}
	return -1;
}

int func_35(bool bParam0)
{
	if (func_36(bParam0, 0))
	{
		return Global_1630317[bParam0 /*595*/].f_11.f_181;
	}
	return -1;
}

int func_36(bool bParam0, int iParam1)
{
	if (Global_1630317[bParam0 /*595*/].f_11.f_33 != -1 || (iParam1 && Global_1630317[bParam0 /*595*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_37(bool bParam0)
{
	int iVar0;
	
	iVar0 = bParam0;
	if (iVar0 != -1)
	{
		return func_38(bParam0, 9);
	}
	return 0;
}

bool func_38(int iParam0, bool bParam1)
{
	return unk_0xCE990E643CD9D0E5(Global_1630317[iParam0 /*595*/].f_11.f_4, iParam1);
}

int func_39(bool bParam0)
{
	if (func_36(bParam0, 0))
	{
		return Global_1630317[bParam0 /*595*/].f_11.f_33;
	}
	return -1;
}

int func_40(bool bParam0)
{
	if (func_15(bParam0))
	{
		if (func_37(bParam0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_41(bool bParam0)
{
	return unk_0xCE990E643CD9D0E5(Global_1630317[bParam0 /*595*/].f_1, 4);
}

bool func_42(bool bParam0, bool bParam1)
{
	return unk_0xCE990E643CD9D0E5(Global_2425869[bParam0 /*443*/].f_212, iParam1);
}

int func_43(bool bParam0, int iParam1)
{
	if (Global_1630317[bParam0 /*595*/] == iParam1)
	{
		return func_44(bParam0);
	}
	return 0;
}

int func_44(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0xCE990E643CD9D0E5(Global_1630317[iVar0 /*595*/].f_1, false);
	}
	return 0;
}

void func_45()
{
	func_56();
	if (bLocal_69 != 1)
	{
		func_2();
	}
	func_46();
}

void func_46()
{
	int iVar0;
	
	if (func_6(NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iLocal_76), 0, 1))
	{
		if (bLocal_69 == 1)
		{
			if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(bLocal_76) == bLocal_71)
			{
				if (!unk_0xCE990E643CD9D0E5(Local_63.f_1, 16))
				{
					if (unk_0xCE990E643CD9D0E5(Local_65[bLocal_76 /*5*/].f_1, 3))
					{
						unk_0xBE20AB8238688965(&(Local_63.f_1), 16);
					}
				}
			}
		}
		else
		{
			if (!unk_0xCE990E643CD9D0E5(Local_63.f_1, 11))
			{
				if (func_52(NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(bLocal_76)))
				{
					if (!unk_0xCE990E643CD9D0E5(Local_63.f_4, bLocal_76))
					{
						unk_0xBE20AB8238688965(&(Local_63.f_1), 11);
						unk_0xBE20AB8238688965(&(Local_63.f_4), bLocal_76);
					}
				}
				else if (unk_0xCE990E643CD9D0E5(Local_63.f_4, bLocal_76))
				{
					unk_0xBE20AB8238688965(&(Local_63.f_1), 11);
					VEHICLE::IS_VEHICLE_DRIVEABLE(&(Local_63.f_4), bLocal_76);
				}
			}
			else if (unk_0xCE990E643CD9D0E5(Local_65[bLocal_76 /*5*/].f_1, 2))
			{
				VEHICLE::IS_VEHICLE_DRIVEABLE(&(Local_63.f_1), 11);
			}
			if (bLocal_69 == 0)
			{
				if (unk_0xCE990E643CD9D0E5(Local_65[bLocal_76 /*5*/].f_1, false))
				{
					if (Local_65[bLocal_76 /*5*/].f_2 != -1)
					{
						if (!unk_0xCE990E643CD9D0E5(Local_63.f_2, true))
						{
							unk_0xBE20AB8238688965(&(Local_63.f_2), true);
							Local_63.f_42 = Local_65[bLocal_76 /*5*/].f_2;
							Local_63.f_43 = Local_65[bLocal_76 /*5*/].f_3;
							if (!func_51())
							{
								func_50();
							}
						}
					}
					else if (!unk_0xCE990E643CD9D0E5(Local_63.f_2, 9))
					{
						if (!func_51())
						{
							func_49();
						}
						iVar0 = 0;
						while (iVar0 < func_482(bLocal_69))
						{
							func_7(iVar0, 3);
							iVar0++;
						}
						unk_0xBE20AB8238688965(&(Local_63.f_2), 9);
						unk_0xBE20AB8238688965(&(Local_63.f_2), true);
					}
				}
				if (func_51())
				{
					if (!unk_0xCE990E643CD9D0E5(bLocal_66, 17))
					{
						if (unk_0xCE990E643CD9D0E5(Local_65[bLocal_76 /*5*/].f_1, 5))
						{
							func_50();
							unk_0xBE20AB8238688965(&bLocal_66, 17);
						}
						else if (unk_0xCE990E643CD9D0E5(Local_65[bLocal_76 /*5*/].f_1, 6))
						{
							func_49();
							unk_0xBE20AB8238688965(&bLocal_66, 17);
						}
					}
				}
				if (!unk_0xCE990E643CD9D0E5(Local_65[bLocal_76 /*5*/].f_1, true))
				{
					if (!unk_0xCE990E643CD9D0E5(bLocal_66, 3))
					{
						unk_0xBE20AB8238688965(&bLocal_66, 3);
					}
				}
				else if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(bLocal_76) == bLocal_71)
				{
					if (bLocal_69 == 0)
					{
						if (!unk_0xCE990E643CD9D0E5(Local_63.f_2, true))
						{
							if (!unk_0xCE990E643CD9D0E5(Local_63.f_2, 6))
							{
								unk_0xBE20AB8238688965(&(Local_63.f_2), 6);
							}
						}
					}
				}
			}
		}
	}
	bLocal_76++;
	if (bLocal_76 >= 32)
	{
		bLocal_76 = false;
		if (bLocal_69 == 0)
		{
			if (!unk_0xCE990E643CD9D0E5(bLocal_66, 3))
			{
				func_48();
			}
			else
			{
				func_47();
			}
			VEHICLE::IS_VEHICLE_DRIVEABLE(&bLocal_66, 3);
		}
	}
}

void func_47()
{
	if (unk_0xCE990E643CD9D0E5(Local_63.f_2, 3))
	{
		VEHICLE::IS_VEHICLE_DRIVEABLE(&(Local_63.f_2), 3);
	}
}

void func_48()
{
	if (!unk_0xCE990E643CD9D0E5(Local_63.f_2, 3))
	{
		Local_63.f_6 = iLocal_74;
		unk_0xBE20AB8238688965(&(Local_63.f_2), 3);
	}
}

void func_49()
{
	struct<14> Var0;
	
	Var0.f_2 = -951301729;
	Var0.f_10 = bLocal_71;
	Var0.f_11 = bLocal_70;
	func_20(Var0, func_21(1));
}

void func_50()
{
	struct<14> Var0;
	
	Var0.f_2 = 860051171;
	Var0.f_10 = bLocal_71;
	Var0.f_11 = bLocal_70;
	if (func_482(bLocal_69) > 1)
	{
		Var0.f_12 = NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(true);
	}
	else
	{
		Var0.f_12 = NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(false);
	}
	Var0.f_3 = Local_63.f_43;
	func_20(Var0, func_21(1));
}

int func_51()
{
	if (ENTITY::GET_ENTITY_HEADING())
	{
		return NETSHOPPING::_NET_GAMESERVER_USE_SERVER_TRANSACTIONS();
	}
	return 0;
}

bool func_52(bool bParam0)
{
	if (bParam0 == PLAYER::PLAYER_ID())
	{
		return func_55();
	}
	return unk_0xCE990E643CD9D0E5(Global_1377236.f_241.f_136[func_54(10) /*33*/][bParam0], func_53(10));
}

int func_53(int iParam0)
{
	return (iParam0 % 32);
}

int func_54(int iParam0)
{
	return (iParam0 / 32);
}

var func_55()
{
	return Global_1312436;
}

void func_56()
{
	int iVar0;
	
	if (bLocal_69 == 0)
	{
		if (unk_0xCE990E643CD9D0E5(Local_63.f_2, 3))
		{
			if (NETWORK::GET_TIME_DIFFERENCE(iLocal_74, Local_63.f_6) > 10000)
			{
				if (unk_0xCE990E643CD9D0E5(Local_63.f_2, true))
				{
					unk_0xBE20AB8238688965(&(Local_63.f_2), 2);
				}
			}
		}
		if (unk_0xCE990E643CD9D0E5(Local_63.f_1, 8))
		{
			if (!unk_0xCE990E643CD9D0E5(Local_63.f_2, true))
			{
				if (func_60())
				{
					unk_0xBE20AB8238688965(&(Local_63.f_2), 6);
					func_59();
				}
			}
		}
		if (!unk_0xCE990E643CD9D0E5(Local_63.f_1, false))
		{
			if (func_6(bLocal_71, 1, 1))
			{
				iVar0 = PLAYER::GET_PLAYER_PED(bLocal_71);
				if (func_58(iVar0))
				{
					func_251(iVar0);
				}
			}
		}
		if (!unk_0xCE990E643CD9D0E5(Local_63.f_2, true))
		{
			if (!func_6(bLocal_71, 1, 1) || func_28(bLocal_71))
			{
				unk_0xBE20AB8238688965(&(Local_63.f_1), 15);
			}
		}
	}
	if (unk_0xCE990E643CD9D0E5(Local_63.f_1, false))
	{
		if (unk_0xCE990E643CD9D0E5(Local_63.f_1, 5))
		{
			if (!unk_0xCE990E643CD9D0E5(Local_63.f_1, 4))
			{
				if (NETWORK::GET_TIME_DIFFERENCE(iLocal_74, Local_63.f_5) > 600000)
				{
					unk_0xBE20AB8238688965(&(Local_63.f_1), 4);
				}
			}
		}
		if (!unk_0xCE990E643CD9D0E5(Local_63.f_3, 12))
		{
			if (func_57())
			{
				unk_0xBE20AB8238688965(&(Local_63.f_3), 12);
			}
		}
	}
}

int func_57()
{
	switch (Local_63.f_10[0 /*7*/].f_1)
	{
		case 0:
			if (Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_745 == 0)
			{
				return 1;
			}
			break;
		
		case 1:
			if (Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_745 == 1)
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_58(int iParam0)
{
	if (STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(iParam0))
	{
	}
	if (unk_0xCE990E643CD9D0E5(Local_63.f_1, 17))
	{
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
		{
			return 1;
		}
	}
	if (!func_5(Local_63.f_36, NETWORK::NETWORK_ARE_HANDLES_THE_SAME(iParam0, 1), 625f))
	{
		return 1;
	}
	return 0;
}

void func_59()
{
	func_511();
	Local_63 = 0;
}

int func_60()
{
	if ((((((((unk_0xCE990E643CD9D0E5(Local_63.f_2, 6) || PLAYER::IS_PLAYER_DEAD(bLocal_71)) || func_29(bLocal_71, 1, 1)) || func_62(bLocal_71)) || func_42(bLocal_71, 0)) || func_42(bLocal_71, 7)) || func_28(bLocal_71)) || Global_2425869[bLocal_71 /*443*/].f_242) || func_61(PLAYER::GET_PLAYER_PED(bLocal_71), joaat("titan")))
	{
		return 1;
	}
	if (bLocal_71 != -1)
	{
		if (unk_0xCE990E643CD9D0E5(Local_65[bLocal_71 /*5*/].f_1, 4))
		{
			return 1;
		}
	}
	return 0;
}

int func_61(int iParam0, int iParam1)
{
	int iVar0;
	
	if (MISC::IS_BIT_SET(iParam0))
	{
		if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(iParam0))
		{
			if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(iParam0))
			{
				iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0, 0);
				if (MISC::IS_BIT_SET(iVar0))
				{
					if (MISC::GET_MODEL_DIMENSIONS(iVar0) == iParam1)
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_62(bool bParam0)
{
	if (unk_0xCE990E643CD9D0E5(Global_1590682[bParam0 /*883*/].f_274.f_26, 14))
	{
		return 1;
	}
	if (unk_0xCE990E643CD9D0E5(Global_1590682[bParam0 /*883*/].f_274.f_26, 11))
	{
		return 1;
	}
	return 0;
}

void func_63()
{
	if (!unk_0xCE990E643CD9D0E5(Local_63.f_1, 5))
	{
		Local_63.f_5 = iLocal_74;
		unk_0xBE20AB8238688965(&(Local_63.f_1), 5);
	}
}

void func_64()
{
	if (unk_0xCE990E643CD9D0E5(Local_63.f_1, 5))
	{
		VEHICLE::IS_VEHICLE_DRIVEABLE(&(Local_63.f_1), 5);
	}
}

int func_65()
{
	bool bVar0;
	
	if (unk_0xCE990E643CD9D0E5(Local_63.f_1, false))
	{
		return 0;
	}
	else
	{
		bVar0 = false;
		if (func_253())
		{
			if (bLocal_69 == 1)
			{
				bVar0 = true;
			}
			else if (func_248())
			{
				if (func_245())
				{
					if (func_244())
					{
						bVar0 = true;
					}
					else if (func_242(func_243(bLocal_69)))
					{
						if (func_71())
						{
							bVar0 = true;
						}
					}
				}
			}
		}
		if (bVar0)
		{
			func_63();
			if (func_66())
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_66()
{
	int iVar0;
	
	iVar0 = 0;
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		if (unk_0xCE990E643CD9D0E5(Local_63.f_1, false))
		{
			return 1;
		}
		else
		{
			switch (bLocal_69)
			{
				case 0:
					iVar0 = 0;
					while (iVar0 < func_482(bLocal_69))
					{
						if ((!HUD::DOES_BLIP_EXIST(Local_63.f_10[iVar0 /*7*/]) && !unk_0xCE990E643CD9D0E5(Local_63.f_10[iVar0 /*7*/].f_2, true)) && !unk_0xCE990E643CD9D0E5(Local_63.f_10[iVar0 /*7*/].f_2, 6))
						{
							func_67(iVar0, func_70(bLocal_69), Local_63.f_32, Local_63.f_35);
						}
						iVar0++;
					}
					break;
			}
			if (bLocal_69 != 1)
			{
				iVar0 = 0;
				while (iVar0 < func_482(bLocal_69))
				{
					if (!HUD::DOES_BLIP_EXIST(Local_63.f_10[iVar0 /*7*/]))
					{
						if (!unk_0xCE990E643CD9D0E5(Local_63.f_10[iVar0 /*7*/].f_2, 6))
						{
							return 0;
						}
					}
					iVar0++;
				}
			}
			unk_0xBE20AB8238688965(&bLocal_66, true);
			unk_0xBE20AB8238688965(&bLocal_66, 2);
			unk_0xBE20AB8238688965(&bLocal_66, 3);
			unk_0xBE20AB8238688965(&bLocal_66, 4);
			unk_0xBE20AB8238688965(&(Local_63.f_1), false);
			unk_0xBE20AB8238688965(&Global_1655301, bLocal_69);
			return 1;
		}
	}
	return 0;
}

void func_67(int iParam0, var uParam1, struct<3> Param2, float fParam3)
{
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		if (!HUD::DOES_BLIP_EXIST(Local_63.f_10[iParam0 /*7*/]))
		{
			if (NETWORK::GET_NUM_CREATED_MISSION_PEDS(false) < MISC::ARE_PROFILE_SETTINGS_VALID(false, 0))
			{
				if (NETWORK::CAN_REGISTER_MISSION_PEDS(1))
				{
					if (func_242(func_243(bLocal_69)))
					{
						if (func_69(&(Local_63.f_10[iParam0 /*7*/]), 7, func_243(bLocal_69), Param2, fParam3, 1, 1, 1))
						{
							Local_63.f_10[iParam0 /*7*/].f_1 = bLocal_69;
							Local_63.f_10[iParam0 /*7*/].f_4 = uParam1;
							func_68(iParam0);
						}
					}
				}
			}
		}
	}
}

void func_68(int iParam0)
{
	char cVar0[16];
	
	if (!unk_0xCE990E643CD9D0E5(Local_63.f_10[iParam0 /*7*/].f_2, true))
	{
		if (!PED::IS_PED_IN_ANY_POLICE_VEHICLE(NETWORK::NET_TO_PED(Local_63.f_10[iParam0 /*7*/]), 0))
		{
			if (Local_63.f_10[iParam0 /*7*/].f_4 == 0)
			{
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(NETWORK::NET_TO_PED(Local_63.f_10[iParam0 /*7*/]), Global_1575008);
				unk_0xDE7C7B8F0806F931(NETWORK::NET_TO_PED(Local_63.f_10[iParam0 /*7*/]), 1);
				TASK::SET_PED_PATH_PREFER_TO_AVOID_WATER(NETWORK::NET_TO_PED(Local_63.f_10[iParam0 /*7*/]), false);
			}
			ENTITY::SET_ENTITY_PROOFS(NETWORK::NET_TO_PED(Local_63.f_10[iParam0 /*7*/]), false, false, false, false, false, false, true, false);
			PED::SET_PED_COMBAT_ABILITY(NETWORK::NET_TO_PED(Local_63.f_10[iParam0 /*7*/]), 2);
			PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_63.f_10[iParam0 /*7*/]), 13, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_63.f_10[iParam0 /*7*/]), 41, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_63.f_10[iParam0 /*7*/]), 20, true);
			PLAYER::SET_PLAYER_VEHICLE_DEFENSE_MODIFIER(NETWORK::NET_TO_PED(Local_63.f_10[iParam0 /*7*/]), 1.849714E-43f, 1);
			PLAYER::SET_PLAYER_VEHICLE_DEFENSE_MODIFIER(NETWORK::NET_TO_PED(Local_63.f_10[iParam0 /*7*/]), 1.653532E-43f, 0);
			PLAYER::SET_PLAYER_VEHICLE_DEFENSE_MODIFIER(NETWORK::NET_TO_PED(Local_63.f_10[iParam0 /*7*/]), 4.358038E-43f, 1);
			PED::SET_PED_TO_INFORM_RESPECTED_FRIENDS(NETWORK::NET_TO_PED(Local_63.f_10[iParam0 /*7*/]), 300f, 10);
			PED::SET_PED_KEEP_TASK(NETWORK::NET_TO_PED(Local_63.f_10[iParam0 /*7*/]), true);
			StringCopy(&cVar0, "gang ", 16);
			StringIntConCat(&cVar0, iParam0, 16);
			PED::SET_PED_NAME_DEBUG(NETWORK::NET_TO_PED(Local_63.f_10[iParam0 /*7*/]), &cVar0);
			switch (Local_63.f_10[iParam0 /*7*/].f_4)
			{
				case 0:
					func_7(iParam0, 1);
					PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_63.f_10[iParam0 /*7*/]), 0, false);
					PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_63.f_10[iParam0 /*7*/]), 2, false);
					PED::SET_PED_COMBAT_MOVEMENT(NETWORK::NET_TO_PED(Local_63.f_10[iParam0 /*7*/]), 2);
					PED::SET_PED_COMBAT_RANGE(NETWORK::NET_TO_PED(Local_63.f_10[iParam0 /*7*/]), 0);
					PED::SET_PED_USING_ACTION_MODE(NETWORK::NET_TO_PED(Local_63.f_10[iParam0 /*7*/]), false, -1, 0);
					PLAYER::SET_PLAYER_VEHICLE_DEFENSE_MODIFIER(NETWORK::NET_TO_PED(Local_63.f_10[iParam0 /*7*/]), 4.484155E-44f, 1);
					PED::SET_PED_FLEE_ATTRIBUTES(NETWORK::NET_TO_PED(Local_63.f_10[iParam0 /*7*/]), 4, false);
					PED::SET_PED_FLEE_ATTRIBUTES(NETWORK::NET_TO_PED(Local_63.f_10[iParam0 /*7*/]), 1024, true);
					PED::SET_PED_FLEE_ATTRIBUTES(NETWORK::NET_TO_PED(Local_63.f_10[iParam0 /*7*/]), 128, true);
					PED::SET_PED_FLEE_ATTRIBUTES(NETWORK::NET_TO_PED(Local_63.f_10[iParam0 /*7*/]), 32, false);
					PED::SET_PED_FLEE_ATTRIBUTES(NETWORK::NET_TO_PED(Local_63.f_10[iParam0 /*7*/]), 8, false);
					PED::SET_PED_FLEE_ATTRIBUTES(NETWORK::NET_TO_PED(Local_63.f_10[iParam0 /*7*/]), 64, false);
					PED::SET_PED_FLEE_ATTRIBUTES(NETWORK::NET_TO_PED(Local_63.f_10[iParam0 /*7*/]), 256, true);
					PED::SET_PED_FLEE_ATTRIBUTES(NETWORK::NET_TO_PED(Local_63.f_10[iParam0 /*7*/]), 1, false);
					PED::SET_PED_FLEE_ATTRIBUTES(NETWORK::NET_TO_PED(Local_63.f_10[iParam0 /*7*/]), 2, true);
					PED::SET_PED_FLEE_ATTRIBUTES(NETWORK::NET_TO_PED(Local_63.f_10[iParam0 /*7*/]), 16, true);
					if (!unk_0xCE990E643CD9D0E5(Local_63.f_10[iParam0 /*7*/].f_2, false))
					{
						unk_0xBE20AB8238688965(&(Local_63.f_10[iParam0 /*7*/].f_2), 2);
					}
					PED::SET_PED_FLEE_ATTRIBUTES(NETWORK::NET_TO_PED(Local_63.f_10[iParam0 /*7*/]), 512, true);
					PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_63.f_10[iParam0 /*7*/]), 17, false);
					unk_0x92BD213E6A0E666B(NETWORK::NET_TO_PED(Local_63.f_10[iParam0 /*7*/]), joaat("weapon_knife"), 1, 1, 1);
					PED::SET_PED_MONEY(NETWORK::NET_TO_PED(Local_63.f_10[iParam0 /*7*/]), 0);
					TASK::TASK_LOOK_AT_ENTITY(NETWORK::NET_TO_PED(Local_63.f_10[iParam0 /*7*/]), PLAYER::GET_PLAYER_PED(bLocal_71), -1, 0, 2);
					NETWORK::_0x3FA36981311FA4FF(Local_63.f_10[iParam0 /*7*/], true);
					break;
			}
			CAM::IS_AIM_CAM_ACTIVE(NETWORK::NET_TO_PED(Local_63.f_10[iParam0 /*7*/]), SYSTEM::ROUND((Global_262145.f_154 * IntToFloat(ENTITY::GET_ENTITY_HEALTH(NETWORK::NET_TO_PED(Local_63.f_10[iParam0 /*7*/]))))), 0);
			if (!unk_0xCE990E643CD9D0E5(Local_63.f_1, 8))
			{
				unk_0xBE20AB8238688965(&(Local_63.f_1), 8);
			}
			unk_0xBE20AB8238688965(&(Local_63.f_10[iParam0 /*7*/].f_2), true);
		}
	}
}

int func_69(var uParam0, int iParam1, int iParam2, struct<3> Param3, float fParam4, bool bParam5, bool bParam6, bool bParam7)
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

int func_70(bool bParam0)
{
	switch (bParam0)
	{
		case 0:
			return 0;
			break;
	}
	return 0;
}

int func_71()
{
	struct<6> Var0;
	
	if (unk_0xCE990E643CD9D0E5(Local_63.f_1, 3))
	{
		return 1;
	}
	else
	{
		switch (bLocal_69)
		{
			case 0:
				if (AUDIO::PLAY_STREAM_FROM_VEHICLE(bLocal_71) && func_6(bLocal_71, 1, 1))
				{
					Var0.f_5 = 1115815936;
					Var0.f_13 = 2;
					Var0.f_20 = 2;
					Var0.f_32 = -1082130432;
					Var0.f_34 = 1;
					Var0 = { NETWORK::NETWORK_ARE_HANDLES_THE_SAME(PLAYER::GET_PLAYER_PED(bLocal_71), 1) };
					Var0.f_5 = 20f;
					if (func_72(Local_63.f_36, 40f, &(Local_63.f_32), &(Local_63.f_35), &Var0))
					{
						unk_0xBE20AB8238688965(&(Local_63.f_1), 3);
						return 1;
					}
				}
				else
				{
					unk_0xD30526FDC02B7349();
					unk_0x4A4DC4626419A059();
					if (Global_2405074.f_2466)
					{
						PATHFIND::REMOVE_NAVMESH_REQUIRED_REGIONS();
						Global_2405074.f_2466 = 0;
					}
				}
				break;
			}
	}
	return 0;
}

int func_72(struct<3> Param0, float fParam1, var uParam2, var uParam3, var uParam4)
{
	struct<17> Var0;
	struct<18> Var1;
	struct<3> Var2;
	
	if (uParam4->f_5 > (fParam1 - 20f))
	{
		uParam4->f_5 = (fParam1 - 20f);
	}
	Var0 = 5;
	Var0.f_16 = 5;
	Var0.f_22 = 5;
	Var0.f_28 = 5;
	Var1.f_16 = 1;
	Var1.f_22 = 1;
	Var1.f_23 = 1;
	Var1.f_24 = 1;
	Var1.f_28 = -1;
	Var1 = { Param0 };
	Var1.f_3 = uParam4->f_11;
	Var1.f_4 = fParam1;
	Var1.f_5 = 0;
	Var1.f_6 = 1;
	Var1.f_7 = 0;
	Var1.f_15 = 0;
	Var1.f_16 = 1;
	Var1.f_17 = 0;
	if (func_73(&Var1, uParam4, &Var0))
	{
		if ((uParam4->f_12 > 0f && uParam4->f_7) && uParam4->f_8)
		{
			Var2 = { Param0 - Var0[0 /*3*/] };
			if (Var2.f_2 > uParam4->f_12)
			{
				Var0[0 /*3*/] = { Param0 };
				Var0.f_16[0] = uParam4->f_11;
			}
		}
		*uParam2 = { Var0[0 /*3*/] };
		*uParam3 = Var0.f_16[0];
		return 1;
	}
	return 0;
}

int func_73(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	struct<3> Var1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	struct<3> Var6;
	struct<3> Var7;
	struct<3> Var8;
	int iVar9;
	struct<3> Var10;
	struct<3> Var11;
	var uVar12;
	bool bVar13;
	struct<56> Var14;
	bool bVar15;
	
	bVar13 = false;
	switch (uParam0->f_7)
	{
		case 0:
			if (((!Global_2405074.f_2460 == *uParam0 || !Global_2405074.f_2460.f_1 == uParam0->f_1) || !Global_2405074.f_2460.f_2 == uParam0->f_2) || !Global_2405074.f_2463 == uParam0->f_4)
			{
				bVar13 = true;
			}
			break;
		
		case 1:
			if (((((!Global_2405074.f_2474 == uParam0->f_8 || !Global_2405074.f_2474.f_1 == uParam0->f_8.f_1) || !Global_2405074.f_2474.f_2 == uParam0->f_8.f_2) || !Global_2405074.f_2477 == uParam0->f_11) || !Global_2405074.f_2477.f_1 == uParam0->f_11.f_1) || !Global_2405074.f_2477.f_2 == uParam0->f_11.f_2)
			{
				bVar13 = true;
			}
			break;
		
		case 2:
			if ((((((!Global_2405074.f_2474 == uParam0->f_8 || !Global_2405074.f_2474.f_1 == uParam0->f_8.f_1) || !Global_2405074.f_2474.f_2 == uParam0->f_8.f_2) || !Global_2405074.f_2477 == uParam0->f_11) || !Global_2405074.f_2477.f_1 == uParam0->f_11.f_1) || !Global_2405074.f_2477.f_2 == uParam0->f_11.f_2) || !Global_2405074.f_2480 == uParam0->f_14)
			{
				bVar13 = true;
			}
			break;
	}
	if (Global_1312333)
	{
		if (!Global_2405074.f_2481 == uParam0->f_7)
		{
			bVar13 = true;
		}
		if (SCRIPT::IS_THREAD_ACTIVE(Global_2405074.f_2467) && !Global_2405074.f_2467 == SCRIPT::GET_ID_OF_THIS_THREAD())
		{
			bVar13 = true;
		}
	}
	if (bVar13)
	{
		if (Global_2405074.f_2458 == 1)
		{
			if (SCRIPT::IS_THREAD_ACTIVE(Global_2405074.f_2467))
			{
				if (Global_2405074.f_2467 == SCRIPT::GET_ID_OF_THIS_THREAD())
				{
					if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2405074.f_2464) < func_241(0))
					{
						return 0;
					}
				}
				else if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2405074.f_2464) < func_241(0))
				{
					return 0;
				}
			}
			unk_0xD30526FDC02B7349();
			unk_0x4A4DC4626419A059();
			func_240();
		}
		Global_2405074.f_2458 = 0;
	}
	else if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2405074.f_2464) > func_241(0))
	{
		Global_2405074.f_2465 = NETWORK::GET_NETWORK_TIME();
		func_234();
	}
	switch (uParam0->f_7)
	{
		case 0:
			fVar2 = (*uParam0 - uParam0->f_4);
			fVar3 = (uParam0->f_1 - uParam0->f_4);
			fVar4 = (*uParam0 + uParam0->f_4);
			fVar5 = (uParam0->f_1 + uParam0->f_4);
			break;
		
		case 1:
			if (uParam0->f_8 < uParam0->f_11)
			{
				fVar2 = uParam0->f_8;
				fVar4 = uParam0->f_11;
			}
			else
			{
				fVar2 = uParam0->f_11;
				fVar4 = uParam0->f_8;
			}
			if (uParam0->f_8.f_1 < uParam0->f_11.f_1)
			{
				fVar3 = uParam0->f_8.f_1;
				fVar5 = uParam0->f_11.f_1;
			}
			else
			{
				fVar3 = uParam0->f_11.f_1;
				fVar5 = uParam0->f_8.f_1;
			}
			break;
		
		case 2:
			if (uParam0->f_8 < uParam0->f_11)
			{
				fVar2 = (uParam0->f_8 - (0.5f * uParam0->f_14));
				fVar4 = (uParam0->f_11 + (0.5f * uParam0->f_14));
			}
			else
			{
				fVar2 = (uParam0->f_11 - (0.5f * uParam0->f_14));
				fVar4 = (uParam0->f_8 + (0.5f * uParam0->f_14));
			}
			if (uParam0->f_8.f_1 < uParam0->f_11.f_1)
			{
				fVar3 = (uParam0->f_8.f_1 - (0.5f * uParam0->f_14));
				fVar5 = (uParam0->f_11.f_1 + (0.5f * uParam0->f_14));
			}
			else
			{
				fVar3 = (uParam0->f_11.f_1 - (0.5f * uParam0->f_14));
				fVar5 = (uParam0->f_8.f_1 + (0.5f * uParam0->f_14));
			}
			break;
	}
	PATHFIND::_0x07FB139B592FA687(fVar2, fVar3, fVar4, fVar5);
	if (uParam0->f_7 == 0)
	{
		Var6 = { *uParam0 };
	}
	else
	{
		Var6 = { uParam0->f_8 + uParam0->f_11 * Vector(0.5f, 0.5f, 0.5f) };
	}
	Var7 = { Var6 + Vector(-0.1f, -0.1f, -0.1f) };
	Var8 = { Var6 + Vector(0.1f, 0.1f, 0.1f) };
	if (!Global_2405074.f_2458)
	{
		unk_0xD30526FDC02B7349();
		unk_0x4A4DC4626419A059();
		func_240();
		if (uParam1->f_7 && uParam0->f_7 == 0)
		{
			if (SYSTEM::VMAG(*uParam0) > 0f)
			{
				if (func_233(*uParam0, 6f, 1f, 1f, 5f, 1, 1, 1, 120f, 0, -1, 1, uParam1->f_5, uParam0->f_17, 0, 0, 0))
				{
					*(uParam2[0 /*3*/]) = { *uParam0 };
					uParam2->f_16[0] = uParam0->f_3;
					return 1;
				}
			}
		}
		if (!unk_0x1B1C5BD8506FCF84())
		{
			Global_2405074.f_2481 = uParam0->f_7;
			switch (uParam0->f_7)
			{
				case 0:
					Global_2405074.f_2460 = { *uParam0 };
					Global_2405074.f_2463 = uParam0->f_4;
					break;
				
				case 1:
					Global_2405074.f_2474 = { uParam0->f_8 };
					Global_2405074.f_2477 = { uParam0->f_11 };
					Global_2405074.f_2480 = 0f;
					Global_2405074.f_2460 = { uParam0->f_8 + uParam0->f_11 / Vector(2f, 2f, 2f) };
					break;
				
				case 2:
					Global_2405074.f_2474 = { uParam0->f_8 };
					Global_2405074.f_2477 = { uParam0->f_11 };
					Global_2405074.f_2480 = uParam0->f_14;
					Global_2405074.f_2460 = { uParam0->f_8 + uParam0->f_11 / Vector(2f, 2f, 2f) };
					break;
			}
			if (!uParam1->f_8 && !uParam1->f_9)
			{
				func_232(Var6.x, Var6.f_1);
			}
			Global_2405074.f_2459 = 1;
			Global_2405074.f_2458 = 1;
			Global_2405074.f_2465 = NETWORK::GET_NETWORK_TIME();
			Global_2405074.f_2464 = NETWORK::GET_NETWORK_TIME();
			Global_2405074.f_2467 = SCRIPT::GET_ID_OF_THIS_THREAD();
		}
		else
		{
			return 0;
		}
	}
	if (Global_2405074.f_2458)
	{
		if (Global_2405074.f_2459 == 1)
		{
			if (PATHFIND::_ARE_PATH_NODES_LOADED_IN_AREA(fVar2, fVar3, fVar4, fVar5) || NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2405074.f_2465) > 5000)
			{
				Global_2405074.f_2465 = NETWORK::GET_NETWORK_TIME();
				if (uParam1->f_8 || uParam1->f_9)
				{
					if (uParam0->f_21)
					{
						*(uParam2[0 /*3*/]) = { uParam0->f_18 };
					}
					else
					{
						*(uParam2[0 /*3*/]) = { Var6 };
					}
					Var14.f_6 = 1082130432;
					Var14.f_7 = 1176255488;
					Var14.f_8 = 1;
					Var14.f_10 = 1;
					Var14.f_13 = 1;
					Var14.f_15 = 1;
					Var14.f_16 = 1;
					Var14.f_31 = 1;
					Var14.f_34 = joaat("tailgater");
					Var14.f_38 = 2;
					Var14.f_45 = 2;
					Var14.f_49 = 1123024896;
					Var14.f_53 = 999;
					Var14.f_54 = 1176256410;
					Var14.f_55 = 1;
					Var14.f_56 = 1;
					Var14.f_57 = 1;
					Var14 = { *uParam1 };
					Var14.f_3 = uParam1->f_5;
					Var14.f_11 = uParam1->f_9;
					Var14.f_18 = 1;
					if (uParam1->f_32 > 0f)
					{
						Var14.f_6 = uParam1->f_32;
					}
					switch (uParam0->f_7)
					{
						case 0:
							Var14.f_19 = { *uParam0 };
							Var14.f_25 = uParam0->f_4;
							break;
						
						case 1:
							Var14.f_19 = { uParam0->f_8 };
							Var14.f_22 = { uParam0->f_11 };
							Var14.f_25 = 0f;
							break;
						
						case 2:
							Var14.f_19 = { uParam0->f_8 };
							Var14.f_22 = { uParam0->f_11 };
							Var14.f_25 = uParam0->f_14;
							break;
					}
					Var14.f_26 = uParam0->f_7;
					Var14.f_12 = uParam0->f_15;
					if (uParam0->f_21)
					{
						Var14.f_30 = 1;
						Var14.f_32 = 1;
					}
					iVar9 = 0;
					while (iVar9 < 2)
					{
						Var14.f_38[iVar9 /*3*/] = { uParam1->f_13[iVar9 /*3*/] };
						Var14.f_45[iVar9] = uParam1->f_20[iVar9];
						iVar9++;
					}
					Var14.f_51 = uParam1->f_30;
					Var14.f_55 = uParam0->f_16;
					if (uParam0->f_26)
					{
						Var14.f_10 = 0;
					}
					if (func_231(Global_4456448.f_129348))
					{
						Var14.f_9 = 1;
					}
					func_204(uParam2[0 /*3*/], &(uParam2->f_16[0]), &Var14);
					if ((uParam1->f_7 && uParam1->f_9) && uParam0->f_7 == 0)
					{
						if (!func_203(*(uParam2[0 /*3*/]), *uParam0, uParam0->f_4, 1, 1))
						{
							*(uParam2[0 /*3*/]) = { *uParam0 };
							uParam2->f_16[0] = uParam0->f_3;
						}
					}
					Global_2405074.f_2459 = 9;
				}
				else
				{
					Global_2405074.f_2459 = 2;
				}
			}
		}
		if (Global_2405074.f_2459 == 2)
		{
			if ((unk_0x4A0F5B17D75129C9(Var7, Var8) || NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2405074.f_2465) > 15000) || unk_0xA7FA5002ECC3057F(Var7, Var8) == 0)
			{
				Global_2405074.f_2465 = NETWORK::GET_NETWORK_TIME();
				if (uParam0->f_5 && !func_200(PLAYER::PLAYER_ID(), 0))
				{
					Global_2405074.f_2459 = 3;
				}
				else
				{
					Global_2405074.f_2459 = 4;
				}
			}
			else if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2405074.f_2469) > 7000)
			{
				func_199(Var6.x, Var6.f_1);
			}
		}
		if (Global_2405074.f_2459 == 3)
		{
			if (func_198() || NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2405074.f_2465) > 10000)
			{
				Global_2405074.f_2465 = NETWORK::GET_NETWORK_TIME();
				Global_2405074.f_2459 = 4;
			}
		}
		if (Global_2405074.f_2459 == 4)
		{
			if (unk_0x1B1C5BD8506FCF84())
			{
				unk_0xD30526FDC02B7349();
				unk_0x4A4DC4626419A059();
			}
			else
			{
				iVar0 = 0;
				func_234();
				if (uParam0->f_5)
				{
					if (SYSTEM::VMAG(*uParam1) == 0f)
					{
						iVar0 += 2;
					}
					if (uParam1->f_3)
					{
						iVar0 += 8;
					}
					iVar0 += 16;
					iVar0 += 32;
					if (!unk_0x6CC163E30ECE0790(PLAYER::PLAYER_ID()) == -1)
					{
						iVar0 += 64;
						iVar0 += 128;
						iVar0 += 256;
					}
					iVar0 += 2048;
					iVar0 += 512;
					iVar0 += 1024;
					switch (uParam0->f_7)
					{
						case 0:
							if (unk_0x9B02A1F590CDE09E(PLAYER::PLAYER_ID(), *uParam0, uParam0->f_4, *uParam1, iVar0))
							{
								Global_2405074.f_2465 = NETWORK::GET_NETWORK_TIME();
								Global_2405074.f_2459 = 5;
							}
							break;
						
						case 1:
							func_197(uParam0->f_8, uParam0->f_11, &Var10, &Var11, &uVar12);
							if (unk_0x8A8CC6889DD09116(PLAYER::PLAYER_ID(), Var10, Var11, uVar12, *uParam1, iVar0))
							{
								Global_2405074.f_2465 = NETWORK::GET_NETWORK_TIME();
								Global_2405074.f_2459 = 5;
							}
							break;
						
						case 2:
							if (unk_0x8A8CC6889DD09116(PLAYER::PLAYER_ID(), uParam0->f_8, uParam0->f_11, uParam0->f_14, *uParam1, iVar0))
							{
								Global_2405074.f_2465 = NETWORK::GET_NETWORK_TIME();
								Global_2405074.f_2459 = 5;
							}
							break;
					}
				}
				else
				{
					if (uParam1->f_3)
					{
						iVar0++;
					}
					iVar0 += 2;
					if (uParam1->f_10)
					{
						iVar0 += 32;
					}
					Global_2405074.f_2465 = NETWORK::GET_NETWORK_TIME();
					Global_2405074.f_2459 = 5;
					switch (uParam0->f_7)
					{
						case 0:
							unk_0x3E31C04CCF06119B(*uParam0, uParam0->f_4, 5f, iVar0, 2f, 5000);
							break;
						
						case 1:
							func_197(uParam0->f_8, uParam0->f_11, &Var10, &Var11, &uVar12);
							unk_0xDFBD9C6F251026AD(Var10, Var11, uVar12, iVar0, 2f, 5000);
							break;
						
						case 2:
							unk_0xDFBD9C6F251026AD(uParam0->f_8, uParam0->f_11, uParam0->f_14, iVar0, 2f, 5000);
							break;
						}
					}
				}
		}
		if (Global_2405074.f_2459 == 5)
		{
			if (func_126(uParam2, uParam0, uParam1, 0))
			{
				if (Global_2405074.f_2485.f_5)
				{
					Global_2405074.f_2465 = NETWORK::GET_NETWORK_TIME();
					Global_2405074.f_2459 = 6;
				}
				else
				{
					Global_2405074.f_2465 = NETWORK::GET_NETWORK_TIME();
					if (!uParam0->f_5)
					{
						if (!SYSTEM::VMAG(*uParam1) == 0f)
						{
							Var1 = { *uParam1 - *(uParam2[0 /*3*/]) };
							uParam2->f_16[0] = unk_0x9075769DD4F148B7(Var1.x, Var1.f_1);
						}
					}
					Global_2405074.f_2459 = 9;
				}
			}
			else if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2405074.f_2465) > 20000)
			{
				unk_0xD30526FDC02B7349();
				unk_0x4A4DC4626419A059();
				Global_2405074.f_2465 = NETWORK::GET_NETWORK_TIME();
				Global_2405074.f_2459 = 8;
			}
		}
		if (Global_2405074.f_2459 == 6)
		{
			iVar0 = 0;
			Global_2405074.f_2485.f_1 = 0;
			if (uParam1->f_3)
			{
				iVar0++;
			}
			else if (uParam0->f_7 == 0)
			{
				if (!func_125(uParam0->f_4))
				{
					if (unk_0x0B1B45E748AD48BA(CUTSCENE::IS_CUTSCENE_PLAYING(Var6)))
					{
						iVar0++;
					}
				}
			}
			else if (!func_124(uParam0->f_8, uParam0->f_11, uParam0->f_14))
			{
				if (unk_0x0B1B45E748AD48BA(CUTSCENE::IS_CUTSCENE_PLAYING(Var6)))
				{
					iVar0++;
				}
			}
			iVar0 += 2;
			if (uParam1->f_10)
			{
				iVar0 += 32;
			}
			if (uParam0->f_15)
			{
				iVar0 += 16;
			}
			Global_2405074.f_2465 = NETWORK::GET_NETWORK_TIME();
			Global_2405074.f_2459 = 7;
			switch (uParam0->f_7)
			{
				case 0:
					unk_0x3E31C04CCF06119B(*uParam0, uParam0->f_4, 5f, iVar0, 2f, 5000);
					break;
				
				case 1:
					func_197(uParam0->f_8, uParam0->f_11, &Var10, &Var11, &uVar12);
					unk_0xDFBD9C6F251026AD(Var10, Var11, uVar12, iVar0, 2f, 5000);
					break;
				
				case 2:
					unk_0xDFBD9C6F251026AD(uParam0->f_8, uParam0->f_11, uParam0->f_14, iVar0, 2f, 5000);
					break;
				}
		}
		if (Global_2405074.f_2459 == 7)
		{
			if (func_126(uParam2, uParam0, uParam1, 1))
			{
				if (SYSTEM::VMAG(*(uParam2[0 /*3*/])) == 0f)
				{
					iVar9 = 0;
					while (iVar9 < 3)
					{
						if (SYSTEM::VMAG(*(uParam2[0 /*3*/])) == 0f)
						{
							if (!SYSTEM::VMAG(Global_2405074.f_2619[iVar9 /*3*/]) == 0f)
							{
								switch (uParam0->f_7)
								{
									case 0:
										if (func_203(Global_2405074.f_2619[iVar9 /*3*/], *uParam0, uParam0->f_4, 0, 0))
										{
											*(uParam2[0 /*3*/]) = { Global_2405074.f_2619[iVar9 /*3*/] };
										}
										break;
									
									case 1:
										if (func_122(Global_2405074.f_2619[iVar9 /*3*/], uParam0->f_8, uParam0->f_11, 0, 0))
										{
											*(uParam2[0 /*3*/]) = { Global_2405074.f_2619[iVar9 /*3*/] };
										}
										break;
									
									case 2:
										if (HUD::GET_BLIP_INFO_ID_TYPE(Global_2405074.f_2619[iVar9 /*3*/], uParam0->f_8, uParam0->f_11, uParam0->f_14, 0, 1))
										{
											*(uParam2[0 /*3*/]) = { Global_2405074.f_2619[iVar9 /*3*/] };
										}
										break;
									}
								}
						}
						iVar9++;
					}
					if (SYSTEM::VMAG(*(uParam2[0 /*3*/])) == 0f)
					{
						switch (uParam0->f_7)
						{
							case 0:
								Var1 = { *uParam0 };
								break;
							
							case 1:
							case 2:
								Var1 = { uParam0->f_8 + uParam0->f_11 / Vector(2f, 2f, 2f) };
								break;
						}
						func_76(&Var1, 0, 1, 1, 0, uParam0, uParam1);
						*(uParam2[0 /*3*/]) = { Var1 };
					}
				}
				Global_2405074.f_2465 = NETWORK::GET_NETWORK_TIME();
				if (!SYSTEM::VMAG(*uParam1) == 0f)
				{
					iVar9 = 0;
					while (iVar9 < 5)
					{
						Var1 = { *uParam1 - *(uParam2[iVar9 /*3*/]) };
						uParam2->f_16[iVar9] = unk_0x9075769DD4F148B7(Var1.x, Var1.f_1);
						iVar9++;
					}
				}
				Global_2405074.f_2459 = 9;
			}
			else if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2405074.f_2465) > 20000)
			{
				Global_2405074.f_2465 = NETWORK::GET_NETWORK_TIME();
				Global_2405074.f_2459 = 8;
			}
		}
		if (Global_2405074.f_2459 == 8)
		{
			if (uParam0->f_5)
			{
				if (func_75(Global_2405074.f_486))
				{
				}
			}
			else if (Global_2405074.f_2485.f_2)
			{
				func_74(uParam2, &(Global_2405074.f_2485.f_6));
			}
			else
			{
				if (uParam0->f_15)
				{
					bVar15 = false;
				}
				else
				{
					bVar15 = true;
				}
				*(uParam2[0 /*3*/]) = { Global_2405074.f_2460 };
				func_76(uParam2[0 /*3*/], 0, bVar15, 0, 0, uParam0, uParam1);
			}
			Global_2405074.f_2465 = NETWORK::GET_NETWORK_TIME();
			Global_2405074.f_2459 = 9;
		}
		if (Global_2405074.f_2459 == 9)
		{
			Global_2405074.f_2458 = 0;
			unk_0xD30526FDC02B7349();
			unk_0x4A4DC4626419A059();
			func_240();
			return 1;
		}
		Global_2405074.f_2464 = NETWORK::GET_NETWORK_TIME();
	}
	return 0;
}

void func_74(var uParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		*(uParam0[iVar0 /*3*/]) = { (uParam1[iVar0 /*10*/])->f_4 };
		uParam0->f_16[iVar0] = (uParam1[iVar0 /*10*/])->f_7;
		uParam0->f_22[iVar0] = (*uParam1)[iVar0 /*10*/];
		iVar0++;
	}
}

int func_75(int iParam0)
{
	if (iParam0 == 3 || iParam0 == 26)
	{
		return 1;
	}
	return 0;
}

void func_76(var uParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, var uParam5, var uParam6)
{
	struct<3> Var0;
	var uVar1;
	struct<56> Var2;
	var uVar3;
	int iVar4;
	bool bVar5;
	int iVar6;
	struct<3> Var7;
	struct<3> Var8;
	struct<3> Var9;
	float fVar10;
	
	Var2.f_6 = 1082130432;
	Var2.f_7 = 1176255488;
	Var2.f_8 = 1;
	Var2.f_10 = 1;
	Var2.f_13 = 1;
	Var2.f_15 = 1;
	Var2.f_16 = 1;
	Var2.f_31 = 1;
	Var2.f_34 = joaat("tailgater");
	Var2.f_38 = 2;
	Var2.f_45 = 2;
	Var2.f_49 = 1123024896;
	Var2.f_53 = 999;
	Var2.f_54 = 1176256410;
	Var2.f_55 = 1;
	Var2.f_56 = 1;
	Var2.f_57 = 1;
	if (bParam1)
	{
		iVar6 = 0;
	}
	else
	{
		iVar6 = 16;
	}
	if (!uParam6->f_3)
	{
		if (uParam5->f_5)
		{
			if (!uParam5->f_22)
			{
				iVar6 += 4;
			}
			else
			{
				switch (uParam5->f_7)
				{
					case 0:
						Var7 = { *uParam5 };
						if (func_125(uParam5->f_4) || !unk_0x0B1B45E748AD48BA(CUTSCENE::IS_CUTSCENE_PLAYING(Var7)))
						{
							iVar6 += 4;
						}
						break;
					
					case 1:
						Var7 = { uParam5->f_8 + uParam5->f_11 * Vector(0.5f, 0.5f, 0.5f) };
						if (func_124(uParam5->f_8, uParam5->f_11, 0f) || !unk_0x0B1B45E748AD48BA(CUTSCENE::IS_CUTSCENE_PLAYING(Var7)))
						{
							iVar6 += 4;
						}
						break;
					
					case 2:
						Var7 = { uParam5->f_8 + uParam5->f_11 * Vector(0.5f, 0.5f, 0.5f) };
						if (func_124(uParam5->f_8, uParam5->f_11, uParam5->f_14) || !unk_0x0B1B45E748AD48BA(CUTSCENE::IS_CUTSCENE_PLAYING(Var7)))
						{
							iVar6 += 4;
						}
						break;
					}
			}
		}
		else
		{
			iVar6 += 4;
		}
	}
	if (func_90(*uParam0, &Var0, iVar6, iParam3, 1))
	{
	}
	else
	{
		bVar5 = true;
	}
	if (bVar5)
	{
		Var0 = { *uParam0 };
		Var2 = { *uParam6 };
		Var2.f_8 = 1;
		Var2.f_3 = uParam6->f_5;
		if (bParam2)
		{
			Var2.f_10 = 0;
		}
		else
		{
			Var2.f_10 = 1;
		}
		Var2.f_13 = uParam5->f_15;
		Var2.f_15 = iParam3;
		if (uParam6->f_32 > 0f)
		{
			Var2.f_6 = uParam6->f_32;
		}
		if (bParam4)
		{
			Var2.f_18 = 1;
			Var2.f_26 = uParam5->f_7;
			switch (uParam5->f_7)
			{
				case 0:
					Var2.f_19 = { *uParam5 };
					Var2.f_25 = uParam5->f_4;
					break;
				
				case 1:
					Var2.f_19 = { uParam5->f_8 };
					Var2.f_22 = { uParam5->f_11 };
					Var2.f_25 = 0f;
					break;
				
				case 2:
					Var2.f_19 = { uParam5->f_8 };
					Var2.f_22 = { uParam5->f_11 };
					Var2.f_25 = uParam5->f_14;
					break;
				}
		}
		iVar4 = 0;
		while (iVar4 < 2)
		{
			Var2.f_38[iVar4 /*3*/] = { uParam6->f_13[iVar4 /*3*/] };
			Var2.f_45[iVar4] = uParam6->f_20[iVar4];
			iVar4++;
		}
		Var2.f_51 = uParam6->f_30;
		Var2.f_55 = uParam5->f_16;
		if (func_88(PLAYER::PLAYER_ID(), 0))
		{
			Var2.f_9 = 1;
		}
		func_204(&Var0, &uVar1, &Var2);
	}
	if (bParam4)
	{
		switch (uParam5->f_7)
		{
			case 0:
				Var8 = { *uParam5 };
				fVar10 = uParam5->f_4;
				break;
			
			case 1:
				Var8 = { uParam5->f_8 };
				Var9 = { uParam5->f_11 };
				break;
			
			case 2:
				Var8 = { uParam5->f_8 };
				Var9 = { uParam5->f_11 };
				fVar10 = uParam5->f_14;
				break;
		}
		if (!func_87(Var0, uParam5->f_7, Var8, Var9, fVar10))
		{
			if (func_90(*uParam0, &Var0, iVar6, iParam3, 0))
			{
				if (!func_87(Var0, uParam5->f_7, Var8, Var9, fVar10))
				{
					if (uParam5->f_7 == 2 || uParam5->f_7 == 1)
					{
						Var0 = { Var8 + Var9 * Vector(0.5f, 0.5f, 0.5f) };
					}
					else
					{
						Var0 = { Var8 };
					}
					if (MISC::GET_GROUND_Z_FOR_3D_COORD(Var0, &uVar3, false, false))
					{
						Var0.f_2 = uVar3;
					}
				}
			}
			else if (func_77(uParam0, 1, 1, 1, 1))
			{
				func_76(uParam0, bParam1, bParam2, iParam3, bParam4, uParam5, uParam6);
			}
			else
			{
				if (uParam5->f_7 == 2 || uParam5->f_7 == 1)
				{
					Var0 = { Var8 + Var9 * Vector(0.5f, 0.5f, 0.5f) };
				}
				else
				{
					Var0 = { Var8 };
				}
				if (MISC::GET_GROUND_Z_FOR_3D_COORD(Var0, &uVar3, false, false))
				{
					Var0.f_2 = uVar3;
				}
			}
		}
	}
	*uParam0 = { Var0 };
	Global_2405074.f_662 = 1;
}

int func_77(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (Global_2409990[iVar0 /*17*/].f_9 == 1)
		{
			if (!bParam2 || (bParam2 && Global_2409990[iVar0 /*17*/].f_16))
			{
				if (func_86(*uParam0, &(Global_2409990[iVar0 /*17*/]), 1008981770, bParam4, 0))
				{
					if (bParam1)
					{
						if (Global_2409990[iVar0 /*17*/].f_12)
						{
							*uParam0 = { Global_2409990[iVar0 /*17*/].f_13 };
						}
						else
						{
							Var1 = { *uParam0 };
							func_78(&Var1, &(Global_2409990[iVar0 /*17*/]), 1036831949, 0, bParam3);
							if (func_77(&Var1, 0, 0, 0, 1))
							{
								Var1 = { *uParam0 };
								func_78(&Var1, &(Global_2409990[iVar0 /*17*/]), 1036831949, 1, 0);
							}
							*uParam0 = { Var1 };
						}
					}
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

void func_78(var uParam0, var uParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (bParam4)
	{
		switch (uParam1->f_10)
		{
			case 0:
				*uParam0 = { func_85(*uParam0, *uParam1, 0f, 0f, 0f, (uParam1->f_6 + (IntToFloat(Global_2405074.f_2728) * uParam1->f_8)), 0, fParam2, bParam3) };
				break;
			
			case 1:
				*uParam0 = { func_85(*uParam0, *uParam1, uParam1->f_3, 0f, 1, fParam2, bParam3) };
				break;
			
			case 2:
				*uParam0 = { func_85(*uParam0, *uParam1, uParam1->f_3, uParam1->f_6, 2, fParam2, bParam3) };
				break;
		}
	}
	else
	{
		switch (uParam1->f_10)
		{
			case 0:
				func_83(uParam0, *uParam1, (uParam1->f_6 + (IntToFloat(Global_2405074.f_2728) * uParam1->f_8)), fParam2, bParam3, 0);
				break;
			
			case 1:
				func_82(uParam0, *uParam1, uParam1->f_3, fParam2, bParam3);
				break;
			
			case 2:
				func_79(uParam0, *uParam1, uParam1->f_3, uParam1->f_6, fParam2, bParam3);
				break;
			}
	}
}

void func_79(var uParam0, struct<3> Param1, struct<3> Param2, float fParam3, float fParam4, bool bParam5)
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	float fVar3;
	struct<3> Var4;
	struct<3> Var5;
	bool bVar6;
	struct<3> Var7;
	struct<3> Var8;
	struct<3> Var9;
	struct<3> Var10;
	struct<3> Var11;
	
	Var0 = { Param2 - Param1 };
	Var0.f_2 = 0f;
	Var1 = { *uParam0 - Param1 };
	Var1.f_2 = 0f;
	Var2 = { func_81(0f, 0f, 1f, Var0) };
	Var2 = { Var2 / FtoV(SYSTEM::VMAG(Var2)) };
	fVar3 = (SYSTEM::VMAG(Var1) * SYSTEM::SIN(MISC::GET_ANGLE_BETWEEN_2D_VECTORS(Var0.x, Var0.f_1, Var1.x, Var1.f_1)));
	if (fVar3 < (fParam3 * 0.5f))
	{
		if (!bParam5)
		{
			if (func_80(Var2, Var1) >= 0f)
			{
				Var2 = { Var2 * FtoV((((fParam3 * 0.5f) - fVar3) + fParam4)) };
			}
			else
			{
				Var2 = { Var2 * FtoV(((((fParam3 * 0.5f) - fVar3) + fParam4) * -1f)) };
			}
		}
		else if (func_80(Var2, Var1) >= 0f)
		{
			Var2 = { Var2 * FtoV(((((fParam3 * 0.5f) + fVar3) + fParam4) * -1f)) };
		}
		else
		{
			Var2 = { Var2 * FtoV((((fParam3 * 0.5f) + fVar3) + fParam4)) };
		}
		Var4 = { *uParam0 + Var2 };
		bVar6 = SYSTEM::VDIST(Param1.x, Param1.f_1, 0f, Param2.x, Param2.f_1, 0f);
		Var7 = { Param1 + Param2 / Vector(2f, 2f, 2f) };
		Var7.f_2 = 0f;
		Var2 = { func_81(0f, 0f, 1f, Var0) };
		Var2 = { Var2 / FtoV(SYSTEM::VMAG(Var2)) };
		Var2 = { Var2 * FtoV((fParam3 * 0.5f)) };
		Var8 = { Var7 - Var2 };
		Var9 = { Var7 + Var2 };
		Var10 = { Var9 - Var8 };
		Var10.f_2 = 0f;
		Var11 = { *uParam0 - Var8 };
		Var11.f_2 = 0f;
		Var2 = { func_81(0f, 0f, 1f, Var10) };
		Var2 = { Var2 / FtoV(SYSTEM::VMAG(Var2)) };
		fVar3 = (SYSTEM::VMAG(Var11) * SYSTEM::SIN(MISC::GET_ANGLE_BETWEEN_2D_VECTORS(Var10.x, Var10.f_1, Var11.x, Var11.f_1)));
		if (!bParam5)
		{
			if (func_80(Var2, Var11) >= 0f)
			{
				Var2 = { Var2 * FtoV((((bVar6 * 0.5f) - fVar3) + fParam4)) };
			}
			else
			{
				Var2 = { Var2 * FtoV(((((bVar6 * 0.5f) - fVar3) + fParam4) * -1f)) };
			}
		}
		else if (func_80(Var2, Var11) >= 0f)
		{
			Var2 = { Var2 * FtoV(((((bVar6 * 0.5f) + fVar3) + fParam4) * -1f)) };
		}
		else
		{
			Var2 = { Var2 * FtoV((((bVar6 * 0.5f) + fVar3) + fParam4)) };
		}
		Var5 = { *uParam0 + Var2 };
		if (SYSTEM::VDIST(Var4, *uParam0, uParam0->f_1, 0f) < SYSTEM::VDIST(Var5, *uParam0, uParam0->f_1, 0f))
		{
			*uParam0 = { Var4 };
		}
		else
		{
			*uParam0 = { Var5 };
		}
	}
}

float func_80(struct<3> Param0, struct<3> Param1)
{
	return (((Param0.x * Param1.x) + (Param0.f_1 * Param1.f_1)) + (Param0.f_2 * Param1.f_2));
}

Vector3 func_81(struct<3> Param0, struct<3> Param1)
{
	return ((Param0.f_1 * Param1.f_2) - (Param0.f_2 * Param1.f_1)), ((Param0.f_2 * Param1.x) - (Param0.x * Param1.f_2)), ((Param0.x * Param1.f_1) - (Param0.f_1 * Param1.x));
}

void func_82(var uParam0, struct<2> Param1, var uParam2, struct<2> Param3, var uParam4, float fParam5, bool bParam6)
{
	struct<3> Var0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	
	Var0 = { *uParam0 };
	fVar1 = (*uParam0 - Param1);
	fVar2 = (*uParam0 - Param3);
	if (fVar1 < fVar2)
	{
		fVar3 = fVar1;
	}
	else
	{
		fVar3 = fVar2;
	}
	fVar4 = (uParam0->f_1 - Param1.f_1);
	fVar5 = (uParam0->f_1 - Param3.f_1);
	if (fVar4 < fVar5)
	{
		fVar6 = fVar4;
	}
	else
	{
		fVar6 = fVar5;
	}
	Var0 = { *uParam0 };
	if (!bParam6)
	{
		if (fVar3 < fVar6)
		{
			if (fVar1 < fVar2)
			{
				Var0.x = (Param1 - fParam5);
			}
			else
			{
				Var0.x = (Param3 + fParam5);
			}
		}
		else if (fVar4 < fVar5)
		{
			Var0.f_1 = (Param1.f_1 - fParam5);
		}
		else
		{
			Var0.f_1 = (Param3.f_1 + fParam5);
		}
	}
	else if (fVar3 < fVar6)
	{
		if (fVar1 < fVar2)
		{
			Var0.x = (Param3 + fParam5);
		}
		else
		{
			Var0.x = (Param1 - fParam5);
		}
	}
	else if (fVar4 < fVar5)
	{
		Var0.f_1 = (Param3.f_1 + fParam5);
	}
	else
	{
		Var0.f_1 = (Param1.f_1 - fParam5);
	}
	*uParam0 = { Var0 };
}

void func_83(var uParam0, struct<3> Param1, float fParam2, float fParam3, bool bParam4, float fParam5)
{
	struct<3> Var0;
	struct<3> Var1;
	
	Var0 = { *uParam0 - Param1 };
	Var0.f_2 = 0f;
	if (SYSTEM::VMAG(Var0) > 0f)
	{
		Var0 = { Var0 / FtoV(SYSTEM::VMAG(Var0)) };
	}
	else
	{
		Var0 = { 0f, 1f, 0f };
		if (fParam5 == 0f)
		{
			func_84(&Var0, 0f, 0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f));
		}
		else
		{
			func_84(&Var0, 0f, 0f, fParam5);
		}
	}
	Var0 = { Var0 * FtoV((fParam2 + fParam3)) };
	if (!bParam4)
	{
		Var1 = { Param1 + Var0 };
	}
	else
	{
		Var1 = { Param1 - Var0 };
	}
	*uParam0 = Var1.x;
	uParam0->f_1 = Var1.f_1;
}

void func_84(var uParam0, struct<3> Param1)
{
	float fVar0;
	float fVar1;
	struct<3> Var2;
	
	fVar0 = SYSTEM::COS(Param1.x);
	fVar1 = SYSTEM::SIN(Param1.x);
	Var2.x = *uParam0;
	Var2.f_1 = ((fVar0 * uParam0->f_1) - (fVar1 * uParam0->f_2));
	Var2.f_2 = ((fVar1 * uParam0->f_1) + (fVar0 * uParam0->f_2));
	*uParam0 = { Var2 };
	fVar0 = SYSTEM::COS(Param1.f_1);
	fVar1 = SYSTEM::SIN(Param1.f_1);
	Var2.x = ((fVar0 * *uParam0) + (fVar1 * uParam0->f_2));
	Var2.f_1 = uParam0->f_1;
	Var2.f_2 = ((fVar0 * uParam0->f_2) - (fVar1 * *uParam0));
	*uParam0 = { Var2 };
	fVar0 = SYSTEM::COS(Param1.f_2);
	fVar1 = SYSTEM::SIN(Param1.f_2);
	Var2.x = ((fVar0 * *uParam0) - (fVar1 * uParam0->f_1));
	Var2.f_1 = ((fVar1 * *uParam0) + (fVar0 * uParam0->f_1));
	Var2.f_2 = uParam0->f_2;
	*uParam0 = { Var2 };
}

Vector3 func_85(struct<3> Param0, struct<3> Param1, struct<3> Param2, float fParam3, int iParam4, float fParam5, bool bParam6)
{
	int iVar0;
	struct<3> Var1;
	
	switch (iParam4)
	{
		case 0:
			func_83(&Param0, Param1, fParam3, fParam5, bParam6, 0);
			break;
		
		case 1:
			func_82(&Param0, Param1, Param2, fParam5, bParam6);
			break;
		
		case 2:
			func_79(&Param0, Param1, Param2, fParam3, fParam5, bParam6);
			break;
	}
	iVar0 = 0;
	while (iVar0 < 40)
	{
		PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE(Param0, iVar0 * 5, &Var1, 1, 0f, 0f);
		switch (iParam4)
		{
			case 0:
				if (!func_203(Var1, Param1, fParam3, 0, 0))
				{
					return Var1;
				}
				break;
			
			case 1:
				if (!func_122(Var1, Param1, Param2, 0, 0))
				{
					return Var1;
				}
				break;
			
			case 2:
				if (!HUD::GET_BLIP_INFO_ID_TYPE(Var1, Param1, Param2, fParam3, 0, 1))
				{
					return Var1;
				}
				break;
		}
		iVar0++;
	}
	return Param0;
}

int func_86(struct<3> Param0, var uParam1, float fParam2, bool bParam3, bool bParam4)
{
	switch (uParam1->f_10)
	{
		case 0:
			return func_203(Param0, *uParam1, ((uParam1->f_6 + fParam2) + (IntToFloat(Global_2405074.f_2728) * uParam1->f_8)), bParam3, bParam4);
			break;
		
		case 1:
			return func_122(Param0, *uParam1 + Vector((fParam2 * -1f), (fParam2 * -1f), (fParam2 * -1f)), uParam1->f_3 + Vector(fParam2, fParam2, fParam2), bParam3, bParam4);
			break;
		
		case 2:
			if (bParam3 && bParam4)
			{
				return HUD::GET_BLIP_INFO_ID_TYPE(Param0, *uParam1, uParam1->f_3, uParam1->f_6, 0, 0);
			}
			else if (bParam3)
			{
				if (HUD::GET_BLIP_INFO_ID_TYPE(Param0, *uParam1, uParam1->f_3, uParam1->f_6, 0, 0) && !(Param0.f_2 < uParam1->f_2 && Param0.f_2 < uParam1->f_3.f_2))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			else if (bParam4)
			{
				if (HUD::GET_BLIP_INFO_ID_TYPE(Param0, *uParam1, uParam1->f_3, uParam1->f_6, 0, 0) && !(Param0.f_2 > uParam1->f_2 && Param0.f_2 > uParam1->f_3.f_2))
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
				return HUD::GET_BLIP_INFO_ID_TYPE(Param0, *uParam1, uParam1->f_3, uParam1->f_6, 0, 1);
			}
			break;
	}
	return 0;
}

int func_87(struct<3> Param0, int iParam1, struct<3> Param2, struct<3> Param3, float fParam4)
{
	switch (iParam1)
	{
		case 0:
			if (SYSTEM::VDIST(Param0, Param2) <= fParam4)
			{
				return 1;
			}
			break;
		
		case 1:
			return func_122(Param0, Param2, Param3, 0, 0);
			break;
		
		case 2:
			return HUD::GET_BLIP_INFO_ID_TYPE(Param0, Param2, Param3, fParam4, 0, 1);
			break;
	}
	return 0;
}

int func_88(bool bParam0, bool bParam1)
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
	if (bParam0 != func_13())
	{
		if (func_6(bParam0, 1, 1))
		{
			if (Global_2425869[bParam0 /*443*/].f_314.f_6 != -1 && Global_2425869[bParam0 /*443*/].f_314.f_9 != func_13())
			{
				return func_89(Global_2425869[bParam0 /*443*/].f_314.f_6) == 12;
			}
		}
	}
	return 0;
}

int func_89(int iParam0)
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

int func_90(struct<3> Param0, var* uParam1, int iParam2, int iParam3, bool bParam4)
{
	if (func_121(Param0, uParam1))
	{
		if (func_91(Param0, uParam1, iParam3, bParam4))
		{
			return 1;
		}
	}
	if (PATHFIND::GET_SAFE_COORD_FOR_PED(Param0, false, uParam1, iParam2))
	{
		if (func_91(Param0, uParam1, iParam3, bParam4))
		{
			return 1;
		}
	}
	return 0;
}

int func_91(struct<3> Param0, var* uParam1, int iParam2, bool bParam3)
{
	bool bVar0;
	var uVar1;
	var uVar2;
	
	bVar0 = SYSTEM::VDIST(Param0, *uParam1);
	if (bVar0 < 40f)
	{
		uVar1 = 2;
		uVar2 = 2;
		if ((iParam2 == 1 && !func_107(Global_2405074.f_509, uParam1, &uVar1, &uVar2, bParam3, 1)) || iParam2 == 0)
		{
			if (!func_95(*uParam1, 1056964608))
			{
				if (!func_92(uParam1, 0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_92(var uParam0, bool bParam1)
{
	int iVar0;
	struct<3> Var1;
	int iVar2;
	
	Var1 = { *uParam0 };
	iVar2 = func_94(Var1);
	iVar0 = 0;
	while (iVar0 < Global_2411465[iVar2])
	{
		if (func_93(Var1, &(Global_2410195[iVar2 /*141*/][iVar0 /*7*/])))
		{
			if (bParam1)
			{
				func_79(&Var1, Global_2410195[iVar2 /*141*/][iVar0 /*7*/], Global_2410195[iVar2 /*141*/][iVar0 /*7*/].f_3, Global_2410195[iVar2 /*141*/][iVar0 /*7*/].f_6, 1036831949, 0);
				*uParam0 = { Var1 };
			}
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2411465[8])
	{
		if (func_93(Var1, &(Global_2410195[8 /*141*/][iVar0 /*7*/])))
		{
			if (bParam1)
			{
				func_79(&Var1, Global_2410195[8 /*141*/][iVar0 /*7*/], Global_2410195[8 /*141*/][iVar0 /*7*/].f_3, Global_2410195[8 /*141*/][iVar0 /*7*/].f_6, 1036831949, 0);
				*uParam0 = { Var1 };
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_93(struct<3> Param0, var uParam1)
{
	return HUD::GET_BLIP_INFO_ID_TYPE(Param0, *uParam1, uParam1->f_3, uParam1->f_6, 0, 1);
}

int func_94(struct<2> Param0, var uParam1)
{
	if (Param0.f_1 > Global_2411475[0])
	{
		return 0;
	}
	if (Param0.f_1 > Global_2411475[1])
	{
		if (Param0 < Global_2411479[0])
		{
			return 1;
		}
		else
		{
			return 2;
		}
	}
	if (Param0.f_1 > Global_2411475[2])
	{
		if (Param0 < Global_2411479[1])
		{
			return 3;
		}
		else if (Param0 < Global_2411479[2])
		{
			return 4;
		}
		else if (Param0 < Global_2411479[3])
		{
			return 5;
		}
		else
		{
			return 6;
		}
	}
	return 7;
}

int func_95(struct<3> Param0, float fParam1)
{
	int iVar0;
	
	if (func_104(PLAYER::PLAYER_ID(), 1, 0))
	{
		if (Global_4718592.f_25199 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_4718592.f_25199)
			{
				if (Global_4718592.f_25200[iVar0 /*110*/].f_7 != 0)
				{
					if (func_96(Param0, Global_4718592.f_25200[iVar0 /*110*/], Global_4718592.f_25200[iVar0 /*110*/].f_6, Global_4718592.f_25200[iVar0 /*110*/].f_7, fParam1))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_4718592.f_4794 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_4718592.f_4794)
			{
				if (Global_4718592.f_4797[iVar0 /*280*/].f_15 != 0)
				{
					if (func_96(Param0, Global_4718592.f_4797[iVar0 /*280*/], Global_4718592.f_4797[iVar0 /*280*/].f_3, Global_4718592.f_4797[iVar0 /*280*/].f_15, 0.5f))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_4718592.f_58904 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_4718592.f_58904)
			{
				if (Global_4718592.f_58908[iVar0 /*339*/].f_12 != 0)
				{
					if (func_96(Param0, Global_4718592.f_58908[iVar0 /*339*/], Global_4718592.f_58908[iVar0 /*339*/].f_3, Global_4718592.f_58908[iVar0 /*339*/].f_12, 0.5f))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_969055.f_268 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_969055.f_268)
			{
				if (MISC::IS_BIT_SET(Global_969055.f_233[iVar0]) && !PED::IS_PED_IN_ANY_POLICE_VEHICLE(Global_969055.f_233[iVar0], 0))
				{
					if (func_96(Param0, NETWORK::NETWORK_ARE_HANDLES_THE_SAME(Global_969055.f_233[iVar0], 1), ENTITY::IS_ENTITY_IN_WATER(Global_969055.f_233[iVar0]), MISC::GET_MODEL_DIMENSIONS(Global_969055.f_233[iVar0]), 0.5f))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_969055.f_266 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_969055.f_266)
			{
				if (MISC::IS_BIT_SET(Global_969055.f_119[iVar0]) && !PED::IS_PED_IN_ANY_POLICE_VEHICLE(Global_969055.f_119[iVar0], 0))
				{
					if (func_96(Param0, NETWORK::NETWORK_ARE_HANDLES_THE_SAME(Global_969055.f_119[iVar0], 1), ENTITY::IS_ENTITY_IN_WATER(Global_969055.f_119[iVar0]), MISC::GET_MODEL_DIMENSIONS(Global_969055.f_119[iVar0]), 0.5f))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
	}
	return 0;
}

int func_96(struct<3> Param0, struct<3> Param1, bool bParam2, void fParam3, float fParam4)
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	
	if (SYSTEM::VDIST(Param0, Param1) < func_103(fParam3, 1008981770))
	{
		func_97(Param1, bParam2, fParam3, &Var0, &Var1, &fVar2, fParam4);
		if (HUD::GET_BLIP_INFO_ID_TYPE(Param0, Var0, Var1, fVar2, 0, 1))
		{
			return 1;
		}
	}
	return 0;
}

void func_97(struct<3> Param0, float fParam1, int iParam2, var uParam3, var uParam4, var uParam5, float fParam6)
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	
	Var0 = { 0f, 1f, 0f };
	func_84(&Var0, 0f, 0f, fParam1);
	Var0 = { Var0 / FtoV(SYSTEM::VMAG(Var0)) };
	func_98(iParam2, &Var1, &Var2, 1086324736, 1080033280, 1077936128);
	Var3 = { Param0 + Var0 * FtoV((Var2.f_1 + fParam6)) };
	Var3.f_2 = (Var3.f_2 - ((0.5f * ENTITY::IS_ENTITY_PLAYING_ANIM((Var2.f_2 - Var1.f_2))) + fParam6));
	Var4 = { Param0 - Var0 * FtoV(((Var1.f_1 * -1f) + fParam6)) };
	Var4.f_2 = (Var4.f_2 + ((0.5f * ENTITY::IS_ENTITY_PLAYING_ANIM((Var2.f_2 - Var1.f_2))) + fParam6));
	*uParam3 = { Var3 };
	*uParam4 = { Var4 };
	*uParam5 = ENTITY::IS_ENTITY_PLAYING_ANIM((Var2.x - Var1.x));
}

void func_98(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5)
{
	int iVar0;
	
	if (unk_0x003F998A2839DD5E(iParam0))
	{
		ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, fParam1, fParam2);
	}
	else
	{
		iVar0 = func_101(iParam0);
		if (iVar0 != 0)
		{
			func_99(iVar0, fParam1, fParam2, 1086324736, 1080033280, 1077936128);
			return;
		}
	}
	if (SYSTEM::VMAG(*fParam1) <= 0.01f || SYSTEM::VMAG(*fParam2) <= 0.01f)
	{
		if (iParam0 == joaat("kosatka"))
		{
			if (fParam4 < 20.7f)
			{
				fParam4 = 20.7f;
			}
			if (fParam3 < 137.2f)
			{
				fParam3 = 137.2f;
			}
			if (fParam5 < 21.1f)
			{
				fParam5 = 21.1f;
			}
		}
		*fParam1 = (0f - (fParam4 * 0.5f));
		*fParam2 = (0f + (fParam4 * 0.5f));
		fParam1->f_1 = (0f - (fParam3 * 0.5f));
		fParam2->f_1 = (0f + (fParam3 * 0.5f));
		fParam1->f_2 = (0f - (fParam5 * 0.5f));
		fParam2->f_2 = (0f + (fParam5 * 0.5f));
	}
}

void func_99(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5)
{
	int iVar0;
	
	func_100(iParam0, &Global_1315831);
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (unk_0x003F998A2839DD5E(Global_1315831[iVar0]))
		{
			ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Global_1315831[iVar0], &(Global_1315835[iVar0 /*3*/]), &(Global_1315842[iVar0 /*3*/]));
		}
		if (SYSTEM::VMAG(Global_1315835[iVar0 /*3*/]) <= 0.01f || SYSTEM::VMAG(Global_1315842[iVar0 /*3*/]) <= 0.01f)
		{
			Global_1315835[iVar0 /*3*/] = (0f - (fParam4 * 0.5f));
			Global_1315842[iVar0 /*3*/] = (0f + (fParam4 * 0.5f));
			Global_1315835[iVar0 /*3*/].f_1 = (0f - (fParam3 * 0.5f));
			Global_1315842[iVar0 /*3*/].f_1 = (0f + (fParam3 * 0.5f));
			Global_1315835[iVar0 /*3*/].f_2 = (0f - (fParam5 * 0.5f));
			Global_1315842[iVar0 /*3*/].f_2 = (0f + (fParam5 * 0.5f));
		}
		Global_1315849[iVar0] = (Global_1315842[iVar0 /*3*/] - Global_1315835[iVar0 /*3*/]);
		Global_1315852[iVar0] = (Global_1315842[iVar0 /*3*/].f_1 - Global_1315835[iVar0 /*3*/].f_1);
		Global_1315855[iVar0] = (Global_1315842[iVar0 /*3*/].f_2 - Global_1315835[iVar0 /*3*/].f_2);
		if (Global_1315849[iVar0] > Global_1315858)
		{
			Global_1315858 = Global_1315849[iVar0];
		}
		if (Global_1315855[iVar0] > Global_1315859)
		{
			Global_1315859 = Global_1315855[iVar0];
		}
		iVar0++;
	}
	Global_1315860 = (Global_1315858 * -0.5f);
	Global_1315863 = (Global_1315858 * 0.5f);
	Global_1315860.f_1 = ((((0.5f * Global_1315852[0]) + Global_1315852[1]) + Global_1315831.f_3) * -1f);
	Global_1315863.f_1 = (0.5f * Global_1315852[0]);
	Global_1315860.f_2 = (Global_1315855[0] * -0.5f);
	Global_1315863.f_2 = (Global_1315855[0] * 0.5f);
	*fParam1 = { Global_1315860 };
	*fParam2 = { Global_1315863 };
}

void func_100(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 1:
			(*uParam1)[0] = joaat("hauler2");
			(*uParam1)[1] = joaat("trailerlarge");
			uParam1->f_3 = -2.6f;
			break;
		
		case 2:
			(*uParam1)[0] = joaat("phantom3");
			(*uParam1)[1] = joaat("trailerlarge");
			uParam1->f_3 = -2.6f;
			break;
		
		case 3:
			(*uParam1)[0] = joaat("nightshark");
			(*uParam1)[1] = joaat("trailersmall2");
			uParam1->f_3 = 0.5f;
			break;
	}
}

int func_101(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = iVar0;
		if (func_102(iVar1) == iParam0)
		{
			return iVar1;
		}
		iVar0++;
	}
	return 0;
}

int func_102(int iParam0)
{
	int iVar0;
	
	iVar0 = (1000 + iParam0);
	return iVar0;
}

float func_103(int iParam0, float fParam1)
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	float fVar3;
	
	if (iParam0 == 0)
	{
		return 5f;
	}
	func_98(iParam0, &Var0, &Var1, 1086324736, 1080033280, 1077936128);
	Var2 = { Var1 - Var0 };
	fVar3 = (SYSTEM::SQRT(((((Var2.x * 0.5f) * (Var2.x * 0.5f)) + ((Var2.f_1 * 0.5f) * (Var2.f_1 * 0.5f))) + ((Var2.f_2 * 0.5f) * (Var2.f_2 * 0.5f)))) + fParam1);
	return fVar3;
}

int func_104(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_105(bParam0))
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

bool func_105(int iParam0)
{
	return func_106(iParam0);
}

bool func_106(int iParam0)
{
	return unk_0xCE990E643CD9D0E5(Global_1590682[iParam0 /*883*/].f_13.f_1, false);
}

int func_107(struct<3> Param0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	bool bVar1;
	
	if (func_114(Param0))
	{
		if (func_77(uParam1, bParam4, 0, 1, 1))
		{
			if (bParam4)
			{
			}
			return 1;
		}
	}
	if (func_109(uParam1, bParam4, 1))
	{
		if (bParam4)
		{
		}
		return 1;
	}
	if (bParam5)
	{
		if (func_108(*uParam1, 1056964608))
		{
			return 1;
		}
	}
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < *uParam2)
	{
		if (SYSTEM::VDIST(*uParam1, *(uParam2[iVar0 /*3*/])) < (*uParam3)[iVar0])
		{
			if (bParam4)
			{
				func_83(uParam1, *(uParam2[iVar0 /*3*/]), (*uParam3)[iVar0], 1036831949, 0, 0);
			}
			bVar1 = true;
		}
		iVar0++;
	}
	if (bVar1)
	{
		return 1;
	}
	return 0;
}

int func_108(struct<3> Param0, float fParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 30)
	{
		if (SYSTEM::VDIST(Param0, Global_2405074.f_2730[iVar0 /*3*/]) < fParam1)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_109(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	var uVar1;
	struct<3> Var2;
	
	if (func_111(*uParam0, &iVar0))
	{
		if (bParam1)
		{
			Var2 = { *uParam0 };
			func_78(&Var2, &(Global_2405074.f_365[iVar0 /*12*/]), 1036831949, 0, bParam2);
			if (func_111(Var2, &uVar1) || func_110(Var2))
			{
				Var2 = { *uParam0 };
				func_78(&Var2, &(Global_2405074.f_365[iVar0 /*12*/]), 1036831949, 1, bParam2);
			}
			*uParam0 = { Var2 };
		}
		return 1;
	}
	return 0;
}

int func_110(struct<3> Param0)
{
	bool bVar0;
	
	if (Global_2405074.f_591 > 0f)
	{
		bVar0 = SYSTEM::VDIST(Param0, Global_2405074.f_588);
		if (bVar0 < Global_2405074.f_591)
		{
			return 1;
		}
	}
	return 0;
}

int func_111(struct<3> Param0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	if (func_113())
	{
		return 0;
	}
	iVar1 = func_112();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (Global_2405074.f_365[iVar0 /*12*/].f_9 == 1)
		{
			if (func_86(Param0, &(Global_2405074.f_365[iVar0 /*12*/]), 1008981770, 0, 0))
			{
				*uParam1 = iVar0;
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_112()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (Global_2405074.f_365[iVar0 /*12*/].f_9)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

bool func_113()
{
	return Global_1678288.f_482;
}

int func_114(struct<3> Param0)
{
	int iVar0;
	struct<3> Var1;
	
	if (!Global_2405074.f_512 && !Global_2405074.f_513)
	{
		if (!Global_2405074.f_45.f_314)
		{
			if (!func_118(PLAYER::PLAYER_ID(), 1))
			{
				return 1;
			}
			if (!func_117(Param0, 1008981770))
			{
				if (!func_77(&Param0, 0, 0, 0, 1))
				{
					return 1;
				}
				else if (func_77(&Param0, 0, 1, 0, 1))
				{
					return 1;
				}
			}
			else
			{
				iVar0 = func_116(Param0, 1008981770);
				if (iVar0 > -1)
				{
					Var1 = { func_115(&(Global_2405074.f_45[iVar0 /*12*/])) };
					if (!func_77(&Var1, 0, 0, 0, 1))
					{
						if (!func_77(&Param0, 0, 0, 0, 1))
						{
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

Vector3 func_115(var uParam0)
{
	switch (uParam0->f_10)
	{
		case 0:
			return *uParam0;
			break;
		
		case 1:
		case 2:
			return *uParam0 + uParam0->f_3 * Vector(0.5f, 0.5f, 0.5f);
			break;
	}
	return *uParam0;
}

int func_116(struct<3> Param0, float fParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2405074.f_45[iVar0 /*12*/].f_9)
		{
			if (func_86(Param0, &(Global_2405074.f_45[iVar0 /*12*/]), fParam1, 0, 0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_117(struct<3> Param0, float fParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2405074.f_45[iVar0 /*12*/].f_9)
		{
			if (func_86(Param0, &(Global_2405074.f_45[iVar0 /*12*/]), fParam1, 0, 0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_118(bool bParam0, bool bParam1)
{
	if (func_120() != 0)
	{
		return func_119(bParam0) != 0;
	}
	return func_104(bParam0, bParam1, 0);
}

int func_119(bool bParam0)
{
	if (func_6(bParam0, 0, 1))
	{
		return Global_2425869[bParam0 /*443*/].f_1;
	}
	return 0;
}

int func_120()
{
	return Global_30968;
}

int func_121(struct<3> Param0, var uParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	
	iVar1 = -1;
	bVar2 = 999999.9f;
	if (Global_2405074.f_2256 > 0)
	{
		iVar0 = 0;
		while (iVar0 < Global_2405074.f_2256)
		{
			bVar3 = SYSTEM::VDIST(Global_2405074.f_2257[iVar0 /*4*/], Param0);
			if (bVar3 < bVar2)
			{
				iVar1 = iVar0;
				bVar2 = bVar3;
			}
			iVar0++;
		}
		if (!iVar1 == -1)
		{
			*uParam1 = { Global_2405074.f_2257[iVar1 /*4*/] };
			return 1;
		}
	}
	return 0;
}

int func_122(struct<3> Param0, struct<3> Param1, struct<3> Param2, bool bParam3, bool bParam4)
{
	func_123(&Param1, &Param2);
	if (((!Param0.x >= Param1.x || !Param0.f_1 >= Param1.f_1) || !Param0.x <= Param2.x) || !Param0.f_1 <= Param2.f_1)
	{
		return 0;
	}
	if (bParam3 && bParam4)
	{
		return 1;
	}
	else if (bParam3)
	{
		if (Param0.f_2 >= Param1.f_2)
		{
			return 1;
		}
	}
	else if (bParam4)
	{
		if (Param0.f_2 <= Param2.f_2)
		{
			return 1;
		}
	}
	else if (Param0.f_2 >= Param1.f_2 && Param0.f_2 <= Param2.f_2)
	{
		return 1;
	}
	return 0;
}

void func_123(var uParam0, var uParam1)
{
	var uVar0;
	
	if (*uParam0 > *uParam1)
	{
		uVar0 = *uParam1;
		*uParam1 = *uParam0;
		*uParam0 = uVar0;
	}
	if (uParam0->f_1 > uParam1->f_1)
	{
		uVar0 = uParam1->f_1;
		uParam1->f_1 = uParam0->f_1;
		uParam0->f_1 = uVar0;
	}
	if (uParam0->f_2 > uParam1->f_2)
	{
		uVar0 = uParam1->f_2;
		uParam1->f_2 = uParam0->f_2;
		uParam0->f_2 = uVar0;
	}
}

int func_124(struct<3> Param0, struct<3> Param1, float fParam2)
{
	struct<3> Var0;
	struct<3> Var1;
	
	if (Param0.x > Param1.x)
	{
		Var1.x = Param0.x;
		Var0.x = Param1.x;
	}
	else
	{
		Var1.x = Param1.x;
		Var0.x = Param0.x;
	}
	if (Param0.f_1 > Param1.f_1)
	{
		Var1.f_1 = Param0.f_1;
		Var0.f_1 = Param1.f_1;
	}
	else
	{
		Var1.f_1 = Param1.f_1;
		Var0.f_1 = Param0.f_1;
	}
	if (Param0.f_2 > Param1.f_2)
	{
		Var1.f_2 = Param0.f_2;
		Var0.f_2 = Param1.f_2;
	}
	else
	{
		Var1.f_2 = Param1.f_2;
		Var0.f_2 = Param0.f_2;
	}
	if (SYSTEM::VMAG(Var1 - Var0) > 100f)
	{
		return 1;
	}
	if (fParam2 > 50f)
	{
		return 1;
	}
	return 0;
}

int func_125(float fParam0)
{
	if (fParam0 > 50f)
	{
		return 1;
	}
	return 0;
}

int func_126(var uParam0, var uParam1, var uParam2, bool bParam3)
{
	struct<3> Var0;
	float fVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	
	if (Global_2405074.f_2485.f_1 == 0 && Global_2405074.f_2485 == 0)
	{
		if (uParam1->f_5 && !bParam3)
		{
			switch (unk_0x24953052618C0177(&(Global_2405074.f_2485.f_1)))
			{
				case 0:
					func_195(uParam1, uParam2);
					if (!Global_2405074.f_2485.f_2)
					{
						if (uParam2->f_7 && Global_2405074.f_552.f_7 == 0)
						{
							*(uParam0[0 /*3*/]) = { *uParam1 };
							uParam0->f_16[0] = uParam1->f_3;
							return 1;
						}
						else
						{
							if (uParam1->f_21)
							{
								*(uParam0[0 /*3*/]) = { uParam1->f_18 };
							}
							else
							{
								*(uParam0[0 /*3*/]) = { Global_2405074.f_2460 };
							}
							if (uParam1->f_5 && func_75(Global_2405074.f_486))
							{
								if (!Global_2405074.f_2485.f_5)
								{
									Global_2405074.f_2485.f_5 = 1;
								}
								else
								{
									func_76(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, uParam2);
								}
							}
							else
							{
								func_76(uParam0[0 /*3*/], 0, 0, 1, 0, uParam1, uParam2);
							}
							uParam0->f_16[0] = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
							return 1;
						}
					}
					break;
				
				case 1:
					func_195(uParam1, uParam2);
					break;
				
				case 2:
					return 0;
					break;
				
				case 3:
					return 0;
					break;
			}
		}
		else if (unk_0x1B1C5BD8506FCF84())
		{
			if (!unk_0x6D920201CB14E0AF())
			{
				if (unk_0xD786EA9B884E38E6())
				{
					func_195(uParam1, uParam2);
					Global_2405074.f_2485.f_1 = unk_0xEF64AA08472C4933();
				}
				else
				{
					return 0;
				}
			}
			else
			{
				unk_0x4A4DC4626419A059();
				func_195(uParam1, uParam2);
				if (!Global_2405074.f_2485.f_2)
				{
					Global_2405074.f_2485.f_5 = 1;
					return 1;
				}
			}
		}
		else
		{
			return 0;
		}
	}
	if (uParam1->f_5)
	{
		func_192(Global_2405074.f_552, &(Global_2405074.f_2485.f_57), &(Global_2405074.f_2485.f_90));
	}
	if (uParam2->f_7 && !Global_2405074.f_2485.f_4)
	{
		Global_2405074.f_2485.f_4 = 1;
		func_134(*uParam1, uParam1->f_3, uParam1, uParam2, 1, -1);
	}
	iVar4 = 0;
	if (uParam1->f_5)
	{
		iVar5 = 64;
	}
	else
	{
		iVar5 = 32;
	}
	if (Global_2405074.f_2485.f_1 > 0 || Global_2405074.f_2485 > 0)
	{
		if (uParam1->f_5 || unk_0x1B1C5BD8506FCF84())
		{
			bVar2 = false;
			while (bVar2 < Global_2405074.f_2485.f_1)
			{
				if (iVar4 < iVar5)
				{
					if (bVar2 <= Global_2405074.f_2485.f_3)
					{
						bVar2 = Global_2405074.f_2485.f_3 + 1;
					}
					if (bVar2 > (Global_2405074.f_2485.f_1 - 1))
					{
						bVar2 = (Global_2405074.f_2485.f_1 - 1);
					}
					if (bVar2 < 0)
					{
						bVar2 = false;
					}
					if (uParam1->f_5 && !bParam3)
					{
						unk_0x554745F3B60B5BE9(bVar2, &Var0, &fVar1);
						fVar1 = (fVar1 * 57.29578f);
					}
					else
					{
						unk_0xE83574976D653844(bVar2, &Var0, &(Var0.f_1), &(Var0.f_2));
					}
					if (uParam1->f_5 && !bParam3)
					{
						iVar3 = unk_0x7A065FDC4204B088(bVar2);
					}
					else
					{
						unk_0xBFADC1990AB9F737(bVar2, &iVar3);
					}
					func_134(Var0, fVar1, uParam1, uParam2, 0, iVar3);
					iVar4++;
					Global_2405074.f_2485.f_3 = bVar2;
				}
				else
				{
					return 0;
				}
				bVar2++;
			}
		}
		else
		{
			bVar2 = Global_2405074.f_2485.f_1;
		}
		if (Global_2405074.f_2485.f_1 == bVar2)
		{
			if (uParam1->f_5 && Global_2405074.f_2882)
			{
				func_128(&(Global_2405074.f_2485.f_6[0 /*10*/]), &(Global_2405074.f_2485.f_6[1 /*10*/]), &(Global_2405074.f_2485.f_6[2 /*10*/]));
			}
			if (uParam1->f_5 && func_75(Global_2405074.f_486))
			{
				if (Global_2405074.f_2485.f_2)
				{
					func_74(uParam0, &(Global_2405074.f_2485.f_6));
					func_127(*(uParam0[0 /*3*/]));
					return 1;
				}
				else
				{
					*(uParam0[0 /*3*/]) = { Global_2405074.f_2460 };
					func_76(uParam0[0 /*3*/], 0, 0, 0, 0, uParam1, uParam2);
					uParam0->f_16[0] = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
					func_127(*(uParam0[0 /*3*/]));
					return 1;
				}
			}
			else if (Global_2405074.f_2485.f_2)
			{
				func_74(uParam0, &(Global_2405074.f_2485.f_6));
				func_127(*(uParam0[0 /*3*/]));
				return 1;
			}
			else if (uParam1->f_5)
			{
				bVar2 = NETWORK::_NETWORK_GET_ROS_PRIVILEGE_25(0, Global_2405074.f_2485.f_1);
				unk_0x554745F3B60B5BE9(bVar2, uParam0[0 /*3*/], &(uParam0->f_16[0]));
				if (!func_92(uParam0[0 /*3*/], 0))
				{
					uParam0->f_16[0] = (uParam0->f_16[0] * 57.29578f);
					func_127(*(uParam0[0 /*3*/]));
					return 1;
				}
				else
				{
					*(uParam0[0 /*3*/]) = { Global_2405074.f_2460 };
					func_76(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, uParam2);
					uParam0->f_16[0] = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
					func_127(*(uParam0[0 /*3*/]));
					return 1;
				}
			}
			else
			{
				*(uParam0[0 /*3*/]) = { Global_2405074.f_2460 };
				func_76(uParam0[0 /*3*/], 0, 0, 0, 0, uParam1, uParam2);
				uParam0->f_16[0] = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
				func_127(*(uParam0[0 /*3*/]));
				return 1;
			}
		}
	}
	else
	{
		*(uParam0[0 /*3*/]) = { Global_2405074.f_2460 };
		if (uParam1->f_5 && func_75(Global_2405074.f_486))
		{
			if (!Global_2405074.f_2485.f_5)
			{
				Global_2405074.f_2485.f_5 = 1;
			}
			else
			{
				func_76(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, uParam2);
			}
		}
		else
		{
			if (uParam1->f_15)
			{
				bVar6 = false;
			}
			else
			{
				bVar6 = true;
			}
			func_76(uParam0[0 /*3*/], 0, bVar6, 0, 0, uParam1, uParam2);
		}
		uParam0->f_16[0] = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
		func_127(*(uParam0[0 /*3*/]));
		return 1;
	}
	return 0;
}

void func_127(struct<3> Param0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (iVar0 > 0)
		{
			Global_2405074.f_2619[(3 - iVar0) /*3*/] = { Global_2405074.f_2619[(3 - iVar0 + 1) /*3*/] };
		}
		iVar0++;
	}
	Global_2405074.f_2619[0 /*3*/] = { Param0 };
}

void func_128(var uParam0, var uParam1, var uParam2)
{
	if (func_75(Global_2405074.f_486) && func_133() < 4096)
	{
		func_132(uParam0, 0f);
		func_132(uParam1, uParam0->f_2);
		func_132(uParam2, uParam1->f_2);
	}
	else
	{
		func_131(uParam0);
		func_130(uParam2, uParam0->f_4);
		func_129(uParam1, uParam0->f_4, uParam2->f_4);
	}
}

void func_129(var uParam0, struct<3> Param1, struct<3> Param2)
{
	int iVar0;
	float fVar1;
	bool bVar2;
	bool bVar3;
	float fVar4;
	struct<10> Var5;
	
	fVar1 = -1f;
	Var5.f_2 = 1176256410;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2408010[iVar0 /*10*/] > 0)
		{
			bVar2 = SYSTEM::VDIST(Global_2408010[iVar0 /*10*/].f_4, Param1);
			bVar3 = SYSTEM::VDIST(Global_2408010[iVar0 /*10*/].f_4, Param2);
			fVar4 = (bVar2 + bVar3);
			fVar4 = (fVar4 * Global_2408010[iVar0 /*10*/].f_1);
			if (fVar4 > fVar1)
			{
				fVar1 = fVar4;
				Var5 = { Global_2408010[iVar0 /*10*/] };
			}
		}
		iVar0++;
	}
	*uParam0 = { Var5 };
}

void func_130(var uParam0, struct<3> Param1)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	struct<10> Var3;
	
	bVar1 = -1f;
	Var3.f_2 = 1176256410;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2408010[iVar0 /*10*/] > 0)
		{
			bVar2 = SYSTEM::VDIST(Global_2408010[iVar0 /*10*/].f_4, Param1);
			bVar2 = (bVar2 * Global_2408010[iVar0 /*10*/].f_1);
			if (bVar2 > bVar1)
			{
				bVar1 = bVar2;
				Var3 = { Global_2408010[iVar0 /*10*/] };
			}
		}
		iVar0++;
	}
	*uParam0 = { Var3 };
}

void func_131(var uParam0)
{
	int iVar0;
	float fVar1;
	struct<10> Var2;
	
	fVar1 = -1f;
	Var2.f_2 = 1176256410;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2408010[iVar0 /*10*/] > 0)
		{
			if (Global_2408010[iVar0 /*10*/].f_1 > fVar1)
			{
				fVar1 = Global_2408010[iVar0 /*10*/].f_1;
				Var2 = { Global_2408010[iVar0 /*10*/] };
			}
		}
		iVar0++;
	}
	*uParam0 = { Var2 };
}

void func_132(var uParam0, float fParam1)
{
	int iVar0;
	float fVar1;
	struct<10> Var2;
	
	fVar1 = 999999.9f;
	Var2.f_2 = 1176256410;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2408010[iVar0 /*10*/] > 0)
		{
			if (Global_2408010[iVar0 /*10*/].f_2 < fVar1 && Global_2408010[iVar0 /*10*/].f_2 > fParam1)
			{
				fVar1 = Global_2408010[iVar0 /*10*/].f_2;
				Var2 = { Global_2408010[iVar0 /*10*/] };
			}
		}
		iVar0++;
	}
	*uParam0 = { Var2 };
}

int func_133()
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2408010[iVar0 /*10*/] > iVar1)
		{
			iVar1 = Global_2408010[iVar0 /*10*/];
		}
		iVar0++;
	}
	return iVar1;
}

void func_134(struct<3> Param0, float fParam1, var uParam2, var uParam3, bool bParam4, int iParam5)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	var uVar7;
	int iVar8;
	bool bVar9;
	void fVar10;
	int iVar11;
	struct<3> Var12;
	bool bVar13;
	int iVar14;
	struct<3> Var15;
	struct<3> Var16;
	float fVar17;
	int iVar18;
	struct<10> Var19;
	bool bVar20;
	bool bVar21;
	
	fVar10 = 0;
	iVar8 = 0;
	bVar9 = false;
	if (uParam2->f_5)
	{
		if (Global_2405074.f_486 == 1)
		{
			if (ENTITY::IS_ENTITY_PLAYING_ANIM((Global_2405074.f_509.f_2 - Param0.f_2)) < 25f)
			{
				iVar8++;
			}
		}
		else
		{
			iVar8++;
		}
	}
	else
	{
		iVar8++;
	}
	if (uParam2->f_5)
	{
		if (func_189(PLAYER::PLAYER_ID()))
		{
			if (iParam5 == -1)
			{
				bVar9 = true;
			}
			else if (!iParam5 & 1 == 0)
			{
				bVar9 = true;
			}
		}
		else if (iParam5 == -1)
		{
			iVar8 += 2;
		}
		else if (!iParam5 & 1 == 0)
		{
			iVar8 += 2;
		}
	}
	else
	{
		iVar8 += 2;
	}
	if (uParam2->f_5 && uParam2->f_6)
	{
		if (!func_188(Param0, 1084227584, 1123024896, 0))
		{
			iVar8 += 4;
		}
	}
	else
	{
		iVar8 += 4;
	}
	if (uParam2->f_5)
	{
		if (!unk_0x99471A6823E7435C(unk_0x9B0761B4C3EB8BC7(), Param0, 65f))
		{
			iVar8 += 8;
			iVar8 += 16;
		}
		else if (!unk_0x99471A6823E7435C(unk_0x9B0761B4C3EB8BC7(), Param0, 20f))
		{
			iVar8 += 8;
		}
	}
	else
	{
		iVar8 += 8;
		iVar8 += 16;
	}
	if (uParam2->f_5)
	{
		if (!func_187(Param0, uParam3->f_5, 1, 1, 1, 1, 1, 1))
		{
			iVar8 += 32;
		}
	}
	else
	{
		iVar8 += 32;
	}
	bVar13 = true;
	iVar11 = 0;
	while (iVar11 < 2)
	{
		if (SYSTEM::VMAG(uParam3->f_13[iVar11 /*3*/]) > 0f)
		{
			if (!SYSTEM::VDIST(Param0, uParam3->f_13[iVar11 /*3*/]) > uParam3->f_20[iVar11])
			{
				bVar13 = false;
			}
		}
		iVar11++;
	}
	if (bVar13)
	{
		if ((SYSTEM::VMAG(uParam3->f_23) > 0f && SYSTEM::VMAG(uParam3->f_26) > 0f) && uParam3->f_29 > 0f)
		{
			if (HUD::GET_BLIP_INFO_ID_TYPE(Param0, uParam3->f_23, uParam3->f_26, uParam3->f_29, 0, 1))
			{
				bVar13 = false;
			}
		}
	}
	if (bVar13)
	{
		iVar8 += 256;
	}
	if (uParam2->f_5)
	{
		if (func_181(Param0, fParam1, uParam2->f_15, func_186(1), uParam2->f_16, 0, 1123024896, 1101004800, 1101004800, 1084227584, 1092616192, 0, 0, 0))
		{
			iVar8 += 64;
			iVar8 += 128;
		}
		else
		{
			fVar10 = Global_2405074.f_3;
		}
	}
	else if (!func_178(Param0, 25f, PLAYER::PLAYER_ID(), 1, 1))
	{
		if (uParam2->f_15)
		{
			fVar1 = 3.5f;
		}
		else
		{
			fVar1 = 1f;
		}
		if (!func_174(Param0, fVar1, 1, 1, 120f, 0, -1, 0f, 1))
		{
			iVar8 += 128;
			iVar8 += 64;
		}
		else if (!func_174(Param0, fVar1, 1, 1, 60f, 0, -1, 0f, 1))
		{
			iVar8 += 64;
		}
	}
	if (uParam2->f_5)
	{
		if (!Global_2405074.f_695)
		{
			Var12 = { Global_2405074.f_509 };
			if (Global_2405074.f_486 == 26)
			{
				Var12 = { Global_2405074.f_552.f_18 };
			}
			if (!func_108(Param0, 0.5f))
			{
				if (func_114(Var12))
				{
					if (!func_77(&Param0, 0, 0, 0, 1) && !func_173(&Param0, 0))
					{
						iVar8 += 512;
					}
				}
				else if (!func_173(&Param0, 0))
				{
					iVar8 += 512;
				}
			}
		}
		else
		{
			iVar8 += 512;
		}
	}
	else if (!func_172(Param0, 2.5f, 3))
	{
		iVar8 += 512;
	}
	if (uParam2->f_5)
	{
		if (!(func_171(PLAYER::PLAYER_ID()) && func_170(PLAYER::PLAYER_ID())))
		{
			if (!func_169(&Param0, &(Global_2405074.f_2485.f_90), 0, 1065353216))
			{
				iVar8 += 1024;
			}
		}
		else
		{
			iVar8 += 1024;
		}
	}
	else
	{
		iVar8 += 1024;
	}
	if (uParam2->f_5)
	{
		if (!func_170(PLAYER::PLAYER_ID()))
		{
			if (!func_168(Param0, &(Global_2405074.f_2485.f_57), &(Global_2405074.f_2485.f_90), 1073741824))
			{
				iVar8 += 2048;
			}
		}
		else
		{
			iVar8 += 2048;
		}
	}
	else
	{
		iVar8 += 2048;
	}
	if (func_167(Param0))
	{
		if (uParam2->f_5)
		{
			if (func_75(Global_2405074.f_486))
			{
				if (func_117(Param0, 0.01f))
				{
					iVar8 += 4096;
				}
			}
			else
			{
				iVar8 += 4096;
			}
		}
		else
		{
			iVar8 += 4096;
		}
	}
	if (uParam2->f_5)
	{
		if (func_166(Param0))
		{
			iVar8 += 8192;
		}
	}
	else
	{
		iVar8 += 8192;
	}
	if (!Global_2405074.f_45.f_55)
	{
		iVar8 += 16384;
	}
	else if (uParam2->f_5)
	{
		if (!iParam5 & 1 == 0)
		{
			if (unk_0x0B1B45E748AD48BA(CUTSCENE::IS_CUTSCENE_PLAYING(Param0)))
			{
				iVar8 += 16384;
			}
		}
	}
	else if (!iParam5 & 2 == 0)
	{
		if (unk_0x0B1B45E748AD48BA(CUTSCENE::IS_CUTSCENE_PLAYING(Param0)))
		{
			iVar8 += 16384;
		}
	}
	if (uParam2->f_5)
	{
		if (!Global_2405074.f_695)
		{
			if (!func_109(&Param0, 0, 0))
			{
				iVar8 = (iVar8 + 32768);
			}
		}
		else
		{
			iVar8 = (iVar8 + 32768);
		}
	}
	else
	{
		iVar8 = (iVar8 + 32768);
	}
	if (!func_92(&Param0, 0))
	{
		iVar8 = (iVar8 + 65536);
	}
	else
	{
		iVar14 = func_116(Param0, 1008981770);
		if (iVar14 > -1)
		{
			func_165(Param0, &Var15, &Var16, &fVar17);
			if (!func_160(&(Global_2405074.f_45[iVar14 /*12*/]), Var15, Var16, fVar17))
			{
				iVar8 = -1;
			}
		}
		else
		{
			iVar8 = -1;
		}
	}
	if (func_95(Param0, 1056964608))
	{
		iVar8 = -1;
	}
	if (uParam3->f_33)
	{
		if (PED::IS_ANY_PED_NEAR_POINT(Param0.x, Param0.f_1, (Param0.f_2 + 1f), 0.3f))
		{
			iVar8 = -1;
		}
	}
	if (uParam3->f_34)
	{
		if (VEHICLE::IS_ANY_VEHICLE_NEAR_POINT(Param0.x, Param0.f_1, (Param0.f_2 + 1f), 1f))
		{
			iVar8 = -1;
		}
	}
	if (uParam2->f_5)
	{
	}
	else if (func_159(Param0, 1, 0, uParam2->f_15, 1060320051, 1086324736, 1065353216, 1088421888))
	{
		iVar8 = 0;
	}
	Var19.f_2 = 1176256410;
	bVar20 = false;
	bVar21 = false;
	if (Global_2405074.f_2882 && uParam2->f_5)
	{
		if (iVar8 > 0)
		{
			if (bParam4)
			{
				uParam3->f_4 = 0;
				bVar4 = false;
			}
			else
			{
				bVar4 = true;
			}
			if (uParam2->f_21)
			{
				fVar0 = func_151(Param0, uParam2->f_18, uParam3->f_6, uParam3->f_4, bVar4, fVar10, &(Var19.f_8));
			}
			else
			{
				fVar0 = func_151(Param0, Global_2405074.f_2460, uParam3->f_6, uParam3->f_4, bVar4, fVar10, &(Var19.f_8));
			}
			if (bVar9)
			{
				fVar0 = (fVar0 * 3f);
			}
			if (func_75(Global_2405074.f_486) && iVar8 < 4096)
			{
				Var19.f_2 = func_149(Param0);
			}
			uVar7 = func_140(Param0, 1, 0, 0, 0, 0);
			Var19.f_4 = { Param0 };
			Var19.f_7 = fParam1;
			Var19 = iVar8;
			Var19.f_1 = fVar0;
			Var19.f_9 = uVar7;
			func_139(Var19);
			Global_2405074.f_2485.f_2 = 1;
		}
	}
	else
	{
		iVar18 = 0;
		while (iVar18 < 5)
		{
			if (iVar8 >= Global_2405074.f_2485.f_6[iVar18 /*10*/])
			{
				if (uParam2->f_5)
				{
					if (!bVar20)
					{
						if (bParam4)
						{
							uParam3->f_4 = 0;
							bVar4 = false;
						}
						else
						{
							bVar4 = true;
						}
						if (uParam2->f_21)
						{
							fVar0 = func_151(Param0, uParam2->f_18, uParam3->f_6, uParam3->f_4, bVar4, fVar10, &(Var19.f_8));
						}
						else
						{
							fVar0 = func_151(Param0, Global_2405074.f_2460, uParam3->f_6, uParam3->f_4, bVar4, fVar10, &(Var19.f_8));
						}
						if (bVar9)
						{
							fVar0 = (fVar0 * 3f);
						}
						bVar20 = true;
					}
					if ((func_75(Global_2405074.f_486) && iVar8 == Global_2405074.f_2485.f_6[iVar18 /*10*/]) && iVar8 < 4096)
					{
						if (!bVar21)
						{
							fVar2 = func_149(Param0);
							bVar21 = true;
						}
						if (fVar2 < Global_2405074.f_2485.f_6[iVar18 /*10*/].f_2)
						{
							Var19.f_4 = { Param0 };
							Var19.f_7 = fParam1;
							Var19 = iVar8;
							Var19.f_1 = fVar0;
							Var19.f_2 = fVar2;
							func_138(Var19, iVar18);
							Global_2405074.f_2485.f_2 = 1;
							return;
						}
					}
					else if (iVar8 > Global_2405074.f_2485.f_6[iVar18 /*10*/] || (iVar8 == Global_2405074.f_2485.f_6[iVar18 /*10*/] && fVar0 > Global_2405074.f_2485.f_6[iVar18 /*10*/].f_1))
					{
						Var19.f_4 = { Param0 };
						Var19.f_7 = fParam1;
						Var19 = iVar8;
						Var19.f_1 = fVar0;
						func_138(Var19, iVar18);
						Global_2405074.f_2485.f_2 = 1;
						return;
					}
				}
				else
				{
					if (!bVar20)
					{
						if (uParam2->f_15)
						{
							fVar1 = 3.5f;
						}
						else
						{
							fVar1 = 1f;
						}
						bVar5 = func_136(Param0, fVar1, 1, 1, 0, -1, 1);
						bVar6 = func_140(Param0, 1, 1, 1, 1, 0);
						if (bVar5 > 15f && bVar6 > 5f)
						{
							fVar3 = func_135(bVar5, 0f, 80f, 160f, 1f, 1.2f);
						}
						else
						{
							fVar3 = func_135(bVar6, 0f, 80f, 160f, 0f, 0.2f);
						}
						bVar20 = true;
					}
					if (iVar8 > Global_2405074.f_2485.f_6[iVar18 /*10*/] || (iVar8 == Global_2405074.f_2485.f_6[iVar18 /*10*/] && fVar3 > Global_2405074.f_2485.f_6[iVar18 /*10*/].f_3))
					{
						Var19.f_4 = { Param0 };
						Var19.f_7 = fParam1;
						Var19 = iVar8;
						Var19.f_3 = fVar3;
						func_138(Var19, iVar18);
						Global_2405074.f_2485.f_2 = 1;
						return;
					}
				}
			}
			iVar18++;
		}
	}
}

float func_135(bool bParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5)
{
	float fVar0;
	
	if (fParam1 >= fParam3)
	{
		fParam1 = (fParam3 * 0.5f);
	}
	if (bParam0 < fParam1)
	{
		bParam0 = fParam1;
	}
	if (bParam0 > fParam3)
	{
		bParam0 = fParam3;
	}
	if (fParam2 < fParam3 && fParam2 > fParam1)
	{
		if (bParam0 < fParam2)
		{
			fVar0 = (fParam4 + ((1f - fParam4) - ((1f - fParam4) * ((fParam2 - bParam0) / (fParam2 - fParam1)))));
		}
		else
		{
			fVar0 = (fParam5 + ((1f - fParam5) - ((1f - fParam5) * ((bParam0 - fParam2) / (fParam3 - fParam2)))));
		}
	}
	else
	{
		fVar0 = (fParam4 + (((bParam0 - fParam1) / (fParam3 - fParam1)) * (fParam5 - fParam4)));
	}
	return fVar0;
}

float func_136(struct<3> Param0, float fParam1, int iParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	
	bVar2 = false;
	bVar3 = 1E+13f;
	if (iParam2 && !bParam4)
	{
		if (func_6(PLAYER::PLAYER_ID(), 1, 1))
		{
			if (!PED::REMOVE_SCENARIO_BLOCKING_AREA())
			{
				if (CAM::IS_SPHERE_VISIBLE(Param0, fParam1))
				{
					bVar4 = SYSTEM::VDIST2(Param0, NETWORK::NETWORK_ARE_HANDLES_THE_SAME(unk_0x9B0761B4C3EB8BC7(), 0));
					if (bVar4 < bVar3)
					{
						bVar3 = bVar4;
						bVar2 = true;
					}
				}
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		bVar1 = iVar0;
		if (func_6(bVar1, 1, 1))
		{
			if (!func_200(bVar1, 0) && NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), bVar1))
			{
				if (iParam2 == 1 || (iParam2 == 0 && bVar1 != PLAYER::PLAYER_ID()))
				{
					if (func_137(bVar1) || !bParam6)
					{
						if (!bParam4)
						{
							if ((iParam3 || (iParam3 == 0 && unk_0x6CC163E30ECE0790(bVar1) != unk_0x6CC163E30ECE0790(PLAYER::PLAYER_ID()))) || unk_0x6CC163E30ECE0790(bVar1) == -1)
							{
								if (NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(bVar1, Param0, fParam1))
								{
									bVar4 = SYSTEM::VDIST2(Param0, NETWORK::NETWORK_ARE_HANDLES_THE_SAME(PLAYER::GET_PLAYER_PED(bVar1), 0));
									if (bVar4 < bVar3)
									{
										bVar3 = bVar4;
										bVar2 = true;
									}
								}
							}
						}
						else if (unk_0x6CC163E30ECE0790(bVar1) != iParam5 || unk_0x6CC163E30ECE0790(bVar1) == -1)
						{
							if (NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(bVar1, Param0, fParam1))
							{
								bVar4 = SYSTEM::VDIST2(Param0, NETWORK::NETWORK_ARE_HANDLES_THE_SAME(PLAYER::GET_PLAYER_PED(bVar1), 0));
								if (bVar4 < bVar3)
								{
									bVar3 = bVar4;
									bVar2 = true;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar2)
	{
		return SYSTEM::SQRT(bVar3);
	}
	return -1f;
}

int func_137(bool bParam0)
{
	if (ENTITY::IS_ENTITY_VISIBLE_TO_SCRIPT(PLAYER::GET_PLAYER_PED(bParam0)) || Global_2425869[bParam0 /*443*/].f_249)
	{
		return 1;
	}
	return 0;
}

void func_138(struct<10> Param0, int iParam1)
{
	struct<10> Var0;
	
	Var0.f_2 = 1176256410;
	Var0 = { Global_2405074.f_2485.f_6[iParam1 /*10*/] };
	Global_2405074.f_2485.f_6[iParam1 /*10*/] = { Param0 };
	if (iParam1 < 4)
	{
		func_138(Var0, iParam1 + 1);
	}
}

void func_139(struct<10> Param0)
{
	int iVar0;
	struct<10> Var1;
	int iVar2;
	float fVar3;
	int iVar4;
	
	Var1.f_2 = 1176256410;
	iVar2 = func_133();
	if (Param0 > iVar2)
	{
		iVar2 = Param0;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2408010[iVar0 /*10*/] < iVar2)
		{
			Global_2408010[iVar0 /*10*/] = { Var1 };
		}
		iVar0++;
	}
	if (Param0 < iVar2)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2408010[iVar0 /*10*/] == 0)
		{
			Global_2408010[iVar0 /*10*/] = { Param0 };
			return;
		}
		iVar0++;
	}
	fVar3 = 9999.9f;
	iVar4 = -1;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2408010[iVar0 /*10*/] > 0)
		{
			if (Global_2408010[iVar0 /*10*/].f_1 < fVar3)
			{
				fVar3 = Global_2408010[iVar0 /*10*/].f_1;
				iVar4 = iVar0;
			}
		}
		iVar0++;
	}
	if (iVar4 > -1)
	{
		Global_2408010[iVar4 /*10*/] = { Param0 };
	}
}

var func_140(struct<3> Param0, bool bParam1, bool bParam2, int iParam3, bool bParam4, int iParam5)
{
	int iVar0;
	void fVar1;
	void fVar2;
	void fVar3;
	bool bVar4;
	struct<3> Var5;
	struct<3> Var6;
	bool bVar7;
	
	fVar3 = 999999.9f;
	bVar4 = false;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		bVar7 = iVar0;
		if (func_6(bVar7, 1, 1) || (iParam5 == 1 && func_6(bVar7, 0, 0)))
		{
			if (!bVar7 == PLAYER::PLAYER_ID() || iParam3 == 1)
			{
				bVar4 = false;
				if (bParam1)
				{
					if (func_141(bVar7))
					{
						bVar4 = true;
					}
				}
				if (bParam2)
				{
					if (unk_0x6CC163E30ECE0790(bVar7) == unk_0x6CC163E30ECE0790(PLAYER::PLAYER_ID()))
					{
						if (!unk_0x6CC163E30ECE0790(bVar7) == -1 || !func_118(PLAYER::PLAYER_ID(), 1))
						{
							bVar4 = true;
						}
					}
				}
				if (bVar4)
				{
					if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), bVar7) || !bParam4)
					{
						if (func_137(bVar7))
						{
							Var5 = { func_8(bVar7) };
							if (!bVar7 == PLAYER::PLAYER_ID())
							{
								Var6 = { unk_0x20B541C8E40D2E74(PLAYER::GET_PLAYER_PED(bVar7)) };
							}
							else
							{
								Var6 = { Var5 };
							}
							if (!bParam4)
							{
								if (Var5.f_2 < -100f)
								{
									Var5.f_2 = Param0.f_2;
								}
								if (Var6.f_2 < -100f)
								{
									Var6.f_2 = Param0.f_2;
								}
							}
							fVar1 = HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Param0, Var5, 1);
							fVar2 = HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Param0, Var6, 1);
							if (fVar1 < fVar3)
							{
								fVar3 = fVar1;
							}
							if (fVar2 < fVar3)
							{
								fVar3 = fVar2;
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return fVar3;
}

int func_141(bool bParam0)
{
	if (func_6(bParam0, 0, 1))
	{
		if (!func_147(bParam0))
		{
			if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), bParam0))
			{
				if (!unk_0x6CC163E30ECE0790(bParam0) == unk_0x6CC163E30ECE0790(PLAYER::PLAYER_ID()))
				{
					if (func_104(PLAYER::PLAYER_ID(), 1, 0))
					{
						if (!func_146(unk_0x6CC163E30ECE0790(bParam0), unk_0x6CC163E30ECE0790(PLAYER::PLAYER_ID()), 0))
						{
							return 1;
						}
					}
					else
					{
						return 1;
					}
				}
				else if (unk_0x6CC163E30ECE0790(bParam0) == -1 && unk_0x6CC163E30ECE0790(PLAYER::PLAYER_ID()) == -1)
				{
					if (!func_104(PLAYER::PLAYER_ID(), 1, 0))
					{
						if (!func_142(bParam0))
						{
							return 1;
						}
					}
					else
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_142(bool bParam0)
{
	if (func_145(PLAYER::PLAYER_ID(), bParam0))
	{
		return 1;
	}
	Global_2515173 = { func_144(bParam0) };
	if (NETWORK::NETWORK_IS_FRIEND_HANDLE_ONLINE(&Global_2515173))
	{
		return 1;
	}
	if (func_143(PLAYER::PLAYER_ID(), bParam0))
	{
		return 1;
	}
	return 0;
}

int func_143(bool bParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = func_12(bParam0);
	if (!iVar0 == func_13())
	{
		if (iVar0 == func_12(bParam1))
		{
			return 1;
		}
	}
	return 0;
}

struct<13> func_144(bool bParam0)
{
	struct<13> Var0;
	
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(bParam0, &Var0, 13);
	return Var0;
}

int func_145(bool bParam0, bool bParam1)
{
	if (INTERIOR::GET_INTERIOR_GROUP_ID())
	{
		Global_2515173 = { func_144(bParam0) };
		Global_2515186 = { func_144(bParam1) };
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

int func_146(int iParam0, int iParam1, int iParam2)
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
					return unk_0xCE990E643CD9D0E5(Global_4456448.f_541, false);
				
				case 1:
					return unk_0xCE990E643CD9D0E5(Global_4456448.f_541, true);
				
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

int func_147(bool bParam0)
{
	if (func_200(bParam0, 0))
	{
		return 1;
	}
	if (func_148())
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

bool func_148()
{
	return unk_0xCE990E643CD9D0E5(Global_2359302, 3);
}

bool func_149(struct<3> Param0)
{
	var uVar0;
	
	return func_150(Param0, &(Global_2405074.f_45), &uVar0);
}

bool func_150(struct<3> Param0, var uParam1, var uParam2)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	
	iVar3 = -1;
	bVar2 = 1E+07f;
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if ((uParam1[iVar0 /*12*/])->f_9)
		{
			bVar1 = 0f;
			switch ((uParam1[iVar0 /*12*/])->f_10)
			{
				case 0:
					bVar1 = SYSTEM::VDIST(*(uParam1[iVar0 /*12*/]), Param0);
					bVar1 = (bVar1 - ((uParam1[iVar0 /*12*/])->f_6 + (IntToFloat(Global_2405074.f_2728) * (uParam1[iVar0 /*12*/])->f_8)));
					break;
				
				case 1:
				case 2:
					if (Param0.x < (*uParam1)[iVar0 /*12*/])
					{
						bVar1 = (bVar1 + ((*uParam1)[iVar0 /*12*/] - Param0.x));
					}
					else if (Param0.x > (uParam1[iVar0 /*12*/])->f_3)
					{
						bVar1 = (bVar1 + (Param0.x - (uParam1[iVar0 /*12*/])->f_3));
					}
					if (Param0.f_1 < (uParam1[iVar0 /*12*/])->f_1)
					{
						bVar1 = (bVar1 + ((uParam1[iVar0 /*12*/])->f_1 - Param0.f_1));
					}
					else if (Param0.f_1 > (uParam1[iVar0 /*12*/])->f_3.f_1)
					{
						bVar1 = (bVar1 + (Param0.f_1 - (uParam1[iVar0 /*12*/])->f_3.f_1));
					}
					if (Param0.f_2 < (uParam1[iVar0 /*12*/])->f_2)
					{
						bVar1 = (bVar1 + ((uParam1[iVar0 /*12*/])->f_2 - Param0.f_2));
					}
					else if (Param0.f_2 > (uParam1[iVar0 /*12*/])->f_3.f_2)
					{
						bVar1 = (bVar1 + (Param0.f_2 - (uParam1[iVar0 /*12*/])->f_3.f_2));
					}
					break;
			}
			if (bVar1 < bVar2)
			{
				bVar2 = bVar1;
				iVar3 = iVar0;
			}
		}
		iVar0++;
	}
	if (bVar2 < 0f)
	{
		bVar2 = 0f;
	}
	*uParam2 = iVar3;
	return bVar2;
}

float func_151(struct<3> Param0, struct<3> Param1, bool bParam2, bool bParam3, bool bParam4, void fParam5, var uParam6)
{
	float fVar0;
	float fVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	float fVar5;
	
	fVar1 = 1f;
	if (fParam5 > 0)
	{
		fVar1 = (SYSTEM::TO_FLOAT(fParam5) / SYSTEM::TO_FLOAT(8));
	}
	if (bParam2)
	{
		fVar0 = func_135(SYSTEM::VDIST(Param0, Param1), 0f, 0f, 200f, 1f, 0.1f);
		fVar1 = (fVar1 * (fVar0 * 0.95f));
	}
	*uParam6 = 1E+07f;
	bVar4 = func_140(Param0, 1, 0, 0, 1, 0);
	fVar0 = func_135(bVar4, 0f, func_158(), func_156(), 0f, 0.3f);
	fVar1 = (fVar1 * (fVar0 * 0.95f));
	if (bVar4 < *uParam6)
	{
		bVar4 = bVar4;
	}
	bVar4 = func_154(Param0);
	fVar0 = func_135(bVar4, 0f, 0f, 60f, 0.5f, 1f);
	fVar1 = (fVar1 * (fVar0 * 0.95f));
	if (bVar4 < *uParam6)
	{
		bVar4 = bVar4;
	}
	fVar5 = 100f;
	if (unk_0x6CC163E30ECE0790(PLAYER::PLAYER_ID()) == -1 && !func_118(PLAYER::PLAYER_ID(), 1))
	{
		fVar5 = 1f;
	}
	bVar4 = func_153(Param0, PLAYER::PLAYER_ID(), 0);
	fVar0 = func_135(bVar4, 0f, 0f, fVar5, 0f, 1f);
	fVar1 = (fVar1 * (fVar0 * 0.95f));
	if (bVar4 < *uParam6)
	{
		bVar4 = bVar4;
	}
	if (bParam3)
	{
		if (func_152(Param0, &bVar2, &bVar3))
		{
			if (bVar2 < 10f)
			{
				bVar2 = 10f;
			}
			if (bVar3 < 0.5f)
			{
				bVar3 = 0.5f;
			}
			fVar0 = func_135(bVar2, 0f, 0f, 200f, 1f, 0.1f);
			fVar0 = (fVar0 + func_135(bVar3, 0f, 0f, 6f, 1f, 0.5f));
			fVar0 = (fVar0 * 0.5f);
			fVar1 = (fVar1 * (fVar0 * 0.85f));
		}
	}
	if (bParam4)
	{
		fVar0 = func_135(SYSTEM::VDIST(Global_2405074.f_509, Param0), 0f, 100f, 200f, 0.1f, 0.1f);
		fVar1 = (fVar1 * (fVar0 * 0.9f));
	}
	return fVar1;
}

int func_152(struct<3> Param0, var uParam1, var uParam2)
{
	struct<3> Var0;
	int iVar1;
	var uVar2;
	var uVar3;
	
	iVar1 = unk_0x2B952A1C251A8004(Param0, 1, &uVar3, &uVar2, 1, 3f, 0f);
	if (PATHFIND::IS_VEHICLE_NODE_ID_VALID(iVar1))
	{
		PATHFIND::GET_VEHICLE_NODE_POSITION(iVar1, &Var0);
		*uParam1 = SYSTEM::VDIST(Param0.x, Param0.f_1, 0f, Var0.x, Var0.f_1, 0f);
		*uParam2 = ENTITY::IS_ENTITY_PLAYING_ANIM((Param0.f_2 - Var0.f_2));
		return 1;
	}
	return 0;
}

bool func_153(struct<3> Param0, bool bParam1, int iParam2)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	
	bVar0 = 999999.9f;
	if (func_6(bParam1, 0, 1))
	{
		iVar2 = 0;
		while (iVar2 < 32)
		{
			if (!bParam1 == iVar2 || iParam2 == 1)
			{
				bVar3 = iVar2;
				if (func_6(bVar3, 0, 1))
				{
					if (unk_0x6CC163E30ECE0790(bVar3) != unk_0x6CC163E30ECE0790(bParam1) || (unk_0x6CC163E30ECE0790(bVar3) == -1 && unk_0x6CC163E30ECE0790(bParam1) == -1))
					{
						if (Global_2417956.f_261[iVar2])
						{
							bVar1 = SYSTEM::VDIST(Global_2417956.f_131[iVar2 /*3*/], Param0);
							if (bVar1 < bVar0)
							{
								bVar0 = bVar1;
							}
						}
					}
				}
			}
			iVar2++;
		}
	}
	return bVar0;
}

bool func_154(struct<3> Param0)
{
	void fVar0;
	void fVar1;
	int iVar2;
	struct<3> Var3;
	var uVar4[32];
	int iVar5;
	
	iVar5 = PED::GET_PED_NEARBY_PEDS(unk_0x9B0761B4C3EB8BC7(), &uVar4, 2);
	fVar0 = 1E+07f;
	iVar2 = 0;
	while (iVar2 < iVar5)
	{
		if (MISC::IS_BIT_SET(uVar4[iVar2]))
		{
			if (!PED::IS_PED_IN_ANY_POLICE_VEHICLE(uVar4[iVar2], 0))
			{
				if (func_155(uVar4[iVar2]))
				{
					Var3 = { NETWORK::NETWORK_ARE_HANDLES_THE_SAME(uVar4[iVar2], 1) };
					fVar1 = HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Param0, Var3, 1);
					if (fVar1 < fVar0)
					{
						fVar0 = fVar1;
					}
				}
			}
		}
		iVar2++;
	}
	if (Global_2405074.f_2927)
	{
		if (Global_969055.f_267 > 0)
		{
			iVar2 = 0;
			while (iVar2 < Global_969055.f_267)
			{
				if (MISC::IS_BIT_SET(Global_969055.f_152[iVar2]))
				{
					if (!PED::IS_PED_IN_ANY_POLICE_VEHICLE(Global_969055.f_152[iVar2], 0))
					{
						if (func_155(Global_969055.f_152[iVar2]))
						{
							Var3 = { NETWORK::NETWORK_ARE_HANDLES_THE_SAME(Global_969055.f_152[iVar2], 1) };
							fVar1 = HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Param0, Var3, 1);
							if (fVar1 < fVar0)
							{
								fVar0 = fVar1;
							}
						}
					}
				}
				iVar2++;
			}
		}
	}
	return fVar0;
}

int func_155(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam0);
	switch (PED::GET_RELATIONSHIP_BETWEEN_GROUPS(iVar0, 1862763509))
	{
		case 3:
		case 5:
			return 1;
			break;
	}
	if (PED::_DOES_RELATIONSHIP_GROUP_EXIST(Global_1574973[PLAYER::PLAYER_ID()]))
	{
		switch (PED::GET_RELATIONSHIP_BETWEEN_GROUPS(iVar0, Global_1574973[PLAYER::PLAYER_ID()]))
		{
			case 3:
			case 5:
				return 1;
				break;
			}
	}
	if (Global_1590682[PLAYER::PLAYER_ID() /*883*/] == 0)
	{
		iVar1 = unk_0x6CC163E30ECE0790(PLAYER::PLAYER_ID());
		if (iVar1 > -1 && iVar1 < 4)
		{
			if (PED::_DOES_RELATIONSHIP_GROUP_EXIST(Global_1574683[iVar1]))
			{
				switch (PED::GET_RELATIONSHIP_BETWEEN_GROUPS(iVar0, Global_1574683[iVar1]))
				{
					case 3:
					case 5:
						return 1;
						break;
					}
				}
			}
	}
	return 0;
}

float func_156()
{
	if (func_157())
	{
		if ((VEHICLE::IS_THIS_MODEL_A_PLANE(Global_2405074.f_45.f_67) || VEHICLE::IS_THIS_MODEL_A_HELI(Global_2405074.f_45.f_67)) || Global_2405074.f_45.f_67 == joaat("rhino"))
		{
			return 640f;
		}
		else
		{
			return 320f;
		}
	}
	return 160f;
}

int func_157()
{
	if (Global_2405074.f_45.f_65 && !Global_2405074.f_45.f_301)
	{
		if (!func_147(PLAYER::PLAYER_ID()))
		{
			return 1;
		}
	}
	return 0;
}

float func_158()
{
	if (func_157())
	{
		if ((VEHICLE::IS_THIS_MODEL_A_PLANE(Global_2405074.f_45.f_67) || VEHICLE::IS_THIS_MODEL_A_HELI(Global_2405074.f_45.f_67)) || Global_2405074.f_45.f_67 == joaat("rhino"))
		{
			return 320f;
		}
		else
		{
			return 160f;
		}
	}
	return 80f;
}

int func_159(struct<3> Param0, int iParam1, int iParam2, bool bParam3, int iParam4, float fParam5, float fParam6, float fParam7)
{
	float fVar0;
	
	fVar0 = iParam4;
	if (bParam3)
	{
		fVar0 = fParam5;
	}
	if ((((fParam5 > 0f && VEHICLE::IS_ANY_VEHICLE_NEAR_POINT(Param0, fParam5)) || (fVar0 > 0f && PED::IS_ANY_PED_NEAR_POINT(Param0, fVar0))) || ((iParam2 == 1 && fParam6 > 0f) && OBJECT::IS_ANY_OBJECT_NEAR_POINT(Param0, fParam6, false))) || ((iParam1 == 1 && fParam7 > 0f) && OBJECT::IS_ANY_OBJECT_NEAR_POINT(Param0, fParam7, true)))
	{
		return 1;
	}
	return 0;
}

int func_160(var uParam0, struct<3> Param1, struct<3> Param2, float fParam3)
{
	switch (uParam0->f_10)
	{
		case 0:
			if (func_164(*uParam0, uParam0->f_6, Param1, Param2, fParam3))
			{
				return 1;
			}
			break;
		
		case 1:
			if (func_163(*uParam0, uParam0->f_3, Param1, Param2, fParam3))
			{
				return 1;
			}
			break;
		
		case 2:
			if (func_161(*uParam0, uParam0->f_3, uParam0->f_6, Param1, Param2, fParam3))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_161(struct<3> Param0, struct<3> Param1, float fParam2, struct<3> Param3, struct<3> Param4, float fParam5)
{
	struct<3> Var0[8];
	int iVar1;
	
	func_162(Param0, Param1, fParam2, &Var0);
	iVar1 = 0;
	while (iVar1 < 8)
	{
		if (!HUD::GET_BLIP_INFO_ID_TYPE(Var0[iVar1 /*3*/], Param3, Param4, fParam5, 0, 1))
		{
			return 0;
		}
		iVar1++;
	}
	return 1;
}

void func_162(struct<3> Param0, struct<3> Param1, float fParam2, var uParam3)
{
	struct<3> Var0;
	struct<3> Var1;
	var uVar2;
	var uVar3;
	
	if (Param0.f_2 == Param1.f_2)
	{
		Param1.f_2 = (Param1.f_2 + 0.01f);
	}
	Var0 = { Param0 - Param1 };
	Var1 = { func_81(Var0, Var0.x, Var0.f_1, 0f) };
	Var1 = { Var1 / FtoV(SYSTEM::VMAG(Var1)) };
	Var1 = { Var1 * FtoV((fParam2 * 0.5f)) };
	if (Param0.f_2 > Param1.f_2)
	{
		uVar2 = Param1.f_2;
		uVar3 = Param0.f_2;
	}
	else
	{
		uVar2 = Param0.f_2;
		uVar3 = Param1.f_2;
	}
	*(uParam3[0 /*3*/]) = { Vector(uVar2, Param0.f_1, Param0.x) + Var1 };
	*(uParam3[1 /*3*/]) = { Vector(uVar2, Param0.f_1, Param0.x) - Var1 };
	*(uParam3[2 /*3*/]) = { Vector(uVar3, Param0.f_1, Param0.x) - Var1 };
	*(uParam3[3 /*3*/]) = { Vector(uVar3, Param0.f_1, Param0.x) + Var1 };
	*(uParam3[4 /*3*/]) = { Vector(uVar2, Param1.f_1, Param1.x) + Var1 };
	*(uParam3[5 /*3*/]) = { Vector(uVar2, Param1.f_1, Param1.x) - Var1 };
	*(uParam3[6 /*3*/]) = { Vector(uVar3, Param1.f_1, Param1.x) - Var1 };
	*(uParam3[7 /*3*/]) = { Vector(uVar3, Param1.f_1, Param1.x) + Var1 };
}

int func_163(struct<3> Param0, struct<3> Param1, struct<3> Param2, struct<3> Param3, float fParam4)
{
	struct<3> Var0[8];
	int iVar1;
	
	Var0[0 /*3*/] = { Param0.x, Param0.f_1, Param0.f_2 };
	Var0[1 /*3*/] = { Param0.x, Param0.f_1, Param1.f_2 };
	Var0[2 /*3*/] = { Param0.x, Param1.f_1, Param1.f_2 };
	Var0[3 /*3*/] = { Param0.x, Param1.f_1, Param0.f_2 };
	Var0[4 /*3*/] = { Param1.x, Param0.f_1, Param0.f_2 };
	Var0[5 /*3*/] = { Param1.x, Param0.f_1, Param1.f_2 };
	Var0[6 /*3*/] = { Param1.x, Param1.f_1, Param1.f_2 };
	Var0[7 /*3*/] = { Param1.x, Param1.f_1, Param0.f_2 };
	iVar1 = 0;
	while (iVar1 < 8)
	{
		if (!HUD::GET_BLIP_INFO_ID_TYPE(Var0[iVar1 /*3*/], Param2, Param3, fParam4, 0, 1))
		{
			return 0;
		}
		iVar1++;
	}
	return 1;
}

int func_164(struct<3> Param0, float fParam1, struct<3> Param2, struct<3> Param3, float fParam4)
{
	struct<3> Var0[4];
	int iVar1;
	
	Var0[0 /*3*/] = { Param0 + Vector(0f, fParam1, 0f) };
	Var0[1 /*3*/] = { Param0 + Vector(0f, (-1f * fParam1), 0f) };
	Var0[2 /*3*/] = { Param0 + Vector(0f, 0f, fParam1) };
	Var0[3 /*3*/] = { Param0 + Vector(0f, 0f, (-1f * fParam1)) };
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (!HUD::GET_BLIP_INFO_ID_TYPE(Var0[iVar1 /*3*/], Param2, Param3, fParam4, 0, 1))
		{
			return 0;
		}
		iVar1++;
	}
	return 1;
}

void func_165(struct<3> Param0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;
	struct<3> Var1;
	int iVar2;
	
	Var1 = { Param0 };
	iVar2 = func_94(Var1);
	iVar0 = 0;
	while (iVar0 < Global_2411465[iVar2])
	{
		if (func_93(Var1, &(Global_2410195[iVar2 /*141*/][iVar0 /*7*/])))
		{
			*uParam1 = { Global_2410195[iVar2 /*141*/][iVar0 /*7*/] };
			*uParam2 = { Global_2410195[iVar2 /*141*/][iVar0 /*7*/].f_3 };
			*uParam3 = Global_2410195[iVar2 /*141*/][iVar0 /*7*/].f_6;
			return;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2411465[8])
	{
		if (func_93(Var1, &(Global_2410195[8 /*141*/][iVar0 /*7*/])))
		{
			*uParam1 = { Global_2410195[8 /*141*/][iVar0 /*7*/] };
			*uParam2 = { Global_2410195[8 /*141*/][iVar0 /*7*/].f_3 };
			*uParam3 = Global_2410195[8 /*141*/][iVar0 /*7*/].f_6;
			return;
		}
		iVar0++;
	}
}

int func_166(struct<3> Param0)
{
	bool bVar0;
	bool bVar1;
	
	if (Global_2405074.f_45.f_55)
	{
		if (unk_0x0B1B45E748AD48BA(Global_2405074.f_45.f_56))
		{
			if (!AUDIO::IS_MOBILE_PHONE_CALL_ONGOING(Param0))
			{
				bVar0 = CUTSCENE::IS_CUTSCENE_PLAYING(Param0);
				if (unk_0x0B1B45E748AD48BA(bVar0))
				{
					bVar1 = PAD::IS_DISABLED_CONTROL_JUST_RELEASED(bVar0);
					if (!bVar1 == Global_2405074.f_45.f_57)
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
		}
	}
	return 1;
}

int func_167(struct<3> Param0)
{
	switch (Global_2405074.f_2481)
	{
		case 0:
			return func_203(Param0, Global_2405074.f_2460, Global_2405074.f_2463, 0, 0);
			break;
		
		case 1:
			return func_122(Param0, Global_2405074.f_2474, Global_2405074.f_2477, 0, 0);
			break;
		
		case 2:
			return HUD::GET_BLIP_INFO_ID_TYPE(Param0, Global_2405074.f_2474, Global_2405074.f_2477, Global_2405074.f_2480, 0, 1);
			break;
	}
	return 0;
}

int func_168(struct<3> Param0, var uParam1, var uParam2, float fParam3)
{
	float fVar0;
	int iVar1;
	struct<3> Var2;
	struct<3> Var3;
	float fVar4;
	
	fVar0 = 0f;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < *uParam1)
	{
		fVar0 = ((uParam1[iVar1 /*4*/])->f_3 + fParam3);
		if (SYSTEM::VDIST(*(uParam1[iVar1 /*4*/]), Param0) < fVar0)
		{
			return 1;
		}
		iVar1++;
	}
	Var2 = { 0f, 0f, 0f };
	Var3 = { 0f, 0f, 0f };
	fVar4 = 0f;
	iVar1 = 0;
	while (iVar1 < *uParam2)
	{
		Var2 = { *(uParam2[iVar1 /*10*/]) };
		Var3 = { (uParam2[iVar1 /*10*/])->f_3 };
		fVar4 = (uParam2[iVar1 /*10*/])->f_6;
		if (HUD::GET_BLIP_INFO_ID_TYPE(Param0, Var2, Var3, fVar4, 0, 1))
		{
			return 1;
		}
		iVar1++;
	}
	return 0;
}

int func_169(var uParam0, var uParam1, bool bParam2, float fParam3)
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (SYSTEM::VDIST((uParam1[iVar0 /*10*/])->f_7, *uParam0) < (80f * fParam3))
		{
			if (bParam2)
			{
				Var1 = { *uParam0 };
				func_83(&Var1, (uParam1[iVar0 /*10*/])->f_7, 80f, 1036831949, 0, 0);
				*uParam0 = { Var1 };
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_170(bool bParam0)
{
	switch (func_120())
	{
		case 0:
			if (!func_28(bParam0))
			{
				if (Global_1590682[bParam0 /*883*/] == 0)
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_171(bool bParam0)
{
	if (func_104(bParam0, 1, 0))
	{
		if (Global_1590682[bParam0 /*883*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

int func_172(struct<3> Param0, float fParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iParam2)
	{
		if (SYSTEM::VDIST2(Global_2405074.f_2619[iVar0 /*3*/], Param0) < (fParam1 * fParam1))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_173(var uParam0, bool bParam1)
{
	var uVar0;
	struct<3> Var1;
	float fVar2;
	
	if (func_110(*uParam0))
	{
		if (bParam1)
		{
			Var1 = { *uParam0 };
			fVar2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.01f, 360f);
			func_83(&Var1, Global_2405074.f_588, Global_2405074.f_591, 1036831949, 0, fVar2);
			if (func_111(Var1, &uVar0) || func_110(Var1))
			{
				Var1 = { *uParam0 };
				func_83(&Var1, Global_2405074.f_588, Global_2405074.f_591, 1036831949, 1, fVar2);
			}
			*uParam0 = { Var1 };
		}
	}
	return 0;
}

int func_174(struct<3> Param0, float fParam1, int iParam2, int iParam3, float fParam4, bool bParam5, int iParam6, float fParam7, bool bParam8)
{
	int iVar0;
	bool bVar1;
	float fVar2;
	
	if (iParam2 && !bParam5)
	{
		if (func_6(PLAYER::PLAYER_ID(), 1, 1))
		{
			if (!PED::REMOVE_SCENARIO_BLOCKING_AREA())
			{
				fVar2 = fParam4;
				if (fParam7 > 0f)
				{
					fVar2 = fParam7;
				}
				if (HUD::SET_BLIP_NAME_FROM_TEXT_FILE(func_175(PLAYER::PLAYER_ID()), Param0, 1) <= (fVar2 + fParam1))
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
		if (func_6(bVar1, 1, 1))
		{
			if (!func_200(bVar1, 0) && NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), bVar1))
			{
				if (iParam2 == 1 || (iParam2 == 0 && bVar1 != PLAYER::PLAYER_ID()))
				{
					if ((func_137(bVar1) || !bParam8) && !Global_2425869[bVar1 /*443*/].f_263)
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
								if (HUD::SET_BLIP_NAME_FROM_TEXT_FILE(func_175(bVar1), Param0, 1) <= (fVar2 + fParam1))
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
							if (HUD::SET_BLIP_NAME_FROM_TEXT_FILE(func_175(bVar1), Param0, 1) <= (fVar2 + fParam1))
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

Vector3 func_175(bool bParam0)
{
	int iVar0;
	
	iVar0 = bParam0;
	if ((func_177() && Global_1590682[iVar0 /*883*/].f_854) && !func_176(Global_1590682[iVar0 /*883*/].f_855))
	{
		return Global_1590682[iVar0 /*883*/].f_855;
	}
	return func_8(bParam0);
}

int func_176(struct<3> Param0)
{
	if ((Param0.x == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

var func_177()
{
	return Global_2451787.f_18;
}

int func_178(struct<3> Param0, float fParam1, bool bParam2, int iParam3, int iParam4)
{
	if (func_180(Param0, fParam1, bParam2, iParam3, 0) || func_179(Param0, bParam2, iParam4))
	{
		return 1;
	}
	return 0;
}

int func_179(struct<3> Param0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!bParam1 == iVar0 || iParam2 == 1)
		{
			bVar2 = iVar0;
			iVar1 = 0;
			while (iVar1 < 2)
			{
				if (!Global_2417956.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4 == 0)
				{
					if (func_96(Param0, Global_2417956.f_461[iVar0 /*11*/][iVar1 /*5*/], Global_2417956.f_461[iVar0 /*11*/][iVar1 /*5*/].f_3, Global_2417956.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4, 1036831949))
					{
						if (func_6(bVar2, 0, 1) && func_6(bParam1, 0, 1))
						{
							return 1;
						}
						else
						{
							return 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_180(struct<3> Param0, float fParam1, bool bParam2, int iParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!bParam2 == iVar0 || iParam3 == 1)
		{
			bVar1 = iVar0;
			bVar2 = false;
			if (bParam4)
			{
				if (func_6(bVar1, 0, 1) && func_6(bParam2, 0, 1))
				{
					if (unk_0x6CC163E30ECE0790(bVar1) == unk_0x6CC163E30ECE0790(bParam2))
					{
						bVar2 = true;
					}
				}
			}
			if (!bVar2)
			{
				if (func_6(bVar1, 0, 1) && func_6(bParam2, 0, 1))
				{
					if (Global_2417956.f_261[iVar0])
					{
						if (SYSTEM::VDIST(Global_2417956.f_131[iVar0 /*3*/], Param0) < fParam1)
						{
							return 1;
						}
					}
					else if (SYSTEM::VDIST(func_8(bVar1), Param0) < 1f)
					{
						return 1;
					}
				}
				else if (Global_2417956.f_261[iVar0])
				{
					if (SYSTEM::VDIST(Global_2417956.f_131[iVar0 /*3*/], Param0) < fParam1)
					{
						return 1;
					}
				}
				else if (func_6(bVar1, 0, 1))
				{
					if (SYSTEM::VDIST(func_8(bVar1), Param0) < 1f)
					{
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_181(struct<3> Param0, float fParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, float fParam7, float fParam8, float fParam9, float fParam10, float fParam11, bool bParam12, bool bParam13)
{
	Global_2405074.f_3 = 0;
	if (!func_178(Param0, 0.5f, PLAYER::PLAYER_ID(), 0, 0))
	{
		Global_2405074.f_3++;
		if (bParam3)
		{
			if (func_233(Param0, 3.65f, 0.5f, 1.5f, 1f, 0, bParam4, iParam5, fParam6, bParam13, -1, 1, 0, 0, fParam11, bParam12, 0))
			{
				Global_2405074.f_3 = (Global_2405074.f_3 + Global_2405074.f_2);
				if (!func_185(Param0, fParam10))
				{
					Global_2405074.f_3++;
					if (!func_95(Param0, 1056964608))
					{
						Global_2405074.f_3++;
						return 1;
					}
				}
			}
			else
			{
				Global_2405074.f_3 = (Global_2405074.f_3 + Global_2405074.f_2);
			}
		}
		else if (!bParam2)
		{
			if (func_233(Param0, 3.65f, 0.5f, 1.5f, 1f, 0, bParam4, iParam5, fParam6, bParam13, -1, 1, 0, 0, fParam11, bParam12, 0))
			{
				Global_2405074.f_3 = (Global_2405074.f_3 + Global_2405074.f_2);
				if (!func_185(Param0, fParam10))
				{
					Global_2405074.f_3++;
					if (!func_182(Param0, fParam1, fParam7, fParam8, 1084227584))
					{
						Global_2405074.f_3++;
						if (!func_95(Param0, 1056964608))
						{
							Global_2405074.f_3++;
							return 1;
						}
					}
				}
			}
			else
			{
				Global_2405074.f_3 = (Global_2405074.f_3 + Global_2405074.f_2);
			}
		}
		else if (func_233(Param0, 6f, 5f, 5f, 5f, 0, bParam4, iParam5, fParam6, bParam13, -1, 1, 0, 0, fParam11, bParam12, 0))
		{
			Global_2405074.f_3 = (Global_2405074.f_3 + Global_2405074.f_2);
			if (!func_185(Param0, fParam10))
			{
				Global_2405074.f_3++;
				if (!func_182(Param0, fParam1, fParam7, fParam8, fParam9))
				{
					Global_2405074.f_3++;
					if (!func_95(Param0, 1056964608))
					{
						Global_2405074.f_3++;
						return 1;
					}
				}
			}
		}
		else
		{
			Global_2405074.f_3 = (Global_2405074.f_3 + Global_2405074.f_2);
		}
	}
	return 0;
}

int func_182(struct<3> Param0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		bVar1 = iVar0;
		if (!PLAYER::PLAYER_ID() == bVar1)
		{
			if ((func_6(bVar1, 1, 1) && func_137(bVar1)) && NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), bVar1))
			{
				if (!func_184(PLAYER::PLAYER_ID(), bVar1, -2, 0))
				{
					if (func_183(func_8(bVar1), Param0, fParam1, fParam2, fParam3, fParam4))
					{
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_183(struct<3> Param0, struct<3> Param1, float fParam2, float fParam3, float fParam4, float fParam5)
{
	struct<3> Var0;
	struct<3> Var1;
	
	fParam2 = (fParam2 * -1f);
	fParam2 = (fParam2 + 360f);
	Var0.x = SYSTEM::SIN(fParam2);
	Var0.f_1 = SYSTEM::COS(fParam2);
	Var0.f_2 = 0f;
	Var0 = { Var0 / FtoV(SYSTEM::VMAG(Var0)) };
	Var0 = { Var0 * Vector(fParam3, fParam3, fParam3) };
	Var1 = { Param1 + Var0 };
	Var1.f_2 = Param1.f_2;
	Var1.f_2 = (Var1.f_2 + fParam5);
	Param1.f_2 = (Param1.f_2 + fParam5);
	return HUD::GET_BLIP_INFO_ID_TYPE(Param0, Param1, Var1, fParam4, 0, 1);
}

bool func_184(bool bParam0, bool bParam1, int iParam2, int iParam3)
{
	if (iParam2 == -2)
	{
		if (iParam3 == 0)
		{
			if (unk_0x6CC163E30ECE0790(bParam0) == -1 && unk_0x6CC163E30ECE0790(bParam1) == -1)
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

int func_185(struct<3> Param0, float fParam1)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		bVar1 = iVar0;
		if ((func_6(bVar1, 1, 1) && func_137(bVar1)) && NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), bVar1))
		{
			if ((unk_0x6CC163E30ECE0790(PLAYER::PLAYER_ID()) == -1 && unk_0x6CC163E30ECE0790(bVar1) == -1) && !func_118(PLAYER::PLAYER_ID(), 1))
			{
				return 0;
			}
			else if ((unk_0x6CC163E30ECE0790(PLAYER::PLAYER_ID()) == -1 && !PLAYER::PLAYER_ID() == bVar1) || !func_184(PLAYER::PLAYER_ID(), bVar1, -2, 0))
			{
				if (SYSTEM::VDIST(Param0, func_8(bVar1)) < fParam1)
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_186(int iParam0)
{
	if ((Global_2405074.f_486 == 9 || Global_2405074.f_486 == 9) || (Global_2405074.f_486 == 15 && iParam0 == 1))
	{
		return 1;
	}
	return 0;
}

int func_187(struct<3> Param0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, int iParam7)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		bVar1 = iVar0;
		if ((iParam6 == 1 && PLAYER::PLAYER_ID() != bVar1) || iParam6 == 0)
		{
			if (func_6(bVar1, bParam2, bParam3))
			{
				if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), bVar1))
				{
					if (!bParam5 || (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(PLAYER::GET_PLAYER_PED(bVar1)) && func_137(bVar1)))
					{
						if ((!bParam4 || (bParam4 == 1 && unk_0x6CC163E30ECE0790(PLAYER::PLAYER_ID()) != unk_0x6CC163E30ECE0790(bVar1))) || unk_0x6CC163E30ECE0790(PLAYER::PLAYER_ID()) == -1)
						{
							if (((unk_0x6CC163E30ECE0790(PLAYER::PLAYER_ID()) == -1 && iParam7) && bParam4) && func_142(bVar1))
							{
							}
							else if (MISC::IS_BIT_SET(PLAYER::GET_PLAYER_PED(bVar1)))
							{
								if (HUD::SET_BLIP_NAME_FROM_TEXT_FILE(func_8(bVar1), Param0, 1) < fParam1)
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

int func_188(struct<3> Param0, float fParam1, int iParam2, float fParam3)
{
	int iVar0;
	bool bVar1;
	float fVar2;
	int iVar3;
	
	iVar3 = unk_0x6CC163E30ECE0790(PLAYER::PLAYER_ID());
	if (!iVar3 == -1)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			bVar1 = iVar0;
			if (func_6(bVar1, 1, 1))
			{
				if ((!func_200(bVar1, 0) && NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), bVar1)) && bVar1 != PLAYER::PLAYER_ID())
				{
					fVar2 = iParam2;
					if (fParam3 > 0f)
					{
						if (!unk_0x6CC163E30ECE0790(bVar1) == -1)
						{
							if (unk_0x6CC163E30ECE0790(bVar1) == unk_0x6CC163E30ECE0790(PLAYER::PLAYER_ID()))
							{
								fVar2 = fParam3;
							}
						}
					}
					if (unk_0x6CC163E30ECE0790(bVar1) == iVar3)
					{
						if (HUD::SET_BLIP_NAME_FROM_TEXT_FILE(func_8(bVar1), Param0, 1) <= (fVar2 + fParam1))
						{
							if (NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(bVar1, Param0, fParam1))
							{
								return 1;
							}
						}
					}
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_189(bool bParam0)
{
	if (((func_118(bParam0, 1) || func_191(bParam0)) || func_36(bParam0, 0)) || func_190(bParam0))
	{
		return 1;
	}
	return 0;
}

int func_190(bool bParam0)
{
	if (!func_6(bParam0, 0, 1))
	{
		return 0;
	}
	return Global_1590682[bParam0 /*883*/].f_35;
}

int func_191(bool bParam0)
{
	int iVar0;
	
	iVar0 = bParam0;
	if (iVar0 != -1)
	{
		return Global_1630317[iVar0 /*595*/] != -1;
	}
	return 0;
}

void func_192(struct<3> Param0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;
	struct<8> Var4;
	struct<3> Var5;
	struct<3> Var6;
	
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		*(uParam1[iVar0 /*4*/]) = { Var3 };
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam2)
	{
		*(uParam2[iVar0 /*10*/]) = { Var4 };
		iVar0++;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_1311741)
	{
		iVar0 = 0;
		while (iVar0 < *uParam1)
		{
			if (!unk_0xCE990E643CD9D0E5(Global_2359721[iVar1 /*26*/].f_12, 11))
			{
				if (SYSTEM::VMAG(*(uParam1[iVar0 /*4*/])) == 0f || SYSTEM::VDIST(Global_2359721[iVar1 /*26*/].f_3, Param0) < SYSTEM::VDIST(*(uParam1[iVar0 /*4*/]), Param0))
				{
					Var3 = { Global_2359721[iVar1 /*26*/].f_3 };
					Var3.f_3 = Global_2359721[iVar1 /*26*/].f_6.f_2;
					func_194(&Var3, uParam1, iVar0);
					iVar0 = *uParam1;
				}
			}
			iVar0++;
		}
		iVar1++;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 15)
	{
		iVar0 = 0;
		while (iVar0 < *uParam1)
		{
			if (SYSTEM::VMAG(*(uParam1[iVar0 /*4*/])) == 0f || SYSTEM::VDIST(Global_262145.f_6000[iVar1 /*3*/], Param0) < SYSTEM::VDIST(*(uParam1[iVar0 /*4*/]), Param0))
			{
				Var3 = { Global_262145.f_6000[iVar1 /*3*/] };
				Var3.f_3 = 3f;
				func_194(&Var3, uParam1, iVar0);
				iVar0 = *uParam1;
			}
			iVar0++;
		}
		iVar1++;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar2 = 0;
	iVar1 = 0;
	while (iVar1 < 14)
	{
		iVar2 = 0;
		while (iVar2 < 6)
		{
			iVar0 = 0;
			while (iVar0 < *uParam1)
			{
				if (SYSTEM::VMAG(*(uParam1[iVar0 /*4*/])) == 0f || SYSTEM::VDIST(Global_262145.f_6046[iVar1 /*19*/][iVar2 /*3*/], Param0) < SYSTEM::VDIST(*(uParam1[iVar0 /*4*/]), Param0))
				{
					Var3 = { Global_262145.f_6046[iVar1 /*19*/][iVar2 /*3*/] };
					Var3.f_3 = 3f;
					func_194(&Var3, uParam1, iVar0);
					iVar0 = *uParam1;
				}
				iVar0++;
			}
			iVar2++;
		}
		iVar1++;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_1311706)
	{
		iVar0 = 0;
		while (iVar0 < *uParam2)
		{
			Var5 = { Global_1311025[iVar1 /*8*/].f_1 + Global_1311025[iVar1 /*8*/].f_4 * Vector(0.5f, 0.5f, 0.5f) };
			Var6 = { *(uParam2[iVar0 /*10*/]) + (uParam2[iVar0 /*10*/])->f_3 * Vector(0.5f, 0.5f, 0.5f) };
			if (SYSTEM::VMAG(*(uParam2[iVar0 /*10*/])) == 0f || SYSTEM::VDIST(Var5, Param0) < SYSTEM::VDIST(Var6, Param0))
			{
				Var4 = { Global_1311025[iVar1 /*8*/].f_1 };
				Var4.f_3 = { Global_1311025[iVar1 /*8*/].f_4 };
				Var4.f_6 = Global_1311025[iVar1 /*8*/].f_7;
				Var4.f_7 = { Global_2359397[iVar1 /*3*/] };
				func_193(&Var4, uParam2, iVar0);
				iVar0 = *uParam2;
			}
			iVar0++;
		}
		iVar1++;
	}
}

void func_193(var uParam0, var uParam1, int iParam2)
{
	Global_2412470 = { *(uParam1[iParam2 /*10*/]) };
	*(uParam1[iParam2 /*10*/]) = { *uParam0 };
	if (iParam2 + 1 < *uParam1)
	{
		func_193(&Global_2412470, uParam1, iParam2 + 1);
	}
}

void func_194(var uParam0, var uParam1, int iParam2)
{
	Global_2412466 = { *(uParam1[iParam2 /*4*/]) };
	*(uParam1[iParam2 /*4*/]) = { *uParam0 };
	if (iParam2 + 1 < *uParam1)
	{
		func_194(&Global_2412466, uParam1, iParam2 + 1);
	}
}

void func_195(var uParam0, var uParam1)
{
	int iVar0;
	struct<3> Var1;
	float fVar2;
	
	if (Global_2405074.f_2256 > 0)
	{
		iVar0 = 0;
		while (iVar0 < Global_2405074.f_2256)
		{
			if (func_196(Global_2405074.f_2257[iVar0 /*4*/], uParam0))
			{
				fVar2 = Global_2405074.f_2257[iVar0 /*4*/].f_3;
				if (SYSTEM::VMAG(*uParam1) > 0.01f)
				{
					Var1 = { *uParam1 - Global_2405074.f_2257[iVar0 /*4*/] };
					fVar2 = unk_0x9075769DD4F148B7(Var1.x, Var1.f_1);
				}
				func_134(Global_2405074.f_2257[iVar0 /*4*/], fVar2, uParam0, uParam1, 0, uParam0->f_28);
				Global_2405074.f_2485++;
			}
			iVar0++;
		}
	}
	if (uParam0->f_5 && Global_2405074.f_2882)
	{
		func_128(&(Global_2405074.f_2485.f_6[0 /*10*/]), &(Global_2405074.f_2485.f_6[1 /*10*/]), &(Global_2405074.f_2485.f_6[2 /*10*/]));
	}
}

int func_196(struct<3> Param0, var uParam1)
{
	switch (uParam1->f_7)
	{
		case 0:
			return func_87(Param0, uParam1->f_7, *uParam1, 0f, 0f, 0f, uParam1->f_4);
		
		case 1:
		case 2:
			return func_87(Param0, uParam1->f_7, uParam1->f_8, uParam1->f_11, uParam1->f_14);
		
		default:
	}
	return 0;
}

void func_197(struct<3> Param0, struct<3> Param1, var uParam2, var uParam3, var uParam4)
{
	float fVar0;
	
	func_123(&Param0, &Param1);
	fVar0 = (Param1.x - Param0.x);
	*uParam2 = (Param0.x + (fVar0 * 0.5f));
	uParam2->f_1 = Param0.f_1;
	uParam2->f_2 = Param0.f_2;
	*uParam3 = *uParam2;
	uParam3->f_1 = Param1.f_1;
	uParam3->f_2 = Param1.f_2;
	*uParam4 = (fVar0 * 0.5f);
}

var func_198()
{
	return Global_1310987.f_4;
}

void func_199(var uParam0, var uParam1)
{
	func_240();
	func_232(uParam0, uParam1);
}

bool func_200(bool bParam0, int iParam1)
{
	bool bVar0;
	
	if (bParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_201(-1, 0) == 8;
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

int func_201(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_202();
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

int func_202()
{
	return Global_1312763;
}

bool func_203(struct<3> Param0, struct<3> Param1, float fParam2, bool bParam3, bool bParam4)
{
	if (bParam3 && bParam4)
	{
		Param0.f_2 = 0f;
		Param1.f_2 = 0f;
		return SYSTEM::VDIST(Param0, Param1) < (fParam2 + 0.01f);
	}
	else if (bParam3)
	{
		if (Param0.f_2 > Param1.f_2)
		{
			Param0.f_2 = Param1.f_2;
		}
		return SYSTEM::VDIST(Param0, Param1) < (fParam2 + 0.01f);
	}
	else if (bParam4)
	{
		if (Param0.f_2 < Param1.f_2)
		{
			Param0.f_2 = Param1.f_2;
		}
		return SYSTEM::VDIST(Param0, Param1) < (fParam2 + 0.01f);
	}
	return SYSTEM::VDIST(Param0, Param1) < (fParam2 + 0.01f);
}

void func_204(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_2405074.f_1748 > 0)
	{
		iVar0 = 0;
		while (func_226(uParam0, uParam1, uParam2) == 0 && iVar0 < 2)
		{
			iVar0++;
		}
		if (iVar0 == 2)
		{
			uParam2->f_33 = 0;
		}
		else
		{
			return;
		}
	}
	iVar0 = 0;
	while (func_205(uParam0, uParam1, uParam2) == 0 && iVar0 < 6)
	{
		iVar0++;
	}
}

int func_205(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	struct<3> Var1;
	float* fVar2;
	int iVar3;
	var uVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	float fVar11;
	float fVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	bool bVar16;
	int iVar17;
	bool bVar18;
	int iVar19;
	float fVar20;
	int iVar21;
	int iVar22;
	float fVar23;
	bool bVar24;
	struct<3> Var25;
	var uVar26;
	struct<3> Var27;
	float* fVar28;
	bool bVar29;
	
	iVar0 = 0;
	if (!SYSTEM::VMAG(uParam2->f_35) > 0f)
	{
		uParam2->f_35 = { *uParam0 };
	}
	if (uParam2->f_15)
	{
		if (func_107(uParam2->f_35, uParam0, &(uParam2->f_38), &(uParam2->f_45), 1, 1))
		{
			uParam2->f_6 = 9999.9f;
			uParam2->f_7 = 9999.9f;
		}
	}
	if (uParam2->f_51)
	{
		uParam2->f_6 = 9999.9f;
	}
	if (uParam2->f_48)
	{
		if (func_225(uParam0, 1))
		{
		}
	}
	if (uParam0->f_2 < -80f)
	{
		uParam2->f_6 = 9999.9f;
		uParam2->f_7 = 9999.9f;
	}
	iVar3 = 0;
	bVar8 = true;
	if (uParam2->f_11)
	{
		iVar3 += 2;
		iVar3++;
		bVar8 = false;
	}
	else if (uParam2->f_10 == 0 || (uParam2->f_33 > 0 && uParam2->f_16))
	{
		iVar3++;
		bVar8 = false;
	}
	iVar3 += 4;
	fVar11 = 3f;
	fVar12 = 5f;
	switch (uParam2->f_33)
	{
		case 0:
			fVar11 = 3f;
			fVar12 = 5f;
			break;
		
		case 1:
			fVar11 = 2.75f;
			fVar12 = 7.5f;
			break;
		
		default:
			fVar11 = 2.5f;
			fVar12 = 10f;
			break;
	}
	iVar13 = 0;
	Global_2412480.f_162 = 0;
	Global_2412480.f_163 = 0;
	Global_2412480.f_164 = -99;
	Global_2412480.f_165 = { 0f, 0f, 0f };
	iVar14 = 0;
	while (iVar14 < 40)
	{
		Global_2412480[iVar14 /*3*/] = { 0f, 0f, 0f };
		Global_2412480.f_121[iVar14] = 0f;
		iVar14++;
	}
	iVar15 = 1;
	if (func_101(uParam2->f_34) != 0)
	{
		iVar15 = 3;
		uParam2->f_6 = 9999.9f;
		uParam2->f_7 = 9999.9f;
		uParam2->f_18 = 0;
	}
	while (true)
	{
		iVar6 = unk_0x2B952A1C251A8004(*uParam0, (iVar0 * iVar15), &fVar2, &iVar7, iVar3, fVar11, fVar12);
		if (PATHFIND::IS_VEHICLE_NODE_ID_VALID(iVar6))
		{
			PATHFIND::GET_VEHICLE_NODE_POSITION(iVar6, &Var1);
			bVar10 = false;
			if (Global_2412480.f_164 == iVar6)
			{
				bVar10 = true;
			}
			Global_2412480.f_165 = { Var1 };
			if (((uParam2->f_10 || uParam2->f_33 > 0) || !PATHFIND::GET_VEHICLE_NODE_IS_SWITCHED_OFF(iVar6)) || PATHFIND::GET_VEHICLE_NODE_IS_GPS_ALLOWED(iVar6))
			{
				PATHFIND::GET_VEHICLE_NODE_PROPERTIES(Var1, &uVar4, &uVar5);
				if (SYSTEM::VDIST(Var1, uParam2->f_35) > uParam2->f_4)
				{
					if (!func_173(&Var1, 0))
					{
						if ((uParam2->f_13 || uVar5 & 64 == 0) || uParam2->f_33 == 1)
						{
							if (uParam2->f_14 || uVar5 & 16 == 0)
							{
								if ((uVar5 & 128 == 0 && uVar5 & 256 == 0) && uVar5 & 512 == 0)
								{
									if (!func_224(Var1))
									{
										Var1 = { func_220(Var1, &fVar2, iVar7, uParam2->f_9, *uParam2, bVar8, uParam2->f_11, uParam2->f_34, &bVar9, bVar10, 1, uParam2->f_51) };
										if (SYSTEM::VMAG(Var1) > 0f)
										{
											if (!func_95(Var1, 5f))
											{
												if (Var1.f_2 >= (uParam2->f_35.f_2 - uParam2->f_7) || uParam2->f_33 >= 2)
												{
													if (Var1.f_2 <= (uParam2->f_35.f_2 + uParam2->f_6) || uParam2->f_33 >= 2)
													{
														if (func_219(Var1, uParam2))
														{
															if ((uParam2->f_48 && !func_225(&Var1, 0)) || uParam2->f_48 == 0)
															{
																bVar16 = true;
																if (!bVar10)
																{
																	if (bVar9)
																	{
																		iVar0 = (iVar0 + -1);
																		bVar16 = false;
																	}
																}
																if (SYSTEM::VMAG(Var1) > 0f)
																{
																	if (((uParam2->f_5 > 0f && SYSTEM::VDIST(Var1.x, Var1.f_1, 0f, uParam2->f_35, uParam2->f_35.f_1, 0f) < uParam2->f_5) || uParam2->f_5 <= 0f) || uParam2->f_33 >= 2)
																	{
																		if ((uParam2->f_12 && !func_215(Var1, fVar2, uParam2->f_34, PLAYER::PLAYER_ID(), 0, uParam2->f_56)) || !uParam2->f_12)
																		{
																			if (!uParam2->f_15 || !func_107(uParam2->f_35, &Var1, &(uParam2->f_38), &(uParam2->f_45), 0, 1))
																			{
																				if (uParam2->f_8)
																				{
																					iVar17 = uParam2->f_31;
																					bVar18 = true;
																					iVar19 = 1;
																					fVar20 = uParam2->f_49;
																					if (!uParam2->f_55)
																					{
																						iVar17 = 0;
																						bVar18 = false;
																						iVar19 = 0;
																						fVar20 = 1f;
																					}
																					else if (uParam2->f_17)
																					{
																						iVar17 = 0;
																						bVar18 = false;
																						iVar19 = 0;
																						if (uParam2->f_33 == 1)
																						{
																							fVar20 = (fVar20 * 0.375f);
																						}
																					}
																					else
																					{
																						bVar18 = true;
																						iVar19 = 1;
																						if (uParam2->f_28)
																						{
																							if (uParam2->f_33 == 1)
																							{
																								fVar20 = (fVar20 * 0.375f);
																							}
																						}
																					}
																					iVar21 = 0;
																					if (!func_214(Var1, fVar2, uParam2->f_34))
																					{
																						if (uParam2->f_3 > 7f)
																						{
																							if (func_233(Var1, 6f, 1f, 1f, 5f, iVar17, bVar18, iVar19, fVar20, uParam2->f_58, -1, 1, uParam2->f_3, 0, 0, 0, 0))
																							{
																								iVar21 = 1;
																							}
																						}
																						else if (func_233(Var1, 6f, 1f, 1f, 5f, iVar17, bVar18, iVar19, fVar20, uParam2->f_58, -1, 1, 0f, 0, 0, 0, 0) && !func_212(Var1, fVar2, uParam2->f_34, 1, 1, 0, 0, 0, 0))
																						{
																							iVar21 = 1;
																						}
																					}
																					if (iVar21 || uParam2->f_33 >= 2)
																					{
																						if (((uParam2->f_29 || uParam2->f_30) || uParam2->f_52) || uParam2->f_33 >= 2)
																						{
																							fVar23 = 0f;
																							if (uParam2->f_52)
																							{
																								iVar22 = func_211(Var1, uParam2->f_54, &fVar23);
																							}
																							if (!uParam2->f_52 || (uParam2->f_52 && iVar22 <= uParam2->f_53))
																							{
																								if (uParam2->f_52)
																								{
																									if (iVar22 < uParam2->f_53)
																									{
																										iVar14 = 0;
																										while (iVar14 < Global_2412480.f_162)
																										{
																											Global_2412480[iVar14 /*3*/] = { 0f, 0f, 0f };
																											Global_2412480.f_121[iVar14] = 0f;
																											iVar14++;
																										}
																										Global_2412480.f_162 = 0;
																										uParam2->f_53 = iVar22;
																									}
																								}
																								if (uParam2->f_30)
																								{
																									if (Global_2412480.f_162 == 0)
																									{
																										Global_2412480[0 /*3*/] = { Var1 };
																										Global_2412480.f_121[0] = fVar2;
																									}
																									else
																									{
																										iVar14 = 0;
																										while (iVar14 < Global_2412480.f_162 + 1)
																										{
																											if (iVar14 < 40)
																											{
																												if (SYSTEM::VDIST2(Var1, uParam2->f_35) < SYSTEM::VDIST2(Global_2412480[iVar14 /*3*/], uParam2->f_35))
																												{
																													func_210(Var1, fVar2, iVar14);
																													iVar14 = Global_2412480.f_162 + 1;
																												}
																											}
																											iVar14++;
																										}
																									}
																									Global_2412480.f_162++;
																									if (Global_2412480.f_162 >= 5)
																									{
																										if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
																										{
																											iVar0 = 100;
																										}
																										else if (Global_2412480.f_162 == 40)
																										{
																											iVar0 = 100;
																										}
																									}
																								}
																								else
																								{
																									Global_2412480[Global_2412480.f_162 /*3*/] = { Var1 };
																									Global_2412480.f_121[Global_2412480.f_162] = fVar2;
																									Global_2412480.f_162++;
																									if (func_219(Var1, uParam2))
																									{
																										Global_2412480.f_163++;
																									}
																									if (Global_2412480.f_162 >= 10)
																									{
																										if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
																										{
																											iVar0 = 100;
																										}
																										else if (Global_2412480.f_162 == 40)
																										{
																											iVar0 = 100;
																										}
																									}
																								}
																							}
																						}
																						else
																						{
																							*uParam0 = { Var1 };
																							*uParam1 = fVar2;
																							return 1;
																						}
																					}
																					else if (bVar16)
																					{
																						iVar0++;
																					}
																				}
																				else
																				{
																					*uParam0 = { Var1 };
																					*uParam1 = fVar2;
																					return 1;
																				}
																			}
																		}
																		else
																		{
																			iVar13++;
																		}
																	}
																	else
																	{
																		iVar0 = 100;
																	}
																}
															}
															else
															{
																iVar0++;
															}
														}
														else if (!uParam2->f_32)
														{
															iVar0 = 100;
														}
													}
													else
													{
														iVar0++;
													}
												}
												else
												{
													iVar0++;
												}
											}
										}
									}
									else
									{
										iVar0++;
									}
								}
							}
							else
							{
								iVar0++;
							}
						}
						else
						{
							iVar0++;
						}
					}
					else
					{
						iVar13++;
					}
				}
				else
				{
					iVar13++;
				}
			}
			iVar0++;
			if (iVar0 >= (40 + iVar13) || iVar0 >= 100)
			{
				if (Global_2412480.f_162 > 0 && ((uParam2->f_29 || uParam2->f_30) || uParam2->f_33 >= 2))
				{
					if (uParam2->f_30)
					{
						*uParam0 = { Global_2412480[0 /*3*/] };
						*uParam1 = Global_2412480.f_121[0];
						return 1;
					}
					else
					{
						if (Global_2412480.f_163 > 0 && !Global_2412480.f_163 == Global_2412480.f_162)
						{
							func_208(0, uParam2);
						}
						bVar24 = NETWORK::_NETWORK_GET_ROS_PRIVILEGE_25(0, Global_2412480.f_162);
						if (uParam2->f_18 && uParam2->f_30)
						{
							bVar24 = false;
						}
						Var25 = { Global_2412480[0 /*3*/] };
						uVar26 = Global_2412480.f_121[0];
						Global_2412480[0 /*3*/] = { Global_2412480[bVar24 /*3*/] };
						Global_2412480.f_121[0] = Global_2412480.f_121[bVar24];
						Global_2412480[bVar24 /*3*/] = { Var25 };
						Global_2412480.f_121[bVar24] = uVar26;
						*uParam0 = { Global_2412480[0 /*3*/] };
						*uParam1 = Global_2412480.f_121[0];
						return 1;
					}
				}
				else
				{
					uParam2->f_33++;
					if (uParam2->f_33 < 3)
					{
						return 0;
					}
					else
					{
						func_207(iVar13, *uParam0, &iVar0, &Var1, &fVar2, uParam2, bVar8, iVar7, iVar3, fVar11, fVar12, bVar9);
						Var27 = { Var1 };
						fVar28 = fVar2;
						if (!uParam2->f_50)
						{
							bVar29 = true;
						}
						else
						{
							bVar29 = false;
						}
						if (func_107(uParam2->f_35, &Var27, &(uParam2->f_38), &(uParam2->f_45), bVar29, 1) || func_225(&Var27, bVar29))
						{
							if (!uParam2->f_50)
							{
								uParam2->f_33 = 0;
								uParam2->f_50 = 1;
								*uParam0 = { Var27 };
								*uParam1 = fVar28;
								uParam2->f_6 = 9999.9f;
								uParam2->f_7 = 9999.9f;
								return 0;
							}
							else
							{
								*uParam0 = { Var27 };
								*uParam1 = fVar28;
								return 1;
							}
						}
						else
						{
							*uParam0 = { Var27 };
							*uParam1 = fVar28;
							return 1;
						}
					}
				}
			}
		}
		else
		{
			uParam2->f_33++;
			if (uParam2->f_33 < 3)
			{
				return 0;
			}
			else
			{
				func_206(&Global_1312061, uParam0, uParam1, *uParam0);
				if (uParam2->f_11)
				{
					uParam2->f_27 = 1;
				}
				return 1;
			}
		}
		Global_2412480.f_164 = iVar6;
	}
	return 0;
}

void func_206(var uParam0, var uParam1, var uParam2, struct<3> Param3)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	
	bVar0 = 1E+09f;
	iVar3 = -1;
	iVar2 = 0;
	while (iVar2 < *uParam0)
	{
		bVar1 = SYSTEM::VDIST(*(uParam0[iVar2 /*4*/]), Param3);
		if (bVar1 < bVar0)
		{
			if (!func_178(*(uParam0[iVar2 /*4*/]), 5f, PLAYER::PLAYER_ID(), 0, 0))
			{
				bVar0 = bVar1;
				iVar3 = iVar2;
			}
		}
		iVar2++;
	}
	if (!iVar3 == -1)
	{
		*uParam1 = { *(uParam0[iVar3 /*4*/]) };
		*uParam2 = (uParam0[iVar3 /*4*/])->f_3;
	}
}

void func_207(int iParam0, struct<3> Param1, int iParam2, var* uParam3, float* fParam4, var uParam5, bool bParam6, int iParam7, int iParam8, float fParam9, float fParam10, bool bParam11)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 30)
	{
		*iParam2 = NETWORK::_NETWORK_GET_ROS_PRIVILEGE_25((1 + iParam0), (40 + iParam0));
		PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_WITH_HEADING(Param1, *iParam2, uParam3, fParam4, &iParam7, iParam8, fParam9, fParam10);
		*uParam3 = { func_220(*uParam3, fParam4, iParam7, uParam5->f_9, *uParam5, bParam6, uParam5->f_11, uParam5->f_34, &bParam11, 0, 0, uParam5->f_51) };
		if (!func_224(*uParam3))
		{
			iVar0 = 999;
			return;
		}
		iVar0++;
	}
}

void func_208(int iParam0, var uParam1)
{
	if (!func_219(Global_2412480[iParam0 /*3*/], uParam1))
	{
		Global_2412480.f_162 = (Global_2412480.f_162 - 1);
		func_209(iParam0);
		if (Global_2412480.f_162 > Global_2412480.f_163)
		{
			func_208(iParam0, uParam1);
		}
	}
	else if (iParam0 < 39)
	{
		func_208(iParam0 + 1, uParam1);
	}
}

void func_209(int iParam0)
{
	while (iParam0 < 39)
	{
		if (iParam0 < 39)
		{
			Global_2412480[iParam0 /*3*/] = { Global_2412480[iParam0 + 1 /*3*/] };
			Global_2412480.f_121[iParam0] = Global_2412480.f_121[iParam0 + 1];
		}
		iParam0++;
	}
}

void func_210(struct<3> Param0, float fParam1, int iParam2)
{
	struct<3> Var0;
	var uVar1;
	
	Var0 = { Global_2412480[iParam2 /*3*/] };
	uVar1 = Global_2412480.f_121[iParam2];
	Global_2412480[iParam2 /*3*/] = { Param0 };
	Global_2412480.f_121[iParam2] = fParam1;
	if (iParam2 <= Global_2412480.f_162 && iParam2 < 39)
	{
		if (SYSTEM::VMAG(Var0) > 0f)
		{
			func_210(Var0, uVar1, iParam2 + 1);
		}
	}
}

int func_211(struct<3> Param0, float fParam1, float fParam2)
{
	int iVar0;
	struct<3> Var1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	
	bVar4 = 99999.9f;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		bVar3 = iVar0;
		if (func_141(bVar3))
		{
			Var1 = { func_8(bVar3) };
			bVar5 = SYSTEM::VDIST(Param0, Var1);
			if (bVar5 < fParam1)
			{
				if (bVar5 < bVar4)
				{
					bVar4 = bVar5;
				}
				iVar2++;
			}
		}
		iVar0++;
	}
	*fParam2 = bVar4;
	return iVar2;
}

int func_212(struct<3> Param0, float fParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, int iParam8)
{
	int iVar0;
	bool bVar1;
	float fVar2;
	int iVar3;
	void fVar4;
	struct<3> Var5;
	bool bVar6;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		bVar1 = iVar0;
		if ((iParam7 == 1 && PLAYER::PLAYER_ID() != bVar1) || iParam7 == 0)
		{
			if (func_6(bVar1, bParam3, bParam4))
			{
				if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), bVar1))
				{
					if (!bParam6 || (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(PLAYER::GET_PLAYER_PED(bVar1)) && func_137(bVar1)))
					{
						if ((!bParam5 || (bParam5 == 1 && unk_0x6CC163E30ECE0790(PLAYER::PLAYER_ID()) != unk_0x6CC163E30ECE0790(bVar1))) || unk_0x6CC163E30ECE0790(PLAYER::PLAYER_ID()) == -1)
						{
							if (((unk_0x6CC163E30ECE0790(PLAYER::PLAYER_ID()) == -1 && iParam8) && bParam5) && func_142(bVar1))
							{
							}
							else if (MISC::IS_BIT_SET(PLAYER::GET_PLAYER_PED(bVar1)))
							{
								fVar2 = 0.1f;
								if (SYSTEM::VDIST(PLAYER::GET_PLAYER_PED(bVar1), 0))
								{
									iVar3 = ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYER_PED(bVar1), 0);
									if (MISC::IS_BIT_SET(iVar3) && !PED::IS_PED_IN_ANY_POLICE_VEHICLE(iVar3, 0))
									{
										fVar4 = MISC::GET_MODEL_DIMENSIONS(iVar3);
										Var5 = { NETWORK::NETWORK_ARE_HANDLES_THE_SAME(iVar3, 0) };
										bVar6 = ENTITY::IS_ENTITY_IN_WATER(iVar3);
										if (func_213(Param0, fParam1, iParam2, Var5, bVar6, fVar4, 0))
										{
											return 1;
										}
									}
									else
									{
										fVar2 = 5f;
									}
								}
								if (func_96(func_8(bVar1), Param0, fParam1, iParam2, fVar2))
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

int func_213(struct<3> Param0, float fParam1, int iParam2, struct<3> Param3, bool bParam4, void fParam5, bool bParam6)
{
	int iVar0;
	struct<3> Var1[4];
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	struct<3> Var5;
	struct<3> Var6;
	
	if (func_96(Param0, Param3, bParam4, fParam5, 1036831949))
	{
		return 1;
	}
	if (Global_1312332 && (iParam2 == joaat("kosatka") || fParam5 == joaat("kosatka")))
	{
		func_97(Param0, fParam1, iParam2, &Global_1707737, &(Global_1707737.f_3), &(Global_1707737.f_6), 1036831949);
		func_97(Param3, bParam4, fParam5, &(Global_1707737.f_7), &(Global_1707737.f_10), &(Global_1707737.f_13), 1036831949);
		if (unk_0xA0AD167E4B39D9A2(Global_1707737, Global_1707737.f_3, Global_1707737.f_6, Global_1707737.f_7, Global_1707737.f_10, Global_1707737.f_13))
		{
			return 1;
		}
	}
	else
	{
		func_98(iParam2, &Var2, &Var3, 1086324736, 1080033280, 1077936128);
		Var4 = { 0f, Var3.f_1, 0f };
		func_84(&Var4, 0f, 0f, fParam1);
		Var5 = { 0f, Var2.f_1, 0f };
		func_84(&Var5, 0f, 0f, fParam1);
		Var6 = { (ENTITY::IS_ENTITY_PLAYING_ANIM((Var3.x - Var2.x)) * 0.5f), 0f, 0f };
		func_84(&Var6, 0f, 0f, fParam1);
		Var1[0 /*3*/] = { Param0 + Var4 + Var6 };
		Var1[0 /*3*/].f_2 = (Var1[0 /*3*/].f_2 + (0.5f * ENTITY::IS_ENTITY_PLAYING_ANIM((Var3.f_2 - Var2.f_2))));
		Var1[1 /*3*/] = { Param0 + Var4 - Var6 };
		Var1[1 /*3*/].f_2 = (Var1[1 /*3*/].f_2 + (0.5f * ENTITY::IS_ENTITY_PLAYING_ANIM((Var3.f_2 - Var2.f_2))));
		Var1[2 /*3*/] = { Param0 + Var5 + Var6 };
		Var1[2 /*3*/].f_2 = (Var1[2 /*3*/].f_2 + (0.5f * ENTITY::IS_ENTITY_PLAYING_ANIM((Var3.f_2 - Var2.f_2))));
		Var1[3 /*3*/] = { Param0 + Var5 - Var6 };
		Var1[3 /*3*/].f_2 = (Var1[3 /*3*/].f_2 + (0.5f * ENTITY::IS_ENTITY_PLAYING_ANIM((Var3.f_2 - Var2.f_2))));
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (func_96(Var1[iVar0 /*3*/], Param3, bParam4, fParam5, 1036831949))
			{
				return 1;
			}
			iVar0++;
		}
		if (!bParam6)
		{
			if (func_213(Param3, bParam4, fParam5, Param0, fParam1, iParam2, 1))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_214(struct<3> Param0, float fParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	void fVar2;
	struct<3> Var3;
	bool bVar4;
	
	iVar0 = 1;
	iVar0 += 2;
	iVar0 += 4;
	iVar0 += 8;
	iVar0 += 16;
	iVar0 += 32;
	iVar0 += 64;
	iVar0 = (iVar0 + 131076);
	iVar1 = unk_0xC2E2CC6CF95AF8A3(Param0, 30f, 0, iVar0);
	if (MISC::IS_BIT_SET(iVar1) && !PED::IS_PED_IN_ANY_POLICE_VEHICLE(iVar1, 0))
	{
		fVar2 = MISC::GET_MODEL_DIMENSIONS(iVar1);
		Var3 = { NETWORK::NETWORK_ARE_HANDLES_THE_SAME(iVar1, 0) };
		bVar4 = ENTITY::IS_ENTITY_IN_WATER(iVar1);
		if (func_213(Param0, fParam1, iParam2, Var3, bVar4, fVar2, 0))
		{
			return 1;
		}
	}
	iVar0 += 4096;
	iVar0 += 8192;
	iVar0 += 16384;
	iVar1 = unk_0xC2E2CC6CF95AF8A3(Param0, 30f, 0, iVar0);
	if (MISC::IS_BIT_SET(iVar1) && !PED::IS_PED_IN_ANY_POLICE_VEHICLE(iVar1, 0))
	{
		fVar2 = MISC::GET_MODEL_DIMENSIONS(iVar1);
		Var3 = { NETWORK::NETWORK_ARE_HANDLES_THE_SAME(iVar1, 0) };
		bVar4 = ENTITY::IS_ENTITY_IN_WATER(iVar1);
		if (func_213(Param0, fParam1, iParam2, Var3, bVar4, fVar2, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_215(struct<3> Param0, float fParam1, int iParam2, bool bParam3, int iParam4, int iParam5)
{
	if (func_218(Param0, fParam1, iParam2, bParam3, iParam4) || func_216(Param0, fParam1, iParam2, bParam3, iParam5))
	{
		return 1;
	}
	return 0;
}

int func_216(struct<3> Param0, float fParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!bParam3 == iVar0 || iParam4 == 1)
		{
			bVar2 = iVar0;
			iVar1 = 0;
			while (iVar1 < 2)
			{
				if (func_217(Param0, iParam2, Global_2417956.f_461[iVar0 /*11*/][iVar1 /*5*/], Global_2417956.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4))
				{
					if (func_213(Param0, fParam1, iParam2, Global_2417956.f_461[iVar0 /*11*/][iVar1 /*5*/], Global_2417956.f_461[iVar0 /*11*/][iVar1 /*5*/].f_3, Global_2417956.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4, 0))
					{
						if (func_6(bVar2, 0, 1) && func_6(bParam3, 0, 1))
						{
							return 1;
						}
						else
						{
							return 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_217(struct<3> Param0, int iParam1, struct<3> Param2, int iParam3)
{
	float fVar0;
	float fVar1;
	bool bVar2;
	
	fVar0 = func_103(iParam1, 1008981770);
	fVar1 = func_103(iParam3, 1008981770);
	bVar2 = SYSTEM::VDIST(Param0, Param2);
	if (bVar2 < (fVar0 + fVar1))
	{
		return 1;
	}
	return 0;
}

int func_218(struct<3> Param0, float fParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!bParam3 == iVar0 || iParam4 == 1)
		{
			bVar1 = iVar0;
			if (func_6(bVar1, 0, 1) && func_6(bParam3, 0, 1))
			{
				if (Global_2417956.f_261[iVar0])
				{
					if (func_96(Global_2417956.f_131[iVar0 /*3*/], Param0, fParam1, iParam2, 1036831949))
					{
						return 1;
					}
				}
				else if (func_96(func_8(bVar1), Param0, fParam1, iParam2, 1036831949))
				{
					return 1;
				}
			}
			else if (Global_2417956.f_261[iVar0])
			{
				if (func_96(Global_2417956.f_131[iVar0 /*3*/], Param0, fParam1, iParam2, 1036831949))
				{
					return 1;
				}
			}
			else if (func_6(bVar1, 0, 0))
			{
				if (MISC::IS_BIT_SET(PLAYER::GET_PLAYER_PED(bVar1)))
				{
					if (func_96(func_8(bVar1), Param0, fParam1, iParam2, 1036831949))
					{
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_219(struct<3> Param0, var uParam1)
{
	if (uParam1->f_18)
	{
		switch (uParam1->f_26)
		{
			case 0:
				if (func_203(Param0, uParam1->f_19, uParam1->f_25, 0, 0))
				{
					return 1;
				}
				break;
			
			case 1:
				if (func_122(Param0, uParam1->f_19, uParam1->f_22, 0, 0))
				{
					return 1;
				}
				break;
			
			case 2:
				if (HUD::GET_BLIP_INFO_ID_TYPE(Param0, uParam1->f_19, uParam1->f_22, uParam1->f_25, 0, 1))
				{
					return 1;
				}
				break;
		}
		return 0;
	}
	return 1;
}

Vector3 func_220(struct<3> Param0, float* fParam1, int iParam2, bool bParam3, struct<3> Param4, bool bParam5, bool bParam6, void fParam7, var uParam8, int iParam9, bool bParam10, bool bParam11)
{
	struct<3> Var0;
	var uVar1;
	var uVar2;
	var uVar3;
	void fVar4;
	void fVar5;
	float fVar6;
	float fVar7;
	bool bVar8;
	bool bVar9;
	float fVar10;
	struct<3> Var11;
	struct<3> Var12;
	struct<3> Var13;
	
	if (bParam11)
	{
		if (SYSTEM::VMAG(Param4) > 0f)
		{
			if (!func_223(Param0, *fParam1, Param4))
			{
				*fParam1 = (*fParam1 + 180f);
			}
		}
		return Param0;
	}
	PATHFIND::GET_VEHICLE_NODE_PROPERTIES(Param0, &uVar1, &uVar2);
	if (uVar2 & 1024 == 0 && !bParam6)
	{
		PATHFIND::GET_CLOSEST_ROAD(Param0, 1f, 1, &uVar3, &uVar3, &fVar4, &fVar5, &fVar6, bParam5);
		if (fVar4 == fVar5)
		{
			*uParam8 = 1;
		}
		if (bParam10)
		{
			if (!uVar2 & 128 == 0)
			{
				return 0f, 0f, 0f;
			}
			if (!uVar2 & 256 == 0)
			{
				return 0f, 0f, 0f;
			}
			if (!uVar2 & 512 == 0)
			{
				return 0f, 0f, 0f;
			}
			if ((fVar4 + fVar5) != iParam2)
			{
				return 0f, 0f, 0f;
			}
			if (VEHICLE::IS_THIS_MODEL_A_HELI(fParam7) && func_222(Param0))
			{
				return 0f, 0f, 0f;
			}
		}
		if (iParam9 && *uParam8)
		{
			*fParam1 = (*fParam1 + 180f);
			if (*fParam1 > 360f)
			{
				*fParam1 = (*fParam1 + -360f);
			}
		}
		if (*fParam1 <= 90f || *fParam1 > 270f)
		{
			bVar8 = true;
		}
		else
		{
			bVar8 = false;
		}
		bVar9 = false;
		if (bVar8)
		{
			if (fVar4 == 0)
			{
				if (bParam10)
				{
					return 0f, 0f, 0f;
				}
			}
			else if (iParam2 == fVar4)
			{
				bVar9 = true;
			}
		}
		else if (fVar5 == 0)
		{
			if (bParam10)
			{
				return 0f, 0f, 0f;
			}
		}
		else if (iParam2 == fVar5)
		{
			bVar9 = true;
		}
		if (fVar6 < 0f)
		{
			fVar7 = 0f;
		}
		else
		{
			if (bVar8)
			{
				if (bVar9)
				{
					fVar7 = (4.2f * (SYSTEM::TO_FLOAT(fVar4) * 0.5f));
				}
				else
				{
					fVar7 = (4.2f * SYSTEM::TO_FLOAT(fVar4));
				}
				if (bVar9)
				{
					if (fVar4 > 2)
					{
						fVar7 = (fVar7 + (IntToFloat((fVar4 - 2)) * 1f));
					}
				}
				else if (fVar4 > 1)
				{
					fVar7 = (fVar7 + (IntToFloat((fVar4 - 1)) * 1f));
				}
			}
			else
			{
				if (bVar9)
				{
					fVar7 = (4.2f * (SYSTEM::TO_FLOAT(fVar5) * 0.5f));
				}
				else
				{
					fVar7 = (4.2f * SYSTEM::TO_FLOAT(fVar5));
				}
				if (bVar9)
				{
					if (fVar5 > 2)
					{
						fVar7 = (fVar7 + (IntToFloat((fVar5 - 2)) * 1f));
					}
				}
				else if (fVar5 > 1)
				{
					fVar7 = (fVar7 + (IntToFloat((fVar5 - 1)) * 1f));
				}
			}
			if (!uVar2 & 64 == 0)
			{
				fVar7 = (fVar7 + (0.95f * fVar6));
			}
			if (!uVar2 & 4 == 0 || !uVar2 & 8 == 0)
			{
				fVar7 = (fVar7 + -0.5f);
			}
			if ((!uVar2 & 32 == 0 && uVar2 & 4 == 0) && uVar2 & 8 == 0)
			{
				fVar7 = (fVar7 + -1f);
			}
			if (!bParam3 || !uVar2 & 8 == 0)
			{
				fVar7 = (fVar7 + (4.2f * -0.5f));
			}
			if (!fParam7 == 0)
			{
				if (uVar2 & 8 != 0)
				{
					fVar10 = func_221(fParam7, 3.5f);
				}
				else
				{
					fVar10 = func_221(fParam7, 1.5f);
				}
				if (fVar10 > 1.8f)
				{
					fVar7 = (fVar7 + ((fVar10 - 1.8f) * -0.5f));
				}
			}
		}
	}
	if (SYSTEM::VMAG(Param4) > 0f)
	{
		if (!func_223(Param0, *fParam1, Param4))
		{
			if (bParam3 || ((uVar2 & 1024 != 0 || Param0.f_2 == 0f) && bParam6))
			{
				*fParam1 = (*fParam1 + 180f);
			}
			else if (bParam10)
			{
				return 0f, 0f, 0f;
			}
		}
	}
	if (fVar7 < 0f)
	{
		fVar7 = 0f;
	}
	Var0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Param0, *fParam1, fVar7, 0f, 0f) };
	if (bParam3)
	{
		if (unk_0xE7E6F3B6B48E7F23(Param0, *fParam1, &Var11))
		{
			Var12 = { Var11 - Param0 };
			if (!fParam7 == 0)
			{
				Var13 = { Var12 / FtoV(SYSTEM::VMAG(Var12)) };
				if (uVar2 & 8 != 0)
				{
					fVar10 = func_221(fParam7, 3.5f);
				}
				else
				{
					fVar10 = func_221(fParam7, 1.5f);
				}
				Var13 = { Var13 * FtoV((fVar10 * 0.5f)) };
				Var12 = { Var12 - Var13 };
				Var11 = { Param0 + Var12 };
			}
			Var13 = { Var0 - Var11 };
			Var0 = { Var11 };
		}
	}
	return Var0;
}

float func_221(void fParam0, float fParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	func_98(fParam0, &fVar0, &fVar1, 1086324736, 1080033280, 1077936128);
	fVar2 = (fVar1 - fVar0);
	if (fVar2 < fParam1)
	{
		return fParam1;
	}
	return fVar2;
}

int func_222(struct<3> Param0)
{
	float fVar0;
	
	if (MISC::GET_GROUND_Z_FOR_3D_COORD(Param0.x, Param0.f_1, (Param0.f_2 + 500f), &fVar0, false, false))
	{
		fVar0 = (fVar0 - Param0.f_2);
		if (fVar0 > 6f)
		{
			return 1;
		}
	}
	return 0;
}

int func_223(struct<3> Param0, float fParam1, struct<3> Param2)
{
	struct<3> Var0;
	struct<3> Var1;
	
	Var0 = { 0f, 1f, 0f };
	func_84(&Var0, 0f, 0f, fParam1);
	Var1 = { Param2 - Param0 };
	if (func_80(Var1, Var0) >= 0f)
	{
		return 1;
	}
	return 0;
}

int func_224(struct<3> Param0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_94(Param0);
	iVar0 = 0;
	while (iVar0 < Global_2412187[iVar1])
	{
		if (func_93(Param0, &(Global_2411484[iVar1 /*78*/][iVar0 /*7*/])))
		{
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2412187[8])
	{
		if (func_93(Param0, &(Global_2411484[8 /*78*/][iVar0 /*7*/])))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_225(var uParam0, bool bParam1)
{
	bool bVar0;
	
	bVar0 = false;
	if (Global_2405074.f_26.f_18)
	{
		switch (Global_2405074.f_26.f_17)
		{
			case 0:
				if (func_203(*uParam0, Global_2405074.f_26.f_10, Global_2405074.f_26.f_16, 0, 0))
				{
					bVar0 = true;
				}
				break;
			
			case 1:
				if (func_122(*uParam0, Global_2405074.f_26.f_10, Global_2405074.f_26.f_13, 0, 0))
				{
					bVar0 = true;
				}
				break;
			
			case 2:
				if (HUD::GET_BLIP_INFO_ID_TYPE(*uParam0, Global_2405074.f_26.f_10, Global_2405074.f_26.f_13, Global_2405074.f_26.f_16, 0, 1))
				{
					bVar0 = true;
				}
				break;
		}
		if (bVar0)
		{
			if (bParam1)
			{
				*uParam0 = { func_85(*uParam0, Global_2405074.f_26.f_10, Global_2405074.f_26.f_13, Global_2405074.f_26.f_16, Global_2405074.f_26.f_17, 1036831949, 0) };
			}
		}
	}
	return bVar0;
}

int func_226(var uParam0, var uParam1, var uParam2)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	float fVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	float fVar9;
	bool bVar10;
	int iVar11;
	float fVar12;
	struct<3> Var13;
	var uVar14;
	
	if (Global_2405074.f_1748 > 0)
	{
		iVar1 = 0;
		iVar2 = 0;
		if (!SYSTEM::VMAG(uParam2->f_35) > 0f)
		{
			uParam2->f_35 = { *uParam0 };
		}
		if (uParam2->f_15)
		{
			if (func_107(uParam2->f_35, uParam0, &(uParam2->f_38), &(uParam2->f_45), 1, 1))
			{
				uParam2->f_6 = 9999.9f;
				uParam2->f_7 = 9999.9f;
			}
		}
		if (uParam2->f_48)
		{
			if (func_225(uParam0, 1))
			{
				uParam2->f_6 = 9999.9f;
				uParam2->f_7 = 9999.9f;
			}
		}
		if (uParam0->f_2 < -80f)
		{
			uParam2->f_6 = 9999.9f;
			uParam2->f_7 = 9999.9f;
		}
		Global_2412480.f_162 = 0;
		Global_2412480.f_163 = 0;
		iVar5 = 0;
		while (iVar5 < 40)
		{
			Global_2412480[iVar5 /*3*/] = { 0f, 0f, 0f };
			Global_2412480.f_121[iVar5] = 0f;
			iVar5++;
		}
		if (uParam2->f_30)
		{
			func_229(*uParam0);
		}
		else if (uParam2->f_29)
		{
			func_228();
		}
		else
		{
			func_227();
		}
		iVar1 = 0;
		while (iVar1 < Global_2405074.f_1748)
		{
			iVar2 = Global_2405074.f_2154[iVar1];
			if (iVar2 > -1 && iVar2 < 101)
			{
				Var3 = { Global_2405074.f_1749[iVar2 /*4*/] };
				fVar4 = Global_2405074.f_1749[iVar2 /*4*/].f_3;
				if (SYSTEM::VMAG(Var3) > 0f)
				{
					if ((uParam2->f_57 && SYSTEM::VDIST(Var3, uParam2->f_35) > uParam2->f_4) || uParam2->f_57 == 0)
					{
						if ((uParam2->f_5 > 0f && SYSTEM::VDIST(Var3.x, Var3.f_1, 0f, uParam2->f_35, uParam2->f_35.f_1, 0f) < uParam2->f_5) || uParam2->f_5 <= 0f)
						{
							if ((uParam2->f_12 && !func_215(Var3, fVar4, uParam2->f_34, PLAYER::PLAYER_ID(), 0, uParam2->f_56)) || !uParam2->f_12)
							{
								if (!uParam2->f_15 || !func_107(uParam2->f_35, &Var3, &(uParam2->f_38), &(uParam2->f_45), 0, 1))
								{
									if (uParam2->f_8)
									{
										iVar6 = uParam2->f_31;
										bVar7 = true;
										iVar8 = 1;
										fVar9 = uParam2->f_49;
										if (!uParam2->f_55)
										{
											iVar6 = 0;
											bVar7 = false;
											iVar8 = 0;
											fVar9 = 1f;
										}
										else if (uParam2->f_17)
										{
											iVar6 = 0;
											bVar7 = false;
											iVar8 = 0;
											if (uParam2->f_33 == 1)
											{
												fVar9 = (fVar9 * 0.375f);
											}
										}
										else
										{
											bVar7 = true;
											iVar8 = 1;
											if (uParam2->f_28)
											{
												if (uParam2->f_33 == 1)
												{
													fVar9 = (fVar9 * 0.375f);
												}
											}
										}
										bVar10 = false;
										if (!func_214(Var3, fVar4, uParam2->f_34))
										{
											if (uParam2->f_3 > 7f)
											{
												if (func_233(Var3, 6f, 1f, 1f, 5f, iVar6, bVar7, iVar8, fVar9, uParam2->f_58, -1, 1, uParam2->f_3, 0, 0, 0, 0))
												{
													bVar10 = true;
												}
											}
											else if (func_233(Var3, 6f, 1f, 1f, 5f, iVar6, bVar7, iVar8, fVar9, uParam2->f_58, -1, 1, 0f, 0, 0, 0, 0) && !func_212(Var3, fVar4, uParam2->f_34, 1, 1, 0, 0, uParam2->f_58, 0))
											{
												bVar10 = true;
											}
										}
										if (bVar10)
										{
											if ((uParam2->f_29 || uParam2->f_30) || uParam2->f_52)
											{
												fVar12 = 0f;
												if (uParam2->f_52)
												{
													iVar11 = func_211(Var3, uParam2->f_54, &fVar12);
												}
												if (!uParam2->f_52 || (uParam2->f_52 && iVar11 <= uParam2->f_53))
												{
													if (uParam2->f_52)
													{
														if (iVar11 < uParam2->f_53)
														{
															iVar5 = 0;
															while (iVar5 < Global_2412480.f_162)
															{
																Global_2412480[iVar5 /*3*/] = { 0f, 0f, 0f };
																Global_2412480.f_121[iVar5] = 0f;
																iVar5++;
															}
															Global_2412480.f_162 = 0;
															uParam2->f_53 = iVar11;
														}
													}
													if (uParam2->f_30)
													{
														if (Global_2412480.f_162 == 0)
														{
															Global_2412480[0 /*3*/] = { Var3 };
															Global_2412480.f_121[0] = fVar4;
														}
														else
														{
															iVar5 = 0;
															while (iVar5 < Global_2412480.f_162 + 1)
															{
																if (iVar5 < 40)
																{
																	if (SYSTEM::VDIST2(Var3, uParam2->f_35) < SYSTEM::VDIST2(Global_2412480[iVar5 /*3*/], uParam2->f_35))
																	{
																		func_210(Var3, fVar4, iVar5);
																		iVar5 = Global_2412480.f_162 + 1;
																	}
																}
																iVar5++;
															}
														}
														Global_2412480.f_162++;
														if (Global_2412480.f_162 >= 5)
														{
															if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
															{
																iVar1 = Global_2405074.f_1748;
															}
															else if (Global_2412480.f_162 == 40)
															{
																iVar1 = Global_2405074.f_1748;
															}
														}
													}
													else
													{
														Global_2412480[Global_2412480.f_162 /*3*/] = { Var3 };
														Global_2412480.f_121[Global_2412480.f_162] = fVar4;
														Global_2412480.f_162++;
														if (Global_2412480.f_162 >= 10)
														{
															if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
															{
																iVar1 = Global_2405074.f_1748;
															}
															else if (Global_2412480.f_162 == 40)
															{
																iVar1 = Global_2405074.f_1748;
															}
														}
													}
												}
											}
											else
											{
												*uParam0 = { Var3 };
												*uParam1 = fVar4;
												return 1;
											}
										}
									}
									else
									{
										*uParam0 = { Var3 };
										*uParam1 = fVar4;
										return 1;
									}
								}
							}
						}
					}
				}
			}
			iVar1++;
		}
		if (Global_2412480.f_162 > 0)
		{
			if (uParam2->f_30)
			{
				*uParam0 = { Global_2412480[0 /*3*/] };
				*uParam1 = Global_2412480.f_121[0];
				return 1;
			}
			else
			{
				if (Global_2412480.f_163 > 0 && !Global_2412480.f_163 == Global_2412480.f_162)
				{
					func_208(0, uParam2);
				}
				bVar0 = NETWORK::_NETWORK_GET_ROS_PRIVILEGE_25(0, Global_2412480.f_162);
				Var13 = { Global_2412480[0 /*3*/] };
				uVar14 = Global_2412480.f_121[0];
				Global_2412480[0 /*3*/] = { Global_2412480[bVar0 /*3*/] };
				Global_2412480.f_121[0] = Global_2412480.f_121[bVar0];
				Global_2412480[bVar0 /*3*/] = { Var13 };
				Global_2412480.f_121[bVar0] = uVar14;
				*uParam0 = { Global_2412480[0 /*3*/] };
				*uParam1 = Global_2412480.f_121[0];
				return 1;
			}
		}
		else
		{
			uParam2->f_33++;
			if (uParam2->f_33 < 2)
			{
				return 0;
			}
			else if (uParam2->f_59 && Global_2405074.f_1748 > 0)
			{
				bVar0 = NETWORK::_NETWORK_GET_ROS_PRIVILEGE_25(0, Global_2405074.f_1748);
				*uParam0 = { Global_2405074.f_1749[bVar0 /*4*/] };
				*uParam1 = Global_2405074.f_1749[bVar0 /*4*/].f_3;
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

void func_227()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Global_2405074.f_1748)
	{
		Global_2405074.f_2154[iVar0] = iVar0;
		iVar0++;
	}
}

void func_228()
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	var uVar3;
	
	iVar0 = 0;
	while (iVar0 < Global_2405074.f_1748)
	{
		Global_2405074.f_2154[iVar0] = iVar0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2405074.f_1748)
	{
		bVar1 = NETWORK::_NETWORK_GET_ROS_PRIVILEGE_25(0, Global_2405074.f_1748);
		bVar2 = NETWORK::_NETWORK_GET_ROS_PRIVILEGE_25(0, Global_2405074.f_1748);
		uVar3 = Global_2405074.f_2154[bVar1];
		Global_2405074.f_2154[bVar1] = Global_2405074.f_2154[bVar2];
		Global_2405074.f_2154[bVar2] = uVar3;
		iVar0++;
	}
}

void func_229(struct<3> Param0)
{
	float fVar0;
	var uVar1;
	int iVar2;
	
	fVar0 = -1f;
	while (iVar2 < Global_2405074.f_1748)
	{
		uVar1 = func_230(Param0, fVar0, &fVar0);
		Global_2405074.f_2154[iVar2] = uVar1;
		iVar2++;
	}
}

int func_230(struct<3> Param0, float fParam1, float fParam2)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	
	iVar0 = -1;
	bVar1 = 1E+08f;
	iVar3 = 0;
	while (iVar3 < Global_2405074.f_1748)
	{
		bVar2 = SYSTEM::VDIST2(Param0, Global_2405074.f_1749[iVar3 /*4*/]);
		if (bVar2 < bVar1 && bVar2 > fParam1)
		{
			iVar0 = iVar3;
			bVar1 = bVar2;
		}
		iVar3++;
	}
	*fParam2 = bVar1;
	return iVar0;
}

bool func_231(int iParam0)
{
	return iParam0 == 50;
}

void func_232(var uParam0, var uParam1)
{
	unk_0x752A19C36727F403(uParam0, uParam1, 0.1f);
	Global_2405074.f_2468 = SCRIPT::GET_ID_OF_THIS_THREAD();
	Global_2405074.f_2466 = 1;
	Global_2405074.f_2469 = NETWORK::GET_NETWORK_TIME();
}

int func_233(struct<3> Param0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5, bool bParam6, int iParam7, float fParam8, bool bParam9, int iParam10, bool bParam11, float fParam12, bool bParam13, float fParam14, bool bParam15, bool bParam16)
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
		if (func_187(Param0, fParam12, 1, 1, bParam13, bParam15, bParam9, bParam13))
		{
			return 0;
		}
	}
	Global_2405074.f_2++;
	if (bParam6)
	{
		if (fParam4 > 0f)
		{
			if (func_174(Param0, fParam4, iParam5, iParam7, fParam8, bParam9, iParam10, fParam14, bParam15))
			{
				return 0;
			}
		}
	}
	Global_2405074.f_2++;
	return 1;
}

void func_234()
{
	func_239();
	func_238();
	func_237();
	func_236();
	func_235();
}

void func_235()
{
	struct<10> Var0;
	int iVar1;
	
	Var0.f_2 = 1176256410;
	iVar1 = 0;
	while (iVar1 < 128)
	{
		Global_2408010[iVar1 /*10*/] = { Var0 };
		iVar1++;
	}
}

void func_236()
{
	struct<10> Var0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 4)
	{
		Global_2405074.f_2485.f_90[iVar1 /*10*/] = { Var0 };
		iVar1++;
	}
}

void func_237()
{
	struct<4> Var0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 8)
	{
		Global_2405074.f_2485.f_57[iVar1 /*4*/] = { Var0 };
		iVar1++;
	}
}

void func_238()
{
	struct<10> Var0;
	int iVar1;
	
	Var0.f_2 = 1176256410;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		Global_2405074.f_2485.f_6[iVar1 /*10*/] = { Var0 };
		iVar1++;
	}
}

void func_239()
{
	struct<6> Var0;
	
	Var0.f_3 = -1;
	Global_2405074.f_2485 = { Var0 };
}

void func_240()
{
	if (Global_2405074.f_2466)
	{
		if (SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2405074.f_2468)
		{
			PATHFIND::REMOVE_NAVMESH_REQUIRED_REGIONS();
		}
		else
		{
			PATHFIND::REMOVE_NAVMESH_REQUIRED_REGIONS();
		}
		Global_2405074.f_2466 = 0;
	}
}

int func_241(bool bParam0)
{
	if (PED::REMOVE_SCENARIO_BLOCKING_AREA())
	{
		return 10000;
	}
	if (bParam0)
	{
		return 5000;
	}
	return 1000;
}

bool func_242(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	unk_0x78FCB2E22C41B9D5(iParam0);
	return ENTITY::DOES_ENTITY_EXIST(iParam0);
}

int func_243(bool bParam0)
{
	switch (bParam0)
	{
		case 0:
			return Local_63.f_49;
			break;
	}
	return 0;
}

int func_244()
{
	if (bLocal_69 == 0)
	{
		if (unk_0xCE990E643CD9D0E5(Local_63.f_2, 4))
		{
			return 1;
		}
	}
	return 0;
}

int func_245()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bool bVar8;
	var uVar9;
	
	if (!unk_0xCE990E643CD9D0E5(Local_63.f_2, false))
	{
		unk_0xBE20AB8238688965(&(Local_63.f_2), false);
		if (bLocal_69 != 0)
		{
			return 1;
		}
		else if (func_6(bLocal_71, 1, 1))
		{
			if (MISC::ARE_PROFILE_SETTINGS_VALID(false, 0) - NETWORK::GET_NUM_CREATED_MISSION_PEDS(false)) >= func_482(bLocal_69)
			{
				if (NETWORK::CAN_REGISTER_MISSION_PEDS(func_482(bLocal_69)))
				{
					iVar0 = 0;
					iVar1 = 0;
					iVar2 = PLAYER::GET_PLAYER_PED(bLocal_71);
					iVar3 = PED::GET_PED_NEARBY_PEDS(iVar2, &uLocal_252, -1);
					bVar4 = true;
					iVar0 = 0;
					while (iVar0 < iVar3)
					{
						if (bVar4)
						{
							iVar5 = -1;
							bVar4 = false;
							iVar1 = 0;
							while (iVar1 < func_482(bLocal_69))
							{
								if (iVar5 == -1)
								{
									if (((!HUD::DOES_BLIP_EXIST(Local_63.f_10[iVar1 /*7*/]) && !unk_0xCE990E643CD9D0E5(Local_63.f_10[iVar1 /*7*/].f_2, true)) && !unk_0xCE990E643CD9D0E5(Local_63.f_10[iVar1 /*7*/].f_2, 6)) && !unk_0xCE990E643CD9D0E5(Local_63.f_10[iVar1 /*7*/].f_2, 8))
									{
										iVar5 = iVar1;
										bVar4 = true;
									}
								}
								iVar1++;
							}
							if (iVar5 != -1)
							{
								if (MISC::IS_BIT_SET(uLocal_252[iVar0]))
								{
									if (!PED::IS_PED_IN_ANY_POLICE_VEHICLE(uLocal_252[iVar0], 0))
									{
										if (!PLAYER::SET_PLAYER_WANTED_LEVEL(uLocal_252[iVar0]))
										{
											if (func_247(MISC::GET_MODEL_DIMENSIONS(uLocal_252[iVar0])))
											{
												if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(uLocal_252[iVar0]))
												{
													if (!SYSTEM::VDIST(uLocal_252[iVar0], 0))
													{
														if (func_5(NETWORK::NETWORK_ARE_HANDLES_THE_SAME(uLocal_252[iVar0], 1), NETWORK::NETWORK_ARE_HANDLES_THE_SAME(iVar2, 1), 625f))
														{
															ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uLocal_252[iVar0], true, false);
															Local_63.f_10[iVar5 /*7*/].f_6 = iVar0;
															unk_0xBE20AB8238688965(&(Local_63.f_10[iVar5 /*7*/].f_2), 8);
															if (!unk_0xCE990E643CD9D0E5(Local_63.f_1, 12))
															{
																Local_63.f_8 = iLocal_74;
																unk_0xBE20AB8238688965(&(Local_63.f_1), 12);
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
						iVar0++;
					}
				}
			}
		}
	}
	else if (unk_0xCE990E643CD9D0E5(Local_63.f_1, 12))
	{
		iVar6 = 0;
		iVar7 = 0;
		bVar8 = false;
		iVar6 = 0;
		while (iVar6 < func_482(bLocal_69))
		{
			if (unk_0xCE990E643CD9D0E5(Local_63.f_10[iVar6 /*7*/].f_2, true) || unk_0xCE990E643CD9D0E5(Local_63.f_10[iVar6 /*7*/].f_2, 6))
			{
				iVar7++;
			}
			else if (unk_0xCE990E643CD9D0E5(Local_63.f_10[iVar6 /*7*/].f_2, 8))
			{
				if (!PED::IS_PED_IN_ANY_POLICE_VEHICLE(uLocal_252[Local_63.f_10[iVar6 /*7*/].f_6], 0))
				{
					if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(uLocal_252[Local_63.f_10[iVar6 /*7*/].f_6]))
					{
						if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uLocal_252[Local_63.f_10[iVar6 /*7*/].f_6]))
						{
							NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(uLocal_252[Local_63.f_10[iVar6 /*7*/].f_6]);
							bVar8 = true;
						}
						else
						{
							WEAPON::REMOVE_ALL_PED_WEAPONS(uLocal_252[Local_63.f_10[iVar6 /*7*/].f_6], true);
							Local_63.f_10[iVar6 /*7*/] = NETWORK::PED_TO_NET(uLocal_252[Local_63.f_10[iVar6 /*7*/].f_6]);
							NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(Local_63.f_10[iVar6 /*7*/], true);
							unk_0xBE20AB8238688965(&(Local_63.f_10[iVar6 /*7*/].f_2), false);
							Local_63.f_10[iVar6 /*7*/].f_1 = bLocal_69;
							Local_63.f_10[iVar6 /*7*/].f_4 = func_70(bLocal_69);
							func_68(iVar6);
							VEHICLE::IS_VEHICLE_DRIVEABLE(&(Local_63.f_10[iVar6 /*7*/].f_2), 8);
							iVar7++;
						}
					}
					else
					{
						bVar8 = true;
					}
				}
			}
			iVar6++;
		}
		if (!bVar8 || NETWORK::GET_TIME_DIFFERENCE(iLocal_74, Local_63.f_8) > 5000)
		{
			if (iVar7 >= func_482(bLocal_69))
			{
				unk_0xBE20AB8238688965(&(Local_63.f_2), 4);
			}
			iVar6 = 0;
			while (iVar6 < 16)
			{
				uLocal_252[iVar6] = uVar9;
				iVar6++;
			}
			iVar6 = 0;
			while (iVar6 < func_482(bLocal_69))
			{
				if (unk_0xCE990E643CD9D0E5(Local_63.f_10[iVar6 /*7*/].f_2, 8))
				{
					func_246(&(Local_63.f_10[iVar6 /*7*/]));
					VEHICLE::IS_VEHICLE_DRIVEABLE(&(Local_63.f_10[iVar6 /*7*/].f_2), 8);
				}
				iVar6++;
			}
			VEHICLE::IS_VEHICLE_DRIVEABLE(&(Local_63.f_1), 12);
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_246(int iParam0)
{
	int iVar0;
	
	if (NETWORK::NETWORK_IS_HANDLE_VALID(*iParam0))
	{
		iVar0 = NETWORK::NET_TO_ENT(*iParam0);
		ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&iVar0);
	}
}

int func_247(void fParam0)
{
	if ((((((((((((((((((((((((((((((((((((((((((((((((((((((fParam0 == joaat("mp_m_freemode_01") || fParam0 == joaat("mp_m_fibsec_01")) || fParam0 == joaat("mp_s_m_armoured_01")) || fParam0 == joaat("s_f_y_airhostess_01")) || fParam0 == joaat("s_f_y_baywatch_01")) || fParam0 == joaat("s_f_y_cop_01")) || fParam0 == joaat("s_f_y_ranger_01")) || fParam0 == joaat("s_f_y_scrubs_01")) || fParam0 == joaat("s_f_y_sheriff_01")) || fParam0 == joaat("s_m_m_armoured_01")) || fParam0 == joaat("s_m_m_armoured_02")) || fParam0 == joaat("s_m_m_bouncer_01")) || fParam0 == joaat("s_m_m_ciasec_01")) || fParam0 == joaat("s_m_m_chemsec_01")) || fParam0 == joaat("s_m_m_doctor_01")) || fParam0 == joaat("s_m_m_fiboffice_01")) || fParam0 == joaat("s_m_m_fiboffice_02")) || fParam0 == joaat("s_m_m_highsec_01")) || fParam0 == joaat("s_m_m_highsec_02")) || fParam0 == joaat("s_m_m_janitor")) || fParam0 == joaat("s_m_m_lsmetro_01")) || fParam0 == joaat("s_m_m_marine_01")) || fParam0 == joaat("s_m_m_marine_02")) || fParam0 == joaat("s_m_m_paramedic_01")) || fParam0 == joaat("s_m_m_pilot_01")) || fParam0 == joaat("s_m_m_pilot_02")) || fParam0 == joaat("s_m_m_postal_01")) || fParam0 == joaat("s_m_m_postal_02")) || fParam0 == joaat("s_m_m_prisguard_01")) || fParam0 == joaat("s_m_m_scientist_01")) || fParam0 == joaat("s_m_m_security_01")) || fParam0 == joaat("s_m_m_ups_01")) || fParam0 == joaat("s_m_m_ups_02")) || fParam0 == joaat("s_m_y_airworker")) || fParam0 == joaat("s_m_y_armymech_01")) || fParam0 == joaat("s_m_y_baywatch_01")) || fParam0 == joaat("s_m_y_blackops_01")) || fParam0 == joaat("s_m_y_blackops_02")) || fParam0 == joaat("s_m_y_cop_01")) || fParam0 == joaat("s_m_y_doorman_01")) || fParam0 == joaat("s_m_y_fireman_01")) || fParam0 == joaat("s_m_y_garbage")) || fParam0 == joaat("s_m_y_hwaycop_01")) || fParam0 == joaat("s_m_y_marine_01")) || fParam0 == joaat("s_m_y_marine_02")) || fParam0 == joaat("s_m_y_marine_03")) || fParam0 == joaat("s_m_y_pilot_01")) || fParam0 == joaat("s_m_y_ranger_01")) || fParam0 == joaat("s_m_y_sheriff_01")) || fParam0 == joaat("s_m_y_swat_01")) || fParam0 == joaat("s_m_y_uscg_01")) || fParam0 == joaat("s_m_y_valet_01")) || fParam0 == joaat("s_m_y_waiter_01")) || fParam0 == joaat("u_m_m_jewelsec_01")) || fParam0 == joaat("S_M_Y_Casino_01"))
	{
		return 0;
	}
	return 1;
}

int func_248()
{
	if (unk_0xCE990E643CD9D0E5(Local_63.f_1, 6))
	{
		return 1;
	}
	else if (bLocal_69 == 0)
	{
		Local_63.f_49 = func_249(Local_63.f_36, 1);
		unk_0xBE20AB8238688965(&(Local_63.f_1), 6);
		return 1;
	}
	else
	{
		unk_0xBE20AB8238688965(&(Local_63.f_1), 6);
		return 1;
	}
	return 0;
}

int func_249(struct<3> Param0, int iParam1)
{
	bool bVar0;
	
	if (func_250(Param0, 1301f, -1696f, 300f, 350f, 0))
	{
		return joaat("g_m_y_mexgoon_01");
	}
	else if (func_250(Param0, 1100f, -196f, 300f, 350f, 0) || func_250(Param0, 77f, 3657f, 100f, 150f, 0))
	{
		return joaat("g_m_y_lost_01");
	}
	else if (func_250(Param0, 208f, -1835f, 200f, 250f, 0))
	{
		return joaat("g_m_y_ballaorig_01");
	}
	else if (func_250(Param0, -26f, -1450f, 200f, 250f, 0))
	{
		return joaat("g_m_y_famca_01");
	}
	else if (func_250(Param0, -654f, -922f, 300f, 350f, 0))
	{
		return joaat("g_m_y_korean_02");
	}
	else if (func_250(Param0, 1840f, 3657f, 450f, 500f, 0))
	{
		return joaat("a_m_m_hillbilly_02");
	}
	else if (func_250(Param0, 550f, -1885f, 200f, 250f, 0))
	{
		return joaat("g_m_y_salvagoon_01");
	}
	else if (iParam1 == 1)
	{
		bVar0 = NETWORK::_NETWORK_GET_ROS_PRIVILEGE_25(0, 100);
		if (bVar0 < 33)
		{
			return joaat("mp_g_m_pros_01");
		}
		else if (bVar0 >= 66)
		{
			return joaat("g_m_m_armgoon_01");
		}
		else
		{
			return joaat("g_m_m_chigoon_01");
		}
		if (Param0.f_1 > 800f)
		{
			bVar0 = NETWORK::_NETWORK_GET_ROS_PRIVILEGE_25(0, 100);
			if (bVar0 < 33)
			{
				return joaat("a_m_m_hillbilly_02");
			}
		}
	}
	return joaat("mp_g_m_pros_01");
}

bool func_250(struct<3> Param0, struct<3> Param1, float fParam2, int iParam3)
{
	return HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Param0, Param1, iParam3) <= fParam2;
}

void func_251(int iParam0)
{
	if (STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(iParam0))
	{
	}
	Local_63.f_36 = { NETWORK::NETWORK_ARE_HANDLES_THE_SAME(iParam0, 1) };
	if (func_252(iParam0, 0))
	{
		unk_0xBE20AB8238688965(&(Local_63.f_1), 17);
	}
	else
	{
		VEHICLE::IS_VEHICLE_DRIVEABLE(&(Local_63.f_1), 17);
	}
}

int func_252(int iParam0, int iParam1)
{
	if (MISC::IS_BIT_SET(iParam0))
	{
		if (!PED::IS_PED_IN_ANY_POLICE_VEHICLE(iParam0, 0) || iParam1)
		{
			if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
			{
				if (ENTITY::GET_ENTITY_SUBMERGED_LEVEL(iParam0) >= 0.7f)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_253()
{
	bool bVar0;
	
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		if (unk_0xCE990E643CD9D0E5(Local_63.f_1, 7))
		{
			return 1;
		}
		else
		{
			bVar0 = false;
			switch (bLocal_69)
			{
				case 0:
					if (unk_0xCE990E643CD9D0E5(Local_63.f_2, 11))
					{
						if (func_6(bLocal_71, 1, 1))
						{
							if (SYSTEM::VDIST2(func_8(bLocal_71), Local_63.f_39) > 625f)
							{
								VEHICLE::IS_VEHICLE_DRIVEABLE(&(Local_63.f_2), 11);
								VEHICLE::IS_VEHICLE_DRIVEABLE(&bLocal_66, 8);
							}
						}
					}
					else
					{
						if (func_6(bLocal_71, 1, 1))
						{
							bVar0 = true;
							if (func_256())
							{
								bVar0 = false;
							}
						}
						if (bVar0)
						{
							func_63();
						}
						else
						{
							func_64();
						}
						if (unk_0xCE990E643CD9D0E5(Local_63.f_1, 5))
						{
							if (func_255())
							{
								func_64();
								unk_0xBE20AB8238688965(&(Local_63.f_1), 7);
							}
						}
					}
					break;
				
				case 1:
					if (func_6(bLocal_71, 1, 1))
					{
						bVar0 = true;
						if (func_254())
						{
							bVar0 = false;
						}
					}
					if (bVar0)
					{
						func_63();
					}
					else
					{
						func_64();
					}
					if (unk_0xCE990E643CD9D0E5(Local_63.f_1, 5))
					{
						if (NETWORK::GET_TIME_DIFFERENCE(iLocal_74, Local_63.f_5) > 30000)
						{
							func_64();
							unk_0xBE20AB8238688965(&(Local_63.f_1), 7);
						}
					}
					break;
				}
			}
	}
	return 0;
}

int func_254()
{
	int iVar0;
	
	iVar0 = PLAYER::GET_PLAYER_PED(bLocal_71);
	if (((((ENTITY::IS_ENTITY_IN_AIR(iVar0) || NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0)) || func_29(bLocal_71, 1, 1)) || func_42(bLocal_71, 0)) || func_42(bLocal_71, 7)) || func_28(bLocal_71))
	{
		return 1;
	}
	if (func_118(bLocal_71, 1))
	{
		if (bLocal_71 > -1)
		{
			if (Global_1590682[bLocal_71 /*883*/] != 1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_255()
{
	if (!unk_0xCE990E643CD9D0E5(Local_63.f_1, 18))
	{
		if (NETWORK::GET_TIME_DIFFERENCE(iLocal_74, Local_63.f_5) > 5000)
		{
			unk_0xBE20AB8238688965(&(Local_63.f_1), 18);
			return 1;
		}
	}
	else if (NETWORK::GET_TIME_DIFFERENCE(iLocal_74, Local_63.f_5) > 60000)
	{
		return 1;
	}
	return 0;
}

int func_256()
{
	int iVar0;
	
	iVar0 = PLAYER::GET_PLAYER_PED(bLocal_71);
	if (((((((((ENTITY::IS_ENTITY_IN_ANGLED_AREA(iVar0) > 10f || ENTITY::IS_ENTITY_IN_AIR(iVar0)) || NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0)) || func_29(bLocal_71, 1, 1)) || func_62(bLocal_71)) || func_42(bLocal_71, 0)) || func_42(bLocal_71, 7)) || func_28(bLocal_71)) || Global_2425869[bLocal_71 /*443*/].f_242) || func_61(PLAYER::GET_PLAYER_PED(bLocal_71), joaat("titan")))
	{
		return 1;
	}
	if (func_118(bLocal_71, 1))
	{
		if (bLocal_71 > -1)
		{
			if (Global_1590682[bLocal_71 /*883*/] != 1)
			{
				return 1;
			}
		}
	}
	if (bLocal_71 != -1)
	{
		if (unk_0xCE990E643CD9D0E5(Local_65[bLocal_71 /*5*/].f_1, 4))
		{
			return 1;
		}
	}
	return 0;
}

void func_257()
{
	if (!unk_0xCE990E643CD9D0E5(Local_63.f_1, 14))
	{
		Local_63.f_9 = iLocal_74;
		unk_0xBE20AB8238688965(&(Local_63.f_1), 14);
	}
}

void func_258()
{
	if (Local_63.f_44 != Local_65[bLocal_70 /*5*/].f_4)
	{
		Local_63.f_44 = Local_65[bLocal_70 /*5*/].f_4;
	}
}

void func_259()
{
	if (!unk_0xCE990E643CD9D0E5(Local_63.f_1, 10))
	{
		Local_63.f_45 = func_482(bLocal_69);
		Local_63.f_46 = 0;
		Local_63.f_47 = 0;
		unk_0xBE20AB8238688965(&(Local_63.f_1), 10);
	}
}

void func_260()
{
	func_261();
	if (!unk_0xCE990E643CD9D0E5(Local_63.f_1, 8))
	{
		if (unk_0xCE990E643CD9D0E5(Local_63.f_2, 7))
		{
			if (NETWORK::GET_TIME_DIFFERENCE(iLocal_74, Local_63.f_7) > 300000)
			{
				unk_0xBE20AB8238688965(&(Local_63.f_2), 8);
			}
		}
	}
}

void func_261()
{
	if (!unk_0xCE990E643CD9D0E5(Local_63.f_2, 7))
	{
		Local_63.f_7 = iLocal_74;
		unk_0xBE20AB8238688965(&(Local_63.f_2), 7);
	}
}

void func_262()
{
	void fVar0;
	int iVar1;
	int iVar2;
	
	unk_0xBE20AB8238688965(&bLocal_66, 7);
	if (unk_0xCE990E643CD9D0E5(Local_63.f_3, true))
	{
	}
	if (unk_0xCE990E643CD9D0E5(Local_63.f_3, 2))
	{
	}
	if (unk_0xCE990E643CD9D0E5(Local_63.f_3, 3))
	{
	}
	if (unk_0xCE990E643CD9D0E5(Local_63.f_3, 9))
	{
	}
	if (unk_0xCE990E643CD9D0E5(Local_63.f_3, 4))
	{
	}
	if (unk_0xCE990E643CD9D0E5(Local_63.f_3, 5))
	{
	}
	if (unk_0xCE990E643CD9D0E5(Local_63.f_3, 11))
	{
		if (PLAYER::PLAYER_ID() == bLocal_70)
		{
			VEHICLE::IS_VEHICLE_DRIVEABLE(&bLocal_66, 7);
			if (Local_63.f_50 || Local_63.f_52)
			{
				unk_0xBE20AB8238688965(&bLocal_66, 7);
			}
			else if (func_377("MPCT_MERts", "FM_MERRYWEATHER", 85))
			{
				unk_0xBE20AB8238688965(&bLocal_66, 7);
			}
		}
	}
	if (unk_0xCE990E643CD9D0E5(Local_63.f_3, 6))
	{
		if (PLAYER::PLAYER_ID() == bLocal_70)
		{
			VEHICLE::IS_VEHICLE_DRIVEABLE(&bLocal_66, 7);
			if (Local_63.f_50 || Local_63.f_52)
			{
				unk_0xBE20AB8238688965(&bLocal_66, 7);
			}
			else if (func_377("MPCT_MERtd", "FM_MERRYWEATHER", 85))
			{
				unk_0xBE20AB8238688965(&bLocal_66, 7);
			}
		}
	}
	if (unk_0xCE990E643CD9D0E5(Local_63.f_3, 7))
	{
		if (PLAYER::PLAYER_ID() == bLocal_70)
		{
			VEHICLE::IS_VEHICLE_DRIVEABLE(&bLocal_66, 7);
			if (func_341())
			{
				if (!Local_63.f_50)
				{
					if (Local_63.f_52)
					{
						iLocal_253 = func_340(Local_63.f_53);
					}
					else
					{
						iLocal_253 = func_336(12);
					}
					if (iLocal_253 > 0)
					{
						func_334(iLocal_253, 1, 0, 0f);
						func_319(iLocal_253, 4, 1, 1);
					}
					unk_0xBE20AB8238688965(&bLocal_66, 7);
				}
				else
				{
					unk_0xBE20AB8238688965(&bLocal_66, 7);
				}
			}
		}
	}
	if (unk_0xCE990E643CD9D0E5(Local_63.f_3, false))
	{
		if (PLAYER::PLAYER_ID() == bLocal_70)
		{
			if (!unk_0xCE990E643CD9D0E5(Local_63.f_2, true))
			{
				VEHICLE::IS_VEHICLE_DRIVEABLE(&bLocal_66, 7);
				if (func_377("MPCT_mugfail", "LAMAR", 19))
				{
					unk_0xBE20AB8238688965(&bLocal_66, 7);
				}
			}
		}
		else if (PLAYER::PLAYER_ID() == bLocal_71)
		{
			if (unk_0xCE990E643CD9D0E5(Local_63.f_2, true))
			{
				if (unk_0xCE990E643CD9D0E5(Local_63.f_2, 12))
				{
					fVar0 = SYSTEM::ROUND((IntToFloat(Global_262145.f_6643) * Global_262145.f_4294));
					func_278(0, "XPT_MEDIUMT", -1859646258, 757237446, fVar0, 1, -1, 0);
					func_264(47, 1);
				}
			}
		}
	}
	if (unk_0xCE990E643CD9D0E5(Local_63.f_3, 8))
	{
		if (PLAYER::PLAYER_ID() == bLocal_70)
		{
			VEHICLE::IS_VEHICLE_DRIVEABLE(&bLocal_66, 7);
			if (func_341())
			{
				if (bLocal_69 == 0)
				{
					iLocal_253 = (func_336(2) * func_482(bLocal_69));
					iVar1 = 3;
				}
				else
				{
					if (Local_63.f_52)
					{
						iLocal_253 = func_340(Local_63.f_53);
					}
					else
					{
						iLocal_253 = func_336(12);
					}
					iVar1 = 4;
				}
				if (!Local_63.f_50)
				{
					if (iLocal_253 > 0)
					{
						func_334(iLocal_253, 1, 0, 0f);
						func_319(iLocal_253, iVar1, 1, 0);
					}
					unk_0xBE20AB8238688965(&bLocal_66, 7);
				}
				else
				{
					unk_0xBE20AB8238688965(&bLocal_66, 7);
				}
			}
		}
	}
	if (unk_0xCE990E643CD9D0E5(Local_63.f_3, 10))
	{
		if (PLAYER::PLAYER_ID() == bLocal_70)
		{
			VEHICLE::IS_VEHICLE_DRIVEABLE(&bLocal_66, 7);
			if (func_341())
			{
				if (bLocal_69 == 0)
				{
					iLocal_253 = (func_336(2) * func_482(bLocal_69));
					iVar2 = 3;
				}
				else
				{
					if (Local_63.f_52)
					{
						iLocal_253 = func_340(Local_63.f_53);
					}
					else
					{
						iLocal_253 = func_336(12);
					}
					iVar2 = 4;
				}
				if (!Local_63.f_50)
				{
					if (iLocal_253 > 0)
					{
						func_334(iLocal_253, 1, 0, 0f);
						func_319(iLocal_253, iVar2, 1, 0);
					}
					unk_0xBE20AB8238688965(&bLocal_66, 7);
				}
				else
				{
					unk_0xBE20AB8238688965(&bLocal_66, 7);
				}
			}
		}
	}
	if (unk_0xCE990E643CD9D0E5(bLocal_66, 7))
	{
		func_263();
	}
}

void func_263()
{
	VEHICLE::IS_VEHICLE_DRIVEABLE(&(Global_1590682[STATS::_GET_PACKED_TITLE_UPDATE_BOOL_STAT_KEY() /*883*/].f_143), bLocal_69);
	Global_1590682[STATS::_GET_PACKED_TITLE_UPDATE_BOOL_STAT_KEY() /*883*/].f_144 = -1;
	if (bLocal_69 == 1)
	{
		if (MISC::IS_INCIDENT_VALID(iLocal_251))
		{
			MISC::DELETE_INCIDENT(iLocal_251);
		}
	}
	func_511();
	func_543();
}

int func_264(int iParam0, int iParam1)
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_265(iParam0, iParam1);
}

int func_265(int iParam0, int iParam1)
{
	if (func_277(14) && !func_276(iParam0))
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
	if (func_275(&Global_4271324))
	{
		if (func_273(&Global_4271324, iParam0))
		{
			return 0;
		}
		if (func_266(&Global_4271324, iParam0))
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

int func_266(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[78];
	
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_277(14) && !func_276(iParam1))
	{
		return 0;
	}
	if (func_273(uParam0, iParam1))
	{
		return 0;
	}
	if (func_272(uParam0) < 0f)
	{
		func_271(uParam0, 0);
	}
	func_269(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_267(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_267(var uParam0, int iParam1)
{
	int iVar0;
	
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_277(14) && !func_276(iParam1))
	{
		return 0;
	}
	if (func_273(uParam0, iParam1))
	{
		return 0;
	}
	if (func_272(uParam0) < 0f)
	{
		func_271(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_268(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_268(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 78;
}

void func_269(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_270(uParam0, iVar0);
		iVar0++;
	}
	func_271(uParam0, (Global_4271323 - 0.5f));
}

void func_270(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 78;
}

void func_271(var uParam0, float fParam1)
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

float func_272(var uParam0)
{
	return uParam0->f_80;
}

bool func_273(var uParam0, int iParam1)
{
	return func_274(uParam0, iParam1) != -1;
}

int func_274(var uParam0, int iParam1)
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

bool func_275(var uParam0)
{
	return uParam0->f_79 == 1;
}

int func_276(int iParam0)
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

bool func_277(int iParam0)
{
	return Global_41631 == iParam0;
}

var func_278(int iParam0, bool bParam1, int iParam2, int iParam3, void fParam4, int iParam5, int iParam6, bool bParam7)
{
	return func_279(iParam0, bParam1, iParam2, iParam3, fParam4, iParam5, iParam6, bParam7);
}

var func_279(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	var uVar0;
	
	uVar0 = func_280(iParam0, 0, bParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_280(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	float fVar0;
	void fVar1;
	int iVar2;
	float fVar3;
	
	if (func_318(PLAYER::PLAYER_ID()) || func_317(PLAYER::PLAYER_ID()))
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
	else if (func_315() || func_313(PLAYER::PLAYER_ID()))
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
	if (func_312(bParam2))
	{
	}
	if (func_311())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		fVar1 = SYSTEM::ROUND((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		fVar1 = func_309(fVar1);
		fVar3 = (SYSTEM::TO_FLOAT(fVar1) * Global_262145.f_1);
		fVar1 = SYSTEM::ROUND(fVar3);
		if (bParam10)
		{
			fVar1 = func_308(&fVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_306(0, &fVar1);
					break;
				
				case 3:
					func_306(1, &fVar1);
					break;
				
				case 1:
					func_304(&fVar1);
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
			func_301(1164, fVar1, -1);
			if (iParam1 == 0)
			{
				func_290((func_300(PLAYER::PLAYER_ID()) + fVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				STATS::PLAYSTATS_AWARD_XP(fVar1, iParam8, iParam9);
				if (Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_39.f_2 != -1)
				{
					func_301(1165, fVar1, -1);
				}
				func_285(fVar1);
			}
		}
		if (bParam5)
		{
		}
		if (bParam7)
		{
			if (iParam6 == -1)
			{
				func_281((func_283(PLAYER::PLAYER_ID()) + fVar1));
			}
			else
			{
				func_281((func_283(PLAYER::PLAYER_ID()) + iParam6));
			}
		}
	}
	return fVar1;
}

void func_281(int iParam0)
{
	if (func_311())
	{
		Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_211.f_5 = iParam0;
		func_282(joaat("MPPLY_GLOBALXP"), iParam0);
	}
}

void func_282(int iParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		NETWORK::NETWORK_HAS_SOCIAL_CLUB_ACCOUNT(iVar0, uParam1, 1);
	}
}

int func_283(bool bParam0)
{
	if (bParam0 > -1)
	{
		if (func_6(bParam0, 0, 1))
		{
			if (bParam0 == PLAYER::PLAYER_ID())
			{
				return func_284(joaat("MPPLY_GLOBALXP"));
			}
			else
			{
				return Global_1590682[bParam0 /*883*/].f_211.f_5;
			}
		}
		else
		{
			return func_284(joaat("MPPLY_GLOBALXP"));
		}
	}
	return 0;
}

int func_284(int iParam0)
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

void func_285(void fParam0)
{
	struct<13> Var0;
	int iVar1;
	
	Var0 = { func_144(PLAYER::PLAYER_ID()) };
	if (INTERIOR::GET_INTERIOR_GROUP_ID())
	{
		if (MISC::IS_XBOX360_VERSION(&Var0))
		{
			iVar1 = func_288(func_289(&Var0));
			if (iVar1 == 0)
			{
				func_287(&Global_1388052, fParam0);
				func_286(joaat("MPPLY_CREW_LOCAL_XP_0"), Global_1388052);
			}
			else if (iVar1 == 1)
			{
				func_287(&Global_1388053, fParam0);
				func_286(joaat("MPPLY_CREW_LOCAL_XP_1"), Global_1388053);
			}
			else if (iVar1 == 2)
			{
				func_287(&Global_1388054, fParam0);
				func_286(joaat("MPPLY_CREW_LOCAL_XP_2"), Global_1388054);
			}
			else if (iVar1 == 3)
			{
				func_287(&Global_1388055, fParam0);
				func_286(joaat("MPPLY_CREW_LOCAL_XP_3"), Global_1388055);
			}
			else if (iVar1 == 4)
			{
				func_287(&Global_1388056, fParam0);
				func_286(joaat("MPPLY_CREW_LOCAL_XP_4"), Global_1388056);
			}
		}
	}
}

void func_286(int iParam0, var uParam1)
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
			Global_1388047 = uParam1;
			break;
		
		case joaat("MPPLY_CREW_1_ID"):
			Global_1388049 = uParam1;
			break;
		
		case joaat("MPPLY_CREW_2_ID"):
			Global_1388049 = uParam1;
			break;
		
		case joaat("MPPLY_CREW_3_ID"):
			Global_1388050 = uParam1;
			break;
		
		case joaat("MPPLY_CREW_4_ID"):
			Global_1388051 = uParam1;
			break;
		
		case joaat("MPPLY_CREW_LOCAL_XP_0"):
			Global_1388052 = uParam1;
			break;
		
		case joaat("MPPLY_CREW_LOCAL_XP_1"):
			Global_1388053 = uParam1;
			break;
		
		case joaat("MPPLY_CREW_LOCAL_XP_2"):
			Global_1388054 = uParam1;
			break;
		
		case joaat("MPPLY_CREW_LOCAL_XP_3"):
			Global_1388055 = uParam1;
			break;
		
		case joaat("MPPLY_CREW_LOCAL_XP_4"):
			Global_1388056 = uParam1;
			break;
		
		case joaat("MPPLY_BECAME_CHEATER_NUM"):
			Global_1388057 = uParam1;
			break;
		
		case joaat("MPPLY_FRIENDLY"):
			Global_1388058 = uParam1;
			break;
		
		case joaat("MPPLY_OFFENSIVE_LANGUAGE"):
			Global_1388059 = uParam1;
			break;
		
		case joaat("MPPLY_GRIEFING"):
			Global_1388060 = uParam1;
			break;
		
		case joaat("MPPLY_HELPFUL"):
			Global_1388061 = uParam1;
			break;
		
		case joaat("MPPLY_OFFENSIVE_TAGPLATE"):
			Global_1388062 = uParam1;
			break;
		
		case joaat("MPPLY_OFFENSIVE_UGC"):
			Global_1388063 = uParam1;
			break;
		
		default:
			break;
	}
}

void func_287(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_288(int iParam0)
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

int func_289(var uParam0)
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

void func_290(void fParam0, int iParam1, int iParam2)
{
	if (func_311())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_9605 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1388197[func_299(-1)])
				{
					STATS::PLAYSTATS_AWARD_XP(iParam0, -523908350, iParam1);
					return;
				}
				else if (fParam0 == Global_1388197[func_299(-1)])
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
		if (func_298(PLAYER::PLAYER_ID()))
		{
			Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_211.f_1 = fParam0;
			Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_211.f_6 = func_296(fParam0, 1);
		}
		func_295(639, fParam0, -1, 1);
		func_294(640, func_296(fParam0, 1), -1, 1, 0);
		Global_1388197[func_299(-1)] = fParam0;
		func_291(-1109644434, 7, 0);
	}
}

void func_291(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (func_293(iParam1, iParam2))
	{
		iVar0 = func_292();
		Global_2462127[iVar0] = iParam1;
		Global_2462138[iVar0] = iParam0;
	}
}

int func_292()
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

int func_293(int iParam0, var uParam1)
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

void func_294(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2551832[iParam0 /*3*/][func_299(iParam2)];
	if (iVar0 != 0)
	{
		NETWORK::NETWORK_HAS_SOCIAL_CLUB_ACCOUNT(iVar0, iParam1, iParam3);
	}
}

void func_295(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2551832[iParam0 /*3*/][func_299(iParam2)];
	if (iVar0 != 0)
	{
		NETWORK::NETWORK_HAS_SOCIAL_CLUB_ACCOUNT(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 787:
			Global_1388125[func_299(iParam2)] = iParam1;
			break;
		
		case 788:
			Global_1388131[func_299(iParam2)] = iParam1;
			break;
		
		case 789:
			Global_1388137[func_299(iParam2)] = iParam1;
			break;
		
		case 790:
			Global_1388143[func_299(iParam2)] = iParam1;
			break;
		
		case 8727:
			Global_1388149[func_299(iParam2)] = iParam1;
			break;
		
		case 777:
			Global_1388095[func_299(iParam2)] = iParam1;
			break;
		
		case 778:
			Global_1388101[func_299(iParam2)] = iParam1;
			break;
		
		case 779:
			Global_1388107[func_299(iParam2)] = iParam1;
			break;
		
		case 780:
			Global_1388113[func_299(iParam2)] = iParam1;
			break;
		
		case 8729:
			Global_1388119[func_299(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_1388065[func_299(iParam2)] = iParam1;
			break;
		
		case 768:
			Global_1388071[func_299(iParam2)] = iParam1;
			break;
		
		case 769:
			Global_1388077[func_299(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1388083[func_299(iParam2)] = iParam1;
			break;
		
		case 8731:
			Global_1388089[func_299(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_1388155[func_299(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1388161[func_299(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1388167[func_299(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1388173[func_299(iParam2)] = iParam1;
			break;
		
		case 8733:
			Global_1388179[func_299(iParam2)] = iParam1;
			break;
		
		case 1303:
			Global_1388185[func_299(iParam2)] = iParam1;
			break;
		
		case 7234:
			Global_1388191[func_299(iParam2)] = iParam1;
			break;
		
		case 639:
			Global_1388197[func_299(iParam2)] = iParam1;
			break;
		
		case 1278:
			Global_1388203[func_299(iParam2)] = iParam1;
			break;
		
		case 1877:
			Global_2590417[0 /*3*/][func_299(iParam2)] = iParam1;
			break;
		
		case 2268:
			Global_2590417[1 /*3*/][func_299(iParam2)] = iParam1;
			break;
		
		case 2930:
			Global_2590417[2 /*3*/][func_299(iParam2)] = iParam1;
			break;
		
		case 3059:
			Global_2590417[3 /*3*/][func_299(iParam2)] = iParam1;
			break;
		
		case 10138:
			Global_2590566[func_299(iParam2)] = iParam1;
			break;
		
		case 764:
			Global_1388209[func_299(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1388215[func_299(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_1388221[func_299(iParam2)] = iParam1;
			break;
		
		case 8732:
			Global_1388227[func_299(iParam2)] = iParam1;
			break;
		
		case 9534:
			Global_1388233[func_299(iParam2)] = iParam1;
			break;
		
		case 1236:
			Global_1388239[func_299(iParam2)] = iParam1;
			break;
		
		case 3054:
			Global_2590490[0 /*3*/][func_299(iParam2)] = iParam1;
			break;
		
		case 3055:
			Global_2590490[1 /*3*/][func_299(iParam2)] = iParam1;
			break;
		
		case 3056:
			Global_2590490[2 /*3*/][func_299(iParam2)] = iParam1;
			break;
		
		case 3057:
			Global_2590490[3 /*3*/][func_299(iParam2)] = iParam1;
			break;
		
		case 3058:
			Global_2590490[4 /*3*/][func_299(iParam2)] = iParam1;
			break;
		
		case 3637:
			Global_2590569[0 /*3*/][func_299(iParam2)] = iParam1;
			break;
		
		case 3638:
			Global_2590569[1 /*3*/][func_299(iParam2)] = iParam1;
			break;
		
		case 3639:
			Global_2590569[2 /*3*/][func_299(iParam2)] = iParam1;
			break;
		
		case 3640:
			Global_2590569[3 /*3*/][func_299(iParam2)] = iParam1;
			break;
		
		case 3641:
			Global_2590569[4 /*3*/][func_299(iParam2)] = iParam1;
			break;
		
		case 3642:
			Global_2590585[0 /*3*/][func_299(iParam2)] = iParam1;
			break;
		
		case 3643:
			Global_2590585[1 /*3*/][func_299(iParam2)] = iParam1;
			break;
		
		case 3644:
			Global_2590585[2 /*3*/][func_299(iParam2)] = iParam1;
			break;
		
		case 3645:
			Global_2590585[3 /*3*/][func_299(iParam2)] = iParam1;
			break;
		
		case 3646:
			Global_2590585[4 /*3*/][func_299(iParam2)] = iParam1;
			break;
		
		case 3222:
			Global_2590490[5 /*3*/][func_299(iParam2)] = iParam1;
			break;
		
		case 3228:
			Global_2590417[4 /*3*/][func_299(iParam2)] = iParam1;
			break;
		
		case 3664:
			Global_2590601[func_299(iParam2)] = iParam1;
			break;
		
		case 3665:
			Global_2590610[func_299(iParam2)] = iParam1;
			break;
		
		case 3666:
			Global_2590604[func_299(iParam2)] = iParam1;
			break;
		
		case 3667:
			Global_2590613[func_299(iParam2)] = iParam1;
			break;
		
		case 3668:
			Global_2590607[func_299(iParam2)] = iParam1;
			break;
		
		case 3669:
			Global_2590616[func_299(iParam2)] = iParam1;
			break;
		
		case 3690:
			Global_2590619[func_299(iParam2)] = iParam1;
			break;
		
		case 3230:
			Global_2590490[6 /*3*/][func_299(iParam2)] = iParam1;
			break;
		
		case 3231:
			Global_2590417[5 /*3*/][func_299(iParam2)] = iParam1;
			break;
		
		case 3235:
			Global_2590490[7 /*3*/][func_299(iParam2)] = iParam1;
			break;
		
		case 3233:
			Global_2590417[6 /*3*/][func_299(iParam2)] = iParam1;
			break;
		
		case 4020:
			Global_2590490[8 /*3*/][func_299(iParam2)] = iParam1;
			break;
		
		case 4021:
			Global_2590417[7 /*3*/][func_299(iParam2)] = iParam1;
			break;
		
		case 4023:
			Global_2590490[9 /*3*/][func_299(iParam2)] = iParam1;
			break;
		
		case 4024:
			Global_2590417[8 /*3*/][func_299(iParam2)] = iParam1;
			break;
		
		case 4026:
			Global_2590490[10 /*3*/][func_299(iParam2)] = iParam1;
			break;
		
		case 4027:
			Global_2590417[9 /*3*/][func_299(iParam2)] = iParam1;
			break;
		
		case 4029:
			Global_2590490[11 /*3*/][func_299(iParam2)] = iParam1;
			break;
		
		case 4030:
			Global_2590417[10 /*3*/][func_299(iParam2)] = iParam1;
			break;
		
		case 6110:
			Global_2590490[12 /*3*/][func_299(iParam2)] = iParam1;
			break;
		
		case 6111:
			Global_2590417[11 /*3*/][func_299(iParam2)] = iParam1;
			break;
		
		case 6168:
			Global_2590490[13 /*3*/][func_299(iParam2)] = iParam1;
			break;
		
		case 6169:
			Global_2590417[12 /*3*/][func_299(iParam2)] = iParam1;
			break;
		
		case 6546:
			Global_2590490[14 /*3*/][func_299(iParam2)] = iParam1;
			break;
		
		case 6547:
			Global_2590417[13 /*3*/][func_299(iParam2)] = iParam1;
			break;
		
		case 6559:
			Global_2590490[15 /*3*/][func_299(iParam2)] = iParam1;
			break;
		
		case 6560:
			Global_2590417[14 /*3*/][func_299(iParam2)] = iParam1;
			break;
		
		case 6562:
			Global_2590490[16 /*3*/][func_299(iParam2)] = iParam1;
			break;
		
		case 6563:
			Global_2590417[15 /*3*/][func_299(iParam2)] = iParam1;
			break;
		
		case 6565:
			Global_2590490[17 /*3*/][func_299(iParam2)] = iParam1;
			break;
		
		case 6566:
			Global_2590417[16 /*3*/][func_299(iParam2)] = iParam1;
			break;
		
		case 7284:
			Global_2590417[17 /*3*/][func_299(iParam2)] = iParam1;
			break;
		
		case 7286:
			Global_2590417[18 /*3*/][func_299(iParam2)] = iParam1;
			break;
		
		case 7288:
			Global_2590417[19 /*3*/][func_299(iParam2)] = iParam1;
			break;
		
		case 8011:
			Global_2590417[20 /*3*/][func_299(iParam2)] = iParam1;
			break;
		
		case 8283:
			Global_2590622[func_299(iParam2)] = iParam1;
			break;
		
		case 8284:
			Global_2590625[func_299(iParam2)] = iParam1;
			break;
		
		case 8285:
			Global_2590628[func_299(iParam2)] = iParam1;
			break;
		
		case 8286:
			Global_2590631[func_299(iParam2)] = iParam1;
			break;
		
		case 8287:
			Global_2590634[func_299(iParam2)] = iParam1;
			break;
		
		case 8288:
			Global_2590637[func_299(iParam2)] = iParam1;
			break;
		
		case 8289:
			Global_2590640[func_299(iParam2)] = iParam1;
			break;
		
		case 8290:
			Global_2590643[func_299(iParam2)] = iParam1;
			break;
		
		case 8291:
			Global_2590646[func_299(iParam2)] = iParam1;
			break;
		
		case 8292:
			Global_2590649[func_299(iParam2)] = iParam1;
			break;
		
		case 8293:
			Global_2590652[func_299(iParam2)] = iParam1;
			break;
		
		case 8294:
			Global_2590655[func_299(iParam2)] = iParam1;
			break;
		
		case 8295:
			Global_2590658[func_299(iParam2)] = iParam1;
			break;
		
		case 8901:
			Global_2590661[func_299(iParam2)] = iParam1;
			break;
		
		case 8535:
			Global_2590417[21 /*3*/][func_299(iParam2)] = iParam1;
			break;
		
		case 8978:
			Global_2590490[23 /*3*/][func_299(iParam2)] = iParam1;
			break;
		
		case 8976:
			Global_2590417[22 /*3*/][func_299(iParam2)] = iParam1;
			break;
		
		case 8981:
			Global_2590490[24 /*3*/][func_299(iParam2)] = iParam1;
			break;
		
		case 8979:
			Global_2590417[23 /*3*/][func_299(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_296(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_297(iParam0, 0);
}

int func_297(int iParam0, int iParam1)
{
	int iVar0;
	void fVar1;
	void fVar2;
	void fVar3;
	float fVar4;
	
	if (iParam1 == 0)
	{
	}
	fVar1 = 8000;
	fVar2 = 0;
	fVar3 = ((fVar1 - fVar2) / 2);
	iVar0 = 0;
	while (iVar0 <= 100)
	{
		if (fVar1 == fVar2)
		{
			iVar0 = 8000;
			if (fVar3 == 0)
			{
				fVar3 = 1;
			}
			return fVar3;
		}
		if (Global_292402[fVar3] == iParam0)
		{
			fVar1 = fVar3;
			fVar2 = fVar3;
		}
		else if (Global_292402[fVar3] < iParam0)
		{
			if (fVar2 == fVar3)
			{
				fVar2++;
			}
			else
			{
				fVar2 = fVar3;
			}
		}
		else if (fVar1 == fVar3)
		{
			fVar1 = (fVar1 - 1);
		}
		else
		{
			fVar1 = fVar3;
		}
		fVar4 = (((SYSTEM::TO_FLOAT(fVar1) - SYSTEM::TO_FLOAT(fVar2)) / 2f) + SYSTEM::TO_FLOAT(fVar2));
		fVar3 = SYSTEM::ROUND(fVar4);
		iVar0++;
	}
	return 8000;
}

int func_298(bool bParam0)
{
	if (bParam0 == -1)
	{
		return 0;
	}
	else
	{
		return unk_0xCE990E643CD9D0E5(Global_2440049.f_1, bParam0);
	}
	return 1;
}

int func_299(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_202();
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

int func_300(bool bParam0)
{
	if (Global_1312485.f_9 == 0)
	{
		if (bParam0 > -1)
		{
			if (bParam0 == PLAYER::PLAYER_ID())
			{
				return Global_1388197[func_299(-1)];
			}
			else if (func_298(bParam0))
			{
				return Global_1590682[bParam0 /*883*/].f_211.f_1;
			}
		}
	}
	else
	{
		return Global_1388197[func_299(-1)];
	}
	return 0;
}

void func_301(int iParam0, void fParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_303(iParam0, func_299(iParam2), 0);
	iVar0 = (iVar0 + fParam1);
	if (!func_302(iParam0))
	{
		func_294(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_295(iParam0, iVar0, iParam2, 1);
	}
}

int func_302(int iParam0)
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

int func_303(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 11771)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2551832[iParam0 /*3*/][func_299(iParam1)];
		if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

void func_304(void fParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	void fVar6;
	void fVar7;
	
	iVar1 = unk_0x6CC163E30ECE0790(PLAYER::PLAYER_ID());
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		iVar4 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar0);
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar4))
		{
			bVar5 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar4);
			if (unk_0x6CC163E30ECE0790(bVar5) != -1)
			{
				if (unk_0x6CC163E30ECE0790(bVar5) == iVar1 || func_146(unk_0x6CC163E30ECE0790(bVar5), iVar1, 0))
				{
					iVar2++;
					if (bVar5 != PLAYER::PLAYER_ID())
					{
						if (func_145(PLAYER::PLAYER_ID(), bVar5))
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
		fVar6 = SYSTEM::ROUND((func_305(*fParam0, 100) * (10f * Global_262145.f_4218)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		fVar7 = SYSTEM::ROUND((func_305(*fParam0, 100) * (20f * Global_262145.f_4211)));
	}
	*fParam0 = (*fParam0 + fVar6);
	*fParam0 = (*fParam0 + fVar7);
}

float func_305(void fParam0, void fParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = SYSTEM::TO_FLOAT(fParam0);
	fVar1 = SYSTEM::TO_FLOAT(fParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

void func_306(bool bParam0, void fParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;
	void fVar5;
	void fVar6;
	
	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
		{
			iVar3 = iVar0;
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar3))
			{
				bVar4 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar3);
				if (func_6(bVar4, 0, 1))
				{
					if (bVar4 != PLAYER::PLAYER_ID())
					{
						iVar1++;
						if (func_145(PLAYER::PLAYER_ID(), bVar4))
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
			bVar4 = iVar0;
			if (func_6(bVar4, 1, 1))
			{
				if (bVar4 != PLAYER::PLAYER_ID())
				{
					if (func_307(PLAYER::PLAYER_ID(), bVar4) <= 20f)
					{
						iVar1++;
						if (func_145(PLAYER::PLAYER_ID(), bVar4))
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
		fVar5 = SYSTEM::ROUND((func_305(*fParam1, 100) * (10f * Global_262145.f_4218)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		fVar6 = SYSTEM::ROUND((func_305(*fParam1, 100) * (20f * Global_262145.f_4211)));
	}
	*fParam1 = (*fParam1 + fVar5);
	*fParam1 = (*fParam1 + fVar6);
}

float func_307(bool bParam0, bool bParam1)
{
	return SYSTEM::VDIST(func_8(bParam0), func_8(bParam1));
	return 0f;
}

var func_308(void fParam0)
{
	void fVar0;
	
	if (PAD::GET_LOCAL_PLAYER_AIM_STATE() != 3)
	{
		return *fParam0;
	}
	fVar0 = SYSTEM::ROUND((func_305(*fParam0, 100) * 25f));
	*fParam0 = (*fParam0 + fVar0);
	return *fParam0;
}

var func_309(void fParam0)
{
	if (fParam0 < 0)
	{
		if (MISC::ABSI(fParam0) > func_300(PLAYER::PLAYER_ID()))
		{
			fParam0 = -func_300(PLAYER::PLAYER_ID());
		}
	}
	if (func_310(8000, 0, 0) > 0)
	{
		if (func_310(8000, 0, 0) < (fParam0 + func_300(PLAYER::PLAYER_ID())))
		{
			fParam0 = (func_310(8000, 0, 0) - func_300(PLAYER::PLAYER_ID()));
		}
	}
	return fParam0;
}

int func_310(int iParam0, bool bParam1, int iParam2)
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

int func_311()
{
	return 1;
}

int func_312(bool bParam0)
{
	if (AUDIO::PRELOAD_SCRIPT_CONVERSATION(bParam0))
	{
		return 1;
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS(bParam0, "") || NETWORK::NETWORK_IS_GAME_IN_PROGRESS(bParam0, "0"))
	{
		return 1;
	}
	return 0;
}

int func_313(bool bParam0)
{
	return func_314(func_39(bParam0));
}

int func_314(int iParam0)
{
	switch (iParam0)
	{
		case 233:
			return 1;
		
		default:
	}
	return 0;
}

int func_315()
{
	if (STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED())
	{
		return func_177();
	}
	return func_316(Global_4456448.f_82708);
}

int func_316(int iParam0)
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

bool func_317(bool bParam0)
{
	return Global_2425869[bParam0 /*443*/].f_119 == 2;
}

bool func_318(bool bParam0)
{
	return Global_2425869[bParam0 /*443*/].f_119 == 7;
}

void func_319(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	struct<4> Var0;
	struct<8> Var1;
	int iVar2;
	int iVar3;
	
	StringCopy(&Var0, func_333(iParam1), 16);
	StringCopy(&Var1, func_332(iParam2), 32);
	switch (iParam1)
	{
		case 0:
			iVar2 = 1287308202;
			break;
		
		case 1:
			iVar2 = 691372038;
			break;
		
		case 2:
			iVar2 = 1480707108;
			break;
		
		case 3:
			iVar2 = 1512499951;
			break;
		
		case 4:
			iVar2 = 562283735;
			break;
		
		case 5:
			iVar2 = -154732333;
			break;
		
		case 6:
			iVar2 = -1362660491;
			break;
		
		case 7:
			iVar2 = 645708827;
			break;
		
		case 8:
			iVar2 = 767907967;
			break;
		
		case 9:
			iVar2 = -1970151306;
			break;
		
		case 10:
			iVar2 = 718859568;
			break;
		
		case 11:
			iVar2 = -1955564771;
			break;
		
		case 12:
			iVar2 = 892388724;
			break;
		
		case 13:
			iVar2 = -1426920838;
			break;
		
		case 14:
			iVar2 = -664597565;
			break;
		
		case 15:
			iVar2 = 1864522104;
			break;
		
		case 16:
			iVar2 = 215608230;
			break;
		
		case 17:
			iVar2 = -1100963799;
			break;
	}
	if (func_51())
	{
		func_320(iVar2, iParam0, &iVar3, bParam3, bParam3, 0);
		Global_4264051[iVar3 /*85*/].f_14.f_40 = { Var0 };
		Global_4264051[iVar3 /*85*/].f_14.f_44 = { Var1 };
	}
	else
	{
		MONEY::NETWORK_SPENT_BOAT_PICKUP(iParam0, &Var0, &Var1, bParam3);
	}
}

void func_320(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	if (!func_51())
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
				func_321(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_321(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
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
				func_321(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_321(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_321(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!func_51())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_202()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING())
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
			*uParam0 = func_328(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
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
			func_327(1, iParam4);
			Global_4265552 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_322(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_322(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			unk_0xBE20AB8238688965(&(Global_2425869[PLAYER::PLAYER_ID() /*443*/].f_126.f_71), false);
			break;
	}
	if (iParam0 != -1)
	{
		func_323(iParam0);
	}
}

void func_323(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_51())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_326(iParam0))
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
		func_324(&(Global_4264051[iParam0 /*85*/]));
	}
}

void func_324(var uParam0)
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
	func_325(&(uParam0->f_14));
	func_325(&(uParam0->f_14.f_13));
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

void func_325(var uParam0)
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

int func_326(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4264051[iParam0 /*85*/].f_66.f_5 == 1;
	}
	return 0;
}

void func_327(int iParam0, var uParam1)
{
	Global_2464590 = uParam1;
	Global_2464589 = iParam0;
}

int func_328(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, var uParam5, bool bParam6, var uParam7, var uParam8, int iParam9, int iParam10)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (Global_4264051[iVar0 /*85*/].f_66.f_2 == 0)
		{
			if (!func_51())
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
				func_329(Global_4264051[iVar0 /*85*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_329(struct<67> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19)
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
	iVar1 = func_331(Var0.f_1);
	if ((Global_262145.f_23581 && !Global_262145.f_23582) && !Global_262145.f_23583)
	{
		return;
	}
	if (!iVar1 == 0)
	{
		func_330();
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Var0, 36, iVar1);
	}
}

void func_330()
{
	SCRIPT::REQUEST_SCRIPT("AM_ARENA_SHP");
}

var func_331(bool bParam0)
{
	var uVar0;
	
	if (iParam0 != -1)
	{
		unk_0xBE20AB8238688965(&uVar0, iParam0);
	}
	return uVar0;
}

char* func_332(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "NOTREACHTARGET";
			break;
		
		case 1:
			return "TARGET_ESCAPE";
			break;
		
		case 2:
			return "DELIVERY_FAIL";
			break;
		
		case 3:
			return "NOT_USED";
			break;
		
		case 4:
			return "TEAM_QUIT";
			break;
		
		case 5:
			return "SERVER_ERROR";
			break;
		
		case 6:
			return "RECEIVE_LJ_L";
			break;
		
		case 8:
			return "CHALLENGE_PLAYER_LEFT";
			break;
	}
	return "DEFAULT";
}

char* func_333(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "BACKUP_VAGOS";
		
		case 1:
			return "BACKUP_LOST";
		
		case 2:
			return "BACKUP_FAMILIES";
		
		case 3:
			return "HIRE_MUGGER";
		
		case 4:
			return "HIRE_MERCENARY";
		
		case 5:
			return "BUY_CARDROPOFF";
		
		case 6:
			return "HELI_PICKUP";
		
		case 7:
			return "BOAT_PICKUP";
		
		case 8:
			return "CLEAR_WANTED";
		
		case 9:
			return "HEAD_2_HEAD";
		
		case 10:
			return "CHALLENGE";
		
		case 11:
			return "SHARE_LAST_JOB";
		
		case 13:
			return "REFUNDAPPEA";
		
		case 14:
			return "AMMO_DROP_REF";
		
		case 15:
			return "ORBITAL_MANUAL";
		
		case 16:
			return "ORBITAL_AUTO";
		
		case 17:
			return "ARENA_SPEC_BOX";
		
		default:
	}
	return "DEFAULT";
}

void func_334(int iParam0, int iParam1, int iParam2, float fParam3)
{
	int iVar0;
	bool bVar1;
	float fVar2;
	
	if (iParam1 < 1)
	{
		iParam1 = 1;
	}
	iVar0 = (iParam0 * iParam1);
	fParam3 = 0f;
	if (iVar0 > 0)
	{
		fVar2 = (100f - fParam3);
		bVar1 = SYSTEM::FLOOR((IntToFloat(iVar0) * (fVar2 / 100f)));
	}
	else
	{
		bVar1 = iVar0;
	}
	Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_211.f_4 = bVar1;
	Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_211.f_3 = (Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_211.f_3 + bVar1);
	if (iParam2 == 1)
	{
		func_335(bVar1, 0);
	}
}

void func_335(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	bParam0 = bParam0;
}

int func_336(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (func_339(iParam0) >= 0)
	{
		iVar0 = func_339(iParam0);
	}
	else
	{
		iVar0 = func_337(iParam0);
	}
	return iVar0;
}

int func_337(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1000;
			break;
		
		case 10:
			return 5000;
			break;
		
		case 11:
			return 8000;
			break;
		
		case 8:
			return 1000;
			break;
		
		case 0:
			return 500;
			break;
		
		case 9:
			return 250;
			break;
		
		case 13:
			return 1000;
			break;
		
		case 12:
			return 7500;
			break;
		
		case 2:
			return 1000;
			break;
		
		case 14:
			return 500;
			break;
		
		case 20:
			if (func_338())
			{
				return 0;
			}
			if (AUDIO::SET_SCRIPT_UPDATE_DOOR_AUDIO(PLAYER::PLAYER_ID()) == 1)
			{
				return 200;
			}
			else if (AUDIO::SET_SCRIPT_UPDATE_DOOR_AUDIO(PLAYER::PLAYER_ID()) == 2)
			{
				return 400;
			}
			else if (AUDIO::SET_SCRIPT_UPDATE_DOOR_AUDIO(PLAYER::PLAYER_ID()) == 3)
			{
				return 600;
			}
			else if (AUDIO::SET_SCRIPT_UPDATE_DOOR_AUDIO(PLAYER::PLAYER_ID()) == 4)
			{
				return 800;
			}
			else if (AUDIO::SET_SCRIPT_UPDATE_DOOR_AUDIO(PLAYER::PLAYER_ID()) == 5)
			{
				return 1000;
			}
			break;
		
		case 6:
			return 500;
			break;
		
		case 22:
			return 200;
			break;
		
		case 23:
			return 400;
			break;
		
		case 24:
			return 700;
			break;
		
		case 25:
			return 100;
			break;
		
		case 26:
			return 1000;
			break;
		
		case 57:
			return 700;
			break;
		
		case 35:
			return 5000;
			break;
		
		case 15:
			return 0;
			break;
		
		case 17:
			return 0;
			break;
		
		case 18:
			return 0;
			break;
		
		case 19:
			return 0;
			break;
		
		case 21:
			return 0;
			break;
		
		case 36:
			return 0;
			break;
		
		case 39:
			return 200;
			break;
		
		case 40:
			return 1000;
		
		case 41:
			return 750;
		
		case 42:
			return 0;
	}
	return 0;
}

bool func_338()
{
	return unk_0xCE990E643CD9D0E5(func_303(6425, -1, 0), 19);
}

int func_339(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return Global_262145.f_6646;
			break;
		
		case 10:
			return Global_262145.f_4118;
			break;
		
		case 11:
			return Global_262145.f_4119;
			break;
		
		case 8:
			return Global_262145.f_4116;
			break;
		
		case 0:
			return Global_262145.f_4102;
			break;
		
		case 9:
			return Global_262145.f_4117;
			break;
		
		case 13:
			return Global_262145.f_4121;
			break;
		
		case 12:
			return Global_262145.f_4120;
			break;
		
		case 2:
			return Global_262145.f_4112;
			break;
		
		case 14:
			return Global_262145.f_4122;
			break;
		
		case 20:
			if (func_338())
			{
				return 0;
			}
			if (AUDIO::SET_SCRIPT_UPDATE_DOOR_AUDIO(PLAYER::PLAYER_ID()) == 1)
			{
				return Global_262145.f_6653;
			}
			else if (AUDIO::SET_SCRIPT_UPDATE_DOOR_AUDIO(PLAYER::PLAYER_ID()) == 2)
			{
				return Global_262145.f_6654;
			}
			else if (AUDIO::SET_SCRIPT_UPDATE_DOOR_AUDIO(PLAYER::PLAYER_ID()) == 3)
			{
				return Global_262145.f_6655;
			}
			else if (AUDIO::SET_SCRIPT_UPDATE_DOOR_AUDIO(PLAYER::PLAYER_ID()) == 4)
			{
				return Global_262145.f_6656;
			}
			else if (AUDIO::SET_SCRIPT_UPDATE_DOOR_AUDIO(PLAYER::PLAYER_ID()) == 5)
			{
				return Global_262145.f_6657;
			}
			break;
		
		case 6:
			return Global_262145.f_4115;
			break;
		
		case 22:
			return Global_262145.f_4128;
			break;
		
		case 23:
			return Global_262145.f_4129;
			break;
		
		case 24:
			return Global_262145.f_4130;
			break;
		
		case 25:
			return Global_262145.f_4131;
			break;
		
		case 26:
			return Global_262145.f_4132;
			break;
		
		case 35:
			return Global_262145.f_7222;
			break;
		
		case 15:
			return Global_262145.f_6647;
			break;
		
		case 17:
			return Global_262145.f_6647;
			break;
		
		case 18:
			return Global_262145.f_6647;
			break;
		
		case 19:
			return Global_262145.f_6647;
			break;
		
		case 21:
			return Global_262145.f_6647;
			break;
		
		case 36:
			return Global_262145.f_7689;
			break;
		
		case 39:
			return -1;
			break;
		
		case 40:
			return Global_262145.f_12892;
			break;
		
		case 41:
			return Global_262145.f_12893;
			break;
		
		case 42:
			return Global_262145.f_12894;
			break;
		
		case 43:
			return Global_262145.f_15437;
			break;
		
		case 44:
			return Global_262145.f_15439;
			break;
		
		case 57:
			return Global_262145.f_4130;
			break;
		
		case 58:
			return Global_262145.f_25071;
			break;
		
		case 62:
			return Global_262145.f_25072;
			break;
		
		case 63:
			return Global_262145.f_28531;
			break;
		
		case 64:
			return Global_262145.f_6647;
			break;
	}
	return 0;
}

int func_340(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return Global_262145.f_23469;
		
		case 2:
			return Global_262145.f_23470;
		
		case 3:
			return Global_262145.f_23471;
		
		default:
	}
	return 9999999;
}

int func_341()
{
	bool bVar0;
	char* sVar1;
	int iVar2;
	
	if (Local_63.f_50 || Local_63.f_52)
	{
		if (!Local_63.f_51)
		{
			if (!unk_0xCE990E643CD9D0E5(Local_63.f_3, 7))
			{
				func_342("HS_UNABLE", bLocal_71, 0, 0, 0, 1, 0);
			}
		}
		return 1;
	}
	switch (bLocal_69)
	{
		case 0:
			bVar0 = "MPCT_muglost";
			sVar1 = "LAMAR";
			iVar2 = 19;
			break;
		
		case 1:
			bVar0 = "MPCT_MERloc";
			sVar1 = "FM_MERRYWEATHER";
			iVar2 = 85;
			break;
	}
	if (func_377(bVar0, sVar1, iVar2))
	{
		return 1;
	}
	return 0;
}

int func_342(char* sParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	struct<16> Var2;
	bool bVar3;
	bool bVar4;
	
	iVar0 = -1;
	iVar1 = unk_0x6CC163E30ECE0790(bParam1);
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
				unk_0x7006FC1051C85FCA(func_375(iVar1, bParam1, 0));
			}
			else
			{
				unk_0x7006FC1051C85FCA(func_350(bParam1, -2, 1, 0, 0));
			}
		}
		else
		{
			unk_0x7006FC1051C85FCA(func_350(bParam1, -2, 1, 0, 0));
		}
		unk_0x9EFD301E3BE8324E(func_348(&Var2));
		if (!bParam4)
		{
			iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true);
		}
		else
		{
			Global_2515173 = { func_144(bParam1) };
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
						Var2 = { func_347(&Var2) };
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
		func_343(14, sParam0, 1, &Var2, 0, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_343(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_346() || !STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED()) || !func_200(PLAYER::PLAYER_ID(), 0))
	{
		return;
	}
	iVar0 = func_344(iParam2);
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

int func_344(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1672611 - 1))
	{
		if (iParam0 > Global_1672611.f_5[iVar0 /*53*/].f_1)
		{
			func_345(iVar0);
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

void func_345(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1672611.f_5[iVar0 /*53*/] = { Global_1672611.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_346()
{
	return GRAPHICS::DRAW_RECT(-1762644250);
}

struct<16> func_347(char* sParam0)
{
	struct<16> Var0;
	
	StringCopy(&Var0, "<C>", 64);
	StringConCat(&Var0, "~HUD_COLOUR_SOCIAL_CLUB~", 64);
	StringConCat(&Var0, sParam0, 64);
	StringConCat(&Var0, "</C>", 64);
	return Var0;
}

var func_348(char* sParam0)
{
	char cVar0[64];
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_349(&cVar0);
}

var func_349(char[4] cParam0)
{
	return cParam0;
}

int func_350(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (func_147(bParam0) && !bParam4)
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
		iVar0 = unk_0x6CC163E30ECE0790(bParam0);
		if (iVar0 > -1 && iVar0 < 4)
		{
			if (Global_4456448.f_77785[iVar0] != -1)
			{
				iParam1 = iVar0;
			}
		}
	}
	if (((func_147(PLAYER::PLAYER_ID()) || (func_374() && func_373())) && !unk_0xCE990E643CD9D0E5(Global_2540384.f_4655, 31)) && !bParam4)
	{
		iVar1 = func_372();
		if (MISC::IS_BIT_SET(iVar1))
		{
			if (PLAYER::SET_PLAYER_WANTED_LEVEL(iVar1))
			{
				if (VEHICLE::GET_VEHICLE_NUMBER_OF_PASSENGERS(iVar1) != -1)
				{
					if (func_6(VEHICLE::GET_VEHICLE_NUMBER_OF_PASSENGERS(iVar1), 0, 1))
					{
						if ((iParam1 > -1 && STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED()) && iParam1 < 4)
						{
							if (Global_4456448.f_77785[iParam1] != -1)
							{
								return func_375(iParam1, bParam0, 0);
							}
							else
							{
								return func_362(bParam0, VEHICLE::GET_VEHICLE_NUMBER_OF_PASSENGERS(iVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_362(bParam0, VEHICLE::GET_VEHICLE_NUMBER_OF_PASSENGERS(iVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED()) && iParam1 < 4)
			{
				if (Global_4456448.f_77785[iParam1] != -1)
				{
					return func_375(iParam1, bParam0, 0);
				}
				else
				{
					return func_351(0, -1, 0);
				}
			}
			else
			{
				return func_351(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED()) && iParam1 < 4)
	{
		if (Global_4456448.f_77785[iParam1] != -1)
		{
			return func_375(iParam1, bParam0, 0);
		}
		else
		{
			return func_362(bParam0, PLAYER::PLAYER_ID(), iParam1, bParam2, bParam3);
		}
	}
	return func_362(bParam0, PLAYER::PLAYER_ID(), iParam1, bParam2, bParam3);
}

int func_351(bool bParam0, int iParam1, bool bParam2)
{
	return func_352(PLAYER::PLAYER_ID(), bParam0, iParam1, bParam2);
}

int func_352(bool bParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (!AUDIO::PLAY_STREAM_FROM_VEHICLE(bParam0))
	{
		return 3;
	}
	iVar0 = unk_0x6CC163E30ECE0790(bParam0);
	if ((func_361() || (func_360() && func_358())) && Global_1388252.f_1)
	{
		if (bParam1)
		{
			return func_357(iParam2, iVar0);
		}
		else
		{
			return func_357(iVar0, iVar0);
		}
	}
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_146(iVar0, iParam2, 0) && !unk_0xCE990E643CD9D0E5(Global_4456448.f_15, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_356(1);
				}
				else
				{
					return func_356(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (unk_0xCE990E643CD9D0E5(Global_4456448.f_4, 20))
			{
				return func_353(iVar0, iParam2, 1, 4);
			}
			else
			{
				return func_353(iVar0, iParam2, 0, 4);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_356(1);
	}
	return func_356(0);
}

int func_353(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_355(iParam0, iParam1, iParam3);
	if (func_354(Global_4456448.f_82708, 1))
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

int func_354(int iParam0, bool bParam1)
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

int func_355(int iParam0, int iParam1, int iParam2)
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
			if (!func_146(iParam0, iVar0, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_356(bool bParam0)
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_357(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_355(iParam1, iParam0, 4);
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

bool func_358()
{
	if (func_359())
	{
		return 1;
	}
	return unk_0xCE990E643CD9D0E5(Global_4456448.f_133494, 4);
}

bool func_359()
{
	return unk_0xCE990E643CD9D0E5(Global_4456448.f_123318, 12);
}

bool func_360()
{
	if (STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED())
	{
		return unk_0xCE990E643CD9D0E5(Global_4456448.f_133494, false);
	}
	return ((unk_0xCE990E643CD9D0E5(Global_4456448.f_133494, false) || Global_1655243) && INTERIOR::GET_INTERIOR_AT_COORDS(joaat("fm_deathmatch_creator")) > 0);
}

int func_361()
{
	if (func_359() && STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED())
	{
		return 1;
	}
	return 0;
}

int func_362(bool bParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	
	if (iParam2 == -2)
	{
		iVar0 = unk_0x6CC163E30ECE0790(bParam0);
	}
	else
	{
		iVar0 = iParam2;
	}
	if (Global_1590682[PLAYER::PLAYER_ID() /*883*/] == 148)
	{
		bVar1 = true;
	}
	bVar2 = bParam0;
	if (bVar2 > -1)
	{
		if (Global_1590682[bVar2 /*883*/] == 148)
		{
			bVar1 = true;
		}
	}
	if (!bVar1)
	{
		if (iVar0 != -1)
		{
			if (func_367())
			{
				iVar3 = func_366(bParam0);
				if (!iVar3 == -1)
				{
					return func_364(iVar3);
				}
			}
			if ((func_184(bParam1, bParam0, iVar0, 0) && !unk_0xCE990E643CD9D0E5(Global_4456448.f_15, 18)) || ((func_146(unk_0x6CC163E30ECE0790(bParam1), unk_0x6CC163E30ECE0790(bParam0), 0) && unk_0xCE990E643CD9D0E5(Global_4456448.f_15, 23)) && !unk_0xCE990E643CD9D0E5(Global_4456448.f_15, 18)))
			{
				return func_356(1);
			}
			else if (unk_0xCE990E643CD9D0E5(Global_4456448.f_15, 26))
			{
				return func_363(1);
			}
			else
			{
				return func_352(bParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1574416 || Global_1574407) || Global_1590682[bParam0 /*883*/] == 0)
		{
			if (bParam0 == bParam1 || (Global_1574416 == 1 && Global_1574426 == 0))
			{
				return func_356(1);
			}
			else
			{
				return func_352(bParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1574411 && Global_1573907.f_14 == bParam0)
		{
			return 28;
		}
	}
	iVar4 = func_366(bParam0);
	if (!iVar4 == -1)
	{
		return func_364(iVar4);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_363(bool bParam0)
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

int func_364(int iParam0)
{
	int iVar0;
	
	if (iParam0 > -1)
	{
		iVar0 = func_365(iParam0);
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

var func_365(int iParam0)
{
	return Global_2417956.f_818.f_44[iParam0 /*2*/].f_1;
}

int func_366(bool bParam0)
{
	if (!bParam0 == func_13())
	{
		if (func_14(bParam0, 1))
		{
			return Global_2417956.f_818.f_11[func_12(bParam0)];
		}
	}
	return -1;
}

int func_367()
{
	if ((((func_371() || func_370()) || func_177()) || func_369()) || func_368())
	{
		return 1;
	}
	if (STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED() && unk_0xCE990E643CD9D0E5(Global_4456448.f_36, true))
	{
		return 1;
	}
	return 0;
}

var func_368()
{
	return Global_2451787.f_23;
}

var func_369()
{
	return Global_2451787.f_20;
}

var func_370()
{
	return Global_2451787.f_17;
}

var func_371()
{
	return Global_2451787.f_16;
}

var func_372()
{
	return Global_2359302.f_2;
}

bool func_373()
{
	return unk_0xCE990E643CD9D0E5(Global_2359302, 4);
}

bool func_374()
{
	return unk_0xCE990E643CD9D0E5(Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_39.f_18, 14);
}

int func_375(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = Global_969055.f_14[iParam0];
	if (func_367())
	{
		iVar2 = func_366(bParam1);
		if (!iVar2 == -1)
		{
			return func_364(iVar2);
		}
	}
	if (iVar1 > -1 && iVar1 < 17)
	{
		if (unk_0xCE990E643CD9D0E5(Global_4456448.f_592[iParam0 /*16355*/].f_7079[iVar1], 24))
		{
			return 18;
		}
	}
	if (iParam0 > -1 && bParam1 != func_13())
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
			iVar0 = func_352(bParam1, !bParam2, iParam0, 0);
		}
		if (unk_0xCE990E643CD9D0E5(Global_4456448.f_21, 13))
		{
			iVar0 = func_376(iParam0);
		}
		if (unk_0xCE990E643CD9D0E5(Global_4456448.f_24, 29))
		{
			iVar0 = 0;
		}
		if (unk_0xCE990E643CD9D0E5(Global_4456448.f_15, 26) && !func_146(iParam0, unk_0x6CC163E30ECE0790(bParam1), 0))
		{
			iVar0 = func_363(1);
		}
	}
	else
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_376(int iParam0)
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

int func_377(bool bParam0, char* sParam1, int iParam2)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS(bParam0, "NULL"))
	{
		if (!unk_0xCE990E643CD9D0E5(iLocal_68, false))
		{
			func_481(&uLocal_86, 3, 0, sParam1, 0, 1);
			if (func_379(&uLocal_86, iParam2, "CT_AUD", bParam0, 0, 0))
			{
				unk_0xBE20AB8238688965(&bLocal_68, false);
			}
		}
		else if (!unk_0xCE990E643CD9D0E5(bLocal_68, true))
		{
			if (func_378(0))
			{
				unk_0xBE20AB8238688965(&bLocal_68, true);
			}
		}
		else if (!func_378(0))
		{
			bLocal_68 = false;
			return 1;
		}
	}
	return 0;
}

int func_378(int iParam0)
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

int func_379(var uParam0, int iParam1, char* sParam2, bool bParam3, bool bParam4, int iParam5)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	
	if (func_479())
	{
		return 0;
	}
	if (func_478())
	{
		return 0;
	}
	bVar0 = false;
	bVar1 = false;
	iVar2 = -99;
	return func_380(uParam0, iParam1, sParam2, bParam3, 1, iParam5, bParam4, bVar0, bVar1, iVar2, bVar0, bVar0, -1);
}

int func_380(var uParam0, int iParam1, char* sParam2, bool bParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, char* sParam10, char* sParam11, int iParam12)
{
	void fVar0;
	int iVar1;
	void fVar2;
	
	if (CAM::IS_SCREEN_FADED_OUT(sParam2))
	{
		return 0;
	}
	if (HUD::_GET_TEXT_SUBSTRING_SLICE(sParam2) > 7)
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
	iVar1 = func_477(sParam2, bParam3);
	fVar2 = 0;
	if (!CAM::IS_SCREEN_FADED_OUT(bParam7))
	{
		fVar2 = AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT(bParam7);
	}
	if (func_476(fVar0, iVar1, fVar2))
	{
		return 1;
	}
	if (!func_471(bParam6))
	{
		return 0;
	}
	if (func_468(fVar0, iVar1, fVar2))
	{
		if (func_467())
		{
			return 0;
		}
		func_466();
		return func_387(uParam0, iParam1, iParam12, sParam2, bParam3, iParam4, iParam5, bParam6, bParam7, bParam8, iParam9, sParam10, sParam11);
	}
	if (!func_386(iParam4))
	{
		return 0;
	}
	func_381(fVar0, iVar1, fVar2, bParam3, iParam4, iParam5, bParam6);
	return 0;
}

void func_381(void fParam0, int iParam1, void fParam2, bool bParam3, int iParam4, int iParam5, bool bParam6)
{
	Global_1370593.f_40.f_1 = fParam0;
	Global_1370593.f_40.f_2 = iParam1;
	Global_1370593.f_40.f_3 = fParam2;
	StringCopy(&(Global_1370593.f_40.f_4), bParam3, 16);
	Global_1370593.f_40.f_8 = iParam4;
	Global_1370593.f_40.f_9 = iParam5;
	Global_1370593.f_40.f_14 = bParam6;
	func_382(iParam4);
	func_466();
	Global_1370593.f_40.f_13 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), 7000);
}

void func_382(int iParam0)
{
	if (func_385(iParam0))
	{
		func_384();
		return;
	}
	func_383();
}

void func_383()
{
	Global_1370593.f_40.f_10 = 0;
}

void func_384()
{
	Global_1370593.f_40.f_10 = 1;
}

int func_385(int iParam0)
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

bool func_386(int iParam0)
{
	return iParam0 > Global_1370593.f_40.f_8;
}

int func_387(var uParam0, int iParam1, int iParam2, char* sParam3, bool bParam4, int iParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9, int iParam10, char* sParam11, char* sParam12)
{
	struct<2> Var0;
	
	func_465();
	if (iParam6 == 5)
	{
		iParam6 = 0;
	}
	if (iParam5 == 8)
	{
		return func_462(uParam0, sParam3, bParam4);
	}
	if (iParam5 == 4)
	{
		StringCopy(&Var0, "CELL_226", 16);
		return func_459(uParam0, iParam1, sParam3, bParam4, &Var0);
	}
	if (iParam5 == 1 || iParam5 == 7)
	{
		if (iParam6 == 2)
		{
			return func_462(uParam0, sParam3, bParam4);
		}
		return func_441(uParam0, iParam1, sParam3, bParam4, bParam7);
	}
	if (iParam5 == 5)
	{
		return func_440(iParam1, iParam2, bParam4, bParam7, bParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 2)
	{
		return func_428(iParam1, iParam2, bParam4, bParam7, bParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 3)
	{
		return func_427(iParam1, iParam2, bParam4, bParam7, bParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 6)
	{
		return func_388(iParam1, iParam2, bParam4, bParam7, bParam8, bParam9, iParam10, sParam11, sParam12);
	}
	return 0;
}

int func_388(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	func_426();
	bVar0 = true;
	if (func_390(iParam0, iParam1, bParam2, bVar0, bParam3, iParam4, bParam5, iParam6, sParam7, sParam8))
	{
		func_389(120000);
		return 1;
	}
	return 0;
}

void func_389(int iParam0)
{
	Global_1370593.f_40.f_11 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), iParam0);
	Global_1370593.f_40.f_12 = 1;
}

int func_390(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9)
{
	bool bVar0;
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
	
	bVar0 = func_13();
	iVar1 = 0;
	if (iParam0 == 145)
	{
		bVar0 = iParam1;
		sVar2 = DATAFILE::DATADICT_GET_ARRAY(bVar0);
		iVar1 = func_420(bVar0);
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
	sVar4 = func_419(iParam5, bParam6, &iVar3);
	uVar5 = func_417(iParam7, &iVar3);
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
		if (unk_0xCE990E643CD9D0E5(bParam4, true))
		{
			iVar8 = 1;
		}
	}
	if (unk_0xCE990E643CD9D0E5(bParam4, 2))
	{
		iVar10 = 2;
	}
	bVar12 = false;
	if (!iVar3 == 0 || !CAM::IS_SCREEN_FADED_OUT(sVar2))
	{
		bVar12 = func_416(iParam0, bParam2, iVar10, bVar4, uVar5, bVar2, iVar3, iVar11, 1, iVar9, 0, bVar7, iVar8, 0, iVar6, bParam8, bParam9);
	}
	else
	{
		bVar12 = func_394(iParam0, bParam2, iVar10, iVar11, 1, iVar9, 0, bVar7, iVar8, 0);
	}
	if (!bVar12)
	{
		return 0;
	}
	if (unk_0xCE990E643CD9D0E5(bParam4, false))
	{
		func_393();
	}
	func_426();
	func_392();
	func_391();
	return 1;
}

void func_391()
{
	Global_1370593.f_57 = 0;
	Global_1370593.f_57.f_1 = 0;
}

void func_392()
{
	Global_1370593.f_40 = 3;
}

void func_393()
{
	unk_0xBE20AB8238688965(&Global_7551, 8);
}

int func_394(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)
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
	if (func_395(iParam0, bParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
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

int func_395(var uParam0, bool bParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, bool bParam14, char* sParam15, int iParam16)
{
	int iVar0;
	
	if (iParam13 > 99)
	{
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS(sParam14, sParam15))
	{
	}
	func_409();
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
	if (func_408() == 0)
	{
		func_406();
		return 0;
	}
	func_405(Global_4271008);
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
	StringCopy(&(Global_4269759[Global_4271008 /*104*/].f_67), bParam14, 64);
	StringCopy(&(Global_4269759[Global_4271008 /*104*/].f_83), sParam15, 64);
	func_409();
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
				func_404(0);
				break;
			
			case 1:
				func_404(1);
				break;
			
			case 2:
				func_404(2);
				break;
			
			case 3:
				func_404(3);
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
		func_409();
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
			if (!func_403())
			{
				DATAFILE::UGC_UPDATE_CONTENT(-1, "Text_Arrive_Tone", &Global_19670, 1);
			}
		}
	}
	if (!Global_19865)
	{
		if (Global_19681.f_1 == 6)
		{
			func_402(Global_19662, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_399(1);
			func_402(Global_19662, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_19661), -1082130432, -1082130432, -1082130432);
		}
	}
	func_396(uParam0, bParam1);
	return 1;
}

void func_396(var uParam0, bool bParam1)
{
	if (!func_397())
	{
		return;
	}
	unk_0x1A2DCF21E22955B0(uParam0, -1180597171, AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT(bParam1), 0);
}

int func_397()
{
	if (!Global_262145.f_28160)
	{
		return 0;
	}
	if (!Global_76833)
	{
		return 0;
	}
	if (PLAYER::PLAYER_ID() == func_13())
	{
		return 0;
	}
	if (func_398(PLAYER::PLAYER_ID()))
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

bool func_398(bool bParam0)
{
	return func_38(bParam0, 20);
}

void func_399(int iParam0)
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
		if (func_277(14))
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
								func_401(&(Global_7558[iVar1 /*15*/]));
								NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE(fVar2);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							if (Global_2462245)
							{
								if (iVar1 == 14)
								{
									func_400(Global_19662, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(fVar0), SYSTEM::TO_FLOAT(Global_7558[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_22068), -1f, &(Global_7558[iVar1 /*15*/]), 0, 0, 0, 0);
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
								func_400(Global_19662, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(fVar0), SYSTEM::TO_FLOAT(Global_7558[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_22073), -1f, &(Global_7558[iVar1 /*15*/]), 0, 0, 0, 0);
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
									func_400(Global_19662, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(fVar0), SYSTEM::TO_FLOAT(Global_7558[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(fVar4), -1f, &(Global_7558[iVar1 /*15*/]), 0, 0, 0, 0);
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
									func_400(Global_19662, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(fVar0), SYSTEM::TO_FLOAT(Global_7558[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(fVar6), -1f, &(Global_7558[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_400(Global_19662, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(fVar0), SYSTEM::TO_FLOAT(Global_7558[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_22068), -1f, &(Global_7558[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_19662, "SET_DATA_SLOT");
								NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE(1);
								NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE(fVar0);
								NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE(Global_7558[iVar1 /*15*/].f_10);
								NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE(0);
								func_401(&(Global_7558[iVar1 /*15*/]));
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
								func_401(&(Global_7558[iVar1 /*15*/]));
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
								func_401(&(Global_7558[iVar1 /*15*/]));
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
								func_401(&(Global_7558[iVar1 /*15*/]));
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
								func_401(&(Global_7558[iVar1 /*15*/]));
								NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE(42);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (Global_7558[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								fVar9 = 0;
								fVar9 = Global_1627252.f_1;
								func_400(Global_19662, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(fVar0), SYSTEM::TO_FLOAT(Global_7558[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(fVar9), -1f, &(Global_7558[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_400(Global_19662, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(fVar0), SYSTEM::TO_FLOAT(Global_7558[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(0), -1f, &(Global_7558[iVar1 /*15*/]), 0, 0, 0, 0);
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

void func_400(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11)
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
	if (!CAM::IS_SCREEN_FADED_OUT(iParam7))
	{
		func_401(bParam7);
	}
	if (!CAM::IS_SCREEN_FADED_OUT(iParam8))
	{
		func_401(bParam8);
	}
	if (!CAM::IS_SCREEN_FADED_OUT(iParam9))
	{
		func_401(bParam9);
	}
	if (!CAM::IS_SCREEN_FADED_OUT(iParam10))
	{
		func_401(bParam10);
	}
	if (!CAM::IS_SCREEN_FADED_OUT(iParam11))
	{
		func_401(bParam11);
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_401(int iParam0)
{
	MISC::UPDATE_ONSCREEN_KEYBOARD(iParam0);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT();
}

void func_402(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
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

bool func_403()
{
	return Global_1312896;
}

void func_404(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_111858.f_14047[iParam0 /*20*/].f_8;
	uVar0 = uVar0;
	uVar1 = uVar1;
}

void func_405(int iParam0)
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

void func_406()
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
		if (!func_407(Global_4269759[iVar2 /*104*/].f_18, Global_4269759[Global_4271008 /*104*/].f_18))
		{
			Global_4271008 = iVar2;
		}
		iVar2++;
	}
	Global_4269759[Global_4271008 /*104*/].f_24 = 1;
}

int func_407(struct<6> Param0, struct<6> Param1)
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

int func_408()
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
			if (!func_407(Global_4269759[iVar2 /*104*/].f_18, Global_4269759[Global_4271008 /*104*/].f_18))
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

void func_409()
{
	if (func_277(14))
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
		Global_19681 = func_410();
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

var func_410()
{
	func_411();
	return Global_111858.f_2359.f_539.f_4321;
}

void func_411()
{
	int iVar0;
	
	if (MISC::IS_BIT_SET(unk_0x9B0761B4C3EB8BC7()))
	{
		if (func_414(Global_111858.f_2359.f_539.f_4321) != MISC::GET_MODEL_DIMENSIONS(unk_0x9B0761B4C3EB8BC7()))
		{
			iVar0 = func_413(unk_0x9B0761B4C3EB8BC7());
			if (func_412(iVar0) && (!func_277(14) || Global_110809))
			{
				if (Global_111858.f_2359.f_539.f_4321 != iVar0 && func_412(Global_111858.f_2359.f_539.f_4321))
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

bool func_412(int iParam0)
{
	return iParam0 < 3;
}

int func_413(int iParam0)
{
	int iVar0;
	void fVar1;
	
	if (MISC::IS_BIT_SET(iParam0))
	{
		fVar1 = MISC::GET_MODEL_DIMENSIONS(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_414(iVar0) == fVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_414(int iParam0)
{
	if (func_412(iParam0))
	{
		return func_415(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_415(int iParam0)
{
	return Global_1848[iParam0 /*29*/];
}

int func_416(int iParam0, bool bParam1, int iParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, char* sParam15, char* sParam16)
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
	if (func_395(iParam0, bParam1, iParam2, iParam6, sParam3, sParam5, uParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0) == 1)
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

int func_417(int iParam0, int iParam1)
{
	if (iParam0 == -99)
	{
		return -99;
	}
	func_418(2, iParam1);
	return iParam0;
}

void func_418(int iParam0, var uParam1)
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

bool func_419(bool bParam0, bool bParam1, int iParam2)
{
	if (CAM::IS_SCREEN_FADED_OUT(iParam0))
	{
		return sLocal_20;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS(bParam0, sLocal_20))
	{
		return sLocal_20;
	}
	func_418(1, iParam2);
	if (bParam1)
	{
		return bParam0;
	}
	return AUDIO::ADD_LINE_TO_CONVERSATION(bParam0);
}

int func_420(bool bParam0)
{
	int iVar0;
	
	iVar0 = func_423(bParam0);
	if (iVar0 == -1)
	{
		func_421(bParam0, 1);
		return 0;
	}
	Global_1389221[iVar0 /*5*/].f_4 = 1;
	return Global_1389221[iVar0 /*5*/].f_2;
}

void func_421(bool bParam0, bool bParam1)
{
	if (!func_6(bParam0, 0, 1))
	{
		return;
	}
	if (func_423(bParam0) != -1)
	{
		return;
	}
	if (Global_1389384)
	{
		if (bParam0 == Global_1389384.f_1)
		{
			return;
		}
	}
	if (func_422(bParam0))
	{
		return;
	}
	if (Global_1389422 >= 32)
	{
		return;
	}
	Global_1389389[Global_1389422] = bParam0;
	Global_1389422++;
	if (bParam1)
	{
	}
}

int func_422(bool bParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1389422)
	{
		if (Global_1389389[iVar0] == bParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_423(bool bParam0)
{
	int iVar0;
	
	if (!func_6(bParam0, 0, 1))
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
		if (Global_1389221[iVar0 /*5*/].f_1 == bParam0)
		{
			if (HUD::_GET_LABEL_TEXT(Global_1389221[iVar0 /*5*/].f_2) && MISC::ARE_STRINGS_EQUAL(Global_1389221[iVar0 /*5*/].f_2))
			{
				return iVar0;
			}
			func_424(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_424(int iParam0)
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
	func_425(&(Global_1389221[iVar2 /*5*/]));
	Global_1389382 = (Global_1389382 - 1);
}

void func_425(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_13();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (MISC::SET_BIT())
	{
		uParam0->f_3 = NETWORK::GET_NETWORK_TIME();
	}
}

void func_426()
{
	Global_1370593.f_40.f_9 = 4;
}

int func_427(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	func_426();
	bVar0 = false;
	return func_390(iParam0, iParam1, bParam2, bVar0, bParam3, iParam4, bParam5, iParam6, sParam7, sParam8);
}

int func_428(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	bVar0 = false;
	return func_429(iParam0, iParam1, bParam2, bVar0, bParam3, iParam4, bParam5, iParam6, sParam7, sParam8);
}

int func_429(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9)
{
	bool bVar0;
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
	
	bVar0 = func_13();
	iVar1 = 0;
	if (iParam0 == 145)
	{
		bVar0 = iParam1;
		sVar2 = DATAFILE::DATADICT_GET_ARRAY(bVar0);
		iVar1 = func_420(bVar0);
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
	sVar4 = func_419(iParam5, bParam6, &iVar3);
	uVar5 = func_417(iParam7, &iVar3);
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
		if (unk_0xCE990E643CD9D0E5(bParam4, true))
		{
			iVar8 = 1;
		}
	}
	if (unk_0xCE990E643CD9D0E5(bParam4, 2))
	{
		iVar10 = 2;
	}
	bVar12 = false;
	if (!iVar3 == 0 || !CAM::IS_SCREEN_FADED_OUT(sVar2))
	{
		bVar12 = func_439(iParam0, bParam2, iVar10, bVar4, uVar5, bVar2, iVar3, iVar11, 1, iVar9, 0, bVar7, iVar8, 0, iVar6, bParam8, bParam9);
	}
	else
	{
		bVar12 = func_431(iParam0, bParam2, iVar10, iVar11, 1, iVar9, 0, bVar7, iVar8, 0);
	}
	if (!bVar12)
	{
		return 0;
	}
	if (unk_0xCE990E643CD9D0E5(bParam4, false))
	{
		func_393();
	}
	func_430();
	func_392();
	func_391();
	return 1;
}

void func_430()
{
	Global_1370593.f_40.f_9 = 3;
}

int func_431(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)
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
	if (func_433(iParam0, bParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_8258 = iParam6;
			Global_8161[3 /*6*/] = { func_432(iParam0) };
			Global_8238 = iParam0;
			unk_0xBE20AB8238688965(&Global_7551, true);
			unk_0xBE20AB8238688965(&Global_7551, 7);
		}
		return 1;
	}
	return 0;
}

struct<4> func_432(int iParam0)
{
	return Global_1848[iParam0 /*29*/].f_3;
}

int func_433(var uParam0, bool bParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, bool bParam14, char* sParam15, int iParam16)
{
	int iVar0;
	
	if (iParam13 > 99)
	{
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS(sParam14, sParam15))
	{
	}
	func_409();
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
	if (func_438() == 0)
	{
		func_436();
		return 0;
	}
	func_435(Global_22072);
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
		func_404(0);
		func_404(2);
		func_404(1);
	}
	else
	{
		func_409();
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
					func_404(0);
					Global_8257 = 0;
					break;
				
				case 1:
					func_404(1);
					Global_8257 = 1;
					break;
				
				case 2:
					func_404(2);
					Global_8257 = 2;
					break;
				
				case 3:
					func_404(3);
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
		func_409();
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
			if (!func_403())
			{
				DATAFILE::UGC_UPDATE_CONTENT(-1, "Text_Arrive_Tone", &Global_19670, 1);
			}
		}
	}
	if (!Global_19865)
	{
		if (Global_19681.f_1 == 6)
		{
			func_402(Global_19662, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_399(1);
			func_402(Global_19662, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_19661), -1082130432, -1082130432, -1082130432);
		}
	}
	func_434(uParam0, bParam1);
	return 1;
}

void func_434(var uParam0, bool bParam1)
{
	if (!func_397())
	{
		return;
	}
	unk_0x1A2DCF21E22955B0(uParam0, 1654525105, AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT(bParam1), 0);
}

void func_435(int iParam0)
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

void func_436()
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
		if (!func_437(Global_111858.f_14137[iVar2 /*104*/].f_18, Global_111858.f_14137[Global_22072 /*104*/].f_18))
		{
			Global_22072 = iVar2;
		}
		iVar2++;
	}
	Global_111858.f_14137[Global_22072 /*104*/].f_24 = 1;
}

int func_437(struct<6> Param0, struct<6> Param1)
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

int func_438()
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
			if (!func_437(Global_111858.f_14137[iVar2 /*104*/].f_18, Global_111858.f_14137[Global_22072 /*104*/].f_18))
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

int func_439(int iParam0, bool bParam1, int iParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, char* sParam15, char* sParam16)
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
	if (func_433(iParam0, bParam1, iParam2, iParam6, sParam3, sParam5, uParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0) == 1)
	{
		if (bParam11 == 1)
		{
			Global_8258 = iParam10;
			Global_8161[3 /*6*/] = { func_432(iParam0) };
			Global_8238 = iParam0;
			StringCopy(&Global_8239, sParam5, 64);
			unk_0xBE20AB8238688965(&Global_7551, true);
			unk_0xBE20AB8238688965(&Global_7551, 7);
		}
		return 1;
	}
	return 0;
}

int func_440(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(unk_0x9B0761B4C3EB8BC7()))
	{
	}
	if (SYSTEM::FLOOR(unk_0x9B0761B4C3EB8BC7()))
	{
		return 0;
	}
	func_430();
	bVar0 = true;
	if (func_429(iParam0, iParam1, bParam2, bVar0, bParam3, iParam4, bParam5, iParam6, sParam7, sParam8))
	{
		func_389(120000);
		return 1;
	}
	return 0;
}

int func_441(var uParam0, int iParam1, char* sParam2, char* sParam3, bool bParam4)
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
	if (unk_0xCE990E643CD9D0E5(bParam4, 7))
	{
		iVar1 = 9;
	}
	if (unk_0xCE990E643CD9D0E5(bParam4, 4))
	{
		bVar0 = func_458(uParam0, iParam1, sParam2, sParam3, iVar1, 0, 0, 1);
	}
	else
	{
		bVar0 = func_447(uParam0, iParam1, sParam2, sParam3, iVar1, 0, 0, 1);
	}
	if (bVar0)
	{
		if (unk_0xCE990E643CD9D0E5(bParam4, 3))
		{
			func_446(1);
		}
		if (unk_0xCE990E643CD9D0E5(bParam4, 5))
		{
			func_445(1);
		}
		func_444();
		func_392();
		func_443();
		func_442();
		return 1;
	}
	return 0;
}

void func_442()
{
	Global_2549970 = 0;
}

void func_443()
{
	Global_1370593.f_57 = 1;
	Global_1370593.f_57.f_1 = 0;
}

void func_444()
{
	Global_1370593.f_40.f_9 = 1;
}

void func_445(int iParam0)
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

void func_446(int iParam0)
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

int func_447(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	func_457(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
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
	return func_448(sParam3, iParam4, bParam7);
}

int func_448(char* sParam0, int iParam1, bool bParam2)
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
					func_456();
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
		if (func_455(8, -1))
		{
			return 0;
		}
		Global_21081 = { Global_21075 };
		func_454();
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
				func_409();
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
				if (func_453())
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
			if (func_452())
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
			func_451();
			Global_21015 = bParam2;
		}
		Global_21007 = iParam1;
		StringCopy(&Global_20624, sParam0, 24);
		Global_19871 = 0;
		func_450();
		func_449();
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
		func_456();
	}
	return 0;
}

void func_449()
{
	if (!func_397())
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

void func_450()
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

void func_451()
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

int func_452()
{
	if (Global_19681.f_1 == 1 || Global_19681.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_453()
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

void func_454()
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

bool func_455(bool bParam0, int iParam1)
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

void func_456()
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

void func_457(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

int func_458(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	func_457(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
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
	return func_448(sParam3, iParam4, bParam7);
}

int func_459(var uParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4)
{
	if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(unk_0x9B0761B4C3EB8BC7()))
	{
	}
	if (SYSTEM::FLOOR(unk_0x9B0761B4C3EB8BC7()))
	{
		return 0;
	}
	if (func_461(uParam0, iParam1, sParam2, sParam3, 9, sParam4, 0, 0, 1))
	{
		func_460();
		func_444();
		func_392();
		func_443();
		func_442();
		return 1;
	}
	return 0;
}

void func_460()
{
	Global_22023 = 0;
}

bool func_461(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, char* sParam5, int iParam6, int iParam7, bool bParam8)
{
	func_457(uParam0, iParam1, sParam2, iParam6, iParam7, 0);
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
	return func_448(sParam3, iParam4, bParam8);
}

int func_462(var uParam0, char* sParam1, char* sParam2)
{
	if (func_464(uParam0, sParam1, sParam2, 12, 0, 0, 0))
	{
		func_463();
		func_392();
		func_443();
		return 1;
	}
	return 0;
}

void func_463()
{
	Global_1370593.f_40.f_9 = 2;
}

bool func_464(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_457(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_448(sParam2, iParam3, 0);
}

void func_465()
{
	Global_1370593.f_55 = Global_1370593.f_40.f_1;
	Global_1370593.f_55.f_1 = Global_1370593.f_40.f_10;
}

void func_466()
{
	Global_1370593.f_40 = 1;
}

bool func_467()
{
	return Global_1370593.f_40 == 1;
}

int func_468(void fParam0, int iParam1, void fParam2)
{
	if (!func_469(fParam0))
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

int func_469(int iParam0)
{
	if (!func_470())
	{
		return 0;
	}
	if (!Global_1370593.f_40.f_1 == iParam0)
	{
		return 0;
	}
	return 1;
}

int func_470()
{
	if (Global_1370593.f_40 == 0)
	{
		return 0;
	}
	return 1;
}

int func_471(bool bParam0)
{
	if (func_475())
	{
		return 0;
	}
	if (func_474())
	{
		return 0;
	}
	if (func_378(0))
	{
		return 0;
	}
	if (Global_1312485.f_18 != 0)
	{
		return 0;
	}
	if (Global_1663771 || func_473())
	{
		return 0;
	}
	if (!unk_0xCE990E643CD9D0E5(bParam0, 6))
	{
		if (func_472())
		{
			return 0;
		}
	}
	return 1;
}

bool func_472()
{
	return AUDIO::GET_SOUND_ID(NETWORK::GET_NETWORK_TIME(), Global_1387851);
}

int func_473()
{
	if (Global_4254512.f_943 > -1)
	{
		return 1;
	}
	return 0;
}

bool func_474()
{
	return Global_1370593.f_40 == 3;
}

bool func_475()
{
	return func_452();
}

int func_476(void fParam0, int iParam1, void fParam2)
{
	if (!func_474())
	{
		return 0;
	}
	return func_468(fParam0, iParam1, fParam2);
}

var func_477(char* sParam0, char* sParam1)
{
	char cVar0[64];
	
	StringCopy(&cVar0, sParam0, 64);
	StringConCat(&cVar0, sParam1, 64);
	return AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT(&cVar0);
}

bool func_478()
{
	return Global_2547059.f_1;
}

int func_479()
{
	if (Global_1370781.f_2)
	{
		return 1;
	}
	return func_480();
}

bool func_480()
{
	return func_475();
}

void func_481(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

int func_482(bool bParam0)
{
	switch (bParam0)
	{
		case 0:
			return 1;
			break;
	}
	return 0;
}

int func_483(var uParam0)
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

void func_484(var uParam0)
{
	if (!uParam0->f_1)
	{
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			func_485(uParam0, 0, 0);
		}
	}
}

void func_485(var uParam0, bool bParam1, bool bParam2)
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

void func_486()
{
	if (NETWORK::NETWORK_IS_HANDLE_VALID(Local_63.f_10[iLocal_77 /*7*/]) && !PED::IS_PED_IN_ANY_POLICE_VEHICLE(NETWORK::NET_TO_PED(Local_63.f_10[iLocal_77 /*7*/]), 0))
	{
		if (!PED::IS_PED_IN_ANY_POLICE_VEHICLE(unk_0x9B0761B4C3EB8BC7(), 0))
		{
			if (func_5(NETWORK::NETWORK_ARE_HANDLES_THE_SAME(NETWORK::NET_TO_PED(Local_63.f_10[iLocal_77 /*7*/]), 1), NETWORK::NETWORK_ARE_HANDLES_THE_SAME(unk_0x9B0761B4C3EB8BC7(), 1), 50625f))
			{
				if (!unk_0xCE990E643CD9D0E5(bLocal_66, 4))
				{
					unk_0xBE20AB8238688965(&bLocal_66, 4);
				}
			}
			else if (!unk_0xCE990E643CD9D0E5(bLocal_66, 5))
			{
				if (Local_63.f_42 != -1)
				{
					if (iLocal_77 == Local_63.f_42)
					{
						if (!unk_0xCE990E643CD9D0E5(bLocal_66, 5))
						{
							unk_0xBE20AB8238688965(&bLocal_66, 5);
						}
					}
				}
			}
		}
	}
	func_487(iLocal_77);
	iLocal_77++;
	if (iLocal_77 >= func_482(bLocal_69))
	{
		if ((!unk_0xCE990E643CD9D0E5(bLocal_66, 4) && unk_0xCE990E643CD9D0E5(Local_63.f_1, 8)) || unk_0xCE990E643CD9D0E5(bLocal_66, 5))
		{
			if (!unk_0xCE990E643CD9D0E5(Local_65[STATS::_GET_PACKED_TITLE_UPDATE_BOOL_STAT_KEY() /*5*/].f_1, true))
			{
				unk_0xBE20AB8238688965(&(Local_65[STATS::_GET_PACKED_TITLE_UPDATE_BOOL_STAT_KEY() /*5*/].f_1), true);
			}
		}
		else if (unk_0xCE990E643CD9D0E5(Local_65[STATS::_GET_PACKED_TITLE_UPDATE_BOOL_STAT_KEY() /*5*/].f_1, true))
		{
			VEHICLE::IS_VEHICLE_DRIVEABLE(&(Local_65[STATS::_GET_PACKED_TITLE_UPDATE_BOOL_STAT_KEY() /*5*/].f_1), true);
		}
		VEHICLE::IS_VEHICLE_DRIVEABLE(&bLocal_66, 4);
		VEHICLE::IS_VEHICLE_DRIVEABLE(&bLocal_66, 5);
		iLocal_77 = 0;
	}
}

void func_487(int iParam0)
{
	int iVar0;
	int iVar1;
	void fVar2;
	struct<3> Var3;
	bool bVar4;
	float fVar5;
	int iVar6;
	int iVar7;
	void fVar8;
	
	fVar2 = 0;
	Var3 = { 0f, 0f, 0f };
	bVar4 = false;
	if (HUD::DOES_BLIP_EXIST(Local_63.f_10[iParam0 /*7*/]))
	{
		iVar0 = NETWORK::NET_TO_PED(Local_63.f_10[iParam0 /*7*/]);
		if (bLocal_69 == 0)
		{
			if (PLAYER::PLAYER_ID() == bLocal_71)
			{
				if (Local_63.f_10[iParam0 /*7*/].f_4 == 0)
				{
					if (Local_63.f_10[iParam0 /*7*/].f_5 == 2)
					{
						bVar4 = true;
					}
				}
			}
		}
		if (PLAYER::PLAYER_ID() == bLocal_70)
		{
			if (unk_0xCE990E643CD9D0E5(Local_63.f_10[iParam0 /*7*/].f_2, true))
			{
				if (!unk_0xCE990E643CD9D0E5(iLocal_67[iParam0], false))
				{
					unk_0xBE20AB8238688965(&Global_1573339, false);
					unk_0xBE20AB8238688965(&(iLocal_67[iParam0]), false);
				}
				if (!unk_0xCE990E643CD9D0E5(Local_63.f_10[iParam0 /*7*/].f_2, 9))
				{
					if (!unk_0xCE990E643CD9D0E5(iLocal_67[iParam0], true))
					{
						bVar4 = true;
					}
				}
				else if (unk_0xCE990E643CD9D0E5(iLocal_67[iParam0], true))
				{
					VEHICLE::IS_VEHICLE_DRIVEABLE(&(iLocal_67[iParam0]), true);
				}
			}
		}
		if (bVar4)
		{
			if (HUD::DOES_BLIP_EXIST(Local_63.f_10[iParam0 /*7*/]))
			{
				if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_63.f_10[iParam0 /*7*/]))
				{
					AUDIO::RESTART_SCRIPTED_CONVERSATION(Local_63.f_10[iParam0 /*7*/]);
				}
			}
		}
		if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_63.f_10[iParam0 /*7*/]))
		{
			if (PLAYER::PLAYER_ID() == bLocal_70)
			{
				if (!unk_0xCE990E643CD9D0E5(Local_63.f_10[iParam0 /*7*/].f_2, 9) && !unk_0xCE990E643CD9D0E5(iLocal_67[iParam0], true))
				{
					if (NETWORK::_0x0EDE326D47CD0F3E(iVar0, PLAYER::PLAYER_ID()))
					{
						switch (Local_63.f_10[iParam0 /*7*/].f_1)
						{
							case 0:
								func_510(iVar0, 3);
								break;
						}
						unk_0xBE20AB8238688965(&(iLocal_67[iParam0]), true);
					}
				}
			}
			if (!PED::IS_PED_IN_ANY_POLICE_VEHICLE(iVar0, 0) && !STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(iVar0))
			{
				switch (Local_63.f_10[iParam0 /*7*/].f_5)
				{
					case 0:
						break;
					
					case 1:
						PED::SET_PED_RESET_FLAG(iVar0, 187, true);
						if (Local_63.f_10[iParam0 /*7*/].f_4 == 0)
						{
							if (unk_0xCE990E643CD9D0E5(Local_63.f_10[iParam0 /*7*/].f_2, 2))
							{
								if (!unk_0xCE990E643CD9D0E5(Local_63.f_10[iParam0 /*7*/].f_2, 3))
								{
									TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(iVar0, 3f);
									PED::_0x2208438012482A1A(iVar0, 1);
									PLAYER::SET_PLAYER_VEHICLE_DEFENSE_MODIFIER(iVar0, 1.653532E-43f, 0);
								}
							}
						}
						if (PLAYER::PLAYER_ID() == bLocal_71 && func_5(NETWORK::NETWORK_ARE_HANDLES_THE_SAME(iVar0, 1), NETWORK::NETWORK_ARE_HANDLES_THE_SAME(PLAYER::GET_PLAYER_PED(bLocal_71), 1), 25f))
						{
							unk_0xBE20AB8238688965(&(Global_2540384.f_4653), false);
						}
						else
						{
							VEHICLE::IS_VEHICLE_DRIVEABLE(&(Global_2540384.f_4653), false);
						}
						if (!PED::IS_PED_FLEEING(iVar0))
						{
							if (!PED::IS_PED_RESPONDING_TO_EVENT(iVar0, 29))
							{
								if (func_6(bLocal_71, 1, 1))
								{
									if (!unk_0xCE990E643CD9D0E5(Local_63.f_2, 13))
									{
										if (func_509(bLocal_71) && !unk_0xEEFD6B1BEB00F02E(PLAYER::GET_PLAYER_PED(bLocal_71)))
										{
											if (!func_508(iVar0, -1794415470))
											{
												if (func_507(iVar0))
												{
													iVar1 = ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYER_PED(bLocal_71), 0);
													if (MISC::IS_BIT_SET(iVar1))
													{
														if (ENTITY::GET_ENTITY_COORDS(iVar1, false))
														{
														}
														if (!VEHICLE::IS_SEAT_WARP_ONLY(iVar1, func_506(PLAYER::GET_PLAYER_PED(bLocal_71), 0)))
														{
															TASK::TASK_ENTER_VEHICLE(iVar0, iVar1, -1, func_505(PLAYER::GET_PLAYER_PED(bLocal_71), iVar1), func_504(iParam0), 1179977, 0);
														}
													}
												}
											}
										}
										else if (!(PED::IS_PED_JACKING(iVar0) && PED::GET_JACK_TARGET(iVar0) == PLAYER::GET_PLAYER_PED(bLocal_71)) && !SYSTEM::VDIST(iVar0, 1))
										{
											if (func_508(iVar0, -1794415470))
											{
												HUD::HIDE_HUD_AND_RADAR_THIS_FRAME(iVar0);
											}
											if (!func_508(iVar0, 1227113341))
											{
												if (func_507(iVar0))
												{
													TASK::TASK_GO_TO_ENTITY(iVar0, PLAYER::GET_PLAYER_PED(bLocal_71), -1, 0f, func_504(iParam0), 2f, 0);
												}
											}
											else
											{
												PED::SET_PED_RESET_FLAG(iVar0, 151, true);
											}
										}
									}
								}
							}
						}
						break;
					
					case 2:
						if (PLAYER::PLAYER_ID() == bLocal_71 && func_5(NETWORK::NETWORK_ARE_HANDLES_THE_SAME(iVar0, 1), NETWORK::NETWORK_ARE_HANDLES_THE_SAME(PLAYER::GET_PLAYER_PED(bLocal_71), 1), 25f))
						{
							unk_0xBE20AB8238688965(&(Global_2540384.f_4653), false);
						}
						else
						{
							VEHICLE::IS_VEHICLE_DRIVEABLE(&(Global_2540384.f_4653), false);
						}
						if (PLAYER::PLAYER_ID() == bLocal_71)
						{
							if (!unk_0xCE990E643CD9D0E5(Local_65[STATS::_GET_PACKED_TITLE_UPDATE_BOOL_STAT_KEY() /*5*/].f_1, false))
							{
								if (!PED::IS_PED_IN_ANY_POLICE_VEHICLE(unk_0x9B0761B4C3EB8BC7(), 0))
								{
									if ((func_4(NETWORK::NETWORK_ARE_HANDLES_THE_SAME(iVar0, 1), NETWORK::NETWORK_ARE_HANDLES_THE_SAME(unk_0x9B0761B4C3EB8BC7(), 1)) && (PED::IS_PED_ON_FOOT(unk_0x9B0761B4C3EB8BC7()) || unk_0xEEFD6B1BEB00F02E(unk_0x9B0761B4C3EB8BC7()))) || (PED::IS_PED_JACKING(iVar0) && PED::GET_JACK_TARGET(iVar0) == unk_0x9B0761B4C3EB8BC7()))
									{
										fVar2 = func_502(PLAYER::PLAYER_ID());
										fVar5 = (SYSTEM::TO_FLOAT(Global_262145.f_6651) / 100f);
										fVar2 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(fVar2) * fVar5));
										iVar6 = func_501(PLAYER::PLAYER_ID());
										if (iVar6 > 100)
										{
											iVar6 = 100;
										}
										if (fVar2 > (iVar6 * Global_262145.f_6652))
										{
											fVar2 = (iVar6 * Global_262145.f_6652);
										}
										if (fVar2 > 0)
										{
											unk_0xBE20AB8238688965(&bLocal_66, 16);
										}
										unk_0x6F9E2D5530527E6A(unk_0x9B0761B4C3EB8BC7(), 5000, 10000, 4);
										if (!(PED::IS_PED_JACKING(iVar0) && PED::GET_JACK_TARGET(iVar0) == PLAYER::GET_PLAYER_PED(bLocal_71)))
										{
											Var3 = { NETWORK::NETWORK_ARE_HANDLES_THE_SAME(unk_0x9B0761B4C3EB8BC7(), 1) - NETWORK::NETWORK_ARE_HANDLES_THE_SAME(iVar0, 1) };
											Var3 = { func_500(Var3) };
											Var3.x = (Var3.x * 3f);
											Var3.f_1 = (Var3.f_1 * 3f);
											Var3.f_2 = (Var3.f_2 * 3f);
											ENTITY::APPLY_FORCE_TO_ENTITY(unk_0x9B0761B4C3EB8BC7(), 1, Var3, 0f, 0f, 0.5f, 0, false, true, true, false, true);
										}
										PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 512, false);
										PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 17, true);
										if (((SYSTEM::VDIST(iVar0, 1) || PED::IS_PED_JACKING(iVar0)) && func_498(iVar0)) && func_506(iVar0, 0) == -1)
										{
											PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 2, true);
											PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 3, false);
											PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 6, true);
										}
										else
										{
											HUD::HIDE_HUD_AND_RADAR_THIS_FRAME(iVar0);
											TASK::TASK_SMART_FLEE_PED(iVar0, unk_0x9B0761B4C3EB8BC7(), 10000f, -1, true, false);
										}
										Local_65[STATS::_GET_PACKED_TITLE_UPDATE_BOOL_STAT_KEY() /*5*/].f_3 = fVar2;
										if (fVar2 > 0)
										{
											Local_65[STATS::_GET_PACKED_TITLE_UPDATE_BOOL_STAT_KEY() /*5*/].f_2 = iParam0;
										}
										else
										{
											Local_65[STATS::_GET_PACKED_TITLE_UPDATE_BOOL_STAT_KEY() /*5*/].f_2 = -1;
										}
										PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar0, Global_1575013);
										unk_0xBE20AB8238688965(&(Local_65[STATS::_GET_PACKED_TITLE_UPDATE_BOOL_STAT_KEY() /*5*/].f_1), false);
										unk_0xBE20AB8238688965(&(Global_2540384.f_4653), 2);
									}
								}
							}
						}
						break;
					
					case 3:
						if (unk_0x018979C457E7B3A2(iVar0, 187))
						{
							PED::SET_PED_RESET_FLAG(iVar0, 187, false);
						}
						if (Local_63.f_10[iParam0 /*7*/].f_4 == 0)
						{
							if (!unk_0xCE990E643CD9D0E5(Local_63.f_10[iParam0 /*7*/].f_2, 4))
							{
								PED::_0x2208438012482A1A(iVar0, 0);
								PLAYER::SET_PLAYER_VEHICLE_DEFENSE_MODIFIER(iVar0, 1.653532E-43f, 1);
							}
						}
						if (!(PED::IS_PED_JACKING(iVar0) && PED::GET_JACK_TARGET(iVar0) == PLAYER::GET_PLAYER_PED(bLocal_71)))
						{
							if (!PED::IS_PED_FLEEING(iVar0))
							{
								if (func_507(iVar0))
								{
									if ((SYSTEM::VDIST(iVar0, 1) || PED::IS_PED_JACKING(iVar0)) && !unk_0xCE990E643CD9D0E5(Local_63.f_2, 10))
									{
										if (!func_508(iVar0, -258271821) && !func_508(iVar0, -1273030092))
										{
											if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(iVar0))
											{
												iVar7 = ENTITY::GET_ENTITY_MODEL(iVar0, 1);
												fVar8 = MISC::GET_MODEL_DIMENSIONS(iVar7);
												if (unk_0xCE990E643CD9D0E5(Local_63.f_2, 13))
												{
													PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 17, true);
													PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 6, false);
													PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 1, false);
												}
												else if (VEHICLE::IS_THIS_MODEL_A_HELI(fVar8))
												{
													TASK::TASK_HELI_MISSION(iVar0, iVar7, 0, unk_0x9B0761B4C3EB8BC7(), 0f, 0f, 0f, 8, 20f, 0f, -1f, 80, 80, -1082130432, 0);
												}
												else if (VEHICLE::IS_THIS_MODEL_A_PLANE(fVar8))
												{
													TASK::TASK_PLANE_MISSION(iVar0, iVar7, 0, unk_0x9B0761B4C3EB8BC7(), 0f, 0f, 0f, 8, 25f, 0f, -1f, 1.121039E-43f, 1.121039E-43f, 1);
												}
												else if (MISC::GET_MODEL_DIMENSIONS(iVar7) == joaat("taxi"))
												{
													PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 2, false);
													PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 3, true);
													PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 6, false);
													TASK::TASK_SMART_FLEE_PED(iVar0, PLAYER::GET_PLAYER_PED(bLocal_71), 10000f, -1, true, false);
												}
												else
												{
													TASK::TASK_VEHICLE_DRIVE_WANDER(iVar0, ENTITY::GET_ENTITY_MODEL(iVar0, 1), 60f, 786468);
												}
											}
										}
									}
									else if (!func_508(iVar0, 1805844857))
									{
										if (func_6(bLocal_71, 1, 1))
										{
											TASK::TASK_SMART_FLEE_PED(iVar0, PLAYER::GET_PLAYER_PED(bLocal_71), 10000f, -1, true, false);
										}
									}
								}
							}
						}
						break;
					
					case 4:
						func_496(Local_63.f_10[iParam0 /*7*/], 0);
						break;
				}
				if (unk_0xCE990E643CD9D0E5(Local_63.f_2, 13))
				{
					HUD::HIDE_HUD_AND_RADAR_THIS_FRAME(NETWORK::NET_TO_PED(Local_63.f_10[iParam0 /*7*/]));
					PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_63.f_10[iParam0 /*7*/]), 17, true);
					PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_63.f_10[iParam0 /*7*/]), 6, false);
					PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_63.f_10[iParam0 /*7*/]), 1, false);
				}
				func_488(iVar0);
			}
		}
	}
}

void func_488(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xCE990E643CD9D0E5(bLocal_66, 16))
	{
		iVar0 = Local_65[STATS::_GET_PACKED_TITLE_UPDATE_BOOL_STAT_KEY() /*5*/].f_3;
		iVar1 = func_489(iVar0);
		if (iVar1 == 1)
		{
			VEHICLE::IS_VEHICLE_DRIVEABLE(&bLocal_66, 15);
			VEHICLE::IS_VEHICLE_DRIVEABLE(&bLocal_66, 16);
			if (!func_51())
			{
				unk_0x29AF35913B985986(iVar0, 0, 0);
			}
			if (iVar0 > Global_262145.f_8065)
			{
				iVar0 = Global_262145.f_8065;
			}
			PED::SET_PED_MONEY(iParam0, iVar0);
			unk_0xBE20AB8238688965(&(Local_65[STATS::_GET_PACKED_TITLE_UPDATE_BOOL_STAT_KEY() /*5*/].f_1), 5);
		}
		else if (iVar1 == 0)
		{
			VEHICLE::IS_VEHICLE_DRIVEABLE(&bLocal_66, 15);
			VEHICLE::IS_VEHICLE_DRIVEABLE(&bLocal_66, 16);
			unk_0xBE20AB8238688965(&(Local_65[STATS::_GET_PACKED_TITLE_UPDATE_BOOL_STAT_KEY() /*5*/].f_1), 6);
		}
		else
		{
			return;
		}
	}
}

int func_489(int iParam0)
{
	if (func_51())
	{
		if (func_492(uParam0))
		{
			if (func_491(iLocal_254) == 2)
			{
				MONEY::NETWORK_BUY_HELI_STRIKE(func_490(iLocal_254));
				unk_0x29AF35913B985986(uParam0, 0, 0);
				func_323(iLocal_254);
				return 1;
			}
			else
			{
				func_323(iLocal_254);
				return 0;
			}
		}
	}
	else
	{
		return 1;
	}
	return -1;
}

int func_490(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4264051[iParam0 /*85*/].f_66;
	}
	return -1;
}

int func_491(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4264051[iParam0 /*85*/].f_66.f_2;
	}
	return 0;
}

int func_492(var uParam0)
{
	if (!unk_0xCE990E643CD9D0E5(bLocal_66, 15))
	{
		func_321(&iLocal_254, -1135378931, 537254313, 1474183246, 1839532116, uParam0, 4, 3);
		func_495(&uLocal_255, 0, 0);
		unk_0xBE20AB8238688965(&bLocal_66, 15);
	}
	else if (func_494(iLocal_254) || func_493(&uLocal_255, 10000, 0))
	{
		return 1;
	}
	return 0;
}

int func_493(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_485(uParam0, bParam2, 0);
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

int func_494(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4264051[iParam0 /*85*/].f_66.f_2 != 1;
	}
	return 0;
}

void func_495(var uParam0, bool bParam1, bool bParam2)
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

void func_496(int iParam0, bool bParam1)
{
	if (HUD::DOES_BLIP_EXIST(iParam0))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(iParam0))
		{
			if (!func_497(iParam0))
			{
				if (unk_0xCE990E643CD9D0E5(Local_63.f_2, 13))
				{
					HUD::HIDE_HUD_AND_RADAR_THIS_FRAME(NETWORK::NET_TO_PED(iParam0));
					PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(iParam0), 17, true);
					PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(iParam0), 6, false);
					PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(iParam0), 1, false);
				}
				else
				{
					if (bParam1)
					{
						HUD::HIDE_HUD_AND_RADAR_THIS_FRAME(NETWORK::NET_TO_PED(iParam0));
					}
					PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(iParam0), 6, true);
					PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(iParam0), 1, true);
				}
			}
		}
		func_246(&iParam0);
	}
}

int func_497(int iParam0)
{
	if (HUD::DOES_BLIP_EXIST(iParam0))
	{
		return STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(NETWORK::NET_TO_PED(iParam0));
	}
	return 1;
}

int func_498(int iParam0)
{
	int iVar0;
	
	if (SYSTEM::VDIST(iParam0, 1))
	{
		iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0, 1);
	}
	if (PED::IS_PED_JACKING(iParam0))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_ENTERING(iParam0);
	}
	if (!MISC::IS_BIT_SET(iVar0))
	{
		if (func_509(bLocal_71))
		{
			iVar0 = ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYER_PED(bLocal_71), 1);
		}
	}
	if (MISC::IS_BIT_SET(iVar0))
	{
		if (func_499(iVar0))
		{
			return 0;
		}
		if (PED::IS_PED_IN_ANY_BOAT(iParam0) || VEHICLE::IS_THIS_MODEL_A_BOAT(MISC::GET_MODEL_DIMENSIONS(iVar0)))
		{
			if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
			{
				return 0;
			}
		}
		if (MISC::GET_MODEL_DIMENSIONS(iVar0) == joaat("trailersmall2"))
		{
			return 0;
		}
	}
	return 1;
}

int func_499(int iParam0)
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

Vector3 func_500(struct<3> Param0)
{
	bool bVar0;
	float fVar1;
	
	bVar0 = SYSTEM::VMAG(Param0);
	if (bVar0 != 0f)
	{
		fVar1 = (1f / bVar0);
		Param0 = { Param0 * Vector(fVar1, fVar1, fVar1) };
	}
	else
	{
		Param0.x = 0f;
		Param0.f_1 = 0f;
		Param0.f_2 = 0f;
	}
	return Param0;
}

var func_501(bool bParam0)
{
	return Global_1590682[bParam0 /*883*/].f_211.f_6;
}

int func_502(bool bParam0)
{
	var uVar0;
	
	uVar0 = func_503(bParam0);
	return uVar0;
}

int func_503(int iParam0)
{
	if (iParam0 > -1)
	{
		if (iParam0 == PLAYER::PLAYER_ID())
		{
			return STATS::_0x0D01D20616FC73FB(-1);
		}
		else if (func_298(iParam0))
		{
			return Global_1590682[iParam0 /*883*/].f_211.f_3;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

float func_504(int iParam0)
{
	if (!unk_0xCE990E643CD9D0E5(Local_63.f_10[iParam0 /*7*/].f_2, 2))
	{
		return 1f;
	}
	return 3f;
}

int func_505(int iParam0, int iParam1)
{
	if (!PED::IS_PED_IN_ANY_POLICE_VEHICLE(iParam0, 0) && !PED::IS_PED_IN_ANY_POLICE_VEHICLE(iParam1, 0))
	{
		if (PED::IS_PED_SITTING_IN_VEHICLE(iParam0, iParam1))
		{
			if (MISC::IS_MINIGAME_IN_PROGRESS(iParam1, -1, 0) == iParam0)
			{
				return -1;
			}
			if (MISC::IS_MINIGAME_IN_PROGRESS(iParam1, 0, 0) == iParam0)
			{
				return 0;
			}
			if (MISC::IS_MINIGAME_IN_PROGRESS(iParam1, 1, 0) == iParam0)
			{
				return 1;
			}
			if (MISC::IS_MINIGAME_IN_PROGRESS(iParam1, 2, 0) == iParam0)
			{
				return 2;
			}
		}
	}
	return -2;
}

int func_506(int iParam0, int iParam1)
{
	int iVar0;
	void fVar1;
	int iVar2;
	int iVar3;
	
	if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(iParam0))
	{
		if (SYSTEM::VDIST(iParam0, iParam1))
		{
			iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0, iParam1);
			if (MISC::IS_BIT_SET(iVar0))
			{
				fVar1 = RECORDING::_STOP_RECORDING_THIS_FRAME(MISC::GET_MODEL_DIMENSIONS(iVar0));
				if (fVar1 == 1)
				{
					iVar3 = -1;
					return iVar3;
				}
				iVar2 = 0;
				while (iVar2 < fVar1)
				{
					iVar3 = (iVar2 - 1);
					if (!SYSTEM::VDIST2(iVar0, iVar3, 0))
					{
						if (MISC::IS_MINIGAME_IN_PROGRESS(iVar0, iVar3, 0) == iParam0)
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

int func_507(int iParam0)
{
	if ((!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(iParam0) && !PED::IS_PED_BEING_STUNNED(iParam0, 0)) && !MISC::IS_PC_VERSION(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_508(int iParam0, int iParam1)
{
	if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1) == 1 || TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1) == 0)
	{
		return 1;
	}
	return 0;
}

int func_509(bool bParam0)
{
	if (unk_0x4577ACD7664F1CF3(bParam0))
	{
		return 0;
	}
	if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(bParam0)))
	{
		return 1;
	}
	return 0;
}

void func_510(int iParam0, bool bParam1)
{
	bool bVar0;
	
	bVar0 = false;
	if (unk_0x871819940BD2E434(iParam0, "AttributeDamage"))
	{
		bVar0 = PED::IS_PED_IN_ANY_VEHICLE(iParam0, "AttributeDamage");
	}
	unk_0xBE20AB8238688965(&bVar0, iParam1);
	DECORATOR::DECOR_SET_INT(iParam0, "AttributeDamage", bVar0);
}

void func_511()
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	
	bVar0 = unk_0xCE990E643CD9D0E5(Local_63.f_2, 6);
	bVar1 = unk_0xCE990E643CD9D0E5(Local_63.f_2, 10);
	func_516();
	if (bLocal_69 != 1)
	{
		if (unk_0xCE990E643CD9D0E5(Local_63.f_3, 12))
		{
			func_513();
		}
	}
	if (SYSTEM::VMAG(fLocal_78))
	{
		func_512(&fLocal_78);
	}
	iVar3 = 0;
	while (iVar3 < func_482(bLocal_69))
	{
		iLocal_67[iVar3] = 0;
		iVar3++;
	}
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		Local_63.f_42 = -1;
		Local_63.f_5 = iLocal_74;
		Local_63.f_6 = iLocal_74;
		Local_63.f_7 = iLocal_74;
		Local_63.f_1 = 0;
		Local_63.f_4 = 0;
		Local_63.f_2 = 0;
		iVar3 = 0;
		while (iVar3 < func_482(bLocal_69))
		{
			bVar2 = unk_0xCE990E643CD9D0E5(Local_63.f_10[iVar3 /*7*/].f_2, 6);
			Local_63.f_10[iVar3 /*7*/].f_2 = 0;
			Local_63.f_10[iVar3 /*7*/].f_6 = -1;
			if (bVar2)
			{
				unk_0xBE20AB8238688965(&(Local_63.f_10[iVar3 /*7*/].f_2), 6);
			}
			iVar3++;
		}
	}
	Local_65[STATS::_GET_PACKED_TITLE_UPDATE_BOOL_STAT_KEY() /*5*/].f_1 = 0;
	Local_65[STATS::_GET_PACKED_TITLE_UPDATE_BOOL_STAT_KEY() /*5*/].f_2 = -1;
	bLocal_66 = false;
	if (bVar0)
	{
		unk_0xBE20AB8238688965(&(Local_63.f_2), 6);
	}
	if (bVar1)
	{
		unk_0xBE20AB8238688965(&(Local_63.f_2), 11);
		unk_0xBE20AB8238688965(&bLocal_66, 8);
	}
	unk_0xBE20AB8238688965(&bLocal_66, 4);
	unk_0xBE20AB8238688965(&bLocal_66, 11);
}

void func_512(float fParam0)
{
	bool bVar0;
	struct<8> Var1;
	
	if (SYSTEM::VMAG(*fParam0))
	{
		unk_0x93370FA10F15BE44(fParam0);
		bVar0 = true;
	}
	if (SYSTEM::VMAG(fParam0->f_1))
	{
		unk_0x93370FA10F15BE44(&(fParam0->f_1));
		bVar0 = true;
	}
	if (MISC::IS_BIT_SET(fParam0->f_7))
	{
		if (!PED::IS_PED_IN_ANY_POLICE_VEHICLE(fParam0->f_7, 0))
		{
			if (HUD::DOES_PED_HAVE_AI_BLIP(fParam0->f_7))
			{
				HUD::SET_PED_HAS_AI_BLIP(fParam0->f_7, false);
			}
		}
		bVar0 = true;
	}
	if (bVar0)
	{
		*fParam0 = { Var1 };
	}
}

void func_513()
{
	switch (bLocal_69)
	{
		case 0:
			func_515(&(Global_1575021[3]));
			break;
		
		case 1:
			func_514();
			break;
	}
}

void func_514()
{
	int iVar0;
	
	if (MISC::SET_BIT())
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(3, Global_1574973[iVar0], -1467815081);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(3, -1467815081, Global_1574973[iVar0]);
			iVar0++;
		}
	}
}

void func_515(var uParam0)
{
	int iVar0;
	
	if (MISC::SET_BIT())
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(3, Global_1574973[iVar0], *uParam0);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(3, *uParam0, Global_1574973[iVar0]);
			iVar0++;
		}
	}
}

void func_516()
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < func_482(bLocal_69))
	{
		bVar1 = false;
		if (bLocal_69 == 0)
		{
			if (!unk_0xCE990E643CD9D0E5(Local_63.f_2, true))
			{
				bVar1 = true;
			}
		}
		func_496(Local_63.f_10[iVar0 /*7*/], bVar1);
		iVar0++;
	}
}

void func_517()
{
	func_518();
	if (bLocal_69 != 1)
	{
		func_486();
	}
}

void func_518()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < func_482(bLocal_69))
	{
		if (HUD::DOES_BLIP_EXIST(Local_63.f_10[iVar0 /*7*/]))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_63.f_10[iVar0 /*7*/]))
			{
				iVar1 = NETWORK::NET_TO_PED(Local_63.f_10[iVar0 /*7*/]);
				if (!PED::IS_PED_IN_ANY_POLICE_VEHICLE(iVar1, 0))
				{
					PED::SET_PED_RESET_FLAG(iVar1, 151, true);
				}
			}
		}
		iVar0++;
	}
	if (Global_2540384.f_1763)
	{
	}
	if (bLocal_69 == 1)
	{
		if (PLAYER::PLAYER_ID() == bLocal_71)
		{
			if (unk_0xCE990E643CD9D0E5(Local_63.f_1, false))
			{
				if (!MISC::IS_INCIDENT_VALID(iLocal_251))
				{
					if (func_6(bLocal_71, 1, 1))
					{
						if (Local_63.f_50)
						{
							MISC::CREATE_INCIDENT_WITH_ENTITY(15, PLAYER::GET_PLAYER_PED(bLocal_71), 4, 0f, &iLocal_251, -1467815081, 0);
						}
						else if (Local_63.f_52)
						{
							MISC::CREATE_INCIDENT_WITH_ENTITY(16, PLAYER::GET_PLAYER_PED(bLocal_71), 4, 0f, &iLocal_251, -1467815081, Local_63.f_53);
						}
						else
						{
							MISC::CREATE_INCIDENT_WITH_ENTITY(14, PLAYER::GET_PLAYER_PED(bLocal_71), 4, 0f, &iLocal_251, 0, 0);
						}
					}
				}
				if (Global_2540384.f_1763)
				{
					if (!unk_0xCE990E643CD9D0E5(Local_65[STATS::_GET_PACKED_TITLE_UPDATE_BOOL_STAT_KEY() /*5*/].f_1, 3))
					{
						unk_0xBE20AB8238688965(&(Local_65[STATS::_GET_PACKED_TITLE_UPDATE_BOOL_STAT_KEY() /*5*/].f_1), 3);
					}
				}
			}
		}
	}
	else if (bLocal_69 == 0)
	{
		if (Local_63.f_42 != -1)
		{
			if (NETWORK::NETWORK_IS_HANDLE_VALID(Local_63.f_10[Local_63.f_42 /*7*/]))
			{
				if (!PED::IS_PED_IN_ANY_POLICE_VEHICLE(NETWORK::NET_TO_PED(Local_63.f_10[Local_63.f_42 /*7*/]), 0) && !func_522(NETWORK::NET_TO_PED(Local_63.f_10[Local_63.f_42 /*7*/])))
				{
					if (Local_63.f_10[Local_63.f_42 /*7*/].f_5 == 3)
					{
						func_519(Local_63.f_10[Local_63.f_42 /*7*/], &fLocal_78, -1082130432, 0, 1, 0, 0, -1, -1, 1);
						if (SYSTEM::VMAG(fLocal_78))
						{
							if (!unk_0xCE990E643CD9D0E5(bLocal_66, 6))
							{
								PED::IS_PED_IN_PARACHUTE_FREE_FALL(fLocal_78, "FM_MGR_BLP");
								unk_0xBE20AB8238688965(&bLocal_66, 6);
							}
						}
					}
				}
				else if (SYSTEM::VMAG(fLocal_78))
				{
					func_512(&fLocal_78);
				}
			}
			if (PLAYER::PLAYER_ID() == bLocal_70)
			{
				if (!unk_0xCE990E643CD9D0E5(bLocal_66, 14))
				{
					if (func_377("MPCT_mugsuc", "LAMAR", 19))
					{
						unk_0xBE20AB8238688965(&bLocal_66, 14);
					}
				}
			}
		}
	}
}

void func_519(int iParam0, float fParam1, float fParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
{
	if (HUD::DOES_BLIP_EXIST(iParam0))
	{
		if (func_521())
		{
			Global_2440049 = PLAYER::PLAYER_ID();
		}
		if (bParam3)
		{
			func_520(NETWORK::NET_TO_PED(iParam0), fParam1, 1, Global_2440049, bParam4, bParam5, fParam2, iParam6, iParam7, iParam8, bParam9);
		}
		else
		{
			func_520(NETWORK::NET_TO_PED(iParam0), fParam1, -1, Global_2440049, bParam4, bParam5, fParam2, iParam6, iParam7, iParam8, bParam9);
		}
	}
	else if (SYSTEM::VMAG(*fParam1))
	{
		func_512(fParam1);
	}
}

int func_520(int iParam0, var uParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, float fParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	if (iParam3 == 0)
	{
		iParam3 = PLAYER::GET_PLAYER_INDEX();
	}
	if (fParam6 < 0f)
	{
		fParam6 = 100f;
	}
	if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(iParam0))
	{
		if (!HUD::DOES_PED_HAVE_AI_BLIP(iParam0))
		{
			if (iParam8 == -1)
			{
				HUD::SET_PED_HAS_AI_BLIP(iParam0, true);
			}
			else
			{
				HUD::_SET_PED_HAS_AI_BLIP_WITH_COLOR(iParam0, true, iParam8);
			}
			uParam1->f_7 = iParam0;
			HUD::SET_PED_AI_BLIP_GANG_ID(iParam0, iParam2);
			HUD::SET_PED_AI_BLIP_NOTICE_RANGE(iParam0, fParam6);
			if (SYSTEM::VMAG(*uParam1))
			{
				HUD::SET_BLIP_PRIORITY(*uParam1, 7);
			}
		}
		if (!iParam9 == -1)
		{
			HUD::_SET_PED_AI_BLIP_SPRITE(iParam0, iParam9);
		}
		HUD::SET_PED_AI_BLIP_FORCED_ON(iParam0, bParam4);
		HUD::SET_PED_AI_BLIP_HAS_CONE(iParam0, bParam5);
		*uParam1 = HUD::_GET_AI_BLIP_2(iParam0);
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
						unk_0x9EFD301E3BE8324E(bParam7);
					}
					else
					{
						HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(bParam7);
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
		if (SYSTEM::VDIST(iParam0, 0))
		{
			uParam1->f_1 = HUD::_GET_AI_BLIP(iParam0);
			if (!unk_0xCE990E643CD9D0E5(uParam1->f_6, 3))
			{
				if (SYSTEM::VMAG(uParam1->f_1))
				{
					if (!iParam8 == -1)
					{
						HUD::SET_BLIP_COLOUR(uParam1->f_1, iParam8);
					}
					if (!CAM::IS_SCREEN_FADED_OUT(bParam7))
					{
						HUD::BEGIN_TEXT_COMMAND_SET_BLIP_NAME("STRING");
						if (bParam10)
						{
							unk_0x9EFD301E3BE8324E(bParam7);
						}
						else
						{
							HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(bParam7);
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

bool func_521()
{
	return Global_1312872;
}

int func_522(int iParam0)
{
	int iVar0;
	bool bVar1;
	
	if (SYSTEM::VDIST(iParam0, 0))
	{
		iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0, 0);
		if (ENTITY::GET_ENTITY_COORDS(iVar0, false))
		{
			if (NETWORK::NET_TO_VEH("MPBitset", 3))
			{
				if (unk_0x871819940BD2E434(iVar0, "MPBitset"))
				{
					bVar1 = PED::IS_PED_IN_ANY_VEHICLE(iVar0, "MPBitset");
				}
				if (unk_0xCE990E643CD9D0E5(bVar1, 12))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_523()
{
	return Local_63;
}

int func_524(int iParam0)
{
	return Local_65[iParam0 /*5*/];
}

void func_525()
{
	if (PLAYER::PLAYER_ID() == bLocal_71)
	{
		if (Global_31118)
		{
			if (!unk_0xCE990E643CD9D0E5(Local_65[bLocal_76 /*5*/].f_1, 4))
			{
				unk_0xBE20AB8238688965(&(Local_65[bLocal_76 /*5*/].f_1), 4);
			}
		}
		else
		{
			VEHICLE::IS_VEHICLE_DRIVEABLE(&(Local_65[bLocal_76 /*5*/].f_1), 4);
		}
	}
}

void func_526()
{
	bool bVar0;
	
	bVar0 = false;
	if (PLAYER::PLAYER_ID() == bLocal_70)
	{
		if (unk_0xCE990E643CD9D0E5(Global_1573339, false))
		{
			VEHICLE::IS_VEHICLE_DRIVEABLE(&Global_1573339, false);
			bVar0 = true;
		}
		if (!unk_0xCE990E643CD9D0E5(Local_65[bLocal_70 /*5*/].f_1, 2))
		{
			if (unk_0xCE990E643CD9D0E5(Local_63.f_1, 11))
			{
				unk_0xBE20AB8238688965(&(Local_65[bLocal_70 /*5*/].f_1), 2);
				bVar0 = true;
			}
		}
		else if (!unk_0xCE990E643CD9D0E5(Local_63.f_1, 11))
		{
			VEHICLE::IS_VEHICLE_DRIVEABLE(&(Local_65[bLocal_70 /*5*/].f_1), 2);
		}
		if (bVar0)
		{
			Local_65[STATS::_GET_PACKED_TITLE_UPDATE_BOOL_STAT_KEY() /*5*/].f_4 = func_530();
			func_527(Local_65[STATS::_GET_PACKED_TITLE_UPDATE_BOOL_STAT_KEY() /*5*/].f_4);
		}
	}
	else if (Local_65[STATS::_GET_PACKED_TITLE_UPDATE_BOOL_STAT_KEY() /*5*/].f_4 != Local_63.f_44)
	{
		Local_65[STATS::_GET_PACKED_TITLE_UPDATE_BOOL_STAT_KEY() /*5*/].f_4 = Local_63.f_44;
		func_527(Local_65[STATS::_GET_PACKED_TITLE_UPDATE_BOOL_STAT_KEY() /*5*/].f_4);
		bVar0 = true;
	}
}

void func_527(int iParam0)
{
	switch (bLocal_69)
	{
		case 0:
			func_529(&(Global_1575021[3]), iParam0);
			break;
		
		case 1:
			func_528(iParam0);
			break;
	}
}

void func_528(bool bParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (unk_0xCE990E643CD9D0E5(iParam0, iVar0))
		{
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, Global_1574973[bVar0], -1467815081);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, -1467815081, Global_1574973[bVar0]);
		}
		else
		{
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(3, Global_1574973[bVar0], -1467815081);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(3, -1467815081, Global_1574973[bVar0]);
		}
		bVar0++;
	}
}

void func_529(var uParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (unk_0xCE990E643CD9D0E5(iParam1, iVar0))
		{
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, Global_1574973[bVar0], *uParam0);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, *uParam0, Global_1574973[bVar0]);
		}
		else
		{
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(3, Global_1574973[bVar0], *uParam0);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(3, *uParam0, Global_1574973[bVar0]);
		}
		bVar0++;
	}
}

int func_530()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 32)
	{
		if (bLocal_69 == 1 || bLocal_69 == 0)
		{
			if (bLocal_70 == NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar1))
			{
				unk_0xBE20AB8238688965(&iVar0, bVar1);
			}
		}
		else if (PLAYER::PLAYER_ID() == NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(bVar1))
		{
			unk_0xBE20AB8238688965(&iVar0, bVar1);
		}
		else if (func_6(NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(bVar1), 0, 1))
		{
			if (func_52(NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(bVar1)))
			{
				unk_0xBE20AB8238688965(&iVar0, bVar1);
			}
		}
		bVar1++;
	}
	return iVar0;
}

void func_531()
{
	switch (bLocal_69)
	{
		case 0:
			if (!unk_0xCE990E643CD9D0E5(bLocal_66, 11))
			{
				if (PLAYER::PLAYER_ID() == bLocal_70 && PLAYER::PLAYER_ID() != bLocal_71)
				{
					if (func_6(bLocal_71, 1, 1))
					{
						func_342("GC_TCK_60", bLocal_71, 0, 0, 0, 1, 0);
						unk_0xBE20AB8238688965(&bLocal_66, 11);
					}
				}
			}
			if (!unk_0xCE990E643CD9D0E5(bLocal_66, 12))
			{
				if (unk_0xCE990E643CD9D0E5(Local_63.f_1, 8))
				{
					if (PLAYER::PLAYER_ID() == bLocal_70 && PLAYER::PLAYER_ID() != bLocal_71)
					{
						if (func_6(bLocal_71, 1, 1))
						{
							func_342("GC_TCK_62", bLocal_71, 0, 0, 0, 1, 0);
							unk_0xBE20AB8238688965(&bLocal_66, 12);
						}
					}
				}
			}
			if (unk_0xCE990E643CD9D0E5(Local_63.f_2, 10))
			{
				if (!unk_0xCE990E643CD9D0E5(bLocal_66, 8))
				{
					if (PLAYER::PLAYER_ID() == bLocal_70 && PLAYER::PLAYER_ID() != bLocal_71)
					{
						if (func_6(bLocal_71, 1, 1))
						{
							func_342("GC_TCK_65", bLocal_71, 0, 0, 0, 1, 0);
							unk_0xBE20AB8238688965(&bLocal_66, 8);
						}
					}
				}
			}
			else if (!unk_0xCE990E643CD9D0E5(bLocal_66, 13))
			{
				if (!unk_0xCE990E643CD9D0E5(Local_63.f_2, 11))
				{
					if (unk_0xCE990E643CD9D0E5(Local_63.f_1, 8))
					{
						if (unk_0xCE990E643CD9D0E5(Local_63.f_2, 6))
						{
							if (PLAYER::PLAYER_ID() == bLocal_70 && PLAYER::PLAYER_ID() != bLocal_71)
							{
								if (func_6(bLocal_71, 1, 1))
								{
									func_342("GC_TCK_63", bLocal_71, 0, 0, 0, 1, 0);
									unk_0xBE20AB8238688965(&bLocal_66, 13);
								}
							}
						}
					}
				}
			}
			break;
		
		case 1:
			if (!unk_0xCE990E643CD9D0E5(bLocal_66, 11))
			{
				if (PLAYER::PLAYER_ID() == bLocal_70)
				{
					if (func_6(bLocal_71, 1, 1) && PLAYER::PLAYER_ID() != bLocal_71)
					{
						if (Local_63.f_50)
						{
							func_342("HS_SUCC", bLocal_71, 0, 0, 0, 1, 0);
						}
						else if (Local_63.f_52)
						{
							func_342("GO_ASS_SUCC", bLocal_71, 0, 0, 0, 1, 0);
						}
						else
						{
							func_342("GC_TCK_70", bLocal_71, 0, 0, 0, 1, 0);
						}
						unk_0xBE20AB8238688965(&bLocal_66, 11);
					}
				}
				else if (PLAYER::PLAYER_ID() == bLocal_71)
				{
					if (func_6(bLocal_70, 1, 1))
					{
						if (Local_63.f_50)
						{
							if (Local_63.f_51)
							{
								func_533("HS_A_SUCC");
							}
							else
							{
								func_342("HS_SENT", bLocal_70, 0, 0, 0, 1, 0);
							}
						}
						else if (Local_63.f_52)
						{
							func_342("GO_ASS_SENT", bLocal_70, 0, 0, 0, 1, 0);
						}
						else
						{
							func_342("GC_TCK_71", bLocal_70, 0, 0, 0, 1, 0);
						}
						unk_0xBE20AB8238688965(&bLocal_66, 11);
					}
				}
			}
			if (!unk_0xCE990E643CD9D0E5(bLocal_66, 10))
			{
				if (unk_0xCE990E643CD9D0E5(Local_63.f_1, false))
				{
					if (unk_0xCE990E643CD9D0E5(Local_63.f_3, 6))
					{
						if (PLAYER::PLAYER_ID() == bLocal_70 && PLAYER::PLAYER_ID() != bLocal_71)
						{
							if (func_6(bLocal_71, 0, 1))
							{
								func_532(-1);
								if (Local_63.f_50)
								{
									if (!Local_63.f_51)
									{
										func_342("HS_KILLED", bLocal_71, 0, 0, 0, 1, 0);
									}
								}
								else if (Local_63.f_52)
								{
									func_342("GO_ASS_KILL", bLocal_71, 0, 0, 0, 1, 0);
								}
								else
								{
									func_342("GC_TCK_73", bLocal_71, 0, 0, 0, 1, 0);
								}
								unk_0xBE20AB8238688965(&bLocal_66, 10);
							}
						}
					}
				}
			}
			if (!unk_0xCE990E643CD9D0E5(bLocal_66, 9))
			{
				if (unk_0xCE990E643CD9D0E5(Local_63.f_1, false))
				{
					if (unk_0xCE990E643CD9D0E5(Local_63.f_3, 7))
					{
						if (PLAYER::PLAYER_ID() == bLocal_70 && PLAYER::PLAYER_ID() != bLocal_71)
						{
							if (func_6(bLocal_71, 0, 1))
							{
								if (Local_63.f_50)
								{
									func_342("HS_ESCAPED", bLocal_71, 0, 0, 0, 1, 0);
								}
								else if (Local_63.f_52)
								{
									func_342("GO_ASS_ESC", bLocal_71, 0, 0, 0, 1, 0);
								}
								else
								{
									func_342("GC_TCK_75", bLocal_71, 0, 0, 0, 1, 0);
								}
								unk_0xBE20AB8238688965(&bLocal_66, 9);
							}
						}
					}
				}
			}
			break;
	}
}

void func_532(bool bParam0)
{
	if (Global_1574407)
	{
		if (Global_1574411 && Global_1590682[PLAYER::PLAYER_ID() /*883*/] != 148)
		{
			if (Global_1573907.f_14 == NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iParam0))
			{
				Global_1626952++;
			}
		}
		else
		{
			Global_1626952++;
		}
	}
}

int func_533(char* sParam0)
{
	int iVar0;
	
	iVar0 = -1;
	HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
	iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true);
	func_343(0, sParam0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

void func_534()
{
	if (MISC::ARE_PROFILE_SETTINGS_VALID(false, 0) != Local_63.f_45)
	{
		if (func_542(Local_63.f_45, 0, 1))
		{
			if (NETWORK::GET_NUM_CREATED_MISSION_PEDS(false) <= Local_63.f_45)
			{
				NETWORK::RESERVE_NETWORK_MISSION_PEDS(Local_63.f_45);
			}
		}
	}
	if (MISC::GET_PROFILE_SETTING(0, 0) != Local_63.f_46)
	{
		if (func_541(Local_63.f_45, 0, 1))
		{
			if (NETWORK::GET_NUM_CREATED_MISSION_VEHICLES(false) <= Local_63.f_46)
			{
				NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(Local_63.f_46);
			}
		}
	}
	if (NETWORK::NETWORK_IS_SIGNED_IN(false, 0) != Local_63.f_47)
	{
		if (func_535(Local_63.f_45, 0, 1))
		{
			if (unk_0xF703AD2429E00118(0) <= Local_63.f_47)
			{
				NETWORK::RESERVE_NETWORK_MISSION_OBJECTS(Local_63.f_47);
			}
		}
	}
}

bool func_535(int iParam0, bool bParam1, bool bParam2)
{
	return func_536(2, iParam0, 1, bParam1, bParam2);
}

int func_536(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xCE990E643CD9D0E5(Global_1389439, false))
	{
		return 0;
	}
	if ((bParam2 && !bParam3) && iParam1 <= (func_540(iParam0) - func_539(iParam0, 0)))
	{
		return 1;
	}
	else
	{
		if (bParam3)
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_539(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_540(iParam0) - func_538(iParam0));
		}
		else
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_539(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_540(iParam0) - func_539(iParam0, 1));
		}
		if (!bParam4 && Global_1590682[PLAYER::PLAYER_ID() /*883*/] != 3)
		{
			iVar1 = (iVar1 - func_537(iParam0));
		}
		if (iVar0 < iVar1)
		{
			return 1;
		}
	}
	return 0;
}

int func_537(int iParam0)
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

int func_538(int iParam0)
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

int func_539(int iParam0, bool bParam1)
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

int func_540(int iParam0)
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

bool func_541(int iParam0, bool bParam1, bool bParam2)
{
	return func_536(1, iParam0, 1, bParam1, bParam2);
}

bool func_542(int iParam0, bool bParam1, bool bParam2)
{
	return func_536(0, iParam0, 1, bParam1, bParam2);
}

void func_543()
{
	if (Local_63.f_50)
	{
		if (PLAYER::PLAYER_ID() == bLocal_70)
		{
			func_545(9);
		}
		else if (PLAYER::PLAYER_ID() == bLocal_71)
		{
			func_545(13);
		}
	}
	else if (Local_63.f_52)
	{
	}
	func_544();
}

void func_544()
{
	ENTITY::STOP_ENTITY_ANIM();
}

void func_545(bool bParam0)
{
	VEHICLE::IS_VEHICLE_DRIVEABLE(&(Global_1630317[PLAYER::PLAYER_ID() /*595*/].f_11.f_5), bParam0);
}

int func_546()
{
	var uVar0;
	
	func_553(&uVar0);
	if (Global_1312872 == 0)
	{
		if (!MISC::SET_BIT())
		{
			return 1;
		}
	}
	if (func_552())
	{
		return 1;
	}
	if (Global_2464493)
	{
		return 1;
	}
	if (func_551())
	{
		return 1;
	}
	if (func_550(159))
	{
		if (!func_549())
		{
			return 1;
		}
	}
	if (func_550(157))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_SESSION_IS_IN_VOICE_SESSION())
	{
		return 1;
	}
	if (func_547() != 0)
	{
		if (INTERIOR::GET_INTERIOR_AT_COORDS(func_547()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_547()
{
	switch (func_120())
	{
		case 0:
			return func_548();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_548()
{
	switch (Global_2464595)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

bool func_549()
{
	return Global_2451787.f_696;
}

int func_550(int iParam0)
{
	if (unk_0x16F1FCCC54559709(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_551()
{
	return Global_2462250;
}

bool func_552()
{
	return Global_2451787.f_691;
}

void func_553(var uParam0)
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
					func_554(iVar0);
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

void func_554(int iParam0)
{
	struct<3> Var0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	if (unk_0x477FAFFE21935947(1, iParam0, &Var0, 3))
	{
		if (func_6(Var0.f_1, 1, 1))
		{
			iVar1 = PLAYER::GET_PLAYER_PED(Var0.f_1);
			if (MISC::IS_BIT_SET(iVar1))
			{
				if (SYSTEM::VDIST(iVar1, 0))
				{
					iVar2 = ENTITY::GET_ENTITY_MODEL(iVar1, 0);
					if (VEHICLE::REMOVE_VEHICLE_WINDOW(iVar2, Var0.f_2) && NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
					{
						if (func_555(iVar2, &bVar3))
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

int func_555(int iParam0, var uParam1)
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

void func_556()
{
	SYSTEM::WAIT(0);
}

void func_557(struct<21> Param0)
{
	func_563(32, Param0);
	func_562(0, -1, 0);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(&Local_63, 56);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_65, 161);
	WEAPON::GET_WEAPONTYPE_GROUP(0);
	if (!func_561())
	{
		func_263();
	}
	bLocal_69 = Param0.f_16;
	bLocal_70 = NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(Param0.f_17);
	if (AUDIO::PLAY_STREAM_FROM_VEHICLE(bLocal_70))
	{
	}
	bLocal_71 = NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(Param0.f_18);
	if (AUDIO::PLAY_STREAM_FROM_VEHICLE(bLocal_71))
	{
		fLocal_72 = AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT(DATAFILE::DATADICT_GET_ARRAY(bLocal_71));
	}
	if (func_560(bLocal_70, 9) && bLocal_69 == 1)
	{
		Local_63.f_50 = 1;
		if (func_560(bLocal_71, 13))
		{
			Local_63.f_51 = 1;
		}
	}
	if (bLocal_69 == 1)
	{
		if (func_559(bLocal_70))
		{
			Local_63.f_52 = 1;
			Local_63.f_53 = func_558(bLocal_70);
		}
	}
	Local_73 = { Param0.f_10 };
	if (bLocal_69 == 1)
	{
		if (PLAYER::PLAYER_ID() == bLocal_70)
		{
			unk_0xBE20AB8238688965(&Global_1573339, false);
		}
	}
	Global_1655300 = 0;
	Global_1655301 = 0;
	if (bLocal_69 == 1)
	{
		Global_2540384.f_1763 = 0;
	}
	Local_65[STATS::_GET_PACKED_TITLE_UPDATE_BOOL_STAT_KEY() /*5*/] = 0;
}

var func_558(bool bParam0)
{
	return Global_1590682[bParam0 /*883*/].f_183.f_4;
}

bool func_559(bool bParam0)
{
	return Global_1590682[bParam0 /*883*/].f_183 != func_13();
}

bool func_560(bool bParam0, bool bParam1)
{
	return unk_0xCE990E643CD9D0E5(Global_1630317[bParam0 /*595*/].f_11.f_5, iParam1);
}

int func_561()
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
		if (func_552())
		{
			return 0;
		}
		if (func_550(157))
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

int func_562(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_544();
			}
			else
			{
				return 0;
			}
		}
		if (!func_521())
		{
			if (iParam0 == 0)
			{
				if (!MISC::SET_BIT())
				{
					if (!bParam2)
					{
						func_544();
					}
					else
					{
						return 0;
					}
				}
				if (func_552())
				{
					if (!bParam2)
					{
						func_544();
					}
					else
					{
						return 0;
					}
				}
				if (func_550(157))
				{
					if (!bParam2)
					{
						func_544();
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
					func_544();
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
				func_544();
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
			func_544();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_563(int* iParam0, struct<17> Param1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	if (!MISC::SET_BIT())
	{
		func_544();
	}
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(iParam0, 0, Param1.f_16);
}

