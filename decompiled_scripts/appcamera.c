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
	char* sLocal_19[13] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	char* sLocal_20[13] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	int iLocal_21 = 0;
	char* sLocal_22[7] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	int iLocal_23 = 0;
	int iLocal_24 = 0;
	int iLocal_25 = 0;
	int iLocal_26 = 0;
	int iLocal_27 = 0;
	int iLocal_28 = 0;
	bool bLocal_29 = 0;
	bool bLocal_30 = 0;
	int iLocal_31 = 0;
	int iLocal_32 = 0;
	int iLocal_33 = 0;
	struct<3> Local_34 = { 0, 0, 0 } ;
	struct<3> Local_35 = { 0, 0, 0 } ;
	float fLocal_36 = 0f;
	void fLocal_37 = 0;
	float fLocal_38 = 0f;
	void fLocal_39 = 0;
	float fLocal_40 = 0f;
	struct<3> Local_41 = { 0, 0, 0 } ;
	struct<3> Local_42 = { 0, 0, 0 } ;
	struct<3> Local_43 = { 0, 0, 0 } ;
	struct<3> Local_44 = { 0, 0, 0 } ;
	struct<3> Local_45 = { 0, 0, 0 } ;
	struct<3> Local_46 = { 0, 0, 0 } ;
	float fLocal_47 = 0f;
	float fLocal_48 = 0f;
	float fLocal_49 = 0f;
	float fLocal_50 = 0f;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	void fLocal_63 = 0;
	int iLocal_64 = 0;
	float fLocal_65 = 0f;
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
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	int iLocal_88 = 0;
	int iLocal_89 = 0;
	int iLocal_90 = 0;
	int iLocal_91 = 0;
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	char cLocal_96[16] = "";
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	int iLocal_101 = 0;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	int iLocal_106 = 0;
	float fLocal_107 = 0f;
	float fLocal_108 = 0f;
	float fLocal_109 = 0f;
	float fLocal_110 = 0f;
	float fLocal_111 = 0f;
	float fLocal_112 = 0f;
	float fLocal_113 = 0f;
	float fLocal_114 = 0f;
#endregion

void __EntryFunction__()
{
	bool bVar0;
	
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
	iLocal_26 = 1;
	bLocal_29 = true;
	bLocal_30 = true;
	fLocal_36 = 0f;
	fLocal_37 = 172f;
	fLocal_40 = 0.7f;
	iLocal_88 = 1200;
	iLocal_89 = 1200;
	iLocal_90 = 166;
	fLocal_107 = 0.5f;
	fLocal_108 = 0.85f;
	fLocal_109 = 0.5f;
	fLocal_110 = -0.25f;
	fLocal_111 = 0.25f;
	fLocal_112 = 0.3f;
	fLocal_113 = 0.3f;
	fLocal_114 = 0.075f;
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	if (unk_0xA2C6E70C9BCA9C34() == 0)
	{
		fLocal_40 = 1f;
	}
	else
	{
		fLocal_40 = 0.7f;
	}
	if (!func_167())
	{
		Global_4269748 = 99;
		Global_4269749 = 99;
		iLocal_24 = 99;
	}
	else
	{
		Global_4269748 = 0;
		Global_4269749 = 0;
	}
	sLocal_19[0] = "No_Filter";
	sLocal_19[1] = "phone_cam1";
	sLocal_19[2] = "phone_cam2";
	sLocal_19[3] = "phone_cam3";
	sLocal_19[4] = "phone_cam4";
	sLocal_19[5] = "phone_cam5";
	sLocal_19[6] = "phone_cam6";
	sLocal_19[7] = "phone_cam7";
	sLocal_19[8] = "phone_cam8";
	sLocal_19[9] = "phone_cam9";
	sLocal_19[10] = "phone_cam10";
	sLocal_19[11] = "phone_cam11";
	sLocal_19[12] = "phone_cam12";
	sLocal_20[0] = "No_Border";
	sLocal_20[1] = "frame1";
	sLocal_20[2] = "frame2";
	sLocal_20[3] = "frame3";
	sLocal_20[4] = "frame4";
	sLocal_20[5] = "frame5";
	sLocal_20[6] = "frame6";
	sLocal_20[7] = "frame7";
	sLocal_20[8] = "frame8";
	sLocal_20[9] = "frame9";
	sLocal_20[10] = "frame10";
	sLocal_20[11] = "frame11";
	sLocal_20[12] = "frame12";
	sLocal_22[0] = "No_Expression";
	sLocal_22[1] = "mood_Aiming_1";
	sLocal_22[2] = "mood_Happy_1";
	sLocal_22[3] = "mood_smug_1";
	sLocal_22[4] = "mood_Injured_1";
	sLocal_22[5] = "mood_sulk_1";
	sLocal_22[6] = "mood_Angry_1";
	func_166();
	if (func_165(1, 1, !iLocal_31, 1))
	{
		iLocal_31 = 1;
	}
	func_164();
	fLocal_63 = AUDIO::PLAY_SOUND_FROM_COORD();
	if (Global_19626 == 0)
	{
		fLocal_47 = 0.207f;
		fLocal_48 = 0.158f;
		fLocal_49 = 0.207f;
		fLocal_50 = 0.335f;
	}
	else
	{
		fLocal_47 = 0.24f;
		fLocal_48 = 0.258f;
		fLocal_49 = 0.24f;
		fLocal_50 = 0.435f;
	}
	Global_22038 = 0;
	Global_22039 = 0;
	if (!PED::IS_PED_IN_ANY_POLICE_VEHICLE(unk_0x9B0761B4C3EB8BC7(), 0))
	{
		if (PED::IS_PED_ON_MOUNT(unk_0x9B0761B4C3EB8BC7()))
		{
			Global_22038 = 1;
		}
		if (GRAPHICS::GET_USINGNIGHTVISION())
		{
			Global_22038 = 1;
		}
		if (ENTITY::GET_ENTITY_COORDS(PED::GET_VEHICLE_PED_IS_ENTERING(unk_0x9B0761B4C3EB8BC7()), false))
		{
			Global_22038 = 1;
		}
		if (TASK::CLEAR_PED_TASKS(unk_0x9B0761B4C3EB8BC7(), 78, 1))
		{
			Global_22038 = 1;
		}
		if (PED::IS_PED_IN_ANY_TRAIN(unk_0x9B0761B4C3EB8BC7()))
		{
			Global_22038 = 1;
		}
		if (SYSTEM::VDIST(unk_0x9B0761B4C3EB8BC7(), 0))
		{
			if (iLocal_82 == 1)
			{
				Global_22038 = 1;
			}
			iLocal_99 = ENTITY::GET_ENTITY_MODEL(unk_0x9B0761B4C3EB8BC7(), 0);
			if ((((MISC::GET_MODEL_DIMENSIONS(iLocal_99) == joaat("rhino") || MISC::GET_MODEL_DIMENSIONS(iLocal_99) == joaat("cutter")) || MISC::GET_MODEL_DIMENSIONS(iLocal_99) == joaat("submersible")) || MISC::GET_MODEL_DIMENSIONS(iLocal_99) == joaat("khanjali")) || (MISC::GET_MODEL_DIMENSIONS(iLocal_99) == joaat("barrage") && VEHICLE::IS_TURRET_SEAT(iLocal_99, func_163(unk_0x9B0761B4C3EB8BC7(), 1))))
			{
				Global_22038 = 1;
			}
			else if (MISC::IS_MINIGAME_IN_PROGRESS(iLocal_99, -1, 0) == unk_0x9B0761B4C3EB8BC7())
			{
				if (ENTITY::GET_ENTITY_UPRIGHT_VALUE(iLocal_99) > 0f)
				{
					if (!Global_76833)
					{
						if (!func_162())
						{
							TASK::TASK_VEHICLE_TEMP_ACTION(unk_0x9B0761B4C3EB8BC7(), iLocal_99, 6, 4000);
						}
					}
				}
			}
		}
	}
	if (Global_76833)
	{
		if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_PLAYER_CAN_DO_DRIVE_BY(PLAYER::PLAYER_ID(), false);
		}
	}
	VEHICLE::IS_VEHICLE_DRIVEABLE(&Global_7551, 21);
	func_161(0);
	unk_0xBE20AB8238688965(&Global_7551, 17);
	if (Global_19623 == 0)
	{
		func_160();
	}
	else
	{
		iLocal_91 = unk_0x5DEA4192B46CB99B("camera_gallery");
		iLocal_92 = unk_0x5DEA4192B46CB99B("instructional_buttons");
		while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_91) || !GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_92))
		{
			SYSTEM::WAIT(0);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME();
			MONEY::NETWORK_MONEY_CAN_BET(0, 25, true);
		}
		if (Global_76833)
		{
			iLocal_95 = 2;
		}
		else
		{
			switch (func_159())
			{
				case 0:
					iLocal_95 = 2;
					break;
				
				case 2:
					iLocal_95 = 2;
					break;
				
				case 3:
					iLocal_95 = 2;
					break;
				}
		}
		func_158(iLocal_91, "DISPLAY_VIEW", SYSTEM::TO_FLOAT(iLocal_95), -1082130432, -1082130432, -1082130432, -1082130432);
		func_157(iLocal_91, "CLOSE_SHUTTER");
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_19662, "DISPLAY_VIEW");
		NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE(16);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	Local_41 = { Global_19641 };
	Local_42 = { Global_19634[Global_19626 /*3*/] };
	Global_22039 = 1;
	iLocal_69 = 1;
	iLocal_70 = 1;
	iLocal_71 = 1;
	iLocal_72 = 1;
	iLocal_73 = 1;
	iLocal_74 = 1;
	iLocal_75 = 0;
	iLocal_76 = 0;
	if (Global_19681.f_1 > 3)
	{
		Global_19681.f_1 = 8;
	}
	if (iLocal_82 == 0)
	{
		VEHICLE::IS_VEHICLE_DRIVEABLE(&Global_7553, 3);
	}
	func_155();
	unk_0x9D15035C6653D1B1(4);
	if (unk_0x584E16598C4BAF97())
	{
	}
	if (Global_4456448.f_123773)
	{
	}
	if (Global_4456448.f_123775 == 1)
	{
		iLocal_106 = 1;
	}
	if (iLocal_106 == 1)
	{
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		PAD::SET_INPUT_EXCLUSIVE(0, Global_19650);
		PAD::SET_INPUT_EXCLUSIVE(0, 186);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME();
		MONEY::NETWORK_MONEY_CAN_BET(0, 25, true);
		MONEY::NETWORK_MONEY_CAN_BET(0, false, true);
		if (func_154())
		{
			if (!unk_0xCE990E643CD9D0E5(Global_4271024, 2))
			{
				unk_0xBE20AB8238688965(&Global_4271024, 2);
				func_158(iLocal_91, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
		}
		if (!Global_111858.f_14047.f_81)
		{
			if (!unk_0xCE990E643CD9D0E5(Global_4271024, 13))
			{
				if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					if (!unk_0xCE990E643CD9D0E5(Global_7552, 28))
					{
						if ((iLocal_79 && iLocal_82 == 0) && !func_154())
						{
							unk_0xBE20AB8238688965(&Global_4271024, 13);
							Global_111858.f_14047.f_81 = 1;
							func_153("CELL_FOC_HLP", -1);
						}
					}
				}
			}
		}
		if (!HUD::DISABLE_FRONTEND_THIS_FRAME())
		{
			if (Global_4456448.f_123772 == 0 && Global_4456448.f_123773 == 0)
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(15, 0f, -0.0375f);
			}
			unk_0x4CB4237D8858ADA6(7);
			func_152();
			if (!PED::IS_PED_IN_ANY_POLICE_VEHICLE(unk_0x9B0761B4C3EB8BC7(), 0))
			{
				PED::SET_PED_RESET_FLAG(unk_0x9B0761B4C3EB8BC7(), 200, true);
			}
			MONEY::NETWORK_MONEY_CAN_BET(0, 44, true);
			MONEY::NETWORK_MONEY_CAN_BET(0, 47, true);
			MONEY::NETWORK_MONEY_CAN_BET(0, 91, true);
			MONEY::NETWORK_MONEY_CAN_BET(0, 92, true);
			MONEY::NETWORK_MONEY_CAN_BET(0, 68, true);
			if (iLocal_100 == 0)
			{
				PAD::SET_INPUT_EXCLUSIVE(0, Global_19654);
			}
			PAD::SET_INPUT_EXCLUSIVE(0, Global_19651);
			if ((PED::REMOVE_SCENARIO_BLOCKING_AREA() || unk_0x5DA78AD6801A0523()) && !func_154())
			{
				iLocal_81 = 1;
				Global_19681.f_1 = 3;
				MISC::SET_GAME_PAUSED(false);
			}
			if (MISC::IS_STUNT_JUMP_IN_PROGRESS())
			{
				Global_19681.f_1 = 3;
				MISC::SET_GAME_PAUSED(false);
			}
			if (unk_0xCE990E643CD9D0E5(Global_7552, 3))
			{
				Global_19681.f_1 = 3;
				MISC::SET_GAME_PAUSED(false);
			}
			if (MISC::SET_BIT())
			{
				if (func_141())
				{
					Global_19681.f_1 = 3;
					MISC::SET_GAME_PAUSED(false);
				}
			}
			if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(unk_0x9B0761B4C3EB8BC7()))
			{
				if (PED::IS_PED_IN_COVER(unk_0x9B0761B4C3EB8BC7(), false))
				{
					Global_19681.f_1 = 3;
					MISC::SET_GAME_PAUSED(false);
				}
				if ((TASK::CLEAR_PED_TASKS(unk_0x9B0761B4C3EB8BC7(), 78, 1) || PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())) || PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID()))
				{
					if (func_140())
					{
					}
					else
					{
						Global_19681.f_1 = 3;
						MISC::SET_GAME_PAUSED(false);
					}
				}
				if (MISC::IS_PC_VERSION(unk_0x9B0761B4C3EB8BC7()) || unk_0xAACBFCE60AF94F2D(unk_0x9B0761B4C3EB8BC7()))
				{
					if (Global_76833 == 1)
					{
						Global_19681.f_1 = 3;
					}
				}
				if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(unk_0x9B0761B4C3EB8BC7()))
				{
					if (ENTITY::GET_ENTITY_SUBMERGED_LEVEL(unk_0x9B0761B4C3EB8BC7()) > 0.3f)
					{
						Global_19681.f_1 = 3;
					}
				}
				if (SYSTEM::VDIST(unk_0x9B0761B4C3EB8BC7(), 0))
				{
					func_139();
					iLocal_99 = ENTITY::GET_ENTITY_MODEL(unk_0x9B0761B4C3EB8BC7(), 0);
					if (ENTITY::GET_ENTITY_UPRIGHT_VALUE(iLocal_99) < 0f)
					{
						func_136(0);
					}
					if (iLocal_66 == 1)
					{
						if (iLocal_67 == 1)
						{
							if (!unk_0xA0F684CE511CFACB())
							{
								func_136(0);
							}
						}
						else if (!unk_0xA0F684CE511CFACB())
						{
							iLocal_67 = 1;
							SYSTEM::WAIT(0);
							HUD::HIDE_HUD_COMPONENT_THIS_FRAME();
						}
					}
				}
				else if (Global_76833 == 0)
				{
					if (unk_0xCE990E643CD9D0E5(Global_7551, 18))
					{
						func_135();
						if ((Global_19681 == 0 || Global_19681 == 1) || Global_19681 == 2)
						{
							if (!PED::IS_PED_RUNNING_MOBILE_PHONE_TASK(unk_0x9B0761B4C3EB8BC7()))
							{
								if (PED::GET_PED_PARACHUTE_STATE(unk_0x9B0761B4C3EB8BC7()) == 2)
								{
								}
								else
								{
									Global_19681.f_1 = 3;
									MISC::SET_GAME_PAUSED(false);
								}
							}
						}
					}
				}
			}
			if (iLocal_93)
			{
				func_134();
			}
			if (Global_19681.f_1 < 4)
			{
			}
			if (iLocal_103 == 0)
			{
				if (iLocal_54 == 0)
				{
					if (iLocal_55 == 0)
					{
						if (iLocal_62 == 0)
						{
							if (Global_19681.f_1 > 3)
							{
								if (iLocal_100)
								{
									func_132();
									if (Global_22043 == 0 && Global_22040 == 6)
									{
										HUD::CLEAR_FLOATING_HELP(0, true);
										HUD::BUSYSPINNER_OFF();
										iLocal_100 = 0;
										func_131();
										if (!PED::IS_PED_IN_ANY_POLICE_VEHICLE(unk_0x9B0761B4C3EB8BC7(), 0))
										{
											Local_34 = { NETWORK::NETWORK_ARE_HANDLES_THE_SAME(unk_0x9B0761B4C3EB8BC7(), 1) };
										}
										func_130();
										iLocal_60++;
										if (func_167())
										{
											func_158(iLocal_91, "SET_REMAINING_PHOTOS", SYSTEM::TO_FLOAT(iLocal_60), SYSTEM::TO_FLOAT(iLocal_61), -1082130432, -1082130432, -1082130432);
										}
										else
										{
											func_158(iLocal_91, "SET_REMAINING_PHOTOS", SYSTEM::TO_FLOAT(iLocal_60), SYSTEM::TO_FLOAT(iLocal_61), -1082130432, -1082130432, -1082130432);
										}
										iLocal_83 = 0;
										iLocal_84 = 0;
										iLocal_85 = 0;
										iLocal_78 = 0;
										func_123();
									}
									if (Global_22040 == 0)
									{
										iLocal_100 = 0;
										HUD::BUSYSPINNER_OFF();
										if (!PED::IS_PED_IN_ANY_POLICE_VEHICLE(unk_0x9B0761B4C3EB8BC7(), 0))
										{
											Local_34 = { NETWORK::NETWORK_ARE_HANDLES_THE_SAME(unk_0x9B0761B4C3EB8BC7(), 1) };
										}
										func_122();
										iLocal_83 = 0;
										iLocal_84 = 0;
										iLocal_85 = 0;
										iLocal_78 = 0;
										func_123();
										if (func_167())
										{
											if (Global_4269749 == 0)
											{
												if (!unk_0xCE990E643CD9D0E5(Global_4271024, 2))
												{
													func_158(iLocal_91, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
												}
											}
										}
										else if (!unk_0xCE990E643CD9D0E5(Global_4271024, 2))
										{
											func_158(iLocal_91, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
										}
										func_121();
										func_120(1);
									}
								}
								else if (Global_19681.f_1 != 9)
								{
									if (Global_22039 == 1)
									{
										if (Global_22038 == 0)
										{
											func_119();
										}
									}
									else if ((Global_8159 - Global_8158) > Global_8160)
									{
										if (PED::REMOVE_SCENARIO_BLOCKING_AREA() && func_118())
										{
											if (func_117() && iLocal_78)
											{
											}
											else if (iLocal_78 == 0)
											{
												MISC::SET_GAME_PAUSED(false);
												AUDIO::STOP_SOUND(fLocal_63);
												iLocal_94 = 0;
												if (Global_22038 == 0)
												{
													func_130();
													Global_22038 = 1;
													HUD::CLEAR_FLOATING_HELP(0, true);
													iLocal_79 = 0;
													iLocal_69 = 1;
													iLocal_70 = 1;
													iLocal_71 = 1;
													iLocal_72 = 1;
													iLocal_73 = 1;
													iLocal_74 = 1;
													func_116(0, 0);
													func_120(0);
													iLocal_66 = 0;
													func_111(1);
													iLocal_93 = 0;
													func_109(0, 1);
													func_158(Global_19662, "DISPLAY_VIEW", 16f, -1082130432, -1082130432, -1082130432, -1082130432);
													func_107(1);
												}
											}
										}
										if (func_106(2, Global_19649, 0))
										{
											if (func_154())
											{
												if (((Global_1663771 || Global_1312809) || Global_22041) || unk_0xCE990E643CD9D0E5(Global_7551, 21))
												{
												}
												else if (func_117() && iLocal_78)
												{
												}
												else if (!func_118())
												{
													if (iLocal_78 == 0)
													{
														CAM::DO_SCREEN_FADE_OUT(500);
														iLocal_94 = 0;
														func_109(1, 1);
														func_105(1);
													}
												}
											}
											else if (func_117() && iLocal_78)
											{
											}
											else if (iLocal_78 == 0)
											{
												MISC::SET_GAME_PAUSED(false);
												AUDIO::STOP_SOUND(fLocal_63);
												iLocal_94 = 0;
												if (Global_22038 == 0)
												{
													func_130();
													Global_22038 = 1;
													HUD::CLEAR_FLOATING_HELP(0, true);
													iLocal_79 = 0;
													iLocal_69 = 1;
													iLocal_70 = 1;
													iLocal_71 = 1;
													iLocal_72 = 1;
													iLocal_73 = 1;
													iLocal_74 = 1;
													func_116(0, 0);
													func_120(0);
													iLocal_66 = 0;
													func_111(1);
													iLocal_93 = 0;
													func_109(0, 1);
													func_158(Global_19662, "DISPLAY_VIEW", 16f, -1082130432, -1082130432, -1082130432, -1082130432);
												}
											}
										}
									}
									if (iLocal_52 == 0)
									{
										if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
										{
											func_104();
											iLocal_52 = 1;
										}
									}
									else if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
									{
										func_104();
										iLocal_52 = 0;
									}
									if (iLocal_53 == 0)
									{
										if (unk_0xCE990E643CD9D0E5(Global_7551, 28))
										{
											func_104();
											iLocal_53 = 1;
										}
									}
									else if (!unk_0xCE990E643CD9D0E5(Global_7551, 28))
									{
										func_104();
										iLocal_53 = 0;
									}
									if (Global_22038 == 1)
									{
										func_93();
									}
									else if (Global_19681.f_1 > 4)
									{
										if (iLocal_75 == 1 && iLocal_76 == 0)
										{
											func_89();
										}
										if (iLocal_75 == 0 && iLocal_76 == 1)
										{
											func_122();
											if (iLocal_87 == 1 || iLocal_87 == 0)
											{
												if (!PED::IS_PED_IN_ANY_POLICE_VEHICLE(unk_0x9B0761B4C3EB8BC7(), 0))
												{
													if (!SYSTEM::VDIST(unk_0x9B0761B4C3EB8BC7(), 0))
													{
														func_157(iLocal_91, "CLOSE_SHUTTER");
														iLocal_86 = MISC::GET_GAME_TIMER();
														while (MISC::GET_GAME_TIMER() < (iLocal_86 + iLocal_88) && Global_19681.f_1 > 3)
														{
															func_152();
															func_134();
															func_88();
															HUD::HIDE_HUD_COMPONENT_THIS_FRAME();
															SYSTEM::WAIT(0);
														}
													}
												}
												if (func_167())
												{
													if (Global_4269749 == 0)
													{
														if (!unk_0xCE990E643CD9D0E5(Global_4271024, 2))
														{
															func_158(iLocal_91, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
														}
													}
												}
												else if (!unk_0xCE990E643CD9D0E5(Global_4271024, 2))
												{
													func_158(iLocal_91, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
												}
												func_134();
												func_152();
												iLocal_83 = 0;
												iLocal_84 = 0;
												iLocal_85 = 0;
												iLocal_78 = 0;
												func_123();
												iLocal_87 = 0;
												func_157(iLocal_91, "OPEN_SHUTTER");
											}
											func_121();
											func_120(1);
											func_87();
										}
									}
									if (iLocal_94 == 1)
									{
										func_84();
									}
									if (iLocal_80)
									{
										if (SYSTEM::TIMERB() > 500)
										{
											iLocal_79 = 1;
											iLocal_80 = 0;
											unk_0xBE20AB8238688965(&Global_7551, 18);
											if (Global_22038 == 0)
											{
												func_109(1, 1);
											}
										}
									}
									if (iLocal_78 == 0)
									{
										if (iLocal_79 && Global_22038 == 0)
										{
											if ((iLocal_81 == 0 && iLocal_76 == 0) && Global_22041 == 0)
											{
												func_10();
											}
										}
										else
										{
											func_88();
										}
									}
									else if (iLocal_75 == 0)
									{
										func_5();
									}
								}
							}
						}
					}
				}
				else
				{
					if (Global_19681.f_1 > 3)
					{
						if (Global_22039 == 1)
						{
							if (Global_22038 == 0)
							{
								func_119();
							}
						}
					}
					func_4();
				}
			}
			else
			{
				if (iLocal_105 == 1)
				{
					HUD::SET_WARNING_MESSAGE_WITH_HEADER("CELL_CAM_ALERT", "CELL_CAM_FW_1", iLocal_102, "CELL_CAM_FW_2", false, -1, "", "", true, 0);
				}
				if (iLocal_105 == 2)
				{
					HUD::SET_WARNING_MESSAGE_WITH_HEADER("CELL_CAM_ALERT", "ERROR_NO_SC_CAMERAPHONE", iLocal_102, "", false, -1, "", "", true, 0);
				}
				if (iLocal_105 == 6)
				{
					HUD::SET_WARNING_MESSAGE_WITH_HEADER("CELL_CAM_ALERT", "SC_ERROR_BANNED", iLocal_102, "", false, -1, "", "", true, 0);
				}
				if (iLocal_105 == 3)
				{
					HUD::SET_WARNING_MESSAGE_WITH_HEADER("CELL_CAM_ALERT", "ERROR_UPDATE_SC_CAMERAPHONE", iLocal_102, "", false, -1, "", "", true, 0);
				}
				if (iLocal_105 == 7)
				{
					if (unk_0x11E5DE894D6A8A5F() || NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE())
					{
						HUD::SET_WARNING_MESSAGE_WITH_HEADER("CELL_CAM_ALERT", "CELL_CAM_TEMP_3X", iLocal_102, "", false, -1, "", "", true, 0);
					}
					if (MISC::IS_PS3_VERSION() || unk_0xDCA0815D900F27F8())
					{
						HUD::SET_WARNING_MESSAGE_WITH_HEADER("CELL_CAM_ALERT", "CELL_CAM_TEMP_3P", iLocal_102, "", false, -1, "", "", true, 0);
					}
					if (ENTITY::GET_ENTITY_HEADING())
					{
						HUD::SET_WARNING_MESSAGE_WITH_HEADER("CELL_CAM_ALERT", "CELL_CAM_TEMP_30", iLocal_102, "", false, -1, "", "", true, 0);
					}
				}
				if (iLocal_105 == 4)
				{
					HUD::SET_WARNING_MESSAGE_WITH_HEADER("CELL_CAM_ALERT", "CELL_CAM_CCW_1", iLocal_102, "CELL_CAM_CCW_2", false, -1, "", "", true, 0);
				}
				if (iLocal_105 == 5)
				{
					bVar0 = NETWORK::NETWORK_IS_FRIEND();
					switch (bVar0)
					{
						case -1:
							HUD::SET_WARNING_MESSAGE_WITH_HEADER("CELL_CAM_ALERT", "HUD_AGE_I", iLocal_102, "", false, -1, "", "", true, 0);
							break;
						
						case 0:
							HUD::SET_WARNING_MESSAGE_WITH_HEADER("CELL_CAM_ALERT", "HUD_AGE_P", iLocal_102, "", false, -1, "", "", true, 0);
							break;
						
						case 1:
							HUD::SET_WARNING_MESSAGE_WITH_HEADER("CELL_CAM_ALERT", "HUD_AGE_C", iLocal_102, "", false, -1, "", "", true, 0);
							break;
						
						case 2:
							HUD::SET_WARNING_MESSAGE_WITH_HEADER("CELL_CAM_ALERT", "HUD_AGE_T", iLocal_102, "", false, -1, "", "", true, 0);
							break;
						
						default:
							HUD::SET_WARNING_MESSAGE_WITH_HEADER("CELL_CAM_ALERT", "HUD_AGE_P", iLocal_102, "", false, -1, "", "", true, 0);
							break;
						}
				}
				if (iLocal_105 == 0)
				{
				}
				if (iLocal_105 == 2 || iLocal_105 == 3)
				{
					if (PAD::IS_DISABLED_CONTROL_PRESSED(2, 202))
					{
						iLocal_103 = 0;
						iLocal_105 = 0;
						func_109(0, 1);
					}
					if (PAD::IS_DISABLED_CONTROL_PRESSED(2, 201))
					{
						iLocal_104 = 1;
					}
					if (iLocal_104 == 1)
					{
						if (STATS::STAT_GET_MASKED_INT(2, 201))
						{
							iLocal_103 = 0;
							iLocal_105 = 0;
							func_109(0, 1);
							iLocal_104 = 0;
							HUD::SET_SOCIAL_CLUB_TOUR("Gallery");
							HUD::OPEN_SOCIAL_CLUB_MENU();
						}
					}
				}
				else if (iLocal_105 == 7)
				{
					if (unk_0xDCA0815D900F27F8())
					{
						if (PAD::IS_DISABLED_CONTROL_PRESSED(2, 201))
						{
							iLocal_103 = 0;
							iLocal_105 = 0;
							func_109(0, 1);
							iLocal_62 = 0;
						}
					}
					else if (PAD::IS_DISABLED_CONTROL_PRESSED(2, 202))
					{
						iLocal_103 = 0;
						iLocal_105 = 0;
						func_109(0, 1);
						iLocal_62 = 0;
					}
					if (!unk_0xDCA0815D900F27F8())
					{
						if (PAD::IS_DISABLED_CONTROL_PRESSED(2, Global_19653))
						{
							iLocal_103 = 0;
							iLocal_105 = 0;
							func_109(0, 1);
							if (unk_0xCE990E643CD9D0E5(Global_7552, 28))
							{
								iLocal_62 = 0;
							}
							else
							{
								iLocal_62 = 2;
							}
							iLocal_58 = MISC::GET_GAME_TIMER();
							PLAYER::DISPLAY_SYSTEM_SIGNIN_UI(true);
						}
					}
				}
				else if (PAD::IS_DISABLED_CONTROL_PRESSED(2, 201))
				{
					iLocal_103 = 0;
					iLocal_105 = 0;
					func_109(0, 1);
				}
			}
		}
		iLocal_59 = MISC::GET_GAME_TIMER();
		if (func_154())
		{
			if (!unk_0xCE990E643CD9D0E5(Global_4271024, 2))
			{
				unk_0xBE20AB8238688965(&Global_4271024, 2);
				func_158(iLocal_91, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
		}
		if (func_3() || iLocal_81)
		{
			func_1(0);
			func_116(0, 0);
			func_120(0);
			iLocal_66 = 0;
			func_111(1);
			Global_22038 = 0;
			Global_22039 = 0;
			Global_22041 = 0;
			GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&iLocal_91);
			GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&iLocal_92);
			MISC::SET_GAME_PAUSED(false);
			if (Global_19866 == 1)
			{
				unk_0xBE20AB8238688965(&Global_7551, 17);
			}
			else
			{
				VEHICLE::IS_VEHICLE_DRIVEABLE(&Global_7551, 17);
			}
			HUD::CLEAR_FLOATING_HELP(0, true);
			PLAYER::SET_PLAYER_CAN_DO_DRIVE_BY(PLAYER::PLAYER_ID(), true);
			VEHICLE::IS_VEHICLE_DRIVEABLE(&Global_7553, 3);
			VEHICLE::IS_VEHICLE_DRIVEABLE(&Global_4271024, 3);
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(15);
			Global_22042 = 1;
			AUDIO::STOP_SOUND(fLocal_63);
			AUDIO::RELEASE_SOUND_ID(fLocal_63);
			HUD::BUSYSPINNER_OFF();
			func_111(1);
			unk_0xCB6B7239AA9DA52F(0);
			unk_0x69FC1AD2B320BC60(0);
			unk_0x764721E50928FD5D(1f);
			if (!PED::IS_PED_IN_ANY_POLICE_VEHICLE(unk_0x9B0761B4C3EB8BC7(), 0))
			{
				PED::GET_ANIM_INITIAL_OFFSET_ROTATION(unk_0x9B0761B4C3EB8BC7(), "Mood_Normal_1", 0);
				PED::CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(unk_0x9B0761B4C3EB8BC7());
			}
			if (Global_4269749 > 0 && Global_4269749 < 13)
			{
				GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(sLocal_20[Global_4269749]);
			}
			VEHICLE::IS_VEHICLE_DRIVEABLE(&Global_7551, 18);
			if (func_154())
			{
				func_109(1, 1);
			}
			else
			{
				func_109(0, 1);
			}
			if (func_165(0, 1, iLocal_31, 1))
			{
				iLocal_31 = 0;
			}
			ENTITY::STOP_ENTITY_ANIM();
		}
	}
}

void func_1(int iParam0)
{
	if (func_2())
	{
		if (iParam0 == 1)
		{
			unk_0x08420D55C0C88119(1);
		}
		else if (Global_19681.f_1 > 3)
		{
			unk_0x08420D55C0C88119(0);
		}
	}
}

int func_2()
{
	char* sVar0;
	int iVar1;
	int iVar2;
	
	if (Global_76833)
	{
		return 0;
	}
	iVar2 = 0;
	sVar0 = NETWORK::_GET_ONLINE_VERSION();
	iVar1 = CAM::_0xEE778F8C7E1142E2(sVar0);
	if (iVar1 == 4)
	{
		iVar2 = 1;
	}
	if (Global_4271302 || iVar2)
	{
		return 1;
	}
	return 1;
}

int func_3()
{
	if (((Global_19681.f_1 == 1 || Global_19681.f_1 == 3) || Global_19681.f_1 == 0) || Global_19625 == 1)
	{
		Global_19668 = 1;
		return 1;
	}
	return 0;
}

void func_4()
{
	iLocal_57 = GRAPHICS::_0xF5BED327CEA362B1(0);
	switch (iLocal_57)
	{
		case 0:
			iLocal_54 = 0;
			iLocal_60 = unk_0x9DAE757174B286A0();
			iLocal_61 = unk_0xF03BB02878FDD7A4();
			if (iLocal_55 == 1)
			{
				if (iLocal_78 == 0)
				{
					if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_91))
					{
						if (func_167())
						{
							if (Global_4269749 == 0)
							{
								if (!unk_0xCE990E643CD9D0E5(Global_4271024, 2))
								{
									func_158(iLocal_91, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
								}
							}
							func_158(iLocal_91, "SET_REMAINING_PHOTOS", SYSTEM::TO_FLOAT(iLocal_60), SYSTEM::TO_FLOAT(iLocal_61), -1082130432, -1082130432, -1082130432);
						}
						else
						{
							if (!unk_0xCE990E643CD9D0E5(Global_4271024, 2))
							{
								func_158(iLocal_91, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
							}
							func_158(iLocal_91, "SET_REMAINING_PHOTOS", SYSTEM::TO_FLOAT(iLocal_60), SYSTEM::TO_FLOAT(iLocal_61), -1082130432, -1082130432, -1082130432);
						}
					}
				}
				else if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_91))
				{
					func_158(iLocal_91, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
					func_158(iLocal_91, "SET_REMAINING_PHOTOS", SYSTEM::TO_FLOAT(iLocal_60), SYSTEM::TO_FLOAT(iLocal_61), -1082130432, -1082130432, -1082130432);
				}
				iLocal_55 = 0;
			}
			HUD::BUSYSPINNER_OFF();
			break;
		
		case 1:
			if (!unk_0x92308350672891C2())
			{
				HUD::BEGIN_TEXT_COMMAND_BUSYSPINNER_ON("CELL_SPINNER2");
				HUD::END_TEXT_COMMAND_BUSYSPINNER_ON(1);
			}
			break;
		
		case 2:
			if (unk_0xCE990E643CD9D0E5(Global_7552, 28))
			{
				iLocal_54 = 0;
				iLocal_60 = 0;
				iLocal_61 = 0;
			}
			else
			{
				Global_19681.f_1 = 3;
				Global_22042 = 1;
			}
			HUD::BUSYSPINNER_OFF();
			break;
	}
}

