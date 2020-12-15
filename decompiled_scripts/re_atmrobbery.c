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
	var uLocal_45 = 0;
	bool bLocal_46 = 0;
	int iLocal_47 = 0;
	var uLocal_48 = 0;
	struct<4> Local_49[10];
	bool bLocal_50 = 0;
	struct<3> Local_51 = { 0, 0, 0 } ;
	int iLocal_52 = 0;
	struct<3> Local_53 = { 0, 0, 0 } ;
	float fLocal_54 = 0f;
	bool bLocal_55 = 0;
	bool bLocal_56 = 0;
	bool bLocal_57 = 0;
	bool bLocal_58 = 0;
	bool bLocal_59 = 0;
	bool bLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	void fLocal_63 = 0;
	var uLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	var uLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	bool bLocal_73 = 0;
	struct<3> Local_74 = { 0, 0, 0 } ;
	struct<3> Local_75 = { 0, 0, 0 } ;
	float fLocal_76 = 0f;
	bool bLocal_77 = 0;
	struct<3> Local_78 = { 0, 0, 0 } ;
	struct<3> Local_79 = { 0, 0, 0 } ;
	bool bLocal_80 = 0;
	int iLocal_81 = 0;
	bool bLocal_82 = 0;
	float fLocal_83 = 0f;
	float fLocal_84 = 0f;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	int iLocal_88 = 0;
	int iLocal_89 = 0;
	bool bLocal_90 = 0;
	int iLocal_91 = 0;
	char[] cLocal_92[8] = 0;
	char[] cLocal_93[8] = 0;
	char* sLocal_94 = NULL;
	bool bLocal_95 = 0;
	bool bLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	bool bLocal_99 = 0;
	bool bLocal_100 = 0;
	int iLocal_101 = 0;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	void fLocal_106 = 0;
	struct<10> Local_107[16];
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	char* sLocal_112 = NULL;
	char* sLocal_113 = NULL;
	char* sLocal_114 = NULL;
	char* sLocal_115 = NULL;
	char* sLocal_116 = NULL;
	char* sLocal_117 = NULL;
	char* sLocal_118 = NULL;
	char* sLocal_119 = NULL;
	char[] cLocal_120[8] = 0;
	char* sLocal_121 = NULL;
	char* sLocal_122 = NULL;
	char[] cLocal_123[8] = 0;
	char* sLocal_124 = NULL;
	char* sLocal_125 = NULL;
	int iLocal_126 = 0;
	bool bLocal_127 = 0;
	int iLocal_128 = 0;
	int iLocal_129 = 0;
	bool bLocal_130 = 0;
	int iLocal_131 = 0;
	float fLocal_132 = 0f;
	int iLocal_133 = 0;
	int iLocal_134 = 0;
	int iLocal_135 = 0;
	struct<3> Local_136 = { 0, 0, 0 } ;
	struct<3> Local_137 = { 0, 0, 0 } ;
	struct<3> Local_138 = { 0, 0, 0 } ;
	float fLocal_139 = 0f;
	struct<3> Local_140 = { 0, 0, 0 } ;
	bool bLocal_141 = 0;
	char[] cLocal_142[8] = 0;
	char* sLocal_143 = NULL;
	char* sLocal_144 = NULL;
	char* sLocal_145 = NULL;
	char* sLocal_146 = NULL;
	char* sLocal_147 = NULL;
	char[] cLocal_148[8] = 0;
	char* sLocal_149 = NULL;
	char* sLocal_150 = NULL;
	char* sLocal_151 = NULL;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = -1;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 1000;
	var uLocal_162 = 1000;
	var uLocal_163 = 0;
	struct<147> Local_164 = { 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_165 = 1;
	struct<18> Local_166 = { 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5 } ;
	var uLocal_167 = 0;
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	var uLocal_171 = 0;
#endregion

void __EntryFunction__()
{
	struct<3> Var0;
	
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
	bLocal_46 = HUD::GET_STANDARD_BLIP_ENUM_ID();
	iLocal_47 = HUD::GET_WAYPOINT_BLIP_ENUM_ID();
	iLocal_65 = 3;
	bLocal_80 = true;
	cLocal_92 = "RANDOM@ATMROBBERYGEN";
	cLocal_93 = "RANDOM@ATMROBBERYGEN";
	iLocal_101 = joaat("prop_ld_wallet_01_s");
	iLocal_102 = joaat("prop_ld_wallet_01_s");
	iLocal_133 = 500;
	iLocal_134 = -1;
	iLocal_135 = -1;
	fLocal_139 = 0f;
	bLocal_141 = 0f;
	Local_53 = { ScriptParam_166.f_1[0 /*3*/] };
	fLocal_54 = ScriptParam_166.f_17[0];
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(11))
	{
		if (bLocal_95)
		{
			bLocal_96 = true;
			func_296(0);
		}
		else
		{
			func_278();
		}
	}
	if (SYSTEM::VDIST(Local_53, -203.758f, -861.738f, 29.2684f) < 5f)
	{
		iLocal_65 = 1;
	}
	else if (SYSTEM::VDIST(Local_53, -2957.61f, 488.29f, 14.47f) < 5f)
	{
		iLocal_65 = 1;
	}
	else if (SYSTEM::VDIST(Local_53, 288.973f, -1256.79f, 28.4407f) < 5f)
	{
		iLocal_65 = 2;
	}
	else if (SYSTEM::VDIST(Local_53, -3043.93f, 594.84f, 6.6115f) < 5f)
	{
		iLocal_65 = 3;
	}
	else if (SYSTEM::VDIST(Local_53, 174.715f, 6637.77f, 30.5733f) < 5f)
	{
		iLocal_65 = 4;
	}
	else
	{
		iLocal_65 = 5;
	}
	if (func_236(Local_53, 1, iLocal_65, 1, 0))
	{
		func_233(-1);
	}
	else
	{
		ENTITY::STOP_ENTITY_ANIM();
	}
	SYSTEM::SETTIMERA(0);
	func_232();
	while (true)
	{
		SYSTEM::WAIT(0);
		func_231();
		func_230(bLocal_58, &uLocal_64);
		func_227(&Local_164);
		if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
		}
		if (!func_224())
		{
			if (func_223())
			{
				func_278();
			}
			if (BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
			{
				switch (iLocal_52)
				{
					case 0:
						if (func_197())
						{
							iLocal_52 = 1;
						}
						break;
					
					case 1:
						func_196();
						if (iLocal_69 == 0)
						{
							iLocal_69 = EVENT::ADD_SHOCKING_EVENT_AT_POSITION(101, Local_53, 30000f);
						}
						if (MISC::IS_BIT_SET(bLocal_55))
						{
						}
						if (MISC::IS_BIT_SET(bLocal_56))
						{
						}
						if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_55))
						{
							if (STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_56))
							{
								TASK::TASK_SMART_FLEE_COORD(bLocal_55, Local_53, 200f, -1, false, false);
								PED::SET_PED_KEEP_TASK(bLocal_55, true);
								SYSTEM::WAIT(0);
								func_278();
							}
							if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_56))
							{
								if (CAM::IS_SPHERE_VISIBLE(Local_53, 2.5f))
								{
									if (iLocal_65 == 2)
									{
										if (ENTITY::IS_ENTITY_AT_ENTITY(unk_0x9B0761B4C3EB8BC7(), bLocal_56, 120f, 120f, 8f, false, true, 0) || func_195())
										{
											func_186();
										}
									}
									else if (iLocal_65 == 1)
									{
										if (SYSTEM::VDIST(Local_53, -203.758f, -861.738f, 29.2684f) < 5f)
										{
											if (ENTITY::IS_ENTITY_AT_ENTITY(unk_0x9B0761B4C3EB8BC7(), bLocal_56, 100f, 100f, 8f, false, true, 0) || func_195())
											{
												func_186();
											}
										}
										else if (ENTITY::IS_ENTITY_AT_ENTITY(unk_0x9B0761B4C3EB8BC7(), bLocal_56, 170f, 170f, 8f, false, true, 0) || func_195())
										{
											func_186();
										}
									}
									else if (SYSTEM::VDIST(Local_53, -3044.06f, 594.93f, 6.74f) < 5f)
									{
										if (ENTITY::IS_ENTITY_AT_ENTITY(unk_0x9B0761B4C3EB8BC7(), bLocal_56, 65f, 65f, 5f, false, true, 0) || func_195())
										{
											func_186();
										}
									}
									else if (HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Local_53, -712.9f, -819.32f, 22.73f, 1) < 5f)
									{
										if (ENTITY::IS_ENTITY_AT_ENTITY(unk_0x9B0761B4C3EB8BC7(), bLocal_56, 50f, 50f, 5f, false, true, 0) || func_195())
										{
											func_186();
										}
									}
									else if (HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Local_53, 24.13f, -946.84f, 28.36f, 1) < 5f)
									{
										if (ENTITY::IS_ENTITY_AT_ENTITY(unk_0x9B0761B4C3EB8BC7(), bLocal_56, 60f, 60f, 5f, false, true, 0) || func_195())
										{
											func_186();
										}
									}
									else if (ENTITY::IS_ENTITY_AT_ENTITY(unk_0x9B0761B4C3EB8BC7(), bLocal_56, 30f, 30f, 8f, false, true, 0) || func_195())
									{
										func_186();
									}
								}
							}
						}
						else
						{
							if (Local_107[2 /*10*/].f_7)
							{
								func_185(&Local_107, 2);
							}
							if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_56))
							{
								TASK::TASK_SMART_FLEE_COORD(bLocal_56, Local_53, 200f, -1, false, false);
								PED::SET_PED_KEEP_TASK(bLocal_56, true);
								SYSTEM::WAIT(0);
							}
							func_278();
						}
						break;
				}
			}
			else
			{
				func_183("IF NOT IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE()\n");
				func_278();
			}
		}
		else
		{
			if (MISC::IS_BIT_SET(bLocal_55))
			{
				if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_55))
				{
					if (func_182(bLocal_55, -251125078))
					{
						if (func_181(bLocal_55, Local_53, 1) >= 190f)
						{
							HUD::HIDE_HUD_AND_RADAR_THIS_FRAME(bLocal_55);
							TASK::TASK_SMART_FLEE_PED(bLocal_55, unk_0x9B0761B4C3EB8BC7(), 300f, -1, false, false);
						}
					}
					else if (func_182(bLocal_55, -982327190))
					{
						HUD::HIDE_HUD_AND_RADAR_THIS_FRAME(bLocal_55);
						TASK::TASK_SMART_FLEE_PED(bLocal_55, unk_0x9B0761B4C3EB8BC7(), 300f, -1, false, false);
					}
				}
			}
			if (MISC::IS_BIT_SET(bLocal_56))
			{
			}
			if (MISC::GET_GAME_TIMER() > iLocal_66 + 3000)
			{
				func_152();
			}
			if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(unk_0x9B0761B4C3EB8BC7()))
			{
				if (!func_132() && !func_129())
				{
					PLAYER::_0x36F1B38855F2A8DF(PLAYER::PLAYER_ID());
					if (!iLocal_85 && !bLocal_90)
					{
						if (MISC::IS_BIT_SET(bLocal_56))
						{
							if (SYSTEM::VDIST(NETWORK::NETWORK_ARE_HANDLES_THE_SAME(bLocal_56, 0), -2956.26f, 487.97f, 15.46f) < 5f)
							{
								if (ENTITY::IS_ENTITY_AT_ENTITY(unk_0x9B0761B4C3EB8BC7(), bLocal_56, 100f, 100f, 15f, false, true, 0))
								{
									if (func_122(&Local_107, cLocal_123, sLocal_115, 3, 0, 0, 0))
									{
										iLocal_85 = 1;
									}
								}
							}
							else if (HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Local_53, -203.72f, -861.8f, 29.27f, 1) < 5f)
							{
								if (ENTITY::IS_ENTITY_AT_ENTITY(unk_0x9B0761B4C3EB8BC7(), bLocal_56, 40f, 40f, 15f, false, true, 0))
								{
									if (func_122(&Local_107, cLocal_123, sLocal_115, 3, 0, 0, 0))
									{
										iLocal_85 = 1;
									}
								}
							}
							else if (HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Local_53, 288.46f, -1256.71f, 28.44f, 1) < 5f)
							{
								if (ENTITY::IS_ENTITY_AT_ENTITY(unk_0x9B0761B4C3EB8BC7(), bLocal_56, 50f, 50f, 15f, false, true, 0))
								{
									if (func_122(&Local_107, cLocal_123, sLocal_115, 3, 0, 0, 0))
									{
										iLocal_85 = 1;
									}
								}
							}
							else if (ENTITY::IS_ENTITY_AT_ENTITY(unk_0x9B0761B4C3EB8BC7(), bLocal_56, 50f, 50f, 15f, false, true, 0))
							{
								if (func_122(&Local_107, cLocal_123, sLocal_115, 3, 0, 0, 0))
								{
									iLocal_85 = 1;
								}
							}
						}
					}
					if (SYSTEM::VMAG(bLocal_59))
					{
						if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_55))
						{
							if (iLocal_126)
							{
								if (ENTITY::IS_ENTITY_AT_ENTITY(bLocal_55, unk_0x9B0761B4C3EB8BC7(), fLocal_132, fLocal_132, fLocal_132, false, true, 0))
								{
									if (!SYSTEM::VDIST(bLocal_55, 0))
									{
										if (SYSTEM::TIMERA() > 1000)
										{
											if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), bLocal_55))
											{
												fLocal_132 = SYSTEM::VDIST(NETWORK::NETWORK_ARE_HANDLES_THE_SAME(unk_0x9B0761B4C3EB8BC7(), 1), NETWORK::NETWORK_ARE_HANDLES_THE_SAME(bLocal_55, 1));
												fLocal_132 = (fLocal_132 * 1.5f);
												SYSTEM::SETTIMERA(0);
											}
											PED::SET_PED_COMBAT_ATTRIBUTES(bLocal_55, 17, false);
										}
									}
								}
								else if (!iLocal_128)
								{
									if (ENTITY::IS_ENTITY_AT_ENTITY(unk_0x9B0761B4C3EB8BC7(), bLocal_55, 25f, 25f, 25f, false, true, 0))
									{
										if (!SYSTEM::VDIST(bLocal_55, 0))
										{
											PED::SET_PED_COMBAT_ATTRIBUTES(bLocal_55, 17, true);
											PED::SET_PED_COMBAT_ATTRIBUTES(bLocal_55, 13, false);
											func_121();
											iLocal_128 = 1;
										}
									}
								}
							}
							else if (!iLocal_87)
							{
								if ((PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), bLocal_55) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), bLocal_55)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(bLocal_55, unk_0x9B0761B4C3EB8BC7(), false))
								{
									func_122(&Local_107, cLocal_123, sLocal_113, 4, 0, 0, 0);
									SYSTEM::SETTIMERA(0);
									fLocal_132 = SYSTEM::VDIST(NETWORK::NETWORK_ARE_HANDLES_THE_SAME(unk_0x9B0761B4C3EB8BC7(), 1), NETWORK::NETWORK_ARE_HANDLES_THE_SAME(bLocal_55, 1));
									fLocal_132 = (fLocal_132 * 1.5f);
									iLocal_126 = 1;
									iLocal_87 = 1;
								}
								if (ENTITY::GET_ENTITY_COORDS(bLocal_73, false))
								{
									if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(bLocal_73, unk_0x9B0761B4C3EB8BC7(), true))
									{
										PED::SET_PED_COMBAT_ATTRIBUTES(bLocal_55, 17, false);
										if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(bLocal_55))
										{
											TASK::TASK_VEHICLE_MISSION_PED_TARGET(bLocal_55, bLocal_73, unk_0x9B0761B4C3EB8BC7(), 8, 35f, 4, 10f, 10f, true);
										}
										else
										{
											TASK::TASK_SMART_FLEE_PED(bLocal_55, unk_0x9B0761B4C3EB8BC7(), 300f, -1, false, false);
										}
										func_122(&Local_107, cLocal_123, sLocal_113, 4, 0, 0, 0);
										SYSTEM::SETTIMERA(0);
										fLocal_132 = SYSTEM::VDIST(NETWORK::NETWORK_ARE_HANDLES_THE_SAME(unk_0x9B0761B4C3EB8BC7(), 1), NETWORK::NETWORK_ARE_HANDLES_THE_SAME(bLocal_55, 1));
										fLocal_132 = (fLocal_132 * 1.5f);
										iLocal_126 = 1;
										iLocal_87 = 1;
									}
								}
							}
							if ((iLocal_128 || iLocal_126) || bLocal_130)
							{
								if (SYSTEM::VMAG(bLocal_59))
								{
									if (HUD::GET_BLIP_COLOUR(bLocal_59) == 1)
									{
									}
									else
									{
										HUD::SET_BLIP_AS_FRIENDLY(bLocal_59, false);
										HUD::SET_BLIP_COLOUR(bLocal_59, 1);
									}
								}
								if (!iLocal_128)
								{
									func_121();
									iLocal_128 = 1;
								}
							}
							else
							{
								if (PED::IS_PED_IN_COMBAT(bLocal_55, unk_0x9B0761B4C3EB8BC7()))
								{
									bLocal_130 = true;
								}
								func_119(bLocal_59, &uLocal_70);
							}
							if (MISC::IS_BIT_SET(bLocal_56))
							{
								if (!iLocal_87)
								{
									if (ENTITY::IS_ENTITY_AT_ENTITY(unk_0x9B0761B4C3EB8BC7(), bLocal_56, 15f, 15f, 10f, false, true, 0))
									{
										if (func_122(&Local_107, cLocal_123, sLocal_116, 4, 0, 0, 0))
										{
											TASK::OPEN_SEQUENCE_TASK(&iLocal_61);
											TASK::TASK_PLAY_ANIM(0, cLocal_148, sLocal_149, 8f, -4f, -1, 0, 0f, false, false, false);
											TASK::TASK_PLAY_ANIM(0, cLocal_148, sLocal_150, 8f, -4f, -1, 0, 0f, false, false, false);
											TASK::TASK_PLAY_ANIM(0, cLocal_148, sLocal_151, 8f, -4f, -1, 0, 0f, false, false, false);
											TASK::TASK_PLAY_ANIM(0, cLocal_148, sLocal_149, 8f, -4f, -1, 0, 0f, false, false, false);
											TASK::TASK_PLAY_ANIM(0, cLocal_148, sLocal_150, 8f, -4f, -1, 0, 0f, false, false, false);
											TASK::TASK_PLAY_ANIM(0, cLocal_148, sLocal_151, 8f, -4f, -1, 1, 0f, false, false, false);
											TASK::CLOSE_SEQUENCE_TASK(iLocal_61);
											AUDIO::STOP_SCRIPTED_CONVERSATION(bLocal_56, iLocal_61);
											TASK::CLEAR_SEQUENCE_TASK(&iLocal_61);
											SYSTEM::SETTIMERA(0);
											iLocal_87 = 1;
										}
									}
								}
								else if (!iLocal_88)
								{
									if (ENTITY::IS_ENTITY_AT_ENTITY(unk_0x9B0761B4C3EB8BC7(), bLocal_56, 15f, 15f, 10f, false, true, 0))
									{
										if (((!PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), bLocal_55) && !PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), bLocal_55)) && !PED::IS_PED_PRONE(unk_0x9B0761B4C3EB8BC7())) && func_118(bLocal_56, bLocal_55, 1) > 30f)
										{
											if (func_122(&Local_107, cLocal_123, sLocal_117, 4, 0, 0, 0))
											{
												SYSTEM::SETTIMERA(0);
												iLocal_88 = 1;
											}
										}
									}
								}
								else if (!AUDIO::IS_ANY_SPEECH_PLAYING(bLocal_56))
								{
									func_116(bLocal_56, "GENERIC_CURSE_MED", 24);
								}
							}
							if (func_114())
							{
								func_113();
								if (MISC::IS_BIT_SET(bLocal_56))
								{
									Var0 = { NETWORK::NETWORK_ARE_HANDLES_THE_SAME(bLocal_56, 1) };
								}
								if (!unk_0xC2169C00B643278B(bLocal_55, Var0, 25f, 25f, 25f, 0, 1, 0) && ENTITY::IS_ENTITY_AT_ENTITY(unk_0x9B0761B4C3EB8BC7(), bLocal_55, 12f, 12f, 12f, false, true, 0))
								{
									if (SYSTEM::TIMERA() > 20000)
									{
										if (func_112(bLocal_55) && !MISC::IS_PC_VERSION(bLocal_55))
										{
											if (func_122(&Local_107, cLocal_123, sLocal_118, 4, 0, 0, 0))
											{
												bLocal_130 = true;
												SYSTEM::SETTIMERA(0);
											}
										}
									}
								}
							}
							else if (func_112(bLocal_56))
							{
								if (ENTITY::IS_ENTITY_AT_ENTITY(unk_0x9B0761B4C3EB8BC7(), bLocal_56, Global_19, false, true, 0))
								{
									if (func_122(&Local_107, cLocal_123, sLocal_121, 4, 0, 0, 0))
									{
										TASK::OPEN_SEQUENCE_TASK(&iLocal_61);
										TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, unk_0x9B0761B4C3EB8BC7(), 3000);
										TASK::TASK_WANDER_STANDARD(false, 1193033728, 0);
										TASK::CLOSE_SEQUENCE_TASK(iLocal_61);
										AUDIO::STOP_SCRIPTED_CONVERSATION(bLocal_56, iLocal_61);
										TASK::CLEAR_SEQUENCE_TASK(&iLocal_61);
										bLocal_127 = true;
										func_278();
									}
								}
								else if (bLocal_130)
								{
									if (func_122(&Local_107, cLocal_123, sLocal_122, 4, 0, 0, 0))
									{
										TASK::TASK_WANDER_STANDARD(bLocal_56, 1193033728, 0);
										PED::FORCE_PED_MOTION_STATE(bLocal_56, -668482597, false, 0, false);
										bLocal_127 = true;
										func_278();
									}
								}
								else
								{
									TASK::TASK_WANDER_STANDARD(bLocal_56, 1193033728, 0);
									PED::FORCE_PED_MOTION_STATE(bLocal_56, -668482597, false, 0, false);
									bLocal_127 = true;
									func_278();
								}
							}
							else
							{
								bLocal_127 = true;
								func_278();
							}
						}
						else if (func_114())
						{
							if ((STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_55) || VEHICLE::GET_VEHICLE_MOD(bLocal_55, 1)) || func_182(bLocal_55, -1899872703))
							{
								func_122(&Local_107, cLocal_123, sLocal_125, 4, 0, 0, 0);
								func_109();
								func_185(&Local_107, 2);
								unk_0x93370FA10F15BE44(&bLocal_59);
							}
						}
					}
					else if (!SYSTEM::VMAG(bLocal_58))
					{
						if (bLocal_95)
						{
							if (SYSTEM::VMAG(bLocal_60))
							{
								unk_0x93370FA10F15BE44(&bLocal_60);
							}
							bLocal_60 = false;
							PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
							bLocal_58 = func_105(bLocal_56, 0, 0);
							func_104(&uLocal_64);
							if (MISC::IS_BIT_SET(bLocal_56))
							{
								bLocal_82 = SYSTEM::VDIST(NETWORK::NETWORK_ARE_HANDLES_THE_SAME(unk_0x9B0761B4C3EB8BC7(), 1), NETWORK::NETWORK_ARE_HANDLES_THE_SAME(bLocal_56, 0));
								ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(bLocal_56);
							}
							if (bLocal_82 > 750f)
							{
								func_296(0);
							}
						}
						else
						{
							func_101();
						}
					}
					else
					{
						if (AUDIO::SET_SCRIPT_UPDATE_DOOR_AUDIO(PLAYER::PLAYER_ID()) > 0)
						{
							if (bLocal_95)
							{
								func_296(0);
							}
							else
							{
								func_278();
							}
						}
						if (bLocal_100)
						{
						}
						else
						{
							func_2();
						}
						if (!bLocal_100)
						{
							if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_56))
							{
								if (SYSTEM::VDIST(NETWORK::NETWORK_ARE_HANDLES_THE_SAME(unk_0x9B0761B4C3EB8BC7(), 1), NETWORK::NETWORK_ARE_HANDLES_THE_SAME(bLocal_56, 0)) > (bLocal_82 + 100f))
								{
									if (bLocal_95)
									{
										func_296(0);
									}
									else
									{
										TASK::TASK_SMART_FLEE_PED(bLocal_56, unk_0x9B0761B4C3EB8BC7(), 100f, -1, false, false);
										func_278();
									}
								}
								else if (SYSTEM::VDIST(NETWORK::NETWORK_ARE_HANDLES_THE_SAME(unk_0x9B0761B4C3EB8BC7(), 1), NETWORK::NETWORK_ARE_HANDLES_THE_SAME(bLocal_56, 0)) < bLocal_82)
								{
									bLocal_82 = SYSTEM::VDIST(NETWORK::NETWORK_ARE_HANDLES_THE_SAME(unk_0x9B0761B4C3EB8BC7(), 1), NETWORK::NETWORK_ARE_HANDLES_THE_SAME(bLocal_56, 0));
								}
								if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(bLocal_56, unk_0x9B0761B4C3EB8BC7(), true))
								{
									if (bLocal_95)
									{
										func_296(0);
									}
								}
							}
						}
					}
				}
				else
				{
					func_1();
				}
			}
			else
			{
				func_1();
			}
		}
	}
}

void func_1()
{
	if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_56))
	{
		TASK::TASK_SMART_FLEE_PED(bLocal_56, unk_0x9B0761B4C3EB8BC7(), 100f, -1, false, false);
		func_116(bLocal_56, "GENERIC_FRIGHTENED_HIGH", 24);
		PED::SET_PED_KEEP_TASK(bLocal_56, true);
		PED::_0x2208438012482A1A(bLocal_56, 0);
		PED::SET_PED_CAN_BE_TARGETTED(bLocal_56, true);
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&bLocal_56);
	}
	func_101();
	if (bLocal_90)
	{
		if (SYSTEM::VMAG(bLocal_60))
		{
			if (OBJECT::DOES_PICKUP_EXIST(iLocal_89))
			{
				if (SYSTEM::VDIST(NETWORK::NETWORK_ARE_HANDLES_THE_SAME(unk_0x9B0761B4C3EB8BC7(), 1), OBJECT::GET_PICKUP_COORDS(iLocal_89)) > 100f)
				{
					func_278();
				}
			}
		}
		else if (bLocal_95)
		{
			func_296(0);
		}
		else if (STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_55))
		{
			func_278();
		}
	}
	if (SYSTEM::VMAG(bLocal_59))
	{
		if (STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_55))
		{
			unk_0x93370FA10F15BE44(&bLocal_59);
		}
		else if (!func_114())
		{
			func_278();
		}
	}
}

