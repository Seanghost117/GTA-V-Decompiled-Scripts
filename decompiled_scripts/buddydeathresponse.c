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
	int iLocal_19 = 0;
	bool bLocal_20 = 0;
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
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(2) || REPLAY::_IS_INTERIOR_RENDERING_DISABLED())
	{
		ENTITY::STOP_ENTITY_ANIM();
	}
	func_1();
}

void func_1()
{
	struct<3> Var0;
	int iVar1;
	
	while (!func_9(&bLocal_20))
	{
		SYSTEM::WAIT(0);
	}
	if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_20))
	{
		if (!Global_95450)
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(bLocal_20, true, true);
			if (TASK::GET_SCRIPT_TASK_STATUS(bLocal_20, 1435919172) != 7)
			{
				HUD::HIDE_HUD_AND_RADAR_THIS_FRAME(bLocal_20);
			}
			Var0 = { NETWORK::NETWORK_ARE_HANDLES_THE_SAME(unk_0x9B0761B4C3EB8BC7(), 0) };
			PED::_0x2208438012482A1A(bLocal_20, 1);
			TASK::OPEN_SEQUENCE_TASK(&iVar1);
			if (!SYSTEM::VDIST(bLocal_20, 0))
			{
				if (!PED::IS_PED_IN_COMBAT(bLocal_20, 0) && !SYSTEM::VDIST(bLocal_20, 0))
				{
					TASK::TASK_TURN_PED_TO_FACE_COORD(0, Var0, 6000);
				}
			}
			TASK::TASK_LOOK_AT_COORD(0, Var0, 6000, 0, 2);
			TASK::CLOSE_SEQUENCE_TASK(iVar1);
			AUDIO::STOP_SCRIPTED_CONVERSATION(bLocal_20, iVar1);
		}
		func_2(bLocal_20);
	}
	while (!PED::REMOVE_SCENARIO_BLOCKING_AREA())
	{
		SYSTEM::WAIT(0);
	}
	if (MISC::IS_BIT_SET(bLocal_20))
	{
		if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_20))
		{
			PED::SET_PED_KEEP_TASK(bLocal_20, true);
		}
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&bLocal_20);
	}
	Global_95450 = 0;
	ENTITY::STOP_ENTITY_ANIM();
}

void func_2(bool bParam0)
{
	int iVar0;
	
	iVar0 = MISC::GET_GAME_TIMER() + 1000;
	while (MISC::GET_GAME_TIMER() < iVar0 && !PED::REMOVE_SCENARIO_BLOCKING_AREA())
	{
		SYSTEM::WAIT(0);
	}
	if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bParam0))
	{
		if (iLocal_19 == 1)
		{
			switch (func_5(unk_0x9B0761B4C3EB8BC7()))
			{
				case 2:
					func_3(bParam0, "BUDDY_SEES_TREVOR_DEATH", "FRANKLIN_NORMAL", 3);
					break;
				
				case 0:
					func_3(bParam0, "BUDDY_SEES_MICHAEL_DEATH", "FRANKLIN_NORMAL", 3);
					break;
			}
		}
		else if (iLocal_19 == 2)
		{
			switch (func_5(unk_0x9B0761B4C3EB8BC7()))
			{
				case 1:
					func_3(bParam0, "BUDDY_SEES_FRANKLIN_DEATH", "TREVOR_NORMAL", 3);
					break;
				
				case 0:
					func_3(bParam0, "BUDDY_SEES_MICHAEL_DEATH", "TREVOR_NORMAL", 3);
					break;
			}
		}
		else if (iLocal_19 == 0)
		{
			switch (func_5(unk_0x9B0761B4C3EB8BC7()))
			{
				case 2:
					func_3(bParam0, "BUDDY_SEES_TREVOR_DEATH", "MICHAEL_NORMAL", 3);
					break;
				
				case 1:
					func_3(bParam0, "BUDDY_SEES_FRANKLIN_DEATH", "MICHAEL_NORMAL", 3);
					break;
				}
			}
	}
}

void func_3(int iParam0, char* sParam1, char* sParam2, int iParam3)
{
	AUDIO::_PLAY_AMBIENT_SPEECH_WITH_VOICE(iParam0, sParam1, sParam2, func_4(iParam3), false);
}

int func_4(int iParam0)
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

int func_5(bool bParam0)
{
	int iVar0;
	void fVar1;
	
	if (MISC::IS_BIT_SET(iParam0))
	{
		fVar1 = MISC::GET_MODEL_DIMENSIONS(bParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_6(iVar0) == fVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_6(int iParam0)
{
	if (func_8(iParam0))
	{
		return func_7(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_7(int iParam0)
{
	return Global_1848[iParam0 /*29*/];
}

bool func_8(int iParam0)
{
	return iParam0 < 3;
}

int func_9(var uParam0)
{
	int iVar0;
	
	iLocal_18 = 0;
	while (iLocal_18 < 9)
	{
		if (MISC::IS_BIT_SET(Global_96324[iLocal_18]) && !STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(Global_96324[iLocal_18]))
		{
			if (Global_96324[iLocal_18] != unk_0x9B0761B4C3EB8BC7())
			{
				if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(Global_96324[iLocal_18]))
				{
					if (SYSTEM::VDIST(Global_96324[iLocal_18], 0) || !ENTITY::IS_ENTITY_ATTACHED(Global_96324[iLocal_18]))
					{
						if (HUD::SET_BLIP_NAME_FROM_TEXT_FILE(NETWORK::NETWORK_ARE_HANDLES_THE_SAME(Global_96324[iLocal_18], 1), NETWORK::NETWORK_ARE_HANDLES_THE_SAME(unk_0x9B0761B4C3EB8BC7(), 0), 1) < 10f)
						{
							iLocal_19 = func_5(Global_96324[iLocal_18]);
							if ((iLocal_19 == 0 || iLocal_19 == 2) || iLocal_19 == 1)
							{
								if (iLocal_19 != func_10())
								{
									if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(Global_96324[iLocal_18], unk_0x9B0761B4C3EB8BC7(), 17))
									{
										if (SYSTEM::VDIST(Global_96324[iLocal_18], 0))
										{
											iVar0 = ENTITY::GET_ENTITY_MODEL(Global_96324[iLocal_18], 0);
										}
										if ((MISC::IS_BIT_SET(iVar0) && ENTITY::GET_ENTITY_COORDS(bVar0, false)) || !MISC::IS_BIT_SET(bVar0))
										{
											*uParam0 = Global_96324[iLocal_18];
											return 1;
										}
									}
								}
							}
						}
					}
				}
			}
		}
		iLocal_18++;
	}
	if (PED::REMOVE_SCENARIO_BLOCKING_AREA())
	{
		return 1;
	}
	return 0;
}

int func_10()
{
	func_11();
	return Global_111858.f_2359.f_539.f_4321;
}

void func_11()
{
	int iVar0;
	
	if (MISC::IS_BIT_SET(unk_0x9B0761B4C3EB8BC7()))
	{
		if (func_6(Global_111858.f_2359.f_539.f_4321) != MISC::GET_MODEL_DIMENSIONS(unk_0x9B0761B4C3EB8BC7()))
		{
			iVar0 = func_5(unk_0x9B0761B4C3EB8BC7());
			if (func_8(iVar0) && (!func_12(14) || Global_110809))
			{
				if (Global_111858.f_2359.f_539.f_4321 != iVar0 && func_8(Global_111858.f_2359.f_539.f_4321))
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

bool func_12(int iParam0)
{
	return Global_41631 == iParam0;
}

