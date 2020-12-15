#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iScriptParam_0 = 0;
#endregion

void __EntryFunction__()
{
	void fVar0;
	
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(2))
	{
		func_1();
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		if (MISC::IS_BIT_SET(iScriptParam_5))
		{
			if (BRAIN::IS_OBJECT_WITHIN_BRAIN_ACTIVATION_RANGE(iScriptParam_5) && INTERIOR::GET_INTERIOR_AT_COORDS(joaat("finalec1")) == 0)
			{
				switch (iLocal_2)
				{
					case 0:
						if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(unk_0x9B0761B4C3EB8BC7()))
						{
							fVar0 = MONEY::NETWORK_SPENT_REQUEST_HEIST(unk_0x9B0761B4C3EB8BC7());
							if (unk_0x0B1B45E748AD48BA(fVar0))
							{
								if (INTERIOR::IS_INTERIOR_READY(fVar0))
								{
									if (INTERIOR::IS_INTERIOR_SCENE())
									{
										STREAMING::REQUEST_PTFX_ASSET();
										iLocal_2 = 1;
									}
								}
							}
						}
						break;
					
					case 1:
						if (STREAMING::HAS_PTFX_ASSET_LOADED())
						{
							if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(unk_0x9B0761B4C3EB8BC7()))
							{
								if (!MISC::IS_BIT_SET(iLocal_4))
								{
									iLocal_4 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(1090f, -1996f, 39f, 100f, joaat("v_ilev_found_cranebucket"), true, false, true);
								}
								if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_3))
								{
									if (MISC::IS_BIT_SET(iLocal_4))
									{
										fVar0 = MONEY::NETWORK_SPENT_REQUEST_HEIST(unk_0x9B0761B4C3EB8BC7());
										if (unk_0x0B1B45E748AD48BA(fVar0))
										{
											if (INTERIOR::IS_INTERIOR_READY(fVar0))
											{
												if (INTERIOR::IS_INTERIOR_SCENE())
												{
													iLocal_3 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_obfoundry_cauldron_steam", iLocal_4, 0f, 0f, 0f, 0f, 0f, 0f, 1f, false, false, false);
												}
											}
										}
									}
								}
							}
						}
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
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_3))
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_3, false);
	}
	if (MISC::IS_BIT_SET(iLocal_4))
	{
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_4);
	}
	func_2("ob_foundry_cauldron Terminated >>>>>>>>>>>>>>>>>\n");
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

