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
	int iLocal_37 = 0;
	bool bLocal_38 = 0;
	bool bLocal_39 = 0;
	int iLocal_40 = 0;
	float fLocal_41 = 0f;
	float fLocal_42 = 0f;
	struct<3> Local_43 = { 0, 0, 0 } ;
	struct<3> Local_44 = { 0, 0, 0 } ;
	struct<3> Local_45 = { 0, 0, 0 } ;
	float fLocal_46 = 0f;
	struct<3> Local_47 = { 0, 0, 0 } ;
	float fLocal_48 = 0f;
	struct<3> Local_49 = { 0, 0, 0 } ;
	float fLocal_50 = 0f;
	float fLocal_51 = 0f;
	float fLocal_52 = 0f;
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
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_35 = 3;
	fLocal_41 = 50f;
	fLocal_42 = 2500f;
	Local_43 = { 409.1539f, -1626.677f, 28.2928f };
	Local_45 = { 409.2747f, -1623.022f, 28.29278f };
	fLocal_46 = 202.6928f;
	Local_47 = { 415.6071f, -1647.604f, 28.2928f };
	fLocal_48 = 85.7173f;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(18))
	{
		func_33();
	}
	if (INTERIOR::GET_INTERIOR_AT_COORDS(joaat("ambient_tonyacall")) > 1)
	{
		ENTITY::STOP_ENTITY_ANIM();
	}
	while (true)
	{
		ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_ID());
		if (func_32(0, 14))
		{
			func_33();
		}
		if (!PED::IS_PED_IN_ANY_POLICE_VEHICLE(unk_0x9B0761B4C3EB8BC7(), 0))
		{
			Local_44 = { NETWORK::NETWORK_ARE_HANDLES_THE_SAME(unk_0x9B0761B4C3EB8BC7(), 1) };
		}
		if (SYSTEM::VDIST2(Local_44, Local_43) > fLocal_42)
		{
			func_33();
		}
		switch (iLocal_37)
		{
			case 0:
				if (func_28())
				{
					if (func_5(&uLocal_53, "TOWAUD", "TONYA_HANG", 8, 0, 0, 0))
					{
						iLocal_37 = 1;
					}
				}
				break;
			
			case 1:
				STREAMING::REQUEST_ANIM_DICT("amb@world_human_stand_mobile@female@standing@call@enter");
				STREAMING::REQUEST_ANIM_DICT("amb@world_human_stand_mobile@female@standing@call@base");
				STREAMING::REQUEST_ANIM_DICT("amb@world_human_stand_mobile@female@standing@call@exit");
				STREAMING::REQUEST_ANIM_DICT("amb@world_human_smoking@female@enter");
				STREAMING::REQUEST_ANIM_DICT("amb@world_human_smoking@female@idle_a");
				unk_0x78FCB2E22C41B9D5(joaat("prop_phone_ing"));
				if (((((ENTITY::DOES_ENTITY_EXIST(joaat("prop_phone_ing")) && STREAMING::HAS_ANIM_DICT_LOADED("amb@world_human_stand_mobile@female@standing@call@enter")) && STREAMING::HAS_ANIM_DICT_LOADED("amb@world_human_stand_mobile@female@standing@call@base")) && STREAMING::HAS_ANIM_DICT_LOADED("amb@world_human_stand_mobile@female@standing@call@exit")) && STREAMING::HAS_ANIM_DICT_LOADED("amb@world_human_smoking@female@enter")) && STREAMING::HAS_ANIM_DICT_LOADED("amb@world_human_smoking@female@idle_a"))
				{
					iLocal_37 = 2;
				}
				break;
			
			case 2:
				if (func_1())
				{
					iLocal_37 = 3;
				}
				break;
			
			case 3:
				func_33();
				break;
		}
		SYSTEM::WAIT(0);
	}
}

