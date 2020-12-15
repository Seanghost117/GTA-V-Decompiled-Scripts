#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	struct<2> ScriptParam_0 = { 0, 0 } ;
#endregion

void __EntryFunction__()
{
	float fVar0;
	
	if (unk_0xED06FD5709A59F02(19))
	{
		func_1();
	}
	uLocal_0 = ScriptParam_3;
	uLocal_1 = ScriptParam_3.f_1;
	while (!unk_0xCE990E643CD9D0E5(uLocal_2, 1))
	{
		if (!unk_0xCE990E643CD9D0E5(uLocal_2, 0))
		{
			if (unk_0xAE06B9E39EBDE049(uLocal_0))
			{
				if (unk_0x80FF6C016CDB0FAF(uLocal_0, 0))
				{
					unk_0x4F3C4F457D44BB0F(uLocal_0, 0, 1);
					unk_0x6A8F948698B360B4(uLocal_0, 1);
					unk_0x52090984B5C8A3E4(uLocal_0, 1, 1, 1, 1, 1, 0, 0, 0);
					if (unk_0xAE06B9E39EBDE049(uLocal_1))
					{
						unk_0x4F3C4F457D44BB0F(uLocal_1, 0, 1);
						unk_0x6A8F948698B360B4(uLocal_1, 1);
						unk_0x52090984B5C8A3E4(uLocal_1, 1, 1, 1, 1, 1, 0, 0, 0);
					}
					unk_0xBE20AB8238688965(&uLocal_2, 0);
				}
			}
		}
		else if (!unk_0xA59F96B50B97E63C(unk_0x9B0761B4C3EB8BC7(), 0))
		{
			if (unk_0x80FF6C016CDB0FAF(uLocal_0, 0))
			{
				fVar0 = SYSTEM::VDIST2(unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), 1), unk_0x3E4D3CCC220BDFB1(uLocal_0, 1));
				if (fVar0 > 90000f)
				{
					unk_0xBE20AB8238688965(&uLocal_2, 1);
				}
				else if (fVar0 > 40000f && !unk_0xA38BFCB05DBE439D(uLocal_0))
				{
					unk_0xBE20AB8238688965(&uLocal_2, 1);
				}
			}
			else
			{
				unk_0xBE20AB8238688965(&uLocal_2, 1);
			}
		}
		SYSTEM::WAIT(0);
	}
	func_1();
}

void func_1()
{
	unk_0xE730EAF558C97567(&uLocal_0);
	unk_0x95047B5978C3543C(&uLocal_1);
	unk_0xD39E529EBE5DB04F();
}

