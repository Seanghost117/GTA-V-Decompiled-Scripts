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
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	var uLocal_44 = 0;
	int* iLocal_45 = NULL;
	bool bLocal_46 = 0;
	bool bLocal_47 = 0;
	var uLocal_48 = 0;
	struct<11> Local_49[10];
	char* sLocal_50[10] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL };
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
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_35 = 3;
	iLocal_37 = 1;
	iLocal_38 = 1;
	iLocal_40 = joaat("prop_time_capsule_01");
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(210))
	{
		func_50();
	}
	if (INTERIOR::GET_INTERIOR_AT_COORDS(joaat("epsilontract")) > 1)
	{
		ENTITY::STOP_ENTITY_ANIM();
	}
	func_49(9);
	while (true)
	{
		SYSTEM::WAIT(0);
		switch (iLocal_39)
		{
			case 0:
				func_48();
				break;
			
			case 1:
				func_1();
				break;
			
			case 2:
				func_50();
				break;
		}
	}
}

void func_1()
{
	int iVar0;
	int iVar1;
	
	if ((func_47(unk_0x9B0761B4C3EB8BC7()) && !func_46(14)) && !PED::REMOVE_SCENARIO_BLOCKING_AREA())
	{
		if (iLocal_41 < 10)
		{
			if (iLocal_41 == 0)
			{
				if (!func_45(36) && (MISC::GET_GAME_TIMER() - iLocal_42) > iLocal_43)
				{
					func_44(0, 60, sLocal_50[0], 1, 0, 0, 0, 0, 1);
					func_43(36);
					iLocal_42 = -1;
				}
			}
			else if (iLocal_41 < 10)
			{
				if (!iLocal_42 == -1)
				{
					if ((MISC::GET_GAME_TIMER() - iLocal_42) > 15000)
					{
						func_44(0, 60, sLocal_50[iLocal_41], 1, 0, 0, 0, 0, 1);
						iLocal_42 = -1;
					}
				}
			}
			if (Local_49[iLocal_41 /*11*/].f_10)
			{
				if (OBJECT::HAS_PICKUP_BEEN_COLLECTED(Local_49[iLocal_41 /*11*/].f_1) || func_42(Local_49[iLocal_41 /*11*/].f_1))
				{
					if (MISC::IS_BIT_SET(unk_0x9B0761B4C3EB8BC7()))
					{
						TASK::TASK_CLEAR_LOOK_AT(unk_0x9B0761B4C3EB8BC7());
					}
					func_41(&(Local_49[iLocal_41 /*11*/].f_1));
					Local_49[iLocal_41 /*11*/].f_10 = 0;
					PAD::SET_PAD_SHAKE(0, 200, 250);
					iVar0 = (805 + iLocal_41);
					func_40(iVar0, 1, -1, 1);
					STATS::STAT_INCREMENT(joaat("NUM_HIDDEN_PACKAGES_2"), 1f);
					bLocal_46 = true;
					if (iLocal_41 < 10)
					{
						iLocal_41++;
						iLocal_42 = MISC::GET_GAME_TIMER();
						func_39(1, 0);
						func_37();
					}
				}
				else if (OBJECT::DOES_PICKUP_EXIST(Local_49[iLocal_41 /*11*/].f_1))
				{
					func_35(Local_49[iLocal_41 /*11*/].f_3);
					func_34(&(Local_49[iLocal_41 /*11*/].f_1), &(Local_49[iLocal_41 /*11*/].f_10));
				}
			}
			else
			{
				while (func_33(4, iVar1) && iVar1 < 10)
				{
					iVar1++;
				}
				if (iVar1 == iLocal_41)
				{
					func_31(&(Local_49[iLocal_41 /*11*/]), iLocal_40, joaat("pickup_custom_script"), 0, 0, 2);
				}
			}
		}
		else if (!bLocal_47 && !bLocal_46)
		{
			func_13();
		}
		func_2(&bLocal_46, &bLocal_47, &uLocal_48, 4, &uLocal_44, &iLocal_45, "TRACT_TITLE", "TRACT_COLLECT");
	}
}

void func_2(bool bParam0, bool bParam1, var uParam2, int iParam3, var uParam4, int* iParam5, char* sParam6, char* sParam7)
{
	void fVar0;
	
	func_12(0);
	if (*bParam0)
	{
		switch (*uParam4)
		{
			case 0:
				*iParam5 = unk_0x5DEA4192B46CB99B("MIDSIZED_MESSAGE");
				if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam5))
				{
					fVar0 = AUDIO::PLAY_SOUND_FROM_COORD();
					if (iParam3 == 6)
					{
						DATAFILE::UGC_UPDATE_CONTENT(fVar0, "PEYOTE_COMPLETED", "HUD_AWARDS", 1);
					}
					else
					{
						DATAFILE::UGC_UPDATE_CONTENT(fVar0, "COLLECTED", "HUD_AWARDS", 1);
					}
					*uParam4++;
				}
				break;
			
			case 1:
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam5, "SHOW_SHARD_MIDSIZED_MESSAGE");
				MISC::UPDATE_ONSCREEN_KEYBOARD(sParam6);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT();
				MISC::UPDATE_ONSCREEN_KEYBOARD(sParam7);
				unk_0x42710E9E08FA375A(func_4(iParam3));
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT();
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				*uParam2 = MISC::GET_GAME_TIMER();
				*uParam4++;
				break;
			
			case 2:
				if ((MISC::GET_GAME_TIMER() - *uParam2) > 7000)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam5, "SHARD_ANIM_OUT");
					NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE(1);
					DLC::IS_DLC_PRESENT(0.33f);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					*uParam4++;
				}
				else if (!func_3())
				{
					if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam5))
					{
						func_12(1);
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING(*iParam5, 100, 100, 100, 255, 0);
					}
				}
				break;
			
			case 3:
				if ((MISC::GET_GAME_TIMER() - *uParam2) > 7500)
				{
					*uParam4++;
				}
				else if (!func_3())
				{
					if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam5))
					{
						func_12(1);
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING(*iParam5, 100, 100, 100, 255, 0);
					}
				}
				break;
			
			case 4:
				if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam5))
				{
					GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(iParam5);
				}
				func_12(0);
				*bParam1 = 0;
				*bParam0 = 0;
				*uParam4 = 0;
				break;
			}
	}
}

