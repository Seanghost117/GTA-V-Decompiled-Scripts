void __EntryFunction__()
{
	if (PED::REMOVE_SCENARIO_BLOCKING_AREA())
	{
		CAM::DO_SCREEN_FADE_IN(500);
	}
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(18))
	{
		func_1();
	}
	while (true)
	{
		SYSTEM::WAIT(0);
	}
}

void func_1()
{
	ENTITY::STOP_ENTITY_ANIM();
}

