#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-braces" 

#define USERCAL_nROMCAL	\
{\
/* userCalADRefH */\
	3290u,\
/* userCalVRef445 */\
	4530u,\
/* userCalVNernstTarget */\
	4450u,\
/* userCalRNernstReady */\
	300000u,\
/* userCalRHeaterThreshold */\
	6500u,\
/* au32UserCalPumpCurrentPFactor */\
	{9300u},\
/* au32UserCalPumpCurrentMFactor */\
	{9300u},\
/* ai32UserCalPumpCurrentOffset */\
	{2u},\
/* aUserCalPumpSpread */\
	{-1850000u,\
		-1465000u,\
		-1080000u,\
		-920000u,\
		-760000u,\
		-615000u,\
		-470000u,\
		-235000u,\
		0,\
		170000u,\
		340000u,\
		510000u,\
		680000u,\
		815000u,\
		950000u,\
		1400000u,\
	2550000u},\
/* aUserCalPumpLambda */\
	{700u,\
		750u,\
		800u,\
		825,\
		850u,\
		875u,\
		900u,\
		955u,\
		1000u,\
		1094u,\
		1180u,\
		1305u,\
		1430u,\
		1565u,\
		1700u,\
		2350u,\
	4160u},\
/* au8UserCalPumpSensorTrim */\
	74u,\
/* aUserStoichFuelCal */\
	1470u,\
/* au8UserCalPumpDeadband */\
	{2u},\
/* au16UserCalFreeAirPoints */\
	{3310u,\
		3320u,\
		3330u,\
		3340u,\
		3350u,\
		3360u,\
		3370u,\
		3380u,\
		3390u,\
		3400u,\
		3410u,\
		3420u,\
		3430u,\
		3440u,\
		3450u,\
		3460u,\
		3470u,\
		3480u,\
	3490u},\
/* aUserHeaterAlarmCurrent */\
	2600u,\
/* u8WarmUpDelay */\
	10u,\
/* u8DisplayMode */\
	1u,\
/* u8BackLightEnable */\
	1u,\
/* userCalTPSCalMin */\
	470u,\
/* userCalTPSCalMax */\
	4110u,\
/* aUserCURVEAfmTFSpread */\
	{500u,\
		1000u,\
		1500u,\
		2000u,\
		2500u,\
		3000u,\
		3500u,\
		4000u,\
		4500u,\
		5000u,\
		5500u,\
		6000u,\
		7000u,\
		8000u,\
		9000u,\
		10000u,\
	11000u},\
/* aUserCURVEAfmTFTable */\
	{0,\
		900000,\
		1800000,\
		3000000,\
		4200000,\
		7000000,\
		11300000,\
		17000000,\
		25000000,\
		35000000,\
		45000000,\
		56000000,\
		90000000,\
		140000000,\
		210000000,\
		310000000,\
	420000000},\
/* aUserInjResponseSpread */\
	{7500u,\
		8000u,\
		8500u,\
		9000u,\
		9500u,\
		10000u,\
		10500u,\
		11000u,\
		11500u,\
		12000u,\
		12500u,\
		13000u,\
		13500u,\
		14000u,\
		14500u,\
		15000u,\
	15500u},\
/* aUserInjResponseTable */\
	{2500u,\
    2350u,\
	2200u,\
	2050u,\
	1900u,\
	1750u,\
	1600u,\
	1450u,\
	1100u,\
	900u,\
	740u,\
	640u,\
	570u,\
	510u,\
	470u,\
	440u,\
	430u},\
/* aUserCoolantSensorSpread */\
	{203u,\
		299u,\
		391u,\
		606u,\
		802u,\
		1014u,\
		1407u,\
		1774u,\
		2110u,\
		2432u,\
		2946u,\
		3565u,\
		4067u,\
		4658u,\
		4782u,\
		4856u,\
	4924u},\
/* aUserCoolantSensorTable */\
	{500000,\
		200000,\
		140000,\
		132000,\
		122000,\
		110000,\
		100000,\
		87000,\
		79000,\
		71000,\
		60000,\
		40000,\
		20000,\
		2000,\
		-6000,\
		-15000,\
	-40000},\
/* aUserCoolantEnrichmentSpread */\
	{-40000,\
		-30000,\
		-20000,\
		-10000,\
		0,\
		10000,\
		20000,\
		30000,\
		40000,\
		50000,\
		60000,\
		70000,\
		80000,\
		90000,\
		100000,\
		110000,\
	120000},\
/* aUserCoolantEnrichmentTable */\
	{2500u,\
    2200u,\
	1800u,\
	1600u,\
	1500u,\
	1320u,\
	1160u,\
	1080u,\
	1040u,\
	1020u,\
	1000u,\
	1000u,\
	1000u,\
	1000u,\
	1000u,\
	1000u,\
	1000u},\
/* aUserTAFRxSpread */\
	{0u,\
		500u,\
		1000u,\
		1500u,\
		2000u,\
		2500u,\
		3000u,\
		3500u,\
		4000u,\
		4500u,\
		5000u,\
		5500u,\
		6000u,\
		6500u,\
		7000u,\
		7500u,\
	8000u},\
/* aUserTAFRySpread */\
	    {20000u,\
		30000u,\
		40000u,\
		50000u,\
		60000u,\
		70000u,\
		80000u,\
		90000u,\
		100000u,\
		110000u,\
		120000u,\
		130000u,\
		140000u,\
		150000u,\
		160000u,\
		170000u,\
	    180000u},\
/* aUserMAPTAFR */\
	{{1470,1470,1470,1100,1100,1100,1100,1400,1400,1400,1400,1400,1400,1400,1400,1400,1400},\
	{1470,1470,1450,1470,1470,1470,1470,1400,1300, 1470,1470,1470,1470,1470,1470,1470,1400},\
	{1470,1470,1470,1470,1470,1470,1470,1400,1300, 1270,1240,1230,1210,1190,1190,1190,1100},\
	{1470,1470,1470,1470,1470,1470,1470,1400,1300, 1270,1240,1230,1210,1190,1190,1190,1100},\
	{1470,1470,1470,1470,1470,1470,1470,1400,1300, 1270,1240,1230,1210,1190,1190,1190,1100},\
	{1470,1470,1470,1470,1470,1470,1470,1400,1300, 1270,1240,1230,1210,1190,1190,1180,1100},\
	{1470,1470,1470,1470,1470,1470,1470,1400,1300, 1270,1240,1230,1200,1190,1190,1170,1100},\
	{1470,1470,1470,1470,1470,1470,1470,1400,1300, 1270,1240,1230,1200,1180,1160,1140,1100},\
	{1470,1470,1470,1470,1470,1470,1470,1400,1300, 1270,1240,1220,1200,1180,1150,1130,1100},\
	{1470,1470,1470,1470,1470,1470,1470,1400,1300, 1270,1240,1220,1200,1180,1150,1120,1100},\
	{1470,1470,1470,1470,1470,1470,1470,1400,1300, 1270,1240,1220,1200,1180,1140,1110,1100},\
	{1470,1470,1470,1470,1470,1470,1470,1400,1300, 1270,1240,1220,1200,1180,1140,1110,1100},\
	{1470,1470,1470,1470,1470,1470,1470,1400,1300, 1270,1240,1220,1200,1170,1140,1110,1100},\
	{1470,1470,1470,1470,1470,1470,1470,1400,1300, 1270,1190,1190,1190,1170,1130,1110,1100},\
	{1900,1470,1470,1470,1470,1470,1470,1400,1300, 1270,1190,1190,1190,1170,1130,1110,1100},\
	{1900,1470,1470,1470,1470,1470,1470,1400,1300, 1270,1190,1190,1190,1170,1130,1110,1100},\
	{1900,1470,1470,1470,1470,1470,1470,1400,1300, 1270,1190,1190,1190,1170,1130,1110,1100}},\
/* aUserTimingxSpread */\
	{0u,\
		500u,\
		1000u,\
		1500u,\
		2000u,\
		2500u,\
		3000u,\
		3500u,\
		4000u,\
		4500u,\
		5000u,\
		5500u,\
		6000u,\
		6500u,\
		7000u,\
		7500u,\
	8000u},\
/* aUserTimingySpread */\
	{25000u,\
		30000u,\
		35000u,\
		40000u,\
		45000u,\
		50000u,\
		55000u,\
		60000u,\
		65000u,\
		70000u,\
		75000u,\
		80000u,\
		85000u,\
		90000u,\
		95000u,\
		100000u,\
	105000u},\
/* aUserTimingMap */\
	{{0,0,0,0,30,30,30,30,30,30,30,30,30,30,30,30,30},\
	{120,120,120,120,120,130,130,130,130, 130,130,130,130,130,130,130,130},\
	{120,120,120,120,120,120,120,100, 90, 90,120,120,120,120,120,120,120},\
	{130,130,130,140,160,170,170,170,160, 150,140,130,120,120,120,120,120},\
	{200,200,210,220,230,260,260,260,250, 240,230,230,220,210,220,220,190},\
	{240,270,290,315,330,320,310,300,290, 280,270,260,235,220,195,190,190},\
	{280,340,400,400,390,380,370,350,320, 300,270,250,235,220,195,190,190},\
	{280,340,400,400,390,380,370,350,320, 300,270,250,235,220,195,180,180},\
	{280,340,400,400,390,380,370,350,320, 300,270,250,235,220,195,180,180},\
	{280,340,400,400,390,380,370,350,320, 300,270,250,235,220,195,180,180},\
	{280,340,400,400,390,380,370,350,320, 300,270,250,235,220,195,190,190},\
	{280,340,400,400,390,380,370,350,320, 300,270,250,235,220,195,190,190},\
	{280,340,400,400,390,380,370,350,320, 300,270,250,235,220,195,190,190},\
	{280,340,400,400,390,380,370,350,320, 300,270,250,235,220,195,190,190},\
	{280,340,400,400,390,380,370,360,320, 300,270,250,235,220,195,190,190},\
	{280,340,400,400,390,380,370,360,320, 300,270,250,235,220,195,190,190},\
	{90,90,90,90,90,90,90,90,90,90,90,80,80,80,80,80,80}},\
/* aUserVExSpread */\
	{0u,\
		500u,\
		1000u,\
		1500u,\
		2000u,\
		2500u,\
		3000u,\
		3500u,\
		4000u,\
		4500u,\
		5000u,\
		5500u,\
		6000u,\
		6500u,\
		7000u,\
		7500u,\
	8000u},\
/* aUserVEySpread */\
	{25000u,\
		30000u,\
		35000u,\
		40000u,\
		45000u,\
		50000u,\
		55000u,\
		60000u,\
		65000u,\
		70000u,\
		75000u,\
		80000u,\
		85000u,\
		90000u,\
		95000u,\
		100000u,\
	105000u},\
/* aUserMAPVE */\
	{{600,600,600,600,600,600,600,700,800,800,800,800,800,800,800,800,800},\
	{560,560,560,560,560,570,580,590,600,610,610,610,610,610,610,610,610},\
	{590,590,590,590,590,590,590,610,610,610,610,610,610,610,610,610,610},\
	{620,620,620,620,630,630,630,630,630,630,630,630,630,640,640,700,700},\
	{660,680,690,690,700,700,700,710,710,710,710,710,710,720,720,750,750},\
	{670,680,700,710,710,710,720,730,740,750,750,750,750,750,750,750,750},\
	{680,690,700,710,720,730,740,750,760,770,780,780,780,780,780,780,780},\
	{680,690,700,710,720,730,740,750,760,770,780,780,780,780,780,780,780},\
	{680,690,700,710,720,730,740,750,760,770,780,790,800,810,820,830,840},\
	{680,690,700,710,720,730,740,750,760,770,780,790,800,810,820,830,840},\
	{680,690,700,710,720,730,740,750,760,770,780,790,800,810,820,830,840},\
	{680,690,700,710,720,730,740,750,760,770,780,790,800,810,820,830,840},\
	{680,690,700,710,720,730,740,750,760,770,780,790,800,810,820,830,840},\
	{680,690,700,710,720,730,740,750,760,770,780,790,800,810,820,830,840},\
	{680,690,700,710,720,730,740,750,760,770,780,780,780,780,780,780,780},\
	{680,690,700,710,720,730,730,730,730,730,730,730,730,730,730,730,730},\
	{600,600,600,600,600,600,600,600,600,600,600,600,600,600,600,600,600}},\
/* aUserCoolantStartEnrichmentSpread */\
	{-40000,\
		-30000,\
		-20000,\
		-10000,\
		0,\
		10000,\
		20000,\
		30000,\
		40000,\
		50000,\
		60000,\
		70000,\
		80000,\
		90000,\
		100000,\
		110000,\
	120000},\
/* aUserCoolantStartEnrichmentTable */\
	{4000u,\
    3500u,\
	3000u,\
	2500u,\
	2000u,\
	1800u,\
	1600u,\
	1400u,\
	1200u,\
	1150u,\
	1100u,\
	1050u,\
	1000u,\
	1000u,\
	1000u,\
	1000u,\
	1000u},\
/* aUserCoolantPostStartEnrichmentSpread */\
	{-40000,\
		-30000,\
		-20000,\
		-10000,\
		0,\
		10000,\
		20000,\
		30000,\
		40000,\
		50000,\
		60000,\
		70000,\
		80000,\
		90000,\
		100000,\
		110000,\
	120000},\
/* aUserCoolantPostStartEnrichmentTable */\
	{2000u,\
		1800u,\
		1600u,\
		1400u,\
		1150u,\
		1130u,\
		1110u,\
		1100u,\
		1100u,\
		1100u,\
		1100u,\
		1100u,\
		1100u,\
		1100u,\
		1100u,\
		1100u,\
	1100u},\
/* aUserCrankingAirflowSpread */\
	{150u,\
		160u,\
		170u,\
		180u,\
		190u,\
		200u,\
		210u,\
		220u,\
		230u,\
		240u,\
		250u,\
		260u,\
		270u,\
		280u,\
		290u,\
		300u,\
	400u},\
/* aUserCrankingAirflowTable */\
	{9000u,\
		9200u,\
		9400u,\
		9600u,\
		9800u,\
		10000u,\
		10400u,\
		10800u,\
		11200u,\
		11600u,\
		12000u,\
		12000u,\
		12000u,\
		12000u,\
		12000u,\
		12000u,\
	12000u},\
/* aUserDwellSpread */\
	{7500u,\
		8000u,\
		8500u,\
		9000u,\
		9500u,\
		10000u,\
		10500u,\
		11000u,\
		11500u,\
		12000u,\
		12500u,\
		13000u,\
		13500u,\
		14000u,\
		14500u,\
		15000u,\
	15500u},\
/* aUserDwellTable */\
	{7600u,\
		7200u,\
		6800u,\
		6400u,\
		6000u,\
		5600u,\
		5200u,\
		4800u,\
		4400u,\
		4000u,\
		3600u,\
		3400u,\
		3200u,\
		3000u,\
		3000u,\
		3000u,\
	3000u},\
/* aUserAirTempCorrectionSpread */\
	{-40000,\
		-30000,\
		-20000,\
		-10000,\
		0,\
		10000,\
		20000,\
		30000,\
		40000,\
		50000,\
		60000,\
		70000,\
		80000,\
		90000,\
		100000,\
		110000,\
	120000},\
/* aUserAirTempCorrectionTable */\
	{1000u,\
		1000u,\
		1000u,\
		1000u,\
		1000u,\
		1000u,\
		1000u,\
		1000u,\
		1000u,\
		1000u,\
		1000u,\
		1000u,\
		1000u,\
		1000u,\
		1000u,\
		1000u,\
	890u},\
/* aUserTPSMovementCorrectionSpread */\
	{0x7ffc0000,\
	0x7ffc8000,\
	0x7ffd0000,\
	0x7ffd8000,\
	0x7ffe0000,\
	0x7ffe8000,\
	0x7fff0000,\
	0x7fff8000,\
	0x80008000,\
	0x80010000,\
	0x80018000,\
	0x80020000,\
	0x80028000,\
	0x80030000,\
	0x80038000,\
	0x80040000,\
	0x80048000},\
/* aUserTPSMovementCorrectionTable */\
	{1000u,\
    1000u,\
	1000u,\
	1000u,\
	1000u,\
	1000u,\
	1000u,\
	1000u,\
	1000u,\
	1000u,\
	1000u,\
	1000u,\
	1020u,\
	1050u,\
	1100u,\
	1150u,\
	1200u},\
/* aUserInjectionPhasingSpread */\
	{0u,\
		500u,\
		1000u,\
		1500u,\
		2000u,\
		2500u,\
		3000u,\
		3500u,\
		4000u,\
		4500u,\
		5000u,\
		6500u,\
		7000u,\
		7500u,\
		8000u,\
		8500u,\
	9000u},\
/* aUserInjectionPhasingTable */\
	{0u,\
		100u,\
		200u,\
		300u,\
		400u,\
		500u,\
		600u,\
		700u,\
		800u,\
		900u,\
		1000u,\
		1100u,\
		1200u,\
		1300u,\
		1400u,\
		1500u,\
	1600u},\
/* aUserCTSTimingCorrectionSpread */\
	{-40000,\
		-30000,\
		-20000,\
		-10000,\
		0,\
		10000,\
		20000,\
		30000,\
		40000,\
		50000,\
		60000,\
		70000,\
		80000,\
		90000,\
		100000,\
		110000,\
	120000},\
/* aUserCTSTimingCorrectionTable */\
	{31u,\
		25u,\
		22u,\
		18u,\
		15u,\
		14u,\
		13u,\
		12u,\
		11u,\
		10u,\
		10u,\
		10u,\
		10u,\
		10u,\
		10u,\
		10u,\
	10u},\
/* aUserATSTimingCorrectionSpread */\
	{-40000,\
		-30000,\
		-20000,\
		-10000,\
		0,\
		10000,\
		20000,\
		30000,\
		40000,\
		50000,\
		60000,\
		70000,\
		80000,\
		90000,\
		100000,\
		110000,\
	120000},\
/* aUserATSTimingCorrectionTable */\
	{31u,\
		25u,\
		22u,\
		18u,\
		15u,\
		14u,\
		13u,\
		12u,\
		11u,\
		10u,\
		10u,\
		10u,\
		10u,\
		10u,\
		10u,\
		10u,\
	10u},\
/* aUserISCSpeedTargetSpread */\
	{-40000,\
		-30000,\
		-20000,\
		-10000,\
		0,\
		10000,\
		20000,\
		30000,\
		40000,\
		50000,\
		60000,\
		70000,\
		80000,\
		90000,\
		100000,\
		110000,\
	120000},\
/* aUserISCSpeedTargetTable */\
	{1500u,\
		1500u,\
		1400u,\
		1300u,\
		1200u,\
		1100u,\
		1000u,\
		950u,\
		900u,\
		880u,\
		880u,\
		880u,\
		880u,\
		880u,\
		880u,\
		880u,\
	880u},\
/* aUserStepperCloseTable */\
	{5,\
		9,\
		10,\
	6},\
/* aUserStepperOpenTable */\
	{6,\
		10,\
		9,\
	5},\
/* u32UserStepperHomeSteps */\
	24,\
/* aUserPrimaryTriggerTable */\
	{0x0,\
	0x71C,\
	0xE39,\
	0x1555,\
	0x1C72,\
	0x238E,\
	0x2AAB,\
	0x31C7,\
	0x38E3,\
	0x4000,\
	0x5555,\
	0x5C72,\
	0x638E,\
	0x6AAB,\
	0x71C7,\
	0x78E4,\
	0x8000,\
	0x871C,\
	0x8E39,\
	0x9555,\
	0x9C72,\
	0xA38E,\
	0xAAAB,\
	0xB1C7,\
	0xB8E4,\
	0xC000,\
	0xC71C,\
	0xCE39,\
	0xD555,\
	0xDC72,\
	0xE38E,\
	0xEAAB,\
	0xF1C7,\
	0xF8E4,\
	0x0000,\
	0x0000,\
	0x0000,\
	0x0000,\
	0x0000,\
	0x0000,\
	0x0000,\
	0x0000,\
	0x0000,\
	0x0000,\
	0x0000,\
	0x0000,\
	0x0000,\
	0x0000,\
	0x0000,\
	0x0000,\
	0x0000,\
	0x0000,\
	0x0000,\
	0x0000,\
	0x0000,\
	0x0000,\
	0x0000,\
	0x0000,\
	0x0000,\
	0x0000,\
	0x0000,\
	0x0000,\
	0x0000,\
	0x0000,\
	0x0000,\
	0x0000,\
	0x0000,\
	0x0000,\
	0x0000,\
	0x0000,\
	0x0000,\
	0x0000,\
	0x0000,\
	0x0000,\
	0x0000,\
	0x0000,\
	0x0000,\
	0x0000,\
	0x0000,\
	0},\
/* aUserSecondaryTriggerTable */\
{0x38e4,\
	0x78e4,\
	0x8e39,\
	0xb8e4,\
	0xe38e,\
	0xf8e3,\
	0x0000,\
	0x0000,\
	0x0000,\
	0x0000,\
	0x0000,\
	0x0000,\
	0x0000,\
	0x0000,\
	0x0000,\
	0x0000,\
	0x0000,\
	0x0000,\
	0x0000,\
	0x0000,\
	0x0000,\
	0x0000,\
	0x0000,\
	0x0000,\
	0x0000,\
	0x0000,\
	0x0000,\
	0x0000,\
	0x0000,\
	0x0000,\
	0x0000,\
	0x0000,\
	0x0000,\
	0x0000,\
	0x0000,\
	0x0000,\
	0x0000,\
	0x0000,\
	0x0000,\
	0x0000},\
/* aUserSyncPointsTable */\
{0x0, 0x4000, 0x8000, 0xC000,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0},\
/* u8UserPrimaryEdgeSetup */\
	0x0,\
/* u8UserSecondaryEdgeSetup */\
	0x2,\
/* u8UserPrimaryVREnable */\
	0,\
/* u8UserSecondaryVREnable */\
	0,\
/* u8UserFirstEdgeRisingPrimary */\
	1,\
/* u8UserFirstEdgeRisingSecondary */\
	1,\
/* au32InjectionSequence */\
	{0xff04, 0xff06, 0xff00, 0xff02},\
/* au32IgnitionSequence */\
	{0x0004, 0x0206, 0xffff, 0xffff},\
/* enSimpleCamSyncSource */\
	EH_IO_Invalid,\
/* boCamSyncHighLate */\
	1,\
/* u32CamSyncSampleToothCount */\
	38,\
/* u16ManifoldVolumeCC */\
	2000,\
/* u8CylCount */\
	4, \
/* u16InjFlowRate */\
	3900,\
/* aUserBackupAirflowxSpread */\
	{0,\
		500,\
		1000,\
		1500,\
		2000,\
		2500,\
		3000,\
		3500,\
		4000,\
		4500,\
	5000},\
/* aUserBackupAirflowySpread */\
	{0x0,\
		0xB32,\
		0x1664,\
		0x2196,\
		0x2CC8,\
		0x37FB,\
		0x432D,\
		0x5991,\
		0x865A,\
		0xDFEC,\
	0x15F90},\
/* aUserBackupAirflowMap */\
	{{0x3C14DC,	0x4417A3,	0x4417A3,	0x4417A3,	0x4417A3,	0x4417A3,	0x4417A3,	0x4417A3,	0x4417A3,	0x4417A3,	0x4417A3},\
	{0x5B8D80,	0x7704C0,	0x8C30AC,	0xC84588,	0xF05370,	0x1186158,	0x1186158,	0x1186158,	0x1186158,	0x1186158,	0x1186158},\
	{0x6ACFC0,	0x8F6EC0,	0xBBAEE0,	0xFD4BC0,	0x1312D00,	0x16E3600,	0x1AB3F00,	0x1F78A40,	0x2349340,	0x243D580,	0x2625A00},\
	{0x6ACFC0,	0x989680,	0xB28720,	0xDBBA00,	0x112A880,	0x14FB180,	0x1BD8E80,	0x2255100,	0x2BDE780,	0x3567E00,	0x3993FD8},\
	{0x7270E0,	0x989680,	0xCAF120,	0xE975A0,	0x11D56E0,	0x1681B80,	0x1D905C0,	0x2CD29C0,	0x3938700,	0x4B1A130,	0x4D9AF18},\
	{0x7270E0,	0x989680,	0xCAF120,	0xF73140,	0x1406F40,	0x19BFCC0,	0x243D580,	0x3938700,	0x4B1A130,	0x59A5380,	0x68E7780},\
	{0x7270E0,	0x989680,	0xCAF120,	0xF73140,	0x132B3A0,	0x1BA8140,	0x2AEA540,	0x3C14DC0,	0x529CAE8,	0x6BA55F8,	0x7D2B750},\
	{0x7270E0,	0x989680,	0xCAF120,	0xF73140,	0x132B3A0,	0x1F4ADD4,	0x2AEA540,	0x3EF1480,	0x55D4A80,	0x6F94740,	0x8F0D180},\
	{0x7270E0,	0x989680,	0xCAF120,	0xF73140,	0x132B3A0,	0x1F4ADD4,	0x2AEA540,	0x40D9900,	0x59A5380,	0x754D4C0,	0xA21FE80},\
	{0x7270E0,	0x989680,	0xCAF120,	0xF73140,	0x132B3A0,	0x1F4ADD4,	0x2AEA540,	0x42C1D80,	0x5D75C80,	0x8583B00,	0xBEBC200},\
	{0x7270E0,	0x989680,	0xCAF120,	0xF73140,	0x132B3A0,	0x1F4ADD4,	0x2AEA540,	0x42C1D80,	0x623A7C0,	0x9896800,	0xDB58580}},\
/* u8ManifoldTimeConstantTrim */\
	0x1f,\
/* u8EnableBackupAirflowTransients */\
	0x00,\
/* aUserPrimerSpread */\
	{-40000,\
		-30000,\
		-20000,\
		-10000,\
		0,\
		10000,\
		20000,\
		30000,\
		40000,\
		50000,\
	60000},\
/* aUserPrimerTable */\
	{400000u,\
		400000u,\
		300000u,\
		250000u,\
		200000u,\
		150000u,\
		100000u,\
		70000u,\
		30000u,\
		25000u,\
	25000u},\
/* aUserInjShortOpeningSpread */\
	{0,\
		200,\
		400,\
		600,\
		800,\
		1000,\
		1200,\
		1400,\
		1600,\
		1800,\
	2000}, \
/* aUserInjShortOpeningTable */\
	{870u,\
		870u,\
		870u,\
		890u,\
		930u,\
		1030u,\
		1200u,\
		1400u,\
		1600u,\
		1800u,\
	2000u},\
/* u32STTNegLimit */\
	800,\
/* u32STTPosLimit */\
	1150,\
/* u32CLStepClosed */\
	5,\
/* u32CLIncClosed */\
	1,\
/* u32CLStepOpen */\
	7,\
/* u32CLIncOpen */\
	2,\
/* u16TimingMainOffset */\
	24000,\
/* u32AFMTransientControlRPMLimit */\
	3000,\
/* u8WastedSparkEnable */\
	1,\
/* u16AFRReinstate */\
	1500,\
/* u16AFRCutoff */\
	1700,\
/* u32TPSClosedLower */\
	500,\
/* u32TPSClosedUpper */\
	1500,\
/* u32ISCESTTrimPos */\
	7000,\
/* u32ISCESTTrimNeg */\
	7000,\
/* u32CLO2ESTTrimPos */\
	2000,\
/* u32CLO2ESTTrimNeg */\
	2000,\
/* u16CylinderCC */\
	375,\
/* u8EnableAFMPrimaryInputOpen */\
	0,\
/* u32SpeedDensityAFMTPSLim */\
	90000,\
/* au16SeqRPMLimit */\
	{5400,\
		5400,\
		5400,\
		5400,\
		5400,\
		5500,\
		5600,\
	5700},\
/* u16SeqRPMLimitHyst */\
	200,\
/* u16HighVacuumEnableKpa */\
	1000,\
/* u16HighVacuumDisableKpa */\
	5000,\
/* u16OverrunCutEnableRPM */\
	300,\
/* u16OverrunCutDisableRPM */\
	600,\
/* u16RPMRunThreshold */\
	350,\
/* u8SeqFuelAssign */\
	15,\
/* u16ESTFilterClosed */\
	0,\
/* u16ESTFilterOpen */\
	0,\
/* u16ESTCLGain */\
	80,\
/* u8EnableAFMPrimaryInputClosed */\
	0,\
/* s16SequenceFuelOffset */\
	1,\
/* s16SequenceFuelOffset */\
	1,\
/* s16SequenceFuelOffset */\
	1,\
/* s16SequenceFuelOffset */\
	1,\
/* s16SequenceFuelGain */\
	1000,\
/* s16SequenceFuelGain */\
	1000,\
/* s16SequenceFuelGain */\
	1000,\
/* s16SequenceFuelGain */\
	1000,\
/* boTPSCANPrimary */\
	0,\
/* boPPSCANPrimary */\
	0,\
/* boCTSCANPrimary */\
	0,\
/* boATSCANPrimary */\
	0,\
/* boMAPCANPrimary */\
	0,\
/* au32PrioCANID */\
	1217,\
/* au32PrioCANID */\
	401,\
/* au32PrioCANID */\
	1001,\
/* au32PrioCANID */\
	2024,\
/* au8SensorCANDataOffset */\
	{16,16,16,16,16,16,16,16},\
/* au8SensorCANDataByteCount */\
	{2,2,2,2,2,2,2,2},\
/* u32SyncPhaseRepeats */\
	2,\
/* s32MapSensorGain */\
	44000,\
/* s32MapSensorOffset */\
	200,\
/* u8InjDivide */\
	1,\
/* u8CLO2Leftenable */\
	0,\
/* u8CLO2RightEnable */\
	0,\
/* u8ReturnlessEnable */\
	0,\
/* u16ReturnlessPressureKPa */\
	450,\
/* u8CrankingAirflowEnable */\
	0,\
/* u8StepperIACEnable */\
	0,\
/* u16IACStepsOpenHot */\
	10,\
/* u16IACStepsOpenCold */\
	15,\
/* u16IdleEntryOffset */\
	800,\
/* s32RadFanOnTemp */\
	80000,\
/* s32RadFanOffTemp */\
	60000,\
/* enFuelPumpRelay */\
	EH_IO_Invalid,\
/* enESTBypass */\
	EH_IO_Invalid,\
/* aUserAirSensorSpread */\
	{203u,\
		299u,\
		391u,\
		606u,\
		802u,\
		1014u,\
		1407u,\
		1774u,\
		2110u,\
		2432u,\
		2946u,\
		3565u,\
		4067u,\
		4658u,\
		4782u,\
		4856u,\
	4924u},\
/* aUserAirSensorTable */\
	{500000,\
		200000,\
		140000,\
		132000,\
		122000,\
		110000,\
		100000,\
		87000,\
		79000,\
		71000,\
		60000,\
		40000,\
		20000,\
		2000,\
		-6000,\
		-15000,\
	-40000},\
 /* aFuelIOResource */\
	{EH_IO_ADD7, EH_IO_TMR11, EH_IO_TMR10, EH_IO_ADD8},\
 /* aESTIOResource */\
	{EH_IO_TMR3, EH_IO_TMR4, EH_IO_Invalid, EH_IO_Invalid},\
 /* aIACIOResource */\
	{EH_IO_Invalid, EH_IO_Invalid, EH_IO_Invalid, EH_IO_Invalid},\
 /* boOBDISCADV */\
    0,\
 /* u8TriggerType */\
	3,\
 /* u8SyncType */\
	0,\
 /* u8TriggerPullStrength */\
	1,\
 /* u8SyncPullStrength */\
	1,\
 /* u16MinLinearFuelPulse */\
	1000,\
 /* u16CTSADResource */\
    EH_IO_ADD6,\
 /* u16MAPADResource */\
    EH_IO_ADD10,\
 /* u16ATSADResource */\
    EH_IO_Invalid,\
 /* u16AFMADResource */\
    EH_IO_ADD10,\
 /* u16TPSADResource */\
    EH_IO_ADD9,\
/* aUserTipInCorrectionSpread */\
	{0,\
		250,\
		500,\
		1000,\
		1250,\
		1500,\
		1750,\
		2000,\
		2250,\
		2500,\
		2750,\
		3000,\
		3250,\
		3500,\
		3750,\
		4000,\
	4250},\
/* aUserTipInCorrectionTable */\
	{1000u,\
		1000u,\
		1200u,\
		1175u,\
		1150u,\
		1125u,\
		1100u,\
		1075u,\
		1050u,\
		1050u,\
		1050u,\
		1050u,\
		1050u,\
		1050u,\
		1050u,\
		1050u,\
	1050u},\
/* Logic Block Var */\
	{0u,\
		0u,\
		0u,\
		0u,\
		0u,\
		0u,\
		0u,\
	0u},\
/* Logic Block Operand */\
	{1000u,\
		1000u,\
		1000u,\
		1000u,\
		1000u,\
		1000u,\
		1000u,\
	1000u},\
/* Logic Block Chain Output */\
	{0u,\
		0u,\
		0u,\
		0u,\
		0u,\
		0u,\
		0u,\
	0u},\
/* Thermofan Relay */\
	EH_IO_Invalid,\
/* EST IO Mux Resource */\
	{EH_IO_Invalid,\
	EH_IO_Invalid,\
	EH_IO_Invalid,\
	EH_IO_Invalid},\
/* UEGO CAN Primary */\
	1,\
/* PWM 2D 1 Axis Source X */\
	0,\
/* PWM 2D 2 Axis Source X */\
	1,\
/* PWM 2D 3 Axis Source X */\
	2,\
/* PWM 2D 4 Axis Source X */\
	3,\
/* PWM 2D 5 Axis Source X */\
	4,\
/* PWM 2D 6 Axis Source X */\
	0,\
/* PWM 2D 7 Axis Source X */\
	1,\
/* PWM 2D 8 Axis Source X */\
	2,\
/* PWM 3D 1 Axis Source X */\
	3,\
/* PWM 3D 2 Axis Source X */\
	4,\
/* PWM 3D 3 Axis Source X */\
	0,\
/* PWM 3D 4 Axis Source X */\
	1,\
/* PWM 3D 1 Axis Source Y */\
	2,\
/* PWM 3D 2 Axis Source Y */\
	3,\
/* PWM 3D 3 Axis Source Y */\
	4,\
/* PWM 3D 4 Axis Source Y */\
	0,\
/* PWM 2D 1 IO Resource */\
	0,\
/* PWM 2D 2 IO Resource */\
	0,\
/* PWM 2D 3 IO Resource */\
	0,\
/* PWM 2D 4 IO Resource */\
	0,\
/* PWM 2D 5 IO Resource */\
	0,\
/* PWM 2D 6 IO Resource */\
	0,\
/* PWM 2D 7 IO Resource */\
	0,\
/* PWM 2D 8 IO Resource */\
	0,\
/* PWM 3D 1 IO Resource */\
	0,\
/* PWM 3D 2 IO Resource */\
	0,\
/* PWM 3D 3 IO Resource */\
	0,\
/* PWM 3D 4 IO Resource */\
	0,\
/* PWM 2D 1 Table_XAXIS */\
   {0,\
   250,\
   500,\
   750,\
   1000,\
   1250,\
   1500,\
   1750,\
   2000,\
   2250,\
   2500,\
   2750,\
   3000,\
   3250,\
   3500,\
   3750,\
   4000},\
/* PWM 2D 2 Table_XAXIS */\
   {0,\
	   5000,\
	   10000,\
	   15000,\
	   20000,\
	   25000,\
	   30000,\
	   35000,\
	   40000,\
	   45000,\
	   50000,\
	   55000,\
	   60000,\
	   65000,\
	   70000,\
	   75000,\
   90000},\
/* PWM 2D 3 Table_XAXIS */\
   {0,\
	   10000,\
	   20000,\
	   30000,\
	   40000,\
	   50000,\
	   60000,\
	   70000,\
	   80000,\
	   90000,\
	   100000,\
	   110000,\
	   120000,\
	   130000,\
	   140000,\
	   150000,\
   160000},\
/* PWM 2D 4 Table_XAXIS */\
   {0,\
	   100,\
	   200,\
	   300,\
	   400,\
	   500,\
	   600,\
	   700,\
	   800,\
	   900,\
	   1000,\
	   1100,\
	   1200,\
	   1300,\
	   1400,\
	   1500,\
   1600},\
/* PWM 2D 5 Table_XAXIS */\
   {0,\
	   0x100,\
	   0x200,\
	   0x300,\
	   0x400,\
	   0x500,\
	   0x600,\
	   0x700,\
	   0x800,\
	   0x900,\
	   0xa00,\
	   0xb00,\
	   0xc00,\
	   0xd00,\
	   0xe00,\
	   0xf00,\
   0xffff},\
/* PWM 2D 6 Table_XAXIS */\
   {0,\
	   0x100,\
	   0x200,\
	   0x300,\
	   0x400,\
	   0x500,\
	   0x600,\
	   0x700,\
	   0x800,\
	   0x900,\
	   0xa00,\
	   0xb00,\
	   0xc00,\
	   0xd00,\
	   0xe00,\
	   0xf00,\
   0xfff},\
/* PWM 2D 7 Table_XAXIS */\
   {0,\
	   0x10,\
	   0x20,\
	   0x30,\
	   0x40,\
	   0x50,\
	   0x60,\
	   0x70,\
	   0x80,\
	   0x90,\
	   0xa0,\
	   0xb0,\
	   0xc0,\
	   0xd0,\
	   0xe0,\
	   0xf0,\
   0xff},\
/* PWM 2D 8 Table_XAXIS */\
   {0,\
	   0x100,\
	   0x200,\
	   0x300,\
	   0x400,\
	   0x500,\
	   0x600,\
	   0x700,\
	   0x800,\
	   0x900,\
	   0xa00,\
	   0xb00,\
	   0xc00,\
	   0xd00,\
	   0xe00,\
	   0xf00,\
   0xfff},\
/* PWM 2D 1 Table */\
   {0,\
	   50,\
	   100,\
	   150,\
	   200,\
	   250,\
	   300,\
	   350,\
	   400,\
	   450,\
	   500,\
	   550,\
	   600,\
	   650,\
	   700,\
	   750,\
   800},\
/* PWM 2D 2 Table */\
   {0,\
	   51,\
	   100,\
	   150,\
	   200,\
	   250,\
	   300,\
	   350,\
	   400,\
	   450,\
	   500,\
	   550,\
	   600,\
	   650,\
	   700,\
	   750,\
   800},\
/* PWM 2D 3 Table */\
   {0,\
	   52,\
	   100,\
	   150,\
	   200,\
	   250,\
	   300,\
	   350,\
	   400,\
	   450,\
	   500,\
	   550,\
	   600,\
	   650,\
	   700,\
	   750,\
   800},\
/* PWM 2D 4 Table */\
   {0,\
	   53,\
	   100,\
	   150,\
	   200,\
	   250,\
	   300,\
	   350,\
	   400,\
	   450,\
	   500,\
	   550,\
	   600,\
	   650,\
	   700,\
	   750,\
   800},\
/* PWM 2D 5 Table */\
   {0,\
	   54,\
	   100,\
	   150,\
	   200,\
	   250,\
	   300,\
	   350,\
	   400,\
	   450,\
	   500,\
	   550,\
	   600,\
	   650,\
	   700,\
	   750,\
   800},\
/* PWM 2D 6 Table */\
   {0,\
	   55,\
	   100,\
	   150,\
	   200,\
	   250,\
	   300,\
	   350,\
	   400,\
	   450,\
	   500,\
	   550,\
	   600,\
	   650,\
	   700,\
	   750,\
   800},\
/* PWM 2D 7 Table */\
   {0,\
	   56,\
	   100,\
	   150,\
	   200,\
	   250,\
	   300,\
	   350,\
	   400,\
	   450,\
	   500,\
	   550,\
	   600,\
	   650,\
	   700,\
	   750,\
   800},\
/* PWM 2D 8 Table */\
   {0,\
	   57,\
	   100,\
	   150,\
	   200,\
	   250,\
	   300,\
	   350,\
	   400,\
	   450,\
	   500,\
	   550,\
	   600,\
	   650,\
	   700,\
	   750,\
   800},\
/* PWM 3D 1 Map_XAXIS */\
   {0,\
	   1000,\
	   2000,\
	   3000,\
	   4000,\
	   5000,\
	   6000,\
	   7000,\
	   8000,\
	   9000,\
	   10000,\
	   11000,\
	   12000,\
	   13000,\
	   14000,\
	   15000,\
   16000},\
/* PWM 3D 2 Map_XAXIS */\
   {0,\
	   1000,\
	   2000,\
	   3000,\
	   4000,\
	   5000,\
	   6000,\
	   7000,\
	   8000,\
	   9000,\
	   10000,\
	   11000,\
	   12000,\
	   13000,\
	   14000,\
	   15000,\
   16000},\
/* PWM 3D 3 Map_XAXIS */\
   {0,\
	   0x107,\
	   0x207,\
	   0x307,\
	   0x407,\
	   0x507,\
	   0x607,\
	   0x707,\
	   0x807,\
	   0x907,\
	   0xa07,\
	   0xb07,\
	   0xc07,\
	   0xd07,\
	   0xe07,\
	   0xf07,\
   0xfff},\
/* PWM 3D 4 Map_XAXIS */\
   {0,\
	   0x10,\
	   0x20,\
	   0x30,\
	   0x40,\
	   0x50,\
	   0x60,\
	   0x70,\
	   0x80,\
	   0x90,\
	   0xa0,\
	   0xb0,\
	   0xc0,\
	   0xd0,\
	   0xe0,\
	   0xf0,\
   0xff},\
/* PWM 3D 5 Map_YAXIS */\
   {0,\
	   0x101,\
	   0x201,\
	   0x301,\
	   0x401,\
	   0x501,\
	   0x601,\
	   0x701,\
	   0x801,\
	   0x901,\
	   0xa01,\
	   0xb01,\
	   0xc01,\
	   0xd01,\
	   0xe01,\
	   0xf01,\
   0xffff},\
/* PWM 3D 6 Map_YAXIS */\
   {0,\
	   0x1040,\
	   0x2040,\
	   0x3040,\
	   0x4040,\
	   0x5040,\
	   0x6040,\
	   0x7040,\
	   0x8040,\
	   0x9040,\
	   0xa040,\
	   0xb040,\
	   0xc040,\
	   0xd040,\
	   0xe040,\
	   0xf040,\
   0xffff},\
/* PWM 3D 7 Map_YAXIS */\
   {0,\
	   0x108,\
	   0x208,\
	   0x308,\
	   0x408,\
	   0x508,\
	   0x608,\
	   0x708,\
	   0x808,\
	   0x908,\
	   0xa08,\
	   0xb08,\
	   0xc08,\
	   0xd08,\
	   0xe08,\
	   0xf08,\
   0xfff},\
/* PWM 3D 8 Map_YAXIS */\
   {0,\
	   0x100,\
	   0x200,\
	   0x300,\
	   0x400,\
	   0x500,\
	   0x600,\
	   0x700,\
	   0x800,\
	   0x900,\
	   0xa00,\
	   0xb00,\
	   0xc00,\
	   0xd00,\
	   0xe00,\
	   0xf00,\
   0xfff},\
/* PWM 3D Map 1 */\
{\
	{0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0},\
	{0,  10, 20, 30, 40, 50, 60, 70, 80, 90, 100,110,120,130,140,150,160},\
	{100,110,120,130,140,150,160,170,180,190,200,210,220,230,240,250,260},\
	{100,110,120,130,140,150,160,170,180,190,200,210,220,230,240,250,260},\
	{100,110,120,130,140,150,160,170,180,190,200,210,220,230,240,250,260},\
	{0,  10, 20, 30, 40, 50, 60, 70, 80, 90, 100,110,120,130,140,150,160},\
	{0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0},\
	{0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0},\
	{0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0},\
	{0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0},\
	{0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0},\
	{0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0},\
	{0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0},\
	{0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0},\
	{0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0},\
	{0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0},\
	{0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0},\
},\
/* PWM 3D Map 2 */\
{\
	{0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0},\
	{0,  10, 20, 30, 40, 50, 60, 70, 80, 90, 100,110,120,130,140,150,160},\
	{100,110,120,130,140,150,160,170,180,190,200,210,220,230,240,250,260},\
	{100,110,120,130,140,150,160,170,180,190,200,210,220,230,240,250,260},\
	{100,110,120,130,140,150,160,170,180,190,200,210,220,230,240,250,260},\
	{0,  10, 20, 30, 40, 50, 60, 70, 80, 90, 100,110,120,130,140,150,160},\
	{0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0},\
	{0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0},\
	{0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0},\
	{0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0},\
	{0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0},\
	{0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0},\
	{0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0},\
	{0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0},\
	{0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0},\
	{0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0},\
	{0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0},\
},\
/* PWM 3D Map 3 */\
{\
	{0,  10, 20, 30, 40, 50, 60, 70, 80, 90, 100,110,120,130,140,150,160},\
	{0,  10, 20, 30, 40, 50, 60, 70, 80, 90, 100,110,120,130,140,150,160},\
	{100,110,120,130,140,150,160,170,180,190,200,210,220,230,240,250,260},\
	{100,110,120,130,140,150,160,170,180,190,200,210,220,230,240,250,260},\
	{100,110,120,130,140,150,160,170,180,190,200,210,220,230,240,250,260},\
	{0,  10, 20, 30, 40, 50, 60, 70, 80, 90, 100,110,120,130,140,150,160},\
	{0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0},\
	{0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0},\
	{0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0},\
	{0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0},\
	{0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0},\
	{0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0},\
	{0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0},\
	{0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0},\
	{0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0},\
	{0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0},\
	{0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0},\
},\
/* PWM 3D Map 4 */\
{\
	{100,110,120,130,140,150,160,170,180,190,200,210,220,230,240,250,260},\
	{100,110,120,130,140,150,160,170,180,190,200,210,220,230,240,250,260},\
	{100,110,120,130,140,150,160,170,180,190,200,210,220,230,240,250,260},\
	{100,110,120,130,140,150,160,170,180,190,200,210,220,230,240,250,260},\
	{100,110,120,130,140,150,160,170,180,190,200,210,220,230,240,250,260},\
	{100,110,120,130,140,150,160,170,180,190,200,210,220,230,240,250,260},\
	{100,110,120,130,140,150,160,170,180,190,200,210,220,230,240,250,260},\
	{100,110,120,130,140,150,160,170,180,190,200,210,220,230,240,250,260},\
	{0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0},\
	{0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0},\
	{0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0},\
	{0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0},\
	{0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0},\
	{0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0},\
	{0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0},\
	{0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0},\
	{0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0},\
},\
/* VVTInputResource */\
	EH_IO_TMR2,\
/* VVTInputType */\
	0,\
 /* u16CRC16 */\
	0x1234,\
	(uint32*)&au32Offsets\
}

#pragma GCC diagnostic pop