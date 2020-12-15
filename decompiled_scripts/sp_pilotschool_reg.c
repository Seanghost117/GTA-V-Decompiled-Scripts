void __EntryFunction__()
{
	MISC::START_SAVE_DATA(&Global_2883584, 1, true);
	func_1();
	MISC::STOP_SAVE_DATA();
	unk_0xBE20AB8238688965(&Global_4271882, 1);
}

void func_1()
{
	MISC::REGISTER_INT_TO_SAVE(&Global_2883584, "PILOT_SCHOOL_DUMMY_DATA");
}

