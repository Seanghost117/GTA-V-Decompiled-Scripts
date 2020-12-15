#region Local Var
	char* sLocal_0 = NULL;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	int iLocal_7 = 0;
	var uLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	var uLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	struct<3> Local_19 = { 0, 0, 0 } ;
	int iLocal_20 = 0;
	int iLocal_21 = 0;
	int iLocal_22 = 0;
	int iLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	int iLocal_26[3] = { 0, 0, 0 };
	int iLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	struct<15> Local_32 = { 1, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, 0, 0 } ;
	int iLocal_33 = 0;
	var uLocal_34 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;
	
	sLocal_0 = "1.50.01";
	iLocal_21 = -1;
	iLocal_22 = -1;
	unk_0x3A396632EB359434(0);
	unk_0xDB4E5F36ED3505EE();
	if (iScriptParam_33 == iScriptParam_33)
	{
	}
	Global_1315828 = unk_0x856D5567211886A2(sLocal_0);
	iVar0 = unk_0x578C4EF320340AF7() + 10000;
	while (unk_0x578C4EF320340AF7() < iVar0)
	{
		SYSTEM::WAIT(0);
	}
	func_85();
	while (true)
	{
		if (func_84())
		{
			func_82();
		}
		if (unk_0x25DDB354A40FFCDB() && Global_2460478.f_3)
		{
			func_81();
			func_80();
			func_77();
			func_75();
			func_72();
			func_70();
			func_65();
			func_63();
			func_62();
			func_45();
			func_42();
			func_41();
			func_40();
			func_23();
			func_2();
		}
		if (unk_0xFC559366953F62B3())
		{
			func_1();
		}
		SYSTEM::WAIT(0);
	}
	unk_0xD39E529EBE5DB04F();
}

void func_1()
{
	int iVar0;
	var uVar1;
	
	if (!unk_0xFC559366953F62B3())
	{
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			iLocal_26[iVar0] = 0;
			iVar0++;
		}
		return;
	}
	iVar0 = 0;
	while (iVar0 <= 79)
	{
		if (unk_0xCE990E643CD9D0E5(Global_4718592.f_70220[iVar0 /*636*/].f_296, 22))
		{
			uVar1 = Global_969055.f_152[iVar0];
			if (unk_0x5AEB5DDFFAD43CA5(uVar1))
			{
				unk_0xD2459066EA58CE43(&(iLocal_26[(iVar0 / 32)]), (iVar0 % 32));
			}
			else if (!unk_0xAA5B806352173DEA(uVar1))
			{
				unk_0xD2459066EA58CE43(&(iLocal_26[(iVar0 / 32)]), (iVar0 % 32));
			}
			else if (unk_0xCE990E643CD9D0E5(iLocal_26[(iVar0 / 32)], (iVar0 % 32)))
			{
			}
			else
			{
				unk_0x694113444F21E39F(uVar1, 245, 1);
				unk_0xBE20AB8238688965(&(iLocal_26[(iVar0 / 32)]), (iVar0 % 32));
			}
		}
		iVar0++;
	}
}

void func_2()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (unk_0x460153A63B9477BC() != unk_0xCCF088254BE59A9B(func_22(), -1, 0))
	{
		return;
	}
	if (unk_0xCE990E643CD9D0E5(Global_2419386.f_1444[1 /*15*/].f_6, 0))
	{
		return;
	}
	if (Global_2419386.f_1444[1 /*15*/].f_8 == -1)
	{
		return;
	}
	if (func_17())
	{
		return;
	}
	Local_32 = { Global_2419386.f_1444[1 /*15*/] };
	iVar0 = func_16(&(Local_32.f_13), 0, 1);
	iVar1 = func_15(Local_32.f_10);
	bVar2 = true;
	iVar3 = 1;
	while (iVar3 <= iVar1)
	{
		if (iVar0 < func_14(&Local_32, iVar3))
		{
			Local_32 = iVar3;
			if (iVar3 == 1)
			{
				Local_32.f_2 = func_13(&Local_32, iVar0);
			}
			else
			{
				Local_32.f_2 = func_13(&Local_32, (iVar0 - func_14(&Local_32, (iVar3 - 1))));
			}
			bVar2 = false;
			Jump @212; //curOff = 194
		}
		else
		{
			bVar2 = true;
		}
		iVar3++;
	}
	if (!bVar2)
	{
		if (Local_32 == func_15(Local_32.f_10))
		{
			iVar4 = func_12(&Local_32, iVar0);
			iVar5 = func_10(Local_32.f_10, Local_32);
			if ((iVar5 - iVar4) <= 30000)
			{
				bVar2 = true;
			}
		}
	}
	if (!bVar2)
	{
		return;
	}
	Global_2419386.f_1444[1 /*15*/].f_8 = func_7(Global_2419386.f_1444[1 /*15*/].f_8, 1);
	Global_2419386.f_1444[1 /*15*/].f_10 = func_6(Global_2419386.f_1444[1 /*15*/].f_8, 0);
	Global_2419386.f_1444[1 /*15*/] = 1;
	Global_2419386.f_1444[1 /*15*/].f_3 = func_5(&(Global_2419386.f_1444[1 /*15*/]), 0);
	Global_2419386.f_1444[1 /*15*/].f_2 = 0;
	func_4(&(Global_2419386.f_1444[1 /*15*/].f_13), 0, 0);
	Global_2419386.f_1444[1 /*15*/].f_13 = unk_0x8C358101651A3F7C(Global_2419386.f_1444[1 /*15*/].f_13, -Global_2419386.f_1444[1 /*15*/].f_2);
	Global_2419386.f_1444[1 /*15*/].f_1 = unk_0x856D5567211886A2(func_3(Global_2419386.f_1444[1 /*15*/].f_10, Global_2419386.f_1444[1 /*15*/]));
}

char* func_3(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 9:
			switch (iParam1)
			{
				case 1:
					return "DLC_HEI4_MUSIC_HEI4_KM_BEACH_REVERB_01";
				
				case 2:
					return "DLC_HEI4_MUSIC_HEI4_KM_BEACH_REVERB_02";
				
				case 3:
					return "DLC_HEI4_MUSIC_HEI4_KM_BEACH_REVERB_03";
				
				case 4:
					return "DLC_HEI4_MUSIC_HEI4_KM_BEACH_REVERB_04";
				
				default:
			}
			break;
		
		case 8:
			switch (iParam1)
			{
				case 1:
					return "DLC_HEI4_MUSIC_HEI4_KM_CLUB_LIVE_MIX_P1";
				
				case 2:
					return "DLC_HEI4_MUSIC_HEI4_KM_CLUB_LIVE_MIX_P2";
				
				case 3:
					return "DLC_HEI4_MUSIC_HEI4_KM_CLUB_LIVE_MIX_P3";
				
				case 4:
					return "DLC_HEI4_MUSIC_HEI4_KM_CLUB_LIVE_MIX_P4";
				
				default:
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 1:
					return "DLC_HEI4_MUSIC_HEI4_PT_CLUB_LIVE_MIX_P1";
				
				case 2:
					return "DLC_HEI4_MUSIC_HEI4_PT_CLUB_LIVE_MIX_P2";
				
				case 3:
					return "DLC_HEI4_MUSIC_HEI4_PT_CLUB_LIVE_MIX_P3";
				
				default:
			}
			break;
		
		case 11:
			switch (iParam1)
			{
				case 1:
					return "DLC_HEI4_MUSIC_HEI4_MM_CLUB_LIVE_MIX_P1";
				
				case 2:
					return "DLC_HEI4_MUSIC_HEI4_MM_CLUB_LIVE_MIX_P2";
				
				case 3:
					return "DLC_HEI4_MUSIC_HEI4_MM_CLUB_LIVE_MIX_P3";
				
				case 4:
					return "DLC_HEI4_MUSIC_HEI4_MM_CLUB_LIVE_MIX_P4";
				
				default:
			}
			break;
	}
	return "";
}