int func_3()
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

int func_4(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 0;
	if (iParam0 == 2)
	{
		iVar1 = 0;
		while (iVar1 < func_11(iParam0))
		{
			if (unk_0xCE990E643CD9D0E5(Global_111858.f_10045.f_108, func_10(func_11(iParam0), iVar1)))
			{
				iVar0++;
			}
			iVar1++;
		}
	}
	else if (iParam0 == 6)
	{
		STATS::STAT_GET_INT(joaat("NUM_HIDDEN_PACKAGES_5"), &iVar0, -1);
	}
	else if (iParam0 == 7)
	{
		STATS::STAT_GET_INT(joaat("NUM_HIDDEN_PACKAGES_7"), &iVar0, -1);
	}
	else if (iParam0 == 8)
	{
		STATS::STAT_GET_INT(joaat("NUM_HIDDEN_PACKAGES_6"), &iVar0, -1);
	}
	else
	{
		iVar1 = 0;
		while (iVar1 < func_11(iParam0))
		{
			iVar2 = (func_9(iParam0) + iVar1);
			if (func_5(iVar2, -1, -1))
			{
				iVar0++;
			}
			iVar1++;
		}
	}
	return iVar0;
}

bool func_5(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	bVar0 = false;
	if (iParam1 == -1)
	{
		iParam1 = func_8();
	}
	iVar1 = func_7(iParam0, iParam1);
	iVar2 = func_6(iParam0);
	if (0 != iVar1)
	{
		bVar0 = DECORATOR::DECOR_IS_REGISTERED_AS_TYPE(iVar1, iVar2, iParam2);
	}
	return bVar0;
}

int func_6(int iParam0)
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

bool func_7(int iParam0, int iParam1)
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

int func_8()
{
	return Global_1312763;
}

int func_9(int iParam0)
{
	if (iParam0 == 3)
	{
		return 815;
	}
	if (iParam0 == 5)
	{
		return 845;
	}
	if (iParam0 == 1)
	{
		return 705;
	}
	if (iParam0 == 0)
	{
		return 755;
	}
	return 805;
}

int func_10(int iParam0, int iParam1)
{
	if (iParam1 < 32)
	{
		return iParam1;
	}
	return (iParam0 - iParam1);
}

int func_11(int iParam0)
{
	if (iParam0 == 3)
	{
		return 30;
	}
	if (iParam0 == 1)
	{
		return 50;
	}
	if (iParam0 == 0)
	{
		return 50;
	}
	if (iParam0 == 4)
	{
		return 10;
	}
	if (iParam0 == 5)
	{
		return 30;
	}
	return 15;
}

void func_12(int iParam0)
{
	if (Global_77100 != iParam0)
	{
		Global_77100 = iParam0;
	}
}

void func_13()
{
	func_30(95, 1);
	func_15(27, 84, 0);
	func_14(9);
	iLocal_39 = 2;
}

int func_14(int iParam0)
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 <= 31)
	{
		iVar0 = 9;
		bVar1 = iParam0;
	}
	else
	{
		iVar0 = 10;
		bVar1 = (iParam0 - 32);
	}
	if (unk_0xCE990E643CD9D0E5(Global_111858.f_9081.f_99.f_219[iVar0], bVar1))
	{
		VEHICLE::IS_VEHICLE_DRIVEABLE(&(Global_111858.f_9081.f_99.f_219[iVar0]), bVar1);
		return 1;
	}
	return 0;
}

