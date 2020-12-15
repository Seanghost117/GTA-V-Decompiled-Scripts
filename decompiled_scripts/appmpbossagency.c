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
	float fLocal_47 = 0f;
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
	int iLocal_75 = 0;
	struct<2> Local_76 = { 0, 0 } ;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	struct<2> Local_79 = { 0, 0 } ;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	struct<2> Local_82 = { 0, 0 } ;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	struct<2> Local_85 = { 0, 0 } ;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	struct<2> Local_88 = { 0, 0 } ;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	struct<2> Local_91 = { 0, 0 } ;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	var uLocal_98 = 0;
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
	fLocal_28 = 0f;
	fLocal_32 = -0.0375f;
	fLocal_33 = 0.17f;
	iLocal_36 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_47 = ((0.05f + 0.275f) - 0.01f);
	StringCopy(&Local_76, "CELL_206", 16);
	StringCopy(&Local_79, "CELL_214", 16);
	StringCopy(&Local_82, "CELL_243", 16);
	StringCopy(&Local_85, "CELL_244", 16);
	StringCopy(&Local_88, "CELL_265", 16);
	StringCopy(&Local_91, "CELL_300", 16);
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	func_97(&iLocal_97);
	iLocal_94 = 0;
	func_95();
	func_94(Global_19662, "SET_THEME", SYSTEM::TO_FLOAT(5), -1082130432, -1082130432, -1082130432, -1082130432);
	func_84(0);
	while (true)
	{
		SYSTEM::WAIT(0);
		func_83();
		func_82();
		if (!Global_19681.f_1 == 9 && Global_19681.f_1 > 3)
		{
			switch (iLocal_75)
			{
				case 0:
					func_47();
					break;
				
				case 1:
					func_31();
					break;
				
				case 3:
					func_5();
					break;
				
				case 2:
					func_4();
					break;
				
				default:
					break;
			}
			if (Global_19681.f_1 != 8)
			{
				if (func_3())
				{
					func_2();
				}
			}
		}
		if (func_1())
		{
			func_2();
		}
	}
}

int func_1()
{
	if (((Global_19681.f_1 == 1 || Global_19681.f_1 == 3) || Global_19681.f_1 == 0) || Global_19625 == 1)
	{
		Global_19668 = 1;
		return 1;
	}
	return 0;
}

void func_2()
{
	Global_1627252.f_6 = 0;
	ENTITY::STOP_ENTITY_ANIM();
}

int func_3()
{
	if (Global_8157 == 1 || Global_19681.f_1 < 7)
	{
		Global_19668 = 1;
		return 1;
	}
	return 0;
}

void func_4()
{
}

void func_5()
{
	int iVar0;
	
	Global_1627252.f_6 = 1;
	if (iLocal_96)
	{
		if (STATS::STAT_GET_MASKED_INT(2, Global_19650))
		{
			iLocal_96 = 0;
		}
		return;
	}
	if (STATS::STAT_GET_MASKED_INT(2, 201))
	{
		iLocal_75 = 1;
		iVar0 = func_29(iLocal_94, 0);
		func_6(iVar0);
		return;
	}
	if (STATS::STAT_GET_MASKED_INT(2, 202))
	{
		iLocal_75 = 1;
		return;
	}
	HUD::SET_WARNING_MESSAGE_WITH_HEADER("HUD_INPUT23", "BA_APP_PASS_W", 36, 0, false, -1, 0, 0, true, 0);
}

void func_6(int iParam0)
{
	bool bVar0;
	
	bVar0 = Global_1627252.f_7[iParam0 /*8*/].f_2;
	if (Global_1627252.f_7[iParam0 /*8*/].f_1 == 1 && iLocal_95 == bVar0)
	{
		func_26(bVar0, Global_1627252.f_7[iParam0 /*8*/].f_6);
		func_13(iParam0);
	}
	Global_1627252.f_6 = 0;
	func_7(0);
}