void func_2()
{
	bool bVar0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	struct<3> Var5;
	struct<3> Var6;
	struct<3> Var7;
	bool bVar8;
	float fVar9;
	bool bVar10;
	char cVar11[16];
	char cVar12[16];
	var uVar13;
	bool bVar14;
	
	if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_56))
	{
		if (!bLocal_99)
		{
			if (iLocal_129)
			{
				if (!iLocal_131)
				{
					if (ENTITY::IS_ENTITY_AT_ENTITY(unk_0x9B0761B4C3EB8BC7(), bLocal_56, 15f, 15f, 20f, false, true, 0))
					{
						func_116(bLocal_56, "GENERIC_HI", 5);
						iLocal_131 = 1;
					}
				}
				if (HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Local_53, 296.13f, -894.01f, 28.23f, 1) < 5f)
				{
					if (fLocal_83 == 6f)
					{
						fLocal_83 = 5f;
					}
				}
				else if (HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Local_53, -2072.88f, -317.19f, 12.32f, 1) < 5f)
				{
					if (fLocal_83 == 6f)
					{
						fLocal_83 = 4f;
					}
				}
				if (ENTITY::IS_ENTITY_AT_ENTITY(unk_0x9B0761B4C3EB8BC7(), bLocal_56, fLocal_83, fLocal_83, fLocal_83, false, true, 0) && !func_100())
				{
					if (func_97(2))
					{
						unk_0xD289B55B6AADBA10(1);
					}
					if (!func_129())
					{
						if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
						{
							if (func_96(1, 0, 1))
							{
								if (!unk_0xCE990E643CD9D0E5(Global_7551, 11) || func_95())
								{
									if (!MISC::IS_PC_VERSION(unk_0x9B0761B4C3EB8BC7()))
									{
										unk_0xD289B55B6AADBA10(1);
										if (func_94())
										{
											func_93();
										}
										if (iLocal_101 == joaat("prop_ld_wallet_pickup"))
										{
											bLocal_57 = OBJECT::CREATE_OBJECT(iLocal_102, NETWORK::NETWORK_ARE_HANDLES_THE_SAME(unk_0x9B0761B4C3EB8BC7(), 1), true, true, false);
										}
										else
										{
											bLocal_57 = OBJECT::CREATE_OBJECT(iLocal_101, NETWORK::NETWORK_ARE_HANDLES_THE_SAME(unk_0x9B0761B4C3EB8BC7(), 1), true, true, false);
										}
										if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(unk_0x9B0761B4C3EB8BC7()))
										{
											OBJECT::CREATE_OBJECT_NO_OFFSET(bLocal_57, unk_0x9B0761B4C3EB8BC7(), ENTITY::ATTACH_ENTITY_TO_ENTITY(unk_0x9B0761B4C3EB8BC7(), 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
										}
										ENTITY::SET_ENTITY_VISIBLE(bLocal_57, false, false);
										func_85(1, 1, 1, 0, 0, 0, 0);
										if (SYSTEM::VDIST(unk_0x9B0761B4C3EB8BC7(), 0))
										{
											if (MISC::IS_BIT_SET(bLocal_57))
											{
												while ((!func_83(ENTITY::GET_ENTITY_MODEL(unk_0x9B0761B4C3EB8BC7(), 0), fLocal_84, 1, 1056964608, 0, 1, 0) || func_94()) || !ENTITY::DOES_ENTITY_HAVE_DRAWABLE(bLocal_57))
												{
													if (!func_83(ENTITY::GET_ENTITY_MODEL(unk_0x9B0761B4C3EB8BC7(), 0), fLocal_84, 1, 1056964608, 0, 1, 0))
													{
													}
													if (func_94())
													{
													}
													if (!ENTITY::DOES_ENTITY_HAVE_DRAWABLE(bLocal_57))
													{
													}
													SYSTEM::WAIT(0);
												}
												if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(unk_0x9B0761B4C3EB8BC7()))
												{
													TASK::TASK_LEAVE_ANY_VEHICLE(unk_0x9B0761B4C3EB8BC7(), 0, 0);
												}
											}
										}
										else if (MISC::IS_BIT_SET(bLocal_57))
										{
											while (func_94() || !ENTITY::DOES_ENTITY_HAVE_DRAWABLE(bLocal_57))
											{
												SYSTEM::WAIT(0);
											}
										}
										PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
										if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_56))
										{
											PED::SET_PED_CAN_RAGDOLL(bLocal_56, false);
										}
										EVENT::REMOVE_ALL_SHOCKING_EVENTS(false);
										EVENT::REMOVE_SHOCKING_EVENT(iLocal_69);
										PED::SET_PED_STEALTH_MOVEMENT(unk_0x9B0761B4C3EB8BC7(), false, 0);
										func_81();
										func_75(0);
										SYSTEM::WAIT(0);
										if (func_112(bLocal_56))
										{
											if (PED::IS_PED_MALE(bLocal_56))
											{
												sLocal_94 = "move_m@hurry@b";
											}
											else
											{
												sLocal_94 = "move_f@hurry@a";
											}
										}
										STREAMING::REQUEST_CLIP_SET(sLocal_94);
										bLocal_99 = true;
										SYSTEM::SETTIMERA(0);
									}
								}
							}
						}
					}
				}
				else
				{
					func_73(NETWORK::NETWORK_ARE_HANDLES_THE_SAME(bLocal_56, 1), &fLocal_83, &fLocal_84);
					if (!func_100())
					{
						if (!func_182(bLocal_56, 1227113341) && !SYSTEM::VDIST(unk_0x9B0761B4C3EB8BC7(), 1))
						{
							HUD::HIDE_HUD_AND_RADAR_THIS_FRAME(bLocal_56);
							TASK::TASK_GO_TO_ENTITY(bLocal_56, unk_0x9B0761B4C3EB8BC7(), 20000, 0.5f, 1f, 2f, 0);
						}
					}
					else if (func_182(bLocal_56, 1227113341))
					{
						HUD::HIDE_HUD_AND_RADAR_THIS_FRAME(bLocal_56);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_61);
						TASK::OPEN_SEQUENCE_TASK(&iLocal_61);
						TASK::TASK_LOOK_AT_ENTITY(false, unk_0x9B0761B4C3EB8BC7(), -1, 2048, 2);
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, unk_0x9B0761B4C3EB8BC7(), 0);
						TASK::TASK_PLAY_ANIM(0, cLocal_148, sLocal_149, 8f, -8f, -1, 0, 0f, false, false, false);
						TASK::TASK_PLAY_ANIM(0, cLocal_148, sLocal_151, 8f, -8f, -1, 0, 0f, false, false, false);
						TASK::TASK_PLAY_ANIM(0, cLocal_148, sLocal_150, 8f, -8f, -1, 1, 0f, false, false, false);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_61);
						AUDIO::STOP_SCRIPTED_CONVERSATION(bLocal_56, iLocal_61);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_61);
						ENTITY::FREEZE_ENTITY_POSITION(bLocal_56, false, 0);
					}
				}
			}
			else if (ENTITY::IS_ENTITY_AT_ENTITY(unk_0x9B0761B4C3EB8BC7(), bLocal_56, 25f, 25f, 20f, false, true, 1) || ENTITY::IS_ENTITY_AT_ENTITY(unk_0x9B0761B4C3EB8BC7(), bLocal_56, 30f, 30f, 20f, false, true, 2))
			{
				if (!func_100())
				{
					if (!SYSTEM::VDIST(unk_0x9B0761B4C3EB8BC7(), 1))
					{
						HUD::HIDE_HUD_AND_RADAR_THIS_FRAME(bLocal_56);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_61);
						TASK::OPEN_SEQUENCE_TASK(&iLocal_61);
						TASK::TASK_LOOK_AT_ENTITY(false, unk_0x9B0761B4C3EB8BC7(), -1, 2048, 2);
						TASK::TASK_GO_TO_ENTITY(false, unk_0x9B0761B4C3EB8BC7(), 20000, 0.5f, 1f, 2f, 0);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_61);
						AUDIO::STOP_SCRIPTED_CONVERSATION(bLocal_56, iLocal_61);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_61);
					}
					iLocal_129 = 1;
				}
			}
		}
		if (bLocal_99)
		{
			switch (iLocal_98)
			{
				case 0:
					if (((!SYSTEM::VDIST(unk_0x9B0761B4C3EB8BC7(), 1) && !MISC::IS_PC_VERSION(unk_0x9B0761B4C3EB8BC7())) && !unk_0x78F9A93AC3E99CD8(unk_0x9B0761B4C3EB8BC7())) && !TASK::IS_PED_GETTING_UP(unk_0x9B0761B4C3EB8BC7()))
					{
						if (bLocal_80)
						{
							if (HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Local_53, -712.9f, -819.32f, 22.73f, 1) < 5f && unk_0x1037B9D45CE6B788(unk_0x9B0761B4C3EB8BC7(), -709.9229f, -824.0863f, 22.0751f, -715.2137f, -824.2247f, 25.01217f, 3.25f, 0, 1, 0))
							{
								Local_78 = { -710.1279f, -821.3084f, 22.6169f };
								Local_79 = { 0f, 0f, 266.962f };
							}
							else if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_56))
							{
								Var7 = { NETWORK::NETWORK_ARE_HANDLES_THE_SAME(unk_0x9B0761B4C3EB8BC7(), 0) };
								func_70(bLocal_56, &Local_78, &Local_79, cLocal_142, sLocal_144);
								if ((Local_78.f_2 - Var7.f_2) > 20f)
								{
									Local_78 = { Var7 };
								}
								Local_78.f_2 = (Local_78.f_2 + 2f);
								MISC::GET_GROUND_Z_FOR_3D_COORD(Local_78, &(Local_78.f_2), false, false);
								if (Local_78.f_2 == 0f)
								{
									Local_78 = { Local_138 };
									Local_79.f_2 = fLocal_139;
								}
								if (HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Local_53, -203.72f, -861.8f, 29.27f, 1) < 5f)
								{
									if (unk_0x1037B9D45CE6B788(unk_0x9B0761B4C3EB8BC7(), -202.4218f, -864.449f, 27.88059f, -211.4486f, -861.5274f, 31.75401f, 9.5f, 0, 1, 0))
									{
										if (Local_79.f_2 > 315f && Local_79.f_2 < 360f)
										{
											Local_79.f_2 = 251.4238f;
										}
										else if (Local_79.f_2 > 120f && Local_79.f_2 < 212f)
										{
											Local_79.f_2 = 67.2304f;
										}
										Local_78 = { -205.81f, -865.2f, 28.5f };
									}
								}
								else if (HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Local_53, -821.33f, -1082.43f, 10.14f, 1) < 5f && HUD::GET_BLIP_INFO_ID_TYPE(Local_78, -826.1744f, -1083.943f, 9.137519f, -811.6559f, -1075.567f, 13.88779f, 6f, 0, 1))
								{
									Local_78 = { -814.0593f, -1082.483f, 10.0671f };
									Local_79.f_2 = 275.5752f;
								}
								else if (HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Local_53, -387.12f, 6045.79f, 30.5f, 1) < 5f && HUD::GET_BLIP_INFO_ID_TYPE(Local_78, -377.5788f, 6033.821f, 29.29119f, -373.0138f, 6029.14f, 33.75382f, 4.75f, 0, 1))
								{
									Local_78 = { -375.0627f, 6030.533f, 30.5313f };
									Local_79.f_2 = 222.9049f;
								}
								else if (HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Local_53, -387.12f, 6045.79f, 30.5f, 1) < 5f && HUD::GET_BLIP_INFO_ID_TYPE(Local_78, -381.4607f, 6031.481f, 29.24971f, -376.6766f, 6026.68f, 33.76656f, 3f, 0, 1))
								{
									Local_78 = { -379.7835f, 6029.472f, 30.5014f };
									Local_79.f_2 = 213.2611f;
								}
								else if (HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Local_53, 89.39f, 2f, 67.34f, 1) < 5f)
								{
									if (unk_0x1037B9D45CE6B788(unk_0x9B0761B4C3EB8BC7(), 73.30347f, 4.781172f, 66.79439f, 107.6572f, -8.330787f, 69.16833f, 9.75f, 0, 1, 0))
									{
										if (Local_79.f_2 > 128f && Local_79.f_2 < 195f)
										{
											if (Local_79.f_2 > 162f)
											{
												Local_79.f_2 = 220f;
											}
											else
											{
												Local_79.f_2 = 107f;
											}
										}
									}
								}
								else if (HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Local_53, 174.53f, 6637.64f, 30.57f, 1) < 5f)
								{
									if (unk_0x1037B9D45CE6B788(unk_0x9B0761B4C3EB8BC7(), 176.3895f, 6635.983f, 29.87799f, 181.7585f, 6641.302f, 33.556f, 7.75f, 0, 1, 0))
									{
										if (Local_79.f_2 > 244.444f && Local_79.f_2 < 326.2103f)
										{
											Local_79.f_2 = 343.1367f;
										}
									}
								}
								else if (HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Local_53, -3044.11f, 594.34f, 6.73f, 1) < 5f)
								{
									if (unk_0x1037B9D45CE6B788(unk_0x9B0761B4C3EB8BC7(), -3042.549f, 597.1118f, 6.612578f, -3046.965f, 595.6973f, 9.065809f, 5f, 0, 1, 0))
									{
										Local_78 = { -3045.4f, 598.65f, 6.51f };
									}
								}
								Var4 = { unk_0xD7D25254A712E758(cLocal_142, sLocal_144, Local_78, Local_79, 0f, 2) };
								Var5 = { Var4 - Local_78 };
								Var5.f_2 = 0f;
								bVar10 = SYSTEM::VMAG(Var5);
								MISC::GET_GROUND_Z_FOR_3D_COORD(Var4, &(Var4.f_2), false, false);
								fVar9 = (Local_78.f_2 - Var4.f_2);
								Local_79.x = MISC::ATAN2(fVar9, bVar10);
								if (Local_79.x > 20f || Local_79.x < -330f)
								{
									Local_78 = { Local_138 };
									Local_79.x = 0f;
									Local_79.f_2 = fLocal_139;
									Var4 = { unk_0xD7D25254A712E758(cLocal_142, sLocal_144, Local_78, Local_79, 0f, 2) };
									Var5 = { Var4 - Local_78 };
									Var5.f_2 = 0f;
									bVar10 = SYSTEM::VMAG(Var5);
									MISC::GET_GROUND_Z_FOR_3D_COORD(Var4, &(Var4.f_2), false, false);
									fVar9 = (Local_78.f_2 - Var4.f_2);
								}
							}
							if (func_69(Local_53, -526.58f, -1222.79f, 17.46f, 10f, 0))
							{
								if (HUD::GET_BLIP_INFO_ID_TYPE(Local_78, -538.4412f, -1214.903f, 16.79794f, -520.3268f, -1223.249f, 20.556f, 6.5f, 0, 1))
								{
									if (Local_79.f_2 < 35f || Local_79.f_2 > 275f)
									{
										if (Local_79.f_2 < 335f)
										{
											Local_79.f_2 = 260f;
										}
										else
										{
											Local_79.f_2 = 55f;
										}
									}
									else if (Local_79.f_2 > 107.2072f && Local_79.f_2 < 210f)
									{
										if (Local_79.f_2 > 154.6742f)
										{
											Local_79.f_2 = 233f;
										}
										else
										{
											Local_79.f_2 = 73f;
										}
									}
								}
							}
						}
						else if (iLocal_65 == 4)
						{
							if (SYSTEM::VDIST(NETWORK::NETWORK_ARE_HANDLES_THE_SAME(unk_0x9B0761B4C3EB8BC7(), 0), 183.6065f, 6636.653f, 30.6299f) < SYSTEM::VDIST(NETWORK::NETWORK_ARE_HANDLES_THE_SAME(unk_0x9B0761B4C3EB8BC7(), 0), 172.2291f, 6631.007f, 30.7398f))
							{
								Local_78 = { 183.6065f, 6636.653f, 30.6299f };
								Local_79 = { 0f, 0f, 265f };
							}
							else
							{
								Local_78 = { 172.2291f, 6631.007f, 30.7398f };
								Local_79 = { 0f, 0f, 132f };
							}
						}
						else
						{
							Var1 = { NETWORK::NETWORK_ARE_HANDLES_THE_SAME(unk_0x9B0761B4C3EB8BC7(), 1) };
							if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_56))
							{
								Var2 = { NETWORK::NETWORK_ARE_HANDLES_THE_SAME(bLocal_56, 1) };
							}
							Var3 = { Var1 - Var2 };
							Local_78 = { Var1 };
							Local_78 = { Local_78.x, Local_78.f_1, (Local_78.f_2 - 1f) };
							Local_79 = { 0f, 0f, unk_0x9075769DD4F148B7(Var3.x, Var3.f_1) };
						}
						if (HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Local_78, -535.795f, -1222.23f, 17.4567f, 1) < 5f)
						{
							Local_78 = { -521.475f, -1210.47f, 17.1848f };
							Local_79 = { 0f, 0f, 308.502f };
						}
						if (ENTITY::GET_ENTITY_COORDS(bLocal_73, false))
						{
							STREAMING::REMOVE_ANIM_DICT(&bLocal_73);
						}
						if (ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYERS_LAST_VEHICLE(), false))
						{
							if (!ENTITY::GET_ENTITY_COORDS(bVar0, false))
							{
								bVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
								ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(MISC::GET_MODEL_DIMENSIONS(bVar0), &Local_136, &Local_137);
								if (unk_0xC2169C00B643278B(bVar0, Local_78, (Local_137.f_1 + 1f), (Local_137.f_1 + 1f), 3f, 0, 1, 0) || unk_0xC2169C00B643278B(bVar0, unk_0xD7D25254A712E758(cLocal_142, sLocal_144, Local_78, Local_79, 0, 2), (Local_137.f_1 + 1f), (Local_137.f_1 + 1f), 3f, 0, 1, 0))
								{
									if (func_69(Local_53, -526.58f, -1222.79f, 17.46f, 10f, 0) && (unk_0x1037B9D45CE6B788(unk_0x9B0761B4C3EB8BC7(), -529.7477f, -1218.399f, 16.78482f, -538.9778f, -1213.756f, 20.53685f, 7.5f, 0, 1, 0) || unk_0x1037B9D45CE6B788(unk_0x9B0761B4C3EB8BC7(), -529.7477f, -1218.399f, 16.78482f, -520.9798f, -1222.305f, 20.55204f, 7.5f, 0, 1, 0)))
									{
										if (unk_0x1037B9D45CE6B788(unk_0x9B0761B4C3EB8BC7(), -529.7477f, -1218.399f, 16.78482f, -538.9778f, -1213.756f, 20.53685f, 7.5f, 0, 1, 0))
										{
											Var6 = { 2.9f, 12f, 8f };
											Local_75 = { -543.34f, -1216.8f, 17.96f };
											bLocal_77 = 337.5f;
											bVar8 = true;
										}
										else
										{
											Var6 = { 2.9f, 12f, 8f };
											Local_75 = { -522.4418f, -1214.57f, 17.1848f };
											bLocal_77 = 246.7714f;
											bVar8 = true;
										}
										if ((Local_137.x - Local_136.x) > Var6.x)
										{
											bVar8 = false;
										}
										else if ((Local_137.f_1 - Local_136.f_1) > Var6.f_1)
										{
											bVar8 = false;
										}
										else if ((Local_137.f_2 - Local_136.f_2) > Var6.f_2)
										{
											bVar8 = false;
										}
										if (bVar8)
										{
											if (func_68(bVar0))
											{
												unk_0x03D382CB0B44E2FC(bVar0, Local_75, 1, 0, 0, 1);
												ENTITY::SET_ENTITY_HEADING(bVar0, bLocal_77);
												VEHICLE::SET_VEHICLE_DOOR_LATCHED(bVar0, 0, true, true, true);
												VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(bVar0, 5f);
											}
										}
										else if (MISC::IS_BIT_SET(bVar0))
										{
											if (!unk_0xE0B3BC41DDA88DF0(unk_0x9B0761B4C3EB8BC7(), bVar0, 0))
											{
												VEHICLE::DELETE_VEHICLE(&bVar0);
											}
										}
									}
									else if (HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Local_53, -203.72f, -861.8f, 29.27f, 1) < 5f && unk_0x1037B9D45CE6B788(unk_0x9B0761B4C3EB8BC7(), -197.7616f, -865.9772f, 27.31116f, -191.161f, -849.0546f, 32.89275f, 10.25f, 0, 1, 0))
									{
										Var6 = { 2.9f, 12f, 8f };
										Local_75 = { -187f, -855.51f, 29.02f };
										bLocal_77 = 158.28f;
										bVar8 = true;
										if ((Local_137.x - Local_136.x) > Var6.x)
										{
											bVar8 = false;
										}
										else if ((Local_137.f_1 - Local_136.f_1) > Var6.f_1)
										{
											bVar8 = false;
										}
										else if ((Local_137.f_2 - Local_136.f_2) > Var6.f_2)
										{
											bVar8 = false;
										}
										if (bVar8)
										{
											if (func_68(bVar0))
											{
												unk_0x03D382CB0B44E2FC(bVar0, Local_75, 1, 0, 0, 1);
												ENTITY::SET_ENTITY_HEADING(bVar0, bLocal_77);
												VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(bVar0, 5f);
											}
										}
										else if (MISC::IS_BIT_SET(bVar0))
										{
											if (!unk_0xE0B3BC41DDA88DF0(unk_0x9B0761B4C3EB8BC7(), bVar0, 0))
											{
												VEHICLE::DELETE_VEHICLE(&bVar0);
											}
										}
									}
									else if (HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Local_53, -387.12f, 6045.79f, 30.5f, 1) < 5f && unk_0x1037B9D45CE6B788(unk_0x9B0761B4C3EB8BC7(), -390.4536f, 6044.05f, 29.99868f, -380.4771f, 6032.985f, 33.24879f, 6f, 0, 1, 0))
									{
										Var6 = { 2.9f, 12f, 8f };
										Local_75 = { -395.84f, 6051.16f, 31.19f };
										bLocal_77 = 139.92f;
										bVar8 = true;
										if ((Local_137.x - Local_136.x) > Var6.x)
										{
											bVar8 = false;
										}
										else if ((Local_137.f_1 - Local_136.f_1) > Var6.f_1)
										{
											bVar8 = false;
										}
										else if ((Local_137.f_2 - Local_136.f_2) > Var6.f_2)
										{
											bVar8 = false;
										}
										if (bVar8)
										{
											if (func_68(bVar0))
											{
												unk_0x03D382CB0B44E2FC(bVar0, Local_75, 1, 0, 0, 1);
												ENTITY::SET_ENTITY_HEADING(bVar0, bLocal_77);
												VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(bVar0, 5f);
											}
										}
										else if (MISC::IS_BIT_SET(bVar0))
										{
											if (!unk_0xE0B3BC41DDA88DF0(unk_0x9B0761B4C3EB8BC7(), bVar0, 0))
											{
												VEHICLE::DELETE_VEHICLE(&bVar0);
											}
										}
									}
									else if (HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Local_53, -2956.78f, 488.19f, 14.47f, 1) < 5f && unk_0x1037B9D45CE6B788(unk_0x9B0761B4C3EB8BC7(), -2955.234f, 492.4626f, 13.80307f, -2967.116f, 493.0511f, 17.05663f, 9.75f, 0, 1, 0))
									{
										Var6 = { 2.9f, 12f, 8f };
										Local_75 = { -2972.31f, 490.07f, 15.03f };
										bLocal_77 = 357.64f;
										bVar8 = true;
										if ((Local_137.x - Local_136.x) > Var6.x)
										{
											bVar8 = false;
										}
										else if ((Local_137.f_1 - Local_136.f_1) > Var6.f_1)
										{
											bVar8 = false;
										}
										else if ((Local_137.f_2 - Local_136.f_2) > Var6.f_2)
										{
											bVar8 = false;
										}
										if (bVar8)
										{
											if (func_68(bVar0))
											{
												unk_0x03D382CB0B44E2FC(bVar0, Local_75, 1, 0, 0, 1);
												ENTITY::SET_ENTITY_HEADING(bVar0, bLocal_77);
												VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(bVar0, 5f);
											}
										}
										else if (MISC::IS_BIT_SET(bVar0))
										{
											if (!unk_0xE0B3BC41DDA88DF0(unk_0x9B0761B4C3EB8BC7(), bVar0, 0))
											{
												VEHICLE::DELETE_VEHICLE(&bVar0);
											}
										}
									}
									else if ((HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Local_53, 174.53f, 6637.64f, 30.57f, 1) < 5f && unk_0x1037B9D45CE6B788(unk_0x9B0761B4C3EB8BC7(), 178.246f, 6638.824f, 30.5274f, 173.4713f, 6634.083f, 33.6823f, 6f, 0, 1, 0)) && unk_0x1037B9D45CE6B788(bVar0, 180.1225f, 6640.33f, 30.78129f, 171.623f, 6631.794f, 33.69934f, 8f, 0, 1, 0))
									{
										Var6 = { 2.9f, 12f, 8f };
										Local_75 = { 184.05f, 6628.75f, 31.27f };
										bLocal_77 = 89.37f;
										bVar8 = true;
										if ((Local_137.x - Local_136.x) > Var6.x)
										{
											bVar8 = false;
										}
										else if ((Local_137.f_1 - Local_136.f_1) > Var6.f_1)
										{
											bVar8 = false;
										}
										else if ((Local_137.f_2 - Local_136.f_2) > Var6.f_2)
										{
											bVar8 = false;
										}
										if (bVar8)
										{
											if (func_68(bVar0))
											{
												unk_0x03D382CB0B44E2FC(bVar0, Local_75, 1, 0, 0, 1);
												ENTITY::SET_ENTITY_HEADING(bVar0, bLocal_77);
												VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(bVar0, 5f);
											}
										}
										else if (MISC::IS_BIT_SET(bVar0))
										{
											if (!unk_0xE0B3BC41DDA88DF0(unk_0x9B0761B4C3EB8BC7(), bVar0, 0))
											{
												VEHICLE::DELETE_VEHICLE(&bVar0);
											}
										}
									}
									else
									{
										Var6 = { 2.9f, 12f, 8f };
										bLocal_77 = ENTITY::IS_ENTITY_IN_WATER(bVar0);
										Local_75 = { func_66(Local_78, unk_0xD7D25254A712E758(cLocal_142, sLocal_144, Local_78, Local_79, 0, 2)) };
										if (func_65(0f, 0f, 0f, Local_75, 0))
										{
											Local_75 = { NETWORK::NETWORK_ARE_HANDLES_THE_SAME(bVar0, 1) };
										}
										if (VEHICLE::IS_THIS_MODEL_A_HELI(MISC::GET_MODEL_DIMENSIONS(bVar0)))
										{
											Local_137.x = (Local_137.x + 3f);
											Local_137.f_1 = (Local_137.f_1 + 3f);
										}
										bVar8 = true;
										if ((Local_137.x - Local_136.x) > Var6.x)
										{
											bVar8 = false;
										}
										else if ((Local_137.f_1 - Local_136.f_1) > Var6.f_1)
										{
											bVar8 = false;
										}
										else if ((Local_137.f_2 - Local_136.f_2) > Var6.f_2)
										{
											bVar8 = false;
										}
										if (bVar8)
										{
											if (func_68(bVar0))
											{
												unk_0x03D382CB0B44E2FC(bVar0, Local_75, 1, 0, 0, 1);
												ENTITY::SET_ENTITY_HEADING(bVar0, bLocal_77);
												VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(bVar0, 5f);
											}
										}
										else if (MISC::IS_BIT_SET(bVar0))
										{
											if (!unk_0xE0B3BC41DDA88DF0(unk_0x9B0761B4C3EB8BC7(), bVar0, 0))
											{
												VEHICLE::DELETE_VEHICLE(&bVar0);
											}
										}
									}
								}
							}
						}
						if (func_68(bVar0))
						{
							ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(MISC::GET_MODEL_DIMENSIONS(bVar0), &Local_136, &Local_137);
							if (unk_0xC2169C00B643278B(bVar0, Local_78, (Local_137.f_1 + 1f), (Local_137.f_1 + 1f), 1f, 0, 1, 0) || unk_0xC2169C00B643278B(bVar0, unk_0xD7D25254A712E758(cLocal_142, sLocal_144, Local_78, Local_79, 0, 2), (Local_137.f_1 + 1f), (Local_137.f_1 + 1f), 1f, 0, 1, 0))
							{
								unk_0x03D382CB0B44E2FC(bVar0, Local_140, 1, 0, 0, 1);
								ENTITY::SET_ENTITY_HEADING(bVar0, bLocal_141);
								VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(bVar0, 5f);
							}
						}
						if (MISC::IS_BIT_SET(bLocal_57))
						{
							ENTITY::SET_ENTITY_VISIBLE(bLocal_57, true, false);
						}
						VEHICLE::REMOVE_VEHICLES_FROM_GENERATORS_IN_AREA(Local_78 - Vector(10f, 10f, 10f), Local_78 + Vector(10f, 10f, 10f), 0);
						MISC::CLEAR_AREA_OF_PROJECTILES(Local_78, 20f, 0);
						MISC::CLEAR_AREA_OF_PEDS(Local_78, 10f, 0);
						MISC::CLEAR_AREA(Local_78, (Local_137.f_1 + 1f), true, false, false, false);
						FIRE::STOP_FIRE_IN_RANGE(Local_78, 25f);
						WEAPON::HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(unk_0x9B0761B4C3EB8BC7(), true);
						PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_ID(), 0, false);
						iLocal_68 = PED::CREATE_SYNCHRONIZED_SCENE(Local_78, Local_79, 2);
						PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(iLocal_68, false);
						iLocal_97 = CAM::CREATE_CAM("DEFAULT_ANIMATED_CAMERA", false);
						CAM::SET_CAM_FOV(iLocal_97, 15f);
						CAM::PLAY_SYNCHRONIZED_CAM_ANIM(iLocal_97, iLocal_68, sLocal_145, cLocal_142);
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(unk_0x9B0761B4C3EB8BC7());
						TASK::TASK_CLEAR_LOOK_AT(unk_0x9B0761B4C3EB8BC7());
						TASK::TASK_SYNCHRONIZED_SCENE(unk_0x9B0761B4C3EB8BC7(), iLocal_68, cLocal_142, sLocal_143, 1000f, -1000f, 1024, 0, 1000f, 0);
						ENTITY::FREEZE_ENTITY_POSITION(unk_0x9B0761B4C3EB8BC7(), false, 0);
						if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_56))
						{
							TASK::CLEAR_PED_TASKS_IMMEDIATELY(bLocal_56);
							TASK::TASK_SYNCHRONIZED_SCENE(bLocal_56, iLocal_68, cLocal_142, sLocal_144, 1000f, -4f, 0, 0, 1000f, 0);
						}
						CAM::SET_CAM_ACTIVE(iLocal_97, true);
						CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
						StringCopy(&cVar11, sLocal_124, 16);
						StringConCat(&cVar11, "_1", 16);
						StringCopy(&cVar12, cLocal_120, 16);
						StringConCat(&cVar12, "_1", 16);
						func_53(&Local_107, cLocal_123, sLocal_124, &cVar11, cLocal_120, &cVar12, 7, 0, 0);
						SYSTEM::SETTIMERA(0);
						EVENT::REMOVE_ALL_SHOCKING_EVENTS(false);
						func_52(joaat("RC_WALLETS_RETURNED"), 1);
						STATS::STAT_GET_INT(joaat("RC_WALLETS_RETURNED"), &uVar13, -1);
						iLocal_98++;
					}
					else
					{
						if (SYSTEM::VDIST(unk_0x9B0761B4C3EB8BC7(), 1))
						{
						}
						if (MISC::IS_PC_VERSION(unk_0x9B0761B4C3EB8BC7()))
						{
						}
						if (unk_0x78F9A93AC3E99CD8(unk_0x9B0761B4C3EB8BC7()))
						{
						}
						if (TASK::IS_PED_GETTING_UP(unk_0x9B0761B4C3EB8BC7()))
						{
						}
					}
					unk_0xA86915034F55A3BF();
					break;
				
				case 1:
					if ((PED::DETACH_SYNCHRONIZED_SCENE(iLocal_68) && ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_68) == 1f) || func_49())
					{
						PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
						PLAYER::SPECIAL_ABILITY_FILL_METER(PLAYER::PLAYER_ID(), false, 0);
						if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_56))
						{
							PED::SET_PED_MONEY(bLocal_56, (iLocal_133 - (iLocal_133 / 10)));
							PED::_0x2208438012482A1A(bLocal_56, 0);
							PED::SET_PED_MOVEMENT_CLIPSET(bLocal_56, sLocal_94, 0.25f);
						}
						if (PED::REMOVE_SCENARIO_BLOCKING_AREA())
						{
							TASK::CLEAR_PED_TASKS_IMMEDIATELY(bLocal_56);
							Var4 = { unk_0xD7D25254A712E758(cLocal_142, sLocal_144, Local_78, Local_79, 1f, 2) };
							MISC::GET_GROUND_Z_FOR_3D_COORD(Var4, &(Var4.f_2), false, false);
							unk_0x03D382CB0B44E2FC(bLocal_56, Var4, 1, 0, 0, 1);
							Var4 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION(cLocal_142, sLocal_144, Local_78, Local_79, 1f, 2) };
							ENTITY::SET_ENTITY_HEADING(bLocal_56, Var4.f_2);
						}
						Var4 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION(cLocal_142, sLocal_144, Local_78, Local_79, 1f, 2) };
						if (func_69(Local_53, -526.58f, -1222.79f, 17.46f, 10f, 0))
						{
							if (func_48(unk_0x9B0761B4C3EB8BC7(), 215.68f, 60f))
							{
								TASK::OPEN_SEQUENCE_TASK(&iLocal_61);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, unk_0x7EC595B99EA7C4B1(bLocal_56, 0f, 3.5f, 0f), 1f, 20000, 0.25f, 5, 40000f);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -503.46f, -1199.39f, 19.02f, 1f, 20000, 0.25f, 5, 40000f);
								TASK::TASK_WANDER_STANDARD(false, ENTITY::IS_ENTITY_IN_WATER(bLocal_56), 1);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_61);
								AUDIO::STOP_SCRIPTED_CONVERSATION(bLocal_56, iLocal_61);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_61);
							}
							else if (func_48(unk_0x9B0761B4C3EB8BC7(), 122.0371f, 60f))
							{
								TASK::OPEN_SEQUENCE_TASK(&iLocal_61);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, unk_0x7EC595B99EA7C4B1(bLocal_56, 0f, 3.5f, 0f), 1f, 20000, 0.25f, 5, 40000f);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -543.35f, -1208.09f, 16.73f, 1f, 20000, 0.25f, 5, 40000f);
								TASK::TASK_WANDER_STANDARD(false, ENTITY::IS_ENTITY_IN_WATER(bLocal_56), 1);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_61);
								AUDIO::STOP_SCRIPTED_CONVERSATION(bLocal_56, iLocal_61);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_61);
							}
							else
							{
								TASK::OPEN_SEQUENCE_TASK(&iLocal_61);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, unk_0x7EC595B99EA7C4B1(bLocal_56, 0f, 3.5f, 0f), 1f, 20000, 0.25f, 5, 40000f);
								TASK::TASK_WANDER_STANDARD(false, ENTITY::IS_ENTITY_IN_WATER(bLocal_56), 1);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_61);
								AUDIO::STOP_SCRIPTED_CONVERSATION(bLocal_56, iLocal_61);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_61);
							}
						}
						else if (HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Local_53, 288.46f, -1256.71f, 28.44f, 1) < 5f)
						{
							if (func_48(unk_0x9B0761B4C3EB8BC7(), 200.8887f, 60f))
							{
								TASK::OPEN_SEQUENCE_TASK(&iLocal_61);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, unk_0x7EC595B99EA7C4B1(bLocal_56, 0f, 3.5f, 0f), 1f, 20000, 0.25f, 5, 40000f);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 289.08f, -1286.56f, 28.68f, 1f, 20000, 0.25f, 5, 40000f);
								TASK::TASK_WANDER_STANDARD(false, ENTITY::IS_ENTITY_IN_WATER(bLocal_56), 1);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_61);
								AUDIO::STOP_SCRIPTED_CONVERSATION(bLocal_56, iLocal_61);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_61);
							}
							else if (func_48(unk_0x9B0761B4C3EB8BC7(), 347.8599f, 60f))
							{
								TASK::OPEN_SEQUENCE_TASK(&iLocal_61);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, unk_0x7EC595B99EA7C4B1(bLocal_56, 0f, 3.5f, 0f), 1f, 20000, 0.25f, 5, 40000f);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 241.22f, -1236.76f, 28.26f, 1f, 20000, 0.25f, 5, 40000f);
								TASK::TASK_WANDER_STANDARD(false, ENTITY::IS_ENTITY_IN_WATER(bLocal_56), 1);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_61);
								AUDIO::STOP_SCRIPTED_CONVERSATION(bLocal_56, iLocal_61);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_61);
							}
							else
							{
								TASK::OPEN_SEQUENCE_TASK(&iLocal_61);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, unk_0x7EC595B99EA7C4B1(bLocal_56, 0f, 3.5f, 0f), 1f, 20000, 0.25f, 5, 40000f);
								TASK::TASK_WANDER_STANDARD(false, ENTITY::IS_ENTITY_IN_WATER(bLocal_56), 1);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_61);
								AUDIO::STOP_SCRIPTED_CONVERSATION(bLocal_56, iLocal_61);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_61);
							}
						}
						else
						{
							TASK::OPEN_SEQUENCE_TASK(&iLocal_61);
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, unk_0x7EC595B99EA7C4B1(bLocal_56, 0f, 2.5f, 0f), 1f, 20000, 0.25f, 5, 40000f);
							TASK::TASK_WANDER_STANDARD(false, ENTITY::IS_ENTITY_IN_WATER(bLocal_56), 1);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_61);
							AUDIO::STOP_SCRIPTED_CONVERSATION(bLocal_56, iLocal_61);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_61);
						}
						PED::FORCE_PED_MOTION_STATE(bLocal_56, -668482597, true, 0, false);
						PED::SET_PED_CAN_RAGDOLL(bLocal_56, true);
						PED::SET_PED_KEEP_TASK(bLocal_56, true);
						func_47(&bLocal_73);
						SYSTEM::SETTIMERB(0);
						CAM::STOP_GAMEPLAY_HINT(false);
						if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(unk_0x9B0761B4C3EB8BC7()))
						{
							TASK::CLEAR_PED_TASKS_IMMEDIATELY(unk_0x9B0761B4C3EB8BC7());
							if (!func_46())
							{
								ENTITY::FREEZE_ENTITY_POSITION(unk_0x9B0761B4C3EB8BC7(), false, 0);
							}
						}
						if (MISC::IS_BIT_SET(bLocal_57))
						{
							PED::GET_PED_BONE_INDEX(&bLocal_57);
						}
						if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_56))
						{
							PED::SET_PED_MONEY(bLocal_56, (iLocal_133 - (iLocal_133 / 10)));
						}
						WEAPON::HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(unk_0x9B0761B4C3EB8BC7(), false);
						unk_0x4C4FC7841A5FB983(0f);
						CAM::SET_CAM_ACTIVE(iLocal_97, false);
						func_45();
						CAM::DESTROY_CAM(iLocal_97, false);
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
						if (PED::REMOVE_SCENARIO_BLOCKING_AREA())
						{
							CAM::DO_SCREEN_FADE_IN(500);
							while (CAM::IS_SCREEN_FADING_IN())
							{
								SYSTEM::WAIT(0);
							}
						}
						bVar14 = (iLocal_133 / 100);
						bVar14 *= 90;
						SYSTEM::WAIT(0);
						CAM::_RENDER_FIRST_PERSON_CAM(false, 0f, 3, 0);
						func_85(0, 1, 1, 0, 0, 0, 0);
						func_3(func_39(), 1, bVar14);
						func_296(1);
					}
					else
					{
						unk_0xA86915034F55A3BF();
						if (ENTITY::GET_ENTITY_ROTATION(unk_0x9B0761B4C3EB8BC7(), -3856156))
						{
							if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_56) && !STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(unk_0x9B0761B4C3EB8BC7()))
							{
								if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(bLocal_57, unk_0x9B0761B4C3EB8BC7()))
								{
									ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(bLocal_57, 0, 1);
									if (PED::IS_PED_MALE(bLocal_56))
									{
										OBJECT::CREATE_OBJECT_NO_OFFSET(bLocal_57, bLocal_56, ENTITY::ATTACH_ENTITY_TO_ENTITY(bLocal_56, 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
									}
									else
									{
										OBJECT::CREATE_OBJECT_NO_OFFSET(bLocal_57, bLocal_56, ENTITY::ATTACH_ENTITY_TO_ENTITY(bLocal_56, 60309), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
									}
								}
							}
						}
					}
					break;
				}
			}
	}
}