void func_5()
{
	if (func_106(2, Global_19650, 0))
	{
		func_1(0);
		if (unk_0xCE990E643CD9D0E5(Global_7552, 28))
		{
			MISC::SET_GAME_PAUSED(false);
			SYSTEM::SETTIMERB(0);
			func_131();
			iLocal_78 = 0;
			if (!PED::IS_PED_IN_ANY_POLICE_VEHICLE(unk_0x9B0761B4C3EB8BC7(), 0))
			{
				Local_34 = { NETWORK::NETWORK_ARE_HANDLES_THE_SAME(unk_0x9B0761B4C3EB8BC7(), 1) };
			}
			func_130();
			iLocal_87 = 1;
		}
		else if (func_9())
		{
			if (unk_0xCE990E643CD9D0E5(Global_7552, 14))
			{
				func_153("CELL_299", -1);
			}
			else
			{
				func_130();
				func_8();
			}
		}
		else
		{
			iLocal_103 = 1;
			func_109(1, 1);
		}
	}
	if (unk_0xCE990E643CD9D0E5(Global_7551, 22))
	{
		func_1(0);
		while (SYSTEM::TIMERA() < 2000)
		{
			SYSTEM::WAIT(0);
			func_152();
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME();
			func_88();
			func_139();
			func_134();
		}
		MISC::SET_GAME_PAUSED(false);
		func_131();
		SYSTEM::SETTIMERB(0);
		iLocal_78 = 0;
		if (!PED::IS_PED_IN_ANY_POLICE_VEHICLE(unk_0x9B0761B4C3EB8BC7(), 0))
		{
			Local_34 = { NETWORK::NETWORK_ARE_HANDLES_THE_SAME(unk_0x9B0761B4C3EB8BC7(), 1) };
		}
		func_123();
		func_130();
	}
	if (func_106(2, Global_19654, 0))
	{
		func_1(0);
		if (func_117() || unk_0xCE990E643CD9D0E5(Global_7552, 28))
		{
		}
		else
		{
			MISC::SET_GAME_PAUSED(false);
			SYSTEM::SETTIMERB(0);
			iLocal_87 = 1;
			func_131();
			iLocal_78 = 0;
			if (!PED::IS_PED_IN_ANY_POLICE_VEHICLE(unk_0x9B0761B4C3EB8BC7(), 0))
			{
				Local_34 = { NETWORK::NETWORK_ARE_HANDLES_THE_SAME(unk_0x9B0761B4C3EB8BC7(), 1) };
			}
			func_130();
		}
	}
	if (unk_0xCE990E643CD9D0E5(Global_7551, 28))
	{
		if (func_106(2, Global_19653, 0))
		{
			func_1(0);
			MISC::SET_GAME_PAUSED(false);
			GRAPHICS::_0x1072F115DAB0717E(false, false);
			SYSTEM::WAIT(0);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME();
			func_152();
			SYSTEM::WAIT(0);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME();
			func_152();
			unk_0x54D93C58D91752B6();
			unk_0x042EC7EFE200D926();
			Global_22042 = 1;
			iLocal_94 = 0;
			iLocal_77 = 0;
			func_109(0, 1);
			Global_22038 = 1;
			HUD::CLEAR_FLOATING_HELP(0, true);
			iLocal_79 = 0;
			iLocal_69 = 1;
			iLocal_70 = 1;
			iLocal_71 = 1;
			iLocal_72 = 1;
			iLocal_73 = 1;
			iLocal_74 = 1;
			func_6();
			iLocal_78 = 0;
			if (!PED::IS_PED_IN_ANY_POLICE_VEHICLE(unk_0x9B0761B4C3EB8BC7(), 0))
			{
				Local_34 = { NETWORK::NETWORK_ARE_HANDLES_THE_SAME(unk_0x9B0761B4C3EB8BC7(), 1) };
			}
			func_116(0, 0);
			func_120(0);
			iLocal_66 = 0;
			func_111(1);
			if (!Global_2540384.f_6593)
			{
				unk_0xBE20AB8238688965(&Global_7551, 9);
			}
			iLocal_93 = 0;
			func_158(Global_19662, "DISPLAY_VIEW", 16f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
	}
}

void func_6()
{
	if (!PED::IS_PED_IN_ANY_POLICE_VEHICLE(unk_0x9B0761B4C3EB8BC7(), 0))
	{
		DATAFILE::UGC_UPDATE_CONTENT(-1, "Menu_Accept", &Global_19670, 1);
		func_7();
	}
}

void func_7()
{
	if (func_2())
	{
		MOBILE::_CELL_CAM_MOVE_FINGER(5);
	}
}

void func_8()
{
	iLocal_100 = 1;
	Global_22043 = 1;
	HUD::CLEAR_FLOATING_HELP(0, true);
}

int func_9()
{
	if (iLocal_58 == iLocal_59)
	{
		if (iLocal_56)
		{
			iLocal_56 = 1;
		}
	}
	if (Global_19681.f_1 < 4)
	{
		return 0;
	}
	if (iLocal_60 == iLocal_61 || iLocal_60 > iLocal_61)
	{
		iLocal_105 = 1;
		iLocal_102 = 2;
		return 0;
	}
	return 1;
}

void func_10()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (HUD::_0x5BFF36D6ED83E0AE(2))
	{
		iVar0 = 179;
		iVar1 = 21;
	}
	else
	{
		iVar0 = 228;
		iVar1 = 229;
	}
	if (iLocal_82)
	{
		func_79();
		func_75();
		func_74();
		fLocal_36 = unk_0x9394C7A1C8F8FF02();
		fLocal_37 = CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING();
		if (iLocal_84 == 0)
		{
			if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, iVar0) && !PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, iVar1))
			{
				iLocal_84 = 1;
				func_158(iLocal_92, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_158(iLocal_92, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
				if (unk_0xCE990E643CD9D0E5(Global_7551, 28))
				{
					func_72(iLocal_92, "SET_DATA_SLOT", 0f, MOBILE::GET_MOBILE_PHONE_POSITION(0, 177, 1), "CELL_281");
					func_72(iLocal_92, "SET_DATA_SLOT", 1f, MOBILE::GET_MOBILE_PHONE_POSITION(2, 179, 1), func_65());
					func_72(iLocal_92, "SET_DATA_SLOT", 2f, MOBILE::GET_MOBILE_PHONE_POSITION(2, 178, 1), "CELL_CAM_SELFIE_2");
				}
				else
				{
					func_72(iLocal_92, "SET_DATA_SLOT", 0f, MOBILE::GET_MOBILE_PHONE_POSITION(0, 176, 1), "CELL_280");
					func_72(iLocal_92, "SET_DATA_SLOT", 1f, MOBILE::GET_MOBILE_PHONE_POSITION(0, 177, 1), "CELL_281");
					func_72(iLocal_92, "SET_DATA_SLOT", 2f, MOBILE::GET_MOBILE_PHONE_POSITION(2, 178, 1), "CELL_CAM_SELFIE_2");
				}
				func_64();
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_92, "SET_MAX_WIDTH");
				DLC::IS_DLC_PRESENT(fLocal_40);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				func_158(iLocal_92, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
		}
		else if (!PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, iVar0) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, iVar1))
		{
			iLocal_84 = 0;
			func_123();
		}
		if (iLocal_85 == 0)
		{
			if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, iVar1) && !PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, iVar0))
			{
				iLocal_85 = 1;
				func_158(iLocal_92, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_158(iLocal_92, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
				if (unk_0xCE990E643CD9D0E5(Global_7551, 28))
				{
					func_72(iLocal_92, "SET_DATA_SLOT", 0f, MOBILE::GET_MOBILE_PHONE_POSITION(0, 177, 1), "CELL_281");
					func_72(iLocal_92, "SET_DATA_SLOT", 1f, MOBILE::GET_MOBILE_PHONE_POSITION(2, 179, 1), func_65());
				}
				else if (!func_154())
				{
					func_72(iLocal_92, "SET_DATA_SLOT", 0f, MOBILE::GET_MOBILE_PHONE_POSITION(0, 176, 1), "CELL_280");
					func_72(iLocal_92, "SET_DATA_SLOT", 1f, MOBILE::GET_MOBILE_PHONE_POSITION(0, 177, 1), "CELL_281");
				}
				else
				{
					func_72(iLocal_92, "SET_DATA_SLOT", 2f, MOBILE::GET_MOBILE_PHONE_POSITION(0, 176, 1), "CELL_280");
					func_72(iLocal_92, "SET_DATA_SLOT", 3f, MOBILE::GET_MOBILE_PHONE_POSITION(0, 177, 1), "CELL_281");
				}
				func_63();
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_92, "SET_MAX_WIDTH");
				DLC::IS_DLC_PRESENT(fLocal_40);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				func_158(iLocal_92, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
		}
		else if (!PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, iVar1) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, iVar0))
		{
			iLocal_85 = 0;
			func_123();
		}
	}
	else
	{
		PAD::ENABLE_CONTROL_ACTION(0, 2, true);
		PAD::ENABLE_CONTROL_ACTION(0, 1, true);
	}
	if (PAD::_0x6CD79468A1E595C6(2))
	{
		func_123();
	}
	func_139();
	if (!PED::IS_PED_IN_ANY_POLICE_VEHICLE(unk_0x9B0761B4C3EB8BC7(), 0))
	{
		PED::SET_PED_RESET_FLAG(unk_0x9B0761B4C3EB8BC7(), 200, true);
	}
	if (func_154())
	{
		if (!unk_0xCE990E643CD9D0E5(Global_4271024, 2))
		{
			unk_0xBE20AB8238688965(&Global_4271024, 2);
			func_158(iLocal_91, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
	}
	if ((PAD::IS_DISABLED_CONTROL_PRESSED(2, 183) && iLocal_106 == 0) && !func_154())
	{
		DATAFILE::UGC_UPDATE_CONTENT(-1, "Menu_Navigate", &Global_19670, 1);
		if (!PED::IS_PED_IN_ANY_POLICE_VEHICLE(unk_0x9B0761B4C3EB8BC7(), 0))
		{
			if (!PED::GET_PED_PARACHUTE_STATE(unk_0x9B0761B4C3EB8BC7()) == 2)
			{
				if (unk_0xCE990E643CD9D0E5(Global_4271024, 2))
				{
					VEHICLE::IS_VEHICLE_DRIVEABLE(&Global_4271024, 2);
					if (!unk_0xCE990E643CD9D0E5(Global_4271024, 2))
					{
						func_158(iLocal_91, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
					}
				}
				else
				{
					unk_0xBE20AB8238688965(&Global_4271024, 2);
					func_158(iLocal_91, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
				}
			}
		}
	}
	if (iLocal_82)
	{
		if (iLocal_83 == 1)
		{
			iLocal_83 = 0;
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_91, "SET_FOCUS_LOCK");
			unk_0xF1B28F753235CE2A(0);
			func_62("CELL_FOCUS");
			unk_0xF1B28F753235CE2A(1);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
		if (!func_61(14))
		{
			if (unk_0xCE990E643CD9D0E5(Global_4271024, 10))
			{
				if ((Global_76833 == 0 && INTERIOR::GET_INTERIOR_AT_COORDS(joaat("pi_menu")) > 0) && func_60())
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_91, "SET_FOCUS_LOCK");
					unk_0xF1B28F753235CE2A(1);
					MISC::UPDATE_ONSCREEN_KEYBOARD("CELL_ACTTL");
					unk_0x9EFD301E3BE8324E(AUDIO::ADD_LINE_TO_CONVERSATION(&Global_4272009));
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT();
					unk_0xF1B28F753235CE2A(0);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					VEHICLE::IS_VEHICLE_DRIVEABLE(&Global_4271024, 10);
				}
			}
		}
		else if (unk_0xCE990E643CD9D0E5(Global_4271024, 10))
		{
			VEHICLE::IS_VEHICLE_DRIVEABLE(&Global_4271024, 10);
		}
		iLocal_33 = MISC::GET_GAME_TIMER();
		if ((iLocal_33 - iLocal_32) > 1500)
		{
			if (!PED::IS_PED_IN_ANY_POLICE_VEHICLE(unk_0x9B0761B4C3EB8BC7(), 0))
			{
				Local_35 = { NETWORK::NETWORK_ARE_HANDLES_THE_SAME(unk_0x9B0761B4C3EB8BC7(), 1) };
				if (HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Local_35, Local_34, 1) > 5f)
				{
					Global_19681.f_1 = 3;
					MISC::SET_GAME_PAUSED(false);
				}
				iLocal_32 = MISC::GET_GAME_TIMER();
			}
		}
	}
	else if (iLocal_83)
	{
		if (!PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, 182) && !func_154())
		{
			DATAFILE::UGC_UPDATE_CONTENT(-1, "Menu_Navigate", &Global_19670, 1);
			iLocal_83 = 0;
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_91, "SET_FOCUS_LOCK");
			unk_0xF1B28F753235CE2A(0);
			func_62("CELL_FOCUS");
			unk_0xF1B28F753235CE2A(1);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
	}
	else if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, 182) && !func_154())
	{
		DATAFILE::UGC_UPDATE_CONTENT(-1, "Menu_Navigate", &Global_19670, 1);
		iLocal_83 = 1;
		if (!func_61(14))
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_91, "SET_FOCUS_LOCK");
			unk_0xF1B28F753235CE2A(1);
			func_62("CELL_FOCUS");
			unk_0xF1B28F753235CE2A(1);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
	}
	if (func_167())
	{
		if ((PAD::IS_DISABLED_CONTROL_PRESSED(2, 186) && iLocal_106 == 0) && !func_154())
		{
			if (iLocal_82)
			{
				iLocal_24++;
				if (iLocal_24 > 0 && iLocal_24 < 7)
				{
					if (!PED::IS_PED_IN_ANY_POLICE_VEHICLE(unk_0x9B0761B4C3EB8BC7(), 0))
					{
						DATAFILE::UGC_UPDATE_CONTENT(-1, "Menu_Navigate", &Global_19670, 1);
						PED::GET_ANIM_INITIAL_OFFSET_ROTATION(unk_0x9B0761B4C3EB8BC7(), "Mood_Normal_1", 0);
						PED::CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(unk_0x9B0761B4C3EB8BC7());
						if (Global_19681 == 0)
						{
							iVar4 = 0;
							iVar2 = PED::GET_PED_PROP_INDEX(unk_0x9B0761B4C3EB8BC7(), 0);
							if (iVar2 == 20 || iVar2 == 14)
							{
								iVar4 = 1;
							}
							iVar3 = PED::GET_PED_PROP_INDEX(unk_0x9B0761B4C3EB8BC7(), 1);
							if (iVar3 != -1)
							{
								iVar4 = 1;
							}
							if (iVar4 == 1)
							{
								if ((((iLocal_24 == 2 || iLocal_24 == 3) || iLocal_24 == 4) || iLocal_24 == 8) || iLocal_24 == 9)
								{
									if (iVar2 == -1 && iVar3 > -1)
									{
										if (iLocal_24 == 3)
										{
											PED::GET_ANIM_INITIAL_OFFSET_ROTATION(unk_0x9B0761B4C3EB8BC7(), sLocal_22[iLocal_24], 0);
										}
									}
								}
								else
								{
									PED::GET_ANIM_INITIAL_OFFSET_ROTATION(unk_0x9B0761B4C3EB8BC7(), sLocal_22[iLocal_24], 0);
								}
							}
							else
							{
								PED::GET_ANIM_INITIAL_OFFSET_ROTATION(unk_0x9B0761B4C3EB8BC7(), sLocal_22[iLocal_24], 0);
							}
						}
						else
						{
							PED::GET_ANIM_INITIAL_OFFSET_ROTATION(unk_0x9B0761B4C3EB8BC7(), sLocal_22[iLocal_24], 0);
						}
					}
				}
				if (iLocal_24 == 7 || iLocal_24 > 7)
				{
					iLocal_24 = 0;
				}
				if (iLocal_24 == 0)
				{
					if (!PED::IS_PED_IN_ANY_POLICE_VEHICLE(unk_0x9B0761B4C3EB8BC7(), 0))
					{
						PED::GET_ANIM_INITIAL_OFFSET_ROTATION(unk_0x9B0761B4C3EB8BC7(), "Mood_Normal_1", 0);
						PED::CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(unk_0x9B0761B4C3EB8BC7());
						DATAFILE::UGC_UPDATE_CONTENT(-1, "Menu_Navigate", &Global_19670, 1);
					}
				}
			}
		}
		if ((PAD::IS_DISABLED_CONTROL_PRESSED(2, 185) && iLocal_106 == 0) && !func_154())
		{
			if (iLocal_82)
			{
				if (bLocal_29 == 1)
				{
					DATAFILE::UGC_UPDATE_CONTENT(-1, "Menu_Navigate", &Global_19670, 1);
					if (iLocal_28 == 0)
					{
						iLocal_28 = 1;
						iLocal_27 = 1;
						if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS(sLocal_19[Global_4269748], "phone_cam12DUMMY"))
						{
						}
						else
						{
							unk_0xCB6B7239AA9DA52F(1);
							unk_0x69FC1AD2B320BC60(1);
						}
					}
					else
					{
						iLocal_28 = 0;
						iLocal_27 = 0;
						unk_0xCB6B7239AA9DA52F(0);
						unk_0x69FC1AD2B320BC60(0);
					}
				}
			}
			else if (bLocal_30 == 1)
			{
				if (iLocal_27 == 0)
				{
					iLocal_27 = 1;
					iLocal_28 = 1;
					unk_0xCB6B7239AA9DA52F(1);
					unk_0x69FC1AD2B320BC60(1);
				}
				else
				{
					iLocal_27 = 0;
					iLocal_28 = 0;
					unk_0xCB6B7239AA9DA52F(0);
					unk_0x69FC1AD2B320BC60(0);
				}
			}
		}
	}
	if (iLocal_26 == 1 && !func_154())
	{
		if (PAD::IS_DISABLED_CONTROL_PRESSED(0, 172) && iLocal_106 == 0)
		{
			if (func_167())
			{
				Global_4269749++;
				DATAFILE::UGC_UPDATE_CONTENT(-1, "Menu_Navigate", &Global_19670, 1);
			}
			if (Global_4269749 == 13)
			{
				func_120(0);
				unk_0x764721E50928FD5D(1f);
				GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(sLocal_20[(Global_4269749 - 1)]);
				Global_4269749 = 0;
				func_59();
				if (iLocal_21 == 1)
				{
					VEHICLE::IS_VEHICLE_DRIVEABLE(&Global_4271024, 2);
					iLocal_21 = 0;
					func_158(iLocal_91, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
				}
			}
			if (Global_4269749 > 0 && Global_4269749 < 13)
			{
				iLocal_26 = 0;
				iLocal_25 = 0;
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(sLocal_20[Global_4269749], false);
			}
		}
	}
	if (Global_4269749 > 0)
	{
		if (iLocal_26 == 0)
		{
			if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(sLocal_20[Global_4269749]))
			{
				iLocal_25 = 1;
				iLocal_26 = 1;
				if (!unk_0x93E72561EAE8CA3A())
				{
					func_120(1);
				}
				if (iLocal_21 == 0)
				{
					if (!unk_0xCE990E643CD9D0E5(Global_4271024, 2))
					{
						iLocal_21 = 1;
					}
				}
				unk_0xBE20AB8238688965(&Global_4271024, 2);
				func_158(iLocal_91, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
				unk_0x764721E50928FD5D(0.25f);
				unk_0x8B4A50A1E24CAAEC(sLocal_20[Global_4269749], 0);
			}
		}
		if (iLocal_25 == 1)
		{
			if (Global_4269749 == 1 || Global_4269749 == 3)
			{
			}
			if (Global_4269749 == 2 || Global_4269749 == 4)
			{
			}
		}
	}
	if ((PAD::IS_DISABLED_CONTROL_PRESSED(0, 173) && iLocal_106 == 0) && !func_154())
	{
		if (func_167())
		{
			func_111(0);
			Global_4269748++;
			DATAFILE::UGC_UPDATE_CONTENT(-1, "Menu_Navigate", &Global_19670, 1);
		}
		if (Global_4269748 == 13)
		{
			Global_4269748 = 0;
		}
		if (Global_4269748 == 0)
		{
			if (func_167())
			{
				func_111(0);
			}
		}
		else
		{
			func_121();
		}
		func_58();
	}
	if ((PAD::IS_CONTROL_JUST_PRESSED(0, 184) && iLocal_106 == 0) && !func_154())
	{
		if (!PED::IS_PED_IN_ANY_POLICE_VEHICLE(unk_0x9B0761B4C3EB8BC7(), 0))
		{
			if (!SYSTEM::VDIST(unk_0x9B0761B4C3EB8BC7(), 0) && !PED::GET_PED_PARACHUTE_STATE(unk_0x9B0761B4C3EB8BC7()) == 2)
			{
				Local_34 = { NETWORK::NETWORK_ARE_HANDLES_THE_SAME(unk_0x9B0761B4C3EB8BC7(), 1) };
				DATAFILE::UGC_UPDATE_CONTENT(-1, "Menu_Navigate", &Global_19670, 1);
				func_158(iLocal_91, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_157(iLocal_91, "CLOSE_SHUTTER");
				iLocal_86 = MISC::GET_GAME_TIMER();
				while (MISC::GET_GAME_TIMER() < (iLocal_86 + iLocal_90) && Global_19681.f_1 > 3)
				{
					func_152();
					func_134();
					func_88();
					HUD::HIDE_HUD_COMPONENT_THIS_FRAME();
					SYSTEM::WAIT(0);
				}
				if (iLocal_82 == 0)
				{
					AUDIO::STOP_SOUND(fLocal_63);
					iLocal_82 = 1;
					func_57(1);
					func_56();
					unk_0xBE20AB8238688965(&Global_7553, 3);
					iLocal_32 = MISC::GET_GAME_TIMER();
				}
				else
				{
					iLocal_84 = 0;
					iLocal_85 = 0;
					func_57(0);
					iLocal_82 = 0;
					VEHICLE::IS_VEHICLE_DRIVEABLE(&Global_7553, 3);
				}
				iLocal_86 = MISC::GET_GAME_TIMER();
				while (MISC::GET_GAME_TIMER() < (iLocal_86 + iLocal_88) && Global_19681.f_1 > 3)
				{
					func_152();
					func_134();
					func_88();
					HUD::HIDE_HUD_COMPONENT_THIS_FRAME();
					SYSTEM::WAIT(0);
				}
				func_157(iLocal_91, "OPEN_SHUTTER");
				if (func_167())
				{
					if (Global_4269749 == 0)
					{
						if (!unk_0xCE990E643CD9D0E5(Global_4271024, 2))
						{
							func_158(iLocal_91, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
						}
					}
				}
				else if (!unk_0xCE990E643CD9D0E5(Global_4271024, 2))
				{
					func_158(iLocal_91, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
				}
				func_134();
				func_152();
				if (unk_0xCE990E643CD9D0E5(Global_7551, 28))
				{
					StringCopy(&cLocal_96, "CELL_296", 16);
					func_54();
				}
				else
				{
					StringCopy(&cLocal_96, "CELL_295", 16);
					func_28();
				}
			}
		}
	}
	if (iLocal_82 == 0)
	{
		if (iLocal_64 == 0)
		{
			if (PAD::IS_DISABLED_CONTROL_PRESSED(0, 40) || PAD::IS_DISABLED_CONTROL_PRESSED(0, 41))
			{
				fLocal_65 = unk_0xB82447E90D1C00A2();
				if (fLocal_65 > 1f && fLocal_65 < 4.5f)
				{
					if (AUDIO::HAS_SOUND_FINISHED(fLocal_63))
					{
						DATAFILE::UGC_UPDATE_CONTENT(fLocal_63, "Camera_Zoom", &Global_19670, 1);
					}
				}
				else
				{
					AUDIO::STOP_SOUND(fLocal_63);
				}
				iLocal_64 = 1;
			}
		}
		else if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, 40) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, 41))
		{
			fLocal_65 = unk_0xB82447E90D1C00A2();
			if (fLocal_65 > 1f && fLocal_65 < 4.5f)
			{
				if (AUDIO::HAS_SOUND_FINISHED(fLocal_63))
				{
					DATAFILE::UGC_UPDATE_CONTENT(fLocal_63, "Camera_Zoom", &Global_19670, 1);
				}
			}
			else
			{
				AUDIO::STOP_SOUND(fLocal_63);
			}
		}
		else
		{
			AUDIO::STOP_SOUND(fLocal_63);
		}
	}
	if ((func_106(2, Global_19650, 0) && !func_118()) && !func_106(2, Global_19649, 0))
	{
		fLocal_38 = unk_0x9394C7A1C8F8FF02();
		fLocal_39 = CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING();
		GRAPHICS::_0x1072F115DAB0717E(false, false);
		unk_0xBE20AB8238688965(&Global_7551, 21);
		AUDIO::STOP_SOUND(fLocal_63);
		iLocal_78 = 1;
		func_158(iLocal_91, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_158(iLocal_91, "SHOW_REMAINING_PHOTOS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
		DATAFILE::UGC_UPDATE_CONTENT(-1, "Camera_Shoot", &Global_19670, 1);
		func_157(iLocal_91, "CLOSE_SHUTTER");
		Local_43 = { -90.3f, 0f, 90f };
		unk_0xC6EAF6E2A0CACFED(Local_43, 0);
		if (!func_167())
		{
			func_111(1);
		}
		Global_22041 = 1;
		HUD::CLEAR_FLOATING_HELP(0, true);
		while (Global_22040 < 6 && Global_19681.f_1 > 3)
		{
			func_152();
			func_134();
			func_88();
			func_139();
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME();
			SYSTEM::WAIT(0);
		}
		unk_0xE616BD4C9E3D197E(0, 0);
		if (Global_19623)
		{
			func_1(1);
		}
		iLocal_86 = MISC::GET_GAME_TIMER();
		while (MISC::GET_GAME_TIMER() < (iLocal_86 + iLocal_89) && Global_19681.f_1 > 3)
		{
			func_152();
			func_134();
			func_88();
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME();
			SYSTEM::WAIT(0);
		}
		SYSTEM::SETTIMERA(0);
		func_157(iLocal_91, "OPEN_SHUTTER");
		VEHICLE::IS_VEHICLE_DRIVEABLE(&Global_7551, 21);
		func_123();
		if (Global_19681.f_1 > 3)
		{
			if (Global_76833)
			{
				func_21(1086, 1, -1);
				func_20();
				func_17(-1492367786, 23, 0);
			}
			else
			{
				switch (func_11())
				{
					case 0:
						STATS::STAT_INCREMENT(joaat("SP0_NO_PHOTOS_TAKEN"), 1f);
						break;
					
					case 1:
						STATS::STAT_INCREMENT(joaat("SP1_NO_PHOTOS_TAKEN"), 1f);
						break;
					
					case 2:
						STATS::STAT_INCREMENT(joaat("SP2_NO_PHOTOS_TAKEN"), 1f);
						break;
				}
				func_20();
			}
			func_120(0);
		}
		func_134();
	}
	if (unk_0xCE990E643CD9D0E5(Global_7551, 28))
	{
		if (func_106(2, Global_19653, 0))
		{
			GRAPHICS::_0x1072F115DAB0717E(false, false);
			SYSTEM::WAIT(0);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME();
			func_152();
			SYSTEM::WAIT(0);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME();
			func_152();
			unk_0x54D93C58D91752B6();
			unk_0x042EC7EFE200D926();
			Global_22042 = 1;
			iLocal_94 = 0;
			iLocal_77 = 1;
			Global_22038 = 1;
			HUD::CLEAR_FLOATING_HELP(0, true);
			iLocal_79 = 0;
			iLocal_69 = 1;
			iLocal_70 = 1;
			iLocal_71 = 1;
			iLocal_72 = 1;
			iLocal_73 = 1;
			iLocal_74 = 1;
			func_6();
			iLocal_78 = 0;
			if (!PED::IS_PED_IN_ANY_POLICE_VEHICLE(unk_0x9B0761B4C3EB8BC7(), 0))
			{
				Local_34 = { NETWORK::NETWORK_ARE_HANDLES_THE_SAME(unk_0x9B0761B4C3EB8BC7(), 1) };
			}
			func_116(0, 0);
			func_120(0);
			iLocal_66 = 0;
			func_111(1);
			if (!Global_2540384.f_6593)
			{
				unk_0xBE20AB8238688965(&Global_7551, 9);
			}
			MISC::SET_GAME_PAUSED(false);
			iLocal_93 = 0;
			func_158(Global_19662, "DISPLAY_VIEW", 16f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
	}
}

int func_11()
{
	func_12();
	return Global_111858.f_2359.f_539.f_4321;
}

void func_12()
{
	int iVar0;
	
	if (MISC::IS_BIT_SET(unk_0x9B0761B4C3EB8BC7()))
	{
		if (func_15(Global_111858.f_2359.f_539.f_4321) != MISC::GET_MODEL_DIMENSIONS(unk_0x9B0761B4C3EB8BC7()))
		{
			iVar0 = func_14(unk_0x9B0761B4C3EB8BC7());
			if (func_13(iVar0) && (!func_61(14) || Global_110809))
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

bool func_13(int iParam0)
{
	return iParam0 < 3;
}

int func_14(int iParam0)
{
	int iVar0;
	void fVar1;
	
	if (MISC::IS_BIT_SET(iParam0))
	{
		fVar1 = MISC::GET_MODEL_DIMENSIONS(iParam0);
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

void func_17(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (func_19(iParam1, iParam2))
	{
		iVar0 = func_18();
		Global_2462127[iVar0] = iParam1;
		Global_2462138[iVar0] = iParam0;
	}
}

int func_18()
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

int func_19(int iParam0, var uParam1)
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

void func_20()
{
	iLocal_72 = 1;
	iLocal_73 = 1;
	iLocal_74 = 1;
	iLocal_75 = 1;
	iLocal_76 = 0;
	Global_19618 = { Global_19634[Global_19626 /*3*/] };
	func_109(0, 1);
	func_116(0, 0);
	func_120(0);
	iLocal_66 = 0;
	func_111(1);
	if (!unk_0xCE990E643CD9D0E5(Global_7552, 28))
	{
		if (unk_0x584E16598C4BAF97() == 0)
		{
			if (unk_0x11E5DE894D6A8A5F())
			{
				if (iLocal_68 == 0)
				{
					iLocal_68 = 1;
				}
			}
		}
	}
}

void func_21(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_25(iParam0, func_26(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_24(iParam0))
	{
		func_23(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_22(iParam0, iVar0, iParam2, 1);
	}
}

void func_22(int iParam0, int iParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2551832[iParam0 /*3*/][func_26(uParam2)];
	if (iVar0 != 0)
	{
		NETWORK::NETWORK_HAS_SOCIAL_CLUB_ACCOUNT(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 787:
			Global_1388125[func_26(uParam2)] = iParam1;
			break;
		
		case 788:
			Global_1388131[func_26(uParam2)] = iParam1;
			break;
		
		case 789:
			Global_1388137[func_26(uParam2)] = iParam1;
			break;
		
		case 790:
			Global_1388143[func_26(uParam2)] = iParam1;
			break;
		
		case 8727:
			Global_1388149[func_26(uParam2)] = iParam1;
			break;
		
		case 777:
			Global_1388095[func_26(uParam2)] = iParam1;
			break;
		
		case 778:
			Global_1388101[func_26(uParam2)] = iParam1;
			break;
		
		case 779:
			Global_1388107[func_26(uParam2)] = iParam1;
			break;
		
		case 780:
			Global_1388113[func_26(uParam2)] = iParam1;
			break;
		
		case 8729:
			Global_1388119[func_26(uParam2)] = iParam1;
			break;
		
		case 767:
			Global_1388065[func_26(uParam2)] = iParam1;
			break;
		
		case 768:
			Global_1388071[func_26(uParam2)] = iParam1;
			break;
		
		case 769:
			Global_1388077[func_26(uParam2)] = iParam1;
			break;
		
		case 770:
			Global_1388083[func_26(uParam2)] = iParam1;
			break;
		
		case 8731:
			Global_1388089[func_26(uParam2)] = iParam1;
			break;
		
		case 757:
			Global_1388155[func_26(uParam2)] = iParam1;
			break;
		
		case 758:
			Global_1388161[func_26(uParam2)] = iParam1;
			break;
		
		case 759:
			Global_1388167[func_26(uParam2)] = iParam1;
			break;
		
		case 760:
			Global_1388173[func_26(uParam2)] = iParam1;
			break;
		
		case 8733:
			Global_1388179[func_26(uParam2)] = iParam1;
			break;
		
		case 1303:
			Global_1388185[func_26(uParam2)] = iParam1;
			break;
		
		case 7234:
			Global_1388191[func_26(uParam2)] = iParam1;
			break;
		
		case 639:
			Global_1388197[func_26(uParam2)] = iParam1;
			break;
		
		case 1278:
			Global_1388203[func_26(uParam2)] = iParam1;
			break;
		
		case 1877:
			Global_2590417[0 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 2268:
			Global_2590417[1 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 2930:
			Global_2590417[2 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 3059:
			Global_2590417[3 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 10138:
			Global_2590566[func_26(uParam2)] = iParam1;
			break;
		
		case 764:
			Global_1388209[func_26(uParam2)] = iParam1;
			break;
		
		case 765:
			Global_1388215[func_26(uParam2)] = iParam1;
			break;
		
		case 766:
			Global_1388221[func_26(uParam2)] = iParam1;
			break;
		
		case 8732:
			Global_1388227[func_26(uParam2)] = iParam1;
			break;
		
		case 9534:
			Global_1388233[func_26(uParam2)] = iParam1;
			break;
		
		case 1236:
			Global_1388239[func_26(uParam2)] = iParam1;
			break;
		
		case 3054:
			Global_2590490[0 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 3055:
			Global_2590490[1 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 3056:
			Global_2590490[2 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 3057:
			Global_2590490[3 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 3058:
			Global_2590490[4 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 3637:
			Global_2590569[0 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 3638:
			Global_2590569[1 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 3639:
			Global_2590569[2 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 3640:
			Global_2590569[3 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 3641:
			Global_2590569[4 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 3642:
			Global_2590585[0 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 3643:
			Global_2590585[1 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 3644:
			Global_2590585[2 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 3645:
			Global_2590585[3 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 3646:
			Global_2590585[4 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 3222:
			Global_2590490[5 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 3228:
			Global_2590417[4 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 3664:
			Global_2590601[func_26(uParam2)] = iParam1;
			break;
		
		case 3665:
			Global_2590610[func_26(uParam2)] = iParam1;
			break;
		
		case 3666:
			Global_2590604[func_26(uParam2)] = iParam1;
			break;
		
		case 3667:
			Global_2590613[func_26(uParam2)] = iParam1;
			break;
		
		case 3668:
			Global_2590607[func_26(uParam2)] = iParam1;
			break;
		
		case 3669:
			Global_2590616[func_26(uParam2)] = iParam1;
			break;
		
		case 3690:
			Global_2590619[func_26(uParam2)] = iParam1;
			break;
		
		case 3230:
			Global_2590490[6 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 3231:
			Global_2590417[5 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 3235:
			Global_2590490[7 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 3233:
			Global_2590417[6 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 4020:
			Global_2590490[8 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 4021:
			Global_2590417[7 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 4023:
			Global_2590490[9 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 4024:
			Global_2590417[8 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 4026:
			Global_2590490[10 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 4027:
			Global_2590417[9 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 4029:
			Global_2590490[11 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 4030:
			Global_2590417[10 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 6110:
			Global_2590490[12 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 6111:
			Global_2590417[11 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 6168:
			Global_2590490[13 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 6169:
			Global_2590417[12 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 6546:
			Global_2590490[14 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 6547:
			Global_2590417[13 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 6559:
			Global_2590490[15 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 6560:
			Global_2590417[14 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 6562:
			Global_2590490[16 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 6563:
			Global_2590417[15 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 6565:
			Global_2590490[17 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 6566:
			Global_2590417[16 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 7284:
			Global_2590417[17 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 7286:
			Global_2590417[18 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 7288:
			Global_2590417[19 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 8011:
			Global_2590417[20 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 8283:
			Global_2590622[func_26(uParam2)] = iParam1;
			break;
		
		case 8284:
			Global_2590625[func_26(uParam2)] = iParam1;
			break;
		
		case 8285:
			Global_2590628[func_26(uParam2)] = iParam1;
			break;
		
		case 8286:
			Global_2590631[func_26(uParam2)] = iParam1;
			break;
		
		case 8287:
			Global_2590634[func_26(uParam2)] = iParam1;
			break;
		
		case 8288:
			Global_2590637[func_26(uParam2)] = iParam1;
			break;
		
		case 8289:
			Global_2590640[func_26(uParam2)] = iParam1;
			break;
		
		case 8290:
			Global_2590643[func_26(uParam2)] = iParam1;
			break;
		
		case 8291:
			Global_2590646[func_26(uParam2)] = iParam1;
			break;
		
		case 8292:
			Global_2590649[func_26(uParam2)] = iParam1;
			break;
		
		case 8293:
			Global_2590652[func_26(uParam2)] = iParam1;
			break;
		
		case 8294:
			Global_2590655[func_26(uParam2)] = iParam1;
			break;
		
		case 8295:
			Global_2590658[func_26(uParam2)] = iParam1;
			break;
		
		case 8901:
			Global_2590661[func_26(uParam2)] = iParam1;
			break;
		
		case 8535:
			Global_2590417[21 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 8978:
			Global_2590490[23 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 8976:
			Global_2590417[22 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 8981:
			Global_2590490[24 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 8979:
			Global_2590417[23 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

void func_23(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2551832[iParam0 /*3*/][func_26(uParam2)];
	if (iVar0 != 0)
	{
		NETWORK::NETWORK_HAS_SOCIAL_CLUB_ACCOUNT(iVar0, iParam1, iParam3);
	}
}

int func_24(int iParam0)
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

int func_25(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 11771)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2551832[iParam0 /*3*/][func_26(uParam1)];
		if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_26(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_27();
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

var func_27()
{
	return Global_1312763;
}

void func_28()
{
	if (iLocal_106 == 1)
	{
		func_53();
		return;
	}
	if (iLocal_84 == 0 && iLocal_85 == 0)
	{
		func_158(iLocal_92, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_158(iLocal_92, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
		if (!func_154())
		{
			func_72(iLocal_92, "SET_DATA_SLOT", 1f, MOBILE::GET_MOBILE_PHONE_POSITION(0, 177, 1), "CELL_281");
			func_72(iLocal_92, "SET_DATA_SLOT", 0f, MOBILE::GET_MOBILE_PHONE_POSITION(0, 176, 1), "CELL_280");
		}
		else
		{
			func_72(iLocal_92, "SET_DATA_SLOT", 3f, MOBILE::GET_MOBILE_PHONE_POSITION(0, 177, 1), "CELL_281");
			func_72(iLocal_92, "SET_DATA_SLOT", 2f, MOBILE::GET_MOBILE_PHONE_POSITION(0, 176, 1), "CELL_280");
		}
		if (iLocal_82)
		{
			if (!PED::IS_PED_IN_ANY_POLICE_VEHICLE(unk_0x9B0761B4C3EB8BC7(), 0))
			{
				if (SYSTEM::VDIST(unk_0x9B0761B4C3EB8BC7(), 0) || PED::GET_PED_PARACHUTE_STATE(unk_0x9B0761B4C3EB8BC7()) == 2)
				{
					if (HUD::_0x5BFF36D6ED83E0AE(2) || unk_0xDCA0815D900F27F8())
					{
						func_72(iLocal_92, "SET_DATA_SLOT", 2f, MOBILE::GET_MOBILE_PHONE_POSITION(0, 184, 1), "CELL_SP_2NP_XB");
					}
					else
					{
						func_72(iLocal_92, "SET_DATA_SLOT", 2f, MOBILE::GET_MOBILE_PHONE_POSITION(0, 184, 1), "CELL_SP_2NP_XB");
					}
				}
				else if ((Global_76833 == 0 && INTERIOR::GET_INTERIOR_AT_COORDS(joaat("pi_menu")) > 0) && func_60())
				{
					func_51();
				}
				else
				{
					if (HUD::_0x5BFF36D6ED83E0AE(2) || unk_0xDCA0815D900F27F8())
					{
						func_72(iLocal_92, "SET_DATA_SLOT", 2f, MOBILE::GET_MOBILE_PHONE_POSITION(0, 184, 1), "CELL_SP_2NP_XB");
					}
					else
					{
						func_72(iLocal_92, "SET_DATA_SLOT", 2f, MOBILE::GET_MOBILE_PHONE_POSITION(0, 184, 1), "CELL_SP_2NP_XB");
					}
					func_72(iLocal_92, "SET_DATA_SLOT", 3f, MOBILE::GET_MOBILE_PHONE_POSITION(2, 183, 1), "CELL_GRID");
					func_72(iLocal_92, "SET_DATA_SLOT", 4f, MOBILE::SET_MOBILE_PHONE_POSITION(0f, 1.401298E-45f, 1.401298E-45f), "CELL_285");
					if (func_167())
					{
						func_50(5f);
						func_49(6f);
						if (func_30(1))
						{
							func_29(7f);
							if (bLocal_29)
							{
								func_72(iLocal_92, "SET_DATA_SLOT", 8f, MOBILE::GET_MOBILE_PHONE_POSITION(2, 185, 1), "CELL_DEPTH");
							}
						}
						else if (bLocal_29)
						{
							func_72(iLocal_92, "SET_DATA_SLOT", 7f, MOBILE::GET_MOBILE_PHONE_POSITION(2, 185, 1), "CELL_DEPTH");
						}
					}
				}
			}
		}
		else if (!PED::IS_PED_IN_ANY_POLICE_VEHICLE(unk_0x9B0761B4C3EB8BC7(), 0))
		{
			if (SYSTEM::VDIST(unk_0x9B0761B4C3EB8BC7(), 0) || PED::GET_PED_PARACHUTE_STATE(unk_0x9B0761B4C3EB8BC7()) == 2)
			{
				if (!PED::GET_PED_PARACHUTE_STATE(unk_0x9B0761B4C3EB8BC7()) == 2)
				{
					if (!func_154())
					{
						func_72(iLocal_92, "SET_DATA_SLOT", 2f, MOBILE::SET_MOBILE_PHONE_POSITION(0f, 1.401298E-45f, 1.401298E-45f), "CELL_285");
						func_72(iLocal_92, "SET_DATA_SLOT", 3f, MOBILE::GET_MOBILE_PHONE_POSITION(2, 183, 1), "CELL_GRID");
						func_72(iLocal_92, "SET_DATA_SLOT", 4f, MOBILE::GET_MOBILE_PHONE_POSITION(0, 39, 1), "CELL_284");
					}
					else
					{
						func_72(iLocal_92, "SET_DATA_SLOT", 0f, MOBILE::SET_MOBILE_PHONE_POSITION(0f, 1.401298E-45f, 1.401298E-45f), "CELL_285");
						if (!HUD::_0x5BFF36D6ED83E0AE(0))
						{
							func_72(iLocal_92, "SET_DATA_SLOT", 1f, MOBILE::GET_MOBILE_PHONE_POSITION(0, 210, 1), "CELL_284");
						}
						else
						{
							func_72(iLocal_92, "SET_DATA_SLOT", 1f, MOBILE::SET_MOBILE_PHONE_POSITION(0f, 4.063766E-44f, 1.401298E-45f), "CELL_284");
						}
					}
					if (!func_154())
					{
						if (func_167())
						{
							func_50(6f);
							func_49(7f);
							if (bLocal_30)
							{
								func_72(iLocal_92, "SET_DATA_SLOT", 3f, MOBILE::GET_MOBILE_PHONE_POSITION(0, 182, 1), "CELL_FOCUS");
							}
							func_72(iLocal_92, "SET_DATA_SLOT", 8f, MOBILE::GET_MOBILE_PHONE_POSITION(2, 185, 1), "CELL_DEPTH");
						}
					}
				}
				else
				{
					func_72(iLocal_92, "SET_DATA_SLOT", 2f, MOBILE::SET_MOBILE_PHONE_POSITION(0f, 1.401298E-45f, 1.401298E-45f), "CELL_285");
					if (func_167())
					{
						func_50(3f);
						func_49(4f);
						func_72(iLocal_92, "SET_DATA_SLOT", 8f, MOBILE::GET_MOBILE_PHONE_POSITION(2, 185, 1), "CELL_DEPTH");
					}
				}
			}
			else
			{
				if (!func_154())
				{
					if (HUD::_0x5BFF36D6ED83E0AE(2) || unk_0xDCA0815D900F27F8())
					{
						func_72(iLocal_92, "SET_DATA_SLOT", 2f, MOBILE::GET_MOBILE_PHONE_POSITION(0, 184, 1), "CELL_SP_1NP_XB");
					}
					else
					{
						func_72(iLocal_92, "SET_DATA_SLOT", 2f, MOBILE::GET_MOBILE_PHONE_POSITION(0, 184, 1), "CELL_SP_1NP_XB");
					}
				}
				if (!PED::GET_PED_PARACHUTE_STATE(unk_0x9B0761B4C3EB8BC7()) == 2)
				{
					if (!func_154())
					{
						func_72(iLocal_92, "SET_DATA_SLOT", 4f, MOBILE::GET_MOBILE_PHONE_POSITION(2, 183, 1), "CELL_GRID");
						func_72(iLocal_92, "SET_DATA_SLOT", 5f, MOBILE::SET_MOBILE_PHONE_POSITION(0f, 1.401298E-45f, 1.401298E-45f), "CELL_285");
					}
					else
					{
						func_72(iLocal_92, "SET_DATA_SLOT", 0f, MOBILE::SET_MOBILE_PHONE_POSITION(0f, 1.401298E-45f, 1.401298E-45f), "CELL_285");
						if (!HUD::_0x5BFF36D6ED83E0AE(0))
						{
							func_72(iLocal_92, "SET_DATA_SLOT", 1f, MOBILE::GET_MOBILE_PHONE_POSITION(0, 210, 1), "CELL_284");
						}
						else
						{
							func_72(iLocal_92, "SET_DATA_SLOT", 1f, MOBILE::SET_MOBILE_PHONE_POSITION(0f, 4.063766E-44f, 1.401298E-45f), "CELL_284");
						}
					}
					if (!func_154())
					{
						func_72(iLocal_92, "SET_DATA_SLOT", 6f, MOBILE::GET_MOBILE_PHONE_POSITION(0, 39, 1), "CELL_284");
					}
					if (!func_154())
					{
						if (func_167())
						{
							func_50(7f);
							func_49(8f);
							if (bLocal_30)
							{
								func_72(iLocal_92, "SET_DATA_SLOT", 3f, MOBILE::GET_MOBILE_PHONE_POSITION(0, 182, 1), "CELL_FOCUS");
							}
							func_72(iLocal_92, "SET_DATA_SLOT", 9f, MOBILE::GET_MOBILE_PHONE_POSITION(2, 185, 1), "CELL_DEPTH");
						}
					}
				}
				else
				{
					func_72(iLocal_92, "SET_DATA_SLOT", 2f, MOBILE::SET_MOBILE_PHONE_POSITION(0f, 1.401298E-45f, 1.401298E-45f), "CELL_285");
					if (func_167())
					{
						func_50(3f);
						func_49(4f);
						func_72(iLocal_92, "SET_DATA_SLOT", 5f, MOBILE::GET_MOBILE_PHONE_POSITION(2, 185, 1), "CELL_DEPTH");
					}
				}
			}
		}
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_92, "SET_MAX_WIDTH");
		DLC::IS_DLC_PRESENT(fLocal_40);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		func_158(iLocal_92, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
	}
}

void func_29(float fParam0)
{
	func_72(iLocal_92, "SET_DATA_SLOT", fParam0, MOBILE::GET_MOBILE_PHONE_POSITION(0, 174, 1), "CELL_ACTION");
}

int func_30(int iParam0)
{
	if (MISC::SET_BIT())
	{
		if (func_48(Global_4194378, Global_4194379))
		{
			if (iParam0 == 0 || !func_31(Global_4194378, Global_4194379, 0, 1, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_31(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	return func_32(unk_0x9B0761B4C3EB8BC7(), iParam0, iParam1, bParam2, bParam3, bParam4);
}

int func_32(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5)
{
	var uVar0;
	var uVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (func_47())
	{
		return 0;
	}
	uVar0 = 5;
	uVar1 = 5;
	uVar2 = 6;
	if (iParam1 == 0)
	{
		iVar6 = 3;
	}
	else if (bParam3)
	{
		iVar6 = 1;
	}
	else if (bParam4)
	{
		iVar6 = 2;
	}
	else
	{
		iVar6 = 0;
	}
	func_40(iParam1, iParam2, &uVar0, &uVar1, &uVar2, iVar6, bParam5);
	if (!PED::IS_PED_IN_ANY_POLICE_VEHICLE(iParam0, 0))
	{
		if (MISC::GET_MODEL_DIMENSIONS(iParam0) == joaat("mp_f_freemode_01"))
		{
			iVar3 = func_39(iParam0);
			if (!iVar3 == -1)
			{
				if (func_38(&uVar0, iVar3))
				{
					return 1;
				}
			}
		}
		else
		{
			iVar4 = func_37(iParam0);
			if (!iVar4 == -1)
			{
				if (func_35(&uVar1, iVar4))
				{
					return 1;
				}
			}
		}
		if (MISC::SET_BIT())
		{
			iVar5 = func_34(iParam0);
			if (!iVar5 == 0)
			{
				if (func_33(&uVar2, iVar5))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_33(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iParam1) / 32f));
	if (!iVar0 < *uParam0)
	{
		return 0;
	}
	if (unk_0xCE990E643CD9D0E5((*uParam0)[iVar0], (iParam1 - iVar0 * 32)))
	{
		return 1;
	}
	return 0;
}

int func_34(int iParam0)
{
	int iVar0;
	
	iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1);
	return iVar0;
}

bool func_35(var uParam0, int iParam1)
{
	return func_36(uParam0, iParam1);
}

int func_36(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iParam1) / 32f));
	if (!iVar0 < *uParam0)
	{
		return 0;
	}
	if (unk_0xCE990E643CD9D0E5((*uParam0)[iVar0], (iParam1 - iVar0 * 32)))
	{
		return 1;
	}
	return 0;
}

int func_37(int iParam0)
{
	int iVar0;
	
	iVar0 = PED::GET_PED_PROP_INDEX(iParam0, 0);
	return iVar0;
}

bool func_38(var uParam0, int iParam1)
{
	return func_36(uParam0, iParam1);
}

int func_39(int iParam0)
{
	int iVar0;
	
	iVar0 = PED::GET_PED_PROP_INDEX(iParam0, 0);
	return iVar0;
}

void func_40(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, bool bParam6)
{
	func_46(uParam4, 91, 1);
	switch (iParam0)
	{
		case 1:
		case 0:
			func_45(iParam0, iParam1, uParam2, uParam3, uParam4, iParam5, bParam6);
			break;
		
		case 2:
			switch (iParam1)
			{
				case 3:
					switch (iParam5)
					{
						case 0:
							func_44(uParam3, 13, 1);
							func_44(uParam3, 16, 1);
							func_44(uParam3, 48, 1);
							func_44(uParam3, 49, 1);
							func_44(uParam3, 38, 1);
							func_44(uParam3, 47, 1);
							func_44(uParam3, 111, 1);
							func_42(uParam2, 2, 1);
							func_42(uParam2, 20, 1);
							func_42(uParam2, 37, 1);
							func_42(uParam2, 46, 1);
							func_42(uParam2, 110, 1);
							func_46(uParam4, 33, 1);
							func_46(uParam4, 8, 1);
							func_46(uParam4, 31, 1);
							func_46(uParam4, 103, 1);
							func_46(uParam4, 104, 1);
							func_46(uParam4, 105, 1);
							func_46(uParam4, 106, 1);
							func_46(uParam4, 107, 1);
							func_46(uParam4, 108, 1);
							func_44(uParam3, 67, 1);
							func_44(uParam3, 68, 1);
							func_44(uParam3, 69, 1);
							func_44(uParam3, 70, 1);
							func_44(uParam3, 71, 1);
							func_44(uParam3, 72, 1);
							func_44(uParam3, 73, 1);
							func_44(uParam3, 74, 1);
							func_44(uParam3, 75, 1);
							func_44(uParam3, 78, 1);
							func_44(uParam3, 79, 1);
							func_44(uParam3, 80, 1);
							func_44(uParam3, 81, 1);
							func_44(uParam3, 82, 1);
							func_44(uParam3, 91, 1);
							func_44(uParam3, 92, 1);
							func_42(uParam2, 69, 1);
							func_42(uParam2, 74, 1);
							func_42(uParam2, 90, 1);
							func_42(uParam2, 91, 1);
							break;
						
						case 1:
							func_44(uParam3, 4, 1);
							func_44(uParam3, 13, 1);
							func_44(uParam3, 16, 1);
							func_44(uParam3, 48, 1);
							func_44(uParam3, 49, 1);
							func_44(uParam3, 38, 1);
							func_44(uParam3, 47, 1);
							func_44(uParam3, 111, 1);
							func_42(uParam2, 2, 1);
							func_42(uParam2, 20, 1);
							func_42(uParam2, 37, 1);
							func_42(uParam2, 46, 1);
							func_42(uParam2, 110, 1);
							func_46(uParam4, 28, 1);
							func_46(uParam4, 33, 1);
							func_46(uParam4, 8, 1);
							func_46(uParam4, 31, 1);
							func_46(uParam4, 43, 1);
							func_46(uParam4, 103, 1);
							func_46(uParam4, 104, 1);
							func_46(uParam4, 105, 1);
							func_46(uParam4, 106, 1);
							func_46(uParam4, 107, 1);
							func_46(uParam4, 108, 1);
							func_44(uParam3, 67, 1);
							func_44(uParam3, 68, 1);
							func_44(uParam3, 69, 1);
							func_44(uParam3, 70, 1);
							func_44(uParam3, 71, 1);
							func_44(uParam3, 72, 1);
							func_44(uParam3, 73, 1);
							func_44(uParam3, 74, 1);
							func_44(uParam3, 75, 1);
							func_44(uParam3, 78, 1);
							func_44(uParam3, 79, 1);
							func_44(uParam3, 80, 1);
							func_44(uParam3, 81, 1);
							func_44(uParam3, 82, 1);
							func_44(uParam3, 91, 1);
							func_44(uParam3, 92, 1);
							func_42(uParam2, 69, 1);
							func_42(uParam2, 74, 1);
							func_42(uParam2, 90, 1);
							func_42(uParam2, 91, 1);
							break;
						
						case 2:
							func_44(uParam3, 13, 1);
							func_44(uParam3, 16, 1);
							func_44(uParam3, 48, 1);
							func_44(uParam3, 49, 1);
							func_44(uParam3, 39, 1);
							func_42(uParam2, 2, 1);
							func_42(uParam2, 20, 1);
							func_42(uParam2, 38, 1);
							func_46(uParam4, 8, 1);
							func_46(uParam4, 10, 1);
							func_46(uParam4, 13, 1);
							func_46(uParam4, 19, 1);
							func_46(uParam4, 20, 1);
							func_46(uParam4, 59, 1);
							func_46(uParam4, 60, 1);
							func_46(uParam4, 61, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 63, 1);
							func_46(uParam4, 64, 1);
							func_46(uParam4, 65, 1);
							func_46(uParam4, 66, 1);
							func_46(uParam4, 67, 1);
							func_46(uParam4, 68, 1);
							func_46(uParam4, 69, 1);
							func_46(uParam4, 70, 1);
							func_46(uParam4, 71, 1);
							func_46(uParam4, 72, 1);
							func_46(uParam4, 21, 1);
							func_46(uParam4, 22, 1);
							func_46(uParam4, 23, 1);
							func_46(uParam4, 24, 1);
							func_46(uParam4, 25, 1);
							func_46(uParam4, 26, 1);
							func_46(uParam4, 28, 1);
							func_46(uParam4, 33, 1);
							func_46(uParam4, 31, 1);
							func_46(uParam4, 92, 1);
							func_46(uParam4, 93, 1);
							func_46(uParam4, 94, 1);
							func_46(uParam4, 96, 1);
							func_46(uParam4, 97, 1);
							func_46(uParam4, 98, 1);
							func_46(uParam4, 100, 1);
							func_46(uParam4, 103, 1);
							func_46(uParam4, 104, 1);
							func_46(uParam4, 105, 1);
							func_46(uParam4, 106, 1);
							func_46(uParam4, 107, 1);
							func_46(uParam4, 108, 1);
							func_44(uParam3, 67, 1);
							func_44(uParam3, 68, 1);
							func_44(uParam3, 69, 1);
							func_44(uParam3, 70, 1);
							func_44(uParam3, 71, 1);
							func_44(uParam3, 72, 1);
							func_44(uParam3, 73, 1);
							func_44(uParam3, 74, 1);
							func_44(uParam3, 75, 1);
							func_44(uParam3, 78, 1);
							func_44(uParam3, 79, 1);
							func_44(uParam3, 80, 1);
							func_44(uParam3, 81, 1);
							func_44(uParam3, 82, 1);
							func_44(uParam3, 91, 1);
							func_44(uParam3, 92, 1);
							func_42(uParam2, 69, 1);
							func_42(uParam2, 74, 1);
							func_42(uParam2, 90, 1);
							func_42(uParam2, 91, 1);
							break;
					}
					break;
				
				case 5:
				case 24:
					switch (iParam5)
					{
						case 0:
							func_44(uParam3, 16, 1);
							func_44(uParam3, 48, 1);
							func_44(uParam3, 49, 1);
							func_44(uParam3, 18, 1);
							func_44(uParam3, 50, 1);
							func_44(uParam3, 51, 1);
							func_44(uParam3, 52, 1);
							func_44(uParam3, 53, 1);
							func_44(uParam3, 38, 1);
							func_44(uParam3, 47, 1);
							func_44(uParam3, 111, 1);
							func_44(uParam3, 62, 1);
							func_42(uParam2, 16, 1);
							func_42(uParam2, 47, 1);
							func_42(uParam2, 48, 1);
							func_42(uParam2, 18, 1);
							func_42(uParam2, 49, 1);
							func_42(uParam2, 50, 1);
							func_42(uParam2, 51, 1);
							func_42(uParam2, 52, 1);
							func_42(uParam2, 62, 1);
							func_42(uParam2, 37, 1);
							func_42(uParam2, 46, 1);
							func_42(uParam2, 110, 1);
							func_46(uParam4, 1, 1);
							func_46(uParam4, 2, 1);
							func_46(uParam4, 3, 1);
							func_46(uParam4, 4, 1);
							func_46(uParam4, 5, 1);
							func_46(uParam4, 7, 1);
							func_46(uParam4, 8, 1);
							func_46(uParam4, 9, 1);
							func_46(uParam4, 10, 1);
							func_46(uParam4, 12, 1);
							func_46(uParam4, 13, 1);
							func_46(uParam4, 14, 1);
							func_46(uParam4, 15, 1);
							func_46(uParam4, 16, 1);
							func_46(uParam4, 17, 1);
							func_46(uParam4, 18, 1);
							func_46(uParam4, 19, 1);
							func_46(uParam4, 20, 1);
							func_46(uParam4, 59, 1);
							func_46(uParam4, 60, 1);
							func_46(uParam4, 61, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 63, 1);
							func_46(uParam4, 64, 1);
							func_46(uParam4, 65, 1);
							func_46(uParam4, 66, 1);
							func_46(uParam4, 67, 1);
							func_46(uParam4, 68, 1);
							func_46(uParam4, 69, 1);
							func_46(uParam4, 70, 1);
							func_46(uParam4, 71, 1);
							func_46(uParam4, 72, 1);
							func_46(uParam4, 21, 1);
							func_46(uParam4, 22, 1);
							func_46(uParam4, 23, 1);
							func_46(uParam4, 24, 1);
							func_46(uParam4, 25, 1);
							func_46(uParam4, 26, 1);
							func_46(uParam4, 36, 1);
							func_46(uParam4, 46, 1);
							func_46(uParam4, 38, 1);
							func_46(uParam4, 28, 1);
							func_46(uParam4, 33, 1);
							func_46(uParam4, 43, 1);
							func_46(uParam4, 29, 1);
							func_46(uParam4, 92, 1);
							func_46(uParam4, 93, 1);
							func_46(uParam4, 94, 1);
							func_46(uParam4, 96, 1);
							func_46(uParam4, 97, 1);
							func_46(uParam4, 98, 1);
							func_46(uParam4, 100, 1);
							func_46(uParam4, 103, 1);
							func_46(uParam4, 104, 1);
							func_46(uParam4, 105, 1);
							func_46(uParam4, 106, 1);
							func_46(uParam4, 107, 1);
							func_46(uParam4, 108, 1);
							func_46(uParam4, 110, 1);
							func_46(uParam4, 112, 1);
							func_46(uParam4, 115, 1);
							func_46(uParam4, 116, 1);
							func_46(uParam4, 136, 1);
							func_46(uParam4, 138, 1);
							func_46(uParam4, 139, 1);
							func_46(uParam4, 143, 1);
							func_46(uParam4, 144, 1);
							func_46(uParam4, 145, 1);
							func_46(uParam4, 147, 1);
							func_44(uParam3, 67, 1);
							func_44(uParam3, 68, 1);
							func_44(uParam3, 69, 1);
							func_44(uParam3, 70, 1);
							func_44(uParam3, 71, 1);
							func_44(uParam3, 72, 1);
							func_44(uParam3, 73, 1);
							func_44(uParam3, 74, 1);
							func_44(uParam3, 78, 1);
							func_44(uParam3, 79, 1);
							func_44(uParam3, 80, 1);
							func_44(uParam3, 81, 1);
							func_44(uParam3, 82, 1);
							func_44(uParam3, 91, 1);
							func_44(uParam3, 92, 1);
							func_42(uParam2, 66, 1);
							func_42(uParam2, 67, 1);
							func_42(uParam2, 68, 1);
							func_42(uParam2, 69, 1);
							func_42(uParam2, 70, 1);
							func_42(uParam2, 71, 1);
							func_42(uParam2, 72, 1);
							func_42(uParam2, 73, 1);
							func_42(uParam2, 77, 1);
							func_42(uParam2, 78, 1);
							func_42(uParam2, 79, 1);
							func_42(uParam2, 80, 1);
							func_42(uParam2, 81, 1);
							func_42(uParam2, 90, 1);
							func_42(uParam2, 91, 1);
							break;
						
						case 1:
							func_44(uParam3, 38, 1);
							func_44(uParam3, 47, 1);
							func_44(uParam3, 111, 1);
							func_42(uParam2, 16, 1);
							func_42(uParam2, 47, 1);
							func_42(uParam2, 48, 1);
							func_42(uParam2, 18, 1);
							func_42(uParam2, 49, 1);
							func_42(uParam2, 50, 1);
							func_42(uParam2, 51, 1);
							func_42(uParam2, 52, 1);
							func_42(uParam2, 62, 1);
							func_42(uParam2, 37, 1);
							func_42(uParam2, 46, 1);
							func_42(uParam2, 110, 1);
							func_46(uParam4, 8, 1);
							func_46(uParam4, 9, 1);
							func_46(uParam4, 20, 1);
							func_46(uParam4, 59, 1);
							func_46(uParam4, 60, 1);
							func_46(uParam4, 61, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 63, 1);
							func_46(uParam4, 64, 1);
							func_46(uParam4, 65, 1);
							func_46(uParam4, 66, 1);
							func_46(uParam4, 67, 1);
							func_46(uParam4, 68, 1);
							func_46(uParam4, 69, 1);
							func_46(uParam4, 70, 1);
							func_46(uParam4, 71, 1);
							func_46(uParam4, 72, 1);
							func_46(uParam4, 21, 1);
							func_46(uParam4, 22, 1);
							func_46(uParam4, 23, 1);
							func_46(uParam4, 24, 1);
							func_46(uParam4, 25, 1);
							func_46(uParam4, 26, 1);
							func_46(uParam4, 36, 1);
							func_46(uParam4, 46, 1);
							func_46(uParam4, 38, 1);
							func_46(uParam4, 28, 1);
							func_46(uParam4, 33, 1);
							func_46(uParam4, 92, 1);
							func_46(uParam4, 93, 1);
							func_46(uParam4, 94, 1);
							func_46(uParam4, 96, 1);
							func_46(uParam4, 97, 1);
							func_46(uParam4, 98, 1);
							func_46(uParam4, 100, 1);
							func_46(uParam4, 103, 1);
							func_46(uParam4, 104, 1);
							func_46(uParam4, 105, 1);
							func_46(uParam4, 106, 1);
							func_46(uParam4, 107, 1);
							func_46(uParam4, 108, 1);
							func_46(uParam4, 110, 1);
							func_46(uParam4, 112, 1);
							func_46(uParam4, 115, 1);
							func_46(uParam4, 116, 1);
							func_44(uParam3, 67, 1);
							func_44(uParam3, 68, 1);
							func_44(uParam3, 69, 1);
							func_44(uParam3, 70, 1);
							func_44(uParam3, 71, 1);
							func_44(uParam3, 72, 1);
							func_44(uParam3, 73, 1);
							func_44(uParam3, 74, 1);
							func_44(uParam3, 78, 1);
							func_44(uParam3, 79, 1);
							func_44(uParam3, 80, 1);
							func_44(uParam3, 81, 1);
							func_44(uParam3, 82, 1);
							func_44(uParam3, 91, 1);
							func_44(uParam3, 92, 1);
							func_42(uParam2, 66, 1);
							func_42(uParam2, 67, 1);
							func_42(uParam2, 68, 1);
							func_42(uParam2, 69, 1);
							func_42(uParam2, 70, 1);
							func_42(uParam2, 71, 1);
							func_42(uParam2, 72, 1);
							func_42(uParam2, 73, 1);
							func_42(uParam2, 77, 1);
							func_42(uParam2, 78, 1);
							func_42(uParam2, 79, 1);
							func_42(uParam2, 80, 1);
							func_42(uParam2, 81, 1);
							func_42(uParam2, 90, 1);
							func_42(uParam2, 91, 1);
							break;
						
						case 2:
							func_44(uParam3, 16, 1);
							func_44(uParam3, 48, 1);
							func_44(uParam3, 49, 1);
							func_44(uParam3, 18, 1);
							func_44(uParam3, 50, 1);
							func_44(uParam3, 51, 1);
							func_44(uParam3, 52, 1);
							func_44(uParam3, 53, 1);
							func_44(uParam3, 62, 1);
							func_44(uParam3, 38, 1);
							func_44(uParam3, 47, 1);
							func_44(uParam3, 111, 1);
							func_42(uParam2, 18, 1);
							func_42(uParam2, 49, 1);
							func_42(uParam2, 50, 1);
							func_42(uParam2, 51, 1);
							func_42(uParam2, 52, 1);
							func_42(uParam2, 62, 1);
							func_42(uParam2, 37, 1);
							func_42(uParam2, 46, 1);
							func_42(uParam2, 110, 1);
							func_46(uParam4, 4, 1);
							func_46(uParam4, 5, 1);
							func_46(uParam4, 8, 1);
							func_46(uParam4, 9, 1);
							func_46(uParam4, 10, 1);
							func_46(uParam4, 12, 1);
							func_46(uParam4, 14, 1);
							func_46(uParam4, 15, 1);
							func_46(uParam4, 16, 1);
							func_46(uParam4, 17, 1);
							func_46(uParam4, 18, 1);
							func_46(uParam4, 19, 1);
							func_46(uParam4, 20, 1);
							func_46(uParam4, 59, 1);
							func_46(uParam4, 60, 1);
							func_46(uParam4, 61, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 63, 1);
							func_46(uParam4, 64, 1);
							func_46(uParam4, 65, 1);
							func_46(uParam4, 66, 1);
							func_46(uParam4, 67, 1);
							func_46(uParam4, 68, 1);
							func_46(uParam4, 69, 1);
							func_46(uParam4, 70, 1);
							func_46(uParam4, 71, 1);
							func_46(uParam4, 72, 1);
							func_46(uParam4, 21, 1);
							func_46(uParam4, 22, 1);
							func_46(uParam4, 23, 1);
							func_46(uParam4, 24, 1);
							func_46(uParam4, 25, 1);
							func_46(uParam4, 26, 1);
							func_46(uParam4, 36, 1);
							func_46(uParam4, 46, 1);
							func_46(uParam4, 38, 1);
							func_46(uParam4, 28, 1);
							func_46(uParam4, 33, 1);
							func_46(uParam4, 92, 1);
							func_46(uParam4, 93, 1);
							func_46(uParam4, 94, 1);
							func_46(uParam4, 96, 1);
							func_46(uParam4, 97, 1);
							func_46(uParam4, 98, 1);
							func_46(uParam4, 100, 1);
							func_46(uParam4, 103, 1);
							func_46(uParam4, 104, 1);
							func_46(uParam4, 105, 1);
							func_46(uParam4, 106, 1);
							func_46(uParam4, 107, 1);
							func_46(uParam4, 108, 1);
							func_46(uParam4, 110, 1);
							func_46(uParam4, 112, 1);
							func_46(uParam4, 115, 1);
							func_46(uParam4, 116, 1);
							func_46(uParam4, 136, 1);
							func_46(uParam4, 138, 1);
							func_46(uParam4, 139, 1);
							func_46(uParam4, 143, 1);
							func_46(uParam4, 144, 1);
							func_46(uParam4, 145, 1);
							func_46(uParam4, 147, 1);
							func_44(uParam3, 67, 1);
							func_44(uParam3, 68, 1);
							func_44(uParam3, 69, 1);
							func_44(uParam3, 70, 1);
							func_44(uParam3, 71, 1);
							func_44(uParam3, 72, 1);
							func_44(uParam3, 73, 1);
							func_44(uParam3, 74, 1);
							func_44(uParam3, 78, 1);
							func_44(uParam3, 79, 1);
							func_44(uParam3, 80, 1);
							func_44(uParam3, 81, 1);
							func_44(uParam3, 82, 1);
							func_44(uParam3, 91, 1);
							func_44(uParam3, 92, 1);
							func_42(uParam2, 66, 1);
							func_42(uParam2, 67, 1);
							func_42(uParam2, 68, 1);
							func_42(uParam2, 69, 1);
							func_42(uParam2, 70, 1);
							func_42(uParam2, 71, 1);
							func_42(uParam2, 72, 1);
							func_42(uParam2, 73, 1);
							func_42(uParam2, 77, 1);
							func_42(uParam2, 78, 1);
							func_42(uParam2, 79, 1);
							func_42(uParam2, 80, 1);
							func_42(uParam2, 81, 1);
							func_42(uParam2, 90, 1);
							func_42(uParam2, 91, 1);
							break;
					}
					break;
				
				case 58:
					switch (iParam5)
					{
						case 0:
							func_44(uParam3, 66, 1);
							func_44(uParam3, 67, 1);
							func_44(uParam3, 68, 1);
							func_44(uParam3, 69, 1);
							func_44(uParam3, 70, 1);
							func_44(uParam3, 71, 1);
							func_44(uParam3, 72, 1);
							func_44(uParam3, 73, 1);
							func_44(uParam3, 77, 1);
							func_44(uParam3, 78, 1);
							func_44(uParam3, 79, 1);
							func_44(uParam3, 80, 1);
							func_44(uParam3, 81, 1);
							func_44(uParam3, 91, 1);
							func_44(uParam3, 92, 1);
							func_44(uParam3, 16, 1);
							func_44(uParam3, 48, 1);
							func_44(uParam3, 49, 1);
							func_44(uParam3, 18, 1);
							func_44(uParam3, 50, 1);
							func_44(uParam3, 51, 1);
							func_44(uParam3, 52, 1);
							func_44(uParam3, 53, 1);
							func_44(uParam3, 62, 1);
							func_44(uParam3, 38, 1);
							func_44(uParam3, 47, 1);
							func_44(uParam3, 111, 1);
							func_42(uParam2, 66, 1);
							func_42(uParam2, 67, 1);
							func_42(uParam2, 68, 1);
							func_42(uParam2, 69, 1);
							func_42(uParam2, 70, 1);
							func_42(uParam2, 71, 1);
							func_42(uParam2, 72, 1);
							func_42(uParam2, 73, 1);
							func_42(uParam2, 77, 1);
							func_42(uParam2, 78, 1);
							func_42(uParam2, 79, 1);
							func_42(uParam2, 80, 1);
							func_42(uParam2, 81, 1);
							func_42(uParam2, 90, 1);
							func_42(uParam2, 91, 1);
							func_42(uParam2, 18, 1);
							func_42(uParam2, 49, 1);
							func_42(uParam2, 50, 1);
							func_42(uParam2, 51, 1);
							func_42(uParam2, 52, 1);
							func_42(uParam2, 62, 1);
							func_42(uParam2, 37, 1);
							func_42(uParam2, 46, 1);
							func_42(uParam2, 110, 1);
							func_46(uParam4, 92, 1);
							func_46(uParam4, 93, 1);
							func_46(uParam4, 94, 1);
							func_46(uParam4, 96, 1);
							func_46(uParam4, 97, 1);
							func_46(uParam4, 98, 1);
							func_46(uParam4, 100, 1);
							func_46(uParam4, 103, 1);
							func_46(uParam4, 104, 1);
							func_46(uParam4, 105, 1);
							func_46(uParam4, 106, 1);
							func_46(uParam4, 107, 1);
							func_46(uParam4, 108, 1);
							func_41(uParam2, uParam3, uParam4);
							break;
						
						case 1:
							func_44(uParam3, 16, 1);
							func_44(uParam3, 48, 1);
							func_44(uParam3, 49, 1);
							func_44(uParam3, 18, 1);
							func_44(uParam3, 50, 1);
							func_44(uParam3, 51, 1);
							func_44(uParam3, 52, 1);
							func_44(uParam3, 53, 1);
							func_44(uParam3, 62, 1);
							func_44(uParam3, 38, 1);
							func_44(uParam3, 47, 1);
							func_44(uParam3, 111, 1);
							func_42(uParam2, 18, 1);
							func_42(uParam2, 49, 1);
							func_42(uParam2, 50, 1);
							func_42(uParam2, 51, 1);
							func_42(uParam2, 52, 1);
							func_42(uParam2, 62, 1);
							func_42(uParam2, 37, 1);
							func_42(uParam2, 46, 1);
							func_42(uParam2, 110, 1);
							func_46(uParam4, 9, 1);
							func_46(uParam4, 10, 1);
							func_46(uParam4, 12, 1);
							func_46(uParam4, 17, 1);
							func_46(uParam4, 18, 1);
							func_46(uParam4, 19, 1);
							func_46(uParam4, 20, 1);
							func_46(uParam4, 59, 1);
							func_46(uParam4, 60, 1);
							func_46(uParam4, 61, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 63, 1);
							func_46(uParam4, 64, 1);
							func_46(uParam4, 65, 1);
							func_46(uParam4, 66, 1);
							func_46(uParam4, 67, 1);
							func_46(uParam4, 68, 1);
							func_46(uParam4, 69, 1);
							func_46(uParam4, 70, 1);
							func_46(uParam4, 71, 1);
							func_46(uParam4, 72, 1);
							func_46(uParam4, 21, 1);
							func_46(uParam4, 22, 1);
							func_46(uParam4, 23, 1);
							func_46(uParam4, 24, 1);
							func_46(uParam4, 25, 1);
							func_46(uParam4, 26, 1);
							func_46(uParam4, 36, 1);
							func_46(uParam4, 46, 1);
							func_46(uParam4, 38, 1);
							func_46(uParam4, 29, 1);
							func_46(uParam4, 28, 1);
							func_46(uParam4, 8, 1);
							func_46(uParam4, 31, 1);
							func_46(uParam4, 32, 1);
							func_46(uParam4, 33, 1);
							func_46(uParam4, 34, 1);
							func_46(uParam4, 43, 1);
							func_46(uParam4, 92, 1);
							func_46(uParam4, 93, 1);
							func_46(uParam4, 94, 1);
							func_46(uParam4, 96, 1);
							func_46(uParam4, 97, 1);
							func_46(uParam4, 98, 1);
							func_46(uParam4, 100, 1);
							func_46(uParam4, 103, 1);
							func_46(uParam4, 104, 1);
							func_46(uParam4, 105, 1);
							func_46(uParam4, 106, 1);
							func_46(uParam4, 107, 1);
							func_46(uParam4, 108, 1);
							func_41(uParam2, uParam3, uParam4);
							break;
					}
					break;
				
				case 59:
					func_44(uParam3, 67, 1);
					func_44(uParam3, 68, 1);
					func_44(uParam3, 69, 1);
					func_44(uParam3, 70, 1);
					func_44(uParam3, 71, 1);
					func_44(uParam3, 72, 1);
					func_44(uParam3, 73, 1);
					func_44(uParam3, 74, 1);
					func_44(uParam3, 78, 1);
					func_44(uParam3, 79, 1);
					func_44(uParam3, 80, 1);
					func_44(uParam3, 81, 1);
					func_44(uParam3, 82, 1);
					func_44(uParam3, 91, 1);
					func_44(uParam3, 92, 1);
					func_42(uParam2, 66, 1);
					func_42(uParam2, 67, 1);
					func_42(uParam2, 68, 1);
					func_42(uParam2, 69, 1);
					func_42(uParam2, 70, 1);
					func_42(uParam2, 71, 1);
					func_42(uParam2, 72, 1);
					func_42(uParam2, 73, 1);
					func_42(uParam2, 77, 1);
					func_42(uParam2, 78, 1);
					func_42(uParam2, 79, 1);
					func_42(uParam2, 80, 1);
					func_42(uParam2, 81, 1);
					func_42(uParam2, 90, 1);
					func_42(uParam2, 91, 1);
					func_44(uParam3, 38, 1);
					func_44(uParam3, 47, 1);
					func_44(uParam3, 111, 1);
					func_42(uParam2, 37, 1);
					func_42(uParam2, 46, 1);
					func_42(uParam2, 110, 1);
					func_46(uParam4, 92, 1);
					func_46(uParam4, 93, 1);
					func_46(uParam4, 94, 1);
					func_46(uParam4, 96, 1);
					func_46(uParam4, 97, 1);
					func_46(uParam4, 98, 1);
					func_46(uParam4, 100, 1);
					func_46(uParam4, 103, 1);
					func_46(uParam4, 104, 1);
					func_46(uParam4, 105, 1);
					func_46(uParam4, 106, 1);
					func_46(uParam4, 107, 1);
					func_46(uParam4, 108, 1);
					func_41(uParam2, uParam3, uParam4);
					break;
				
				case 60:
					func_44(uParam3, 67, 1);
					func_44(uParam3, 68, 1);
					func_44(uParam3, 69, 1);
					func_44(uParam3, 70, 1);
					func_44(uParam3, 71, 1);
					func_44(uParam3, 72, 1);
					func_44(uParam3, 73, 1);
					func_44(uParam3, 74, 1);
					func_44(uParam3, 78, 1);
					func_44(uParam3, 79, 1);
					func_44(uParam3, 80, 1);
					func_44(uParam3, 81, 1);
					func_44(uParam3, 82, 1);
					func_44(uParam3, 91, 1);
					func_44(uParam3, 92, 1);
					func_42(uParam2, 66, 1);
					func_42(uParam2, 67, 1);
					func_42(uParam2, 68, 1);
					func_42(uParam2, 69, 1);
					func_42(uParam2, 70, 1);
					func_42(uParam2, 71, 1);
					func_42(uParam2, 72, 1);
					func_42(uParam2, 73, 1);
					func_42(uParam2, 77, 1);
					func_42(uParam2, 78, 1);
					func_42(uParam2, 79, 1);
					func_42(uParam2, 80, 1);
					func_42(uParam2, 81, 1);
					func_42(uParam2, 90, 1);
					func_42(uParam2, 91, 1);
					func_44(uParam3, 38, 1);
					func_44(uParam3, 47, 1);
					func_44(uParam3, 111, 1);
					func_42(uParam2, 37, 1);
					func_42(uParam2, 46, 1);
					func_42(uParam2, 110, 1);
					func_46(uParam4, 92, 1);
					func_46(uParam4, 93, 1);
					func_46(uParam4, 94, 1);
					func_46(uParam4, 96, 1);
					func_46(uParam4, 97, 1);
					func_46(uParam4, 98, 1);
					func_46(uParam4, 100, 1);
					func_46(uParam4, 103, 1);
					func_46(uParam4, 104, 1);
					func_46(uParam4, 105, 1);
					func_46(uParam4, 106, 1);
					func_46(uParam4, 107, 1);
					func_46(uParam4, 108, 1);
					func_41(uParam2, uParam3, uParam4);
					break;
				
				case 61:
					func_44(uParam3, 67, 1);
					func_44(uParam3, 68, 1);
					func_44(uParam3, 69, 1);
					func_44(uParam3, 70, 1);
					func_44(uParam3, 71, 1);
					func_44(uParam3, 72, 1);
					func_44(uParam3, 73, 1);
					func_44(uParam3, 74, 1);
					func_44(uParam3, 78, 1);
					func_44(uParam3, 79, 1);
					func_44(uParam3, 80, 1);
					func_44(uParam3, 81, 1);
					func_44(uParam3, 82, 1);
					func_44(uParam3, 91, 1);
					func_44(uParam3, 92, 1);
					func_42(uParam2, 66, 1);
					func_42(uParam2, 67, 1);
					func_42(uParam2, 68, 1);
					func_42(uParam2, 69, 1);
					func_42(uParam2, 70, 1);
					func_42(uParam2, 71, 1);
					func_42(uParam2, 72, 1);
					func_42(uParam2, 73, 1);
					func_42(uParam2, 77, 1);
					func_42(uParam2, 78, 1);
					func_42(uParam2, 79, 1);
					func_42(uParam2, 80, 1);
					func_42(uParam2, 81, 1);
					func_42(uParam2, 90, 1);
					func_42(uParam2, 91, 1);
					func_44(uParam3, 38, 1);
					func_44(uParam3, 47, 1);
					func_44(uParam3, 111, 1);
					func_42(uParam2, 37, 1);
					func_42(uParam2, 46, 1);
					func_42(uParam2, 110, 1);
					func_46(uParam4, 92, 1);
					func_46(uParam4, 93, 1);
					func_46(uParam4, 94, 1);
					func_46(uParam4, 96, 1);
					func_46(uParam4, 97, 1);
					func_46(uParam4, 98, 1);
					func_46(uParam4, 100, 1);
					func_46(uParam4, 103, 1);
					func_46(uParam4, 104, 1);
					func_46(uParam4, 105, 1);
					func_46(uParam4, 106, 1);
					func_46(uParam4, 107, 1);
					func_46(uParam4, 108, 1);
					func_41(uParam2, uParam3, uParam4);
					break;
				
				case 62:
				case 63:
				case 64:
					switch (iParam5)
					{
						case 0:
							func_44(uParam3, 16, 1);
							func_44(uParam3, 48, 1);
							func_44(uParam3, 49, 1);
							func_44(uParam3, 18, 1);
							func_44(uParam3, 50, 1);
							func_44(uParam3, 51, 1);
							func_44(uParam3, 52, 1);
							func_44(uParam3, 53, 1);
							func_44(uParam3, 62, 1);
							func_44(uParam3, 38, 1);
							func_44(uParam3, 47, 1);
							func_44(uParam3, 111, 1);
							func_42(uParam2, 18, 1);
							func_42(uParam2, 49, 1);
							func_42(uParam2, 50, 1);
							func_42(uParam2, 51, 1);
							func_42(uParam2, 52, 1);
							func_42(uParam2, 62, 1);
							func_42(uParam2, 37, 1);
							func_42(uParam2, 46, 1);
							func_42(uParam2, 110, 1);
							func_46(uParam4, 9, 1);
							func_46(uParam4, 10, 1);
							func_46(uParam4, 12, 1);
							func_46(uParam4, 17, 1);
							func_46(uParam4, 18, 1);
							func_46(uParam4, 19, 1);
							func_46(uParam4, 20, 1);
							func_46(uParam4, 59, 1);
							func_46(uParam4, 60, 1);
							func_46(uParam4, 61, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 63, 1);
							func_46(uParam4, 64, 1);
							func_46(uParam4, 65, 1);
							func_46(uParam4, 66, 1);
							func_46(uParam4, 67, 1);
							func_46(uParam4, 68, 1);
							func_46(uParam4, 69, 1);
							func_46(uParam4, 70, 1);
							func_46(uParam4, 71, 1);
							func_46(uParam4, 72, 1);
							func_46(uParam4, 21, 1);
							func_46(uParam4, 22, 1);
							func_46(uParam4, 23, 1);
							func_46(uParam4, 24, 1);
							func_46(uParam4, 25, 1);
							func_46(uParam4, 26, 1);
							func_46(uParam4, 36, 1);
							func_46(uParam4, 46, 1);
							func_46(uParam4, 38, 1);
							func_46(uParam4, 29, 1);
							func_46(uParam4, 28, 1);
							func_46(uParam4, 8, 1);
							func_46(uParam4, 31, 1);
							func_46(uParam4, 32, 1);
							func_46(uParam4, 33, 1);
							func_46(uParam4, 34, 1);
							func_46(uParam4, 92, 1);
							func_46(uParam4, 93, 1);
							func_46(uParam4, 94, 1);
							func_46(uParam4, 96, 1);
							func_46(uParam4, 97, 1);
							func_46(uParam4, 98, 1);
							func_46(uParam4, 100, 1);
							func_46(uParam4, 103, 1);
							func_46(uParam4, 104, 1);
							func_46(uParam4, 105, 1);
							func_46(uParam4, 106, 1);
							func_46(uParam4, 107, 1);
							func_46(uParam4, 108, 1);
							func_44(uParam3, 67, 1);
							func_44(uParam3, 68, 1);
							func_44(uParam3, 69, 1);
							func_44(uParam3, 70, 1);
							func_44(uParam3, 71, 1);
							func_44(uParam3, 72, 1);
							func_44(uParam3, 73, 1);
							func_44(uParam3, 74, 1);
							func_44(uParam3, 78, 1);
							func_44(uParam3, 79, 1);
							func_44(uParam3, 80, 1);
							func_44(uParam3, 81, 1);
							func_44(uParam3, 82, 1);
							func_44(uParam3, 91, 1);
							func_44(uParam3, 92, 1);
							func_42(uParam2, 66, 1);
							func_42(uParam2, 67, 1);
							func_42(uParam2, 68, 1);
							func_42(uParam2, 69, 1);
							func_42(uParam2, 70, 1);
							func_42(uParam2, 71, 1);
							func_42(uParam2, 72, 1);
							func_42(uParam2, 73, 1);
							func_42(uParam2, 77, 1);
							func_42(uParam2, 78, 1);
							func_42(uParam2, 79, 1);
							func_42(uParam2, 80, 1);
							func_42(uParam2, 81, 1);
							func_42(uParam2, 90, 1);
							func_42(uParam2, 91, 1);
							func_46(uParam4, 92, 1);
							func_46(uParam4, 93, 1);
							func_46(uParam4, 94, 1);
							func_46(uParam4, 96, 1);
							func_46(uParam4, 97, 1);
							func_46(uParam4, 98, 1);
							func_46(uParam4, 100, 1);
							func_46(uParam4, 103, 1);
							func_46(uParam4, 104, 1);
							func_46(uParam4, 105, 1);
							func_46(uParam4, 106, 1);
							func_46(uParam4, 107, 1);
							func_46(uParam4, 108, 1);
							func_41(uParam2, uParam3, uParam4);
							break;
						
						case 1:
							func_44(uParam3, 67, 1);
							func_44(uParam3, 68, 1);
							func_44(uParam3, 69, 1);
							func_44(uParam3, 70, 1);
							func_44(uParam3, 71, 1);
							func_44(uParam3, 72, 1);
							func_44(uParam3, 73, 1);
							func_44(uParam3, 74, 1);
							func_44(uParam3, 78, 1);
							func_44(uParam3, 79, 1);
							func_44(uParam3, 80, 1);
							func_44(uParam3, 81, 1);
							func_44(uParam3, 82, 1);
							func_44(uParam3, 91, 1);
							func_44(uParam3, 92, 1);
							func_42(uParam2, 66, 1);
							func_42(uParam2, 67, 1);
							func_42(uParam2, 68, 1);
							func_42(uParam2, 69, 1);
							func_42(uParam2, 70, 1);
							func_42(uParam2, 71, 1);
							func_42(uParam2, 72, 1);
							func_42(uParam2, 73, 1);
							func_42(uParam2, 77, 1);
							func_42(uParam2, 78, 1);
							func_42(uParam2, 79, 1);
							func_42(uParam2, 80, 1);
							func_42(uParam2, 81, 1);
							func_42(uParam2, 90, 1);
							func_42(uParam2, 91, 1);
							func_46(uParam4, 92, 1);
							func_46(uParam4, 93, 1);
							func_46(uParam4, 94, 1);
							func_46(uParam4, 96, 1);
							func_46(uParam4, 97, 1);
							func_46(uParam4, 98, 1);
							func_46(uParam4, 100, 1);
							func_46(uParam4, 103, 1);
							func_46(uParam4, 104, 1);
							func_46(uParam4, 105, 1);
							func_46(uParam4, 106, 1);
							func_46(uParam4, 107, 1);
							func_46(uParam4, 108, 1);
							func_41(uParam2, uParam3, uParam4);
							break;
						
						case 2:
							func_44(uParam3, 67, 1);
							func_44(uParam3, 68, 1);
							func_44(uParam3, 69, 1);
							func_44(uParam3, 70, 1);
							func_44(uParam3, 71, 1);
							func_44(uParam3, 72, 1);
							func_44(uParam3, 73, 1);
							func_44(uParam3, 74, 1);
							func_44(uParam3, 78, 1);
							func_44(uParam3, 79, 1);
							func_44(uParam3, 80, 1);
							func_44(uParam3, 81, 1);
							func_44(uParam3, 82, 1);
							func_44(uParam3, 91, 1);
							func_44(uParam3, 92, 1);
							func_42(uParam2, 66, 1);
							func_42(uParam2, 67, 1);
							func_42(uParam2, 68, 1);
							func_42(uParam2, 69, 1);
							func_42(uParam2, 70, 1);
							func_42(uParam2, 71, 1);
							func_42(uParam2, 72, 1);
							func_42(uParam2, 73, 1);
							func_42(uParam2, 77, 1);
							func_42(uParam2, 78, 1);
							func_42(uParam2, 79, 1);
							func_42(uParam2, 80, 1);
							func_42(uParam2, 81, 1);
							func_42(uParam2, 90, 1);
							func_42(uParam2, 91, 1);
							func_46(uParam4, 92, 1);
							func_46(uParam4, 93, 1);
							func_46(uParam4, 94, 1);
							func_46(uParam4, 96, 1);
							func_46(uParam4, 97, 1);
							func_46(uParam4, 98, 1);
							func_46(uParam4, 100, 1);
							func_46(uParam4, 103, 1);
							func_46(uParam4, 104, 1);
							func_46(uParam4, 105, 1);
							func_46(uParam4, 106, 1);
							func_46(uParam4, 107, 1);
							func_46(uParam4, 108, 1);
							func_41(uParam2, uParam3, uParam4);
							break;
					}
					break;
				
				case 10:
					switch (iParam5)
					{
						case 0:
							func_44(uParam3, 3, 1);
							func_44(uParam3, 4, 1);
							func_44(uParam3, 6, 1);
							func_44(uParam3, 10, 1);
							func_44(uParam3, 54, 1);
							func_44(uParam3, 55, 1);
							func_44(uParam3, 56, 1);
							func_44(uParam3, 13, 1);
							func_44(uParam3, 16, 1);
							func_44(uParam3, 48, 1);
							func_44(uParam3, 49, 1);
							func_44(uParam3, 18, 1);
							func_44(uParam3, 50, 1);
							func_44(uParam3, 51, 1);
							func_44(uParam3, 52, 1);
							func_44(uParam3, 53, 1);
							func_44(uParam3, 62, 1);
							func_44(uParam3, 38, 1);
							func_44(uParam3, 47, 1);
							func_44(uParam3, 111, 1);
							func_44(uParam3, 20, 1);
							func_44(uParam3, 26, 1);
							func_44(uParam3, 27, 1);
							func_44(uParam3, 32, 1);
							func_44(uParam3, 33, 1);
							func_44(uParam3, 37, 1);
							func_44(uParam3, 39, 1);
							func_44(uParam3, 55, 1);
							func_44(uParam3, 106, 1);
							func_44(uParam3, 114, 1);
							func_44(uParam3, 116, 1);
							func_44(uParam3, 117, 1);
							func_44(uParam3, 118, 1);
							func_44(uParam3, 119, 1);
							func_42(uParam2, 3, 1);
							func_42(uParam2, 4, 1);
							func_42(uParam2, 6, 1);
							func_42(uParam2, 8, 1);
							func_42(uParam2, 9, 1);
							func_42(uParam2, 10, 1);
							func_42(uParam2, 53, 1);
							func_42(uParam2, 56, 1);
							func_42(uParam2, 55, 1);
							func_42(uParam2, 13, 1);
							func_42(uParam2, 18, 1);
							func_42(uParam2, 49, 1);
							func_42(uParam2, 50, 1);
							func_42(uParam2, 51, 1);
							func_42(uParam2, 52, 1);
							func_42(uParam2, 62, 1);
							func_42(uParam2, 37, 1);
							func_42(uParam2, 46, 1);
							func_42(uParam2, 110, 1);
							func_42(uParam2, 21, 1);
							func_42(uParam2, 26, 1);
							func_42(uParam2, 27, 1);
							func_42(uParam2, 28, 1);
							func_42(uParam2, 32, 1);
							func_42(uParam2, 36, 1);
							func_42(uParam2, 38, 1);
							func_42(uParam2, 55, 1);
							func_42(uParam2, 14, 1);
							func_42(uParam2, 105, 1);
							func_42(uParam2, 113, 1);
							func_42(uParam2, 114, 1);
							func_42(uParam2, 115, 1);
							func_42(uParam2, 116, 1);
							func_42(uParam2, 117, 1);
							func_46(uParam4, 3, 1);
							func_46(uParam4, 4, 1);
							func_46(uParam4, 14, 1);
							func_46(uParam4, 15, 1);
							func_46(uParam4, 16, 1);
							func_46(uParam4, 9, 1);
							func_46(uParam4, 10, 1);
							func_46(uParam4, 12, 1);
							func_46(uParam4, 13, 1);
							func_46(uParam4, 17, 1);
							func_46(uParam4, 18, 1);
							func_46(uParam4, 19, 1);
							func_46(uParam4, 20, 1);
							func_46(uParam4, 59, 1);
							func_46(uParam4, 60, 1);
							func_46(uParam4, 61, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 63, 1);
							func_46(uParam4, 64, 1);
							func_46(uParam4, 65, 1);
							func_46(uParam4, 66, 1);
							func_46(uParam4, 67, 1);
							func_46(uParam4, 68, 1);
							func_46(uParam4, 69, 1);
							func_46(uParam4, 70, 1);
							func_46(uParam4, 71, 1);
							func_46(uParam4, 72, 1);
							func_46(uParam4, 21, 1);
							func_46(uParam4, 22, 1);
							func_46(uParam4, 23, 1);
							func_46(uParam4, 24, 1);
							func_46(uParam4, 25, 1);
							func_46(uParam4, 26, 1);
							func_46(uParam4, 36, 1);
							func_46(uParam4, 46, 1);
							func_46(uParam4, 38, 1);
							func_46(uParam4, 29, 1);
							func_46(uParam4, 28, 1);
							func_46(uParam4, 8, 1);
							func_46(uParam4, 31, 1);
							func_46(uParam4, 32, 1);
							func_46(uParam4, 33, 1);
							func_46(uParam4, 34, 1);
							func_46(uParam4, 43, 1);
							func_46(uParam4, 92, 1);
							func_46(uParam4, 93, 1);
							func_46(uParam4, 94, 1);
							func_46(uParam4, 96, 1);
							func_46(uParam4, 97, 1);
							func_46(uParam4, 98, 1);
							func_46(uParam4, 100, 1);
							func_46(uParam4, 103, 1);
							func_46(uParam4, 104, 1);
							func_46(uParam4, 105, 1);
							func_46(uParam4, 106, 1);
							func_46(uParam4, 107, 1);
							func_46(uParam4, 108, 1);
							func_46(uParam4, 110, 1);
							func_46(uParam4, 112, 1);
							func_44(uParam3, 65, 1);
							func_44(uParam3, 67, 1);
							func_44(uParam3, 68, 1);
							func_44(uParam3, 69, 1);
							func_44(uParam3, 70, 1);
							func_44(uParam3, 71, 1);
							func_44(uParam3, 72, 1);
							func_44(uParam3, 73, 1);
							func_44(uParam3, 74, 1);
							func_44(uParam3, 75, 1);
							func_44(uParam3, 76, 1);
							func_44(uParam3, 78, 1);
							func_44(uParam3, 79, 1);
							func_44(uParam3, 80, 1);
							func_44(uParam3, 81, 1);
							func_44(uParam3, 82, 1);
							func_44(uParam3, 91, 1);
							func_44(uParam3, 92, 1);
							func_42(uParam2, 64, 1);
							func_42(uParam2, 65, 1);
							func_42(uParam2, 66, 1);
							func_42(uParam2, 67, 1);
							func_42(uParam2, 68, 1);
							func_42(uParam2, 69, 1);
							func_42(uParam2, 70, 1);
							func_42(uParam2, 71, 1);
							func_42(uParam2, 72, 1);
							func_42(uParam2, 73, 1);
							func_42(uParam2, 74, 1);
							func_42(uParam2, 75, 1);
							func_42(uParam2, 77, 1);
							func_42(uParam2, 78, 1);
							func_42(uParam2, 79, 1);
							func_42(uParam2, 80, 1);
							func_42(uParam2, 81, 1);
							func_42(uParam2, 90, 1);
							func_42(uParam2, 91, 1);
							func_41(uParam2, uParam3, uParam4);
							break;
						
						case 1:
							func_44(uParam3, 3, 1);
							func_44(uParam3, 4, 1);
							func_44(uParam3, 6, 1);
							func_44(uParam3, 13, 1);
							func_44(uParam3, 18, 1);
							func_44(uParam3, 50, 1);
							func_44(uParam3, 51, 1);
							func_44(uParam3, 52, 1);
							func_44(uParam3, 53, 1);
							func_44(uParam3, 62, 1);
							func_44(uParam3, 38, 1);
							func_44(uParam3, 47, 1);
							func_44(uParam3, 111, 1);
							func_44(uParam3, 19, 1);
							func_44(uParam3, 20, 1);
							func_44(uParam3, 26, 1);
							func_44(uParam3, 27, 1);
							func_44(uParam3, 32, 1);
							func_44(uParam3, 33, 1);
							func_44(uParam3, 37, 1);
							func_44(uParam3, 39, 1);
							func_44(uParam3, 55, 1);
							func_44(uParam3, 106, 1);
							func_44(uParam3, 114, 1);
							func_44(uParam3, 116, 1);
							func_44(uParam3, 117, 1);
							func_44(uParam3, 118, 1);
							func_44(uParam3, 119, 1);
							func_42(uParam2, 3, 1);
							func_42(uParam2, 4, 1);
							func_42(uParam2, 6, 1);
							func_42(uParam2, 8, 1);
							func_42(uParam2, 9, 1);
							func_42(uParam2, 10, 1);
							func_42(uParam2, 53, 1);
							func_42(uParam2, 56, 1);
							func_42(uParam2, 55, 1);
							func_42(uParam2, 11, 1);
							func_42(uParam2, 13, 1);
							func_42(uParam2, 18, 1);
							func_42(uParam2, 49, 1);
							func_42(uParam2, 50, 1);
							func_42(uParam2, 51, 1);
							func_42(uParam2, 52, 1);
							func_42(uParam2, 62, 1);
							func_42(uParam2, 37, 1);
							func_42(uParam2, 46, 1);
							func_42(uParam2, 110, 1);
							func_42(uParam2, 21, 1);
							func_42(uParam2, 22, 1);
							func_42(uParam2, 54, 1);
							func_42(uParam2, 26, 1);
							func_42(uParam2, 27, 1);
							func_42(uParam2, 28, 1);
							func_42(uParam2, 30, 1);
							func_42(uParam2, 31, 1);
							func_42(uParam2, 32, 1);
							func_42(uParam2, 36, 1);
							func_42(uParam2, 38, 1);
							func_42(uParam2, 55, 1);
							func_42(uParam2, 14, 1);
							func_42(uParam2, 105, 1);
							func_42(uParam2, 113, 1);
							func_42(uParam2, 114, 1);
							func_42(uParam2, 115, 1);
							func_42(uParam2, 116, 1);
							func_42(uParam2, 117, 1);
							func_46(uParam4, 2, 1);
							func_46(uParam4, 3, 1);
							func_46(uParam4, 4, 1);
							func_46(uParam4, 14, 1);
							func_46(uParam4, 15, 1);
							func_46(uParam4, 16, 1);
							func_46(uParam4, 9, 1);
							func_46(uParam4, 10, 1);
							func_46(uParam4, 12, 1);
							func_46(uParam4, 13, 1);
							func_46(uParam4, 17, 1);
							func_46(uParam4, 18, 1);
							func_46(uParam4, 19, 1);
							func_46(uParam4, 20, 1);
							func_46(uParam4, 59, 1);
							func_46(uParam4, 60, 1);
							func_46(uParam4, 61, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 63, 1);
							func_46(uParam4, 64, 1);
							func_46(uParam4, 65, 1);
							func_46(uParam4, 66, 1);
							func_46(uParam4, 67, 1);
							func_46(uParam4, 68, 1);
							func_46(uParam4, 69, 1);
							func_46(uParam4, 70, 1);
							func_46(uParam4, 71, 1);
							func_46(uParam4, 72, 1);
							func_46(uParam4, 21, 1);
							func_46(uParam4, 22, 1);
							func_46(uParam4, 23, 1);
							func_46(uParam4, 24, 1);
							func_46(uParam4, 25, 1);
							func_46(uParam4, 26, 1);
							func_46(uParam4, 36, 1);
							func_46(uParam4, 46, 1);
							func_46(uParam4, 38, 1);
							func_46(uParam4, 29, 1);
							func_46(uParam4, 28, 1);
							func_46(uParam4, 8, 1);
							func_46(uParam4, 31, 1);
							func_46(uParam4, 32, 1);
							func_46(uParam4, 33, 1);
							func_46(uParam4, 34, 1);
							func_46(uParam4, 43, 1);
							func_46(uParam4, 92, 1);
							func_46(uParam4, 93, 1);
							func_46(uParam4, 94, 1);
							func_46(uParam4, 96, 1);
							func_46(uParam4, 97, 1);
							func_46(uParam4, 98, 1);
							func_46(uParam4, 100, 1);
							func_46(uParam4, 103, 1);
							func_46(uParam4, 104, 1);
							func_46(uParam4, 105, 1);
							func_46(uParam4, 106, 1);
							func_46(uParam4, 107, 1);
							func_46(uParam4, 108, 1);
							func_46(uParam4, 110, 1);
							func_46(uParam4, 112, 1);
							func_44(uParam3, 65, 1);
							func_44(uParam3, 67, 1);
							func_44(uParam3, 68, 1);
							func_44(uParam3, 69, 1);
							func_44(uParam3, 70, 1);
							func_44(uParam3, 71, 1);
							func_44(uParam3, 72, 1);
							func_44(uParam3, 73, 1);
							func_44(uParam3, 74, 1);
							func_44(uParam3, 75, 1);
							func_44(uParam3, 76, 1);
							func_44(uParam3, 78, 1);
							func_44(uParam3, 79, 1);
							func_44(uParam3, 80, 1);
							func_44(uParam3, 81, 1);
							func_44(uParam3, 82, 1);
							func_44(uParam3, 91, 1);
							func_44(uParam3, 92, 1);
							func_42(uParam2, 64, 1);
							func_42(uParam2, 65, 1);
							func_42(uParam2, 66, 1);
							func_42(uParam2, 67, 1);
							func_42(uParam2, 68, 1);
							func_42(uParam2, 69, 1);
							func_42(uParam2, 70, 1);
							func_42(uParam2, 71, 1);
							func_42(uParam2, 72, 1);
							func_42(uParam2, 73, 1);
							func_42(uParam2, 74, 1);
							func_42(uParam2, 75, 1);
							func_42(uParam2, 77, 1);
							func_42(uParam2, 78, 1);
							func_42(uParam2, 79, 1);
							func_42(uParam2, 80, 1);
							func_42(uParam2, 81, 1);
							func_42(uParam2, 90, 1);
							func_42(uParam2, 91, 1);
							func_41(uParam2, uParam3, uParam4);
							break;
						
						case 2:
							func_44(uParam3, 38, 1);
							func_44(uParam3, 47, 1);
							func_44(uParam3, 111, 1);
							func_44(uParam3, 39, 1);
							func_44(uParam3, 106, 1);
							func_44(uParam3, 114, 1);
							func_44(uParam3, 116, 1);
							func_44(uParam3, 117, 1);
							func_44(uParam3, 118, 1);
							func_44(uParam3, 119, 1);
							func_42(uParam2, 37, 1);
							func_42(uParam2, 46, 1);
							func_42(uParam2, 110, 1);
							func_42(uParam2, 38, 1);
							func_42(uParam2, 14, 1);
							func_42(uParam2, 105, 1);
							func_42(uParam2, 113, 1);
							func_42(uParam2, 114, 1);
							func_42(uParam2, 115, 1);
							func_42(uParam2, 116, 1);
							func_42(uParam2, 117, 1);
							func_46(uParam4, 9, 1);
							func_46(uParam4, 10, 1);
							func_46(uParam4, 12, 1);
							func_46(uParam4, 18, 1);
							func_46(uParam4, 19, 1);
							func_46(uParam4, 20, 1);
							func_46(uParam4, 59, 1);
							func_46(uParam4, 60, 1);
							func_46(uParam4, 61, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 63, 1);
							func_46(uParam4, 64, 1);
							func_46(uParam4, 65, 1);
							func_46(uParam4, 66, 1);
							func_46(uParam4, 67, 1);
							func_46(uParam4, 68, 1);
							func_46(uParam4, 69, 1);
							func_46(uParam4, 70, 1);
							func_46(uParam4, 71, 1);
							func_46(uParam4, 72, 1);
							func_46(uParam4, 21, 1);
							func_46(uParam4, 22, 1);
							func_46(uParam4, 23, 1);
							func_46(uParam4, 24, 1);
							func_46(uParam4, 25, 1);
							func_46(uParam4, 26, 1);
							func_46(uParam4, 36, 1);
							func_46(uParam4, 46, 1);
							func_46(uParam4, 38, 1);
							func_46(uParam4, 29, 1);
							func_46(uParam4, 28, 1);
							func_46(uParam4, 8, 1);
							func_46(uParam4, 31, 1);
							func_46(uParam4, 32, 1);
							func_46(uParam4, 33, 1);
							func_46(uParam4, 34, 1);
							func_46(uParam4, 92, 1);
							func_46(uParam4, 93, 1);
							func_46(uParam4, 94, 1);
							func_46(uParam4, 96, 1);
							func_46(uParam4, 97, 1);
							func_46(uParam4, 98, 1);
							func_46(uParam4, 100, 1);
							func_46(uParam4, 103, 1);
							func_46(uParam4, 104, 1);
							func_46(uParam4, 105, 1);
							func_46(uParam4, 106, 1);
							func_46(uParam4, 107, 1);
							func_46(uParam4, 108, 1);
							func_46(uParam4, 110, 1);
							func_46(uParam4, 112, 1);
							func_44(uParam3, 65, 1);
							func_44(uParam3, 67, 1);
							func_44(uParam3, 68, 1);
							func_44(uParam3, 69, 1);
							func_44(uParam3, 70, 1);
							func_44(uParam3, 71, 1);
							func_44(uParam3, 72, 1);
							func_44(uParam3, 73, 1);
							func_44(uParam3, 74, 1);
							func_44(uParam3, 75, 1);
							func_44(uParam3, 76, 1);
							func_44(uParam3, 78, 1);
							func_44(uParam3, 79, 1);
							func_44(uParam3, 80, 1);
							func_44(uParam3, 81, 1);
							func_44(uParam3, 82, 1);
							func_44(uParam3, 91, 1);
							func_44(uParam3, 92, 1);
							func_42(uParam2, 64, 1);
							func_42(uParam2, 65, 1);
							func_42(uParam2, 66, 1);
							func_42(uParam2, 67, 1);
							func_42(uParam2, 68, 1);
							func_42(uParam2, 69, 1);
							func_42(uParam2, 70, 1);
							func_42(uParam2, 71, 1);
							func_42(uParam2, 72, 1);
							func_42(uParam2, 73, 1);
							func_42(uParam2, 74, 1);
							func_42(uParam2, 75, 1);
							func_42(uParam2, 77, 1);
							func_42(uParam2, 78, 1);
							func_42(uParam2, 79, 1);
							func_42(uParam2, 80, 1);
							func_42(uParam2, 81, 1);
							func_42(uParam2, 90, 1);
							func_42(uParam2, 91, 1);
							func_41(uParam2, uParam3, uParam4);
							break;
					}
					break;
				
				case 13:
					switch (iParam5)
					{
						case 0:
							func_44(uParam3, 16, 1);
							func_44(uParam3, 48, 1);
							func_44(uParam3, 49, 1);
							func_44(uParam3, 18, 1);
							func_44(uParam3, 50, 1);
							func_44(uParam3, 51, 1);
							func_44(uParam3, 52, 1);
							func_44(uParam3, 53, 1);
							func_44(uParam3, 62, 1);
							func_44(uParam3, 38, 1);
							func_44(uParam3, 47, 1);
							func_44(uParam3, 111, 1);
							func_42(uParam2, 18, 1);
							func_42(uParam2, 49, 1);
							func_42(uParam2, 50, 1);
							func_42(uParam2, 51, 1);
							func_42(uParam2, 52, 1);
							func_42(uParam2, 62, 1);
							func_42(uParam2, 37, 1);
							func_42(uParam2, 46, 1);
							func_42(uParam2, 110, 1);
							func_42(uParam2, 19, 1);
							func_46(uParam4, 2, 1);
							func_46(uParam4, 3, 1);
							func_46(uParam4, 8, 1);
							func_46(uParam4, 9, 1);
							func_46(uParam4, 10, 1);
							func_46(uParam4, 13, 1);
							func_46(uParam4, 17, 1);
							func_46(uParam4, 18, 1);
							func_46(uParam4, 19, 1);
							func_46(uParam4, 20, 1);
							func_46(uParam4, 59, 1);
							func_46(uParam4, 60, 1);
							func_46(uParam4, 61, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 63, 1);
							func_46(uParam4, 64, 1);
							func_46(uParam4, 65, 1);
							func_46(uParam4, 66, 1);
							func_46(uParam4, 67, 1);
							func_46(uParam4, 68, 1);
							func_46(uParam4, 69, 1);
							func_46(uParam4, 70, 1);
							func_46(uParam4, 71, 1);
							func_46(uParam4, 72, 1);
							func_46(uParam4, 21, 1);
							func_46(uParam4, 22, 1);
							func_46(uParam4, 23, 1);
							func_46(uParam4, 24, 1);
							func_46(uParam4, 25, 1);
							func_46(uParam4, 26, 1);
							func_46(uParam4, 36, 1);
							func_46(uParam4, 46, 1);
							func_46(uParam4, 38, 1);
							func_46(uParam4, 29, 1);
							func_46(uParam4, 28, 1);
							func_46(uParam4, 31, 1);
							func_46(uParam4, 32, 1);
							func_46(uParam4, 33, 1);
							func_46(uParam4, 34, 1);
							func_46(uParam4, 43, 1);
							func_46(uParam4, 92, 1);
							func_46(uParam4, 93, 1);
							func_46(uParam4, 94, 1);
							func_46(uParam4, 96, 1);
							func_46(uParam4, 97, 1);
							func_46(uParam4, 98, 1);
							func_46(uParam4, 100, 1);
							func_46(uParam4, 103, 1);
							func_46(uParam4, 104, 1);
							func_46(uParam4, 105, 1);
							func_46(uParam4, 106, 1);
							func_46(uParam4, 107, 1);
							func_46(uParam4, 108, 1);
							func_46(uParam4, 110, 1);
							func_46(uParam4, 112, 1);
							func_46(uParam4, 115, 1);
							func_46(uParam4, 116, 1);
							func_44(uParam3, 67, 1);
							func_44(uParam3, 68, 1);
							func_44(uParam3, 69, 1);
							func_44(uParam3, 70, 1);
							func_44(uParam3, 71, 1);
							func_44(uParam3, 72, 1);
							func_44(uParam3, 73, 1);
							func_44(uParam3, 74, 1);
							func_44(uParam3, 78, 1);
							func_44(uParam3, 79, 1);
							func_44(uParam3, 80, 1);
							func_44(uParam3, 81, 1);
							func_44(uParam3, 82, 1);
							func_44(uParam3, 91, 1);
							func_44(uParam3, 92, 1);
							func_42(uParam2, 66, 1);
							func_42(uParam2, 67, 1);
							func_42(uParam2, 68, 1);
							func_42(uParam2, 69, 1);
							func_42(uParam2, 70, 1);
							func_42(uParam2, 71, 1);
							func_42(uParam2, 72, 1);
							func_42(uParam2, 73, 1);
							func_42(uParam2, 77, 1);
							func_42(uParam2, 78, 1);
							func_42(uParam2, 79, 1);
							func_42(uParam2, 80, 1);
							func_42(uParam2, 81, 1);
							func_42(uParam2, 90, 1);
							func_42(uParam2, 91, 1);
							func_41(uParam2, uParam3, uParam4);
							break;
						
						case 1:
							func_44(uParam3, 16, 1);
							func_44(uParam3, 48, 1);
							func_44(uParam3, 49, 1);
							func_44(uParam3, 18, 1);
							func_44(uParam3, 50, 1);
							func_44(uParam3, 51, 1);
							func_44(uParam3, 52, 1);
							func_44(uParam3, 53, 1);
							func_44(uParam3, 62, 1);
							func_44(uParam3, 38, 1);
							func_44(uParam3, 47, 1);
							func_44(uParam3, 111, 1);
							func_42(uParam2, 18, 1);
							func_42(uParam2, 49, 1);
							func_42(uParam2, 50, 1);
							func_42(uParam2, 51, 1);
							func_42(uParam2, 52, 1);
							func_42(uParam2, 62, 1);
							func_42(uParam2, 37, 1);
							func_42(uParam2, 46, 1);
							func_42(uParam2, 110, 1);
							func_46(uParam4, 2, 1);
							func_46(uParam4, 7, 1);
							func_46(uParam4, 8, 1);
							func_46(uParam4, 9, 1);
							func_46(uParam4, 10, 1);
							func_46(uParam4, 13, 1);
							func_46(uParam4, 17, 1);
							func_46(uParam4, 18, 1);
							func_46(uParam4, 19, 1);
							func_46(uParam4, 20, 1);
							func_46(uParam4, 59, 1);
							func_46(uParam4, 60, 1);
							func_46(uParam4, 61, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 63, 1);
							func_46(uParam4, 64, 1);
							func_46(uParam4, 65, 1);
							func_46(uParam4, 66, 1);
							func_46(uParam4, 67, 1);
							func_46(uParam4, 68, 1);
							func_46(uParam4, 69, 1);
							func_46(uParam4, 70, 1);
							func_46(uParam4, 71, 1);
							func_46(uParam4, 72, 1);
							func_46(uParam4, 21, 1);
							func_46(uParam4, 22, 1);
							func_46(uParam4, 23, 1);
							func_46(uParam4, 24, 1);
							func_46(uParam4, 25, 1);
							func_46(uParam4, 26, 1);
							func_46(uParam4, 36, 1);
							func_46(uParam4, 46, 1);
							func_46(uParam4, 38, 1);
							func_46(uParam4, 29, 1);
							func_46(uParam4, 28, 1);
							func_46(uParam4, 31, 1);
							func_46(uParam4, 32, 1);
							func_46(uParam4, 33, 1);
							func_46(uParam4, 34, 1);
							func_46(uParam4, 43, 1);
							func_46(uParam4, 92, 1);
							func_46(uParam4, 93, 1);
							func_46(uParam4, 94, 1);
							func_46(uParam4, 96, 1);
							func_46(uParam4, 97, 1);
							func_46(uParam4, 98, 1);
							func_46(uParam4, 100, 1);
							func_46(uParam4, 103, 1);
							func_46(uParam4, 104, 1);
							func_46(uParam4, 105, 1);
							func_46(uParam4, 106, 1);
							func_46(uParam4, 107, 1);
							func_46(uParam4, 108, 1);
							func_46(uParam4, 110, 1);
							func_46(uParam4, 112, 1);
							func_46(uParam4, 115, 1);
							func_46(uParam4, 116, 1);
							func_41(uParam2, uParam3, uParam4);
							func_44(uParam3, 67, 1);
							func_44(uParam3, 68, 1);
							func_44(uParam3, 69, 1);
							func_44(uParam3, 70, 1);
							func_44(uParam3, 71, 1);
							func_44(uParam3, 72, 1);
							func_44(uParam3, 73, 1);
							func_44(uParam3, 74, 1);
							func_44(uParam3, 78, 1);
							func_44(uParam3, 79, 1);
							func_44(uParam3, 80, 1);
							func_44(uParam3, 81, 1);
							func_44(uParam3, 82, 1);
							func_44(uParam3, 91, 1);
							func_44(uParam3, 92, 1);
							func_42(uParam2, 66, 1);
							func_42(uParam2, 67, 1);
							func_42(uParam2, 68, 1);
							func_42(uParam2, 69, 1);
							func_42(uParam2, 70, 1);
							func_42(uParam2, 71, 1);
							func_42(uParam2, 72, 1);
							func_42(uParam2, 73, 1);
							func_42(uParam2, 77, 1);
							func_42(uParam2, 78, 1);
							func_42(uParam2, 79, 1);
							func_42(uParam2, 80, 1);
							func_42(uParam2, 81, 1);
							func_42(uParam2, 90, 1);
							func_42(uParam2, 91, 1);
							break;
						
						case 2:
							func_44(uParam3, 18, 1);
							func_44(uParam3, 50, 1);
							func_44(uParam3, 51, 1);
							func_44(uParam3, 52, 1);
							func_44(uParam3, 53, 1);
							func_44(uParam3, 62, 1);
							func_44(uParam3, 38, 1);
							func_44(uParam3, 47, 1);
							func_44(uParam3, 111, 1);
							func_42(uParam2, 18, 1);
							func_42(uParam2, 49, 1);
							func_42(uParam2, 50, 1);
							func_42(uParam2, 51, 1);
							func_42(uParam2, 52, 1);
							func_42(uParam2, 62, 1);
							func_42(uParam2, 37, 1);
							func_42(uParam2, 46, 1);
							func_42(uParam2, 110, 1);
							func_46(uParam4, 1, 1);
							func_46(uParam4, 2, 1);
							func_46(uParam4, 3, 1);
							func_46(uParam4, 5, 1);
							func_46(uParam4, 8, 1);
							func_46(uParam4, 9, 1);
							func_46(uParam4, 10, 1);
							func_46(uParam4, 13, 1);
							func_46(uParam4, 17, 1);
							func_46(uParam4, 18, 1);
							func_46(uParam4, 19, 1);
							func_46(uParam4, 20, 1);
							func_46(uParam4, 59, 1);
							func_46(uParam4, 60, 1);
							func_46(uParam4, 61, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 63, 1);
							func_46(uParam4, 64, 1);
							func_46(uParam4, 65, 1);
							func_46(uParam4, 66, 1);
							func_46(uParam4, 67, 1);
							func_46(uParam4, 68, 1);
							func_46(uParam4, 69, 1);
							func_46(uParam4, 70, 1);
							func_46(uParam4, 71, 1);
							func_46(uParam4, 72, 1);
							func_46(uParam4, 21, 1);
							func_46(uParam4, 22, 1);
							func_46(uParam4, 23, 1);
							func_46(uParam4, 24, 1);
							func_46(uParam4, 25, 1);
							func_46(uParam4, 26, 1);
							func_46(uParam4, 36, 1);
							func_46(uParam4, 46, 1);
							func_46(uParam4, 38, 1);
							func_46(uParam4, 29, 1);
							func_46(uParam4, 28, 1);
							func_46(uParam4, 31, 1);
							func_46(uParam4, 32, 1);
							func_46(uParam4, 33, 1);
							func_46(uParam4, 34, 1);
							func_46(uParam4, 92, 1);
							func_46(uParam4, 93, 1);
							func_46(uParam4, 94, 1);
							func_46(uParam4, 96, 1);
							func_46(uParam4, 97, 1);
							func_46(uParam4, 98, 1);
							func_46(uParam4, 100, 1);
							func_46(uParam4, 103, 1);
							func_46(uParam4, 104, 1);
							func_46(uParam4, 105, 1);
							func_46(uParam4, 106, 1);
							func_46(uParam4, 107, 1);
							func_46(uParam4, 108, 1);
							func_46(uParam4, 110, 1);
							func_46(uParam4, 112, 1);
							func_46(uParam4, 115, 1);
							func_46(uParam4, 116, 1);
							func_41(uParam2, uParam3, uParam4);
							func_44(uParam3, 67, 1);
							func_44(uParam3, 68, 1);
							func_44(uParam3, 69, 1);
							func_44(uParam3, 70, 1);
							func_44(uParam3, 71, 1);
							func_44(uParam3, 72, 1);
							func_44(uParam3, 73, 1);
							func_44(uParam3, 74, 1);
							func_44(uParam3, 78, 1);
							func_44(uParam3, 79, 1);
							func_44(uParam3, 80, 1);
							func_44(uParam3, 81, 1);
							func_44(uParam3, 82, 1);
							func_44(uParam3, 91, 1);
							func_44(uParam3, 92, 1);
							func_42(uParam2, 66, 1);
							func_42(uParam2, 67, 1);
							func_42(uParam2, 68, 1);
							func_42(uParam2, 69, 1);
							func_42(uParam2, 70, 1);
							func_42(uParam2, 71, 1);
							func_42(uParam2, 72, 1);
							func_42(uParam2, 73, 1);
							func_42(uParam2, 77, 1);
							func_42(uParam2, 78, 1);
							func_42(uParam2, 79, 1);
							func_42(uParam2, 80, 1);
							func_42(uParam2, 81, 1);
							func_42(uParam2, 90, 1);
							func_42(uParam2, 91, 1);
							break;
					}
					break;
				
				case 16:
					switch (iParam5)
					{
						case 0:
							func_44(uParam3, 4, 1);
							break;
						
						case 1:
							func_46(uParam4, 43, 1);
							break;
						
						case 2:
							break;
					}
					break;
				
				case 23:
					switch (iParam5)
					{
						case 0:
							func_44(uParam3, 67, 1);
							func_44(uParam3, 68, 1);
							func_44(uParam3, 69, 1);
							func_44(uParam3, 70, 1);
							func_44(uParam3, 71, 1);
							func_44(uParam3, 72, 1);
							func_44(uParam3, 73, 1);
							func_44(uParam3, 74, 1);
							func_44(uParam3, 78, 1);
							func_44(uParam3, 79, 1);
							func_44(uParam3, 80, 1);
							func_44(uParam3, 81, 1);
							func_44(uParam3, 82, 1);
							func_44(uParam3, 91, 1);
							func_44(uParam3, 92, 1);
							func_42(uParam2, 66, 1);
							func_42(uParam2, 67, 1);
							func_42(uParam2, 68, 1);
							func_42(uParam2, 69, 1);
							func_42(uParam2, 70, 1);
							func_42(uParam2, 71, 1);
							func_42(uParam2, 72, 1);
							func_42(uParam2, 73, 1);
							func_42(uParam2, 74, 1);
							func_42(uParam2, 77, 1);
							func_42(uParam2, 78, 1);
							func_42(uParam2, 79, 1);
							func_42(uParam2, 80, 1);
							func_42(uParam2, 81, 1);
							func_42(uParam2, 90, 1);
							func_42(uParam2, 91, 1);
							func_46(uParam4, 92, 1);
							func_46(uParam4, 93, 1);
							func_46(uParam4, 94, 1);
							func_46(uParam4, 96, 1);
							func_46(uParam4, 97, 1);
							func_46(uParam4, 98, 1);
							func_46(uParam4, 100, 1);
							func_46(uParam4, 103, 1);
							func_46(uParam4, 104, 1);
							func_46(uParam4, 105, 1);
							func_46(uParam4, 106, 1);
							func_46(uParam4, 107, 1);
							func_46(uParam4, 108, 1);
							func_46(uParam4, 110, 1);
							func_46(uParam4, 112, 1);
							func_41(uParam2, uParam3, uParam4);
							break;
						
						case 1:
							func_44(uParam3, 67, 1);
							func_44(uParam3, 68, 1);
							func_44(uParam3, 69, 1);
							func_44(uParam3, 70, 1);
							func_44(uParam3, 71, 1);
							func_44(uParam3, 72, 1);
							func_44(uParam3, 73, 1);
							func_44(uParam3, 74, 1);
							func_44(uParam3, 78, 1);
							func_44(uParam3, 79, 1);
							func_44(uParam3, 80, 1);
							func_44(uParam3, 81, 1);
							func_44(uParam3, 82, 1);
							func_44(uParam3, 91, 1);
							func_44(uParam3, 92, 1);
							func_42(uParam2, 66, 1);
							func_42(uParam2, 67, 1);
							func_42(uParam2, 68, 1);
							func_42(uParam2, 69, 1);
							func_42(uParam2, 70, 1);
							func_42(uParam2, 71, 1);
							func_42(uParam2, 72, 1);
							func_42(uParam2, 73, 1);
							func_42(uParam2, 74, 1);
							func_42(uParam2, 77, 1);
							func_42(uParam2, 78, 1);
							func_42(uParam2, 79, 1);
							func_42(uParam2, 80, 1);
							func_42(uParam2, 81, 1);
							func_42(uParam2, 90, 1);
							func_42(uParam2, 91, 1);
							func_46(uParam4, 92, 1);
							func_46(uParam4, 93, 1);
							func_46(uParam4, 94, 1);
							func_46(uParam4, 96, 1);
							func_46(uParam4, 97, 1);
							func_46(uParam4, 98, 1);
							func_46(uParam4, 100, 1);
							func_46(uParam4, 103, 1);
							func_46(uParam4, 104, 1);
							func_46(uParam4, 105, 1);
							func_46(uParam4, 106, 1);
							func_46(uParam4, 107, 1);
							func_46(uParam4, 108, 1);
							func_46(uParam4, 110, 1);
							func_46(uParam4, 112, 1);
							func_41(uParam2, uParam3, uParam4);
							break;
						
						case 2:
							func_44(uParam3, 67, 1);
							func_44(uParam3, 68, 1);
							func_44(uParam3, 69, 1);
							func_44(uParam3, 70, 1);
							func_44(uParam3, 71, 1);
							func_44(uParam3, 72, 1);
							func_44(uParam3, 73, 1);
							func_44(uParam3, 74, 1);
							func_44(uParam3, 78, 1);
							func_44(uParam3, 79, 1);
							func_44(uParam3, 80, 1);
							func_44(uParam3, 81, 1);
							func_44(uParam3, 82, 1);
							func_44(uParam3, 91, 1);
							func_44(uParam3, 92, 1);
							func_42(uParam2, 66, 1);
							func_42(uParam2, 67, 1);
							func_42(uParam2, 68, 1);
							func_42(uParam2, 69, 1);
							func_42(uParam2, 70, 1);
							func_42(uParam2, 71, 1);
							func_42(uParam2, 72, 1);
							func_42(uParam2, 73, 1);
							func_42(uParam2, 74, 1);
							func_42(uParam2, 77, 1);
							func_42(uParam2, 78, 1);
							func_42(uParam2, 79, 1);
							func_42(uParam2, 80, 1);
							func_42(uParam2, 81, 1);
							func_42(uParam2, 90, 1);
							func_42(uParam2, 91, 1);
							func_46(uParam4, 92, 1);
							func_46(uParam4, 93, 1);
							func_46(uParam4, 94, 1);
							func_46(uParam4, 96, 1);
							func_46(uParam4, 97, 1);
							func_46(uParam4, 98, 1);
							func_46(uParam4, 100, 1);
							func_46(uParam4, 103, 1);
							func_46(uParam4, 104, 1);
							func_46(uParam4, 105, 1);
							func_46(uParam4, 106, 1);
							func_46(uParam4, 107, 1);
							func_46(uParam4, 108, 1);
							func_46(uParam4, 110, 1);
							func_46(uParam4, 112, 1);
							func_41(uParam2, uParam3, uParam4);
							break;
					}
					break;
				
				case 17:
					switch (iParam5)
					{
						case 0:
							func_44(uParam3, 16, 1);
							func_44(uParam3, 48, 1);
							func_44(uParam3, 49, 1);
							func_44(uParam3, 18, 1);
							func_44(uParam3, 50, 1);
							func_44(uParam3, 51, 1);
							func_44(uParam3, 52, 1);
							func_44(uParam3, 53, 1);
							func_44(uParam3, 62, 1);
							func_44(uParam3, 38, 1);
							func_44(uParam3, 111, 1);
							func_42(uParam2, 16, 1);
							func_42(uParam2, 47, 1);
							func_42(uParam2, 48, 1);
							func_42(uParam2, 18, 1);
							func_42(uParam2, 49, 1);
							func_42(uParam2, 50, 1);
							func_42(uParam2, 51, 1);
							func_42(uParam2, 52, 1);
							func_42(uParam2, 62, 1);
							func_42(uParam2, 37, 1);
							func_42(uParam2, 46, 1);
							func_42(uParam2, 110, 1);
							func_46(uParam4, 1, 1);
							func_46(uParam4, 2, 1);
							func_46(uParam4, 3, 1);
							func_46(uParam4, 5, 1);
							func_46(uParam4, 6, 1);
							func_46(uParam4, 7, 1);
							func_46(uParam4, 8, 1);
							func_46(uParam4, 9, 1);
							func_46(uParam4, 10, 1);
							func_46(uParam4, 13, 1);
							func_46(uParam4, 18, 1);
							func_46(uParam4, 19, 1);
							func_46(uParam4, 20, 1);
							func_46(uParam4, 59, 1);
							func_46(uParam4, 60, 1);
							func_46(uParam4, 61, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 63, 1);
							func_46(uParam4, 64, 1);
							func_46(uParam4, 65, 1);
							func_46(uParam4, 66, 1);
							func_46(uParam4, 67, 1);
							func_46(uParam4, 68, 1);
							func_46(uParam4, 69, 1);
							func_46(uParam4, 70, 1);
							func_46(uParam4, 71, 1);
							func_46(uParam4, 72, 1);
							func_46(uParam4, 21, 1);
							func_46(uParam4, 22, 1);
							func_46(uParam4, 23, 1);
							func_46(uParam4, 24, 1);
							func_46(uParam4, 25, 1);
							func_46(uParam4, 26, 1);
							func_46(uParam4, 36, 1);
							func_46(uParam4, 46, 1);
							func_46(uParam4, 38, 1);
							func_46(uParam4, 29, 1);
							func_46(uParam4, 28, 1);
							func_46(uParam4, 92, 1);
							func_46(uParam4, 93, 1);
							func_46(uParam4, 94, 1);
							func_46(uParam4, 96, 1);
							func_46(uParam4, 97, 1);
							func_46(uParam4, 98, 1);
							func_46(uParam4, 100, 1);
							func_46(uParam4, 103, 1);
							func_46(uParam4, 104, 1);
							func_46(uParam4, 105, 1);
							func_46(uParam4, 106, 1);
							func_46(uParam4, 107, 1);
							func_46(uParam4, 108, 1);
							func_44(uParam3, 67, 1);
							func_44(uParam3, 68, 1);
							func_44(uParam3, 69, 1);
							func_44(uParam3, 70, 1);
							func_44(uParam3, 71, 1);
							func_44(uParam3, 72, 1);
							func_44(uParam3, 73, 1);
							func_44(uParam3, 74, 1);
							func_44(uParam3, 78, 1);
							func_44(uParam3, 79, 1);
							func_44(uParam3, 80, 1);
							func_44(uParam3, 81, 1);
							func_44(uParam3, 82, 1);
							func_44(uParam3, 91, 1);
							func_44(uParam3, 92, 1);
							func_42(uParam2, 66, 1);
							func_42(uParam2, 67, 1);
							func_42(uParam2, 68, 1);
							func_42(uParam2, 69, 1);
							func_42(uParam2, 70, 1);
							func_42(uParam2, 71, 1);
							func_42(uParam2, 72, 1);
							func_42(uParam2, 73, 1);
							func_42(uParam2, 77, 1);
							func_42(uParam2, 78, 1);
							func_42(uParam2, 79, 1);
							func_42(uParam2, 80, 1);
							func_42(uParam2, 81, 1);
							func_42(uParam2, 90, 1);
							func_42(uParam2, 91, 1);
							break;
						
						case 1:
							func_44(uParam3, 16, 1);
							func_44(uParam3, 48, 1);
							func_44(uParam3, 49, 1);
							func_44(uParam3, 18, 1);
							func_44(uParam3, 50, 1);
							func_44(uParam3, 51, 1);
							func_44(uParam3, 52, 1);
							func_44(uParam3, 53, 1);
							func_44(uParam3, 62, 1);
							func_44(uParam3, 38, 1);
							func_44(uParam3, 47, 1);
							func_44(uParam3, 111, 1);
							func_42(uParam2, 16, 1);
							func_42(uParam2, 47, 1);
							func_42(uParam2, 48, 1);
							func_42(uParam2, 18, 1);
							func_42(uParam2, 49, 1);
							func_42(uParam2, 50, 1);
							func_42(uParam2, 51, 1);
							func_42(uParam2, 52, 1);
							func_42(uParam2, 62, 1);
							func_42(uParam2, 37, 1);
							func_42(uParam2, 46, 1);
							func_42(uParam2, 110, 1);
							func_46(uParam4, 1, 1);
							func_46(uParam4, 2, 1);
							func_46(uParam4, 3, 1);
							func_46(uParam4, 5, 1);
							func_46(uParam4, 6, 1);
							func_46(uParam4, 7, 1);
							func_46(uParam4, 8, 1);
							func_46(uParam4, 9, 1);
							func_46(uParam4, 10, 1);
							func_46(uParam4, 13, 1);
							func_46(uParam4, 18, 1);
							func_46(uParam4, 19, 1);
							func_46(uParam4, 20, 1);
							func_46(uParam4, 59, 1);
							func_46(uParam4, 60, 1);
							func_46(uParam4, 61, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 63, 1);
							func_46(uParam4, 64, 1);
							func_46(uParam4, 65, 1);
							func_46(uParam4, 66, 1);
							func_46(uParam4, 67, 1);
							func_46(uParam4, 68, 1);
							func_46(uParam4, 69, 1);
							func_46(uParam4, 70, 1);
							func_46(uParam4, 71, 1);
							func_46(uParam4, 72, 1);
							func_46(uParam4, 21, 1);
							func_46(uParam4, 22, 1);
							func_46(uParam4, 23, 1);
							func_46(uParam4, 24, 1);
							func_46(uParam4, 25, 1);
							func_46(uParam4, 26, 1);
							func_46(uParam4, 36, 1);
							func_46(uParam4, 46, 1);
							func_46(uParam4, 38, 1);
							func_46(uParam4, 29, 1);
							func_46(uParam4, 28, 1);
							func_46(uParam4, 43, 1);
							func_46(uParam4, 92, 1);
							func_46(uParam4, 93, 1);
							func_46(uParam4, 94, 1);
							func_46(uParam4, 96, 1);
							func_46(uParam4, 97, 1);
							func_46(uParam4, 98, 1);
							func_46(uParam4, 100, 1);
							func_46(uParam4, 103, 1);
							func_46(uParam4, 104, 1);
							func_46(uParam4, 105, 1);
							func_46(uParam4, 106, 1);
							func_46(uParam4, 107, 1);
							func_46(uParam4, 108, 1);
							func_44(uParam3, 67, 1);
							func_44(uParam3, 68, 1);
							func_44(uParam3, 69, 1);
							func_44(uParam3, 70, 1);
							func_44(uParam3, 71, 1);
							func_44(uParam3, 72, 1);
							func_44(uParam3, 73, 1);
							func_44(uParam3, 74, 1);
							func_44(uParam3, 78, 1);
							func_44(uParam3, 79, 1);
							func_44(uParam3, 80, 1);
							func_44(uParam3, 81, 1);
							func_44(uParam3, 82, 1);
							func_44(uParam3, 91, 1);
							func_44(uParam3, 92, 1);
							func_42(uParam2, 66, 1);
							func_42(uParam2, 67, 1);
							func_42(uParam2, 68, 1);
							func_42(uParam2, 69, 1);
							func_42(uParam2, 70, 1);
							func_42(uParam2, 71, 1);
							func_42(uParam2, 72, 1);
							func_42(uParam2, 73, 1);
							func_42(uParam2, 77, 1);
							func_42(uParam2, 78, 1);
							func_42(uParam2, 79, 1);
							func_42(uParam2, 80, 1);
							func_42(uParam2, 81, 1);
							func_42(uParam2, 90, 1);
							func_42(uParam2, 91, 1);
							break;
						
						case 2:
							func_44(uParam3, 16, 1);
							func_44(uParam3, 48, 1);
							func_44(uParam3, 49, 1);
							func_44(uParam3, 18, 1);
							func_44(uParam3, 50, 1);
							func_44(uParam3, 51, 1);
							func_44(uParam3, 52, 1);
							func_44(uParam3, 53, 1);
							func_44(uParam3, 62, 1);
							func_44(uParam3, 38, 1);
							func_44(uParam3, 47, 1);
							func_44(uParam3, 111, 1);
							func_42(uParam2, 16, 1);
							func_42(uParam2, 47, 1);
							func_42(uParam2, 48, 1);
							func_42(uParam2, 18, 1);
							func_42(uParam2, 49, 1);
							func_42(uParam2, 50, 1);
							func_42(uParam2, 51, 1);
							func_42(uParam2, 52, 1);
							func_42(uParam2, 62, 1);
							func_42(uParam2, 37, 1);
							func_42(uParam2, 46, 1);
							func_42(uParam2, 110, 1);
							func_46(uParam4, 1, 1);
							func_46(uParam4, 2, 1);
							func_46(uParam4, 3, 1);
							func_46(uParam4, 5, 1);
							func_46(uParam4, 6, 1);
							func_46(uParam4, 7, 1);
							func_46(uParam4, 8, 1);
							func_46(uParam4, 9, 1);
							func_46(uParam4, 10, 1);
							func_46(uParam4, 13, 1);
							func_46(uParam4, 18, 1);
							func_46(uParam4, 19, 1);
							func_46(uParam4, 20, 1);
							func_46(uParam4, 59, 1);
							func_46(uParam4, 60, 1);
							func_46(uParam4, 61, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 63, 1);
							func_46(uParam4, 64, 1);
							func_46(uParam4, 65, 1);
							func_46(uParam4, 66, 1);
							func_46(uParam4, 67, 1);
							func_46(uParam4, 68, 1);
							func_46(uParam4, 69, 1);
							func_46(uParam4, 70, 1);
							func_46(uParam4, 71, 1);
							func_46(uParam4, 72, 1);
							func_46(uParam4, 21, 1);
							func_46(uParam4, 22, 1);
							func_46(uParam4, 23, 1);
							func_46(uParam4, 24, 1);
							func_46(uParam4, 25, 1);
							func_46(uParam4, 26, 1);
							func_46(uParam4, 36, 1);
							func_46(uParam4, 46, 1);
							func_46(uParam4, 38, 1);
							func_46(uParam4, 29, 1);
							func_46(uParam4, 28, 1);
							func_46(uParam4, 92, 1);
							func_46(uParam4, 93, 1);
							func_46(uParam4, 94, 1);
							func_46(uParam4, 96, 1);
							func_46(uParam4, 97, 1);
							func_46(uParam4, 98, 1);
							func_46(uParam4, 100, 1);
							func_46(uParam4, 103, 1);
							func_46(uParam4, 104, 1);
							func_46(uParam4, 105, 1);
							func_46(uParam4, 106, 1);
							func_46(uParam4, 107, 1);
							func_46(uParam4, 108, 1);
							func_44(uParam3, 67, 1);
							func_44(uParam3, 68, 1);
							func_44(uParam3, 69, 1);
							func_44(uParam3, 70, 1);
							func_44(uParam3, 71, 1);
							func_44(uParam3, 72, 1);
							func_44(uParam3, 73, 1);
							func_44(uParam3, 74, 1);
							func_44(uParam3, 78, 1);
							func_44(uParam3, 79, 1);
							func_44(uParam3, 80, 1);
							func_44(uParam3, 81, 1);
							func_44(uParam3, 82, 1);
							func_44(uParam3, 91, 1);
							func_44(uParam3, 92, 1);
							func_42(uParam2, 66, 1);
							func_42(uParam2, 67, 1);
							func_42(uParam2, 68, 1);
							func_42(uParam2, 69, 1);
							func_42(uParam2, 70, 1);
							func_42(uParam2, 71, 1);
							func_42(uParam2, 72, 1);
							func_42(uParam2, 73, 1);
							func_42(uParam2, 77, 1);
							func_42(uParam2, 78, 1);
							func_42(uParam2, 79, 1);
							func_42(uParam2, 80, 1);
							func_42(uParam2, 81, 1);
							func_42(uParam2, 90, 1);
							func_42(uParam2, 91, 1);
							break;
					}
					break;
				
				case 19:
					switch (iParam5)
					{
						case 0:
							func_44(uParam3, 3, 1);
							func_44(uParam3, 7, 1);
							func_44(uParam3, 0, 1);
							func_44(uParam3, 12, 1);
							func_44(uParam3, 13, 1);
							func_44(uParam3, 15, 1);
							func_44(uParam3, 16, 1);
							func_44(uParam3, 48, 1);
							func_44(uParam3, 49, 1);
							func_44(uParam3, 17, 1);
							func_44(uParam3, 18, 1);
							func_44(uParam3, 50, 1);
							func_44(uParam3, 51, 1);
							func_44(uParam3, 52, 1);
							func_44(uParam3, 53, 1);
							func_44(uParam3, 62, 1);
							func_44(uParam3, 38, 1);
							func_44(uParam3, 47, 1);
							func_44(uParam3, 111, 1);
							func_44(uParam3, 20, 1);
							func_44(uParam3, 21, 1);
							func_44(uParam3, 25, 1);
							func_44(uParam3, 26, 1);
							func_44(uParam3, 27, 1);
							func_44(uParam3, 30, 1);
							func_44(uParam3, 31, 1);
							func_44(uParam3, 32, 1);
							func_44(uParam3, 33, 1);
							func_44(uParam3, 39, 1);
							func_44(uParam3, 37, 1);
							func_42(uParam2, 0, 1);
							func_42(uParam2, 2, 1);
							func_42(uParam2, 3, 1);
							func_42(uParam2, 4, 1);
							func_42(uParam2, 6, 1);
							func_42(uParam2, 7, 1);
							func_42(uParam2, 8, 1);
							func_42(uParam2, 11, 1);
							func_42(uParam2, 13, 1);
							func_42(uParam2, 15, 1);
							func_42(uParam2, 16, 1);
							func_42(uParam2, 47, 1);
							func_42(uParam2, 48, 1);
							func_42(uParam2, 17, 1);
							func_42(uParam2, 18, 1);
							func_42(uParam2, 49, 1);
							func_42(uParam2, 50, 1);
							func_42(uParam2, 51, 1);
							func_42(uParam2, 52, 1);
							func_42(uParam2, 62, 1);
							func_42(uParam2, 37, 1);
							func_42(uParam2, 46, 1);
							func_42(uParam2, 110, 1);
							func_42(uParam2, 19, 1);
							func_42(uParam2, 20, 1);
							func_42(uParam2, 21, 1);
							func_42(uParam2, 22, 1);
							func_42(uParam2, 54, 1);
							func_42(uParam2, 24, 1);
							func_42(uParam2, 26, 1);
							func_42(uParam2, 27, 1);
							func_42(uParam2, 28, 1);
							func_42(uParam2, 30, 1);
							func_42(uParam2, 31, 1);
							func_42(uParam2, 32, 1);
							func_42(uParam2, 38, 1);
							func_42(uParam2, 36, 1);
							func_46(uParam4, 1, 1);
							func_46(uParam4, 2, 1);
							func_46(uParam4, 3, 1);
							func_46(uParam4, 4, 1);
							func_46(uParam4, 14, 1);
							func_46(uParam4, 15, 1);
							func_46(uParam4, 16, 1);
							func_46(uParam4, 8, 1);
							func_46(uParam4, 9, 1);
							func_46(uParam4, 10, 1);
							func_46(uParam4, 13, 1);
							func_46(uParam4, 17, 1);
							func_46(uParam4, 18, 1);
							func_46(uParam4, 19, 1);
							func_46(uParam4, 20, 1);
							func_46(uParam4, 59, 1);
							func_46(uParam4, 60, 1);
							func_46(uParam4, 61, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 63, 1);
							func_46(uParam4, 64, 1);
							func_46(uParam4, 65, 1);
							func_46(uParam4, 66, 1);
							func_46(uParam4, 67, 1);
							func_46(uParam4, 68, 1);
							func_46(uParam4, 69, 1);
							func_46(uParam4, 70, 1);
							func_46(uParam4, 71, 1);
							func_46(uParam4, 72, 1);
							func_46(uParam4, 21, 1);
							func_46(uParam4, 22, 1);
							func_46(uParam4, 23, 1);
							func_46(uParam4, 24, 1);
							func_46(uParam4, 25, 1);
							func_46(uParam4, 26, 1);
							func_46(uParam4, 36, 1);
							func_46(uParam4, 46, 1);
							func_46(uParam4, 38, 1);
							func_46(uParam4, 29, 1);
							func_46(uParam4, 28, 1);
							func_46(uParam4, 31, 1);
							func_46(uParam4, 33, 1);
							func_46(uParam4, 34, 1);
							func_46(uParam4, 43, 1);
							func_46(uParam4, 92, 1);
							func_46(uParam4, 93, 1);
							func_46(uParam4, 94, 1);
							func_46(uParam4, 96, 1);
							func_46(uParam4, 97, 1);
							func_46(uParam4, 98, 1);
							func_46(uParam4, 100, 1);
							func_46(uParam4, 103, 1);
							func_46(uParam4, 104, 1);
							func_46(uParam4, 105, 1);
							func_46(uParam4, 106, 1);
							func_46(uParam4, 107, 1);
							func_46(uParam4, 108, 1);
							func_44(uParam3, 65, 1);
							func_44(uParam3, 67, 1);
							func_44(uParam3, 68, 1);
							func_44(uParam3, 69, 1);
							func_44(uParam3, 70, 1);
							func_44(uParam3, 71, 1);
							func_44(uParam3, 72, 1);
							func_44(uParam3, 73, 1);
							func_44(uParam3, 74, 1);
							func_44(uParam3, 75, 1);
							func_44(uParam3, 76, 1);
							func_44(uParam3, 77, 1);
							func_44(uParam3, 78, 1);
							func_44(uParam3, 79, 1);
							func_44(uParam3, 80, 1);
							func_44(uParam3, 81, 1);
							func_44(uParam3, 82, 1);
							func_44(uParam3, 91, 1);
							func_44(uParam3, 92, 1);
							func_42(uParam2, 64, 1);
							func_42(uParam2, 65, 1);
							func_42(uParam2, 66, 1);
							func_42(uParam2, 67, 1);
							func_42(uParam2, 68, 1);
							func_42(uParam2, 69, 1);
							func_42(uParam2, 70, 1);
							func_42(uParam2, 71, 1);
							func_42(uParam2, 72, 1);
							func_42(uParam2, 73, 1);
							func_42(uParam2, 74, 1);
							func_42(uParam2, 75, 1);
							func_42(uParam2, 77, 1);
							func_42(uParam2, 78, 1);
							func_42(uParam2, 79, 1);
							func_42(uParam2, 80, 1);
							func_42(uParam2, 81, 1);
							func_42(uParam2, 90, 1);
							func_42(uParam2, 91, 1);
							break;
						
						case 1:
							func_44(uParam3, 3, 1);
							func_44(uParam3, 7, 1);
							func_44(uParam3, 0, 1);
							func_44(uParam3, 12, 1);
							func_44(uParam3, 13, 1);
							func_44(uParam3, 15, 1);
							func_44(uParam3, 16, 1);
							func_44(uParam3, 48, 1);
							func_44(uParam3, 49, 1);
							func_44(uParam3, 17, 1);
							func_44(uParam3, 18, 1);
							func_44(uParam3, 50, 1);
							func_44(uParam3, 51, 1);
							func_44(uParam3, 52, 1);
							func_44(uParam3, 53, 1);
							func_44(uParam3, 62, 1);
							func_44(uParam3, 38, 1);
							func_44(uParam3, 47, 1);
							func_44(uParam3, 111, 1);
							func_44(uParam3, 20, 1);
							func_44(uParam3, 21, 1);
							func_44(uParam3, 25, 1);
							func_44(uParam3, 26, 1);
							func_44(uParam3, 27, 1);
							func_44(uParam3, 30, 1);
							func_44(uParam3, 31, 1);
							func_44(uParam3, 32, 1);
							func_44(uParam3, 33, 1);
							func_44(uParam3, 39, 1);
							func_42(uParam2, 0, 1);
							func_42(uParam2, 2, 1);
							func_42(uParam2, 3, 1);
							func_42(uParam2, 4, 1);
							func_42(uParam2, 6, 1);
							func_42(uParam2, 7, 1);
							func_42(uParam2, 11, 1);
							func_42(uParam2, 13, 1);
							func_42(uParam2, 15, 1);
							func_42(uParam2, 16, 1);
							func_42(uParam2, 47, 1);
							func_42(uParam2, 48, 1);
							func_42(uParam2, 17, 1);
							func_42(uParam2, 18, 1);
							func_42(uParam2, 49, 1);
							func_42(uParam2, 50, 1);
							func_42(uParam2, 51, 1);
							func_42(uParam2, 52, 1);
							func_42(uParam2, 62, 1);
							func_42(uParam2, 37, 1);
							func_42(uParam2, 46, 1);
							func_42(uParam2, 110, 1);
							func_42(uParam2, 19, 1);
							func_42(uParam2, 20, 1);
							func_42(uParam2, 21, 1);
							func_42(uParam2, 22, 1);
							func_42(uParam2, 54, 1);
							func_42(uParam2, 24, 1);
							func_42(uParam2, 38, 1);
							func_46(uParam4, 1, 1);
							func_46(uParam4, 2, 1);
							func_46(uParam4, 3, 1);
							func_46(uParam4, 4, 1);
							func_46(uParam4, 14, 1);
							func_46(uParam4, 15, 1);
							func_46(uParam4, 16, 1);
							func_46(uParam4, 6, 1);
							func_46(uParam4, 7, 1);
							func_46(uParam4, 8, 1);
							func_46(uParam4, 9, 1);
							func_46(uParam4, 10, 1);
							func_46(uParam4, 13, 1);
							func_46(uParam4, 17, 1);
							func_46(uParam4, 18, 1);
							func_46(uParam4, 19, 1);
							func_46(uParam4, 20, 1);
							func_46(uParam4, 59, 1);
							func_46(uParam4, 60, 1);
							func_46(uParam4, 61, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 63, 1);
							func_46(uParam4, 64, 1);
							func_46(uParam4, 65, 1);
							func_46(uParam4, 66, 1);
							func_46(uParam4, 67, 1);
							func_46(uParam4, 68, 1);
							func_46(uParam4, 69, 1);
							func_46(uParam4, 70, 1);
							func_46(uParam4, 71, 1);
							func_46(uParam4, 72, 1);
							func_46(uParam4, 21, 1);
							func_46(uParam4, 22, 1);
							func_46(uParam4, 23, 1);
							func_46(uParam4, 24, 1);
							func_46(uParam4, 25, 1);
							func_46(uParam4, 26, 1);
							func_46(uParam4, 36, 1);
							func_46(uParam4, 46, 1);
							func_46(uParam4, 38, 1);
							func_46(uParam4, 29, 1);
							func_46(uParam4, 28, 1);
							func_46(uParam4, 31, 1);
							func_46(uParam4, 33, 1);
							func_46(uParam4, 34, 1);
							func_46(uParam4, 43, 1);
							func_46(uParam4, 92, 1);
							func_46(uParam4, 93, 1);
							func_46(uParam4, 94, 1);
							func_46(uParam4, 96, 1);
							func_46(uParam4, 97, 1);
							func_46(uParam4, 98, 1);
							func_46(uParam4, 100, 1);
							func_46(uParam4, 103, 1);
							func_46(uParam4, 104, 1);
							func_46(uParam4, 105, 1);
							func_46(uParam4, 106, 1);
							func_46(uParam4, 107, 1);
							func_46(uParam4, 108, 1);
							func_44(uParam3, 65, 1);
							func_44(uParam3, 67, 1);
							func_44(uParam3, 68, 1);
							func_44(uParam3, 69, 1);
							func_44(uParam3, 70, 1);
							func_44(uParam3, 71, 1);
							func_44(uParam3, 72, 1);
							func_44(uParam3, 73, 1);
							func_44(uParam3, 74, 1);
							func_44(uParam3, 75, 1);
							func_44(uParam3, 76, 1);
							func_44(uParam3, 77, 1);
							func_44(uParam3, 78, 1);
							func_44(uParam3, 79, 1);
							func_44(uParam3, 80, 1);
							func_44(uParam3, 81, 1);
							func_44(uParam3, 82, 1);
							func_44(uParam3, 91, 1);
							func_44(uParam3, 92, 1);
							func_42(uParam2, 64, 1);
							func_42(uParam2, 65, 1);
							func_42(uParam2, 66, 1);
							func_42(uParam2, 67, 1);
							func_42(uParam2, 68, 1);
							func_42(uParam2, 69, 1);
							func_42(uParam2, 70, 1);
							func_42(uParam2, 71, 1);
							func_42(uParam2, 72, 1);
							func_42(uParam2, 73, 1);
							func_42(uParam2, 74, 1);
							func_42(uParam2, 75, 1);
							func_42(uParam2, 77, 1);
							func_42(uParam2, 78, 1);
							func_42(uParam2, 79, 1);
							func_42(uParam2, 80, 1);
							func_42(uParam2, 81, 1);
							func_42(uParam2, 90, 1);
							func_42(uParam2, 91, 1);
							break;
						
						case 2:
							func_44(uParam3, 1, 1);
							func_44(uParam3, 3, 1);
							func_44(uParam3, 4, 1);
							func_44(uParam3, 5, 1);
							func_44(uParam3, 7, 1);
							func_44(uParam3, 10, 1);
							func_44(uParam3, 54, 1);
							func_44(uParam3, 55, 1);
							func_44(uParam3, 56, 1);
							func_44(uParam3, 0, 1);
							func_44(uParam3, 12, 1);
							func_44(uParam3, 13, 1);
							func_44(uParam3, 15, 1);
							func_44(uParam3, 16, 1);
							func_44(uParam3, 48, 1);
							func_44(uParam3, 49, 1);
							func_44(uParam3, 17, 1);
							func_44(uParam3, 18, 1);
							func_44(uParam3, 50, 1);
							func_44(uParam3, 51, 1);
							func_44(uParam3, 52, 1);
							func_44(uParam3, 53, 1);
							func_44(uParam3, 62, 1);
							func_44(uParam3, 38, 1);
							func_44(uParam3, 47, 1);
							func_44(uParam3, 111, 1);
							func_44(uParam3, 20, 1);
							func_44(uParam3, 21, 1);
							func_44(uParam3, 25, 1);
							func_44(uParam3, 26, 1);
							func_44(uParam3, 27, 1);
							func_44(uParam3, 30, 1);
							func_44(uParam3, 31, 1);
							func_44(uParam3, 32, 1);
							func_44(uParam3, 33, 1);
							func_44(uParam3, 37, 1);
							func_44(uParam3, 39, 1);
							func_42(uParam2, 0, 1);
							func_42(uParam2, 1, 1);
							func_42(uParam2, 2, 1);
							func_42(uParam2, 3, 1);
							func_42(uParam2, 4, 1);
							func_42(uParam2, 5, 1);
							func_42(uParam2, 6, 1);
							func_42(uParam2, 7, 1);
							func_42(uParam2, 8, 1);
							func_42(uParam2, 9, 1);
							func_42(uParam2, 10, 1);
							func_42(uParam2, 53, 1);
							func_42(uParam2, 56, 1);
							func_42(uParam2, 55, 1);
							func_42(uParam2, 11, 1);
							func_42(uParam2, 12, 1);
							func_42(uParam2, 13, 1);
							func_42(uParam2, 14, 1);
							func_42(uParam2, 15, 1);
							func_42(uParam2, 16, 1);
							func_42(uParam2, 47, 1);
							func_42(uParam2, 48, 1);
							func_42(uParam2, 17, 1);
							func_42(uParam2, 18, 1);
							func_42(uParam2, 49, 1);
							func_42(uParam2, 50, 1);
							func_42(uParam2, 51, 1);
							func_42(uParam2, 52, 1);
							func_42(uParam2, 62, 1);
							func_42(uParam2, 37, 1);
							func_42(uParam2, 46, 1);
							func_42(uParam2, 110, 1);
							func_42(uParam2, 19, 1);
							func_42(uParam2, 20, 1);
							func_42(uParam2, 21, 1);
							func_42(uParam2, 22, 1);
							func_42(uParam2, 54, 1);
							func_42(uParam2, 23, 1);
							func_42(uParam2, 24, 1);
							func_42(uParam2, 26, 1);
							func_42(uParam2, 27, 1);
							func_42(uParam2, 28, 1);
							func_42(uParam2, 29, 1);
							func_42(uParam2, 30, 1);
							func_42(uParam2, 31, 1);
							func_42(uParam2, 32, 1);
							func_42(uParam2, 33, 1);
							func_42(uParam2, 36, 1);
							func_42(uParam2, 38, 1);
							func_42(uParam2, 55, 1);
							func_46(uParam4, 1, 1);
							func_46(uParam4, 2, 1);
							func_46(uParam4, 3, 1);
							func_46(uParam4, 3, 1);
							func_46(uParam4, 4, 1);
							func_46(uParam4, 14, 1);
							func_46(uParam4, 15, 1);
							func_46(uParam4, 16, 1);
							func_46(uParam4, 6, 1);
							func_46(uParam4, 8, 1);
							func_46(uParam4, 9, 1);
							func_46(uParam4, 10, 1);
							func_46(uParam4, 12, 1);
							func_46(uParam4, 13, 1);
							func_46(uParam4, 17, 1);
							func_46(uParam4, 18, 1);
							func_46(uParam4, 19, 1);
							func_46(uParam4, 20, 1);
							func_46(uParam4, 59, 1);
							func_46(uParam4, 60, 1);
							func_46(uParam4, 61, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 63, 1);
							func_46(uParam4, 64, 1);
							func_46(uParam4, 65, 1);
							func_46(uParam4, 66, 1);
							func_46(uParam4, 67, 1);
							func_46(uParam4, 68, 1);
							func_46(uParam4, 69, 1);
							func_46(uParam4, 70, 1);
							func_46(uParam4, 71, 1);
							func_46(uParam4, 72, 1);
							func_46(uParam4, 21, 1);
							func_46(uParam4, 22, 1);
							func_46(uParam4, 23, 1);
							func_46(uParam4, 24, 1);
							func_46(uParam4, 25, 1);
							func_46(uParam4, 26, 1);
							func_46(uParam4, 36, 1);
							func_46(uParam4, 46, 1);
							func_46(uParam4, 38, 1);
							func_46(uParam4, 29, 1);
							func_46(uParam4, 28, 1);
							func_46(uParam4, 31, 1);
							func_46(uParam4, 33, 1);
							func_46(uParam4, 34, 1);
							func_46(uParam4, 32, 1);
							func_46(uParam4, 92, 1);
							func_46(uParam4, 93, 1);
							func_46(uParam4, 94, 1);
							func_46(uParam4, 96, 1);
							func_46(uParam4, 97, 1);
							func_46(uParam4, 98, 1);
							func_46(uParam4, 100, 1);
							func_46(uParam4, 103, 1);
							func_46(uParam4, 104, 1);
							func_46(uParam4, 105, 1);
							func_46(uParam4, 106, 1);
							func_46(uParam4, 107, 1);
							func_46(uParam4, 108, 1);
							func_44(uParam3, 65, 1);
							func_44(uParam3, 67, 1);
							func_44(uParam3, 68, 1);
							func_44(uParam3, 69, 1);
							func_44(uParam3, 70, 1);
							func_44(uParam3, 71, 1);
							func_44(uParam3, 72, 1);
							func_44(uParam3, 73, 1);
							func_44(uParam3, 74, 1);
							func_44(uParam3, 75, 1);
							func_44(uParam3, 76, 1);
							func_44(uParam3, 77, 1);
							func_44(uParam3, 78, 1);
							func_44(uParam3, 79, 1);
							func_44(uParam3, 80, 1);
							func_44(uParam3, 81, 1);
							func_44(uParam3, 82, 1);
							func_44(uParam3, 91, 1);
							func_44(uParam3, 92, 1);
							func_42(uParam2, 64, 1);
							func_42(uParam2, 65, 1);
							func_42(uParam2, 66, 1);
							func_42(uParam2, 67, 1);
							func_42(uParam2, 68, 1);
							func_42(uParam2, 69, 1);
							func_42(uParam2, 70, 1);
							func_42(uParam2, 71, 1);
							func_42(uParam2, 72, 1);
							func_42(uParam2, 73, 1);
							func_42(uParam2, 74, 1);
							func_42(uParam2, 75, 1);
							func_42(uParam2, 77, 1);
							func_42(uParam2, 78, 1);
							func_42(uParam2, 79, 1);
							func_42(uParam2, 80, 1);
							func_42(uParam2, 81, 1);
							func_42(uParam2, 90, 1);
							func_42(uParam2, 91, 1);
							break;
					}
					break;
				
				case 18:
					switch (iParam5)
					{
						case 0:
							break;
						
						case 1:
							func_42(uParam2, 2, 1);
							func_42(uParam2, 20, 1);
							break;
						
						case 2:
							break;
					}
					break;
				
				case 0:
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					break;
				
				case 9:
				case 11:
				case 13:
				case 15:
				case 19:
				case 23:
				case 26:
				case 30:
				case 34:
				case 20:
				case 22:
					func_40(2, 58, uParam2, uParam3, uParam4, 0, 0);
					break;
				
				case 32:
					func_40(2, 59, uParam2, uParam3, uParam4, 0, 0);
					break;
				
				case 17:
				case 27:
				case 31:
					break;
			}
			break;
	}
}

void func_41(var uParam0, var uParam1, var uParam2)
{
	if ((*uParam0)[0] == 0 || (*uParam1)[0] == 0)
	{
	}
	func_46(uParam2, 124, 1);
	func_46(uParam2, 125, 1);
	func_46(uParam2, 126, 1);
	func_46(uParam2, 127, 1);
	func_46(uParam2, 128, 1);
	func_46(uParam2, 129, 1);
	func_46(uParam2, 130, 1);
	func_46(uParam2, 131, 1);
	func_46(uParam2, 132, 1);
	func_46(uParam2, 133, 1);
	func_46(uParam2, 136, 1);
	func_46(uParam2, 138, 1);
	func_46(uParam2, 139, 1);
	func_46(uParam2, 143, 1);
	func_46(uParam2, 144, 1);
	func_46(uParam2, 145, 1);
	func_46(uParam2, 147, 1);
}

void func_42(var uParam0, int iParam1, bool bParam2)
{
	func_43(uParam0, iParam1, bParam2);
}

void func_43(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iParam1) / 32f));
	if (!iVar0 < *uParam0)
	{
		return;
	}
	if (bParam2)
	{
		unk_0xBE20AB8238688965(uParam0[iVar0], (iParam1 - iVar0 * 32));
	}
	else
	{
		VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0[iVar0], (iParam1 - iVar0 * 32));
	}
}

void func_44(var uParam0, int iParam1, bool bParam2)
{
	func_43(uParam0, iParam1, bParam2);
}

void func_45(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, bool bParam6)
{
	func_46(uParam4, 91, 1);
	switch (iParam0)
	{
		case 1:
			switch (iParam1)
			{
				case 0:
					switch (iParam5)
					{
						case 0:
							func_44(uParam3, 38, 1);
							func_44(uParam3, 47, 1);
							func_44(uParam3, 111, 1);
							func_42(uParam2, 37, 1);
							func_42(uParam2, 46, 1);
							func_42(uParam2, 110, 1);
							break;
						
						case 1:
							func_44(uParam3, 38, 1);
							func_44(uParam3, 47, 1);
							func_44(uParam3, 111, 1);
							func_42(uParam2, 37, 1);
							func_42(uParam2, 46, 1);
							func_42(uParam2, 110, 1);
							break;
						
						case 2:
							func_44(uParam3, 38, 1);
							func_44(uParam3, 47, 1);
							func_44(uParam3, 111, 1);
							func_42(uParam2, 37, 1);
							func_42(uParam2, 46, 1);
							func_42(uParam2, 110, 1);
							break;
					}
					break;
			}
			break;
		
		case 0:
			switch (iParam1)
			{
				case 6:
				case 26:
					if (bParam6)
					{
						func_44(uParam3, 16, 1);
						func_44(uParam3, 48, 1);
						func_44(uParam3, 49, 1);
						func_44(uParam3, 18, 1);
						func_44(uParam3, 50, 1);
						func_44(uParam3, 51, 1);
						func_44(uParam3, 52, 1);
						func_44(uParam3, 53, 1);
						func_44(uParam3, 38, 1);
						func_44(uParam3, 47, 1);
						func_44(uParam3, 111, 1);
						func_44(uParam3, 62, 1);
						func_42(uParam2, 16, 1);
						func_42(uParam2, 47, 1);
						func_42(uParam2, 48, 1);
						func_42(uParam2, 18, 1);
						func_42(uParam2, 37, 1);
						func_42(uParam2, 46, 1);
						func_42(uParam2, 110, 1);
					}
					func_46(uParam4, 3, 1);
					func_46(uParam4, 4, 1);
					func_46(uParam4, 5, 1);
					func_46(uParam4, 6, 1);
					func_46(uParam4, 7, 1);
					func_46(uParam4, 8, 1);
					func_46(uParam4, 9, 1);
					func_46(uParam4, 12, 1);
					func_46(uParam4, 14, 1);
					func_46(uParam4, 15, 1);
					func_46(uParam4, 16, 1);
					func_46(uParam4, 17, 1);
					func_46(uParam4, 18, 1);
					func_46(uParam4, 19, 1);
					func_46(uParam4, 20, 1);
					func_46(uParam4, 59, 1);
					func_46(uParam4, 60, 1);
					func_46(uParam4, 61, 1);
					func_46(uParam4, 62, 1);
					func_46(uParam4, 62, 1);
					func_46(uParam4, 63, 1);
					func_46(uParam4, 64, 1);
					func_46(uParam4, 65, 1);
					func_46(uParam4, 66, 1);
					func_46(uParam4, 67, 1);
					func_46(uParam4, 68, 1);
					func_46(uParam4, 69, 1);
					func_46(uParam4, 70, 1);
					func_46(uParam4, 71, 1);
					func_46(uParam4, 72, 1);
					func_46(uParam4, 21, 1);
					func_46(uParam4, 22, 1);
					func_46(uParam4, 23, 1);
					func_46(uParam4, 24, 1);
					func_46(uParam4, 25, 1);
					func_46(uParam4, 26, 1);
					func_46(uParam4, 36, 1);
					func_46(uParam4, 46, 1);
					func_46(uParam4, 38, 1);
					func_46(uParam4, 28, 1);
					func_46(uParam4, 10, 1);
					func_46(uParam4, 33, 1);
					func_46(uParam4, 92, 1);
					func_46(uParam4, 93, 1);
					func_46(uParam4, 94, 1);
					func_46(uParam4, 96, 1);
					func_46(uParam4, 97, 1);
					func_46(uParam4, 98, 1);
					func_46(uParam4, 100, 1);
					func_46(uParam4, 103, 1);
					func_46(uParam4, 104, 1);
					func_46(uParam4, 105, 1);
					func_46(uParam4, 106, 1);
					func_46(uParam4, 107, 1);
					func_46(uParam4, 108, 1);
					func_46(uParam4, 110, 1);
					func_46(uParam4, 112, 1);
					func_46(uParam4, 115, 1);
					func_46(uParam4, 116, 1);
					break;
				
				case 1:
					if (bParam6)
					{
						func_44(uParam3, 16, 1);
						func_44(uParam3, 48, 1);
						func_44(uParam3, 49, 1);
						func_44(uParam3, 18, 1);
						func_44(uParam3, 50, 1);
						func_44(uParam3, 51, 1);
						func_44(uParam3, 52, 1);
						func_44(uParam3, 53, 1);
						func_44(uParam3, 38, 1);
						func_44(uParam3, 47, 1);
						func_44(uParam3, 111, 1);
						func_44(uParam3, 62, 1);
						func_42(uParam2, 18, 1);
						func_42(uParam2, 49, 1);
						func_42(uParam2, 50, 1);
						func_42(uParam2, 51, 1);
						func_42(uParam2, 52, 1);
						func_42(uParam2, 62, 1);
						func_42(uParam2, 37, 1);
						func_42(uParam2, 46, 1);
						func_42(uParam2, 110, 1);
					}
					func_46(uParam4, 9, 1);
					func_46(uParam4, 12, 1);
					func_46(uParam4, 13, 1);
					func_46(uParam4, 17, 1);
					func_46(uParam4, 18, 1);
					func_46(uParam4, 19, 1);
					func_46(uParam4, 20, 1);
					func_46(uParam4, 59, 1);
					func_46(uParam4, 60, 1);
					func_46(uParam4, 61, 1);
					func_46(uParam4, 62, 1);
					func_46(uParam4, 62, 1);
					func_46(uParam4, 63, 1);
					func_46(uParam4, 64, 1);
					func_46(uParam4, 65, 1);
					func_46(uParam4, 66, 1);
					func_46(uParam4, 67, 1);
					func_46(uParam4, 68, 1);
					func_46(uParam4, 69, 1);
					func_46(uParam4, 70, 1);
					func_46(uParam4, 71, 1);
					func_46(uParam4, 72, 1);
					func_46(uParam4, 21, 1);
					func_46(uParam4, 22, 1);
					func_46(uParam4, 23, 1);
					func_46(uParam4, 24, 1);
					func_46(uParam4, 25, 1);
					func_46(uParam4, 26, 1);
					func_46(uParam4, 36, 1);
					func_46(uParam4, 46, 1);
					func_46(uParam4, 38, 1);
					func_46(uParam4, 29, 1);
					func_46(uParam4, 28, 1);
					func_46(uParam4, 8, 1);
					func_46(uParam4, 10, 1);
					func_46(uParam4, 31, 1);
					func_46(uParam4, 33, 1);
					func_46(uParam4, 34, 1);
					func_46(uParam4, 92, 1);
					func_46(uParam4, 93, 1);
					func_46(uParam4, 94, 1);
					func_46(uParam4, 96, 1);
					func_46(uParam4, 97, 1);
					func_46(uParam4, 98, 1);
					func_46(uParam4, 100, 1);
					func_46(uParam4, 103, 1);
					func_46(uParam4, 104, 1);
					func_46(uParam4, 105, 1);
					func_46(uParam4, 106, 1);
					func_46(uParam4, 107, 1);
					func_46(uParam4, 108, 1);
					break;
				
				case 10:
					func_46(uParam4, 28, 1);
					break;
				
				case 12:
					if (bParam6)
					{
						func_44(uParam3, 3, 1);
						func_44(uParam3, 4, 1);
						func_44(uParam3, 6, 1);
						func_44(uParam3, 10, 1);
						func_44(uParam3, 54, 1);
						func_44(uParam3, 55, 1);
						func_44(uParam3, 56, 1);
						func_44(uParam3, 13, 1);
						func_44(uParam3, 16, 1);
						func_44(uParam3, 48, 1);
						func_44(uParam3, 49, 1);
						func_44(uParam3, 18, 1);
						func_44(uParam3, 50, 1);
						func_44(uParam3, 51, 1);
						func_44(uParam3, 52, 1);
						func_44(uParam3, 53, 1);
						func_44(uParam3, 38, 1);
						func_44(uParam3, 47, 1);
						func_44(uParam3, 111, 1);
						func_44(uParam3, 62, 1);
						func_44(uParam3, 20, 1);
						func_44(uParam3, 26, 1);
						func_44(uParam3, 27, 1);
						func_44(uParam3, 32, 1);
						func_44(uParam3, 33, 1);
						func_44(uParam3, 37, 1);
						func_44(uParam3, 39, 1);
						func_44(uParam3, 106, 1);
						func_44(uParam3, 114, 1);
						func_44(uParam3, 116, 1);
						func_44(uParam3, 117, 1);
						func_44(uParam3, 118, 1);
						func_44(uParam3, 119, 1);
						func_42(uParam2, 3, 1);
						func_42(uParam2, 4, 1);
						func_42(uParam2, 6, 1);
						func_42(uParam2, 8, 1);
						func_42(uParam2, 9, 1);
						func_42(uParam2, 10, 1);
						func_42(uParam2, 53, 1);
						func_42(uParam2, 56, 1);
						func_42(uParam2, 55, 1);
						func_42(uParam2, 13, 1);
						func_42(uParam2, 18, 1);
						func_42(uParam2, 49, 1);
						func_42(uParam2, 50, 1);
						func_42(uParam2, 51, 1);
						func_42(uParam2, 52, 1);
						func_42(uParam2, 62, 1);
						func_42(uParam2, 37, 1);
						func_42(uParam2, 46, 1);
						func_42(uParam2, 110, 1);
						func_42(uParam2, 21, 1);
						func_42(uParam2, 26, 1);
						func_42(uParam2, 27, 1);
						func_42(uParam2, 28, 1);
						func_42(uParam2, 32, 1);
						func_42(uParam2, 36, 1);
						func_42(uParam2, 38, 1);
						func_42(uParam2, 55, 1);
						func_42(uParam2, 14, 1);
						func_42(uParam2, 105, 1);
						func_42(uParam2, 113, 1);
						func_42(uParam2, 114, 1);
						func_42(uParam2, 115, 1);
						func_42(uParam2, 116, 1);
						func_42(uParam2, 117, 1);
					}
					func_46(uParam4, 2, 1);
					func_46(uParam4, 3, 1);
					func_46(uParam4, 4, 1);
					func_46(uParam4, 14, 1);
					func_46(uParam4, 15, 1);
					func_46(uParam4, 16, 1);
					func_46(uParam4, 9, 1);
					func_46(uParam4, 10, 1);
					func_46(uParam4, 12, 1);
					func_46(uParam4, 13, 1);
					func_46(uParam4, 17, 1);
					func_46(uParam4, 18, 1);
					func_46(uParam4, 19, 1);
					func_46(uParam4, 20, 1);
					func_46(uParam4, 59, 1);
					func_46(uParam4, 60, 1);
					func_46(uParam4, 61, 1);
					func_46(uParam4, 62, 1);
					func_46(uParam4, 62, 1);
					func_46(uParam4, 63, 1);
					func_46(uParam4, 64, 1);
					func_46(uParam4, 65, 1);
					func_46(uParam4, 66, 1);
					func_46(uParam4, 67, 1);
					func_46(uParam4, 68, 1);
					func_46(uParam4, 69, 1);
					func_46(uParam4, 70, 1);
					func_46(uParam4, 71, 1);
					func_46(uParam4, 72, 1);
					func_46(uParam4, 21, 1);
					func_46(uParam4, 22, 1);
					func_46(uParam4, 23, 1);
					func_46(uParam4, 24, 1);
					func_46(uParam4, 25, 1);
					func_46(uParam4, 26, 1);
					func_46(uParam4, 36, 1);
					func_46(uParam4, 46, 1);
					func_46(uParam4, 38, 1);
					func_46(uParam4, 29, 1);
					func_46(uParam4, 28, 1);
					func_46(uParam4, 8, 1);
					func_46(uParam4, 31, 1);
					func_46(uParam4, 32, 1);
					func_46(uParam4, 33, 1);
					func_46(uParam4, 34, 1);
					func_46(uParam4, 92, 1);
					func_46(uParam4, 93, 1);
					func_46(uParam4, 94, 1);
					func_46(uParam4, 96, 1);
					func_46(uParam4, 97, 1);
					func_46(uParam4, 98, 1);
					func_46(uParam4, 100, 1);
					func_46(uParam4, 103, 1);
					func_46(uParam4, 104, 1);
					func_46(uParam4, 105, 1);
					func_46(uParam4, 106, 1);
					func_46(uParam4, 107, 1);
					func_46(uParam4, 108, 1);
					func_46(uParam4, 110, 1);
					func_46(uParam4, 112, 1);
					break;
				
				case 15:
					if (bParam6)
					{
						func_44(uParam3, 16, 1);
						func_44(uParam3, 48, 1);
						func_44(uParam3, 49, 1);
						func_44(uParam3, 18, 1);
						func_44(uParam3, 50, 1);
						func_44(uParam3, 51, 1);
						func_44(uParam3, 52, 1);
						func_44(uParam3, 53, 1);
						func_44(uParam3, 38, 1);
						func_44(uParam3, 47, 1);
						func_44(uParam3, 111, 1);
						func_44(uParam3, 62, 1);
						func_42(uParam2, 18, 1);
						func_42(uParam2, 49, 1);
						func_42(uParam2, 50, 1);
						func_42(uParam2, 51, 1);
						func_42(uParam2, 52, 1);
						func_42(uParam2, 62, 1);
						func_42(uParam2, 37, 1);
						func_42(uParam2, 46, 1);
						func_42(uParam2, 110, 1);
						func_42(uParam2, 19, 1);
					}
					func_46(uParam4, 3, 1);
					func_46(uParam4, 6, 1);
					func_46(uParam4, 8, 1);
					func_46(uParam4, 9, 1);
					func_46(uParam4, 10, 1);
					func_46(uParam4, 13, 1);
					func_46(uParam4, 17, 1);
					func_46(uParam4, 18, 1);
					func_46(uParam4, 19, 1);
					func_46(uParam4, 20, 1);
					func_46(uParam4, 59, 1);
					func_46(uParam4, 60, 1);
					func_46(uParam4, 61, 1);
					func_46(uParam4, 62, 1);
					func_46(uParam4, 62, 1);
					func_46(uParam4, 63, 1);
					func_46(uParam4, 64, 1);
					func_46(uParam4, 65, 1);
					func_46(uParam4, 66, 1);
					func_46(uParam4, 67, 1);
					func_46(uParam4, 68, 1);
					func_46(uParam4, 69, 1);
					func_46(uParam4, 70, 1);
					func_46(uParam4, 71, 1);
					func_46(uParam4, 72, 1);
					func_46(uParam4, 21, 1);
					func_46(uParam4, 22, 1);
					func_46(uParam4, 23, 1);
					func_46(uParam4, 24, 1);
					func_46(uParam4, 25, 1);
					func_46(uParam4, 26, 1);
					func_46(uParam4, 36, 1);
					func_46(uParam4, 46, 1);
					func_46(uParam4, 38, 1);
					func_46(uParam4, 29, 1);
					func_46(uParam4, 28, 1);
					func_46(uParam4, 31, 1);
					func_46(uParam4, 32, 1);
					func_46(uParam4, 33, 1);
					func_46(uParam4, 34, 1);
					func_46(uParam4, 92, 1);
					func_46(uParam4, 93, 1);
					func_46(uParam4, 94, 1);
					func_46(uParam4, 96, 1);
					func_46(uParam4, 97, 1);
					func_46(uParam4, 98, 1);
					func_46(uParam4, 100, 1);
					func_46(uParam4, 103, 1);
					func_46(uParam4, 104, 1);
					func_46(uParam4, 105, 1);
					func_46(uParam4, 106, 1);
					func_46(uParam4, 107, 1);
					func_46(uParam4, 108, 1);
					func_46(uParam4, 110, 1);
					func_46(uParam4, 112, 1);
					func_46(uParam4, 115, 1);
					func_46(uParam4, 116, 1);
					break;
				
				case 18:
					if (bParam6)
					{
						func_44(uParam3, 4, 1);
					}
					break;
				
				case 17:
					func_46(uParam4, 9, 1);
					break;
				
				case 19:
					if (bParam6)
					{
						func_44(uParam3, 16, 1);
						func_44(uParam3, 48, 1);
						func_44(uParam3, 49, 1);
						func_44(uParam3, 18, 1);
						func_44(uParam3, 50, 1);
						func_44(uParam3, 51, 1);
						func_44(uParam3, 52, 1);
						func_44(uParam3, 53, 1);
						func_44(uParam3, 38, 1);
						func_44(uParam3, 47, 1);
						func_44(uParam3, 111, 1);
						func_44(uParam3, 62, 1);
						func_42(uParam2, 16, 1);
						func_42(uParam2, 47, 1);
						func_42(uParam2, 48, 1);
						func_42(uParam2, 18, 1);
						func_42(uParam2, 49, 1);
						func_42(uParam2, 50, 1);
						func_42(uParam2, 51, 1);
						func_42(uParam2, 52, 1);
						func_42(uParam2, 62, 1);
						func_42(uParam2, 37, 1);
						func_42(uParam2, 46, 1);
						func_42(uParam2, 110, 1);
					}
					func_46(uParam4, 9, 1);
					func_46(uParam4, 10, 1);
					func_46(uParam4, 18, 1);
					func_46(uParam4, 19, 1);
					func_46(uParam4, 20, 1);
					func_46(uParam4, 59, 1);
					func_46(uParam4, 60, 1);
					func_46(uParam4, 61, 1);
					func_46(uParam4, 62, 1);
					func_46(uParam4, 62, 1);
					func_46(uParam4, 63, 1);
					func_46(uParam4, 64, 1);
					func_46(uParam4, 65, 1);
					func_46(uParam4, 66, 1);
					func_46(uParam4, 67, 1);
					func_46(uParam4, 68, 1);
					func_46(uParam4, 69, 1);
					func_46(uParam4, 70, 1);
					func_46(uParam4, 71, 1);
					func_46(uParam4, 72, 1);
					func_46(uParam4, 21, 1);
					func_46(uParam4, 22, 1);
					func_46(uParam4, 23, 1);
					func_46(uParam4, 24, 1);
					func_46(uParam4, 25, 1);
					func_46(uParam4, 26, 1);
					func_46(uParam4, 36, 1);
					func_46(uParam4, 46, 1);
					func_46(uParam4, 38, 1);
					func_46(uParam4, 29, 1);
					func_46(uParam4, 8, 1);
					func_46(uParam4, 92, 1);
					func_46(uParam4, 93, 1);
					func_46(uParam4, 94, 1);
					func_46(uParam4, 96, 1);
					func_46(uParam4, 97, 1);
					func_46(uParam4, 98, 1);
					func_46(uParam4, 100, 1);
					func_46(uParam4, 103, 1);
					func_46(uParam4, 104, 1);
					func_46(uParam4, 105, 1);
					func_46(uParam4, 106, 1);
					func_46(uParam4, 107, 1);
					func_46(uParam4, 108, 1);
					break;
				
				case 21:
					if (bParam6)
					{
						func_44(uParam3, 3, 1);
						func_44(uParam3, 7, 1);
						func_44(uParam3, 0, 1);
						func_44(uParam3, 12, 1);
						func_44(uParam3, 13, 1);
						func_44(uParam3, 15, 1);
						func_44(uParam3, 16, 1);
						func_44(uParam3, 48, 1);
						func_44(uParam3, 49, 1);
						func_44(uParam3, 17, 1);
						func_44(uParam3, 18, 1);
						func_44(uParam3, 50, 1);
						func_44(uParam3, 51, 1);
						func_44(uParam3, 52, 1);
						func_44(uParam3, 53, 1);
						func_44(uParam3, 38, 1);
						func_44(uParam3, 47, 1);
						func_44(uParam3, 111, 1);
						func_44(uParam3, 62, 1);
						func_44(uParam3, 20, 1);
						func_44(uParam3, 21, 1);
						func_44(uParam3, 25, 1);
						func_44(uParam3, 26, 1);
						func_44(uParam3, 27, 1);
						func_44(uParam3, 30, 1);
						func_44(uParam3, 31, 1);
						func_44(uParam3, 32, 1);
						func_44(uParam3, 33, 1);
						func_44(uParam3, 39, 1);
						func_44(uParam3, 37, 1);
						func_44(uParam3, 55, 1);
						func_42(uParam2, 0, 1);
						func_42(uParam2, 2, 1);
						func_42(uParam2, 3, 1);
						func_42(uParam2, 4, 1);
						func_42(uParam2, 6, 1);
						func_42(uParam2, 7, 1);
						func_42(uParam2, 8, 1);
						func_42(uParam2, 11, 1);
						func_42(uParam2, 13, 1);
						func_42(uParam2, 15, 1);
						func_42(uParam2, 16, 1);
						func_42(uParam2, 47, 1);
						func_42(uParam2, 48, 1);
						func_42(uParam2, 17, 1);
						func_42(uParam2, 18, 1);
						func_42(uParam2, 49, 1);
						func_42(uParam2, 50, 1);
						func_42(uParam2, 51, 1);
						func_42(uParam2, 52, 1);
						func_42(uParam2, 62, 1);
						func_42(uParam2, 37, 1);
						func_42(uParam2, 46, 1);
						func_42(uParam2, 110, 1);
						func_42(uParam2, 19, 1);
						func_42(uParam2, 20, 1);
						func_42(uParam2, 21, 1);
						func_42(uParam2, 22, 1);
						func_42(uParam2, 54, 1);
						func_42(uParam2, 24, 1);
						func_42(uParam2, 26, 1);
						func_42(uParam2, 27, 1);
						func_42(uParam2, 28, 1);
						func_42(uParam2, 30, 1);
						func_42(uParam2, 31, 1);
						func_42(uParam2, 32, 1);
						func_42(uParam2, 38, 1);
						func_42(uParam2, 36, 1);
					}
					func_46(uParam4, 3, 1);
					func_46(uParam4, 3, 1);
					func_46(uParam4, 4, 1);
					func_46(uParam4, 14, 1);
					func_46(uParam4, 15, 1);
					func_46(uParam4, 16, 1);
					func_46(uParam4, 8, 1);
					func_46(uParam4, 9, 1);
					func_46(uParam4, 10, 1);
					func_46(uParam4, 12, 1);
					func_46(uParam4, 13, 1);
					func_46(uParam4, 17, 1);
					func_46(uParam4, 18, 1);
					func_46(uParam4, 19, 1);
					func_46(uParam4, 20, 1);
					func_46(uParam4, 59, 1);
					func_46(uParam4, 60, 1);
					func_46(uParam4, 61, 1);
					func_46(uParam4, 62, 1);
					func_46(uParam4, 62, 1);
					func_46(uParam4, 63, 1);
					func_46(uParam4, 64, 1);
					func_46(uParam4, 65, 1);
					func_46(uParam4, 66, 1);
					func_46(uParam4, 67, 1);
					func_46(uParam4, 68, 1);
					func_46(uParam4, 69, 1);
					func_46(uParam4, 70, 1);
					func_46(uParam4, 71, 1);
					func_46(uParam4, 72, 1);
					func_46(uParam4, 21, 1);
					func_46(uParam4, 22, 1);
					func_46(uParam4, 23, 1);
					func_46(uParam4, 24, 1);
					func_46(uParam4, 25, 1);
					func_46(uParam4, 26, 1);
					func_46(uParam4, 36, 1);
					func_46(uParam4, 46, 1);
					func_46(uParam4, 38, 1);
					func_46(uParam4, 29, 1);
					func_46(uParam4, 28, 1);
					func_46(uParam4, 31, 1);
					func_46(uParam4, 33, 1);
					func_46(uParam4, 34, 1);
					func_46(uParam4, 92, 1);
					func_46(uParam4, 93, 1);
					func_46(uParam4, 94, 1);
					func_46(uParam4, 96, 1);
					func_46(uParam4, 97, 1);
					func_46(uParam4, 98, 1);
					func_46(uParam4, 100, 1);
					func_46(uParam4, 103, 1);
					func_46(uParam4, 104, 1);
					func_46(uParam4, 105, 1);
					func_46(uParam4, 106, 1);
					func_46(uParam4, 107, 1);
					func_46(uParam4, 108, 1);
					break;
			}
			break;
	}
}

void func_46(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iParam1) / 32f));
	if (!iVar0 < *uParam0)
	{
		return;
	}
	if (bParam2)
	{
		unk_0xBE20AB8238688965(uParam0[iVar0], (iParam1 - (32 * iVar0)));
	}
	else
	{
		VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0[iVar0], (iParam1 - iVar0 * 32));
	}
}

int func_47()
{
	if (Global_4254512.f_943 > -1)
	{
		return 1;
	}
	return 0;
}

int func_48(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			switch (iParam1)
			{
				case 0:
					return 1;
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 1:
				case 2:
				case 3:
				case 4:
				case 7:
				case 5:
				case 10:
				case 11:
				case 12:
				case 13:
				case 15:
				case 14:
				case 16:
				case 17:
				case 18:
				case 19:
				case 20:
				case 21:
				case 22:
				case 23:
				case 26:
				case 25:
				case 24:
				case 30:
				case 34:
				case 40:
				case 41:
				case 42:
				case 43:
				case 44:
				case 45:
				case 46:
				case 47:
				case 48:
				case 49:
				case 50:
				case 51:
					return 1;
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return 1;
					break;
			}
			break;
	}
	return 0;
}

void func_49(float fParam0)
{
	func_72(iLocal_92, "SET_DATA_SLOT", fParam0, MOBILE::GET_MOBILE_PHONE_POSITION(0, 172, 1), "CELL_BORDER");
}

void func_50(float fParam0)
{
	if (Global_1673793)
	{
		fParam0 = -1f;
	}
	func_72(iLocal_92, "SET_DATA_SLOT", fParam0, MOBILE::GET_MOBILE_PHONE_POSITION(0, 173, 1), "CELL_FILTER");
}

void func_51()
{
	if (HUD::_0x5BFF36D6ED83E0AE(2) || unk_0xDCA0815D900F27F8())
	{
		func_72(iLocal_92, "SET_DATA_SLOT", 2f, MOBILE::GET_MOBILE_PHONE_POSITION(0, 184, 1), "CELL_SP_2NP_XB");
	}
	else
	{
		func_72(iLocal_92, "SET_DATA_SLOT", 2f, MOBILE::GET_MOBILE_PHONE_POSITION(0, 184, 1), "CELL_SP_2NP_XB");
	}
	func_72(iLocal_92, "SET_DATA_SLOT", 3f, MOBILE::GET_MOBILE_PHONE_POSITION(0, 183, 1), "CELL_GRID");
	func_72(iLocal_92, "SET_DATA_SLOT", 4f, MOBILE::SET_MOBILE_PHONE_POSITION(0f, 1.401298E-45f, 1.401298E-45f), "CELL_285");
	func_50(5f);
	func_49(6f);
	func_52(7f);
	func_29(8f);
	if (bLocal_29)
	{
		func_72(iLocal_92, "SET_DATA_SLOT", 9f, MOBILE::GET_MOBILE_PHONE_POSITION(2, 185, 1), "CELL_DEPTH");
	}
	if (!func_61(14))
	{
		if ((Global_76833 == 0 && INTERIOR::GET_INTERIOR_AT_COORDS(joaat("pi_menu")) > 0) && func_60())
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_91, "SET_FOCUS_LOCK");
			unk_0xF1B28F753235CE2A(1);
			MISC::UPDATE_ONSCREEN_KEYBOARD("CELL_ACTTL");
			unk_0x9EFD301E3BE8324E(AUDIO::ADD_LINE_TO_CONVERSATION(&Global_4272009));
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT();
			unk_0xF1B28F753235CE2A(0);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
	}
}

void func_52(float fParam0)
{
	func_72(iLocal_92, "SET_DATA_SLOT", fParam0, MOBILE::GET_MOBILE_PHONE_POSITION(0, 175, 1), "CELL_ACCYC");
}

void func_53()
{
	func_158(iLocal_92, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_158(iLocal_92, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_72(iLocal_92, "SET_DATA_SLOT", 3f, MOBILE::GET_MOBILE_PHONE_POSITION(0, 39, 1), "CELL_284");
	func_72(iLocal_92, "SET_DATA_SLOT", 2f, MOBILE::SET_MOBILE_PHONE_POSITION(0f, 1.401298E-45f, 1.401298E-45f), "CELL_285");
	func_72(iLocal_92, "SET_DATA_SLOT", 1f, MOBILE::GET_MOBILE_PHONE_POSITION(0, 177, 1), "CELL_281");
	func_72(iLocal_92, "SET_DATA_SLOT", 0f, MOBILE::GET_MOBILE_PHONE_POSITION(0, 176, 1), "CELL_280");
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_92, "SET_MAX_WIDTH");
	DLC::IS_DLC_PRESENT(fLocal_40);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	func_158(iLocal_92, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
}

void func_54()
{
	if (iLocal_106 == 1)
	{
		func_55();
		return;
	}
	if (iLocal_84 == 0 && iLocal_85 == 0)
	{
		func_158(iLocal_92, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_158(iLocal_92, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_72(iLocal_92, "SET_DATA_SLOT", 0f, MOBILE::GET_MOBILE_PHONE_POSITION(0, 177, 1), "CELL_281");
		func_72(iLocal_92, "SET_DATA_SLOT", 1f, MOBILE::GET_MOBILE_PHONE_POSITION(2, 179, 1), func_65());
		if (iLocal_82)
		{
			if (!PED::IS_PED_IN_ANY_POLICE_VEHICLE(unk_0x9B0761B4C3EB8BC7(), 0))
			{
				if (SYSTEM::VDIST(unk_0x9B0761B4C3EB8BC7(), 0) || PED::GET_PED_PARACHUTE_STATE(unk_0x9B0761B4C3EB8BC7()) == 2)
				{
					if (HUD::_0x5BFF36D6ED83E0AE(2) || unk_0xDCA0815D900F27F8())
					{
						func_72(iLocal_92, "SET_DATA_SLOT", 2f, MOBILE::GET_MOBILE_PHONE_POSITION(0, 184, 1), "CELL_SP_2NP_XB");
					}
					else
					{
						func_72(iLocal_92, "SET_DATA_SLOT", 2f, MOBILE::GET_MOBILE_PHONE_POSITION(0, 184, 1), "CELL_SP_2NP_XB");
					}
					if (func_167())
					{
						func_50(3f);
						func_49(4f);
					}
				}
				else if ((Global_76833 == 0 && INTERIOR::GET_INTERIOR_AT_COORDS(joaat("pi_menu")) > 0) && func_60())
				{
					func_51();
				}
				else
				{
					if (HUD::_0x5BFF36D6ED83E0AE(2) || unk_0xDCA0815D900F27F8())
					{
						func_72(iLocal_92, "SET_DATA_SLOT", 2f, MOBILE::GET_MOBILE_PHONE_POSITION(0, 184, 1), "CELL_SP_2NP_XB");
					}
					else
					{
						func_72(iLocal_92, "SET_DATA_SLOT", 2f, MOBILE::GET_MOBILE_PHONE_POSITION(0, 184, 1), "CELL_SP_2NP_XB");
					}
					func_72(iLocal_92, "SET_DATA_SLOT", 3f, MOBILE::GET_MOBILE_PHONE_POSITION(2, 183, 1), "CELL_GRID");
					func_72(iLocal_92, "SET_DATA_SLOT", 4f, MOBILE::SET_MOBILE_PHONE_POSITION(0f, 1.401298E-45f, 1.401298E-45f), "CELL_285");
					if (func_167())
					{
						func_50(5f);
						func_49(6f);
						if (func_30(1))
						{
							func_29(7f);
							if (bLocal_29)
							{
								func_72(iLocal_92, "SET_DATA_SLOT", 8f, MOBILE::GET_MOBILE_PHONE_POSITION(2, 185, 1), "CELL_DEPTH");
							}
						}
						else if (bLocal_29)
						{
							func_72(iLocal_92, "SET_DATA_SLOT", 7f, MOBILE::GET_MOBILE_PHONE_POSITION(2, 185, 1), "CELL_DEPTH");
						}
					}
				}
			}
		}
		else if (!PED::IS_PED_IN_ANY_POLICE_VEHICLE(unk_0x9B0761B4C3EB8BC7(), 0))
		{
			if (SYSTEM::VDIST(unk_0x9B0761B4C3EB8BC7(), 0) || PED::GET_PED_PARACHUTE_STATE(unk_0x9B0761B4C3EB8BC7()) == 2)
			{
				if (!PED::GET_PED_PARACHUTE_STATE(unk_0x9B0761B4C3EB8BC7()) == 2)
				{
					func_72(iLocal_92, "SET_DATA_SLOT", 3f, MOBILE::GET_MOBILE_PHONE_POSITION(2, 183, 1), "CELL_GRID");
					func_72(iLocal_92, "SET_DATA_SLOT", 4f, MOBILE::SET_MOBILE_PHONE_POSITION(0f, 1.401298E-45f, 1.401298E-45f), "CELL_285");
					func_72(iLocal_92, "SET_DATA_SLOT", 5f, MOBILE::GET_MOBILE_PHONE_POSITION(0, 39, 1), "CELL_284");
					if (func_167())
					{
						func_50(6f);
						func_49(7f);
						func_72(iLocal_92, "SET_DATA_SLOT", 8f, MOBILE::GET_MOBILE_PHONE_POSITION(2, 185, 1), "CELL_DEPTH");
					}
				}
				else
				{
					func_72(iLocal_92, "SET_DATA_SLOT", 2f, MOBILE::SET_MOBILE_PHONE_POSITION(0f, 1.401298E-45f, 1.401298E-45f), "CELL_285");
					if (func_167())
					{
						func_50(3f);
						func_49(4f);
						func_72(iLocal_92, "SET_DATA_SLOT", 5f, MOBILE::GET_MOBILE_PHONE_POSITION(2, 185, 1), "CELL_DEPTH");
					}
				}
			}
			else if (!PED::GET_PED_PARACHUTE_STATE(unk_0x9B0761B4C3EB8BC7()) == 2)
			{
				if (!func_154())
				{
					if (HUD::_0x5BFF36D6ED83E0AE(2) || unk_0xDCA0815D900F27F8())
					{
						func_72(iLocal_92, "SET_DATA_SLOT", 2f, MOBILE::GET_MOBILE_PHONE_POSITION(0, 184, 1), "CELL_SP_1NP_XB");
					}
					else
					{
						func_72(iLocal_92, "SET_DATA_SLOT", 2f, MOBILE::GET_MOBILE_PHONE_POSITION(0, 184, 1), "CELL_SP_1NP_XB");
					}
				}
				func_72(iLocal_92, "SET_DATA_SLOT", 4f, MOBILE::GET_MOBILE_PHONE_POSITION(2, 183, 1), "CELL_GRID");
				func_72(iLocal_92, "SET_DATA_SLOT", 5f, MOBILE::SET_MOBILE_PHONE_POSITION(0f, 1.401298E-45f, 1.401298E-45f), "CELL_285");
				func_72(iLocal_92, "SET_DATA_SLOT", 6f, MOBILE::GET_MOBILE_PHONE_POSITION(0, 39, 1), "CELL_284");
				if (func_167())
				{
					if (!func_154())
					{
						func_50(7f);
						func_49(8f);
						if (bLocal_30)
						{
							func_72(iLocal_92, "SET_DATA_SLOT", 3f, MOBILE::GET_MOBILE_PHONE_POSITION(0, 182, 1), "CELL_FOCUS");
						}
						func_72(iLocal_92, "SET_DATA_SLOT", 9f, MOBILE::GET_MOBILE_PHONE_POSITION(2, 185, 1), "CELL_DEPTH");
					}
				}
				else
				{
					if (!func_154())
					{
						if (HUD::_0x5BFF36D6ED83E0AE(2) || unk_0xDCA0815D900F27F8())
						{
							func_72(iLocal_92, "SET_DATA_SLOT", 2f, MOBILE::GET_MOBILE_PHONE_POSITION(0, 184, 1), "CELL_SP_1NP_XB");
						}
						else
						{
							func_72(iLocal_92, "SET_DATA_SLOT", 2f, MOBILE::GET_MOBILE_PHONE_POSITION(0, 184, 1), "CELL_SP_1NP_XB");
						}
					}
					func_72(iLocal_92, "SET_DATA_SLOT", 3f, MOBILE::SET_MOBILE_PHONE_POSITION(0f, 1.401298E-45f, 1.401298E-45f), "CELL_285");
					if (func_167())
					{
						if (!func_154())
						{
							func_50(4f);
							func_49(5f);
							func_72(iLocal_92, "SET_DATA_SLOT", 6f, MOBILE::GET_MOBILE_PHONE_POSITION(2, 185, 1), "CELL_DEPTH");
						}
					}
				}
			}
		}
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_92, "SET_MAX_WIDTH");
		DLC::IS_DLC_PRESENT(fLocal_40);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		func_158(iLocal_92, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
	}
}

void func_55()
{
	func_158(iLocal_92, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_158(iLocal_92, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_72(iLocal_92, "SET_DATA_SLOT", 3f, MOBILE::GET_MOBILE_PHONE_POSITION(0, 39, 1), "CELL_284");
	func_72(iLocal_92, "SET_DATA_SLOT", 2f, MOBILE::SET_MOBILE_PHONE_POSITION(0f, 1.401298E-45f, 1.401298E-45f), "CELL_285");
	func_72(iLocal_92, "SET_DATA_SLOT", 1f, MOBILE::GET_MOBILE_PHONE_POSITION(2, 179, 1), func_65());
	func_72(iLocal_92, "SET_DATA_SLOT", 0f, MOBILE::GET_MOBILE_PHONE_POSITION(0, 177, 1), "CELL_281");
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_92, "SET_MAX_WIDTH");
	DLC::IS_DLC_PRESENT(fLocal_40);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	func_158(iLocal_92, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
}

void func_56()
{
	if (iLocal_82)
	{
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(fLocal_36, 1f);
		unk_0x4C4FC7841A5FB983(fLocal_37);
	}
}

void func_57(int iParam0)
{
	if (iLocal_106 == 1)
	{
		return;
	}
	if (Global_4456448.f_123772 == 1)
	{
	}
	else if (Global_4456448.f_123773 == 1)
	{
	}
	else
	{
		unk_0x59C853151ABA2A62(iParam0);
	}
}

void func_58()
{
	if (iLocal_28 == 1)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS(sLocal_19[Global_4269748], "phone_cam12DUMMY"))
		{
			unk_0xCB6B7239AA9DA52F(0);
			unk_0x69FC1AD2B320BC60(0);
		}
		else
		{
			unk_0xCB6B7239AA9DA52F(1);
			unk_0x69FC1AD2B320BC60(1);
		}
	}
}

void func_59()
{
	func_158(iLocal_91, "SHOW_REMAINING_PHOTOS", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
	if (!func_167())
	{
		if (!Global_1673793)
		{
			GRAPHICS::SET_TIMECYCLE_MODIFIER("phone_cam");
		}
	}
}

int func_60()
{
	if (func_61(14))
	{
		if (!PED::IS_PED_IN_ANY_POLICE_VEHICLE(unk_0x9B0761B4C3EB8BC7(), 0))
		{
			if ((MISC::GET_MODEL_DIMENSIONS(unk_0x9B0761B4C3EB8BC7()) == Global_111858.f_28046[0 /*29*/] || MISC::GET_MODEL_DIMENSIONS(unk_0x9B0761B4C3EB8BC7()) == Global_111858.f_28046[1 /*29*/]) || MISC::GET_MODEL_DIMENSIONS(unk_0x9B0761B4C3EB8BC7()) == Global_111858.f_28046[2 /*29*/])
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
	return 1;
}

bool func_61(int iParam0)
{
	return Global_41631 == iParam0;
}

void func_62(char* sParam0)
{
	MISC::UPDATE_ONSCREEN_KEYBOARD(sParam0);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT();
}

void func_63()
{
	if (HUD::_0x5BFF36D6ED83E0AE(2) || unk_0xDCA0815D900F27F8())
	{
		func_72(iLocal_92, "SET_DATA_SLOT", 2f, MOBILE::GET_MOBILE_PHONE_POSITION(0, 184, 1), "CELL_SP_2NP_XB");
	}
	else
	{
		func_72(iLocal_92, "SET_DATA_SLOT", 2f, MOBILE::GET_MOBILE_PHONE_POSITION(0, 184, 1), "CELL_SP_2NP_XB");
	}
	if (HUD::_0x5BFF36D6ED83E0AE(2))
	{
		func_72(iLocal_92, "SET_DATA_SLOT", 3f, MOBILE::GET_MOBILE_PHONE_POSITION(0, 30, 1), "CELL_RT_RSTICK");
		func_72(iLocal_92, "SET_DATA_SLOT", 4f, MOBILE::SET_MOBILE_PHONE_POSITION(2.802597E-45f, 1.401298E-45f, 1.401298E-45f), "CELL_RT_LSTICK");
	}
	else
	{
		func_72(iLocal_92, "SET_DATA_SLOT", 3f, MOBILE::GET_MOBILE_PHONE_POSITION(0, 1, 1), "CELL_RT_RSTICK");
		func_72(iLocal_92, "SET_DATA_SLOT", 4f, MOBILE::SET_MOBILE_PHONE_POSITION(2.802597E-45f, 0f, 1.401298E-45f), "CELL_RT_LSTICK");
	}
}

void func_64()
{
	if (HUD::_0x5BFF36D6ED83E0AE(2) || unk_0xDCA0815D900F27F8())
	{
		func_72(iLocal_92, "SET_DATA_SLOT", 3f, MOBILE::GET_MOBILE_PHONE_POSITION(0, 184, 1), "CELL_SP_2NP_XB");
	}
	else
	{
		func_72(iLocal_92, "SET_DATA_SLOT", 3f, MOBILE::GET_MOBILE_PHONE_POSITION(0, 184, 1), "CELL_SP_2NP_XB");
	}
	func_72(iLocal_92, "SET_DATA_SLOT", 4f, MOBILE::SET_MOBILE_PHONE_POSITION(0f, 1.401298E-45f, 1.401298E-45f), "CELL_LT_RSTICK");
	if (func_61(14))
	{
		func_72(iLocal_92, "SET_DATA_SLOT", 5f, MOBILE::GET_MOBILE_PHONE_POSITION(2, 30, 1), "CELL_LT_LSTICK");
	}
	else
	{
		func_72(iLocal_92, "SET_DATA_SLOT", 5f, MOBILE::GET_MOBILE_PHONE_POSITION(0, 39, 1), "CELL_LT_LSTICKZ");
		func_72(iLocal_92, "SET_DATA_SLOT", 6f, MOBILE::GET_MOBILE_PHONE_POSITION(2, 30, 1), "CELL_LT_LSTICK");
	}
}

char* func_65()
{
	if (func_71())
	{
		return "FHHUD_SENDLES";
	}
	if (func_66())
	{
		return "CSH_PHONEC";
	}
	return "CELL_287";
}

int func_66()
{
	switch (func_67(PLAYER::PLAYER_ID()))
	{
		case 16:
			return 1;
		
		case 4:
		case 3:
		case 2:
		case 1:
		case 0:
			return 1;
		
		default:
	}
	return 0;
}

int func_67(int iParam0)
{
	if (func_70(iParam0) == 256)
	{
		return func_68(iParam0);
	}
	return -1;
}

int func_68(int iParam0)
{
	if (func_69(iParam0, 0))
	{
		return Global_1630317[iParam0 /*595*/].f_11.f_181;
	}
	return -1;
}

int func_69(int iParam0, int iParam1)
{
	if (Global_1630317[iParam0 /*595*/].f_11.f_33 != -1 || (iParam1 && Global_1630317[iParam0 /*595*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_70(int iParam0)
{
	if (func_69(iParam0, 0))
	{
		return Global_1630317[iParam0 /*595*/].f_11.f_33;
	}
	return -1;
}

int func_71()
{
	switch (Global_1630317[PLAYER::PLAYER_ID() /*595*/].f_11.f_33)
	{
		case 233:
			switch (Global_1630317[PLAYER::PLAYER_ID() /*595*/].f_11.f_181)
			{
				case 9:
					return 1;
				
				default:
			}
			break;
		
		case 158:
			switch (Global_1630317[PLAYER::PLAYER_ID() /*595*/].f_11.f_181)
			{
				case 3:
				case 1:
				case 41:
					return 1;
				
				default:
			}
			break;
	}
	if (Global_1703844)
	{
		return 1;
	}
	return 0;
}

void func_72(int iParam0, char* sParam1, float fParam2, bool bParam3, bool bParam4)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, sParam1);
	NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE(SYSTEM::ROUND(fParam2));
	if (!CAM::IS_SCREEN_FADED_OUT(bParam3))
	{
		func_73(bParam3);
	}
	if (!CAM::IS_SCREEN_FADED_OUT(bParam4))
	{
		func_62(bParam4);
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_73(bool bParam0)
{
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam0);
}

void func_74()
{
	if (Global_76833)
	{
		switch (Global_22122)
		{
			case 0:
				if (HUD::_0x5BFF36D6ED83E0AE(2))
				{
					func_153("CELL_CAM_SELFIE_0_KM", -1);
				}
				else
				{
					func_153("CELL_CAM_SELFIE_0", -1);
				}
				Global_22122++;
				break;
			
			case 1:
				if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					if (HUD::_0x5BFF36D6ED83E0AE(2))
					{
						func_153("CELL_CAM_SELFIE_1_KM", -1);
					}
					else
					{
						func_153("CELL_CAM_SELFIE_1", -1);
					}
					Global_22122++;
				}
				break;
			
			case 2:
				break;
		}
	}
	else
	{
		switch (Global_22121)
		{
			case 0:
				if (HUD::_0x5BFF36D6ED83E0AE(2))
				{
					func_153("CELL_CAM_SELFIE_0_KM", -1);
				}
				else
				{
					func_153("CELL_CAM_SELFIE_0", -1);
				}
				Global_22121++;
				break;
			
			case 1:
				if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					if (HUD::_0x5BFF36D6ED83E0AE(2))
					{
						func_153("CELL_CAM_SELFIE_1_KM", -1);
					}
					else
					{
						func_153("CELL_CAM_SELFIE_1", -1);
					}
					Global_22121++;
				}
				break;
			
			case 2:
				break;
			}
	}
}

void func_75()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	int iVar9;
	int iVar10;
	
	if (HUD::_0x5BFF36D6ED83E0AE(2))
	{
		iVar9 = 179;
		iVar10 = 21;
	}
	else
	{
		iVar9 = 228;
		iVar10 = 229;
	}
	if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, iVar10) && !PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, iVar9))
	{
		MONEY::NETWORK_MONEY_CAN_BET(0, 2, true);
		MONEY::NETWORK_MONEY_CAN_BET(0, true, true);
		iVar0 = SYSTEM::FLOOR(PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0, 30)) * 127;
		iVar1 = SYSTEM::FLOOR(PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0, 31)) * 127;
		iVar2 = SYSTEM::FLOOR(PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0, 1)) * 127;
		iVar3 = SYSTEM::FLOOR(PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0, 2)) * 127;
		if (HUD::_0x5BFF36D6ED83E0AE(2))
		{
			if (MISC::ABSI(iVar0) > 28 || MISC::ABSI(iVar1) > 28)
			{
				fVar6 = ((IntToFloat(iVar0) / 128f) * fLocal_114);
			}
		}
		else if (MISC::ABSI(iVar2) > 28 || MISC::ABSI(iVar3) > 28)
		{
			fVar6 = ((IntToFloat(iVar2) / 128f) * fLocal_114);
		}
		if (HUD::_0x5BFF36D6ED83E0AE(2))
		{
			fVar7 = PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0, 290);
			fVar8 = PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0, 291);
			if (PAD::_0xE1615EC03B3BB4FD())
			{
				fVar8 = (fVar8 * -1f);
			}
			fVar4 = (fVar4 + fVar7);
			fVar5 = (fVar5 - fVar8);
		}
		else if (MISC::ABSI(iVar0) > 28 || MISC::ABSI(iVar1) > 28)
		{
			fVar4 = ((IntToFloat(iVar0) / 128f) * fLocal_114);
			fVar5 = ((IntToFloat(-iVar1) / 128f) * fLocal_114);
		}
		func_78(fVar5);
		func_77(fVar6);
		func_76(fVar4);
	}
	else if (!PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, iVar9))
	{
		PAD::ENABLE_CONTROL_ACTION(0, 2, true);
		PAD::ENABLE_CONTROL_ACTION(0, 1, true);
	}
}

void func_76(float fParam0)
{
	fLocal_111 = (fLocal_111 + fParam0);
	if (fLocal_111 > 1f)
	{
		fLocal_111 = 1f;
	}
	else if (fLocal_111 < -1f)
	{
		fLocal_111 = -1f;
	}
	unk_0x8EBC38836D4FB282(fLocal_111);
}

void func_77(float fParam0)
{
	fLocal_112 = (fLocal_112 + fParam0);
	if (fLocal_112 > 1f)
	{
		fLocal_112 = 1f;
	}
	else if (fLocal_112 < -1f)
	{
		fLocal_112 = -1f;
	}
	unk_0x9C94791279937960(fLocal_112);
}

void func_78(float fParam0)
{
	fLocal_113 = (fLocal_113 + fParam0);
	if (fLocal_113 > 1f)
	{
		fLocal_113 = 1f;
	}
	else if (fLocal_113 < -1f)
	{
		fLocal_113 = -1f;
	}
	unk_0x2C25F68FE1625FE6(fLocal_113);
}

void func_79()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	int iVar10;
	int iVar11;
	
	if (HUD::_0x5BFF36D6ED83E0AE(2))
	{
		iVar10 = 179;
		iVar11 = 178;
		if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, iVar10))
		{
			if (PAD::IS_DISABLED_CONTROL_PRESSED(2, 178) && !func_154())
			{
				unk_0x458C1C943DBDA048(0.5f);
				unk_0x2B91CAFA8258BC2E(0.85f);
				unk_0x089E3A18DC994824(0.5f);
				unk_0xFC3FA536C926A9A9(-0.25f);
				fLocal_107 = 0.5f;
				fLocal_108 = 0.85f;
				fLocal_109 = 0.5f;
				fLocal_110 = -0.25f;
			}
		}
	}
	else
	{
		iVar10 = 228;
		iVar11 = 229;
	}
	if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, iVar10) && !PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, iVar11))
	{
		if (PAD::IS_DISABLED_CONTROL_PRESSED(2, 178) && !func_154())
		{
			unk_0x458C1C943DBDA048(0.5f);
			unk_0x2B91CAFA8258BC2E(0.85f);
			unk_0x089E3A18DC994824(0.5f);
			unk_0xFC3FA536C926A9A9(-0.25f);
			fLocal_107 = 0.5f;
			fLocal_108 = 0.85f;
			fLocal_109 = 0.5f;
			fLocal_110 = -0.25f;
		}
		MONEY::NETWORK_MONEY_CAN_BET(0, 2, true);
		MONEY::NETWORK_MONEY_CAN_BET(0, true, true);
		iVar0 = SYSTEM::FLOOR(PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0, 30)) * 127;
		iVar1 = SYSTEM::FLOOR(PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0, 31)) * 127;
		iVar2 = SYSTEM::FLOOR(PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0, 1)) * 127;
		iVar3 = SYSTEM::FLOOR(PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0, 2)) * 127;
		if (HUD::_0x5BFF36D6ED83E0AE(2))
		{
			iVar1 = SYSTEM::FLOOR(PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0, 39)) * 127;
			fVar8 = PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0, 290);
			fVar9 = PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0, 291);
			if (PAD::_0xE1615EC03B3BB4FD())
			{
				fVar9 = (fVar9 * -1f);
			}
			fVar6 = (fVar6 + fVar8);
			fVar7 = (fVar7 - fVar9);
		}
		else if (MISC::ABSI(iVar2) > 15 || MISC::ABSI(iVar3) > 15)
		{
			fVar6 = ((IntToFloat(iVar2) / 128f) * fLocal_114);
			fVar7 = ((IntToFloat(-iVar3) / 128f) * fLocal_114);
		}
		if (MISC::ABSI(iVar0) > 28 || MISC::ABSI(iVar1) > 28)
		{
			fVar4 = ((IntToFloat(iVar0) / 128f) * fLocal_114);
			fVar5 = ((IntToFloat(iVar1) / 128f) * fLocal_114);
		}
		func_83(fVar6);
		func_82(fVar7);
		func_81(fVar4);
		if (!func_61(14))
		{
			func_80(fVar5);
		}
	}
	else if (!unk_0xB9C0D9B37277621D(2, iVar11))
	{
		PAD::ENABLE_CONTROL_ACTION(0, 2, true);
		PAD::ENABLE_CONTROL_ACTION(0, 1, true);
	}
	if (!unk_0xB9C0D9B37277621D(2, iVar10) && !unk_0xB9C0D9B37277621D(2, iVar11))
	{
		iVar0 = SYSTEM::FLOOR(PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0, 30)) * 127;
		iVar1 = SYSTEM::FLOOR(PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0, 31)) * 127;
		iVar2 = SYSTEM::FLOOR(PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0, 290)) * 127;
		iVar3 = SYSTEM::FLOOR(PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0, 291)) * 127;
		iVar2 = SYSTEM::FLOOR(PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0, 294)) * 127;
		iVar2 = SYSTEM::FLOOR(PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0, 295)) * 127;
		iVar3 = SYSTEM::FLOOR(PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0, 292)) * 127;
		iVar3 = SYSTEM::FLOOR(PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0, 293)) * 127;
		if (MISC::ABSI(iVar2) > 28 || MISC::ABSI(iVar3) > 28)
		{
			fVar6 = ((IntToFloat(iVar2) / 128f) * fLocal_114);
			fVar7 = ((IntToFloat(-iVar3) / 128f) * fLocal_114);
		}
		if (MISC::ABSI(iVar0) > 28 || MISC::ABSI(iVar1) > 28)
		{
			fVar4 = ((IntToFloat(iVar0) / 128f) * fLocal_114);
			fVar5 = ((IntToFloat(iVar1) / 128f) * fLocal_114);
		}
		if (!func_61(14))
		{
			func_80(fVar5);
		}
	}
}

void func_80(float fParam0)
{
	fLocal_109 = (fLocal_109 + fParam0);
	if (fLocal_109 > 1f)
	{
		fLocal_109 = 1f;
	}
	else if (fLocal_109 < 0f)
	{
		fLocal_109 = 0f;
	}
	unk_0x089E3A18DC994824(fLocal_109);
}

void func_81(float fParam0)
{
	fLocal_110 = (fLocal_110 + fParam0);
	if (fLocal_110 > 1f)
	{
		fLocal_110 = 1f;
	}
	else if (fLocal_110 < -1f)
	{
		fLocal_110 = -1f;
	}
	unk_0xFC3FA536C926A9A9(fLocal_110);
}

void func_82(float fParam0)
{
	fLocal_108 = (fLocal_108 + fParam0);
	if (fLocal_108 > 1.5f)
	{
		fLocal_108 = 1.5f;
	}
	else if (fLocal_108 < 0.5f)
	{
		fLocal_108 = 0.5f;
	}
	unk_0x2B91CAFA8258BC2E(fLocal_108);
}

void func_83(float fParam0)
{
	fLocal_107 = (fLocal_107 + fParam0);
	if (fLocal_107 > 2f)
	{
		fLocal_107 = 2f;
	}
	else if (fLocal_107 < -1.7f)
	{
		fLocal_107 = -1.7f;
	}
	unk_0x458C1C943DBDA048(fLocal_107);
}

void func_84()
{
	if (Global_77093 || Global_77094)
	{
		return;
	}
	if (iLocal_75 == 0)
	{
		if (!iLocal_100)
		{
			if (Global_4456448.f_123772 == 0 && Global_4456448.f_123773 == 0)
			{
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING(iLocal_92, 255, 255, 255, 0, 0);
			}
		}
	}
	if (iLocal_78 == 0)
	{
		if (Global_19623)
		{
			if (Global_19864)
			{
				if (iLocal_100 == 0)
				{
					if (Global_19681.f_1 > 3)
					{
					}
				}
			}
		}
		else
		{
			func_86(255, 255, 255, 255);
			func_85(0.059f, 0.644f, "CELL_284", 0);
			func_86(255, 255, 255, 255);
			func_85(0.165f, 0.644f, "CELL_285", 0);
			func_86(255, 255, 255, 255);
			func_85(0.275f, 0.75f, "CELL_280", 0);
			func_86(255, 255, 255, 255);
			func_85(0.275f, 0.83f, "CELL_281", 0);
		}
	}
	else if (Global_19623)
	{
	}
	else
	{
		func_86(255, 255, 255, 255);
		func_85(0.275f, 0.75f, func_65(), 0);
		func_86(255, 255, 255, 255);
		func_85(0.275f, 0.79f, "CELL_286", 0);
		func_86(255, 255, 255, 255);
		func_85(0.275f, 0.83f, "CELL_281", 0);
	}
}

void func_85(char* sParam0, float fParam1, bool bParam2, int iParam3)
{
	NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(bParam2);
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam0, fParam1, iParam3);
}

void func_86(int iParam0, int iParam1, int iParam2, int iParam3)
{
	HUD::SET_TEXT_SCALE(0.4f, 0.4f);
	HUD::SET_TEXT_DROPSHADOW(0, 0, 0, 0, 0);
	HUD::SET_TEXT_EDGE(1, 0, 0, 0, 205);
	HUD::SET_TEXT_PROPORTIONAL(true);
	HUD::SET_TEXT_FONT(0);
	HUD::SET_TEXT_COLOUR(iParam0, iParam1, iParam2, iParam3);
}

void func_87()
{
	CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(fLocal_38, 1f);
	unk_0x4C4FC7841A5FB983(fLocal_39);
}

void func_88()
{
	MONEY::NETWORK_MONEY_CAN_BET(0, 25, true);
	MONEY::NETWORK_MONEY_CAN_BET(0, 44, true);
	MONEY::NETWORK_MONEY_CAN_BET(0, 3, true);
	MONEY::NETWORK_MONEY_CAN_BET(0, 4, true);
	MONEY::NETWORK_MONEY_CAN_BET(0, 5, true);
	MONEY::NETWORK_MONEY_CAN_BET(0, 6, true);
	MONEY::NETWORK_MONEY_CAN_BET(0, true, true);
	MONEY::NETWORK_MONEY_CAN_BET(0, 2, true);
	MONEY::NETWORK_MONEY_CAN_BET(0, 39, true);
	MONEY::NETWORK_MONEY_CAN_BET(0, 47, true);
	MONEY::NETWORK_MONEY_CAN_BET(0, 56, true);
}

void func_89()
{
	Local_44 = { Global_19634[Global_19626 /*3*/] };
	if (Global_19623)
	{
		if (func_92())
		{
			unk_0x1F1B1269BB6217F7(&Local_46);
			Local_44 = { Local_46 };
			iLocal_72 = 0;
			iLocal_73 = 0;
			iLocal_74 = 0;
		}
		func_1(1);
		if (iLocal_72)
		{
			Local_42.x = (Local_42.x + 12f);
		}
		if (Local_42.x > Local_44.x || Local_42.x == Local_44.x)
		{
			Local_42.x = Local_44.x;
			iLocal_72 = 0;
		}
		if (iLocal_73)
		{
			Local_42.f_1 = (Local_42.f_1 - 6f);
		}
		if (unk_0xCE990E643CD9D0E5(Global_7553, 4))
		{
			if (Local_42.f_1 < (Local_44.f_1 + 15f) || Local_42.f_1 == (Local_44.f_1 + 15f))
			{
				Local_42.f_1 = (Local_44.f_1 + 15f);
				iLocal_73 = 0;
			}
		}
		else if (Local_42.f_1 < (Local_44.f_1 + 10f) || Local_42.f_1 == (Local_44.f_1 + 10f))
		{
			Local_42.f_1 = (Local_44.f_1 + 10f);
			iLocal_73 = 0;
		}
		if (iLocal_74)
		{
			Local_42.f_2 = (Local_42.f_2 - 10f);
		}
		if (Local_42.f_2 < Local_44.f_2 || Local_42.f_2 == Local_44.f_2)
		{
			Local_42.f_2 = Local_44.f_2;
			iLocal_74 = 0;
		}
		if (func_92() == 0)
		{
			if (unk_0xCE990E643CD9D0E5(Global_7553, 4))
			{
				Local_44.f_1 = (Local_44.f_1 + 15f);
			}
			else
			{
				Local_44.f_1 = (Local_44.f_1 + 10f);
			}
			Local_44.x = (Local_44.x - 14f);
		}
		else
		{
			Local_44 = { Global_19627[Global_19626 /*3*/] };
		}
		Local_42 = { Local_44 };
		iLocal_74 = 0;
		iLocal_73 = 0;
		iLocal_72 = 0;
		AUDIO::SKIP_TO_NEXT_SCRIPTED_CONVERSATION_LINE(Local_42);
		if ((iLocal_72 == 0 && iLocal_73 == 0) && iLocal_74 == 0)
		{
			iLocal_75 = 0;
			Local_43 = { -90.3f, 0f, 90f };
			unk_0xC6EAF6E2A0CACFED(Local_43, 0);
			if (!unk_0xCE990E643CD9D0E5(Global_7551, 22))
			{
				if (unk_0xCE990E643CD9D0E5(Global_7551, 28))
				{
					StringCopy(&cLocal_96, "CELL_294", 16);
					func_91();
				}
				else
				{
					StringCopy(&cLocal_96, "CELL_293", 16);
					func_90();
				}
				iLocal_51 = 2;
			}
		}
	}
}

void func_90()
{
	func_158(iLocal_92, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_158(iLocal_92, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
	if (unk_0xCE990E643CD9D0E5(Global_7552, 28))
	{
		func_72(iLocal_92, "SET_DATA_SLOT", 0f, MOBILE::GET_MOBILE_PHONE_POSITION(0, 176, 1), "CELL_286");
	}
	else
	{
		func_72(iLocal_92, "SET_DATA_SLOT", 1f, MOBILE::GET_MOBILE_PHONE_POSITION(2, 178, 1), "CELL_277");
		func_72(iLocal_92, "SET_DATA_SLOT", 0f, MOBILE::GET_MOBILE_PHONE_POSITION(0, 176, 1), "CELL_GALSAVE");
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_92, "SET_MAX_WIDTH");
	DLC::IS_DLC_PRESENT(fLocal_40);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	func_158(iLocal_92, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
}

void func_91()
{
	func_158(iLocal_92, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_158(iLocal_92, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
	if (unk_0xCE990E643CD9D0E5(Global_7552, 28))
	{
		func_72(iLocal_92, "SET_DATA_SLOT", 1f, MOBILE::GET_MOBILE_PHONE_POSITION(2, 179, 1), func_65());
		func_72(iLocal_92, "SET_DATA_SLOT", 0f, MOBILE::GET_MOBILE_PHONE_POSITION(0, 176, 1), "CELL_286");
	}
	else
	{
		func_72(iLocal_92, "SET_DATA_SLOT", 2f, MOBILE::GET_MOBILE_PHONE_POSITION(2, 179, 1), func_65());
		func_72(iLocal_92, "SET_DATA_SLOT", 1f, MOBILE::GET_MOBILE_PHONE_POSITION(2, 178, 1), "CELL_277");
		func_72(iLocal_92, "SET_DATA_SLOT", 0f, MOBILE::GET_MOBILE_PHONE_POSITION(0, 176, 1), "CELL_GALSAVE");
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_92, "SET_MAX_WIDTH");
	DLC::IS_DLC_PRESENT(fLocal_40);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	func_158(iLocal_92, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
}

int func_92()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!PED::IS_PED_IN_ANY_POLICE_VEHICLE(unk_0x9B0761B4C3EB8BC7(), 0))
	{
		if (Global_19681.f_1 == 10 || Global_19681.f_1 == 9)
		{
			if (Global_19624 == 0)
			{
				if (Global_6866 != 128)
				{
					if (!SYSTEM::VDIST(unk_0x9B0761B4C3EB8BC7(), 0))
					{
						if (Global_21005 != 2)
						{
						}
					}
				}
			}
		}
		if (func_61(14))
		{
			return 0;
		}
		if (PED::IS_PED_IN_COVER(unk_0x9B0761B4C3EB8BC7(), false))
		{
			return 0;
		}
		if (SYSTEM::VDIST(unk_0x9B0761B4C3EB8BC7(), 0))
		{
			if (!CAM::_IS_IN_VEHICLE_CAM_DISABLED())
			{
				if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(ENTITY::GET_ENTITY_MODEL(unk_0x9B0761B4C3EB8BC7(), 0)))
				{
					return 0;
				}
			}
		}
		if (((PED::IS_PED_DIVING(unk_0x9B0761B4C3EB8BC7()) || PED::IS_PED_SWIMMING_UNDER_WATER(unk_0x9B0761B4C3EB8BC7())) || PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())) || (unk_0xEEFD6B1BEB00F02E(unk_0x9B0761B4C3EB8BC7()) && !(unk_0xCE990E643CD9D0E5(Global_4456448.f_37, 17) && (STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED() || Global_1655232))))
		{
			return 0;
		}
		if (Global_110906)
		{
			return 0;
		}
	}
	if (Global_76833)
	{
		return 0;
	}
	iVar2 = 0;
	iVar0 = NETWORK::_GET_ONLINE_VERSION();
	iVar1 = CAM::_0xEE778F8C7E1142E2(iVar0);
	if (iVar1 == 4 && (iVar0 == 0 || CAM::_IS_IN_VEHICLE_CAM_DISABLED()))
	{
		iVar2 = 1;
		if (!PED::IS_PED_IN_ANY_POLICE_VEHICLE(unk_0x9B0761B4C3EB8BC7(), 0))
		{
			if (SYSTEM::VDIST(unk_0x9B0761B4C3EB8BC7(), 0))
			{
				iVar3 = ENTITY::GET_ENTITY_MODEL(unk_0x9B0761B4C3EB8BC7(), 0);
				if ((((((((MONEY::NETWORK_SPENT_BULL_SHARK(MISC::GET_MODEL_DIMENSIONS(iVar3)) || MONEY::NETWORK_SPENT_BUY_REVEAL_PLAYERS(MISC::GET_MODEL_DIMENSIONS(iVar3))) || MONEY::NETWORK_SPENT_BUY_OFFTHERADAR(MISC::GET_MODEL_DIMENSIONS(iVar3))) || MISC::GET_MODEL_DIMENSIONS(iVar3) == joaat("seashark")) || MISC::GET_MODEL_DIMENSIONS(iVar3) == joaat("seashark2")) || MISC::GET_MODEL_DIMENSIONS(iVar3) == joaat("rhino")) || MISC::GET_MODEL_DIMENSIONS(iVar3) == joaat("submersible")) || MISC::GET_MODEL_DIMENSIONS(iVar3) == joaat("submersible2")) || MISC::GET_MODEL_DIMENSIONS(iVar3) == joaat("toro"))
				{
					iVar2 = 0;
				}
			}
		}
	}
	if (Global_4271302 || iVar2 == 1)
	{
		if (INTERIOR::GET_INTERIOR_AT_COORDS(joaat("apptrackify")) > 0 || Global_111858.f_14047.f_89)
		{
			if (INTERIOR::GET_INTERIOR_AT_COORDS(joaat("michael2")) > 0)
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
			return 1;
		}
	}
	return 0;
}

void func_93()
{
	MONEY::NETWORK_MONEY_CAN_BET(0, 47, true);
	PAD::SET_INPUT_EXCLUSIVE(0, Global_19651);
	Local_43 = { Global_19641 };
	Local_44 = { Global_19634[Global_19626 /*3*/] };
	if (func_92())
	{
		MOBILE::GET_MOBILE_PHONE_ROTATION(&Local_45, 0);
		Local_43 = { Local_45 };
		unk_0x1F1B1269BB6217F7(&Local_46);
		Local_44 = { Local_46 };
		iLocal_69 = 0;
		iLocal_70 = 0;
		iLocal_71 = 0;
		iLocal_72 = 0;
		iLocal_73 = 0;
		iLocal_74 = 0;
	}
	if (Global_19623)
	{
		func_158(iLocal_91, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_57(0);
		iLocal_82 = 0;
		if (unk_0xCE990E643CD9D0E5(Global_7551, 30))
		{
			iLocal_69 = 0;
			iLocal_70 = 0;
			iLocal_71 = 0;
			func_94();
		}
		if (iLocal_72)
		{
			if (unk_0xCE990E643CD9D0E5(Global_7551, 9))
			{
				Local_42.x = (Local_42.x + 2f);
			}
			else
			{
				Local_42.x = (Local_42.x + 12f);
			}
		}
		if (Local_42.x > Local_44.x || Local_42.x == Local_44.x)
		{
			Local_42.x = Local_44.x;
			iLocal_72 = 0;
		}
		if (iLocal_73)
		{
			Local_42.f_1 = (Local_42.f_1 - 6f);
		}
		if (Local_42.f_1 < Local_44.f_1 || Local_42.f_1 == Local_44.f_1)
		{
			Local_42.f_1 = Local_44.f_1;
			iLocal_73 = 0;
		}
		if (iLocal_74)
		{
			Local_42.f_2 = (Local_42.f_2 - 10f);
		}
		if (Local_42.f_2 < Local_44.f_2 || Local_42.f_2 == Local_44.f_2)
		{
			Local_42.f_2 = Local_44.f_2;
			iLocal_74 = 0;
		}
		if (iLocal_74 == 0)
		{
			if (iLocal_69)
			{
				Local_41.x = (Local_41.x + 1f);
			}
			if (Local_41.x > Local_43.x || Local_41.x == Local_43.x)
			{
				Local_41.x = Local_43.x;
				iLocal_69 = 0;
			}
			if (iLocal_70)
			{
				Local_41.f_1 = (Local_41.f_1 - 2f);
			}
			if (Local_41.f_1 < Local_43.f_1 || Local_41.f_1 == Local_43.f_1)
			{
				Local_41.f_1 = Local_43.f_1;
				iLocal_70 = 0;
			}
			if (iLocal_71)
			{
				Local_41.f_2 = (Local_41.f_2 - 14f);
			}
			if (Local_41.f_2 < Local_43.f_2 || Local_41.f_2 == Local_43.f_2)
			{
				Local_41.f_2 = Local_43.f_2;
				iLocal_71 = 0;
			}
		}
		if (iLocal_77)
		{
			Local_41 = { Local_43 };
			Local_42 = { Local_44 };
			iLocal_69 = 0;
			iLocal_70 = 0;
			iLocal_71 = 0;
			if (func_92() == 0)
			{
				unk_0xC6EAF6E2A0CACFED(Local_41, 0);
				AUDIO::SKIP_TO_NEXT_SCRIPTED_CONVERSATION_LINE(Local_42);
			}
			func_109(0, 1);
		}
		else if (func_92() == 0)
		{
			unk_0xC6EAF6E2A0CACFED(Local_41, 0);
			AUDIO::SKIP_TO_NEXT_SCRIPTED_CONVERSATION_LINE(Local_42);
		}
		if ((iLocal_69 == 0 && iLocal_70 == 0) && iLocal_71 == 0)
		{
			func_94();
		}
	}
	else
	{
		if (iLocal_69)
		{
			Local_41.x = (Local_41.x + 1f);
		}
		if (Local_41.x > Local_43.x || Local_41.x == Local_43.x)
		{
			iLocal_69 = 0;
		}
		if (iLocal_70)
		{
			Local_41.f_1 = (Local_41.f_1 - 2f);
		}
		if (Local_41.f_1 < Local_43.f_1 || Local_41.f_1 == Local_43.f_1)
		{
			iLocal_70 = 0;
		}
		if (iLocal_71)
		{
			Local_41.f_2 = (Local_41.f_2 - 7f);
		}
		if (Local_41.f_2 < Local_43.f_2 || Local_41.f_2 == Local_43.f_2)
		{
			iLocal_71 = 0;
		}
		if ((iLocal_69 == 0 && iLocal_70 == 0) && iLocal_71 == 0)
		{
			func_94();
		}
	}
	unk_0xC6EAF6E2A0CACFED(Local_41, 0);
}

void func_94()
{
	func_1(0);
	if (func_92() == 0)
	{
		if (unk_0xCE990E643CD9D0E5(Global_7551, 30))
		{
			AUDIO::SKIP_TO_NEXT_SCRIPTED_CONVERSATION_LINE(Global_19627[Global_19626 /*3*/]);
		}
		else
		{
			AUDIO::SKIP_TO_NEXT_SCRIPTED_CONVERSATION_LINE(Global_19634[Global_19626 /*3*/]);
		}
		Local_41 = { Local_43 };
		unk_0xC6EAF6E2A0CACFED(Local_41, 0);
	}
	Global_22038 = 0;
	func_116(0, 0);
	func_120(0);
	iLocal_66 = 0;
	func_111(1);
	Global_19668 = 1;
	Global_22041 = 0;
	if (Global_19681.f_1 > 4)
	{
		Global_19681.f_1 = 6;
		Global_19659 = 1;
		func_95();
	}
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_91))
	{
		func_157(iLocal_91, "SHUTDOWN_MOVIE");
	}
	SYSTEM::WAIT(0);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME();
	GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&iLocal_92);
	GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&iLocal_91);
	if (Global_19866 == 1)
	{
		unk_0xBE20AB8238688965(&Global_7551, 17);
	}
	else
	{
		VEHICLE::IS_VEHICLE_DRIVEABLE(&Global_7551, 17);
	}
	VEHICLE::IS_VEHICLE_DRIVEABLE(&Global_7551, 18);
	VEHICLE::IS_VEHICLE_DRIVEABLE(&Global_7551, 21);
	HUD::CLEAR_FLOATING_HELP(0, true);
	VEHICLE::IS_VEHICLE_DRIVEABLE(&Global_7553, 3);
	VEHICLE::IS_VEHICLE_DRIVEABLE(&Global_4271024, 3);
	MISC::SET_GAME_PAUSED(false);
	PLAYER::SET_PLAYER_CAN_DO_DRIVE_BY(PLAYER::PLAYER_ID(), true);
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(15);
	Global_22042 = 1;
	AUDIO::STOP_SOUND(fLocal_63);
	AUDIO::RELEASE_SOUND_ID(fLocal_63);
	HUD::BUSYSPINNER_OFF();
	if (!PED::IS_PED_IN_ANY_POLICE_VEHICLE(unk_0x9B0761B4C3EB8BC7(), 0))
	{
		PED::GET_ANIM_INITIAL_OFFSET_ROTATION(unk_0x9B0761B4C3EB8BC7(), "Mood_Normal_1", 0);
		PED::CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(unk_0x9B0761B4C3EB8BC7());
	}
	func_111(1);
	unk_0xCB6B7239AA9DA52F(0);
	unk_0x69FC1AD2B320BC60(0);
	unk_0x764721E50928FD5D(1f);
	if (Global_4269749 > 0 && Global_4269749 < 13)
	{
		GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(sLocal_20[Global_4269749]);
	}
	func_109(0, 1);
	if (func_165(0, 1, iLocal_31, 1))
	{
		iLocal_31 = 0;
	}
	ENTITY::STOP_ENTITY_ANIM();
}

void func_95()
{
	struct<3> Var0;
	
	if (Global_19664 == 1)
	{
		return;
	}
	if (Global_19681.f_1 < 4)
	{
		return;
	}
	while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_19662))
	{
		if (Global_76833)
		{
			return;
		}
		SYSTEM::WAIT(0);
	}
	switch (Global_19681.f_1)
	{
		case 6:
			func_158(Global_19662, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_103(Global_8156);
			if (Global_8156 == 1)
			{
				func_158(Global_19662, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_19685), -1082130432, -1082130432, -1082130432);
				Global_19661 = Global_19685;
			}
			else
			{
				func_158(Global_19662, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_19686), -1082130432, -1082130432, -1082130432);
				Global_19661 = Global_19686;
			}
			if (Global_19669)
			{
				func_102(Global_19662, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
				func_102(Global_19662, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
			}
			else
			{
				func_102(Global_19662, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
				func_102(Global_19662, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_19866 == 0)
			{
				func_102(Global_19662, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				VEHICLE::IS_VEHICLE_DRIVEABLE(&Global_7551, 17);
			}
			else if (Global_76833)
			{
				func_102(Global_19662, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				VEHICLE::IS_VEHICLE_DRIVEABLE(&Global_7551, 17);
			}
			else
			{
				if (Global_19865 == 1)
				{
					if (Global_19669)
					{
						func_102(Global_19662, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
					}
					else
					{
						func_102(Global_19662, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_19669)
				{
					func_102(Global_19662, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
				}
				else
				{
					func_102(Global_19662, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				unk_0xBE20AB8238688965(&Global_7551, 17);
			}
			if (Global_76833)
			{
				func_100();
				VEHICLE::IS_VEHICLE_DRIVEABLE(&Global_7553, 9);
				func_158(Global_19662, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_19685), -1082130432, -1082130432, -1082130432);
			}
			break;
		
		case 7:
			break;
		
		case 10:
			func_158(Global_19662, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_102(Global_19662, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_102(Global_19662, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			VEHICLE::IS_VEHICLE_DRIVEABLE(&Global_7551, 17);
			if (unk_0xCE990E643CD9D0E5(Global_7551, 20))
			{
				func_102(Global_19662, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_19669)
			{
				func_102(Global_19662, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_19624)
				{
					func_102(Global_19662, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_102(Global_19662, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			break;
		
		case 9:
			if (Global_19680 == 1)
			{
				func_99();
				func_158(Global_19662, "SET_THEME", SYSTEM::TO_FLOAT(Global_111858.f_14047[Global_19681 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				if (Global_21018)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_19662, "SET_DATA_SLOT");
					NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE(4);
					NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE(0);
					NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE(2);
					MISC::UPDATE_ONSCREEN_KEYBOARD("CELL_CONDFON");
					unk_0x9EFD301E3BE8324E(&Global_21020);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT();
					func_62("CELL_300");
					func_62("CELL_217");
					func_62("CELL_217");
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				else if (func_98(Global_6866, Global_19681) == 0)
				{
					func_102(Global_19662, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(2), -1f, -1f, &(Global_117[Global_6866 /*10*/].f_4), "CELL_300", "CELL_217", "CELL_195", 0);
				}
				else
				{
					func_102(Global_19662, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(2), -1f, -1f, &(Global_1848[Global_6866 /*29*/].f_3), &(Global_1848[Global_6866 /*29*/].f_7), "CELL_217", &(Global_1848[Global_6866 /*29*/].f_3), 0);
				}
				func_158(Global_19662, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			else if (Global_21005 == 4 || Global_21005 == 3)
			{
				func_158(Global_19662, "SET_THEME", SYSTEM::TO_FLOAT(Global_111858.f_14047[Global_19681 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				func_99();
				if (Global_21018)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_19662, "SET_DATA_SLOT");
					NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE(4);
					NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE(0);
					NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE(2);
					MISC::UPDATE_ONSCREEN_KEYBOARD("CELL_CONDFON");
					unk_0x9EFD301E3BE8324E(&Global_21020);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT();
					func_62("CELL_300");
					func_62("CELL_219");
					func_62("CELL_219");
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				else
				{
					if (Global_21263)
					{
						StringCopy(&Var0, "CELL_219", 24);
					}
					else
					{
						StringCopy(&Var0, "CELL_211", 24);
					}
					if (func_98(Global_6866, Global_19681) == 0)
					{
						func_158(Global_19662, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_102(Global_19662, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_117[Global_6866 /*10*/].f_4), "CELL_300", &Var0, "CELL_195", 0);
					}
					else
					{
						func_158(Global_19662, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_102(Global_19662, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_1848[Global_6866 /*29*/].f_3), &(Global_1848[Global_6866 /*29*/].f_7), &Var0, &(Global_1848[Global_6866 /*29*/].f_3), 0);
					}
				}
				func_158(Global_19662, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			func_96();
			break;
		
		default:
			break;
	}
}

void func_96()
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_19662))
	{
		func_97();
		if (Global_19680 == 1)
		{
			if (Global_19669)
			{
				func_102(Global_19662, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_203", 0, 0, 0, 0);
			}
			else
			{
				func_102(Global_19662, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_21052)
			{
				func_102(Global_19662, "SET_SOFT_KEYS", 3f, 0f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (unk_0xCE990E643CD9D0E5(Global_7551, 20))
			{
				func_102(Global_19662, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_19669)
			{
				func_102(Global_19662, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_204", 0, 0, 0, 0);
			}
			else
			{
				func_102(Global_19662, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_102(Global_19662, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			VEHICLE::IS_VEHICLE_DRIVEABLE(&Global_7551, 17);
		}
		else
		{
			func_102(Global_19662, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_102(Global_19662, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			VEHICLE::IS_VEHICLE_DRIVEABLE(&Global_7551, 17);
			if (unk_0xCE990E643CD9D0E5(Global_7551, 20))
			{
				func_102(Global_19662, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_19669)
			{
				func_102(Global_19662, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_19624)
				{
					func_102(Global_19662, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_102(Global_19662, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
	}
}

void func_97()
{
	if (Global_76833)
	{
		func_102(Global_19662, "SET_SOFT_KEYS", 1f, 0f, 9f, -1f, -1f, 0, 0, 0, 0, 0);
		VEHICLE::IS_VEHICLE_DRIVEABLE(&Global_7551, 17);
	}
}

int func_98(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_1848[iParam0 /*29*/].f_24[iParam1];
}

void func_99()
{
	if (!PED::IS_PED_IN_ANY_POLICE_VEHICLE(unk_0x9B0761B4C3EB8BC7(), 0))
	{
		if (Global_19681 == 0)
		{
			switch (Global_111858.f_14047[Global_19681 /*20*/].f_6)
			{
				case 1:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 0);
					break;
				
				case 2:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 1);
					break;
				
				case 3:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 2);
					break;
				
				case 4:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 3);
					break;
				
				case 5:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 4);
					break;
				
				case 6:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 5);
					break;
				
				case 7:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 6);
					break;
				
				default:
					break;
				}
		}
		if (Global_19681 == 1)
		{
			switch (Global_111858.f_14047[Global_19681 /*20*/].f_6)
			{
				case 1:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 6);
					break;
				
				case 2:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 0);
					break;
				
				case 3:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 1);
					break;
				
				case 4:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 2);
					break;
				
				case 5:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 3);
					break;
				
				case 6:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 4);
					break;
				
				case 7:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 5);
					break;
				
				default:
					break;
				}
		}
		if (Global_19681 == 2)
		{
			switch (Global_111858.f_14047[Global_19681 /*20*/].f_6)
			{
				case 1:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 5);
					break;
				
				case 2:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 6);
					break;
				
				case 3:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 1);
					break;
				
				case 4:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 0);
					break;
				
				case 5:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 2);
					break;
				
				case 6:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 3);
					break;
				
				case 7:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 4);
					break;
				
				default:
					break;
				}
		}
		if (Global_19681 == 3)
		{
			switch (Global_4271300)
			{
				case 1:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 0);
					break;
				
				case 2:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 1);
					break;
				
				case 3:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 2);
					break;
				
				case 4:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 3);
					break;
				
				case 5:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 4);
					break;
				
				case 6:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 5);
					break;
				
				case 7:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 6);
					break;
				
				default:
					break;
				}
			}
	}
}

void func_100()
{
	if (Global_76833)
	{
		if (func_101() == 0)
		{
			return;
		}
		func_102(Global_19662, "SET_SOFT_KEYS", 1f, 1f, 9f, -1f, -1f, 0, 0, 0, 0, 0);
		unk_0xBE20AB8238688965(&Global_7551, 17);
	}
}

int func_101()
{
	return 0;
}

void func_102(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11)
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
	if (!CAM::IS_SCREEN_FADED_OUT(sParam7))
	{
		func_62(bParam7);
	}
	if (!CAM::IS_SCREEN_FADED_OUT(iParam8))
	{
		func_62(bParam8);
	}
	if (!CAM::IS_SCREEN_FADED_OUT(iParam9))
	{
		func_62(bParam9);
	}
	if (!CAM::IS_SCREEN_FADED_OUT(iParam10))
	{
		func_62(bParam10);
	}
	if (!CAM::IS_SCREEN_FADED_OUT(iParam11))
	{
		func_62(bParam11);
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_103(int iParam0)
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
	
	Global_22073 = 0;
	Global_8156 = iParam0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Global_8120[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar1 = 0;
		if (func_61(14))
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_7558[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_7558[iVar1 /*15*/].f_4)
					{
						if (Global_8120[iVar0] == 0)
						{
							Global_8084[iVar0] = iVar1;
							if (iVar1 == 3)
							{
								if (unk_0xCE990E643CD9D0E5(Global_7552, 3))
								{
									iVar2 = 42;
									Global_19868 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_19868 = 0;
								}
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_19662, "SET_DATA_SLOT");
								NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE(1);
								NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE(iVar0);
								NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE(Global_7558[iVar1 /*15*/].f_10);
								NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE(0);
								func_62(&(Global_7558[iVar1 /*15*/]));
								NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE(iVar2);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							if (Global_2462245)
							{
								if (iVar1 == 14)
								{
									func_102(Global_19662, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_7558[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_22068), -1f, &(Global_7558[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							Global_8120[iVar0] = 1;
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
					if (iVar0 == Global_7558[iVar1 /*15*/].f_4)
					{
						if (Global_8120[iVar0] == 0)
						{
							Global_8084[iVar0] = iVar1;
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
								func_102(Global_19662, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_7558[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_22073), -1f, &(Global_7558[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_76833)
								{
									iVar4 = 0;
									iVar4 = Global_4269758;
									iVar5 = 0;
									while (iVar5 < 12)
									{
										if (Global_4269759[iVar5 /*104*/].f_24 != 0)
										{
											if (Global_4269759[iVar5 /*104*/].f_28 == 0)
											{
												if (Global_4269759[iVar5 /*104*/].f_99[Global_19681] == 1)
												{
													iVar4++;
												}
											}
										}
										iVar5++;
									}
									func_102(Global_19662, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_7558[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar4), -1f, &(Global_7558[iVar1 /*15*/]), 0, 0, 0, 0);
								}
								else
								{
									switch (Global_19681)
									{
										case 0:
											iVar6 = Global_42812;
											break;
										
										case 1:
											iVar6 = Global_42813;
											break;
										
										case 2:
											iVar6 = Global_42814;
											break;
										
										default:
											break;
									}
									func_102(Global_19662, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_7558[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar6), -1f, &(Global_7558[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_102(Global_19662, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_7558[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_22068), -1f, &(Global_7558[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_19662, "SET_DATA_SLOT");
								NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE(1);
								NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE(iVar0);
								NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE(Global_7558[iVar1 /*15*/].f_10);
								NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE(0);
								func_62(&(Global_7558[iVar1 /*15*/]));
								NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE(Global_7557);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (iVar1 == 2)
							{
								if (unk_0xCE990E643CD9D0E5(Global_7552, 6))
								{
									iVar7 = 42;
								}
								else
								{
									iVar7 = 255;
								}
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_19662, "SET_DATA_SLOT");
								NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE(1);
								NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE(iVar0);
								NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE(Global_7558[iVar1 /*15*/].f_10);
								NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE(0);
								func_62(&(Global_7558[iVar1 /*15*/]));
								NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE(iVar7);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (iVar1 == 3)
							{
								if (unk_0xCE990E643CD9D0E5(Global_7552, 3))
								{
									iVar8 = 42;
									Global_19868 = 1;
								}
								else
								{
									iVar8 = 255;
									Global_19868 = 0;
								}
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_19662, "SET_DATA_SLOT");
								NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE(1);
								NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE(iVar0);
								NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE(Global_7558[iVar1 /*15*/].f_10);
								NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE(0);
								func_62(&(Global_7558[iVar1 /*15*/]));
								NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE(iVar8);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (iVar1 == 8)
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_19662, "SET_DATA_SLOT");
								NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE(1);
								NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE(iVar0);
								NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE(Global_7558[iVar1 /*15*/].f_10);
								NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE(0);
								func_62(&(Global_7558[iVar1 /*15*/]));
								NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE(42);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if ((iVar1 == 23 && NETWORK::NETWORK_IS_GAME_IN_PROGRESS(&(Global_7558[iVar1 /*15*/]), "CELL_BENWEB")) && unk_0xCE990E643CD9D0E5(Global_7552, 6))
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_19662, "SET_DATA_SLOT");
								NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE(1);
								NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE(iVar0);
								NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE(Global_7558[iVar1 /*15*/].f_10);
								NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE(0);
								func_62(&(Global_7558[iVar1 /*15*/]));
								NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE(42);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (Global_7558[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1627252.f_1;
								func_102(Global_19662, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_7558[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar9), -1f, &(Global_7558[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_102(Global_19662, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_7558[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(0), -1f, &(Global_7558[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							Global_8120[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

void func_104()
{
	switch (iLocal_51)
	{
		case 1:
			HUD::CLEAR_FLOATING_HELP(0, true);
			if (unk_0xCE990E643CD9D0E5(Global_7551, 28))
			{
				StringCopy(&cLocal_96, "CELL_296", 16);
				func_54();
			}
			else
			{
				StringCopy(&cLocal_96, "CELL_295", 16);
				func_28();
			}
			break;
		
		case 2:
			if (!unk_0xCE990E643CD9D0E5(Global_7551, 22))
			{
				HUD::CLEAR_FLOATING_HELP(0, true);
				if (unk_0xCE990E643CD9D0E5(Global_7551, 28))
				{
					StringCopy(&cLocal_96, "CELL_294", 16);
					func_91();
				}
				else
				{
					StringCopy(&cLocal_96, "CELL_293", 16);
					func_90();
				}
				iLocal_51 = 2;
			}
			break;
		
		default:
			break;
	}
}

void func_105(bool bParam0)
{
	if (bParam0)
	{
		if (!func_118())
		{
			unk_0xBE20AB8238688965(&Global_1689730, 17);
		}
	}
	else if (func_118())
	{
		VEHICLE::IS_VEHICLE_DRIVEABLE(&Global_1689730, 17);
	}
}

int func_106(int iParam0, int iParam1, int iParam2)
{
	if (PAD::IS_DISABLED_CONTROL_PRESSED(iParam0, iParam1) || (iParam2 == 1 && PAD::IS_CONTROL_JUST_PRESSED(iParam0, iParam1)))
	{
		if (ENTITY::GET_ENTITY_HEADING())
		{
			if (GRAPHICS::RESET_SCRIPT_GFX_ALIGN() == 0 || (GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU() && HUD::_0x5BFF36D6ED83E0AE(2)))
			{
				return 0;
			}
		}
		if (HUD::DISABLE_FRONTEND_THIS_FRAME() || CAM::IS_SCREEN_FADED_IN())
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

void func_107(bool bParam0)
{
	if (bParam0)
	{
		if (!func_108())
		{
			unk_0xBE20AB8238688965(&Global_1689730, 18);
		}
	}
	else if (func_108())
	{
		VEHICLE::IS_VEHICLE_DRIVEABLE(&Global_1689730, 18);
	}
}

bool func_108()
{
	return unk_0xCE990E643CD9D0E5(Global_1689730, 18);
}

void func_109(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_110(0))
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

int func_110(int iParam0)
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

void func_111(int iParam0)
{
	if ((Global_4456448.f_123772 == 0 && Global_4456448.f_123773 == 0) && !Global_1673793)
	{
		if (func_112(PLAYER::PLAYER_ID()) && iParam0)
		{
			Global_1703977 = 1;
		}
		else
		{
			GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
		}
	}
}

int func_112(int iParam0)
{
	if (iParam0 != func_115())
	{
		if (func_114(iParam0, 1, 1))
		{
			if (Global_2425869[iParam0 /*443*/].f_314.f_6 != -1)
			{
				return func_113(Global_2425869[iParam0 /*443*/].f_314.f_6) == 17;
			}
		}
	}
	return 0;
}

int func_113(int iParam0)
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

int func_114(int iParam0, bool bParam1, bool bParam2)
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

int func_115()
{
	return -1;
}

void func_116(int iParam0, int iParam1)
{
	if (Global_4456448.f_123772 == 1)
	{
	}
	else if (Global_4456448.f_123773 == 1)
	{
	}
	else
	{
		unk_0xE616BD4C9E3D197E(iParam0, iParam1);
	}
}

int func_117()
{
	if (unk_0xCE990E643CD9D0E5(Global_7551, 15))
	{
		return 1;
	}
	return 0;
}

bool func_118()
{
	return unk_0xCE990E643CD9D0E5(Global_1689730, 17);
}

void func_119()
{
	if (Global_19623)
	{
		Local_43 = { -90.3f, 0f, 90f };
		Local_44 = { 1.5f, 0f, -17f };
		if (func_92())
		{
			MOBILE::GET_MOBILE_PHONE_ROTATION(&Local_45, 0);
			Local_43 = { Local_45 };
			unk_0x1F1B1269BB6217F7(&Local_46);
			Local_44 = { Local_46 };
			iLocal_69 = 0;
			iLocal_70 = 0;
			iLocal_71 = 0;
			iLocal_72 = 0;
			iLocal_73 = 0;
			iLocal_74 = 0;
		}
		if (iLocal_71 == 0)
		{
			if (iLocal_72)
			{
				Local_42.x = (Local_42.x - 14f);
			}
			if (Local_42.x < Local_44.x || Local_42.x == Local_44.x)
			{
				iLocal_72 = 0;
			}
			if (iLocal_73)
			{
				Local_42.f_1 = (Local_42.f_1 + 7f);
			}
			if (Local_42.f_1 > Local_44.f_1 || Local_42.f_1 == Local_44.f_1)
			{
				iLocal_73 = 0;
			}
			if (iLocal_74)
			{
				Local_42.f_2 = (Local_42.f_2 + 12f);
			}
			if (Local_42.f_2 > Local_44.f_2 || Local_42.f_2 == Local_44.f_2)
			{
				iLocal_74 = 0;
			}
		}
		if (iLocal_69)
		{
			Local_41.x = (Local_41.x - 1f);
		}
		if (Local_41.x < Local_43.x || Local_41.x == Local_43.x)
		{
			Local_41.x = Local_43.x;
			iLocal_69 = 0;
		}
		if (iLocal_70)
		{
			Local_41.f_1 = (Local_41.f_1 - 0.5f);
		}
		if (Local_41.f_1 < Local_43.f_1 || Local_41.f_1 == Local_43.f_1)
		{
			Local_41.f_1 = Local_43.f_1;
			iLocal_70 = 0;
		}
		if (iLocal_71)
		{
			Local_41.f_2 = (Local_41.f_2 + 11f);
		}
		if (Local_41.f_2 > Local_43.f_2 || Local_41.f_2 == Local_43.f_2)
		{
			Local_41.f_2 = Local_43.f_2;
			iLocal_71 = 0;
		}
		if (func_92() == 0)
		{
			unk_0xC6EAF6E2A0CACFED(Local_41, 0);
			AUDIO::SKIP_TO_NEXT_SCRIPTED_CONVERSATION_LINE(Local_42);
		}
	}
	else
	{
		Local_43 = { -93.9f, 4.9f, 90.7f };
		if (iLocal_69)
		{
			Local_41.x = (Local_41.x - 1f);
		}
		if (Local_41.x < Local_43.x || Local_41.x == Local_43.x)
		{
			iLocal_69 = 0;
		}
		if (iLocal_70)
		{
			Local_41.f_1 = (Local_41.f_1 + 2f);
		}
		if (Local_41.f_1 > Local_43.f_1 || Local_41.f_1 == Local_43.f_1)
		{
			iLocal_70 = 0;
		}
		if (iLocal_71)
		{
			Local_41.f_2 = (Local_41.f_2 + 7f);
		}
		if (Local_41.f_2 > Local_43.f_2 || Local_41.f_2 == Local_43.f_2)
		{
			iLocal_71 = 0;
		}
		unk_0xC6EAF6E2A0CACFED(Local_41, 0);
	}
	if (Global_19623)
	{
		if (((((iLocal_69 == 0 && iLocal_70 == 0) && iLocal_71 == 0) && iLocal_72 == 0) && iLocal_73 == 0) && iLocal_74 == 0)
		{
			if (func_92())
			{
			}
			else
			{
				Local_41 = { Local_43 };
				unk_0xC6EAF6E2A0CACFED(Local_41, 0);
				Local_42 = { Local_44 };
				AUDIO::SKIP_TO_NEXT_SCRIPTED_CONVERSATION_LINE(Local_42);
			}
			if (iLocal_54 == 0)
			{
				Global_22039 = 0;
				func_116(1, 1);
				iLocal_66 = 1;
				func_120(1);
				func_59();
				func_121();
				func_57(0);
				SYSTEM::SETTIMERA(0);
				iLocal_93 = 1;
				iLocal_94 = 1;
				func_134();
				func_158(iLocal_91, "DISPLAY_VIEW", SYSTEM::TO_FLOAT(iLocal_95), -1082130432, -1082130432, -1082130432, -1082130432);
				if (!unk_0xCE990E643CD9D0E5(Global_4271024, 2))
				{
					func_158(iLocal_91, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
				}
				func_158(iLocal_91, "SET_REMAINING_PHOTOS", SYSTEM::TO_FLOAT(iLocal_60), SYSTEM::TO_FLOAT(iLocal_61), -1082130432, -1082130432, -1082130432);
				func_160();
			}
		}
	}
	else if ((iLocal_69 == 0 && iLocal_70 == 0) && iLocal_71 == 0)
	{
		Local_41 = { Local_43 };
		unk_0xC6EAF6E2A0CACFED(Local_41, 0);
		Global_22039 = 0;
	}
}

void func_120(bool bParam0)
{
	if (func_167())
	{
		if (bParam0)
		{
			if (!unk_0x93E72561EAE8CA3A())
			{
				unk_0x7A675DAD6CAB5B1E(1);
				if (Global_4269749 > 0 && Global_4269749 < 99)
				{
					unk_0x8B4A50A1E24CAAEC(sLocal_20[Global_4269749], 0);
					unk_0x764721E50928FD5D(0.25f);
				}
			}
		}
		else if (unk_0x93E72561EAE8CA3A())
		{
			unk_0x7A675DAD6CAB5B1E(0);
		}
	}
}

void func_121()
{
	if (Global_4269748 > 0 && Global_4269748 < 99)
	{
		if (!Global_1673793)
		{
			GRAPHICS::SET_TIMECYCLE_MODIFIER(sLocal_19[Global_4269748]);
		}
	}
}

void func_122()
{
	if (Global_19623)
	{
		iLocal_76 = 0;
		func_59();
		func_109(1, 1);
		func_116(1, 1);
		iLocal_66 = 1;
		Global_22042 = 1;
	}
}

void func_123()
{
	if (Global_4456448.f_123772 == 1 && func_124())
	{
		return;
	}
	if (iLocal_78 == 0)
	{
		if (unk_0xCE990E643CD9D0E5(Global_7551, 28))
		{
			StringCopy(&cLocal_96, "CELL_296", 16);
			func_54();
		}
		else
		{
			StringCopy(&cLocal_96, "CELL_295", 16);
			func_28();
		}
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS(&cLocal_96, "DUMMYCOMPARISON"))
		{
			fLocal_49 = fLocal_50;
			fLocal_47 = fLocal_48;
			fLocal_50 = fLocal_49;
			fLocal_48 = fLocal_47;
		}
		iLocal_51 = 1;
	}
}

int func_124()
{
	if ((((func_129() || func_128()) || func_127()) || func_126()) || func_125())
	{
		return 1;
	}
	if (STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED() && unk_0xCE990E643CD9D0E5(Global_4456448.f_36, 1))
	{
		return 1;
	}
	return 0;
}

var func_125()
{
	return Global_2451787.f_23;
}

var func_126()
{
	return Global_2451787.f_20;
}

var func_127()
{
	return Global_2451787.f_18;
}

var func_128()
{
	return Global_2451787.f_17;
}

var func_129()
{
	return Global_2451787.f_16;
}

void func_130()
{
	if (!PED::IS_PED_IN_ANY_POLICE_VEHICLE(unk_0x9B0761B4C3EB8BC7(), 0))
	{
		DATAFILE::UGC_UPDATE_CONTENT(-1, "Menu_Back", &Global_19670, 1);
	}
}

void func_131()
{
	GRAPHICS::_0x1072F115DAB0717E(false, false);
	iLocal_72 = 1;
	iLocal_73 = 1;
	iLocal_74 = 1;
	iLocal_75 = 0;
	iLocal_76 = 1;
}

void func_132()
{
	func_133();
}

void func_133()
{
	if (iLocal_101)
	{
		if (SYSTEM::TIMERA() > 50)
		{
			iLocal_101 = 0;
		}
	}
	if (iLocal_101 == 0)
	{
	}
}

void func_134()
{
	if (Global_19681.f_1 > 3)
	{
		if (!HUD::DISABLE_FRONTEND_THIS_FRAME())
		{
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iLocal_91, 0.5f, 0.5f, 1f, 1f, 255, 255, 255, 255, 0);
		}
	}
}

void func_135()
{
	if (func_61(14))
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
		Global_19681 = func_11();
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

void func_136(int iParam0)
{
	if (func_138())
	{
		return;
	}
	if (Global_19864)
	{
		if (func_154())
		{
			func_109(1, 1);
		}
		else
		{
			func_109(0, 0);
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
	if (!func_137())
	{
		Global_19681.f_1 = 3;
	}
}

int func_137()
{
	if (Global_19681.f_1 == 1 || Global_19681.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

bool func_138()
{
	return unk_0xCE990E643CD9D0E5(Global_1689730, 19);
}

void func_139()
{
	MONEY::NETWORK_MONEY_CAN_BET(0, false, true);
	MONEY::NETWORK_MONEY_CAN_BET(0, 56, true);
	if (iLocal_100 == 0)
	{
		PAD::SET_INPUT_EXCLUSIVE(0, Global_19654);
		PAD::SET_INPUT_EXCLUSIVE(0, Global_19651);
		MONEY::NETWORK_MONEY_CAN_BET(0, 278, true);
		MONEY::NETWORK_MONEY_CAN_BET(0, 279, true);
		MONEY::NETWORK_MONEY_CAN_BET(0, 280, true);
		MONEY::NETWORK_MONEY_CAN_BET(0, 281, true);
		MONEY::NETWORK_MONEY_CAN_BET(0, 282, true);
		MONEY::NETWORK_MONEY_CAN_BET(0, 282, true);
		MONEY::NETWORK_MONEY_CAN_BET(0, 284, true);
		MONEY::NETWORK_MONEY_CAN_BET(0, 285, true);
		MONEY::NETWORK_MONEY_CAN_BET(0, 69, true);
		MONEY::NETWORK_MONEY_CAN_BET(0, 70, true);
		MONEY::NETWORK_MONEY_CAN_BET(0, 114, true);
		MONEY::NETWORK_MONEY_CAN_BET(0, 71, true);
		MONEY::NETWORK_MONEY_CAN_BET(0, 72, true);
		MONEY::NETWORK_MONEY_CAN_BET(0, 74, true);
		MONEY::NETWORK_MONEY_CAN_BET(0, 75, true);
		MONEY::NETWORK_MONEY_CAN_BET(0, 76, true);
		MONEY::NETWORK_MONEY_CAN_BET(0, 73, true);
		MONEY::NETWORK_MONEY_CAN_BET(0, 77, true);
		MONEY::NETWORK_MONEY_CAN_BET(0, 78, true);
		MONEY::NETWORK_MONEY_CAN_BET(0, 286, true);
		MONEY::NETWORK_MONEY_CAN_BET(0, 287, true);
		MONEY::NETWORK_MONEY_CAN_BET(0, 79, true);
		MONEY::NETWORK_MONEY_CAN_BET(0, 80, true);
		MONEY::NETWORK_MONEY_CAN_BET(0, 81, true);
		MONEY::NETWORK_MONEY_CAN_BET(0, 82, true);
		MONEY::NETWORK_MONEY_CAN_BET(0, 86, true);
		MONEY::NETWORK_MONEY_CAN_BET(0, 59, true);
		MONEY::NETWORK_MONEY_CAN_BET(0, 60, true);
		MONEY::NETWORK_MONEY_CAN_BET(0, 61, true);
		MONEY::NETWORK_MONEY_CAN_BET(0, 62, true);
		MONEY::NETWORK_MONEY_CAN_BET(0, 63, true);
		MONEY::NETWORK_MONEY_CAN_BET(0, 64, true);
		MONEY::NETWORK_MONEY_CAN_BET(0, 87, true);
		MONEY::NETWORK_MONEY_CAN_BET(0, 88, true);
		MONEY::NETWORK_MONEY_CAN_BET(0, 89, true);
		MONEY::NETWORK_MONEY_CAN_BET(0, 90, true);
		MONEY::NETWORK_MONEY_CAN_BET(0, 107, true);
		MONEY::NETWORK_MONEY_CAN_BET(0, 108, true);
		MONEY::NETWORK_MONEY_CAN_BET(0, 109, true);
		MONEY::NETWORK_MONEY_CAN_BET(0, 110, true);
		MONEY::NETWORK_MONEY_CAN_BET(0, 111, true);
		MONEY::NETWORK_MONEY_CAN_BET(0, 112, true);
		MONEY::NETWORK_MONEY_CAN_BET(0, 113, true);
		MONEY::NETWORK_MONEY_CAN_BET(0, 114, true);
		MONEY::NETWORK_MONEY_CAN_BET(0, 91, true);
		MONEY::NETWORK_MONEY_CAN_BET(0, 92, true);
		MONEY::NETWORK_MONEY_CAN_BET(0, 68, true);
		MONEY::NETWORK_MONEY_CAN_BET(0, 102, true);
		MONEY::NETWORK_MONEY_CAN_BET(0, 136, true);
		MONEY::NETWORK_MONEY_CAN_BET(0, 137, true);
		MONEY::NETWORK_MONEY_CAN_BET(0, 138, true);
		MONEY::NETWORK_MONEY_CAN_BET(0, 139, true);
		MONEY::NETWORK_MONEY_CAN_BET(0, 102, true);
	}
}

int func_140()
{
	int iVar0;
	
	if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(unk_0x9B0761B4C3EB8BC7()))
	{
		if (SYSTEM::VDIST(unk_0x9B0761B4C3EB8BC7(), 0))
		{
			iVar0 = ENTITY::GET_ENTITY_MODEL(unk_0x9B0761B4C3EB8BC7(), 0);
			if (SYSTEM::VDIST2(iVar0, -1, 0))
			{
				return 1;
			}
			else if (!MISC::IS_MINIGAME_IN_PROGRESS(iVar0, -1, 0) == unk_0x9B0761B4C3EB8BC7())
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_141()
{
	var uVar0;
	
	func_149(&uVar0);
	if (Global_1312872 == 0)
	{
		if (!MISC::SET_BIT())
		{
			return 1;
		}
	}
	if (func_148())
	{
		return 1;
	}
	if (Global_2464493)
	{
		return 1;
	}
	if (func_147())
	{
		return 1;
	}
	if (func_146(159))
	{
		if (!func_145())
		{
			return 1;
		}
	}
	if (func_146(157))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_SESSION_IS_IN_VOICE_SESSION())
	{
		return 1;
	}
	if (func_142() != 0)
	{
		if (INTERIOR::GET_INTERIOR_AT_COORDS(func_142()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_142()
{
	switch (func_144())
	{
		case 0:
			return func_143();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_143()
{
	switch (Global_2464595)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_144()
{
	return Global_30968;
}

bool func_145()
{
	return Global_2451787.f_696;
}

int func_146(int iParam0)
{
	if (unk_0x16F1FCCC54559709(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_147()
{
	return Global_2462250;
}

bool func_148()
{
	return Global_2451787.f_691;
}

void func_149(var uParam0)
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
					func_150(iVar0);
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

void func_150(int iParam0)
{
	struct<3> Var0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	if (unk_0x477FAFFE21935947(1, iParam0, &Var0, 3))
	{
		if (func_114(Var0.f_1, 1, 1))
		{
			iVar1 = PLAYER::GET_PLAYER_PED(Var0.f_1);
			if (MISC::IS_BIT_SET(iVar1))
			{
				if (SYSTEM::VDIST(iVar1, 0))
				{
					iVar2 = ENTITY::GET_ENTITY_MODEL(iVar1, 0);
					if (VEHICLE::REMOVE_VEHICLE_WINDOW(iVar2, Var0.f_2) && NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
					{
						if (func_151(iVar2, &bVar3))
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

int func_151(int iParam0, var uParam1)
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

void func_152()
{
	if (iLocal_106 == 1)
	{
		unk_0x4CB4237D8858ADA6(7);
		unk_0x4CB4237D8858ADA6(1);
		unk_0x4CB4237D8858ADA6(3);
		unk_0x4CB4237D8858ADA6(4);
		unk_0x4CB4237D8858ADA6(6);
		unk_0x4CB4237D8858ADA6(8);
		unk_0x4CB4237D8858ADA6(9);
		unk_0x4CB4237D8858ADA6(2);
	}
	else
	{
		unk_0xA86915034F55A3BF();
	}
}

void func_153(char* sParam0, int iParam1)
{
	unk_0x17751E107423AFE9(sParam0);
	FILES::GET_DLC_VEHICLE_FLAGS(0, 0, 1, iParam1);
}

bool func_154()
{
	return unk_0xCE990E643CD9D0E5(Global_1689730, 5);
}

void func_155()
{
	if (func_156())
	{
		GRAPHICS::_0x4AF92ACD3141D96C();
		if (GRAPHICS::_0x2A893980E96B659A(0))
		{
			iLocal_54 = 1;
			iLocal_62 = 0;
		}
		else
		{
			Global_22042 = 1;
			Global_19681.f_1 = 3;
			HUD::BUSYSPINNER_OFF();
		}
	}
	else
	{
		iLocal_60 = 0;
		iLocal_61 = 0;
		if (iLocal_55 == 1)
		{
			if (iLocal_78 == 0)
			{
				if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_91))
				{
					if (func_167())
					{
						if (Global_4269749 == 0)
						{
							if (!unk_0xCE990E643CD9D0E5(Global_4271024, 2))
							{
								func_158(iLocal_91, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
							}
						}
						func_158(iLocal_91, "SET_REMAINING_PHOTOS", SYSTEM::TO_FLOAT(iLocal_60), SYSTEM::TO_FLOAT(iLocal_61), -1082130432, -1082130432, -1082130432);
					}
					else
					{
						if (!unk_0xCE990E643CD9D0E5(Global_4271024, 2))
						{
							func_158(iLocal_91, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
						}
						func_158(iLocal_91, "SET_REMAINING_PHOTOS", SYSTEM::TO_FLOAT(iLocal_60), SYSTEM::TO_FLOAT(iLocal_61), -1082130432, -1082130432, -1082130432);
					}
				}
			}
			else if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_91))
			{
				func_158(iLocal_91, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_158(iLocal_91, "SET_REMAINING_PHOTOS", SYSTEM::TO_FLOAT(iLocal_60), SYSTEM::TO_FLOAT(iLocal_61), -1082130432, -1082130432, -1082130432);
			}
			iLocal_55 = 0;
		}
		iLocal_62 = 0;
		HUD::BUSYSPINNER_OFF();
	}
}

int func_156()
{
	if (Global_4456448.f_123772 == 1)
	{
		if (Global_76833)
		{
			return 0;
		}
	}
	if (Global_4456448.f_123773 == 1)
	{
		if (Global_76833)
		{
			return 0;
		}
	}
	if (unk_0x11E5DE894D6A8A5F() || MISC::IS_PS3_VERSION())
	{
		if (unk_0xCE990E643CD9D0E5(Global_7552, 28))
		{
			return 0;
		}
	}
	return 1;
}

void func_157(int iParam0, char* sParam1)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, sParam1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_158(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
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

int func_159()
{
	if (Global_76833)
	{
		Global_19681 = 3;
	}
	else
	{
		Global_19681 = func_11();
	}
	if (Global_19681 > 3)
	{
		Global_19681 = 3;
	}
	return Global_111858.f_14047[Global_19681 /*20*/].f_7;
}

void func_160()
{
	if (Global_19681.f_1 > 3)
	{
		Global_19681.f_1 = 8;
	}
	Global_22041 = 0;
	iLocal_78 = 0;
	if (!PED::IS_PED_IN_ANY_POLICE_VEHICLE(unk_0x9B0761B4C3EB8BC7(), 0))
	{
		Local_34 = { NETWORK::NETWORK_ARE_HANDLES_THE_SAME(unk_0x9B0761B4C3EB8BC7(), 1) };
	}
	if (Global_19623)
	{
		while (SYSTEM::TIMERA() < iLocal_88)
		{
			SYSTEM::WAIT(0);
			func_134();
			func_88();
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME();
		}
		func_157(iLocal_91, "OPEN_SHUTTER");
		func_152();
		func_123();
		iLocal_80 = 1;
		SYSTEM::SETTIMERB(0);
	}
	else
	{
		func_116(1, 1);
		func_120(1);
		func_59();
		func_121();
		func_57(0);
		iLocal_66 = 1;
	}
}

void func_161(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xBE20AB8238688965(&Global_7551, 15);
	}
	else
	{
		VEHICLE::IS_VEHICLE_DRIVEABLE(&Global_7551, 15);
	}
}

bool func_162()
{
	return Global_1312872;
}

int func_163(int iParam0, int iParam1)
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

void func_164()
{
}

int func_165(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (ENTITY::GET_ENTITY_HEADING())
	{
		if (CUTSCENE::_0xA0FE76168A189DDB() != bParam0 && bParam2)
		{
			CUTSCENE::_0x20746F7B1032A3C7(bParam0, bParam1, true, bParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_166()
{
	if (!PED::IS_PED_IN_ANY_POLICE_VEHICLE(unk_0x9B0761B4C3EB8BC7(), 0))
	{
		if (PED::GET_PED_STEALTH_MOVEMENT(unk_0x9B0761B4C3EB8BC7()))
		{
			PED::SET_PED_STEALTH_MOVEMENT(unk_0x9B0761B4C3EB8BC7(), false, 0);
			unk_0x458C1C943DBDA048(fLocal_107);
			unk_0x2B91CAFA8258BC2E(fLocal_108);
			unk_0x089E3A18DC994824(fLocal_109);
		}
		else
		{
			unk_0x458C1C943DBDA048(fLocal_107);
			unk_0x2B91CAFA8258BC2E(fLocal_108);
			unk_0x089E3A18DC994824(fLocal_109);
		}
	}
	unk_0xFC3FA536C926A9A9(fLocal_110);
	unk_0x8EBC38836D4FB282(fLocal_111);
	unk_0x9C94791279937960(fLocal_112);
	unk_0x2C25F68FE1625FE6(fLocal_113);
	func_56();
}

int func_167()
{
	if (iLocal_23 == 0)
	{
		iLocal_23 = 1;
	}
	return 1;
}