int func_15(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_28(iParam0, 1);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (Global_52120[iVar0 /*203*/].f_9 == 4)
	{
		return 0;
	}
	Global_52120[iVar0 /*203*/].f_2 = iParam0;
	Global_52120[iVar0 /*203*/].f_10[Global_52120[iVar0 /*203*/].f_9 /*48*/] = iParam1;
	Global_52120[iVar0 /*203*/].f_10[Global_52120[iVar0 /*203*/].f_9 /*48*/].f_1 = 0;
	Global_52120[iVar0 /*203*/].f_10[Global_52120[iVar0 /*203*/].f_9 /*48*/].f_6 = 0;
	Global_52120[iVar0 /*203*/].f_9++;
	iVar1 = 0;
	iVar2 = -1;
	iVar1 = 0;
	while (iVar1 < Global_52120[iVar0 /*203*/].f_3)
	{
		if (iVar2 == -1)
		{
			if (Global_52120[iVar0 /*203*/].f_4[iVar1] == Global_42820[iParam1 /*12*/].f_3)
			{
				iVar2 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar2 == -1)
	{
		if (Global_52120[iVar0 /*203*/].f_3 == 4)
		{
			return 0;
		}
		else
		{
			Global_52120[iVar0 /*203*/].f_4[Global_52120[iVar0 /*203*/].f_3] = Global_42820[iParam1 /*12*/].f_3;
			Global_52120[iVar0 /*203*/].f_3++;
		}
	}
	iVar1 = 0;
	iVar2 = -1;
	iVar1 = 0;
	while (iVar1 < Global_52120[iVar0 /*203*/].f_3)
	{
		if (iVar2 == -1)
		{
			if (Global_52120[iVar0 /*203*/].f_4[iVar1] == Global_42820[iParam1 /*12*/].f_2)
			{
				iVar2 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar2 == -1)
	{
		if (Global_52120[iVar0 /*203*/].f_3 == 4)
		{
			return 0;
		}
		else
		{
			Global_52120[iVar0 /*203*/].f_4[Global_52120[iVar0 /*203*/].f_3] = Global_42820[iParam1 /*12*/].f_2;
			Global_52120[iVar0 /*203*/].f_3++;
		}
	}
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_52120[iVar0 /*203*/].f_3)
	{
		iVar3 = Global_52120[iVar0 /*203*/].f_4[iVar1];
		if (iVar3 < 3)
		{
			func_16(Global_52120[iVar0 /*203*/].f_4[iVar1], Global_52120[iVar0 /*203*/].f_1, 1, bParam2, 0);
		}
		iVar1++;
	}
	return 1;
}

void func_16(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<16> Var3;
	int iVar4;
	int iVar5;
	bool bVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	if (!iParam0 < 3)
	{
		return;
	}
	iVar0 = -1;
	StringCopy(&Var3, "UNSET", 64);
	if (!bParam2)
	{
		iVar4 = (Global_46145[iParam1 /*46*/].f_42 - 1);
		if (iVar4 < 0)
		{
			return;
		}
		iVar5 = Global_46145[iParam1 /*46*/].f_32[iVar4];
		iVar2 = iVar5;
		Var3 = { func_27(Global_42820[iVar5 /*12*/].f_1) };
		if (Global_42820[iVar5 /*12*/].f_2 == iParam0 && !Global_42820[iVar5 /*12*/].f_3 == iParam0)
		{
			return;
		}
		iVar1 = Global_42820[iVar5 /*12*/].f_2;
		iVar0 = Global_51758[iParam0 /*120*/];
		bVar6 = false;
		while (iVar0 >= 16)
		{
			iVar0 = (iVar0 - 16);
			bVar6 = true;
		}
		if (bVar6)
		{
			if (!Global_51758[iParam0 /*120*/].f_69[iVar0])
			{
				switch (iParam0)
				{
					case 0:
						Global_42812 = (Global_42812 - 1);
						if (Global_42812 < 0)
						{
							Global_42812 = 0;
						}
						break;
					
					case 1:
						Global_42813 = (Global_42813 - 1);
						if (Global_42813 < 0)
						{
							Global_42813 = 0;
						}
						break;
					
					case 2:
						Global_42814 = (Global_42814 - 1);
						if (Global_42814 < 0)
						{
							Global_42814 = 0;
						}
						break;
					}
				}
		}
		Global_51758[iParam0 /*120*/].f_18[iVar0] = iParam1;
		Global_51758[iParam0 /*120*/].f_1[iVar0] = iVar4;
		Global_51758[iParam0 /*120*/].f_35[iVar0] = 0;
		Global_51758[iParam0 /*120*/].f_86[iVar0] = 0;
		Global_51758[iParam0 /*120*/].f_69[iVar0] = 0;
		Global_51758[iParam0 /*120*/]++;
	}
	else
	{
		iVar0 = Global_51758[iParam0 /*120*/];
		bVar7 = false;
		while (iVar0 >= 16)
		{
			iVar0 = (iVar0 - 16);
			bVar7 = true;
		}
		if (bVar7)
		{
			if (!Global_51758[iParam0 /*120*/].f_69[iVar0])
			{
				switch (iParam0)
				{
					case 0:
						Global_42812 = (Global_42812 - 1);
						if (Global_42812 < 0)
						{
							Global_42812 = 0;
						}
						break;
					
					case 1:
						Global_42813 = (Global_42813 - 1);
						if (Global_42813 < 0)
						{
							Global_42813 = 0;
						}
						break;
					
					case 2:
						Global_42814 = (Global_42814 - 1);
						if (Global_42814 < 0)
						{
							Global_42814 = 0;
						}
						break;
					}
				}
		}
		iVar8 = -1;
		iVar9 = 0;
		iVar9 = 0;
		while (iVar9 < 7)
		{
			if (Global_52120[iVar9 /*203*/].f_1 == iParam1 && Global_52120[iVar9 /*203*/].f_9 > 0)
			{
				iVar8 = iVar9;
			}
			iVar9++;
		}
		if (iVar8 == -1)
		{
			return;
		}
		Global_51758[iParam0 /*120*/].f_18[iVar0] = Global_52120[iVar8 /*203*/].f_1;
		Global_51758[iParam0 /*120*/].f_1[iVar0] = (Global_52120[iVar8 /*203*/].f_9 - 1);
		Global_51758[iParam0 /*120*/].f_35[iVar0] = 0;
		Global_51758[iParam0 /*120*/].f_86[iVar0] = 1;
		Global_51758[iParam0 /*120*/].f_69[iVar0] = 0;
		Global_51758[iParam0 /*120*/]++;
		iVar10 = Global_51758[iParam0 /*120*/].f_1[iVar0];
		iVar11 = Global_52120[iVar8 /*203*/].f_10[iVar10 /*48*/];
		iVar2 = iVar11;
		iVar1 = Global_42820[iVar11 /*12*/].f_2;
		if (Global_52120[iVar8 /*203*/].f_10[(Global_52120[iVar8 /*203*/].f_9 - 1) /*48*/].f_1)
		{
			MemCopy(&Var3, {Global_52120[iVar8 /*203*/].f_10[(Global_52120[iVar8 /*203*/].f_9 - 1) /*48*/].f_2}, 16);
		}
		else
		{
			Var3 = { func_27(Global_42820[iVar11 /*12*/].f_1) };
		}
	}
	if (!bParam4)
	{
		if (!Global_51758[iParam0 /*120*/].f_69[iVar0] && !bParam3)
		{
			switch (iParam0)
			{
				case 0:
					func_17(0, iVar1, iVar2, &Var3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					break;
				
				case 1:
					if (iVar2 == 249)
					{
						func_17(1, iVar1, iVar2, "PW_FEED_EM_1", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					}
					else
					{
						func_17(1, iVar1, iVar2, &Var3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					}
					break;
				
				case 2:
					func_17(2, iVar1, iVar2, &Var3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					break;
				}
			}
	}
}

void func_17(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)
{
	int iVar0;
	bool bVar1;
	char cVar2[64];
	
	if (OBJECT::ADD_DOOR_TO_SYSTEM())
	{
		return;
	}
	iVar0 = func_21();
	bVar1 = false;
	StringCopy(&cVar2, func_20(iParam1, &bVar1), 64);
	if (iVar0 == iParam0)
	{
		switch (iParam2)
		{
			case 72:
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("PROPR_INCEMAIL1");
				break;
			
			case 73:
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("PROPR_INCEMAIL3");
				break;
			
			case 74:
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("PROPR_INCEMAIL2");
				break;
			
			default:
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam3);
				if (!CAM::IS_SCREEN_FADED_OUT(iParam4))
				{
					HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(iParam4);
				}
				if (!CAM::IS_SCREEN_FADED_OUT(iParam5))
				{
					HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(iParam5);
				}
				if (!CAM::IS_SCREEN_FADED_OUT(iParam6))
				{
					HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(iParam6);
				}
				if (!CAM::IS_SCREEN_FADED_OUT(iParam7))
				{
					HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(iParam7);
				}
				if (!CAM::IS_SCREEN_FADED_OUT(iParam8))
				{
					HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(iParam8);
				}
				if (!CAM::IS_SCREEN_FADED_OUT(iParam9))
				{
					HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(iParam9);
				}
				if (!CAM::IS_SCREEN_FADED_OUT(iParam10))
				{
					HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(iParam10);
				}
				if (!CAM::IS_SCREEN_FADED_OUT(iParam11))
				{
					HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(iParam11);
				}
				if (!CAM::IS_SCREEN_FADED_OUT(iParam12))
				{
					HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(iParam12);
				}
				if (!CAM::IS_SCREEN_FADED_OUT(iParam13))
				{
					HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(iParam13);
				}
				break;
		}
		if (bVar1)
		{
			func_18(HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar2, &cVar2, false, 2, AUDIO::ADD_LINE_TO_CONVERSATION(func_19(iParam1)), 0));
		}
		else
		{
			func_18(HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT("CHAR_DEFAULT", "CHAR_DEFAULT", false, 2, AUDIO::ADD_LINE_TO_CONVERSATION(func_19(iParam1)), 0));
		}
		switch (Global_19681)
		{
			case 0:
				StringCopy(&Global_19670, "Phone_SoundSet_Michael", 24);
				Global_42812++;
				if (Global_42812 > 16)
				{
					Global_42812 = 16;
				}
				break;
			
			case 2:
				StringCopy(&Global_19670, "Phone_SoundSet_Trevor", 24);
				Global_42814++;
				if (Global_42814 > 16)
				{
					Global_42814 = 16;
				}
				break;
			
			case 1:
				StringCopy(&Global_19670, "Phone_SoundSet_Franklin", 24);
				Global_42813++;
				if (Global_42813 > 16)
				{
					Global_42813 = 16;
				}
				break;
			
			default:
				StringCopy(&Global_19670, "Phone_SoundSet_Default", 24);
				break;
		}
		DATAFILE::UGC_UPDATE_CONTENT(-1, "Notification", &Global_19670, 1);
	}
}

void func_18(int iParam0)
{
	Global_42815[Global_42819] = iParam0;
	Global_22063 = 1;
	Global_22062 = iParam0;
	Global_42819++;
	if (Global_42819 == 3)
	{
		Global_42819 = 0;
	}
}

char* func_19(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "EMSTR_0";
		
		case 3:
			return "EMSTR_3";
		
		case 1:
			return "EMSTR_6";
		
		case 2:
			return "EMSTR_9";
		
		case 4:
			return "EMSTR_12";
		
		case 5:
			return "EMSTR_29";
		
		case 6:
			return "EMSTR_36";
		
		case 7:
			return "EMSTR_39";
		
		case 8:
			return "EMSTR_52";
		
		case 9:
			return "EMSTR_55";
		
		case 10:
			return "EMSTR_58";
		
		case 11:
			return "EMSTR_78";
		
		case 12:
			return "EMSTR_81";
		
		case 13:
			return "EMSTR_84";
		
		case 14:
			return "EMSTR_87";
		
		case 15:
			return "EMSTR_106";
		
		case 16:
			return "EMSTR_114";
		
		case 17:
			return "EMSTR_142";
		
		case 18:
			return "EMSTR_145";
		
		case 19:
			return "EMSTR_152";
		
		case 20:
			return "EMSTR_157";
		
		case 21:
			return "EMSTR_163";
		
		case 22:
			return "EMSTR_182";
		
		case 23:
			return "EMSTR_187";
		
		case 24:
			return "EMSTR_190";
		
		case 25:
			return "EMSTR_206";
		
		case 26:
			return "EMSTR_219";
		
		case 27:
			return "EMSTR_226";
		
		case 28:
			return "EMSTR_233";
		
		case 29:
			return "EMSTR_242";
		
		case 30:
			return "EMSTR_249";
		
		case 31:
			return "EMSTR_262";
		
		case 32:
			return "EMSTR_269";
		
		case 33:
			return "EMSTR_319";
		
		case 34:
			return "EMSTR_340";
		
		case 35:
			return "EMSTR_348";
		
		case 36:
			return "EMSTR_182";
		
		case 37:
			return "EMSTR_357";
		
		case 38:
			return "EMSTR_360";
		
		case 39:
			return "EMSTR_369";
		
		case 40:
			return "EMSTR_376";
		
		case 41:
			return "EMSTR_379";
		
		case 42:
			return "EMSTR_382";
		
		case 43:
			return "EMSTR_384";
		
		case 44:
			return "EMSTR_387";
		
		case 45:
			return "EMSTR_390";
		
		case 46:
			return "EMSTR_393";
		
		case 47:
			return "EMSTR_396";
		
		case 48:
			return "EMSTR_399";
		
		case 49:
			return "EMSTR_402";
		
		case 50:
			return "EMSTR_405";
		
		case 51:
			return "EMSTR_408";
		
		case 52:
			return "EMSTR_411";
		
		case 53:
			return "EMSTR_414";
		
		case 54:
			return "EMSTR_465";
		
		case 55:
			return "EMSTR_468";
		
		case 56:
			return "EMSTR_489";
		
		case 57:
			return "EMSTR_492";
		
		case 58:
			return "EMSTR_495";
		
		case 59:
			return "EMSTR_498";
		
		case 60:
			return "EMSTR_501";
		
		case 61:
			return "EMSTR_504";
		
		case 62:
			return "EMSTR_507";
		
		case 63:
			return "EMSTR_640";
		
		case 64:
			return "EMSTR_643";
		
		case 65:
			return "EMSTR_652";
		
		default:
	}
	return "NULL";
}

char* func_20(int iParam0, int iParam1)
{
	*iParam1 = 1;
	switch (iParam0)
	{
		case 0:
			return AUDIO::ADD_LINE_TO_CONVERSATION(&(Global_1848[0 /*29*/].f_7));
		
		case 1:
			return AUDIO::ADD_LINE_TO_CONVERSATION(&(Global_1848[1 /*29*/].f_7));
		
		case 2:
			return AUDIO::ADD_LINE_TO_CONVERSATION(&(Global_1848[2 /*29*/].f_7));
		
		case 7:
			return AUDIO::ADD_LINE_TO_CONVERSATION(&(Global_1848[12 /*29*/].f_7));
		
		case 4:
			return AUDIO::ADD_LINE_TO_CONVERSATION(&(Global_1848[60 /*29*/].f_7));
		
		case 6:
			return AUDIO::ADD_LINE_TO_CONVERSATION(&(Global_1848[62 /*29*/].f_7));
		
		case 3:
			return AUDIO::ADD_LINE_TO_CONVERSATION(&(Global_1848[14 /*29*/].f_7));
		
		case 16:
			return AUDIO::ADD_LINE_TO_CONVERSATION(&(Global_1848[97 /*29*/].f_7));
		
		case 19:
			return AUDIO::ADD_LINE_TO_CONVERSATION(&(Global_1848[99 /*29*/].f_7));
		
		case 15:
			return AUDIO::ADD_LINE_TO_CONVERSATION(&(Global_1848[96 /*29*/].f_7));
		
		case 63:
			return "CHAR_CARSITE2";
		
		case 64:
			return "CHAR_BOATSITE";
		
		case 8:
			return "CHAR_BANK_MAZE";
		
		case 9:
			return "CHAR_BANK_FLEECA";
		
		case 10:
			return "CHAR_BANK_BOL";
		
		case 21:
			return "CHAR_MINOTAUR";
		
		case 25:
			return AUDIO::ADD_LINE_TO_CONVERSATION(&(Global_1848[15 /*29*/].f_7));
		
		case 26:
			return AUDIO::ADD_LINE_TO_CONVERSATION(&(Global_1848[30 /*29*/].f_7));
		
		case 27:
			return AUDIO::ADD_LINE_TO_CONVERSATION(&(Global_1848[17 /*29*/].f_7));
		
		case 29:
			return AUDIO::ADD_LINE_TO_CONVERSATION(&(Global_1848[20 /*29*/].f_7));
		
		case 30:
			return AUDIO::ADD_LINE_TO_CONVERSATION(&(Global_1848[43 /*29*/].f_7));
		
		case 31:
			return AUDIO::ADD_LINE_TO_CONVERSATION(&(Global_1848[44 /*29*/].f_7));
		
		case 32:
			return AUDIO::ADD_LINE_TO_CONVERSATION(&(Global_1848[19 /*29*/].f_7));
		
		case 34:
			return AUDIO::ADD_LINE_TO_CONVERSATION(&(Global_1848[40 /*29*/].f_7));
		
		case 36:
			return AUDIO::ADD_LINE_TO_CONVERSATION("CELL_E_381");
		
		case 38:
			return AUDIO::ADD_LINE_TO_CONVERSATION(&(Global_1848[64 /*29*/].f_7));
		
		case 5:
			return "CHAR_EPSILON";
		
		case 13:
			return "CHAR_MILSITE";
		
		case 11:
			return "CHAR_CARSITE";
		
		case 14:
			return "CHAR_BOATSITE";
		
		case 12:
			return "CHAR_PLANESITE";
		
		case 24:
			return "CHAR_DR_FRIEDLANDER";
		
		case 55:
			return "CHAR_CARSITE2";
		
		case 54:
			return "CHAR_BIKESITE";
		
		case 39:
			return AUDIO::ADD_LINE_TO_CONVERSATION(&(Global_1848[122 /*29*/].f_7));
		
		case 40:
			return AUDIO::ADD_LINE_TO_CONVERSATION(&(Global_1848[125 /*29*/].f_7));
		
		case 41:
			return AUDIO::ADD_LINE_TO_CONVERSATION(&(Global_1848[113 /*29*/].f_7));
		
		case 42:
			return AUDIO::ADD_LINE_TO_CONVERSATION(&(Global_1848[126 /*29*/].f_7));
		
		case 43:
			return AUDIO::ADD_LINE_TO_CONVERSATION(&(Global_1848[127 /*29*/].f_7));
		
		case 44:
			return AUDIO::ADD_LINE_TO_CONVERSATION(&(Global_1848[124 /*29*/].f_7));
		
		case 45:
			return AUDIO::ADD_LINE_TO_CONVERSATION(&(Global_1848[114 /*29*/].f_7));
		
		case 46:
			return AUDIO::ADD_LINE_TO_CONVERSATION(&(Global_1848[115 /*29*/].f_7));
		
		case 47:
			return AUDIO::ADD_LINE_TO_CONVERSATION(&(Global_1848[116 /*29*/].f_7));
		
		case 48:
			return AUDIO::ADD_LINE_TO_CONVERSATION(&(Global_1848[123 /*29*/].f_7));
		
		case 49:
			return AUDIO::ADD_LINE_TO_CONVERSATION(&(Global_1848[117 /*29*/].f_7));
		
		case 50:
			return AUDIO::ADD_LINE_TO_CONVERSATION(&(Global_1848[118 /*29*/].f_7));
		
		case 51:
			return AUDIO::ADD_LINE_TO_CONVERSATION(&(Global_1848[119 /*29*/].f_7));
		
		case 52:
			return AUDIO::ADD_LINE_TO_CONVERSATION(&(Global_1848[120 /*29*/].f_7));
		
		case 53:
			return AUDIO::ADD_LINE_TO_CONVERSATION(&(Global_1848[121 /*29*/].f_7));
		
		default:
	}
	*iParam1 = 0;
	return "ERROR!";
}

var func_21()
{
	func_22();
	return Global_111858.f_2359.f_539.f_4321;
}

void func_22()
{
	int iVar0;
	
	if (MISC::IS_BIT_SET(unk_0x9B0761B4C3EB8BC7()))
	{
		if (func_25(Global_111858.f_2359.f_539.f_4321) != MISC::GET_MODEL_DIMENSIONS(unk_0x9B0761B4C3EB8BC7()))
		{
			iVar0 = func_24(unk_0x9B0761B4C3EB8BC7());
			if (func_23(iVar0) && (!func_46(14) || Global_110809))
			{
				if (Global_111858.f_2359.f_539.f_4321 != iVar0 && func_23(Global_111858.f_2359.f_539.f_4321))
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

bool func_23(int iParam0)
{
	return iParam0 < 3;
}

int func_24(int iParam0)
{
	int iVar0;
	void fVar1;
	
	if (MISC::IS_BIT_SET(iParam0))
	{
		fVar1 = MISC::GET_MODEL_DIMENSIONS(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_25(iVar0) == fVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_25(int iParam0)
{
	if (func_23(iParam0))
	{
		return func_26(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_26(int iParam0)
{
	return Global_1848[iParam0 /*29*/];
}

struct<16> func_27(int iParam0)
{
	struct<16> Var0;
	struct<16> Var1;
	
	if (iParam0 > -1)
	{
		StringCopy(&Var0, "EMSTR_", 64);
		StringIntConCat(&Var0, iParam0, 64);
		return Var0;
	}
	StringCopy(&Var1, "FAIL", 64);
	return Var1;
}

int func_28(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	
	iVar0 = func_29(iParam0);
	if (iVar0 > -1)
	{
		if (Global_52120[iVar0 /*203*/].f_9 < 4)
		{
			return iVar0;
		}
	}
	iVar1 = 0;
	bVar2 = false;
	iVar1 = 0;
	while (iVar1 < 7)
	{
		if (Global_52120[iVar1 /*203*/] == 0)
		{
			bVar2 = true;
		}
		iVar1++;
	}
	if (!bVar2)
	{
		return -1;
	}
	bVar3 = true;
	iVar1 = 0;
	iVar4 = -1;
	iVar5 = -1;
	iVar1 = 0;
	while (iVar1 < 7)
	{
		if (Global_52120[iVar1 /*203*/] == 0)
		{
			if (bVar3)
			{
				iVar4 = iVar1;
				iVar5 = Global_52120[iVar1 /*203*/].f_1;
				bVar3 = false;
			}
			else if (iVar5 > Global_52120[iVar1 /*203*/].f_1)
			{
				iVar4 = iVar1;
				iVar5 = Global_52120[iVar1 /*203*/].f_1;
			}
		}
		iVar1++;
	}
	if (Global_52120[iVar4 /*203*/].f_9 > 0)
	{
		iVar1 = 0;
		iVar1 = 0;
		while (iVar1 < Global_52120[iVar4 /*203*/].f_9)
		{
			iVar6 = 0;
			iVar6 = 0;
			while (iVar6 < 3)
			{
				iVar7 = Global_51758[iVar6 /*120*/];
				if (iVar7 > 16)
				{
					iVar7 = 16;
				}
				iVar8 = 0;
				iVar8 = 0;
				while (iVar8 < iVar7)
				{
					if (Global_51758[iVar6 /*120*/].f_86[iVar8])
					{
						if (!Global_51758[iVar6 /*120*/].f_69[iVar8])
						{
							if (Global_51758[iVar6 /*120*/].f_18[iVar8] == Global_52120[iVar4 /*203*/].f_1)
							{
								if (Global_51758[iVar6 /*120*/].f_1[iVar8] == iVar1)
								{
									switch (iVar6)
									{
										case 0:
											Global_42812 = (Global_42812 - 1);
											break;
										
										case 1:
											Global_42813 = (Global_42813 - 1);
											break;
										
										case 2:
											Global_42814 = (Global_42814 - 1);
											break;
										}
									}
								}
							}
					}
					iVar8++;
				}
				iVar6++;
			}
			iVar1++;
		}
	}
	Global_52120[iVar4 /*203*/].f_2 = iParam0;
	Global_52120[iVar4 /*203*/].f_3 = 0;
	if (!bParam1)
	{
		Global_52120[iVar4 /*203*/] = 1;
	}
	Global_111858.f_21033.f_310++;
	if (Global_111858.f_21033.f_310 == 0)
	{
		Global_111858.f_21033.f_310 = 1;
	}
	Global_52120[iVar4 /*203*/].f_1 = Global_111858.f_21033.f_310;
	Global_52120[iVar4 /*203*/].f_9 = 0;
	return iVar4;
}

int func_29(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = -1;
	iVar2 = -1;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (Global_52120[iVar0 /*203*/].f_2 == iParam0)
		{
			if (Global_52120[iVar0 /*203*/].f_1 > iVar2)
			{
				iVar2 = Global_52120[iVar0 /*203*/].f_1;
				iVar1 = iVar0;
			}
		}
		iVar0++;
	}
	if (iVar1 != -1 && iVar2 != -1)
	{
		return iVar1;
	}
	return -1;
}

void func_30(int iParam0, int iParam1)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return;
	}
	if (Global_111858.f_9081.f_99.f_58[iParam0] == iParam1)
	{
		return;
	}
	Global_111858.f_9081.f_99.f_58[iParam0] = iParam1;
}

void func_31(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, int iParam5)
{
	int iVar0;
	
	if (!uParam0->f_10)
	{
		if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(unk_0x9B0761B4C3EB8BC7()))
		{
			if (!func_46(13) && !func_46(14))
			{
				if (!OBJECT::DOES_PICKUP_EXIST(uParam0->f_1))
				{
					if (SYSTEM::VDIST2(NETWORK::NETWORK_ARE_HANDLES_THE_SAME(unk_0x9B0761B4C3EB8BC7(), 1), uParam0->f_3) <= (50f * 50f))
					{
						unk_0x78FCB2E22C41B9D5(iParam1);
						while (!ENTITY::DOES_ENTITY_EXIST(iParam1))
						{
							unk_0x78FCB2E22C41B9D5(iParam1);
							SYSTEM::WAIT(0);
						}
						if (bParam3)
						{
							func_32(uParam0->f_3);
						}
						MISC::CLEAR_AREA(uParam0->f_3, 2.5f, false, false, false, false);
						if (bParam4)
						{
							unk_0xBE20AB8238688965(&iVar0, 1);
							uParam0->f_1 = OBJECT::CREATE_PICKUP_ROTATE(joaat("pickup_custom_script"), uParam0->f_3, uParam0->f_6, iVar0, -1, iParam5, true, iParam1);
						}
						else
						{
							unk_0xBE20AB8238688965(&iVar0, 3);
							unk_0xBE20AB8238688965(&iVar0, 4);
							unk_0xBE20AB8238688965(&iVar0, 8);
							unk_0xBE20AB8238688965(&iVar0, 1);
							uParam0->f_1 = OBJECT::CREATE_PICKUP(iParam2, uParam0->f_3, iVar0, -1, true, iParam1);
						}
						unk_0x74528AC0906CBABE(iParam1);
					}
				}
			}
			if (OBJECT::DOES_PICKUP_EXIST(uParam0->f_1))
			{
				uParam0->f_10 = 1;
			}
		}
	}
}

void func_32(struct<3> Param0)
{
	bool bVar0;
	
	bVar0 = CUTSCENE::IS_CUTSCENE_PLAYING(Param0);
	if (unk_0x0B1B45E748AD48BA(bVar0))
	{
		INTERIOR::PIN_INTERIOR_IN_MEMORY(bVar0);
		while (!INTERIOR::IS_INTERIOR_READY(bVar0))
		{
			SYSTEM::WAIT(0);
		}
		SYSTEM::WAIT(0);
		INTERIOR::UNPIN_INTERIOR(bVar0);
	}
}

bool func_33(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 1)
	{
		iVar1 = 705;
	}
	else if (iParam0 == 0)
	{
		iVar1 = 755;
	}
	else if (iParam0 == 3)
	{
		iVar1 = 815;
	}
	else if (iParam0 == 4)
	{
		iVar1 = 805;
	}
	else if (iParam0 == 5)
	{
		iVar1 = 845;
	}
	iVar0 = (iVar1 + iParam1);
	return func_5(iVar0, -1, -1);
}

void func_34(var uParam0, var uParam1)
{
	if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(unk_0x9B0761B4C3EB8BC7()))
	{
		if (HUD::SET_BLIP_NAME_FROM_TEXT_FILE(NETWORK::NETWORK_ARE_HANDLES_THE_SAME(unk_0x9B0761B4C3EB8BC7(), 1), OBJECT::GET_PICKUP_COORDS(*uParam0), 1) >= 60f)
		{
			func_41(uParam0);
			*uParam0 = 0;
			*uParam1 = 0;
		}
	}
}

void func_35(struct<3> Param0)
{
	if (func_36(unk_0x9B0761B4C3EB8BC7(), Param0, 7f))
	{
		TASK::TASK_LOOK_AT_COORD(unk_0x9B0761B4C3EB8BC7(), Param0, 100, 2048, 1);
	}
}

bool func_36(int* iParam0, struct<3> Param1, float fParam2)
{
	return SYSTEM::VDIST2(NETWORK::NETWORK_ARE_HANDLES_THE_SAME(iParam0, 1), Param1) <= (fParam2 * fParam2);
}

int func_37()
{
	if (func_38(0))
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

bool func_38(bool bParam0)
{
	if (!bParam0 && INTERIOR::GET_INTERIOR_AT_COORDS(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xCE990E643CD9D0E5(Global_77081, false);
}

void func_39(int iParam0, int iParam1)
{
	Global_98994.f_7 = iParam0;
	Global_98994.f_8 = iParam1;
}

var func_40(int iParam0, char* sParam1, int iParam2, int iParam3)
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

void func_41(var uParam0)
{
	if (OBJECT::DOES_PICKUP_EXIST(*uParam0))
	{
		OBJECT::REMOVE_PICKUP(*uParam0);
	}
}

int func_42(int iParam0)
{
	int iVar0;
	void fVar1;
	
	if (!OBJECT::DOES_PICKUP_EXIST(iParam0))
	{
		return 0;
	}
	if (func_47(unk_0x9B0761B4C3EB8BC7()))
	{
		if (SYSTEM::VDIST(unk_0x9B0761B4C3EB8BC7(), 0))
		{
			iVar0 = ENTITY::GET_ENTITY_MODEL(unk_0x9B0761B4C3EB8BC7(), 0);
			fVar1 = MISC::GET_MODEL_DIMENSIONS(iVar0);
			if (fVar1 == joaat("submersible") || fVar1 == joaat("submersible2"))
			{
				if (SYSTEM::VDIST2(NETWORK::NETWORK_ARE_HANDLES_THE_SAME(unk_0x9B0761B4C3EB8BC7(), 1), OBJECT::GET_PICKUP_COORDS(iParam0)) < (5f * 5f) || ENTITY::IS_ENTITY_TOUCHING_ENTITY(unk_0x9B0761B4C3EB8BC7(), OBJECT::GET_PICKUP_OBJECT(iParam0)))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_43(int iParam0)
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

int func_44(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = 21;
			break;
		
		case 1:
			iVar0 = 22;
			break;
		
		case 2:
			iVar0 = 23;
			break;
		
		default:
			return 0;
			break;
	}
	StringCopy(&(Global_111858.f_14137[iVar0 /*104*/]), sParam2, 64);
	Global_111858.f_14137[iVar0 /*104*/].f_17 = iParam1;
	if (iParam3 == 0)
	{
		return 0;
	}
	else
	{
		Global_111858.f_14137[iVar0 /*104*/].f_24 = iParam3;
	}
	Global_111858.f_14137[iVar0 /*104*/].f_25 = iParam4;
	Global_111858.f_14137[iVar0 /*104*/].f_26 = iParam5;
	Global_111858.f_14137[iVar0 /*104*/].f_29 = iParam6;
	Global_111858.f_14137[iVar0 /*104*/].f_30 = iParam8;
	Global_111858.f_14137[iVar0 /*104*/].f_31 = iParam7;
	Global_111858.f_14137[iVar0 /*104*/].f_28 = 0;
	return 1;
}

int func_45(int iParam0)
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

bool func_46(int iParam0)
{
	return Global_41631 == iParam0;
}

int func_47(int iParam0)
{
	if (MISC::IS_BIT_SET(iParam0))
	{
		if (!PED::IS_PED_IN_ANY_POLICE_VEHICLE(iParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_48()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	if (Global_111858.f_18570.f_388)
	{
		sLocal_50[0] = "TRACT_HINT1B";
		iLocal_43 = 300000;
	}
	else
	{
		sLocal_50[0] = "TRACT_HINT1";
		iLocal_43 = 16000;
	}
	Local_49[0 /*11*/].f_3 = { 501.9415f, 5604.429f, 796.9146f };
	Local_49[1 /*11*/].f_3 = { 2658.18f, -1361.14f, -21.63f };
	sLocal_50[1] = "TRACT_HINT2";
	Local_49[2 /*11*/].f_3 = { 24.7139f, 7644.334f, 18.0792f };
	sLocal_50[2] = "TRACT_HINT3";
	Local_49[3 /*11*/].f_3 = { -263.55f, 4729.6f, 137.37f };
	sLocal_50[3] = "TRACT_HINT4";
	Local_49[4 /*11*/].f_3 = { -771.98f, -685.22f, 28.86f };
	sLocal_50[4] = "TRACT_HINT5";
	Local_49[5 /*11*/].f_3 = { -1605.03f, 5256.55f, 1.08f };
	sLocal_50[5] = "TRACT_HINT6";
	Local_49[6 /*11*/].f_3 = { -1804.546f, 403.9298f, 112.1966f };
	sLocal_50[6] = "TRACT_HINT7";
	Local_49[7 /*11*/].f_3 = { 484.2701f, 5617.175f, 787.4708f };
	sLocal_50[7] = "TRACT_HINT8";
	Local_49[8 /*11*/].f_3 = { -75.1004f, -819.0673f, 325.3656f };
	sLocal_50[8] = "TRACT_HINT9";
	Local_49[9 /*11*/].f_3 = { -1725.34f, -189.95f, 57.52f };
	sLocal_50[9] = "TRACT_HINT10";
	iLocal_42 = MISC::GET_GAME_TIMER();
	iVar0 = 0;
	while (iVar0 < 10)
	{
		iVar1 = (805 + iVar0);
		if (func_5(iVar1, -1, -1))
		{
			iLocal_41++;
		}
		iVar0++;
	}
	iLocal_39 = 1;
}

int func_49(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 <= 31)
	{
		iVar0 = 9;
		iVar1 = iParam0;
	}
	else
	{
		iVar0 = 10;
		iVar1 = (iParam0 - 32);
	}
	if (unk_0xCE990E643CD9D0E5(Global_111858.f_9081.f_99.f_219[iVar0], iVar1))
	{
		return 0;
	}
	unk_0xBE20AB8238688965(&(Global_111858.f_9081.f_99.f_219[iVar0]), bVar1);
	return 1;
}

void func_50()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		func_41(&(Local_49[iVar0 /*11*/].f_1));
		iVar0++;
	}
	ENTITY::STOP_ENTITY_ANIM();
}

