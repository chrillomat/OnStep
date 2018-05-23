// -----------------------------------------------------------------------------------
// Constants

#pragma once

// some defines to help with configuration
#define TMC_LOWPWR      64
#define TMC_STEALTHCHOP 32
#define TMC_NINTPOL     16

// Stepper Driver Models
#define A4988   1
#define DRV8825 2
#define LV8729  3
#define RAPS128 3
#define TMC2100 4
#define TMC2208 5

#define TMC2130 100
#define TMC2130_QUIET 101  // these variations don't appear at run-time and are changed to "TMC2130"
#define TMC2130_VQUIET 102
#define TMC2130_QUIET_LOWPWR 103
#define TMC2130_VQUIET_LOWPWR 104

// Stepper Driver Decay Mode Open
#define OPEN 2

// Length of each stepper's table
#define LEN_A4988   5
#define LEN_DRV8825 6
#define LEN_LV8729  8
#define LEN_TMC2100 4
#define LEN_TMC2208 4
#define LEN_TMC2130 9
   
// The various microsteps for different driver models, with the bit modes for each
unsigned int StepsA4988  [LEN_A4988]  [2] = { {1,0}, {2,1}, {4,2}, {8,3}, {16,7} };
unsigned int StepsDRV8825[LEN_DRV8825][2] = { {1,0}, {2,1}, {4,2}, {8,3}, {16,4}, {32,5} };
unsigned int StepsLV8729 [LEN_LV8729] [2] = { {1,0}, {2,1}, {4,2}, {8,3}, {16,4}, {32,5}, {64,6}, {128,7} };
unsigned int StepsTMC2208[LEN_TMC2208][2] = {        {2,1}, {4,2}, {8,0}, {16,3} };
unsigned int StepsTMC2100[LEN_TMC2100][2] = { {1,0}, {2,1}, {4,2}, {16,3} };
unsigned int StepsTMC2130[LEN_TMC2130][2] = { {1,8}, {2,7}, {4,6}, {8,5}, {16,4}, {32,3}, {64,2}, {128,1}, {256,0} };

// EEPROM Info --------------------------------------------------------------------------------------------------------------
// 0-1023 bytes
// general purpose storage 0..99

#define EE_posAxis1    0      // 4
#define EE_posAxis2    4      // 4
#define EE_pierSide    8      // 1
#define EE_parkStatus  9      // 1
#define EE_parkSaved   10     // 1

#define EE_currentSite 11     // 1

#define EE_pauseHome   12     // 1 + 1

#define EE_LMT         14     // 4
#define EE_JD          18     // 4

#define EE_pulseGuideRate 22  // 1
#define EE_maxRate     23     // 2

#define EE_autoMeridianFlip 25 // 1

#define EE_dfCor       26     // 4

#define EE_trueAxis1   30     // 4
#define EE_trueAxis2   34     // 4

#define EE_dpmE        38     // 1
#define EE_dpmW        39     // 1
#define EE_minAlt      40     // 1
#define EE_maxAlt      41     // 1

#define EE_doCor       42     // 4
#define EE_pdCor       46     // 4
#define EE_altCor      50     // 4
#define EE_azmCor      54     // 4
#define EE_indexAxis1  58     // 4
#define EE_indexAxis2  62     // 4
#define EE_tfCor       66     // 4

#define EE_pecStatus   70     // 1
#define EE_pecRecorded 71     // 1

#define EE_posAxis4    72     // 4

#define EE_wormSensePos 76    // 4

#define EE_backlashAxis1 80   // 4
#define EE_backlashAxis2 84   // 4
#define EE_siderealInterval 88  // 4
#define EE_posAxis5      92     // 4

#define EE_autoInitKey 96

// site index: 100-199
// 100..103 latitude  1  ((index 1-1)*25+100)
// 104..107 longitude 1
// 108      timeZone  1
// 109..124 site name 1

// 125..128 latitude  2  ((index 2-1)*25+100)
// 129..132 longitude 2
// 133      timeZone  2
// 134..149 site name 2

// 150..153 latitude  3  ((index 3-1)*25+100)
// 154..157 longitude 3
// 158      timeZone  3
// 159..174 site name 3

// 175..178 latitude  4  ((index 4-1)*25+100)
// 179..182 longitude 4
// 183      timeZone  4
// 184..199 site name 4

#define EE_sites    100

// PEC table: 200...PECBufferSize+200-1
// PECBufferSize table of byte sized integers -128..+127, units are steps

#define EE_pecTable 200

// Library
// Catalog storage starts at 200+PECBufferSize and fills EEPROM

// Helper macros for debugging, with less typing.
// To use them, uncomment the DEBUG define in OnStep.ino
#if defined(DEBUG_ON)
  #define DBG(x)     DebugSer.print(x)
  #define DBG2(x,y)  DebugSer.print(x,y)
  #define DBGL(x)    DebugSer.println(x)
  #define DBGL2(x,y) DebugSer.println(x,y)
#else
  #define DBG(x)   /* nothing */
  #define DBG2(x,y) /* nothing */
  #define DBGL(x)   /* nothing */
  #define DBGL2(x,y) /* nothing */
#endif