int func_3(int iParam0, int iParam1, bool bParam2)
{
	if (func_38(iParam0) == 3)
	{
		return 0;
	}
	if (func_38(iParam0) == 4)
	{
		return 0;
	}
	return func_4(func_38(iParam0), 0, iParam1, bParam2, 0);
}

int func_4(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	float fVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	
	func_37();
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
					func_36(99, 1);
					func_52(joaat("SP0_MONEY_TOTAL_SPENT"), bParam3);
					break;
				
				case 1:
					func_52(joaat("SP1_MONEY_TOTAL_SPENT"), bParam3);
					break;
				
				case 2:
					func_52(joaat("SP2_MONEY_TOTAL_SPENT"), bParam3);
					break;
			}
			func_20(0);
			switch (iParam2)
			{
				case 127:
				case 129:
				case 125:
				case 126:
				case 128:
					if (func_15(5))
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
							func_52(joaat("SP0_MONEY_SPENT_ON_TATTOOS"), bParam3);
							break;
						
						case 1:
							func_52(joaat("SP1_MONEY_SPENT_ON_TATTOOS"), bParam3);
							break;
						
						case 2:
							func_52(joaat("SP2_MONEY_SPENT_ON_TATTOOS"), bParam3);
							break;
					}
					if (func_15(1))
					{
						fVar0 = 0f;
						bVar1 = true;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_52(joaat("SP0_MONEY_SPENT_ON_TAXIS"), bParam3);
							break;
						
						case 1:
							func_52(joaat("SP1_MONEY_SPENT_ON_TAXIS"), bParam3);
							break;
						
						case 2:
							func_52(joaat("SP2_MONEY_SPENT_ON_TAXIS"), bParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_52(joaat("SP0_MONEY_SPENT_IN_STRIP_CLUBS"), bParam3);
							break;
						
						case 1:
							func_52(joaat("SP1_MONEY_SPENT_IN_STRIP_CLUBS"), bParam3);
							break;
						
						case 2:
							func_52(joaat("SP2_MONEY_SPENT_IN_STRIP_CLUBS"), bParam3);
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
							func_52(joaat("SP0_MONEY_SPENT_PROPERTY"), bParam3);
							break;
						
						case 1:
							func_52(joaat("SP1_MONEY_SPENT_PROPERTY"), bParam3);
							break;
						
						case 2:
							func_52(joaat("SP2_MONEY_SPENT_PROPERTY"), bParam3);
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
									func_52(joaat("SP0_MONEY_SPENT_IN_CLOTHES"), bParam3);
									break;
								
								case 1:
									func_52(joaat("SP1_MONEY_SPENT_IN_CLOTHES"), bParam3);
									break;
								
								case 2:
									func_52(joaat("SP2_MONEY_SPENT_IN_CLOTHES"), bParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_52(joaat("SP0_MONEY_SPENT_ON_HAIRDOS"), bParam3);
									break;
								
								case 1:
									func_52(joaat("SP1_MONEY_SPENT_ON_HAIRDOS"), bParam3);
									break;
								
								case 2:
									func_52(joaat("SP2_MONEY_SPENT_ON_HAIRDOS"), bParam3);
									break;
							}
							if (func_15(0))
							{
								fVar0 = 0f;
								bVar1 = false;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_52(joaat("SP0_MONEY_SPENT_IN_BUYING_GUNS"), bParam3);
									break;
								
								case 1:
									func_52(joaat("SP1_MONEY_SPENT_IN_BUYING_GUNS"), bParam3);
									break;
								
								case 2:
									func_52(joaat("SP2_MONEY_SPENT_IN_BUYING_GUNS"), bParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_52(joaat("SP0_MONEY_SPENT_CAR_MODS"), bParam3);
									break;
								
								case 1:
									func_52(joaat("SP1_MONEY_SPENT_CAR_MODS"), bParam3);
									break;
								
								case 2:
									func_52(joaat("SP2_MONEY_SPENT_CAR_MODS"), bParam3);
									break;
							}
							func_14(bParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_36(95, bParam3);
					break;
				
				case 1:
					func_36(97, bParam3);
					break;
				
				case 2:
					func_36(96, bParam3);
					break;
			}
			func_36(98, bParam3);
			break;
	}
	iVar2 = iParam0;
	bParam3 = SYSTEM::FLOOR((fVar0 * SYSTEM::TO_FLOAT(bParam3)));
	iVar3 = 0;
	bVar4 = bParam3;
	if (fVar0 == 0f)
	{
		func_7(bVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_7(bVar1);
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
					func_52(joaat("SP0_TOTAL_CASH_EARNED"), bParam3);
					break;
				
				case 1:
					func_52(joaat("SP1_TOTAL_CASH_EARNED"), bParam3);
					break;
				
				case 2:
					func_52(joaat("SP2_TOTAL_CASH_EARNED"), bParam3);
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
	func_6(iParam0);
	if (Global_41631 == 15)
	{
		func_5(0);
	}
	return 1;
}

void func_5(bool bParam0)
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

void func_6(int iParam0)
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

void func_7(bool bParam0)
{
	bool bVar0;
	char cVar1[64];
	
	if (bParam0 == 8)
	{
		func_13(129, 0, -1, 1);
		return;
	}
	if (bParam0 == 9)
	{
		func_13(135, 0, -1, 1);
		return;
	}
	if (bParam0 == 10)
	{
		func_13(136, 0, -1, 1);
		return;
	}
	if (bParam0 == 11)
	{
		func_13(137, 0, -1, 1);
		return;
	}
	if (bParam0 == 12)
	{
		func_10(8270, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 13)
	{
		func_10(8271, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 14)
	{
		func_10(8272, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 15)
	{
		func_10(8273, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 16)
	{
		func_10(8274, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 17)
	{
		func_10(8275, 0, -1, 1, 0);
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
	else if (unk_0xCE990E643CD9D0E5(Global_111858.f_20560.f_471, bParam0) || unk_0xCE990E643CD9D0E5(Global_2097152[func_9() /*10931*/].f_6175.f_10, bParam0))
	{
		bVar0 = true;
		VEHICLE::IS_VEHICLE_DRIVEABLE(&(Global_111858.f_20560.f_471), bParam0);
		VEHICLE::IS_VEHICLE_DRIVEABLE(&(Global_2097152[func_9() /*10931*/].f_6175.f_10), bParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("COUP_RED");
		HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(func_8(bParam0));
		HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar1, &cVar1, true, 0, "", 0);
	}
}

char* func_8(bool bParam0)
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

int func_9()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_10(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2551832[iParam0 /*3*/][func_11(iParam2)];
	if (iVar0 != 0)
	{
		NETWORK::NETWORK_HAS_SOCIAL_CLUB_ACCOUNT(iVar0, iParam1, iParam3);
	}
}

int func_11(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_12();
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

int func_12()
{
	return Global_1312763;
}

var func_13(int iParam0, char* sParam1, int iParam2, int iParam3)
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

void func_14(int iParam0)
{
	func_36(93, iParam0);
	func_36(29, iParam0);
	func_36(30, iParam0);
}

bool func_15(bool bParam0)
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
		return func_17(129, -1, -1);
	}
	if (iParam0 == 9)
	{
		return func_17(135, -1, -1);
	}
	if (iParam0 == 10)
	{
		return func_17(136, -1, -1);
	}
	if (iParam0 == 11)
	{
		return func_17(137, -1, -1);
	}
	if (iParam0 == 12)
	{
		iVar0 = unk_0x5A002C4821A13338();
		iVar1 = func_16(8270, -1, 0);
		if (iVar1 == 0 || iVar0 >= iVar1)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 13)
	{
		iVar2 = unk_0x5A002C4821A13338();
		iVar3 = func_16(8271, -1, 0);
		if (iVar3 == 0 || iVar2 >= iVar3)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 14)
	{
		iVar4 = unk_0x5A002C4821A13338();
		iVar5 = func_16(8272, -1, 0);
		if (iVar5 == 0 || iVar4 >= iVar5)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 15)
	{
		iVar6 = unk_0x5A002C4821A13338();
		iVar7 = func_16(8273, -1, 0);
		if (iVar7 == 0 || iVar6 >= iVar7)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 16)
	{
		iVar8 = unk_0x5A002C4821A13338();
		iVar9 = func_16(8274, -1, 0);
		if (iVar9 == 0 || iVar8 >= iVar9)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 17)
	{
		iVar10 = unk_0x5A002C4821A13338();
		iVar11 = func_16(8275, -1, 0);
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
	return unk_0xCE990E643CD9D0E5(Global_2097152[func_9() /*10931*/].f_6175.f_10, bParam0);
}

int func_16(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 11771)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2551832[iParam0 /*3*/][func_11(iParam1)];
		if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

bool func_17(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	bVar0 = false;
	if (iParam1 == -1)
	{
		iParam1 = func_12();
	}
	iVar1 = func_19(iParam0, iParam1);
	iVar2 = func_18(iParam0);
	if (0 != iVar1)
	{
		bVar0 = DECORATOR::DECOR_IS_REGISTERED_AS_TYPE(iVar1, iVar2, iParam2);
	}
	return bVar0;
}

int func_18(int iParam0)
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

bool func_19(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_12();
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

int func_20(bool bParam0)
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
		func_35(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_21(27, 1);
	return 1;
}

int func_21(int iParam0, int iParam1)
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_22(iParam0, iParam1);
}

int func_22(int iParam0, int iParam1)
{
	if (func_34(14) && !func_33(iParam0))
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
	if (func_32(&Global_4271324))
	{
		if (func_30(&Global_4271324, iParam0))
		{
			return 0;
		}
		if (func_23(&Global_4271324, iParam0))
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

int func_23(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[78];
	
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_34(14) && !func_33(iParam1))
	{
		return 0;
	}
	if (func_30(uParam0, iParam1))
	{
		return 0;
	}
	if (func_29(uParam0) < 0f)
	{
		func_28(uParam0, 0);
	}
	func_26(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_24(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_24(var uParam0, int iParam1)
{
	int iVar0;
	
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_34(14) && !func_33(iParam1))
	{
		return 0;
	}
	if (func_30(uParam0, iParam1))
	{
		return 0;
	}
	if (func_29(uParam0) < 0f)
	{
		func_28(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_25(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_25(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 78;
}

void func_26(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_27(uParam0, iVar0);
		iVar0++;
	}
	func_28(uParam0, (Global_4271323 - 0.5f));
}

void func_27(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 78;
}

void func_28(var uParam0, float fParam1)
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

float func_29(var uParam0)
{
	return uParam0->f_80;
}

bool func_30(var uParam0, int iParam1)
{
	return func_31(uParam0, iParam1) != -1;
}

int func_31(var uParam0, int iParam1)
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

bool func_32(var uParam0)
{
	return uParam0->f_79 == 1;
}

int func_33(int iParam0)
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

bool func_34(int iParam0)
{
	return Global_41631 == iParam0;
}

int func_35(int iParam0, int iParam1)
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

void func_36(int iParam0, int iParam1)
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

void func_37()
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

int func_38(int iParam0)
{
	return Global_1848[iParam0 /*29*/].f_17;
}

int func_39()
{
	func_40();
	return Global_111858.f_2359.f_539.f_4321;
}

void func_40()
{
	int iVar0;
	
	if (MISC::IS_BIT_SET(unk_0x9B0761B4C3EB8BC7()))
	{
		if (func_43(Global_111858.f_2359.f_539.f_4321) != MISC::GET_MODEL_DIMENSIONS(unk_0x9B0761B4C3EB8BC7()))
		{
			iVar0 = func_42(unk_0x9B0761B4C3EB8BC7());
			if (func_41(iVar0) && (!func_34(14) || Global_110809))
			{
				if (Global_111858.f_2359.f_539.f_4321 != iVar0 && func_41(Global_111858.f_2359.f_539.f_4321))
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

bool func_41(int iParam0)
{
	return iParam0 < 3;
}

int func_42(bool bParam0)
{
	int iVar0;
	void fVar1;
	
	if (MISC::IS_BIT_SET(uParam0))
	{
		fVar1 = MISC::GET_MODEL_DIMENSIONS(bParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_43(iVar0) == fVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_43(int iParam0)
{
	if (func_41(iParam0))
	{
		return func_44(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_44(int iParam0)
{
	return Global_1848[iParam0 /*29*/];
}

void func_45()
{
	int iVar0;
	
	iVar0 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, unk_0x7EC595B99EA7C4B1(unk_0x9B0761B4C3EB8BC7(), 0.5f, -1f, 0.5f), 0f, 0f, ENTITY::IS_ENTITY_IN_WATER(unk_0x9B0761B4C3EB8BC7()), 65f, true, 2);
	CAM::SET_CAM_ACTIVE(iVar0, true);
}

int func_46()
{
	if (CAM::_0xEE778F8C7E1142E2(NETWORK::_GET_ONLINE_VERSION()) == 4)
	{
		return 1;
	}
	return 0;
}

void func_47(bool bParam0)
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

int func_48(bool bParam0, float fParam1, float fParam2)
{
	float fVar0;
	float fVar1;
	
	fVar0 = (fParam1 + (fParam2 / 2f));
	if (fVar0 > 360f)
	{
		fVar0 = (fVar0 - 360f);
	}
	fVar1 = (fParam1 - (fParam2 / 2f));
	if (fVar1 < 0f)
	{
		fVar1 = (fVar1 + 360f);
	}
	if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bParam0))
	{
		if (fVar0 > fVar1)
		{
			if (ENTITY::IS_ENTITY_IN_WATER(bParam0) < fVar0 && ENTITY::IS_ENTITY_IN_WATER(bParam0) > fVar1)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else if (ENTITY::IS_ENTITY_IN_WATER(bParam0) < fVar0 || ENTITY::IS_ENTITY_IN_WATER(bParam0) > fVar1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_49()
{
	if (func_50(1000))
	{
		CAM::DO_SCREEN_FADE_OUT(500);
		while (unk_0x5DA78AD6801A0523())
		{
			unk_0xA86915034F55A3BF();
			SYSTEM::WAIT(0);
		}
		return 1;
	}
	return 0;
}

int func_50(int iParam0)
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
			if (func_51())
			{
				Global_27 = MISC::GET_GAME_TIMER();
				return 1;
			}
		}
	}
	return 0;
}

int func_51()
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

void func_52(int iParam0, bool bParam1)
{
	int iVar0;
	
	STATS::STAT_GET_INT(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + bParam1);
	NETWORK::NETWORK_HAS_SOCIAL_CLUB_ACCOUNT(iParam0, iVar0, 1);
}

int func_53(var uParam0, char* sParam1, char* sParam2, char[4] cParam3, char* sParam4, char[4] cParam5, int iParam6, int iParam7, int iParam8)
{
	var uVar0;
	var uVar1;
	
	func_64(uParam0, 145, sParam1, iParam7, iParam8, 0);
	if (iParam6 > 7)
	{
		if (iParam6 < 12)
		{
			iParam6 = 7;
		}
	}
	uVar0 = 10;
	uVar1 = 10;
	func_63(2, &uVar0, &uVar1, sParam2, cParam3, sParam4, cParam5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	return func_54(&uVar0, &uVar1, iParam6, 0);
}

int func_54(var uParam0, var uParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	Global_21006 = 0;
	if (Global_21005 == 0 || Global_21007 == 2)
	{
		if (Global_21005 != 0)
		{
			if (iParam2 > Global_21007)
			{
				if (bParam3 == 0)
				{
					unk_0xBE4122AC23440E7D(0);
					Global_19681.f_1 = 3;
					Global_21005 = 0;
					Global_21006 = 1;
					Global_21058 = 0;
					Global_21001 = 0;
					Global_21002 = 0;
				}
				else
				{
					func_62();
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
		if (func_61(8, -1))
		{
			return 0;
		}
		Global_21081 = { Global_21075 };
		func_60();
		Global_20294 = { Global_20459 };
		Global_21011 = Global_21012;
		Global_21018 = Global_21019;
		Global_2621442 = Global_2621441;
		Global_21020 = { Global_21036 };
		Global_21013 = Global_21014;
		Global_21995 = Global_21996;
		Global_22003 = { Global_22009 };
		Global_22001 = Global_22002;
		Global_21997 = Global_21998;
		Global_21999 = Global_22000;
		Global_20624.f_368 = Global_21992;
		Global_20624.f_369 = Global_21993;
		Global_20624.f_370 = Global_21994;
		Global_21001 = Global_21002;
		Global_21003 = Global_21004;
		if (Global_21263 == 0)
		{
			Global_21159[0 /*6*/] = { Global_21185[0 /*6*/] };
			Global_21159[1 /*6*/] = { Global_21185[1 /*6*/] };
			Global_21211[0 /*6*/] = { Global_21237[0 /*6*/] };
			Global_21211[1 /*6*/] = { Global_21237[1 /*6*/] };
			Global_21172[0 /*6*/] = { Global_21198[0 /*6*/] };
			Global_21172[1 /*6*/] = { Global_21198[1 /*6*/] };
			Global_21224[0 /*6*/] = { Global_21250[0 /*6*/] };
			Global_21224[1 /*6*/] = { Global_21250[1 /*6*/] };
		}
		if (Global_21011)
		{
			VEHICLE::IS_VEHICLE_DRIVEABLE(&Global_7551, 20);
			VEHICLE::IS_VEHICLE_DRIVEABLE(&Global_7552, 17);
			VEHICLE::IS_VEHICLE_DRIVEABLE(&Global_7553, false);
			if (bParam3)
			{
				func_59();
				if (Global_8356[Global_19681 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam2 == 13)
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
				if (func_58())
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
					if (Global_21263 == 0)
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
			}
			if (func_57())
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
			}
			func_56();
			Global_21015 = bParam3;
		}
		Global_21007 = iParam2;
		if (Global_21001 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_21001)
			{
				StringCopy(&(Global_20624.f_6[iVar0 /*6*/]), (*uParam0)[iVar0], 24);
				StringCopy(&(Global_20624.f_187[iVar0 /*6*/]), (*uParam1)[iVar0], 24);
				iVar0++;
			}
		}
		Global_19871 = 0;
		func_55();
		return 1;
	}
	if (Global_21005 == 5)
	{
		return 0;
	}
	if (iParam2 < Global_21007 || iParam2 == Global_21007)
	{
		return 0;
	}
	if (iParam2 == 2)
	{
	}
	else
	{
		func_62();
	}
	return 0;
}

void func_55()
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

void func_56()
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

int func_57()
{
	if (Global_19681.f_1 == 1 || Global_19681.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_58()
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

void func_59()
{
	if (func_34(14))
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
		Global_19681 = func_39();
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

void func_60()
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

bool func_61(bool bParam0, int iParam1)
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

void func_62()
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

void func_63(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16)
{
	Global_21002 = iParam0;
	Global_21012 = 0;
	Global_21019 = 0;
	Global_21014 = 0;
	Global_21996 = 0;
	Global_22002 = 0;
	Global_2621441 = 0;
	(*uParam1)[0] = uParam3;
	(*uParam2)[0] = uParam4;
	(*uParam1)[1] = uParam5;
	(*uParam2)[1] = uParam6;
	(*uParam1)[2] = iParam7;
	(*uParam2)[2] = iParam8;
	(*uParam1)[3] = iParam9;
	(*uParam2)[3] = iParam10;
	(*uParam1)[4] = iParam11;
	(*uParam2)[4] = iParam12;
	(*uParam1)[5] = iParam13;
	(*uParam2)[5] = iParam14;
	(*uParam1)[6] = iParam15;
	(*uParam2)[6] = iParam16;
}

void func_64(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

bool func_65(struct<3> Param0, struct<3> Param1, bool bParam2)
{
	if (bParam2)
	{
		return (Param0.x == Param1.x && Param0.f_1 == Param1.f_1);
	}
	return ((Param0.x == Param1.x && Param0.f_1 == Param1.f_1) && Param0.f_2 == Param1.f_2);
}

Vector3 func_66(struct<3> Param0, struct<3> Param1)
{
	bool bVar0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	int iVar5;
	int iVar6;
	int iVar7;
	var uVar8;
	var uVar9;
	struct<3> Var10;
	struct<3> Var11;
	var uVar12;
	int iVar13;
	
	iVar5 = 0;
	iVar6 = 1;
	bVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
	if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(bVar0))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(bVar0, true, false);
	}
	ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(MISC::GET_MODEL_DIMENSIONS(bVar0), &Var3, &Var4);
	PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE(Param0, 3, &Var2, 1, 1077936128, 0);
	if (SYSTEM::VDIST(Param0, -3039.655f, 602.4346f, 6.5719f) <= 25f)
	{
		Var1 = { -3045.49f, 604.46f, 7.02f };
		iVar5 = 8;
	}
	else if (SYSTEM::VDIST(Param0, 288.06f, -1257.1f, 28.44f) <= 25f)
	{
		Var1 = { 278.97f, -1255.06f, 28.88f };
		iVar5 = 8;
	}
	while (iVar5 < 8)
	{
		switch (iVar5)
		{
			case 0:
				if (SYSTEM::VDIST(Var2, unk_0x7EC595B99EA7C4B1(bVar0, 0f, (Var4.f_1 + IntToFloat(iVar6)), 0f)) < SYSTEM::VDIST(Var2, unk_0x7EC595B99EA7C4B1(bVar0, 0f, -(Var4.f_1 + IntToFloat(iVar6)), 0f)))
				{
					Var1 = { unk_0x7EC595B99EA7C4B1(bVar0, 0f, (Var4.f_1 + IntToFloat(iVar6)), 0f) };
				}
				else
				{
					Var1 = { unk_0x7EC595B99EA7C4B1(bVar0, 0f, -(Var4.f_1 + IntToFloat(iVar6)), 0f) };
				}
				if (MISC::IS_BIT_SET(bVar0))
				{
					if (!PED::IS_PED_IN_ANY_POLICE_VEHICLE(bVar0, 0))
					{
						Var10 = { func_67(Var1, 0f, Var4) };
						Var11 = { func_67(Var1, 0f, Var3) };
						iVar13 = SHAPETEST::START_SHAPE_TEST_LOS_PROBE(Var10, Var11, 511, bVar0, 7);
						iVar5++;
					}
					else
					{
						iVar5 = 8;
					}
				}
				else
				{
					iVar5 = 8;
				}
				break;
			
			case 1:
				if (SHAPETEST::GET_SHAPE_TEST_RESULT(iVar13, &iVar7, &uVar9, &uVar8, &uVar12) == 2)
				{
					if (iVar7 != 0)
					{
						if (iVar6 >= 3)
						{
							iVar6 = 1;
							iVar5 = 2;
						}
						else
						{
							iVar6++;
							iVar5 = 0;
						}
					}
					else if (HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Var1, Param0, 1) <= 5f || HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Var1, Param1, 1) <= 5f)
					{
						if (iVar6 >= 3)
						{
							iVar6 = 1;
							iVar5 = 2;
						}
						else
						{
							iVar6++;
							iVar5 = 0;
						}
					}
					else
					{
						iVar5 = 8;
					}
				}
				break;
			
			case 2:
				if (SYSTEM::VDIST(Var2, unk_0x7EC595B99EA7C4B1(bVar0, 0f, (Var4.f_1 - IntToFloat(iVar6)), 0f)) < SYSTEM::VDIST(Var2, unk_0x7EC595B99EA7C4B1(bVar0, 0f, -(Var4.f_1 - IntToFloat(iVar6)), 0f)))
				{
					Var1 = { unk_0x7EC595B99EA7C4B1(bVar0, 0f, (Var4.f_1 - IntToFloat(iVar6)), 0f) };
				}
				else
				{
					Var1 = { unk_0x7EC595B99EA7C4B1(bVar0, 0f, -(Var4.f_1 - IntToFloat(iVar6)), 0f) };
				}
				if (MISC::IS_BIT_SET(bVar0))
				{
					if (!PED::IS_PED_IN_ANY_POLICE_VEHICLE(bVar0, 0))
					{
						Var10 = { func_67(Var1, 0f, Var4) };
						Var11 = { func_67(Var1, 0f, Var3) };
						iVar13 = SHAPETEST::START_SHAPE_TEST_LOS_PROBE(Var10, Var11, 511, bVar0, 7);
						iVar5++;
					}
					else
					{
						iVar5 = 8;
					}
				}
				else
				{
					iVar5 = 8;
				}
				break;
			
			case 3:
				if (SHAPETEST::GET_SHAPE_TEST_RESULT(iVar13, &iVar7, &uVar9, &uVar8, &uVar12) == 2)
				{
					if (iVar7 != 0)
					{
						if (iVar6 >= 3)
						{
							iVar6 = 1;
							iVar5 = 4;
						}
						else
						{
							iVar6++;
							iVar5 = 2;
						}
					}
					else if (HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Var1, Param0, 1) <= 5f || HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Var1, Param1, 1) <= 5f)
					{
						if (iVar6 >= 3)
						{
							iVar6 = 1;
							iVar5 = 4;
						}
						else
						{
							iVar6++;
							iVar5 = 2;
						}
					}
					else
					{
						iVar5 = 8;
					}
				}
				break;
			
			case 4:
				if (SYSTEM::VDIST(Var2, unk_0x7EC595B99EA7C4B1(bVar0, (Var4.x + IntToFloat(iVar6)), 0f, 0f)) < SYSTEM::VDIST(Var2, unk_0x7EC595B99EA7C4B1(bVar0, -(Var4.x + IntToFloat(iVar6)), 0f, 0f)))
				{
					Var1 = { unk_0x7EC595B99EA7C4B1(bVar0, (Var4.x + IntToFloat(iVar6)), 0f, 0f) };
				}
				else
				{
					Var1 = { unk_0x7EC595B99EA7C4B1(bVar0, -(Var4.x + IntToFloat(iVar6)), 0f, 0f) };
				}
				if (MISC::IS_BIT_SET(bVar0))
				{
					if (!PED::IS_PED_IN_ANY_POLICE_VEHICLE(bVar0, 0))
					{
						Var10 = { func_67(Var1, 0f, Var4) };
						Var11 = { func_67(Var1, 0f, Var3) };
						iVar13 = SHAPETEST::START_SHAPE_TEST_LOS_PROBE(Var10, Var11, 511, bVar0, 7);
						iVar5++;
					}
					else
					{
						iVar5 = 8;
					}
				}
				else
				{
					iVar5 = 8;
				}
				break;
			
			case 5:
				if (SHAPETEST::GET_SHAPE_TEST_RESULT(iVar13, &iVar7, &uVar9, &uVar8, &uVar12) == 2)
				{
					if (iVar7 != 0)
					{
						if (iVar6 >= 3)
						{
							iVar6 = 1;
							iVar5 = 6;
						}
						else
						{
							iVar6++;
							iVar5 = 4;
						}
					}
					else if (HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Var1, Param0, 1) <= 5f || HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Var1, Param1, 1) <= 5f)
					{
						if (iVar6 >= 3)
						{
							iVar6 = 1;
							iVar5 = 6;
						}
						else
						{
							iVar6++;
							iVar5 = 4;
						}
					}
					else
					{
						iVar5 = 8;
					}
				}
				break;
			
			case 6:
				if (SYSTEM::VDIST(Var2, unk_0x7EC595B99EA7C4B1(bVar0, (Var4.x - IntToFloat(iVar6)), 0f, 0f)) < SYSTEM::VDIST(Var2, unk_0x7EC595B99EA7C4B1(bVar0, -(Var4.x - IntToFloat(iVar6)), 0f, 0f)))
				{
					Var1 = { unk_0x7EC595B99EA7C4B1(bVar0, (Var4.x - IntToFloat(iVar6)), 0f, 0f) };
				}
				else
				{
					Var1 = { unk_0x7EC595B99EA7C4B1(bVar0, -(Var4.x - IntToFloat(iVar6)), 0f, 0f) };
				}
				if (MISC::IS_BIT_SET(bVar0))
				{
					if (!PED::IS_PED_IN_ANY_POLICE_VEHICLE(bVar0, 0))
					{
						Var10 = { func_67(Var1, 0f, Var4) };
						Var11 = { func_67(Var1, 0f, Var3) };
						iVar13 = SHAPETEST::START_SHAPE_TEST_LOS_PROBE(Var10, Var11, 511, bVar0, 7);
						iVar5++;
					}
					else
					{
						iVar5 = 8;
					}
				}
				else
				{
					iVar5 = 8;
				}
				break;
			
			case 7:
				if (SHAPETEST::GET_SHAPE_TEST_RESULT(iVar13, &iVar7, &uVar9, &uVar8, &uVar12) == 2)
				{
					if (iVar7 != 0)
					{
						if (iVar6 >= 3)
						{
							iVar6 = 1;
							iVar5 = 8;
						}
						else
						{
							iVar6++;
							iVar5 = 6;
						}
					}
					else if (HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Var1, Param0, 1) <= 5f || HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Var1, Param1, 1) <= 5f)
					{
						if (iVar6 >= 3)
						{
							iVar6 = 1;
							iVar5 = 8;
						}
						else
						{
							iVar6++;
							iVar5 = 6;
						}
					}
					else
					{
						iVar5 = 8;
					}
				}
				break;
			
			case 8:
				break;
		}
		SYSTEM::WAIT(0);
	}
	return Var1;
}

Vector3 func_67(struct<3> Param0, float fParam1, struct<2> Param2, var uParam3)
{
	struct<3> Var0;
	float fVar1;
	float fVar2;
	float fVar3;
	struct<3> Var4;
	
	fVar1 = fParam1;
	fVar2 = SYSTEM::COS(fVar1);
	fVar3 = SYSTEM::SIN(fVar1);
	Var0.x = ((Param2 * fVar2) + (Param2.f_1 * fVar3));
	Var0.f_1 = ((Param2.f_1 * fVar2) - (Param2 * fVar3));
	Var4 = { Param0 + Var0 };
	return Var4;
}

int func_68(bool bParam0)
{
	if (func_112(bParam0))
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

int func_69(struct<3> Param0, struct<3> Param1, float fParam2, bool bParam3)
{
	if (fParam2 < 0f)
	{
		fParam2 = 0f;
	}
	if (!bParam3)
	{
		if (ENTITY::IS_ENTITY_PLAYING_ANIM((Param0.x - Param1.x)) <= fParam2)
		{
			if (ENTITY::IS_ENTITY_PLAYING_ANIM((Param0.f_1 - Param1.f_1)) <= fParam2)
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM((Param0.f_2 - Param1.f_2)) <= fParam2)
				{
					return 1;
				}
			}
		}
	}
	else if (ENTITY::IS_ENTITY_PLAYING_ANIM((Param0.x - Param1.x)) <= fParam2)
	{
		if (ENTITY::IS_ENTITY_PLAYING_ANIM((Param0.f_1 - Param1.f_1)) <= fParam2)
		{
			return 1;
		}
	}
	return 0;
}

void func_70(bool bParam0, var uParam1, var uParam2, char* sParam3, char* sParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	var uVar7;
	struct<3> Var8;
	struct<3> Var9;
	struct<3> Var10;
	var uVar11;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar2 = 1;
	*uParam1 = { NETWORK::NETWORK_ARE_HANDLES_THE_SAME(unk_0x9B0761B4C3EB8BC7(), 0) };
	uParam2->f_2 = func_72(bParam0, unk_0x9B0761B4C3EB8BC7(), 1);
	fVar3 = func_72(bParam0, unk_0x9B0761B4C3EB8BC7(), 1);
	fVar4 = func_72(bParam0, unk_0x9B0761B4C3EB8BC7(), 1);
	Var10 = { NETWORK::NETWORK_ARE_HANDLES_THE_SAME(bParam0, 0) - NETWORK::NETWORK_ARE_HANDLES_THE_SAME(unk_0x9B0761B4C3EB8BC7(), 0) };
	if (STREAMING::HAS_ANIM_DICT_LOADED(sParam3))
	{
		Var9 = { unk_0xD7D25254A712E758(sParam3, sParam4, *uParam1, *uParam2, 0, 2) };
	}
	else
	{
		Var9 = { *uParam1 + Vector(0f, 5f, 5f) };
	}
	while (iVar0 < 2)
	{
		switch (iVar0)
		{
			case 0:
				if (iVar1 > 20)
				{
					uParam2->f_2 = func_71(NETWORK::NETWORK_ARE_HANDLES_THE_SAME(bParam0, 0), *uParam1, 1);
					*uParam1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(NETWORK::NETWORK_ARE_HANDLES_THE_SAME(bParam0, 0), uParam2->f_2, Var10) };
					iVar0 = 2;
				}
				else
				{
					iVar5 = SHAPETEST::START_SHAPE_TEST_CAPSULE(*uParam1, Var9 + Vector(-1f, 0f, 0f), 0.5f, 17, 0, 4);
					iVar0++;
				}
				break;
			
			case 1:
				if (SHAPETEST::GET_SHAPE_TEST_RESULT(iVar5, &iVar6, &Var8, &uVar7, &uVar11) == 2)
				{
					if (iVar6 != 0)
					{
						if (Var8.f_2 > (uParam1->f_2 + 8.5f))
						{
							iVar0++;
						}
						else
						{
							if (iVar1 <= 3)
							{
								fVar4 = (fVar4 + 7.5f);
							}
							else
							{
								fVar4 = (fVar3 - (7.5f * IntToFloat(iVar2)));
								iVar2++;
							}
							*uParam1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(NETWORK::NETWORK_ARE_HANDLES_THE_SAME(unk_0x9B0761B4C3EB8BC7(), 0), fVar4, Var10) };
							iVar1++;
							iVar0 = 0;
						}
					}
					else
					{
						if (iVar1 > 0)
						{
							uParam2->f_2 = func_71(Var9 + Vector(-0.75f, 0f, 0f), *uParam1, 1);
						}
						iVar0++;
					}
				}
				break;
			
			case 2:
				break;
		}
		SYSTEM::WAIT(0);
	}
}

float func_71(struct<2> Param0, bool bParam1, struct<2> Param2, var uParam3, int iParam4)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar1 = (Param2 - Param0);
	fVar2 = (Param2.f_1 - Param0.f_1);
	if (fVar2 != 0f)
	{
		fVar0 = MISC::ATAN2(fVar1, fVar2);
	}
	else if (fVar1 < 0f)
	{
		fVar0 = -90f;
	}
	else
	{
		fVar0 = 90f;
	}
	if (iParam4 == 1)
	{
		fVar0 = (fVar0 * -1f);
		if (fVar0 < 0f)
		{
			fVar0 = (fVar0 + 360f);
		}
	}
	return fVar0;
}

float func_72(bool bParam0, bool bParam1, int iParam2)
{
	struct<3> Var0;
	struct<3> Var1;
	
	Var0 = { NETWORK::NETWORK_ARE_HANDLES_THE_SAME(bParam0, 0) };
	Var1 = { NETWORK::NETWORK_ARE_HANDLES_THE_SAME(bParam1, 0) };
	return func_71(Var0, Var1, iParam2);
}

void func_73(struct<3> Param0, float fParam1, float fParam2)
{
	bool bVar0;
	struct<3> Var1;
	float fVar2;
	
	bVar0 = false;
	if (SYSTEM::VDIST(unk_0x9B0761B4C3EB8BC7(), 0))
	{
		Var1 = { NETWORK::NETWORK_ARE_HANDLES_THE_SAME(unk_0x9B0761B4C3EB8BC7(), 1) - Param0 };
		fVar2 = unk_0x9075769DD4F148B7(Var1.x, Var1.f_1);
		if (func_74(ENTITY::GET_ENTITY_MODEL(unk_0x9B0761B4C3EB8BC7(), 0), fVar2, 15f))
		{
			bVar0 = true;
		}
		Var1 = { Param0 - NETWORK::NETWORK_ARE_HANDLES_THE_SAME(unk_0x9B0761B4C3EB8BC7(), 1) };
		fVar2 = unk_0x9075769DD4F148B7(Var1.x, Var1.f_1);
		if (func_74(ENTITY::GET_ENTITY_MODEL(unk_0x9B0761B4C3EB8BC7(), 0), fVar2, 15f))
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

int func_74(bool bParam0, float fParam1, float fParam2)
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

void func_75(int iParam0)
{
	if (func_80())
	{
		return;
	}
	if (!Global_19681.f_1 == 1)
	{
		if (func_79(0))
		{
			func_76(iParam0);
		}
		unk_0xBE20AB8238688965(&Global_7552, 2);
	}
}

void func_76(int iParam0)
{
	if (func_80())
	{
		return;
	}
	if (Global_19864)
	{
		if (func_78())
		{
			func_77(1, 1);
		}
		else
		{
			func_77(0, 0);
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
	if (!func_57())
	{
		Global_19681.f_1 = 3;
	}
}

void func_77(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_79(0))
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

bool func_78()
{
	return unk_0xCE990E643CD9D0E5(Global_1689730, 5);
}

int func_79(int iParam0)
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

bool func_80()
{
	return unk_0xCE990E643CD9D0E5(Global_1689730, 19);
}

void func_81()
{
	Global_19871 = 0;
	func_82();
}

void func_82()
{
	SYSTEM::ROUND();
	Global_22016 = 0;
	if (ENTITY::IS_ENTITY_DEAD())
	{
		unk_0xBE4122AC23440E7D(0);
		Global_21005 = 6;
	}
}

int func_83(bool bParam0, float fParam1, int iParam2, float fParam3, bool bParam4, bool bParam5, bool bParam6)
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
	func_84(bParam0);
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

void func_84(bool bParam0)
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

void func_85(bool bParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (bParam0)
	{
		PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(PLAYER::PLAYER_ID(), 0);
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), true);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), true);
		func_92(1);
		HUD::THEFEED_FLUSH_QUEUE();
		HUD::THEFEED_PAUSE();
		if (Global_19681.f_1 > 3 && !bParam6)
		{
			if (unk_0x6B12213471F330A3())
			{
				unk_0xBE4122AC23440E7D(0);
			}
			if (!func_57())
			{
				Global_19681.f_1 = 3;
			}
			Global_21005 = 5;
		}
		func_91(1, bParam3, iParam2, 0);
		Global_61723 = 1;
		Global_74033 = 1;
		Global_76831 = 1;
	}
	else
	{
		func_92(0);
		HUD::THEFEED_RESUME();
		Global_61723 = 0;
		if (bParam1)
		{
			GRAPHICS::_0x03FC694AE06C5A20();
		}
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), false);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), false);
		func_91(0, bParam3, iParam2, 0);
		if (MISC::SET_BIT())
		{
			if (((((!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(unk_0x9B0761B4C3EB8BC7()) && !func_89(PLAYER::PLAYER_ID())) && !func_87(PLAYER::PLAYER_ID(), 0)) && !func_86()) && !bParam4) && !bParam5)
			{
				ENTITY::SET_ENTITY_INVINCIBLE(unk_0x9B0761B4C3EB8BC7(), false);
			}
		}
		else if (((!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(unk_0x9B0761B4C3EB8BC7()) && !func_89(PLAYER::PLAYER_ID())) && !bParam4) && !bParam5)
		{
			ENTITY::SET_ENTITY_INVINCIBLE(unk_0x9B0761B4C3EB8BC7(), false);
		}
		Global_76831 = 0;
	}
}

bool func_86()
{
	return unk_0xCE990E643CD9D0E5(Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_39.f_18, 14);
}

bool func_87(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_88(-1, 0) == 8;
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

int func_88(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_12();
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

int func_89(int iParam0)
{
	if (func_87(iParam0, 0))
	{
		return 1;
	}
	if (func_90())
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

bool func_90()
{
	return unk_0xCE990E643CD9D0E5(Global_2359302, 3);
}

int func_91(bool bParam0, bool bParam1, var uParam2, bool bParam3)
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

void func_92(int iParam0)
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

void func_93()
{
	Global_19871 = 0;
	func_62();
}

int func_94()
{
	if (Global_21005 != 0 || ENTITY::IS_ENTITY_DEAD())
	{
		return 1;
	}
	return 0;
}

int func_95()
{
	if (!SYSTEM::VDIST(unk_0x9B0761B4C3EB8BC7(), 0))
	{
		if (func_94())
		{
			return 1;
		}
	}
	return 0;
}

int func_96(bool bParam0, bool bParam1, bool bParam2)
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

bool func_97(int iParam0)
{
	return func_98(func_99(iParam0));
}

bool func_98(bool bParam0)
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(bParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

char* func_99(int iParam0)
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

int func_100()
{
	switch (iLocal_72)
	{
		case 1:
			if (!unk_0x1037B9D45CE6B788(unk_0x9B0761B4C3EB8BC7(), -190.8152f, -801.3224f, 25.45401f, -214.8212f, -866.6472f, 35.0318f, 40f, 0, 1, 0))
			{
				return 1;
			}
			break;
		
		case 2:
			if (!unk_0x1037B9D45CE6B788(unk_0x9B0761B4C3EB8BC7(), 270.5801f, -1290.954f, 24.16572f, 270.499f, -1238.311f, 34.52738f, 58.25f, 0, 1, 0))
			{
				return 1;
			}
			break;
		
		case 3:
			if (!unk_0x1037B9D45CE6B788(unk_0x9B0761B4C3EB8BC7(), -3038.987f, 606.4774f, 2.589385f, -3057.039f, 599.7103f, 12.70948f, 19.25f, 0, 1, 0))
			{
				return 1;
			}
			break;
		
		case 4:
			if (!unk_0x1037B9D45CE6B788(unk_0x9B0761B4C3EB8BC7(), 170.8581f, 6619.894f, 30.31941f, 183.9522f, 6632.882f, 34.06088f, 22.25f, 0, 1, 0))
			{
				return 1;
			}
			break;
		
		case 6:
			if (!unk_0x1037B9D45CE6B788(unk_0x9B0761B4C3EB8BC7(), -9.663248f, -938.2167f, 24.29024f, 48.12534f, -959.4428f, 34.60982f, 7.5f, 0, 1, 0))
			{
				return 1;
			}
			break;
		
		case 8:
			if (!unk_0x1037B9D45CE6B788(unk_0x9B0761B4C3EB8BC7(), 283.0487f, -923.3091f, 24.13956f, 301.367f, -871.6924f, 34.4707f, 6.75f, 0, 1, 0))
			{
				return 1;
			}
			break;
		
		case 11:
			if (!unk_0x1037B9D45CE6B788(unk_0x9B0761B4C3EB8BC7(), 1053.799f, -772.7601f, 53.31232f, 1112.018f, -772.2864f, 60.16156f, 14.75f, 0, 1, 0))
			{
				return 1;
			}
			break;
		
		case 16:
			if (!unk_0x1037B9D45CE6B788(unk_0x9B0761B4C3EB8BC7(), -2097.21f, -292.7766f, 8.141721f, -2101.908f, -345.41f, 18.23235f, 54.25f, 0, 1, 0))
			{
				return 1;
			}
			break;
		
		case 17:
			if (!unk_0x1037B9D45CE6B788(unk_0x9B0761B4C3EB8BC7(), -799.6841f, -1117.781f, 5.659806f, -820.5555f, -1080.585f, 16.38764f, 29.5f, 0, 1, 0))
			{
				return 1;
			}
			break;
		
		case 18:
			if (!unk_0x1037B9D45CE6B788(unk_0x9B0761B4C3EB8BC7(), -731.1746f, -820.053f, 18.06713f, -670.6583f, -821.2724f, 29.66125f, 8f, 0, 1, 0))
			{
				return 1;
			}
			break;
		
		case 19:
			if (!unk_0x1037B9D45CE6B788(unk_0x9B0761B4C3EB8BC7(), -379.9555f, 6033.261f, 29.74875f, -394.2914f, 6047.678f, 33.9986f, 7f, 0, 1, 0) && !unk_0x1037B9D45CE6B788(unk_0x9B0761B4C3EB8BC7(), -393.6422f, 6056.547f, 29.75011f, -402.4834f, 6047.817f, 33.99312f, 17.5f, 0, 1, 0))
			{
				return 1;
			}
			break;
		
		case 22:
			if (!unk_0x1037B9D45CE6B788(unk_0x9B0761B4C3EB8BC7(), -294.338f, -833.5905f, 26.65178f, -330.661f, -827.2508f, 38.64983f, 16.5f, 0, 1, 0) && !unk_0x1037B9D45CE6B788(unk_0x9B0761B4C3EB8BC7(), -294.1309f, -836.8602f, 26.72095f, -284.6938f, -814.233f, 37.38612f, 11f, 0, 1, 0))
			{
				return 1;
			}
			break;
		
		case 23:
			if ((!unk_0x1037B9D45CE6B788(unk_0x9B0761B4C3EB8BC7(), -253.9362f, -689.096f, 28.56934f, -278.4698f, -682.0773f, 38.52502f, 9.5f, 0, 1, 0) && !unk_0x1037B9D45CE6B788(unk_0x9B0761B4C3EB8BC7(), -253.3138f, -687.6628f, 28.5611f, -247.2367f, -703.1184f, 38.8144f, 9.5f, 0, 1, 0)) && !unk_0x1037B9D45CE6B788(unk_0x9B0761B4C3EB8BC7(), -255.6709f, -726.2742f, 28.5187f, -247.2367f, -703.1184f, 38.8144f, 9.5f, 0, 1, 0))
			{
				return 1;
			}
			break;
		
		case 25:
			if (!unk_0x1037B9D45CE6B788(unk_0x9B0761B4C3EB8BC7(), 114.2641f, -9.324284f, 62.78819f, 75.47891f, 4.897117f, 73.96004f, 7f, 0, 1, 0))
			{
				return 1;
			}
			break;
		
		case 30:
			if (!unk_0x1037B9D45CE6B788(unk_0x9B0761B4C3EB8BC7(), -544.5211f, -1200.006f, 12.87966f, -509.3911f, -1216.772f, 23.72543f, 41f, 0, 1, 0))
			{
				return 1;
			}
			break;
		
		case 31:
			if (!unk_0x1037B9D45CE6B788(unk_0x9B0761B4C3EB8BC7(), -2945.132f, 491.4792f, 13.2899f, -2971.825f, 492.9101f, 18.0671f, 10f, 0, 1, 0))
			{
				return 1;
			}
			break;
		
		default:
			break;
	}
	if (MONEY::NETWORK_SPENT_REQUEST_HEIST(unk_0x9B0761B4C3EB8BC7()) != 0)
	{
		return 1;
	}
	return 0;
}

void func_101()
{
	var uVar0;
	
	if (!bLocal_95)
	{
		if (iLocal_126)
		{
			func_109();
		}
		else
		{
			if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_55))
			{
				if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), bLocal_55) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), bLocal_55))
				{
					if (ENTITY::IS_ENTITY_AT_ENTITY(unk_0x9B0761B4C3EB8BC7(), bLocal_55, 25f, 25f, 25f, false, true, 0))
					{
						iLocal_126 = 1;
					}
				}
			}
			else
			{
				iLocal_126 = 1;
			}
			func_119(bLocal_59, &uLocal_70);
		}
		if (!bLocal_127)
		{
			if (bLocal_90)
			{
				if (OBJECT::HAS_PICKUP_BEEN_COLLECTED(iLocal_89))
				{
					func_52(joaat("RC_WALLETS_RECOVERED"), 1);
					STATS::STAT_GET_INT(joaat("RC_WALLETS_RECOVERED"), &uVar0, -1);
					PAD::SET_PAD_SHAKE(0, 200, 250);
					func_102(2);
					bLocal_95 = true;
				}
				else if (SYSTEM::VMAG(bLocal_60))
				{
					if (SYSTEM::VDIST(NETWORK::NETWORK_ARE_HANDLES_THE_SAME(unk_0x9B0761B4C3EB8BC7(), 1), OBJECT::GET_PICKUP_COORDS(iLocal_89)) > 150f)
					{
						if (STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_56))
						{
							func_278();
						}
						else if (SYSTEM::VDIST(NETWORK::NETWORK_ARE_HANDLES_THE_SAME(unk_0x9B0761B4C3EB8BC7(), 1), NETWORK::NETWORK_ARE_HANDLES_THE_SAME(bLocal_56, 1)) > 100f)
						{
							func_278();
						}
					}
				}
			}
		}
	}
}

void func_102(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_111858.f_24991.f_2 < 3)
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					func_103(func_99(iParam0), -1);
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
					func_103(func_99(iParam0), -1);
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
					func_103(func_99(iParam0), -1);
					Global_111858.f_24991.f_4++;
					unk_0xBE20AB8238688965(&Global_111854, 2);
				}
			}
			break;
	}
}

void func_103(bool bParam0, int iParam1)
{
	unk_0x17751E107423AFE9(bParam0);
	FILES::GET_DLC_VEHICLE_FLAGS(0, 0, 1, iParam1);
}

void func_104(var uParam0)
{
	*uParam0 = -99;
}

bool func_105(bool bParam0, bool bParam1, int iParam2)
{
	iParam2 = iParam2;
	return func_106(bParam0, bParam1, 145);
}

bool func_106(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_107(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && SYSTEM::VMAG(iVar0)) && unk_0x3030AE9FCF1BC243(&(Global_1848[iParam2 /*29*/].f_3)))
	{
		PED::IS_PED_IN_PARACHUTE_FREE_FALL(bVar0, &(Global_1848[iParam2 /*29*/].f_3));
	}
	return bVar0;
}

bool func_107(bool bParam0, bool bParam1, bool bParam2)
{
	bool bVar0;
	
	if (!MISC::IS_BIT_SET(iParam0))
	{
		return 0;
	}
	bVar0 = TASK::IS_PED_SPRINTING(bParam0);
	if (ENTITY::IS_ENTITY_A_VEHICLE(bParam0))
	{
		HUD::SET_BLIP_SCALE(bVar0, func_108(MISC::SET_BIT(), 1f, 1f));
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
		HUD::SET_BLIP_SCALE(bVar0, func_108(MISC::SET_BIT(), 0.7f, 0.7f));
		HUD::SET_BLIP_AS_FRIENDLY(bVar0, bParam1);
	}
	else if (ENTITY::IS_ENTITY_AN_OBJECT(bParam0))
	{
		HUD::SET_BLIP_SCALE(bVar0, func_108(MISC::SET_BIT(), 0.7f, 0.7f));
	}
	return bVar0;
}

float func_108(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_109()
{
	int iVar0;
	int iVar1;
	
	iVar0 = joaat("pickup_money_purse");
	if (!bLocal_90)
	{
		unk_0xBE20AB8238688965(&iVar1, 3);
		unk_0xBE20AB8238688965(&iVar1, 4);
		unk_0xBE20AB8238688965(&iVar1, 1);
		iLocal_89 = OBJECT::CREATE_PICKUP(iVar0, PED::GET_DEAD_PED_PICKUP_COORDS(bLocal_55, 1.2f, 1.5f), iVar1, iLocal_133, true, iLocal_101);
		bLocal_90 = true;
		bLocal_60 = func_110(iLocal_89);
		func_122(&Local_107, cLocal_123, sLocal_119, 4, 0, 0, 0);
		if (SYSTEM::VMAG(bLocal_59))
		{
			unk_0x93370FA10F15BE44(&bLocal_59);
		}
		if (func_112(bLocal_56))
		{
			HUD::HIDE_HUD_AND_RADAR_THIS_FRAME(bLocal_56);
		}
	}
	else
	{
		if (!iLocal_91)
		{
			if (!func_182(bLocal_56, 242628503) && !STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_56))
			{
				TASK::OPEN_SEQUENCE_TASK(&iLocal_61);
				if (!unk_0xC2169C00B643278B(bLocal_56, Local_138, 0.5f, 0.5f, 0.5f, 0, 1, 0))
				{
					HUD::_THEFEED_DISABLE(0, Local_138, 1f, 20000, 1193033728, 1056964608);
				}
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, unk_0x9B0761B4C3EB8BC7(), 0);
				TASK::TASK_PLAY_ANIM(0, cLocal_148, sLocal_149, 8f, -2f, -1, 0, 0f, false, false, false);
				TASK::TASK_PLAY_ANIM(0, cLocal_148, sLocal_151, 8f, -2f, -1, 0, 0f, false, false, false);
				TASK::TASK_PLAY_ANIM(0, cLocal_148, sLocal_150, 8f, -2f, -1, 1, 0f, false, false, false);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_61);
				AUDIO::STOP_SCRIPTED_CONVERSATION(bLocal_56, iLocal_61);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_61);
			}
		}
		if (iLocal_91)
		{
			if (!bLocal_95)
			{
				if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_56))
				{
					if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(bLocal_56, cLocal_93, "pickup_low", 3))
					{
						if (NETWORK::_NETWORK_CONVERT_SYNCHRONISED_SCENE_TO_SYNCHRONIZED_SCENE(bLocal_56, cLocal_93, "pickup_low") > 0.35f)
						{
							if (OBJECT::DOES_PICKUP_EXIST(iLocal_89))
							{
								func_122(&Local_107, cLocal_123, cLocal_120, 4, 0, 0, 0);
								OBJECT::REMOVE_PICKUP(iLocal_89);
								PED::SET_PED_MONEY(bLocal_56, iLocal_133);
								PED::_0x2208438012482A1A(bLocal_56, 0);
								ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&bLocal_56);
								func_296(1);
							}
						}
					}
					else if (TASK::GET_SCRIPT_TASK_STATUS(bLocal_56, 242628503) == 7)
					{
						HUD::HIDE_HUD_AND_RADAR_THIS_FRAME(bLocal_56);
						TASK::OPEN_SEQUENCE_TASK(&iLocal_61);
						TASK::TASK_PLAY_ANIM(0, cLocal_93, "pickup_low", 8f, -8f, -1, 0, 0f, false, false, false);
						TASK::TASK_LOOK_AT_ENTITY(false, unk_0x9B0761B4C3EB8BC7(), 3000, 2048, 2);
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, unk_0x9B0761B4C3EB8BC7(), 3000);
						TASK::TASK_WANDER_STANDARD(false, 1193033728, 0);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_61);
						AUDIO::STOP_SCRIPTED_CONVERSATION(bLocal_56, iLocal_61);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_61);
						PED::SET_PED_KEEP_TASK(bLocal_56, true);
					}
				}
			}
		}
		else if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_56))
		{
			if (OBJECT::DOES_PICKUP_EXIST(iLocal_89))
			{
				if (unk_0xC2169C00B643278B(bLocal_56, OBJECT::GET_PICKUP_COORDS(iLocal_89), 10f, 10f, 7f, 0, 1, 0))
				{
					HUD::HIDE_HUD_AND_RADAR_THIS_FRAME(bLocal_56);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_61);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, OBJECT::GET_PICKUP_COORDS(iLocal_89), 1f, 20000, 1f, 512, 40000f);
					TASK::TASK_TURN_PED_TO_FACE_COORD(0, OBJECT::GET_PICKUP_COORDS(iLocal_89), 0);
					TASK::TASK_PLAY_ANIM(0, cLocal_93, "pickup_low", 8f, -8f, -1, 0, 0f, false, false, false);
					TASK::TASK_LOOK_AT_ENTITY(false, unk_0x9B0761B4C3EB8BC7(), 3000, 2048, 2);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, unk_0x9B0761B4C3EB8BC7(), 3000);
					TASK::TASK_WANDER_STANDARD(false, 1193033728, 0);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_61);
					AUDIO::STOP_SCRIPTED_CONVERSATION(bLocal_56, iLocal_61);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_61);
					PED::SET_PED_KEEP_TASK(bLocal_56, true);
					iLocal_91 = 1;
				}
			}
		}
	}
}