void func_7(int iParam0)
{
	if (func_12())
	{
		return;
	}
	if (Global_19864)
	{
		if (func_11())
		{
			func_9(1, 1);
		}
		else
		{
			func_9(0, 0);
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
	if (!func_8())
	{
		Global_19681.f_1 = 3;
	}
}

int func_8()
{
	if (Global_19681.f_1 == 1 || Global_19681.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_9(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_10(0))
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

int func_10(int iParam0)
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

bool func_11()
{
	return unk_0xCE990E643CD9D0E5(Global_1689730, 5);
}

bool func_12()
{
	return unk_0xCE990E643CD9D0E5(Global_1689730, 19);
}

void func_13(int iParam0)
{
	int iVar0;
	
	if (iParam0 != -1)
	{
		if (Global_1627252.f_7[iParam0 /*8*/].f_1 == 1)
		{
			if (unk_0xCE990E643CD9D0E5(Global_1627252.f_7[iParam0 /*8*/].f_5, 0))
			{
				func_25();
				if (Global_1627252.f_7[iParam0 /*8*/].f_7 == 0)
				{
					func_25();
				}
				else
				{
					Global_1627252.f_4 = (Global_1627252.f_4 - 1);
					if (Global_1627252.f_4 < 0)
					{
						Global_1627252.f_4 = 0;
					}
					func_18();
				}
			}
			VEHICLE::IS_VEHICLE_DRIVEABLE(&(Global_1630317[PLAYER::PLAYER_ID() /*595*/].f_11.f_22), Global_1627252.f_7[iParam0 /*8*/].f_2);
			HUD::THEFEED_REMOVE_ITEM(Global_1627252.f_7[iParam0 /*8*/].f_4);
			func_17();
			func_15(0);
		}
		iVar0 = iParam0;
		while (iVar0 <= 8)
		{
			Global_1627252.f_7[iVar0 /*8*/] = { Global_1627252.f_7[iVar0 + 1 /*8*/] };
			iVar0++;
		}
		Global_1627252.f_7[9 /*8*/].f_1 = 0;
		Global_1627252.f_7[9 /*8*/].f_2 = func_14();
	}
}

int func_14()
{
	return -1;
}

void func_15(bool bParam0)
{
	if (!func_16(bParam0))
	{
		unk_0xBE20AB8238688965(&(Global_1627252.f_3), bParam0);
	}
}

bool func_16(int iParam0)
{
	return unk_0xCE990E643CD9D0E5(Global_1627252.f_3, iParam0);
}

void func_17()
{
	Global_1627252 = (Global_1627252 - 1);
}

void func_18()
{
	Global_22068 = (Global_22068 - 1);
	if (Global_22068 < 0)
	{
		func_24("[MMM][NewJobInv][JobList] Calling Reset_New_Invites_Indicator from Decrement_New_Invites_Indicator");
	}
	func_19();
}

void func_19()
{
	if (!Global_19865)
	{
		if (Global_19681.f_1 == 6)
		{
			func_94(Global_19662, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_20(1);
			func_94(Global_19662, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_19661), -1082130432, -1082130432, -1082130432);
		}
	}
}

void func_20(int iParam0)
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
		if (func_23(14))
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
								func_22(&(Global_7558[iVar1 /*15*/]));
								NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE(iVar2);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							if (Global_2462245)
							{
								if (iVar1 == 14)
								{
									func_21(Global_19662, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_7558[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_22068), -1f, &(Global_7558[iVar1 /*15*/]), 0, 0, 0, 0);
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
								func_21(Global_19662, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_7558[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_22073), -1f, &(Global_7558[iVar1 /*15*/]), 0, 0, 0, 0);
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
									func_21(Global_19662, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_7558[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar4), -1f, &(Global_7558[iVar1 /*15*/]), 0, 0, 0, 0);
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
									func_21(Global_19662, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_7558[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar6), -1f, &(Global_7558[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_21(Global_19662, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_7558[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_22068), -1f, &(Global_7558[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_19662, "SET_DATA_SLOT");
								NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE(1);
								NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE(iVar0);
								NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE(Global_7558[iVar1 /*15*/].f_10);
								NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE(0);
								func_22(&(Global_7558[iVar1 /*15*/]));
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
								func_22(&(Global_7558[iVar1 /*15*/]));
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
								func_22(&(Global_7558[iVar1 /*15*/]));
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
								func_22(&(Global_7558[iVar1 /*15*/]));
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
								func_22(&(Global_7558[iVar1 /*15*/]));
								NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE(42);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (Global_7558[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1627252.f_1;
								func_21(Global_19662, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_7558[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar9), -1f, &(Global_7558[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_21(Global_19662, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_7558[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(0), -1f, &(Global_7558[iVar1 /*15*/]), 0, 0, 0, 0);
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

void func_21(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
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
		func_22(sParam7);
	}
	if (!CAM::IS_SCREEN_FADED_OUT(sParam8))
	{
		func_22(sParam8);
	}
	if (!CAM::IS_SCREEN_FADED_OUT(sParam9))
	{
		func_22(sParam9);
	}
	if (!CAM::IS_SCREEN_FADED_OUT(sParam10))
	{
		func_22(sParam10);
	}
	if (!CAM::IS_SCREEN_FADED_OUT(sParam11))
	{
		func_22(sParam11);
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_22(char* sParam0)
{
	MISC::UPDATE_ONSCREEN_KEYBOARD(sParam0);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT();
}

bool func_23(int iParam0)
{
	return Global_41631 == iParam0;
}

void func_24(char* sParam0)
{
	if (Global_22068 != 0)
	{
		if (!CAM::IS_SCREEN_FADED_OUT(sParam0))
		{
		}
		Global_22068 = 0;
	}
}

void func_25()
{
	Global_1627252.f_1 = (Global_1627252.f_1 - 1);
	if (Global_1627252.f_1 < 0)
	{
		Global_1627252.f_1 = 0;
	}
}

void func_26(bool bParam0, var uParam1)
{
	if (Global_1630317[PLAYER::PLAYER_ID() /*595*/].f_11.f_26 == func_14())
	{
		if (AUDIO::PLAY_STREAM_FROM_VEHICLE(bParam0))
		{
			Global_1630317[PLAYER::PLAYER_ID() /*595*/].f_11.f_26 = bParam0;
			Global_2540384.f_5188.f_222 = uParam1;
			func_27(func_28(bParam0));
		}
	}
}

void func_27(int iParam0)
{
	struct<2> Var0;
	
	Var0 = -1437387234;
	Var0.f_1 = PLAYER::PLAYER_ID();
	if (!iParam0 == 0)
	{
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Var0, 2, iParam0);
	}
}

int func_28(bool bParam0)
{
	var uVar0;
	
	if (bParam0 != -1)
	{
		unk_0xBE20AB8238688965(&uVar0, bParam0);
	}
	return uVar0;
}

int func_29(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < func_30())
	{
		if (Global_1627252.f_7[iVar0 /*8*/].f_7 == iParam1)
		{
			iParam0 = (iParam0 - 1);
			if (iParam0 < 0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_30()
{
	return Global_1627252;
}

void func_31()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_29(iLocal_94, 0);
	if (iLocal_94 == -1)
	{
		func_84(1);
		return;
	}
	iVar1 = Global_1627252.f_7[iVar0 /*8*/].f_2;
	if (!func_46(iVar1, 0, 1) || iLocal_95 != iVar1)
	{
		func_84(1);
		return;
	}
	func_41(&iLocal_97);
	if (func_39(&iLocal_97))
	{
		func_84(1);
		return;
	}
	if (func_38(&iLocal_97))
	{
		func_13(iVar0);
		func_84(1);
		return;
	}
	if (func_34(&iLocal_97))
	{
		if (func_33())
		{
			iLocal_96 = 1;
			iLocal_75 = 3;
		}
		else if (Global_1627252.f_7[iVar0 /*8*/] == 0)
		{
			func_6(iVar0);
		}
		else if (Global_1627252.f_7[iVar0 /*8*/] == 1)
		{
			func_32(iVar0);
		}
		else
		{
			func_7(0);
		}
	}
}

void func_32(int iParam0)
{
	unk_0xBE20AB8238688965(&Global_1573907, 15);
	func_13(iParam0);
	Global_1627252.f_6 = 0;
	func_7(0);
}

bool func_33()
{
	return Global_1312436;
}

int func_34(int iParam0)
{
	if (!unk_0xCE990E643CD9D0E5(*iParam0, 0))
	{
		return 0;
	}
	if (Global_19659)
	{
		return 0;
	}
	if (!GRAPHICS::DRAW_SCALEFORM_MOVIE())
	{
		return 0;
	}
	if (!PAD::IS_DISABLED_CONTROL_PRESSED(2, Global_19650))
	{
		return 0;
	}
	func_35();
	Global_19659 = 1;
	return 1;
}

void func_35()
{
	if (!PED::IS_PED_IN_ANY_POLICE_VEHICLE(unk_0x9B0761B4C3EB8BC7(), 0))
	{
		DATAFILE::UGC_UPDATE_CONTENT(-1, "Menu_Accept", &Global_19670, 1);
		func_36();
	}
}

void func_36()
{
	if (func_37())
	{
		MOBILE::_CELL_CAM_MOVE_FINGER(5);
	}
}

int func_37()
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

int func_38(int iParam0)
{
	if (!unk_0xCE990E643CD9D0E5(*iParam0, 1))
	{
		return 0;
	}
	if (Global_19659)
	{
		return 0;
	}
	if (!GRAPHICS::DRAW_SCALEFORM_MOVIE())
	{
		return 0;
	}
	if (!PAD::IS_DISABLED_CONTROL_PRESSED(2, Global_19653))
	{
		return 0;
	}
	func_35();
	Global_19659 = 1;
	return 1;
}

int func_39(int iParam0)
{
	if (!unk_0xCE990E643CD9D0E5(*iParam0, 2))
	{
		return 0;
	}
	if (Global_19659)
	{
		return 0;
	}
	if (!GRAPHICS::DRAW_SCALEFORM_MOVIE())
	{
		return 0;
	}
	if (!PAD::IS_DISABLED_CONTROL_PRESSED(2, Global_19651))
	{
		return 0;
	}
	func_40();
	Global_19659 = 1;
	return 1;
}

void func_40()
{
	if (!PED::IS_PED_IN_ANY_POLICE_VEHICLE(unk_0x9B0761B4C3EB8BC7(), 0))
	{
		DATAFILE::UGC_UPDATE_CONTENT(-1, "Menu_Back", &Global_19670, 1);
	}
}

void func_41(int iParam0)
{
	if (MISC::GET_GAME_TIMER() < iParam0->f_1)
	{
		return;
	}
	if (!GRAPHICS::DRAW_SCALEFORM_MOVIE())
	{
		return;
	}
	if (PAD::IS_DISABLED_CONTROL_PRESSED(2, Global_19657) || PAD::IS_DISABLED_CONTROL_PRESSED(2, 181))
	{
		func_44();
		iParam0->f_1 = MISC::GET_GAME_TIMER() + 50;
	}
	if (PAD::IS_DISABLED_CONTROL_PRESSED(2, Global_19658) || PAD::IS_DISABLED_CONTROL_PRESSED(2, 180))
	{
		func_42();
		iParam0->f_1 = MISC::GET_GAME_TIMER() + 50;
	}
}

void func_42()
{
	func_94(Global_19662, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(3), -1082130432, -1082130432, -1082130432, -1082130432);
	DATAFILE::UGC_UPDATE_CONTENT(-1, "Menu_Navigate", &Global_19670, 1);
	func_43();
}

void func_43()
{
	if (func_37())
	{
		if (Global_19869 == 0)
		{
			MOBILE::_CELL_CAM_MOVE_FINGER(2);
		}
		else
		{
			MOBILE::_CELL_CAM_MOVE_FINGER(1);
		}
	}
}

void func_44()
{
	func_94(Global_19662, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(1), -1082130432, -1082130432, -1082130432, -1082130432);
	DATAFILE::UGC_UPDATE_CONTENT(-1, "Menu_Navigate", &Global_19670, 1);
	func_45();
}

void func_45()
{
	if (func_37())
	{
		if (Global_19869 == 0)
		{
			MOBILE::_CELL_CAM_MOVE_FINGER(1);
		}
		else
		{
			MOBILE::_CELL_CAM_MOVE_FINGER(2);
		}
	}
}

int func_46(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (AUDIO::PLAY_STREAM_FROM_VEHICLE(iParam0))
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

void func_47()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (func_30() > 1)
	{
		func_41(&iLocal_97);
	}
	if (func_34(&iLocal_97))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_19662, "GET_CURRENT_SELECTION");
		iVar0 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
		while (!GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(iVar0))
		{
			SYSTEM::WAIT(0);
		}
		iLocal_94 = GRAPHICS::GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(iVar0);
		iVar1 = func_29(iLocal_94, 0);
		switch (Global_1627252.f_7[iVar1 /*8*/].f_1)
		{
			case 0:
				return;
			
			case 1:
				func_49();
				break;
			
			default:
				return;
		}
		Global_19681.f_1 = 8;
		return;
	}
	if (func_38(&iLocal_97))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_19662, "GET_CURRENT_SELECTION");
		iVar2 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
		while (!GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(iVar2))
		{
			SYSTEM::WAIT(0);
		}
		iLocal_94 = GRAPHICS::GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(iVar2);
		iVar3 = func_29(iLocal_94, 0);
		switch (Global_1627252.f_7[iVar3 /*8*/].f_1)
		{
			case 0:
				return;
			
			case 1:
				func_13(iVar3);
				func_84(0);
				return;
			
			default:
		}
		return;
		return;
	}
	if (func_16(0))
	{
		func_48(0);
		func_84(0);
	}
}

void func_48(bool bParam0)
{
	if (func_16(bParam0))
	{
		VEHICLE::IS_VEHICLE_DRIVEABLE(&(Global_1627252.f_3), bParam0);
	}
}

void func_49()
{
	bool bVar0;
	char* sVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<16> Var5;
	var uVar6[3];
	bool bVar7;
	int iVar8;
	int iVar9;
	char cVar10[16];
	struct<16> Var11;
	char cVar12[16];
	
	if (Global_19681.f_1 != 8)
	{
		Global_19681.f_1 = 8;
	}
	func_94(Global_19662, "SET_DATA_SLOT_EMPTY", SYSTEM::TO_FLOAT(26), -1082130432, -1082130432, -1082130432, -1082130432);
	bVar0 = false;
	iVar3 = func_29(iLocal_94, 0);
	iLocal_95 = Global_1627252.f_7[iVar3 /*8*/].f_2;
	iVar4 = Global_1627252.f_7[iVar3 /*8*/].f_2;
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_19662, "SET_DATA_SLOT");
	NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE(26);
	NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE(0);
	if (func_46(iVar4, 0, 1))
	{
		Var5 = { func_81(iVar4) };
		MISC::UPDATE_ONSCREEN_KEYBOARD("STRING");
		unk_0x7006FC1051C85FCA(func_75(iVar4));
		unk_0x9EFD301E3BE8324E(&Var5);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT();
		bVar0 = true;
	}
	else
	{
		func_22("");
	}
	if (Global_1627252.f_7[iVar3 /*8*/] == 0)
	{
		if (Global_262145.f_14968)
		{
			bVar7 = func_74(iVar4);
			iVar8 = 0;
			while (iVar8 < 3)
			{
				if (iVar9 < 3)
				{
					if (Global_1630317[iVar4 /*595*/].f_11.f_11[iVar8] != func_14())
					{
						if (func_46(Global_1630317[iVar4 /*595*/].f_11.f_11[iVar8], 0, 1))
						{
							uVar6[iVar9] = Global_1630317[iVar4 /*595*/].f_11.f_11[iVar8];
							iVar9++;
						}
					}
				}
				iVar8++;
			}
			if (iVar9 == 0)
			{
				if (bVar7)
				{
					func_22("BA_APP_BODYCTA");
				}
				else
				{
					func_22("BA_APP_BODY_TA");
				}
			}
			else
			{
				StringCopy(&cVar10, "BA_APP_BODY_T4", 16);
				if (bVar7)
				{
					StringCopy(&cVar10, "BA_APP_BODYCT4", 16);
				}
				if (iVar9 == 2)
				{
					if (bVar7)
					{
						StringCopy(&cVar10, "BA_APP_BODYCT5", 16);
					}
					else
					{
						StringCopy(&cVar10, "BA_APP_BODY_T5", 16);
					}
				}
				else if (iVar9 > 2)
				{
					if (bVar7)
					{
						StringCopy(&cVar10, "BA_APP_BODYCT6", 16);
					}
					else
					{
						StringCopy(&cVar10, "BA_APP_BODY_T6", 16);
					}
				}
				MISC::UPDATE_ONSCREEN_KEYBOARD(&cVar10);
				iVar8 = 0;
				while (iVar8 < iVar9)
				{
					Var11 = { func_81(uVar6[iVar8]) };
					unk_0x9EFD301E3BE8324E(&Var11);
					iVar8++;
				}
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT();
			}
		}
		else
		{
			if (Global_1627252.f_88[iVar3 /*5*/].f_1)
			{
				if (Global_1627252.f_88[iVar3 /*5*/].f_2)
				{
					StringCopy(&cVar12, "BA_APP_BODY_T9", 16);
				}
				else
				{
					StringCopy(&cVar12, "BA_APP_BODY_T8", 16);
				}
			}
			else if (Global_1627252.f_88[iVar3 /*5*/].f_2)
			{
				StringCopy(&cVar12, "BA_APP_BODY_T7", 16);
			}
			else
			{
				StringCopy(&cVar12, "BA_APP_BODY_T10", 16);
			}
			MISC::UPDATE_ONSCREEN_KEYBOARD(&cVar12);
			unk_0x42710E9E08FA375A(Global_1627252.f_88[iVar3 /*5*/]);
			unk_0x42710E9E08FA375A(func_73(iVar4));
			unk_0x42710E9E08FA375A(Global_1627252.f_88[iVar3 /*5*/].f_3);
			unk_0x42710E9E08FA375A(Global_1627252.f_88[iVar3 /*5*/].f_4);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT();
		}
	}
	else if (Global_1627252.f_7[iVar3 /*8*/] == 1)
	{
		MISC::UPDATE_ONSCREEN_KEYBOARD("BA_APP_BODY_DM2");
		unk_0x7006FC1051C85FCA(func_75(Global_1627252.f_7[iVar3 /*8*/].f_2));
		unk_0x9EFD301E3BE8324E(func_61(Global_1627252.f_7[iVar3 /*8*/].f_2));
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT();
	}
	if (bVar0)
	{
		iVar2 = func_55(Global_1627252.f_7[iVar3 /*8*/].f_2);
		if (iVar2 == 0)
		{
			bVar0 = false;
		}
		else
		{
			sVar1 = unk_0x3EF2973864CBE5FC(iVar2);
		}
	}
	if (bVar0)
	{
		NETWORK::NETWORK_CLAN_SERVICE_IS_VALID(sVar1);
	}
	else
	{
		func_22(&Local_91);
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	func_94(Global_19662, "DISPLAY_VIEW", SYSTEM::TO_FLOAT(26), -1082130432, -1082130432, -1082130432, -1082130432);
	func_53(&Local_88);
	func_50(13, &Local_82, 12, &Local_85, 4, &Local_76, &iLocal_97);
	iLocal_75 = 1;
}

void func_50(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, char* sParam5, int iParam6)
{
	func_51(2, iParam0, sParam1, 0, iParam6, -1);
	func_51(1, iParam2, sParam3, 1, iParam6, 17);
	func_51(3, iParam4, sParam5, 2, iParam6, -1);
}

void func_51(int iParam0, int iParam1, char* sParam2, bool bParam3, int iParam4, bool bParam5)
{
	if (iParam1 == 1)
	{
		func_21(Global_19662, "SET_SOFT_KEYS", SYSTEM::TO_FLOAT(iParam0), 0f, SYSTEM::TO_FLOAT(iParam1), -1f, -1f, 0, 0, 0, 0, 0);
		VEHICLE::IS_VEHICLE_DRIVEABLE(iParam4, bParam3);
		func_52(bParam5, 0);
		return;
	}
	if (Global_19669)
	{
		func_21(Global_19662, "SET_SOFT_KEYS", SYSTEM::TO_FLOAT(iParam0), 1f, SYSTEM::TO_FLOAT(iParam1), -1f, -1f, sParam2, 0, 0, 0, 0);
		unk_0xBE20AB8238688965(iParam4, bParam3);
		func_52(bParam5, 1);
		return;
	}
	func_21(Global_19662, "SET_SOFT_KEYS", SYSTEM::TO_FLOAT(iParam0), 1f, SYSTEM::TO_FLOAT(iParam1), -1f, -1f, 0, 0, 0, 0, 0);
	unk_0xBE20AB8238688965(iParam4, bParam3);
	func_52(bParam5, 1);
}

void func_52(bool bParam0, bool bParam1)
{
	if (bParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		unk_0xBE20AB8238688965(&Global_7551, bParam0);
		return;
	}
	VEHICLE::IS_VEHICLE_DRIVEABLE(&Global_7551, bParam0);
}

void func_53(char* sParam0)
{
	func_54(Global_19662, "SET_HEADER", sParam0, 0, 0, 0, 0);
}

void func_54(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, sParam1);
	func_22(sParam2);
	if (!CAM::IS_SCREEN_FADED_OUT(sParam3))
	{
		func_22(sParam3);
	}
	if (!CAM::IS_SCREEN_FADED_OUT(sParam4))
	{
		func_22(sParam4);
	}
	if (!CAM::IS_SCREEN_FADED_OUT(sParam5))
	{
		func_22(sParam5);
	}
	if (!CAM::IS_SCREEN_FADED_OUT(sParam6))
	{
		func_22(sParam6);
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

int func_55(int iParam0)
{
	int iVar0;
	
	iVar0 = func_58(iParam0);
	if (iVar0 == -1)
	{
		func_56(iParam0, 1);
		return 0;
	}
	Global_1389221[iVar0 /*5*/].f_4 = 1;
	return Global_1389221[iVar0 /*5*/].f_2;
}

void func_56(int iParam0, bool bParam1)
{
	if (!func_46(iParam0, 0, 1))
	{
		return;
	}
	if (func_58(iParam0) != -1)
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
	if (func_57(iParam0))
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

int func_57(int iParam0)
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

int func_58(int iParam0)
{
	int iVar0;
	
	if (!func_46(iParam0, 0, 1))
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
			func_59(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_59(int iParam0)
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
	func_60(&(Global_1389221[iVar2 /*5*/]));
	Global_1389382 = (Global_1389382 - 1);
}

void func_60(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_14();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (MISC::SET_BIT())
	{
		uParam0->f_3 = NETWORK::GET_NETWORK_TIME();
	}
}

char* func_61(int iParam0)
{
	var uVar0;
	int iVar1;
	
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		uVar0 = func_72(&(Global_1630317[iParam0 /*595*/].f_11.f_104));
		return uVar0;
	}
	if (Global_1630317[iParam0 /*595*/].f_11.f_120 != Global_1630317[PLAYER::PLAYER_ID() /*595*/].f_11.f_120)
	{
		uVar0 = func_67(iParam0, 0);
		return uVar0;
	}
	if (((func_66(iParam0, 28) || func_66(PLAYER::PLAYER_ID(), 28)) || func_65(iParam0)) && !func_63(iParam0))
	{
		return func_67(iParam0, 0);
	}
	iVar1 = func_62(iParam0);
	if (iVar1 != func_14())
	{
		if (iVar1 != PLAYER::PLAYER_ID())
		{
			if (!NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE() && !MISC::IS_DURANGO_VERSION(0, -1, 1))
			{
				return func_67(iVar1, 0);
			}
		}
	}
	if (iVar1 != func_14())
	{
		uVar0 = func_72(&(Global_1630317[iVar1 /*595*/].f_11.f_104));
		if (CAM::IS_SCREEN_FADED_OUT(uVar0))
		{
			return func_67(iVar1, 0);
		}
		else
		{
			return sVar0;
		}
	}
	return "";
}

int func_62(int iParam0)
{
	if (iParam0 != func_14())
	{
		return Global_1630317[iParam0 /*595*/].f_11;
	}
	return func_14();
}

int func_63(int iParam0)
{
	struct<13> Var0;
	
	Var0 = { func_64(iParam0) };
	if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE())
	{
		if (MISC::IS_ORBIS_VERSION(0))
		{
			if (DATAFILE::DATAARRAY_GET_FLOAT(&Var0))
			{
				return 1;
			}
		}
	}
	return 0;
}

struct<13> func_64(int iParam0)
{
	struct<13> Var0;
	
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
	return Var0;
}

int func_65(int iParam0)
{
	struct<13> Var0;
	
	if (iParam0 != func_14())
	{
		Var0 = { func_64(iParam0) };
		if (unk_0xDCA0815D900F27F8() || ENTITY::GET_ENTITY_HEADING())
		{
			if (MISC::IS_ORBIS_VERSION(0))
			{
				return 0;
			}
		}
		else if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE())
		{
			if (MISC::IS_ORBIS_VERSION(0))
			{
				if (DATAFILE::DATAARRAY_GET_FLOAT(&Var0))
				{
					return 0;
				}
			}
		}
	}
	return 1;
}

bool func_66(int iParam0, int iParam1)
{
	return unk_0xCE990E643CD9D0E5(Global_1630317[iParam0 /*595*/].f_11.f_4, iParam1);
}

var func_67(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_69(iParam0, 1))
		{
			return func_68();
		}
	}
	return AUDIO::ADD_LINE_TO_CONVERSATION("GB_REST_ACC");
}

var func_68()
{
	return AUDIO::ADD_LINE_TO_CONVERSATION("GB_REST_ACCM");
}

bool func_69(int iParam0, bool bParam1)
{
	return func_70(iParam0, bParam1, 1);
}

int func_70(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == func_14())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_71(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1630317[iParam0 /*595*/].f_11;
	if (iVar0 != func_14() && Global_1630317[iVar0 /*595*/].f_11.f_423 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_71(int iParam0, int iParam1)
{
	if (iParam0 != func_14())
	{
		if (Global_1630317[iParam0 /*595*/].f_11 != func_14())
		{
			if (Global_1630317[iParam0 /*595*/].f_11 == iParam0 && Global_1630317[iParam0 /*595*/].f_11.f_423 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

var func_72(var uParam0)
{
	return uParam0;
}

int func_73(int iParam0)
{
	if (func_62(iParam0) == func_14())
	{
		return 0;
	}
	return Global_1630317[iParam0 /*595*/].f_11.f_19;
}

bool func_74(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0xCE990E643CD9D0E5(Global_1590682[iParam0 /*883*/].f_274.f_26, 26);
}

int func_75(int iParam0)
{
	int iVar0;
	
	iVar0 = func_78(iParam0);
	if (iVar0 != -1)
	{
		return func_76(iVar0);
	}
	return 1;
}

int func_76(int iParam0)
{
	int iVar0;
	
	if (iParam0 > -1)
	{
		iVar0 = func_77(iParam0);
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

var func_77(int iParam0)
{
	return Global_2417956.f_818.f_44[iParam0 /*2*/].f_1;
}

int func_78(int iParam0)
{
	if (!iParam0 == func_14())
	{
		if (func_79(iParam0, 1))
		{
			return Global_2417956.f_818.f_11[func_62(iParam0)];
		}
	}
	return -1;
}

bool func_79(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_80(iParam0))
		{
			return 0;
		}
	}
	return Global_1630317[iParam0 /*595*/].f_11 != func_14();
}

int func_80(int iParam0)
{
	if (iParam0 != func_14())
	{
		if (Global_1630317[iParam0 /*595*/].f_11 != func_14())
		{
			return Global_1630317[iParam0 /*595*/].f_11 == iParam0;
		}
	}
	return 0;
}

struct<16> func_81(int iParam0)
{
	struct<16> Var0;
	
	StringCopy(&Var0, "<C>", 64);
	StringConCat(&Var0, DATAFILE::DATADICT_GET_ARRAY(iParam0), 64);
	StringConCat(&Var0, "</C>", 64);
	return Var0;
}

void func_82()
{
	if (Global_1627252.f_6)
	{
		if (iLocal_75 != 3)
		{
			if (!CAM::IS_SCREEN_FADED_IN())
			{
				Global_1627252.f_6 = 0;
			}
		}
	}
}

void func_83()
{
	PAD::SET_INPUT_EXCLUSIVE(0, 176);
	PAD::SET_INPUT_EXCLUSIVE(0, 177);
}

void func_84(bool bParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iLocal_95 = func_14();
	if (!Global_19681.f_1 == 7)
	{
		Global_19681.f_1 = 7;
	}
	iVar0 = 0;
	if (bParam0)
	{
		iVar0 = iLocal_94;
	}
	if (iVar0 >= Global_1387847)
	{
		iVar0 = 0;
	}
	if (Global_22065)
	{
		func_49();
		Global_22065 = 0;
		return;
	}
	iVar1 = func_30();
	iVar1 = (iVar1 - func_93());
	if ((func_79(PLAYER::PLAYER_ID(), 0) && !func_92(1)) && iVar1 <= 0)
	{
		func_90();
		return;
	}
	func_85();
	func_94(Global_19662, "DISPLAY_VIEW", SYSTEM::TO_FLOAT(25), SYSTEM::TO_FLOAT(iVar0), -1082130432, -1082130432, -1082130432);
	func_53("CELL_BOSSAGE");
	bVar2 = false;
	if (iVar1 > 0)
	{
		bVar2 = true;
	}
	if (bVar2)
	{
		func_50(13, &Local_79, 12, &Local_85, 4, &Local_76, &iLocal_97);
	}
	else
	{
		func_50(1, "", 1, "", 4, &Local_76, &iLocal_97);
	}
	iLocal_75 = 0;
}

void func_85()
{
	int iVar0;
	int iVar1;
	
	func_94(Global_19662, "SET_DATA_SLOT_EMPTY", SYSTEM::TO_FLOAT(25), -1082130432, -1082130432, -1082130432, -1082130432);
	iVar0 = 0;
	while (iVar0 < func_30())
	{
		if (Global_1627252.f_7[iVar0 /*8*/].f_1 == 1 && Global_1627252.f_7[iVar0 /*8*/].f_7 == 0)
		{
			switch (Global_1627252.f_7[iVar0 /*8*/])
			{
				case 0:
					if (func_89(iVar0, iVar1))
					{
						iVar1++;
					}
					break;
				
				case 1:
					if (func_87(iVar0, iVar1))
					{
						iVar1++;
					}
					break;
				}
		}
		iVar0++;
	}
	if (iVar1 > 0)
	{
		return;
	}
	func_86();
}

void func_86()
{
	void fVar0;
	
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_19662, "SET_DATA_SLOT");
	NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE(25);
	NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE(0);
	if (func_80(PLAYER::PLAYER_ID()))
	{
		func_22("BA_APP_NONEB");
	}
	else
	{
		func_22("BA_APP_NONE");
	}
	func_22("");
	NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE(-1);
	NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE(1);
	fVar0 = MISC::SET_BIT();
	unk_0xF1B28F753235CE2A(fVar0);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

int func_87(int iParam0, int iParam1)
{
	struct<16> Var0;
	int iVar1;
	int iVar2;
	
	if (Global_1627252.f_7[iParam0 /*8*/].f_2 == func_14() || !func_46(Global_1627252.f_7[iParam0 /*8*/].f_2, 0, 1))
	{
		return 0;
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_19662, "SET_DATA_SLOT");
	NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE(25);
	NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE(iParam1);
	Var0 = { func_81(Global_1627252.f_7[iParam0 /*8*/].f_2) };
	func_88(&Var0);
	MISC::UPDATE_ONSCREEN_KEYBOARD("BA_APP_BODY_DM1");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT();
	NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE(-1);
	iVar1 = 1;
	iVar2 = func_78(Global_1627252.f_7[iParam0 /*8*/].f_2);
	if (iVar2 != -1)
	{
		iVar1 = func_76(iVar2);
	}
	NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE(iVar1);
	unk_0xF1B28F753235CE2A(1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	return 1;
}

void func_88(bool bParam0)
{
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam0);
}

int func_89(int iParam0, int iParam1)
{
	struct<16> Var0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (Global_1627252.f_7[iParam0 /*8*/].f_2 == func_14() || !func_46(Global_1627252.f_7[iParam0 /*8*/].f_2, 0, 1))
	{
		return 0;
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_19662, "SET_DATA_SLOT");
	NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE(25);
	NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE(iParam1);
	Var0 = { func_81(Global_1627252.f_7[iParam0 /*8*/].f_2) };
	func_88(&Var0);
	bVar1 = func_74(Global_1627252.f_7[iParam0 /*8*/].f_2);
	iVar2 = func_73(Global_1627252.f_7[iParam0 /*8*/].f_2);
	if (iVar2 == 0)
	{
		if (bVar1)
		{
			func_22("BA_APP_BODYCT");
		}
		else
		{
			func_22("BA_APP_BODY_T");
		}
	}
	else if (iVar2 == 1)
	{
		if (bVar1)
		{
			MISC::UPDATE_ONSCREEN_KEYBOARD("BA_APP_BODYCT3");
		}
		else
		{
			MISC::UPDATE_ONSCREEN_KEYBOARD("BA_APP_BODY_T3");
		}
		unk_0x42710E9E08FA375A(iVar2);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT();
	}
	else
	{
		if (bVar1)
		{
			MISC::UPDATE_ONSCREEN_KEYBOARD("BA_APP_BODYCT2");
		}
		else
		{
			MISC::UPDATE_ONSCREEN_KEYBOARD("BA_APP_BODY_T2");
		}
		unk_0x42710E9E08FA375A(iVar2);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT();
	}
	NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE(-1);
	iVar3 = 1;
	iVar4 = func_78(Global_1627252.f_7[iParam0 /*8*/].f_2);
	if (iVar4 != -1)
	{
		iVar3 = func_76(iVar4);
	}
	NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE(iVar3);
	unk_0xF1B28F753235CE2A(1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	return 1;
}

void func_90()
{
	func_94(Global_19662, "SET_DATA_SLOT_EMPTY", SYSTEM::TO_FLOAT(26), -1082130432, -1082130432, -1082130432, -1082130432);
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_19662, "SET_DATA_SLOT");
	NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE(26);
	NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE(0);
	MISC::UPDATE_ONSCREEN_KEYBOARD("STRING");
	unk_0x7006FC1051C85FCA(func_75(PLAYER::PLAYER_ID()));
	unk_0x9EFD301E3BE8324E(func_91());
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT();
	func_22("BA_APP_NONEG");
	func_22("CELL_AGBOSSPIC");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	func_94(Global_19662, "DISPLAY_VIEW", SYSTEM::TO_FLOAT(26), -1082130432, -1082130432, -1082130432, -1082130432);
	func_53("CELL_BOSSAGE");
	func_50(1, "", 1, "", 4, &Local_76, &iLocal_97);
	iLocal_75 = 2;
}

char* func_91()
{
	int iVar0;
	var uVar1;
	
	iVar0 = func_62(PLAYER::PLAYER_ID());
	if (iVar0 != func_14())
	{
		if (iVar0 != PLAYER::PLAYER_ID())
		{
			if (((func_66(iVar0, 28) || func_66(PLAYER::PLAYER_ID(), 28)) || func_65(iVar0)) && !func_63(iVar0))
			{
				return func_67(iVar0, 0);
			}
			if (!NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE() && !MISC::IS_DURANGO_VERSION(0, -1, 1))
			{
				return func_67(iVar0, 0);
			}
		}
		uVar1 = func_72(&(Global_1630317[iVar0 /*595*/].f_11.f_104));
		if (CAM::IS_SCREEN_FADED_OUT(uVar1))
		{
			return func_67(iVar0, 0);
		}
		else
		{
			return sVar1;
		}
	}
	return "";
}

bool func_92(bool bParam0)
{
	return func_69(PLAYER::PLAYER_ID(), bParam0);
}

int func_93()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < func_30())
	{
		if (Global_1627252.f_7[iVar0 /*8*/].f_7 == 1)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

void func_94(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
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

void func_95()
{
	Global_1627252.f_1 = 0;
	func_96();
}

void func_96()
{
	Global_1627252.f_5 = 0;
}

void func_97(var uParam0)
{
	*uParam0 = 0;
}