void func_4(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0x25DDB354A40FFCDB() && !bParam1)
	{
		if (!bParam2)
		{
			*uParam0 = unk_0x6CAAB7E78B5D978A();
		}
		else
		{
			*uParam0 = unk_0x29B9AF1CB5B8175D();
		}
	}
	else
	{
		*uParam0 = unk_0x578C4EF320340AF7();
	}
	uParam0->f_1 = 1;
}

int func_5(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	iVar0 = 1;
	while (iVar0 <= func_15(uParam0->f_10))
	{
		iVar1 = (iVar1 + func_10(uParam0->f_10, iVar0));
		if (!bParam1)
		{
			if (*uParam0 == iVar0)
			{
			}
			else
			{
				iVar0++;
			}
			return iVar1;
		}

int func_6(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = -1;
	if (bParam1)
	{
		switch (iParam0)
		{
			case 0:
				iVar0 = 4;
				break;
			
			case 2:
				iVar0 = 5;
				break;
			
			case 1:
				iVar0 = 6;
				break;
			
			case 3:
				iVar0 = 7;
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				iVar0 = 0;
				break;
			
			case 2:
				iVar0 = 1;
				break;
			
			case 1:
				iVar0 = 2;
				break;
			
			case 3:
				iVar0 = 3;
				break;
			}
	}
	switch (iParam0)
	{
		case 4:
			iVar0 = 8;
			break;
		
		case 5:
			iVar0 = 9;
			break;
		
		case 6:
			iVar0 = 10;
			break;
		
		case 7:
			iVar0 = 11;
			break;
	}
	return iVar0;
}

int func_7(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = -1;
	if (!bParam1)
	{
		if (func_9())
		{
			iVar1 = Global_262145.f_24206;
			if (!Global_262145.f_24211)
			{
				iVar1 = unk_0x344C570D6F8700DF(1, 7);
			}
			switch (iVar1)
			{
				case 1:
				case 2:
					return 4;
				
				case 3:
				case 4:
					return 6;
				
				case 5:
				case 6:
					return 7;
				
				default:
			}
			return 6;
		}
		else if (!Global_262145.f_24207 && !Global_262145.f_24208)
		{
			iVar2 = Global_262145.f_24206;
			if (!Global_262145.f_24211)
			{
				if (func_8())
				{
					iVar2 = 7;
				}
				else
				{
					iVar2 = 9;
				}
			}
			switch (iVar2)
			{
				case 7:
					return 7;
				
				case 9:
					return 4;
				
				default:
			}
			return 7;
		}
		else if (!Global_262145.f_24208 && !Global_262145.f_24209)
		{
			iVar3 = Global_262145.f_24206;
			if (!Global_262145.f_24211)
			{
				if (func_8())
				{
					iVar3 = 10;
				}
				else
				{
					iVar3 = 12;
				}
			}
			switch (iVar3)
			{
				case 10:
					return 4;
				
				case 12:
					return 6;
				
				default:
			}
			return 4;
		}
		else if (!Global_262145.f_24209 && !Global_262145.f_24207)
		{
			iVar4 = Global_262145.f_24206;
			if (!Global_262145.f_24211)
			{
				if (func_8())
				{
					iVar4 = 8;
				}
				else
				{
					iVar4 = 11;
				}
			}
			switch (iVar4)
			{
				case 8:
					return 7;
				
				case 11:
					return 6;
				
				default:
			}
			return 7;
		}
		else if (!Global_262145.f_24207)
		{
			return 7;
		}
		else if (!Global_262145.f_24208)
		{
			return 4;
		}
		else if (!Global_262145.f_24209)
		{
			return 6;
		}
	}
	else if (func_9())
	{
		switch (Global_262145.f_24206)
		{
			case 1:
				switch (iParam0)
				{
					case 4:
						iVar0 = 6;
						break;
					
					case 6:
						iVar0 = 7;
						break;
					
					case 7:
						iVar0 = 4;
						break;
				}
				break;
			
			case 2:
				switch (iParam0)
				{
					case 4:
						iVar0 = 7;
						break;
					
					case 6:
						iVar0 = 4;
						break;
					
					case 7:
						iVar0 = 6;
						break;
				}
				break;
			
			case 3:
				switch (iParam0)
				{
					case 4:
						iVar0 = 6;
						break;
					
					case 6:
						iVar0 = 7;
						break;
					
					case 7:
						iVar0 = 4;
						break;
				}
				break;
			
			case 4:
				switch (iParam0)
				{
					case 4:
						iVar0 = 7;
						break;
					
					case 6:
						iVar0 = 4;
						break;
					
					case 7:
						iVar0 = 6;
						break;
				}
				break;
			
			case 5:
				switch (iParam0)
				{
					case 4:
						iVar0 = 6;
						break;
					
					case 6:
						iVar0 = 7;
						break;
					
					case 7:
						iVar0 = 4;
						break;
				}
				break;
			
			case 6:
				switch (iParam0)
				{
					case 4:
						iVar0 = 7;
						break;
					
					case 6:
						iVar0 = 4;
						break;
					
					case 7:
						iVar0 = 6;
						break;
				}
				break;
			
			default:
				switch (iParam0)
				{
					case 4:
						iVar0 = 6;
						break;
					
					case 6:
						iVar0 = 7;
						break;
					
					case 7:
						iVar0 = 4;
						break;
				}
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 4:
				if (!Global_262145.f_24207)
				{
					iVar0 = 7;
				}
				else if (!Global_262145.f_24209)
				{
					iVar0 = 6;
				}
				else
				{
					iVar0 = 4;
				}
				break;
			
			case 6:
				if (!Global_262145.f_24207)
				{
					iVar0 = 7;
				}
				else if (!Global_262145.f_24208)
				{
					iVar0 = 4;
				}
				else
				{
					iVar0 = 6;
				}
				break;
			
			case 7:
				if (!Global_262145.f_24209)
				{
					iVar0 = 6;
				}
				else if (!Global_262145.f_24208)
				{
					iVar0 = 4;
				}
				else
				{
					iVar0 = 7;
				}
				break;
			}
	}
	return iVar0;
}

int func_8()
{
	if (unk_0xCE990E643CD9D0E5(unk_0x344C570D6F8700DF(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

int func_9()
{
	if (Global_262145.f_24207)
	{
		return 0;
	}
	if (Global_262145.f_24208)
	{
		return 0;
	}
	if (Global_262145.f_24209)
	{
		return 0;
	}
	return 1;
}

int func_10(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = func_11(iParam0, iParam1);
	iVar0 = (iVar0 - 1000);
	return iVar0;
}

int func_11(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 9:
			switch (iParam1)
			{
				case 1:
					return 2352424;
				
				case 2:
					return 1552637;
				
				case 3:
					return 1152081;
				
				case 4:
					return 1587519;
				
				default:
			}
			break;
		
		case 8:
			switch (iParam1)
			{
				case 1:
					return 2352424;
				
				case 2:
					return 1552637;
				
				case 3:
					return 1152080;
				
				case 4:
					return 1813200;
				
				default:
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 1:
					return 1041521;
				
				case 2:
					return 1537939;
				
				case 3:
					return 1811912;
				
				default:
			}
			break;
		
		case 11:
			switch (iParam1)
			{
				case 1:
					return 2353875;
				
				case 2:
					return 1552637;
				
				case 3:
					return 1152080;
				
				case 4:
					return 1287786;
				
				default:
			}
			break;
	}
	return 0;
}

int func_12(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = (iParam0->f_3 - iParam1);
	return (func_10(iParam0->f_10, *iParam0) - iVar0);
}

int func_13(int iParam0, int iParam1)
{
	int iVar0;
	
	if (*iParam0 > 1)
	{
		iVar0 = 2;
		while (iVar0 <= func_15(iParam0->f_10))
		{
			iParam1 = (iParam1 + func_10(iParam0->f_10, (iVar0 - 1)));
			if (*iParam0 == iVar0)
			{
			}
			else
			{
				iVar0++;
			}
		}
	}
	return iParam1;
}

int func_14(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 1;
	while (iVar0 <= iParam1)
	{
		iVar1 = (iVar1 + func_10(uParam0->f_10, iVar0));
		iVar0++;
	}
	return iVar1;
}

int func_15(int iParam0)
{
	switch (iParam0)
	{
		case 9:
			return 4;
		
		case 8:
			return 4;
		
		case 10:
			return 3;
		
		case 11:
			return 4;
		
		default:
	}
	return 0;
}

var func_16(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0x25DDB354A40FFCDB() && !bParam1)
	{
		if (!bParam2)
		{
			return unk_0x624736CA66E14161(unk_0x6CAAB7E78B5D978A(), *uParam0);
		}
		else
		{
			return unk_0x624736CA66E14161(unk_0x29B9AF1CB5B8175D(), *uParam0);
		}
	}
	return unk_0x624736CA66E14161(unk_0x578C4EF320340AF7(), *uParam0);
}

int func_17()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		iVar1 = unk_0xF1110FE23C67293A(iVar0);
		if (func_21(iVar1, 0, 1))
		{
			if (func_18(iVar1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_18(int iParam0)
{
	if (iParam0 != func_20())
	{
		if (func_21(iParam0, 1, 1))
		{
			if (Global_2425869[iParam0 /*443*/].f_314.f_6 != -1)
			{
				return func_19(Global_2425869[iParam0 /*443*/].f_314.f_6) == 19;
			}
		}
	}
	return 0;
}

int func_19(int iParam0)
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

int func_20()
{
	return -1;
}

int func_21(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (unk_0x166E920FB00B2DBB(iParam0))
		{
			if (bParam1)
			{
				if (!unk_0x5A228A6A51E757C8(iParam0))
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

char* func_22()
{
	switch (Global_2464595)
	{
		case 0:
			return "freemode";
		
		default:
	}
	return "freemode";
}

void func_23()
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	int iVar4;
	int iVar5;
	
	if (iLocal_23)
	{
		return;
	}
	if (func_35(unk_0x460153A63B9477BC()))
	{
		iVar4 = -1;
		iVar0 = 0;
		while (iVar0 < Global_1590682)
		{
			iVar2 = unk_0xF1110FE23C67293A(iVar0);
			if (func_21(iVar2, 0, 1))
			{
				if (func_34(iVar2) == 256)
				{
					switch (func_33(iVar2))
					{
						case 11:
							iVar4 = func_31(iVar2);
							if (!func_30(&uLocal_24))
							{
								func_29(&uLocal_24, 0, 0);
							}
							break;
						}
					}
			}
			iVar0++;
		}
		if ((iVar4 != -1 && func_30(&uLocal_24)) && func_28(&uLocal_24, 2500, 0))
		{
			iVar5 = iVar4;
			iVar1 = 0;
			while (iVar1 < 27)
			{
				Var3 = { func_27(iVar5, iVar1) };
				if (!func_26(Var3))
				{
					unk_0x4E32F872FFCBC513(Var3, 10f, func_25(iVar5, iVar1), 1);
				}
				iVar1++;
			}
			iLocal_23 = 1;
		}
	}
	else
	{
		iLocal_23 = 0;
		if (func_30(&uLocal_24))
		{
			func_24(&uLocal_24);
		}
	}
}

void func_24(var uParam0)
{
	uParam0->f_1 = 0;
}

int func_25(int iParam0, int iParam1)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 25:
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("prop_mb_cargo_04b");
					break;
				
				case 1:
					iVar0 = joaat("prop_air_cargo_01a");
					break;
				
				case 2:
					iVar0 = joaat("prop_mb_cargo_02a");
					break;
				
				case 3:
					iVar0 = joaat("prop_mb_cargo_04a");
					break;
				
				case 4:
					iVar0 = joaat("prop_elecbox_24b");
					break;
				
				case 5:
					iVar0 = joaat("prop_box_wood04a");
					break;
				
				case 6:
					iVar0 = joaat("prop_mb_crate_01b");
					break;
				
				case 7:
					iVar0 = 316090149;
					break;
				
				case 8:
					iVar0 = 316090149;
					break;
				
				case 9:
					iVar0 = joaat("prop_toolchest_05");
					break;
				
				case 10:
					iVar0 = joaat("prop_toolchest_05");
					break;
				
				case 11:
					iVar0 = joaat("imp_prop_covered_vehicle_02a");
					break;
				
				case 12:
					iVar0 = joaat("imp_prop_covered_vehicle_03a");
					break;
				
				case 13:
					iVar0 = joaat("gr_prop_gr_crates_sam_01a");
					break;
				
				case 14:
					iVar0 = joaat("gr_prop_gr_crates_sam_01a");
					break;
				
				case 15:
					iVar0 = joaat("gr_prop_gr_crates_weapon_mix_01a");
					break;
				
				case 16:
					iVar0 = joaat("gr_prop_gr_crates_weapon_mix_01a");
					break;
				
				case 17:
					iVar0 = joaat("gr_prop_gr_gunsmithsupl_02a");
					break;
				
				case 18:
					iVar0 = joaat("gr_prop_gr_gunsmithsupl_02a");
					break;
				
				case 19:
					iVar0 = 281564928;
					break;
				
				case 20:
					break;
				
				case 21:
					iVar0 = joaat("imp_prop_covered_vehicle_01a");
					break;
				
				case 22:
					iVar0 = -1524553731;
					break;
				
				case 23:
					iVar0 = joaat("prop_box_ammo07b");
					break;
				
				case 24:
					iVar0 = joaat("prop_box_guncase_01a");
					break;
				
				case 25:
					iVar0 = joaat("prop_box_ammo07b");
					break;
				
				case 26:
					iVar0 = joaat("prop_box_guncase_01a");
					break;
			}
			break;
		
		case 26:
			switch (iParam1)
			{
				case 0:
					break;
				
				case 1:
					iVar0 = joaat("prop_mb_cargo_04b");
					break;
				
				case 2:
					iVar0 = joaat("prop_air_cargo_01a");
					break;
				
				case 3:
					iVar0 = joaat("prop_mb_cargo_02a");
					break;
				
				case 4:
					iVar0 = joaat("prop_mb_cargo_04a");
					break;
				
				case 5:
					iVar0 = joaat("prop_elecbox_24b");
					break;
				
				case 6:
					iVar0 = joaat("prop_box_wood04a");
					break;
				
				case 7:
					iVar0 = joaat("prop_mb_crate_01b");
					break;
				
				case 8:
					iVar0 = 316090149;
					break;
				
				case 9:
					iVar0 = 316090149;
					break;
				
				case 10:
					iVar0 = joaat("prop_toolchest_05");
					break;
				
				case 11:
					iVar0 = joaat("prop_toolchest_05");
					break;
				
				case 12:
					iVar0 = joaat("imp_prop_covered_vehicle_01a");
					break;
				
				case 13:
					iVar0 = joaat("imp_prop_covered_vehicle_02a");
					break;
				
				case 14:
					iVar0 = joaat("imp_prop_covered_vehicle_03a");
					break;
				
				case 15:
					iVar0 = joaat("gr_prop_gr_crates_sam_01a");
					break;
				
				case 16:
					iVar0 = joaat("gr_prop_gr_crates_sam_01a");
					break;
				
				case 17:
					iVar0 = joaat("gr_prop_gr_crates_weapon_mix_01a");
					break;
				
				case 18:
					iVar0 = joaat("gr_prop_gr_crates_weapon_mix_01a");
					break;
				
				case 19:
					iVar0 = joaat("gr_prop_gr_gunsmithsupl_02a");
					break;
				
				case 20:
					iVar0 = joaat("gr_prop_gr_gunsmithsupl_02a");
					break;
				
				case 21:
					iVar0 = 281564928;
					break;
				
				case 22:
					iVar0 = -1524553731;
					break;
				
				case 23:
					iVar0 = joaat("prop_box_ammo07b");
					break;
				
				case 24:
					iVar0 = joaat("prop_box_guncase_02a");
					break;
				
				case 25:
					iVar0 = joaat("prop_box_ammo07b");
					break;
				
				case 26:
					iVar0 = joaat("prop_box_guncase_02a");
					break;
			}
			break;
		
		case 27:
			switch (iParam1)
			{
				case 0:
					break;
				
				case 1:
					iVar0 = joaat("prop_mb_cargo_04b");
					break;
				
				case 2:
					iVar0 = joaat("prop_air_cargo_01a");
					break;
				
				case 3:
					iVar0 = joaat("prop_mb_cargo_02a");
					break;
				
				case 4:
					iVar0 = joaat("prop_mb_cargo_04a");
					break;
				
				case 5:
					iVar0 = joaat("prop_elecbox_24b");
					break;
				
				case 6:
					iVar0 = joaat("prop_box_wood04a");
					break;
				
				case 7:
					iVar0 = joaat("prop_mb_crate_01b");
					break;
				
				case 8:
					iVar0 = 316090149;
					break;
				
				case 9:
					iVar0 = 316090149;
					break;
				
				case 10:
					iVar0 = 1455645994;
					break;
				
				case 11:
					iVar0 = 1455645994;
					break;
				
				case 12:
					iVar0 = 1415132712;
					break;
				
				case 13:
					iVar0 = 1084201701;
					break;
				
				case 14:
					iVar0 = -1195569582;
					break;
				
				case 15:
					iVar0 = -1785670765;
					break;
				
				case 16:
					iVar0 = -1785670765;
					break;
				
				case 17:
					iVar0 = -606638189;
					break;
				
				case 18:
					iVar0 = -606638189;
					break;
				
				case 19:
					iVar0 = -691217268;
					break;
				
				case 20:
					iVar0 = -691217268;
					break;
				
				case 21:
					iVar0 = 1012944268;
					break;
				
				case 22:
					iVar0 = 1536540371;
					break;
				
				case 23:
					iVar0 = 926396329;
					break;
				
				case 24:
					iVar0 = -280296601;
					break;
				
				case 25:
					iVar0 = 926396329;
					break;
				
				case 26:
					iVar0 = 1536540371;
					break;
			}
			break;
	}
	return iVar0;
}

int func_26(struct<3> Param0)
{
	if ((Param0.x == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

Vector3 func_27(int iParam0, int iParam1)
{
	struct<3> Var0;
	
	switch (iParam0)
	{
		case 25:
			switch (iParam1)
			{
				case 0:
					Var0 = { -1284.05f, -3015.49f, -49.49f };
					break;
				
				case 1:
					Var0 = { -1282.61f, -3019.03f, -49.494f };
					break;
				
				case 2:
					Var0 = { -1253.14f, -3011.39f, -49.49f };
					break;
				
				case 3:
					Var0 = { -1251.87f, -3013.93f, -49.49f };
					break;
				
				case 4:
					Var0 = { -1230.81f, -3062.46f, -49.585f };
					break;
				
				case 5:
					Var0 = { -1254.58f, -3013.43f, -49.488f };
					break;
				
				case 6:
					Var0 = { -1281.58f, -3016.27f, -49.49f };
					break;
				
				case 7:
					Var0 = { -1270.88f, -3008.99f, -49.489f };
					break;
				
				case 8:
					Var0 = { -1256.88f, -3028.78f, -49.489f };
					break;
				
				case 9:
					Var0 = { -1257.27f, -2992.3f, -49.491f };
					break;
				
				case 10:
					Var0 = { -1271.01f, -3006.86f, -49.491f };
					break;
				
				case 11:
					Var0 = { -1250.56f, -3033.55f, -49.488f };
					break;
				
				case 12:
					Var0 = { -1293.63f, -3005.67f, -49.488f };
					break;
				
				case 13:
					Var0 = { -1240.41f, -3017.84f, -49.49f };
					break;
				
				case 14:
					Var0 = { -1236.94f, -3009.41f, -49.489f };
					break;
				
				case 15:
					Var0 = { -1243.08f, -3007.01f, -49.493f };
					break;
				
				case 16:
					Var0 = { -1234.46f, -3001.42f, -49.513f };
					break;
				
				case 17:
					Var0 = { -1229.99f, -3013.47f, -49.487f };
					break;
				
				case 18:
					Var0 = { -1237.01f, -2998.21f, -49.487f };
					break;
				
				case 19:
					Var0 = { -1239.89f, -3002.55f, -43.068f };
					break;
				
				case 20:
					break;
				
				case 21:
					Var0 = { -1253.65f, -3036.25f, -49.484f };
					break;
				
				case 22:
					Var0 = { -1241.2f, -3002.71f, -42.888f };
					break;
				
				case 23:
					Var0 = { -1239.3f, -3002.78f, -43.08f };
					break;
				
				case 24:
					Var0 = { -1239.61f, -3002.97f, -43.086f };
					break;
				
				case 25:
					Var0 = { -1299.62f, -3031.62f, -48.686f };
					break;
				
				case 26:
					Var0 = { -1299.52f, -3030.31f, -48.707f };
					break;
			}
			break;
		
		case 26:
			switch (iParam1)
			{
				case 0:
					break;
				
				case 1:
					Var0 = { -1284.05f, -3015.49f, -49.49f };
					break;
				
				case 2:
					Var0 = { -1282.61f, -3019.03f, -49.494f };
					break;
				
				case 3:
					Var0 = { -1253.14f, -3011.39f, -49.49f };
					break;
				
				case 4:
					Var0 = { -1251.87f, -3013.93f, -49.49f };
					break;
				
				case 5:
					Var0 = { -1230.81f, -3062.46f, -49.585f };
					break;
				
				case 6:
					Var0 = { -1254.58f, -3013.43f, -49.488f };
					break;
				
				case 7:
					Var0 = { -1281.58f, -3016.27f, -49.49f };
					break;
				
				case 8:
					Var0 = { -1270.88f, -3008.99f, -49.489f };
					break;
				
				case 9:
					Var0 = { -1253.17f, -3028.16f, -49.489f };
					break;
				
				case 10:
					Var0 = { -1257.27f, -2992.3f, -49.491f };
					break;
				
				case 11:
					Var0 = { -1270.55f, -3007f, -49.491f };
					break;
				
				case 12:
					Var0 = { -1254.13f, -3033.29f, -49.484f };
					break;
				
				case 13:
					Var0 = { -1250.51f, -3034.71f, -49.488f };
					break;
				
				case 14:
					Var0 = { -1293.63f, -3005.67f, -49.488f };
					break;
				
				case 15:
					Var0 = { -1240.41f, -3017.84f, -49.49f };
					break;
				
				case 16:
					Var0 = { -1236.94f, -3009.41f, -49.489f };
					break;
				
				case 17:
					Var0 = { -1243.08f, -3007.01f, -49.493f };
					break;
				
				case 18:
					Var0 = { -1234.46f, -3001.42f, -49.513f };
					break;
				
				case 19:
					Var0 = { -1229.99f, -3013.47f, -49.487f };
					break;
				
				case 20:
					Var0 = { -1237.01f, -2998.21f, -49.487f };
					break;
				
				case 21:
					Var0 = { -1240.04f, -3002.53f, -43.07f };
					break;
				
				case 22:
					Var0 = { -1241.19f, -3002.96f, -42.884f };
					break;
				
				case 23:
					Var0 = { -1240.54f, -3003.18f, -43.067f };
					break;
				
				case 24:
					Var0 = { -1239.34f, -3002.96f, -43.085f };
					break;
				
				case 25:
					Var0 = { -1299.53f, -3031.74f, -48.686f };
					break;
				
				case 26:
					Var0 = { -1299.52f, -3030.39f, -48.711f };
					break;
			}
			break;
		
		case 27:
			switch (iParam1)
			{
				case 0:
					break;
				
				case 1:
					Var0 = { -1284.05f, -3015.49f, -49.49f };
					break;
				
				case 2:
					Var0 = { -1282.61f, -3019.03f, -49.494f };
					break;
				
				case 3:
					Var0 = { -1253.14f, -3011.39f, -49.49f };
					break;
				
				case 4:
					Var0 = { -1251.87f, -3013.93f, -49.49f };
					break;
				
				case 5:
					Var0 = { -1230.81f, -3062.46f, -49.585f };
					break;
				
				case 6:
					Var0 = { -1254.58f, -3013.43f, -49.488f };
					break;
				
				case 7:
					Var0 = { -1281.58f, -3016.27f, -49.49f };
					break;
				
				case 8:
					Var0 = { -1270.88f, -3008.99f, -49.489f };
					break;
				
				case 9:
					Var0 = { -1253.17f, -3028.16f, -49.489f };
					break;
				
				case 10:
					Var0 = { -1257.27f, -2992.3f, -49.491f };
					break;
				
				case 11:
					Var0 = { -1270.55f, -3007f, -49.491f };
					break;
				
				case 12:
					Var0 = { -1253.62f, -3034.36f, -49.484f };
					break;
				
				case 13:
					Var0 = { -1250.1f, -3035.93f, -49.488f };
					break;
				
				case 14:
					Var0 = { -1293.63f, -3005.67f, -49.488f };
					break;
				
				case 15:
					Var0 = { -1240.41f, -3017.84f, -49.49f };
					break;
				
				case 16:
					Var0 = { -1236.94f, -3009.41f, -49.489f };
					break;
				
				case 17:
					Var0 = { -1243.08f, -3007.01f, -49.493f };
					break;
				
				case 18:
					Var0 = { -1234.46f, -3001.42f, -49.513f };
					break;
				
				case 19:
					Var0 = { -1229.99f, -3013.47f, -49.487f };
					break;
				
				case 20:
					Var0 = { -1237.01f, -2998.21f, -49.487f };
					break;
				
				case 21:
					Var0 = { -1239.93f, -3002.53f, -43.069f };
					break;
				
				case 22:
					Var0 = { -1239.38f, -3002.83f, -43.087f };
					break;
				
				case 23:
					Var0 = { -1240.49f, -3002.92f, -43.063f };
					break;
				
				case 24:
					Var0 = { -1241.19f, -3002.83f, -42.88f };
					break;
				
				case 25:
					Var0 = { -1299.56f, -3030.33f, -48.686f };
					break;
				
				case 26:
					Var0 = { -1299.46f, -3031.64f, -48.708f };
					break;
			}
			break;
	}
	return Var0;
}

int func_28(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_29(uParam0, bParam2, 0);
	if (unk_0x25DDB354A40FFCDB() && !bParam2)
	{
		if (unk_0x44F29CF6A0675F4F(unk_0x624736CA66E14161(unk_0x6CAAB7E78B5D978A(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0x44F29CF6A0675F4F(unk_0x624736CA66E14161(unk_0x578C4EF320340AF7(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_29(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0x25DDB354A40FFCDB() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0x6CAAB7E78B5D978A();
			}
			else
			{
				*uParam0 = unk_0x29B9AF1CB5B8175D();
			}
		}
		else
		{
			*uParam0 = unk_0x578C4EF320340AF7();
		}
		uParam0->f_1 = 1;
	}
}

bool func_30(var uParam0)
{
	return uParam0->f_1;
}

int func_31(int iParam0)
{
	if (func_32(iParam0, 0))
	{
		return Global_1630317[iParam0 /*595*/].f_11.f_192;
	}
	return -1;
}

int func_32(int iParam0, int iParam1)
{
	if (Global_1630317[iParam0 /*595*/].f_11.f_33 != -1 || (iParam1 && Global_1630317[iParam0 /*595*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_33(int iParam0)
{
	if (func_32(iParam0, 0))
	{
		return Global_1630317[iParam0 /*595*/].f_11.f_181;
	}
	return -1;
}

int func_34(int iParam0)
{
	if (func_32(iParam0, 0))
	{
		return Global_1630317[iParam0 /*595*/].f_11.f_33;
	}
	return -1;
}

int func_35(int iParam0)
{
	if (iParam0 != func_20())
	{
		if (func_21(iParam0, 1, 1))
		{
			if (Global_2425869[iParam0 /*443*/].f_314.f_6 != -1)
			{
				return func_36(iParam0) == Global_2425869[iParam0 /*443*/].f_314.f_6;
			}
		}
	}
	return 0;
}

int func_36(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_20())
	{
		return -1;
	}
	iVar0 = func_39(iParam0);
	if (!iVar0 == 0)
	{
		return func_37(iVar0);
	}
	return -1;
}

int func_37(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 148)
	{
		if (func_19(iVar0) == 7)
		{
			if (func_38(iVar0) == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_38(int iParam0)
{
	switch (iParam0)
	{
		case 83:
			return 1;
			break;
		
		case 84:
			return 2;
			break;
		
		case 85:
			return 3;
			break;
		
		case 86:
			return 4;
			break;
		
		case 87:
			return 5;
			break;
	}
	return 0;
}

int func_39(int iParam0)
{
	if (iParam0 == func_20())
	{
		return 0;
	}
	return Global_1590682[iParam0 /*883*/].f_274.f_264;
}

void func_40()
{
	int iVar0;
	struct<3> Var1;
	
	if (func_34(unk_0x460153A63B9477BC()) != 256)
	{
		iVar0 = -1;
		switch (func_33(unk_0x460153A63B9477BC()))
		{
			case 19:
				iVar0 = func_31(unk_0x460153A63B9477BC());
				switch (iVar0)
				{
					case 48:
						Var1 = { -2136.9f, 5406.84f, -72.701f };
						break;
					
					case 49:
						Var1 = { 3721.85f, 6010.4f, -153.529f };
						break;
					
					case 50:
						Var1 = { 204.126f, 7645.72f, -153.104f };
						break;
				}
				if (((!unk_0x4DC4117F94CD5B84(unk_0x460153A63B9477BC()) && !unk_0x03DB5C6AABF8DA46()) && SYSTEM::VDIST2(unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), 0), Var1) < 25f) && !unk_0xF0C12886E5C1B20E())
				{
					if (func_28(&uLocal_30, 20000, 0))
					{
						unk_0x1D40553EDD51A1B8(0);
					}
				}
				else if (func_30(&uLocal_30))
				{
					func_24(&uLocal_30);
				}
				break;
		}
	}
	else if (func_30(&uLocal_30))
	{
		func_24(&uLocal_30);
	}
}

void func_41()
{
	if (Global_2540384.f_342)
	{
		unk_0xDDEDC06C88DA4E04(unk_0x460153A63B9477BC(), 0, 0);
		unk_0x779660A9E5364C4D(2, 201, 1);
		iLocal_27 = 1;
		func_24(&uLocal_28);
	}
	else if (iLocal_27)
	{
		if ((!func_28(&uLocal_28, 1500, 0) || !unk_0x87F0CB19476706C3()) || unk_0x5B772EFCB84373BE())
		{
			unk_0xDDEDC06C88DA4E04(unk_0x460153A63B9477BC(), 0, 0);
			unk_0x779660A9E5364C4D(2, 201, 1);
		}
		else
		{
			unk_0xDDEDC06C88DA4E04(unk_0x460153A63B9477BC(), 1, 0);
			iLocal_27 = 0;
			func_24(&uLocal_28);
		}
	}
}

void func_42()
{
	var uVar0;
	
	if (func_44())
	{
		unk_0x779660A9E5364C4D(0, 74, 1);
		unk_0x779660A9E5364C4D(0, 104, 1);
		unk_0x779660A9E5364C4D(0, 54, 1);
	}
	if (func_43(unk_0x460153A63B9477BC(), 1, 1))
	{
		if (unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), 1))
		{
			uVar0 = unk_0xA5D5B1042E8F47BD(unk_0x9B0761B4C3EB8BC7(), 1);
			if (!unk_0xA59F96B50B97E63C(uVar0, 0))
			{
				if (unk_0x36FE6D3220816ADA(uVar0) == joaat("dune3"))
				{
					unk_0x779660A9E5364C4D(0, 104, 1);
					unk_0x779660A9E5364C4D(0, 54, 1);
				}
			}
		}
	}
	if (unk_0x018979C457E7B3A2(unk_0x9B0761B4C3EB8BC7(), 373))
	{
		if (func_19(Global_2425869[unk_0x460153A63B9477BC() /*443*/].f_314.f_6) == 11)
		{
			Global_1689673 = 1;
		}
	}
}

int func_43(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == func_20())
	{
		return 0;
	}
	if (unk_0xCE990E643CD9D0E5(Global_1590682[iParam0 /*883*/].f_274.f_26, 0))
	{
		return 1;
	}
	if (bParam1)
	{
		if (unk_0xCE990E643CD9D0E5(Global_1590682[iParam0 /*883*/].f_274.f_26, 1))
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

bool func_44()
{
	return Global_1678288.f_482;
}

void func_45()
{
	int iVar0;
	int iVar1;
	struct<2> Var2;
	float fVar3;
	float fVar4;
	struct<3> Var5;
	
	if (func_30(&uLocal_17))
	{
		unk_0xBE20AB8238688965(&Global_7552, 2);
		if (func_28(&uLocal_17, 60000, 0))
		{
			func_4(&uLocal_17, 0, 0);
			func_24(&uLocal_17);
		}
	}
	if (func_30(&uLocal_15) && func_28(&uLocal_15, 1000, 0))
	{
		if (iLocal_22 == -1)
		{
			if (!unk_0xA59F96B50B97E63C(unk_0x9B0761B4C3EB8BC7(), 0))
			{
				iLocal_22 = unk_0x5E54B0823F46079E();
				unk_0x2DB2D4C3CB88500D(iLocal_22, "05", unk_0x9B0761B4C3EB8BC7(), "DLC_GR_CS2_Sounds", 0, 0);
			}
		}
		else if (func_28(&uLocal_15, 4000, 0))
		{
			if (!unk_0x046706CBB367B768(iLocal_22))
			{
				unk_0xC5E5600D1CF5CEF9(iLocal_22);
			}
			unk_0xADB6EEE689FE86DE(iLocal_22);
			iLocal_22 = -1;
			unk_0xFA07F8BEBDAAFBA8("DLC_GR_CS2_General_Scene");
			func_4(&uLocal_15, 0, 0);
			func_24(&uLocal_15);
		}
	}
	if (!iLocal_9 && !func_55())
	{
		return;
	}
	iLocal_9 = 1;
	unk_0xBE20AB8238688965(&Global_7552, 2);
	if (!unk_0xAE06B9E39EBDE049(uLocal_8))
	{
		iVar0 = joaat("imp_prop_ship_01a");
		unk_0x78FCB2E22C41B9D5(iVar0);
		if (unk_0x7D167B9A0CCDA347(iVar0))
		{
			uLocal_8 = unk_0x6E52E47D436A2C77(iVar0, 360.8759f, 5623.427f, 780.1747f, 0, 0, 1);
			unk_0x74528AC0906CBABE(iVar0);
			unk_0x6A8F948698B360B4(uLocal_8, 1);
			unk_0x1CCBC799127EA27B(uLocal_8, 8000);
			iVar1 = func_54(7867, -1, 0);
			func_51(7867, iVar1 + 1, -1, 1, 0);
			Var2.f_1 = 1;
			Var2 = 24;
			unk_0xCB78201804D687F2(&Var2);
			Local_19 = { unk_0x3E4D3CCC220BDFB1(uLocal_8, 0) };
			iLocal_20 = 0;
		}
	}
	else
	{
		func_50();
		if (unk_0x87F0CB19476706C3() || unk_0x5B772EFCB84373BE())
		{
			if (iLocal_21 == -1)
			{
				unk_0x17E478571720218F("DLC_GR_CS2_General_Scene");
				iLocal_21 = unk_0x5E54B0823F46079E();
				unk_0x2DB2D4C3CB88500D(iLocal_21, "07", uLocal_8, "DLC_GR_CS2_Sounds", 0, 0);
			}
			if (!iLocal_10)
			{
				if (func_28(&uLocal_11, 4500, 0))
				{
					unk_0x6A8F948698B360B4(uLocal_8, 0);
					func_4(&uLocal_11, 0, 0);
					func_24(&uLocal_11);
					func_29(&uLocal_13, 0, 0);
					iLocal_10 = 1;
				}
			}
			else
			{
				fVar3 = (SYSTEM::TO_FLOAT(func_16(&uLocal_13, 0, 0)) / SYSTEM::TO_FLOAT(func_49()));
				fVar4 = (SYSTEM::TO_FLOAT(func_16(&uLocal_11, 0, 0)) / SYSTEM::TO_FLOAT(func_48()));
				fVar4 = (fVar4 * fVar3);
				Var5 = { func_46(Local_19, func_47(), fVar4) };
				unk_0x03D382CB0B44E2FC(uLocal_8, Var5, 1, 0, 0, 1);
				if (fVar4 >= 1f)
				{
					iLocal_20++;
					Local_19 = { unk_0x3E4D3CCC220BDFB1(uLocal_8, 0) };
					func_4(&uLocal_11, 0, 0);
					func_24(&uLocal_11);
					if (func_48() == -1)
					{
						unk_0x315F7D8C33F0AB37(&uLocal_8);
						unk_0xD335AF0E22FABE4C();
						if (!unk_0x046706CBB367B768(iLocal_21))
						{
							unk_0xC5E5600D1CF5CEF9(iLocal_21);
						}
						unk_0xADB6EEE689FE86DE(iLocal_21);
						iLocal_21 = -1;
						func_29(&uLocal_15, 0, 0);
						func_29(&uLocal_17, 0, 0);
						func_4(&uLocal_13, 0, 0);
						func_24(&uLocal_13);
						Local_19 = { 0f, 0f, 0f };
						iLocal_20 = 0;
						iLocal_9 = 0;
						iLocal_10 = 0;
					}
				}
			}
		}
	}
}

Vector3 func_46(struct<3> Param0, struct<3> Param1, float fParam2)
{
	return FtoV((1f - fParam2)) * Param0 + Vector(fParam2, fParam2, fParam2) * Param1;
}

Vector3 func_47()
{
	switch (iLocal_20)
	{
		case 0:
			return 306.567f, 5652.283f, 785.594f;
		
		case 1:
			return -1082.865f, 6390.52f, 924.2493f;
		
		case 2:
			return -2542.874f, 7217.514f, 1051.333f;
		
		case 3:
			return -4139.106f, 8143.302f, 1412.694f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_48()
{
	switch (iLocal_20)
	{
		case 0:
			return 2000;
		
		case 1:
			return 1000;
		
		case 2:
			return 100;
		
		case 3:
			return 50;
		
		default:
	}
	return -1;
}

int func_49()
{
	return 3150;
}

void func_50()
{
	struct<3> Var0;
	
	Var0 = { unk_0x090239DEAF625B17(uLocal_8, 2) };
	Var0.x = 0f;
	Var0.f_1 = 0f;
	Var0.f_2 = (Var0.f_2 + 1f);
	unk_0xC82085403E46A869(uLocal_8, Var0, 2, 1);
}

void func_51(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2551832[iParam0 /*3*/][func_52(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x6000E4684CB4330B(iVar0, iParam1, iParam3);
	}
}

int func_52(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_53();
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

int func_53()
{
	return Global_1312763;
}

int func_54(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2551832[iParam0 /*3*/][func_52(iParam1)];
	if (unk_0xD2F202166691EDB2(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_55()
{
	if (((((((func_59(22107, -1, -1) && Global_2409291 == 7) && !unk_0xA59F96B50B97E63C(unk_0x9B0761B4C3EB8BC7(), 0)) && func_58(unk_0x9B0761B4C3EB8BC7(), 426.433f, 5614.172f, 766.414f, 1f)) && Global_2452679.f_3074.f_178 >= 1) && Global_2452679.f_3074.f_178 < 4) && func_57()) && func_56())
	{
		return 1;
	}
	return 0;
}

int func_56()
{
	if (func_59(15476, -1, -1) && func_54(5451, func_53(), 0) > 577)
	{
		return 1;
	}
	return 0;
}

int func_57()
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	unk_0x012D8A79244042A4(&iVar0, &iVar1, &fVar2);
	if (fVar2 < 0.5f)
	{
		if ((iVar0 == 1420204096 || iVar0 == -1233681761) || iVar1 == -1429616491)
		{
			return 1;
		}
	}
	else if ((iVar1 == 1420204096 || iVar1 == -1233681761) || iVar1 == -1429616491)
	{
		return 1;
	}
	return 0;
}

bool func_58(var uParam0, struct<3> Param1, float fParam2)
{
	return SYSTEM::VDIST2(unk_0x3E4D3CCC220BDFB1(uParam0, 1), Param1) <= (fParam2 * fParam2);
}

int func_59(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_53();
	}
	iVar1 = func_61(iParam0, iParam1);
	uVar2 = func_60(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0x9FD0AD883E4A7C1E(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_60(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = ((iParam0 - 0) - unk_0x12730A13C85FC896((iParam0 - 0)) * 64);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = ((iParam0 - 192) - unk_0x12730A13C85FC896((iParam0 - 192)) * 64);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = ((iParam0 - 513) - unk_0x12730A13C85FC896((iParam0 - 513)) * 64);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = ((iParam0 - 705) - unk_0x12730A13C85FC896((iParam0 - 705)) * 64);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = ((iParam0 - 2919) - unk_0x12730A13C85FC896((iParam0 - 2919)) * 64);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = ((iParam0 - 3111) - unk_0x12730A13C85FC896((iParam0 - 3111)) * 64);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = ((iParam0 - 4335) - unk_0x12730A13C85FC896((iParam0 - 4335)) * 64);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = ((iParam0 - 4207) - unk_0x12730A13C85FC896((iParam0 - 4207)) * 64);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = ((iParam0 - 6029) - unk_0x12730A13C85FC896((iParam0 - 6029)) * 64);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = ((iParam0 - 7385) - unk_0x12730A13C85FC896((iParam0 - 7385)) * 64);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = ((iParam0 - 7321) - unk_0x12730A13C85FC896((iParam0 - 7321)) * 64);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = ((iParam0 - 9361) - unk_0x12730A13C85FC896((iParam0 - 9361)) * 64);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = ((iParam0 - 15369) - unk_0x12730A13C85FC896((iParam0 - 15369)) * 64);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = ((iParam0 - 15562) - unk_0x12730A13C85FC896((iParam0 - 15562)) * 64);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = ((iParam0 - 15946) - unk_0x12730A13C85FC896((iParam0 - 15946)) * 64);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = ((iParam0 - 18098) - unk_0x12730A13C85FC896((iParam0 - 18098)) * 64);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar0 = ((iParam0 - 22066) - unk_0x12730A13C85FC896((iParam0 - 22066)) * 64);
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar0 = ((iParam0 - 24962) - unk_0x12730A13C85FC896((iParam0 - 24962)) * 64);
	}
	return iVar0;
}

int func_61(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_53();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = unk_0x43BE40E27DB6DC2E((iParam0 - 0), 0, 1, iParam1);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = unk_0x43BE40E27DB6DC2E((iParam0 - 192), 1, 1, iParam1);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = unk_0x43BE40E27DB6DC2E((iParam0 - 513), 0, 0, 0);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = unk_0x43BE40E27DB6DC2E((iParam0 - 705), 1, 0, 0);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = unk_0x840F9A9E6D216561((iParam0 - 2919), 0, 0, 0);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = unk_0x840F9A9E6D216561((iParam0 - 3111), 0, 1, iParam1);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = unk_0x4B2E4855CB2B4FAA((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = unk_0x4B2E4855CB2B4FAA((iParam0 - 4207), 0, 1, iParam1, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = unk_0x4B2E4855CB2B4FAA((iParam0 - 6029), 0, 1, iParam1, "_NGTATPSTAT_BOOL");
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = unk_0x4B2E4855CB2B4FAA((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = unk_0x4B2E4855CB2B4FAA((iParam0 - 7385), 0, 1, iParam1, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = unk_0x4B2E4855CB2B4FAA((iParam0 - 9361), 0, 1, iParam1, "_DLCBIKEPSTAT_BOOL");
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = unk_0x4B2E4855CB2B4FAA((iParam0 - 15369), 0, 1, iParam1, "_DLCGUNPSTAT_BOOL");
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = unk_0x4B2E4855CB2B4FAA((iParam0 - 15562), 0, 1, iParam1, "_GUNTATPSTAT_BOOL");
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = unk_0x4B2E4855CB2B4FAA((iParam0 - 15946), 0, 1, iParam1, "_DLCSMUGCHARPSTAT_BOOL");
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = unk_0x4B2E4855CB2B4FAA((iParam0 - 18098), 0, 1, iParam1, "_GANGOPSPSTAT_BOOL");
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar0 = unk_0x4B2E4855CB2B4FAA((iParam0 - 22066), 0, 1, iParam1, "_BUSINESSBATPSTAT_BOOL");
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar0 = unk_0x4B2E4855CB2B4FAA((iParam0 - 24962), 0, 1, iParam1, "_ARENAWARSPSTAT_BOOL");
	}
	return iVar0;
}

void func_62()
{
	if (Global_1704006 == 1)
	{
		if (!Global_1689724)
		{
			Global_1689724 = 1;
		}
	}
	else if (Global_1689724)
	{
		Global_1689724 = 0;
	}
}

void func_63()
{
	if (!func_64())
	{
		if (func_30(&uLocal_5))
		{
			func_24(&uLocal_5);
		}
		iLocal_7 = 0;
	}
	if (iLocal_7)
	{
		return;
	}
	if (!func_30(&uLocal_5))
	{
		func_4(&uLocal_5, 0, 0);
	}
	if (!func_28(&uLocal_5, 35000, 0))
	{
		return;
	}
	iLocal_7 = 1;
	Global_2451787.f_42.f_3 = 3;
	Global_2451787.f_42.f_40 = 1;
	unk_0xBE20AB8238688965(&(Global_4456448.f_27), 22);
	unk_0x1D40553EDD51A1B8(0);
	unk_0xA1AE959E1DC01C54(0, 0);
	unk_0xAA81B2C71789B4BE();
}

int func_64()
{
	if (!unk_0xFC559366953F62B3())
	{
		return 0;
	}
	if (!Global_2451787.f_23)
	{
		return 0;
	}
	if (!unk_0xCE990E643CD9D0E5(Global_2451787.f_42.f_4, 0) && !Global_2451787.f_42.f_57)
	{
		return 0;
	}
	if (Global_2451787.f_42 == -1)
	{
		return 0;
	}
	if (Global_2451787.f_42.f_3 != 6)
	{
		return 0;
	}
	return 1;
}

void func_65()
{
	if ((unk_0x5A002C4821A13338() > func_54(9583, -1, 0) && func_68(unk_0x460153A63B9477BC()) == 258) && func_67() == 3)
	{
		func_66(-1);
	}
}

void func_66(int iParam0)
{
	int iVar0;
	
	iVar0 = (unk_0x5A002C4821A13338() + Global_262145.f_29435);
	if (iParam0 != -1)
	{
		iVar0 = iParam0;
	}
	func_51(9583, iVar0, -1, 1, 0);
}

int func_67()
{
	return Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_11.f_102;
}

int func_68(int iParam0)
{
	if (func_69(iParam0, 0))
	{
		return Global_1630317[iParam0 /*595*/].f_11.f_32;
	}
	return -1;
}

int func_69(int iParam0, int iParam1)
{
	if (Global_1630317[iParam0 /*595*/].f_11.f_32 != -1 || (iParam1 && Global_1630317[iParam0 /*595*/].f_11.f_33 != -1))
	{
		return 1;
	}
	return 0;
}

void func_70()
{
	switch (func_71())
	{
		case joaat("cheetah2"):
			Global_1696941 = 0.8f;
			break;
		
		case joaat("paragon2"):
			Global_1696941 = 0.65f;
			break;
		
		case joaat("dominator3"):
			Global_1696941 = 0.65f;
			break;
		
		case joaat("tropos"):
			Global_1696941 = 0.56f;
			break;
		
		case joaat("omnis"):
			Global_1696941 = 0.66f;
			break;
		
		case joaat("paragon"):
			Global_1696941 = 0.65f;
			break;
		
		case 1455990255:
			Global_1696941 = 0.55f;
			break;
		
		case joaat("peyote3"):
			Global_1696941 = 0.47f;
			break;
		
		case joaat("osiris"):
			Global_1696941 = 0.8f;
			break;
		
		case joaat("tyrus"):
			Global_1696941 = 0.47f;
			break;
	}
}

int func_71()
{
	return Global_262145.f_26058;
}

void func_72()
{
	if ((Global_110804 && unk_0x7B70881748D166CD(joaat("director_mode")) <= 0) && func_73())
	{
		unk_0x8B0F63F2E7A2FA36();
	}
}

int func_73()
{
	if (func_74() == 0)
	{
		return 1;
	}
	return 0;
}

int func_74()
{
	return Global_1312485.f_18;
}

void func_75()
{
	int iVar0;
	
	if (!iLocal_4)
	{
		if (Global_1574217)
		{
			iVar0 = func_76(joaat("MPPLY_CHAR_EXPLOIT_LEVEL"));
			if (iVar0 >= 4)
			{
				Global_262145.f_10128 = 1;
			}
			iLocal_4 = 1;
		}
	}
	else if (!Global_1574217)
	{
		iLocal_4 = 0;
	}
}

int func_76(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = iParam0;
	if (unk_0xD2F202166691EDB2(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_77()
{
	if (!iLocal_3)
	{
		if (Global_1574217)
		{
			if (func_79() || func_78())
			{
				Global_262145.f_19705 = 1;
			}
			else
			{
				Global_262145.f_19705 = 0;
			}
			iLocal_3 = 1;
		}
	}
	else if (!Global_1574217)
	{
		iLocal_3 = 0;
	}
}

int func_78()
{
	int iVar0;
	var uVar1[4];
	int iVar2;
	
	iVar0 = func_76(joaat("MPPLY_CHAR_PEAK_EXPLOIT_LEVEL"));
	if (iVar0 < Global_262145.f_10237)
	{
		return 0;
	}
	uVar1[0] = func_76(joaat("MPPLY_PREVSEASONEXPLOITLEVEL"));
	uVar1[1] = func_76(joaat("MPPLY_PREVSEASON2EXPLOITLEVEL"));
	uVar1[2] = func_76(joaat("MPPLY_PREVSEASON3EXPLOITLEVEL"));
	uVar1[3] = func_76(joaat("MPPLY_PREVSEASON4EXPLOITLEVEL"));
	iVar2 = 0;
	while (iVar2 < (Global_262145.f_10233 - 1))
	{
		if (uVar1[iVar2] < Global_262145.f_10237)
		{
			return 0;
		}
		iVar2++;
	}
	return 1;
}

int func_79()
{
	int iVar0;
	var uVar1[4];
	int iVar2;
	
	iVar0 = func_76(joaat("MPPLY_CHAR_PEAK_EXPLOIT_LEVEL"));
	if (iVar0 < Global_262145.f_10236)
	{
		return 0;
	}
	uVar1[0] = func_76(joaat("MPPLY_PREVSEASONEXPLOITLEVEL"));
	uVar1[1] = func_76(joaat("MPPLY_PREVSEASON2EXPLOITLEVEL"));
	uVar1[2] = func_76(joaat("MPPLY_PREVSEASON3EXPLOITLEVEL"));
	uVar1[3] = func_76(joaat("MPPLY_PREVSEASON4EXPLOITLEVEL"));
	iVar2 = 0;
	while (iVar2 < (Global_262145.f_10232 - 1))
	{
		if (uVar1[iVar2] < Global_262145.f_10236)
		{
			return 0;
		}
		iVar2++;
	}
	return 1;
}

void func_80()
{
	int iVar0;
	
	if (unk_0xF8EDFF98A9C94C74())
	{
		iVar0 = 0;
		while (iVar0 < Global_1590682)
		{
			unk_0xBE20AB8238688965(&(Global_1590682[iVar0 /*883*/].f_744), 1);
			iVar0++;
		}
	}
}

void func_81()
{
	if (Global_262145.f_10212 != 120)
	{
		Global_262145.f_10212 = 120;
	}
}

void func_82()
{
	if (iLocal_1)
	{
		unk_0x151E2F6EE4A34CFE(0f, 0.23f);
		unk_0xA11D279671F2289C(255, 255, 255, 255);
		func_83(0.69f, 0.06f, "STRING", sLocal_0);
	}
	if (!iLocal_1)
	{
		if (unk_0xF0C12886E5C1B20E())
		{
			switch (iLocal_2)
			{
				case 0:
					if (unk_0x1BD7199394D7F19A(2, 189))
					{
						iLocal_2++;
						SYSTEM::SETTIMERA(0);
					}
					break;
				
				case 1:
					if (unk_0x1BD7199394D7F19A(2, 190))
					{
						iLocal_2++;
						SYSTEM::SETTIMERA(0);
					}
					else if (SYSTEM::TIMERA() > 2000)
					{
						iLocal_2 = 0;
					}
					break;
				
				case 2:
					if (unk_0x1BD7199394D7F19A(2, 189))
					{
						iLocal_2++;
						SYSTEM::SETTIMERA(0);
					}
					else if (SYSTEM::TIMERA() > 2000)
					{
						iLocal_2 = 0;
					}
					break;
				
				case 3:
					if (unk_0x1BD7199394D7F19A(2, 190))
					{
						iLocal_2++;
						SYSTEM::SETTIMERA(0);
					}
					else if (SYSTEM::TIMERA() > 2000)
					{
						iLocal_2 = 0;
					}
					break;
				
				case 4:
					if (unk_0x1BD7199394D7F19A(2, 188))
					{
						iLocal_1 = 1;
						SYSTEM::SETTIMERA(0);
					}
					else if (SYSTEM::TIMERA() > 2000)
					{
						iLocal_2 = 0;
					}
					break;
				}
		}
	}
	else if (unk_0xF0C12886E5C1B20E())
	{
		switch (iLocal_2)
		{
			case 0:
				if (unk_0x1BD7199394D7F19A(2, 188))
				{
					iLocal_2++;
					SYSTEM::SETTIMERA(0);
				}
				break;
			
			case 1:
				if (unk_0x1BD7199394D7F19A(2, 190))
				{
					iLocal_2++;
					SYSTEM::SETTIMERA(0);
				}
				else if (SYSTEM::TIMERA() > 2000)
				{
					iLocal_2 = 0;
				}
				break;
			
			case 2:
				if (unk_0x1BD7199394D7F19A(2, 189))
				{
					iLocal_2++;
					SYSTEM::SETTIMERA(0);
				}
				else if (SYSTEM::TIMERA() > 2000)
				{
					iLocal_2 = 0;
				}
				break;
			
			case 3:
				if (unk_0x1BD7199394D7F19A(2, 190))
				{
					iLocal_2++;
					SYSTEM::SETTIMERA(0);
				}
				else if (SYSTEM::TIMERA() > 2000)
				{
					iLocal_2 = 0;
				}
				break;
			
			case 4:
				if (unk_0x1BD7199394D7F19A(2, 189))
				{
					iLocal_1 = 0;
					SYSTEM::SETTIMERA(0);
				}
				else if (SYSTEM::TIMERA() > 2000)
				{
					iLocal_2 = 0;
				}
				break;
			}
	}
}

void func_83(float fParam0, float fParam1, char* sParam2, char* sParam3)
{
	unk_0x40A75E32D30C605F(sParam2);
	unk_0x05CA0125610AB2F4(sParam3);
	unk_0xA434CC17B5517E4E(fParam0, fParam1, 0);
}

bool func_84()
{
	return unk_0x95C5B896CB42B20E(-1762644250);
}

void func_85()
{
	unk_0x97294874633DD507("RADIO_13_JAZZ", "WWFM_ISLAND_UPDATE_MUSIC_MUSIC");
	unk_0x97294874633DD507("RADIO_14_DANCE_02", "FLYLO_ISLAND_UPDATE_MUSIC_MUSIC");
}