bool func_110(int iParam0)
{
	return func_111(iParam0);
}

bool func_111(int iParam0)
{
	bool bVar0;
	
	if (!OBJECT::DOES_PICKUP_EXIST(iParam0))
	{
		return 0;
	}
	bVar0 = HUD::ADD_BLIP_FOR_PICKUP(iParam0);
	HUD::SET_BLIP_SCALE(bVar0, func_108(MISC::SET_BIT(), 0.7f, 0.7f));
	return bVar0;
}

int func_112(bool bParam0)
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

void func_113()
{
	bool bVar0;
	int iVar1;
	
	bVar0 = false;
	switch (iLocal_65)
	{
		case 1:
		case 2:
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(bLocal_55, unk_0x9B0761B4C3EB8BC7(), true))
			{
				ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(bLocal_55);
				bVar0 = true;
			}
			if (ENTITY::GET_ENTITY_COORDS(bLocal_73, false) && unk_0xE0B3BC41DDA88DF0(bLocal_55, bLocal_73, 0))
			{
				if (VEHICLE::DOES_VEHICLE_HAVE_STUCK_VEHICLE_CHECK(bLocal_73))
				{
					if (VEHICLE::IS_VEHICLE_STUCK_ON_ROOF(bLocal_73))
					{
						bVar0 = true;
					}
				}
			}
			else if (!ENTITY::GET_ENTITY_COORDS(bLocal_73, false) || !func_182(bLocal_55, -1273030092))
			{
				bVar0 = true;
			}
			if (!PED::IS_PED_FLEEING(bLocal_55))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(bLocal_55, -1273030092) == 7)
				{
					bVar0 = true;
				}
			}
			if (bVar0)
			{
				if (!iLocal_86)
				{
					if (unk_0xE0B3BC41DDA88DF0(bLocal_55, bLocal_73, 0))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(bLocal_55, 242628503) != 1 && TASK::GET_SCRIPT_TASK_STATUS(bLocal_55, 242628503) != 0)
						{
							TASK::OPEN_SEQUENCE_TASK(&iLocal_62);
							TASK::TASK_LEAVE_ANY_VEHICLE(false, 0, 0);
							TASK::TASK_SMART_FLEE_PED(false, unk_0x9B0761B4C3EB8BC7(), 300f, -1, false, false);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_62);
							AUDIO::STOP_SCRIPTED_CONVERSATION(bLocal_55, iLocal_62);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_62);
						}
					}
					else if (TASK::GET_SCRIPT_TASK_STATUS(bLocal_55, 242628503) != 1 && TASK::GET_SCRIPT_TASK_STATUS(bLocal_55, 242628503) != 0)
					{
						TASK::OPEN_SEQUENCE_TASK(&iLocal_62);
						TASK::TASK_SMART_FLEE_PED(false, unk_0x9B0761B4C3EB8BC7(), 300f, -1, false, false);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_62);
						AUDIO::STOP_SCRIPTED_CONVERSATION(bLocal_55, iLocal_62);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_62);
					}
					iVar1 = TASK::GET_NAVMESH_ROUTE_RESULT(bLocal_55);
					if (iVar1 == 2)
					{
						HUD::HIDE_HUD_AND_RADAR_THIS_FRAME(bLocal_55);
						if (func_112(unk_0x9B0761B4C3EB8BC7()))
						{
							TASK::TASK_COMBAT_PED(bLocal_55, unk_0x9B0761B4C3EB8BC7(), 0, 16);
						}
						iLocal_86 = 1;
					}
				}
			}
			break;
	}
}

