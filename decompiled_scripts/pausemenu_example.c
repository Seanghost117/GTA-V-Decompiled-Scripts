#region Local Var
	struct<4> ScriptParam_0 = { 0, 0, 0, 0 } ;
#endregion

void __EntryFunction__()
{
	switch (ScriptParam_0)
	{
		case 3:
			while (true)
			{
				SYSTEM::WAIT(5000);
			}
			break;
		
		case 0:
		case 1:
			if (ScriptParam_0.f_1 == -1931845307)
			{
				func_2(1, 0, -1705870862, 25, 1, "PM_PANE_AUD", 0, 0);
				func_2(1, 1, -1705870862, 50, 1, "PM_PANE_DIS", 0, 0);
				func_1(1);
			}
			if (ScriptParam_0.f_1 == -1705871862)
			{
			}
			break;
		
		case 2:
			switch (ScriptParam_0.f_1)
			{
				case -1931845307:
					break;
				
				case -1705871862:
					switch (ScriptParam_0.f_3)
					{
						case 25:
							break;
						
						case 50:
							break;
					}
					break;
			}
			break;
	}
	ENTITY::STOP_ENTITY_ANIM();
}

void func_1(int iParam0)
{
	if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("DISPLAY_DATA_SLOT"))
	{
		NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE(iParam0);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

void func_2(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, int iParam6, int iParam7)
{
	if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SET_DATA_SLOT"))
	{
		NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE(iParam0);
		NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE(iParam1);
		NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE(iParam2);
		NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE(iParam3);
		NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE(iParam7);
		NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE(0);
		if (bParam4)
		{
			NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE(1);
		}
		else
		{
			NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE(0);
		}
		if (iParam6 == 0)
		{
			func_3(bParam5);
		}
		else
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam5);
		}
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

void func_3(var uParam0)
{
	MISC::UPDATE_ONSCREEN_KEYBOARD(uParam0);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT();
}