int func_1()
{
	struct<3> Var0;
	struct<3> Var1;
	int iVar2;
	float fVar3;
	int iVar4;
	
	if (!PED::IS_PED_IN_ANY_POLICE_VEHICLE(unk_0x9B0761B4C3EB8BC7(), 0))
	{
		Var0 = { NETWORK::NETWORK_ARE_HANDLES_THE_SAME(unk_0x9B0761B4C3EB8BC7(), 1) };
	}
	if (!PED::IS_PED_IN_ANY_POLICE_VEHICLE(bLocal_38, 0))
	{
		Var1 = { NETWORK::NETWORK_ARE_HANDLES_THE_SAME(bLocal_38, 1) };
	}
	else
	{
		Var1 = { 408.5002f, -1624.583f, 29.2928f };
	}
	if ((SYSTEM::VDIST2(Var0, Var1) > 10000f || PED::IS_PED_IN_ANY_POLICE_VEHICLE(bLocal_38, 0)) || func_4())
	{
		if (SYSTEM::VDIST2(Var0, Var1) > 10000f)
		{
		}
		if (PED::IS_PED_IN_ANY_POLICE_VEHICLE(bLocal_38, 0))
		{
		}
		if (func_4())
		{
		}
		return 1;
	}
	switch (iLocal_40)
	{
		case 0:
			if (MISC::IS_BIT_SET(bLocal_38) && !PED::IS_PED_IN_ANY_POLICE_VEHICLE(bLocal_38, 0))
			{
				if (unk_0xC2169C00B643278B(bLocal_38, Local_49, 1f, 1f, 1f, 0, 1, 0))
				{
					TASK::CLEAR_SEQUENCE_TASK(&iVar2);
					TASK::OPEN_SEQUENCE_TASK(&iVar2);
					TASK::TASK_ACHIEVE_HEADING(0, fLocal_50, 0);
					TASK::TASK_PLAY_ANIM(0, "amb@world_human_stand_mobile@female@standing@call@enter", "enter", 4f, -4f, -1, 0, 0f, false, false, false);
					TASK::TASK_PLAY_ANIM(0, "amb@world_human_stand_mobile@female@standing@call@base", "base", 4f, -4f, -1, 1, 0f, false, false, false);
					TASK::CLOSE_SEQUENCE_TASK(iVar2);
					AUDIO::STOP_SCRIPTED_CONVERSATION(bLocal_38, iVar2);
					TASK::CLEAR_SEQUENCE_TASK(&iVar2);
					iLocal_40 = 1;
				}
			}
			break;
		
		case 1:
			if (MISC::IS_BIT_SET(bLocal_38) && !PED::IS_PED_IN_ANY_POLICE_VEHICLE(bLocal_38, 0))
			{
				if (TASK::GET_SEQUENCE_PROGRESS(bLocal_38) == 1)
				{
					if (!MISC::IS_BIT_SET(bLocal_39))
					{
						if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(bLocal_38, "amb@world_human_stand_mobile@female@standing@call@enter", "enter", 3))
						{
							fVar3 = NETWORK::_NETWORK_CONVERT_SYNCHRONISED_SCENE_TO_SYNCHRONIZED_SCENE(bLocal_38, "amb@world_human_stand_mobile@female@standing@call@enter", "enter");
							if (fVar3 >= 0.157f)
							{
								bLocal_39 = OBJECT::CREATE_OBJECT(joaat("prop_phone_ing"), 1f, 1f, 1f, true, true, false);
								OBJECT::CREATE_OBJECT_NO_OFFSET(bLocal_39, bLocal_38, ENTITY::ATTACH_ENTITY_TO_ENTITY(bLocal_38, 28422), 0f, 0f, 0f, 0f, 0f, 0f, 1, 1, 0, 0, 2, 1);
							}
						}
					}
				}
				else if (TASK::GET_SEQUENCE_PROGRESS(bLocal_38) == 2)
				{
					iVar4 = (NETWORK::_NETWORK_GET_ROS_PRIVILEGE_25(0, 65535) % 2);
					if (iVar4 == 0)
					{
						if (func_5(&uLocal_53, "TOWAUD", "TONYA_CALL1", 8, 0, 0, 0))
						{
							iLocal_40 = 2;
						}
					}
					else if (func_5(&uLocal_53, "TOWAUD", "TONYA_CALL2", 8, 0, 0, 0))
					{
						iLocal_40 = 2;
					}
				}
			}
			break;
		
		case 2:
			if (!PED::IS_PED_IN_ANY_POLICE_VEHICLE(bLocal_38, 0))
			{
				if (!func_3())
				{
					TASK::CLEAR_SEQUENCE_TASK(&iVar2);
					TASK::OPEN_SEQUENCE_TASK(&iVar2);
					TASK::TASK_PLAY_ANIM(0, "amb@world_human_stand_mobile@female@standing@call@exit", "exit", 4f, -4f, -1, 0, 0f, false, false, false);
					TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_SMOKING", -1, true);
					TASK::CLOSE_SEQUENCE_TASK(iVar2);
					AUDIO::STOP_SCRIPTED_CONVERSATION(bLocal_38, iVar2);
					TASK::CLEAR_SEQUENCE_TASK(&iVar2);
					iLocal_40 = 3;
				}
			}
			break;
		
		case 3:
			func_2();
			if (SYSTEM::VDIST2(Var0, Var1) < 25f)
			{
				if (CAM::_0xEE778F8C7E1142E2(0) != 4)
				{
					if (func_5(&uLocal_53, "TOWAUD", "TONYA_MESS", 8, 0, 0, 0))
					{
						SYSTEM::SETTIMERA(0);
						iLocal_40 = 4;
					}
				}
			}
			break;
		
		case 4:
			func_2();
			if (SYSTEM::TIMERA() > 10000)
			{
				iLocal_40 = 3;
			}
			break;
	}
	return 0;
}

