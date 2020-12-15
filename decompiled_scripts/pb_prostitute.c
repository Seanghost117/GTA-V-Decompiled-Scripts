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
	int iLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	void fLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	struct<3> Local_56 = { 0, 0, 0 } ;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	char* sLocal_61 = NULL;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	bool bLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	void fLocal_83 = 0;
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	struct<3> Local_88 = { 0, 0, 0 } ;
	struct<3> Local_89 = { 0, 0, 0 } ;
	bool bLocal_90 = 0;
	bool bLocal_91 = 0;
	bool bLocal_92 = 0;
	bool bLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	int iLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	int iLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	int iLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	int iLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	int iLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 16;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	var uLocal_162 = 0;
	var uLocal_163 = 0;
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	var uLocal_166 = 0;
	var uLocal_167 = 0;
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	var uLocal_171 = 0;
	var uLocal_172 = 0;
	var uLocal_173 = 0;
	var uLocal_174 = 0;
	var uLocal_175 = 0;
	var uLocal_176 = 0;
	var uLocal_177 = 0;
	var uLocal_178 = 0;
	var uLocal_179 = 0;
	var uLocal_180 = 0;
	var uLocal_181 = 0;
	var uLocal_182 = 0;
	var uLocal_183 = 0;
	var uLocal_184 = 0;
	var uLocal_185 = 0;
	var uLocal_186 = 0;
	var uLocal_187 = 0;
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	var uLocal_190 = 0;
	var uLocal_191 = 0;
	var uLocal_192 = 0;
	var uLocal_193 = 0;
	var uLocal_194 = 0;
	var uLocal_195 = 0;
	var uLocal_196 = 0;
	var uLocal_197 = 0;
	var uLocal_198 = 0;
	var uLocal_199 = 0;
	var uLocal_200 = 0;
	var uLocal_201 = 0;
	var uLocal_202 = 0;
	var uLocal_203 = 0;
	var uLocal_204 = 0;
	var uLocal_205 = 0;
	var uLocal_206 = 0;
	var uLocal_207 = 0;
	var uLocal_208 = 0;
	var uLocal_209 = 0;
	var uLocal_210 = 0;
	var uLocal_211 = 0;
	var uLocal_212 = 0;
	var uLocal_213 = 0;
	var uLocal_214 = 0;
	var uLocal_215 = 0;
	var uLocal_216 = 0;
	var uLocal_217 = 0;
	var uLocal_218 = 0;
	var uLocal_219 = 0;
	var uLocal_220 = 0;
	var uLocal_221 = 0;
	var uLocal_222 = 0;
	var uLocal_223 = 0;
	var uLocal_224 = 0;
	var uLocal_225 = 0;
	var uLocal_226 = 0;
	var uLocal_227 = 0;
	var uLocal_228 = 0;
	var uLocal_229 = 0;
	var uLocal_230 = 0;
	var uLocal_231 = 0;
	var uLocal_232 = 0;
	var uLocal_233 = 0;
	var uLocal_234 = 0;
	var uLocal_235 = 0;
	var uLocal_236 = 0;
	var uLocal_237 = 0;
	var uLocal_238 = 0;
	var uLocal_239 = 0;
	var uLocal_240 = 0;
	var uLocal_241 = 0;
	var uLocal_242 = 0;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	var uLocal_245 = 0;
	var uLocal_246 = 0;
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	var uLocal_249 = 0;
	var uLocal_250 = 0;
	var uLocal_251 = 0;
	var uLocal_252 = 0;
	var uLocal_253 = 0;
	var uLocal_254 = 0;
	var uLocal_255 = 0;
	var uLocal_256 = 0;
	var uLocal_257 = 0;
	var uLocal_258 = 0;
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	var uLocal_261 = 0;
	var uLocal_262 = 0;
	var uLocal_263 = 0;
	var uLocal_264 = 0;
	var uLocal_265 = 0;
	var uLocal_266 = 0;
	var uLocal_267 = 0;
	var uLocal_268 = 0;
	var uLocal_269 = 0;
	var uLocal_270 = 0;
	var uLocal_271 = 0;
	var uLocal_272 = 0;
	var uLocal_273 = 0;
	var uLocal_274 = 0;
	var uLocal_275 = 0;
	var uLocal_276 = 0;
	var uLocal_277 = 0;
	var uLocal_278 = 0;
	var uLocal_279 = 0;
	var uLocal_280 = 0;
	var uLocal_281 = 1;
	var uLocal_282 = 0;
	int iLocal_283[3] = { 0, 0, 0 };
	int iLocal_284 = 0;
	int iLocal_285 = 0;
	int iLocal_286 = 0;
	int iLocal_287 = 0;
	bool bLocal_288 = 0;
	int iLocal_289 = 0;
	var uLocal_290 = 0;
	int iLocal_291 = 0;
	int iLocal_292 = 0;
	int iLocal_293 = 0;
	int iLocal_294 = 0;
	int iLocal_295 = 0;
	int iLocal_296 = 0;
	int iLocal_297 = 0;
	int iLocal_298 = 0;
	int iLocal_299[4] = { 0, 0, 0, 0 };
	struct<7> Local_300[4];
	var uLocal_301 = 0;
	var uLocal_302 = 0;
	var uLocal_303 = 0;
	var uLocal_304 = 0;
	var uLocal_305 = 0;
	var uLocal_306 = 0;
	var uLocal_307 = 0;
	var uLocal_308 = 0;
	var uLocal_309 = 0;
	var uLocal_310 = 0;
	var uLocal_311 = 0;
	var uLocal_312 = 0;
	var uLocal_313 = 0;
	var uLocal_314 = 0;
	var uLocal_315 = 0;
	var uLocal_316 = 0;
	var uLocal_317 = 0;
	var uLocal_318 = 0;
	float fLocal_319 = 0f;
	var uLocal_320 = 0;
	var uLocal_321 = 0;
	var uLocal_322 = 0;
	var uLocal_323 = 0;
	var uLocal_324 = 0;
	var uLocal_325 = 0;
	var uLocal_326 = 0;
	var uLocal_327 = 0;
	var uLocal_328 = 0;
	var uLocal_329 = 0;
	var uLocal_330 = 0;
	var uLocal_331 = 0;
	var uLocal_332 = 0;
	var uLocal_333 = 0;
	var uLocal_334 = 0;
	var uLocal_335 = 0;
	var uLocal_336 = 0;
	var uLocal_337 = 0;
	var uLocal_338 = 0;
	var uLocal_339 = 15;
	var uLocal_340 = 0;
	var uLocal_341 = 0;
	var uLocal_342 = 0;
	var uLocal_343 = 0;
	var uLocal_344 = 0;
	var uLocal_345 = 0;
	var uLocal_346 = 0;
	var uLocal_347 = 0;
	var uLocal_348 = 0;
	var uLocal_349 = 0;
	var uLocal_350 = 0;
	var uLocal_351 = 0;
	var uLocal_352 = 0;
	var uLocal_353 = 0;
	var uLocal_354 = 0;
	var uLocal_355 = 0;
	var uLocal_356 = 0;
	var uLocal_357 = 0;
	var uLocal_358 = 0;
	var uLocal_359 = 0;
	var uLocal_360 = 0;
	var uLocal_361 = 0;
	var uLocal_362 = 0;
	var uLocal_363 = 0;
	var uLocal_364 = 0;
	var uLocal_365 = 0;
	var uLocal_366 = 0;
	var uLocal_367 = 0;
	var uLocal_368 = 0;
	var uLocal_369 = 0;
	var uLocal_370 = 0;
	var uLocal_371 = 0;
	var uLocal_372 = 0;
	var uLocal_373 = 0;
	var uLocal_374 = 0;
	var uLocal_375 = 0;
	var uLocal_376 = 0;
	var uLocal_377 = 0;
	var uLocal_378 = 0;
	var uLocal_379 = 0;
	var uLocal_380 = 0;
	var uLocal_381 = 0;
	var uLocal_382 = 0;
	var uLocal_383 = 0;
	var uLocal_384 = 0;
	var uLocal_385 = 0;
	var uLocal_386 = 0;
	var uLocal_387 = 0;
	var uLocal_388 = 0;
	var uLocal_389 = 0;
	var uLocal_390 = 0;
	var uLocal_391 = 0;
	var uLocal_392 = 0;
	var uLocal_393 = 0;
	var uLocal_394 = 0;
	var uLocal_395 = 0;
	var uLocal_396 = 0;
	var uLocal_397 = 0;
	var uLocal_398 = 0;
	var uLocal_399 = 0;
	var uLocal_400 = 0;
	var uLocal_401 = 0;
	var uLocal_402 = 0;
	var uLocal_403 = 0;
	var uLocal_404 = 0;
	var uLocal_405 = 0;
	var uLocal_406 = 0;
	var uLocal_407 = 0;
	var uLocal_408 = 0;
	var uLocal_409 = 0;
	var uLocal_410 = 0;
	var uLocal_411 = 0;
	var uLocal_412 = 0;
	var uLocal_413 = 0;
	var uLocal_414 = 0;
	var uLocal_415 = 0;
	var uLocal_416 = 0;
	var uLocal_417 = 0;
	var uLocal_418 = 0;
	var uLocal_419 = 0;
	var uLocal_420 = 0;
	var uLocal_421 = 0;
	var uLocal_422 = 0;
	var uLocal_423 = 0;
	var uLocal_424 = 0;
	var uLocal_425 = 0;
	var uLocal_426 = 0;
	var uLocal_427 = 0;
	var uLocal_428 = 0;
	var uLocal_429 = 0;
	var uLocal_430 = 0;
	var uLocal_431 = 0;
	var uLocal_432 = 0;
	var uLocal_433 = 0;
	var uLocal_434 = 0;
	var uLocal_435 = 0;
	var uLocal_436 = 0;
	var uLocal_437 = 0;
	var uLocal_438 = 0;
	var uLocal_439 = 0;
	var uLocal_440 = 0;
	var uLocal_441 = 0;
	var uLocal_442 = 0;
	var uLocal_443 = 0;
	var uLocal_444 = 0;
	var uLocal_445 = 0;
	var uLocal_446 = 0;
	var uLocal_447 = 0;
	var uLocal_448 = 0;
	var uLocal_449 = 0;
	var uLocal_450 = 0;
	var uLocal_451 = 0;
	var uLocal_452 = 0;
	var uLocal_453 = 0;
	var uLocal_454 = 0;
	var uLocal_455 = 0;
	var uLocal_456 = 0;
	var uLocal_457 = 0;
	var uLocal_458 = 0;
	var uLocal_459 = 0;
	var uLocal_460 = 0;
	var uLocal_461 = 0;
	var uLocal_462 = 0;
	var uLocal_463 = 0;
	var uLocal_464 = 0;
	var uLocal_465 = 0;
	var uLocal_466 = 0;
	var uLocal_467 = 0;
	var uLocal_468 = 0;
	var uLocal_469 = 0;
	var uLocal_470 = 0;
	var uLocal_471 = 0;
	var uLocal_472 = 0;
	var uLocal_473 = 0;
	var uLocal_474 = 0;
	var uLocal_475 = 0;
	var uLocal_476 = 0;
	var uLocal_477 = 0;
	var uLocal_478 = 0;
	var uLocal_479 = 0;
	var uLocal_480 = 0;
	var uLocal_481 = 0;
	var uLocal_482 = 0;
	var uLocal_483 = 0;
	var uLocal_484 = 0;
	var uLocal_485 = 0;
	var uLocal_486 = 0;
	var uLocal_487 = 0;
	var uLocal_488 = 0;
	var uLocal_489 = 0;
	var uLocal_490 = 0;
	var uLocal_491 = 0;
	var uLocal_492 = 0;
	var uLocal_493 = 0;
	var uLocal_494 = 0;
	var uLocal_495 = 0;
	var uLocal_496 = 0;
	var uLocal_497 = 0;
	var uLocal_498 = 0;
	var uLocal_499 = 0;
	var uLocal_500 = 0;
	var uLocal_501 = 0;
	var uLocal_502 = 0;
	var uLocal_503 = 0;
	var uLocal_504 = 0;
	var uLocal_505 = 0;
	var uLocal_506 = 0;
	var uLocal_507 = 0;
	var uLocal_508 = 0;
	var uLocal_509 = 0;
	var uLocal_510 = 0;
	var uLocal_511 = 0;
	var uLocal_512 = 0;
	var uLocal_513 = 0;
	var uLocal_514 = 0;
	var uLocal_515 = 0;
	var uLocal_516 = 0;
	var uLocal_517 = 0;
	var uLocal_518 = 0;
	var uLocal_519 = 0;
	var uLocal_520 = 0;
	var uLocal_521 = 0;
	var uLocal_522 = 0;
	var uLocal_523 = 0;
	var uLocal_524 = 0;
	var uLocal_525 = 0;
	var uLocal_526 = 0;
	var uLocal_527 = 0;
	var uLocal_528 = 0;
	var uLocal_529 = 0;
	var uLocal_530 = 0;
	var uLocal_531 = 0;
	var uLocal_532 = 0;
	var uLocal_533 = 0;
	var uLocal_534 = 0;
	var uLocal_535 = 0;
	var uLocal_536 = 0;
	var uLocal_537 = 0;
	var uLocal_538 = 0;
	var uLocal_539 = 0;
	var uLocal_540 = 0;
	var uLocal_541 = 0;
	var uLocal_542 = 0;
	var uLocal_543 = 0;
	var uLocal_544 = 0;
	var uLocal_545 = 0;
	var uLocal_546 = 0;
	var uLocal_547 = 0;
	var uLocal_548 = 0;
	var uLocal_549 = 0;
	var uLocal_550 = 0;
	var uLocal_551 = 0;
	var uLocal_552 = 0;
	var uLocal_553 = 0;
	var uLocal_554 = 0;
	var uLocal_555 = 0;
	var uLocal_556 = 0;
	var uLocal_557 = 0;
	var uLocal_558 = 0;
	var uLocal_559 = 0;
	var uLocal_560 = 0;
	var uLocal_561 = 0;
	var uLocal_562 = 0;
	var uLocal_563 = 0;
	var uLocal_564 = 0;
	var uLocal_565 = 0;
	var uLocal_566 = 0;
	var uLocal_567 = 0;
	var uLocal_568 = 0;
	var uLocal_569 = 0;
	var uLocal_570 = 0;
	var uLocal_571 = 0;
	var uLocal_572 = 0;
	var uLocal_573 = 0;
	var uLocal_574 = 0;
	var uLocal_575 = 0;
	var uLocal_576 = 0;
	var uLocal_577 = 0;
	var uLocal_578 = 0;
	var uLocal_579 = 0;
	var uLocal_580 = 0;
	var uLocal_581 = 0;
	var uLocal_582 = 0;
	var uLocal_583 = 0;
	var uLocal_584 = 0;
	var uLocal_585 = 0;
	var uLocal_586 = 0;
	var uLocal_587 = 0;
	var uLocal_588 = 0;
	var uLocal_589 = 0;
	var uLocal_590 = 0;
	var uLocal_591 = 0;
	var uLocal_592 = 0;
	var uLocal_593 = 0;
	var uLocal_594 = 0;
	var uLocal_595 = 0;
	var uLocal_596 = 0;
	var uLocal_597 = 0;
	var uLocal_598 = 0;
	var uLocal_599 = 0;
	var uLocal_600 = 0;
	var uLocal_601 = 0;
	var uLocal_602 = 0;
	var uLocal_603 = 0;
	var uLocal_604 = 0;
	var uLocal_605 = 0;
	var uLocal_606 = 0;
	var uLocal_607 = 0;
	var uLocal_608 = 0;
	var uLocal_609 = 0;
	var uLocal_610 = 0;
	var uLocal_611 = 0;
	var uLocal_612 = 1;
	int iLocal_613 = 0;
#endregion

void __EntryFunction__()
{
	bool bVar0;
	
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
	iLocal_28 = 3;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	Local_56 = { 0f, 0f, 0f };
	iLocal_72 = -1;
	iLocal_74 = -1;
	iLocal_75 = -1;
	iLocal_76 = -1;
	iLocal_77 = -1;
	iLocal_78 = -1;
	iLocal_79 = -1;
	iLocal_80 = -1;
	iLocal_82 = -1;
	iLocal_84 = -1;
	iLocal_85 = -1;
	iLocal_284 = -1;
	fLocal_319 = ((0.05f + 0.275f) - 0.01f);
	if (Global_3)
	{
		ENTITY::STOP_ENTITY_ANIM();
	}
	if (MISC::SET_BIT())
	{
		if (func_551(PLAYER::PLAYER_ID(), 1))
		{
			ENTITY::STOP_ENTITY_ANIM();
		}
		if (func_550(PLAYER::PLAYER_ID(), 1))
		{
			ENTITY::STOP_ENTITY_ANIM();
		}
	}
	if (func_549(13) || func_549(14))
	{
		ENTITY::STOP_ENTITY_ANIM();
	}
	if (!func_548() && !MISC::SET_BIT())
	{
		if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(35))
		{
			func_539();
			func_538(1);
			func_533(&uLocal_339);
		}
	}
	SYSTEM::WAIT(0);
	bLocal_90 = iScriptParam_613;
	if (MISC::SET_BIT())
	{
		func_532();
		NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(2, 0, PLAYER::PLAYER_ID());
		func_527(0, -1, 0);
		WEAPON::GET_WEAPONTYPE_GROUP(0);
	}
	func_526();
	func_525(128);
	while (iLocal_60)
	{
		bVar0 = true;
		func_522(&uLocal_339);
		if (func_548())
		{
			if (func_521(1024))
			{
				if (!PED::IS_PED_IN_ANY_POLICE_VEHICLE(unk_0x9B0761B4C3EB8BC7(), 0))
				{
					if (PED::HAS_PED_HEAD_BLEND_FINISHED(unk_0x9B0761B4C3EB8BC7()) && PED::_HAS_STREAMED_PED_ASSETS_LOADED(unk_0x9B0761B4C3EB8BC7()))
					{
						func_525(1024);
						PED::_0x4668D80430D6C299(unk_0x9B0761B4C3EB8BC7());
					}
				}
			}
			if (!func_521(1024) && func_521(2048))
			{
				ENTITY::STOP_ENTITY_ANIM();
			}
			if (!MISC::IS_BIT_SET(bLocal_90))
			{
				bVar0 = false;
			}
			else if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(bLocal_90))
			{
				bVar0 = false;
				NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(bLocal_90);
			}
		}
		if (!func_548() || !func_521(2048))
		{
			func_514();
			if (func_548())
			{
				func_513();
				if (func_521(128))
				{
					iLocal_60 = 0;
				}
			}
			if (func_508())
			{
				if (bVar0)
				{
					if (iLocal_285 > 0)
					{
						func_503(&uLocal_339);
					}
					func_501();
					func_499();
					switch (iLocal_285)
					{
						case 0:
							if (iLocal_284 == -1)
							{
								if (PED::IS_PED_VAULTING(bLocal_90))
								{
									iLocal_284 = func_498();
								}
								else if (func_496())
								{
									iLocal_284 = 4;
								}
							}
							else if (func_491())
							{
								if (func_490())
								{
									if (func_548())
									{
										if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(bLocal_90))
										{
											TASK::TASK_START_SCENARIO_IN_PLACE(bLocal_90, "WORLD_HUMAN_PROSTITUTE_HIGH_CLASS", 0, false);
										}
										else
										{
											NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(bLocal_90);
										}
									}
									else
									{
										TASK::TASK_START_SCENARIO_IN_PLACE(bLocal_90, "WORLD_HUMAN_PROSTITUTE_HIGH_CLASS", 0, false);
									}
								}
								iLocal_285 = 1;
								func_489("Prostitue: moving to PROS_PB_CUSTOMER_DETERMINE_TYPE");
							}
							break;
						
						case 1:
							if (func_488(iLocal_49, 4096))
							{
								func_487();
							}
							if (func_486())
							{
								iLocal_285 = 2;
								func_489("Prostitue: moving to PROS_PB_CUSTOMER_PLAYER");
							}
							if (func_482())
							{
								iLocal_285 = 3;
								func_480(&iLocal_49, 64);
								Global_31120 = 1;
								func_489("Prostitue: moving to PROS_PB_CUSTOMER_OTHER");
							}
							break;
						
						case 2:
							func_98(&uLocal_339);
							break;
						
						case 3:
							func_3();
							break;
						
						default:
							break;
						}
				}
			}
			else
			{
				func_2(0);
			}
			func_1();
		}
		SYSTEM::WAIT(0);
	}
	if (func_488(iLocal_49, 2))
	{
	}
	func_489(" Something forced this exit!!!!!!~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
	func_539();
	func_533(&uLocal_339);
}

void func_1()
{
}

void func_2(bool bParam0)
{
	if (bParam0)
	{
		iLocal_60 = 1;
	}
	else
	{
		iLocal_60 = 0;
	}
}

void func_3()
{
	if (iLocal_286 > 0)
	{
		if (ENTITY::GET_ENTITY_COORDS(bLocal_92, false))
		{
			if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_91))
			{
				if (!unk_0xE0B3BC41DDA88DF0(bLocal_91, bLocal_92, 0f))
				{
					func_97();
				}
			}
		}
	}
	if (!MISC::IS_BIT_SET(bLocal_91) || PED::IS_PED_IN_ANY_POLICE_VEHICLE(bLocal_91, 0))
	{
		func_96(15);
	}
	switch (iLocal_286)
	{
		case 0:
			if (!iLocal_287 == 0)
			{
				iLocal_286 = 1;
			}
			break;
		
		case 1:
			func_89();
			break;
		
		case 2:
			func_88();
			break;
		
		case 3:
			func_71();
			break;
		
		case 4:
			func_62();
			break;
		
		case 5:
			func_59();
			break;
		
		case 6:
			if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_91))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(bLocal_90, 242628503) == 7)
				{
					iLocal_63 = MISC::GET_GAME_TIMER();
					iLocal_64 = (iLocal_63 - iLocal_62);
					if (iLocal_64 >= 10000 || !ENTITY::IS_ENTITY_AT_ENTITY(bLocal_90, bLocal_91, 12f, 12f, 5f, false, true, 0))
					{
						func_489("prostitute WAITING TO END");
						func_97();
					}
				}
			}
			else
			{
				func_97();
			}
			break;
		
		case 7:
			if (!PATHFIND::_ARE_PATH_NODES_LOADED_IN_AREA(func_58(0), func_58(1), func_58(2), func_58(3)))
			{
				PATHFIND::_0x07FB139B592FA687(func_58(0), func_58(1), func_58(2), func_58(3));
			}
			else
			{
				TASK::TASK_VEHICLE_DRIVE_TO_COORD(bLocal_91, bLocal_92, Local_88, (VEHICLE::GET_VEHICLE_ESTIMATED_MAX_SPEED(bLocal_92) * 0.65f), 0, 0, 786859, 4f, -1f);
				iLocal_286 = 8;
			}
			break;
		
		case 8:
			if (SYSTEM::VDIST2(Local_88, NETWORK::NETWORK_ARE_HANDLES_THE_SAME(bLocal_90, 1)) < 25f && TASK::GET_SCRIPT_TASK_STATUS(bLocal_91, -1817882002) != 1)
			{
				bLocal_288 = NETWORK::_NETWORK_GET_ROS_PRIVILEGE_25(1, 3);
				iLocal_286 = 11;
			}
			if (func_55(bLocal_91))
			{
				func_96(15);
			}
			break;
		
		case 11:
			func_4();
			break;
		
		case 12:
			func_96(15);
			break;
		
		case 15:
			if (MISC::IS_BIT_SET(bLocal_90) && MISC::IS_BIT_SET(bLocal_92))
			{
				if (unk_0xE0B3BC41DDA88DF0(bLocal_90, bLocal_92, 0f))
				{
					if (!PED::IS_PED_IN_ANY_POLICE_VEHICLE(bLocal_91, 0))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(bLocal_91, -828834893) != 1)
						{
							TASK::TASK_LEAVE_ANY_VEHICLE(bLocal_90, 0, 16842752);
						}
					}
				}
				else
				{
					func_2(0);
				}
			}
			break;
	}
}

void func_4()
{
	switch (iLocal_293)
	{
		case 0:
			PED::SET_SCRIPTED_ANIM_SEAT_OFFSET(bLocal_90, 0.916f);
			if (func_42(bLocal_91))
			{
				func_40(&iLocal_113);
				iLocal_293 = 1;
			}
			break;
		
		case 1:
			if (SYSTEM::VDIST2(NETWORK::NETWORK_ARE_HANDLES_THE_SAME(unk_0x9B0761B4C3EB8BC7(), 0), NETWORK::NETWORK_ARE_HANDLES_THE_SAME(bLocal_90, 0)) < 22500f)
			{
				func_38();
			}
			func_35(bLocal_92);
			if (func_33(bLocal_91))
			{
				func_11(&uLocal_116, "pbproau", "pbpro_pic", 4, 0, 0, 0);
				func_96(15);
			}
			if (func_7(&iLocal_113) > 1f)
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(bLocal_90, 242628503) == 7)
				{
					func_5(&iLocal_49, 512);
					iLocal_293 = 3;
				}
			}
			break;
		
		case 3:
			func_96(15);
			break;
		
		case 5:
			func_96(15);
			break;
	}
}

void func_5(int iParam0, int iParam1)
{
	func_6(iParam0, iParam1);
}

void func_6(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

float func_7(int iParam0)
{
	if (func_10(iParam0))
	{
		if (func_9(iParam0))
		{
			return iParam0->f_2;
		}
		else
		{
			return (func_8(unk_0xCE990E643CD9D0E5(*iParam0, 4)) - iParam0->f_1);
		}
	}
	return iParam0->f_1;
}

float func_8(bool bParam0)
{
	float fVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	
	if (bParam0)
	{
		fVar0 = SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER());
		fVar1 = (fVar0 / 1000f);
		return fVar1;
	}
	if (MISC::SET_BIT())
	{
		iVar2 = NETWORK::GET_NETWORK_TIME();
		fVar3 = SYSTEM::TO_FLOAT(iVar2);
		fVar4 = (fVar3 / 1000f);
		return fVar4;
	}
	return (SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

bool func_9(int iParam0)
{
	return unk_0xCE990E643CD9D0E5(*iParam0, 2);
}

bool func_10(int iParam0)
{
	return unk_0xCE990E643CD9D0E5(*iParam0, true);
}

int func_11(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_32(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_21012 = 0;
	Global_21014 = 0;
	Global_21019 = 0;
	Global_21996 = 0;
	Global_21998 = 0;
	Global_22002 = 0;
	Global_2621441 = 0;
	return func_12(sParam2, iParam3, 0);
}

int func_12(char* sParam0, int iParam1, bool bParam2)
{
	Global_21006 = 0;
	if (Global_21005 == 0 || Global_21007 == 2)
	{
		if (Global_21005 != 0)
		{
			if (iParam1 > Global_21007)
			{
				if (Global_21012 == 0)
				{
					unk_0xBE4122AC23440E7D(0);
					Global_19681.f_1 = 3;
					Global_21005 = 0;
					Global_21006 = 1;
					Global_21058 = 0;
					Global_21001 = 0;
					Global_21002 = 0;
					Global_21016 = 0;
					Global_21015 = 0;
					Global_19680 = 0;
				}
				else
				{
					func_31();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (ENTITY::IS_ENTITY_DEAD())
		{
			return 0;
		}
		if (func_30(8, -1))
		{
			return 0;
		}
		Global_21081 = { Global_21075 };
		func_29();
		Global_20294 = { Global_20459 };
		Global_21011 = Global_21012;
		Global_21018 = Global_21019;
		Global_2621442 = Global_2621441;
		Global_21020 = { Global_21036 };
		Global_21013 = Global_21014;
		Global_21995 = Global_21996;
		Global_22003 = { Global_22009 };
		Global_21997 = Global_21998;
		Global_21999 = Global_22000;
		Global_22001 = Global_22002;
		Global_20624.f_370 = Global_21994;
		Global_20624.f_368 = Global_21992;
		Global_20624.f_369 = Global_21993;
		Global_21001 = Global_21002;
		if (Global_21011)
		{
			VEHICLE::IS_VEHICLE_DRIVEABLE(&Global_7551, 20);
			VEHICLE::IS_VEHICLE_DRIVEABLE(&Global_7552, 17);
			VEHICLE::IS_VEHICLE_DRIVEABLE(&Global_7553, false);
			if (bParam2)
			{
				func_22();
				if (Global_8356[Global_19681 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_19681.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_19647 == 1)
			{
				return 0;
			}
			if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_ID()))
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(unk_0x9B0761B4C3EB8BC7()))
				{
					return 0;
				}
				if (func_21())
				{
					return 0;
				}
				if (SYSTEM::FLOOR(unk_0x9B0761B4C3EB8BC7()))
				{
					return 0;
				}
				if (MISC::IS_PC_VERSION(unk_0x9B0761B4C3EB8BC7()))
				{
					return 0;
				}
				if (unk_0xAACBFCE60AF94F2D(unk_0x9B0761B4C3EB8BC7()))
				{
					return 0;
				}
				if (unk_0x02D1369035663875(unk_0x9B0761B4C3EB8BC7(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_76833)
				{
					if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(unk_0x9B0761B4C3EB8BC7()))
					{
						return 0;
					}
					if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
					{
						return 0;
					}
					if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(unk_0x9B0761B4C3EB8BC7()))
					{
						return 0;
					}
					if (WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_ID(), 0))
					{
						return 0;
					}
				}
			}
			if (func_20())
			{
				return 0;
			}
			else
			{
				switch (Global_19681.f_1)
				{
					case 7:
						return 0;
						break;
					
					case 8:
						return 0;
						break;
					
					case 9:
						break;
					
					case 10:
						break;
					
					default:
						break;
				}
				if (unk_0xCE990E643CD9D0E5(Global_7551, 9))
				{
					return 0;
				}
			}
			func_19();
			Global_21015 = bParam2;
		}
		Global_21007 = iParam1;
		StringCopy(&Global_20624, sParam0, 24);
		Global_19871 = 0;
		func_18();
		func_13();
		return 1;
	}
	if (Global_21005 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_21007 || iParam1 == Global_21007)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_31();
	}
	return 0;
}

void func_13()
{
	if (!func_14())
	{
		return;
	}
	if (Global_21011)
	{
		MemCopy(&(Global_1703978.f_1), {Global_20624}, 4);
		Global_1703978 = Global_6866;
		Global_1703978.f_6 = Global_21015;
	}
}

int func_14()
{
	if (!Global_262145.f_28160)
	{
		return 0;
	}
	if (!Global_76833)
	{
		return 0;
	}
	if (PLAYER::PLAYER_ID() == func_17())
	{
		return 0;
	}
	if (func_15(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (unk_0xCE990E643CD9D0E5(Global_1630317[PLAYER::PLAYER_ID() /*595*/].f_1, 7))
	{
		return 0;
	}
	if (STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED())
	{
		return 0;
	}
	return 1;
}

bool func_15(bool bParam0)
{
	return func_16(bParam0, 20);
}

bool func_16(int iParam0, bool bParam1)
{
	return unk_0xCE990E643CD9D0E5(Global_1630317[iParam0 /*595*/].f_11.f_4, bParam1);
}

int func_17()
{
	return -1;
}

void func_18()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_19873[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0xBE4122AC23440E7D(0);
	Global_21005 = 1;
}

void func_19()
{
	Global_21058 = Global_21057;
	Global_21052 = Global_21053;
	Global_21099 = { Global_21087 };
	Global_21105 = { Global_21093 };
	Global_21060 = Global_21059;
	Global_21129 = { Global_21111 };
	Global_21135 = { Global_21117 };
	Global_21141 = { Global_21123 };
	Global_21147 = { Global_21153 };
	Global_6866 = Global_6867;
	Global_6868 = Global_6869;
	Global_21016 = Global_21017;
	Global_21018 = Global_21019;
	Global_21020 = { Global_21036 };
	Global_21009 = Global_21010;
	Global_22021 = 0;
	Global_21054 = 0;
	Global_21055 = 0;
	VEHICLE::IS_VEHICLE_DRIVEABLE(&Global_7552, 16);
}

int func_20()
{
	if (Global_19681.f_1 == 1 || Global_19681.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_21()
{
	int iVar0;
	int iVar1;
	
	if (Global_76833)
	{
		iVar0 = 0;
		MISC::GET_COORDS_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(unk_0x9B0761B4C3EB8BC7(), &iVar1, 1);
		if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_ID()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (HUD::CLEAR_HELP() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_ID()))
	{
		if (TASK::CLEAR_PED_TASKS(unk_0x9B0761B4C3EB8BC7(), 78, 1))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_22()
{
	if (func_549(14))
	{
		if (!PED::IS_PED_IN_ANY_POLICE_VEHICLE(unk_0x9B0761B4C3EB8BC7(), 0))
		{
			if (MISC::GET_MODEL_DIMENSIONS(unk_0x9B0761B4C3EB8BC7()) == Global_111858.f_28046[0 /*29*/])
			{
				Global_19681 = 0;
			}
			else if (MISC::GET_MODEL_DIMENSIONS(unk_0x9B0761B4C3EB8BC7()) == Global_111858.f_28046[1 /*29*/])
			{
				Global_19681 = 1;
			}
			else if (MISC::GET_MODEL_DIMENSIONS(unk_0x9B0761B4C3EB8BC7()) == Global_111858.f_28046[2 /*29*/])
			{
				Global_19681 = 2;
			}
			else
			{
				Global_19681 = 0;
			}
		}
	}
	else
	{
		Global_19681 = func_23();
		if (Global_19681 == 145)
		{
			Global_19681 = 3;
		}
		if (Global_76833)
		{
			Global_19681 = 3;
		}
		if (Global_19681 > 3)
		{
			Global_19681 = 3;
		}
	}
}

int func_23()
{
	func_24();
	return Global_111858.f_2359.f_539.f_4321;
}

void func_24()
{
	int iVar0;
	
	if (MISC::IS_BIT_SET(unk_0x9B0761B4C3EB8BC7()))
	{
		if (func_27(Global_111858.f_2359.f_539.f_4321) != MISC::GET_MODEL_DIMENSIONS(unk_0x9B0761B4C3EB8BC7()))
		{
			iVar0 = func_26(unk_0x9B0761B4C3EB8BC7());
			if (func_25(iVar0) && (!func_549(14) || Global_110809))
			{
				if (Global_111858.f_2359.f_539.f_4321 != iVar0 && func_25(Global_111858.f_2359.f_539.f_4321))
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

bool func_25(int iParam0)
{
	return iParam0 < 3;
}

int func_26(bool bParam0)
{
	int iVar0;
	void fVar1;
	
	if (MISC::IS_BIT_SET(bParam0))
	{
		fVar1 = MISC::GET_MODEL_DIMENSIONS(bParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_27(iVar0) == fVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_27(int iParam0)
{
	if (func_25(iParam0))
	{
		return func_28(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_28(int iParam0)
{
	return Global_1848[iParam0 /*29*/];
}

void func_29()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_20294[iVar0 /*10*/] = 0;
		StringCopy(&(Global_20294[iVar0 /*10*/].f_1), "", 24);
		Global_20294[iVar0 /*10*/].f_7 = 0;
		Global_20294[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_20294.f_161 = -99;
	Global_20294.f_162 = { 0f, 0f, 0f };
}

bool func_30(bool bParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1377236.f_203[iParam1];
			}
			break;
	}
	return unk_0xCE990E643CD9D0E5(Global_1377236.f_1048, iParam0);
}

void func_31()
{
	SYSTEM::ROUND();
	Global_22016 = 0;
	if ((unk_0x6B12213471F330A3() || Global_19681.f_1 == 9) || Global_19680 == 1)
	{
		unk_0xBE4122AC23440E7D(0);
		Global_21005 = 6;
		Global_19681.f_1 = 3;
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD())
	{
		unk_0xBE4122AC23440E7D(1);
		Global_21005 = 6;
		return;
	}
}

void func_32(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
{
	Global_20459 = { *uParam0 };
	Global_6867 = iParam1;
	StringCopy(&Global_21075, sParam2, 24);
	Global_21994 = uParam5;
	if (iParam3 == 0)
	{
		Global_21992 = 1;
		Global_21990 = 0;
	}
	else
	{
		Global_21992 = 0;
		Global_21990 = 1;
	}
	if (iParam4 == 0)
	{
		Global_21993 = 1;
		Global_21991 = 0;
	}
	else
	{
		Global_21993 = 0;
		Global_21991 = 1;
	}
}

int func_33(bool bParam0)
{
	if (func_34())
	{
		if (!ENTITY::WOULD_ENTITY_BE_OCCLUDED(MISC::GET_MODEL_DIMENSIONS(bParam0), NETWORK::NETWORK_ARE_HANDLES_THE_SAME(bParam0, 1), true))
		{
			return 1;
		}
	}
	return 0;
}

int func_34()
{
	if (Global_22041)
	{
		return 1;
	}
	return 0;
}

void func_35(bool bParam0)
{
	if (bLocal_288 != 1 && bLocal_288 != 2)
	{
		return;
	}
	if (func_37())
	{
		func_36(&bParam0);
	}
}

void func_36(var uParam0)
{
	struct<3> Var0;
	struct<3> Var1;
	
	if (ENTITY::GET_ENTITY_COORDS(*uParam0, false))
	{
		Var0 = { 0f, 0f, -0.1f };
		Var1 = { 0f, 0f, 0f };
		ENTITY::APPLY_FORCE_TO_ENTITY(*uParam0, 1, Var0, Var1, 0, true, true, true, true, false);
	}
}

bool func_37()
{
	return ENTITY::GET_ENTITY_ROTATION(bLocal_90, 876132797);
}

void func_38()
{
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME();
	func_39();
}

void func_39()
{
	Global_22411.f_134 = 1;
}

void func_40(int iParam0)
{
	func_41(iParam0, 0f);
}

void func_41(int iParam0, float fParam1)
{
	iParam0->f_1 = (func_8(unk_0xCE990E643CD9D0E5(*iParam0, 4)) - fParam1);
	unk_0xBE20AB8238688965(iParam0, 1);
	VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 2);
	iParam0->f_2 = 0f;
}

int func_42(bool bParam0)
{
	if (CAM::IS_SCREEN_FADED_OUT(sLocal_61))
	{
		sLocal_61 = func_50(bParam0, 0, 0);
		return 0;
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED(sLocal_61))
	{
		return 0;
	}
	else
	{
		func_43(bLocal_90, func_49(), 1, SYSTEM::FLOOR((15000f * (1f + (SYSTEM::TO_FLOAT(iLocal_70) / 2f)))), 1);
		if (bParam0 == unk_0x9B0761B4C3EB8BC7())
		{
			func_43(bParam0, func_49(), 0, SYSTEM::FLOOR((15000f * (1f + (SYSTEM::TO_FLOAT(iLocal_70) / 2f)))), 1);
		}
		func_489("anim_dict has loaded, triggering anims?");
		func_480(&iLocal_49, 512);
		return 1;
	}
	return 0;
}

void func_43(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	bool bVar0;
	bool bVar1;
	char* sVar2;
	int iVar3;
	
	if (PED::IS_PED_IN_ANY_POLICE_VEHICLE(bParam0, 0))
	{
		return;
	}
	bVar0 = ENTITY::GET_ENTITY_MODEL(bParam0, 1);
	if (!ENTITY::GET_ENTITY_COORDS(bVar0, false))
	{
		return;
	}
	fLocal_48 = STATS::_PLAYSTATS_ARENA_WARS_ENDED();
	if (SYSTEM::VDIST(unk_0x9B0761B4C3EB8BC7(), 1) && func_48(0, 1))
	{
		if (fLocal_48 != 4)
		{
			CAM::SET_FOLLOW_PED_CAM_VIEW_MODE(4);
		}
	}
	bVar1 = func_47(bVar0);
	sVar2 = func_50(bParam0, 0, 0);
	if (!STREAMING::HAS_ANIM_DICT_LOADED(sVar2))
	{
		STREAMING::REQUEST_ANIM_DICT(sVar2);
	}
	else
	{
		TASK::OPEN_SEQUENCE_TASK(&iVar3);
		TASK::TASK_PLAY_ANIM(false, sVar2, func_44(0, bParam2, bParam1, bVar1), 8f, -8f, -1, 0, 0f, false, false, false);
		TASK::TASK_PLAY_ANIM(false, sVar2, func_44(1, bParam2, bParam1, bVar1), 8f, -4f, -1, 0, 0f, false, false, false);
		TASK::TASK_PLAY_ANIM(false, sVar2, func_44(2, bParam2, bParam1, bVar1), 8f, -4f, bParam3, 1, 0f, false, false, false);
		TASK::TASK_PLAY_ANIM(false, sVar2, func_44(3, bParam2, bParam1, bVar1), 8f, -4f, -1, 0, 0f, false, false, false);
		TASK::TASK_PLAY_ANIM(false, sVar2, func_44(4, bParam2, bParam1, bVar1), 4f, -2f, -1, 0, 0f, false, false, false);
		TASK::CLOSE_SEQUENCE_TASK(iVar3);
		AUDIO::STOP_SCRIPTED_CONVERSATION(bParam0, iVar3);
		if (bParam4)
		{
			TASK::CLEAR_SEQUENCE_TASK(&iVar3);
		}
	}
}

char* func_44(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	char* sVar0;
	
	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			if (bParam3)
			{
				if (bParam2)
				{
					if (bParam1)
					{
						sVar0 = func_46(18);
					}
					else
					{
						sVar0 = func_46(23);
					}
				}
				else if (bParam1)
				{
					sVar0 = func_46(8);
				}
				else
				{
					sVar0 = func_46(13);
				}
			}
			else if (bParam2)
			{
				if (bParam1)
				{
					sVar0 = func_45(18);
				}
				else
				{
					sVar0 = func_45(23);
				}
			}
			else if (bParam1)
			{
				sVar0 = func_45(8);
			}
			else
			{
				sVar0 = func_45(13);
			}
			break;
		
		case 1:
			if (bParam3)
			{
				if (bParam2)
				{
					if (bParam1)
					{
						sVar0 = func_46(19);
					}
					else
					{
						sVar0 = func_46(24);
					}
				}
				else if (bParam1)
				{
					sVar0 = func_46(9);
				}
				else
				{
					sVar0 = func_46(14);
				}
			}
			else if (bParam2)
			{
				if (bParam1)
				{
					sVar0 = func_45(19);
				}
				else
				{
					sVar0 = func_45(24);
				}
			}
			else if (bParam1)
			{
				sVar0 = func_45(9);
			}
			else
			{
				sVar0 = func_45(14);
			}
			break;
		
		case 2:
			if (bParam3)
			{
				if (bParam2)
				{
					if (bParam1)
					{
						sVar0 = func_46(20);
					}
					else
					{
						sVar0 = func_46(25);
					}
				}
				else if (bParam1)
				{
					sVar0 = func_46(10);
				}
				else
				{
					sVar0 = func_46(15);
				}
			}
			else if (bParam2)
			{
				if (bParam1)
				{
					sVar0 = func_45(20);
				}
				else
				{
					sVar0 = func_45(25);
				}
			}
			else if (bParam1)
			{
				sVar0 = func_45(10);
			}
			else
			{
				sVar0 = func_45(15);
			}
			break;
		
		case 3:
			if (bParam3)
			{
				if (bParam2)
				{
					if (bParam1)
					{
						sVar0 = func_46(21);
					}
					else
					{
						sVar0 = func_46(26);
					}
				}
				else if (bParam1)
				{
					sVar0 = func_46(11);
				}
				else
				{
					sVar0 = func_46(16);
				}
			}
			else if (bParam2)
			{
				if (bParam1)
				{
					sVar0 = func_45(21);
				}
				else
				{
					sVar0 = func_45(26);
				}
			}
			else if (bParam1)
			{
				sVar0 = func_45(11);
			}
			else
			{
				sVar0 = func_45(16);
			}
			break;
		
		case 4:
			if (bParam3)
			{
				if (bParam2)
				{
					if (bParam1)
					{
						sVar0 = func_46(22);
					}
					else
					{
						sVar0 = func_46(27);
					}
				}
				else if (bParam1)
				{
					sVar0 = func_46(12);
				}
				else
				{
					sVar0 = func_46(17);
				}
			}
			else if (bParam2)
			{
				if (bParam1)
				{
					sVar0 = func_45(22);
				}
				else
				{
					sVar0 = func_45(27);
				}
			}
			else if (bParam1)
			{
				sVar0 = func_45(12);
			}
			else
			{
				sVar0 = func_45(17);
			}
			break;
		
		case 5:
			if (bParam3)
			{
				if (bParam1)
				{
					sVar0 = func_46(3);
				}
				else
				{
					sVar0 = func_46(2);
				}
			}
			else if (bParam1)
			{
				sVar0 = func_45(3);
			}
			else
			{
				sVar0 = func_45(2);
			}
			break;
		
		case 6:
			break;
	}
	return sVar0;
}

char* func_45(int iParam0)
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 0:
			sVar0 = "into_proposition_male";
			break;
		
		case 1:
			sVar0 = "into_proposition_prostitute";
			break;
		
		case 2:
			sVar0 = "proposition_loop_male";
			break;
		
		case 3:
			sVar0 = "proposition_loop_prostitute";
			break;
		
		case 4:
			sVar0 = "proposition_to_exit_male";
			break;
		
		case 5:
			sVar0 = "prop_to_sit_alt_prostitute";
			break;
		
		case 6:
			sVar0 = "prop_to_sit_male";
			break;
		
		case 7:
			sVar0 = "prop_to_sit_prostitute";
			break;
		
		case 8:
			sVar0 = "proposition_to_sex_p1_prostitute";
			break;
		
		case 9:
			sVar0 = "proposition_to_sex_p2_prostitute";
			break;
		
		case 10:
			sVar0 = "sex_loop_prostitute";
			break;
		
		case 11:
			sVar0 = "sex_to_proposition_p1_prostitute";
			break;
		
		case 12:
			sVar0 = "sex_to_proposition_p2_prostitute";
			break;
		
		case 13:
			sVar0 = "proposition_to_sex_p1_male";
			break;
		
		case 14:
			sVar0 = "proposition_to_sex_p2_male";
			break;
		
		case 15:
			sVar0 = "sex_loop_male";
			break;
		
		case 16:
			sVar0 = "sex_to_proposition_p1_male";
			break;
		
		case 17:
			sVar0 = "sex_to_proposition_p2_male";
			break;
		
		case 18:
			sVar0 = "proposition_to_BJ_p1_prostitute";
			break;
		
		case 19:
			sVar0 = "proposition_to_BJ_p2_prostitute";
			break;
		
		case 20:
			sVar0 = "BJ_loop_prostitute";
			break;
		
		case 21:
			sVar0 = "BJ_to_proposition_p1_prostitute";
			break;
		
		case 22:
			sVar0 = "BJ_to_proposition_p2_prostitute";
			break;
		
		case 23:
			sVar0 = "proposition_to_BJ_p1_male";
			break;
		
		case 24:
			sVar0 = "proposition_to_BJ_p2_male";
			break;
		
		case 25:
			sVar0 = "BJ_loop_male";
			break;
		
		case 26:
			sVar0 = "BJ_to_proposition_p1_male";
			break;
		
		case 27:
			sVar0 = "BJ_to_proposition_p2_male";
			break;
		
		default:
			sVar0 = "";
			break;
	}
	return sVar0;
}

char* func_46(int iParam0)
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 0:
			sVar0 = "low_car_sit_to_prop_player";
			break;
		
		case 1:
			sVar0 = "low_car_sit_to_prop_female";
			break;
		
		case 2:
			sVar0 = "low_car_prop_loop_player";
			break;
		
		case 3:
			sVar0 = "low_car_prop_loop_female";
			break;
		
		case 4:
			sVar0 = "low_car_prop_to_leave_player";
			break;
		
		case 5:
			sVar0 = "low_car_prop_to_sit_alt_female";
			break;
		
		case 6:
			sVar0 = "low_car_prop_to_sit_player";
			break;
		
		case 7:
			sVar0 = "low_car_prop_to_sit_female";
			break;
		
		case 8:
			sVar0 = "low_car_prop_to_sex_p1_female";
			break;
		
		case 9:
			sVar0 = "low_car_prop_to_sex_p2_female";
			break;
		
		case 10:
			sVar0 = "low_car_sex_loop_female";
			break;
		
		case 11:
			sVar0 = "low_car_sex_to_prop_p1_female";
			break;
		
		case 12:
			sVar0 = "low_car_sex_to_prop_p2_female";
			break;
		
		case 13:
			sVar0 = "low_car_prop_to_sex_p1_player";
			break;
		
		case 14:
			sVar0 = "low_car_prop_to_sex_p2_player";
			break;
		
		case 15:
			sVar0 = "low_car_sex_loop_player";
			break;
		
		case 16:
			sVar0 = "low_car_sex_to_prop_p1_player";
			break;
		
		case 17:
			sVar0 = "low_car_sex_to_prop_p2_player";
			break;
		
		case 18:
			sVar0 = "low_car_prop_to_bj_p1_female";
			break;
		
		case 19:
			sVar0 = "low_car_prop_to_bj_p2_female";
			break;
		
		case 20:
			sVar0 = "low_car_bj_loop_female";
			break;
		
		case 21:
			sVar0 = "low_car_bj_to_prop_p1_female";
			break;
		
		case 22:
			sVar0 = "low_car_bj_to_prop_p2_female";
			break;
		
		case 23:
			sVar0 = "low_car_prop_to_bj_p1_player";
			break;
		
		case 24:
			sVar0 = "low_car_prop_to_bj_p2_player";
			break;
		
		case 25:
			sVar0 = "low_car_bj_loop_player";
			break;
		
		case 26:
			sVar0 = "low_car_bj_to_prop_p1_player";
			break;
		
		case 27:
			sVar0 = "low_car_bj_to_prop_p2_player";
			break;
		
		default:
			sVar0 = "";
			break;
	}
	return sVar0;
}

int func_47(bool bParam0)
{
	if (ENTITY::GET_ENTITY_COORDS(bParam0, false))
	{
		switch (VEHICLE::GET_VEHICLE_LAYOUT_HASH(bParam0))
		{
			case -2066252141:
			case -38413156:
			case -782720499:
			case 542797648:
			case 68566729:
			case -1887744178:
			case -463340997:
			case 2033852426:
			case -1820894825:
			case 1697345049:
			case -635697407:
			case -1453479140:
			case 1837596901:
			case 2013836096:
			case 2071837743:
			case 2130662788:
			case -1546132012:
			case 1192783831:
			case -317944664:
			case 570040040:
			case 1212243433:
			case -193022774:
			case 510359473:
			case -988377294:
			case 1240573865:
			case -627376728:
			case 986556497:
			case 1751095603:
				return 1;
				break;
			}
	}
	return 0;
}

bool func_48(bool bParam0, bool bParam1)
{
	bool bVar0;
	
	bVar0 = false;
	if (bParam0)
	{
		bVar0 = CAM::_0xEE778F8C7E1142E2(0) == 4;
	}
	if (bParam1)
	{
		if (!bVar0)
		{
			bVar0 = CAM::_0xEE778F8C7E1142E2(1) == 4;
		}
	}
	return bVar0;
}

bool func_49()
{
	return bLocal_288 == 0;
}

char* func_50(bool bParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (!PED::IS_PED_IN_ANY_POLICE_VEHICLE(bParam0, 0))
	{
		iVar0 = ENTITY::GET_ENTITY_MODEL(bParam0, 1);
		if (ENTITY::GET_ENTITY_COORDS(iVar0, false))
		{
			if (func_47(bVar0))
			{
				if ((!func_48(0, 1) || iParam2) && !bParam1)
				{
					return func_54();
				}
				else
				{
					return func_53();
				}
			}
			else if (MISC::GET_MODEL_DIMENSIONS(bVar0) == joaat("vstr"))
			{
				return "anim@mini@prostitutes@sex@veh_vstr@";
			}
		}
	}
	if ((!func_48(0, 1) || iParam2) && !bParam1)
	{
		return func_52();
	}
	return func_51();
}

char* func_51()
{
	return "mini@prostitutes@sexnorm_veh_first_person";
}

char* func_52()
{
	return "mini@prostitutes@sexnorm_veh";
}

char* func_53()
{
	return "mini@prostitutes@sexlow_veh_first_person";
}

char* func_54()
{
	return "mini@prostitutes@sexlow_veh";
}

int func_55(bool bParam0)
{
	struct<3> Var0;
	
	if (!PED::IS_PED_IN_ANY_POLICE_VEHICLE(bParam0, 0))
	{
		if (PED::IS_PED_BEING_JACKED(bParam0) || !func_57(bParam0, bLocal_92, -1))
		{
			Var0 = { NETWORK::NETWORK_ARE_HANDLES_THE_SAME(bParam0, 1) };
			PED::SET_PED_FLEE_ATTRIBUTES(bParam0, 196624, true);
			if (func_56())
			{
				TASK::TASK_SMART_FLEE_COORD(bParam0, Var0, 300f, -1, true, true);
			}
			else if (!PED::IS_PED_IN_ANY_POLICE_VEHICLE(PED::GET_PEDS_JACKER(bParam0), 0))
			{
				TASK::TASK_COMBAT_PED(bParam0, PED::GET_PEDS_JACKER(bParam0), 0, 16);
			}
			else
			{
				TASK::TASK_SMART_FLEE_COORD(bParam0, Var0, 300f, -1, true, true);
			}
		}
	}
	return 0;
}

int func_56()
{
	if (unk_0xCE990E643CD9D0E5(NETWORK::_NETWORK_GET_ROS_PRIVILEGE_25(0, 65535), false))
	{
		return 1;
	}
	return 0;
}

int func_57(bool bParam0, bool bParam1, int iParam2)
{
	if (!PED::IS_PED_IN_ANY_POLICE_VEHICLE(bParam0, 0) && !PED::IS_PED_IN_ANY_POLICE_VEHICLE(bParam1, 0))
	{
		if (PED::IS_PED_SITTING_IN_VEHICLE(bParam0, bParam1))
		{
			if (MISC::IS_MINIGAME_IN_PROGRESS(bParam1, iParam2, 0) == bParam0)
			{
				return 1;
			}
		}
	}
	return 0;
}

float func_58(int iParam0)
{
	struct<3> Var0;
	struct<3> Var1;
	
	Var0 = { NETWORK::NETWORK_ARE_HANDLES_THE_SAME(bLocal_90, 1) };
	Var1 = { Local_88 };
	if (iParam0 == 0)
	{
		if (Var0.x < Var1.x)
		{
			return (Var0.x - 20f);
		}
		else
		{
			return (Var1.x - 20f);
		}
	}
	if (iParam0 == 1)
	{
		if (Var0.f_1 < Var1.f_1)
		{
			return (Var0.f_1 - 20f);
		}
		else
		{
			return (Var1.f_1 - 20f);
		}
	}
	if (iParam0 == 2)
	{
		if (Var0.x > Var1.x)
		{
			return (Var0.x + 20f);
		}
		else
		{
			return (Var1.x + 20f);
		}
	}
	if (Var0.f_1 > Var1.f_1)
	{
		return (Var0.f_1 + 20f);
	}
	return (Var1.f_1 + 20f);
}

void func_59()
{
	if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_91))
	{
		if (ENTITY::GET_ENTITY_COORDS(bLocal_92, false))
		{
			if (unk_0xE0B3BC41DDA88DF0(bLocal_91, bLocal_92, 0f))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(bLocal_90, 242628503) == 1)
				{
					if (TASK::GET_SEQUENCE_PROGRESS(bLocal_90) > 0)
					{
						if (unk_0xE0B3BC41DDA88DF0(bLocal_90, bLocal_92, 0f))
						{
							func_489("prostitute WAITING TO END   - DRIVING OFF (WANDER)");
							TASK::OPEN_SEQUENCE_TASK(&iLocal_95);
							TASK::TASK_VEHICLE_DRIVE_WANDER(0, bLocal_92, 10f, 786603);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_95);
							AUDIO::STOP_SCRIPTED_CONVERSATION(bLocal_91, iLocal_95);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_95);
							Local_88 = { func_60(NETWORK::NETWORK_ARE_HANDLES_THE_SAME(bLocal_90, 1)) };
							STREAMING::REQUEST_ANIM_DICT(func_50(bLocal_90, 0, 0));
							iLocal_286 = 7;
							iLocal_62 = MISC::GET_GAME_TIMER();
						}
					}
				}
			}
			else
			{
				func_489("EXIT - OTHER OUT OF THE VEHICLE");
				func_97();
			}
		}
		else
		{
			func_489("EXIT - OTHER VEHICLE DEAD");
			func_97();
		}
	}
	else
	{
		func_489("EXIT - OTHER ped INJURED");
		func_97();
	}
}

Vector3 func_60(struct<3> Param0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 32)
	{
		if (SYSTEM::VDIST2(Param0, func_61(iVar1)) < SYSTEM::VDIST2(Param0, func_61(iVar0)))
		{
			iVar0 = iVar1;
		}
		iVar1++;
	}
	return func_61(iVar0);
}

Vector3 func_61(int iParam0)
{
	struct<3> Var0;
	
	switch (iParam0)
	{
		case 0:
			Var0 = { -1449.075f, -634.0139f, 29.094f };
			break;
		
		case 1:
			Var0 = { -1266.291f, -1361.175f, 3.222f };
			break;
		
		case 2:
			Var0 = { -227.0429f, 311.6679f, 91.1655f };
			break;
		
		case 3:
			Var0 = { -1310.978f, -235.9881f, 41.1789f };
			break;
		
		case 4:
			Var0 = { -545.299f, -874.6625f, 26.1981f };
			break;
		
		case 5:
			Var0 = { -192.1116f, -1332.385f, 30.3304f };
			break;
		
		case 6:
			Var0 = { 196.6188f, -1850.396f, 26.2005f };
			break;
		
		case 7:
			Var0 = { 322.9744f, -1000.23f, 28.2401f };
			break;
		
		case 8:
			Var0 = { 38.824f, -98.3984f, 55.2507f };
			break;
		
		case 9:
			Var0 = { -1800.76f, -404.1213f, 43.8109f };
			break;
		
		case 10:
			Var0 = { 1421.334f, -1618.83f, 58.3324f };
			break;
		
		case 11:
			Var0 = { 983.5914f, -2360.14f, 29.5098f };
			break;
		
		case 12:
			Var0 = { 97.9046f, -2501.28f, 5.0001f };
			break;
		
		case 13:
			Var0 = { 1591.921f, 6516.841f, 16.3155f };
			break;
		
		case 14:
			Var0 = { 1278.73f, 3624.059f, 32.0408f };
			break;
		
		case 15:
			Var0 = { 2464.667f, 5526.815f, 44.2143f };
			break;
		
		case 16:
			Var0 = { 2052.58f, 4637.477f, 39.642f };
			break;
		
		case 17:
			Var0 = { 1435.608f, 4483.951f, 49.2513f };
			break;
		
		case 18:
			Var0 = { 218.214f, 4439.288f, 66.9056f };
			break;
		
		case 19:
			Var0 = { 16.9496f, 3632.35f, 39.2848f };
			break;
		
		case 20:
			Var0 = { 2.0464f, 3293.74f, 40.2594f };
			break;
		
		case 21:
			Var0 = { -1195.701f, 2639.13f, 15.1653f };
			break;
		
		case 22:
			Var0 = { -1663.641f, 2477.778f, 30.9941f };
			break;
		
		case 23:
			Var0 = { -2505.643f, 3677.825f, 12.1719f };
			break;
		
		case 24:
			Var0 = { -2179.209f, 4264.236f, 47.9904f };
			break;
		
		case 25:
			Var0 = { -758.9616f, 5612.78f, 29.4536f };
			break;
		
		case 26:
			Var0 = { -276.8032f, 6327.188f, 31.4262f };
			break;
		
		case 27:
			Var0 = { 1483.839f, 6366.199f, 22.6875f };
			break;
		
		case 28:
			Var0 = { 949.013f, 3551.753f, 32.9687f };
			break;
		
		case 29:
			Var0 = { 180.9372f, 3051.781f, 42.1131f };
			break;
		
		case 30:
			Var0 = { -462.9046f, 6115.419f, 28.8805f };
			break;
		
		case 31:
			Var0 = { -256.3564f, 6056.516f, 30.9808f };
			break;
	}
	return Var0;
}

void func_62()
{
	bool bVar0;
	
	if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_91))
	{
		if (ENTITY::GET_ENTITY_COORDS(bLocal_92, false))
		{
			if (unk_0xE0B3BC41DDA88DF0(bLocal_91, bLocal_92, 0f))
			{
				bVar0 = ENTITY::IS_ENTITY_IN_ANGLED_AREA(bLocal_92);
				if (ENTITY::IS_ENTITY_AT_ENTITY(bLocal_91, bLocal_90, 15f, 15f, 5f, false, true, 0) && bVar0 <= 1f)
				{
					func_69(bLocal_90);
					iLocal_63 = MISC::GET_GAME_TIMER();
					iLocal_64 = (iLocal_63 - iLocal_62);
					if (iLocal_64 >= bLocal_66)
					{
						if (func_548())
						{
							if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(bLocal_91))
							{
								TASK::TASK_CLEAR_LOOK_AT(bLocal_91);
							}
						}
						else
						{
							TASK::TASK_CLEAR_LOOK_AT(bLocal_91);
						}
						bLocal_66 = NETWORK::_NETWORK_GET_ROS_PRIVILEGE_25(0, 10000);
						if (bLocal_66 > 2500)
						{
							HUD::HIDE_HUD_AND_RADAR_THIS_FRAME(bLocal_90);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_95);
							TASK::OPEN_SEQUENCE_TASK(&iLocal_95);
							TASK::TASK_ENTER_VEHICLE(false, bLocal_92, -1, 0, 1f, 8388609, 0);
							TASK::TASK_STAND_STILL(0, -1);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_95);
							AUDIO::STOP_SCRIPTED_CONVERSATION(bLocal_90, iLocal_95);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_95);
							func_489("other GIVES MONEY");
							iLocal_286 = 5;
						}
						else
						{
							func_68();
							func_63();
							if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_91))
							{
								if (ENTITY::GET_ENTITY_COORDS(bLocal_92, false))
								{
									if (unk_0xE0B3BC41DDA88DF0(bLocal_91, bLocal_92, 0f))
									{
										TASK::CLEAR_SEQUENCE_TASK(&iLocal_95);
										TASK::OPEN_SEQUENCE_TASK(&iLocal_95);
										TASK::TASK_STAND_STILL(0, NETWORK::_NETWORK_GET_ROS_PRIVILEGE_25(500, 2000));
										TASK::TASK_VEHICLE_DRIVE_WANDER(0, bLocal_92, 10f, 786603);
										TASK::CLOSE_SEQUENCE_TASK(iLocal_95);
										AUDIO::STOP_SCRIPTED_CONVERSATION(bLocal_91, iLocal_95);
										TASK::CLEAR_SEQUENCE_TASK(&iLocal_95);
										iLocal_62 = MISC::GET_GAME_TIMER();
									}
								}
							}
							func_489("prostitute REFUSED MONEY 2");
							if (func_548())
							{
								if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(bLocal_91))
								{
									TASK::TASK_CLEAR_LOOK_AT(bLocal_91);
								}
							}
							else
							{
								TASK::TASK_CLEAR_LOOK_AT(bLocal_91);
							}
							iLocal_286 = 6;
						}
					}
				}
				else
				{
					if (func_548())
					{
						if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(bLocal_91))
						{
							TASK::TASK_CLEAR_LOOK_AT(bLocal_91);
						}
					}
					else
					{
						TASK::TASK_CLEAR_LOOK_AT(bLocal_91);
					}
					func_97();
				}
			}
			else
			{
				func_489("EXIT - OTHER OUT OF THE VEHICLE");
				if (func_548())
				{
					if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(bLocal_91))
					{
						TASK::TASK_CLEAR_LOOK_AT(bLocal_91);
					}
				}
				else
				{
					TASK::TASK_CLEAR_LOOK_AT(bLocal_91);
				}
				func_97();
			}
		}
		else
		{
			func_489("EXIT - OTHER VEHICLE DEAD");
			func_97();
		}
	}
	else
	{
		func_489("EXIT - OTHER ped INJURED");
		func_97();
	}
}

int func_63()
{
	int iVar0;
	
	if (!MISC::IS_BIT_SET(bLocal_90) || STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_90))
	{
		return 1;
	}
	if (!func_548())
	{
		if (SYSTEM::VDIST(bLocal_90, 1))
		{
			TASK::TASK_WANDER_STANDARD(bLocal_90, 40000f, 0);
		}
		else if (func_488(iLocal_49, 4194304))
		{
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			if (func_488(iLocal_73, 524288))
			{
				TASK::TASK_PLAY_ANIM(false, func_67(iLocal_284), func_66(7), 8f, -1.5f, -1, 0, 0f, false, false, false);
			}
			func_64(1);
			TASK::CLOSE_SEQUENCE_TASK(iVar0);
			AUDIO::STOP_SCRIPTED_CONVERSATION(bLocal_90, iVar0);
			TASK::CLEAR_SEQUENCE_TASK(&iVar0);
			func_480(&iLocal_49, 16384);
			func_40(&iLocal_107);
		}
		return 1;
	}
	if (SYSTEM::VDIST(bLocal_90, 1))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(bLocal_90))
		{
			TASK::TASK_WANDER_STANDARD(bLocal_90, 40000f, 0);
			return 1;
		}
		else
		{
			NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(bLocal_90);
		}
	}
	switch (iLocal_54)
	{
		case 0:
			if (func_488(iLocal_49, 4194304))
			{
				iLocal_54 = 1;
			}
			break;
		
		case 1:
			if (func_488(iLocal_73, 524288))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(bLocal_90))
				{
					TASK::TASK_PLAY_ANIM(bLocal_90, func_67(iLocal_284), func_66(7), 8f, -1.5f, -1, 0, 0f, false, false, false);
				}
				else
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(bLocal_90);
					return 0;
				}
			}
			iLocal_54 = 2;
			break;
		
		case 2:
			if (func_488(iLocal_73, 524288))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(bLocal_90))
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(bLocal_90, -2017877118) == 7)
					{
						func_64(0);
						iLocal_54 = 3;
					}
				}
				else
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(bLocal_90);
				}
			}
			else if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(bLocal_90))
			{
				func_64(0);
				iLocal_54 = 3;
			}
			else
			{
				NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(bLocal_90);
			}
			break;
		
		case 3:
			func_480(&iLocal_49, 16384);
			func_40(&iLocal_107);
			return 1;
			break;
	}
	return 0;
}

void func_64(bool bParam0)
{
	struct<3> Var0;
	
	if (((TASK::PED_HAS_USE_SCENARIO_TASK(bLocal_90) || PED::IS_PED_VAULTING(bLocal_90)) || PED::IS_PED_USING_SCENARIO(bLocal_90, func_65(0))) || PED::IS_PED_USING_SCENARIO(bLocal_90, func_65(1)))
	{
		return;
	}
	Var0 = { NETWORK::NETWORK_ARE_HANDLES_THE_SAME(bLocal_90, 1) };
	if (!TASK::DOES_SCENARIO_OF_TYPE_EXIST_IN_AREA(Var0, func_65(0), 20f, true) && !TASK::DOES_SCENARIO_OF_TYPE_EXIST_IN_AREA(Var0, func_65(1), 20f, true))
	{
		if (bParam0)
		{
			TASK::TASK_WANDER_STANDARD(false, 40000f, 0);
		}
		else
		{
			TASK::TASK_WANDER_STANDARD(bLocal_90, 40000f, 0);
		}
		return;
	}
	if (!bParam0)
	{
		TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD(bLocal_90, Var0, 20f, 0);
	}
	else
	{
		TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD(false, Var0, 20f, 0);
	}
}

char* func_65(int iParam0)
{
	if (iParam0 == 0)
	{
		return "WORLD_HUMAN_PROSTITUTE_LOW_CLASS";
	}
	return "WORLD_HUMAN_PROSTITUTE_HIGH_CLASS";
}

char* func_66(bool bParam0)
{
	switch (bParam0)
	{
		case 0:
			return "idle_intro";
			break;
		
		case 1:
			return "idle_a";
			break;
		
		case 2:
			return "idle_b";
			break;
		
		case 3:
			return "idle_c";
			break;
		
		case 4:
			return "idle_wait";
			break;
		
		case 5:
			return "idle_reject";
			break;
		
		case 8:
			return "idle_reject_loop_a";
			break;
		
		case 9:
			return "idle_reject_loop_b";
			break;
		
		case 10:
			return "idle_reject_loop_c";
			break;
		
		case 11:
			return "idle_outro";
			break;
		
		case 6:
			return "reject_2_idle";
			break;
		
		case 7:
			return "reject_outro";
			break;
	}
	return "";
}

char* func_67(int iParam0)
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 0:
			sVar0 = "mini@hookers_spcrackhead";
			break;
		
		case 1:
			sVar0 = "mini@hookers_spcokehead";
			break;
		
		case 3:
		case 4:
			sVar0 = "mini@hookers_spfrench";
			break;
		
		case 2:
		default:
			sVar0 = "mini@hookers_spvanilla";
			break;
	}
	return sVar0;
}

void func_68()
{
	if (STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_90))
	{
		return;
	}
	if (!AUDIO::IS_ANY_SPEECH_PLAYING(bLocal_90))
	{
		if (func_23() == 2)
		{
			AUDIO::_PLAY_AMBIENT_SPEECH1(bLocal_90, "HOOKER_DECLINED_TREVOR", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
		}
		else
		{
			AUDIO::_PLAY_AMBIENT_SPEECH1(bLocal_90, "HOOKER_DECLINED", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
		}
	}
}

void func_69(bool bParam0)
{
	if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bParam0))
	{
		if (func_70(bParam0))
		{
			PED::SET_PED_RESET_FLAG(bParam0, 109, true);
		}
	}
}

int func_70(bool bParam0)
{
	if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bParam0))
	{
		if ((ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(bParam0, func_67(iLocal_284), func_66(1), 3) || ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(bParam0, func_67(iLocal_284), func_66(2), 3)) || ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(bParam0, func_67(iLocal_284), func_66(3), 3))
		{
			return 1;
		}
	}
	return 0;
}

void func_71()
{
	bool bVar0;
	
	if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_91))
	{
		if (ENTITY::GET_ENTITY_COORDS(bLocal_92, false))
		{
			if (unk_0xE0B3BC41DDA88DF0(bLocal_91, bLocal_92, 0f))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(bLocal_90, 242628503) == 1)
				{
					if (TASK::GET_SEQUENCE_PROGRESS(bLocal_90) > 1)
					{
						if (ENTITY::IS_ENTITY_AT_ENTITY(bLocal_90, bLocal_91, 20f, 20f, 10f, false, true, 0))
						{
							bVar0 = ENTITY::IS_ENTITY_IN_ANGLED_AREA(bLocal_92);
							if (bVar0 <= 1f)
							{
								func_72(0);
								iLocal_62 = MISC::GET_GAME_TIMER();
								bLocal_66 = NETWORK::_NETWORK_GET_ROS_PRIVILEGE_25(4000, 8000);
								func_489("prostitute proposition other in VEHICLE VEHICLE");
								iLocal_286 = 4;
							}
						}
						else
						{
							func_489("EXIT - OTHER IN VEHICLE OUT OF RANGE");
							func_97();
						}
					}
				}
			}
			else
			{
				func_489("EXIT - OTHER OUT OF THE VEHICLE");
				func_97();
			}
		}
		else
		{
			func_489("EXIT - OTHER VEHICLE DEAD");
			func_97();
		}
	}
	else
	{
		func_489("EXIT - OTHER ped INJURED");
		func_97();
	}
}

int func_72(bool bParam0)
{
	bool bVar0;
	int iVar1;
	
	if (!func_548())
	{
		if (bParam0)
		{
			AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(bLocal_90, "PROSTITUTE_GROUP", 0f);
			func_87("PROSTITUTES_SOLICIT_SCENE");
		}
		func_73();
		if (func_488(iLocal_49, 4194304))
		{
			bVar0 = NETWORK::_NETWORK_GET_ROS_PRIVILEGE_25(1, 4);
			TASK::OPEN_SEQUENCE_TASK(&iVar1);
			TASK::TASK_PLAY_ANIM(false, func_67(iLocal_284), func_66(0), 2f, -2f, -1, 0, 0f, false, false, false);
			TASK::TASK_PLAY_ANIM(false, func_67(iLocal_284), func_66(bVar0), 2f, -2f, -1, 0, 0f, false, false, false);
			TASK::TASK_PLAY_ANIM(false, func_67(iLocal_284), func_66(4), 2f, -2f, -1, 1, 0f, false, false, false);
			TASK::CLOSE_SEQUENCE_TASK(iVar1);
			AUDIO::STOP_SCRIPTED_CONVERSATION(bLocal_90, iVar1);
			TASK::CLEAR_SEQUENCE_TASK(&iVar1);
		}
		return 1;
	}
	switch (iLocal_53)
	{
		case 0:
			if (bParam0)
			{
				AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(bLocal_90, "PROSTITUTE_GROUP", 0f);
				func_87("PROSTITUTES_SOLICIT_SCENE");
			}
			func_73();
			iLocal_53 = 1;
			break;
		
		case 1:
			if (func_488(iLocal_49, 4194304))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(bLocal_90))
				{
					TASK::TASK_PLAY_ANIM(bLocal_90, func_67(iLocal_284), func_66(0), 2f, -2f, -1, 0, 0f, false, false, false);
					iLocal_53 = 2;
				}
				else
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(bLocal_90);
				}
			}
			break;
		
		case 2:
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(bLocal_90))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(bLocal_90, -2017877118) == 7)
				{
					bVar0 = NETWORK::_NETWORK_GET_ROS_PRIVILEGE_25(1, 4);
					TASK::TASK_PLAY_ANIM(bLocal_90, func_67(iLocal_284), func_66(bVar0), 2f, -2f, -1, 0, 0f, false, false, false);
					iLocal_53 = 3;
				}
			}
			else
			{
				NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(bLocal_90);
			}
			break;
		
		case 3:
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(bLocal_90))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(bLocal_90, -2017877118) == 7)
				{
					TASK::TASK_PLAY_ANIM(bLocal_90, func_67(iLocal_284), func_66(4), 2f, -2f, -1, 1, 0f, false, false, false);
					iLocal_53 = 4;
				}
			}
			else
			{
				NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(bLocal_90);
			}
			break;
		
		case 4:
			iLocal_53 = 0;
			return 1;
			break;
	}
	return 0;
}

void func_73()
{
	if (STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_90))
	{
		return;
	}
	if (!AUDIO::IS_ANY_SPEECH_PLAYING(bLocal_90))
	{
		switch (func_23())
		{
			case 0:
				if (!func_74(bLocal_90))
				{
					AUDIO::_PLAY_AMBIENT_SPEECH1(bLocal_90, "SOLICIT_MICHAEL", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
				}
				else
				{
					AUDIO::_PLAY_AMBIENT_SPEECH1(bLocal_90, "SOLICIT_MICHAEL_RETURN", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
				}
				break;
			
			case 1:
				if (!func_74(bLocal_90))
				{
					AUDIO::_PLAY_AMBIENT_SPEECH1(bLocal_90, "SOLICIT_FRANKLIN", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
				}
				else
				{
					AUDIO::_PLAY_AMBIENT_SPEECH1(bLocal_90, "SOLICIT_FRANKLIN_RETURN", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
				}
				break;
			
			case 2:
				if (!func_74(bLocal_90))
				{
					AUDIO::_PLAY_AMBIENT_SPEECH1(bLocal_90, "SOLICIT_TREVOR", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
				}
				else
				{
					AUDIO::_PLAY_AMBIENT_SPEECH1(bLocal_90, "SOLICIT_TREVOR_RETURN", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
				}
				break;
			}
	}
}

bool func_74(bool bParam0)
{
	int iVar0;
	
	iVar0 = func_77(bParam0);
	return func_75(iVar0);
}

int func_75(int iParam0)
{
	if (func_76(iParam0) > 0)
	{
		return 1;
	}
	return 0;
}

int func_76(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 == -1)
	{
		return 0;
	}
	if (func_23() == 0)
	{
		iVar0 = Global_111858.f_10045.f_1[iParam0 /*11*/][0];
	}
	else if (func_23() == 1)
	{
		iVar0 = Global_111858.f_10045.f_1[iParam0 /*11*/][1];
	}
	else if (func_23() == 2)
	{
		iVar0 = Global_111858.f_10045.f_1[iParam0 /*11*/][2];
	}
	return iVar0;
}

int func_77(bool bParam0)
{
	int iVar0;
	
	if (!PED::IS_PED_IN_ANY_POLICE_VEHICLE(bParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < 8)
		{
			if (func_76(iVar0) > 0)
			{
				if ((func_83(bParam0, iVar0) && func_79(bParam0, iVar0)) && func_78(bParam0, iVar0))
				{
					return iVar0;
				}
			}
			iVar0++;
		}
	}
	return -1;
}

int func_78(bool bParam0, int iParam1)
{
	if (PED::IS_PED_MODEL(bParam0, Global_111858.f_10045.f_1[iParam1 /*11*/].f_10))
	{
		return 1;
	}
	return 0;
}

int func_79(bool bParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!func_80(bParam0, iParam1, iVar0))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

bool func_80(bool bParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_82(iParam2);
	return PED::GET_PED_TEXTURE_VARIATION(iParam0, iVar0) == func_81(iParam1, iParam2);
}

int func_81(int iParam0, int iParam1)
{
	if (func_75(iParam0))
	{
		return Global_111858.f_10045.f_1[iParam0 /*11*/].f_7[iParam1];
	}
	return -1;
}

int func_82(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = 0;
			break;
		
		case 1:
			iVar0 = 2;
			break;
	}
	return iVar0;
}

int func_83(bool bParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!func_84(bParam0, iParam1, iVar0))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

bool func_84(bool bParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_86(iParam2);
	return PED::GET_PED_DRAWABLE_VARIATION(iParam0, iVar0) == func_85(iParam1, iParam2);
}

int func_85(int iParam0, int iParam1)
{
	if (func_75(iParam0))
	{
		return Global_111858.f_10045.f_1[iParam0 /*11*/].f_4[iParam1];
	}
	return -1;
}

int func_86(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = 0;
			break;
		
		case 1:
			iVar0 = 2;
			break;
	}
	return iVar0;
}

void func_87(char* sParam0)
{
	if (!AUDIO::IS_AUDIO_SCENE_ACTIVE(sParam0))
	{
		AUDIO::START_AUDIO_SCENE(sParam0);
	}
}

void func_88()
{
	bool bVar0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	struct<3> Var5;
	struct<3> Var6;
	
	if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_91))
	{
		if (ENTITY::GET_ENTITY_COORDS(bLocal_92, false))
		{
			if (unk_0xE0B3BC41DDA88DF0(bLocal_91, bLocal_92, 0f))
			{
				bVar0 = ENTITY::IS_ENTITY_IN_ANGLED_AREA(bLocal_92);
				if (TASK::GET_SCRIPT_TASK_STATUS(bLocal_91, -272084098) == 7 || bVar0 <= 1f)
				{
					ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(MISC::GET_MODEL_DIMENSIONS(bLocal_92), &Var2, &Var1);
					Var3 = { Var1 - Var2 };
					Var3 = { Var3 / Vector(2f, 2f, 2f) };
					Var4 = { unk_0x7EC595B99EA7C4B1(bLocal_92, 0.2f, 0.2f, 0f) };
					Var5 = { unk_0x7EC595B99EA7C4B1(bLocal_92, 0.2f, 0.2f, 0f) };
					Var6 = { NETWORK::NETWORK_ARE_HANDLES_THE_SAME(bLocal_90, 1) };
					if (SYSTEM::VDIST(Var6, Var5) < SYSTEM::VDIST(Var6, Var4))
					{
						Var4 = { Var5 };
					}
					TASK::OPEN_SEQUENCE_TASK(&iLocal_95);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Var4.x, Var4.f_1, Var4.f_2, 1f, -1, 0.5f, 8192, 40000f);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, bLocal_91, 0);
					TASK::TASK_STAND_STILL(0, -1);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_95);
					AUDIO::STOP_SCRIPTED_CONVERSATION(bLocal_90, iLocal_95);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_95);
					func_489("prostitute ASKING OTHER FOR MONEY BY VEHICLE");
					iLocal_286 = 3;
				}
				else
				{
					func_489("WAITING FOR CUTSTOMER FINSIH TASK OR STOP");
				}
			}
			else
			{
				func_489("EXIT - OTHER OUT OF VEHICLE");
				func_97();
			}
		}
		else
		{
			func_489("EXIT - OTHER VEHICLE DEAD");
			func_97();
		}
	}
	else
	{
		func_489("EXIT - OTHER ped INJURED");
		func_97();
	}
}

void func_89()
{
	struct<3> Var0;
	
	if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_91))
	{
		if (ENTITY::GET_ENTITY_COORDS(bLocal_92, false))
		{
			if (unk_0xE0B3BC41DDA88DF0(bLocal_91, bLocal_92, 0f))
			{
				if (func_91(&bLocal_92))
				{
					if (func_90(NETWORK::NETWORK_ARE_HANDLES_THE_SAME(bLocal_91, 1), 1106247680))
					{
						return;
					}
					Var0 = { NETWORK::NETWORK_ARE_HANDLES_THE_SAME(bLocal_90, 1) };
					if (MISC::ABSF(Var0, &Var0, 8, 1077936128, 0))
					{
						PED::SET_DRIVER_ABILITY(bLocal_91, 1f);
						PED::SET_DRIVER_RACING_MODIFIER(bLocal_91, 0.2f);
						PED::SET_DRIVER_AGGRESSIVENESS(bLocal_91, 0.05f);
						TASK::TASK_VEHICLE_PARK(bLocal_91, bLocal_92, Var0, 0f, 3, 360f, true);
						TASK::TASK_LOOK_AT_ENTITY(bLocal_91, bLocal_90, -1, 2048, 4);
						func_489("OTHER TOLD TO PULL OVER");
						iLocal_286 = 2;
					}
				}
				else
				{
					func_489("EXIT - Vehicle is not suitable");
					func_96(15);
				}
			}
			else
			{
				func_489("EXIT - OTHER OUT OF THE VEHICLE");
				func_96(15);
			}
		}
		else
		{
			func_489("EXIT - OTHER VEHICLE DEAD");
			func_96(15);
		}
	}
	else
	{
		func_489("EXIT - OTHER ped INJURED");
		func_96(15);
	}
}

bool func_90(struct<3> Param0, int iParam1)
{
	if (func_548())
	{
		return PED::IS_COP_PED_IN_AREA_3D(Param0 - Vector(iParam1, iParam1, iParam1), Param0 + Vector(iParam1, iParam1, iParam1));
	}
	return (VEHICLE::IS_COP_VEHICLE_IN_AREA_3D(Param0 - Vector(iParam1, iParam1, iParam1), Param0 + Vector(iParam1, iParam1, iParam1)) || PED::IS_COP_PED_IN_AREA_3D(Param0 - Vector(iParam1, iParam1, iParam1), Param0 + Vector(iParam1, iParam1, iParam1)));
}

int func_91(bool bParam0)
{
	void fVar0;
	int iVar1;
	
	if (ENTITY::GET_ENTITY_COORDS(*bParam0, false))
	{
		fVar0 = MISC::GET_MODEL_DIMENSIONS(*bParam0);
		if (func_94(fVar0, 0) && func_93(*bParam0))
		{
			if (PED::GET_VEHICLE_PED_IS_USING(*bParam0) > 0)
			{
				iVar1 = STATS::_GET_NGSTAT_BOOL_HASH(*bParam0);
				if (((iVar1 == 0 && SYSTEM::VDIST2(*bParam0, 0, 0)) && (!VEHICLE::IS_VEHICLE_DOOR_DAMAGED(*bParam0, 1) && !VEHICLE::IS_VEHICLE_DOOR_DAMAGED(*bParam0, 0))) || MISC::IS_MINIGAME_IN_PROGRESS(*bParam0, 0, 0) == bLocal_90)
				{
					if (func_47(*bParam0))
					{
						if (!func_488(iLocal_49, 32768))
						{
							func_480(&iLocal_49, 32768);
							if (!func_488(iLocal_49, 8))
							{
								STREAMING::REQUEST_CLIP_SET(func_92());
								func_480(&iLocal_49, 8);
							}
						}
					}
					else
					{
						if (func_488(iLocal_49, 32768))
						{
							func_5(&iLocal_49, 32768);
						}
						if (func_488(iLocal_49, 8))
						{
							if (STREAMING::HAS_CLIP_SET_LOADED(func_92()))
							{
								STREAMING::REMOVE_CLIP_SET(func_92());
								func_5(&iLocal_49, 8);
							}
						}
					}
					return 1;
				}
			}
		}
	}
	return 0;
}

char* func_92()
{
	return "clipset@veh@low@ps@female@base";
}

int func_93(bool bParam0)
{
	int iVar0;
	int iVar1;
	void fVar2;
	char cVar3[16];
	
	if (ENTITY::GET_ENTITY_COORDS(bParam0, false))
	{
		if (VEHICLE::GET_NUM_MOD_KITS(bParam0) > 0)
		{
			iVar0 = 0;
			while (iVar0 < 49)
			{
				iVar1 = iVar0;
				if (((((iVar1 != 17 && iVar1 != 18) && iVar1 != 19) && iVar1 != 20) && iVar1 != 21) && iVar1 != 22)
				{
					if (unk_0x7F8B14CBFB9813E5(bParam0, iVar1) != -1)
					{
						StringCopy(&cVar3, VEHICLE::GET_MOD_TEXT_LABEL(bParam0, iVar1, unk_0x7F8B14CBFB9813E5(bParam0, iVar1)), 16);
						fVar2 = AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT(&cVar3);
						if (fVar2 != 0)
						{
							if (fVar2 == AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("SABRE_CAG"))
							{
								return 0;
							}
						}
					}
				}
				iVar0++;
			}
		}
		switch (MISC::GET_MODEL_DIMENSIONS(bParam0))
		{
			case joaat("peyote2"):
				if ((!VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(bParam0, 2) && !VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(bParam0, 3)) && !VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(bParam0, 4))
				{
					return 0;
				}
				break;
			
			case joaat("peyote3"):
				if (((!VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(bParam0, 2) && !VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(bParam0, 3)) && !VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(bParam0, 4)) && !VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(bParam0, 1))
				{
					return 0;
				}
				break;
			
			case joaat("coquette4"):
				if (!VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(bParam0, 1))
				{
					return 0;
				}
				break;
			
			case joaat("zorrusso"):
				if (unk_0x7F8B14CBFB9813E5(bParam0, 10) == -1)
				{
					return 0;
				}
				break;
			
			case joaat("manana2"):
				if (VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(bParam0, 1))
				{
					return 0;
				}
				break;
		}
		switch (VEHICLE::GET_VEHICLE_LAYOUT_HASH(bParam0))
		{
			case -2066252141:
			case -782720499:
			case 542797648:
			case 68566729:
			case -1887744178:
			case 1486715695:
			case -1917671975:
			case -1405350320:
			case -157990217:
			case -280076747:
			case 1710903184:
			case 1663892749:
			case 434478421:
			case 1816176348:
			case 919485892:
			case 945079693:
			case 85100643:
			case 1939145032:
			case 1869774540:
			case -28233912:
			case -1150063973:
			case -463340997:
			case -703649403:
			case 197952738:
			case -208246612:
			case 2033852426:
			case -1820894825:
			case 1697345049:
			case -635697407:
			case -1910741341:
			case -1158091941:
			case -1834221859:
			case -1453479140:
			case -1954624455:
			case 1837596901:
			case 2013836096:
			case 1374303184:
			case 1419869906:
			case -526725184:
			case 1610027666:
			case -970031572:
			case 2071837743:
			case 1482989244:
			case 2130662788:
			case -1546132012:
			case 1410462333:
			case 1192783831:
			case -1304848574:
			case -317944664:
			case 570040040:
			case 1212243433:
			case -193022774:
			case 510359473:
			case -988377294:
			case 954521785:
			case 584837381:
			case -2123959937:
			case 1074598648:
			case 1818992907:
			case -370341013:
			case 1240573865:
			case -627376728:
			case 986556497:
			case -1852541008:
			case -605059493:
			case 1751095603:
			case -991881300:
				return 1;
				break;
		}
		if (VEHICLE::GET_VEHICLE_LAYOUT_HASH(bParam0) == 931866387 && MISC::GET_MODEL_DIMENSIONS(bParam0) == joaat("slamvan"))
		{
			return 1;
		}
		if ((VEHICLE::GET_VEHICLE_LAYOUT_HASH(bParam0) == 1480261038 && MISC::GET_MODEL_DIMENSIONS(bParam0) == joaat("weevil")) || MISC::GET_MODEL_DIMENSIONS(bParam0) == joaat("brioso2"))
		{
			return 1;
		}
	}
	return 0;
}

int func_94(void fParam0, bool bParam1)
{
	if ((((VEHICLE::IS_THIS_MODEL_A_BOAT(fParam0) || VEHICLE::IS_THIS_MODEL_A_PLANE(fParam0)) || VEHICLE::IS_THIS_MODEL_A_HELI(fParam0)) || VEHICLE::IS_THIS_MODEL_A_TRAIN(fParam0)) || MONEY::NETWORK_SPENT_BULL_SHARK(fParam0))
	{
		return 0;
	}
	if (func_95(fParam0))
	{
		return 0;
	}
	if (!bParam1)
	{
		if (((((((fParam0 == joaat("police") || fParam0 == joaat("police2")) || fParam0 == joaat("police3")) || fParam0 == joaat("police4")) || fParam0 == joaat("fbi")) || fParam0 == joaat("fbi2")) || fParam0 == joaat("caddy")) || fParam0 == joaat("caddy2"))
		{
			return 0;
		}
	}
	if (((((((((((((((fParam0 == joaat("issi2") || fParam0 == joaat("hotknife")) || fParam0 == joaat("jb700")) || fParam0 == joaat("jester")) || fParam0 == joaat("jester2")) || fParam0 == joaat("stromberg")) || fParam0 == joaat("barrage")) || fParam0 == joaat("kamacho")) || fParam0 == joaat("gb200")) || fParam0 == joaat("fagaloa")) || fParam0 == joaat("tezeract")) || fParam0 == joaat("swinger")) || fParam0 == joaat("imperator")) || fParam0 == joaat("locust")) || fParam0 == joaat("schlagen")) || fParam0 == joaat("outlaw"))
	{
		return 0;
	}
	return 1;
}

int func_95(int iParam0)
{
	switch (iParam0)
	{
		case joaat("police"):
		case joaat("police2"):
		case joaat("police3"):
		case joaat("police4"):
		case joaat("polmav"):
		case joaat("policeb"):
		case joaat("policet"):
		case joaat("policeold2"):
		case joaat("policeold1"):
		case joaat("sheriff"):
		case joaat("sheriff2"):
			return 1;
			break;
	}
	return 0;
}

void func_96(int iParam0)
{
	iLocal_286 = iParam0;
}

void func_97()
{
	if (func_548())
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(bLocal_90))
		{
			HUD::HIDE_HUD_AND_RADAR_THIS_FRAME(bLocal_90);
			TASK::TASK_CLEAR_LOOK_AT(bLocal_90);
		}
	}
	else
	{
		HUD::HIDE_HUD_AND_RADAR_THIS_FRAME(bLocal_90);
		TASK::TASK_CLEAR_LOOK_AT(bLocal_90);
	}
	bLocal_91 = false;
	bLocal_92 = false;
	TASK::TASK_PLAY_ANIM(bLocal_90, func_67(iLocal_284), func_66(4), 2f, -2f, -1, 1, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 0.9f), false, false, false);
	func_96(0);
	iLocal_287 = 0;
	iLocal_285 = 1;
}

void func_98(var uParam0)
{
	if (!func_488(iLocal_49, 32))
	{
		iLocal_285 = 1;
	}
	if (iLocal_286 > 1 && iLocal_286 != 12)
	{
		if (!func_488(iLocal_49, 33554432))
		{
			if (func_548())
			{
				if (Global_1655302 || func_472())
				{
					func_471(0);
					func_480(&iLocal_49, 33554432);
				}
			}
			if (AUDIO::SET_SCRIPT_UPDATE_DOOR_AUDIO(PLAYER::PLAYER_ID()) > 0)
			{
				if (func_488(iLocal_49, 1048576) || func_488(iLocal_49, 8192))
				{
					func_471(0);
					func_480(&iLocal_49, 33554432);
				}
			}
		}
	}
	switch (iLocal_286)
	{
		case 0:
			if (func_488(iLocal_49, 16384) || func_488(iLocal_49, 8388608))
			{
				if (!func_10(&iLocal_107))
				{
					func_470(&iLocal_107);
				}
				if (func_469(&iLocal_107, 25f))
				{
					func_5(&iLocal_49, 16384);
					func_5(&iLocal_49, 8388608);
				}
			}
			else if (iLocal_287 != 0 && !func_468("PROS_NO_MONEY"))
			{
				func_64(0);
				switch (func_23())
				{
					case 0:
						func_467(&uLocal_116, 0, unk_0x9B0761B4C3EB8BC7(), "MICHAEL", 0, 1);
						break;
					
					case 1:
						func_467(&uLocal_116, 0, unk_0x9B0761B4C3EB8BC7(), "FRANKLIN", 0, 1);
						break;
					
					case 2:
						func_467(&uLocal_116, 0, unk_0x9B0761B4C3EB8BC7(), "TREVOR", 0, 1);
						break;
				}
				iLocal_286 = 1;
			}
			else
			{
				func_466();
				iLocal_287 = 2;
			}
			break;
		
		case 1:
			func_453(uParam0);
			break;
		
		case 2:
			func_440(uParam0);
			break;
		
		case 3:
			func_439();
			break;
		
		case 4:
			func_427(uParam0);
			break;
		
		case 5:
			func_412();
			break;
		
		case 6:
			func_411(uParam0);
			break;
		
		case 7:
			func_390();
			func_382();
			break;
		
		case 8:
			func_379();
			MONEY::NETWORK_MONEY_CAN_BET(0, 80, true);
			MONEY::NETWORK_MONEY_CAN_BET(0, false, true);
			PLAYER::SPECIAL_ABILITY_DEACTIVATE(PLAYER::PLAYER_ID(), 0);
			func_232();
			func_231(uParam0);
			func_230(uParam0);
			func_229(uParam0);
			if (func_548())
			{
				func_226(uParam0);
			}
			break;
		
		case 9:
			func_223();
			break;
		
		case 10:
			func_220();
			break;
		
		case 11:
			PLAYER::SPECIAL_ABILITY_DEACTIVATE(PLAYER::PLAYER_ID(), 0);
			MONEY::NETWORK_MONEY_CAN_BET(0, false, true);
			MONEY::NETWORK_MONEY_CAN_BET(0, 80, true);
			func_125();
			func_231(uParam0);
			func_230(uParam0);
			func_229(uParam0);
			func_122(uParam0);
			if (func_548())
			{
				PED::SET_PED_RESET_FLAG(unk_0x9B0761B4C3EB8BC7(), 433, true);
				func_226(uParam0);
			}
			break;
		
		case 12:
			func_487();
			break;
		
		case 13:
			MONEY::NETWORK_MONEY_CAN_BET(0, 80, true);
			MONEY::NETWORK_MONEY_CAN_BET(0, false, true);
			func_103();
			break;
		
		case 14:
			func_102();
			break;
		
		case 15:
			MONEY::NETWORK_MONEY_CAN_BET(0, 80, true);
			MONEY::NETWORK_MONEY_CAN_BET(0, false, true);
			func_99(uParam0);
			break;
	}
}

void func_99(var uParam0)
{
	if (!func_548())
	{
		if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(unk_0x9B0761B4C3EB8BC7(), func_50(unk_0x9B0761B4C3EB8BC7(), 0, 0), func_101(1), 3))
		{
			return;
		}
	}
	if (func_488(iLocal_49, 16))
	{
		if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_PLAYER_CAN_DO_DRIVE_BY(PLAYER::PLAYER_ID(), true);
			func_5(&iLocal_49, 16);
		}
	}
	if (func_488(iLocal_49, 2))
	{
		func_100(1);
		func_489("RESETTING INTERFACE FLAG TO FALSE - PROSTITUTE SCRIPT TERMINATING");
	}
	func_539();
	if (func_548())
	{
		func_533(uParam0);
	}
}

void func_100(int iParam0)
{
}

var func_101(bool bParam0)
{
	if (!func_488(iLocal_49, 32768))
	{
		if (bParam0)
		{
			return func_45(6);
		}
		else
		{
			return func_45(7);
		}
	}
	if (bParam0)
	{
		return func_46(6);
	}
	return func_46(7);
}

void func_102()
{
	if (!AUDIO::IS_ANY_SPEECH_PLAYING(unk_0x9B0761B4C3EB8BC7()))
	{
		if (iLocal_70 == 0)
		{
			if (func_488(iLocal_49, 134217728))
			{
				PED::SET_PED_FLEE_ATTRIBUTES(bLocal_90, 32768, false);
				PED::SET_PED_FLEE_ATTRIBUTES(bLocal_90, 196624, true);
			}
			AUDIO::_PLAY_AMBIENT_SPEECH1(bLocal_90, "HOOKER_LEAVES_ANGRY", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
			func_96(15);
		}
	}
}

void func_103()
{
	switch (iLocal_294)
	{
		case 0:
			if (!AUDIO::IS_ANY_SPEECH_PLAYING(bLocal_90) || func_121(&iLocal_101) > 4f)
			{
				func_116(bLocal_90);
				if (func_76(func_77(bLocal_90)) == 1)
				{
					iLocal_294 = 2;
				}
				else
				{
					func_115(&iLocal_101);
					func_114("PROS_RESPONSE");
					iLocal_294 = 1;
				}
			}
			break;
		
		case 1:
			func_113();
			if (AUDIO::IS_ANY_SPEECH_PLAYING(bLocal_90) || func_112())
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256);
				func_480(&iLocal_49, 2048);
			}
			else
			{
				if (!func_10(&iLocal_101))
				{
					func_40(&iLocal_101);
				}
				if (func_121(&iLocal_101) > 15f || iLocal_297 != 0)
				{
					unk_0xD289B55B6AADBA10(1);
					func_111();
					iLocal_294 = 2;
				}
			}
			break;
		
		case 2:
			if (!func_112())
			{
				iLocal_294 = 3;
			}
			break;
		
		case 3:
			func_106(0);
			func_104();
			func_96(15);
			break;
	}
}

int func_104()
{
	if (func_105(0))
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

bool func_105(bool bParam0)
{
	if (!bParam0 && INTERIOR::GET_INTERIOR_AT_COORDS(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xCE990E643CD9D0E5(Global_77081, false);
}

void func_106(bool bParam0)
{
	if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_90))
	{
		if (PED::REMOVE_SCENARIO_BLOCKING_AREA())
		{
			PED::DELETE_PED(&bLocal_90);
		}
		else
		{
			func_107(bLocal_90, bParam0);
		}
	}
}

void func_107(bool bParam0, bool bParam1)
{
	int iVar0;
	float fVar1;
	
	if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(unk_0x9B0761B4C3EB8BC7(), func_50(unk_0x9B0761B4C3EB8BC7(), 0, 0), func_110(1), 3))
	{
		TASK::TASK_PLAY_ANIM(unk_0x9B0761B4C3EB8BC7(), func_50(unk_0x9B0761B4C3EB8BC7(), 0, 0), func_101(1), 4f, -8f, -1, 0, 0f, false, false, false);
	}
	if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bParam0))
	{
		if (func_548())
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(bParam0))
			{
				PED::RESET_PED_IN_VEHICLE_CONTEXT(bParam0);
			}
		}
		else
		{
			PED::RESET_PED_IN_VEHICLE_CONTEXT(bParam0);
		}
		if (func_488(iLocal_49, 33554432))
		{
			HUD::HIDE_HUD_AND_RADAR_THIS_FRAME(bParam0);
		}
		if (bParam1)
		{
			fVar1 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.1f, 2f);
			if (fVar1 <= 0.25f)
			{
				func_480(&iLocal_49, 134217728);
			}
		}
		if (func_488(iLocal_49, 134217728))
		{
			PED::SET_PED_FLEE_ATTRIBUTES(bParam0, 32768, true);
			TASK::TASK_SMART_FLEE_PED(bParam0, unk_0x9B0761B4C3EB8BC7(), 300f, -1, true, false);
		}
		else
		{
			PED::SET_PED_FLEE_ATTRIBUTES(bParam0, 196624, true);
			TASK::CLEAR_SEQUENCE_TASK(&iVar0);
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, true);
			if (SYSTEM::VDIST(bParam0, 0))
			{
				if (!VEHICLE::IS_VEHICLE_STOPPED(ENTITY::GET_ENTITY_MODEL(bParam0, 0)))
				{
					func_109(bParam0, 1);
				}
				else
				{
					if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(bParam0, func_50(bParam0, 0, 0), func_110(0), 3))
					{
						if (iLocal_70 > 0)
						{
							TASK::TASK_PLAY_ANIM(false, func_50(bParam0, 0, 0), func_101(0), 4f, -4f, -1, 0, 0f, false, false, false);
						}
						else
						{
							TASK::TASK_PLAY_ANIM(false, func_50(bParam0, 0, 0), func_108(0), 4f, -4f, -1, 0, 0f, false, false, false);
						}
					}
					func_109(bParam0, 1);
				}
			}
			TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, false);
			TASK::TASK_WANDER_STANDARD(false, 40000f, 0);
			TASK::CLOSE_SEQUENCE_TASK(iVar0);
			AUDIO::STOP_SCRIPTED_CONVERSATION(bParam0, iVar0);
			TASK::CLEAR_SEQUENCE_TASK(&iVar0);
		}
		if (func_548())
		{
			if (NETWORK::_0xB07D3185E11657A5(bLocal_90))
			{
				if (NETWORK::IS_NETWORK_ID_OWNED_BY_PARTICIPANT(NETWORK::NETWORK_GET_NETWORK_ID_FROM_ENTITY(bLocal_90)))
				{
					PED::SET_PED_KEEP_TASK(bParam0, true);
				}
			}
		}
		else
		{
			PED::SET_PED_KEEP_TASK(bParam0, true);
		}
	}
}

var func_108(bool bParam0)
{
	if (!func_488(iLocal_49, 32768))
	{
		if (bParam0)
		{
			return func_45(4);
		}
		else
		{
			return func_45(5);
		}
	}
	if (bParam0)
	{
		return func_46(4);
	}
	return func_46(5);
}

void func_109(bool bParam0, int iParam1)
{
	if (!VEHICLE::_0x639431E895B9AA57(iParam0, ENTITY::GET_ENTITY_MODEL(iParam0, 0), false, false, false))
	{
		TASK::TASK_LEAVE_ANY_VEHICLE(false, 0, 16842752);
	}
	else
	{
		TASK::TASK_LEAVE_ANY_VEHICLE(false, 0, iParam1);
	}
}

var func_110(bool bParam0)
{
	if (!func_488(iLocal_49, 32768))
	{
		if (bParam0)
		{
			return func_45(2);
		}
		else
		{
			return func_45(3);
		}
	}
	if (bParam0)
	{
		return func_46(2);
	}
	return func_46(3);
}

void func_111()
{
	bool bVar0;
	
	bVar0 = NETWORK::_NETWORK_GET_ROS_PRIVILEGE_25(0, 1000);
	if ((bVar0 <= 333 && iLocal_297 == 0) || iLocal_297 == 3)
	{
		AUDIO::_PLAY_AMBIENT_SPEECH1(unk_0x9B0761B4C3EB8BC7(), "HOOKER_STORY_REVULSION_RESP", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
	}
	else if (((bVar0 > 333 && bVar0 <= 666) && iLocal_297 == 0) || iLocal_297 == 1)
	{
		AUDIO::_PLAY_AMBIENT_SPEECH1(unk_0x9B0761B4C3EB8BC7(), "HOOKER_STORY_SARCASTIC_RESP", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
	}
	else if (iLocal_297 == 0 || iLocal_297 == 2)
	{
		AUDIO::_PLAY_AMBIENT_SPEECH1(unk_0x9B0761B4C3EB8BC7(), "HOOKER_STORY_SYMPATHETIC_RESP", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
	}
}

int func_112()
{
	if (Global_21005 != 0 || ENTITY::IS_ENTITY_DEAD())
	{
		return 1;
	}
	return 0;
}

void func_113()
{
	if (iLocal_297 == 0)
	{
		CAM::SET_CINEMATIC_BUTTON_ACTIVE(false);
		MONEY::NETWORK_MONEY_CAN_BET(0, 99, true);
		MONEY::NETWORK_MONEY_CAN_BET(0, 76, true);
		MONEY::NETWORK_MONEY_CAN_BET(0, 80, true);
		PAD::SET_INPUT_EXCLUSIVE(2, 203);
		PAD::SET_INPUT_EXCLUSIVE(2, 201);
		PAD::SET_INPUT_EXCLUSIVE(2, 202);
		if (STATS::STAT_GET_MASKED_INT(2, 203))
		{
			unk_0xD289B55B6AADBA10(1);
			DATAFILE::UGC_UPDATE_CONTENT(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
			iLocal_297 = 3;
		}
		else if (STATS::STAT_GET_MASKED_INT(2, 201))
		{
			unk_0xD289B55B6AADBA10(1);
			DATAFILE::UGC_UPDATE_CONTENT(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
			iLocal_297 = 1;
		}
		else if (STATS::STAT_GET_MASKED_INT(2, 202))
		{
			unk_0xD289B55B6AADBA10(1);
			DATAFILE::UGC_UPDATE_CONTENT(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
			iLocal_297 = 2;
		}
	}
}

void func_114(char* sParam0)
{
	unk_0x17751E107423AFE9(sParam0);
	FILES::GET_DLC_VEHICLE_FLAGS(0, 1, 1, -1);
}

void func_115(int iParam0)
{
	iParam0->f_1 = 0f;
	iParam0->f_2 = 0f;
	*iParam0 = 0;
}

void func_116(bool bParam0)
{
	int iVar0;
	
	iVar0 = func_77(bParam0);
	if (iVar0 > -1)
	{
		if (AUDIO::IS_ANY_SPEECH_PLAYING(bParam0))
		{
			AUDIO::STOP_CURRENT_PLAYING_AMBIENT_SPEECH(bParam0);
		}
		if (!AUDIO::IS_ANY_SPEECH_PLAYING(bParam0))
		{
			func_118(bParam0);
			func_117(iVar0);
		}
	}
}

void func_117(int iParam0)
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = func_76(iParam0);
	if (iVar0 < 6)
	{
		StringCopy(&Var1, "pbpro_H", 24);
		StringIntConCat(&Var1, iParam0 + 1, 24);
		StringConCat(&Var1, "V", 24);
		StringIntConCat(&Var1, iVar0, 24);
		func_11(&uLocal_116, "pbproau", &Var1, 4, 0, 0, 0);
	}
}

void func_118(bool bParam0)
{
	int iVar0;
	
	iVar0 = func_77(bParam0);
	if (iVar0 > -1)
	{
		func_120(&uLocal_116, 4);
		func_467(&uLocal_116, 6, bParam0, func_119(iVar0), 0, 1);
	}
}

char* func_119(int iParam0)
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 0:
			sVar0 = "Hooker1";
			break;
		
		case 1:
			sVar0 = "Hooker2";
			break;
		
		case 2:
			sVar0 = "Hooker3";
			break;
		
		case 3:
			sVar0 = "Hooker4";
			break;
		
		case 4:
			sVar0 = "Hooker5";
			break;
		
		case 5:
			sVar0 = "Hooker6";
			break;
		
		case 6:
			sVar0 = "Hooker7";
			break;
		
		case 7:
			sVar0 = "Hooker8";
			break;
		
		default:
			sVar0 = "UPRO N/A";
	}
	return sVar0;
}

void func_120(var uParam0, int iParam1)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

float func_121(int iParam0)
{
	if (func_10(iParam0))
	{
		if (func_9(iParam0))
		{
			return iParam0->f_2;
		}
		else
		{
			return (func_8(unk_0xCE990E643CD9D0E5(*iParam0, 4)) - iParam0->f_1);
		}
	}
	return 0f;
}

void func_122(var uParam0)
{
	bool bVar0;
	bool bVar1;
	
	if (!func_548())
	{
		return;
	}
	bVar0 = false;
	if (MISC::IS_BIT_SET(unk_0x9B0761B4C3EB8BC7()))
	{
		if (SYSTEM::VDIST(unk_0x9B0761B4C3EB8BC7(), 0))
		{
			bVar1 = ENTITY::GET_ENTITY_MODEL(unk_0x9B0761B4C3EB8BC7(), 0);
			if (MISC::IS_BIT_SET(bVar1))
			{
				if (MISC::IS_MINIGAME_IN_PROGRESS(bVar1, -1, 0) != unk_0x9B0761B4C3EB8BC7())
				{
					bVar0 = true;
				}
				if (MISC::IS_MINIGAME_IN_PROGRESS(bVar1, 0, 0) != bLocal_90)
				{
					bVar0 = true;
				}
				if (STATS::_GET_NGSTAT_BOOL_HASH(bVar1) > 2)
				{
					bVar0 = true;
				}
				if (bVar0)
				{
					func_123(0);
					HUD::HIDE_HUD_AND_RADAR_THIS_FRAME(unk_0x9B0761B4C3EB8BC7());
					func_539();
					func_533(uParam0);
				}
			}
		}
	}
}

void func_123(bool bParam0)
{
	struct<3> Var0;
	
	if (bParam0)
	{
		Var0 = { NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(bLocal_93, 2) };
		unk_0x4C4FC7841A5FB983(180f);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH((-5.5f - Var0.x), 1f);
	}
	CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
	func_124(&(Local_300[0 /*7*/]));
	func_124(&(Local_300[3 /*7*/]));
	func_124(&(Local_300[2 /*7*/]));
	func_124(&(Local_300[1 /*7*/]));
	if (func_468("PROS_CAM_TOG") || func_468("PROS_CAM_OC"))
	{
		unk_0xD289B55B6AADBA10(1);
	}
}

void func_124(var uParam0)
{
	if (CAM::DOES_CAM_EXIST(*uParam0))
	{
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		if (CAM::IS_CAM_ACTIVE(*uParam0))
		{
			CAM::SET_CAM_ACTIVE(*uParam0, false);
		}
		CAM::DESTROY_CAM(*uParam0, false);
	}
}

void func_125()
{
	if (ENTITY::GET_ENTITY_COORDS(bLocal_93, false))
	{
		VEHICLE::SET_VEHICLE_BRAKE_LIGHTS(bLocal_93, true);
	}
	if (iLocal_293 != 5)
	{
		if ((((((!func_219(iLocal_74) && !func_219(iLocal_75)) && !func_219(iLocal_76)) && !func_219(iLocal_77)) && !func_219(iLocal_78)) && !func_219(iLocal_79)) && !func_219(iLocal_80))
		{
			if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(bLocal_90) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(unk_0x9B0761B4C3EB8BC7()))
			{
				iLocal_293 = 5;
			}
			if (SYSTEM::VDIST(unk_0x9B0761B4C3EB8BC7(), 0))
			{
				if (!ENTITY::GET_ENTITY_COORDS(ENTITY::GET_ENTITY_MODEL(unk_0x9B0761B4C3EB8BC7(), 0), false))
				{
					iLocal_293 = 5;
				}
			}
		}
	}
	unk_0x4CB4237D8858ADA6(2);
	MONEY::NETWORK_MONEY_CAN_BET(2, 19, true);
	MONEY::NETWORK_MONEY_CAN_BET(2, 37, true);
	func_213(0);
	switch (iLocal_293)
	{
		case 0:
			if (func_548())
			{
				func_210(1088, -1);
			}
			func_40(&iLocal_113);
			func_209(func_49(), func_488(iLocal_49, 32768));
			iLocal_293 = 1;
			func_489("Moving to PROSTITUTE_SERVICE_LOOPING");
			break;
		
		case 1:
			MONEY::NETWORK_MONEY_CAN_BET(0, 48, true);
			MONEY::NETWORK_MONEY_CAN_BET(0, false, true);
			func_202();
			func_195();
			func_134();
			if (!func_48(0, 1))
			{
				func_133();
			}
			if (func_7(&iLocal_113) > 1f)
			{
				if (func_132())
				{
					func_5(&iLocal_49, 512);
					iLocal_296 = 0;
					func_131("PROSTITUTES_SOLICIT_SCENE");
					func_131("PROSTITUTES_SEX_SCENE");
					func_131("PROSTITUTES_BJ_SCENE");
					func_131("PROSTITUTES_BJ_SPEECH_SCENE");
					if (iLocal_70 >= 3)
					{
						func_130();
						iLocal_293 = 5;
					}
					else
					{
						func_129();
						CAM::SET_FOLLOW_PED_CAM_VIEW_MODE(fLocal_48);
						iLocal_293 = 3;
					}
				}
			}
			break;
		
		case 2:
			MONEY::NETWORK_MONEY_CAN_BET(0, 48, true);
			func_202();
			if (!func_48(0, 1))
			{
				func_133();
			}
			if (func_48(0, 1))
			{
				MONEY::NETWORK_MONEY_CAN_BET(0, false, true);
			}
			if (func_7(&iLocal_113) > 1f)
			{
				if (func_132())
				{
					func_5(&iLocal_49, 512);
					iLocal_296 = 0;
					func_131("PROSTITUTES_SOLICIT_SCENE");
					func_131("PROSTITUTES_SEX_SCENE");
					func_131("PROSTITUTES_BJ_SCENE");
					func_131("PROSTITUTES_BJ_SPEECH_SCENE");
					iLocal_70 = 3;
					if (iLocal_70 >= 3)
					{
						func_130();
						iLocal_293 = 5;
						func_115(&iLocal_98);
					}
				}
			}
			break;
		
		case 3:
			MONEY::NETWORK_MONEY_CAN_BET(0, false, true);
			if (!AUDIO::IS_ANY_SPEECH_PLAYING(bLocal_90))
			{
				func_131("PROSTITUTES_SOLICIT_SCENE");
				func_131("PROSTITUTES_BJ_SPEECH_SCENE");
				iLocal_292 = 0;
				iLocal_293 = 0;
				func_128();
				CAM::SET_FOLLOW_PED_CAM_VIEW_MODE(fLocal_48);
				iLocal_286 = 8;
			}
			break;
		
		case 5:
			MONEY::NETWORK_MONEY_CAN_BET(0, false, true);
			if (!AUDIO::IS_ANY_SPEECH_PLAYING(bLocal_90))
			{
				if (iLocal_70 > 0)
				{
					if (func_127(bLocal_90))
					{
						func_126();
					}
					else
					{
						func_471(0);
					}
				}
				else
				{
					func_489("PROSTITUTE CANCEL PROS NO LONGER IN VEHICLE");
					func_471(1);
				}
			}
			break;
	}
}

void func_126()
{
	if (STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_90))
	{
		return;
	}
	if (!AUDIO::IS_ANY_SPEECH_PLAYING(unk_0x9B0761B4C3EB8BC7()))
	{
		if (iLocal_70 == 0)
		{
			AUDIO::_PLAY_AMBIENT_SPEECH1(unk_0x9B0761B4C3EB8BC7(), "HOOKER_DECLINE_SERVICE", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
		}
		else if (func_127(bLocal_90))
		{
			func_40(&iLocal_101);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 768);
			func_480(&iLocal_49, 2048);
			iLocal_286 = 13;
		}
	}
}

bool func_127(bool bParam0)
{
	int iVar0;
	
	iVar0 = func_77(bParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	return func_76(iVar0) < 6;
}

void func_128()
{
	Global_2440049.f_1267.f_10 = 1;
}

void func_129()
{
	if (STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_90))
	{
		return;
	}
	if (!AUDIO::IS_ANY_SPEECH_PLAYING(bLocal_90))
	{
		AUDIO::_PLAY_AMBIENT_SPEECH1(bLocal_90, "SEX_FINISHED", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
	}
}

void func_130()
{
	if (STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_90))
	{
		return;
	}
	if (!AUDIO::IS_ANY_SPEECH_PLAYING(bLocal_90))
	{
		AUDIO::_PLAY_AMBIENT_SPEECH1(bLocal_90, "HOOKER_HAD_ENOUGH", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
	}
}

void func_131(char* sParam0)
{
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE(sParam0))
	{
		AUDIO::STOP_AUDIO_SCENE(sParam0);
	}
}

int func_132()
{
	if (iLocal_296 == 6)
	{
		return 1;
	}
	return 0;
}

void func_133()
{
	CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
	CAM::_0x62ECFCFDEE7885D6();
}

void func_134()
{
	float fVar0;
	bool bVar1;
	bool bVar2;
	
	if (CAM::IS_SCREEN_FADED_OUT(func_50(unk_0x9B0761B4C3EB8BC7(), 0, 0)))
	{
		return;
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED(func_50(unk_0x9B0761B4C3EB8BC7(), 0, 0)))
	{
		return;
	}
	if (!PED::IS_PED_IN_ANY_POLICE_VEHICLE(unk_0x9B0761B4C3EB8BC7(), 0))
	{
		ENTITY::SET_ENTITY_INVINCIBLE(unk_0x9B0761B4C3EB8BC7(), false);
	}
	bVar1 = func_49();
	bVar2 = func_488(iLocal_49, 32768);
	if (!func_48(0, 1))
	{
		func_189(&iLocal_81);
	}
	MONEY::NETWORK_MONEY_CAN_BET(2, 19, true);
	MONEY::NETWORK_MONEY_CAN_BET(2, 37, true);
	func_188(23, 1);
	switch (iLocal_296)
	{
		case 0:
			func_5(&iLocal_49, 256);
			if (!func_48(0, 1))
			{
				func_183(&iLocal_81);
			}
			func_182(bLocal_90, 0);
			if (!func_548())
			{
				func_181(bVar1, bVar2);
			}
			func_180(bVar1, bVar2);
			iLocal_296 = 1;
			break;
		
		case 1:
			func_179(iLocal_74);
			if (func_219(iLocal_75))
			{
				if (!func_488(iLocal_50, 4))
				{
					if (!func_548())
					{
						fVar0 = 0.925f;
					}
					else
					{
						fVar0 = 0.986f;
					}
					if (func_178(iLocal_75) >= fVar0)
					{
						func_480(&iLocal_50, 4);
					}
				}
			}
			if (func_219(iLocal_74))
			{
				if (!func_488(iLocal_50, 8))
				{
					if (!func_548())
					{
						fVar0 = 0.925f;
					}
					else
					{
						fVar0 = 0.986f;
					}
					if (func_178(iLocal_74) >= fVar0)
					{
						func_480(&iLocal_50, 8);
					}
				}
			}
			if (func_488(iLocal_50, 4) && func_488(iLocal_50, 8))
			{
				if (!func_548())
				{
					func_177(bVar1, bVar2);
				}
				func_176(bVar1, bVar2);
				iLocal_296 = 2;
			}
			break;
		
		case 2:
			func_179(iLocal_76);
			if (func_219(iLocal_76))
			{
				if (!func_488(iLocal_50, 16))
				{
					if (!func_548())
					{
						fVar0 = 0.98f;
					}
					else
					{
						fVar0 = 0.986f;
					}
					if (func_178(iLocal_76) >= fVar0)
					{
						func_480(&iLocal_50, 16);
					}
				}
			}
			if (func_488(iLocal_50, 16))
			{
				if (!func_548())
				{
					func_175(bVar1, bVar2);
				}
				func_174(bVar1, bVar2);
				iLocal_296 = 3;
			}
			break;
		
		case 3:
			func_179(iLocal_77);
			if (func_219(iLocal_77))
			{
				if (!func_488(iLocal_50, 64))
				{
					if (!func_488(iLocal_49, 16777216))
					{
						if (!func_548())
						{
							fVar0 = 0.975f;
						}
						else
						{
							fVar0 = 0.986f;
						}
						if (func_178(iLocal_77) >= fVar0)
						{
							func_480(&iLocal_49, 16777216);
							iLocal_71++;
						}
					}
					else
					{
						if (!func_548())
						{
							fVar0 = 0.975f;
						}
						else
						{
							fVar0 = 0.986f;
						}
						if (func_178(iLocal_77) < fVar0)
						{
							func_5(&iLocal_49, 16777216);
						}
					}
					if (iLocal_71 >= func_167(func_548(), func_173(), func_168()))
					{
						func_480(&iLocal_50, 64);
						func_5(&iLocal_49, 16777216);
					}
				}
			}
			else if (!func_488(iLocal_50, 64))
			{
				func_480(&iLocal_50, 64);
			}
			if (func_488(iLocal_50, 64))
			{
				if (!func_548())
				{
					func_166(bVar1, bVar2);
				}
				func_165(bVar1, bVar2);
				iLocal_296 = 4;
			}
			break;
		
		case 4:
			func_179(iLocal_78);
			if (func_219(iLocal_78))
			{
				if (!func_488(iLocal_50, 256))
				{
					if (!func_548())
					{
						fVar0 = 0.925f;
					}
					else
					{
						fVar0 = 0.986f;
					}
					if (func_178(iLocal_78) >= fVar0)
					{
						func_480(&iLocal_50, 256);
					}
				}
			}
			else if (!func_488(iLocal_50, 256))
			{
				func_480(&iLocal_50, 256);
			}
			if (func_488(iLocal_50, 256))
			{
				if (!func_548())
				{
					func_159(bVar1, bVar2);
				}
				func_157(bVar1, bVar2);
				iLocal_296 = 5;
			}
			break;
		
		case 5:
			func_179(iLocal_79);
			if (func_219(iLocal_79))
			{
				if (!func_488(iLocal_50, 1024))
				{
					if (!func_548())
					{
						fVar0 = 0.975f;
					}
					else
					{
						fVar0 = 0.986f;
					}
					if (func_178(iLocal_79) >= fVar0)
					{
						func_480(&iLocal_50, 1024);
					}
				}
			}
			else if (!func_488(iLocal_50, 1024))
			{
				func_480(&iLocal_50, 1024);
			}
			if (func_219(iLocal_80))
			{
				if (!func_488(iLocal_50, 2048))
				{
					if (!func_548())
					{
						fVar0 = 0.975f;
					}
					else
					{
						fVar0 = 0.986f;
					}
					if (func_178(iLocal_80) >= fVar0)
					{
						func_480(&iLocal_50, 2048);
					}
				}
			}
			else if (!func_488(iLocal_50, 2048))
			{
				func_480(&iLocal_50, 2048);
			}
			if (func_488(iLocal_50, 1024) && func_488(iLocal_50, 2048))
			{
				func_182(bLocal_90, 0);
				TASK::TASK_PLAY_ANIM(bLocal_90, func_50(unk_0x9B0761B4C3EB8BC7(), 0, 0), func_44(iLocal_296, 1, bVar1, bVar2), 4f, -4f, -1, 1, 0f, false, false, false);
				func_182(unk_0x9B0761B4C3EB8BC7(), -1);
				TASK::TASK_PLAY_ANIM(unk_0x9B0761B4C3EB8BC7(), func_50(unk_0x9B0761B4C3EB8BC7(), 0, 0), func_44(iLocal_296, 0, bVar1, bVar2), 4f, -4f, -1, 1, 0f, false, false, false);
				func_123(1);
				iLocal_50 = 0;
				iLocal_71 = 0;
				iLocal_59 = 0;
				func_135();
				iLocal_296 = 6;
			}
			break;
	}
}

void func_135()
{
	int iVar0;
	
	if (iLocal_70 == 0 && !func_548())
	{
		if (func_26(unk_0x9B0761B4C3EB8BC7()) == 0)
		{
			func_156();
		}
		func_151(296, 0, 0);
		iVar0 = func_77(bLocal_90);
		if (iVar0 > -1)
		{
			func_150(iVar0);
		}
		else
		{
			func_142(bLocal_90);
		}
	}
	iLocal_70++;
	func_136();
}

void func_136()
{
	switch (func_26(unk_0x9B0761B4C3EB8BC7()))
	{
		case 0:
			Global_111858.f_10045.f_90[0]++;
			func_137(0, 1, 1);
			break;
		
		case 1:
			Global_111858.f_10045.f_90[1]++;
			func_137(1, 1, 1);
			break;
		
		case 2:
			Global_111858.f_10045.f_90[2]++;
			func_137(2, 1, 1);
			break;
		
		case 3:
			func_137(3, 1, 1);
			break;
	}
}

void func_137(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
			Global_111858.f_2359.f_539.f_2247[iParam1 /*4*/][iParam0] = (Global_111858.f_2359.f_539.f_2247[iParam1 /*4*/][iParam0] + iParam2);
			break;
		
		case 3:
			iVar1 = 11771;
			switch (iParam1)
			{
				case 1:
					iVar1 = 72;
					break;
				
				case 3:
					iVar1 = 74;
					break;
				
				case 2:
					iVar1 = 73;
					break;
				
				case 4:
					iVar1 = 75;
					break;
				
				case 5:
					iVar1 = 76;
					break;
				
				case 6:
					iVar1 = 77;
					break;
				
				case 7:
					iVar1 = 78;
					break;
			}
			if (iVar1 != 11771)
			{
				iVar0 = func_141(iVar1, -1, 0);
				iVar0 = (iVar0 + iParam2);
				if (iVar0 > 100)
				{
					iVar0 = 100;
				}
				func_138(iVar1, iVar0, -1, 1, 0);
			}
			break;
	}
}

void func_138(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2551832[iParam0 /*3*/][func_139(iParam2)];
	if (iVar0 != 0)
	{
		NETWORK::NETWORK_HAS_SOCIAL_CLUB_ACCOUNT(iVar0, iParam1, iParam3);
	}
}

int func_139(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_140();
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

int func_140()
{
	return Global_1312763;
}

int func_141(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 11771)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2551832[iParam0 /*3*/][func_139(iParam1)];
		if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

void func_142(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	
	if (PED::IS_PED_IN_ANY_POLICE_VEHICLE(bParam0, 0))
	{
		return;
	}
	iVar0 = func_149();
	if (iVar0 == -1)
	{
		return;
	}
	func_150(iVar0);
	PED::SET_PED_NAME_DEBUG(bParam0, func_147(iVar0));
	Global_111858.f_10045.f_1[iVar0 /*11*/].f_10 = MISC::GET_MODEL_DIMENSIONS(bParam0);
	iVar2 = 0;
	while (iVar2 < 2)
	{
		iVar1 = iVar2;
		uVar3 = func_146(bParam0, iVar1);
		func_145(iVar0, iVar1, uVar3);
		iVar2++;
	}
	iVar2 = 0;
	while (iVar2 < 2)
	{
		iVar4 = iVar2;
		uVar3 = func_144(bParam0, iVar4);
		func_143(iVar0, iVar4, uVar3);
		iVar2++;
	}
}

void func_143(int iParam0, int iParam1, var uParam2)
{
	if (iParam0 > -1)
	{
		Global_111858.f_10045.f_1[iParam0 /*11*/].f_7[iParam1] = uParam2;
	}
}

int func_144(bool bParam0, int iParam1)
{
	return PED::GET_PED_TEXTURE_VARIATION(bParam0, func_82(iParam1));
}

void func_145(int iParam0, int iParam1, var uParam2)
{
	if (iParam0 > -1)
	{
		Global_111858.f_10045.f_1[iParam0 /*11*/].f_4[iParam1] = uParam2;
	}
}

int func_146(bool bParam0, int iParam1)
{
	return PED::GET_PED_DRAWABLE_VARIATION(bParam0, func_86(iParam1));
}

var func_147(int iParam0)
{
	return func_148(iParam0);
}

char* func_148(int iParam0)
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 0:
			sVar0 = "UPRO BABS";
			break;
		
		case 1:
			sVar0 = "UPRO DANA";
			break;
		
		case 2:
			sVar0 = "UPRO LIZZIE";
			break;
		
		case 3:
			sVar0 = "UPRO AMANDA";
			break;
		
		case 4:
			sVar0 = "UPRO ASHLEY";
			break;
		
		case 5:
			sVar0 = "UPRO KRISTEN";
			break;
		
		case 6:
			sVar0 = "UPRO SASHA";
			break;
		
		case 7:
			sVar0 = "UPRO JACQUELINE";
			break;
		
		default:
			sVar0 = "UPRO N/A";
	}
	return sVar0;
}

int func_149()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (func_76(iVar0) == 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_150(int iParam0)
{
	if (iParam0 > -1)
	{
		if (func_23() == 0)
		{
			Global_111858.f_10045.f_1[iParam0 /*11*/][0]++;
		}
		else if (func_23() == 1)
		{
			Global_111858.f_10045.f_1[iParam0 /*11*/][1]++;
		}
		else if (func_23() == 2)
		{
			Global_111858.f_10045.f_1[iParam0 /*11*/][2]++;
		}
	}
}

void func_151(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;
	
	if (iParam0 < 0)
	{
	}
	if (iParam0 == 321 || iParam0 > 321)
	{
	}
	else
	{
		func_155((891 + iParam0), 1, -1, 1);
	}
	bVar0 = true;
	if (Global_111858.f_10190[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_111858.f_10190[iParam0 /*12*/].f_6 == 11 || Global_111858.f_10190[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_111858.f_10190[iParam0 /*12*/].f_5 = 1;
		Global_111858.f_10190[iParam0 /*12*/].f_10 = iParam1;
		Global_111858.f_10190[iParam0 /*12*/].f_11 = iParam2;
		if (iParam0 == 287)
		{
			STATS::_UPDATE_STAT_INT(joaat("NUM_HIDDEN_PACKAGES_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			STATS::_UPDATE_STAT_INT(joaat("NUM_HIDDEN_PACKAGES_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			STATS::_UPDATE_STAT_INT(joaat("NUM_HIDDEN_PACKAGES_3"), 50, 0);
		}
	}
	if (bVar0)
	{
		func_152();
	}
}

void func_152()
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	int iVar9;
	
	iVar0 = 0;
	Global_111594 = 0;
	Global_111595 = 0;
	Global_111596 = 0;
	Global_111597 = 0;
	Global_111598 = 0;
	Global_111599 = 0;
	Global_111600 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_111858.f_10190.f_3853;
	Global_111858.f_10190.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_111858.f_10190[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_111858.f_10190[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_111594++;
					fVar1 = (fVar1 + Global_111858.f_10190[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_111595++;
					fVar2 = (fVar2 + Global_111858.f_10190[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_111596++;
					fVar3 = (fVar3 + Global_111858.f_10190[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_111597++;
					fVar4 = (fVar4 + Global_111858.f_10190[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_111598++;
					fVar5 = (fVar5 + (Global_111858.f_10190[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_111599++;
					fVar6 = (fVar6 + Global_111858.f_10190[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_111600++;
					fVar7 = (fVar7 + Global_111858.f_10190[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_111577 > 0)
	{
		if (Global_111594 == Global_111577)
		{
			fVar1 = 55f;
		}
	}
	if (Global_111578 > 0)
	{
		if (Global_111595 == Global_111578)
		{
			fVar2 = 10f;
		}
	}
	if (Global_111579 > 0)
	{
		if (Global_111596 == Global_111579)
		{
			fVar3 = 0f;
		}
	}
	if (Global_111580 > 0)
	{
		if (Global_111597 == Global_111580)
		{
			fVar4 = 10f;
		}
	}
	if (Global_111581 > 0)
	{
		if (((Global_111598 == Global_111581 || (Global_111581 * 10 / Global_111598) < 41) || Global_111598 > Global_111584) || Global_111598 == Global_111584)
		{
			if (!unk_0xCE990E643CD9D0E5(Global_111858.f_10190.f_3856, 14))
			{
				if (Global_111598 == Global_111581)
				{
					STATS::_UPDATE_STAT_INT(joaat("NUM_RNDEVENTS_COMPLETED"), Global_111581, 0);
					unk_0xBE20AB8238688965(&(Global_111858.f_10190.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_111582 > 0)
	{
		if (Global_111599 == Global_111582)
		{
			fVar6 = 15f;
		}
	}
	if (Global_111583 > 0)
	{
		if (Global_111600 == Global_111583)
		{
			fVar7 = 5f;
		}
	}
	Global_111858.f_10190.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_111598 > Global_111584 || Global_111598 == Global_111584)
	{
		iVar9 = Global_111584;
	}
	else
	{
		iVar9 = Global_111598;
	}
	NETWORK::NETWORK_HAS_SOCIAL_CLUB_ACCOUNT(joaat("NUM_MISSIONS_COMPLETED"), Global_111594, 1);
	NETWORK::NETWORK_HAS_SOCIAL_CLUB_ACCOUNT(joaat("NUM_MISSIONS_AVAILABLE"), Global_111577, 1);
	NETWORK::NETWORK_HAS_SOCIAL_CLUB_ACCOUNT(joaat("NUM_MINIGAMES_COMPLETED"), Global_111595, 1);
	NETWORK::NETWORK_HAS_SOCIAL_CLUB_ACCOUNT(joaat("NUM_MINIGAMES_AVAILABLE"), Global_111578, 1);
	NETWORK::NETWORK_HAS_SOCIAL_CLUB_ACCOUNT(joaat("NUM_ODDJOBS_COMPLETED"), Global_111596, 1);
	NETWORK::NETWORK_HAS_SOCIAL_CLUB_ACCOUNT(joaat("NUM_ODDJOBS_AVAILABLE"), Global_111579, 1);
	NETWORK::NETWORK_HAS_SOCIAL_CLUB_ACCOUNT(joaat("NUM_RNDPEOPLE_COMPLETED"), Global_111597, 1);
	NETWORK::NETWORK_HAS_SOCIAL_CLUB_ACCOUNT(joaat("NUM_RNDPEOPLE_AVAILABLE"), Global_111580, 1);
	NETWORK::NETWORK_HAS_SOCIAL_CLUB_ACCOUNT(joaat("NUM_RNDEVENTS_COMPLETED"), iVar9, 1);
	NETWORK::NETWORK_HAS_SOCIAL_CLUB_ACCOUNT(joaat("NUM_RNDEVENTS_AVAILABLE"), Global_111584, 1);
	NETWORK::NETWORK_HAS_SOCIAL_CLUB_ACCOUNT(joaat("NUM_MISC_COMPLETED"), (Global_111600 + Global_111599), 1);
	NETWORK::NETWORK_HAS_SOCIAL_CLUB_ACCOUNT(joaat("NUM_MISC_AVAILABLE"), (Global_111583 + Global_111582), 1);
	Global_111601 = (Global_111594 * 100 / Global_111577);
	Global_111603 = ((Global_111596 + Global_111595) * 100 / (Global_111579 + Global_111578));
	Global_111602 = ((Global_111597 + iVar9) * 100 / (Global_111580 + Global_111584));
	Global_111604 = ((Global_111599 + Global_111600) * 100 / (Global_111582 + Global_111583));
	STATS::STAT_SET_FLOAT(joaat("TOTAL_PROGRESS_MADE"), Global_111858.f_10190.f_3853, true);
	NETWORK::NETWORK_HAS_SOCIAL_CLUB_ACCOUNT(joaat("PERCENT_STORY_MISSIONS"), Global_111601, 1);
	NETWORK::NETWORK_HAS_SOCIAL_CLUB_ACCOUNT(joaat("PERCENT_AMBIENT_MISSIONS"), Global_111602, 1);
	NETWORK::NETWORK_HAS_SOCIAL_CLUB_ACCOUNT(joaat("PERCENT_ODDJOBS"), Global_111603, 1);
	if (fVar8 > 0f && SYSTEM::FLOOR(fVar8) < SYSTEM::FLOOR(Global_111858.f_10190.f_3853))
	{
		func_154(13, SYSTEM::FLOOR(Global_111858.f_10190.f_3853));
	}
	if (!DATAFILE::DATAFILE_IS_SAVE_PENDING())
	{
		if (!Global_76833)
		{
			if (func_153() == 2 == 0 && !MISC::SET_BIT())
			{
				if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE())
				{
					Global_111592 = 0;
				}
				if (!Global_61717)
				{
					func_104();
				}
			}
		}
	}
}

int func_153()
{
	return Global_30968;
}

int func_154(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 > 78)
	{
		return 0;
	}
	if (iParam1 <= 0 || iParam1 > 100)
	{
		return 0;
	}
	iVar0 = PLAYER::_GET_ACHIEVEMENT_PROGRESS(iParam0);
	if (iParam1 > iVar0)
	{
		return PLAYER::_SET_ACHIEVEMENT_PROGRESS(iParam0, iParam1);
	}
	return 0;
}

var func_155(int iParam0, char* sParam1, int iParam2, int iParam3)
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
		iParam2 = func_140();
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

void func_156()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (iVar0 < 1)
		{
			Global_95417[iVar0] = Global_95417[iVar0 + 1];
		}
		else
		{
			Global_95417[iVar0] = MISC::GET_GAME_TIMER();
		}
		iVar0++;
	}
}

void func_157(bool bParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 2052;
	if (func_548())
	{
		iVar0 = 2056;
	}
	func_158(bLocal_90, iLocal_79, func_50(unk_0x9B0761B4C3EB8BC7(), 0, 0), func_44(4, 1, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f, 0);
	func_158(unk_0x9B0761B4C3EB8BC7(), iLocal_80, func_50(unk_0x9B0761B4C3EB8BC7(), 0, 0), func_44(4, 0, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f, 0);
}

void func_158(bool bParam0, int iParam1, char* sParam2, char* sParam3, float fParam4, float fParam5, int iParam6, int iParam7, float fParam8, int iParam9)
{
	if (func_548())
	{
		unk_0xB88AF19828BF16ED(iParam1);
	}
	else
	{
		TASK::TASK_SYNCHRONIZED_SCENE(bParam0, iParam1, sParam2, sParam3, fParam4, fParam5, iParam6, iParam7, fParam8, iParam9);
	}
}

void func_159(bool bParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 2052;
	if (func_548())
	{
		iVar0 = 2056;
	}
	func_161(&iLocal_79, 1, 0, 0);
	func_160(bLocal_90, iLocal_79, func_50(unk_0x9B0761B4C3EB8BC7(), 0, 0), func_44(4, 1, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f);
	func_161(&iLocal_80, 0, 0, 0);
	func_160(unk_0x9B0761B4C3EB8BC7(), iLocal_80, func_50(unk_0x9B0761B4C3EB8BC7(), 0, 0), func_44(4, 0, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f);
}

void func_160(bool bParam0, int iParam1, char* sParam2, var uParam3, float fParam4, float fParam5, int iParam6, int iParam7, int iParam8)
{
	if (func_548())
	{
		NETWORK::NETWORK_START_SYNCHRONISED_SCENE(bParam0, iParam1, sParam2, uParam3, fParam4, fParam5, iParam6, iParam7, iParam8, 0);
	}
}

void func_161(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	struct<3> Var0;
	
	Var0 = { 0f, 0f, 0f };
	*iParam0 = func_164(Var0, 0f, 0f, 0f, bParam3, bParam2, 2);
	if (iParam1 == 0)
	{
		func_163(*iParam0, bLocal_93, ENTITY::_GET_ENTITY_BONE_ROTATION_LOCAL(bLocal_93, "seat_dside_f"));
	}
	else if (iParam1 == 1)
	{
		func_163(*iParam0, bLocal_93, ENTITY::_GET_ENTITY_BONE_ROTATION_LOCAL(bLocal_93, "seat_pside_f"));
	}
	func_162(*iParam0, Var0, 0f, 0f, 0f, 0);
}

void func_162(int iParam0, struct<3> Param1, struct<3> Param2, bool bParam3)
{
	if (!func_548())
	{
		PED::SET_SYNCHRONIZED_SCENE_ORIGIN(iParam0, Param1, Param2, bParam3);
	}
}

void func_163(int iParam0, bool bParam1, int iParam2)
{
	if (PED::IS_PED_IN_ANY_POLICE_VEHICLE(bParam1, 0))
	{
		return;
	}
	if (func_548())
	{
		NETWORK::NETWORK_ATTACH_SYNCHRONISED_SCENE_TO_ENTITY(iParam0, bParam1, iParam2);
	}
	else
	{
		PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iParam0, bParam1, iParam2);
	}
}

var func_164(struct<3> Param0, struct<3> Param1, bool bParam2, bool bParam3, int iParam4)
{
	void fVar0;
	
	if (func_548())
	{
		if (bParam2)
		{
			bParam3 = false;
		}
		fVar0 = NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(Param0, Param1, iParam4, bParam2, bParam3, 1065353216, 0, 1065353216);
	}
	else
	{
		fVar0 = PED::CREATE_SYNCHRONIZED_SCENE(Param0, Param1, iParam4);
		PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(fVar0, bParam2);
		PED::SET_SYNCHRONIZED_SCENE_LOOPED(fVar0, bParam3);
	}
	return fVar0;
}

void func_165(bool bParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 2052;
	if (func_548())
	{
		iVar0 = 2056;
	}
	func_158(bLocal_90, iLocal_78, func_50(unk_0x9B0761B4C3EB8BC7(), 0, 0), func_44(3, 1, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f, 0);
	func_158(unk_0x9B0761B4C3EB8BC7(), iLocal_78, func_50(unk_0x9B0761B4C3EB8BC7(), 0, 0), func_44(3, 0, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f, 0);
}

void func_166(bool bParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 2052;
	if (func_548())
	{
		iVar0 = 2056;
	}
	func_161(&iLocal_78, 0, 0, 1);
	func_160(bLocal_90, iLocal_78, func_50(unk_0x9B0761B4C3EB8BC7(), 0, 0), func_44(3, 1, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f);
	func_160(unk_0x9B0761B4C3EB8BC7(), iLocal_78, func_50(unk_0x9B0761B4C3EB8BC7(), 0, 0), func_44(3, 0, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f);
}

int func_167(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_168()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_169();
	if (iVar0 < 48)
	{
		iVar1 = 2;
	}
	else if (iVar0 >= 48 && iVar0 < 85)
	{
		iVar1 = 3;
	}
	else
	{
		iVar1 = 4;
	}
	return iVar1;
}

int func_169()
{
	if (func_548())
	{
		return func_141(65, -1, 0);
	}
	return func_170(func_26(unk_0x9B0761B4C3EB8BC7()), 1);
}

var func_170(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	
	iVar1 = func_171(iParam0, iParam1);
	STATS::STAT_GET_INT(iVar1, &uVar0, -1);
	return uVar0;
}

var func_171(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	func_172(iParam0, iParam1, &uVar0, &uVar1);
	return uVar0;
}

void func_172(int iParam0, int iParam1, var uParam2, var uParam3)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("SP0_SPECIAL_ABILITY_UNLOCKED");
					break;
				
				case 1:
					*uParam2 = joaat("SP0_STAMINA");
					break;
				
				case 3:
					*uParam2 = joaat("SP0_LUNG_CAPACITY");
					break;
				
				case 2:
					*uParam2 = joaat("SP0_STRENGTH");
					break;
				
				case 4:
					*uParam2 = joaat("SP0_WHEELIE_ABILITY");
					break;
				
				case 5:
					*uParam2 = joaat("SP0_FLYING_ABILITY");
					break;
				
				case 6:
					*uParam2 = joaat("SP0_SHOOTING_ABILITY");
					break;
				
				case 7:
					*uParam2 = joaat("SP0_STEALTH_ABILITY");
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("SP1_SPECIAL_ABILITY_UNLOCKED");
					break;
				
				case 1:
					*uParam2 = joaat("SP1_STAMINA");
					break;
				
				case 3:
					*uParam2 = joaat("SP1_LUNG_CAPACITY");
					break;
				
				case 2:
					*uParam2 = joaat("SP1_STRENGTH");
					break;
				
				case 4:
					*uParam2 = joaat("SP1_WHEELIE_ABILITY");
					break;
				
				case 5:
					*uParam2 = joaat("SP1_FLYING_ABILITY");
					break;
				
				case 6:
					*uParam2 = joaat("SP1_SHOOTING_ABILITY");
					break;
				
				case 7:
					*uParam2 = joaat("SP1_STEALTH_ABILITY");
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("SP2_SPECIAL_ABILITY_UNLOCKED");
					break;
				
				case 1:
					*uParam2 = joaat("SP2_STAMINA");
					break;
				
				case 3:
					*uParam2 = joaat("SP2_LUNG_CAPACITY");
					break;
				
				case 2:
					*uParam2 = joaat("SP2_STRENGTH");
					break;
				
				case 4:
					*uParam2 = joaat("SP2_WHEELIE_ABILITY");
					break;
				
				case 5:
					*uParam2 = joaat("SP2_FLYING_ABILITY");
					break;
				
				case 6:
					*uParam2 = joaat("SP2_SHOOTING_ABILITY");
					break;
				
				case 7:
					*uParam2 = joaat("SP2_STEALTH_ABILITY");
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					*uParam3 = 64;
					break;
				
				case 1:
					*uParam3 = 65;
					break;
				
				case 3:
					*uParam3 = 67;
					break;
				
				case 2:
					*uParam3 = 66;
					break;
				
				case 4:
					*uParam3 = 68;
					break;
				
				case 5:
					*uParam3 = 69;
					break;
				
				case 6:
					*uParam3 = 70;
					break;
				
				case 7:
					*uParam3 = 71;
					break;
			}
			break;
	}
}

int func_173()
{
	int iVar0;
	
	if (bLocal_288 != 0)
	{
		if (iLocal_59 < 2)
		{
			iVar0 = 3;
		}
		else if (iLocal_59 == 2)
		{
			iVar0 = 4;
		}
		else if (iLocal_59 == 3)
		{
			iVar0 = 5;
		}
		else
		{
			iVar0 = 6;
		}
	}
	else if (iLocal_59 < 3)
	{
		iVar0 = 2;
	}
	else
	{
		iVar0 = 3;
	}
	return iVar0;
}

void func_174(bool bParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 2052;
	if (func_548())
	{
		iVar0 = 2056;
	}
	func_158(bLocal_90, iLocal_77, func_50(unk_0x9B0761B4C3EB8BC7(), 0, 0), func_44(2, 1, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f, 0);
	func_158(unk_0x9B0761B4C3EB8BC7(), iLocal_77, func_50(unk_0x9B0761B4C3EB8BC7(), 0, 0), func_44(2, 0, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f, 0);
}

void func_175(bool bParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 2052;
	if (func_548())
	{
		iVar0 = 2056;
	}
	func_161(&iLocal_77, 0, 1, 0);
	func_160(bLocal_90, iLocal_77, func_50(unk_0x9B0761B4C3EB8BC7(), 0, 0), func_44(2, 1, bParam0, bParam1), 1000f, -1000f, iVar0, 0, 1148846080);
	func_160(unk_0x9B0761B4C3EB8BC7(), iLocal_77, func_50(unk_0x9B0761B4C3EB8BC7(), 0, 0), func_44(2, 0, bParam0, bParam1), 1000f, -1000f, iVar0, 0, 1148846080);
}

void func_176(bool bParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 2052;
	if (func_548())
	{
		iVar0 = 2056;
	}
	func_158(bLocal_90, iLocal_76, func_50(unk_0x9B0761B4C3EB8BC7(), 0, 0), func_44(1, 1, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f, 0);
	func_158(unk_0x9B0761B4C3EB8BC7(), iLocal_76, func_50(unk_0x9B0761B4C3EB8BC7(), 0, 0), func_44(1, 0, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f, 0);
}

void func_177(bool bParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 2052;
	if (func_548())
	{
		iVar0 = 2056;
	}
	func_161(&iLocal_76, 0, 0, 1);
	func_160(bLocal_90, iLocal_76, func_50(unk_0x9B0761B4C3EB8BC7(), 0, 0), func_44(1, 1, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f);
	func_160(unk_0x9B0761B4C3EB8BC7(), iLocal_76, func_50(unk_0x9B0761B4C3EB8BC7(), 0, 0), func_44(1, 0, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f);
}

bool func_178(int iParam0)
{
	bool bVar0;
	
	if (func_548())
	{
		bVar0 = ENTITY::HAS_ANIM_EVENT_FIRED(PED::GET_SYNCHRONIZED_SCENE_PHASE(iParam0));
	}
	else
	{
		bVar0 = ENTITY::HAS_ANIM_EVENT_FIRED(iParam0);
	}
	return bVar0;
}

void func_179(int iParam0)
{
	if (!func_219(iParam0))
	{
		return;
	}
}

void func_180(bool bParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 2052;
	if (func_548())
	{
		iVar0 = 2056;
	}
	func_158(bLocal_90, iLocal_74, func_50(unk_0x9B0761B4C3EB8BC7(), 0, 0), func_44(0, 1, bParam0, bParam1), 8f, -0.7f, iVar0, 0, 1000f, 0);
	func_158(unk_0x9B0761B4C3EB8BC7(), iLocal_75, func_50(unk_0x9B0761B4C3EB8BC7(), 0, 0), func_44(0, 0, bParam0, bParam1), 8f, -0.7f, iVar0, 0, 1000f, 0);
}

void func_181(bool bParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 2052;
	if (func_548())
	{
		iVar0 = 2056;
	}
	func_161(&iLocal_74, 1, 0, 1);
	func_160(bLocal_90, iLocal_74, func_50(unk_0x9B0761B4C3EB8BC7(), 0, 0), func_44(0, 1, bParam0, bParam1), 4f, -1000f, iVar0, 0, 1148846080);
	func_161(&iLocal_75, 0, 0, 1);
	func_160(unk_0x9B0761B4C3EB8BC7(), iLocal_75, func_50(unk_0x9B0761B4C3EB8BC7(), 0, 0), func_44(0, 0, bParam0, bParam1), 4f, -1000f, iVar0, 0, 1148846080);
}

void func_182(bool bParam0, int iParam1)
{
	if (!unk_0xE0B3BC41DDA88DF0(bParam0, bLocal_93, 0f))
	{
		if (!func_548())
		{
			PED::SET_PED_INTO_VEHICLE(bParam0, bLocal_93, iParam1);
		}
		else if (!unk_0xE0B3BC41DDA88DF0(bParam0, bLocal_93, 0f))
		{
			TASK::TASK_ENTER_VEHICLE(bParam0, bLocal_93, -1, iParam1, 2f, 16, 0);
		}
	}
}

void func_183(int iParam0)
{
	var uVar0;
	var uVar1;
	struct<3> Var2;
	bool bVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	
	uVar0 = func_185(func_186(2), ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(bLocal_93, ENTITY::_GET_ENTITY_BONE_ROTATION_LOCAL(bLocal_93, "windscreen")));
	uVar1 = func_185(func_186(1), ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(bLocal_93, ENTITY::_GET_ENTITY_BONE_ROTATION_LOCAL(bLocal_93, "windscreen")));
	Var2 = { NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(bLocal_93, 2) };
	bVar3 = ENTITY::IS_ENTITY_IN_WATER(bLocal_93);
	if (bVar3 >= 180f)
	{
		fVar4 = (bVar3 - 180f);
	}
	else
	{
		fVar4 = (bVar3 + 180f);
	}
	fVar5 = (-7f - Var2.f_1);
	fVar6 = (-5f - Var2.x);
	fVar7 = (-2.5f + Var2.x);
	fVar8 = ((0f - (0.7f * Var2.x)) + (0.3f * Var2.f_1));
	if (!CAM::DOES_CAM_EXIST(Local_300[2 /*7*/]))
	{
		func_184(&(Local_300[2 /*7*/]), func_186(2), fVar5, Var2.x, uVar0, 50f);
	}
	if (!CAM::DOES_CAM_EXIST(Local_300[1 /*7*/]))
	{
		func_184(&(Local_300[1 /*7*/]), func_186(1), fVar8, -Var2.f_1, uVar1, 37.3f);
	}
	if (!CAM::DOES_CAM_EXIST(Local_300[0 /*7*/]))
	{
		func_184(&(Local_300[0 /*7*/]), func_186(0), fVar6, -Var2.f_1, fVar4, 50f);
	}
	if (!CAM::DOES_CAM_EXIST(Local_300[3 /*7*/]))
	{
		func_184(&(Local_300[3 /*7*/]), func_186(3), fVar7, Var2.f_1, bVar3, 45f);
	}
	CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
	CAM::SET_CAM_ACTIVE(Local_300[*iParam0 /*7*/], true);
}

void func_184(var uParam0, struct<3> Param1, struct<3> Param2, float fParam3)
{
	uParam0->f_1 = { Param2 };
	uParam0->f_4 = { 0f, 0f, 0f };
	*uParam0 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", false);
	CAM::SET_CAM_ACTIVE(*uParam0, true);
	CAM::SET_CAM_PARAMS(*uParam0, Param1, uParam0->f_1, fParam3, 0, 1, 1, 2);
	CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
}

var func_185(struct<2> Param0, var uParam1, struct<2> Param2, Vector3 vParam3)
{
	return unk_0x9075769DD4F148B7((Param2 - Param0), (Param2.f_1 - Param0.f_1));
}

Vector3 func_186(int iParam0)
{
	struct<3> Var0;
	var uVar1;
	struct<2> Var2;
	struct<3> Var3;
	struct<3> Var4;
	
	if (!PED::IS_PED_IN_ANY_POLICE_VEHICLE(bLocal_90, 0))
	{
	}
	if (!ENTITY::GET_ENTITY_COORDS(bLocal_93, false))
	{
	}
	ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(MISC::GET_MODEL_DIMENSIONS(bLocal_93), &uVar1, &Var2);
	Var3 = { ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(bLocal_93, ENTITY::_GET_ENTITY_BONE_ROTATION_LOCAL(bLocal_93, "windscreen")) };
	Var4 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(bLocal_93, Var3) };
	switch (iParam0)
	{
		case 0:
			Var0 = { unk_0x7EC595B99EA7C4B1(bLocal_93, 0f, (Var2.f_1 + 1.4f), Var4.f_2) };
			break;
		
		case 1:
			Var0 = { unk_0x7EC595B99EA7C4B1(bLocal_93, 1.5f, (Var2.f_1 + 1.2f), (Var4.f_2 - 0.1f)) };
			break;
		
		case 2:
			Var0 = { unk_0x7EC595B99EA7C4B1(bLocal_93, -3.7f, 0.7f, Var4.f_2) };
			break;
		
		case 3:
			Var0 = { func_187() };
			break;
	}
	return Var0;
}

Vector3 func_187()
{
	struct<3> Var0;
	struct<3> Var1;
	struct<2> Var2;
	var uVar3;
	
	ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(MISC::GET_MODEL_DIMENSIONS(bLocal_93), &Var2, &uVar3);
	Var0 = { ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(bLocal_93, ENTITY::_GET_ENTITY_BONE_ROTATION_LOCAL(bLocal_93, "windscreen")) };
	Var1 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(bLocal_93, Var0) };
	Var1.f_2 = (Var1.f_2 + 0.09f);
	Var2.f_1 = (Var2.f_1 - 1f);
	return unk_0x7EC595B99EA7C4B1(bLocal_93, 0f, -ENTITY::IS_ENTITY_PLAYING_ANIM(Var2.f_1), Var1.f_2);
}

void func_188(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0xBE20AB8238688965(&Global_31215, bParam0);
	}
	else
	{
		VEHICLE::IS_VEHICLE_DRIVEABLE(&Global_31215, bParam0);
	}
}

void func_189(int iParam0)
{
	if (!CAM::DOES_CAM_EXIST(Local_300[*iParam0 /*7*/]))
	{
		return;
	}
	if (!CAM::IS_CAM_RENDERING(Local_300[*iParam0 /*7*/]))
	{
		return;
	}
	CAM::SHAKE_CAM(Local_300[*iParam0 /*7*/], "HAND_SHAKE", 0.25f);
	if (!HUD::DISABLE_FRONTEND_THIS_FRAME())
	{
		func_192(&(Local_300[*iParam0 /*7*/]));
	}
	if (func_191())
	{
		if (!func_548())
		{
			if (!func_468("PROS_CAM_OC"))
			{
				func_114("PROS_CAM_OC");
			}
		}
	}
	else
	{
		if (!func_548())
		{
			if (!func_468("PROS_CAM_TOG"))
			{
				func_114("PROS_CAM_TOG");
			}
		}
		if ((PAD::IS_CONTROL_JUST_PRESSED(2, 0) && !HUD::DISABLE_FRONTEND_THIS_FRAME()) && !func_48(0, 1))
		{
			func_190(iParam0);
			CAM::SET_CAM_ACTIVE(Local_300[*iParam0 /*7*/], true);
		}
	}
}

void func_190(var uParam0)
{
	if (*uParam0 < 3)
	{
		*uParam0++;
	}
	else if (*uParam0 == 3)
	{
		*uParam0 = 0;
	}
	if (*uParam0 == 0)
	{
		if (func_488(iLocal_51, 16))
		{
			*uParam0++;
		}
	}
	if (*uParam0 == 1)
	{
		if (func_488(iLocal_51, 128))
		{
			*uParam0++;
		}
	}
	if (*uParam0 == 2)
	{
		if (func_488(iLocal_51, 64))
		{
			*uParam0++;
		}
	}
}

int func_191()
{
	if ((func_488(iLocal_51, 16) && func_488(iLocal_51, 64)) && func_488(iLocal_51, 128))
	{
		return 1;
	}
	return 0;
}

void func_192(var uParam0)
{
	var uVar0[4];
	struct<3> Var1;
	float fVar2;
	struct<3> Var3;
	
	PAD::_0x7F4724035FDCA1DD(2);
	func_194(&(uVar0[0]), &(uVar0[1]), &(uVar0[2]), &(uVar0[3]), 0, 0);
	Var1.f_2 = (-(SYSTEM::TO_FLOAT(uVar0[2]) / 127f) * 10f);
	Var1.f_1 = ((-Var1.f_2 * 3f) / 10f);
	if (PAD::IS_LOOK_INVERTED())
	{
		Var1.x = ((SYSTEM::TO_FLOAT(uVar0[3]) / 127f) * 10f);
	}
	else
	{
		Var1.x = (-(SYSTEM::TO_FLOAT(uVar0[3]) / 127f) * 10f);
	}
	fVar2 = (30f * SYSTEM::TIMESTEP());
	Var3 = { Var1 };
	if (HUD::_0x5BFF36D6ED83E0AE(0))
	{
		uParam0->f_4 = func_193((uParam0->f_4 + (Var3.x * 0.05f)), -3f, 3f);
		uParam0->f_4.f_1 = func_193((uParam0->f_4.f_1 + (Var3.f_1 * 0.05f)), -3f, 3f);
		uParam0->f_4.f_2 = func_193((uParam0->f_4.f_2 + (Var3.f_2 * 0.05f)), -3f, 3f);
	}
	else
	{
		uParam0->f_4 = (uParam0->f_4 + func_193((((Var3.x - uParam0->f_4) * 0.05f) * fVar2), -3f, 3f));
		uParam0->f_4.f_1 = (uParam0->f_4.f_1 + func_193((((Var3.f_1 - uParam0->f_4.f_1) * 0.05f) * fVar2), -3f, 3f));
		uParam0->f_4.f_2 = (uParam0->f_4.f_2 + func_193((((Var3.f_2 - uParam0->f_4.f_2) * 0.05f) * fVar2), -3f, 3f));
	}
	CAM::SET_CAM_ROT(*uParam0, uParam0->f_1 + uParam0->f_4, 2);
}

float func_193(float fParam0, float fParam1, float fParam2)
{
	if (fParam0 > fParam2)
	{
		return fParam2;
	}
	else if (fParam0 < fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

void func_194(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
{
	*uParam0 = SYSTEM::FLOOR((PAD::GET_CONTROL_UNBOUND_NORMAL(2, 218) * 127f));
	*uParam1 = SYSTEM::FLOOR((PAD::GET_CONTROL_UNBOUND_NORMAL(2, 219) * 127f));
	*uParam2 = SYSTEM::FLOOR((PAD::GET_CONTROL_UNBOUND_NORMAL(2, 220) * 127f));
	*uParam3 = SYSTEM::FLOOR((PAD::GET_CONTROL_UNBOUND_NORMAL(2, 221) * 127f));
	if (bParam4)
	{
		if (!PAD::IS_CONTROL_ENABLED(2, 218))
		{
			*uParam0 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(2, 218) * 127f));
		}
		if (!PAD::IS_CONTROL_ENABLED(2, 219))
		{
			*uParam1 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(2, 219) * 127f));
		}
		if (!PAD::IS_CONTROL_ENABLED(2, 220))
		{
			*uParam2 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(2, 220) * 127f));
		}
		if (!PAD::IS_CONTROL_ENABLED(2, 221))
		{
			*uParam3 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(2, 221) * 127f));
		}
	}
	if (HUD::_0x5BFF36D6ED83E0AE(2))
	{
		if (bParam5)
		{
			if (PAD::IS_LOOK_INVERTED())
			{
				*uParam3 = (*uParam3 * -1);
			}
			if (PAD::_0xE1615EC03B3BB4FD())
			{
				*uParam3 = (*uParam3 * -1);
			}
		}
	}
}

void func_195()
{
	float fVar0;
	bool bVar1;
	
	if (!func_200())
	{
		if (func_199(bLocal_90))
		{
			if (!func_488(iLocal_49, 256))
			{
				AUDIO::STOP_CURRENT_PLAYING_AMBIENT_SPEECH(unk_0x9B0761B4C3EB8BC7());
				AUDIO::_PLAY_AMBIENT_SPEECH1(unk_0x9B0761B4C3EB8BC7(), "SEX_CLIMAX", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
				if (iLocal_70 == 1)
				{
					if (!func_548())
					{
						PLAYER::SPECIAL_ABILITY_CHARGE_ABSOLUTE(PLAYER::PLAYER_ID(), 15, true, 0);
					}
					PAD::SET_PAD_SHAKE(0, 4000, 252);
				}
				else if (iLocal_70 == 2)
				{
					if (!func_548())
					{
						PLAYER::SPECIAL_ABILITY_CHARGE_ABSOLUTE(PLAYER::PLAYER_ID(), 10, true, 0);
					}
					PAD::SET_PAD_SHAKE(0, 4000, 210);
				}
				else
				{
					if (!func_548())
					{
						PLAYER::SPECIAL_ABILITY_CHARGE_ABSOLUTE(PLAYER::PLAYER_ID(), 5, true, 0);
					}
					PAD::SET_PAD_SHAKE(0, 3000, 168);
				}
				func_480(&iLocal_49, 256);
			}
		}
	}
	else
	{
		switch (iLocal_289)
		{
			case 0:
				if (ENTITY::GET_ENTITY_ROTATION(bLocal_90, 876132797))
				{
					PAD::SET_PAD_SHAKE(0, 200, 84);
					ENTITY::APPLY_FORCE_TO_ENTITY(bLocal_93, 1, 0f, 0f, -0.05f, 0f, 0f, 0f, 0, true, true, true, true, false);
					func_197();
				}
				break;
			
			case 1:
			case 2:
				if (func_488(iLocal_49, 32768))
				{
					if (func_548())
					{
						fVar0 = PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_77);
					}
					else
					{
						fVar0 = iLocal_77;
					}
					if (PED::DETACH_SYNCHRONIZED_SCENE(fVar0))
					{
						bVar1 = ENTITY::HAS_ANIM_EVENT_FIRED(fVar0);
						if ((((((((((((((bVar1 > 0.01f && bVar1 < 0.019f) || (bVar1 > 0.093f && bVar1 < 0.1f)) || (bVar1 > 0.165f && bVar1 < 0.172f)) || (bVar1 > 0.231f && bVar1 < 0.239f)) || (bVar1 > 0.308f && bVar1 < 0.317f)) || (bVar1 > 0.37f && bVar1 < 0.378f)) || (bVar1 > 0.437f && bVar1 < 0.443f)) || (bVar1 > 0.507f && bVar1 < 0.518f)) || (bVar1 > 0.58f && bVar1 < 0.587f)) || (bVar1 > 0.651f && bVar1 < 0.659f)) || (bVar1 > 0.72f && bVar1 < 0.729f)) || (bVar1 > 0.788f && bVar1 < 0.794f)) || (bVar1 > 0.862f && bVar1 < 0.87f)) || (bVar1 > 0.937f && bVar1 < 0.946f))
						{
							if (!func_521(512))
							{
								PAD::SET_PAD_SHAKE(0, 200, 252);
								ENTITY::APPLY_FORCE_TO_ENTITY(bLocal_93, 1, 0f, 0f, -0.1f, 0f, 0f, 0f, 0, true, true, true, true, false);
								func_197();
								func_196(512);
							}
						}
						else
						{
							func_525(512);
						}
					}
				}
				else if (ENTITY::GET_ENTITY_ROTATION(bLocal_90, 876132797))
				{
					PAD::SET_PAD_SHAKE(0, 200, 252);
					ENTITY::APPLY_FORCE_TO_ENTITY(bLocal_93, 1, 0f, 0f, -0.1f, 0f, 0f, 0f, 0, true, true, true, true, false);
					func_197();
				}
				break;
			}
	}
}

void func_196(int iParam0)
{
	if (!func_488(iLocal_52, iParam0))
	{
		func_480(&iLocal_52, iParam0);
	}
}

void func_197()
{
	int iVar0;
	
	iVar0 = ENTITY::GET_ENTITY_HEALTH(unk_0x9B0761B4C3EB8BC7());
	iVar0 = (iVar0 + (1 + bLocal_288));
	if (iVar0 > ENTITY::GET_ENTITY_MAX_HEALTH(unk_0x9B0761B4C3EB8BC7()))
	{
		iVar0 = ENTITY::GET_ENTITY_MAX_HEALTH(unk_0x9B0761B4C3EB8BC7());
	}
	CAM::IS_AIM_CAM_ACTIVE(unk_0x9B0761B4C3EB8BC7(), iVar0, 0);
	func_198();
}

void func_198()
{
	if (!func_548())
	{
		return;
	}
	if (MISC::IS_BIT_SET(unk_0x9B0761B4C3EB8BC7()))
	{
		iLocal_57 = ENTITY::GET_ENTITY_HEALTH(unk_0x9B0761B4C3EB8BC7());
	}
}

bool func_199(bool bParam0)
{
	return (((ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(bParam0, func_54(), func_46(11), 3) || ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(bParam0, func_54(), func_46(21), 3)) || ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(bParam0, func_52(), func_45(11), 3)) || ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(bParam0, func_52(), func_45(21), 3));
}

bool func_200()
{
	return ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(bLocal_90, func_50(unk_0x9B0761B4C3EB8BC7(), 0, 0), func_201(bLocal_90, func_49(), 1), 3);
}

char* func_201(bool bParam0, bool bParam1, bool bParam2)
{
	char* sVar0;
	bool bVar1;
	
	sVar0 = "";
	if (!PED::IS_PED_IN_ANY_POLICE_VEHICLE(bParam0, 0))
	{
		bVar1 = ENTITY::GET_ENTITY_MODEL(bParam0, 1);
		if (ENTITY::GET_ENTITY_COORDS(bVar1, false))
		{
			if (func_47(bVar1))
			{
				if (bParam1)
				{
					if (bParam2)
					{
						sVar0 = func_46(20);
					}
					else
					{
						sVar0 = func_46(25);
					}
				}
				else if (bParam2)
				{
					sVar0 = func_46(10);
				}
				else
				{
					sVar0 = func_46(15);
				}
			}
			else if (bParam1)
			{
				if (bParam2)
				{
					sVar0 = func_45(20);
				}
				else
				{
					sVar0 = func_45(25);
				}
			}
			else if (bParam2)
			{
				sVar0 = func_45(10);
			}
			else
			{
				sVar0 = func_45(15);
			}
		}
	}
	return sVar0;
}

void func_202()
{
	if (!func_200())
	{
		return;
	}
	if (func_548())
	{
		func_206();
	}
	if (AUDIO::IS_ANY_SPEECH_PLAYING(bLocal_90) || AUDIO::IS_ANY_SPEECH_PLAYING(unk_0x9B0761B4C3EB8BC7()))
	{
		return;
	}
	if (NETWORK::_NETWORK_GET_ROS_PRIVILEGE_25(0, 5000) > 2500)
	{
		func_203();
	}
}

void func_203()
{
	if (STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_90))
	{
		return;
	}
	if (!AUDIO::IS_ANY_SPEECH_PLAYING(bLocal_90) && !AUDIO::IS_ANY_SPEECH_PLAYING(unk_0x9B0761B4C3EB8BC7()))
	{
		if (bLocal_288 == 0)
		{
			func_131("PROSTITUTES_BJ_SPEECH_SCENE");
		}
		if (!func_10(&iLocal_101))
		{
			func_470(&iLocal_101);
		}
		else if (func_7(&iLocal_101) > MISC::GET_RANDOM_FLOAT_IN_RANGE(2f, 5f))
		{
			if (!func_488(iLocal_49, 65536))
			{
				func_480(&iLocal_49, 65536);
				AUDIO::_PLAY_AMBIENT_SPEECH1(unk_0x9B0761B4C3EB8BC7(), "SEX_GENERIC", "SPEECH_PARAMS_FORCE_NORMAL_CLEAR", 1);
				func_204(iLocal_289);
			}
			else
			{
				func_5(&iLocal_49, 65536);
				func_40(&iLocal_101);
			}
		}
	}
}

void func_204(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			func_87("PROSTITUTES_BJ_SPEECH_SCENE");
			if (func_205(PLAYER::PLAYER_ID()))
			{
				AUDIO::_PLAY_AMBIENT_SPEECH1(bLocal_90, "SEX_ORAL", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
			}
			else
			{
				AUDIO::_PLAY_AMBIENT_SPEECH1(bLocal_90, "SEX_ORAL_FEM", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
			}
			break;
		
		case 1:
		case 2:
			if (func_205(PLAYER::PLAYER_ID()))
			{
				AUDIO::_PLAY_AMBIENT_SPEECH1(bLocal_90, "SEX_GENERIC", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
			}
			else
			{
				AUDIO::_PLAY_AMBIENT_SPEECH1(bLocal_90, "SEX_GENERIC_FEM", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
			}
			break;
	}
}

int func_205(bool bParam0)
{
	if (!MISC::SET_BIT())
	{
		return 1;
	}
	return Global_2425869[bParam0 /*443*/].f_234;
}

void func_206()
{
	if (STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_90))
	{
		return;
	}
	if (func_207(0.4f))
	{
		func_196(4);
	}
	if (func_521(4))
	{
		if (!func_10(&iLocal_104))
		{
			func_470(&iLocal_104);
		}
		else if (func_7(&iLocal_104) > 2f)
		{
			if (!func_521(16) && !func_207(0.4f))
			{
				func_196(16);
				iLocal_59++;
			}
			else if (func_521(16))
			{
				if (!AUDIO::IS_ANY_SPEECH_PLAYING(bLocal_90))
				{
					func_525(4);
					func_525(16);
					func_40(&iLocal_104);
				}
			}
		}
	}
}

int func_207(float fParam0)
{
	float fVar0;
	
	if (func_208(PLAYER::PLAYER_ID(), 1, 1))
	{
		fVar0 = NETWORK::NETWORK_GET_PLAYER_LOUDNESS(PLAYER::PLAYER_ID());
		if (fVar0 > fParam0)
		{
			return 1;
		}
	}
	return 0;
}

int func_208(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = bParam0;
	if (iVar0 != -1)
	{
		if (AUDIO::PLAY_STREAM_FROM_VEHICLE(bParam0))
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

void func_209(bool bParam0, bool bParam1)
{
	if (!func_548())
	{
		return;
	}
	func_181(bParam0, bParam1);
	func_177(bParam0, bParam1);
	func_175(bParam0, bParam1);
	func_166(bParam0, bParam1);
	func_159(bParam0, bParam1);
}

void func_210(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_141(iParam0, func_139(iParam1), 0);
	iVar0++;
	if (!func_212(iParam0))
	{
		func_138(iParam0, iVar0, iParam1, 1, 0);
	}
	else
	{
		func_211(iParam0, iVar0, iParam1, 1);
	}
}

void func_211(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2551832[iParam0 /*3*/][func_139(iParam2)];
	if (iVar0 != 0)
	{
		NETWORK::NETWORK_HAS_SOCIAL_CLUB_ACCOUNT(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 787:
			Global_1388125[func_139(iParam2)] = iParam1;
			break;
		
		case 788:
			Global_1388131[func_139(iParam2)] = iParam1;
			break;
		
		case 789:
			Global_1388137[func_139(iParam2)] = iParam1;
			break;
		
		case 790:
			Global_1388143[func_139(iParam2)] = iParam1;
			break;
		
		case 8727:
			Global_1388149[func_139(iParam2)] = iParam1;
			break;
		
		case 777:
			Global_1388095[func_139(iParam2)] = iParam1;
			break;
		
		case 778:
			Global_1388101[func_139(iParam2)] = iParam1;
			break;
		
		case 779:
			Global_1388107[func_139(iParam2)] = iParam1;
			break;
		
		case 780:
			Global_1388113[func_139(iParam2)] = iParam1;
			break;
		
		case 8729:
			Global_1388119[func_139(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_1388065[func_139(iParam2)] = iParam1;
			break;
		
		case 768:
			Global_1388071[func_139(iParam2)] = iParam1;
			break;
		
		case 769:
			Global_1388077[func_139(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1388083[func_139(iParam2)] = iParam1;
			break;
		
		case 8731:
			Global_1388089[func_139(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_1388155[func_139(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1388161[func_139(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1388167[func_139(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1388173[func_139(iParam2)] = iParam1;
			break;
		
		case 8733:
			Global_1388179[func_139(iParam2)] = iParam1;
			break;
		
		case 1303:
			Global_1388185[func_139(iParam2)] = iParam1;
			break;
		
		case 7234:
			Global_1388191[func_139(iParam2)] = iParam1;
			break;
		
		case 639:
			Global_1388197[func_139(iParam2)] = iParam1;
			break;
		
		case 1278:
			Global_1388203[func_139(iParam2)] = iParam1;
			break;
		
		case 1877:
			Global_2590417[0 /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		case 2268:
			Global_2590417[1 /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		case 2930:
			Global_2590417[2 /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		case 3059:
			Global_2590417[3 /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		case 10138:
			Global_2590566[func_139(iParam2)] = iParam1;
			break;
		
		case 764:
			Global_1388209[func_139(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1388215[func_139(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_1388221[func_139(iParam2)] = iParam1;
			break;
		
		case 8732:
			Global_1388227[func_139(iParam2)] = iParam1;
			break;
		
		case 9534:
			Global_1388233[func_139(iParam2)] = iParam1;
			break;
		
		case 1236:
			Global_1388239[func_139(iParam2)] = iParam1;
			break;
		
		case 3054:
			Global_2590490[0 /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		case 3055:
			Global_2590490[1 /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		case 3056:
			Global_2590490[2 /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		case 3057:
			Global_2590490[3 /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		case 3058:
			Global_2590490[4 /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		case 3637:
			Global_2590569[0 /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		case 3638:
			Global_2590569[1 /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		case 3639:
			Global_2590569[2 /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		case 3640:
			Global_2590569[3 /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		case 3641:
			Global_2590569[4 /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		case 3642:
			Global_2590585[0 /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		case 3643:
			Global_2590585[1 /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		case 3644:
			Global_2590585[2 /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		case 3645:
			Global_2590585[3 /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		case 3646:
			Global_2590585[4 /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		case 3222:
			Global_2590490[5 /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		case 3228:
			Global_2590417[4 /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		case 3664:
			Global_2590601[func_139(iParam2)] = iParam1;
			break;
		
		case 3665:
			Global_2590610[func_139(iParam2)] = iParam1;
			break;
		
		case 3666:
			Global_2590604[func_139(iParam2)] = iParam1;
			break;
		
		case 3667:
			Global_2590613[func_139(iParam2)] = iParam1;
			break;
		
		case 3668:
			Global_2590607[func_139(iParam2)] = iParam1;
			break;
		
		case 3669:
			Global_2590616[func_139(iParam2)] = iParam1;
			break;
		
		case 3690:
			Global_2590619[func_139(iParam2)] = iParam1;
			break;
		
		case 3230:
			Global_2590490[6 /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		case 3231:
			Global_2590417[5 /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		case 3235:
			Global_2590490[7 /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		case 3233:
			Global_2590417[6 /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		case 4020:
			Global_2590490[8 /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		case 4021:
			Global_2590417[7 /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		case 4023:
			Global_2590490[9 /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		case 4024:
			Global_2590417[8 /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		case 4026:
			Global_2590490[10 /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		case 4027:
			Global_2590417[9 /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		case 4029:
			Global_2590490[11 /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		case 4030:
			Global_2590417[10 /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		case 6110:
			Global_2590490[12 /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		case 6111:
			Global_2590417[11 /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		case 6168:
			Global_2590490[13 /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		case 6169:
			Global_2590417[12 /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		case 6546:
			Global_2590490[14 /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		case 6547:
			Global_2590417[13 /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		case 6559:
			Global_2590490[15 /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		case 6560:
			Global_2590417[14 /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		case 6562:
			Global_2590490[16 /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		case 6563:
			Global_2590417[15 /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		case 6565:
			Global_2590490[17 /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		case 6566:
			Global_2590417[16 /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		case 7284:
			Global_2590417[17 /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		case 7286:
			Global_2590417[18 /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		case 7288:
			Global_2590417[19 /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		case 8011:
			Global_2590417[20 /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		case 8283:
			Global_2590622[func_139(iParam2)] = iParam1;
			break;
		
		case 8284:
			Global_2590625[func_139(iParam2)] = iParam1;
			break;
		
		case 8285:
			Global_2590628[func_139(iParam2)] = iParam1;
			break;
		
		case 8286:
			Global_2590631[func_139(iParam2)] = iParam1;
			break;
		
		case 8287:
			Global_2590634[func_139(iParam2)] = iParam1;
			break;
		
		case 8288:
			Global_2590637[func_139(iParam2)] = iParam1;
			break;
		
		case 8289:
			Global_2590640[func_139(iParam2)] = iParam1;
			break;
		
		case 8290:
			Global_2590643[func_139(iParam2)] = iParam1;
			break;
		
		case 8291:
			Global_2590646[func_139(iParam2)] = iParam1;
			break;
		
		case 8292:
			Global_2590649[func_139(iParam2)] = iParam1;
			break;
		
		case 8293:
			Global_2590652[func_139(iParam2)] = iParam1;
			break;
		
		case 8294:
			Global_2590655[func_139(iParam2)] = iParam1;
			break;
		
		case 8295:
			Global_2590658[func_139(iParam2)] = iParam1;
			break;
		
		case 8901:
			Global_2590661[func_139(iParam2)] = iParam1;
			break;
		
		case 8535:
			Global_2590417[21 /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		case 8978:
			Global_2590490[23 /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		case 8976:
			Global_2590417[22 /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		case 8981:
			Global_2590490[24 /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		case 8979:
			Global_2590417[23 /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_212(int iParam0)
{
	if (Global_1388046)
	{
		switch (iParam0)
		{
			case 787:
			case 788:
			case 789:
			case 790:
			case 8727:
			case 777:
			case 778:
			case 779:
			case 780:
			case 8729:
			case 767:
			case 768:
			case 769:
			case 770:
			case 8731:
			case 757:
			case 758:
			case 759:
			case 760:
			case 8733:
			case 1303:
			case 7234:
			case 639:
			case 1278:
			case 764:
			case 765:
			case 766:
			case 8732:
			case 9534:
			case 1236:
			case 1877:
			case 2268:
			case 2930:
			case 3059:
			case 10138:
			case 3054:
			case 3055:
			case 3056:
			case 3057:
			case 3058:
			case 3233:
			case 3235:
			case 3637:
			case 3638:
			case 3639:
			case 3640:
			case 3641:
			case 3642:
			case 3643:
			case 3644:
			case 3645:
			case 3646:
			case 3228:
			case 3222:
			case 3664:
			case 3665:
			case 3666:
			case 3667:
			case 3668:
			case 3669:
			case 3690:
			case 3231:
			case 3230:
			case 4021:
			case 4020:
			case 4024:
			case 4023:
			case 4027:
			case 4026:
			case 4030:
			case 4029:
			case 6111:
			case 6110:
			case 6169:
			case 6168:
			case 6534:
			case 6533:
			case 6547:
			case 6546:
			case 6560:
			case 6559:
			case 6563:
			case 6562:
			case 6566:
			case 6565:
			case 7284:
			case 7286:
			case 7288:
			case 8283:
			case 8284:
			case 8285:
			case 8286:
			case 8287:
			case 8288:
			case 8289:
			case 8290:
			case 8291:
			case 8292:
			case 8293:
			case 8294:
			case 8295:
			case 8011:
			case 8535:
			case 8976:
			case 8978:
			case 8979:
			case 8981:
				return 1;
				break;
			}
	}
	return 0;
}

void func_213(int iParam0)
{
	if (func_218())
	{
		return;
	}
	if (!Global_19681.f_1 == 1)
	{
		if (func_217(0))
		{
			func_214(iParam0);
		}
		unk_0xBE20AB8238688965(&Global_7552, 2);
	}
}

void func_214(int iParam0)
{
	if (func_218())
	{
		return;
	}
	if (Global_19864)
	{
		if (func_216())
		{
			func_215(1, 1);
		}
		else
		{
			func_215(0, 0);
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
	if (!func_20())
	{
		Global_19681.f_1 = 3;
	}
}

void func_215(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_217(0))
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

bool func_216()
{
	return unk_0xCE990E643CD9D0E5(Global_1689730, 5);
}

int func_217(int iParam0)
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

bool func_218()
{
	return unk_0xCE990E643CD9D0E5(Global_1689730, 19);
}

bool func_219(int iParam0)
{
	void fVar0;
	
	if (func_548())
	{
		fVar0 = PED::DETACH_SYNCHRONIZED_SCENE(PED::GET_SYNCHRONIZED_SCENE_PHASE(iParam0));
	}
	else
	{
		fVar0 = PED::DETACH_SYNCHRONIZED_SCENE(iParam0);
	}
	return fVar0;
}

void func_220()
{
	if (PED::REMOVE_SCENARIO_BLOCKING_AREA())
	{
		CAM::DO_SCREEN_FADE_IN(1000);
		unk_0x03D382CB0B44E2FC(unk_0x9B0761B4C3EB8BC7(), func_222(), 1, 0, 0, 1);
		ENTITY::SET_ENTITY_HEADING(unk_0x9B0761B4C3EB8BC7(), func_221());
		func_539();
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		PED::DELETE_PED(&bLocal_90);
	}
}

float func_221()
{
	switch (func_23())
	{
		case 0:
			return 116.6356f;
			break;
		
		case 1:
			return 175.0504f;
			break;
		
		case 2:
			return 299.5673f;
			break;
	}
	return 0f;
}

Vector3 func_222()
{
	switch (func_23())
	{
		case 0:
			return -820.4975f, 176.9618f, 70.6166f;
			break;
		
		case 1:
			return -14.6005f, -1444.624f, 29.6472f;
			break;
		
		case 2:
			return 1979.961f, 3816.018f, 31.3641f;
			break;
	}
	return 0f, 0f, 0f;
}

void func_223()
{
	int iVar0;
	
	if (func_225(&iLocal_98, 3f) && !CAM::IS_CAM_ACTIVE(iLocal_97))
	{
		iVar0 = SYSTEM::FLOOR(((func_224() - 2f) * 1000f));
		CAM::SET_CAM_ACTIVE(iLocal_96, false);
		CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_97, iLocal_96, iVar0, 1, 1);
	}
	if (func_225(&iLocal_98, func_224()))
	{
		CAM::DO_SCREEN_FADE_OUT(1000);
		iLocal_286 = 10;
	}
}

float func_224()
{
	switch (func_23())
	{
		case 0:
			return 10f;
			break;
		
		case 1:
			return 12f;
			break;
		
		case 2:
			return 10f;
			break;
	}
	return 0f;
}

int func_225(int iParam0, float fParam1)
{
	if (func_10(iParam0))
	{
		if (func_7(iParam0) > fParam1)
		{
			return 1;
		}
	}
	return 0;
}

void func_226(var uParam0)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	while (iVar0 < SCRIPT::GET_EVENT_AT_INDEX(1))
	{
		bVar1 = SCRIPT::GET_EVENT_DATA(1, iVar0);
		switch (bVar1)
		{
			case 185:
				func_227(iVar0, uParam0);
				break;
		}
		iVar0++;
	}
}

void func_227(int iParam0, var uParam1)
{
	var uVar0;
	
	if (unk_0x477FAFFE21935947(1, iParam0, &uVar0, 13))
	{
		func_228(&uVar0, uParam1);
	}
}

void func_228(var uParam0, var uParam1)
{
	if (MISC::IS_BIT_SET(*uParam0))
	{
		if (ENTITY::IS_ENTITY_A_VEHICLE(*uParam0))
		{
			if (MISC::IS_BIT_SET(unk_0x9B0761B4C3EB8BC7()))
			{
				if (!PED::IS_PED_IN_ANY_POLICE_VEHICLE(unk_0x9B0761B4C3EB8BC7(), 0))
				{
					if (ENTITY::GET_ENTITY_MODEL(unk_0x9B0761B4C3EB8BC7(), 0) == ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(*uParam0))
					{
						func_123(0);
						HUD::HIDE_HUD_AND_RADAR_THIS_FRAME(unk_0x9B0761B4C3EB8BC7());
						func_539();
						func_533(uParam1);
					}
				}
			}
		}
	}
}

void func_229(var uParam0)
{
	int iVar0;
	
	if (!func_548())
	{
		return;
	}
	if (MISC::IS_BIT_SET(bLocal_90))
	{
		if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_ID()))
		{
			iVar0 = ENTITY::GET_ENTITY_HEALTH(bLocal_90);
			if ((iVar0 - iLocal_58) < 0)
			{
				func_123(0);
				HUD::HIDE_HUD_AND_RADAR_THIS_FRAME(unk_0x9B0761B4C3EB8BC7());
				func_539();
				func_533(uParam0);
			}
		}
	}
}

void func_230(var uParam0)
{
	int iVar0;
	
	if (!func_548())
	{
		return;
	}
	if (MISC::IS_BIT_SET(unk_0x9B0761B4C3EB8BC7()))
	{
		if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_ID()))
		{
			iVar0 = ENTITY::GET_ENTITY_HEALTH(unk_0x9B0761B4C3EB8BC7());
			if ((iVar0 - iLocal_57) < 0)
			{
				func_123(0);
				HUD::HIDE_HUD_AND_RADAR_THIS_FRAME(unk_0x9B0761B4C3EB8BC7());
				func_539();
				func_533(uParam0);
			}
		}
	}
}

void func_231(var uParam0)
{
	bool bVar0;
	struct<3> Var1;
	
	if (!func_548())
	{
		return;
	}
	if (MISC::IS_BIT_SET(unk_0x9B0761B4C3EB8BC7()))
	{
		if (SYSTEM::VDIST(unk_0x9B0761B4C3EB8BC7(), 0))
		{
			bVar0 = ENTITY::GET_ENTITY_MODEL(unk_0x9B0761B4C3EB8BC7(), 0);
			if (MISC::IS_BIT_SET(bVar0))
			{
				Var1 = { NETWORK::NETWORK_ARE_HANDLES_THE_SAME(bVar0, 1) };
				if (SYSTEM::VDIST2(Local_56, Var1) >= 4f)
				{
					func_123(0);
					HUD::HIDE_HUD_AND_RADAR_THIS_FRAME(unk_0x9B0761B4C3EB8BC7());
					func_539();
					func_533(uParam0);
				}
			}
		}
	}
}

void func_232()
{
	int iVar0;
	char* sVar1;
	void fVar2;
	var uVar3;
	int iVar4;
	var uVar5;
	var uVar6;
	int iVar7;
	
	if (!func_488(iLocal_49, 16))
	{
		if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_PLAYER_CAN_DO_DRIVE_BY(PLAYER::PLAYER_ID(), false);
		}
		func_480(&iLocal_49, 16);
	}
	if (SYSTEM::VDIST(unk_0x9B0761B4C3EB8BC7(), 0))
	{
		bLocal_93 = ENTITY::GET_ENTITY_MODEL(unk_0x9B0761B4C3EB8BC7(), 0);
		if (func_548())
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(bLocal_93))
			{
				VEHICLE::SET_VEHICLE_HANDBRAKE(bLocal_93, true);
				VEHICLE::SET_VEHICLE_LIGHTS(bLocal_93, 4);
				VEHICLE::SET_VEHICLE_INTERIORLIGHT(bLocal_93, true);
				VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(bLocal_93, false, 0);
			}
		}
		else
		{
			VEHICLE::SET_VEHICLE_HANDBRAKE(bLocal_93, true);
			VEHICLE::SET_VEHICLE_LIGHTS(bLocal_93, 4);
			VEHICLE::SET_VEHICLE_INTERIORLIGHT(bLocal_93, true);
		}
		if (!func_378() || !unk_0xE0B3BC41DDA88DF0(bLocal_90, bLocal_93, 0f))
		{
			func_471(0);
			return;
		}
	}
	else
	{
		func_471(0);
		return;
	}
	func_213(0);
	if ((!VEHICLE::IS_VEHICLE_STOPPED(bLocal_93) && PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) && !func_488(iLocal_49, 1024))
	{
		iLocal_286 = 7;
		func_376(1, -1);
		AUDIO::REQUEST_SCRIPT_AUDIO_BANK("SCRIPT\HUD_321_GO", true, -1);
		iLocal_292 = 0;
		func_489("WAITING FOR VEHICLE TO STOP ");
		return;
	}
	iVar0 = 0;
	unk_0x4CB4237D8858ADA6(2);
	switch (iLocal_292)
	{
		case 0:
		case 1:
			if (func_548())
			{
				if (SYSTEM::VDIST(unk_0x9B0761B4C3EB8BC7(), 0))
				{
					if (MISC::IS_BIT_SET(ENTITY::GET_ENTITY_MODEL(unk_0x9B0761B4C3EB8BC7(), 0)))
					{
						if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(ENTITY::GET_ENTITY_MODEL(unk_0x9B0761B4C3EB8BC7(), 0)))
						{
							if (MISC::IS_MINIGAME_IN_PROGRESS(ENTITY::GET_ENTITY_MODEL(unk_0x9B0761B4C3EB8BC7(), 0), -1, 0) == unk_0x9B0761B4C3EB8BC7())
							{
								if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(ENTITY::GET_ENTITY_MODEL(unk_0x9B0761B4C3EB8BC7(), 0)))
								{
									if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(ENTITY::GET_ENTITY_MODEL(unk_0x9B0761B4C3EB8BC7(), 0)))
									{
										ENTITY::SET_ENTITY_AS_MISSION_ENTITY(ENTITY::GET_ENTITY_MODEL(unk_0x9B0761B4C3EB8BC7(), 0), false, false);
									}
								}
								else
								{
									NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(ENTITY::GET_ENTITY_MODEL(unk_0x9B0761B4C3EB8BC7(), 0));
									return;
								}
							}
						}
						else
						{
							NETWORK::NETWORK_REGISTER_ENTITY_AS_NETWORKED(ENTITY::GET_ENTITY_MODEL(unk_0x9B0761B4C3EB8BC7(), 0));
							return;
						}
					}
				}
			}
			func_375();
			func_374();
			func_198();
			if (func_371())
			{
				func_131("PROSTITUTES_DRIVE_SCENE");
				func_87("PROSTITUTES_PARKED_SCENE");
				func_370();
				if (func_548())
				{
					func_196(2);
					if (func_548())
					{
						if (SYSTEM::VDIST(unk_0x9B0761B4C3EB8BC7(), 0))
						{
							if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(ENTITY::GET_ENTITY_MODEL(unk_0x9B0761B4C3EB8BC7(), 0)))
							{
								if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(ENTITY::GET_ENTITY_MODEL(unk_0x9B0761B4C3EB8BC7(), 0)))
								{
									VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_ALL_PLAYERS(ENTITY::GET_ENTITY_MODEL(unk_0x9B0761B4C3EB8BC7(), 0), true);
									VEHICLE::SET_VEHICLE_DOORS_LOCKED(ENTITY::GET_ENTITY_MODEL(unk_0x9B0761B4C3EB8BC7(), 0), 4);
									VEHICLE::_0x2311DD7159F00582(ENTITY::GET_ENTITY_MODEL(unk_0x9B0761B4C3EB8BC7(), 0), true);
								}
							}
						}
					}
				}
				PED::RESET_PED_IN_VEHICLE_CONTEXT(bLocal_90);
				iLocal_292 = 2;
			}
			break;
		
		case 2:
			if (func_369(iLocal_295))
			{
				func_368(&iLocal_295);
				func_5(&iLocal_73, 2);
			}
			func_366(bLocal_90, 0);
			if (func_366(unk_0x9B0761B4C3EB8BC7(), 1))
			{
				if (func_364(&sVar1, 0))
				{
					fLocal_48 = CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE();
					fVar2 = STATS::_PLAYSTATS_ARENA_WARS_ENDED();
					if (SYSTEM::VDIST(unk_0x9B0761B4C3EB8BC7(), 1))
					{
						if (fVar2 != 4 && fLocal_48 == 4)
						{
							CAM::SET_FOLLOW_PED_CAM_VIEW_MODE(4);
						}
						else if (fVar2 == 4 && fLocal_48 != 4)
						{
							CAM::SET_FOLLOW_PED_CAM_VIEW_MODE(1);
						}
					}
					func_352();
					iLocal_292 = 3;
					func_489("Moving to SERVICE_MENU_CHOOSE");
				}
				else
				{
					func_351(&sVar1, -1);
					func_40(&iLocal_107);
					bLocal_288 = 3;
					iLocal_292 = 4;
				}
			}
			break;
		
		case 3:
			if (HUD::DISABLE_FRONTEND_THIS_FRAME())
			{
				return;
			}
			HUD::SHOW_HUD_COMPONENT_THIS_FRAME(3);
			func_332();
			func_297(1, -1, 1, 0, 1, -1082130432, 0, 0, -1);
			func_296(&uVar3, &iVar4, &uVar5, &uVar6, 0);
			MONEY::NETWORK_MONEY_CAN_BET(0, 48, true);
			PAD::SET_INPUT_EXCLUSIVE(2, 187);
			PAD::SET_INPUT_EXCLUSIVE(2, 188);
			PAD::SET_INPUT_EXCLUSIVE(2, 201);
			iVar0 = 0;
			if (ENTITY::GET_ENTITY_HEADING())
			{
				if (unk_0x3430895AB97DE4F3(2))
				{
					MONEY::NETWORK_MONEY_CAN_BET(0, true, true);
					MONEY::NETWORK_MONEY_CAN_BET(0, 2, true);
					PAD::ENABLE_CONTROL_ACTION(0, 237, true);
					PAD::ENABLE_CONTROL_ACTION(0, 238, true);
					PAD::ENABLE_CONTROL_ACTION(0, 241, true);
					PAD::ENABLE_CONTROL_ACTION(0, 242, true);
					func_292(0, 0, 0, 1);
					func_291(0, -1, 1);
					if (func_290())
					{
						if (Global_4269756 != iLocal_68)
						{
							DATAFILE::UGC_UPDATE_CONTENT(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
							iLocal_68 = Global_4269756;
							func_489("Player highlighted a new option using the mouse!");
						}
						else
						{
							iVar0 = 1;
						}
					}
				}
			}
			if (((PAD::IS_DISABLED_CONTROL_PRESSED(2, 187) || (HUD::_0x5BFF36D6ED83E0AE(2) && PAD::IS_DISABLED_CONTROL_PRESSED(2, 242))) || (HUD::_0x5BFF36D6ED83E0AE(2) && PAD::IS_CONTROL_JUST_PRESSED(0, 33))) || (((ENTITY::GET_ENTITY_HEADING() && !HUD::_0x5BFF36D6ED83E0AE(2)) && iVar4 > 100) && (MISC::GET_GAME_TIMER() - iLocal_87) > 300))
			{
				DATAFILE::UGC_UPDATE_CONTENT(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
				func_489("DOWN pressed!");
				if (iLocal_68 < iLocal_69)
				{
					iLocal_68++;
				}
				else
				{
					iLocal_68 = 0;
				}
				iLocal_87 = MISC::GET_GAME_TIMER();
			}
			else if (((PAD::IS_DISABLED_CONTROL_PRESSED(2, 188) || (HUD::_0x5BFF36D6ED83E0AE(2) && PAD::IS_DISABLED_CONTROL_PRESSED(2, 241))) || (HUD::_0x5BFF36D6ED83E0AE(2) && PAD::IS_CONTROL_JUST_PRESSED(0, 32))) || (((ENTITY::GET_ENTITY_HEADING() && !HUD::_0x5BFF36D6ED83E0AE(2)) && iVar4 < -100) && (MISC::GET_GAME_TIMER() - iLocal_87) > 300))
			{
				DATAFILE::UGC_UPDATE_CONTENT(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
				func_489("UP pressed!");
				if (iLocal_68 > 0)
				{
					iLocal_68 = (iLocal_68 - 1);
				}
				else
				{
					iLocal_68 = iLocal_69;
				}
				iLocal_87 = MISC::GET_GAME_TIMER();
			}
			else if (STATS::STAT_GET_MASKED_INT(2, 201) || iVar0 == 1)
			{
				DATAFILE::UGC_UPDATE_CONTENT(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
				unk_0x4CB4237D8858ADA6(3);
				func_286();
				ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(unk_0x9B0761B4C3EB8BC7());
				iLocal_292 = 4;
			}
			func_285(iLocal_68, 1, 1);
			break;
		
		case 4:
			iVar7 = PED::GET_PED_MONEY(bLocal_90);
			if (bLocal_288 == 3)
			{
				func_376(1, -1);
				func_284();
				func_283(0);
				iLocal_62 = MISC::GET_GAME_TIMER();
				func_131("PROSTITUTES_PARKED_SCENE");
				func_489("eCurrentProstituteState = prostitute_REFUSED ");
				iLocal_286 = 6;
				if (iLocal_70 > 0)
				{
					if (func_127(bLocal_90))
					{
						func_126();
					}
					else
					{
						func_471(0);
					}
					return;
				}
				else
				{
					if (func_278() >= 20)
					{
						iVar7 += 20;
						func_234(20);
						PED::SET_PED_MONEY(bLocal_90, iVar7);
					}
					func_471(1);
					return;
				}
			}
			if (!STREAMING::HAS_ANIM_DICT_LOADED(func_50(unk_0x9B0761B4C3EB8BC7(), 0, 0)))
			{
			}
			else
			{
				func_376(1, -1);
				func_284();
				if (MISC::IS_AUSSIE_VERSION())
				{
					func_480(&iLocal_49, 1024);
					bLocal_288 = 3;
					func_489("AUSSIE VERSION IS TRUE!?!?!");
				}
				if (bLocal_288 != 3)
				{
					if (func_278() > func_233(bLocal_288))
					{
						func_234(func_233(bLocal_288));
						iVar7 = (iVar7 + func_233(bLocal_288));
					}
					func_41(&iLocal_101, (14f - 4f));
					func_489("eCurrentProstituteState = PROSTITUTE_CUSTOMER_GETTING_SERVICED ");
					func_128();
					iLocal_286 = 11;
				}
				PED::SET_PED_MONEY(bLocal_90, iVar7);
				iLocal_62 = MISC::GET_GAME_TIMER();
			}
			break;
	}
}

int func_233(int iParam0)
{
	if (MISC::IS_AUSSIE_VERSION())
	{
		if (iParam0 == 0)
		{
			return 70;
		}
		else if (iParam0 == 1)
		{
			return 70;
		}
		else if (iParam0 == 2)
		{
			return 70;
		}
		else
		{
			return 0;
		}
	}
	if (iParam0 == 0)
	{
		return 50;
	}
	if (iParam0 == 1)
	{
		return 70;
	}
	if (iParam0 == 2)
	{
		return 100;
	}
	return 0;
}

void func_234(int iParam0)
{
	var uVar0;
	
	if (!func_548())
	{
		func_248(func_23(), 1, iParam0);
	}
	else if (!func_247())
	{
		MONEY::NETWORK_SPENT_PROSTITUTES(iParam0, false, false);
	}
	else
	{
		func_235(-1359375127, iParam0, &uVar0, 0, 0, 0);
	}
}

void func_235(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	if (!func_247())
	{
		return;
	}
	iVar0 = 1;
	if (bParam4)
	{
		iVar0 = 4;
	}
	else if (bParam3)
	{
		iVar0 = 2;
	}
	else if (bParam5)
	{
		iVar0 = 8;
	}
	switch (iParam0)
	{
		case -1645229221:
		case -585718395:
		case -1359375127:
		case 454359403:
		case -982394051:
		case 1643659499:
		case -2072289654:
		case 650665123:
		case 1654961868:
		case -876847842:
		case 68030260:
		case -2122299283:
		case 366672791:
		case 283351220:
		case 291576838:
		case 1182673174:
		case -516219046:
		case 1036455748:
		case 277665518:
		case 2043854386:
		case 1839532116:
		case 1022400740:
		case 1940862352:
		case -1389227906:
		case 711665950:
		case 1704445500:
		case 1515774909:
		case 1173654533:
		case -899802304:
		case -663944335:
		case 1208553146:
		case -613221010:
		case -671062876:
		case -407201236:
		case -754024203:
		case -1885444887:
		case 1931729587:
		case 1064954035:
		case -180141073:
		case 2131324797:
		case 1612072658:
		case -517447402:
		case 1948102096:
		case 1108628223:
		case -1834046564:
		case -1239008812:
		case -222363842:
		case -1276678868:
		case 1564537328:
		case -96593501:
		case 742499889:
		case 2050093329:
		case -1752488069:
		case 634375935:
		case 1850983186:
		case 763367758:
		case 1941570214:
		case 665109499:
		case -1330755006:
		case 1976384368:
		case 268924934:
		case 1869490922:
		case -336803850:
		case -1412692765:
		case 618167454:
		case 980623936:
		case 437291904:
		case -135813048:
		case -930104477:
		case -1420909320:
		case -1733398043:
		case -1892760262:
		case -1545737048:
		case 2039302543:
		case 402505853:
		case -1143510182:
		case 1678112166:
		case 837955913:
		case -1532467144:
		case 1815541181:
			if (iParam1 > 0 || Global_262145.f_27657)
			{
				func_236(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case -31156877:
		case -1027218631:
		case -1398318418:
		case 1652884147:
		case -57868256:
		case -1216489292:
		case -46622315:
		case -352356931:
		case -990286235:
		case 563463121:
		case 1734805203:
		case 941287179:
		case -1186079845:
		case -1985150258:
		case -1127021384:
		case -109201286:
		case 312105838:
		case 1982688246:
		case -661030418:
		case 1301046174:
		case -1586170317:
		case 393059668:
		case 23796958:
		case -1077156170:
		case 1780666425:
		case -2043695058:
		case -1922554349:
		case 1287308202:
		case 691372038:
		case 1480707108:
		case 1512499951:
		case 562283735:
		case -154732333:
		case -1362660491:
		case 645708827:
		case 767907967:
		case -1970151306:
		case 718859568:
		case -1955564771:
		case 892388724:
		case -1426920838:
		case 1349151477:
		case 1620609399:
		case 1961641934:
		case 210955503:
		case -59668082:
		case 1736933716:
		case -1468524125:
		case 111573502:
		case 1525644423:
		case 968073639:
		case 1577781788:
		case -934465332:
		case -1194253122:
		case -212607085:
		case -815546555:
		case 1048226110:
		case 569170531:
		case -856006867:
		case 848090538:
		case -47546905:
		case -293060240:
		case 463142405:
		case 1550217370:
		case -101307780:
		case -664597565:
		case 599804707:
		case -327918414:
		case 550898518:
		case 835976347:
		case 1347433368:
		case 1052472386:
		case -2130199671:
		case -1227654538:
		case 1864522104:
		case 215608230:
		case -876012764:
		case -722894325:
		case 1407278493:
		case -1579394494:
		case -27443911:
		case 1179783540:
		case 923419301:
		case -308826175:
		case 603298940:
		case -12619854:
		case -311112675:
		case 870439158:
		case -974288740:
		case -4138654:
		case -1180954122:
		case -1918051016:
		case 844330594:
		case 1934825517:
		case 1852024236:
		case 2099238988:
		case 1952643559:
		case -1172900789:
		case -2015399333:
		case -1574795641:
		case -961034881:
		case 1135468152:
		case 1265272476:
		case -634726636:
		case 696556762:
		case 403506509:
		case -883876414:
		case -1064150715:
		case -1387253055:
		case -716963152:
		case 1138089938:
		case -561012053:
			func_236(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
	switch (iParam0)
	{
		case -1342064661:
		case -1693570755:
		case 1868043300:
		case -697248883:
		case -1295545795:
		case 914079366:
		case 395122350:
		case -331981076:
		case 1671535231:
		case -1896606724:
		case -1291433573:
		case 538631715:
		case 133782822:
		case 2081885153:
		case -1314365345:
		case 1322977732:
		case 396623013:
		case 1981664462:
		case -1921250821:
		case -1370731547:
		case 1683798242:
		case -910968288:
			if (iParam1 > 0 || Global_262145.f_27657)
			{
				func_236(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case 1240683675:
		case 1241904665:
		case -1100963799:
		case -494565059:
		case 827308208:
		case -1857685192:
		case 1698417709:
		case 1057653594:
		case 1810506918:
		case 451427308:
		case 824622151:
		case 1253978276:
		case -1576080766:
		case 1508411869:
		case 1428501742:
		case -1918967151:
		case 1261538664:
		case 1180397655:
		case 1414674366:
		case 261460130:
		case -2027658376:
		case -2017925037:
		case 1668610896:
		case -2032529561:
		case -1224479447:
		case -319306689:
		case -466527264:
		case 1925965142:
		case 592152676:
		case 2035612943:
		case 1568659720:
		case 1220095570:
		case 2050320631:
		case 592672421:
		case 1775876058:
		case -842062976:
		case -518651910:
		case 14658715:
		case -604793592:
		case -823426392:
		case -1401862980:
		case -173354274:
		case 409533976:
		case -1472522337:
		case 542574408:
		case -1261799063:
		case 784631574:
		case -2027479156:
		case -837690641:
			func_236(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_236(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!func_247())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_140()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING())
		{
			Global_4265553 = 1;
			return 0;
		}
		if (Global_2463410)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_4265554 = 1;
				return 0;
			}
		}
	}
	bVar3 = false;
	iVar2 = 0;
	while (iVar2 < 15)
	{
		if (Global_4264051[iVar2 /*85*/].f_66.f_2 == 0)
		{
			bVar3 = true;
		}
		iVar2++;
	}
	if (!bVar3)
	{
		return 0;
	}
	*uParam0 = 15;
	iVar4 = 2147483647;
	if ((bVar0 || iVar1) || PED::IS_SYNCHRONIZED_SCENE_RUNNING(&iVar4, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if ((bVar0 || iVar1) || NETSHOPPING::NET_GAMESERVER_CHECKOUT_START(iVar4))
		{
			*uParam0 = func_243(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
			if (iVar1 && !bVar0)
			{
			}
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_4264051[*uParam0 /*85*/].f_66.f_8 = 1;
					Global_4264051[*uParam0 /*85*/].f_66.f_12 = 1;
				}
			}
			Global_4265538 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_4265552 = 1;
			Global_4265555 = iParam4;
			Global_4265557 = iParam3;
			Global_4265558 = 1;
			Global_4265556 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_4265555 = iParam4;
			Global_4265557 = iParam3;
			Global_4265558 = 1;
			Global_4265556 = iParam5;
		}
		bVar5 = false;
		if (bVar5)
		{
			func_242(1, iParam4);
			Global_4265552 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_237(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_237(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			unk_0xBE20AB8238688965(&(Global_2425869[PLAYER::PLAYER_ID() /*443*/].f_126.f_71), false);
			break;
	}
	if (iParam0 != -1)
	{
		func_238(iParam0);
	}
}

void func_238(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_247())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_241(iParam0))
		{
			if (!bVar0)
			{
				NETSHOPPING::_NET_GAMESERVER_BASKET_DELETE();
			}
		}
		else if (!bVar0)
		{
			NETSHOPPING::NET_GAMESERVER_END_SERVICE(Global_4264051[iParam0 /*85*/].f_66);
		}
		func_239(&(Global_4264051[iParam0 /*85*/]));
	}
}

void func_239(var uParam0)
{
	uParam0->f_66 = 0;
	uParam0->f_66 = 2147483647;
	uParam0->f_66.f_1 = 0;
	uParam0->f_66.f_2 = 0;
	uParam0->f_66.f_3 = -1593119440;
	uParam0->f_66.f_4 = -2085313189;
	uParam0->f_66.f_5 = 0;
	uParam0->f_66.f_6 = 1227573907;
	uParam0->f_66.f_7 = -1161833819;
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_13 = 0;
	uParam0->f_2 = 0;
	func_240(&(uParam0->f_14));
	func_240(&(uParam0->f_14.f_13));
	StringCopy(&(uParam0->f_14.f_26), "", 32);
	StringCopy(&(uParam0->f_14.f_34), "", 24);
	StringCopy(&(uParam0->f_14.f_40), "", 16);
	StringCopy(&(uParam0->f_14.f_44), "", 32);
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_66.f_8 = 0;
	uParam0->f_66.f_9 = 0;
	uParam0->f_66.f_10 = 0;
	uParam0->f_66.f_11 = 0;
	uParam0->f_66.f_13 = 0;
	uParam0->f_66.f_12 = 0;
	uParam0->f_66.f_14 = 0;
	uParam0->f_66.f_15 = 0;
	uParam0->f_66.f_16 = 0;
	uParam0->f_66.f_18 = 0;
}

void func_240(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 0;
}

int func_241(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4264051[iParam0 /*85*/].f_66.f_5 == 1;
	}
	return 0;
}

void func_242(int iParam0, var uParam1)
{
	Global_2464590 = uParam1;
	Global_2464589 = iParam0;
}

int func_243(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, var uParam5, bool bParam6, var uParam7, var uParam8, int iParam9, int iParam10)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (Global_4264051[iVar0 /*85*/].f_66.f_2 == 0)
		{
			if (!func_247())
			{
				iParam0 = iVar0 + 900;
			}
			Global_4264051[iVar0 /*85*/].f_66.f_2 = 1;
			Global_4264051[iVar0 /*85*/].f_66.f_1 = uParam5;
			Global_4264051[iVar0 /*85*/].f_66.f_3 = iParam1;
			Global_4264051[iVar0 /*85*/].f_66.f_4 = uParam2;
			Global_4264051[iVar0 /*85*/].f_66.f_7 = uParam3;
			Global_4264051[iVar0 /*85*/].f_66.f_5 = 0;
			Global_4264051[iVar0 /*85*/].f_66 = iParam0;
			Global_4264051[iVar0 /*85*/].f_66.f_6 = iParam4;
			Global_4264051[iVar0 /*85*/].f_66.f_11 = uParam8;
			Global_4264051[iVar0 /*85*/].f_66.f_10 = uParam7;
			Global_4264051[iVar0 /*85*/].f_66.f_13 = iParam9;
			Global_4264051[iVar0 /*85*/].f_66.f_12 = 0;
			Global_4264051[iVar0 /*85*/].f_66.f_14 = MISC::GET_FRAME_COUNT();
			Global_4264051[iVar0 /*85*/].f_66.f_18 = 0;
			Global_4265538 = 0;
			if (bParam6)
			{
				Global_4264051[iVar0 /*85*/].f_66.f_5 = 1;
			}
			if (iParam1 == -1135378931 && iParam10)
			{
				func_244(Global_4264051[iVar0 /*85*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_244(struct<67> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19)
{
	struct<3> Var0;
	int iVar1;
	
	if (iParam19 < 0)
	{
		return;
	}
	Var0.f_2 = 2147483647;
	Var0.x = 1191422458;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = { Param0.f_66 };
	Var0.f_2.f_33 = iParam19;
	iVar1 = func_246(Var0.f_1);
	if ((Global_262145.f_23581 && !Global_262145.f_23582) && !Global_262145.f_23583)
	{
		return;
	}
	if (!iVar1 == 0)
	{
		func_245();
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Var0, 36, iVar1);
	}
}

void func_245()
{
	SCRIPT::REQUEST_SCRIPT("AM_ARENA_SHP");
}

var func_246(bool bParam0)
{
	var uVar0;
	
	if (iParam0 != -1)
	{
		unk_0xBE20AB8238688965(&uVar0, iParam0);
	}
	return uVar0;
}

int func_247()
{
	if (ENTITY::GET_ENTITY_HEADING())
	{
		return NETSHOPPING::_NET_GAMESERVER_USE_SERVER_TRANSACTIONS();
	}
	return 0;
}

int func_248(int iParam0, int iParam1, int iParam2)
{
	if (func_277(iParam0) == 3)
	{
		return 0;
	}
	if (func_277(iParam0) == 4)
	{
		return 0;
	}
	return func_249(func_277(iParam0), 0, iParam1, iParam2, 0);
}

int func_249(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_276();
	if (iParam3 < 1)
	{
		return 0;
	}
	fVar0 = 1f;
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					func_275(99, 1);
					func_274(joaat("SP0_MONEY_TOTAL_SPENT"), iParam3);
					break;
				
				case 1:
					func_274(joaat("SP1_MONEY_TOTAL_SPENT"), iParam3);
					break;
				
				case 2:
					func_274(joaat("SP2_MONEY_TOTAL_SPENT"), iParam3);
					break;
			}
			func_260(0);
			switch (iParam2)
			{
				case 127:
				case 129:
				case 125:
				case 126:
				case 128:
					if (func_256(5))
					{
						fVar0 = 0.9f;
						bVar1 = 5;
					}
					break;
				
				case 63:
				case 64:
				case 65:
				case 66:
				case 67:
				case 68:
					switch (iParam0)
					{
						case 0:
							func_274(joaat("SP0_MONEY_SPENT_ON_TATTOOS"), iParam3);
							break;
						
						case 1:
							func_274(joaat("SP1_MONEY_SPENT_ON_TATTOOS"), iParam3);
							break;
						
						case 2:
							func_274(joaat("SP2_MONEY_SPENT_ON_TATTOOS"), iParam3);
							break;
					}
					if (func_256(1))
					{
						fVar0 = 0f;
						bVar1 = true;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_274(joaat("SP0_MONEY_SPENT_ON_TAXIS"), iParam3);
							break;
						
						case 1:
							func_274(joaat("SP1_MONEY_SPENT_ON_TAXIS"), iParam3);
							break;
						
						case 2:
							func_274(joaat("SP2_MONEY_SPENT_ON_TAXIS"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_274(joaat("SP0_MONEY_SPENT_IN_STRIP_CLUBS"), iParam3);
							break;
						
						case 1:
							func_274(joaat("SP1_MONEY_SPENT_IN_STRIP_CLUBS"), iParam3);
							break;
						
						case 2:
							func_274(joaat("SP2_MONEY_SPENT_IN_STRIP_CLUBS"), iParam3);
							break;
					}
					break;
				
				case 99:
				case 100:
				case 101:
				case 102:
				case 104:
				case 105:
				case 106:
				case 107:
				case 108:
				case 109:
				case 110:
				case 111:
				case 112:
				case 113:
					switch (iParam0)
					{
						case 0:
							func_274(joaat("SP0_MONEY_SPENT_PROPERTY"), iParam3);
							break;
						
						case 1:
							func_274(joaat("SP1_MONEY_SPENT_PROPERTY"), iParam3);
							break;
						
						case 2:
							func_274(joaat("SP2_MONEY_SPENT_PROPERTY"), iParam3);
							break;
					}
					break;
				
				default:
					switch (SCRIPT::GET_HASH_OF_THIS_SCRIPT_NAME())
					{
						case joaat("clothes_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_274(joaat("SP0_MONEY_SPENT_IN_CLOTHES"), iParam3);
									break;
								
								case 1:
									func_274(joaat("SP1_MONEY_SPENT_IN_CLOTHES"), iParam3);
									break;
								
								case 2:
									func_274(joaat("SP2_MONEY_SPENT_IN_CLOTHES"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_274(joaat("SP0_MONEY_SPENT_ON_HAIRDOS"), iParam3);
									break;
								
								case 1:
									func_274(joaat("SP1_MONEY_SPENT_ON_HAIRDOS"), iParam3);
									break;
								
								case 2:
									func_274(joaat("SP2_MONEY_SPENT_ON_HAIRDOS"), iParam3);
									break;
							}
							if (func_256(0))
							{
								fVar0 = 0f;
								bVar1 = false;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_274(joaat("SP0_MONEY_SPENT_IN_BUYING_GUNS"), iParam3);
									break;
								
								case 1:
									func_274(joaat("SP1_MONEY_SPENT_IN_BUYING_GUNS"), iParam3);
									break;
								
								case 2:
									func_274(joaat("SP2_MONEY_SPENT_IN_BUYING_GUNS"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_274(joaat("SP0_MONEY_SPENT_CAR_MODS"), iParam3);
									break;
								
								case 1:
									func_274(joaat("SP1_MONEY_SPENT_CAR_MODS"), iParam3);
									break;
								
								case 2:
									func_274(joaat("SP2_MONEY_SPENT_CAR_MODS"), iParam3);
									break;
							}
							func_255(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_275(95, iParam3);
					break;
				
				case 1:
					func_275(97, iParam3);
					break;
				
				case 2:
					func_275(96, iParam3);
					break;
			}
			func_275(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = SYSTEM::FLOOR((fVar0 * SYSTEM::TO_FLOAT(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_252(bVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_252(bVar1);
	}
	iVar5 = (Global_58891[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_58891[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_58891[iVar2] = 2147483647;
				}
				else
				{
					Global_58891[iVar2] = (Global_58891[iVar2] + iParam3);
				}
			}
			switch (iParam0)
			{
				case 0:
					func_274(joaat("SP0_TOTAL_CASH_EARNED"), iParam3);
					break;
				
				case 1:
					func_274(joaat("SP1_TOTAL_CASH_EARNED"), iParam3);
					break;
				
				case 2:
					func_274(joaat("SP2_TOTAL_CASH_EARNED"), iParam3);
					break;
			}
			break;
		
		case 0:
			if (!bParam4)
			{
				if ((Global_58891[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_58891[iVar2];
			Global_58891[iVar2] = (Global_58891[iVar2] - iParam3);
			if (bParam4)
			{
				iVar4 = iVar3;
			}
			break;
	}
	if (iParam2 == 1)
	{
		if (iVar4 > 20)
		{
		}
	}
	else
	{
		Global_111858.f_20560.f_233[iVar2 /*69*/].f_2[Global_111858.f_20560.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_111858.f_20560.f_233[iVar2 /*69*/].f_2[Global_111858.f_20560.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_111858.f_20560.f_233[iVar2 /*69*/].f_2[Global_111858.f_20560.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_111858.f_20560.f_233[iVar2 /*69*/]++;
		Global_111858.f_20560.f_233[iVar2 /*69*/].f_1++;
		if (Global_111858.f_20560.f_233[iVar2 /*69*/].f_1 > 10)
		{
			Global_111858.f_20560.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_251(iParam0);
	if (Global_41631 == 15)
	{
		func_250(0);
	}
	return 1;
}

void func_250(bool bParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = 0;
		while (iVar1 < 11)
		{
			Global_111858.f_20560.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_111858.f_20560.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_111858.f_20560.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_111858.f_20560.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_111858.f_20560.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_111858.f_20560.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_58899[iVar0 /*3*/][0] = Global_111858.f_20560[iVar0];
		Global_58899.f_31[iVar0 /*3*/][0] = Global_111858.f_20560.f_11[iVar0];
		Global_58899.f_62[iVar0 /*3*/][0] = Global_111858.f_20560.f_22[iVar0];
		Global_58899.f_93[iVar0 /*3*/][0] = Global_111858.f_20560.f_33[iVar0];
		Global_58899.f_124[iVar0 /*3*/][0] = Global_111858.f_20560.f_44[iVar0];
		Global_58899.f_155[iVar0 /*3*/][0] = Global_111858.f_20560.f_55[iVar0];
		Global_58899.f_186[iVar0 /*3*/][0] = Global_111858.f_20560.f_66[iVar0];
		Global_58899.f_217[iVar0 /*3*/][0] = Global_111858.f_20560.f_77[iVar0];
		Global_58899.f_248[iVar0 /*3*/][0] = Global_111858.f_20560.f_88[iVar0];
		if (!bParam0)
		{
			Global_58899[iVar0 /*3*/][1] = Global_111858.f_20560[iVar0];
			Global_58899.f_31[iVar0 /*3*/][1] = Global_111858.f_20560.f_11[iVar0];
			Global_58899.f_62[iVar0 /*3*/][1] = Global_111858.f_20560.f_22[iVar0];
			Global_58899.f_93[iVar0 /*3*/][1] = Global_111858.f_20560.f_33[iVar0];
			Global_58899.f_124[iVar0 /*3*/][1] = Global_111858.f_20560.f_44[iVar0];
			Global_58899.f_155[iVar0 /*3*/][1] = Global_111858.f_20560.f_55[iVar0];
			Global_58899.f_186[iVar0 /*3*/][1] = Global_111858.f_20560.f_66[iVar0];
			Global_58899.f_217[iVar0 /*3*/][1] = Global_111858.f_20560.f_77[iVar0];
			Global_58899.f_248[iVar0 /*3*/][1] = Global_111858.f_20560.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_251(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_58891[iParam0];
	switch (iParam0)
	{
		case 0:
			NETWORK::NETWORK_HAS_SOCIAL_CLUB_ACCOUNT(joaat("SP0_TOTAL_CASH"), iVar0, 1);
			break;
		
		case 1:
			NETWORK::NETWORK_HAS_SOCIAL_CLUB_ACCOUNT(joaat("SP1_TOTAL_CASH"), iVar0, 1);
			break;
		
		case 2:
			NETWORK::NETWORK_HAS_SOCIAL_CLUB_ACCOUNT(joaat("SP2_TOTAL_CASH"), iVar0, 1);
			break;
	}
}

void func_252(bool bParam0)
{
	bool bVar0;
	char cVar1[64];
	
	if (bParam0 == 8)
	{
		func_155(129, 0, -1, 1);
		return;
	}
	if (bParam0 == 9)
	{
		func_155(135, 0, -1, 1);
		return;
	}
	if (bParam0 == 10)
	{
		func_155(136, 0, -1, 1);
		return;
	}
	if (bParam0 == 11)
	{
		func_155(137, 0, -1, 1);
		return;
	}
	if (bParam0 == 12)
	{
		func_138(8270, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 13)
	{
		func_138(8271, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 14)
	{
		func_138(8272, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 15)
	{
		func_138(8273, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 16)
	{
		func_138(8274, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 17)
	{
		func_138(8275, 0, -1, 1, 0);
		return;
	}
	bVar0 = false;
	if (!MISC::SET_BIT())
	{
		if (unk_0xCE990E643CD9D0E5(Global_111858.f_20560.f_471, bParam0))
		{
			bVar0 = true;
			VEHICLE::IS_VEHICLE_DRIVEABLE(&(Global_111858.f_20560.f_471), bParam0);
		}
	}
	else if (unk_0xCE990E643CD9D0E5(Global_111858.f_20560.f_471, bParam0) || unk_0xCE990E643CD9D0E5(Global_2097152[func_254() /*10931*/].f_6175.f_10, bParam0))
	{
		bVar0 = true;
		VEHICLE::IS_VEHICLE_DRIVEABLE(&(Global_111858.f_20560.f_471), bParam0);
		VEHICLE::IS_VEHICLE_DRIVEABLE(&(Global_2097152[func_254() /*10931*/].f_6175.f_10), bParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("COUP_RED");
		HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(func_253(bParam0));
		HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar1, &cVar1, true, 0, "", 0);
	}
}

char* func_253(bool bParam0)
{
	switch (bParam0)
	{
		case 0:
			return "COUP_HAIRC";
		
		case 1:
			return "COUP_TATTOO";
		
		case 2:
			return "COUP_WARSTOCK";
		
		case 3:
			return "COUP_MOSPORT";
		
		case 4:
			return "COUP_ELITAS";
		
		case 5:
			return "COUP_MEDSPENS";
		
		case 6:
			return "COUP_SPRUNK";
		
		case 7:
			return "COUP_RESPRAY";
		
		case 8:
			return "COUP_XMAS2017";
		
		case 9:
			return "COUP_CAR_XMAS2018";
		
		case 10:
			return "COUP_HELI_XMAS2018";
		
		case 11:
			return "COUP_CAR2_XMAS2018";
		
		case 12:
			return "COUP_CAS_ELITAS";
		
		case 13:
			return "COUP_CAS_DOCKTEASE";
		
		case 14:
			return "COUP_CAS_MOSPORT";
		
		case 15:
			return "COUP_CAS_SSASA";
		
		case 16:
			return "COUP_CAS_WARSTOCK";
		
		case 17:
			return "COUP_CAS_PANDM";
		
		default:
	}
	return "";
}

int func_254()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_255(int iParam0)
{
	func_275(93, iParam0);
	func_275(29, iParam0);
	func_275(30, iParam0);
}

bool func_256(bool bParam0)
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
	int iVar10;
	int iVar11;
	
	if (iParam0 == 8)
	{
		return func_257(129, -1, -1);
	}
	if (iParam0 == 9)
	{
		return func_257(135, -1, -1);
	}
	if (iParam0 == 10)
	{
		return func_257(136, -1, -1);
	}
	if (iParam0 == 11)
	{
		return func_257(137, -1, -1);
	}
	if (iParam0 == 12)
	{
		iVar0 = unk_0x5A002C4821A13338();
		iVar1 = func_141(8270, -1, 0);
		if (iVar1 == 0 || iVar0 >= iVar1)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 13)
	{
		iVar2 = unk_0x5A002C4821A13338();
		iVar3 = func_141(8271, -1, 0);
		if (iVar3 == 0 || iVar2 >= iVar3)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 14)
	{
		iVar4 = unk_0x5A002C4821A13338();
		iVar5 = func_141(8272, -1, 0);
		if (iVar5 == 0 || iVar4 >= iVar5)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 15)
	{
		iVar6 = unk_0x5A002C4821A13338();
		iVar7 = func_141(8273, -1, 0);
		if (iVar7 == 0 || iVar6 >= iVar7)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 16)
	{
		iVar8 = unk_0x5A002C4821A13338();
		iVar9 = func_141(8274, -1, 0);
		if (iVar9 == 0 || iVar8 >= iVar9)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 17)
	{
		iVar10 = unk_0x5A002C4821A13338();
		iVar11 = func_141(8275, -1, 0);
		if (iVar11 == 0 || iVar10 >= iVar11)
		{
			return 0;
		}
		return 1;
	}
	if (!MISC::SET_BIT())
	{
		return unk_0xCE990E643CD9D0E5(Global_111858.f_20560.f_471, iParam0);
	}
	return unk_0xCE990E643CD9D0E5(Global_2097152[func_254() /*10931*/].f_6175.f_10, bParam0);
}

bool func_257(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	bVar0 = false;
	if (iParam1 == -1)
	{
		iParam1 = func_140();
	}
	iVar1 = func_259(iParam0, iParam1);
	iVar2 = func_258(iParam0);
	if (0 != iVar1)
	{
		bVar0 = DECORATOR::DECOR_IS_REGISTERED_AS_TYPE(iVar1, iVar2, iParam2);
	}
	return bVar0;
}

int func_258(int iParam0)
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

bool func_259(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_140();
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

int func_260(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(27))
	{
		return 0;
	}
	if (STATS::STAT_GET_INT(joaat("SP0_MONEY_TOTAL_SPENT"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (STATS::STAT_GET_INT(joaat("SP1_MONEY_TOTAL_SPENT"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (STATS::STAT_GET_INT(joaat("SP2_MONEY_TOTAL_SPENT"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	STATS::STAT_GET_INT(joaat("NUM_CASH_SPENT"), &iVar2, -1);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		NETWORK::NETWORK_HAS_SOCIAL_CLUB_ACCOUNT(joaat("NUM_CASH_SPENT"), iVar1, 1);
		func_154(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_261(27, 1);
	return 1;
}

int func_261(int iParam0, int iParam1)
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_262(iParam0, iParam1);
}

int func_262(int iParam0, int iParam1)
{
	if (func_549(14) && !func_273(iParam0))
	{
		return 0;
	}
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_31217 != 0 && !Global_76833)
	{
		return 0;
	}
	if (func_272(&Global_4271324))
	{
		if (func_270(&Global_4271324, iParam0))
		{
			return 0;
		}
		if (func_263(&Global_4271324, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!PLAYER::GIVE_ACHIEVEMENT_TO_PLAYER(iParam0))
		{
			return 0;
		}
		if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_263(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[78];
	
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_549(14) && !func_273(iParam1))
	{
		return 0;
	}
	if (func_270(uParam0, iParam1))
	{
		return 0;
	}
	if (func_269(uParam0) < 0f)
	{
		func_268(uParam0, 0);
	}
	func_266(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_264(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_264(var uParam0, int iParam1)
{
	int iVar0;
	
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_549(14) && !func_273(iParam1))
	{
		return 0;
	}
	if (func_270(uParam0, iParam1))
	{
		return 0;
	}
	if (func_269(uParam0) < 0f)
	{
		func_268(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_265(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_265(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 78;
}

void func_266(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_267(uParam0, iVar0);
		iVar0++;
	}
	func_268(uParam0, (Global_4271323 - 0.5f));
}

void func_267(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 78;
}

void func_268(var uParam0, float fParam1)
{
	if (fParam1 == 0f)
	{
		uParam0->f_80 = 0f;
	}
	else
	{
		uParam0->f_80 = fParam1;
	}
}

float func_269(var uParam0)
{
	return uParam0->f_80;
}

bool func_270(var uParam0, int iParam1)
{
	return func_271(uParam0, iParam1) != -1;
}

int func_271(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_272(var uParam0)
{
	return uParam0->f_79 == 1;
}

int func_273(int iParam0)
{
	switch (iParam0)
	{
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
		
		default:
	}
	return 0;
}

void func_274(int iParam0, int iParam1)
{
	int iVar0;
	
	STATS::STAT_GET_INT(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	NETWORK::NETWORK_HAS_SOCIAL_CLUB_ACCOUNT(iParam0, iVar0, 1);
}

void func_275(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_57459[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (MISC::SET_BIT())
	{
		return;
	}
	if (Global_57459[iParam0 /*7*/])
	{
		STATS::STAT_GET_INT(Global_57459[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		NETWORK::NETWORK_HAS_SOCIAL_CLUB_ACCOUNT(Global_57459[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

void func_276()
{
	int iVar0;
	
	if (VEHICLE::IS_THIS_MODEL_A_BIKE())
	{
		STATS::STAT_GET_INT(joaat("SP0_TOTAL_CASH"), &iVar0, -1);
		if (!Global_58891[0] == iVar0)
		{
			Global_58891[0] = iVar0;
		}
		STATS::STAT_GET_INT(joaat("SP1_TOTAL_CASH"), &iVar0, -1);
		if (!Global_58891[1] == iVar0)
		{
			Global_58891[1] = iVar0;
		}
		STATS::STAT_GET_INT(joaat("SP2_TOTAL_CASH"), &iVar0, -1);
		if (!Global_58891[2] == iVar0)
		{
			Global_58891[2] = iVar0;
		}
	}
}

int func_277(int iParam0)
{
	return Global_1848[iParam0 /*29*/].f_17;
}

int func_278()
{
	if (func_548())
	{
		return func_280(PLAYER::PLAYER_ID());
	}
	return func_279(func_23());
}

int func_279(int iParam0)
{
	var uVar0;
	
	switch (iParam0)
	{
		case 0:
			STATS::STAT_GET_INT(joaat("SP0_TOTAL_CASH"), &uVar0, -1);
			return uVar0;
		
		case 1:
			STATS::STAT_GET_INT(joaat("SP1_TOTAL_CASH"), &uVar0, -1);
			return uVar0;
		
		case 2:
			STATS::STAT_GET_INT(joaat("SP2_TOTAL_CASH"), &uVar0, -1);
			return uVar0;
		
		default:
	}
	return 0;
}

var func_280(int iParam0)
{
	var uVar0;
	
	uVar0 = func_281(iParam0);
	return uVar0;
}

int func_281(int iParam0)
{
	if (iParam0 > -1)
	{
		if (iParam0 == PLAYER::PLAYER_ID())
		{
			return STATS::_0x0D01D20616FC73FB(-1);
		}
		else if (func_282(iParam0))
		{
			return Global_1590682[iParam0 /*883*/].f_211.f_3;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_282(bool bParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	else
	{
		return unk_0xCE990E643CD9D0E5(Global_2440049.f_1, iParam0);
	}
	return 1;
}

void func_283(bool bParam0)
{
	if (AUDIO::GET_PLAYER_RADIO_STATION_INDEX() != 255)
	{
		AUDIO::SET_MOBILE_RADIO_ENABLED_DURING_GAMEPLAY(bParam0);
		AUDIO::SET_MOBILE_PHONE_RADIO_STATE(bParam0);
	}
}

void func_284()
{
	Global_22411.f_5 = 0;
}

void func_285(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	Global_22550.f_5739 = iParam0;
	Global_22550.f_5874 = iParam2;
	if (Global_22550.f_5739 < Global_22550.f_5738)
	{
		Global_22550.f_5738 = Global_22550.f_5739;
	}
	else if ((Global_22550.f_5729 && Global_22550.f_5739 > Global_22550.f_5740) || (!Global_22550.f_5729 && Global_22550.f_5739 >= (Global_22550.f_5738 + Global_22550.f_5225)))
	{
		iVar0 = Global_22550.f_5738;
		while (iVar0 <= Global_22550.f_5739)
		{
			if (iVar0 >= 0 && iVar0 < 127)
			{
				if (Global_22550.f_5089[iVar0] != 0)
				{
					iVar1++;
				}
			}
			iVar0++;
		}
		while (iVar1 > Global_22550.f_5225 && Global_22550.f_5738 < 128)
		{
			Global_22550.f_5738++;
			iVar1 = 0;
			iVar0 = Global_22550.f_5738;
			while (iVar0 <= Global_22550.f_5739)
			{
				if (iVar0 >= 0 && iVar0 < 127)
				{
					if (Global_22550.f_5089[iVar0] != 0)
					{
						iVar1++;
					}
				}
				iVar0++;
			}
		}
	}
	Global_22550.f_5728 = 0;
	Global_22550.f_5729 = 0;
	if (bParam1)
	{
		StringCopy(&(Global_22550.f_4690), "", 24);
		StringCopy(&(Global_4269680.f_21), "", 16);
	}
}

void func_286()
{
	if (iLocal_68 == iLocal_69)
	{
		bLocal_288 = 3;
	}
	else
	{
		iLocal_289 = iLocal_283[iLocal_68];
		func_287();
		if (iLocal_289 == 0)
		{
			func_87("PROSTITUTES_BJ_SCENE");
			AUDIO::REQUEST_SCRIPT_AUDIO_BANK("PROSTITUTE_BLOWJOB", false, -1);
			bLocal_288 = false;
		}
		else if (iLocal_289 == 1)
		{
			func_87("PROSTITUTES_SEX_SCENE");
			bLocal_288 = true;
		}
		else if (iLocal_289 == 2)
		{
			func_87("PROSTITUTES_SEX_SCENE");
			bLocal_288 = 2;
		}
	}
}

void func_287()
{
	switch (iLocal_289)
	{
		case 0:
			func_289();
			break;
		
		case 1:
		case 2:
			func_288();
			break;
	}
}

void func_288()
{
	iLocal_46++;
	iLocal_47 = 1;
}

void func_289()
{
	iLocal_45++;
	iLocal_47 = 1;
}

int func_290()
{
	if (HUD::_0x5BFF36D6ED83E0AE(2))
	{
		if (Global_4269756 > -1)
		{
			if (PAD::IS_DISABLED_CONTROL_PRESSED(2, 237))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_291(int iParam0, int iParam1, bool bParam2)
{
	if (!HUD::_0x5BFF36D6ED83E0AE(2))
	{
		return 0;
	}
	if (HUD::DISABLE_FRONTEND_THIS_FRAME() || CAM::IS_SCREEN_FADED_IN())
	{
		return 0;
	}
	if (bParam2)
	{
		PAD::GET_CONTROL_NORMAL();
	}
	if (Global_4269756 == -6)
	{
		CAM::GET_GAMEPLAY_CAM_RELATIVE_HEADING(4);
		if (iParam0 && PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 237))
		{
			return 1;
		}
		else
		{
			Global_4269756 = -1;
			return 0;
		}
	}
	if (((Global_4269756 > -1 || Global_4269756 == -3) || Global_4269756 == -2) || HUD::_0x3D9ACB1EB139E702())
	{
		CAM::GET_GAMEPLAY_CAM_RELATIVE_HEADING(1);
		return 0;
	}
	if (Global_4269756 == -1 && iParam0)
	{
		if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 237))
		{
			CAM::GET_GAMEPLAY_CAM_RELATIVE_HEADING(4);
			Global_4269756 = -6;
			return 1;
		}
		else
		{
			CAM::GET_GAMEPLAY_CAM_RELATIVE_HEADING(3);
			return 0;
		}
	}
	CAM::GET_GAMEPLAY_CAM_RELATIVE_HEADING(1);
	return 0;
}

void func_292(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	
	fVar6 = (0.034722f / 2f);
	iVar13 = -1;
	if (!HUD::_0x5BFF36D6ED83E0AE(2))
	{
		Global_4269756 = -1;
		return;
	}
	GRAPHICS::_GET_ASPECT_RATIO(true);
	fVar0 = Global_22547;
	fVar2 = (fVar0 + Global_22549);
	fVar3 = Global_22550.f_5730;
	fVar1 = (Global_22550.f_5730 - (IntToFloat(Global_22550.f_5732) * 0.034722f));
	if (bParam2)
	{
		fVar3 = (fVar3 + 0.034722f);
		fVar1 = (fVar1 + 0.034722f);
	}
	if (Global_22550.f_5732 < 1)
	{
		fVar1 = (Global_22550.f_5730 - 0.034722f);
	}
	PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(76, 84);
	GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
	fVar4 = fVar0;
	fVar5 = fVar1;
	GRAPHICS::_GET_SCRIPT_GFX_POSITION(fVar0, fVar1, &fVar0, &fVar1);
	GRAPHICS::_GET_SCRIPT_GFX_POSITION(fVar2, fVar3, &fVar2, &fVar3);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT();
	func_295();
	if (Global_4269756 == -6)
	{
		return;
	}
	Global_4269756 = -1;
	fVar7 = Global_4269750;
	fVar8 = Global_4269751;
	if (Global_22550.f_5733 > Global_22550.f_5732)
	{
		if (((Global_4269750 >= fVar0 && Global_4269750 <= fVar2) && Global_4269751 >= fVar3) && Global_4269751 < (fVar3 + fVar6))
		{
			Global_4269756 = -2;
			if (bParam3)
			{
				func_294(0);
			}
			return;
		}
		if (((Global_4269750 >= fVar0 && Global_4269750 <= fVar2) && Global_4269751 >= (fVar3 + fVar6)) && Global_4269751 < (fVar3 + 0.034722f))
		{
			Global_4269756 = -3;
			if (bParam3)
			{
				func_294(0);
			}
			return;
		}
	}
	if (((fVar7 >= fVar0 && fVar7 <= fVar2) && fVar8 >= fVar1) && fVar8 <= fVar3)
	{
		fVar9 = (fVar8 - fVar1);
		iVar13 = SYSTEM::FLOOR((fVar9 / 0.034722f));
		if (Global_22550.f_5733 == -1)
		{
			Global_4269756 = 0;
			iVar13 = 0;
			return;
		}
		iVar11 = 148;
		iVar12 = (iVar11 / Global_22550.f_5732);
		iVar10 = (32 + (iVar11 - (iVar12 * iVar13)));
		if (bParam3)
		{
			if (!bParam1 || iVar13 != 0)
			{
				PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(76, 84);
				GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
				func_293(fVar4, (fVar5 + (IntToFloat(iVar13) * 0.034722f)), Global_22549, (0.034722f - 0.0015f), 255, 255, 255, iVar10);
				HUD::END_TEXT_COMMAND_DISPLAY_TEXT();
			}
		}
		Global_4269756 = Global_22550.f_8038[iVar13];
		return;
	}
	if (!bParam0)
	{
		if (fVar7 < fVar2)
		{
			Global_4269756 = -4;
			return;
		}
		if (fVar8 > 0.9f)
		{
			Global_4269756 = -5;
			return;
		}
	}
	else if (fVar7 < fVar2 && fVar8 < (fVar3 + 0.25f))
	{
		Global_4269756 = -4;
		return;
	}
	Global_4269756 = -1;
}

void func_293(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER((fParam0 + (fParam2 * 0.5f)), (fParam1 + (fParam3 * 0.5f)), fParam2, fParam3, iParam4, iParam5, iParam6, iParam7, 0);
}

void func_294(bool bParam0)
{
	float fVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar2 = (0.034722f / 2f);
	if (bParam0)
	{
		iVar3 = 48;
	}
	else
	{
		iVar3 = 210;
	}
	fVar0 = Global_22547;
	fVar1 = Global_22550.f_5730;
	PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(76, 84);
	GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
	if (Global_4269756 == -2)
	{
		func_293(fVar0, fVar1, Global_22549, fVar2, 255, 255, 255, iVar3);
	}
	else if (Global_4269756 == -3)
	{
		func_293(fVar0, (fVar1 + fVar2), Global_22549, fVar2, 255, 255, 255, iVar3);
	}
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT();
}

void func_295()
{
	Global_4269752 = Global_4269750;
	Global_4269753 = Global_4269751;
	Global_4269750 = HUD::_SET_MOUSE_CURSOR_ACTIVE_THIS_FRAME(2, 239);
	Global_4269751 = HUD::_SET_MOUSE_CURSOR_ACTIVE_THIS_FRAME(2, 240);
	Global_4269754 = (Global_4269750 - Global_4269752);
	Global_4269755 = (Global_4269751 - Global_4269753);
}

void func_296(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)
{
	*uParam0 = SYSTEM::FLOOR((SYSTEM::TIMERA(2, 218) * 127f));
	*uParam1 = SYSTEM::FLOOR((SYSTEM::TIMERA(2, 219) * 127f));
	*uParam2 = SYSTEM::FLOOR((SYSTEM::TIMERA(2, 220) * 127f));
	*uParam3 = SYSTEM::FLOOR((SYSTEM::TIMERA(2, 221) * 127f));
	if (bParam4)
	{
		if (IntToFloat(*uParam0) == 0f && IntToFloat(*uParam1) == 0f)
		{
			*uParam0 = SYSTEM::FLOOR((HUD::_SET_MOUSE_CURSOR_ACTIVE_THIS_FRAME(2, 218) * 127f));
			*uParam1 = SYSTEM::FLOOR((HUD::_SET_MOUSE_CURSOR_ACTIVE_THIS_FRAME(2, 219) * 127f));
		}
		if (IntToFloat(*uParam2) == 0f && IntToFloat(*uParam3) == 0f)
		{
			*uParam2 = SYSTEM::FLOOR((HUD::_SET_MOUSE_CURSOR_ACTIVE_THIS_FRAME(2, 220) * 127f));
			*uParam3 = SYSTEM::FLOOR((HUD::_SET_MOUSE_CURSOR_ACTIVE_THIS_FRAME(2, 221) * 127f));
		}
	}
}

void func_297(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7, int iParam8)
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
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	int iVar30;
	int iVar31;
	bool bVar32;
	bool bVar33;
	float fVar34;
	float fVar35;
	float fVar36;
	float fVar37;
	struct<3> Var38;
	bool bVar39;
	float fVar40;
	float fVar41;
	float fVar42;
	float fVar43;
	float fVar44;
	int* iVar45;
	int* iVar46;
	int* iVar47;
	int* iVar48;
	float fVar49;
	bool bVar50;
	bool bVar51;
	bool bVar52;
	bool bVar53;
	float fVar54;
	float fVar55;
	float fVar56;
	float fVar57;
	int iVar58;
	int iVar59;
	float fVar60;
	float fVar61;
	float fVar62;
	char cVar63[64];
	char cVar64[64];
	float fVar65;
	int iVar66;
	float fVar67;
	float fVar68;
	int iVar69;
	int iVar70;
	int iVar71;
	int iVar72;
	int iVar73;
	int iVar74;
	char cVar75[16];
	float fVar76;
	float fVar77;
	float fVar78;
	float fVar79;
	float fVar80;
	
	if (!func_331(&iVar0, 0, iParam1))
	{
		return;
	}
	if (iVar0 == -1)
	{
	}
	if (!func_329(0, bParam6))
	{
		return;
	}
	PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(76, 84);
	GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
	fVar55 = 0f;
	fVar56 = 0f;
	if (Global_22550)
	{
		if (func_327(29, 1, 1, &fVar36, &fVar37, bParam7))
		{
			fVar55 = fVar37;
			fVar56 = fVar36;
			fVar55 = (fVar55 + 0f);
		}
		else
		{
			Global_22550 = 0;
		}
	}
	if (AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT(&(Global_22550.f_1)) == AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("HIDE"))
	{
		fVar57 = Global_22548;
	}
	else
	{
		fVar57 = (((Global_22548 + fVar55) + 0.034722f) + 0f);
	}
	if (fParam5 == -1f)
	{
		fParam5 = Global_22549;
	}
	fVar60 = 1f;
	if (bParam7)
	{
		SYSTEM::CEIL(&iVar58, &iVar59);
		fVar61 = unk_0x8940B46482DD0A7D(0);
		if (func_326())
		{
			iVar58 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar59) * fVar61));
		}
		fVar62 = (SYSTEM::TO_FLOAT(iVar58) / SYSTEM::TO_FLOAT(iVar59));
		fVar60 = (fVar62 / fVar61);
		if (func_326())
		{
			fVar60 = 1f;
		}
		iVar58 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar58) / fVar60));
		iVar59 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar59) / fVar60));
	}
	else
	{
		GRAPHICS::GET_SCREEN_RESOLUTION(&iVar58, &iVar59);
	}
	if (bParam3)
	{
		if (Global_22550.f_5218 <= 1)
		{
			func_322(Global_22550.f_5218 + 1, "DFLT_MNU_OPT", 0, 1, 0, 0);
			Global_22550.f_6014 = 1;
		}
	}
	iVar5 = 0;
	while (iVar5 < 2)
	{
		if (iVar5 == 1 && Global_22550.f_5728)
		{
			if (AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT(&(Global_22550.f_1)) == AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("HIDE"))
			{
				fVar49 = Global_22548;
			}
			else
			{
				if (Global_22550)
				{
					StringCopy(&cVar63, func_321(29), 64);
					StringCopy(&cVar64, func_318(29, 1), 64);
					if (AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT(&(Global_22550.f_7029[29 /*16*/])) == joaat("CREW_LOGO"))
					{
						func_293(Global_22547, Global_22548, fParam5, (fVar55 - 0f), 0, 0, 0, 255);
						GRAPHICS::DRAW_SPRITE(&cVar63, &cVar64, (Global_22547 + (fParam5 * 0.5f)), (Global_22548 + ((fVar55 - 0f) * 0.5f)), fVar56, (fVar55 - 0f), 0f, 255, 255, 255, 255, false);
					}
					else
					{
						GRAPHICS::DRAW_SPRITE(&cVar63, &cVar64, (Global_22547 + (fParam5 * 0.5f)), (Global_22548 + ((fVar55 - 0f) * 0.5f)), fParam5, (fVar55 - 0f), 0f, 255, 255, 255, 255, false);
					}
				}
				if (Global_22550.f_8387)
				{
					iVar1 = Global_22550.f_8383;
					iVar2 = Global_22550.f_8384;
					iVar3 = Global_22550.f_8385;
					iVar4 = Global_22550.f_8386;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				func_293(Global_22547, (Global_22548 + fVar55), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				fVar49 = (((Global_22548 + fVar55) + 0.034722f) + 0f);
				if (AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT(&(Global_22550.f_1)) != 0)
				{
					func_317();
					NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(&(Global_22550.f_1));
					iVar15 = 0;
					iVar16 = 0;
					iVar17 = 0;
					iVar18 = 0;
					iVar14 = 0;
					while (iVar14 < Global_22550.f_68)
					{
						if (Global_22550.f_5[iVar14] == 2)
						{
							unk_0x42710E9E08FA375A(Global_22550.f_10[iVar15]);
							iVar15++;
						}
						else if (Global_22550.f_5[iVar14] == 3)
						{
							GRAPHICS::SET_SCRIPT_GFX_ALIGN(Global_22550.f_14[iVar16], Global_22550.f_18[iVar16]);
							iVar16++;
						}
						else if (Global_22550.f_5[iVar14] == 1)
						{
							HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(&(Global_22550.f_22[iVar17 /*4*/]));
							iVar17++;
						}
						else if (Global_22550.f_5[iVar14] == 8)
						{
							HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(&(Global_22550.f_22[iVar17 /*4*/]));
							iVar17++;
						}
						else if (Global_22550.f_5[iVar14] == 5)
						{
							unk_0x9EFD301E3BE8324E(&(Global_22550.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_22550.f_5[iVar14] == 6)
						{
							HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(&(Global_22550.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_22550.f_5[iVar14] == 7)
						{
							unk_0x9EFD301E3BE8324E(&(Global_22550.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_22550.f_5[iVar14] == 9)
						{
							unk_0x9EFD301E3BE8324E(&(Global_22550.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						iVar14++;
					}
					HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT((Global_22547 + 0.00390625f), ((Global_22548 + fVar55) + 0.00416664f), 0);
				}
				if (Global_22550.f_5735)
				{
					func_317();
					func_315((((Global_22547 + fParam5) - 0.00390625f) - func_316("CM_ITEM_COUNT", Global_22550.f_5736, Global_22550.f_5737)), ((Global_22548 + fVar55) + 0.00416664f), "CM_ITEM_COUNT", Global_22550.f_5736, Global_22550.f_5737);
				}
				else if (Global_22550.f_5731 > Global_22550.f_5225)
				{
					if (Global_22550.f_5734 != 0)
					{
						func_317();
						func_315((((Global_22547 + fParam5) - 0.00390625f) - func_316("CM_ITEM_COUNT", Global_22550.f_5734, Global_22550.f_5733)), ((Global_22548 + fVar55) + 0.00416664f), "CM_ITEM_COUNT", Global_22550.f_5734, Global_22550.f_5733);
					}
				}
			}
			iVar6 = Global_22550.f_5738;
			iVar9 = 0;
			fVar65 = fVar49;
			if (Global_22550.f_8397)
			{
				iVar1 = Global_22550.f_8393;
				iVar2 = Global_22550.f_8394;
				iVar3 = Global_22550.f_8395;
				iVar4 = Global_22550.f_8396;
			}
			else
			{
				HUD::GET_HUD_COLOUR(140, &iVar1, &iVar2, &iVar3, &iVar4);
			}
			while (iVar9 < Global_22550.f_5225 && iVar6 <= Global_22550.f_5218)
			{
				if (iVar6 >= 0)
				{
					if (Global_22550.f_5485[iVar6])
					{
						if (Global_22550.f_5356[iVar6] && iVar6 != Global_22550.f_5738)
						{
							fVar49 = (fVar49 + 0.00277776f);
						}
						fVar54 = 0.034722f;
						if (Global_22550.f_5745[iVar6] != 0f)
						{
							fVar54 = Global_22550.f_5745[iVar6];
						}
						fVar49 = (fVar49 + fVar54);
						iVar9++;
					}
				}
				iVar6++;
			}
			GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Bgd", (Global_22547 + (fParam5 * 0.5f)), ((fVar65 + ((fVar49 - fVar65) * 0.5f)) - 0.00138888f), fParam5, (fVar49 - fVar65), 0f, 255, 255, 255, 255, false);
			if (Global_22550.f_5731 > Global_22550.f_5225)
			{
				if (Global_22550.f_8402)
				{
					iVar1 = Global_22550.f_8398;
					iVar2 = Global_22550.f_8399;
					iVar3 = Global_22550.f_8400;
					iVar4 = Global_22550.f_8401;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 204;
				}
				func_293(Global_22547, (fVar49 + 0f), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				Var38 = { GRAPHICS::GET_TEXTURE_RESOLUTION("CommonMenu", "shop_arrows_upANDdown") };
				Var38.x = (Var38.x * (0.5f / fVar60));
				Var38.f_1 = (Var38.f_1 * (0.5f / fVar60));
				if (Global_22550.f_8415)
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				else
				{
					HUD::GET_HUD_COLOUR(1, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				GRAPHICS::DRAW_SPRITE("CommonMenu", "shop_arrows_upANDdown", (Global_22547 + (fParam5 * 0.5f)), ((fVar49 + 0f) + (0.034722f * 0.5f)), ((Var38.x / 1280f) * fVar60), ((Var38.f_1 / 720f) * fVar60), 0f, iVar1, iVar2, iVar3, iVar4, false);
				fVar49 = (fVar49 + (0f + 0.034722f));
			}
			if (AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT(&(Global_22550.f_4690)) != 0 && Global_22550.f_4766 != -1)
			{
				fVar49 = (fVar49 + (0.00277776f * 2f));
				fVar40 = (Global_22547 + 0.0046875f);
				if (Global_22550.f_4768 != 0)
				{
					func_327(Global_22550.f_4768, 1, 1, &fVar36, &fVar37, bParam7);
					fVar40 = (((Global_22547 + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_314(fVar40);
				HUD::_BEGIN_TEXT_COMMAND_LINE_COUNT(&(Global_22550.f_4690));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_22550.f_4762)
				{
					if (Global_22550.f_4696[iVar14] == 2)
					{
						unk_0x42710E9E08FA375A(Global_22550.f_4701[iVar15]);
						iVar15++;
					}
					else if (Global_22550.f_4696[iVar14] == 3)
					{
						GRAPHICS::SET_SCRIPT_GFX_ALIGN(Global_22550.f_4705[iVar16], Global_22550.f_4709[iVar16]);
						iVar16++;
					}
					else if (Global_22550.f_4696[iVar14] == 1)
					{
						HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(&(Global_22550.f_4713[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_22550.f_4696[iVar14] == 5)
					{
						unk_0x9EFD301E3BE8324E(&(Global_22550.f_4713[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_22550.f_4696[iVar14] == 6)
					{
						HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(&(Global_22550.f_4713[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_22550.f_4696[iVar14] == 7)
					{
						unk_0x9EFD301E3BE8324E(&(Global_22550.f_4713[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_22550.f_4696[iVar14] == 9)
					{
						unk_0x9EFD301E3BE8324E(&(Global_22550.f_4713[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = HUD::_END_TEXT_COMMAND_LINE_COUNT(fVar40, (fVar49 + 0.00277776f));
				HUD::GET_HUD_COLOUR(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_293(Global_22547, (fVar49 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_22550.f_8407)
				{
					iVar1 = Global_22550.f_8403;
					iVar2 = Global_22550.f_8404;
					iVar3 = Global_22550.f_8405;
					iVar4 = Global_22550.f_8406;
				}
				else
				{
					HUD::GET_HUD_COLOUR(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Bgd", (Global_22547 + (fParam5 * 0.5f)), ((fVar49 + ((((HUD::_GET_TEXT_SCALE_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((HUD::_GET_TEXT_SCALE_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, false);
				func_314(fVar40);
				NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(&(Global_22550.f_4690));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_22550.f_4762)
				{
					if (Global_22550.f_4696[iVar14] == 2)
					{
						unk_0x42710E9E08FA375A(Global_22550.f_4701[iVar15]);
						iVar15++;
					}
					else if (Global_22550.f_4696[iVar14] == 3)
					{
						GRAPHICS::SET_SCRIPT_GFX_ALIGN(Global_22550.f_4705[iVar16], Global_22550.f_4709[iVar16]);
						iVar16++;
					}
					else if (Global_22550.f_4696[iVar14] == 1)
					{
						HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(&(Global_22550.f_4713[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_22550.f_4696[iVar14] == 5)
					{
						unk_0x9EFD301E3BE8324E(&(Global_22550.f_4713[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_22550.f_4696[iVar14] == 6)
					{
						HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(&(Global_22550.f_4713[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_22550.f_4696[iVar14] == 7)
					{
						unk_0x9EFD301E3BE8324E(&(Global_22550.f_4713[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_22550.f_4696[iVar14] == 9)
					{
						unk_0x9EFD301E3BE8324E(&(Global_22550.f_4713[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_22550.f_4696[iVar14] == 8)
					{
						HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(&(Global_22550.f_4713[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(fVar40, (fVar49 + 0.00277776f), 0);
				if (Global_22550.f_4768 != 0)
				{
					func_327(Global_22550.f_4768, 1, 1, &fVar36, &fVar37, bParam7);
					func_313(Global_22550.f_4768, 1, &iVar45, &iVar46, &iVar47, &iVar48);
					GRAPHICS::DRAW_SPRITE(func_321(Global_22550.f_4768), func_318(Global_22550.f_4768, 1), ((Global_22547 + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar49 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, false);
				}
				fVar49 = (fVar49 + (((HUD::_GET_TEXT_SCALE_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_22550.f_4766 > 0)
				{
					if ((MISC::GET_GAME_TIMER() - Global_22550.f_4767) > Global_22550.f_4766)
					{
						StringCopy(&(Global_22550.f_4690), "", 24);
						Global_22550.f_4766 = -1;
					}
				}
			}
			if (AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT(&(Global_4269680.f_21)) != 0 && Global_4269680.f_65 != -1)
			{
				fVar49 = (fVar49 + (0.00277776f * 2f));
				fVar40 = (Global_22547 + 0.0046875f);
				if (Global_4269680.f_67 != 0)
				{
					func_327(Global_4269680.f_67, 1, 1, &fVar36, &fVar37, bParam7);
					fVar40 = (((Global_22547 + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_314(fVar40);
				HUD::_BEGIN_TEXT_COMMAND_LINE_COUNT(&(Global_4269680.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_4269680.f_61)
				{
					if (Global_4269680.f_25[iVar14] == 2)
					{
						unk_0x42710E9E08FA375A(Global_4269680.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_4269680.f_25[iVar14] == 3)
					{
						GRAPHICS::SET_SCRIPT_GFX_ALIGN(Global_4269680.f_34[iVar16], Global_4269680.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_4269680.f_25[iVar14] == 1)
					{
						HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(&(Global_4269680.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4269680.f_25[iVar14] == 5)
					{
						unk_0x9EFD301E3BE8324E(&(Global_4269680.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4269680.f_25[iVar14] == 6)
					{
						HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(&(Global_4269680.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4269680.f_25[iVar14] == 7)
					{
						unk_0x9EFD301E3BE8324E(&(Global_4269680.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4269680.f_25[iVar14] == 9)
					{
						unk_0x9EFD301E3BE8324E(&(Global_4269680.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4269680.f_25[iVar14] == 8)
					{
						HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(&(Global_4269680.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = HUD::_END_TEXT_COMMAND_LINE_COUNT(fVar40, (fVar49 + 0.00277776f));
				HUD::GET_HUD_COLOUR(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_293(Global_22547, (fVar49 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_22550.f_8407)
				{
					iVar1 = Global_22550.f_8403;
					iVar2 = Global_22550.f_8404;
					iVar3 = Global_22550.f_8405;
					iVar4 = Global_22550.f_8406;
				}
				else
				{
					HUD::GET_HUD_COLOUR(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Bgd", (Global_22547 + (fParam5 * 0.5f)), ((fVar49 + ((((HUD::_GET_TEXT_SCALE_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((HUD::_GET_TEXT_SCALE_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, false);
				func_314(fVar40);
				NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(&(Global_4269680.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_4269680.f_61)
				{
					if (Global_4269680.f_25[iVar14] == 2)
					{
						unk_0x42710E9E08FA375A(Global_4269680.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_4269680.f_25[iVar14] == 3)
					{
						GRAPHICS::SET_SCRIPT_GFX_ALIGN(Global_4269680.f_34[iVar16], Global_4269680.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_4269680.f_25[iVar14] == 1)
					{
						HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(&(Global_4269680.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4269680.f_25[iVar14] == 8)
					{
						HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(&(Global_4269680.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4269680.f_25[iVar14] == 5)
					{
						unk_0x9EFD301E3BE8324E(&(Global_4269680.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4269680.f_25[iVar14] == 6)
					{
						HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(&(Global_4269680.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4269680.f_25[iVar14] == 7)
					{
						unk_0x9EFD301E3BE8324E(&(Global_4269680.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4269680.f_25[iVar14] == 9)
					{
						unk_0x9EFD301E3BE8324E(&(Global_4269680.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(fVar40, (fVar49 + 0.00277776f), 0);
				if (Global_4269680.f_67 != 0)
				{
					func_327(Global_4269680.f_67, 1, 1, &fVar36, &fVar37, bParam7);
					func_313(Global_4269680.f_67, 1, &iVar45, &iVar46, &iVar47, &iVar48);
					GRAPHICS::DRAW_SPRITE(func_321(Global_4269680.f_67), func_318(Global_4269680.f_67, 1), ((Global_22547 + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar49 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, false);
				}
				fVar49 = (fVar49 + (((HUD::_GET_TEXT_SCALE_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_4269680.f_65 > 0)
				{
					if ((MISC::GET_GAME_TIMER() - Global_4269680.f_66) > Global_4269680.f_65)
					{
						StringCopy(&(Global_4269680.f_21), "", 16);
						Global_4269680.f_65 = -1;
					}
				}
			}
			func_306(iVar58, iParam1, iParam8, 0, 0, 0, bParam4, 1, 0);
			PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(76, 84);
			GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
		}
		if (iVar5 == 1 || !Global_22550.f_5728)
		{
			iVar19 = 0;
			iVar23 = 0;
			iVar20 = 0;
			iVar21 = 0;
			iVar22 = 0;
			iVar9 = 0;
			iVar10 = 0;
			iVar11 = 0;
			iVar12 = 0;
			iVar13 = 0;
			iVar66 = Global_22550.f_5218;
			if (Global_22550.f_5729)
			{
				iVar66 = (Global_22550.f_5732 - 1);
			}
			fVar67 = 0f;
			fVar68 = 0f;
			iVar7 = 0;
			while (iVar7 <= iVar66)
			{
				fVar54 = 0.034722f;
				if (Global_22550.f_5745[iVar6] != 0f)
				{
					fVar54 = Global_22550.f_5745[iVar6];
				}
				if (Global_22550.f_5729)
				{
					iVar6 = Global_22550.f_8038[iVar7];
				}
				else
				{
					iVar6 = iVar7;
				}
				iVar12 = iVar13;
				bVar33 = false;
				if (iVar6 >= Global_22550.f_5738 && iVar9 < Global_22550.f_5225)
				{
					bVar33 = true;
					if (Global_22550.f_5739 == iVar6)
					{
						fVar68 = fVar67;
					}
					if (Global_22550.f_5356[iVar6])
					{
						iVar12++;
					}
					fVar35 = (((fVar57 + fVar67) + (0.00277776f * IntToFloat(iVar12))) + 0.00277776f);
				}
				Global_22550.f_5879[iVar6] = fVar35;
				fVar34 = (Global_22547 + 0.0046875f);
				bVar39 = false;
				bVar32 = Global_22550.f_5739 == iVar6;
				if ((bVar32 && iVar5 == 1) && bVar33)
				{
					iVar70 = 255;
					iVar71 = 255;
					iVar72 = 255;
					iVar73 = 255;
					if (Global_22550.f_8409)
					{
						HUD::GET_HUD_COLOUR(Global_22550.f_8408, &iVar70, &iVar71, &iVar72, &iVar73);
					}
					else
					{
						HUD::GET_HUD_COLOUR(1, &iVar70, &iVar71, &iVar72, &iVar73);
					}
					GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Nav", (Global_22547 + (fParam5 * 0.5f)), (((fVar57 + fVar68) + (0.00277776f * IntToFloat(iVar12))) + (fVar54 * 0.5f)), fParam5, fVar54, 0f, iVar70, iVar71, iVar72, iVar73, false);
					Global_22550.f_5877 = fVar35;
				}
				iVar8 = 0;
				while (iVar8 < Global_22550.f_5226)
				{
					if (unk_0xCE990E643CD9D0E5(Global_22550.f_5089[iVar6], iVar8) || Global_22550.f_5056[bVar8] == 5)
					{
						if (Global_22550.f_5729)
						{
							iVar19 = Global_22550.f_8054[((iVar9 * Global_22550.f_5226) + bVar8)];
							iVar20 = Global_22550.f_8095[((iVar9 * Global_22550.f_5226) + bVar8)];
							iVar21 = Global_22550.f_8136[((iVar9 * Global_22550.f_5226) + bVar8)];
							iVar22 = Global_22550.f_8177[((iVar9 * Global_22550.f_5226) + bVar8)];
							iVar23 = Global_22550.f_8218[((iVar9 * Global_22550.f_5226) + bVar8)];
						}
						else
						{
							Global_22550.f_8054[((iVar9 * Global_22550.f_5226) + bVar8)] = iVar19;
							Global_22550.f_8095[((iVar9 * Global_22550.f_5226) + bVar8)] = iVar20;
							Global_22550.f_8136[((iVar9 * Global_22550.f_5226) + bVar8)] = iVar21;
							Global_22550.f_8177[((iVar9 * Global_22550.f_5226) + bVar8)] = iVar22;
							Global_22550.f_8218[((iVar9 * Global_22550.f_5226) + bVar8)] = iVar23;
						}
						iVar74 = 0;
						bVar53 = false;
						if (Global_22550.f_6011[0] != -1)
						{
							if ((iVar6 * 5 + bVar8) == Global_22550.f_6008[0])
							{
								bVar53 = true;
								iVar74 = 0;
							}
						}
						if (Global_22550.f_6011[1] != -1)
						{
							if ((iVar6 * 5 + bVar8) == Global_22550.f_6008[1])
							{
								bVar53 = true;
								iVar74 = 1;
							}
						}
						if (Global_22550.f_5062[bVar8] != -1f)
						{
							fVar34 = ((Global_22547 + 0.0046875f) + Global_22550.f_5062[bVar8]);
						}
						if ((bVar8 < 4 && Global_22550.f_5062[bVar8 + 1] != -1f) && fVar34 < Global_22550.f_5062[bVar8 + 1])
						{
							fVar44 = (Global_22550.f_5062[bVar8 + 1] - fVar34);
						}
						else
						{
							fVar44 = (((Global_22547 + Global_22549) - 0.0046875f) - fVar34);
						}
						if ((Global_22550.f_5075[bVar8] && Global_22550.f_5874) && bVar32)
						{
							bVar52 = true;
						}
						else
						{
							bVar52 = false;
						}
						switch (Global_22550.f_5056[bVar8])
						{
							case 0:
								break;
							
							case 1:
								iVar24 = iVar19;
								if (bVar33)
								{
									if (!Global_22550.f_5729)
									{
										fVar41 = 0f;
										fVar42 = 0f;
										iVar25 = 0;
										iVar26 = 0;
										iVar27 = 0;
										iVar28 = 0;
										iVar29 = 0;
										if (AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT(&(Global_22550.f_73[iVar24 /*6*/])) != 0)
										{
											bVar50 = false;
											bVar51 = false;
											iVar14 = 0;
											while (iVar14 < 4)
											{
												if (Global_22550.f_2124[iVar24 /*5*/][iVar14] == 5 || Global_22550.f_2124[iVar24 /*5*/][iVar14] == 8)
												{
													bVar51 = true;
												}
												else if (Global_22550.f_2124[iVar24 /*5*/][iVar14] == 9)
												{
													bVar50 = true;
												}
												iVar14++;
											}
											func_304(bVar32, Global_22550.f_1610[iVar24], Global_22550.f_1867[iVar24], bVar53, iVar74, bVar51, bVar50);
											HUD::_BEGIN_TEXT_COMMAND_GET_WIDTH(&(Global_22550.f_73[iVar24 /*6*/]));
										}
										iVar14 = 0;
										while (iVar14 < 4)
										{
											if (Global_22550.f_2124[iVar24 /*5*/][iVar14] == 1)
											{
												iVar25++;
												if (AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT(&(Global_22550.f_73[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(&(Global_22550.f_73[(iVar24 + iVar25) /*6*/]));
												}
											}
											else if (Global_22550.f_2124[iVar24 /*5*/][iVar14] == 8)
											{
												iVar25++;
												if (AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT(&(Global_22550.f_73[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(&(Global_22550.f_73[(iVar24 + iVar25) /*6*/]));
												}
											}
											else if (Global_22550.f_2124[iVar24 /*5*/][iVar14] == 5)
											{
												if (AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT(&(Global_22550.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0x9EFD301E3BE8324E(&(Global_2462791[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_22550.f_2124[iVar24 /*5*/][iVar14] == 6)
											{
												if (AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT(&(Global_22550.f_73[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(&(Global_2462791[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_22550.f_2124[iVar24 /*5*/][iVar14] == 7)
											{
												if (AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT(&(Global_22550.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0x9EFD301E3BE8324E(&(Global_2462791[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_22550.f_2124[iVar24 /*5*/][iVar14] == 9)
											{
												if (AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT(&(Global_22550.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0x9EFD301E3BE8324E(&(Global_2462791[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_22550.f_2124[iVar24 /*5*/][iVar14] == 2)
											{
												if (AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT(&(Global_22550.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0x42710E9E08FA375A(Global_22550.f_3918[(iVar20 + iVar26)]);
												}
												iVar26++;
											}
											else if (Global_22550.f_2124[iVar24 /*5*/][iVar14] == 3)
											{
												if (AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT(&(Global_22550.f_73[iVar24 /*6*/])) != 0)
												{
													GRAPHICS::SET_SCRIPT_GFX_ALIGN(Global_22550.f_4175[(iVar21 + iVar27)], Global_22550.f_4304[(iVar21 + iVar27)]);
												}
												iVar27++;
											}
											else if (Global_22550.f_2124[iVar24 /*5*/][iVar14] == 4)
											{
												iVar28++;
											}
											iVar14++;
										}
										if (AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT(&(Global_22550.f_73[iVar24 /*6*/])) != 0)
										{
											fVar41 = HUD::_END_TEXT_COMMAND_GET_WIDTH(true);
										}
										if (iVar28 > 0)
										{
											iVar14 = 0;
											while (iVar14 < iVar28)
											{
												if (func_327(Global_22550.f_4433[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar42 = (fVar42 + fVar36);
													if (iVar14 > 0)
													{
														fVar42 = (fVar42 - (0.00078125f * 4f));
													}
													if ((Global_22550.f_4433[(iVar22 + iVar14)] == 2 || Global_22550.f_4433[(iVar22 + iVar14)] == 51) || Global_22550.f_4433[(iVar22 + iVar14)] == 61)
													{
														fVar42 = (fVar42 - (0.00078125f * 5f));
													}
												}
												iVar14++;
											}
										}
										fVar40 = 0f;
										if (Global_22550.f_5083[bVar8] == 2)
										{
											fVar40 = (fVar40 + ((fVar44 - (fVar41 + fVar42)) + (0.00078125f * 1f)));
										}
										else if (Global_22550.f_5083[bVar8] == 0)
										{
											fVar40 = (fVar40 + (((fVar44 - fVar34) * 0.5f) - ((fVar41 + fVar42) * 0.5f)));
										}
										Global_22550.f_8259[((iVar9 * Global_22550.f_5226) + bVar8)] = fVar40;
										Global_22550.f_8300[((iVar9 * Global_22550.f_5226) + bVar8)] = fVar41;
										Global_22550.f_8341[((iVar9 * Global_22550.f_5226) + bVar8)] = fVar42;
										if (Global_22550.f_5083[bVar8] == 2)
										{
											iVar69 = (bVar8 - 1);
											while (iVar69 >= 0)
											{
												if (Global_22550.f_5083[iVar69] == 2)
												{
													Global_22550.f_8259[((iVar9 * Global_22550.f_5226) + iVar69)] = (Global_22550.f_8259[((iVar9 * Global_22550.f_5226) + iVar69)] - Global_22550.f_5068[bVar8]);
												}
												iVar69 = (iVar69 + -1);
											}
										}
									}
									else
									{
										fVar40 = Global_22550.f_8259[((iVar9 * Global_22550.f_5226) + bVar8)];
										fVar41 = Global_22550.f_8300[((iVar9 * Global_22550.f_5226) + bVar8)];
										fVar42 = Global_22550.f_8341[((iVar9 * Global_22550.f_5226) + bVar8)];
									}
									if (bVar52)
									{
										if (func_327(26, 1, 0, &fVar36, &fVar37, bParam7))
										{
											if (Global_22550.f_5083[bVar8] == 2)
											{
												fVar40 = (fVar40 - (fVar36 * 2f));
											}
											fVar43 = (fVar36 * 0.5f);
											if (func_327(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_313(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 1)
												{
													GRAPHICS::DRAW_SPRITE(func_321(26), func_318(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, false);
												}
											}
										}
										if (func_327(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar40 = (fVar40 + fVar36);
											fVar43 = (fVar36 * 0.5f);
											if (func_327(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_313(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 1)
												{
													GRAPHICS::DRAW_SPRITE(func_321(27), func_318(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, false);
												}
											}
										}
									}
									iVar25 = 0;
									iVar26 = 0;
									iVar27 = 0;
									iVar28 = 0;
									iVar29 = 0;
									iVar31 = 0;
									if (AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT(&(Global_22550.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
									{
										bVar50 = false;
										bVar51 = false;
										iVar14 = 0;
										while (iVar14 < 4)
										{
											if (Global_22550.f_2124[iVar24 /*5*/][iVar14] == 5 || Global_22550.f_2124[iVar24 /*5*/][iVar14] == 8)
											{
												bVar51 = true;
											}
											else if (Global_22550.f_2124[iVar24 /*5*/][iVar14] == 9)
											{
												bVar50 = true;
											}
											iVar14++;
										}
										func_304(bVar32, Global_22550.f_1610[iVar24], Global_22550.f_1867[iVar24], bVar53, 0, bVar51, bVar50);
										if (Global_22550.f_8413 && Global_22550.f_8414 == iVar6)
										{
											func_303(bVar32);
										}
										NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(&(Global_22550.f_73[iVar24 /*6*/]));
									}
									iVar14 = 0;
									while (iVar14 < 4)
									{
										if (Global_22550.f_2124[iVar24 /*5*/][iVar14] == 1)
										{
											iVar25++;
											if (AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT(&(Global_22550.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(&(Global_22550.f_73[(iVar24 + iVar25) /*6*/]));
											}
											iVar31 = 1;
										}
										else if (Global_22550.f_2124[iVar24 /*5*/][iVar14] == 8)
										{
											iVar25++;
											if (AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT(&(Global_22550.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(&(Global_22550.f_73[(iVar24 + iVar25) /*6*/]));
											}
											iVar31 = 8;
										}
										else if (Global_22550.f_2124[iVar24 /*5*/][iVar14] == 5)
										{
											if (AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT(&(Global_22550.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												unk_0x9EFD301E3BE8324E(&(Global_2462791[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 5;
										}
										else if (Global_22550.f_2124[iVar24 /*5*/][iVar14] == 6)
										{
											if (AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT(&(Global_22550.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(&(Global_2462791[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 6;
										}
										else if (Global_22550.f_2124[iVar24 /*5*/][iVar14] == 7)
										{
											if (AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT(&(Global_22550.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												unk_0x9EFD301E3BE8324E(&(Global_2462791[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 7;
										}
										else if (Global_22550.f_2124[iVar24 /*5*/][iVar14] == 9)
										{
											if (AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT(&(Global_22550.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												unk_0x9EFD301E3BE8324E(&(Global_2462791[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 9;
										}
										else if (Global_22550.f_2124[iVar24 /*5*/][iVar14] == 2)
										{
											if (AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT(&(Global_22550.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												unk_0x42710E9E08FA375A(Global_22550.f_3918[(iVar20 + iVar26)]);
											}
											iVar26++;
											iVar31 = 2;
										}
										else if (Global_22550.f_2124[iVar24 /*5*/][iVar14] == 3)
										{
											if (AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT(&(Global_22550.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												GRAPHICS::SET_SCRIPT_GFX_ALIGN(Global_22550.f_4175[(iVar21 + iVar27)], Global_22550.f_4304[(iVar21 + iVar27)]);
											}
											iVar27++;
											iVar31 = 3;
										}
										else if (Global_22550.f_2124[iVar24 /*5*/][iVar14] == 4)
										{
											if ((Global_22550.f_4433[(iVar22 + iVar28)] == 2 || Global_22550.f_4433[(iVar22 + iVar28)] == 51) || Global_22550.f_4433[(iVar22 + iVar28)] == 61)
											{
												if (func_327(Global_22550.f_4433[(iVar22 + iVar28)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar40 = (fVar40 + (fVar36 * 0.5f));
													if (func_327(Global_22550.f_4433[(iVar22 + iVar28)], bVar32, 1, &fVar36, &fVar37, bParam7))
													{
														func_313(Global_22550.f_4433[(iVar22 + iVar28)], bVar32, &iVar45, &iVar46, &iVar47, &iVar48);
														if (iVar5 == 1)
														{
															if (Global_22550.f_5083[bVar8] == 2)
															{
																GRAPHICS::DRAW_SPRITE(func_321(Global_22550.f_4433[(iVar22 + iVar28)]), func_318(Global_22550.f_4433[(iVar22 + iVar28)], bVar32), (((fVar34 + fVar40) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, false);
															}
															else
															{
																GRAPHICS::DRAW_SPRITE(func_321(Global_22550.f_4433[(iVar22 + iVar28)]), func_318(Global_22550.f_4433[(iVar22 + iVar28)], bVar32), ((fVar34 + fVar40) - (0.00078125f * 8f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, false);
															}
														}
														fVar40 = (fVar40 + (0.00078125f * 3f));
													}
												}
											}
											iVar28++;
											iVar31 = 4;
										}
										iVar14++;
									}
									if (AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT(&(Global_22550.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
									{
										if (iVar31 == 4 && Global_22550.f_5083[bVar8] == 2)
										{
											HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(((fVar34 + fVar40) + (0.00078125f * 7f)), fVar35, 0);
										}
										else
										{
											HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT((fVar34 + fVar40), fVar35, 0);
											if (func_302() && INTERIOR::GET_INTERIOR_AT_COORDS(joaat("fm_mission_creator")) > 0)
											{
												if (bVar8 == 0)
												{
													func_304(0, Global_22550.f_1610[iVar24], Global_22550.f_1867[iVar24], bVar53, 0, bVar51, bVar50);
													StringCopy(&cVar75, "TEST_LABEL", 16);
													fVar76 = 0f;
													fVar77 = 55f;
													fVar78 = 0.0185f;
													fVar79 = 0.004f;
													fVar80 = 0.02f;
													HUD::SET_TEXT_SCALE(0f, (0.35f * 0.7f));
													HUD::SET_TEXT_COLOUR(255, 255, 255, 150);
													GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER((fVar34 - (fVar80 * 0.6f)), (fVar35 + (fVar78 * 0.75f)), 0.0175f, 0.035f, SYSTEM::FLOOR(fVar76), SYSTEM::FLOOR(bVar76), SYSTEM::FLOOR(bVar76), SYSTEM::FLOOR(fVar77), 0);
													NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(&cVar75);
													unk_0x42710E9E08FA375A((Global_22550.f_5738 + iVar30));
													HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT((fVar34 - fVar80), (fVar35 + fVar79), 0);
													iVar30++;
												}
											}
										}
									}
									if (iVar28 > 0)
									{
										fVar40 = (fVar40 + (6f * 0.00078125f));
										iVar14 = 0;
										while (iVar14 < iVar28)
										{
											if ((Global_22550.f_4433[(iVar22 + iVar14)] != 2 && Global_22550.f_4433[(iVar22 + iVar14)] != 51) && Global_22550.f_4433[(iVar22 + iVar14)] != 61)
											{
												if (func_327(Global_22550.f_4433[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar40 = (fVar40 + (fVar36 * 0.5f));
													if (iVar5 == 1)
													{
														if (func_327(Global_22550.f_4433[(iVar22 + iVar14)], bVar32, 1, &fVar36, &fVar37, bParam7))
														{
															func_313(Global_22550.f_4433[(iVar22 + iVar14)], bVar32, &iVar45, &iVar46, &iVar47, &iVar48);
															if (Global_22550.f_4433[(iVar22 + iVar14)] == 30)
															{
																GRAPHICS::DRAW_SPRITE(func_321(Global_22550.f_4433[(iVar22 + iVar14)]), func_318(Global_22550.f_4433[(iVar22 + iVar14)], bVar32), (Global_22547 + (fVar36 * 0.5f)), (((fVar35 + 0.00277776f) + (fVar37 * 0.5f)) - (0.00078125f * 11f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, false);
															}
															else if (Global_22550.f_5083[bVar8] == 2)
															{
																GRAPHICS::DRAW_SPRITE(func_321(Global_22550.f_4433[(iVar22 + iVar14)]), func_318(Global_22550.f_4433[(iVar22 + iVar14)], bVar32), ((((fVar34 + fVar40) + fVar41) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, false);
															}
															else
															{
																GRAPHICS::DRAW_SPRITE(func_321(Global_22550.f_4433[(iVar22 + iVar14)]), func_318(Global_22550.f_4433[(iVar22 + iVar14)], bVar32), (((fVar34 + fVar40) + fVar41) - (0.00078125f * 12f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, false);
															}
														}
													}
													fVar40 = (fVar40 + (12f * 0.00078125f));
												}
											}
											iVar14++;
										}
									}
								}
								bVar39 = true;
								iVar19++;
								iVar14 = 0;
								while (iVar14 < 4)
								{
									if (Global_22550.f_2124[iVar24 /*5*/][iVar14] == 1)
									{
										iVar19++;
									}
									else if (Global_22550.f_2124[iVar24 /*5*/][iVar14] == 8)
									{
										iVar19++;
									}
									else if (Global_22550.f_2124[iVar24 /*5*/][iVar14] == 2)
									{
										iVar20++;
									}
									else if (Global_22550.f_2124[iVar24 /*5*/][iVar14] == 3)
									{
										iVar21++;
									}
									else if (Global_22550.f_2124[iVar24 /*5*/][iVar14] == 4)
									{
										iVar22++;
									}
									else if (Global_22550.f_2124[iVar24 /*5*/][iVar14] == 5)
									{
										iVar23++;
									}
									else if (Global_22550.f_2124[iVar24 /*5*/][iVar14] == 6)
									{
										iVar23++;
									}
									else if (Global_22550.f_2124[iVar24 /*5*/][iVar14] == 7)
									{
										iVar23++;
									}
									else if (Global_22550.f_2124[iVar24 /*5*/][iVar14] == 9)
									{
										iVar23++;
									}
									iVar14++;
								}
								break;
							
							case 2:
								if (bVar33)
								{
									if (!Global_22550.f_5729)
									{
										func_304(bVar32, Global_22550.f_1610[iVar24], Global_22550.f_1867[iVar24], bVar53, 0, 0, 0);
										if (Global_22550.f_8413 && Global_22550.f_8414 == iVar6)
										{
											func_303(bVar32);
										}
										HUD::_BEGIN_TEXT_COMMAND_GET_WIDTH("NUMBER");
										unk_0x42710E9E08FA375A(Global_22550.f_3918[iVar20]);
										fVar41 = HUD::_END_TEXT_COMMAND_GET_WIDTH(true);
										fVar40 = 0f;
										if (Global_22550.f_5083[bVar8] == 2)
										{
											fVar40 = (fVar40 + ((fVar44 - fVar41) + (0.00078125f * 1f)));
										}
										else if (Global_22550.f_5083[bVar8] == 0)
										{
											fVar40 = (fVar40 + (((fVar44 - fVar34) * 0.5f) - (fVar41 * 0.5f)));
										}
										Global_22550.f_8259[((iVar9 * Global_22550.f_5226) + bVar8)] = fVar40;
										Global_22550.f_8300[((iVar9 * Global_22550.f_5226) + bVar8)] = fVar41;
									}
									else
									{
										fVar40 = Global_22550.f_8259[((iVar9 * Global_22550.f_5226) + bVar8)];
										fVar41 = Global_22550.f_8300[((iVar9 * Global_22550.f_5226) + bVar8)];
									}
									if (bVar52)
									{
										if (func_327(26, 1, 0, &fVar36, &fVar37, bParam7))
										{
											if (Global_22550.f_5083[bVar8] == 2)
											{
												fVar40 = (fVar40 - (fVar36 * 2f));
											}
											fVar43 = (fVar36 * 0.5f);
											if (func_327(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_313(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 1)
												{
													GRAPHICS::DRAW_SPRITE(func_321(26), func_318(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, false);
												}
											}
										}
										if (func_327(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar40 = (fVar40 + fVar36);
											fVar43 = (fVar36 * 0.5f);
											if (func_327(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_313(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 1)
												{
													GRAPHICS::DRAW_SPRITE(func_321(27), func_318(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, false);
												}
											}
										}
									}
									if (iVar5 == 1)
									{
										func_304(bVar32, Global_22550.f_1610[iVar24], Global_22550.f_1867[iVar24], bVar53, 0, 0, 0);
										func_301((fVar34 + fVar40), fVar35, "NUMBER", Global_22550.f_3918[iVar20], 0);
									}
								}
								bVar39 = true;
								iVar20++;
								break;
							
							case 3:
								if (bVar33)
								{
									if (!Global_22550.f_5729)
									{
										func_304(bVar32, Global_22550.f_1610[iVar24], Global_22550.f_1867[iVar24], bVar53, 0, 0, 0);
										if (Global_22550.f_8413 && Global_22550.f_8414 == iVar6)
										{
											func_303(bVar32);
										}
										HUD::_BEGIN_TEXT_COMMAND_GET_WIDTH("NUMBER");
										GRAPHICS::SET_SCRIPT_GFX_ALIGN(Global_22550.f_4175[iVar21], Global_22550.f_4304[iVar21]);
										fVar41 = HUD::_END_TEXT_COMMAND_GET_WIDTH(true);
										fVar40 = 0f;
										if (Global_22550.f_5083[bVar8] == 2)
										{
											fVar40 = (fVar40 + ((fVar44 - fVar41) + (0.00078125f * 1f)));
										}
										else if (Global_22550.f_5083[bVar8] == 0)
										{
											fVar40 = (fVar40 + (((fVar44 - fVar34) * 0.5f) - (fVar41 * 0.5f)));
										}
										Global_22550.f_8259[((iVar9 * Global_22550.f_5226) + bVar8)] = fVar40;
										Global_22550.f_8300[((iVar9 * Global_22550.f_5226) + bVar8)] = fVar41;
									}
									else
									{
										fVar40 = Global_22550.f_8259[((iVar9 * Global_22550.f_5226) + bVar8)];
										fVar41 = Global_22550.f_8300[((iVar9 * Global_22550.f_5226) + bVar8)];
									}
									if (bVar52)
									{
										if (func_327(26, 1, 0, &fVar36, &fVar37, 0))
										{
											if (Global_22550.f_5083[bVar8] == 2)
											{
												fVar40 = (fVar40 - (fVar36 * 2f));
											}
											fVar43 = (fVar36 * 0.5f);
											if (func_327(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_313(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 1)
												{
													GRAPHICS::DRAW_SPRITE(func_321(26), func_318(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, false);
												}
											}
										}
										if (func_327(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar40 = (fVar40 + fVar36);
											fVar43 = (fVar36 * 0.5f);
											if (func_327(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_313(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 1)
												{
													GRAPHICS::DRAW_SPRITE(func_321(27), func_318(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, false);
												}
											}
										}
									}
									func_304(bVar32, Global_22550.f_1610[iVar24], Global_22550.f_1867[iVar24], bVar53, 0, 0, 0);
									func_300((fVar34 + fVar40), fVar35, "NUMBER", Global_22550.f_4175[iVar21], Global_22550.f_4304[iVar21]);
								}
								bVar39 = true;
								iVar21++;
								break;
							
							case 4:
								if (bVar33)
								{
									if (func_327(Global_22550.f_4433[iVar22], bVar32, 0, &fVar36, &fVar37, bParam7))
									{
										if (!Global_22550.f_5729)
										{
											fVar42 = fVar36;
											fVar40 = 0f;
											if (Global_22550.f_5083[bVar8] == 2)
											{
												fVar40 = (fVar40 + ((fVar44 - fVar42) + (0.00078125f * 1f)));
											}
											else if (Global_22550.f_5083[bVar8] == 0)
											{
												fVar40 = (fVar40 + (((fVar44 - fVar34) * 0.5f) - (fVar42 * 0.5f)));
											}
											Global_22550.f_8259[((iVar9 * Global_22550.f_5226) + bVar8)] = fVar40;
											Global_22550.f_8341[((iVar9 * Global_22550.f_5226) + bVar8)] = fVar42;
										}
										else
										{
											fVar40 = Global_22550.f_8259[((iVar9 * Global_22550.f_5226) + bVar8)];
											fVar42 = Global_22550.f_8341[((iVar9 * Global_22550.f_5226) + bVar8)];
										}
										if (bVar52)
										{
											if (func_327(26, 1, 0, &fVar36, &fVar37, bParam7))
											{
												if (Global_22550.f_5083[bVar8] == 2)
												{
													fVar40 = (fVar40 - (fVar36 * 2f));
												}
												fVar43 = (fVar36 * 0.5f);
												if (func_327(26, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_313(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
													if (iVar5 == 1)
													{
														GRAPHICS::DRAW_SPRITE(func_321(26), func_318(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, false);
													}
												}
											}
											if (func_327(27, 1, 0, &fVar36, &fVar37, bParam7))
											{
												fVar40 = (fVar40 + fVar36);
												fVar43 = (fVar36 * 0.5f);
												if (func_327(27, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_313(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
													if (iVar5 == 1)
													{
														GRAPHICS::DRAW_SPRITE(func_321(27), func_318(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, false);
													}
												}
											}
										}
										if (iVar5 == 1)
										{
											if (func_327(Global_22550.f_4433[iVar22], bVar32, 1, &fVar36, &fVar37, bParam7))
											{
												func_313(Global_22550.f_4433[iVar22], bVar32, &iVar45, &iVar46, &iVar47, &iVar48);
												GRAPHICS::DRAW_SPRITE(func_321(Global_22550.f_4433[iVar22]), func_318(Global_22550.f_4433[iVar22], bVar32), ((fVar34 + fVar40) + (fVar36 * 0.5f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), (fVar36 * func_299(Global_22550.f_4433[iVar22])), (fVar37 * func_299(Global_22550.f_4433[iVar22])), 0f, iVar45, iVar46, iVar47, iVar48, false);
											}
										}
									}
								}
								bVar39 = true;
								iVar22++;
								break;
							
							case 5:
								bVar39 = true;
								break;
						}
						if (Global_22550.f_5056[bVar8] == 5)
						{
							if (Global_22550.f_5068[bVar8] > 0.05f)
							{
								fVar34 = (fVar34 + Global_22550.f_5068[bVar8]);
							}
							else
							{
								fVar34 = (fVar34 + 0.05f);
							}
						}
						else
						{
							fVar34 = (fVar34 + Global_22550.f_5068[bVar8]);
							if (Global_22550.f_5075[bVar8])
							{
								if (func_327(26, 1, 1, &fVar36, &fVar37, bParam7))
								{
									fVar34 = (fVar34 - fVar36);
								}
							}
						}
					}
					else
					{
						fVar34 = (fVar34 + Global_22550.f_5068[bVar8]);
					}
					bVar8++;
				}
				if (bVar39)
				{
					if (bVar33)
					{
						Global_22550.f_8038[iVar9] = iVar6;
						Global_22550.f_5740 = iVar6;
						iVar9++;
						if (Global_22550.f_5356[iVar6])
						{
							iVar13++;
						}
						if (Global_22550.f_5745[iVar6] != 0f)
						{
							fVar67 = (fVar67 + Global_22550.f_5745[iVar6]);
						}
						else
						{
							fVar67 = (fVar67 + 0.034722f);
						}
					}
					if (!Global_22550.f_5728)
					{
						Global_22550.f_5485[iVar6] = 1;
						if (Global_22550.f_5227[iVar6])
						{
							if (bVar32)
							{
								Global_22550.f_5734 = 0;
							}
						}
						else
						{
							iVar11++;
							if (bVar32)
							{
								Global_22550.f_5734 = iVar11;
							}
						}
						iVar10++;
					}
				}
				iVar7++;
			}
			if (!Global_22550.f_5728)
			{
				Global_22550.f_5730 = ((fVar57 + fVar67) + (0.00277776f * IntToFloat(iVar12)));
				Global_22550.f_5733 = iVar11;
				Global_22550.f_5731 = iVar10;
				Global_22550.f_5728 = 1;
			}
		}
		if (!Global_22550.f_5729)
		{
			Global_22550.f_5732 = iVar9;
			Global_22550.f_5729 = 1;
		}
		iVar5++;
	}
	Global_22550.f_5876 = fVar49;
	Global_22550.f_5878 = MISC::GET_GAME_TIMER();
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(Global_22550.f_5876);
	if (!Global_22550.f_8382)
	{
		func_213(0);
	}
	Global_22550.f_8382 = 0;
	if (bParam2)
	{
		unk_0x4CB4237D8858ADA6(10);
	}
	unk_0x4CB4237D8858ADA6(6);
	unk_0x4CB4237D8858ADA6(7);
	unk_0x4CB4237D8858ADA6(9);
	unk_0x4CB4237D8858ADA6(8);
	if (bParam0)
	{
		func_298(1);
	}
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT();
}

void func_298(int iParam0)
{
	Global_1378744.f_1121 = iParam0;
}

float func_299(int iParam0)
{
	switch (iParam0)
	{
		case 35:
		case 34:
		case 48:
		case 47:
		case 42:
		case 36:
		case 37:
		case 39:
		case 40:
		case 38:
		case 53:
		case 44:
		case 45:
		case 46:
			return 0.85f;
			break;
	}
	return 1f;
}

void func_300(char* sParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(sParam2);
	GRAPHICS::SET_SCRIPT_GFX_ALIGN(iParam3, iParam4);
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam0, fParam1, 0);
}

void func_301(char* sParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(sParam2);
	unk_0x42710E9E08FA375A(iParam3);
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam0, fParam1, iParam4);
}

var func_302()
{
	return GRAPHICS::DRAW_RECT(-1762644250);
}

void func_303(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	if (bParam0)
	{
		HUD::GET_HUD_COLOUR(Global_22550.f_8410[0], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	else
	{
		HUD::GET_HUD_COLOUR(Global_22550.f_8410[1], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, 255);
}

void func_304(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (bParam2)
	{
		if (bParam3)
		{
			func_305(Global_22550.f_6011[iParam4], &iVar0, &iVar1, &iVar2);
			if ((iVar0 < 20 && iVar1 < 20) && iVar2 < 20)
			{
				if (bParam0 == 0)
				{
					HUD::GET_HUD_COLOUR(1, &iVar0, &iVar1, &iVar2, &iVar3);
				}
			}
			else if ((iVar0 > 230 && iVar1 > 230) && iVar2 > 230)
			{
				if (bParam0)
				{
					iVar0 = 0;
					iVar1 = 0;
					iVar2 = 0;
				}
			}
			HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, 255);
		}
		else if (bParam1)
		{
			if (bParam0)
			{
				HUD::GET_HUD_COLOUR(14, &iVar0, &iVar1, &iVar2, &iVar3);
				HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, 255);
			}
			else
			{
				HUD::GET_HUD_COLOUR(12, &iVar0, &iVar1, &iVar2, &iVar3);
				HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, 255);
			}
		}
		else if (bParam0)
		{
			HUD::SET_TEXT_COLOUR(155, 155, 155, 255);
		}
		else
		{
			HUD::SET_TEXT_COLOUR(155, 155, 155, 255);
		}
	}
	else if (bParam1)
	{
		if (bParam0)
		{
			HUD::SET_TEXT_COLOUR(0, 0, 0, SYSTEM::FLOOR((255f * 0.8f)));
		}
		else
		{
			HUD::GET_HUD_COLOUR(1, &iVar0, &iVar1, &iVar2, &iVar3);
			HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, iVar3);
		}
	}
	else if (bParam0)
	{
		HUD::SET_TEXT_COLOUR(155, 155, 155, 255);
	}
	else
	{
		HUD::SET_TEXT_COLOUR(155, 155, 155, 255);
	}
	HUD::SET_TEXT_SCALE(0f, 0.35f);
	HUD::SET_TEXT_JUSTIFICATION(1);
	if (bParam5)
	{
		HUD::SET_TEXT_SCALE(0f, 0.425f);
		HUD::SET_TEXT_FONT(4);
	}
	else if (bParam6)
	{
		HUD::SET_TEXT_SCALE(0f, 0.425f);
		HUD::SET_TEXT_FONT(6);
	}
	else
	{
		HUD::SET_TEXT_FONT(0);
	}
	HUD::SET_TEXT_WRAP(0f, 1f);
	HUD::SET_TEXT_CENTRE(false);
	HUD::SET_TEXT_DROPSHADOW(0, 0, 0, 0, 0);
	HUD::SET_TEXT_EDGE(0, 0, 0, 0, 0);
}

void func_305(int iParam0, var uParam1, var uParam2, var uParam3)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = 8;
			*uParam2 = 8;
			*uParam3 = 8;
			break;
		
		case 1:
			*uParam1 = 37;
			*uParam2 = 37;
			*uParam3 = 39;
			break;
		
		case 22:
			*uParam1 = 140;
			*uParam2 = 146;
			*uParam3 = 154;
			break;
		
		case 23:
			*uParam1 = 91;
			*uParam2 = 93;
			*uParam3 = 94;
			break;
		
		case 6:
			*uParam1 = 81;
			*uParam2 = 84;
			*uParam3 = 89;
			break;
		
		case 111:
			*uParam1 = 240;
			*uParam2 = 240;
			*uParam3 = 240;
			break;
		
		case 28:
			*uParam1 = 150;
			*uParam2 = 8;
			*uParam3 = 0;
			break;
		
		case 34:
			*uParam1 = 38;
			*uParam2 = 3;
			*uParam3 = 6;
			break;
		
		case 88:
			*uParam1 = 245;
			*uParam2 = 137;
			*uParam3 = 15;
			break;
		
		case 45:
			*uParam1 = 74;
			*uParam2 = 22;
			*uParam3 = 7;
			break;
		
		case 56:
			*uParam1 = 45;
			*uParam2 = 58;
			*uParam3 = 53;
			break;
		
		case 58:
			*uParam1 = 71;
			*uParam2 = 120;
			*uParam3 = 60;
			break;
		
		case 54:
			*uParam1 = 77;
			*uParam2 = 98;
			*uParam3 = 104;
			break;
		
		case 73:
			*uParam1 = 14;
			*uParam2 = 49;
			*uParam3 = 109;
			break;
		
		case 68:
			*uParam1 = 22;
			*uParam2 = 34;
			*uParam3 = 72;
			break;
		
		case 140:
			*uParam1 = 0;
			*uParam2 = 174;
			*uParam3 = 239;
			break;
		
		case 131:
			*uParam1 = 255;
			*uParam2 = 183;
			*uParam3 = 0;
			break;
		
		case 90:
			*uParam1 = 142;
			*uParam2 = 140;
			*uParam3 = 70;
			break;
		
		case 97:
			*uParam1 = 156;
			*uParam2 = 141;
			*uParam3 = 113;
			break;
		
		case 89:
			*uParam1 = 145;
			*uParam2 = 115;
			*uParam3 = 71;
			break;
		
		case 105:
			*uParam1 = 98;
			*uParam2 = 68;
			*uParam3 = 40;
			break;
		
		case 100:
			*uParam1 = 124;
			*uParam2 = 27;
			*uParam3 = 68;
			break;
		
		case 99:
			*uParam1 = 114;
			*uParam2 = 42;
			*uParam3 = 63;
			break;
		
		case 136:
			*uParam1 = 246;
			*uParam2 = 151;
			*uParam3 = 153;
			break;
		
		case 49:
			*uParam1 = 32;
			*uParam2 = 32;
			*uParam3 = 44;
			break;
		
		case 146:
			*uParam1 = 26;
			*uParam2 = 1;
			*uParam3 = 23;
			break;
		
		default:
			*uParam1 = 255;
			*uParam2 = 255;
			*uParam3 = 255;
			break;
	}
}

void func_306(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (!func_331(&iVar0, 0, iParam1))
	{
		return;
	}
	iParam0 = iParam0;
	if (iParam3 && !func_329(bParam4, bParam8))
	{
		return;
	}
	if (func_311())
	{
		return;
	}
	if (GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU())
	{
		return;
	}
	if (iParam7 == 0)
	{
		if (func_309(PLAYER::PLAYER_ID(), 0))
		{
			return;
		}
	}
	if (ENTITY::GET_ENTITY_HEADING())
	{
		if (GRAPHICS::RESET_SCRIPT_GFX_ALIGN() == 0 || GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU())
		{
			return;
		}
	}
	if (Global_22550.f_4769 != 0)
	{
		if (PAD::_0x6CD79468A1E595C6(2))
		{
			iVar1 = 0;
			while (iVar1 < Global_22550.f_4769)
			{
				if (Global_22550.f_5026[iVar1] != 361)
				{
					StringCopy(&(Global_22550.f_4771[iVar1 /*16*/]), MOBILE::GET_MOBILE_PHONE_POSITION(2, Global_22550.f_5026[iVar1], 1), 64);
				}
				else if (Global_22550.f_5039[iVar1] != 32)
				{
					StringCopy(&(Global_22550.f_4771[iVar1 /*16*/]), MOBILE::SET_MOBILE_PHONE_POSITION(2.802597E-45f, Global_22550.f_5039[iVar1], 1.401298E-45f), 64);
				}
				iVar1++;
			}
			Global_22550.f_4770 = 0;
		}
		if (!Global_22550.f_4770)
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_22550.f_5660[iVar0 /*10*/], "CLEAR_ALL");
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_22550.f_5660[iVar0 /*10*/], "SET_MAX_WIDTH");
			DLC::IS_DLC_PRESENT((1f - (Global_22550.f_5081 / 100f)));
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			if (ENTITY::GET_ENTITY_HEADING())
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_22550.f_5660[iVar0 /*10*/], "TOGGLE_MOUSE_BUTTONS");
				unk_0xF1B28F753235CE2A(1);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			iVar1 = 0;
			while (iVar1 < Global_22550.f_4769)
			{
				if (AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT(&(Global_22550.f_4964[iVar1 /*4*/])) != AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("PREV"))
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_22550.f_5660[iVar0 /*10*/], "SET_DATA_SLOT");
					NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE(iVar1);
					func_308(&(Global_22550.f_4771[iVar1 /*16*/]));
					iVar2 = iVar1 + 1;
					while (iVar2 < 12 && AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT(&(Global_22550.f_4964[iVar2 /*4*/])) == AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("PREV"))
					{
						func_308(&(Global_22550.f_4771[iVar2 /*16*/]));
						iVar2++;
					}
					if (Global_22550.f_5013[iVar1] == -1)
					{
						func_307(&(Global_22550.f_4964[iVar1 /*4*/]));
					}
					else
					{
						iVar3 = Global_22550.f_5013[iVar1];
						if (iParam2 >= 0)
						{
							iVar3 = iParam2;
						}
						MISC::UPDATE_ONSCREEN_KEYBOARD(&(Global_22550.f_4964[iVar1 /*4*/]));
						if (bParam5)
						{
							NETWORK::UGC_GET_CACHED_DESCRIPTION(iVar3, 70);
						}
						else
						{
							unk_0x42710E9E08FA375A(iVar3);
						}
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT();
					}
					if (ENTITY::GET_ENTITY_HEADING())
					{
						if (Global_22550.f_5026[iVar1] != 361 && unk_0xCE990E643CD9D0E5(Global_22550.f_5052, iVar1))
						{
							unk_0xF1B28F753235CE2A(1);
							NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE(Global_22550.f_5026[bVar1]);
						}
						else
						{
							unk_0xF1B28F753235CE2A(0);
							NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE(361);
						}
					}
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				bVar1++;
			}
			if (AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT(&(Global_4269680.f_16)) != AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT(""))
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_22550.f_5660[iVar0 /*10*/], "SET_DATA_SLOT");
				NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE(Global_22550.f_4769);
				func_308(&Global_4269680);
				if (Global_4269680.f_20 == -1)
				{
					func_307(&(Global_4269680.f_16));
				}
				else
				{
					iVar4 = Global_22550.f_5013[bVar1];
					if (iParam2 >= 0)
					{
						iVar4 = iParam2;
					}
					MISC::UPDATE_ONSCREEN_KEYBOARD(&(Global_4269680.f_16));
					if (bParam5)
					{
						NETWORK::UGC_GET_CACHED_DESCRIPTION(iVar4, 70);
					}
					else
					{
						unk_0x42710E9E08FA375A(iVar4);
					}
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT();
				}
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_22550.f_5660[iVar0 /*10*/], "SET_BACKGROUND_COLOUR");
			NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE(0);
			NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE(0);
			NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE(0);
			NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE(80);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_22550.f_5660[iVar0 /*10*/], "DRAW_INSTRUCTIONAL_BUTTONS");
			if (Global_22550.f_5082)
			{
				NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE(1);
			}
			else
			{
				NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE(0);
			}
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			Global_22550.f_4770 = 1;
		}
		bVar1 = false;
		while (bVar1 < Global_22550.f_4769)
		{
			if (Global_22550.f_5013[bVar1] != -1)
			{
				if (iParam2 > 0)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_22550.f_5660[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
					NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE(bVar1);
					MISC::UPDATE_ONSCREEN_KEYBOARD(&(Global_22550.f_4964[bVar1 /*4*/]));
					if (bParam5)
					{
						NETWORK::UGC_GET_CACHED_DESCRIPTION(iParam2, 70);
					}
					else
					{
						unk_0x42710E9E08FA375A(iParam2);
					}
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT();
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
			}
			bVar1++;
		}
		if (Global_4269680.f_20 != -1)
		{
			if (iParam2 > 0)
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_22550.f_5660[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
				NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE(bVar1);
				MISC::UPDATE_ONSCREEN_KEYBOARD(&(Global_4269680.f_16));
				if (bParam5)
				{
					NETWORK::UGC_GET_CACHED_DESCRIPTION(iParam2, 70);
				}
				else
				{
					unk_0x42710E9E08FA375A(iParam2);
				}
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT();
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
		}
		PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(76, 66);
		GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(0f, 0f, 0f, 0f);
		if (bParam6)
		{
			if (!Global_22550.f_8417)
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(15, 0f, -0.0375f);
				Global_22550.f_8417 = 1;
			}
		}
		else if (Global_22550.f_8417)
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(15);
			Global_22550.f_8417 = 0;
		}
		HUD::END_TEXT_COMMAND_DISPLAY_TEXT();
		if (Global_22550.f_5055)
		{
			PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(82, 66);
			GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(0f, 0f, 0f, 0f);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(Global_22550.f_5660[iVar0 /*10*/], Global_22550.f_5053, Global_22550.f_5054, 1f, 1f, 255, 255, 255, 255, 0);
			HUD::END_TEXT_COMMAND_DISPLAY_TEXT();
		}
		else
		{
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING(Global_22550.f_5660[iVar0 /*10*/], 255, 255, 255, 255, 0);
		}
	}
}

void func_307(var uParam0)
{
	MISC::UPDATE_ONSCREEN_KEYBOARD(uParam0);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT();
}

void func_308(bool bParam0)
{
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam0);
}

bool func_309(bool bParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_310(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1590682[iParam0 /*883*/].f_211 == 8;
	}
	if (iParam1 == 1)
	{
		if (AUDIO::PLAY_STREAM_FROM_VEHICLE(iParam0))
		{
			bVar0 = unk_0x6CC163E30ECE0790(bParam0) == 8;
		}
	}
	return bVar0;
}

int func_310(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_140();
	}
	if (Global_1312876[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312757[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_311()
{
	struct<3> Var0;
	
	if (Global_19681.f_1 > 3)
	{
		return 1;
	}
	if (func_312())
	{
		Var0 = { 0f, -500f, 0f };
		unk_0x1F1B1269BB6217F7(&Var0);
		if (Global_19626 == 0)
		{
			if (Var0.f_1 > -119f)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else if (Var0.f_1 > -101f)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_312()
{
	if (INTERIOR::GET_INTERIOR_AT_COORDS(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_313(int iParam0, bool bParam1, int* iParam2, int* iParam3, int* iParam4, int* iParam5)
{
	HUD::GET_HUD_COLOUR(1, iParam2, iParam3, iParam4, iParam5);
	*iParam5 = 255;
	switch (iParam0)
	{
		case 28:
			*iParam2 = 194;
			*iParam3 = 80;
			*iParam4 = 80;
			break;
		
		case 15:
		case 4:
		case 16:
		case 26:
		case 27:
		case 35:
		case 34:
		case 48:
		case 47:
		case 42:
		case 36:
		case 37:
		case 53:
		case 39:
		case 40:
		case 38:
		case 44:
		case 45:
		case 46:
		case 52:
		case 56:
		case 57:
		case 58:
		case 59:
			if (bParam1)
			{
				*iParam2 = 0;
				*iParam3 = 0;
				*iParam4 = 0;
			}
			break;
		
		case 54:
			*iParam5 = 100;
			break;
		
		case 62:
			*iParam5 = 100;
			break;
		
		case 55:
			HUD::GET_HUD_COLOUR(24, iParam2, iParam3, iParam4, iParam5);
			*iParam5 = 255;
			break;
	}
}

void func_314(float fParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	HUD::GET_HUD_COLOUR(1, &iVar0, &iVar1, &iVar2, &iVar3);
	HUD::SET_TEXT_FONT(0);
	HUD::SET_TEXT_SCALE(0f, 0.35f);
	HUD::SET_TEXT_LEADING(2);
	HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, iVar3);
	HUD::SET_TEXT_WRAP(fParam0, ((Global_22547 + Global_22549) - 0.0046875f));
	HUD::SET_TEXT_CENTRE(false);
	HUD::SET_TEXT_DROPSHADOW(0, 0, 0, 0, 0);
	HUD::SET_TEXT_EDGE(0, 0, 0, 0, 0);
}

void func_315(char* sParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(sParam2);
	unk_0x42710E9E08FA375A(uParam3);
	unk_0x42710E9E08FA375A(uParam4);
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam0, fParam1, 0);
}

float func_316(char* sParam0, int iParam1, int iParam2)
{
	if (!AUDIO::PRELOAD_SCRIPT_CONVERSATION(sParam0))
	{
		if (AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_317();
	HUD::_BEGIN_TEXT_COMMAND_GET_WIDTH(sParam0);
	unk_0x42710E9E08FA375A(uParam1);
	unk_0x42710E9E08FA375A(uParam2);
	return HUD::_END_TEXT_COMMAND_GET_WIDTH(true);
}

void func_317()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	HUD::GET_HUD_COLOUR(1, &iVar0, &iVar1, &iVar2, &iVar3);
	if (Global_22550.f_8392)
	{
		iVar0 = Global_22550.f_8388;
		iVar1 = Global_22550.f_8389;
		iVar2 = Global_22550.f_8390;
		iVar3 = Global_22550.f_8391;
	}
	HUD::SET_TEXT_FONT(0);
	HUD::SET_TEXT_SCALE(0f, 0.35f);
	HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, iVar3);
	HUD::SET_TEXT_WRAP((Global_22547 + 0.0046875f), ((Global_22547 + Global_22549) - 0.0046875f));
	HUD::SET_TEXT_CENTRE(false);
	HUD::SET_TEXT_DROPSHADOW(0, 0, 0, 0, 0);
	HUD::SET_TEXT_EDGE(0, 0, 0, 0, 0);
}

var func_318(int iParam0, bool bParam1)
{
	char* sVar0[2];
	var uVar1;
	struct<13> Var2;
	
	if (!CAM::IS_SCREEN_FADED_OUT(&(Global_22550.f_7029[iParam0 /*16*/])))
	{
		if (AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT(&(Global_22550.f_7029[iParam0 /*16*/])) == joaat("CREW_LOGO"))
		{
			Var2 = { func_320(PLAYER::PLAYER_ID()) };
			if (NETWORK::NETWORK_CLAN_GET_EMBLEM_TXD_NAME(&Var2, &uVar1))
			{
				return func_319(&uVar1);
			}
		}
		else
		{
			return func_319(&(Global_22550.f_7029[iParam0 /*16*/]));
		}
	}
	switch (iParam0)
	{
		case 3:
			sVar0[0] = "MP_hostCrown";
			sVar0[1] = "MP_hostCrown";
			break;
		
		case 21:
			sVar0[0] = "MP_SpecItem_Coke";
			sVar0[1] = "MP_SpecItem_Coke";
			break;
		
		case 22:
			sVar0[0] = "MP_SpecItem_Heroin";
			sVar0[1] = "MP_SpecItem_Heroin";
			break;
		
		case 23:
			sVar0[0] = "MP_SpecItem_Weed";
			sVar0[1] = "MP_SpecItem_Weed";
			break;
		
		case 24:
			sVar0[0] = "MP_SpecItem_Meth";
			sVar0[1] = "MP_SpecItem_Meth";
			break;
		
		case 25:
			sVar0[0] = "MP_SpecItem_Cash";
			sVar0[1] = "MP_SpecItem_Cash";
			break;
		
		case 1:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 2:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 4:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 6:
			sVar0[0] = "Shop_Box_CrossB";
			sVar0[1] = "Shop_Box_Cross";
			break;
		
		case 7:
			sVar0[0] = "Shop_Box_BlankB";
			sVar0[1] = "Shop_Box_Blank";
			break;
		
		case 5:
			sVar0[0] = "Shop_Box_TickB";
			sVar0[1] = "Shop_Box_Tick";
			break;
		
		case 8:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 9:
			sVar0[0] = "Shop_Clothing_Icon_B";
			sVar0[1] = "Shop_Clothing_Icon_A";
			break;
		
		case 10:
			sVar0[0] = "Shop_GunClub_Icon_B";
			sVar0[1] = "Shop_GunClub_Icon_A";
			break;
		
		case 17:
			sVar0[0] = "Shop_Ammo_Icon_B";
			sVar0[1] = "Shop_Ammo_Icon_A";
			break;
		
		case 18:
			sVar0[0] = "Shop_Armour_Icon_B";
			sVar0[1] = "Shop_Armour_Icon_A";
			break;
		
		case 19:
			sVar0[0] = "Shop_Health_Icon_B";
			sVar0[1] = "Shop_Health_Icon_A";
			break;
		
		case 20:
			sVar0[0] = "Shop_MakeUp_Icon_B";
			sVar0[1] = "Shop_MakeUp_Icon_A";
			break;
		
		case 11:
			sVar0[0] = "Shop_Tattoos_Icon_B";
			sVar0[1] = "Shop_Tattoos_Icon_A";
			break;
		
		case 12:
			sVar0[0] = "Shop_Garage_Icon_B";
			sVar0[1] = "Shop_Garage_Icon_A";
			break;
		
		case 13:
			sVar0[0] = "Shop_Garage_Bike_Icon_B";
			sVar0[1] = "Shop_Garage_Bike_Icon_A";
			break;
		
		case 14:
			sVar0[0] = "Shop_Barber_Icon_B";
			sVar0[1] = "Shop_Barber_Icon_A";
			break;
		
		case 15:
			sVar0[0] = "shop_Lock";
			sVar0[1] = "shop_Lock";
			break;
		
		case 16:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 26:
			sVar0[0] = "arrowleft";
			sVar0[1] = "arrowleft";
			break;
		
		case 27:
			sVar0[0] = "arrowright";
			sVar0[1] = "arrowright";
			break;
		
		case 28:
			sVar0[0] = "MP_AlertTriangle";
			sVar0[1] = "MP_AlertTriangle";
			break;
		
		case 29:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 31:
			sVar0[0] = "Shop_Michael_Icon_B";
			sVar0[1] = "Shop_Michael_Icon_A";
			break;
		
		case 32:
			sVar0[0] = "Shop_Franklin_Icon_B";
			sVar0[1] = "Shop_Franklin_Icon_A";
			break;
		
		case 33:
			sVar0[0] = "Shop_Trevor_Icon_B";
			sVar0[1] = "Shop_Trevor_Icon_A";
			break;
		
		case 51:
			sVar0[0] = "SaleIcon";
			sVar0[1] = "SaleIcon";
			break;
		
		case 52:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 54:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 55:
			sVar0[0] = "Shop_Lock_Arena";
			sVar0[1] = "Shop_Lock_Arena";
			break;
		
		case 56:
			sVar0[0] = "Card_Suit_Clubs";
			sVar0[1] = "Card_Suit_Clubs";
			break;
		
		case 57:
			sVar0[0] = "Card_Suit_Hearts";
			sVar0[1] = "Card_Suit_Hearts";
			break;
		
		case 58:
			sVar0[0] = "Card_Suit_Spades";
			sVar0[1] = "Card_Suit_Spades";
			break;
		
		case 59:
			sVar0[0] = "Card_Suit_Diamonds";
			sVar0[1] = "Card_Suit_Diamonds";
			break;
		
		case 60:
			sVar0[0] = "Shop_Art_Icon_B";
			sVar0[1] = "Shop_Art_Icon_A";
			break;
		
		case 62:
			sVar0[0] = "Shop_Art_Icon_B";
			sVar0[1] = "Shop_Art_Icon_A";
			break;
		
		case 61:
			sVar0[0] = "Shop_Chips_A";
			sVar0[1] = "Shop_Chips_B";
			break;
		
		case 0:
			sVar0[0] = "";
			sVar0[1] = "";
			break;
	}
	if (bParam1)
	{
		return sVar0[0];
	}
	return sVar0[1];
}

var func_319(var uParam0)
{
	return uParam0;
}

struct<13> func_320(int iParam0)
{
	struct<13> Var0;
	
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
	return Var0;
}

char* func_321(int iParam0)
{
	var uVar0;
	struct<13> Var1;
	
	if (!CAM::IS_SCREEN_FADED_OUT(&(Global_22550.f_6020[iParam0 /*16*/])))
	{
		if (AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT(&(Global_22550.f_6020[iParam0 /*16*/])) == joaat("CREW_LOGO"))
		{
			Var1 = { func_320(PLAYER::PLAYER_ID()) };
			NETWORK::NETWORK_CLAN_GET_EMBLEM_TXD_NAME(&Var1, &uVar0);
			return func_319(&uVar0);
		}
		else
		{
			return func_319(&(Global_22550.f_6020[iParam0 /*16*/]));
		}
	}
	if (iParam0 == 51)
	{
		return "MPShopSale";
	}
	return "CommonMenu";
}

void func_322(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4, bool bParam5)
{
	int iVar0;
	float fVar1;
	float fVar2;
	var uVar3;
	float fVar4;
	
	if (Global_22550.f_5218 > iParam0)
	{
		return;
	}
	if (Global_22550.f_5218 >= 128)
	{
		return;
	}
	if (Global_22550.f_5220 >= 256)
	{
		return;
	}
	if (Global_22550.f_5743 < Global_22550.f_5741)
	{
		return;
	}
	if (Global_22550.f_5218 != iParam0)
	{
		Global_22550.f_5218 = iParam0;
		Global_22550.f_5219 = 0;
	}
	iVar0 = Global_22550.f_5056[Global_22550.f_5219];
	if (iVar0 != 1)
	{
		while (Global_22550.f_5219 < 4 && iVar0 != 1)
		{
			Global_22550.f_5219++;
			iVar0 = Global_22550.f_5056[Global_22550.f_5219];
		}
		if (iVar0 != 1)
		{
			return;
		}
	}
	StringCopy(&(Global_22550.f_73[Global_22550.f_5220 /*6*/]), sParam1, 24);
	if (!CAM::IS_SCREEN_FADED_OUT(sParam1) && !unk_0x3030AE9FCF1BC243(sParam1))
	{
	}
	Global_22550.f_1610[Global_22550.f_5220] = bParam3;
	Global_22550.f_1867[Global_22550.f_5220] = iParam4;
	Global_22550.f_5220++;
	if (!bParam3)
	{
		func_325(Global_22550.f_5218, 1);
	}
	else
	{
		func_325(Global_22550.f_5218, 0);
	}
	if (iParam2 == 0)
	{
		fVar1 = func_324(&(Global_22550.f_73[Global_22550.f_5220 /*6*/]));
		if (Global_22550.f_5075[Global_22550.f_5219])
		{
			func_327(26, 1, 0, &fVar2, &uVar3, 0);
			fVar1 = (fVar1 + (fVar2 * 2f));
		}
		if (fVar1 > Global_22550.f_5068[Global_22550.f_5219])
		{
			Global_22550.f_5068[Global_22550.f_5219] = fVar1;
		}
	}
	if (bParam5)
	{
		if (iParam2 == 0)
		{
			fVar4 = func_323(&(Global_22550.f_73[Global_22550.f_5220 /*6*/]));
			if (fVar4 > Global_22550.f_5745[iParam0])
			{
				Global_22550.f_5745[iParam0] = fVar4;
			}
		}
	}
	unk_0xBE20AB8238688965(&(Global_22550.f_5089[iParam0]), Global_22550.f_5219);
	Global_22550.f_5219++;
	Global_22550.f_5744 = 1;
	Global_22550.f_5742 = (Global_22550.f_5220 - 1);
	Global_22550.f_5743 = 0;
	Global_22550.f_5741 = iParam2;
}

float func_323(char* sParam0)
{
	if (!unk_0x3030AE9FCF1BC243(sParam0))
	{
	}
	return HUD::_GET_TEXT_SCALE_HEIGHT(0.35f, 0);
}

float func_324(char* sParam0)
{
	if (!AUDIO::PRELOAD_SCRIPT_CONVERSATION(sParam0))
	{
		if (AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_304(0, 1, 0, 0, 0, 0, 0);
	HUD::_BEGIN_TEXT_COMMAND_GET_WIDTH(sParam0);
	return HUD::_END_TEXT_COMMAND_GET_WIDTH(true);
}

void func_325(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iParam0) / 32f));
	if (bParam1)
	{
		unk_0xBE20AB8238688965(&(Global_22550.f_6015[iVar0]), (iParam0 - iVar0 * 32));
	}
	else
	{
		VEHICLE::IS_VEHICLE_DRIVEABLE(&(Global_22550.f_6015[iVar0]), (iParam0 - iVar0 * 32));
	}
}

int func_326()
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	SYSTEM::CEIL(&iVar0, &iVar1);
	fVar2 = (SYSTEM::TO_FLOAT(iVar0) / SYSTEM::TO_FLOAT(iVar1));
	if (fVar2 > 3.5f)
	{
		return 1;
	}
	return 0;
}

int func_327(int iParam0, bool bParam1, bool bParam2, float fParam3, float fParam4, bool bParam5)
{
	char cVar0[64];
	char cVar1[64];
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	struct<3> Var7;
	
	StringCopy(&cVar0, func_321(iParam0), 64);
	StringCopy(&cVar1, func_318(iParam0, bParam1), 64);
	if (AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT(&cVar1) != 0)
	{
		fVar4 = 1f;
		if (bParam5)
		{
			SYSTEM::CEIL(&iVar2, &iVar3);
			fVar5 = unk_0x8940B46482DD0A7D(0);
			if (func_326())
			{
				iVar2 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar3) * fVar5));
			}
			fVar6 = (SYSTEM::TO_FLOAT(iVar2) / SYSTEM::TO_FLOAT(iVar3));
			fVar4 = (fVar6 / fVar5);
			if (func_326())
			{
				fVar4 = 1f;
			}
			if (INTERIOR::GET_INTERIOR_AT_COORDS(joaat("director_mode")) > 0)
			{
				GRAPHICS::GET_SCREEN_RESOLUTION(&iVar2, &iVar3);
			}
			iVar2 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar2) / fVar4));
			iVar3 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar3) / fVar4));
		}
		else
		{
			GRAPHICS::GET_SCREEN_RESOLUTION(&iVar2, &iVar3);
		}
		Var7 = { GRAPHICS::GET_TEXTURE_RESOLUTION(&cVar0, &cVar1) };
		Var7.x = (Var7.x * (func_328(iParam0) / fVar4));
		Var7.f_1 = (Var7.f_1 * (func_328(iParam0) / fVar4));
		if (!bParam2)
		{
			Var7.x = (Var7.x - 2f);
			Var7.f_1 = (Var7.f_1 - 2f);
		}
		if (iParam0 == 30)
		{
			Var7.x = 288f;
			Var7.f_1 = 106f;
		}
		if (iParam0 == 29 && AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT(&(Global_22550.f_7029[29 /*16*/])) == joaat("CREW_LOGO"))
		{
			Var7.x = 106f;
			Var7.f_1 = 106f;
		}
		*fParam3 = ((Var7.x / IntToFloat(iVar2)) * IntToFloat((iVar2 / iVar3)));
		*fParam4 = (((Var7.f_1 / IntToFloat(iVar3)) / (Var7.x / IntToFloat(iVar2))) * *fParam3);
		if (!bParam5)
		{
			if (!GRAPHICS::GET_IS_WIDESCREEN() && iParam0 != 30)
			{
				*fParam3 = (*fParam3 * 1.33f);
			}
		}
		if (iParam0 == 29)
		{
			if (*fParam3 > Global_22549)
			{
				*fParam4 = (*fParam4 * (Global_22549 / *fParam3));
				*fParam3 = Global_22549;
			}
		}
		return 1;
	}
	return 0;
}

float func_328(int iParam0)
{
	switch (iParam0)
	{
		case 33:
		case 4:
		case 11:
		case 31:
		case 20:
		case 15:
		case 10:
		case 12:
		case 13:
		case 32:
		case 9:
		case 5:
		case 6:
		case 7:
		case 14:
		case 18:
		case 19:
		case 17:
		case 28:
		case 26:
		case 27:
		case 52:
		case 56:
		case 57:
		case 58:
		case 59:
		case 60:
		case 62:
			return 0.5f;
			break;
		
		case 61:
			return 0.8f;
			break;
	}
	return 1f;
}

int func_329(bool bParam0, bool bParam1)
{
	if (Global_2440049.f_2005.f_701 != 0)
	{
		return 1;
	}
	if ((((((((!GRAPHICS::DRAW_SCALEFORM_MOVIE() || (func_30(8, -1) && func_330() != 65)) || (GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN() != 0 && !bParam1)) || (LOCALIZATION::GET_CURRENT_LANGUAGE() && !bParam0)) || NETWORK::IS_COMMERCE_STORE_OPEN()) || Global_77093) || Global_22550.f_8416) || CAM::IS_SCREEN_FADED_IN()) || Global_99007.f_1425)
	{
		return 0;
	}
	return 1;
}

int func_330()
{
	return Global_1312830;
}

int func_331(var uParam0, bool bParam1, int iParam2)
{
	char cVar0[64];
	void fVar1;
	int iVar2;
	int iVar3;
	
	if (iParam2 == -1)
	{
		if (MISC::SET_BIT() && NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
		{
			iParam2 = NETWORK::_0x638A3A81733086DB();
		}
	}
	StringCopy(&cVar0, TASK::IS_PED_BEING_ARRESTED(), 64);
	StringIntConCat(&cVar0, iParam2, 64);
	fVar1 = AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT(&cVar0);
	iVar3 = -1;
	iVar2 = 0;
	while (iVar2 < 6)
	{
		if (Global_22550.f_5721[iVar2] == fVar1)
		{
			*uParam0 = iVar2;
			return 1;
		}
		else if (Global_22550.f_5721[iVar2] == 0)
		{
			iVar3 = iVar2;
		}
		iVar2++;
	}
	if (bParam1)
	{
		if (iVar3 != -1)
		{
			Global_22550.f_5721[iVar3] = fVar1;
			*uParam0 = iVar3;
			return 1;
		}
	}
	return 0;
}

void func_332()
{
	if (!func_369(iLocal_295))
	{
		iLocal_295 = func_350();
		func_341(&iLocal_295, 0, 0, NETWORK::_NETWORK_GET_ROS_PRIVILEGE_25(1, 2), 0, 0, 0);
	}
	else if (!func_488(iLocal_73, 2))
	{
		if (func_333(iLocal_295))
		{
			iLocal_295 = func_350();
			func_341(&iLocal_295, 0, 0, NETWORK::_NETWORK_GET_ROS_PRIVILEGE_25(1, 2), 0, 0, 0);
			func_480(&iLocal_73, 2);
		}
	}
	else if (func_333(iLocal_295))
	{
		func_284();
		func_471(0);
	}
}

bool func_333(int iParam0)
{
	return func_334(func_350(), iParam0);
}

int func_334(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_369(iParam1) || !func_369(iParam0))
	{
		return 1;
	}
	iVar0 = func_340(iParam0);
	iVar1 = func_340(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_339(iParam0);
	iVar1 = func_339(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_338(iParam0);
	iVar1 = func_338(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_337(iParam0);
	iVar1 = func_337(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_336(iParam0);
	iVar1 = func_336(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_335(iParam0);
	iVar1 = func_335(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_335(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 20) & 63;
}

int func_336(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 14) & 63;
}

int func_337(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 9) & 31;
}

int func_338(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 4) & 31;
}

int func_339(int iParam0)
{
	return iParam0 & 15;
}

var func_340(bool bParam0)
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * func_167(unk_0xCE990E643CD9D0E5(iParam0, 31), -1, 1)) + 2011;
}

void func_341(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_340(*iParam0);
	iVar1 = func_339(*iParam0);
	iVar2 = func_338(*iParam0);
	iVar3 = func_337(*iParam0);
	iVar4 = func_336(*iParam0);
	iVar5 = func_335(*iParam0);
	if (((((iParam6 == 0 && iParam5 == 0) && iParam4 == 0) && bParam3 == 0) && iParam2 == 0) && iParam1 == 0)
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam2 < 0)
	{
		return;
	}
	if (bParam3 < 0)
	{
		return;
	}
	if (iParam4 < 0)
	{
		return;
	}
	if (iParam5 < 0)
	{
		return;
	}
	if (iParam6 < 0)
	{
		return;
	}
	iVar5 = (iVar5 + iParam1);
	while (iVar5 >= 60)
	{
		iParam2++;
		iVar5 = (iVar5 - 60);
	}
	iVar4 = (iVar4 + iParam2);
	while (iVar4 >= 60)
	{
		bParam3++;
		iVar4 = (iVar4 - 60);
	}
	iVar3 = (iVar3 + bParam3);
	while (iVar3 >= 24)
	{
		iParam4++;
		iVar3 = (iVar3 - 24);
	}
	iVar2 = (iVar2 + iParam4);
	iVar6 = func_349(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_349(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_342(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_342(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_348(uParam0, iParam1);
	func_347(uParam0, iParam2);
	func_346(uParam0, iParam3);
	func_345(uParam0, iParam5);
	func_344(uParam0, iParam4);
	func_343(uParam0, iParam6);
}

void func_343(var uParam0, int iParam1)
{
	if (iParam1 <= 0)
	{
		return;
	}
	if (iParam1 > 2043 || iParam1 < 1979)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 2080374784);
	if (iParam1 < 2011)
	{
		*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT((2011 - iParam1), 26));
		*uParam0 |= -2147483648;
	}
	else
	{
		*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT((iParam1 - 2011), 26));
		*uParam0 = (*uParam0 - *uParam0 & -2147483648);
	}
}

void func_344(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_339(*uParam0);
	iVar1 = func_340(*uParam0);
	if (iParam1 < 1 || iParam1 > func_349(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

void func_345(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_346(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_347(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_348(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

int func_349(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		iParam1 = 0;
	}
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 11:
			return 31;
			break;
		
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
			break;
		
		case 1:
			if ((iParam1 % 4) == 0)
			{
				if ((iParam1 % 100) != 0)
				{
					return 29;
				}
				else if ((iParam1 % 400) == 0)
				{
					return 29;
				}
			}
			return 28;
			break;
	}
	return 30;
}

int func_350()
{
	var uVar0;
	
	func_348(&uVar0, CLOCK::GET_CLOCK_MINUTES());
	func_347(&uVar0, CLOCK::GET_CLOCK_HOURS());
	func_346(&uVar0, CLOCK::GET_CLOCK_DAY_OF_MONTH());
	func_344(&uVar0, CLOCK::GET_CLOCK_MONTH());
	func_345(&uVar0, CLOCK::GET_CLOCK_YEAR());
	func_343(&uVar0, SYSTEM::SHIFT_LEFT());
	return uVar0;
}

void func_351(char* sParam0, int iParam1)
{
	unk_0x17751E107423AFE9(sParam0);
	FILES::GET_DLC_VEHICLE_FLAGS(0, 0, 1, iParam1);
}

void func_352()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	func_363(1);
	func_283(1);
	SYSTEM::SIN(0f);
	func_362(0, 0);
	func_361(1, 1, 0, 0, 0);
	func_360(1, 2, 1, 1, 1);
	func_359("PROS_OPTS");
	func_358(201, "PROS_SELECT", -1, 0);
	iLocal_69 = 0;
	iVar0 = func_233(0);
	iVar1 = func_233(1);
	iVar2 = func_233(2);
	if (func_278() >= iVar0)
	{
		func_322(iLocal_69, "PROS_DOLLAR", 1, 1, 0, 0);
		func_355(iVar0, 0);
		iLocal_283[iLocal_69] = 0;
		iLocal_69++;
	}
	if (func_278() >= iVar1 && func_354(bLocal_93))
	{
		func_322(iLocal_69, "PROS_DOLLAR", 1, 1, 0, 0);
		func_355(iVar1, 0);
		iLocal_283[iLocal_69] = 1;
		iLocal_69++;
	}
	if (func_278() >= iVar2 && func_354(bLocal_93))
	{
		func_322(iLocal_69, "PROS_DOLLAR", 1, 1, 0, 0);
		func_355(iVar2, 0);
		iLocal_283[iLocal_69] = 2;
		iLocal_69++;
	}
	func_322(iLocal_69, "PROS_QUIT", 0, 1, 0, 0);
	iLocal_68 = 0;
	func_285(iLocal_68, 1, 1);
	func_353();
	iLocal_87 = MISC::GET_GAME_TIMER();
	iLocal_292 = 3;
}

void func_353()
{
	Global_22411.f_5 = 1;
}

int func_354(bool bParam0)
{
	void fVar0;
	
	if (ENTITY::GET_ENTITY_COORDS(bParam0, false))
	{
		fVar0 = MISC::GET_MODEL_DIMENSIONS(bParam0);
		if ((((((((((((((fVar0 == joaat("infernus") || fVar0 == joaat("voltic")) || fVar0 == joaat("stingergt")) || fVar0 == joaat("stinger")) || fVar0 == joaat("bullet")) || fVar0 == joaat("entityxf")) || fVar0 == joaat("feltzer3")) || fVar0 == joaat("granger")) || fVar0 == joaat("panto")) || fVar0 == joaat("phoenix")) || fVar0 == joaat("fmj")) || fVar0 == joaat("reaper")) || fVar0 == joaat("le7b")) || fVar0 == joaat("tyrus")) || fVar0 == joaat("infernus2"))
		{
			return 0;
		}
	}
	return 1;
}

void func_355(int iParam0, bool bParam1)
{
	float fVar0;
	float fVar1;
	var uVar2;
	float fVar3;
	
	if (Global_22550.f_5222 >= 256)
	{
		return;
	}
	if (Global_22550.f_5743 >= 4)
	{
		return;
	}
	if (Global_22550.f_5744 != 1)
	{
		return;
	}
	if (Global_22550.f_5743 >= Global_22550.f_5741)
	{
		return;
	}
	Global_22550.f_3918[Global_22550.f_5222] = iParam0;
	Global_22550.f_5222++;
	Global_22550.f_2124[Global_22550.f_5742 /*5*/][Global_22550.f_5743] = 2;
	Global_22550.f_5743++;
	if (Global_22550.f_5743 >= Global_22550.f_5741)
	{
		fVar0 = func_357();
		if (Global_22550.f_5075[Global_22550.f_5219] && Global_22550.f_5743 == Global_22550.f_5741)
		{
			func_327(26, 1, 0, &fVar1, &uVar2, 0);
			fVar0 = (fVar0 + (fVar1 * 2f));
		}
		if (fVar0 > Global_22550.f_5068[(Global_22550.f_5219 - 1)])
		{
			Global_22550.f_5068[(Global_22550.f_5219 - 1)] = fVar0;
		}
	}
	if (bParam1)
	{
		if (Global_22550.f_5743 >= Global_22550.f_5741)
		{
			fVar3 = func_356();
			if (fVar3 > Global_22550.f_5745[Global_22550.f_5218])
			{
				Global_22550.f_5745[Global_22550.f_5218] = fVar3;
			}
		}
	}
}

float func_356()
{
	int iVar0;
	int iVar1;
	float fVar2;
	var uVar3;
	float fVar4;
	
	iVar0 = 0;
	while (iVar0 < Global_22550.f_5743)
	{
		if (Global_22550.f_2124[Global_22550.f_5742 /*5*/][iVar0] == 4)
		{
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (Global_22550.f_4433[((Global_22550.f_5224 - iVar1) + iVar0)] != 0)
		{
			if (func_327(Global_22550.f_4433[((Global_22550.f_5224 - iVar1) + iVar0)], 1, 0, &uVar3, &fVar4, 0))
			{
				if (fVar4 > fVar2)
				{
					fVar2 = fVar4;
				}
			}
		}
		iVar0++;
	}
	if (fVar2 > HUD::_GET_TEXT_SCALE_HEIGHT(0.35f, 0))
	{
		return fVar2;
	}
	return HUD::_GET_TEXT_SCALE_HEIGHT(0.35f, 0);
}

float func_357()
{
	float fVar0;
	float fVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	iVar7 = 0;
	while (iVar7 < Global_22550.f_5743)
	{
		if (Global_22550.f_2124[Global_22550.f_5742 /*5*/][iVar7] == 1)
		{
		}
		else if (Global_22550.f_2124[Global_22550.f_5742 /*5*/][iVar7] == 8)
		{
		}
		else if (Global_22550.f_2124[Global_22550.f_5742 /*5*/][iVar7] == 2)
		{
			iVar3++;
		}
		else if (Global_22550.f_2124[Global_22550.f_5742 /*5*/][iVar7] == 3)
		{
			iVar4++;
		}
		else if (Global_22550.f_2124[Global_22550.f_5742 /*5*/][iVar7] == 4)
		{
			iVar5++;
		}
		else if (Global_22550.f_2124[Global_22550.f_5742 /*5*/][iVar7] == 5)
		{
			iVar6++;
		}
		else if (Global_22550.f_2124[Global_22550.f_5742 /*5*/][iVar7] == 6)
		{
			iVar6++;
		}
		else if (Global_22550.f_2124[Global_22550.f_5742 /*5*/][iVar7] == 7)
		{
			iVar6++;
		}
		else if (Global_22550.f_2124[Global_22550.f_5742 /*5*/][iVar7] == 9)
		{
			iVar6++;
		}
		iVar7++;
	}
	func_304(0, 1, 0, 0, 0, iVar6 > 0, 0);
	if (AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT(&(Global_22550.f_73[Global_22550.f_5742 /*6*/])) != 0)
	{
		HUD::_BEGIN_TEXT_COMMAND_GET_WIDTH(&(Global_22550.f_73[Global_22550.f_5742 /*6*/]));
	}
	iVar7 = 0;
	while (iVar7 < Global_22550.f_5743)
	{
		if (Global_22550.f_2124[Global_22550.f_5742 /*5*/][iVar7] == 1)
		{
			iVar8++;
			if (AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT(&(Global_22550.f_73[Global_22550.f_5742 /*6*/])) != 0)
			{
				HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(&(Global_22550.f_73[(Global_22550.f_5742 + iVar8) /*6*/]));
			}
		}
		else if (Global_22550.f_2124[Global_22550.f_5742 /*5*/][iVar7] == 8)
		{
			iVar8++;
			if (AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT(&(Global_22550.f_73[Global_22550.f_5742 /*6*/])) != 0)
			{
				HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(&(Global_22550.f_73[(Global_22550.f_5742 + iVar8) /*6*/]));
			}
		}
		else if (Global_22550.f_2124[Global_22550.f_5742 /*5*/][iVar7] == 2)
		{
			if (AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT(&(Global_22550.f_73[Global_22550.f_5742 /*6*/])) != 0)
			{
				unk_0x42710E9E08FA375A(Global_22550.f_3918[((Global_22550.f_5222 - iVar3) + iVar9)]);
			}
			iVar9++;
		}
		else if (Global_22550.f_2124[Global_22550.f_5742 /*5*/][iVar7] == 3)
		{
			if (AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT(&(Global_22550.f_73[Global_22550.f_5742 /*6*/])) != 0)
			{
				GRAPHICS::SET_SCRIPT_GFX_ALIGN(Global_22550.f_4175[((Global_22550.f_5223 - iVar4) + iVar10)], Global_22550.f_4304[((Global_22550.f_5223 - iVar4) + iVar10)]);
			}
			iVar10++;
		}
		else if (Global_22550.f_2124[Global_22550.f_5742 /*5*/][iVar7] == 5)
		{
			if (AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT(&(Global_22550.f_73[Global_22550.f_5742 /*6*/])) != 0)
			{
				unk_0x9EFD301E3BE8324E(&(Global_2462791[((Global_22550.f_5221 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		else if (Global_22550.f_2124[Global_22550.f_5742 /*5*/][iVar7] == 6)
		{
			if (AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT(&(Global_22550.f_73[Global_22550.f_5742 /*6*/])) != 0)
			{
				HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(&(Global_2462791[((Global_22550.f_5221 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		else if (Global_22550.f_2124[Global_22550.f_5742 /*5*/][iVar7] == 7)
		{
			if (AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT(&(Global_22550.f_73[Global_22550.f_5742 /*6*/])) != 0)
			{
				unk_0x9EFD301E3BE8324E(&(Global_2462791[((Global_22550.f_5221 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		else if (Global_22550.f_2124[Global_22550.f_5742 /*5*/][iVar7] == 9)
		{
			if (AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT(&(Global_22550.f_73[Global_22550.f_5742 /*6*/])) != 0)
			{
				unk_0x9EFD301E3BE8324E(&(Global_2462791[((Global_22550.f_5221 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		iVar7++;
	}
	if (AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT(&(Global_22550.f_73[Global_22550.f_5742 /*6*/])) != 0)
	{
		fVar0 = HUD::_END_TEXT_COMMAND_GET_WIDTH(true);
	}
	iVar7 = 0;
	while (iVar7 < iVar5)
	{
		if (Global_22550.f_4433[((Global_22550.f_5224 - iVar5) + iVar7)] != 0)
		{
			func_327(Global_22550.f_4433[((Global_22550.f_5224 - iVar5) + iVar7)], 1, 0, &fVar1, &uVar2, 0);
			fVar0 = (fVar0 + fVar1);
		}
		iVar7++;
	}
	return fVar0;
}

void func_358(int iParam0, char* sParam1, int iParam2, bool bParam3)
{
	char* sVar0;
	
	sVar0 = MOBILE::GET_MOBILE_PHONE_POSITION(2, iParam0, 1);
	if (Global_22550.f_4769 >= 12)
	{
		StringCopy(&Global_4269680, sVar0, 64);
		StringCopy(&(Global_4269680.f_16), sParam1, 16);
		Global_4269680.f_20 = iParam2;
		return;
		return;
	}
	if (!bParam3)
	{
		unk_0xBE20AB8238688965(&(Global_22550.f_5052), Global_22550.f_4769);
	}
	StringCopy(&(Global_22550.f_4771[Global_22550.f_4769 /*16*/]), sVar0, 64);
	StringCopy(&(Global_22550.f_4964[Global_22550.f_4769 /*4*/]), sParam1, 16);
	Global_22550.f_5013[Global_22550.f_4769] = iParam2;
	Global_22550.f_5026[Global_22550.f_4769] = iParam0;
	Global_22550.f_5039[Global_22550.f_4769] = 32;
	Global_22550.f_4769++;
}

void func_359(char* sParam0)
{
	int iVar0;
	
	StringCopy(&(Global_22550.f_1), sParam0, 16);
	Global_22550.f_68 = 0;
	Global_22550.f_69 = 0;
	Global_22550.f_70 = 0;
	Global_22550.f_71 = 0;
	Global_22550.f_72 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_22550.f_5[iVar0] = 0;
		iVar0++;
	}
}

void func_360(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_22550.f_5083[0] = iParam0;
	Global_22550.f_5083[1] = iParam1;
	Global_22550.f_5083[2] = iParam2;
	Global_22550.f_5083[3] = iParam3;
	Global_22550.f_5083[4] = iParam4;
}

void func_361(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_22550.f_5056[0] = iParam0;
	Global_22550.f_5056[1] = iParam1;
	Global_22550.f_5056[2] = iParam2;
	Global_22550.f_5056[3] = iParam3;
	Global_22550.f_5056[4] = iParam4;
	Global_22550.f_5226 = 0;
	if (iParam0 != 0)
	{
		Global_22550.f_5226++;
	}
	if (iParam1 != 0)
	{
		Global_22550.f_5226++;
	}
	if (iParam2 != 0)
	{
		Global_22550.f_5226++;
	}
	if (iParam3 != 0)
	{
		Global_22550.f_5226++;
	}
	if (iParam4 != 0)
	{
		Global_22550.f_5226++;
	}
}

void func_362(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	iVar0 = 0;
	while (iVar0 < 256)
	{
		StringCopy(&(Global_22550.f_73[iVar0 /*6*/]), "", 24);
		iVar1 = 0;
		while (iVar1 < 4)
		{
			Global_22550.f_2124[iVar0 /*5*/][iVar1] = 0;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		StringCopy(&(Global_2462791[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 256)
	{
		Global_22550.f_3918[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_22550.f_4175[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 256)
	{
		Global_22550.f_4433[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_22550.f_5089[iVar0] = 0;
		Global_22550.f_5227[iVar0] = 0;
		Global_22550.f_5356[iVar0] = 0;
		Global_22550.f_5879[iVar0] = 0f;
		Global_22550.f_5485[iVar0] = 0;
		Global_22550.f_5745[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Global_22550.f_5056[iVar0] = 0;
		Global_22550.f_5068[iVar0] = 0f;
		Global_22550.f_5062[iVar0] = -1f;
		Global_22550.f_5075[iVar0] = 0;
		Global_22550.f_5083[iVar0] = 1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 12)
	{
		StringCopy(&(Global_22550.f_4964[iVar0 /*4*/]), "", 16);
		Global_22550.f_5013[iVar0] = -1;
		Global_22550.f_5026[iVar0] = 361;
		Global_22550.f_5039[iVar0] = 32;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 63)
	{
		StringCopy(&(Global_22550.f_6020[iVar0 /*16*/]), "", 64);
		StringCopy(&(Global_22550.f_7029[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < 256)
		{
			Global_22550.f_1610[iVar0] = 0;
			iVar0++;
		}
	}
	StringCopy(&(Global_4269680.f_16), "", 16);
	Global_4269680.f_20 = -1;
	Global_22550 = 0;
	Global_22550.f_5218 = 0;
	Global_22550.f_5219 = 0;
	Global_22550.f_5220 = 0;
	Global_22550.f_5222 = 0;
	Global_22550.f_5223 = 0;
	Global_22550.f_5224 = 0;
	Global_22550.f_5221 = 0;
	Global_22550.f_5874 = 0;
	Global_22550.f_6014 = 0;
	Global_22550.f_5739 = 0;
	Global_22550.f_5738 = 0;
	Global_22550.f_5740 = 0;
	StringCopy(&(Global_22550.f_4690), "", 24);
	Global_22550.f_4762 = 0;
	Global_22550.f_4763 = 0;
	Global_22550.f_4764 = 0;
	Global_22550.f_4765 = 0;
	Global_22550.f_4766 = 0;
	Global_22550.f_4767 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_22550.f_4696[iVar0] = 0;
		iVar0++;
	}
	Global_22550.f_4768 = 0;
	StringCopy(&(Global_4269680.f_21), "", 16);
	Global_4269680.f_61 = 0;
	Global_4269680.f_62 = 0;
	Global_4269680.f_63 = 0;
	Global_4269680.f_64 = 0;
	Global_4269680.f_65 = 0;
	Global_4269680.f_66 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_4269680.f_25[iVar0] = 0;
		iVar0++;
	}
	Global_4269680.f_67 = 0;
	StringCopy(&(Global_22550.f_1), "", 16);
	Global_22550.f_5074 = 0f;
	Global_22550.f_68 = 0;
	Global_22550.f_69 = 0;
	Global_22550.f_70 = 0;
	Global_22550.f_71 = 0;
	Global_22550.f_72 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_22550.f_5[iVar0] = 0;
		iVar0++;
	}
	Global_22550.f_5744 = 0;
	Global_22550.f_5743 = 0;
	Global_22550.f_5741 = 0;
	Global_22550.f_5742 = 0;
	Global_22550.f_4769 = 0;
	Global_22550.f_4770 = 0;
	Global_22550.f_5225 = 10;
	Global_22550.f_5226 = 0;
	Global_22550.f_5876 = 0f;
	Global_22550.f_5877 = 0f;
	Global_22550.f_5728 = 0;
	Global_22550.f_5729 = 0;
	Global_22550.f_5730 = 0f;
	Global_22550.f_5731 = 0;
	Global_22550.f_5733 = 0;
	Global_22550.f_5732 = 0;
	Global_22550.f_5734 = 0;
	Global_22550.f_5735 = 0;
	Global_22550.f_5736 = 0;
	Global_22550.f_5737 = 0;
	Global_22550.f_8413 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		Global_22550.f_6008[iVar0] = -1;
		Global_22550.f_6011[iVar0] = -1;
		iVar0++;
	}
	Global_22550.f_5081 = 0f;
	Global_22550.f_5052 = 0;
	Global_22550.f_5082 = 0;
	iVar0 = 0;
	while (iVar0 < Global_22550.f_6015)
	{
		Global_22550.f_6015[iVar0] = 0;
		iVar0++;
	}
	Global_22550.f_8392 = 0;
	Global_22550.f_8387 = 0;
	Global_22550.f_8397 = 0;
	Global_22550.f_8402 = 0;
	Global_22550.f_8407 = 0;
	Global_22550.f_8409 = 0;
	Global_22550.f_8415 = 0;
	Global_22547 = 0.05f;
	Global_22548 = 0.05f;
	Global_22549 = 0.225f;
	fVar2 = unk_0x8940B46482DD0A7D(0);
	if (bParam0)
	{
		Global_22549 = (0.225f * ((16f / 9f) / fVar2));
	}
	else if (fVar2 < 1.77777f)
	{
		Global_22549 = (0.225f * ((16f / 9f) / fVar2));
	}
	else
	{
		Global_22549 = 0.225f;
	}
}

void func_363(bool bParam0)
{
	if (!bParam0)
	{
		Global_110500 = MISC::GET_GAME_TIMER() + 250;
	}
	Global_110497 = bParam0;
}

int func_364(char* sParam0, int iParam1)
{
	if (func_278() < func_233(iParam1))
	{
		StringCopy(sParam0, "PROS_NO_MONEY", 16);
		return 0;
	}
	if (MISC::SET_BIT() && func_365(PLAYER::PLAYER_ID()))
	{
		StringCopy(sParam0, "PIM_HHIDCR", 16);
		return 0;
	}
	StringCopy(sParam0, "", 16);
	return 1;
}

int func_365(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0xCE990E643CD9D0E5(Global_1630317[iVar0 /*595*/].f_1, false);
	}
	return 0;
}

int func_366(bool bParam0, bool bParam1)
{
	int iVar0;
	
	if (!STREAMING::HAS_ANIM_DICT_LOADED(func_50(unk_0x9B0761B4C3EB8BC7(), 0, 0)))
	{
	}
	else if (!ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(bParam0, func_50(unk_0x9B0761B4C3EB8BC7(), 0, 0), func_110(bParam1), 3) && TASK::GET_SCRIPT_TASK_STATUS(bParam0, -2017877118) != 1)
	{
		if (func_548())
		{
			if (bParam0 == unk_0x9B0761B4C3EB8BC7())
			{
				if (!func_205(PLAYER::PLAYER_ID()))
				{
					iVar0 = PED::GET_PED_DRAWABLE_VARIATION(unk_0x9B0761B4C3EB8BC7(), 6);
					if (!func_521(256))
					{
						func_196(256);
						iLocal_84 = iVar0;
						iLocal_85 = PED::GET_PED_TEXTURE_VARIATION(unk_0x9B0761B4C3EB8BC7(), 6);
						PED::SET_PED_COMPONENT_VARIATION(unk_0x9B0761B4C3EB8BC7(), 6, 1, 0, 0);
						func_196(1024);
					}
				}
				TASK::TASK_PLAY_ANIM(bParam0, func_50(unk_0x9B0761B4C3EB8BC7(), 0, 0), func_367(bParam1), 2f, -8f, -1, 0, 0f, false, false, false);
			}
			else
			{
				TASK::TASK_PLAY_ANIM(bParam0, func_50(unk_0x9B0761B4C3EB8BC7(), 0, 0), func_367(bParam1), 2f, -8f, -1, 0, 0f, false, false, false);
			}
		}
		else
		{
			TASK::TASK_PLAY_ANIM(bParam0, func_50(unk_0x9B0761B4C3EB8BC7(), 0, 0), func_367(bParam1), 2f, -8f, -1, 0, 0f, false, false, false);
		}
	}
	else
	{
		if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(bParam0, func_50(unk_0x9B0761B4C3EB8BC7(), 0, 0), func_367(bParam1), 3))
		{
			if (NETWORK::_NETWORK_CONVERT_SYNCHRONISED_SCENE_TO_SYNCHRONIZED_SCENE(bParam0, func_50(unk_0x9B0761B4C3EB8BC7(), 0, 0), func_367(bParam1)) >= 0.95f)
			{
				TASK::TASK_PLAY_ANIM(bParam0, func_50(unk_0x9B0761B4C3EB8BC7(), 0, 0), func_110(bParam1), 8f, -2f, -1, 1, 0f, false, false, false);
			}
		}
		if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(bParam0, func_50(unk_0x9B0761B4C3EB8BC7(), 0, 0), func_110(bParam1), 3))
		{
			return 1;
		}
	}
	return 0;
}

var func_367(bool bParam0)
{
	if (!func_488(iLocal_49, 32768))
	{
		if (bParam0)
		{
			return func_45(0);
		}
		else
		{
			return func_45(1);
		}
	}
	if (bParam0)
	{
		return func_46(0);
	}
	return func_46(1);
}

void func_368(int iParam0)
{
	*iParam0 = -15;
}

int func_369(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (iParam0 == -15)
	{
		return 0;
	}
	iVar0 = func_335(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_336(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_337(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_340(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_339(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_338(iParam0);
	if (iVar5 < 1 || iVar5 > func_349(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

void func_370()
{
	if (STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_90))
	{
		return;
	}
	AUDIO::STOP_CURRENT_PLAYING_AMBIENT_SPEECH(bLocal_90);
	if (!AUDIO::IS_ANY_SPEECH_PLAYING(bLocal_90))
	{
		if (iLocal_70 < 1)
		{
			AUDIO::_PLAY_AMBIENT_SPEECH1(bLocal_90, "HOOKER_OFFER_SERVICE", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
		}
		else
		{
			AUDIO::_PLAY_AMBIENT_SPEECH1(bLocal_90, "HOOKER_OFFER_AGAIN", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
		}
	}
}

int func_371()
{
	if (func_372(0, -1, 0) && AUDIO::REQUEST_SCRIPT_AUDIO_BANK("SCRIPT\HUD_321_GO", true, -1))
	{
		return 1;
	}
	return 0;
}

bool func_372(char* sParam0, int iParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	if (!func_331(&iVar0, 1, iParam1))
	{
		return 0;
	}
	bVar1 = true;
	StringCopy(&(Global_22550.f_5635[iVar0 /*4*/]), sParam0, 16);
	if (!CAM::IS_SCREEN_FADED_OUT(&(Global_22550.f_5635[iVar0 /*4*/])))
	{
		HUD::HAS_ADDITIONAL_TEXT_LOADED(&(Global_22550.f_5635[iVar0 /*4*/]), 9);
		Global_22550.f_5628[iVar0] = 1;
		if (!HUD::HAS_THIS_ADDITIONAL_TEXT_LOADED(&(Global_22550.f_5635[iVar0 /*4*/]), 9))
		{
			bVar1 = false;
		}
	}
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("CommonMenu", false);
	Global_22550.f_5614[iVar0] = 1;
	if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("CommonMenu"))
	{
		bVar1 = false;
	}
	if (bParam2)
	{
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPShopSale", false);
		Global_22550.f_5621[iVar0] = 1;
		if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPShopSale"))
		{
			bVar1 = false;
		}
	}
	bVar2 = false;
	StringCopy(&(Global_22550.f_5660[iVar0 /*10*/].f_1), "instructional_buttons", 24);
	bVar2 = func_373(&(Global_22550.f_5660[iVar0 /*10*/]));
	if (!bVar1 || !bVar2)
	{
	}
	return (bVar1 && bVar2);
}

bool func_373(var uParam0)
{
	switch (uParam0->f_9)
	{
		case 0:
			if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
			{
				*uParam0 = unk_0x5DEA4192B46CB99B(&(uParam0->f_1));
				uParam0->f_9 = 1;
				if (uParam0->f_7)
				{
					if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
					{
						uParam0->f_8 = MISC::GET_GAME_TIMER();
						uParam0->f_9 = 2;
					}
				}
			}
			else
			{
				uParam0->f_8 = MISC::GET_GAME_TIMER();
				uParam0->f_9 = 2;
			}
			break;
		
		case 1:
			if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
			{
				uParam0->f_8 = MISC::GET_GAME_TIMER();
				uParam0->f_9 = 2;
			}
			break;
		
		case 2:
			if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
			{
				uParam0->f_9 = 0;
			}
			break;
	}
	return uParam0->f_9 == 2;
}

void func_374()
{
	if (!func_548())
	{
		return;
	}
	if (MISC::IS_BIT_SET(bLocal_90))
	{
		iLocal_58 = ENTITY::GET_ENTITY_HEALTH(bLocal_90);
	}
}

void func_375()
{
	bool bVar0;
	
	if (!func_548())
	{
		return;
	}
	if (MISC::IS_BIT_SET(unk_0x9B0761B4C3EB8BC7()))
	{
		if (SYSTEM::VDIST(unk_0x9B0761B4C3EB8BC7(), 0))
		{
			bVar0 = ENTITY::GET_ENTITY_MODEL(unk_0x9B0761B4C3EB8BC7(), 0);
			if (MISC::IS_BIT_SET(bVar0))
			{
				Local_56 = { NETWORK::NETWORK_ARE_HANDLES_THE_SAME(bVar0, 1) };
			}
		}
	}
}

void func_376(bool bParam0, int iParam1)
{
	int iVar0;
	
	if (!func_331(&iVar0, 0, iParam1))
	{
		return;
	}
	if (Global_22550.f_8417)
	{
		GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(15);
		Global_22550.f_8417 = 0;
	}
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(0f);
	if (Global_22550.f_5628[iVar0])
	{
		HUD::CLEAR_ADDITIONAL_TEXT(9, false);
		Global_22550.f_5628[iVar0] = 0;
	}
	if (Global_22550.f_5614[iVar0])
	{
		GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("CommonMenu");
		Global_22550.f_5614[iVar0] = 0;
	}
	if (Global_22550.f_5621[iVar0])
	{
		GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("MPShopSale");
		Global_22550.f_5621[iVar0] = 0;
	}
	if (bParam0)
	{
		func_377(&(Global_22550.f_5660[iVar0 /*10*/]));
		Global_22550.f_5721[iVar0] = 0;
	}
	else
	{
		Global_22550.f_5721[iVar0] = 0;
	}
}

void func_377(int* iParam0)
{
	if (iParam0->f_9 != 0)
	{
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
		{
			GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(iParam0);
		}
		*iParam0 = 0;
		iParam0->f_9 = 0;
	}
}

int func_378()
{
	if (AUDIO::SET_SCRIPT_UPDATE_DOOR_AUDIO(PLAYER::PLAYER_ID()) == 0)
	{
		if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_ID()))
		{
			if (SYSTEM::VDIST(unk_0x9B0761B4C3EB8BC7(), 0))
			{
				bLocal_93 = ENTITY::GET_ENTITY_MODEL(unk_0x9B0761B4C3EB8BC7(), 0);
				if (!bLocal_93 == 0)
				{
					if ((ENTITY::GET_ENTITY_COORDS(bLocal_93, false) && !FIRE::IS_ENTITY_ON_FIRE(bLocal_93)) && !ENTITY::IS_ENTITY_UPSIDEDOWN(bLocal_93))
					{
						if (func_91(&bLocal_93))
						{
							func_5(&iLocal_49, 1);
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

void func_379()
{
	if (iLocal_70 == 0)
	{
		if (!func_488(iLocal_51, 1) && !func_488(iLocal_51, 16))
		{
			if (func_380(0))
			{
				func_480(&iLocal_51, 1);
			}
		}
		if (!func_488(iLocal_51, 4) && !func_488(iLocal_51, 64))
		{
			if (func_380(2))
			{
				func_480(&iLocal_51, 4);
			}
		}
		if (!func_488(iLocal_51, 8) && !func_488(iLocal_51, 128))
		{
			if (func_380(1))
			{
				func_480(&iLocal_51, 8);
			}
		}
	}
}

int func_380(int iParam0)
{
	struct<3> Var0;
	struct<3> Var1;
	int iVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	
	Var0 = { func_186(iParam0) };
	Var1 = { NETWORK::NETWORK_ARE_HANDLES_THE_SAME(bLocal_93, 1) };
	if (iLocal_299[iParam0] == 0)
	{
		if (MISC::GET_MODEL_DIMENSIONS(bLocal_93) == joaat("tyrant"))
		{
			iLocal_299[iParam0] = SHAPETEST::START_SHAPE_TEST_SWEPT_SPHERE(Var0, Var1, 0.1f, 511, bLocal_93, 3);
		}
		else if ((MISC::GET_MODEL_DIMENSIONS(bLocal_93) == joaat("casco") || MISC::GET_MODEL_DIMENSIONS(bLocal_93) == joaat("feltzer3")) || MISC::GET_MODEL_DIMENSIONS(bLocal_93) == joaat("fagaloa"))
		{
			iLocal_299[iParam0] = SHAPETEST::START_SHAPE_TEST_SWEPT_SPHERE(Var0, Var1, 0.15f, 511, bLocal_93, 3);
		}
		else
		{
			iLocal_299[iParam0] = SHAPETEST::START_SHAPE_TEST_SWEPT_SPHERE(Var0, Var1, 0.25f, 511, bLocal_93, 3);
		}
	}
	else
	{
		switch (SHAPETEST::GET_SHAPE_TEST_RESULT(iLocal_299[iParam0], &iVar2, &uVar3, &uVar4, &uVar5))
		{
			case 2:
				iLocal_299[iParam0] = 0;
				if (iVar2 != 0)
				{
					func_381(iParam0);
					return 0;
				}
				else
				{
					return 1;
				}
				break;
			
			case 1:
				break;
			
			case 0:
				iLocal_299[iParam0] = 0;
				break;
			}
	}
	return 0;
}

void func_381(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (!func_488(iLocal_51, 16))
			{
				func_480(&iLocal_51, 16);
				func_5(&iLocal_51, 1);
			}
			break;
		
		case 1:
			if (!func_488(iLocal_51, 128))
			{
				func_480(&iLocal_51, 128);
				func_5(&iLocal_51, 8);
			}
			break;
		
		case 2:
			if (!func_488(iLocal_51, 64))
			{
				func_480(&iLocal_51, 64);
				func_5(&iLocal_51, 4);
			}
			break;
		
		case 3:
			if (!func_488(iLocal_51, 32))
			{
				func_480(&iLocal_51, 32);
				func_5(&iLocal_51, 2);
			}
			break;
	}
}

void func_382()
{
	if (func_387() && !SYSTEM::VDIST(unk_0x9B0761B4C3EB8BC7(), 1))
	{
		iLocal_286 = 9;
		func_385(bLocal_90);
		func_385(unk_0x9B0761B4C3EB8BC7());
		func_383();
		func_40(&iLocal_98);
	}
}

void func_383()
{
	struct<7> Var0;
	struct<7> Var1;
	
	if (!CAM::DOES_CAM_EXIST(iLocal_96))
	{
		iLocal_96 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", true);
	}
	if (!CAM::DOES_CAM_EXIST(iLocal_97))
	{
		iLocal_97 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", true);
	}
	func_384(&Var0, &Var1);
	CAM::SET_CAM_COORD(iLocal_96, Var0);
	CAM::SET_CAM_ROT(iLocal_96, Var0.f_3, 2);
	CAM::SET_CAM_FOV(iLocal_96, Var0.f_6);
	CAM::SET_CAM_COORD(iLocal_97, Var1);
	CAM::SET_CAM_ROT(iLocal_97, Var1.f_3, 2);
	CAM::SET_CAM_FOV(iLocal_97, Var1.f_6);
	CAM::SET_CAM_ACTIVE(iLocal_96, true);
	CAM::SET_CAM_ACTIVE(iLocal_97, false);
	CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
}

void func_384(var uParam0, var uParam1)
{
	switch (func_23())
	{
		case 0:
			*uParam0 = { -823.9435f, 186.8976f, 75.5221f };
			uParam0->f_3 = { -18.973f, 0f, -179.5878f };
			uParam0->f_6 = 50f;
			*uParam1 = { -828.0038f, 179.5113f, 75.7418f };
			uParam1->f_3 = { 14.0219f, 0f, -107.3339f };
			uParam1->f_6 = 50f;
			break;
		
		case 1:
			*uParam0 = { -20.162f, -1443.916f, 31.9468f };
			uParam0->f_3 = { -12.0736f, 0f, -130.562f };
			uParam0->f_6 = 50f;
			*uParam1 = { -15.925f, -1446.92f, 31.9534f };
			uParam1->f_3 = { -10.3101f, 0f, 34.3879f };
			uParam1->f_6 = 50f;
			break;
		
		case 2:
			*uParam0 = { 1972.248f, 3804.805f, 36.7174f };
			uParam0->f_3 = { -19.6476f, 0f, -45.6158f };
			uParam0->f_6 = 50f;
			*uParam1 = { 1970.194f, 3807.541f, 35.5247f };
			uParam1->f_3 = { -15.8717f, 0f, 41.6556f };
			uParam1->f_6 = 50f;
			break;
	}
}

void func_385(bool bParam0)
{
	int iVar0;
	
	if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bParam0))
	{
		TASK::CLEAR_SEQUENCE_TASK(&iVar0);
		TASK::OPEN_SEQUENCE_TASK(&iVar0);
		if (SYSTEM::VDIST(bParam0, 0))
		{
			TASK::TASK_LEAVE_ANY_VEHICLE(false, 0, 16842752);
		}
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, func_386(), 1f, -1, 0.5f, 8192, 40000f);
		TASK::CLOSE_SEQUENCE_TASK(iVar0);
		AUDIO::STOP_SCRIPTED_CONVERSATION(bParam0, iVar0);
		TASK::CLEAR_SEQUENCE_TASK(&iVar0);
	}
}

Vector3 func_386()
{
	switch (func_23())
	{
		case 0:
			return -819.88f, 177.47f, 70.63f;
			break;
		
		case 1:
			return -14.57f, -1437.56f, 30.12f;
			break;
		
		case 2:
			return 1972.16f, 3817.47f, 32.43f;
			break;
	}
	return 0f, 0f, 0f;
}

bool func_387()
{
	return SYSTEM::VDIST2(NETWORK::NETWORK_ARE_HANDLES_THE_SAME(unk_0x9B0761B4C3EB8BC7(), 1), func_389()) < (func_388() * func_388());
}

float func_388()
{
	switch (func_23())
	{
		case 0:
			return 20.75f;
			break;
		
		case 1:
			return 10f;
			break;
		
		case 2:
			return 14f;
			break;
	}
	return 0f;
}

Vector3 func_389()
{
	switch (func_23())
	{
		case 0:
			return -827.04f, 172.26f, 69.48f;
			break;
		
		case 1:
			return -16.98f, -1451.59f, 29.57f;
			break;
		
		case 2:
			return 1983.22f, 3820.64f, 31.37f;
			break;
	}
	return 0f, 0f, 0f;
}

void func_390()
{
	func_332();
	func_405();
	if (!func_10(&iLocal_101))
	{
		func_470(&iLocal_101);
	}
	if (func_404())
	{
		return;
	}
	if (!func_10(&iLocal_110))
	{
		func_470(&iLocal_110);
	}
	if (func_378() && unk_0xE0B3BC41DDA88DF0(bLocal_90, bLocal_93, 0f))
	{
		if (VEHICLE::IS_VEHICLE_STOPPED(bLocal_93) && VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(bLocal_93))
		{
			if ((func_397() && !func_387()) && !func_396())
			{
				func_395();
				if (func_7(&iLocal_110) > 2.5f)
				{
					fLocal_83 = PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(NETWORK::NETWORK_ARE_HANDLES_THE_SAME(bLocal_93, 0), 40f, 40f, 40f, ENTITY::IS_ENTITY_IN_WATER(bLocal_93), 0, 7);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 896);
					func_480(&iLocal_49, 2048);
					iLocal_94 = 0;
					PED::ADD_RELATIONSHIP_GROUP("ProstituteInPlay", &iLocal_298);
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_298, 1862763509);
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(bLocal_90, iLocal_298);
					func_489("Moving into sex state eCurrentProstituteState = PROSTITUTE_CHOOSING_SERVICE ");
					func_5(&iLocal_49, 1024);
					iLocal_295 = -15;
					func_128();
					func_394();
					iLocal_81 = 3;
					if (func_48(0, 1))
					{
						CAM::SET_CINEMATIC_BUTTON_ACTIVE(false);
					}
					iLocal_286 = 8;
				}
			}
			else
			{
				if ((!AUDIO::IS_ANY_SPEECH_PLAYING(unk_0x9B0761B4C3EB8BC7()) && func_7(&iLocal_101) > 15f) && func_393())
				{
					if (!func_488(iLocal_50, 4096))
					{
						func_351("PROS_SPOT", -1);
						func_480(&iLocal_50, 4096);
					}
					func_392();
					func_40(&iLocal_101);
				}
				func_40(&iLocal_110);
			}
		}
		else
		{
			func_40(&iLocal_110);
			func_391();
		}
	}
	else if (!func_387())
	{
		if (MISC::IS_BIT_SET(bLocal_90))
		{
			if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_90))
			{
				HUD::HIDE_HUD_AND_RADAR_THIS_FRAME(bLocal_90);
			}
		}
		func_471(0);
	}
}

void func_391()
{
	iLocal_51 = 0;
	iLocal_299[0] = 0;
	iLocal_299[1] = 0;
	iLocal_299[2] = 0;
	iLocal_299[3] = 0;
}

void func_392()
{
	if (STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_90))
	{
		return;
	}
	if (!AUDIO::IS_ANY_SPEECH_PLAYING(bLocal_90))
	{
		AUDIO::_PLAY_AMBIENT_SPEECH1(bLocal_90, "HOOKER_SECLUDED", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
	}
}

int func_393()
{
	if (!func_488(iLocal_51, 256))
	{
		return 1;
	}
	return func_488(iLocal_51, 32);
}

void func_394()
{
	if (func_548())
	{
		PLAYER::SET_PLAYER_VEHICLE_DEFENSE_MODIFIER(bLocal_90, 3.208973E-43f, 1);
		PLAYER::SET_PLAYER_VEHICLE_DEFENSE_MODIFIER(bLocal_90, 3.643376E-44f, 1);
		PLAYER::SET_PLAYER_VEHICLE_DEFENSE_MODIFIER(bLocal_90, 1.611493E-43f, 1);
		PED::_0x2208438012482A1A(bLocal_90, 1);
	}
}

void func_395()
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	
	if (!func_488(iLocal_49, 2097152))
	{
		if (MISC::GET_GAME_TIMER() > iLocal_82)
		{
			if (iLocal_94 == 0)
			{
				Var0 = { NETWORK::NETWORK_ARE_HANDLES_THE_SAME(bLocal_93, 1) };
				MISC::GET_GROUND_Z_FOR_3D_COORD(Var0, &fVar2, false, false);
				Var0.f_2 = (fVar2 + 0.15f);
				Var1 = { unk_0x7EC595B99EA7C4B1(bLocal_93, 0f, 0f, -2f) };
				iLocal_94 = SHAPETEST::START_SHAPE_TEST_CAPSULE(Var0, Var1, 2f, 511, bLocal_93, 7);
			}
			else if (SHAPETEST::GET_SHAPE_TEST_RESULT_INCLUDING_MATERIAL(iLocal_94, &iVar4, &uVar5, &uVar6, &iVar3, &uVar7) == 2)
			{
				if (iVar4 != 0)
				{
					if ((iVar3 == -1447280105 || iVar3 == 1925605558) || iVar3 == 2128369009)
					{
						func_40(&iLocal_110);
					}
				}
				iLocal_82 = MISC::GET_GAME_TIMER() + 1500;
				iLocal_94 = 0;
			}
		}
	}
}

int func_396()
{
	bool bVar0;
	
	bVar0 = ENTITY::GET_ENTITY_MODEL(unk_0x9B0761B4C3EB8BC7(), 0);
	if (ENTITY::GET_ENTITY_COORDS(bVar0, false))
	{
		if (!SYSTEM::VDIST2(bVar0, 0, 0))
		{
			if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(unk_0x9B0761B4C3EB8BC7()) || NETWORK::NETWORK_IS_PLAYER_ACTIVE(ENTITY::GET_ENTITY_MODEL(unk_0x9B0761B4C3EB8BC7(), 0)))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_397()
{
	bool bVar0;
	struct<3> Var1;
	struct<3> Var2;
	void fVar3;
	
	if (!PED::IS_PED_IN_ANY_POLICE_VEHICLE(unk_0x9B0761B4C3EB8BC7(), 0))
	{
		if (SYSTEM::VDIST(unk_0x9B0761B4C3EB8BC7(), 0))
		{
			bLocal_93 = ENTITY::GET_ENTITY_MODEL(unk_0x9B0761B4C3EB8BC7(), 0);
		}
		Var1 = { NETWORK::NETWORK_ARE_HANDLES_THE_SAME(unk_0x9B0761B4C3EB8BC7(), 1) };
		if (TASK::DOES_SCENARIO_OF_TYPE_EXIST_IN_AREA(Var1, func_65(0), 12f, false) || TASK::DOES_SCENARIO_OF_TYPE_EXIST_IN_AREA(Var1, func_65(1), 12f, false))
		{
			return 0;
		}
		if (func_403())
		{
			return 0;
		}
		if (func_402(bLocal_93, &Var2))
		{
			if (!func_401(Var2))
			{
				if (!func_400(Var1) || func_399(Var1))
				{
					return 0;
				}
			}
		}
		if (func_90(NETWORK::NETWORK_ARE_HANDLES_THE_SAME(unk_0x9B0761B4C3EB8BC7(), 1), (30f * 0.5f)))
		{
			return 0;
		}
		if (!VEHICLE::_0x639431E895B9AA57(bLocal_90, bLocal_93, false, false, false))
		{
			return 0;
		}
		PED::SET_SCENARIO_PEDS_TO_BE_RETURNED_BY_NEXT_COMMAND(true);
		if (PED::GET_CLOSEST_PED(Var1, 20f, true, true, &bVar0, false, true, -1))
		{
			if (MISC::IS_BIT_SET(bVar0))
			{
				if (!PED::IS_PED_IN_ANY_POLICE_VEHICLE(bVar0, 0))
				{
					if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(bVar0, bLocal_93, 17))
					{
						return 0;
					}
				}
			}
			else
			{
				func_489("NO VEHICLES FOUND");
			}
		}
		fVar3 = MONEY::NETWORK_SPENT_REQUEST_HEIST(unk_0x9B0761B4C3EB8BC7());
		if (!fVar3 == 0)
		{
			func_489("IN AN INTERIOR");
			return 0;
		}
		if (func_398())
		{
			return 0;
		}
	}
	return 1;
}

int func_398()
{
	func_480(&iLocal_51, 256);
	if (!func_488(iLocal_51, 2))
	{
		if (func_380(3))
		{
			func_480(&iLocal_51, 2);
			func_5(&iLocal_51, 32);
		}
		return 1;
	}
	else
	{
		func_379();
	}
	return 0;
}

int func_399(struct<3> Param0)
{
	if (((((((((SYSTEM::VDIST(Param0, 491.76f, -515.73f, 29.51f) <= 12f || SYSTEM::VDIST(Param0, -1453.385f, -594.2627f, 29.7966f) <= 12f) || SYSTEM::VDIST(Param0, -633.6086f, -332.3337f, 33.81f) <= 25f) || SYSTEM::VDIST(Param0, -1493.191f, -693.9906f, 26.0665f) <= 25f) || SYSTEM::VDIST(Param0, -1512.938f, -675.6082f, 27.4202f) <= 25f) || SYSTEM::VDIST(Param0, -1388.642f, -1342.266f, 3.1626f) <= 25f) || SYSTEM::VDIST(Param0, 50.2024f, -1392.306f, 28.4166f) <= 12f) || SYSTEM::VDIST(Param0, 25.9811f, -1392.289f, 28.3356f) <= 12f) || SYSTEM::VDIST(Param0, 10.0435f, -1391.596f, 28.3074f) <= 12f) || SYSTEM::VDIST(Param0, -1196.6f, -519.6772f, 31.9742f) <= 12f)
	{
		return 1;
	}
	return 0;
}

int func_400(struct<3> Param0)
{
	if ((((((SYSTEM::VDIST(Param0, -1582.782f, 5168.163f, 18.5615f) <= 15f || SYSTEM::VDIST(Param0, -1445.73f, -640.8375f, 28.7804f) <= 15f) || SYSTEM::VDIST(Param0, -348.7544f, 292.5813f, 83.9843f) <= 15f) || SYSTEM::VDIST(Param0, -273f, 317.8898f, 92.2549f) <= 15f) || SYSTEM::VDIST(Param0, -1627.935f, -1083.443f, 3.2819f) <= 40f) || SYSTEM::VDIST(Param0, -1661.098f, -1057.73f, 2.5729f) <= 40f) || SYSTEM::VDIST(Param0, -1518.358f, -553.8981f, 32.1463f) <= 15f)
	{
		func_480(&iLocal_49, 2097152);
		return 1;
	}
	func_5(&iLocal_49, 2097152);
	return 0;
}

int func_401(struct<3> Param0)
{
	int iVar0;
	
	iVar0 = PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_ID(NETWORK::NETWORK_ARE_HANDLES_THE_SAME(unk_0x9B0761B4C3EB8BC7(), 0), 1, 1, 3f, 0f);
	PATHFIND::GET_VEHICLE_NODE_POSITION(iVar0, &Param0);
	if (PATHFIND::GET_VEHICLE_NODE_IS_GPS_ALLOWED(iVar0))
	{
		if (!PATHFIND::GET_VEHICLE_NODE_IS_SWITCHED_OFF(iVar0))
		{
			if (SYSTEM::VDIST2(NETWORK::NETWORK_ARE_HANDLES_THE_SAME(unk_0x9B0761B4C3EB8BC7(), 0), Param0) > 400f)
			{
				return 1;
			}
		}
		else if (SYSTEM::VDIST2(NETWORK::NETWORK_ARE_HANDLES_THE_SAME(unk_0x9B0761B4C3EB8BC7(), 0), Param0) > 56.25f)
		{
			return 1;
		}
	}
	else if (!PATHFIND::GET_VEHICLE_NODE_IS_SWITCHED_OFF(iVar0))
	{
		if (SYSTEM::VDIST2(NETWORK::NETWORK_ARE_HANDLES_THE_SAME(unk_0x9B0761B4C3EB8BC7(), 0), Param0) > 400f)
		{
			return 1;
		}
	}
	else
	{
		iVar0 = PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_ID(NETWORK::NETWORK_ARE_HANDLES_THE_SAME(unk_0x9B0761B4C3EB8BC7(), 0), 1, 8, 3f, 0f);
		PATHFIND::GET_VEHICLE_NODE_POSITION(iVar0, &Param0);
		if (SYSTEM::VDIST2(NETWORK::NETWORK_ARE_HANDLES_THE_SAME(unk_0x9B0761B4C3EB8BC7(), 0), Param0) > 400f)
		{
			return 1;
		}
	}
	return 0;
}

int func_402(bool bParam0, var* uParam1)
{
	struct<3> Var0[4];
	
	Var0[0 /*3*/] = { unk_0x7EC595B99EA7C4B1(bParam0, 2f, 0f, 0f) };
	Var0[1 /*3*/] = { unk_0x7EC595B99EA7C4B1(bParam0, -2f, 0f, 0f) };
	Var0[2 /*3*/] = { unk_0x7EC595B99EA7C4B1(bParam0, 0f, 2f, 0f) };
	Var0[3 /*3*/] = { unk_0x7EC595B99EA7C4B1(bParam0, 0f, -2f, 0f) };
	if (PATHFIND::GET_CLOSEST_MAJOR_VEHICLE_NODE(Var0[0 /*3*/], uParam1, 3f, 0))
	{
		return 1;
	}
	else if (PATHFIND::GET_CLOSEST_MAJOR_VEHICLE_NODE(Var0[1 /*3*/], uParam1, 3f, 0))
	{
		return 1;
	}
	else if (PATHFIND::GET_CLOSEST_MAJOR_VEHICLE_NODE(Var0[2 /*3*/], uParam1, 3f, 0))
	{
		return 1;
	}
	else if (PATHFIND::GET_CLOSEST_MAJOR_VEHICLE_NODE(Var0[3 /*3*/], uParam1, 3f, 0))
	{
		return 1;
	}
	return 0;
}

bool func_403()
{
	return Global_74030;
}

int func_404()
{
	if (INTERIOR::GET_INTERIOR_AT_COORDS(joaat("carwash1")) > 0 || INTERIOR::GET_INTERIOR_AT_COORDS(joaat("carwash2")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_405()
{
	if (!func_488(iLocal_49, 128))
	{
		func_406(39, 1);
		func_406(40, 1);
		func_406(41, 1);
		func_406(42, 1);
		func_406(43, 1);
		func_406(44, 1);
		func_480(&iLocal_49, 128);
	}
}

void func_406(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_410(iParam0, 2, 1))
		{
			func_409(iParam0, 2, 1);
		}
	}
	else if (func_410(iParam0, 2, 1))
	{
		func_407(iParam0, 2, 1);
	}
}

void func_407(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		VEHICLE::IS_VEHICLE_DRIVEABLE(&(Global_99007.f_1364[iParam0]), bParam1);
	}
	else if (MISC::SET_BIT())
	{
		if (func_153() == 0)
		{
			uVar0 = func_141(func_408(iParam0), -1, 0);
			VEHICLE::IS_VEHICLE_DRIVEABLE(&uVar0, bParam1);
			func_138(func_408(iParam0), uVar0, -1, 1, 0);
		}
	}
	else
	{
		VEHICLE::IS_VEHICLE_DRIVEABLE(&(Global_111858.f_668[iParam0]), bParam1);
	}
}

int func_408(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 827;
			break;
		
		case 1:
			return 828;
			break;
		
		case 2:
			return 829;
			break;
		
		case 3:
			return 830;
			break;
		
		case 4:
			return 831;
			break;
		
		case 5:
			return 832;
			break;
		
		case 6:
			return 833;
			break;
		
		case 7:
			return 834;
			break;
		
		case 8:
			return 835;
			break;
		
		case 9:
			return 836;
			break;
		
		case 10:
			return 837;
			break;
		
		case 11:
			return 838;
			break;
		
		case 12:
			return 839;
			break;
		
		case 13:
			return 840;
			break;
		
		case 14:
			return 841;
			break;
		
		case 15:
			return 843;
			break;
		
		case 16:
			return 844;
			break;
		
		case 17:
			return 845;
			break;
		
		case 18:
			return 846;
			break;
		
		case 19:
			return 847;
			break;
		
		case 20:
			return 848;
			break;
		
		case 21:
			return 849;
			break;
		
		case 22:
			return 850;
			break;
		
		case 23:
			return 851;
			break;
		
		case 24:
			return 852;
			break;
		
		case 25:
			return 853;
			break;
		
		case 26:
			return 854;
			break;
		
		case 27:
			return 855;
			break;
		
		case 28:
			return 856;
			break;
		
		case 29:
			return 857;
			break;
		
		case 30:
			return 858;
			break;
		
		case 31:
			return 859;
			break;
		
		case 32:
			return 860;
			break;
		
		case 33:
			return 861;
			break;
		
		case 34:
			return 862;
			break;
		
		case 35:
			return 863;
			break;
		
		case 36:
			return 864;
			break;
		
		case 37:
			return 865;
			break;
		
		case 38:
			return 866;
			break;
		
		case 39:
			return 867;
			break;
		
		case 40:
			return 871;
			break;
		
		case 41:
			return 872;
			break;
		
		case 42:
			return 873;
			break;
		
		case 43:
			return 874;
			break;
		
		case 44:
			return 10099;
			break;
		
		case 45:
			return 3809;
			break;
		
		case 46:
			return 5384;
			break;
		
		case 47:
			return 6156;
			break;
		
		case 48:
			return 7233;
			break;
		
		case 49:
			return 7879;
			break;
		
		case 52:
			return 8913;
			break;
		
		case 50:
			return 8266;
			break;
		
		case 51:
			return 8268;
			break;
		
		case 53:
			return 9553;
			break;
		
		default:
			break;
	}
	return 11771;
}

void func_409(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		unk_0xBE20AB8238688965(&(Global_99007.f_1364[iParam0]), iParam1);
	}
	else if (MISC::SET_BIT())
	{
		if (func_153() == 0)
		{
			uVar0 = func_141(func_408(iParam0), -1, 0);
			unk_0xBE20AB8238688965(&uVar0, bParam1);
			func_138(func_408(iParam0), uVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0xBE20AB8238688965(&(Global_111858.f_668[iParam0]), bParam1);
	}
}

int func_410(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	if (bParam2)
	{
		return unk_0xCE990E643CD9D0E5(Global_99007.f_1364[iParam0], iParam1);
	}
	else if (MISC::SET_BIT())
	{
		if (func_153() == 0)
		{
			return unk_0xCE990E643CD9D0E5(func_141(func_408(iParam0), -1, 0), bParam1);
		}
	}
	else
	{
		return unk_0xCE990E643CD9D0E5(Global_111858.f_668[iParam0], bParam1);
	}
	return 0;
}

void func_411(var uParam0)
{
	if (func_488(iLocal_49, 2))
	{
		if (!func_63())
		{
			return;
		}
		func_100(1);
	}
	func_68();
	func_539();
	if (func_548())
	{
		func_533(uParam0);
	}
}

void func_412()
{
	if (!PED::IS_PED_IN_ANY_POLICE_VEHICLE(bLocal_90, 0))
	{
		if (ENTITY::IS_ENTITY_AT_ENTITY(bLocal_90, unk_0x9B0761B4C3EB8BC7(), 5f, 5f, 5f, false, true, 0) || func_488(iLocal_49, 8192))
		{
			MONEY::NETWORK_MONEY_CAN_BET(0, 101, true);
			MONEY::NETWORK_MONEY_CAN_BET(0, 74, true);
			PAD::SET_INPUT_EXCLUSIVE(0, 51);
			if (SYSTEM::VDIST(unk_0x9B0761B4C3EB8BC7(), 0) && SYSTEM::VDIST(bLocal_90, 0))
			{
				ENTITY::SET_ENTITY_LOD_DIST(bLocal_90, 50);
				PED::SET_PED_LOD_MULTIPLIER(bLocal_90, 5f);
				if (func_488(iLocal_49, 16))
				{
					if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_ID()))
					{
						PLAYER::SET_PLAYER_CAN_DO_DRIVE_BY(PLAYER::PLAYER_ID(), true);
						func_5(&iLocal_49, 16);
					}
				}
				bLocal_93 = ENTITY::GET_ENTITY_MODEL(unk_0x9B0761B4C3EB8BC7(), 0);
				if (ENTITY::GET_ENTITY_COORDS(bLocal_93, false))
				{
					if (PED::IS_PED_SITTING_IN_VEHICLE(bLocal_90, bLocal_93) && unk_0xE0B3BC41DDA88DF0(unk_0x9B0761B4C3EB8BC7(), bLocal_93, 0f))
					{
						func_489("***** prostitute IN VEHICLE****** ");
						if (func_488(iLocal_49, 8))
						{
							if (STREAMING::HAS_CLIP_SET_LOADED(func_92()))
							{
								if (func_426(bLocal_93))
								{
									PED::SET_PED_IN_VEHICLE_CONTEXT(bLocal_90, AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("MINI_PROSTITUTE_LOW_RESTRICTED_PASSENGER"));
								}
								else if (func_425(bLocal_93))
								{
									PED::SET_PED_IN_VEHICLE_CONTEXT(bLocal_90, AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("MINI_PROSTITUTE_LOW_RESTRICTED_NOAMBIENT_PASSENGER"));
								}
								else if (func_424(bLocal_93))
								{
									PED::SET_PED_IN_VEHICLE_CONTEXT(bLocal_90, AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("MINI_PROSTITUTE_LOW_LOWRIDER_PASSENGER"));
								}
								else if (func_423(bLocal_93))
								{
									PED::SET_PED_IN_VEHICLE_CONTEXT(bLocal_90, AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("MINI_PROSTITUTE_LOW_LOWRIDER2_PASSENGER"));
								}
								else if (func_422(bLocal_93))
								{
									PED::SET_PED_IN_VEHICLE_CONTEXT(bLocal_90, AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("MINI_PROSTITUTE_LOW_INFERNUS2_PASSENGER"));
								}
								else if (func_421(bLocal_93))
								{
									PED::SET_PED_IN_VEHICLE_CONTEXT(bLocal_90, AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("MINI_PROSTITUTE_LOW_SC1_PASSENGER"));
								}
								else if (func_420(bLocal_93))
								{
									PED::SET_PED_IN_VEHICLE_CONTEXT(bLocal_90, AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("MINI_PROSTITUTE_LOW_TEZERACT_PASSENGER"));
								}
								else if (func_419(bLocal_93))
								{
									PED::SET_PED_IN_VEHICLE_CONTEXT(bLocal_90, AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("MINI_PROSTITUTE_LOW_DOMINATOR3_PASSENGER"));
								}
								else if (func_418(bLocal_93))
								{
									PED::SET_PED_IN_VEHICLE_CONTEXT(bLocal_90, AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("MINI_PROSTITUTE_LOW_ITALIGTO_PASSENGER"));
								}
								else if (func_417(bLocal_93))
								{
									PED::SET_PED_IN_VEHICLE_CONTEXT(bLocal_90, AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("MINI_PROSTITUTE_LOW_RESTRICTED_SCHLAGEN_PASSENGER"));
								}
								else if (func_416(bLocal_93))
								{
									PED::SET_PED_IN_VEHICLE_CONTEXT(bLocal_90, AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("MINI_PROSTITUTE_LOW_NEO_PASSENGER"));
								}
								else if (func_415(bLocal_93))
								{
									PED::SET_PED_IN_VEHICLE_CONTEXT(bLocal_90, AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("MINI_PROSTITUTE_LOW_PEYOTE2_PASSENGER"));
								}
								else
								{
									PED::SET_PED_IN_VEHICLE_CONTEXT(bLocal_90, AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("MINI_PROSTITUTE_LOW_PASSENGER"));
								}
							}
						}
						if (func_548())
						{
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(bLocal_90, false, false);
						}
						else
						{
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(bLocal_90, true, true);
						}
						func_182(bLocal_90, 0);
						func_392();
						iLocal_62 = MISC::GET_GAME_TIMER();
						func_40(&iLocal_101);
						iLocal_286 = 7;
					}
					else
					{
						func_489("SOMETHINGS GONE WRONGWITH PROS GETTING INTO VEHICLE , either her or player");
					}
				}
			}
			else
			{
				if ((func_414(bLocal_90, unk_0x9B0761B4C3EB8BC7(), 1) > 11f || func_413(20f)) || !unk_0xE0B3BC41DDA88DF0(unk_0x9B0761B4C3EB8BC7(), bLocal_93, 0f))
				{
					func_115(&iLocal_107);
					if (!SYSTEM::VDIST(bLocal_90, 0))
					{
						HUD::HIDE_HUD_AND_RADAR_THIS_FRAME(bLocal_90);
						func_471(0);
						func_489("PROS FINISHED SEQUENCE TASK BUT NOT IN VEHICLE");
						func_96(15);
					}
				}
				if (SYSTEM::VDIST(unk_0x9B0761B4C3EB8BC7(), 0))
				{
					if (!ENTITY::GET_ENTITY_COORDS(bLocal_93, false))
					{
						bLocal_93 = ENTITY::GET_ENTITY_MODEL(unk_0x9B0761B4C3EB8BC7(), 0);
					}
					else if (!VEHICLE::_0x639431E895B9AA57(bLocal_90, bLocal_93, false, false, false))
					{
						if (!func_112())
						{
							if (!func_488(iLocal_73, 1))
							{
								func_40(&iLocal_113);
								func_480(&iLocal_73, 1);
							}
							else if (func_7(&iLocal_113) > 20f)
							{
								func_126();
								func_489("prostitute couldn't get into the car");
								iLocal_286 = 6;
							}
						}
					}
				}
			}
		}
		else if (!func_488(iLocal_73, 1))
		{
			func_489("PLAYER out of range for entering VEHICLE or wanted level");
			HUD::HIDE_HUD_AND_RADAR_THIS_FRAME(bLocal_90);
			func_96(15);
		}
	}
}

bool func_413(float fParam0)
{
	if (!func_10(&iLocal_107))
	{
		func_40(&iLocal_107);
	}
	return func_121(&iLocal_107) > fParam0;
}

float func_414(bool bParam0, bool bParam1, int iParam2)
{
	struct<3> Var0;
	struct<3> Var1;
	
	if (!PED::IS_PED_IN_ANY_POLICE_VEHICLE(bParam0, 0))
	{
		Var0 = { NETWORK::NETWORK_ARE_HANDLES_THE_SAME(bParam0, 1) };
	}
	else
	{
		Var0 = { NETWORK::NETWORK_ARE_HANDLES_THE_SAME(bParam0, 0) };
	}
	if (!PED::IS_PED_IN_ANY_POLICE_VEHICLE(bParam1, 0))
	{
		Var1 = { NETWORK::NETWORK_ARE_HANDLES_THE_SAME(bParam1, 1) };
	}
	else
	{
		Var1 = { NETWORK::NETWORK_ARE_HANDLES_THE_SAME(bParam1, 0) };
	}
	return HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Var0, Var1, iParam2);
}

int func_415(bool bParam0)
{
	if (ENTITY::GET_ENTITY_COORDS(bParam0, false))
	{
		switch (VEHICLE::GET_VEHICLE_LAYOUT_HASH(bParam0))
		{
			case -627376728:
				return 1;
				break;
			}
	}
	return 0;
}

int func_416(bool bParam0)
{
	if (ENTITY::GET_ENTITY_COORDS(bParam0, false))
	{
		switch (VEHICLE::GET_VEHICLE_LAYOUT_HASH(bParam0))
		{
			case 986556497:
				return 1;
				break;
			}
	}
	return 0;
}

int func_417(bool bParam0)
{
	if (ENTITY::GET_ENTITY_COORDS(bParam0, false))
	{
		switch (VEHICLE::GET_VEHICLE_LAYOUT_HASH(bParam0))
		{
			case -988377294:
				return 1;
				break;
			}
	}
	return 0;
}

int func_418(bool bParam0)
{
	if (ENTITY::GET_ENTITY_COORDS(bParam0, false))
	{
		switch (VEHICLE::GET_VEHICLE_LAYOUT_HASH(bParam0))
		{
			case 510359473:
				return 1;
				break;
			}
	}
	return 0;
}

int func_419(bool bParam0)
{
	if (ENTITY::GET_ENTITY_COORDS(bParam0, false))
	{
		switch (VEHICLE::GET_VEHICLE_LAYOUT_HASH(bParam0))
		{
			case 1212243433:
				return 1;
				break;
			}
	}
	return 0;
}

int func_420(bool bParam0)
{
	if (ENTITY::GET_ENTITY_COORDS(bParam0, false))
	{
		switch (VEHICLE::GET_VEHICLE_LAYOUT_HASH(bParam0))
		{
			case 570040040:
			case -193022774:
				return 1;
				break;
			}
	}
	return 0;
}

int func_421(bool bParam0)
{
	if (ENTITY::GET_ENTITY_COORDS(bParam0, false))
	{
		switch (VEHICLE::GET_VEHICLE_LAYOUT_HASH(bParam0))
		{
			case 1192783831:
				return 1;
				break;
			}
	}
	return 0;
}

int func_422(bool bParam0)
{
	if (ENTITY::GET_ENTITY_COORDS(bParam0, false))
	{
		switch (VEHICLE::GET_VEHICLE_LAYOUT_HASH(bParam0))
		{
			case -1546132012:
				return 1;
				break;
			}
	}
	return 0;
}

int func_423(bool bParam0)
{
	if (ENTITY::GET_ENTITY_COORDS(bParam0, false))
	{
		switch (VEHICLE::GET_VEHICLE_LAYOUT_HASH(bParam0))
		{
			case 1837596901:
			case 2013836096:
				return 1;
				break;
			}
	}
	return 0;
}

int func_424(bool bParam0)
{
	if (ENTITY::GET_ENTITY_COORDS(bParam0, false))
	{
		switch (VEHICLE::GET_VEHICLE_LAYOUT_HASH(bParam0))
		{
			case 1697345049:
			case -635697407:
				return 1;
				break;
			}
	}
	return 0;
}

int func_425(bool bParam0)
{
	if (ENTITY::GET_ENTITY_COORDS(bParam0, false))
	{
		switch (VEHICLE::GET_VEHICLE_LAYOUT_HASH(bParam0))
		{
			case -782720499:
			case -38413156:
			case 2071837743:
				return 1;
				break;
			}
	}
	return 0;
}

int func_426(bool bParam0)
{
	if (ENTITY::GET_ENTITY_COORDS(bParam0, false))
	{
		switch (VEHICLE::GET_VEHICLE_LAYOUT_HASH(bParam0))
		{
			case 542797648:
			case 68566729:
			case 2033852426:
			case -1820894825:
			case -1453479140:
			case 2130662788:
			case 1410462333:
			case -317944664:
			case 1240573865:
				return 1;
				break;
			}
	}
	return 0;
}

void func_427(var uParam0)
{
	int iVar0;
	
	if (!func_436(0))
	{
		return;
	}
	if (!func_488(iLocal_49, 16))
	{
		PLAYER::SET_PLAYER_CAN_DO_DRIVE_BY(PLAYER::PLAYER_ID(), false);
		func_480(&iLocal_49, 16);
	}
	if (!func_10(&iLocal_107))
	{
		func_470(&iLocal_107);
	}
	if (func_121(&iLocal_107) >= 20f || !ENTITY::IS_ENTITY_AT_ENTITY(bLocal_90, unk_0x9B0761B4C3EB8BC7(), 3f, 3f, 3f, false, true, 0))
	{
		if (func_488(iLocal_73, 524288))
		{
			func_115(&iLocal_107);
			iLocal_286 = 6;
		}
		else if (func_435())
		{
			func_40(&iLocal_107);
			func_480(&iLocal_73, 524288);
		}
	}
	func_69(bLocal_90);
	if (((ENTITY::IS_ENTITY_AT_ENTITY(bLocal_90, unk_0x9B0761B4C3EB8BC7(), 3f, 3f, 3f, false, true, 0) || func_488(iLocal_73, 1)) && !func_217(0)) && !func_403())
	{
		if (!VEHICLE::_0x639431E895B9AA57(bLocal_90, bLocal_93, false, false, false))
		{
			if (!func_112())
			{
				if (!func_488(iLocal_73, 1))
				{
					func_40(&iLocal_113);
					func_480(&iLocal_73, 1);
				}
				else if (func_7(&iLocal_113) > 10f)
				{
					func_68();
					HUD::HIDE_HUD_AND_RADAR_THIS_FRAME(bLocal_90);
					func_489("prostitute couldn't get into the car");
					iLocal_286 = 6;
				}
			}
		}
		else
		{
			func_428();
		}
	}
	else if (func_468("PROS_ACCEPT"))
	{
		func_5(&iLocal_49, 1048576);
		func_466();
		if (func_548())
		{
			iVar0 = TASK::GET_SCRIPT_TASK_STATUS(bLocal_90, -2017877118);
			if (iVar0 != 1 && iVar0 != 0)
			{
				func_539();
				func_533(uParam0);
			}
		}
	}
}

void func_428()
{
	char* sVar0;
	
	if (iLocal_286 != 5 && func_364(&sVar0, 0))
	{
		func_431();
		if (func_429(iLocal_72, 1) || PLAYER::IS_PLAYER_PRESSING_HORN(PLAYER::PLAYER_ID()))
		{
			AUDIO::_PLAY_AMBIENT_SPEECH1(unk_0x9B0761B4C3EB8BC7(), "HOOKER_REQUEST", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
			func_480(&iLocal_49, 8192);
			func_40(&iLocal_107);
		}
		if (func_488(iLocal_49, 8192))
		{
			func_466();
			Global_31118 = 1;
			Global_2425869[PLAYER::PLAYER_ID() /*443*/].f_415 = 1;
			func_131("PROSTITUTES_SOLICIT_SCENE");
			func_87("PROSTITUTES_DRIVE_SCENE");
			if (SYSTEM::VDIST(unk_0x9B0761B4C3EB8BC7(), 0))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(bLocal_90, -1794415470) != 1 && !unk_0xE0B3BC41DDA88DF0(bLocal_90, ENTITY::GET_ENTITY_MODEL(unk_0x9B0761B4C3EB8BC7(), 0), 1.401298E-45f))
				{
					TASK::TASK_ENTER_VEHICLE(bLocal_90, bLocal_93, -1, 0, 1f, 8388609, 0);
				}
			}
			sLocal_61 = func_50(unk_0x9B0761B4C3EB8BC7(), 1, 0);
			STREAMING::REQUEST_ANIM_DICT(sLocal_61);
			sLocal_61 = func_50(unk_0x9B0761B4C3EB8BC7(), 0, 1);
			STREAMING::REQUEST_ANIM_DICT(sLocal_61);
			func_40(&iLocal_101);
			iLocal_286 = 5;
		}
	}
}

int func_429(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = func_430(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::GET_PLAYER_INDEX()))
	{
		return 0;
	}
	if (func_217(0))
	{
		return 0;
	}
	if (OBJECT::ADD_DOOR_TO_SYSTEM())
	{
		return 0;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_42356[iVar0 /*32*/] == 1 && Global_42356[iVar0 /*32*/].f_4 == 1)
		{
			if (bParam1)
			{
				if (Global_42356[iVar0 /*32*/].f_29)
				{
					return 0;
				}
			}
			Global_42356[iVar0 /*32*/].f_5 = 1;
			Global_42356[iVar0 /*32*/].f_29 = 1;
			return 1;
		}
		else
		{
			if (Global_42356[iVar0 /*32*/] == 0)
			{
			}
			if (Global_42356[iVar0 /*32*/].f_7)
			{
			}
		}
	}
	return 0;
}

int func_430(int iParam0)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_42356[iVar0 /*32*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_431()
{
	if (Global_31118)
	{
		if (HUD::DISABLE_FRONTEND_THIS_FRAME())
		{
			return;
		}
		MONEY::NETWORK_MONEY_CAN_BET(0, 101, true);
		MONEY::NETWORK_MONEY_CAN_BET(0, 74, true);
		PAD::SET_INPUT_EXCLUSIVE(0, 51);
		if (!func_488(iLocal_49, 8192))
		{
			if (iLocal_72 == -1)
			{
				func_433(&iLocal_72, 5, "PROS_ACCEPT", 0, 0, 0, 0);
			}
		}
	}
	else if (func_432(iLocal_72, 0))
	{
		func_466();
	}
}

bool func_432(int iParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = func_430(iParam0);
	if (iParam1 == 0)
	{
		if (iVar0 == -1)
		{
			return 0;
		}
	}
	else
	{
		iVar0 = iParam0;
	}
	if (iVar0 < 0)
	{
		return 0;
	}
	if (Global_42356[iVar0 /*32*/].f_6)
	{
		return 0;
	}
	bVar1 = false;
	if (!Global_42356[iVar0 /*32*/].f_12)
	{
		HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(&(Global_42356[iVar0 /*32*/].f_8));
		HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(&Global_42551);
		bVar1 = HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
	}
	else
	{
		HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(&(Global_42356[iVar0 /*32*/].f_8));
		HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(&Global_42551);
		if (Global_42356[iVar0 /*32*/].f_30)
		{
			unk_0x9EFD301E3BE8324E(&(Global_42356[iVar0 /*32*/].f_13));
		}
		else
		{
			HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(&(Global_42356[iVar0 /*32*/].f_13));
		}
		bVar1 = HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
	}
	return bVar1;
}

void func_433(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	if (INTERIOR::GET_INTERIOR_AT_COORDS(joaat("context_controller")) < 1)
	{
	}
	if (LOCALIZATION::GET_CURRENT_LANGUAGE())
	{
		if (!*iParam0 == -1)
		{
			func_434(iParam0);
		}
		return;
	}
	if (!*iParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (!Global_42356[iVar0 /*32*/])
		{
			Global_42356[iVar0 /*32*/] = 1;
			Global_42356[iVar0 /*32*/].f_1 = Global_42557;
			Global_42557++;
			Global_42356[iVar0 /*32*/].f_4 = 0;
			Global_42356[iVar0 /*32*/].f_29 = 0;
			Global_42356[iVar0 /*32*/].f_5 = 0;
			Global_42356[iVar0 /*32*/].f_2 = iParam1;
			StringCopy(&(Global_42356[iVar0 /*32*/].f_8), sParam2, 16);
			Global_42356[iVar0 /*32*/].f_6 = iParam3;
			Global_42356[iVar0 /*32*/].f_31 = SCRIPT::GET_ID_OF_THIS_THREAD();
			Global_42356[iVar0 /*32*/].f_7 = 0;
			Global_42356[iVar0 /*32*/].f_3 = iParam5;
			if (!CAM::IS_SCREEN_FADED_OUT(sParam4))
			{
				Global_42356[iVar0 /*32*/].f_12 = 1;
				StringCopy(&(Global_42356[iVar0 /*32*/].f_13), sParam4, 64);
				Global_42356[iVar0 /*32*/].f_30 = iParam6;
			}
			else
			{
				Global_42356[iVar0 /*32*/].f_12 = 0;
				Global_42356[iVar0 /*32*/].f_30 = 0;
			}
			*iParam0 = Global_42356[iVar0 /*32*/].f_1;
			return;
		}
		iVar0++;
	}
}

void func_434(int iParam0)
{
	int iVar0;
	
	if (*iParam0 == -1)
	{
		return;
	}
	iVar0 = func_430(*iParam0);
	if (iVar0 == -1)
	{
		*iParam0 = -1;
		return;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_42356[iVar0 /*32*/])
		{
			Global_42356[iVar0 /*32*/].f_7 = 1;
			*iParam0 = -1;
			return;
		}
	}
	*iParam0 = -1;
}

int func_435()
{
	bool bVar0;
	int iVar1;
	
	if (!MISC::IS_BIT_SET(bLocal_90) || STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_90))
	{
		return 1;
	}
	if (!func_548())
	{
		func_68();
		if (SYSTEM::VDIST(bLocal_90, 1))
		{
			TASK::TASK_WANDER_STANDARD(bLocal_90, 40000f, 0);
		}
		else if (func_488(iLocal_49, 4194304))
		{
			bVar0 = NETWORK::_NETWORK_GET_ROS_PRIVILEGE_25(8, 11);
			TASK::OPEN_SEQUENCE_TASK(&iVar1);
			TASK::TASK_PLAY_ANIM(false, func_67(iLocal_284), func_66(5), 2f, -2f, -1, 0, 0f, false, false, false);
			TASK::TASK_PLAY_ANIM(false, func_67(iLocal_284), func_66(bVar0), 8f, -8f, -1, 1, 0f, false, false, false);
			TASK::CLOSE_SEQUENCE_TASK(iVar1);
			AUDIO::STOP_SCRIPTED_CONVERSATION(bLocal_90, iVar1);
			TASK::CLEAR_SEQUENCE_TASK(&iVar1);
		}
		return 1;
	}
	if (SYSTEM::VDIST(bLocal_90, 1))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(bLocal_90))
		{
			TASK::TASK_WANDER_STANDARD(bLocal_90, 40000f, 0);
			return 1;
		}
		else
		{
			NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(bLocal_90);
			return 0;
		}
	}
	switch (iLocal_55)
	{
		case 0:
			if (func_488(iLocal_49, 4194304))
			{
				func_68();
				iLocal_55 = 1;
			}
			break;
		
		case 1:
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(bLocal_90))
			{
				TASK::TASK_PLAY_ANIM(bLocal_90, func_67(iLocal_284), func_66(5), 2f, -2f, -1, 0, 0f, false, false, false);
				iLocal_55 = 2;
			}
			else
			{
				NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(bLocal_90);
			}
			break;
		
		case 2:
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(bLocal_90))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(bLocal_90, -2017877118) == 7)
				{
					bVar0 = NETWORK::_NETWORK_GET_ROS_PRIVILEGE_25(8, 11);
					TASK::TASK_PLAY_ANIM(bLocal_90, func_67(iLocal_284), func_66(bVar0), 8f, -8f, -1, 1, 0f, false, false, false);
					iLocal_55 = 3;
				}
			}
			else
			{
				NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(bLocal_90);
			}
			break;
		
		case 3:
			iLocal_55 = 0;
			return 1;
			break;
	}
	return 0;
}

int func_436(bool bParam0)
{
	if (PED::IS_PED_IN_ANY_POLICE_VEHICLE(bLocal_90, 0))
	{
		return 0;
	}
	if (func_488(iLocal_49, 8192))
	{
	}
	if (func_414(bLocal_90, unk_0x9B0761B4C3EB8BC7(), 1) > 11f)
	{
		return 0;
	}
	if (!SYSTEM::VDIST(unk_0x9B0761B4C3EB8BC7(), 0))
	{
		return 0;
	}
	if (func_548())
	{
		if (STATS::_GET_NGSTAT_BOOL_HASH(ENTITY::GET_ENTITY_MODEL(unk_0x9B0761B4C3EB8BC7(), 0)) > 1)
		{
			return 0;
		}
	}
	if (bParam0)
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(ENTITY::GET_ENTITY_MODEL(unk_0x9B0761B4C3EB8BC7(), 0)) > 2f)
		{
			return 0;
		}
	}
	if (func_90(NETWORK::NETWORK_ARE_HANDLES_THE_SAME(bLocal_90, 1), 1106247680))
	{
		if (!func_488(iLocal_50, 8192) && !unk_0x653A331834B72BC0(unk_0x9B0761B4C3EB8BC7()))
		{
			func_351("PROS_COPS", -1);
			func_480(&iLocal_50, 8192);
		}
		return 0;
	}
	if (!func_378())
	{
		if (!func_548())
		{
			if ((!iLocal_86 && !Global_110905) && func_438(unk_0x9B0761B4C3EB8BC7(), 0) == -1)
			{
				func_351("PROS_CAR", -1);
				iLocal_86 = 1;
			}
			func_437();
		}
		else if (!func_521(4096))
		{
			func_351("PROS_CAR", -1);
			func_196(4096);
		}
		return 0;
	}
	return 1;
}

void func_437()
{
	if (STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(unk_0x9B0761B4C3EB8BC7()))
	{
		return;
	}
	if (!func_488(iLocal_49, 1))
	{
		if (!AUDIO::IS_ANY_SPEECH_PLAYING(unk_0x9B0761B4C3EB8BC7()) && !AUDIO::IS_ANY_SPEECH_PLAYING(bLocal_90))
		{
			AUDIO::_PLAY_AMBIENT_SPEECH1(unk_0x9B0761B4C3EB8BC7(), "HOOKER_CAR_INCORRECT", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
			func_480(&iLocal_49, 1);
		}
	}
}

int func_438(bool bParam0, int iParam1)
{
	bool bVar0;
	void fVar1;
	int iVar2;
	int iVar3;
	
	if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bParam0))
	{
		if (SYSTEM::VDIST(bParam0, iParam1))
		{
			bVar0 = ENTITY::GET_ENTITY_MODEL(bParam0, iParam1);
			if (MISC::IS_BIT_SET(bVar0))
			{
				fVar1 = RECORDING::_STOP_RECORDING_THIS_FRAME(MISC::GET_MODEL_DIMENSIONS(bVar0));
				if (fVar1 == 1)
				{
					iVar3 = -1;
					return iVar3;
				}
				iVar2 = 0;
				while (iVar2 < fVar1)
				{
					iVar3 = (iVar2 - 1);
					if (!SYSTEM::VDIST2(bVar0, iVar3, 0))
					{
						if (MISC::IS_MINIGAME_IN_PROGRESS(bVar0, iVar3, 0) == bParam0)
						{
							return iVar3;
						}
					}
					iVar2++;
				}
			}
		}
	}
	return iVar3;
}

void func_439()
{
	if (func_436(0))
	{
		func_428();
		if (TASK::GET_SCRIPT_TASK_STATUS(bLocal_90, 242628503) == 7 && !func_488(iLocal_49, 8192))
		{
			if (func_72(1))
			{
				func_115(&iLocal_107);
				iLocal_62 = MISC::GET_GAME_TIMER();
				func_489("prostitute proposition player VEHICLE");
				iLocal_286 = 4;
			}
		}
	}
	else
	{
		HUD::HIDE_HUD_AND_RADAR_THIS_FRAME(bLocal_90);
		func_96(15);
	}
}

void func_440(var uParam0)
{
	if (func_436(0))
	{
		func_428();
		if (TASK::GET_SCRIPT_TASK_STATUS(bLocal_90, 242628503) == 7 || func_488(iLocal_49, 8192))
		{
			iLocal_286 = 3;
		}
		else if (func_413(20f))
		{
			func_115(&iLocal_107);
			func_471(0);
		}
		else
		{
			func_441(uParam0);
		}
	}
	else
	{
		HUD::HIDE_HUD_AND_RADAR_THIS_FRAME(bLocal_90);
		func_96(15);
	}
}

void func_441(var uParam0)
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	struct<3> Var5;
	int iVar6;
	
	if (!MISC::IS_BIT_SET(bLocal_93))
	{
		return;
	}
	ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(MISC::GET_MODEL_DIMENSIONS(bLocal_93), &Var2, &Var1);
	Var0 = { Var1 - Var2 };
	Var0 = { Var0 / Vector(2f, 2f, 2f) };
	Var3 = { unk_0x7EC595B99EA7C4B1(bLocal_93, -(Var0.x + 0.2f), 0f, 0f) };
	Var4 = { unk_0x7EC595B99EA7C4B1(bLocal_93, (Var0.x + 0.2f), 0f, 0f) };
	Var5 = { NETWORK::NETWORK_ARE_HANDLES_THE_SAME(bLocal_90, 1) };
	if (SYSTEM::VDIST(Var5, Var4) < SYSTEM::VDIST(Var5, Var3))
	{
		Var3 = { Var4 };
	}
	if ((TASK::GET_SCRIPT_TASK_STATUS(bLocal_90, -1794415470) != 1 || !func_488(iLocal_49, 8192)) && SYSTEM::VDIST2(Local_89, Var3) > 0f)
	{
		if (func_548())
		{
			if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(bLocal_90))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(bLocal_90, false, true);
			}
			func_451(&uLocal_281, func_67(iLocal_284));
			func_445(uParam0, 1);
			func_442(&uLocal_281, uParam0);
		}
		TASK::OPEN_SEQUENCE_TASK(&iVar6);
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Var3.x, Var3.f_1, Var3.f_2, 1f, -1, 1f, 8192, 40000f);
		TASK::TASK_TURN_PED_TO_FACE_COORD(0, PED::GET_PED_BONE_COORDS(unk_0x9B0761B4C3EB8BC7(), 31086, 0f, 0f, 0f), 0);
		TASK::CLOSE_SEQUENCE_TASK(iVar6);
		AUDIO::STOP_SCRIPTED_CONVERSATION(bLocal_90, iVar6);
		TASK::CLEAR_SEQUENCE_TASK(&iVar6);
		Local_89 = { Var3 };
	}
}

void func_442(var uParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!AUDIO::PRELOAD_SCRIPT_CONVERSATION((*uParam0)[iVar0]))
		{
			func_443(uParam1, (*uParam0)[iVar0]);
		}
		iVar0++;
	}
}

void func_443(var uParam0, char* sParam1)
{
	func_444(uParam0, 1, -1, sParam1, 0);
}

void func_444(var uParam0, bool bParam1, int iParam2, char* sParam3, int iParam4)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (unk_0xCE990E643CD9D0E5((*uParam0)[iVar0 /*18*/], 30))
		{
			if (unk_0xCE990E643CD9D0E5((*uParam0)[iVar0 /*18*/], iParam1))
			{
				if (iParam2 != -1)
				{
					if ((uParam0[iVar0 /*18*/])->f_1 == iParam2)
					{
						return;
					}
				}
				if (bParam1 != 4)
				{
					if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS(sParam3, "NULL"))
					{
						if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS(&((uParam0[iVar0 /*18*/])->f_2), sParam3))
						{
							return;
						}
					}
				}
				if (bParam1 == 9)
				{
					return;
				}
			}
		}
		iVar0++;
	}
	if (!uParam0->f_271)
	{
		uParam0->f_271 = 1;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (!unk_0xCE990E643CD9D0E5((*uParam0)[iVar0 /*18*/], 30))
		{
			StringCopy(&((uParam0[iVar0 /*18*/])->f_2), sParam3, 64);
			(uParam0[iVar0 /*18*/])->f_1 = iParam2;
			(*uParam0)[iVar0 /*18*/] = iParam4;
			unk_0xBE20AB8238688965(uParam0[iVar0 /*18*/], bParam1);
			unk_0xBE20AB8238688965(uParam0[iVar0 /*18*/], 30);
			return;
		}
		iVar0++;
	}
}

void func_445(var uParam0, bool bParam1)
{
	int iVar0;
	
	if (!bParam1)
	{
		func_447(uParam0);
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		func_446(uParam0[iVar0 /*18*/]);
		iVar0++;
	}
	uParam0->f_271 = 0;
	uParam0->f_272 = -1;
	uParam0->f_273 = 1;
}

void func_446(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	StringCopy(&(uParam0->f_2), "NULL", 64);
}

void func_447(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (unk_0xCE990E643CD9D0E5((*uParam0)[iVar0 /*18*/], 30))
		{
			func_448(uParam0[iVar0 /*18*/]);
		}
		iVar0++;
	}
	uParam0->f_271 = 1;
}

void func_448(var uParam0)
{
	func_449(*uParam0, &(uParam0->f_2), uParam0->f_1);
}

void func_449(bool bParam0, char* sParam1, int iParam2)
{
	if (unk_0xCE990E643CD9D0E5(uParam0, 30))
	{
		switch (func_450(bParam0))
		{
			case 0:
				unk_0x74528AC0906CBABE(iParam2);
				break;
			
			case 1:
				unk_0x1082C25039B168F8(sParam1);
				break;
			
			case 2:
				STREAMING::REMOVE_CLIP_SET(sParam1);
				break;
			
			case 3:
				GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(sParam1);
				break;
			
			case 4:
				VEHICLE::REMOVE_VEHICLE_RECORDING(iParam2, sParam1);
				break;
			
			case 5:
				TASK::REMOVE_WAYPOINT_RECORDING(sParam1);
				break;
			
			case 6:
				AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
				break;
			
			case 7:
				SCRIPT::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(iParam2);
				break;
			
			case 8:
				HUD::CLEAR_ADDITIONAL_TEXT(iParam2, unk_0xCE990E643CD9D0E5(bParam0, 26));
				break;
			
			case 9:
				STREAMING::REMOVE_PTFX_ASSET();
				break;
			
			default:
				break;
		}
	}
}

int func_450(bool bParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (unk_0xCE990E643CD9D0E5(uParam0, iVar0))
		{
			return bVar0;
		}
		bVar0++;
	}
	return -1;
}

int func_451(var uParam0, char* sParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!AUDIO::PRELOAD_SCRIPT_CONVERSATION((*uParam0)[iVar0]))
		{
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS((*uParam0)[iVar0], uParam1))
			{
				return 0;
			}
		}
		iVar0++;
	}
	iVar1 = func_452(uParam0);
	if (iVar1 < 0 || iVar1 >= *uParam0)
	{
		return 0;
	}
	(*uParam0)[iVar1] = sParam1;
	return 1;
}

int func_452(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (AUDIO::PRELOAD_SCRIPT_CONVERSATION((*uParam0)[iVar0]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_453(var uParam0)
{
	char* sVar0;
	
	if (func_436(1))
	{
		if (!func_10(&iLocal_107))
		{
			func_470(&iLocal_107);
		}
		func_480(&iLocal_49, 4);
		Global_31119 = 1;
		func_428();
		if (func_469(&iLocal_107, 2f) || func_488(iLocal_49, 8192))
		{
			func_480(&iLocal_49, 2);
			if (func_364(&sVar0, 0))
			{
				STATS::_GET_NGSTAT_INT_HASH(unk_0x9B0761B4C3EB8BC7(), 0);
				PED::SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(unk_0x9B0761B4C3EB8BC7(), false);
				TASK::TASK_LOOK_AT_ENTITY(unk_0x9B0761B4C3EB8BC7(), bLocal_90, -1, 2048, 4);
				func_441(uParam0);
				func_480(&iLocal_49, 4);
				Global_31118 = 1;
				Global_2425869[PLAYER::PLAYER_ID() /*443*/].f_415 = 1;
				iLocal_286 = 2;
			}
			else
			{
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS(func_465(&sVar0), "PIM_HHIDCR"))
				{
					func_464(&sVar0, 30000);
					func_462(1);
				}
				else
				{
					func_351(&sVar0, -1);
				}
				if (!CAM::IS_SCREEN_FADED_OUT(&sVar0) && NETWORK::NETWORK_IS_GAME_IN_PROGRESS(&sVar0, "PROS_NO_MONEY"))
				{
					func_454();
				}
				func_96(0);
				iLocal_287 = 0;
				func_480(&iLocal_49, 8388608);
				func_5(&iLocal_49, 4);
				Global_31118 = 0;
				Global_2425869[PLAYER::PLAYER_ID() /*443*/].f_415 = 0;
			}
		}
	}
	else
	{
		func_5(&iLocal_49, 4);
		Global_31119 = 0;
	}
}

void func_454()
{
	if (!func_521(64))
	{
		func_455(0, 31, 5);
		func_196(64);
	}
}

void func_455(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (!NETWORK::IS_STORE_AVAILABLE_TO_USER())
	{
		return;
	}
	if (MISC::SET_BIT() && func_459(PLAYER::PLAYER_ID(), 1, 0))
	{
		return;
	}
	if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 199) || unk_0xB9C0D9B37277621D(2, 199))
	{
		return;
	}
	if (GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN() != 0)
	{
		return;
	}
	if (HUD::DISABLE_FRONTEND_THIS_FRAME())
	{
		return;
	}
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		return;
	}
	if (CAM::IS_SCREEN_FADED_IN())
	{
		return;
	}
	if (func_458())
	{
		return;
	}
	if (!func_456())
	{
		return;
	}
	if (MISC::SET_BIT() || iParam0)
	{
		if (!Global_99007.f_1425 && !NETWORK::IS_COMMERCE_STORE_OPEN())
		{
			iVar0 = 18;
			HUD::SET_WARNING_MESSAGE_WITH_HEADER("BRSCRWTEX", "BRDISTEX", iVar0, "BRSHETEX", false, -1, 0, 0, true, 0);
			Global_2463305 = iParam1;
			Global_99007.f_1425 = 1;
			Global_99007.f_1426 = iParam2;
		}
	}
}

int func_456()
{
	if (func_457())
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE() == 0)
	{
		return 0;
	}
	return 1;
}

bool func_457()
{
	return Global_2462752;
}

bool func_458()
{
	return Global_2463410;
}

int func_459(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_460(iParam0))
		{
			return 1;
		}
	}
	if (!bParam2)
	{
	}
	if (Global_1590682[iParam0 /*883*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_460(int iParam0)
{
	return func_461(iParam0);
}

bool func_461(int iParam0)
{
	return unk_0xCE990E643CD9D0E5(Global_1590682[iParam0 /*883*/].f_13.f_1, false);
}

void func_462(int iParam0)
{
	HUD::_SET_HELP_MESSAGE_TEXT_STYLE(3, 21, 200, 0, 0);
	if (iParam0 && !func_463())
	{
		DATAFILE::UGC_UPDATE_CONTENT(-1, "Event_Message_Purple", "GTAO_FM_Events_Soundset", 0);
	}
}

bool func_463()
{
	return Global_2440049.f_2834[0 /*80*/].f_1 != 0;
}

void func_464(char* sParam0, int iParam1)
{
	unk_0x17751E107423AFE9(sParam0);
	FILES::GET_DLC_VEHICLE_FLAGS(0, 0, 0, iParam1);
}

char* func_465(char* sParam0)
{
	return sParam0;
}

void func_466()
{
	if (iLocal_72 != -1)
	{
		func_434(&iLocal_72);
	}
}

void func_467(var uParam0, int iParam1, bool bParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = bParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_76833)
	{
		if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				STATS::_GET_NGSTAT_INT_HASH(bParam2, 0);
			}
			else
			{
				STATS::_GET_NGSTAT_INT_HASH(bParam2, 1);
			}
		}
		if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				STATS::STAT_SLOT_IS_LOADED(bParam2, 0);
			}
			else
			{
				STATS::STAT_SLOT_IS_LOADED(bParam2, 1);
			}
		}
	}
}

bool func_468(char* sParam0)
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

int func_469(int iParam0, float fParam1)
{
	if (func_225(iParam0, fParam1))
	{
		func_115(iParam0);
		return 1;
	}
	return 0;
}

void func_470(int iParam0)
{
	if (!func_10(iParam0))
	{
		func_40(iParam0);
	}
}

void func_471(int iParam0)
{
	bool bVar0;
	
	func_126();
	if (iParam0 || iLocal_70 == 0)
	{
		bVar0 = true;
		if (func_548())
		{
			bVar0 = false;
		}
		func_106(bVar0);
		func_96(14);
	}
	else
	{
		func_106(0);
		func_96(15);
	}
}

int func_472()
{
	if ((((((func_479() || func_478()) || func_477()) || func_476()) || func_473()) || Global_2394733) || Global_2394733.f_1 != 0)
	{
		return 1;
	}
	return 0;
}

int func_473()
{
	if (func_475() || func_474())
	{
		return Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_98 == 8;
	}
	return 0;
}

var func_474()
{
	return Global_2451787.f_733;
}

bool func_475()
{
	return unk_0xCE990E643CD9D0E5(Global_2451787.f_2, 11);
}

bool func_476()
{
	return unk_0xCE990E643CD9D0E5(Global_2451787, 5);
}

bool func_477()
{
	return unk_0xCE990E643CD9D0E5(Global_2451787, 2);
}

bool func_478()
{
	return unk_0xCE990E643CD9D0E5(Global_2451787, 20);
}

var func_479()
{
	return Global_2451787.f_696;
}

void func_480(int iParam0, int iParam1)
{
	func_481(iParam0, iParam1);
}

void func_481(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

int func_482()
{
	if (Global_31120)
	{
		return 0;
	}
	if (func_548())
	{
		return 0;
	}
	if (!func_485())
	{
		return 0;
	}
	if (func_483())
	{
		iLocal_287 = 4;
		return 1;
	}
	return 0;
}

int func_483()
{
	void fVar0;
	
	bLocal_92 = VEHICLE::GET_RANDOM_VEHICLE_IN_SPHERE(NETWORK::NETWORK_ARE_HANDLES_THE_SAME(bLocal_90, 1), 15f, 0, 6);
	if (MISC::IS_BIT_SET(bLocal_92) && !PED::IS_PED_IN_ANY_POLICE_VEHICLE(bLocal_92, 0))
	{
		if (ENTITY::GET_ENTITY_COORDS(bLocal_92, false))
		{
			if (func_91(&bLocal_92))
			{
				bLocal_91 = MISC::IS_MINIGAME_IN_PROGRESS(bLocal_92, -1, 0);
				if (!bLocal_91 == 0)
				{
					if (func_484(&bLocal_91))
					{
						fVar0 = MISC::GET_MODEL_DIMENSIONS(bLocal_92);
						if (!fVar0 == joaat("taxi") && !fVar0 == joaat("taxi"))
						{
							if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(bLocal_91))
							{
								ENTITY::SET_ENTITY_AS_MISSION_ENTITY(bLocal_91, true, false);
							}
							if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(bLocal_92))
							{
								ENTITY::SET_ENTITY_AS_MISSION_ENTITY(bLocal_92, true, false);
							}
							PED::_0x2208438012482A1A(bLocal_91, 1);
							ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(bLocal_91, false, 1);
							ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(bLocal_92, false, 1);
							return 1;
						}
					}
				}
			}
		}
	}
	bLocal_92 = false;
	bLocal_91 = false;
	return 0;
}

int func_484(bool bParam0)
{
	if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(*bParam0))
	{
		if (PED::IS_PED_MALE(*bParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_485()
{
	if (PED::IS_PED_IN_ANY_POLICE_VEHICLE(unk_0x9B0761B4C3EB8BC7(), 0) || PED::IS_PED_IN_ANY_POLICE_VEHICLE(bLocal_90, 0))
	{
		return 0;
	}
	return 1;
}

int func_486()
{
	if ((!func_485() || !SYSTEM::VDIST(unk_0x9B0761B4C3EB8BC7(), 0)) || func_488(iLocal_49, 4096))
	{
		return 0;
	}
	if (func_488(iLocal_49, 32))
	{
		iLocal_287 = 2;
		func_100(2);
		func_489("IS_CUSTOMER_A_PLAYER is TRUE");
		return 1;
	}
	return 0;
}

void func_487()
{
	if (!PED::IS_PED_IN_ANY_POLICE_VEHICLE(bLocal_90, 0))
	{
		if (!PED::IS_PED_FLEEING(bLocal_90))
		{
			if (TASK::GET_SCRIPT_TASK_STATUS(bLocal_90, 1805844857) != 1)
			{
				PED::_0x2208438012482A1A(bLocal_90, 0);
				PED::SET_PED_FLEE_ATTRIBUTES(bLocal_90, 196628, true);
				PED::_0xF1C03A5352243A30(bLocal_90);
				TASK::TASK_SMART_FLEE_PED(bLocal_90, unk_0x9B0761B4C3EB8BC7(), 300f, -1, true, false);
				PED::SET_PED_KEEP_TASK(bLocal_90, true);
				func_96(15);
			}
		}
	}
}

bool func_488(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_489(char* sParam0)
{
}

int func_490()
{
	if (STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_90))
	{
		return 0;
	}
	if (TASK::GET_SCRIPT_TASK_STATUS(bLocal_90, 1435919172) == 1)
	{
		return 0;
	}
	if (PED::IS_PED_USING_ANY_SCENARIO(bLocal_90))
	{
		return 0;
	}
	return 1;
}

int func_491()
{
	switch (iLocal_291)
	{
		case 0:
			if (!func_548())
			{
				func_451(&uLocal_281, func_67(iLocal_284));
				func_442(&uLocal_281, &uLocal_339);
				func_489("Moving to PROSTITUTE_INIT_STREAMING");
			}
			if (func_548())
			{
				NETWORK::RESERVE_NETWORK_MISSION_PEDS(1);
				NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(1);
				NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(bLocal_90);
			}
			iLocal_291 = 1;
			break;
		
		case 1:
			if (!func_548())
			{
				if (func_492(&uLocal_339))
				{
					func_480(&iLocal_49, 4194304);
					func_489("Moving to PROSTITUTE_INIT_INIT");
					iLocal_291 = 2;
				}
			}
			else if (func_548())
			{
				func_480(&iLocal_49, 4194304);
				func_489("Moving to PROSTITUTE_INIT_INIT");
				iLocal_291 = 2;
			}
			break;
		
		case 2:
			bLocal_288 = false;
			iLocal_67 = bLocal_288;
			func_5(&iLocal_49, 512);
			func_5(&iLocal_49, 1024);
			iLocal_287 = 0;
			bLocal_91 = false;
			bLocal_92 = false;
			func_489("Moving to PROSTITUTE_INIT_COMPLETE");
			iLocal_291 = 3;
			break;
		
		case 3:
			if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_90))
			{
				if (!func_548())
				{
					PED::_0x2208438012482A1A(bLocal_90, 0);
					PED::SET_PED_CAN_EVASIVE_DIVE(bLocal_90, false);
					func_467(&uLocal_116, 4, bLocal_90, "Prostitutes", 0, 1);
					return 1;
				}
				else if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(bLocal_90))
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(bLocal_90);
				}
				else
				{
					PED::_0x2208438012482A1A(bLocal_90, 0);
					func_467(&uLocal_116, 4, bLocal_90, "Prostitutes", 0, 1);
					PED::SET_PED_CAN_EVASIVE_DIVE(bLocal_90, false);
					PED::_0xA3A9299C4F2ADB98(bLocal_90);
					return 1;
				}
			}
			break;
	}
	return 0;
}

bool func_492(var uParam0)
{
	return func_493(uParam0);
}

int func_493(var uParam0)
{
	int iVar0;
	
	if (!uParam0->f_271)
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (unk_0xCE990E643CD9D0E5((*uParam0)[iVar0 /*18*/], 30))
		{
			if (!unk_0xCE990E643CD9D0E5((*uParam0)[iVar0 /*18*/], 29))
			{
				return 0;
			}
			if (!func_494(uParam0[iVar0 /*18*/]))
			{
				return 0;
			}
		}
		iVar0++;
	}
	uParam0->f_271 = 0;
	return 1;
}

bool func_494(var uParam0)
{
	return func_495(*uParam0, &(uParam0->f_2), uParam0->f_1);
}

int func_495(bool bParam0, char* sParam1, int iParam2)
{
	if (unk_0xCE990E643CD9D0E5(uParam0, 30))
	{
		if (unk_0xCE990E643CD9D0E5(bParam0, 29))
		{
			switch (func_450(bParam0))
			{
				case 0:
					return ENTITY::DOES_ENTITY_EXIST(iParam2);
					break;
				
				case 1:
					return STREAMING::HAS_ANIM_DICT_LOADED(sParam1);
					break;
				
				case 2:
					return STREAMING::HAS_CLIP_SET_LOADED(sParam1);
					break;
				
				case 3:
					return GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(sParam1);
					break;
				
				case 4:
					return VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iParam2, sParam1);
					break;
				
				case 5:
					return TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sParam1);
					break;
				
				case 6:
					return AUDIO::REQUEST_SCRIPT_AUDIO_BANK(sParam1, unk_0xCE990E643CD9D0E5(bParam0, 27), -1);
					break;
				
				case 7:
					return SCRIPT::HAS_SCRIPT_WITH_NAME_HASH_LOADED(iParam2);
					break;
				
				case 8:
					return HUD::REQUEST_ADDITIONAL_TEXT_FOR_DLC(iParam2);
					break;
				
				case 9:
					return STREAMING::HAS_PTFX_ASSET_LOADED();
					break;
				
				default:
					break;
			}
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_496()
{
	if (LOCALIZATION::GET_CURRENT_LANGUAGE())
	{
		if (func_23() == 0)
		{
			if (func_497(bLocal_90, 537.0014f, 119.0252f, 96.0997f, 1) <= 8f)
			{
				if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(bLocal_90, true))
				{
					if (func_548())
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(bLocal_90, false, false);
					}
					else
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(bLocal_90, true, true);
					}
				}
				return 1;
			}
		}
	}
	return 0;
}

float func_497(bool bParam0, struct<3> Param1, int iParam2)
{
	struct<3> Var0;
	
	if (!PED::IS_PED_IN_ANY_POLICE_VEHICLE(bParam0, 0))
	{
		Var0 = { NETWORK::NETWORK_ARE_HANDLES_THE_SAME(bParam0, 1) };
	}
	else
	{
		Var0 = { NETWORK::NETWORK_ARE_HANDLES_THE_SAME(bParam0, 0) };
	}
	return HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Var0, Param1, iParam2);
}

int func_498()
{
	if (PED::IS_PED_USING_SCENARIO(bLocal_90, func_65(0)))
	{
		if (PED::IS_SCRIPTED_SCENARIO_PED_USING_CONDITIONAL_ANIM(bLocal_90, "amb@world_human_prostitute@crackhooker@base", "base"))
		{
			return 0;
		}
		if (PED::IS_SCRIPTED_SCENARIO_PED_USING_CONDITIONAL_ANIM(bLocal_90, "amb@world_human_prostitute@cokehead@base", "base"))
		{
			return 1;
		}
	}
	if (PED::IS_PED_USING_SCENARIO(bLocal_90, func_65(1)))
	{
		if (PED::IS_SCRIPTED_SCENARIO_PED_USING_CONDITIONAL_ANIM(bLocal_90, "amb@world_human_prostitute@french@base", "base"))
		{
			return 3;
		}
		if (PED::IS_SCRIPTED_SCENARIO_PED_USING_CONDITIONAL_ANIM(bLocal_90, "amb@world_human_prostitute@hooker@base", "base"))
		{
			return 2;
		}
	}
	return -1;
}

void func_499()
{
	if (PED::IS_PED_IN_ANY_POLICE_VEHICLE(bLocal_90, 0))
	{
		return;
	}
	if (iLocal_285 != 3 && iLocal_285 != 4)
	{
		func_500(unk_0x9B0761B4C3EB8BC7());
	}
	else if (iLocal_285 == 3)
	{
		func_500(bLocal_91);
	}
}

void func_500(bool bParam0)
{
	if (PED::IS_PED_IN_ANY_POLICE_VEHICLE(bParam0, 0))
	{
		return;
	}
	if (func_548())
	{
		if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(bParam0))
		{
			NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(bParam0);
			return;
		}
	}
	if (func_414(bParam0, bLocal_90, 1) < 30f)
	{
		if (!PED::IS_PED_HEADTRACKING_PED(bLocal_90, bParam0))
		{
			if (func_548())
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(bLocal_90))
				{
					TASK::TASK_CLEAR_LOOK_AT(bLocal_90);
					TASK::TASK_LOOK_AT_ENTITY(bLocal_90, bParam0, -1, 2048, 4);
				}
			}
			else
			{
				TASK::TASK_CLEAR_LOOK_AT(bLocal_90);
				TASK::TASK_LOOK_AT_ENTITY(bLocal_90, bParam0, -1, 2048, 4);
			}
		}
	}
	else if (PED::IS_PED_HEADTRACKING_PED(bLocal_90, bParam0))
	{
		if (func_548())
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(bLocal_90))
			{
				TASK::TASK_CLEAR_LOOK_AT(bLocal_90);
			}
		}
		else
		{
			TASK::TASK_CLEAR_LOOK_AT(bLocal_90);
		}
	}
}

void func_501()
{
	if (Global_31118)
	{
		if (ENTITY::GET_ENTITY_COORDS(bLocal_93, false))
		{
			if (unk_0xE0B3BC41DDA88DF0(bLocal_90, bLocal_93, 0f))
			{
				func_502();
			}
		}
		return;
	}
	if (AUDIO::SET_SCRIPT_UPDATE_DOOR_AUDIO(PLAYER::PLAYER_ID()) > 0)
	{
		return;
	}
	if (PED::IS_PED_IN_ANY_POLICE_VEHICLE(bLocal_90, 0) || !MISC::IS_BIT_SET(bLocal_90))
	{
		if (Global_31122 != SCRIPT::GET_ID_OF_THIS_THREAD() && func_488(iLocal_49, 32))
		{
			func_5(&iLocal_49, 32);
		}
		return;
	}
	if ((SYSTEM::VDIST2(NETWORK::NETWORK_ARE_HANDLES_THE_SAME(bLocal_90, 1), NETWORK::NETWORK_ARE_HANDLES_THE_SAME(unk_0x9B0761B4C3EB8BC7(), 1)) < Global_31121 || Global_31121 == 0f) && iLocal_287 != 4)
	{
		Global_31121 = SYSTEM::VDIST2(NETWORK::NETWORK_ARE_HANDLES_THE_SAME(bLocal_90, 1), NETWORK::NETWORK_ARE_HANDLES_THE_SAME(unk_0x9B0761B4C3EB8BC7(), 1));
		Global_31122 = SCRIPT::GET_ID_OF_THIS_THREAD();
		func_480(&iLocal_49, 32);
	}
	else if (Global_31122 == SCRIPT::GET_ID_OF_THIS_THREAD())
	{
		Global_31121 = SYSTEM::VDIST2(NETWORK::NETWORK_ARE_HANDLES_THE_SAME(bLocal_90, 1), NETWORK::NETWORK_ARE_HANDLES_THE_SAME(unk_0x9B0761B4C3EB8BC7(), 1));
	}
	else
	{
		func_5(&iLocal_49, 32);
	}
}

void func_502()
{
	if (func_548())
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(bLocal_90))
		{
			PED::SET_PED_RESET_FLAG(bLocal_90, 323, true);
		}
	}
	else
	{
		PED::SET_PED_RESET_FLAG(bLocal_90, 323, true);
	}
}

void func_503(var uParam0)
{
	if (!iLocal_286 == 12)
	{
		if (!PED::IS_PED_IN_ANY_POLICE_VEHICLE(bLocal_90, 0) && !PED::IS_PED_IN_ANY_POLICE_VEHICLE(unk_0x9B0761B4C3EB8BC7(), 0))
		{
			if (func_507())
			{
				if (func_548())
				{
					func_123(0);
					PED::SET_PED_FLEE_ATTRIBUTES(bLocal_90, 196624, true);
					if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(bLocal_90))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(bLocal_90, true, false);
					}
					TASK::TASK_SMART_FLEE_PED(bLocal_90, unk_0x9B0761B4C3EB8BC7(), 300f, -1, false, false);
					PED::SET_PED_KEEP_TASK(bLocal_90, true);
					HUD::HIDE_HUD_AND_RADAR_THIS_FRAME(unk_0x9B0761B4C3EB8BC7());
					func_539();
					func_533(uParam0);
				}
				else
				{
					func_96(12);
				}
			}
			else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(bLocal_90, unk_0x9B0761B4C3EB8BC7(), true))
			{
				iLocal_65++;
				if (iLocal_65 >= 2)
				{
					func_489("prostitute CLASSED AS UNDER ATTACK");
					iLocal_286 = 12;
				}
				else
				{
					func_489("prostitute BEEN HIT BY PLAYER");
					ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(bLocal_90);
				}
			}
			else if (func_505())
			{
				func_504();
				iLocal_286 = 12;
			}
		}
	}
}

void func_504()
{
	if (STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_90))
	{
		return;
	}
	AUDIO::STOP_CURRENT_PLAYING_AMBIENT_SPEECH(bLocal_90);
	AUDIO::_PLAY_AMBIENT_SPEECH1(bLocal_90, "APOLOGY_NO_TROUBLE", "SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL", 1);
}

int func_505()
{
	int iVar0;
	
	if (!SYSTEM::VDIST(unk_0x9B0761B4C3EB8BC7(), 0))
	{
		return 0;
	}
	if (!func_506())
	{
		return 0;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(unk_0x9B0761B4C3EB8BC7(), 0);
	if (!ENTITY::GET_ENTITY_COORDS(iVar0, false))
	{
		return 0;
	}
	if (unk_0x653A331834B72BC0(unk_0x9B0761B4C3EB8BC7()))
	{
		return VEHICLE::IS_VEHICLE_SIREN_ON(bVar0);
	}
	return 0;
}

int func_506()
{
	if (!func_548())
	{
		return 1;
	}
	else if (MISC::IS_BIT_SET(ENTITY::GET_ENTITY_MODEL(unk_0x9B0761B4C3EB8BC7(), 0)))
	{
		if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(ENTITY::GET_ENTITY_MODEL(unk_0x9B0761B4C3EB8BC7(), 0)))
		{
			if (MISC::IS_MINIGAME_IN_PROGRESS(ENTITY::GET_ENTITY_MODEL(unk_0x9B0761B4C3EB8BC7(), 0), -1, 0) == unk_0x9B0761B4C3EB8BC7())
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(ENTITY::GET_ENTITY_MODEL(unk_0x9B0761B4C3EB8BC7(), 0)))
				{
					if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(ENTITY::GET_ENTITY_MODEL(unk_0x9B0761B4C3EB8BC7(), 0)))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(ENTITY::GET_ENTITY_MODEL(unk_0x9B0761B4C3EB8BC7(), 0), false, false);
					}
					return 1;
				}
				else
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(ENTITY::GET_ENTITY_MODEL(unk_0x9B0761B4C3EB8BC7(), 0));
				}
			}
		}
		else
		{
			NETWORK::NETWORK_REGISTER_ENTITY_AS_NETWORKED(ENTITY::GET_ENTITY_MODEL(unk_0x9B0761B4C3EB8BC7(), 0));
		}
	}
	return 0;
}

int func_507()
{
	struct<3> Var0;
	
	if (!func_488(iLocal_49, 4096))
	{
		if (func_414(bLocal_90, unk_0x9B0761B4C3EB8BC7(), 1) < 30f)
		{
			Var0 = { NETWORK::NETWORK_ARE_HANDLES_THE_SAME(bLocal_90, 1) };
			if ((((((EVENT::IS_SHOCKING_EVENT_IN_SPHERE(88, Var0, 30f) || EVENT::IS_SHOCKING_EVENT_IN_SPHERE(91, Var0, 30f)) || EVENT::IS_SHOCKING_EVENT_IN_SPHERE(90, Var0, 30f)) || EVENT::IS_SHOCKING_EVENT_IN_SPHERE(104, Var0, 30f)) || EVENT::IS_SHOCKING_EVENT_IN_SPHERE(116, Var0, 30f)) || (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(114, Var0, 30f) && !func_548())) || PED::IS_PED_PRONE(unk_0x9B0761B4C3EB8BC7()))
			{
				if (!func_548())
				{
					PED::_0x2208438012482A1A(bLocal_90, 0);
				}
				func_480(&iLocal_49, 4096);
				return 1;
			}
		}
	}
	return 0;
}

int func_508()
{
	if ((MISC::IS_BIT_SET(bLocal_90) && !PED::IS_PED_IN_ANY_POLICE_VEHICLE(bLocal_90, 0)) && !PED::IS_PED_IN_ANY_POLICE_VEHICLE(unk_0x9B0761B4C3EB8BC7(), 0))
	{
		if (func_548())
		{
			if (func_550(PLAYER::PLAYER_ID(), 0))
			{
				func_489("prostitute SCRIPT SHOULD EXIT - ANOTHER PLAYER IN VEHICLE");
				if (SYSTEM::VDIST(bLocal_90, 0))
				{
					func_106(0);
				}
				func_96(15);
				return 0;
			}
		}
		if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_90))
		{
			if (!SYSTEM::VDIST(bLocal_90, 0))
			{
				if (!func_510(9))
				{
					if (!PED::IS_PED_IN_ANY_POLICE_VEHICLE(bLocal_90, 0) && !PED::IS_PED_IN_ANY_POLICE_VEHICLE(unk_0x9B0761B4C3EB8BC7(), 0))
					{
						if (ENTITY::IS_ENTITY_AT_ENTITY(bLocal_90, unk_0x9B0761B4C3EB8BC7(), 100f, 100f, 50f, false, true, 0))
						{
							return 1;
						}
						else
						{
							func_489("prostitute SCRIPT SHOULD EXIT - PLAYER WALKED AWAY FROM CAR");
							func_96(15);
						}
					}
				}
				else if (!(func_509() || LOCALIZATION::GET_CURRENT_LANGUAGE()))
				{
					func_489("prostitute SCRIPT SHOULD EXIT - PLAYER ON MISSION");
					func_96(15);
				}
				else
				{
					return 1;
				}
			}
			else if (iLocal_286 == 0)
			{
				func_489("prostitute SCRIPT SHOULD EXIT - prostitute IN VEHICLE");
			}
			else if (!func_510(9) && !func_510(5))
			{
				return 1;
			}
			else if (!(func_509() || (LOCALIZATION::GET_CURRENT_LANGUAGE() && !func_404())))
			{
				func_489("prostitute SCRIPT SHOULD EXIT - PLAYER ON MISSION");
				func_106(0);
				func_96(15);
			}
			else
			{
				return 1;
			}
		}
		else
		{
			func_489("prostitute SCRIPT SHOULD EXIT - INJURED");
		}
	}
	if (!MISC::IS_BIT_SET(bLocal_90))
	{
		func_489("prostitute SCRIPT SHOULD EXIT - Prostitute doesn't exist");
	}
	if (PED::IS_PED_IN_ANY_POLICE_VEHICLE(bLocal_90, 0))
	{
		func_489("prostitute SCRIPT SHOULD EXIT - Prostitute is dead");
	}
	if (PED::IS_PED_IN_ANY_POLICE_VEHICLE(unk_0x9B0761B4C3EB8BC7(), 0))
	{
		func_489("prostitute SCRIPT SHOULD EXIT - Player is dead");
	}
	return 0;
}

int func_509()
{
	if (INTERIOR::GET_INTERIOR_AT_COORDS(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_510(int iParam0)
{
	if (Global_41631 == 15)
	{
		return 0;
	}
	if (func_511(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_511(int iParam0)
{
	return func_512(iParam0, Global_41631);
}

int func_512(int iParam0, int iParam1)
{
	if (iParam1 == 15)
	{
		return 1;
	}
	if (iParam0 == 15)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 16:
			switch (iParam1)
			{
				case 9:
				case 10:
				case 7:
				case 13:
				case 14:
					return 0;
					break;
			}
			return 1;
			break;
		
		case 0:
			switch (iParam1)
			{
				case 5:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 2:
		case 3:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 4:
			if (iParam1 == 17)
			{
				return 1;
			}
			break;
		
		case 5:
			break;
		
		case 6:
		case 8:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 7:
			if (iParam1 == 6)
			{
				return 1;
			}
			break;
		
		case 9:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 11:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 17:
				case 12:
				case 5:
					return 1;
					break;
			}
			break;
		
		case 18:
		case 12:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
					return 1;
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
	}
	return 0;
}

void func_513()
{
	int iVar0;
	bool bVar1;
	struct<2> Var2;
	
	iVar0 = 0;
	while (iVar0 < SCRIPT::GET_EVENT_AT_INDEX(1))
	{
		bVar1 = SCRIPT::GET_EVENT_DATA(1, iVar0);
		if (bVar1 == 174)
		{
			unk_0x477FAFFE21935947(1, iVar0, &Var2, 2);
			if (Var2 == -1287716800)
			{
				if (Var2.f_1 == PLAYER::PLAYER_ID())
				{
					func_196(128);
				}
			}
		}
		iVar0++;
	}
}

void func_514()
{
	if (!MISC::SET_BIT())
	{
		return;
	}
	if (!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
	{
		return;
	}
	if (MISC::ARE_PROFILE_SETTINGS_VALID(false, 0) != 1)
	{
		if (func_515(1, 0, 1))
		{
			if (NETWORK::GET_NUM_CREATED_MISSION_PEDS(false) <= 1)
			{
				NETWORK::RESERVE_NETWORK_MISSION_PEDS(1);
			}
		}
	}
}

bool func_515(int iParam0, bool bParam1, bool bParam2)
{
	return func_516(0, iParam0, 1, bParam1, bParam2);
}

int func_516(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xCE990E643CD9D0E5(Global_1389439, false))
	{
		return 0;
	}
	if ((bParam2 && !bParam3) && iParam1 <= (func_520(iParam0) - func_519(iParam0, 0)))
	{
		return 1;
	}
	else
	{
		if (bParam3)
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_519(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_520(iParam0) - func_518(iParam0));
		}
		else
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_519(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_520(iParam0) - func_519(iParam0, 1));
		}
		if (!bParam4 && Global_1590682[PLAYER::PLAYER_ID() /*883*/] != 3)
		{
			iVar1 = (iVar1 - func_517(iParam0));
		}
		if (iVar0 < iVar1)
		{
			return 1;
		}
	}
	return 0;
}

int func_517(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 10;
			break;
		
		case 1:
			return 10;
			break;
		
		case 2:
			return 10;
			break;
	}
	return 0;
}

int func_518(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1389439.f_1;
			break;
		
		case 1:
			return Global_1389439.f_2;
			break;
		
		case 2:
			return Global_1389439.f_3;
			break;
	}
	return 0;
}

int func_519(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = PLAYER::PLAYER_ID();
	switch (iParam0)
	{
		case 0:
			if (!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
			{
				return Global_2425869[iVar0 /*443*/].f_213;
			}
			else
			{
				return MISC::ARE_PROFILE_SETTINGS_VALID(!bParam1, 0);
			}
			break;
		
		case 1:
			if (!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
			{
				return Global_2425869[iVar0 /*443*/].f_214;
			}
			else
			{
				return MISC::GET_PROFILE_SETTING(!bParam1, 0);
			}
			break;
		
		case 2:
			if (!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
			{
				return Global_2425869[iVar0 /*443*/].f_215;
			}
			else
			{
				return NETWORK::NETWORK_IS_SIGNED_IN(!bParam1, 0);
			}
			break;
	}
	return 0;
}

int func_520(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1389447;
			break;
		
		case 1:
			return Global_1389448;
			break;
		
		case 2:
			return Global_1389449;
			break;
	}
	return 0;
}

bool func_521(int iParam0)
{
	return func_488(iLocal_52, iParam0);
}

void func_522(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_271)
	{
		if ((MISC::GET_FRAME_COUNT() >= (uParam0->f_272 + uParam0->f_273) || unk_0xCE990E643CD9D0E5(Global_98955.f_20, 2)) || unk_0xCE990E643CD9D0E5(Global_98955.f_20, 13))
		{
			iVar0 = 0;
			while (iVar0 < 15)
			{
				if (unk_0xCE990E643CD9D0E5((*uParam0)[iVar0 /*18*/], 30))
				{
					if (!unk_0xCE990E643CD9D0E5((*uParam0)[iVar0 /*18*/], 29))
					{
						func_523(uParam0[iVar0 /*18*/]);
						uParam0->f_272 = MISC::GET_FRAME_COUNT();
						return;
					}
				}
				iVar0++;
			}
		}
	}
}

void func_523(var uParam0)
{
	func_524(uParam0, &(uParam0->f_2), uParam0->f_1);
}

void func_524(int iParam0, char* sParam1, int iParam2)
{
	if (unk_0xCE990E643CD9D0E5(*uParam0, 30))
	{
		switch (func_450(*uParam0))
		{
			case 0:
				unk_0x78FCB2E22C41B9D5(iParam2);
				break;
			
			case 1:
				STREAMING::REQUEST_ANIM_DICT(sParam1);
				break;
			
			case 2:
				STREAMING::REQUEST_CLIP_SET(sParam1);
				break;
			
			case 3:
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(sParam1, unk_0xCE990E643CD9D0E5(*uParam0, 28));
				break;
			
			case 4:
				VEHICLE::REQUEST_VEHICLE_RECORDING(iParam2, sParam1);
				break;
			
			case 5:
				TASK::REQUEST_WAYPOINT_RECORDING(sParam1);
				break;
			
			case 6:
				AUDIO::REQUEST_SCRIPT_AUDIO_BANK(sParam1, unk_0xCE990E643CD9D0E5(*uParam0, 27), -1);
				break;
			
			case 7:
				SCRIPT::REQUEST_SCRIPT_WITH_NAME_HASH(iParam2);
				break;
			
			case 8:
				HUD::HAS_ADDITIONAL_TEXT_LOADED(sParam1, iParam2);
				break;
			
			case 9:
				STREAMING::REQUEST_PTFX_ASSET();
				break;
			
			default:
				break;
		}
		unk_0xBE20AB8238688965(uParam0, 29);
	}
}

void func_525(int iParam0)
{
	if (func_488(iLocal_52, iParam0))
	{
		func_5(&iLocal_52, iParam0);
	}
}

void func_526()
{
	func_2(0);
	if (MISC::IS_BIT_SET(bLocal_90))
	{
		if (!PED::IS_PED_IN_ANY_POLICE_VEHICLE(bLocal_90, 0))
		{
			func_2(1);
		}
		else
		{
			func_489("Prostitue: not continuing, prostitue is dead");
		}
	}
	else
	{
		func_489("Prostitue: not continuing, prostitue doesn't exist");
	}
	if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_ID()) || PED::IS_PED_IN_ANY_POLICE_VEHICLE(unk_0x9B0761B4C3EB8BC7(), 0))
	{
		func_2(0);
		func_489("Prostitue: not continuing, player isn't player or is dead");
	}
}

int func_527(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_531();
			}
			else
			{
				return 0;
			}
		}
		if (!func_530())
		{
			if (iParam0 == 0)
			{
				if (!MISC::SET_BIT())
				{
					if (!bParam2)
					{
						func_531();
					}
					else
					{
						return 0;
					}
				}
				if (func_529())
				{
					if (!bParam2)
					{
						func_531();
					}
					else
					{
						return 0;
					}
				}
				if (func_528(157))
				{
					if (!bParam2)
					{
						func_531();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!NETWORK::NETWORK_IS_IN_SESSION())
			{
				if (!bParam2)
				{
					func_531();
				}
				else
				{
					return 0;
				}
			}
		}
		SYSTEM::WAIT(0);
		iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	}
	if (iParam1 > -1)
	{
		Global_1312519 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!MISC::SET_BIT())
		{
			if (!bParam2)
			{
				func_531();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!NETWORK::NETWORK_IS_IN_SESSION())
	{
		if (!bParam2)
		{
			func_531();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

int func_528(int iParam0)
{
	if (unk_0x16F1FCCC54559709(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_529()
{
	return Global_2451787.f_691;
}

bool func_530()
{
	return Global_1312872;
}

void func_531()
{
	ENTITY::STOP_ENTITY_ANIM();
}

void func_532()
{
	func_196(1);
}

void func_533(var uParam0)
{
	func_537();
	if (func_48(0, 1))
	{
		CAM::SET_CINEMATIC_BUTTON_ACTIVE(true);
	}
	if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_90))
	{
		if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(bLocal_90))
		{
			if ((func_548() && TASK::GET_SCRIPT_TASK_STATUS(bLocal_90, 1805844857) != 1) && TASK::GET_SCRIPT_TASK_STATUS(bLocal_90, -251125078) != 1)
			{
				TASK::TASK_WANDER_STANDARD(bLocal_90, 40000f, 0);
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(bLocal_90))
				{
					PED::SET_PED_KEEP_TASK(bLocal_90, true);
				}
				if (NETWORK::_0xB07D3185E11657A5(bLocal_90))
				{
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&bLocal_90);
				}
				AUDIO::STOP_CURRENT_PLAYING_AMBIENT_SPEECH(bLocal_90);
			}
			else
			{
				if (NETWORK::_0xB07D3185E11657A5(bLocal_90))
				{
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&bLocal_90);
				}
				AUDIO::STOP_CURRENT_PLAYING_AMBIENT_SPEECH(bLocal_90);
			}
		}
	}
	iLocal_49 = 0;
	if (func_488(iLocal_49, 64))
	{
		Global_31120 = 0;
	}
	if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_91))
	{
		HUD::HIDE_HUD_AND_RADAR_THIS_FRAME(bLocal_91);
	}
	bLocal_91 = false;
	iLocal_287 = 0;
	if (func_488(iLocal_49, 2048))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	}
	func_5(&iLocal_49, 2048);
	if (!func_536())
	{
		func_535();
	}
	if (func_548())
	{
		if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(fLocal_83))
		{
			VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(fLocal_83);
		}
	}
	bLocal_92 = false;
	func_537();
	func_534();
	Global_31121 = 0f;
	if (!Global_1683921.f_4611 && !Global_1683921.f_4615)
	{
		STREAMING::CLEAR_FOCUS();
	}
	if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_ID()))
	{
		PLAYER::SET_PLAYER_CAN_DO_DRIVE_BY(PLAYER::PLAYER_ID(), true);
	}
	if (!PED::IS_PED_IN_ANY_POLICE_VEHICLE(unk_0x9B0761B4C3EB8BC7(), 0))
	{
		if (func_521(256))
		{
			PED::SET_PED_COMPONENT_VARIATION(unk_0x9B0761B4C3EB8BC7(), 6, iLocal_84, iLocal_85, 0);
			func_196(1024);
		}
	}
	if (func_468("PROS_ACCEPT") && !Global_31118)
	{
		unk_0xD289B55B6AADBA10(1);
	}
	if (Global_31122 == SCRIPT::GET_ID_OF_THIS_THREAD())
	{
		Global_31118 = 0;
		Global_2425869[PLAYER::PLAYER_ID() /*443*/].f_415 = 0;
	}
	func_445(uParam0, 0);
	if (func_548())
	{
		func_196(2048);
	}
	else
	{
		ENTITY::STOP_ENTITY_ANIM();
	}
}

void func_534()
{
}

void func_535()
{
	Global_2440049.f_1267.f_10 = 0;
}

bool func_536()
{
	return unk_0xCE990E643CD9D0E5(Global_1689755, 3);
}

void func_537()
{
}

void func_538(bool bParam0)
{
	if (!STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(bLocal_90))
	{
		if (SYSTEM::VDIST(bLocal_90, 0))
		{
			if (TASK::GET_SCRIPT_TASK_STATUS(bLocal_90, -828834893) != 1)
			{
				TASK::TASK_LEAVE_ANY_VEHICLE(bLocal_90, 0, 65536);
			}
		}
		if (bParam0)
		{
			if (func_548())
			{
				if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(bLocal_90))
				{
					if (NETWORK::_0xB07D3185E11657A5(bLocal_90))
					{
						if (NETWORK::IS_NETWORK_ID_OWNED_BY_PARTICIPANT(NETWORK::NETWORK_GET_NETWORK_ID_FROM_ENTITY(bLocal_90)))
						{
							PED::SET_PED_KEEP_TASK(bLocal_90, true);
						}
					}
				}
			}
			else
			{
				PED::SET_PED_KEEP_TASK(bLocal_90, true);
			}
		}
	}
}

void func_539()
{
	if (!func_548())
	{
		if (iLocal_286 == 11 || iLocal_286 == 13)
		{
			return;
		}
	}
	if (!PED::IS_PED_IN_ANY_POLICE_VEHICLE(bLocal_90, 0))
	{
		if (!PED::IS_PED_FLEEING(bLocal_90))
		{
			func_96(0);
			iLocal_285 = 1;
		}
		if (func_548())
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(bLocal_90))
			{
				PED::_0x2208438012482A1A(bLocal_90, 0);
				PED::RESET_PED_IN_VEHICLE_CONTEXT(bLocal_90);
			}
		}
		else
		{
			PED::RESET_PED_IN_VEHICLE_CONTEXT(bLocal_90);
		}
		AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(bLocal_90, 0f);
	}
	if (ENTITY::GET_ENTITY_COORDS(bLocal_93, false) && !PED::IS_PED_IN_ANY_POLICE_VEHICLE(bLocal_93, 0))
	{
		if (func_548())
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(bLocal_93))
			{
				if (Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_274.f_28 <= 0 && !unk_0xCE990E643CD9D0E5(Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_274.f_26, 11))
				{
					VEHICLE::SET_VEHICLE_HANDBRAKE(bLocal_93, false);
					VEHICLE::SET_VEHICLE_LIGHTS(bLocal_93, 3);
					VEHICLE::SET_VEHICLE_INTERIORLIGHT(bLocal_93, false);
				}
				VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(bLocal_93, true, 0);
			}
		}
		else
		{
			VEHICLE::SET_VEHICLE_HANDBRAKE(bLocal_93, false);
			VEHICLE::SET_VEHICLE_LIGHTS(bLocal_93, 3);
			VEHICLE::SET_VEHICLE_INTERIORLIGHT(bLocal_93, false);
		}
	}
	func_547(iLocal_74);
	func_547(iLocal_75);
	func_547(iLocal_76);
	func_547(iLocal_77);
	func_547(iLocal_78);
	func_547(iLocal_79);
	func_547(iLocal_80);
	if (!PED::IS_PED_IN_ANY_POLICE_VEHICLE(unk_0x9B0761B4C3EB8BC7(), 0))
	{
		TASK::TASK_CLEAR_LOOK_AT(unk_0x9B0761B4C3EB8BC7());
		if ((func_548() && bLocal_288 != 3) && func_488(iLocal_49, 2048))
		{
			HUD::HIDE_HUD_AND_RADAR_THIS_FRAME(unk_0x9B0761B4C3EB8BC7());
		}
		STATS::_GET_NGSTAT_INT_HASH(unk_0x9B0761B4C3EB8BC7(), 1);
		PED::SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(unk_0x9B0761B4C3EB8BC7(), true);
	}
	if (func_488(iLocal_49, 2048))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	}
	func_5(&iLocal_49, 2048);
	PAD::ENABLE_CONTROL_ACTION(2, 19, true);
	PAD::ENABLE_CONTROL_ACTION(2, 37, true);
	if (!func_536())
	{
		func_535();
	}
	iLocal_287 = 0;
	if (func_488(iLocal_49, 4))
	{
		func_5(&iLocal_49, 4);
		Global_31118 = 0;
		Global_31119 = 0;
		Global_2425869[PLAYER::PLAYER_ID() /*443*/].f_415 = 0;
	}
	if (func_488(iLocal_49, 8))
	{
		if (STREAMING::HAS_CLIP_SET_LOADED(func_92()))
		{
			STREAMING::REMOVE_CLIP_SET(func_92());
		}
	}
	func_546();
	func_466();
	if (((func_468("PROS_ACCEPT") || func_468("PROS_CAM_TOG")) || func_468("PROS_RESPONSE")) || func_468("PROS_CAM_OC"))
	{
		func_5(&iLocal_49, 1048576);
		unk_0xD289B55B6AADBA10(1);
	}
	func_363(0);
	SYSTEM::SIN(1.401298E-45f);
	if (func_488(iLocal_49, 8))
	{
		if (STREAMING::HAS_CLIP_SET_LOADED(func_92()))
		{
			STREAMING::REMOVE_CLIP_SET(func_92());
		}
	}
	func_131("PROSTITUTES_SOLICIT_SCENE");
	AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
	func_123(0);
	CAM::SET_CINEMATIC_BUTTON_ACTIVE(true);
	func_540();
	if (func_548())
	{
		if (func_521(2))
		{
			if (SYSTEM::VDIST(unk_0x9B0761B4C3EB8BC7(), 0))
			{
				if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(ENTITY::GET_ENTITY_MODEL(unk_0x9B0761B4C3EB8BC7(), 0)))
				{
					if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(ENTITY::GET_ENTITY_MODEL(unk_0x9B0761B4C3EB8BC7(), 0)))
					{
						VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_ALL_PLAYERS(ENTITY::GET_ENTITY_MODEL(unk_0x9B0761B4C3EB8BC7(), 0), false);
						VEHICLE::SET_VEHICLE_DOORS_LOCKED(ENTITY::GET_ENTITY_MODEL(unk_0x9B0761B4C3EB8BC7(), 0), 1);
					}
				}
			}
			else if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(bLocal_93))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(bLocal_93))
				{
					VEHICLE::SET_VEHICLE_DOORS_LOCKED(bLocal_93, 1);
					VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_ALL_PLAYERS(bLocal_93, false);
					VEHICLE::_0x2311DD7159F00582(bLocal_93, false);
				}
				else
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(bLocal_93);
					VEHICLE::SET_VEHICLE_DOORS_LOCKED(bLocal_93, 1);
					VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_ALL_PLAYERS(bLocal_93, false);
					VEHICLE::_0x2311DD7159F00582(bLocal_93, false);
				}
			}
		}
	}
	func_188(23, 0);
	iLocal_49 = 0;
	iLocal_51 = 0;
}

void func_540()
{
	struct<8> Var0[2];
	struct<6> Var1[2];
	
	if (!func_545())
	{
		return;
	}
	if (!iLocal_47)
	{
		return;
	}
	StringCopy(&(Var0[0 /*8*/]), "GameType", 32);
	StringCopy(&(Var0[1 /*8*/]), "Type", 32);
	StringCopy(&(Var1[0 /*6*/]), "SP", 24);
	StringCopy(&(Var1[1 /*6*/]), "????", 24);
	if (func_544(275, &Var1, &Var0, 2, -1, 0, 0))
	{
		STATS::LEADERBOARDS_WRITE_ADD_COLUMN(131, func_543(), 0f);
		STATS::LEADERBOARDS_WRITE_ADD_COLUMN(117, func_542(), 0f);
		STATS::LEADERBOARDS_WRITE_ADD_COLUMN(118, func_541(), 0f);
	}
}

int func_541()
{
	return iLocal_46;
}

int func_542()
{
	return iLocal_45;
}

int func_543()
{
	return 0;
}

int func_544(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	struct<68> Var0;
	int iVar1;
	struct<13> Var2;
	var uVar3;
	
	if (!NETWORK::NETWORK_SESSION_IS_IN_VOICE_SESSION())
	{
	}
	if ((!NETWORK::NETWORK_PLAYER_IS_CHEATER() && (NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES() || !NETWORK::_NETWORK_HAS_AGE_RESTRICTED_PROFILE())) && NETWORK::NETWORK_HAVE_ROS_LEADERBOARD_WRITE_PRIV())
	{
		Var0.f_2.f_1 = 4;
		Var0 = iParam0;
		if (iParam4 == -1)
		{
			if (INTERIOR::GET_INTERIOR_GROUP_ID())
			{
				Var2 = { func_320(PLAYER::PLAYER_ID()) };
				if (MISC::IS_XBOX360_VERSION(&Var2))
				{
					if (DATAFILE::DATAARRAY_GET_COUNT(&uVar3, 35, &Var2))
					{
						Var0.f_1 = uVar3;
					}
				}
			}
		}
		else
		{
			Var0.f_1 = iParam4;
		}
		Var0.f_2 = iParam3;
		iVar1 = 0;
		while (iVar1 < iParam3)
		{
			Var0.f_2.f_1[iVar1 /*16*/] = { *(uParam2[iVar1 /*8*/]) };
			MemCopy(&(Var0.f_2.f_1[iVar1 /*16*/].f_8), {*(uParam1[iVar1 /*6*/])}, 8);
			iVar1++;
		}
		if (bParam5)
		{
			Global_1835013.f_5 = { Var0 };
		}
		if (!bParam6)
		{
			if (MISC::SET_BIT() && Global_2460478.f_3)
			{
				STATS::LEADERBOARDS2_WRITE_DATA_FOR_EVENT_TYPE(&Var0, &(Global_1663920.f_10));
			}
			else
			{
				STATS::LEADERBOARDS2_WRITE_DATA(&Var0);
			}
		}
		return 1;
	}
	if (NETWORK::NETWORK_PLAYER_IS_CHEATER())
	{
	}
	if (!NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES())
	{
	}
	if (NETWORK::_NETWORK_HAS_AGE_RESTRICTED_PROFILE())
	{
	}
	if (!NETWORK::NETWORK_HAVE_ROS_LEADERBOARD_WRITE_PRIV())
	{
	}
	return 0;
}

int func_545()
{
	if ((NETWORK::NETWORK_SESSION_IS_IN_VOICE_SESSION() && VEHICLE::IS_THIS_MODEL_A_BIKE()) && NETWORK::NETWORK_IS_CLOUD_AVAILABLE())
	{
		return 1;
	}
	return 0;
}

void func_546()
{
	if (func_488(iLocal_49, 128))
	{
		func_406(39, 0);
		func_406(40, 0);
		func_406(41, 0);
		func_406(42, 0);
		func_406(43, 0);
		func_406(44, 0);
		func_5(&iLocal_49, 128);
	}
}

void func_547(int iParam0)
{
	if (func_548())
	{
		if (func_219(iParam0))
		{
			SYSTEM::POW(iParam0);
		}
	}
}

bool func_548()
{
	return func_521(1);
}

bool func_549(int iParam0)
{
	return Global_41631 == iParam0;
}

int func_550(bool bParam0, float fParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	
	if (func_208(iParam0, 1, 1))
	{
		iVar0 = PLAYER::GET_PLAYER_PED(iParam0);
		if (SYSTEM::VDIST(iVar0, fParam1))
		{
			iVar3 = ENTITY::GET_ENTITY_MODEL(bVar0, 0);
			iVar1 = 0;
			while (iVar1 < 32)
			{
				bVar2 = NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar1);
				if (func_208(bVar2, 1, 1))
				{
					if (PLAYER::GET_PLAYER_PED(bVar2) != bVar0)
					{
						if (unk_0xE0B3BC41DDA88DF0(PLAYER::GET_PLAYER_PED(bVar2), iVar3, fParam1))
						{
							return 1;
						}
					}
				}
				iVar1++;
			}
		}
	}
	return 0;
}

int func_551(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_460(iParam0))
		{
			return 1;
		}
	}
	if ((((Global_1590682[iParam0 /*883*/] == 2 || Global_1590682[iParam0 /*883*/] == 1) || Global_1590682[iParam0 /*883*/] == 0) || Global_1590682[iParam0 /*883*/] == 3) || Global_1590682[iParam0 /*883*/] == 8)
	{
		return 1;
	}
	return 0;
}

