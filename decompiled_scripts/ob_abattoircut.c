#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	int iScriptParam_0 = 0;
#endregion

void __EntryFunction__()
{
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(2))
	{
		func_1();
	}
	if (MISC::IS_BIT_SET(iScriptParam_3))
	{
		ENTITY::SET_ENTITY_COORDS(iScriptParam_3, 1);
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		if (MISC::IS_BIT_SET(iScriptParam_3))
		{
			if (BRAIN::IS_OBJECT_WITHIN_BRAIN_ACTIVATION_RANGE(iScriptParam_3) && INTERIOR::GET_INTERIOR_AT_COORDS(joaat("michael2")) > 0)
			{
				switch (iLocal_2)
				{
					case 0:
						if (ENTITY::DOES_ENTITY_HAVE_DRAWABLE(iScriptParam_3))
						{
							STREAMING::REQUEST_ANIM_DICT("MISSMIC2");
							if (STREAMING::HAS_ANIM_DICT_LOADED("MISSMIC2"))
							{
								ENTITY::PLAY_ENTITY_ANIM(iScriptParam_3, "beefsplitter_loop", "MISSMIC2", 1f, true, false, false, 0f, 0);
								iLocal_2 = 1;
							}
						}
						break;
					
					case 1:
						break;
					
					case 2:
						break;
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

void func_1()
{
	func_2("ob_abattoir Terminated >>>>>>>>>>>>>>>>>\n");
	unk_0x1082C25039B168F8("MISSMIC2");
	ENTITY::STOP_ENTITY_ANIM();
}

void func_2(char* sParam0)
{
	func_3(sParam0);
}

void func_3(var uParam0)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS(uParam0, uParam0))
	{
	}
}