void func_2()
{
	if (MISC::IS_BIT_SET(bLocal_38) && !PED::IS_PED_IN_ANY_POLICE_VEHICLE(bLocal_38, 0))
	{
		if (TASK::GET_SEQUENCE_PROGRESS(bLocal_38) == 1)
		{
			if (MISC::IS_BIT_SET(bLocal_39))
			{
				PED::GET_PED_BONE_INDEX(&bLocal_39);
				TASK::TASK_LOOK_AT_ENTITY(bLocal_38, unk_0x9B0761B4C3EB8BC7(), -1, 0, 2);
			}
		}
	}
	if (MISC::IS_BIT_SET(bLocal_38) && !PED::IS_PED_IN_ANY_POLICE_VEHICLE(bLocal_38, 0))
	{
		if (MISC::IS_BIT_SET(bLocal_39))
		{
			if (TASK::GET_SCRIPT_TASK_STATUS(bLocal_38, 993674639) == 1)
			{
				PED::GET_PED_BONE_INDEX(&bLocal_39);
			}
		}
	}
}

int func_3()
{
	if (Global_21005 != 0 || ENTITY::IS_ENTITY_DEAD())
	{
		return 1;
	}
	return 0;
}

int func_4()
{
	if (!PED::IS_PED_IN_ANY_POLICE_VEHICLE(unk_0x9B0761B4C3EB8BC7(), 0) && !PED::IS_PED_IN_ANY_POLICE_VEHICLE(bLocal_38, 0))
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(unk_0x9B0761B4C3EB8BC7(), bLocal_38) || PED::IS_PED_PRONE(unk_0x9B0761B4C3EB8BC7()))
		{
			if (MISC::IS_BIT_SET(bLocal_39))
			{
				ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(bLocal_39, 1, 1);
			}
			unk_0xBE4122AC23440E7D(0);
			if (TASK::GET_SCRIPT_TASK_STATUS(bLocal_38, 1805844857) != 1)
			{
				PED::SET_PED_KEEP_TASK(bLocal_38, true);
				TASK::TASK_SMART_FLEE_PED(bLocal_38, unk_0x9B0761B4C3EB8BC7(), 1000f, -1, false, false);
				return 1;
			}
		}
	}
	return 0;
}

bool func_5(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_27(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_6(sParam2, iParam3, 0);
}

int func_6(char* sParam0, int iParam1, bool bParam2)
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
					func_26();
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
		if (func_25(8, -1))
		{
			return 0;
		}
		Global_21081 = { Global_21075 };
		func_24();
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
				func_16();
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
				if (func_15())
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
			if (func_14())
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
			func_13();
			Global_21015 = bParam2;
		}
		Global_21007 = iParam1;
		StringCopy(&Global_20624, sParam0, 24);
		Global_19871 = 0;
		func_12();
		func_7();
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
		func_26();
	}
	return 0;
}

