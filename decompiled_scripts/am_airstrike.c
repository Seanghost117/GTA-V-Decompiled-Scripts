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
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
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
	bool bLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	bool bLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	struct<3> Local_60 = { 0, 0, 0 } ;
	struct<3> Local_61 = { 0, 0, 0 } ;
	float fLocal_62 = 0f;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 16;
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
	int iLocal_234 = 0;
	int iLocal_235 = 0;
	int iLocal_236 = 0;
	var uLocal_237 = 0;
	struct<57> Local_238 = { 0, 0, 0, -1281684762, 0, 0, -163714847, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_239 = 0;
	struct<5> Local_240[2];
	struct<21> Local_241 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
#endregion

void __EntryFunction__()
{
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
	fLocal_24 = 80f;
	fLocal_25 = 140f;
	fLocal_26 = 180f;
	fLocal_29 = 0f;
	fLocal_33 = -0.0375f;
	fLocal_34 = 0.17f;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	if (MISC::SET_BIT())
	{
		func_118(ScriptParam_241);
	}
	while (true)
	{
		func_117();
		if (func_106())
		{
			func_102();
		}
		if (MISC::SET_BIT())
		{
			func_101();
			switch (func_100(NETWORK::PARTICIPANT_ID_TO_INT()))
			{
				case 0:
					if (func_99() > 0)
					{
						Local_240[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/] = 2;
					}
					break;
				
				case 2:
					func_98();
					if (func_99() == 3)
					{
						Local_240[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/] = 3;
					}
					break;
				
				case 3:
					func_102();
					break;
			}
			if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
			{
				switch (func_99())
				{
					case 0:
						Local_238 = 2;
						break;
					
					case 2:
						func_1();
						break;
					
					case 3:
						break;
					}
				}
		}
	}
}

void func_1()
{
	switch (Local_238.f_1)
	{
		case 0:
			func_52();
			break;
		
		case 1:
			func_51();
			break;
	}
	if (Local_238.f_2.f_2 == 3 && iLocal_57 == 0)
	{
		Local_238 = 3;
	}
	func_44();
	if (Local_238.f_53 && Local_238.f_50 < 10)
	{
		func_13();
	}
	if (Local_238.f_50 >= 10)
	{
		if (!func_12(&uLocal_65))
		{
			func_11(&uLocal_65, 0, 0);
		}
		else if (func_10(&uLocal_65, 10000, 0))
		{
			Local_238 = 3;
		}
	}
	if (func_9())
	{
		Local_238 = 3;
	}
	if (!unk_0xCE990E643CD9D0E5(Global_42804, 10))
	{
		if (Local_238.f_55 == 1)
		{
			if (!Local_238.f_56)
			{
				if (((!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() || func_8("AIRSTRIKE_1")) || func_8("AIRSTRIKE_2")) || func_8("AIRSTRIKE_4"))
				{
					func_7("AIRSTRIKE_3", -1);
					Local_238.f_56 = 1;
				}
			}
		}
	}
	if (bLocal_52)
	{
		if (!func_4(PLAYER::PLAYER_ID(), 1, 0))
		{
			Local_238 = 3;
		}
	}
	else if (func_4(PLAYER::PLAYER_ID(), 1, 0) || func_3())
	{
		Local_238 = 3;
	}
	if (OBJECT::ADD_DOOR_TO_SYSTEM())
	{
		Local_238 = 3;
	}
	if (Global_2515847.f_224 || func_2(PLAYER::PLAYER_ID()))
	{
		Local_238 = 3;
	}
}

int func_2(bool bParam0)
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

bool func_3()
{
	return unk_0xCE990E643CD9D0E5(Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_39.f_18, 0);
}

int func_4(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_5(bParam0))
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

bool func_5(int iParam0)
{
	return func_6(iParam0);
}

bool func_6(int iParam0)
{
	return unk_0xCE990E643CD9D0E5(Global_1590682[iParam0 /*883*/].f_13.f_1, 0);
}

void func_7(char* sParam0, int iParam1)
{
	unk_0x17751E107423AFE9(sParam0);
	FILES::GET_DLC_VEHICLE_FLAGS(0, 0, 1, iParam1);
}

bool func_8(char* sParam0)
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

bool func_9()
{
	return Global_1312436;
}

int func_10(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_11(uParam0, bParam2, 0);
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

void func_11(var uParam0, bool bParam1, bool bParam2)
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

bool func_12(var uParam0)
{
	return uParam0->f_1;
}

void func_13()
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2;
	int iVar3;
	
	iVar0 = unk_0x9B0761B4C3EB8BC7();
	iVar3 = 200;
	if (unk_0xCE990E643CD9D0E5(Global_42804, 10))
	{
		iVar0 = 0;
		iVar3 = 300;
	}
	if (func_43(Local_61))
	{
		if (func_41(Local_238.f_2))
		{
			Local_61 = { NETWORK::NETWORK_ARE_HANDLES_THE_SAME(unk_0x770D3B2B4702434A(Local_238.f_2), 1) };
			Local_61.f_2 = (Local_61.f_2 - 5f);
		}
	}
	switch (Local_238.f_50)
	{
		case 0:
			if (!func_12(&(Local_238.f_51)))
			{
				if (!unk_0xCE990E643CD9D0E5(uLocal_237, Local_238.f_50))
				{
					Var1 = { Local_240[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2 };
					Var1.f_2 = Local_61.f_2;
					Var2 = { Local_240[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2 };
					Var2 = { Var2 + Vector(0f, 0.1f, 0.1f) };
					MISC::GET_GROUND_Z_FOR_3D_COORD(Var2 + Vector(10f, 0f, 0f), &(Var2.f_2), false, false);
					Var2.f_2 = (Var2.f_2 - 25f);
					MISC::SHOOT_SINGLE_BULLET_BETWEEN_COORDS_IGNORE_ENTITY_NEW(Var1, Var2, iVar3, true, joaat("weapon_airstrike_rocket"), unk_0x9B0761B4C3EB8BC7(), true, false, -1f, iVar0, true, true, false, false, 0, 0, 0);
					func_11(&(Local_238.f_51), 0, 0);
					iLocal_57 = 1;
					unk_0xBE20AB8238688965(&uLocal_237, Local_238.f_50);
					if (func_38())
					{
						func_15(&uLocal_69, "HS4FAUD", "HS4F_SAAIP1", 12, 0, 0, 0);
					}
				}
			}
			else if (func_10(&(Local_238.f_51), 750, 0))
			{
				func_14(&(Local_238.f_51));
				Local_238.f_50++;
			}
			break;
		
		case 1:
			if (!func_12(&(Local_238.f_51)))
			{
				if (!unk_0xCE990E643CD9D0E5(uLocal_237, Local_238.f_50))
				{
					Var1 = { Local_240[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2 + Vector(0f, 5f, 5f) };
					Var1.f_2 = Local_61.f_2;
					Var2 = { Local_240[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2 + Vector(0f, 5f, 5f) };
					Var2 = { Var2 + Vector(0f, 0.1f, 0.1f) };
					MISC::GET_GROUND_Z_FOR_3D_COORD(Var2 + Vector(10f, 0f, 0f), &(Var2.f_2), false, false);
					Var2.f_2 = (Var2.f_2 - 25f);
					MISC::SHOOT_SINGLE_BULLET_BETWEEN_COORDS_IGNORE_ENTITY_NEW(Var1, Var2, iVar3, true, joaat("weapon_airstrike_rocket"), NETWORK::NET_TO_PED(Local_238.f_2.f_3), true, false, -1f, iVar0, true, false, false, false, 0, 0, 0);
					func_11(&(Local_238.f_51), 0, 0);
					unk_0xBE20AB8238688965(&uLocal_237, Local_238.f_50);
				}
			}
			else if (func_10(&(Local_238.f_51), 500, 0))
			{
				func_14(&(Local_238.f_51));
				Local_238.f_50++;
			}
			break;
		
		case 2:
			if (!func_12(&(Local_238.f_51)))
			{
				if (!unk_0xCE990E643CD9D0E5(uLocal_237, Local_238.f_50))
				{
					Var1 = { Local_240[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2 + Vector(0f, -5f, -5f) };
					Var1.f_2 = Local_61.f_2;
					Var2 = { Local_240[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2 + Vector(0f, -5f, -5f) };
					Var2 = { Var2 + Vector(0f, 0.1f, 0.1f) };
					MISC::GET_GROUND_Z_FOR_3D_COORD(Var2 + Vector(10f, 0f, 0f), &(Var2.f_2), false, false);
					Var2.f_2 = (Var2.f_2 - 25f);
					MISC::SHOOT_SINGLE_BULLET_BETWEEN_COORDS_IGNORE_ENTITY_NEW(Var1, Var2, iVar3, true, joaat("weapon_airstrike_rocket"), NETWORK::NET_TO_PED(Local_238.f_2.f_3), true, false, -1f, iVar0, true, false, false, false, 0, 0, 0);
					func_11(&(Local_238.f_51), 0, 0);
					unk_0xBE20AB8238688965(&uLocal_237, Local_238.f_50);
				}
			}
			else if (func_10(&(Local_238.f_51), 500, 0))
			{
				func_14(&(Local_238.f_51));
				Local_238.f_50++;
			}
			break;
		
		case 3:
			if (!func_12(&(Local_238.f_51)))
			{
				if (!unk_0xCE990E643CD9D0E5(uLocal_237, Local_238.f_50))
				{
					Var1 = { Local_240[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2 + Vector(0f, 5f, -5f) };
					Var1.f_2 = Local_61.f_2;
					Var2 = { Local_240[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2 + Vector(0f, 5f, -5f) };
					Var2 = { Var2 + Vector(0f, 0.1f, 0.1f) };
					MISC::GET_GROUND_Z_FOR_3D_COORD(Var2 + Vector(10f, 0f, 0f), &(Var2.f_2), false, false);
					Var2.f_2 = (Var2.f_2 - 25f);
					MISC::SHOOT_SINGLE_BULLET_BETWEEN_COORDS_IGNORE_ENTITY_NEW(Var1, Var2, iVar3, true, joaat("weapon_airstrike_rocket"), NETWORK::NET_TO_PED(Local_238.f_2.f_3), true, false, -1f, iVar0, true, false, false, false, 0, 0, 0);
					func_11(&(Local_238.f_51), 0, 0);
					unk_0xBE20AB8238688965(&uLocal_237, Local_238.f_50);
				}
			}
			else if (func_10(&(Local_238.f_51), 750, 0))
			{
				func_14(&(Local_238.f_51));
				Local_238.f_50++;
			}
			break;
		
		case 4:
			if (!func_12(&(Local_238.f_51)))
			{
				if (!unk_0xCE990E643CD9D0E5(uLocal_237, Local_238.f_50))
				{
					Var1 = { Local_240[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2 + Vector(0f, -5f, 5f) };
					Var1.f_2 = Local_61.f_2;
					Var2 = { Local_240[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2 + Vector(0f, -5f, 5f) };
					Var2 = { Var2 + Vector(0f, 0.1f, 0.1f) };
					MISC::GET_GROUND_Z_FOR_3D_COORD(Var2 + Vector(10f, 0f, 0f), &(Var2.f_2), false, false);
					Var2.f_2 = (Var2.f_2 - 25f);
					MISC::SHOOT_SINGLE_BULLET_BETWEEN_COORDS_IGNORE_ENTITY_NEW(Var1, Var2, iVar3, true, joaat("weapon_airstrike_rocket"), NETWORK::NET_TO_PED(Local_238.f_2.f_3), true, false, -1f, iVar0, true, false, false, false, 0, 0, 0);
					func_11(&(Local_238.f_51), 0, 0);
					unk_0xBE20AB8238688965(&uLocal_237, Local_238.f_50);
				}
			}
			else if (func_10(&(Local_238.f_51), 500, 0))
			{
				func_14(&(Local_238.f_51));
				Local_238.f_50++;
			}
			break;
		
		case 5:
			if (!func_12(&(Local_238.f_51)))
			{
				if (!unk_0xCE990E643CD9D0E5(uLocal_237, Local_238.f_50))
				{
					Var1 = { Local_240[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2 + Vector(0f, 5f, 10f) };
					Var1.f_2 = Local_61.f_2;
					Var2 = { Local_240[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2 + Vector(0f, 5f, 10f) };
					Var2 = { Var2 + Vector(0f, 0.1f, 0.1f) };
					MISC::GET_GROUND_Z_FOR_3D_COORD(Var2 + Vector(10f, 0f, 0f), &(Var2.f_2), false, false);
					Var2.f_2 = (Var2.f_2 - 25f);
					MISC::SHOOT_SINGLE_BULLET_BETWEEN_COORDS_IGNORE_ENTITY_NEW(Var1, Var2, iVar3, true, joaat("weapon_airstrike_rocket"), NETWORK::NET_TO_PED(Local_238.f_2.f_3), true, false, -1f, iVar0, true, false, false, false, 0, 0, 0);
					func_11(&(Local_238.f_51), 0, 0);
					unk_0xBE20AB8238688965(&uLocal_237, Local_238.f_50);
				}
			}
			else if (func_10(&(Local_238.f_51), 750, 0))
			{
				func_14(&(Local_238.f_51));
				Local_238.f_50++;
			}
			break;
		
		case 6:
			if (!func_12(&(Local_238.f_51)))
			{
				if (!unk_0xCE990E643CD9D0E5(uLocal_237, Local_238.f_50))
				{
					Var1 = { Local_240[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2 + Vector(0f, 10f, 10f) };
					Var1.f_2 = Local_61.f_2;
					Var2 = { Local_240[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2 + Vector(0f, 10f, 10f) };
					Var2 = { Var2 + Vector(0f, 0.1f, 0.1f) };
					MISC::GET_GROUND_Z_FOR_3D_COORD(Var2 + Vector(10f, 0f, 0f), &(Var2.f_2), false, false);
					Var2.f_2 = (Var2.f_2 - 25f);
					MISC::SHOOT_SINGLE_BULLET_BETWEEN_COORDS_IGNORE_ENTITY_NEW(Var1, Var2, iVar3, true, joaat("weapon_airstrike_rocket"), NETWORK::NET_TO_PED(Local_238.f_2.f_3), true, false, -1f, iVar0, true, false, false, false, 0, 0, 0);
					func_11(&(Local_238.f_51), 0, 0);
					unk_0xBE20AB8238688965(&uLocal_237, Local_238.f_50);
				}
			}
			else if (func_10(&(Local_238.f_51), 500, 0))
			{
				func_14(&(Local_238.f_51));
				Local_238.f_50++;
			}
			break;
		
		case 7:
			if (!func_12(&(Local_238.f_51)))
			{
				if (!unk_0xCE990E643CD9D0E5(uLocal_237, Local_238.f_50))
				{
					Var1 = { Local_240[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2 + Vector(0f, -10f, -10f) };
					Var1.f_2 = Local_61.f_2;
					Var2 = { Local_240[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2 + Vector(0f, -10f, -10f) };
					Var2 = { Var2 + Vector(0f, 0.1f, 0.1f) };
					MISC::GET_GROUND_Z_FOR_3D_COORD(Var2 + Vector(10f, 0f, 0f), &(Var2.f_2), false, false);
					Var2.f_2 = (Var2.f_2 - 25f);
					MISC::SHOOT_SINGLE_BULLET_BETWEEN_COORDS_IGNORE_ENTITY_NEW(Var1, Var2, iVar3, true, joaat("weapon_airstrike_rocket"), NETWORK::NET_TO_PED(Local_238.f_2.f_3), true, false, -1f, iVar0, true, false, false, false, 0, 0, 0);
					func_11(&(Local_238.f_51), 0, 0);
					unk_0xBE20AB8238688965(&uLocal_237, Local_238.f_50);
				}
			}
			else if (func_10(&(Local_238.f_51), 500, 0))
			{
				func_14(&(Local_238.f_51));
				Local_238.f_50++;
			}
			break;
		
		case 8:
			if (!func_12(&(Local_238.f_51)))
			{
				if (!unk_0xCE990E643CD9D0E5(uLocal_237, Local_238.f_50))
				{
					Var1 = { Local_240[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2 + Vector(0f, 10f, -10f) };
					Var1.f_2 = Local_61.f_2;
					Var2 = { Local_240[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2 + Vector(0f, 10f, -10f) };
					Var2 = { Var2 + Vector(0f, 0.1f, 0.1f) };
					MISC::GET_GROUND_Z_FOR_3D_COORD(Var2 + Vector(10f, 0f, 0f), &(Var2.f_2), false, false);
					Var2.f_2 = (Var2.f_2 - 25f);
					MISC::SHOOT_SINGLE_BULLET_BETWEEN_COORDS_IGNORE_ENTITY_NEW(Var1, Var2, iVar3, true, joaat("weapon_airstrike_rocket"), NETWORK::NET_TO_PED(Local_238.f_2.f_3), true, false, -1f, iVar0, true, false, false, false, 0, 0, 0);
					func_11(&(Local_238.f_51), 0, 0);
					unk_0xBE20AB8238688965(&uLocal_237, Local_238.f_50);
				}
			}
			else if (func_10(&(Local_238.f_51), 500, 0))
			{
				func_14(&(Local_238.f_51));
				Local_238.f_50++;
			}
			break;
		
		case 9:
			if (!func_12(&(Local_238.f_51)))
			{
				if (!unk_0xCE990E643CD9D0E5(uLocal_237, Local_238.f_50))
				{
					Var1 = { Local_240[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2 + Vector(0f, -10f, 10f) };
					Var1.f_2 = Local_61.f_2;
					Var2 = { Local_240[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2 + Vector(0f, -10f, 10f) };
					Var2 = { Var2 + Vector(0f, 0.1f, 0.1f) };
					MISC::GET_GROUND_Z_FOR_3D_COORD(Var2 + Vector(10f, 0f, 0f), &(Var2.f_2), false, false);
					Var2.f_2 = (Var2.f_2 - 25f);
					MISC::SHOOT_SINGLE_BULLET_BETWEEN_COORDS_IGNORE_ENTITY_NEW(Var1, Var2, iVar3, true, joaat("weapon_airstrike_rocket"), NETWORK::NET_TO_PED(Local_238.f_2.f_3), true, false, -1f, iVar0, true, false, false, false, 0, 0, 0);
					Local_238.f_50++;
					iLocal_57 = 0;
					unk_0xBE20AB8238688965(&uLocal_237, Local_238.f_50);
				}
			}
			break;
	}
}

void func_14(var uParam0)
{
	uParam0->f_1 = 0;
}

int func_15(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_37(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_16(sParam2, iParam3, 0);
}

int func_16(char* sParam0, int iParam1, bool bParam2)
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
					func_36();
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
		if (func_35(8, -1))
		{
			return 0;
		}
		Global_21081 = { Global_21075 };
		func_34();
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
				func_26();
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
				if (func_25())
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
			if (func_24())
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
			func_23();
			Global_21015 = bParam2;
		}
		Global_21007 = iParam1;
		StringCopy(&Global_20624, sParam0, 24);
		Global_19871 = 0;
		func_22();
		func_17();
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
		func_36();
	}
	return 0;
}

void func_17()
{
	if (!func_18())
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

int func_18()
{
	if (!Global_262145.f_28160)
	{
		return 0;
	}
	if (!Global_76833)
	{
		return 0;
	}
	if (PLAYER::PLAYER_ID() == func_21())
	{
		return 0;
	}
	if (func_19(PLAYER::PLAYER_ID()))
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

bool func_19(bool bParam0)
{
	return func_20(bParam0, 20);
}

bool func_20(int iParam0, int iParam1)
{
	return unk_0xCE990E643CD9D0E5(Global_1630317[iParam0 /*595*/].f_11.f_4, iParam1);
}

int func_21()
{
	return -1;
}

void func_22()
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

void func_23()
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

int func_24()
{
	if (Global_19681.f_1 == 1 || Global_19681.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_25()
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

void func_26()
{
	if (func_33(14))
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
		Global_19681 = func_27();
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

var func_27()
{
	func_28();
	return Global_111858.f_2359.f_539.f_4321;
}

void func_28()
{
	int iVar0;
	
	if (MISC::IS_BIT_SET(unk_0x9B0761B4C3EB8BC7()))
	{
		if (func_31(Global_111858.f_2359.f_539.f_4321) != MISC::GET_MODEL_DIMENSIONS(unk_0x9B0761B4C3EB8BC7()))
		{
			iVar0 = func_30(unk_0x9B0761B4C3EB8BC7());
			if (func_29(iVar0) && (!func_33(14) || Global_110809))
			{
				if (Global_111858.f_2359.f_539.f_4321 != iVar0 && func_29(Global_111858.f_2359.f_539.f_4321))
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

bool func_29(int iParam0)
{
	return iParam0 < 3;
}

int func_30(int iParam0)
{
	int iVar0;
	void fVar1;
	
	if (MISC::IS_BIT_SET(iParam0))
	{
		fVar1 = MISC::GET_MODEL_DIMENSIONS(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_31(iVar0) == fVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_31(int iParam0)
{
	if (func_29(iParam0))
	{
		return func_32(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_32(int iParam0)
{
	return Global_1848[iParam0 /*29*/];
}

bool func_33(int iParam0)
{
	return Global_41631 == iParam0;
}

void func_34()
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

bool func_35(int iParam0, int iParam1)
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

void func_36()
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

void func_37(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
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

bool func_38()
{
	return func_39(PLAYER::PLAYER_ID());
}

bool func_39(int iParam0)
{
	return func_40(&(Global_2425869[iParam0 /*443*/].f_429), 0);
}

bool func_40(var uParam0, int iParam1)
{
	return unk_0xCE990E643CD9D0E5(*uParam0, iParam1);
}

int func_41(int iParam0)
{
	if (HUD::DOES_BLIP_EXIST(iParam0))
	{
		return !func_42(unk_0x770D3B2B4702434A(iParam0));
	}
	return 0;
}

int func_42(int iParam0)
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

int func_43(struct<3> Param0)
{
	if ((Param0.x == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

void func_44()
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2;
	bool bVar3;
	int iVar4;
	
	if (func_41(Local_238.f_2))
	{
		iVar0 = unk_0x770D3B2B4702434A(Local_238.f_2);
		Var2 = { NETWORK::NETWORK_ARE_HANDLES_THE_SAME(iVar0, 1) };
	}
	if (!iLocal_59)
	{
		if (!func_43(Local_240[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2))
		{
			Var1 = { Local_240[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2 };
		}
		else if (func_50(PLAYER::PLAYER_ID(), 1, 1))
		{
			Var1 = { NETWORK::NETWORK_ARE_HANDLES_THE_SAME(unk_0x9B0761B4C3EB8BC7(), 1) };
		}
	}
	if (iLocal_58 && !unk_0xCE990E643CD9D0E5(Global_42804, 10))
	{
		if (!iLocal_59)
		{
			if (func_41(Local_238.f_2))
			{
				if (!unk_0xC2169C00B643278B(iVar0, Local_60, 75f, 75f, 1000f, 0, 1, 0))
				{
					fLocal_62 = HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Var2, Var1, 0);
				}
				else
				{
					iLocal_59 = 1;
				}
			}
			else
			{
				iLocal_59 = 1;
			}
		}
		else
		{
			fLocal_62 = (fLocal_62 - 3.75f);
		}
		bVar3 = SYSTEM::FLOOR(fLocal_62);
		if (fLocal_62 <= 200f)
		{
			iVar4 = 6;
		}
		else
		{
			iVar4 = 1;
		}
		if (fLocal_62 >= 0f)
		{
			func_45(bVar3, "AIRSTRIKE_2", -1, iVar4, 2, 0, "AIRSTRIKE_6", 0, 0f, 0, 0, iVar4, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
		}
	}
}

void func_45(bool bParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_49(6, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1378744.f_1 = 1;
		func_48(6, iVar0);
		Global_1378744.f_3955[iVar0] = bParam0;
		StringCopy(&(Global_1378744.f_3955.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1378744.f_3955.f_183[iVar0] = iParam3;
		Global_1378744.f_3955.f_172[iVar0] = iParam2;
		Global_1378744.f_3955.f_260[iVar0] = iParam4;
		Global_1378744.f_3955.f_271[iVar0] = iParam5;
		StringCopy(&(Global_1378744.f_3955.f_282[iVar0 /*16*/]), sParam6, 64);
		Global_1378744.f_3955.f_443[iVar0] = iParam7;
		Global_1378744.f_3955.f_454[iVar0] = fParam8;
		Global_1378744.f_3955.f_497[iVar0] = iParam9;
		Global_1378744.f_3955.f_508[iVar0] = iParam10;
		Global_1378744.f_3955.f_205[iVar0] = iParam11;
		Global_1378744.f_3955.f_216[iVar0] = iParam12;
		Global_1378744.f_3955.f_227[iVar0] = iParam13;
		Global_1378744.f_3955.f_238[iVar0] = iParam14;
		Global_1378744.f_3955.f_249[iVar0] = iParam15;
		Global_1378744.f_3955.f_519[iVar0] = iParam16;
		Global_1378744.f_3955.f_530[iVar0] = iParam17;
		Global_1378744.f_3955.f_541[iVar0] = iParam18;
		Global_1378744.f_3955.f_552[iVar0] = iParam19;
		Global_1378744.f_3955.f_563[iVar0] = iParam20;
		Global_1378744.f_3955.f_574[iVar0] = iParam21;
		Global_1378744.f_3955.f_585[iVar0] = iParam22;
		Global_1378744.f_3955.f_596[iVar0] = iParam23;
		Global_1378744.f_3955.f_607[iVar0] = iParam24;
		Global_1378744.f_3955.f_194[iVar0] = iParam25;
		if (iParam15 == 5 && func_47())
		{
			Global_1378744.f_1130 = 1;
		}
		if (ENTITY::GET_ENTITY_HEADING())
		{
			iVar2 = 0;
			SYSTEM::CEIL(&iVar3, &iVar4);
			if (iVar3 == 1280 && iVar4 >= 960)
			{
				iVar2 = 1;
			}
			if (bParam0 > 99999999)
			{
				Global_1378744.f_1134 = 1;
			}
			else if (bParam0 > 9999999 || iVar2)
			{
				Global_1378744.f_1133 = 1;
			}
			else if (bParam0 > 999)
			{
				Global_1378744.f_1130 = 1;
			}
			if (func_46())
			{
				Global_1378744.f_1134 = 1;
			}
		}
	}
}

int func_46()
{
	int iVar0;
	var uVar1;
	
	if (ENTITY::GET_ENTITY_HEADING())
	{
		SYSTEM::CEIL(&iVar0, &uVar1);
		if (iVar0 <= 1024)
		{
			return 1;
		}
	}
	return 0;
}

int func_47()
{
	if (((unk_0xA2C6E70C9BCA9C34() == 8 || unk_0xA2C6E70C9BCA9C34() == 9) || unk_0xA2C6E70C9BCA9C34() == 10) || unk_0xA2C6E70C9BCA9C34() == 12)
	{
		return 1;
	}
	return 0;
}

void func_48(int iParam0, int iParam1)
{
	unk_0xBE20AB8238688965(&(Global_1378744.f_6304[iParam0]), iParam1);
}

bool func_49(int iParam0, int iParam1)
{
	return unk_0xCE990E643CD9D0E5(Global_1378744.f_6304[iParam0], iParam1);
}

int func_50(bool bParam0, bool bParam1, bool bParam2)
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

void func_51()
{
}

void func_52()
{
	struct<3> Var0;
	bool bVar1;
	
	func_96();
	if (MISC::IS_BIT_SET(unk_0x9B0761B4C3EB8BC7()))
	{
		if (!PED::IS_PED_IN_ANY_POLICE_VEHICLE(unk_0x9B0761B4C3EB8BC7(), 0))
		{
			if (!iLocal_56 && !unk_0xCE990E643CD9D0E5(Global_42804, 10))
			{
				if (INTERIOR::GET_INTERIOR_AT_COORDS(joaat("cellphone_flashhand")) <= 0)
				{
					bVar1 = !func_95();
					unk_0x92BD213E6A0E666B(unk_0x9B0761B4C3EB8BC7(), joaat("weapon_flare"), 1, bVar1, bVar1);
					ENTITY::SET_ENTITY_HEALTH(unk_0x9B0761B4C3EB8BC7(), joaat("weapon_flare"), bVar1);
					iLocal_56 = 1;
				}
			}
			else if (unk_0xCE990E643CD9D0E5(Global_42804, 10) || unk_0x49B3D0A707AC8806(unk_0x9B0761B4C3EB8BC7(), joaat("weapon_flare"), 100f, &(Local_240[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2), 1))
			{
				if (unk_0xCE990E643CD9D0E5(Global_42804, 10))
				{
					Local_240[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2 = { NETWORK::NETWORK_ARE_HANDLES_THE_SAME(unk_0x9B0761B4C3EB8BC7(), 1) };
				}
				else if (func_94(Local_240[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2, 0f, 0f, 0f, 0))
				{
					Local_240[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2 = { Var0 };
				}
				if (func_8("AIRSTRIKE_1"))
				{
					unk_0xD289B55B6AADBA10(1);
				}
				if (!iLocal_55)
				{
					if (!func_93(Local_238.f_2.f_3))
					{
						if (func_41(Local_238.f_2))
						{
							func_92();
							HUD::HIDE_HUD_AND_RADAR_THIS_FRAME(NETWORK::NET_TO_PED(Local_238.f_2.f_3));
							AUDIO::STOP_SCRIPTED_CONVERSATION(NETWORK::NET_TO_PED(Local_238.f_2.f_3), iLocal_49);
							MISC::CLEAR_BIT(unk_0x770D3B2B4702434A(Local_238.f_2), SYSTEM::ROUND(50f));
							iLocal_55 = 1;
						}
					}
				}
			}
			else if (!iLocal_54 && !unk_0xCE990E643CD9D0E5(Global_42804, 10))
			{
				if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					if (func_91(unk_0x9B0761B4C3EB8BC7()))
					{
						func_7("AIRSTRIKE_4", -1);
					}
					else
					{
						func_7("AIRSTRIKE_1", -1);
					}
					iLocal_54 = 1;
				}
			}
		}
	}
	func_62();
	func_53();
}

void func_53()
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	
	switch (Local_238.f_2.f_2)
	{
		case 0:
			func_61();
			break;
		
		case 1:
			func_61();
			break;
		
		case 2:
			if (func_41(Local_238.f_2))
			{
				iLocal_58 = 1;
				iVar0 = unk_0x770D3B2B4702434A(Local_238.f_2);
				if (!SYSTEM::VMAG(bLocal_47))
				{
					bLocal_47 = TASK::IS_PED_SPRINTING(iVar0);
					HUD::SET_BLIP_SPRITE(bLocal_47, 16);
					PED::IS_PED_IN_PARACHUTE_FREE_FALL(bLocal_47, func_59());
					HUD::SHOW_HEIGHT_ON_BLIP(bLocal_47, false);
				}
				else
				{
					HUD::SET_BLIP_ROTATION(bLocal_47, SYSTEM::CEIL(ENTITY::IS_ENTITY_IN_WATER(iVar0)));
				}
				if (!iLocal_53)
				{
					if (!func_43(Local_240[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2))
					{
						Var3 = { Local_240[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2 };
					}
					else
					{
						Var3 = { Local_60 };
					}
					if (HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Var3, NETWORK::NETWORK_ARE_HANDLES_THE_SAME(iVar0, 1), 1) <= (60f * 5f))
					{
						PLAYER::IS_SPECIAL_ABILITY_ACTIVE(unk_0x770D3B2B4702434A(Local_238.f_2));
						iLocal_53 = 1;
					}
				}
				if (!iLocal_235 && !unk_0xCE990E643CD9D0E5(Global_42804, 10))
				{
					if (!Local_238.f_54)
					{
						if (!func_93(Local_238.f_2.f_3))
						{
							if (!func_43(Local_240[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2))
							{
								if (HUD::SET_BLIP_NAME_FROM_TEXT_FILE(func_58(PLAYER::PLAYER_ID()), NETWORK::NETWORK_ARE_HANDLES_THE_SAME(unk_0x770D3B2B4702434A(Local_238.f_2.f_3), 1), 0) <= 250f)
								{
									if (HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Var3, NETWORK::NETWORK_ARE_HANDLES_THE_SAME(iVar0, 1), 1) >= (60f * 2.5f))
									{
										if (func_38())
										{
											func_15(&uLocal_69, "HS4FAUD", "HS4F_SAACI1", 12, 0, 0, 0);
										}
										else
										{
											func_57(&uLocal_69, "CT_AUD", "MPCT_ASarr", 12, 0, 0, 0);
										}
										iLocal_235 = 1;
									}
								}
							}
						}
					}
				}
				if (Local_238.f_50 < 10)
				{
					if (!Local_238.f_53)
					{
						if (!func_43(Local_240[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2))
						{
							if (func_56() == 2)
							{
								if (!func_12(&uLocal_63))
								{
									func_11(&uLocal_63, 0, 0);
								}
								else if (func_10(&uLocal_63, 7500, 0))
								{
									Local_238.f_53 = 1;
								}
								Var1 = { Local_240[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2 - Vector(1000f, 25f, 25f) };
								Var2 = { Local_240[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2 + Vector(1000f, 25f, 25f) };
								Var1.f_2 = -200f;
								Var2.f_2 = 1500f;
								if (unk_0xC2169C00B643278B(iVar0, Local_240[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2, 75f, 75f, 1000f, 0, 1, 0) && MISC::IS_PROJECTILE_TYPE_IN_AREA(Var1, Var2, joaat("weapon_flare"), false))
								{
									Local_238.f_53 = 1;
								}
							}
							else if (func_56() == 1)
							{
								Local_238.f_53 = 1;
								Local_238.f_50 = 100;
							}
						}
						else if (unk_0xC2169C00B643278B(iVar0, Local_60, 75f, 75f, 1000f, 0, 1, 0))
						{
							Local_238.f_53 = 1;
							Local_238.f_50 = 100;
							Local_238.f_54 = 1;
							if (!iLocal_236 && !unk_0xCE990E643CD9D0E5(Global_42804, 10))
							{
								if (!func_38())
								{
									func_57(&uLocal_69, "CT_AUD", "MPCT_ASflr", 12, 0, 0, 0);
								}
								iLocal_236 = 1;
							}
						}
					}
				}
			}
			if (!func_41(Local_238.f_2) || func_93(Local_238.f_2.f_3))
			{
				func_54();
			}
			break;
		
		case 3:
			func_61();
			break;
	}
}

void func_54()
{
	int iVar0;
	
	if (!func_93(Local_238.f_2.f_3))
	{
		if (func_55(Local_238.f_2.f_3))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_238.f_2.f_3))
			{
				iVar0 = NETWORK::NET_TO_PED(Local_238.f_2.f_3);
				CAM::IS_AIM_CAM_ACTIVE(iVar0, 0, 0);
			}
		}
	}
}

int func_55(int iParam0)
{
	if (NETWORK::IS_NETWORK_ID_OWNED_BY_PARTICIPANT(iParam0))
	{
		return 1;
	}
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		AUDIO::RESTART_SCRIPTED_CONVERSATION(iParam0);
	}
	return 0;
}

int func_56()
{
	if (Local_238.f_55 == 1)
	{
		return Local_238.f_55;
	}
	else if (Local_238.f_55 == 2)
	{
		return Local_238.f_55;
	}
	if (!AUDIO::IS_MOBILE_PHONE_CALL_ONGOING(Local_240[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2 + Vector(0.5f, 0f, 0f)))
	{
		Local_238.f_55 = 1;
		return Local_238.f_55;
	}
	Local_238.f_55 = 2;
	return Local_238.f_55;
}

int func_57(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_37(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_16(sParam2, iParam3, 0);
}

Vector3 func_58(bool bParam0)
{
	return NETWORK::NETWORK_ARE_HANDLES_THE_SAME(PLAYER::GET_PLAYER_PED(bParam0), 0);
}

char* func_59()
{
	if (func_60())
	{
		return "PA_AIRSTRIKE_BLIP";
	}
	return "AIRSTRIKE_5";
}

bool func_60()
{
	return Global_2451787.f_23;
}

void func_61()
{
	if (SYSTEM::VMAG(bLocal_47))
	{
		unk_0x93370FA10F15BE44(&bLocal_47);
	}
}

void func_62()
{
	switch (Local_238.f_2.f_2)
	{
		case 0:
			func_90(1);
			break;
		
		case 1:
			if (func_63())
			{
				func_90(2);
			}
			break;
		
		case 2:
			if (!func_41(Local_238.f_2))
			{
				if (func_93(Local_238.f_2.f_3))
				{
					func_90(3);
				}
			}
			else if (func_93(Local_238.f_2.f_3))
			{
				func_90(3);
			}
			break;
		
		case 3:
			break;
	}
}

int func_63()
{
	if (!func_12(&uLocal_67))
	{
		func_11(&uLocal_67, 0, 0);
	}
	else if (func_89(Local_238.f_2.f_1) && func_89(Local_238.f_2.f_3.f_1))
	{
		if (func_10(&uLocal_67, 3000, 0))
		{
			if (func_67() && func_64())
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_64()
{
	if ((!HUD::DOES_BLIP_EXIST(Local_238.f_2.f_3) && func_89(Local_238.f_2.f_3.f_1)) && HUD::DOES_BLIP_EXIST(Local_238.f_2))
	{
		if (func_41(Local_238.f_2))
		{
			if (func_66(&(Local_238.f_2.f_3), Local_238.f_2, 22, Local_238.f_2.f_3.f_1, -1, 1, 1, 1))
			{
				PED::_0x2208438012482A1A(NETWORK::NET_TO_PED(Local_238.f_2.f_3), 1);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(NETWORK::NET_TO_PED(Local_238.f_2.f_3), Global_1575006);
				PED::SET_PED_RANDOM_COMPONENT_VARIATION(NETWORK::NET_TO_PED(Local_238.f_2.f_3), 0);
				PED::SET_PED_KEEP_TASK(NETWORK::NET_TO_PED(Local_238.f_2.f_3), true);
				func_65();
				AUDIO::STOP_SCRIPTED_CONVERSATION(NETWORK::NET_TO_PED(Local_238.f_2.f_3), iLocal_48);
				MISC::CLEAR_BIT(unk_0x770D3B2B4702434A(Local_238.f_2), SYSTEM::ROUND(50f));
			}
		}
	}
	if (!HUD::DOES_BLIP_EXIST(Local_238.f_2.f_3))
	{
		return 0;
	}
	unk_0x74528AC0906CBABE(Local_238.f_2.f_3.f_1);
	return 1;
}

void func_65()
{
	if (!iLocal_50)
	{
		if (func_41(Local_238.f_2))
		{
			TASK::OPEN_SEQUENCE_TASK(&iLocal_48);
			TASK::TASK_PLANE_MISSION(0, unk_0x770D3B2B4702434A(Local_238.f_2), 0, 0, Local_60 + Vector((50f + 5f), 0f, 0f), 4, 60f, 15f, -1f, SYSTEM::CEIL((50f + 5f)), 2.802597E-44f, 1);
			TASK::TASK_PLANE_MISSION(0, unk_0x770D3B2B4702434A(Local_238.f_2), 0, 0, Local_238.f_2.f_14, 4, 60f, 25f, -1f, SYSTEM::CEIL((50f + 5f)), 2.802597E-44f, 1);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_48);
			iLocal_50 = 1;
		}
	}
}

int func_66(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7)
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

int func_67()
{
	struct<3> Var0;
	float fVar1;
	
	if (!HUD::DOES_BLIP_EXIST(Local_238.f_2))
	{
		if (func_89(Local_238.f_2.f_1))
		{
			if (AUDIO::LOAD_STREAM("AIRSTRIKE_FLYOVER", 0))
			{
				func_85(&Var0, &fVar1);
				if (func_71(Var0, 6f, 1f, 1f, 5f, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
				{
					if (func_68(&(Local_238.f_2), Local_238.f_2.f_1, Var0, fVar1, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
					{
						Local_238.f_2.f_14 = { Var0 * Vector(0f, -1f, -1f) };
						VEHICLE::SET_VEHICLE_DOORS_LOCKED(unk_0x770D3B2B4702434A(Local_238.f_2), 2);
						ENTITY::SET_ENTITY_COORDS(unk_0x770D3B2B4702434A(Local_238.f_2), 0);
						ENTITY::SET_ENTITY_DYNAMIC(unk_0x770D3B2B4702434A(Local_238.f_2), true);
						PHYSICS::ACTIVATE_PHYSICS(unk_0x770D3B2B4702434A(Local_238.f_2));
						VEHICLE::SET_VEHICLE_FORWARD_SPEED(unk_0x770D3B2B4702434A(Local_238.f_2), 60f);
						VEHICLE::SET_VEHICLE_ENGINE_ON(unk_0x770D3B2B4702434A(Local_238.f_2), true, true, false);
						VEHICLE::SET_VEHICLE_EXTENDED_REMOVAL_RANGE(unk_0x770D3B2B4702434A(Local_238.f_2), 1000);
						ENTITY::_SET_ENTITY_SOMETHING(unk_0x770D3B2B4702434A(Local_238.f_2), false);
						VEHICLE::CONTROL_LANDING_GEAR(unk_0x770D3B2B4702434A(Local_238.f_2), 3);
						VEHICLE::OPEN_BOMB_BAY_DOORS(unk_0x770D3B2B4702434A(Local_238.f_2));
						unk_0x74528AC0906CBABE(Local_238.f_2.f_1);
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_68(var uParam0, int iParam1, struct<3> Param2, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
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
			func_69(Param2, fParam3, iParam1, iVar1);
			return 1;
		}
	}
	return 0;
}

void func_69(struct<3> Param0, float fParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_70(PLAYER::PLAYER_ID(), Param0, iParam2) > -1)
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

int func_70(bool bParam0, struct<3> Param1, int iParam2)
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

int func_71(struct<3> Param0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5, bool bParam6, int iParam7, float fParam8, bool bParam9, int iParam10, bool bParam11, float fParam12, bool bParam13, float fParam14, bool bParam15, bool bParam16)
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
		if (func_79(Param0, fParam12, 1, 1, bParam13, bParam15, bParam9, bParam13))
		{
			return 0;
		}
	}
	Global_2405074.f_2++;
	if (bParam6)
	{
		if (fParam4 > 0f)
		{
			if (func_72(Param0, fParam4, iParam5, iParam7, fParam8, bParam9, iParam10, fParam14, bParam15))
			{
				return 0;
			}
		}
	}
	Global_2405074.f_2++;
	return 1;
}

int func_72(struct<3> Param0, float fParam1, int iParam2, int iParam3, float fParam4, bool bParam5, int iParam6, float fParam7, bool bParam8)
{
	int iVar0;
	bool bVar1;
	float fVar2;
	
	if (iParam2 && !bParam5)
	{
		if (func_50(PLAYER::PLAYER_ID(), 1, 1))
		{
			if (!PED::REMOVE_SCENARIO_BLOCKING_AREA())
			{
				fVar2 = fParam4;
				if (fParam7 > 0f)
				{
					fVar2 = fParam7;
				}
				if (HUD::SET_BLIP_NAME_FROM_TEXT_FILE(func_77(PLAYER::PLAYER_ID()), Param0, 1) <= (fVar2 + fParam1))
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
		if (func_50(bVar1, 1, 1))
		{
			if (!func_74(bVar1, 0) && NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), bVar1))
			{
				if (iParam2 == 1 || (iParam2 == 0 && bVar1 != PLAYER::PLAYER_ID()))
				{
					if ((func_73(bVar1) || !bParam8) && !Global_2425869[bVar1 /*443*/].f_263)
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
								if (HUD::SET_BLIP_NAME_FROM_TEXT_FILE(func_77(bVar1), Param0, 1) <= (fVar2 + fParam1))
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
							if (HUD::SET_BLIP_NAME_FROM_TEXT_FILE(func_77(bVar1), Param0, 1) <= (fVar2 + fParam1))
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

int func_73(bool bParam0)
{
	if (ENTITY::IS_ENTITY_VISIBLE_TO_SCRIPT(PLAYER::GET_PLAYER_PED(bParam0)) || Global_2425869[bParam0 /*443*/].f_249)
	{
		return 1;
	}
	return 0;
}

bool func_74(bool bParam0, int iParam1)
{
	bool bVar0;
	
	if (bParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_75(-1, 0) == 8;
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

int func_75(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_76();
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

int func_76()
{
	return Global_1312763;
}

Vector3 func_77(bool bParam0)
{
	int iVar0;
	
	iVar0 = bParam0;
	if ((func_78() && Global_1590682[iVar0 /*883*/].f_854) && !func_43(Global_1590682[iVar0 /*883*/].f_855))
	{
		return Global_1590682[iVar0 /*883*/].f_855;
	}
	return func_58(bParam0);
}

var func_78()
{
	return Global_2451787.f_18;
}

int func_79(struct<3> Param0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, var uParam7)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		bVar1 = iVar0;
		if ((iParam6 == 1 && PLAYER::PLAYER_ID() != bVar1) || iParam6 == 0)
		{
			if (func_50(bVar1, bParam2, bParam3))
			{
				if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), bVar1))
				{
					if (!bParam5 || (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(PLAYER::GET_PLAYER_PED(bVar1)) && func_73(bVar1)))
					{
						if ((!bParam4 || (bParam4 == 1 && unk_0x6CC163E30ECE0790(PLAYER::PLAYER_ID()) != unk_0x6CC163E30ECE0790(bVar1))) || unk_0x6CC163E30ECE0790(PLAYER::PLAYER_ID()) == -1)
						{
							if (((unk_0x6CC163E30ECE0790(PLAYER::PLAYER_ID()) == -1 && uParam7) && bParam4) && func_80(bVar1))
							{
							}
							else if (MISC::IS_BIT_SET(PLAYER::GET_PLAYER_PED(bVar1)))
							{
								if (HUD::SET_BLIP_NAME_FROM_TEXT_FILE(func_58(bVar1), Param0, 1) < fParam1)
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

int func_80(bool bParam0)
{
	if (func_84(PLAYER::PLAYER_ID(), bParam0))
	{
		return 1;
	}
	Global_2515173 = { func_83(bParam0) };
	if (NETWORK::NETWORK_IS_FRIEND_HANDLE_ONLINE(&Global_2515173))
	{
		return 1;
	}
	if (func_81(PLAYER::PLAYER_ID(), bParam0))
	{
		return 1;
	}
	return 0;
}

int func_81(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_82(iParam0);
	if (!iVar0 == func_21())
	{
		if (iVar0 == func_82(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_82(int iParam0)
{
	if (iParam0 != func_21())
	{
		return Global_1630317[iParam0 /*595*/].f_11;
	}
	return func_21();
}

struct<13> func_83(int iParam0)
{
	struct<13> Var0;
	
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
	return Var0;
}

int func_84(int iParam0, int iParam1)
{
	if (INTERIOR::GET_INTERIOR_GROUP_ID())
	{
		Global_2515173 = { func_83(iParam0) };
		Global_2515186 = { func_83(iParam1) };
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

void func_85(var uParam0, var uParam1)
{
	float fVar0;
	
	*uParam0 = { func_87(Local_60 + Vector(200f, 0f, 0f), 600f, 600f, (200f / 2f)) };
	fVar0 = PATHFIND::_GET_HEIGHTMAP_TOP_Z_FOR_AREA((*uParam0 - 600f), (uParam0->f_1 - 600f), (*uParam0 + 600f), (uParam0->f_1 + 600f));
	if (uParam0->f_2 < fVar0)
	{
		uParam0->f_2 = fVar0;
	}
	*uParam1 = func_86(*uParam0, Local_60);
}

var func_86(struct<2> Param0, var uParam1, struct<2> Param2, var uParam3)
{
	return unk_0x9075769DD4F148B7((Param2 - Param0), (Param2.f_1 - Param0.f_1));
}

Vector3 func_87(struct<3> Param0, float fParam1, float fParam2, float fParam3)
{
	struct<3> Var0;
	float fVar1;
	
	Var0 = { MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f), 0f };
	fVar1 = (fParam3 / 2f);
	Var0 = { func_88(Var0, MISC::GET_RANDOM_FLOAT_IN_RANGE(fParam1, fParam2)) };
	Var0.f_2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-fVar1, fVar1);
	return Param0 + Var0;
}

Vector3 func_88(struct<3> Param0, float fParam1)
{
	float fVar0;
	
	if (fParam1 == 0f)
	{
		return 0f, 0f, 0f;
	}
	fVar0 = SYSTEM::VMAG(Param0);
	if (fVar0 != 0f)
	{
		return Param0 * FtoV((fParam1 / fVar0));
	}
	return 0f, 0f, 0f;
}

bool func_89(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	unk_0x78FCB2E22C41B9D5(iParam0);
	return ENTITY::DOES_ENTITY_EXIST(iParam0);
}

void func_90(int iParam0)
{
	if (iParam0 == 3)
	{
		Global_2540384.f_4453 = 0;
	}
	Local_238.f_2.f_2 = iParam0;
}

int func_91(int iParam0)
{
	int iVar0;
	
	if (PED::IS_PED_IN_ANY_HELI(iParam0))
	{
		iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0, 0);
		if (ENTITY::GET_ENTITY_COORDS(iVar0, false))
		{
			if (MISC::IS_MINIGAME_IN_PROGRESS(iVar0, -1, 0) == iParam0)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_92()
{
	if (!iLocal_51)
	{
		if (func_41(Local_238.f_2))
		{
			TASK::OPEN_SEQUENCE_TASK(&iLocal_49);
			TASK::TASK_PLANE_MISSION(0, unk_0x770D3B2B4702434A(Local_238.f_2), 0, 0, Local_240[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2 + Vector((50f + 5f), 0f, 0f), 4, 60f, 15f, -1f, SYSTEM::CEIL((50f + 5f)), 2.802597E-44f, 1);
			TASK::TASK_PLANE_MISSION(0, unk_0x770D3B2B4702434A(Local_238.f_2), 0, 0, Local_238.f_2.f_14, 4, 60f, 25f, -1f, SYSTEM::CEIL((50f + 5f)), 2.802597E-44f, 1);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_49);
			iLocal_51 = 1;
		}
	}
}

int func_93(int iParam0)
{
	if (HUD::DOES_BLIP_EXIST(iParam0))
	{
		return STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(NETWORK::NET_TO_PED(iParam0));
	}
	return 1;
}

bool func_94(struct<3> Param0, struct<3> Param1, bool bParam2)
{
	if (bParam2)
	{
		return (Param0.x == Param1.x && Param0.f_1 == Param1.f_1);
	}
	return ((Param0.x == Param1.x && Param0.f_1 == Param1.f_1) && Param0.f_2 == Param1.f_2);
}

bool func_95()
{
	return Global_99007.f_351 > 0;
}

void func_96()
{
	char* sVar0;
	
	if (!iLocal_234)
	{
		if (!func_93(Local_238.f_2.f_3))
		{
			sVar0 = "FM_Pilot_Air";
			if (func_38())
			{
				sVar0 = "HS4_AIRSTRIKE1";
			}
			func_97(&uLocal_69, 3, NETWORK::NET_TO_PED(Local_238.f_2.f_3), sVar0, 1, 1);
			iLocal_234 = 1;
		}
	}
}

void func_97(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

void func_98()
{
	Global_2540384.f_4452 = Local_238.f_53;
}

int func_99()
{
	return Local_238;
}

int func_100(int iParam0)
{
	return Local_240[iParam0 /*5*/];
}

void func_101()
{
}

void func_102()
{
	if (HUD::DOES_BLIP_EXIST(Local_238.f_2.f_3) && HUD::DOES_BLIP_EXIST(Local_238.f_2))
	{
		if (func_41(Local_238.f_2) && !func_93(Local_238.f_2.f_3))
		{
			TASK::TASK_PLANE_MISSION(NETWORK::NET_TO_PED(Local_238.f_2.f_3), unk_0x770D3B2B4702434A(Local_238.f_2), 0, unk_0x9B0761B4C3EB8BC7(), 1f, 1f, 1f, 8, 60f, 1000f, -1f, 400, 5.605194E-43f, 1);
		}
	}
	func_104(func_105(1, 1), 11, func_21());
	func_103();
}

void func_103()
{
	ENTITY::STOP_ENTITY_ANIM();
}

void func_104(int iParam0, int iParam1, var uParam2)
{
	struct<4> Var0;
	
	Var0 = -1580390976;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_3 = iParam1;
	Var0.f_2 = uParam2;
	if (!iParam0 == 0)
	{
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Var0, 6, iParam0);
	}
}

int func_105(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	bool bVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		bVar2 = NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar1);
		if (func_50(bVar2, 0, 0))
		{
			if (bVar2 != PLAYER::PLAYER_ID() || iParam0)
			{
				if (bParam1)
				{
					unk_0xBE20AB8238688965(&uVar0, iVar1);
				}
				else if (!func_74(bVar2, 0))
				{
					unk_0xBE20AB8238688965(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_106()
{
	var uVar0;
	
	func_114(&uVar0);
	if (Global_1312872 == 0)
	{
		if (!MISC::SET_BIT())
		{
			return 1;
		}
	}
	if (func_113())
	{
		return 1;
	}
	if (Global_2464493)
	{
		return 1;
	}
	if (func_112())
	{
		return 1;
	}
	if (func_111(159))
	{
		if (!func_110())
		{
			return 1;
		}
	}
	if (func_111(157))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_SESSION_IS_IN_VOICE_SESSION())
	{
		return 1;
	}
	if (func_107() != 0)
	{
		if (INTERIOR::GET_INTERIOR_AT_COORDS(func_107()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_107()
{
	switch (func_109())
	{
		case 0:
			return func_108();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_108()
{
	switch (Global_2464595)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_109()
{
	return Global_30968;
}

bool func_110()
{
	return Global_2451787.f_696;
}

int func_111(int iParam0)
{
	if (unk_0x16F1FCCC54559709(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_112()
{
	return Global_2462250;
}

bool func_113()
{
	return Global_2451787.f_691;
}

void func_114(var uParam0)
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
					func_115(iVar0);
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

void func_115(int iParam0)
{
	struct<3> Var0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	if (unk_0x477FAFFE21935947(1, iParam0, &Var0, 3))
	{
		if (func_50(Var0.f_1, 1, 1))
		{
			iVar1 = PLAYER::GET_PLAYER_PED(Var0.f_1);
			if (MISC::IS_BIT_SET(iVar1))
			{
				if (SYSTEM::VDIST(iVar1, 0))
				{
					iVar2 = ENTITY::GET_ENTITY_MODEL(iVar1, 0);
					if (VEHICLE::REMOVE_VEHICLE_WINDOW(iVar2, Var0.f_2) && NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
					{
						if (func_116(iVar2, &bVar3))
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

int func_116(int iParam0, var uParam1)
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

void func_117()
{
	SYSTEM::WAIT(0);
}

void func_118(struct<21> Param0)
{
	func_124(func_125(Param0), Param0);
	NETWORK::RESERVE_NETWORK_MISSION_PEDS(1);
	NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(1);
	func_122(0, -1, 0);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(&Local_238, 58);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_240, 11);
	WEAPON::GET_WEAPONTYPE_GROUP(0);
	if (!func_121())
	{
		func_102();
	}
	if (MISC::IS_BIT_SET(unk_0x9B0761B4C3EB8BC7()))
	{
		Local_60 = { NETWORK::NETWORK_ARE_HANDLES_THE_SAME(unk_0x9B0761B4C3EB8BC7(), 0) };
	}
	if (func_4(PLAYER::PLAYER_ID(), 1, 0))
	{
		bLocal_52 = true;
	}
	func_119(64, 1);
	Local_240[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/] = 0;
}

void func_119(int iParam0, bool bParam1)
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
			Global_2097152[func_120() /*10931*/].f_6175.f_19 = iVar0;
			break;
		
		case 19:
			Global_2097152[func_120() /*10931*/].f_6175.f_18 = iVar0;
			break;
		
		case 74:
			Global_2097152[func_120() /*10931*/].f_6175.f_12 = iVar0;
			break;
		
		case 29:
			Global_2097152[func_120() /*10931*/].f_6175.f_14 = iVar0;
			break;
		
		case 8:
			Global_2097152[func_120() /*10931*/].f_6175.f_15 = iVar0;
			break;
		
		case 31:
			Global_2097152[func_120() /*10931*/].f_6175.f_16 = iVar0;
			break;
		
		case 3:
			Global_2097152[func_120() /*10931*/].f_6175.f_20 = iVar0;
			break;
		
		case 6:
			Global_2097152[func_120() /*10931*/].f_6175.f_17 = iVar0;
			break;
		
		case 103:
		case 104:
		case 98:
		case 105:
			Global_2097152[func_120() /*10931*/].f_6175.f_23 = iVar0;
			break;
		
		case 76:
			Global_2097152[func_120() /*10931*/].f_6175.f_24 = iVar0;
			break;
		
		case 93:
			Global_2097152[func_120() /*10931*/].f_6175.f_25 = iVar0;
			break;
		
		case 61:
		case 62:
		case 63:
		case 64:
		case 77:
		case 81:
			Global_2097152[func_120() /*10931*/].f_6175.f_26 = iVar0;
			break;
		
		case 65:
		case 75:
		case 95:
			Global_2097152[func_120() /*10931*/].f_6175.f_27 = iVar0;
			break;
			break;
		
		case 97:
			Global_2097152[func_120() /*10931*/].f_6175.f_29 = iVar0;
			break;
		
		case 88:
			Global_2097152[func_120() /*10931*/].f_6175.f_28 = iVar0;
			break;
		
		case 100:
			Global_2097152[func_120() /*10931*/].f_6175.f_31 = iVar0;
			break;
		
		case 106:
			Global_2097152[func_120() /*10931*/].f_6175.f_32 = iVar0;
			break;
		
		case 99:
			Global_2097152[func_120() /*10931*/].f_6175.f_30 = iVar0;
			break;
	}
}

int func_120()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

int func_121()
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
		if (func_113())
		{
			return 0;
		}
		if (func_111(157))
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

int func_122(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_103();
			}
			else
			{
				return 0;
			}
		}
		if (!func_123())
		{
			if (iParam0 == 0)
			{
				if (!MISC::SET_BIT())
				{
					if (!bParam2)
					{
						func_103();
					}
					else
					{
						return 0;
					}
				}
				if (func_113())
				{
					if (!bParam2)
					{
						func_103();
					}
					else
					{
						return 0;
					}
				}
				if (func_111(157))
				{
					if (!bParam2)
					{
						func_103();
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
					func_103();
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
				func_103();
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
			func_103();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_123()
{
	return Global_1312872;
}

void func_124(int* iParam0, struct<17> Param1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	if (!MISC::SET_BIT())
	{
		func_103();
	}
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(iParam0, 0, Param1.f_16);
}

int func_125(int iParam0)
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