int func_114()
{
	if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_55))
	{
		if (ENTITY::IS_ENTITY_AT_ENTITY(unk_0x9B0761B4C3EB8BC7(), bLocal_55, 180f, 180f, 50f, false, true, 0) || !ENTITY::IS_ENTITY_OCCLUDED(bLocal_55))
		{
			func_115(bLocal_59, bLocal_55, 180f, 1061158912, 0);
			return 1;
		}
		else
		{
			if (Local_107[2 /*10*/].f_7)
			{
				func_185(&Local_107, 2);
			}
			PED::DELETE_PED(&bLocal_55);
			if (ENTITY::GET_ENTITY_COORDS(bLocal_73, false))
			{
				if (ENTITY::IS_ENTITY_OCCLUDED(bLocal_73))
				{
					VEHICLE::DELETE_VEHICLE(&bLocal_73);
				}
			}
		}
	}
	else if (SYSTEM::VDIST(NETWORK::NETWORK_ARE_HANDLES_THE_SAME(unk_0x9B0761B4C3EB8BC7(), 0), NETWORK::NETWORK_ARE_HANDLES_THE_SAME(bLocal_55, 0)) < 300f)
	{
		return 1;
	}
	return 0;
}

void func_115(bool bParam0, bool bParam1, float fParam2, float fParam3, int iParam4)
{
	void fVar0;
	void fVar1;
	float fVar2;
	
	fVar2 = (fParam2 * fParam3);
	if (SYSTEM::VMAG(bParam0))
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
						HUD::SET_BLIP_FLASHES(bParam0, true);
						HUD::SET_BLIP_ALPHA(bParam0, (255 - fVar0));
					}
					else
					{
						HUD::SET_BLIP_FLASHES(bParam0, false);
						HUD::SET_BLIP_ALPHA(bParam0, 255);
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
						HUD::SET_BLIP_FLASHES(bParam0, true);
						HUD::SET_BLIP_ALPHA(bParam0, (255 - fVar0));
					}
					else
					{
						HUD::SET_BLIP_FLASHES(bParam0, false);
						HUD::SET_BLIP_ALPHA(bParam0, 255);
					}
				}
			}
		}
	}
}

void func_116(bool bParam0, char* sParam1, int iParam2)
{
	AUDIO::_PLAY_AMBIENT_SPEECH1(bParam0, sParam1, func_117(iParam2), 1);
}

int func_117(int iParam0)
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

float func_118(bool bParam0, bool bParam1, int iParam2)
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

void func_119(bool bParam0, var uParam1)
{
	if (SYSTEM::VMAG(bParam0))
	{
		if (MISC::GET_GAME_TIMER() > *uParam1 + 500)
		{
			if (HUD::GET_BLIP_COLOUR(bParam0) == 1)
			{
				HUD::SET_BLIP_AS_FRIENDLY(bParam0, true);
			}
			else
			{
				HUD::SET_BLIP_AS_FRIENDLY(bParam0, false);
				HUD::SET_BLIP_COLOUR(bParam0, 1);
			}
			*uParam1 = MISC::GET_GAME_TIMER();
		}
		if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && func_120(0))
		{
			func_102(1);
		}
	}
}

bool func_120(bool bParam0)
{
	return unk_0xCE990E643CD9D0E5(Global_111854, iParam0);
}

void func_121()
{
	switch (iLocal_65)
	{
		case 1:
		case 2:
			if (ENTITY::GET_ENTITY_COORDS(bLocal_73, false))
			{
				if (iLocal_126)
				{
					if (PED::IS_PED_SITTING_IN_VEHICLE(bLocal_55, bLocal_73) || TASK::GET_SCRIPT_TASK_STATUS(bLocal_55, -1273030092) == 1)
					{
						TASK::TASK_VEHICLE_MISSION_COORS_TARGET(bLocal_55, bLocal_73, Local_53, 8, 35f, 786469, 10f, 10f, true);
					}
					else
					{
						TASK::TASK_SMART_FLEE_PED(bLocal_55, unk_0x9B0761B4C3EB8BC7(), 300f, -1, false, false);
					}
				}
				else
				{
					if (!VEHICLE::DOES_VEHICLE_HAVE_STUCK_VEHICLE_CHECK(bLocal_73))
					{
						VEHICLE::ADD_VEHICLE_STUCK_CHECK_WITH_WARP(bLocal_73, 0.1f, 1000, false, false, false, -1);
					}
					TASK::TASK_VEHICLE_MISSION_COORS_TARGET(bLocal_55, bLocal_73, NETWORK::NETWORK_ARE_HANDLES_THE_SAME(unk_0x9B0761B4C3EB8BC7(), 0), 8, 35f, 786469, 10f, 10f, true);
				}
			}
			else
			{
				TASK::TASK_SMART_FLEE_PED(bLocal_55, unk_0x9B0761B4C3EB8BC7(), 300f, -1, false, false);
			}
			break;
		
		case 4:
			if (!iLocal_126)
			{
				TASK::OPEN_SEQUENCE_TASK(&iLocal_61);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 182.61f, 6637.91f, 30.54f, 3f, 20000, 0.25f, true, 40000f);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 240.53f, 6694.1f, 28.62f, 3f, 20000, 0.25f, true, 40000f);
				TASK::TASK_SMART_FLEE_PED(false, unk_0x9B0761B4C3EB8BC7(), 300f, -1, false, false);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_61);
				AUDIO::STOP_SCRIPTED_CONVERSATION(bLocal_55, iLocal_61);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_61);
			}
			else
			{
				TASK::TASK_SMART_FLEE_PED(bLocal_55, unk_0x9B0761B4C3EB8BC7(), 300f, -1, false, false);
			}
			break;
		
		default:
			if (HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Local_53, -3044.11f, 594.34f, 6.73f, 1) < 5f)
			{
				TASK::TASK_SMART_FLEE_COORD(bLocal_55, NETWORK::NETWORK_ARE_HANDLES_THE_SAME(unk_0x9B0761B4C3EB8BC7(), 0), 300f, -1, false, false);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_61);
			}
			else if (iLocal_126)
			{
				TASK::TASK_SMART_FLEE_PED(bLocal_55, unk_0x9B0761B4C3EB8BC7(), 300f, -1, false, false);
			}
			else
			{
				TASK::TASK_SMART_FLEE_COORD(bLocal_55, NETWORK::NETWORK_ARE_HANDLES_THE_SAME(unk_0x9B0761B4C3EB8BC7(), 0), 300f, -1, false, false);
			}
			break;
	}
	if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_55))
	{
		PED::SET_PED_KEEP_TASK(bLocal_55, true);
	}
}

bool func_122(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_64(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_123(sParam2, iParam3, 0);
}

int func_123(char* sParam0, int iParam1, bool bParam2)
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
					func_62();
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
		if (func_61(8, -1))
		{
			return 0;
		}
		Global_21081 = { Global_21075 };
		func_60();
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
				func_59();
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
				if (func_58())
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
			if (func_57())
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
			func_56();
			Global_21015 = bParam2;
		}
		Global_21007 = iParam1;
		StringCopy(&Global_20624, sParam0, 24);
		Global_19871 = 0;
		func_55();
		func_124();
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
		func_62();
	}
	return 0;
}

void func_124()
{
	if (!func_125())
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

int func_125()
{
	if (!Global_262145.f_28160)
	{
		return 0;
	}
	if (!Global_76833)
	{
		return 0;
	}
	if (PLAYER::PLAYER_ID() == func_128())
	{
		return 0;
	}
	if (func_126(PLAYER::PLAYER_ID()))
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

bool func_126(int iParam0)
{
	return func_127(iParam0, 20);
}

bool func_127(int iParam0, bool bParam1)
{
	return unk_0xCE990E643CD9D0E5(Global_1630317[iParam0 /*595*/].f_11.f_4, iParam1);
}

int func_128()
{
	return -1;
}

bool func_129()
{
	bool bVar0;
	struct<3> Var1;
	struct<3> Var2;
	
	Var1 = { 6f, 6f, 6f };
	Var2 = { -6f, -6f, -6f };
	if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_56))
	{
		if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_ID()))
		{
			if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), bLocal_56))
			{
				iLocal_67++;
				if (iLocal_67 > 60)
				{
					bVar0 = true;
				}
			}
			else
			{
				iLocal_67 = 0;
			}
		}
		if (MISC::IS_BULLET_IN_AREA(PED::GET_PED_BONE_COORDS(bLocal_56, 31086, 0f, 0f, 0f), 2f, true))
		{
			bVar0 = true;
		}
		Var1 = { Var1 + PED::GET_PED_BONE_COORDS(bLocal_56, 31086, 0f, 0f, 0f) };
		Var2 = { Var2 + PED::GET_PED_BONE_COORDS(bLocal_56, 31086, 0f, 0f, 0f) };
		if ((MISC::IS_PROJECTILE_TYPE_IN_AREA(Var2, Var1, joaat("weapon_smokegrenade"), true) || MISC::IS_PROJECTILE_TYPE_IN_AREA(Var2, Var1, joaat("weapon_grenade"), true)) || MISC::IS_PROJECTILE_TYPE_IN_AREA(Var2, Var1, joaat("weapon_stickybomb"), true))
		{
			bVar0 = true;
		}
		if (GRAPHICS::GET_IS_PETROL_DECAL_IN_RANGE(PED::GET_PED_BONE_COORDS(bLocal_56, 31086, 0f, 0f, 0f), 12f))
		{
			bVar0 = true;
		}
		if (FIRE::IS_EXPLOSION_IN_SPHERE(-1, PED::GET_PED_BONE_COORDS(bLocal_56, 31086, 0f, 0f, 0f), 50f))
		{
			bVar0 = true;
		}
	}
	if (bVar0)
	{
		if (!func_131())
		{
		}
		else
		{
			bVar0 = false;
			if (TASK::GET_SCRIPT_TASK_STATUS(bLocal_56, 474215631) != 1)
			{
				if (func_130(bLocal_56))
				{
					TASK::TASK_COWER(bLocal_56, 2000);
				}
			}
		}
	}
	return bVar0;
}

int func_130(bool bParam0)
{
	if (func_112(bParam0))
	{
		if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_131()
{
	if (func_112(bLocal_55))
	{
		if (func_118(bLocal_56, bLocal_55, 1) < 22f)
		{
			return 1;
		}
	}
	return 0;
}

bool func_132()
{
	bool bVar0;
	
	bVar0 = false;
	if (MISC::IS_BIT_SET(bLocal_56))
	{
		if (STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_56))
		{
			bVar0 = true;
		}
		else
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(bLocal_56, unk_0x9B0761B4C3EB8BC7(), true) && MISC::IS_PC_VERSION(bLocal_56))
			{
				bVar0 = true;
				ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(bLocal_56);
			}
			if (MISC::IS_BULLET_IN_AREA(NETWORK::NETWORK_ARE_HANDLES_THE_SAME(bLocal_56, 1), 1f, true))
			{
				bVar0 = true;
			}
			if (func_133(bLocal_56, 0, 1116471296, 1126825984, 0, 1, 0, 0))
			{
				bVar0 = true;
			}
		}
	}
	if (bVar0)
	{
		if (func_131())
		{
			bVar0 = false;
			if (TASK::GET_SCRIPT_TASK_STATUS(bLocal_56, 474215631) != 1)
			{
				if (func_130(bLocal_56))
				{
					TASK::TASK_COWER(bLocal_56, 2000);
				}
			}
		}
		else if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_55))
		{
			if (TASK::GET_SCRIPT_TASK_STATUS(bLocal_55, 1805844857) == 7)
			{
				PED::SET_PED_COMBAT_ATTRIBUTES(bLocal_55, 17, true);
				PED::SET_PED_COMBAT_ATTRIBUTES(bLocal_55, 13, false);
				TASK::TASK_SMART_FLEE_PED(bLocal_55, unk_0x9B0761B4C3EB8BC7(), 300f, -1, false, false);
			}
		}
	}
	return bVar0;
}

int func_133(bool bParam0, bool bParam1, float fParam2, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	struct<3> Var0;
	
	if (func_112(unk_0x9B0761B4C3EB8BC7()) && func_112(bParam0))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(bParam0, unk_0x9B0761B4C3EB8BC7(), true))
		{
			return 1;
		}
		if (func_147(bParam0, bParam1, bParam5, bParam6, bParam7))
		{
			return 1;
		}
		if (!WEAPON::IS_PED_ARMED(unk_0x9B0761B4C3EB8BC7(), 6))
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(unk_0x9B0761B4C3EB8BC7()))
			{
				Var0 = { NETWORK::NETWORK_ARE_HANDLES_THE_SAME(unk_0x9B0761B4C3EB8BC7(), 1) - NETWORK::NETWORK_ARE_HANDLES_THE_SAME(bParam0, 1) };
				if ((((Var0.x * Var0.x) + (Var0.f_1 * Var0.f_1)) + (Var0.f_2 * Var0.f_2)) <= 5f)
				{
					return func_146(unk_0x9B0761B4C3EB8BC7(), bParam0, fParam2);
				}
			}
		}
		if (bParam4)
		{
			return 0;
		}
		else if (func_134(bParam0, fParam3))
		{
			return 1;
		}
	}
	return 0;
}

int func_134(bool bParam0, float fParam1)
{
	float fVar0;
	
	if (func_112(unk_0x9B0761B4C3EB8BC7()) && func_112(bParam0))
	{
		if (func_145(bParam0) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), bParam0))
		{
			if (WEAPON::IS_PED_ARMED(unk_0x9B0761B4C3EB8BC7(), 6))
			{
				fVar0 = 40f;
			}
			else
			{
				fVar0 = 3f;
			}
			if (ENTITY::IS_ENTITY_AT_ENTITY(unk_0x9B0761B4C3EB8BC7(), bParam0, fVar0, fVar0, fVar0, false, true, 0))
			{
				if (func_135(bParam0, fParam1))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_135(bool bParam0, float fParam1)
{
	return func_136(bParam0, unk_0x9B0761B4C3EB8BC7(), fParam1, 1, 250, 7);
}

bool func_136(bool bParam0, bool bParam1, float fParam2, int iParam3, int iParam4, bool bParam5)
{
	var uVar0;
	struct<3> Var1;
	int iVar2;
	
	iVar2 = func_144(bParam0, bParam1);
	if (!func_112(bParam0) || !func_112(bParam1))
	{
		if (iVar2 != -1)
		{
			func_143(&(Local_49[iVar2 /*4*/]));
		}
		return 0;
	}
	if (!func_140(bParam0, bParam1, fParam2, iParam3))
	{
		return 0;
	}
	if (iVar2 == -1)
	{
		iVar2 = func_139();
		if (iVar2 == -1)
		{
			return 0;
		}
		Local_49[iVar2 /*4*/].f_1 = bParam0;
		Local_49[iVar2 /*4*/].f_2 = bParam1;
	}
	Var1 = { PED::GET_PED_BONE_COORDS(bParam0, 31086, 0f, 0f, 0f) };
	uVar0 = func_137(&(Local_49[iVar2 /*4*/]), Var1, bParam1, &(Local_49[iVar2 /*4*/].f_3), bParam0, bParam5);
	return (uVar0 || (MISC::GET_GAME_TIMER() - Local_49[iVar2 /*4*/].f_3) < iParam4);
}

int func_137(var uParam0, struct<3> Param1, bool bParam2, var uParam3, bool bParam4, bool bParam5)
{
	var uVar0;
	struct<3> Var1;
	var uVar2;
	bool bVar3;
	int iVar4;
	
	bVar3 = false;
	if (!func_112(bParam2))
	{
		*uParam0 = 0;
		return 0;
	}
	if (*uParam0 == 0)
	{
		Var1 = { func_138(bParam2, bParam5) };
		*uParam0 = SHAPETEST::START_SHAPE_TEST_LOS_PROBE(Param1, Var1 + Var1 - Param1 * Vector(0.1f, 0.1f, 0.1f), 511, bParam4, 7);
		return 0;
	}
	iVar4 = SHAPETEST::GET_SHAPE_TEST_RESULT(*uParam0, &uVar0, &Var1, &uVar2, &bVar3);
	if (iVar4 == 0)
	{
		*uParam0 = 0;
		return 0;
	}
	else if (iVar4 == 1)
	{
		return 0;
	}
	*uParam0 = 0;
	if (ENTITY::IS_ENTITY_A_PED(bVar3))
	{
		func_112(bVar3);
		if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(bVar3) == bParam2)
		{
			if (bLocal_50)
			{
				GRAPHICS::DRAW_DEBUG_LINE_WITH_TWO_COLOURS(Param1, NETWORK::NETWORK_ARE_HANDLES_THE_SAME(bParam2, 1), 255, 0, 0, 255, 0, 0, 255, 255);
			}
			*uParam3 = MISC::GET_GAME_TIMER();
			return 1;
		}
		return 0;
	}
	if (ENTITY::IS_ENTITY_A_VEHICLE(bVar3))
	{
		func_112(bVar3);
		if (SYSTEM::VDIST(bParam2, 0))
		{
			if (ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(bVar3) == ENTITY::GET_ENTITY_MODEL(bParam2, 0))
			{
				if (bLocal_50)
				{
					GRAPHICS::DRAW_DEBUG_LINE_WITH_TWO_COLOURS(Param1, NETWORK::NETWORK_ARE_HANDLES_THE_SAME(bParam2, 1), 255, 0, 0, 255, 0, 0, 255, 255);
				}
				*uParam3 = MISC::GET_GAME_TIMER();
				return 1;
			}
		}
		return 0;
	}
	return 0;
}

Vector3 func_138(bool bParam0, bool bParam1)
{
	bool bVar0;
	
	if (bParam1 == 7)
	{
		bVar0 = NETWORK::_NETWORK_GET_ROS_PRIVILEGE_25(0, 7);
		bParam1 = bVar0;
	}
	if (bParam1 == 0)
	{
		return NETWORK::NETWORK_ARE_HANDLES_THE_SAME(bParam0, 1);
	}
	else if (bParam1 == 1)
	{
		return PED::GET_PED_BONE_COORDS(bParam0, 31086, 0f, 0f, 0f);
	}
	else if (bParam1 == 2)
	{
		return PED::GET_PED_BONE_COORDS(bParam0, 39317, 0f, 0f, 0f);
	}
	else if (bParam1 == 3)
	{
		return PED::GET_PED_BONE_COORDS(bParam0, 18905, 0f, 0f, 0f);
	}
	else if (bParam1 == 4)
	{
		return PED::GET_PED_BONE_COORDS(bParam0, 57005, 0f, 0f, 0f);
	}
	else if (bParam1 == 5)
	{
		return PED::GET_PED_BONE_COORDS(bParam0, 63931, 0f, 0f, 0f);
	}
	else if (bParam1 == 6)
	{
		return PED::GET_PED_BONE_COORDS(bParam0, 36864, 0f, 0f, 0f);
	}
	return NETWORK::NETWORK_ARE_HANDLES_THE_SAME(bParam0, 1);
}

int func_139()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_49)
	{
		if ((Local_49[iVar0 /*4*/] == 0 && Local_49[iVar0 /*4*/].f_1 == 0) && Local_49[iVar0 /*4*/].f_2 == 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_140(bool bParam0, bool bParam1, float fParam2, int iParam3)
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	
	Var0 = { func_142(NETWORK::NETWORK_ARE_HANDLES_THE_SAME(bParam1, 1) - NETWORK::NETWORK_ARE_HANDLES_THE_SAME(bParam0, 1)) };
	if (fParam2 < 0.1f || fParam2 > 360f)
	{
		return 1;
	}
	if (iParam3 == 0)
	{
		Var1 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(bParam0) };
	}
	else
	{
		Var1 = { func_142(PED::GET_PED_BONE_COORDS(bParam0, 31086, 0f, 5f, 0f) - PED::GET_PED_BONE_COORDS(bParam0, 31086, 0f, 0f, 0f)) };
	}
	fVar2 = func_141(Var1, Var0);
	if (fVar2 <= SYSTEM::COS((fParam2 / 2f)))
	{
		return 0;
	}
	return 1;
}

float func_141(struct<3> Param0, struct<3> Param1)
{
	return (((Param0.x * Param1.x) + (Param0.f_1 * Param1.f_1)) + (Param0.f_2 * Param1.f_2));
}

Vector3 func_142(struct<3> Param0)
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

void func_143(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

int func_144(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_49)
	{
		if (Local_49[iVar0 /*4*/].f_1 == iParam0 && Local_49[iVar0 /*4*/].f_2 == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_145(bool bParam0)
{
	if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), bParam0) && WEAPON::IS_PED_ARMED(unk_0x9B0761B4C3EB8BC7(), 6))
	{
		return 1;
	}
	return 0;
}

bool func_146(bool bParam0, bool bParam1, float fParam2)
{
	struct<3> Var0;
	struct<3> Var1;
	
	Var0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(bParam0) };
	Var1 = { NETWORK::NETWORK_ARE_HANDLES_THE_SAME(bParam1, 1) - NETWORK::NETWORK_ARE_HANDLES_THE_SAME(bParam0, 1) };
	return (((Var0.x * Var1.x) + (Var0.f_1 * Var1.f_1)) / SYSTEM::VDIST(Var1, 0f, 0f, 0f)) > SYSTEM::COS(fParam2);
}