void func_7()
{
	if (!func_8())
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

int func_8()
{
	if (!Global_262145.f_28160)
	{
		return 0;
	}
	if (!Global_76833)
	{
		return 0;
	}
	if (PLAYER::PLAYER_ID() == func_11())
	{
		return 0;
	}
	if (func_9(PLAYER::PLAYER_ID()))
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

bool func_9(int iParam0)
{
	return func_10(iParam0, 20);
}

bool func_10(int iParam0, int iParam1)
{
	return unk_0xCE990E643CD9D0E5(Global_1630317[iParam0 /*595*/].f_11.f_4, iParam1);
}

int func_11()
{
	return -1;
}

void func_12()
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

void func_13()
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

int func_14()
{
	if (Global_19681.f_1 == 1 || Global_19681.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_15()
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

void func_16()
{
	if (func_23(14))
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
		Global_19681 = func_17();
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

var func_17()
{
	func_18();
	return Global_111858.f_2359.f_539.f_4321;
}

void func_18()
{
	int iVar0;
	
	if (MISC::IS_BIT_SET(unk_0x9B0761B4C3EB8BC7()))
	{
		if (func_21(Global_111858.f_2359.f_539.f_4321) != MISC::GET_MODEL_DIMENSIONS(unk_0x9B0761B4C3EB8BC7()))
		{
			iVar0 = func_20(unk_0x9B0761B4C3EB8BC7());
			if (func_19(iVar0) && (!func_23(14) || Global_110809))
			{
				if (Global_111858.f_2359.f_539.f_4321 != iVar0 && func_19(Global_111858.f_2359.f_539.f_4321))
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

bool func_19(int iParam0)
{
	return iParam0 < 3;
}

int func_20(bool bParam0)
{
	int iVar0;
	void fVar1;
	
	if (MISC::IS_BIT_SET(iParam0))
	{
		fVar1 = MISC::GET_MODEL_DIMENSIONS(bParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_21(iVar0) == fVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_21(int iParam0)
{
	if (func_19(iParam0))
	{
		return func_22(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_22(int iParam0)
{
	return Global_1848[iParam0 /*29*/];
}

bool func_23(int iParam0)
{
	return Global_41631 == iParam0;
}

void func_24()
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

bool func_25(int iParam0, int iParam1)
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

void func_26()
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

void func_27(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
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

int func_28()
{
	struct<3> Var0;
	int iVar1;
	void fVar2;
	
	if (!PED::IS_PED_IN_ANY_POLICE_VEHICLE(unk_0x9B0761B4C3EB8BC7(), 0))
	{
		Var0 = { NETWORK::NETWORK_ARE_HANDLES_THE_SAME(unk_0x9B0761B4C3EB8BC7(), 1) };
	}
	PED::GET_CLOSEST_PED(Var0, fLocal_41, true, true, &iVar1, false, true, -1);
	if (MISC::IS_BIT_SET(iVar1) && !PED::IS_PED_IN_ANY_POLICE_VEHICLE(bVar1, 0))
	{
		fVar2 = MISC::GET_MODEL_DIMENSIONS(bVar1);
		if (fVar2 == joaat("ig_tonya"))
		{
			bLocal_38 = bVar1;
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(bLocal_38, true, false);
			PED::SET_PED_MONEY(bLocal_38, 0);
			PED::SET_PED_CAN_BE_TARGETTED(bLocal_38, false);
			PED::SET_PED_NAME_DEBUG(bLocal_38, "TONYA");
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(bLocal_38, 1862763509);
			func_31(&uLocal_53, 3, bLocal_38, "TONYA", 1, 1);
			func_30();
			if (!func_29(Local_49))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(bLocal_38, 713668775) != 1)
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(bLocal_38, Local_49, 1f, -1, 0.25f, false, fLocal_50);
					PED::SET_PED_KEEP_TASK(bLocal_38, true);
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_29(struct<3> Param0)
{
	if ((Param0.x == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

void func_30()
{
	struct<3> Var0;
	
	if (MISC::IS_BIT_SET(bLocal_38) && !PED::IS_PED_IN_ANY_POLICE_VEHICLE(bLocal_38, 0))
	{
		Var0 = { NETWORK::NETWORK_ARE_HANDLES_THE_SAME(bLocal_38, 1) };
		if (func_29(Local_49))
		{
			fLocal_51 = SYSTEM::VDIST(Var0, Local_45);
			fLocal_52 = SYSTEM::VDIST(Var0, Local_47);
			if (fLocal_51 < fLocal_52)
			{
				Local_49 = { Local_45 };
				fLocal_50 = fLocal_46;
			}
			else
			{
				Local_49 = { Local_47 };
				fLocal_50 = fLocal_48;
			}
			if (!PED::IS_PED_IN_ANY_POLICE_VEHICLE(unk_0x9B0761B4C3EB8BC7(), 0))
			{
				if (unk_0x1037B9D45CE6B788(unk_0x9B0761B4C3EB8BC7(), 407.4285f, -1626.572f, 27.29278f, 412.8245f, -1620.167f, 33.29278f, 6f, 0, 1, 0))
				{
					Local_49 = { Local_47 };
					fLocal_50 = fLocal_48;
				}
			}
		}
	}
}

void func_31(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

int func_32(int iParam0, int iParam1)
{
	var uVar0;
	
	if (iParam0 == 11 || iParam0 == -1)
	{
		return 0;
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return 0;
	}
	uVar0 = unk_0xCE990E643CD9D0E5(Global_111858.f_9081.f_99.f_219[iParam0], iParam1);
	return uVar0;
}

void func_33()
{
	unk_0x1082C25039B168F8("amb@world_human_stand_mobile@female@standing@call@enter");
	unk_0x1082C25039B168F8("amb@world_human_stand_mobile@female@standing@call@base");
	unk_0x1082C25039B168F8("amb@world_human_stand_mobile@female@standing@call@exit");
	unk_0x1082C25039B168F8("amb@world_human_smoking@female@enter");
	unk_0x1082C25039B168F8("amb@world_human_smoking@female@idle_a");
	unk_0x74528AC0906CBABE(joaat("prop_phone_ing"));
	if (MISC::IS_BIT_SET(bLocal_38))
	{
		if (ENTITY::IS_ENTITY_OCCLUDED(bLocal_38))
		{
			PED::DELETE_PED(&bLocal_38);
		}
		else
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&bLocal_38);
		}
	}
	ENTITY::STOP_ENTITY_ANIM();
}

