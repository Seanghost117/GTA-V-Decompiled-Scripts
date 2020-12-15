#region Local Var
	struct<2> ScriptParam_0 = { 0, 0 } ;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
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
		
		case 2:
			if (ScriptParam_0.f_1 == -1029820160)
			{
			}
			break;
		
		case 0:
		case 1:
			if (ScriptParam_0.f_1 == -1931845307)
			{
				func_2(1, 0, -1029819160, 0, 1, "PM_PANE_AUD");
				func_2(1, 1, -1029819160, 1, 0, "PM_PANE_DIS");
				func_1(1);
			}
			if (ScriptParam_0.f_1 == -1029820160)
			{
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

void func_2(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, char* sParam5)
{
	if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SET_DATA_SLOT"))
	{
		NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE(iParam0);
		NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE(iParam1);
		NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE(iParam2);
		NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE(iParam3);
		NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE(0);
		NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE(0);
		if (bParam4)
		{
			NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE(1);
		}
		else
		{
			NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE(0);
		}
		func_3(sParam5);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

void func_3(var uParam0)
{
	MISC::UPDATE_ONSCREEN_KEYBOARD(uParam0);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT();
}