int func_147(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	float fVar0;
	float fVar1;
	int iVar2;
	
	fVar0 = 8f;
	fVar1 = 15f;
	if (bParam1 == 0)
	{
		fVar0 = 1.86f;
		fVar1 = 1.86f;
	}
	if (bParam2)
	{
		fVar0 = 2f;
	}
	if (func_112(unk_0x9B0761B4C3EB8BC7()) && func_112(bParam0))
	{
		MISC::GET_COORDS_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(unk_0x9B0761B4C3EB8BC7(), &iVar2, 1);
		if (iVar2 == joaat("weapon_petrolcan"))
		{
			fVar0 = 3f;
			fVar1 = 3f;
		}
		if (!bParam2)
		{
			if (func_151(bParam0, bParam1, fVar0, fVar1))
			{
				return 1;
			}
			if (func_148(bParam0, fVar1, bParam3, bParam4))
			{
				return 1;
			}
		}
		else
		{
			if (WEAPON::IS_PED_CURRENT_WEAPON_SILENCED(unk_0x9B0761B4C3EB8BC7()))
			{
				if (PED::IS_PED_PRONE(unk_0x9B0761B4C3EB8BC7()))
				{
					if (MISC::IS_BULLET_IN_AREA(NETWORK::NETWORK_ARE_HANDLES_THE_SAME(bParam0, 1), fVar0, true))
					{
						return 1;
					}
				}
			}
			else
			{
				if (bParam1)
				{
					fVar0 = 1.86f;
					fVar1 = 1.86f;
				}
				if (func_151(bParam0, bParam1, fVar0, fVar1))
				{
					return 1;
				}
			}
			if (func_148(bParam0, fVar1, bParam3, bParam4))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_148(bool bParam0, float fParam1, bool bParam2, bool bParam3)
{
	struct<3> Var0;
	struct<3> Var1;
	
	Var0 = { NETWORK::NETWORK_ARE_HANDLES_THE_SAME(bParam0, 1) };
	Var1 = { Var0 };
	Var0.x = (Var0.x - fParam1);
	Var0.f_1 = (Var0.f_1 - fParam1);
	Var0.f_2 = (Var0.f_2 - fParam1);
	Var1.x = (Var1.x + fParam1);
	Var1.f_1 = (Var1.f_1 + fParam1);
	Var1.f_2 = (Var1.f_2 + fParam1);
	if (bParam2)
	{
		if (((MISC::IS_PROJECTILE_TYPE_WITHIN_DISTANCE(NETWORK::NETWORK_ARE_HANDLES_THE_SAME(bParam0, 1), joaat("weapon_grenade"), fParam1, true) || MISC::IS_PROJECTILE_TYPE_WITHIN_DISTANCE(NETWORK::NETWORK_ARE_HANDLES_THE_SAME(bParam0, 1), joaat("weapon_molotov"), fParam1, true)) || MISC::IS_PROJECTILE_TYPE_WITHIN_DISTANCE(NETWORK::NETWORK_ARE_HANDLES_THE_SAME(bParam0, 1), joaat("weapon_smokegrenade"), fParam1, true)) || MISC::IS_PROJECTILE_TYPE_WITHIN_DISTANCE(NETWORK::NETWORK_ARE_HANDLES_THE_SAME(bParam0, 1), joaat("weapon_stickybomb"), 5f, true))
		{
			if (bParam3)
			{
				if (func_149(bParam0, fParam1))
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
	}
	else
	{
		if (bParam3)
		{
			if (func_149(bParam0, fParam1))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		if (MISC::IS_PROJECTILE_IN_AREA(Var0, Var1, true))
		{
			return 1;
		}
	}
	return 0;
}

int func_149(bool bParam0, float fParam1)
{
	var uVar0;
	struct<3> Var1;
	
	if ((((MISC::_GET_PROJECTILE_NEAR_PED(bParam0, joaat("weapon_grenade"), fParam1, &Var1, &uVar0, false) || MISC::_GET_PROJECTILE_NEAR_PED(bParam0, joaat("weapon_smokegrenade"), fParam1, &Var1, &uVar0, false)) || MISC::_GET_PROJECTILE_NEAR_PED(bParam0, joaat("weapon_bzgas"), fParam1, &Var1, &uVar0, false)) || MISC::_GET_PROJECTILE_NEAR_PED(bParam0, joaat("weapon_stickybomb"), fParam1, &Var1, &uVar0, false)) || MISC::_GET_PROJECTILE_NEAR_PED(bParam0, joaat("weapon_molotov"), fParam1, &Var1, &uVar0, false))
	{
		if (func_150(bParam0, Var1, 90f, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_150(bool bParam0, struct<3> Param1, float fParam2, int iParam3)
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	
	Var0 = { func_142(Param1 - NETWORK::NETWORK_ARE_HANDLES_THE_SAME(bParam0, 1)) };
	if (fParam2 < 0.1f || fParam2 > 360f)
	{
		return 1;
	}
	if (iParam3 == 0)
	{
		Var1 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(bParam0) };
	}
	else
	{
		Var1 = { func_142(PED::GET_PED_BONE_COORDS(bParam0, 31086, 0f, 5f, 0f) - PED::GET_PED_BONE_COORDS(bParam0, 31086, 0f, 0f, 0f)) };
	}
	fVar2 = func_141(Var1, Var0);
	if (fVar2 <= SYSTEM::COS((fParam2 / 2f)))
	{
		return 0;
	}
	return 1;
}

int func_151(bool bParam0, bool bParam1, float fParam2, float fParam3)
{
	if (bParam1)
	{
		if (PED::IS_PED_PRONE(unk_0x9B0761B4C3EB8BC7()))
		{
			if (ENTITY::IS_ENTITY_AT_ENTITY(unk_0x9B0761B4C3EB8BC7(), bParam0, fParam3, fParam3, fParam3, false, true, 0))
			{
				return 1;
			}
		}
	}
	if (MISC::IS_BULLET_IN_AREA(NETWORK::NETWORK_ARE_HANDLES_THE_SAME(bParam0, 1), fParam2, true))
	{
		return 1;
	}
	return 0;
}

void func_152()
{
	if (bLocal_90 || PED::IS_PED_IN_ANY_POLICE_VEHICLE(bLocal_55, 0))
	{
		func_180(&uLocal_152, 0, 0);
	}
	else
	{
		func_153(&uLocal_152, bLocal_55, "ATM_CHASEHINT", 0, 1, 1, 1);
	}
}

void func_153(var uParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	func_154(uParam0, bParam1, bParam2, iParam3, bParam4, iParam5, bParam6);
}

void func_154(var uParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, var uParam5, bool bParam6)
{
	func_155(uParam0, bParam1, 0f, 0f, 0f, bParam2, iParam3, bParam4, uParam5, bParam6);
}

void func_155(var uParam0, bool bParam1, struct<3> Param2, bool bParam3, int iParam4, bool bParam5, var uParam6, bool bParam7)
{
	if (!SYSTEM::VDIST(unk_0x9B0761B4C3EB8BC7(), 1))
	{
		func_180(uParam0, 0, 0);
	}
	uParam0->f_6 = 2;
	func_156(uParam0, bParam1, Param2, bParam3, iParam4, bParam5, uParam6, bParam7);
}

void func_156(var uParam0, bool bParam1, struct<3> Param2, bool bParam3, int iParam4, bool bParam5, var uParam6, bool bParam7)
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
	if (func_98(bVar0))
	{
		func_179();
	}
	if (func_178(bParam1) && ENTITY::IS_ENTITY_VISIBLE(bParam1))
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
			if (func_173(uParam0, bParam5, bParam7, 0))
			{
				func_170(uParam0, bParam1, Param2, iParam4);
			}
			if (*uParam0)
			{
				*uParam0 = 0;
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_160(bVar0))
				{
					if ((AUDIO::PRELOAD_SCRIPT_CONVERSATION(uParam0->f_3) && !AUDIO::PRELOAD_SCRIPT_CONVERSATION(bVar0)) && SYSTEM::VDIST(unk_0x9B0761B4C3EB8BC7(), 0))
					{
						if ((iVar1 && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && uParam6)
						{
							if (!func_98(bVar0))
							{
								func_103(bVar0, -1);
								uParam0->f_3 = bVar0;
								if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS("CMN_HINT", bVar0))
								{
									func_159(1);
								}
							}
						}
					}
				}
			}
			else if (func_160(bVar0))
			{
				if (AUDIO::PRELOAD_SCRIPT_CONVERSATION(uParam0->f_3) && !AUDIO::PRELOAD_SCRIPT_CONVERSATION(bVar0))
				{
					if (((ENTITY::IS_ENTITY_ON_SCREEN(bParam1) && iVar1) && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && uParam6)
					{
						if (!func_98(bVar0))
						{
							func_103(bVar0, -1);
							uParam0->f_3 = bVar0;
							if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS("CMN_HINT", bVar0))
							{
								func_159(1);
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
				if (func_98(bParam3))
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
						func_180(uParam0, bVar0, 1);
					}
				}
				else if (PED::IS_PED_IN_ANY_HELI(unk_0x9B0761B4C3EB8BC7()))
				{
					if (CAM::_0xEE778F8C7E1142E2(6) == 3 || CAM::_0xEE778F8C7E1142E2(6) == 4)
					{
						func_180(uParam0, bVar0, 1);
					}
				}
				else if (PED::IS_PED_IN_ANY_PLANE(unk_0x9B0761B4C3EB8BC7()))
				{
					if (CAM::_0xEE778F8C7E1142E2(4) == 3 || CAM::_0xEE778F8C7E1142E2(4) == 4)
					{
						func_180(uParam0, bVar0, 1);
					}
				}
				else if (PED::IS_PED_IN_ANY_SUB(unk_0x9B0761B4C3EB8BC7()))
				{
					if (CAM::_0xEE778F8C7E1142E2(5) == 3 || CAM::_0xEE778F8C7E1142E2(5) == 4)
					{
						func_180(uParam0, bVar0, 1);
					}
				}
				else if (PED::IS_PED_ON_ANY_BIKE(unk_0x9B0761B4C3EB8BC7()))
				{
					if (CAM::_0xEE778F8C7E1142E2(2) == 3 || CAM::_0xEE778F8C7E1142E2(2) == 4)
					{
						func_180(uParam0, bVar0, 1);
					}
				}
				else if (CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 3 || CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 4)
				{
					func_180(uParam0, bVar0, 1);
				}
			}
			if (!func_173(uParam0, bParam5, bParam7, 0))
			{
				if ((!*uParam0 && !uParam0->f_1) && !func_158(uParam0))
				{
					func_157(uParam0);
				}
			}
		}
	}
	else
	{
		func_180(uParam0, bVar0, 0);
	}
}

void func_157(var uParam0)
{
	if (func_178(unk_0x9B0761B4C3EB8BC7()))
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

int func_158(var uParam0)
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

int func_159(bool bParam0)
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

int func_160(bool bParam0)
{
	if (!func_161(1, 1, 0))
	{
		if ((!CAM::IS_SCREEN_FADED_OUT(bParam0) && func_98(bParam0)) || func_98("CMN_HINT"))
		{
			unk_0xD289B55B6AADBA10(1);
		}
		return 0;
	}
	switch (Global_41631)
	{
		case 0:
		case 3:
			if (func_159(0) < 3)
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_159(0) < 1)
			{
				return 1;
			}
			break;
		
		case 5:
		case 15:
			if (func_159(0) < 1)
			{
				return 1;
			}
			break;
		
		default:
			break;
	}
	return 0;
}

int func_161(bool bParam0, bool bParam1, bool bParam2)
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
	if (func_79(0))
	{
		return 0;
	}
	if (func_169())
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
	if ((func_168() || func_167(Global_4456448.f_129348)) || func_166())
	{
		if (SYSTEM::VDIST(unk_0x9B0761B4C3EB8BC7(), 0))
		{
			bVar0 = ENTITY::GET_ENTITY_MODEL(unk_0x9B0761B4C3EB8BC7(), 0);
			iVar1 = func_165(unk_0x9B0761B4C3EB8BC7(), 0);
			if (((VEHICLE::IS_TURRET_SEAT(bVar0, iVar1) || (MISC::GET_MODEL_DIMENSIONS(bVar0) == joaat("apc") && iVar1 != -1)) || (MISC::GET_MODEL_DIMENSIONS(bVar0) == joaat("akula") && iVar1 != -1)) || (((MISC::GET_MODEL_DIMENSIONS(bVar0) == joaat("riot2") && iVar1 == 0) && func_164(bVar0, 10)) && unk_0x7F8B14CBFB9813E5(bVar0, 10) != -1))
			{
				return 0;
			}
		}
	}
	if (Global_1688745)
	{
		return 0;
	}
	if (func_162(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	return 1;
}

int func_162(int iParam0)
{
	if (iParam0 != func_128())
	{
		if (func_163(iParam0, 1, 1))
		{
			return Global_2425869[iParam0 /*443*/].f_314.f_6 != -1;
		}
		else if ((Global_1312896 && iParam0 == PLAYER::PLAYER_ID()) && func_163(iParam0, 1, 0))
		{
			return Global_2425869[iParam0 /*443*/].f_314.f_6 != -1;
		}
	}
	return 0;
}

int func_163(int iParam0, bool bParam1, bool bParam2)
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

int func_164(bool bParam0, int iParam1)
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

int func_165(bool bParam0, int iParam1)
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

var func_166()
{
	return Global_2451787.f_18;
}

bool func_167(int iParam0)
{
	return iParam0 == 51;
}

var func_168()
{
	return Global_2451787.f_17;
}

bool func_169()
{
	return MISC::GET_GAME_TIMER() <= Global_22550.f_5878 + 100;
}

void func_170(var uParam0, bool bParam1, struct<3> Param2, int iParam3)
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
		func_180(uParam0, 0, 0);
	}
	if (func_65(Param2, 0f, 0f, 0f, 0))
	{
		if (ENTITY::IS_ENTITY_A_PED(bParam1))
		{
			bVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(bParam1);
			if (!SYSTEM::VDIST(bVar0, 0))
			{
				if (PLAYER::SET_PLAYER_WANTED_LEVEL(bVar0))
				{
					if (!func_171())
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

bool func_171()
{
	return func_172(PLAYER::PLAYER_ID());
}

int func_172(int iParam0)
{
	if (MISC::GET_MODEL_DIMENSIONS(PLAYER::GET_PLAYER_PED(iParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

int func_173(var uParam0, bool bParam1, bool bParam2, bool bParam3)
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
					if (func_177(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = MISC::GET_GAME_TIMER();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_176(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = MISC::GET_GAME_TIMER();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_176(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = MISC::GET_GAME_TIMER();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_177(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = MISC::GET_GAME_TIMER();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			if (func_158(uParam0))
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
						if (!func_177(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = MISC::GET_GAME_TIMER();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_176(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = MISC::GET_GAME_TIMER();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_176(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = MISC::GET_GAME_TIMER();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_177(bParam1, bParam2, bParam3))
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
					if (!func_177(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (!func_176(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (!func_176(bParam1, bParam2, bParam3) || SYSTEM::VDIST(unk_0x9B0761B4C3EB8BC7(), 1))
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
				else if (!func_177(bParam1, bParam2, bParam3))
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
						if (func_175(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0;
						}
					}
					else if (func_174(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (SYSTEM::VDIST(unk_0x9B0761B4C3EB8BC7(), 1) || func_174(bParam1, bParam2, bParam3))
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
					else if (func_175(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (!func_158(uParam0))
			{
				uParam0->f_5 = 0;
			}
			break;
	}
	if (!func_161(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}
	if (uParam0->f_7)
	{
		func_179();
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_174(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_161(bParam0, bParam1, bParam2))
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

int func_175(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_161(bParam0, bParam1, bParam2))
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

int func_176(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_161(bParam0, bParam1, bParam2))
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

int func_177(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_161(bParam0, bParam1, bParam2))
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

int func_178(bool bParam0)
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

void func_179()
{
	unk_0xBE20AB8238688965(&Global_7552, 4);
}

void func_180(var uParam0, bool bParam1, bool bParam2)
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
		if (func_98(uParam0->f_3))
		{
			unk_0xD289B55B6AADBA10(1);
		}
	}
	if (!AUDIO::PRELOAD_SCRIPT_CONVERSATION(bVar0))
	{
		if (func_98(bVar0))
		{
			unk_0xD289B55B6AADBA10(1);
		}
	}
}

float func_181(bool bParam0, struct<3> Param1, int iParam2)
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

int func_182(bool bParam0, int iParam1)
{
	if (func_130(bParam0))
	{
		if (TASK::GET_SCRIPT_TASK_STATUS(bParam0, iParam1) == 1 || TASK::GET_SCRIPT_TASK_STATUS(bParam0, iParam1) == 0)
		{
			return 1;
		}
	}
	return 0;
}

void func_183(char* sParam0)
{
	func_184(sParam0);
}

void func_184(bool bParam0)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS(sParam0, sParam0))
	{
	}
}

void func_185(var uParam0, int iParam1)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

void func_186()
{
	TASK::OPEN_SEQUENCE_TASK(&iLocal_61);
	TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, bLocal_55, 750);
	TASK::TASK_PLAY_ANIM(0, cLocal_148, sLocal_149, 8f, -8f, -1, 0, 0f, false, false, false);
	TASK::TASK_PLAY_ANIM(0, cLocal_148, sLocal_150, 8f, -2f, -1, 0, 0f, false, false, false);
	TASK::TASK_PLAY_ANIM(0, cLocal_148, sLocal_151, 8f, -2f, -1, 0, 0f, false, false, false);
	TASK::TASK_PLAY_ANIM(0, cLocal_148, sLocal_149, 8f, -2f, -1, 0, 0f, false, false, false);
	TASK::TASK_PLAY_ANIM(0, cLocal_148, sLocal_150, 8f, -2f, -1, 0, 0f, false, false, false);
	TASK::TASK_PLAY_ANIM(0, cLocal_148, sLocal_151, 8f, -2f, -1, 1, 0f, false, false, false);
	TASK::CLOSE_SEQUENCE_TASK(iLocal_61);
	AUDIO::STOP_SCRIPTED_CONVERSATION(bLocal_56, iLocal_61);
	TASK::CLEAR_SEQUENCE_TASK(&iLocal_61);
	if (SYSTEM::VMAG(bLocal_58))
	{
		unk_0x93370FA10F15BE44(&bLocal_58);
	}
	if (!SYSTEM::VMAG(bLocal_59))
	{
		bLocal_59 = func_105(bLocal_55, 1, 0);
	}
	HUD::SHOW_HEIGHT_ON_BLIP(bLocal_59, true);
	PED::SET_CREATE_RANDOM_COPS(false);
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.1f);
	func_121();
	if ((SYSTEM::VDIST(NETWORK::NETWORK_ARE_HANDLES_THE_SAME(bLocal_56, 0), -2956.26f, 487.97f, 15.46f) > 5f && HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Local_53, -203.72f, -861.8f, 29.27f, 1) > 5f) && HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Local_53, 288.46f, -1256.71f, 28.44f, 1) > 5f)
	{
		if (func_118(unk_0x9B0761B4C3EB8BC7(), bLocal_56, 1) < 50f)
		{
			func_122(&Local_107, cLocal_123, sLocal_115, 3, 0, 0, 0);
			iLocal_85 = 1;
		}
	}
	iLocal_66 = MISC::GET_GAME_TIMER();
	SYSTEM::SETTIMERA(0);
	if (func_112(unk_0x9B0761B4C3EB8BC7()))
	{
		AUDIO::STOP_PED_SPEAKING(unk_0x9B0761B4C3EB8BC7(), true);
	}
	func_187(1);
}

int func_187(int iParam0)
{
	if (func_189())
	{
		Global_111848 = 1;
		Global_111845 = MISC::GET_GAME_TIMER();
		if (func_188(Global_111847))
		{
			func_102(0);
		}
		HUD::SET_MISSION_NAME(true, "RE_TITLE");
		if (iParam0 && func_188(Global_111847))
		{
			HUD::FLASH_MINIMAP_DISPLAY();
		}
		return 1;
	}
	return 0;
}

int func_188(int iParam0)
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

int func_189()
{
	switch (func_190(&Global_31027, 0, 5, 0, SCRIPT::GET_ID_OF_THIS_THREAD()))
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

int func_190(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
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
		if (func_194(0))
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
		if (!func_192(iParam2))
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
			func_191(uParam0, iParam4);
		}
	}
	return 2;
}

void func_191(var uParam0, int iParam1)
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

bool func_192(int iParam0)
{
	return func_193(iParam0, Global_41631);
}

int func_193(int iParam0, int iParam1)
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

int func_194(int iParam0)
{
	if (Global_41631 == 15)
	{
		return 0;
	}
	if (func_192(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_195()
{
	if (iLocal_134 == -1)
	{
		if (CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE())
		{
			if (ENTITY::IS_ENTITY_ON_SCREEN(bLocal_55))
			{
				iLocal_134 = MISC::GET_GAME_TIMER();
			}
		}
	}
	else if (MISC::GET_GAME_TIMER() > iLocal_134 + 1000)
	{
		return 1;
	}
	if (FIRE::IS_EXPLOSION_IN_SPHERE(-1, Local_53, 50f))
	{
		return 1;
	}
	if ((MISC::GET_GAME_TIMER() - iLocal_135) > 30000)
	{
		if (!ENTITY::IS_ENTITY_OCCLUDED(bLocal_55))
		{
			return 1;
		}
		else
		{
			func_278();
		}
	}
	if (SYSTEM::VMAG(bLocal_59))
	{
		if ((HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Local_53, -3044.11f, 594.34f, 6.73f, 1) > 5f && HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Local_53, -712.9f, -819.32f, 22.73f, 1) > 5f) && HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Local_53, 24.13f, -946.84f, 28.36f, 1) > 5f)
		{
			if (CAM::IS_SPHERE_VISIBLE(NETWORK::NETWORK_ARE_HANDLES_THE_SAME(bLocal_55, 0), 2.5f))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_196()
{
	if (SYSTEM::VDIST(Local_53, -3044.06f, 594.93f, 6.74f) < 5f)
	{
		if (!SYSTEM::VMAG(bLocal_59))
		{
			if (func_112(bLocal_56) && func_112(unk_0x9B0761B4C3EB8BC7()))
			{
				if (ENTITY::IS_ENTITY_AT_ENTITY(unk_0x9B0761B4C3EB8BC7(), bLocal_56, 60f, 90f, 12f, false, true, 0))
				{
					bLocal_59 = func_105(bLocal_55, 1, 0);
					HUD::SHOW_HEIGHT_ON_BLIP(bLocal_59, false);
				}
			}
		}
		else
		{
			func_119(bLocal_59, &uLocal_70);
		}
	}
	else if (!SYSTEM::VMAG(bLocal_59))
	{
		if (func_112(bLocal_56) && func_112(unk_0x9B0761B4C3EB8BC7()))
		{
			if (ENTITY::IS_ENTITY_AT_ENTITY(unk_0x9B0761B4C3EB8BC7(), bLocal_56, 90f, 90f, 8f, false, true, 0))
			{
				bLocal_59 = func_105(bLocal_55, 1, 0);
				HUD::SHOW_HEIGHT_ON_BLIP(bLocal_59, false);
			}
		}
	}
	else
	{
		func_119(bLocal_59, &uLocal_70);
	}
	if (iLocal_135 == -1)
	{
		iLocal_135 = MISC::GET_GAME_TIMER();
	}
}

int func_197()
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	
	Var0 = { Local_53 };
	Var1 = { 0f, 0f, fLocal_54 };
	Var2 = { 10f, 10f, 5f };
	if (iLocal_65 == 1)
	{
		func_221();
		if (SYSTEM::VDIST(Local_53, -203.758f, -861.738f, 29.2684f) < 5f)
		{
			Local_74 = { -197.9643f, -868.5554f, 28.2738f };
			fLocal_76 = 196f;
			Local_75 = { -187.5415f, -858.1728f, 28.1863f };
			bLocal_77 = 160.391f;
			Local_136 = { -259.0351f, -865.7119f, 28f };
			Local_137 = { -130.3981f, -908.8096f, 40f };
			TASK::ASSISTED_MOVEMENT_REQUEST_ROUTE("ATM_1");
			unk_0x78FCB2E22C41B9D5(fLocal_106);
			while (!ENTITY::DOES_ENTITY_EXIST(fLocal_106))
			{
				if (func_208())
				{
					func_278();
				}
				SYSTEM::WAIT(0);
			}
			VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(fLocal_106, true);
		}
		else
		{
			Local_74 = { -2968.5f, 494.48f, 14.82f };
			fLocal_76 = 55.24f;
			Local_75 = { -2973.03f, 496.38f, 14.96f };
			bLocal_77 = 3.18f;
			Local_136 = { -259.0351f, -865.7119f, 28f };
			Local_137 = { -130.3981f, -908.8096f, 40f };
			unk_0x78FCB2E22C41B9D5(fLocal_106);
			while (!ENTITY::DOES_ENTITY_EXIST(fLocal_106))
			{
				if (func_208())
				{
					func_278();
				}
				SYSTEM::WAIT(0);
			}
			VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(fLocal_106, true);
		}
	}
	else if (iLocal_65 == 2)
	{
		func_221();
		Local_74 = { 283.31f, -1249.51f, 28.95f };
		fLocal_76 = 78.25f;
		Local_75 = { 288.9906f, -1248.443f, 28.2847f };
		bLocal_77 = 75.9756f;
		Local_136 = { 266.3643f, -1313.829f, 28.59103f };
		Local_137 = { 265.1489f, -1215.932f, 36.20192f };
		unk_0x78FCB2E22C41B9D5(fLocal_106);
		while (!ENTITY::DOES_ENTITY_EXIST(fLocal_106))
		{
			if (func_208())
			{
				func_278();
			}
			SYSTEM::WAIT(0);
		}
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(fLocal_106, true);
	}
	else if (iLocal_65 == 3)
	{
		func_221();
		Local_75 = { -1587.15f, -539.9152f, 34.3644f };
		bLocal_77 = 327f;
		Local_136 = { -1596.203f, -474.8844f, 32f };
		Local_137 = { -1595.572f, -565.8368f, 48f };
	}
	else if (iLocal_65 == 4)
	{
		func_221();
		Local_74 = { 181.2355f, 6632.627f, 30.5732f };
		fLocal_76 = 182f;
		Local_75 = { 200.0727f, 6630.587f, 30.517f };
		bLocal_77 = 165f;
		Local_136 = { 178.1817f, 6660.375f, 31f };
		Local_137 = { 179.1249f, 6530.043f, 38f };
		MISC::SET_STUNT_JUMPS_CAN_TRIGGER(false);
		unk_0xAF7D4BF357E8B79E(179.5463f, 6625.689f, 30.2739f, 184.245f, 6635.661f, 31.5188f, 0, 1);
		unk_0x78FCB2E22C41B9D5(fLocal_106);
		while (!ENTITY::DOES_ENTITY_EXIST(fLocal_106))
		{
			if (func_208())
			{
				func_278();
			}
			SYSTEM::WAIT(0);
		}
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(fLocal_106, true);
	}
	else if (iLocal_65 == 5)
	{
		func_221();
	}
	if (func_199())
	{
		MISC::CLEAR_AREA(Local_53, Var2.x, false, false, false, false);
		fLocal_63 = PATHFIND::SET_ROADS_IN_AREA(Local_53 - Var2, Local_53 + Var2, false, true, 1, 1);
		bLocal_56 = PED::CREATE_PED(5, iLocal_105, Local_53, fLocal_54, true, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(bLocal_56, 13, false);
		PED::SET_PED_COMBAT_ATTRIBUTES(bLocal_56, 11, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(bLocal_56, 17, false);
		PED::SET_PED_COMPONENT_VARIATION(bLocal_56, 6, 1, 0, 0);
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(bLocal_56, true, 1);
		ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(bLocal_56, true);
		PED::SET_PED_CAN_BE_TARGETTED(bLocal_56, false);
		AUDIO::SET_AMBIENT_VOICE_NAME(bLocal_56, sLocal_147);
		PED::SET_PED_MONEY(bLocal_56, 0);
		if (iLocal_71 == 1)
		{
			PED::SET_PED_COMPONENT_VARIATION(bLocal_56, 0, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(bLocal_56, 2, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(bLocal_56, 3, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(bLocal_56, 4, 0, 2, 0);
		}
		bLocal_55 = PED::CREATE_PED(22, iLocal_104, Local_53, 0f, true, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(bLocal_55, 17, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(bLocal_55, 13, false);
		PED::SET_PED_COMBAT_ATTRIBUTES(bLocal_55, 6, true);
		PED::SET_PED_FLEE_ATTRIBUTES(bLocal_55, 128, true);
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(bLocal_55, true, 1);
		PED::_0x2208438012482A1A(bLocal_55, 1);
		PLAYER::SET_PLAYER_VEHICLE_DEFENSE_MODIFIER(bLocal_55, 5.885454E-44f, 1);
		PLAYER::SET_PLAYER_VEHICLE_DEFENSE_MODIFIER(bLocal_55, 3.937649E-43f, 1);
		PLAYER::SET_PLAYER_VEHICLE_DEFENSE_MODIFIER(bLocal_55, 2.410233E-43f, 0);
		PLAYER::SET_PLAYER_VEHICLE_DEFENSE_MODIFIER(bLocal_55, 1.919779E-43f, 1);
		PED::_0x733C87D4CE22BEA2(bLocal_55);
		AUDIO::SET_AMBIENT_VOICE_NAME(bLocal_55, sLocal_146);
		PED::SET_PED_TARGET_LOSS_RESPONSE(bLocal_55, 1);
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(bLocal_55, unk_0xD7D25254A712E758(cLocal_92, "b_atm_mugging", Var0, Var1, 0, 2), false, false, true);
		Var3 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION(cLocal_92, "b_atm_mugging", Var0, Var1, 0f, 2) };
		ENTITY::SET_ENTITY_HEADING(bLocal_55, Var3.f_2);
		if (func_112(bLocal_56))
		{
			if (PED::IS_PED_MALE(bLocal_56))
			{
				ENTITY::SET_ENTITY_COORDS_NO_OFFSET(bLocal_56, unk_0xD7D25254A712E758("random@atmrobberygen@male", "idle_a", Var0, Var1, 0, 2), false, false, true);
				Var3 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION("random@atmrobberygen@male", "idle_a", Var0, Var1, 0f, 2) };
			}
			else
			{
				ENTITY::SET_ENTITY_COORDS_NO_OFFSET(bLocal_56, unk_0xD7D25254A712E758("random@atmrobberygen@female", "idle_a", Var0, Var1, 0, 2), false, false, true);
				Var3 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION("random@atmrobberygen@female", "idle_a", Var0, Var1, 0f, 2) };
			}
			ENTITY::SET_ENTITY_HEADING(bLocal_56, Var3.f_2);
		}
		TASK::TASK_PLAY_ANIM(bLocal_55, cLocal_92, "b_atm_mugging", 1000f, -4f, -1, 1, 0f, false, false, false);
		if (PED::IS_PED_MALE(bLocal_56))
		{
			TASK::TASK_PLAY_ANIM(bLocal_56, "random@atmrobberygen@male", "idle_a", 1000f, -4f, -1, 1, 0f, false, false, false);
			unk_0x1082C25039B168F8("random@atmrobberygen@female");
		}
		else
		{
			TASK::TASK_PLAY_ANIM(bLocal_56, "random@atmrobberygen@female", "idle_a", 1000f, -4f, -1, 1, 0f, false, false, false);
			unk_0x1082C25039B168F8("random@atmrobberygen@male");
		}
		PED::SET_PED_AS_ENEMY(bLocal_55, true);
		PED::_0x2208438012482A1A(bLocal_56, 1);
		unk_0x92BD213E6A0E666B(bLocal_55, joaat("weapon_pistol"), -1, 1, 1);
		WEAPON::SET_PED_AMMO(bLocal_55, joaat("weapon_pistol"), 34, false);
		ENTITY::SET_ENTITY_HEALTH(bLocal_55, joaat("weapon_pistol"), 0);
		ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(bLocal_55, true, 0f);
		switch (func_39())
		{
			case 0:
				sLocal_112 = "MICHAEL";
				break;
			
			case 1:
				sLocal_112 = "FRANKLIN";
				break;
			
			case 2:
				sLocal_112 = "TREVOR";
				break;
		}
		func_198(&Local_107, 0, unk_0x9B0761B4C3EB8BC7(), sLocal_112, 0, 1);
		func_198(&Local_107, 1, bLocal_56, sLocal_114, 0, 1);
		func_198(&Local_107, 2, bLocal_55, "ATMRobber", 0, 1);
		if (iLocal_65 == 1 || iLocal_65 == 2)
		{
			bLocal_73 = VEHICLE::CREATE_VEHICLE(fLocal_106, Local_74, fLocal_76, true, true, false);
			VEHICLE::SET_VEHICLE_ENGINE_ON(bLocal_73, true, true, false);
			VEHICLE::ADD_VEHICLE_UPSIDEDOWN_CHECK(bLocal_73);
			VEHICLE::SET_DISABLE_PRETEND_OCCUPANTS(bLocal_73, true);
			if (iLocal_65 == 2)
			{
				VEHICLE::SET_VEHICLE_DOOR_OPEN(bLocal_73, 0, false, false);
			}
			else if (iLocal_65 == 1)
			{
				PED::SET_PED_HELMET(bLocal_55, false);
				PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(bLocal_55, 3);
			}
			else if (iLocal_65 == 4)
			{
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(bLocal_73, 3);
			}
		}
		PLAYER::SET_PLAYER_VEHICLE_DEFENSE_MODIFIER(unk_0x9B0761B4C3EB8BC7(), 4.484155E-44f, 0);
		return 1;
	}
	else if (func_208())
	{
		func_278();
	}
	return 0;
}

void func_198(var uParam0, int iParam1, bool bParam2, char* sParam3, int iParam4, int iParam5)
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

int func_199()
{
	STREAMING::REQUEST_ANIM_DICT("random@atmrobberygen@male");
	STREAMING::REQUEST_ANIM_DICT("random@atmrobberygen@female");
	if (!iLocal_81)
	{
		func_207(&Local_164, 3);
		Local_164.f_146 = MISC::GET_FRAME_COUNT();
		func_206(&Local_164, iLocal_104);
		func_206(&Local_164, iLocal_105);
		func_206(&Local_164, iLocal_101);
		func_206(&Local_164, iLocal_102);
		func_204(&Local_164, cLocal_92);
		func_204(&Local_164, cLocal_148);
		func_204(&Local_164, cLocal_142);
		func_204(&Local_164, cLocal_93);
		iLocal_81 = 1;
	}
	if ((STREAMING::HAS_ANIM_DICT_LOADED("random@atmrobberygen@male") && STREAMING::HAS_ANIM_DICT_LOADED("random@atmrobberygen@female")) && func_200(&Local_164))
	{
		return 1;
	}
	return 0;
}

int func_200(var uParam0)
{
	int iVar0;
	
	if (!uParam0->f_145)
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (unk_0xCE990E643CD9D0E5((*uParam0)[iVar0 /*18*/], 30))
		{
			if (!unk_0xCE990E643CD9D0E5((*uParam0)[iVar0 /*18*/], 29))
			{
				return 0;
			}
			if (!func_201(uParam0[iVar0 /*18*/]))
			{
				return 0;
			}
		}
		iVar0++;
	}
	uParam0->f_145 = 0;
	return 1;
}

bool func_201(var uParam0)
{
	return func_202(*uParam0, &(uParam0->f_2), uParam0->f_1);
}

int func_202(bool bParam0, char* sParam1, void fParam2)
{
	if (unk_0xCE990E643CD9D0E5(bParam0, 30))
	{
		if (unk_0xCE990E643CD9D0E5(bParam0, 29))
		{
			switch (func_203(bParam0))
			{
				case 0:
					return ENTITY::DOES_ENTITY_EXIST(fParam2);
					break;
				
				case 1:
					return STREAMING::HAS_ANIM_DICT_LOADED(sParam1);
					break;
				
				case 2:
					return STREAMING::HAS_CLIP_SET_LOADED(sParam1);
					break;
				
				case 3:
					return GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(sParam1);
					break;
				
				case 4:
					return VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(fParam2, sParam1);
					break;
				
				case 5:
					return TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sParam1);
					break;
				
				case 6:
					return AUDIO::REQUEST_SCRIPT_AUDIO_BANK(sParam1, unk_0xCE990E643CD9D0E5(bParam0, 27), -1);
					break;
				
				case 7:
					return SCRIPT::HAS_SCRIPT_WITH_NAME_HASH_LOADED(fParam2);
					break;
				
				case 8:
					return HUD::REQUEST_ADDITIONAL_TEXT_FOR_DLC(fParam2);
					break;
				
				case 9:
					return STREAMING::HAS_PTFX_ASSET_LOADED();
					break;
				
				default:
					break;
			}
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_203(bool bParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (unk_0xCE990E643CD9D0E5(bParam0, iVar0))
		{
			return bVar0;
		}
		bVar0++;
	}
	return -1;
}

void func_204(var uParam0, char* sParam1)
{
	func_205(uParam0, 1, -1, sParam1, 0);
}

void func_205(var uParam0, bool bParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (unk_0xCE990E643CD9D0E5((*uParam0)[iVar0 /*18*/], 30))
		{
			if (unk_0xCE990E643CD9D0E5((*uParam0)[iVar0 /*18*/], iParam1))
			{
				if (iParam2 != -1)
				{
					if ((uParam0[iVar0 /*18*/])->f_1 == iParam2)
					{
						return;
					}
				}
				if (bParam1 != 4)
				{
					if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS(sParam3, "NULL"))
					{
						if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS(&((uParam0[iVar0 /*18*/])->f_2), sParam3))
						{
							return;
						}
					}
				}
				if (bParam1 == 9)
				{
					return;
				}
			}
		}
		iVar0++;
	}
	if (!uParam0->f_145)
	{
		uParam0->f_145 = 1;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (!unk_0xCE990E643CD9D0E5((*uParam0)[iVar0 /*18*/], 30))
		{
			StringCopy(&((uParam0[iVar0 /*18*/])->f_2), bParam3, 64);
			(uParam0[iVar0 /*18*/])->f_1 = iParam2;
			(*uParam0)[iVar0 /*18*/] = iParam4;
			unk_0xBE20AB8238688965(uParam0[iVar0 /*18*/], bParam1);
			unk_0xBE20AB8238688965(uParam0[iVar0 /*18*/], 30);
			return;
		}
		iVar0++;
	}
}

void func_206(var uParam0, int iParam1)
{
	func_205(uParam0, 0, iParam1, "NULL", 0);
}

void func_207(var uParam0, int iParam1)
{
	if (iParam1 > 0)
	{
		uParam0->f_147 = iParam1;
	}
}

int func_208()
{
	if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_ID()) && !STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(unk_0x9B0761B4C3EB8BC7()))
	{
		if (SYSTEM::VDIST2(NETWORK::NETWORK_ARE_HANDLES_THE_SAME(unk_0x9B0761B4C3EB8BC7(), 1), Local_51) < (75f * 75f))
		{
			return 1;
		}
		if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(unk_0x9B0761B4C3EB8BC7())) > 1369f && !func_220())
		{
			return 0;
		}
	}
	if (func_216())
	{
		return 1;
	}
	if (func_209(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_209(float fParam0, bool bParam1)
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
		if (func_41(func_39()))
		{
			iVar5 = func_215();
			iVar6 = 0;
			iVar6 = 0;
			while (iVar6 < 63)
			{
				iVar1 = iVar6;
				if (unk_0xCE990E643CD9D0E5(Global_111858.f_18570[iVar1 /*6*/], 2) && !unk_0xCE990E643CD9D0E5(Global_111858.f_18570[iVar1 /*6*/], 3))
				{
					func_210(iVar1, &Var0);
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

void func_210(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_211(uParam1, "Abigail1", func_213(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_212(iParam0), 1, 0);
			break;
		
		case 1:
			func_211(uParam1, "Abigail2", func_213(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_212(iParam0), 1, 0);
			break;
		
		case 2:
			func_211(uParam1, "Barry1", func_213(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_212(iParam0), 1, 0);
			break;
		
		case 3:
			func_211(uParam1, "Barry2", func_213(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_212(iParam0), 1, 1);
			break;
		
		case 4:
			func_211(uParam1, "Barry3", func_213(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_212(iParam0), 0, 0);
			break;
		
		case 5:
			func_211(uParam1, "Barry3A", func_213(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_212(iParam0), 0, 1);
			break;
		
		case 6:
			func_211(uParam1, "Barry3C", func_213(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_212(iParam0), 0, 1);
			break;
		
		case 7:
			func_211(uParam1, "Barry4", func_213(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_212(iParam0), 0, 0);
			break;
		
		case 8:
			func_211(uParam1, "Dreyfuss1", func_213(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_212(iParam0), 0, 0);
			break;
		
		case 9:
			func_211(uParam1, "Epsilon1", func_213(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_212(iParam0), 0, 0);
			break;
		
		case 10:
			func_211(uParam1, "Epsilon2", func_213(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_212(iParam0), 1, 0);
			break;
		
		case 11:
			func_211(uParam1, "Epsilon3", func_213(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_212(iParam0), 0, 0);
			break;
		
		case 12:
			func_211(uParam1, "Epsilon4", func_213(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_212(iParam0), 0, 0);
			break;
		
		case 13:
			func_211(uParam1, "Epsilon5", func_213(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_212(iParam0), 1, 0);
			break;
		
		case 14:
			func_211(uParam1, "Epsilon6", func_213(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_212(iParam0), 0, 1);
			break;
		
		case 15:
			func_211(uParam1, "Epsilon7", func_213(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_212(iParam0), 0, 0);
			break;
		
		case 16:
			func_211(uParam1, "Epsilon8", func_213(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_212(iParam0), 1, 0);
			break;
		
		case 17:
			func_211(uParam1, "Extreme1", func_213(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_212(iParam0), 0, 1);
			break;
		
		case 18:
			func_211(uParam1, "Extreme2", func_213(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_212(iParam0), 0, 1);
			break;
		
		case 19:
			func_211(uParam1, "Extreme3", func_213(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_212(iParam0), 0, 1);
			break;
		
		case 20:
			func_211(uParam1, "Extreme4", func_213(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_212(iParam0), 0, 0);
			break;
		
		case 21:
			func_211(uParam1, "Fanatic1", func_213(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_212(iParam0), 1, 0);
			break;
		
		case 22:
			func_211(uParam1, "Fanatic2", func_213(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_212(iParam0), 1, 0);
			break;
		
		case 23:
			func_211(uParam1, "Fanatic3", func_213(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_212(iParam0), 0, 1);
			break;
		
		case 24:
			func_211(uParam1, "Hao1", func_213(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_212(iParam0), 0, 1);
			break;
		
		case 25:
			func_211(uParam1, "Hunting1", func_213(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_212(iParam0), 0, 1);
			break;
		
		case 26:
			func_211(uParam1, "Hunting2", func_213(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_212(iParam0), 0, 1);
			break;
		
		case 27:
			func_211(uParam1, "Josh1", func_213(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_212(iParam0), 1, 0);
			break;
		
		case 28:
			func_211(uParam1, "Josh2", func_213(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_212(iParam0), 1, 1);
			break;
		
		case 29:
			func_211(uParam1, "Josh3", func_213(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_212(iParam0), 1, 1);
			break;
		
		case 30:
			func_211(uParam1, "Josh4", func_213(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_212(iParam0), 1, 0);
			break;
		
		case 31:
			func_211(uParam1, "Maude1", func_213(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_212(iParam0), 0, 1);
			break;
		
		case 32:
			func_211(uParam1, "Minute1", func_213(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_212(iParam0), 0, 1);
			break;
		
		case 33:
			func_211(uParam1, "Minute2", func_213(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_212(iParam0), 0, 1);
			break;
		
		case 34:
			func_211(uParam1, "Minute3", func_213(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_212(iParam0), 0, 1);
			break;
		
		case 35:
			func_211(uParam1, "MrsPhilips1", func_213(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_212(iParam0), 0, 0);
			break;
		
		case 36:
			func_211(uParam1, "MrsPhilips2", func_213(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_212(iParam0), 0, 0);
			break;
		
		case 37:
			func_211(uParam1, "Nigel1", func_213(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_212(iParam0), 1, 0);
			break;
		
		case 38:
			func_211(uParam1, "Nigel1A", func_213(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_212(iParam0), 1, 1);
			break;
		
		case 39:
			func_211(uParam1, "Nigel1B", func_213(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_212(iParam0), 1, 1);
			break;
		
		case 40:
			func_211(uParam1, "Nigel1C", func_213(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_212(iParam0), 1, 1);
			break;
		
		case 41:
			func_211(uParam1, "Nigel1D", func_213(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_212(iParam0), 1, 1);
			break;
		
		case 42:
			func_211(uParam1, "Nigel2", func_213(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_212(iParam0), 1, 1);
			break;
		
		case 43:
			func_211(uParam1, "Nigel3", func_213(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_212(iParam0), 1, 1);
			break;
		
		case 44:
			func_211(uParam1, "Omega1", func_213(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_212(iParam0), 0, 0);
			break;
		
		case 45:
			func_211(uParam1, "Omega2", func_213(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_212(iParam0), 0, 0);
			break;
		
		case 46:
			func_211(uParam1, "Paparazzo1", func_213(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_212(iParam0), 0, 1);
			break;
		
		case 47:
			func_211(uParam1, "Paparazzo2", func_213(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_212(iParam0), 0, 1);
			break;
		
		case 48:
			func_211(uParam1, "Paparazzo3", func_213(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_212(iParam0), 0, 0);
			break;
		
		case 49:
			func_211(uParam1, "Paparazzo3A", func_213(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_212(iParam0), 0, 1);
			break;
		
		case 50:
			func_211(uParam1, "Paparazzo3B", func_213(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_212(iParam0), 0, 1);
			break;
		
		case 51:
			func_211(uParam1, "Paparazzo4", func_213(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_212(iParam0), 0, 0);
			break;
		
		case 52:
			func_211(uParam1, "Rampage1", func_213(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_212(iParam0), 0, 0);
			break;
		
		case 54:
			func_211(uParam1, "Rampage3", func_213(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_212(iParam0), 1, 0);
			break;
		
		case 55:
			func_211(uParam1, "Rampage4", func_213(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_212(iParam0), 1, 0);
			break;
		
		case 56:
			func_211(uParam1, "Rampage5", func_213(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_212(iParam0), 0, 0);
			break;
		
		case 53:
			func_211(uParam1, "Rampage2", func_213(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_212(iParam0), 1, 0);
			break;
		
		case 57:
			func_211(uParam1, "TheLastOne", func_213(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_212(iParam0), 0, 1);
			break;
		
		case 58:
			func_211(uParam1, "Tonya1", func_213(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_212(iParam0), 0, 1);
			break;
		
		case 59:
			func_211(uParam1, "Tonya2", func_213(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_212(iParam0), 0, 1);
			break;
		
		case 60:
			func_211(uParam1, "Tonya3", func_213(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_212(iParam0), 0, 1);
			break;
		
		case 61:
			func_211(uParam1, "Tonya4", func_213(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_212(iParam0), 0, 1);
			break;
		
		case 62:
			func_211(uParam1, "Tonya5", func_213(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_212(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_211(var uParam0, char* sParam1, struct<2> Param2, int iParam3, int iParam4, int iParam5, struct<3> Param6, int iParam7, char* sParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, var uParam19, int iParam20, int iParam21)
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

int func_212(int iParam0)
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

struct<2> func_213(int iParam0)
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	cVar1 = { func_214(iParam0) };
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

struct<2> func_214(int iParam0)
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

int func_215()
{
	func_40();
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

int func_216()
{
	if (func_219() && !func_220())
	{
		return 1;
	}
	if (func_218() && func_217())
	{
		return 1;
	}
	return 0;
}

bool func_217()
{
	return Global_111576 > 0;
}

int func_218()
{
	if (Global_95877 != -1)
	{
		return 1;
	}
	return 0;
}

int func_219()
{
	if (Global_95877 != -1)
	{
		return unk_0xCE990E643CD9D0E5(Global_89743[Global_95877 /*34*/].f_15, 20);
	}
	return 0;
}

int func_220()
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

void func_221()
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	if (iLocal_71 == 0 && iLocal_65 == 5)
	{
		iLocal_71 = NETWORK::_NETWORK_GET_ROS_PRIVILEGE_25(1, 5);
	}
	else if (iLocal_65 != 5)
	{
		iLocal_71 = iLocal_65;
	}
	switch (iLocal_71)
	{
		case 1:
			iLocal_104 = joaat("g_m_y_armgoon_02");
			sLocal_146 = "G_M_Y_ArmGoon_02_White_Armenian_MINI_01";
			iLocal_105 = joaat("a_f_m_tourist_01");
			sLocal_147 = "A_F_M_BEVHILLS_02_WHITE_FULL_02";
			fLocal_106 = joaat("sanchez");
			sLocal_115 = "REAR1_ATTR";
			sLocal_116 = "REAR1_HELP";
			sLocal_117 = "REAR1_PROMPT";
			sLocal_118 = "REAR1_CHASE";
			sLocal_119 = "REAR1_FLEE";
			cLocal_120 = "REAR1_THX";
			sLocal_121 = "REAR1_DAMN";
			switch (func_39())
			{
				case 0:
					sLocal_124 = "REAR1_REM";
					sLocal_122 = "REAR1_FKM";
					sLocal_113 = "REAR1_WM";
					sLocal_125 = "REAR1_GYM";
					break;
				
				case 1:
					sLocal_124 = "REAR1_REF";
					sLocal_122 = "REAR1_FKF";
					sLocal_113 = "REAR1_WF";
					sLocal_125 = "REAR1_GYF";
					break;
				
				case 2:
					sLocal_124 = "REAR1_RET";
					sLocal_122 = "REAR1_FKT";
					sLocal_113 = "REAR1_WT";
					sLocal_125 = "REAR1_GYT";
					break;
			}
			sLocal_114 = "ATMRobVictim1";
			cLocal_123 = "REAR1AU";
			if (iLocal_103 == 0)
			{
				bVar0 = NETWORK::_NETWORK_GET_ROS_PRIVILEGE_25(0, 3);
				if (bVar0 == 0)
				{
					iLocal_101 = joaat("prop_ld_purse_01");
				}
				else if (bVar0 == 1)
				{
					iLocal_101 = joaat("prop_ld_wallet_01");
				}
				else if (bVar0 == 2)
				{
					bVar1 = func_222();
					if (bVar1)
					{
						iLocal_101 = joaat("prop_ld_wallet_pickup");
					}
					else
					{
						iLocal_101 = joaat("prop_ld_purse_01");
					}
				}
				iLocal_103 = 1;
			}
			cLocal_142 = "RANDOM@ATMROBBERY1";
			sLocal_143 = "Return_Wallet_Positive_A_Player";
			sLocal_144 = "Return_Wallet_Positive_A_Female";
			sLocal_145 = "Return_Wallet_Positive_A_Cam";
			cLocal_148 = "random@car_thief@waiting_ig_4";
			sLocal_149 = "waiting";
			sLocal_150 = "waiting";
			sLocal_151 = "waiting";
			break;
		
		case 2:
			iLocal_104 = joaat("g_m_y_famfor_01");
			sLocal_146 = "G_M_Y_FamFor_01_BLACK_MINI_01";
			iLocal_105 = joaat("a_m_y_hipster_02");
			sLocal_147 = "A_M_Y_Hipster_02_White_Full_01";
			fLocal_106 = joaat("ruiner");
			sLocal_115 = "REAR2_ATTR";
			sLocal_116 = "REAR2_HELP";
			sLocal_117 = "REAR2_PROMPT";
			sLocal_118 = "REAR2_CHASE";
			sLocal_119 = "REAR2_FLEE";
			cLocal_120 = "REAR2_THX";
			sLocal_121 = "REAR2_DAMN";
			switch (func_39())
			{
				case 0:
					sLocal_124 = "REAR2_REM";
					sLocal_122 = "REAR2_FKM";
					sLocal_113 = "REAR2_WM";
					sLocal_125 = "REAR2_GYM";
					break;
				
				case 1:
					sLocal_124 = "REAR2_REF";
					sLocal_122 = "REAR2_FKF";
					sLocal_113 = "REAR2_WF";
					sLocal_125 = "REAR2_GYF";
					break;
				
				case 2:
					sLocal_124 = "REAR2_RET";
					sLocal_122 = "REAR2_FKT";
					sLocal_113 = "REAR2_WT";
					sLocal_125 = "REAR2_GYT";
					break;
			}
			sLocal_114 = "ATMRobVictim2";
			cLocal_123 = "REAR2AU";
			iLocal_101 = joaat("prop_ld_wallet_pickup");
			cLocal_142 = "RANDOM@ATMROBBERY2";
			sLocal_143 = "Return_Wallet_Positive_A_Player";
			sLocal_144 = "Return_Wallet_Positive_A_Male";
			sLocal_145 = "Return_Wallet_Positive_A_Cam";
			cLocal_148 = "RANDOM@BICYCLE_THIEF@IDLE_A";
			sLocal_149 = "IDLE_A";
			sLocal_150 = "IDLE_B";
			sLocal_151 = "IDLE_C";
			break;
		
		case 3:
			iLocal_105 = joaat("a_f_m_tourist_01");
			sLocal_147 = "A_F_Y_Tourist_01_White_Mini_01";
			iLocal_104 = joaat("g_m_y_salvagoon_02");
			sLocal_146 = "G_M_Y_SalvaGoon_02_SALVADORIAN_MINI_03";
			sLocal_115 = "REAR5_ATTR";
			sLocal_116 = "REAR5_HELP";
			sLocal_117 = "REAR5_PROMPT";
			sLocal_118 = "REAR5_CHASE";
			sLocal_119 = "REAR5_FLEE";
			cLocal_120 = "REAR5_THX";
			sLocal_121 = "REAR5_DAMN";
			switch (func_39())
			{
				case 0:
					sLocal_124 = "REAR5_REM";
					sLocal_122 = "REAR5_FKM";
					sLocal_113 = "REAR5_WM";
					sLocal_125 = "REAR5_GYM";
					break;
				
				case 1:
					sLocal_124 = "REAR5_REF";
					sLocal_122 = "REAR5_FKF";
					sLocal_113 = "REAR5_WF";
					sLocal_125 = "REAR5_GYF";
					break;
				
				case 2:
					sLocal_124 = "REAR5_RET";
					sLocal_122 = "REAR5_FKT";
					sLocal_113 = "REAR5_WT";
					sLocal_125 = "REAR5_GYT";
					break;
			}
			sLocal_114 = "ATMRobVictim5";
			cLocal_123 = "REAR5AU";
			if (iLocal_103 == 0)
			{
				bVar0 = NETWORK::_NETWORK_GET_ROS_PRIVILEGE_25(0, 3);
				if (bVar0 == 0)
				{
					iLocal_101 = joaat("prop_ld_purse_01");
				}
				else if (bVar0 == 1)
				{
					iLocal_101 = joaat("prop_ld_wallet_01");
				}
				else if (bVar0 == 2)
				{
					bVar2 = func_222();
					if (bVar2)
					{
						iLocal_101 = joaat("prop_ld_wallet_pickup");
					}
					else
					{
						iLocal_101 = joaat("prop_ld_wallet_01");
					}
				}
				iLocal_103 = 1;
			}
			cLocal_142 = "RANDOM@ATMROBBERY3";
			sLocal_143 = "Return_Wallet_Positive_B_Player";
			sLocal_144 = "Return_Wallet_Positive_B_Female";
			sLocal_145 = "Return_Wallet_Positive_B_Cam";
			cLocal_148 = "random@car_thief@waiting_ig_4";
			sLocal_149 = "waiting";
			sLocal_150 = "waiting";
			sLocal_151 = "waiting";
			break;
		
		case 4:
			iLocal_105 = joaat("a_f_m_tourist_01");
			sLocal_147 = "A_F_M_BevHills_02_WHITE_FULL_01";
			fLocal_106 = joaat("ruiner");
			iLocal_104 = joaat("g_m_y_azteca_01");
			sLocal_146 = "G_M_Y_Latino01_Latino_MINI_01";
			sLocal_115 = "REAR3_ATTR";
			sLocal_116 = "REAR3_HELP";
			sLocal_117 = "REAR3_PROMPT";
			sLocal_118 = "REAR3_CHASE";
			sLocal_119 = "REAR3_FLEE";
			cLocal_120 = "REAR3_THX";
			sLocal_121 = "REAR3_DAMN";
			switch (func_39())
			{
				case 0:
					sLocal_124 = "REAR3_REM";
					sLocal_122 = "REAR3_FKM";
					sLocal_113 = "REAR3_WM";
					sLocal_125 = "REAR3_GYM";
					break;
				
				case 1:
					sLocal_124 = "REAR3_REF";
					sLocal_122 = "REAR3_FKF";
					sLocal_113 = "REAR3_WF";
					sLocal_125 = "REAR3_GYF";
					break;
				
				case 2:
					sLocal_124 = "REAR3_RET";
					sLocal_122 = "REAR3_FKT";
					sLocal_113 = "REAR3_WT";
					sLocal_125 = "REAR3_GYT";
					break;
			}
			sLocal_114 = "ATMRobVictim3";
			cLocal_123 = "REAR3AU";
			if (iLocal_103 == 0)
			{
				bVar0 = NETWORK::_NETWORK_GET_ROS_PRIVILEGE_25(0, 3);
				if (bVar0 == 0)
				{
					iLocal_101 = joaat("prop_ld_purse_01");
				}
				else if (bVar0 == 1)
				{
					iLocal_101 = joaat("prop_ld_wallet_01");
				}
				else if (bVar0 == 2)
				{
					bVar3 = func_222();
					if (bVar3)
					{
						iLocal_101 = joaat("prop_ld_wallet_pickup");
					}
					else
					{
						iLocal_101 = joaat("prop_ld_purse_01");
					}
				}
				iLocal_103 = 1;
			}
			cLocal_142 = "RANDOM@ATMROBBERY4";
			sLocal_143 = "Return_Wallet_Positive_C_Player";
			sLocal_144 = "Return_Wallet_Positive_C_Female";
			sLocal_145 = "Return_Wallet_Positive_C_Cam";
			cLocal_148 = "random@car_thief@waiting_ig_4";
			sLocal_149 = "waiting";
			sLocal_150 = "waiting";
			sLocal_151 = "waiting";
			break;
	}
	if (HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Local_53, -203.72f, -861.8f, 29.27f, 1) < 5f)
	{
		Local_138 = { -197.64f, -863.25f, 28.33f };
		fLocal_139 = 334.5007f;
		Local_140 = { -187.24f, -856.77f, 28.97f };
		bLocal_141 = 162.69f;
		iLocal_72 = 1;
	}
	else if (HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Local_53, 288.46f, -1256.71f, 28.44f, 1) < 5f)
	{
		Local_138 = { 286.5f, -1256.73f, 28.29f };
		fLocal_139 = 167.3216f;
		Local_140 = { 250.55f, -1239.27f, 28.84f };
		bLocal_141 = 265.51f;
		iLocal_72 = 2;
	}
	else if (HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Local_53, -3044.11f, 594.34f, 6.73f, 1) < 5f)
	{
		Local_138 = { -3044.66f, 595.7f, 6.59f };
		fLocal_139 = 296.7338f;
		Local_140 = { -3037.55f, 608.53f, 7.34f };
		bLocal_141 = 202.3f;
		iLocal_72 = 3;
	}
	else if (HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Local_53, 174.53f, 6637.64f, 30.57f, 1) < 5f)
	{
		Local_138 = { 175.57f, 6636.58f, 30.57f };
		fLocal_139 = 260.4868f;
		Local_140 = { 188.97f, 6616.2f, 31.48f };
		bLocal_141 = 93.97f;
		iLocal_72 = 4;
	}
	else if (HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Local_53, 24.13f, -946.84f, 28.36f, 1) < 5f)
	{
		Local_138 = { 23.65f, -948.26f, 28.36f };
		fLocal_139 = 258.8732f;
		Local_140 = { 22.19f, -955.82f, 28.94f };
		bLocal_141 = 70.66f;
		iLocal_72 = 6;
	}
	else if (HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Local_53, 296.13f, -894.01f, 28.23f, 1) < 5f)
	{
		Local_138 = { 294.64f, -893.6f, 28.18f };
		fLocal_139 = 156.7222f;
		Local_140 = { 286.4f, -897.28f, 28.57f };
		bLocal_141 = 341.97f;
		iLocal_72 = 8;
	}
	else if (HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Local_53, 1077.69f, -775.73f, 57.21f, 1) < 5f)
	{
		Local_138 = { 1077.64f, -773.86f, 57.09f };
		fLocal_139 = 275.6593f;
		Local_140 = { 1081.93f, -764.08f, 57.35f };
		bLocal_141 = 268.57f;
		iLocal_72 = 11;
	}
	else if (HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Local_53, -2072.88f, -317.19f, 12.32f, 1) < 5f)
	{
		Local_138 = { -2074.93f, -316.75f, 12.16f };
		fLocal_139 = 157.3363f;
		Local_140 = { -2101.2f, -293.74f, 12.74f };
		bLocal_141 = 263.12f;
		iLocal_72 = 16;
	}
	else if (HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Local_53, -821.33f, -1082.43f, 10.14f, 1) < 5f)
	{
		Local_138 = { -819.39f, -1084.12f, 10.03f };
		fLocal_139 = 236.6294f;
		Local_140 = { -803.18f, -1075.91f, 11.13f };
		bLocal_141 = 209.53f;
		iLocal_72 = 17;
	}
	else if (HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Local_53, -712.9f, -819.32f, 22.73f, 1) < 5f)
	{
		Local_138 = { -712.88f, -820.47f, 22.61f };
		fLocal_139 = 268.2568f;
		Local_140 = { -721.63f, -826.84f, 22.82f };
		bLocal_141 = 93.14f;
		iLocal_72 = 18;
	}
	else if (HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Local_53, -387.12f, 6045.79f, 30.5f, 1) < 5f)
	{
		Local_138 = { -389.5633f, 6042.153f, 30.4989f };
		fLocal_139 = 223.2838f;
		Local_140 = { -406.23f, 6045.69f, 31.06f };
		bLocal_141 = 229.52f;
		iLocal_72 = 19;
	}
	else if (HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Local_53, -301.84f, -830.39f, 31.38f, 1) < 5f)
	{
		Local_138 = { -304.1459f, -837.4778f, 30.6799f };
		fLocal_139 = 286.139f;
		Local_140 = { -304.56f, -840.76f, 31.26f };
		bLocal_141 = 77.59f;
		iLocal_72 = 22;
	}
	else if (HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Local_53, -254.3f, -691.96f, 32.61f, 1) < 5f)
	{
		Local_138 = { -253.51f, -689.26f, 32.57f };
		fLocal_139 = 209.9227f;
		Local_140 = { -250.91f, -684.01f, 33f };
		bLocal_141 = 230.65f;
		iLocal_72 = 23;
	}
	else if (HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Local_53, 89.39f, 2f, 67.34f, 1) < 5f)
	{
		Local_138 = { 88.7f, 0.01f, 67.38f };
		fLocal_139 = 71.0114f;
		Local_140 = { 91.35f, -7.07f, 67.82f };
		bLocal_141 = 70.28f;
		iLocal_72 = 25;
	}
	else if (HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Local_53, -526.42f, -1222.51f, 17.46f, 1) < 5f)
	{
		Local_138 = { -530.11f, -1217.33f, 17.26f };
		fLocal_139 = 53.768f;
		Local_140 = { -522.45f, -1196.35f, 18.45f };
		bLocal_141 = 297.22f;
		iLocal_72 = 30;
	}
	else if (HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Local_53, -2956.78f, 488.19f, 14.47f, 1) < 5f)
	{
		Local_138 = { -2956.78f, 488.19f, 14.47f };
		fLocal_139 = 80.0912f;
		Local_140 = { -2974.34f, 491.96f, 15f };
		bLocal_141 = 1.95f;
		iLocal_72 = 31;
	}
	else
	{
		Local_138 = { Local_53 };
	}
}

int func_222()
{
	if (unk_0xCE990E643CD9D0E5(NETWORK::_NETWORK_GET_ROS_PRIVILEGE_25(0, 65535), false))
	{
		return 1;
	}
	return 0;
}

int func_223()
{
	if (!func_192(5))
	{
		return 1;
	}
	if (func_216())
	{
		return 1;
	}
	if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(unk_0x9B0761B4C3EB8BC7()))
	{
		if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(unk_0x9B0761B4C3EB8BC7())) > 1369f && !func_220())
		{
			return 0;
		}
	}
	if (func_209(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_224()
{
	if ((Global_111847 == func_225() && MISC::GET_RANDOM_EVENT_FLAG()) && Global_111848)
	{
		return 1;
	}
	return 0;
}

int func_225()
{
	struct<16> Var0;
	var uVar1;
	
	StringCopy(&Var0, TASK::IS_PED_BEING_ARRESTED(), 64);
	uVar1 = func_226(Var0);
	return uVar1;
}

int func_226(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
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

void func_227(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_145)
	{
		if ((MISC::GET_FRAME_COUNT() >= (uParam0->f_146 + uParam0->f_147) || unk_0xCE990E643CD9D0E5(Global_98955.f_20, 2)) || unk_0xCE990E643CD9D0E5(Global_98955.f_20, 13))
		{
			iVar0 = 0;
			while (iVar0 < 8)
			{
				if (unk_0xCE990E643CD9D0E5((*uParam0)[iVar0 /*18*/], 30))
				{
					if (!unk_0xCE990E643CD9D0E5((*uParam0)[iVar0 /*18*/], 29))
					{
						func_228(uParam0[iVar0 /*18*/]);
						uParam0->f_146 = MISC::GET_FRAME_COUNT();
						return;
					}
				}
				iVar0++;
			}
		}
	}
}

void func_228(var uParam0)
{
	func_229(uParam0, &(uParam0->f_2), uParam0->f_1);
}

void func_229(var uParam0, char* sParam1, void fParam2)
{
	if (unk_0xCE990E643CD9D0E5(*uParam0, 30))
	{
		switch (func_203(*uParam0))
		{
			case 0:
				unk_0x78FCB2E22C41B9D5(iParam2);
				break;
			
			case 1:
				STREAMING::REQUEST_ANIM_DICT(sParam1);
				break;
			
			case 2:
				STREAMING::REQUEST_CLIP_SET(sParam1);
				break;
			
			case 3:
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(sParam1, unk_0xCE990E643CD9D0E5(*uParam0, 28));
				break;
			
			case 4:
				VEHICLE::REQUEST_VEHICLE_RECORDING(fParam2, sParam1);
				break;
			
			case 5:
				TASK::REQUEST_WAYPOINT_RECORDING(sParam1);
				break;
			
			case 6:
				AUDIO::REQUEST_SCRIPT_AUDIO_BANK(sParam1, unk_0xCE990E643CD9D0E5(*uParam0, 27), -1);
				break;
			
			case 7:
				SCRIPT::REQUEST_SCRIPT_WITH_NAME_HASH(fParam2);
				break;
			
			case 8:
				HUD::HAS_ADDITIONAL_TEXT_LOADED(sParam1, fParam2);
				break;
			
			case 9:
				STREAMING::REQUEST_PTFX_ASSET();
				break;
			
			default:
				break;
		}
		unk_0xBE20AB8238688965(uParam0, 29);
	}
}

void func_230(bool bParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	if (*uParam1 == -99)
	{
		*uParam1 = MISC::GET_GAME_TIMER();
	}
	if (SYSTEM::VMAG(fParam0))
	{
		iVar0 = (MISC::GET_GAME_TIMER() - *uParam1);
		if (iVar0 < 5000)
		{
			iVar1 = SYSTEM::CEIL((SYSTEM::TO_FLOAT(iVar0) / 1000f));
			if ((iVar1 * 1000 - bVar0) < 500)
			{
				if (HUD::GET_BLIP_ALPHA(bParam0) != 255)
				{
					HUD::SET_BLIP_ALPHA(bParam0, 255);
				}
			}
			else if (HUD::GET_BLIP_ALPHA(bParam0) != 0)
			{
				HUD::SET_BLIP_ALPHA(bParam0, 0);
			}
		}
		else if (*uParam1 != -100)
		{
			*uParam1 = -100;
			if (HUD::GET_BLIP_ALPHA(bParam0) != 255)
			{
				HUD::SET_BLIP_ALPHA(bParam0, 255);
			}
		}
	}
}

void func_231()
{
}

void func_232()
{
}

void func_233(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_225();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_235(iParam0);
	MISC::_0x65D2EBB47E1CEC21(false);
	MISC::SET_RANDOM_EVENT_FLAG(true);
	Global_111844 = 0;
	func_234();
}

void func_234()
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

void func_235(int iParam0)
{
	Global_111847 = iParam0;
}

int func_236(struct<3> Param0, int iParam1, int iParam2, bool bParam3, bool bParam4)
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
		iParam1 = func_225();
	}
	if (iParam1 == -1)
	{
		return 0;
	}
	if (iParam1 == 31 || iParam1 == 32)
	{
		if (!func_277())
		{
			return 0;
		}
	}
	Local_51 = { Param0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_ID()) && !STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(unk_0x9B0761B4C3EB8BC7()))
		{
			Var1 = { NETWORK::NETWORK_ARE_HANDLES_THE_SAME(unk_0x9B0761B4C3EB8BC7(), 1) };
			if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(unk_0x9B0761B4C3EB8BC7())) > 1369f && !func_220())
			{
				return 0;
			}
		}
		if (!Global_111858.f_9081)
		{
			return 0;
		}
		if (func_276(0))
		{
			return 0;
		}
		if (func_216())
		{
			return 0;
		}
		if (func_275())
		{
			return 0;
		}
		if (Global_111847 != -1)
		{
			return 0;
		}
		if (func_41(func_39()))
		{
			if (func_209(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_ID()) && !bParam4)
		{
			if ((Var1.f_2 - Local_51.f_2) > 50f)
			{
				return 0;
			}
		}
		if (!func_274(iParam1))
		{
			return 0;
		}
		if (func_41(func_39()))
		{
			if (func_273(func_39()) == 4 || func_273(func_39()) == 5)
			{
				return 0;
			}
		}
		if (func_41(func_39()))
		{
			if (!func_272(iParam1, iParam2, 145))
			{
				return 0;
			}
		}
		if (!func_271(Global_111858.f_24991.f_43[iParam1]))
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
		if (func_270())
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
		if (!func_261(4))
		{
			return 0;
		}
		if (!func_192(5))
		{
			return 0;
		}
		if (func_260(iParam1, iParam2) && !bParam3)
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
		if ((iParam1 == 9 && (iParam2 == 2 || iParam2 == 5)) && !func_260(0, 0))
		{
			return 0;
		}
		if (Global_31114)
		{
			return 0;
		}
		if (func_274(30) && !func_260(30, 0))
		{
			if (iParam1 != 30)
			{
				if (SYSTEM::VDIST2(Var1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_41(func_39()))
		{
			iVar2 = 0;
			while (iVar2 < 3)
			{
				Var3 = { Global_111858.f_2359.f_539.f_2300[iVar2 /*3*/] };
				iVar4 = Global_111858.f_2359.f_539.f_2296[iVar2];
				if (func_259(iVar4))
				{
					if (func_237(iVar2))
					{
						if (!func_65(Var3, 0f, 0f, 0f, 0))
						{
							if (SYSTEM::VDIST2(NETWORK::NETWORK_ARE_HANDLES_THE_SAME(unk_0x9B0761B4C3EB8BC7(), 0), Var3) < (210f * 210f))
							{
								if (func_39() != iVar2)
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

bool func_237(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_111858.f_2359.f_539.f_2296[iParam0];
	return func_238(iVar0);
}

int func_238(int iParam0)
{
	return func_239(iParam0, 1);
}

int func_239(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_259(iParam0))
	{
		return 0;
	}
	func_240(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_240(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	func_241(func_252(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_241(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_251(iParam0, iParam1))
	{
		iVar0 = func_250(iParam1);
		iVar1 = func_248(iParam0);
		iVar2 = (func_248(iParam0) - func_248(iParam1));
		iVar3 = (func_250(iParam0) - func_250(iParam1));
		iVar4 = (func_247(iParam0) - func_247(iParam1));
		iVar5 = (func_246(iParam0) - func_246(iParam1));
		iVar6 = (func_245(iParam0) - func_245(iParam1));
		iVar7 = (func_244(iParam0) - func_244(iParam1));
	}
	else
	{
		iVar0 = func_250(iParam0);
		iVar1 = func_248(iParam1);
		iVar2 = (func_248(iParam1) - func_248(iParam0));
		iVar3 = (func_250(iParam1) - func_250(iParam0));
		iVar4 = (func_247(iParam1) - func_247(iParam0));
		iVar5 = (func_246(iParam1) - func_246(iParam0));
		iVar6 = (func_245(iParam1) - func_245(iParam0));
		iVar7 = (func_244(iParam1) - func_244(iParam0));
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
		iVar4 = (iVar4 + func_243(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = SYSTEM::ROUND(func_242(SYSTEM::TO_FLOAT(iVar0 + 1), 0f, 12f));
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

float func_242(float fParam0, float fParam1, float fParam2)
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

int func_243(int iParam0, int iParam1)
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

int func_244(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 20) & 63;
}

int func_245(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 14) & 63;
}

int func_246(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 9) & 31;
}

int func_247(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 4) & 31;
}

int func_248(bool bParam0)
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * func_249(unk_0xCE990E643CD9D0E5(iParam0, 31), -1, 1)) + 2011;
}

int func_249(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_250(int iParam0)
{
	return iParam0 & 15;
}

int func_251(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_259(iParam1) || !func_259(iParam0))
	{
		return 1;
	}
	iVar0 = func_248(iParam0);
	iVar1 = func_248(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_250(iParam0);
	iVar1 = func_250(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_247(iParam0);
	iVar1 = func_247(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_246(iParam0);
	iVar1 = func_246(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_245(iParam0);
	iVar1 = func_245(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_244(iParam0);
	iVar1 = func_244(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_252()
{
	var uVar0;
	
	func_258(&uVar0, CLOCK::GET_CLOCK_MINUTES());
	func_257(&uVar0, CLOCK::GET_CLOCK_HOURS());
	func_256(&uVar0, CLOCK::GET_CLOCK_DAY_OF_MONTH());
	func_255(&uVar0, CLOCK::GET_CLOCK_MONTH());
	func_254(&uVar0, CLOCK::GET_CLOCK_YEAR());
	func_253(&uVar0, SYSTEM::SHIFT_LEFT());
	return uVar0;
}

void func_253(var uParam0, int iParam1)
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

void func_254(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_255(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_250(*uParam0);
	iVar1 = func_248(*uParam0);
	if (iParam1 < 1 || iParam1 > func_243(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

void func_256(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_257(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_258(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

int func_259(int iParam0)
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
	iVar0 = func_244(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_245(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_246(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_248(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_250(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_247(iParam0);
	if (iVar5 < 1 || iVar5 > func_243(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_260(int iParam0, bool bParam1)
{
	if (unk_0xCE990E643CD9D0E5(Global_111858.f_24991.f_8[iParam0], iParam1))
	{
		return 1;
	}
	return 0;
}

int func_261(int iParam0)
{
	int iVar0;
	
	if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_ID()))
	{
		if (MISC::IS_BIT_SET(unk_0x9B0761B4C3EB8BC7()))
		{
			if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(unk_0x9B0761B4C3EB8BC7()))
			{
				iVar0 = func_39();
				if (!func_41(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(unk_0x9B0761B4C3EB8BC7())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(unk_0x9B0761B4C3EB8BC7())) || MISC::IS_PC_VERSION(unk_0x9B0761B4C3EB8BC7())) || PED::IS_PED_SHOOTING(unk_0x9B0761B4C3EB8BC7())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())) || PED::IS_PED_IN_COMBAT(unk_0x9B0761B4C3EB8BC7(), false)) || func_269()) || Global_110905) || Global_30970) || func_268()) || func_61(8, -1)) || func_267()) || func_266()) || func_265()) || func_264()) || Global_111858.f_7684.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || func_269()) || Global_30970) || func_268()) || func_61(8, -1)) || func_265()) || func_267()) || func_266()) || func_264()) || Global_111858.f_7684.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(unk_0x9B0761B4C3EB8BC7())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(unk_0x9B0761B4C3EB8BC7())) || MISC::IS_PC_VERSION(unk_0x9B0761B4C3EB8BC7())) || PED::IS_PED_SHOOTING(unk_0x9B0761B4C3EB8BC7())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())) || PED::IS_PED_IN_COMBAT(unk_0x9B0761B4C3EB8BC7(), false)) || func_269()) || Global_110905) || Global_30970) || func_268()) || func_61(8, -1)) || func_265()) || func_267()) || func_266()) || func_264()) || Global_111858.f_7684.f_919[iVar0] == 5) || Global_42178 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((MISC::IS_PC_VERSION(unk_0x9B0761B4C3EB8BC7()) || PED::IS_PED_SHOOTING(unk_0x9B0761B4C3EB8BC7())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PED::IS_PED_IN_COMBAT(unk_0x9B0761B4C3EB8BC7(), false)) || func_269()) || Global_110905) || Global_30970) || func_268()) || func_61(8, -1)) || func_267()) || func_266()) || func_264()) || Global_111858.f_7684.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_269() || AUDIO::SET_SCRIPT_UPDATE_DOOR_AUDIO(PLAYER::PLAYER_ID()) > 0) || func_61(8, -1)) || func_264()) || func_263()) || Global_111858.f_7684.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_61(8, -1) || func_267()) || func_266()) || func_263()) || func_262())
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
							if ((((((((((((((PED::IS_PED_IN_COMBAT(unk_0x9B0761B4C3EB8BC7(), false) || AUDIO::SET_SCRIPT_UPDATE_DOOR_AUDIO(PLAYER::PLAYER_ID()) > 0) || ENTITY::IS_ENTITY_IN_AIR(unk_0x9B0761B4C3EB8BC7())) || MISC::IS_PC_VERSION(unk_0x9B0761B4C3EB8BC7())) || PED::IS_PED_SHOOTING(unk_0x9B0761B4C3EB8BC7())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())) || func_269()) || Global_30970) || func_268()) || func_61(8, -1)) || func_266()) || func_265()) || func_264()) || Global_111858.f_7684.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((PED::IS_PED_IN_COMBAT(unk_0x9B0761B4C3EB8BC7(), false) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) || !GRAPHICS::DRAW_SCALEFORM_MOVIE()) || ENTITY::IS_ENTITY_IN_AIR(unk_0x9B0761B4C3EB8BC7())) || MISC::IS_PC_VERSION(unk_0x9B0761B4C3EB8BC7())) || PED::IS_PED_SHOOTING(unk_0x9B0761B4C3EB8BC7())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || func_269()) || func_266()) || Global_110905) || Global_30970) || func_268()) || Global_42801) || func_61(8, -1)) || func_265()) || func_263()) || func_264()) || Global_111858.f_7684.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((PED::IS_PED_IN_COMBAT(unk_0x9B0761B4C3EB8BC7(), false) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) || !GRAPHICS::DRAW_SCALEFORM_MOVIE()) || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0)) || ENTITY::IS_ENTITY_IN_AIR(unk_0x9B0761B4C3EB8BC7())) || SYSTEM::VDIST(unk_0x9B0761B4C3EB8BC7(), 1)) || MISC::IS_PC_VERSION(unk_0x9B0761B4C3EB8BC7())) || PED::IS_PED_SHOOTING(unk_0x9B0761B4C3EB8BC7())) || PED::IS_PED_DIVING(unk_0x9B0761B4C3EB8BC7())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())) || func_269()) || Global_110905) || Global_30970) || func_268()) || func_61(8, -1)) || func_265()) || func_263()) || func_267()) || func_266()) || func_264())
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

var func_262()
{
	return Global_98994.f_1;
}

int func_263()
{
	if (Global_95877 != -1)
	{
		return unk_0xCE990E643CD9D0E5(Global_89743[Global_95877 /*34*/].f_15, 13);
	}
	return 0;
}

int func_264()
{
	if (INTERIOR::GET_INTERIOR_AT_COORDS(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_265()
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

bool func_266()
{
	return Global_99007.f_352 > 0;
}

bool func_267()
{
	return Global_99007.f_351 > 0;
}

var func_268()
{
	return Global_1312896;
}

int func_269()
{
	if (!MISC::SET_BIT())
	{
		return Global_96433.f_44 == 1;
	}
	return 0;
}

int func_270()
{
	func_59();
	if (Global_8356[Global_19681 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_271(int iParam0)
{
	return func_251(func_252(), iParam0);
}

int func_272(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_39();
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

int func_273(int iParam0)
{
	if (!func_41(iParam0))
	{
		return 7;
	}
	return Global_111858.f_7684.f_919[iParam0];
}

bool func_274(int iParam0)
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_277())
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

int func_275()
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

bool func_276(bool bParam0)
{
	if (!bParam0 && INTERIOR::GET_INTERIOR_AT_COORDS(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xCE990E643CD9D0E5(Global_77081, false);
}

int func_277()
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
					unk_0xBE20AB8238688965(&bVar0, false);
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

void func_278()
{
	if (bLocal_127)
	{
		if (ENTITY::GET_ENTITY_COORDS(bLocal_73, false))
		{
			if (VEHICLE::DOES_VEHICLE_HAVE_STUCK_VEHICLE_CHECK(bLocal_73))
			{
				VEHICLE::REMOVE_VEHICLE_STUCK_CHECK(bLocal_73);
			}
		}
	}
	if (MISC::IS_BIT_SET(bLocal_55))
	{
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&bLocal_55);
	}
	EVENT::REMOVE_ALL_SHOCKING_EVENTS(false);
	if (iLocal_69 != 0)
	{
		EVENT::REMOVE_SHOCKING_EVENT(iLocal_69);
	}
	EVENT::REMOVE_ALL_SHOCKING_EVENTS(false);
	if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_56))
	{
		PED::_0x2208438012482A1A(bLocal_56, 0);
		PED::SET_PED_CAN_BE_TARGETTED(bLocal_56, true);
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&bLocal_56);
	}
	if (iLocal_65 == 4)
	{
		unk_0xAF7D4BF357E8B79E(179.5463f, 6625.689f, 30.2739f, 184.245f, 6635.661f, 31.5188f, 1, 1);
	}
	func_180(&uLocal_152, 0, 0);
	if (func_224())
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	}
	if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(unk_0x9B0761B4C3EB8BC7()))
	{
		AUDIO::STOP_PED_SPEAKING(unk_0x9B0761B4C3EB8BC7(), false);
	}
	func_291(&Local_164, 0);
	func_279(-1);
	MISC::SET_STUNT_JUMPS_CAN_TRIGGER(true);
	PED::ADD_SCENARIO_BLOCKING_AREA(fLocal_63, 0);
	ENTITY::STOP_ENTITY_ANIM();
}

void func_279(int iParam0)
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_225();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_224())
	{
		func_284(iParam0);
		HUD::SET_MISSION_NAME(false, 0);
		Global_111849 = MISC::GET_GAME_TIMER();
		func_283(30000);
		StringCopy(&cVar0, func_282(Global_111847, 1), 64);
		if (func_281(Global_111847) > 0)
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
	func_280(&Global_31027);
	Global_111848 = 0;
	func_235(-1);
}

void func_280(var uParam0)
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

int func_281(int iParam0)
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

char* func_282(int iParam0, bool bParam1)
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

void func_283(int iParam0)
{
	Global_42182 = (MISC::GET_GAME_TIMER() + iParam0);
}

void func_284(int iParam0)
{
	func_285(iParam0, 0, func_290(iParam0));
}

void func_285(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_252();
	func_288(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_287(iParam0, &uVar0);
	Var1 = { func_286(&uVar0) };
}

struct<16> func_286(var uParam0)
{
	struct<16> Var0;
	int iVar1;
	
	StringCopy(&Var0, "", 64);
	iVar1 = func_246(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_245(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_244(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "  ", 64);
	iVar1 = func_247(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "/", 64);
	iVar1 = func_250(*uParam0);
	if (iVar1 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_248(*uParam0), 64);
	return Var0;
}

void func_287(int iParam0, var uParam1)
{
	Global_111858.f_24991.f_43[iParam0] = *uParam1;
}

void func_288(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_248(*uParam0);
	iVar1 = func_250(*uParam0);
	iVar2 = func_247(*uParam0);
	iVar3 = func_246(*uParam0);
	iVar4 = func_245(*uParam0);
	iVar5 = func_244(*uParam0);
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
	iVar6 = func_243(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_243(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_289(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_289(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_258(uParam0, iParam1);
	func_257(uParam0, iParam2);
	func_256(uParam0, iParam3);
	func_254(uParam0, iParam5);
	func_255(uParam0, iParam4);
	func_253(uParam0, iParam6);
}

int func_290(int iParam0)
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

void func_291(var uParam0, bool bParam1)
{
	int iVar0;
	
	if (!bParam1)
	{
		func_293(uParam0);
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_292(uParam0[iVar0 /*18*/]);
		iVar0++;
	}
	uParam0->f_145 = 0;
	uParam0->f_146 = -1;
}

void func_292(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	StringCopy(&(uParam0->f_2), "NULL", 64);
}

void func_293(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (unk_0xCE990E643CD9D0E5((*uParam0)[iVar0 /*18*/], 30))
		{
			func_294(uParam0[iVar0 /*18*/]);
		}
		iVar0++;
	}
	uParam0->f_145 = 1;
}

void func_294(var uParam0)
{
	func_295(*uParam0, &(uParam0->f_2), uParam0->f_1);
}

void func_295(bool bParam0, char* sParam1, int iParam2)
{
	if (unk_0xCE990E643CD9D0E5(uParam0, 30))
	{
		switch (func_203(bParam0))
		{
			case 0:
				unk_0x74528AC0906CBABE(iParam2);
				break;
			
			case 1:
				unk_0x1082C25039B168F8(sParam1);
				break;
			
			case 2:
				STREAMING::REMOVE_CLIP_SET(sParam1);
				break;
			
			case 3:
				GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(sParam1);
				break;
			
			case 4:
				VEHICLE::REMOVE_VEHICLE_RECORDING(iParam2, sParam1);
				break;
			
			case 5:
				TASK::REMOVE_WAYPOINT_RECORDING(sParam1);
				break;
			
			case 6:
				AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
				break;
			
			case 7:
				SCRIPT::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(iParam2);
				break;
			
			case 8:
				HUD::CLEAR_ADDITIONAL_TEXT(iParam2, unk_0xCE990E643CD9D0E5(bParam0, 26));
				break;
			
			case 9:
				STREAMING::REMOVE_PTFX_ASSET();
				break;
			
			default:
				break;
		}
	}
}

void func_296(bool bParam0)
{
	Global_111850 = { Local_53 };
	if (bParam0)
	{
		func_311(3);
	}
	func_300(1, 0);
	if (!bLocal_96)
	{
		func_299();
	}
	func_297();
	func_278();
}

void func_297()
{
	func_298();
}

int func_298()
{
	if (func_276(0))
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

int func_299()
{
	return 1;
}

void func_300(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_225();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= func_281(iParam0))
	{
		func_310(iParam0, iParam1);
		if (!func_309(51))
		{
			func_306("RE_REWARD", 1, 0, 4000, 10000, func_215(), 0, 138, 0);
			func_305(51);
		}
		if (func_188(iParam0))
		{
			Global_111858.f_24991.f_2 = 3;
		}
		if (func_304(iParam0, iParam1) != 322)
		{
			func_301(func_304(iParam0, iParam1), Local_51.x, Local_51.f_1);
		}
		Global_111846 = iParam1;
		if (Global_111844 == 0)
		{
			if (((Global_111847 == 1 || Global_111847 == 5) || Global_111847 == 11) || Global_111847 == 25)
			{
				func_311(2);
			}
			else if ((Global_111847 == 26 || Global_111847 == 8) || Global_111847 == 17)
			{
				func_311(7);
			}
			else
			{
				func_311(1);
			}
		}
	}
}

void func_301(int iParam0, var uParam1, var uParam2)
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
		func_13((891 + iParam0), 1, -1, 1);
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
		func_302();
	}
}

void func_302()
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
	Global_111602 = ((Global_111597 + bVar9) * 100 / (Global_111580 + Global_111584));
	Global_111604 = ((Global_111599 + Global_111600) * 100 / (Global_111582 + Global_111583));
	STATS::STAT_SET_FLOAT(joaat("TOTAL_PROGRESS_MADE"), Global_111858.f_10190.f_3853, true);
	NETWORK::NETWORK_HAS_SOCIAL_CLUB_ACCOUNT(joaat("PERCENT_STORY_MISSIONS"), Global_111601, 1);
	NETWORK::NETWORK_HAS_SOCIAL_CLUB_ACCOUNT(joaat("PERCENT_AMBIENT_MISSIONS"), Global_111602, 1);
	NETWORK::NETWORK_HAS_SOCIAL_CLUB_ACCOUNT(joaat("PERCENT_ODDJOBS"), Global_111603, 1);
	if (fVar8 > 0f && SYSTEM::FLOOR(fVar8) < SYSTEM::FLOOR(Global_111858.f_10190.f_3853))
	{
		func_35(13, SYSTEM::FLOOR(Global_111858.f_10190.f_3853));
	}
	if (!DATAFILE::DATAFILE_IS_SAVE_PENDING())
	{
		if (!Global_76833)
		{
			if (func_303() == 2 == 0 && !MISC::SET_BIT())
			{
				if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE())
				{
					Global_111592 = 0;
				}
				if (!Global_61717)
				{
					func_298();
				}
			}
		}
	}
}

int func_303()
{
	return Global_30968;
}

int func_304(int iParam0, int iParam1)
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

void func_305(int iParam0)
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

void func_306(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_307(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_307(bool bParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
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
		func_308();
	}
}

void func_308()
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

int func_309(int iParam0)
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

void func_310(int iParam0, bool bParam1)
{
	unk_0xBE20AB8238688965(&(Global_111858.f_24991.f_8[iParam0]), iParam1);
}

void func_311(int iParam0)
{
	Global_111844 = iParam0;
}

