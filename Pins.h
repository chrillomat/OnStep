// -------------------------------------------------------------------------------------------------
// Pin maps

// defines for direct port control
#if defined(__AVR_ATmega2560__) && !defined(ALTERNATE_PINMAP_ON)
// The PEC index sense is a 5V logic input, resets the PEC index on rising edge then waits for 60 seconds before allowing another reset
#define PecPin         2
#define AnalogPecPin   1

// The limit switch sense is a 5V logic input which uses the internal pull up, shorted to ground it stops gotos/tracking
#define LimitPin       3

// The status LED is a two wire jumper with a 10k resistor in series to limit the current to the LED
//                                  Atmel   2560
#define LEDposPin      13   // Pin 13 (LED)  PB7
#define LEDnegPin      9    // Pin 9 (GND)   PH6
#define LEDneg2Pin    10    // Pin 10 (GND)  PB4
#define ReticulePin   44    // Pin 44 (GND)  

// The PPS pin is a 5V logic input, OnStep measures time between rising edges and adjusts the internal sidereal clock frequency
// The Arduino attachInterrupt function works in two modes, on the '2560 it takes an Interrupt# on the Teensy and others it takes a Pin#
#define PpsInt         2    // Interrupt 2 on Pin 21 (alternate Int3 on Pin20)

#define Axis1DirPin   A1    // Pin 55 (Dir)  PF1
#define Axis1DirBit    1    //
#define Axis1DirPORT  PORTF //
#define Axis15vPin    12    // Pin 12 (5V?)  PB6
#define Axis1StepPin  A0    // Pin 54 (Step) PF0
#define Axis1StepBit   0    //
#define Axis1StepPORT PORTF //
                            // Pin GND (GND)

// Pins to enable/disable the stepper drivers and set microstep mode, optional and normally just hard-wired (DRV8825)/ignored (BED-A4988)
#define Axis1_M0      A5    // Pin 59 (Microstep Mode 0)
#define Axis1_M1      A10    // Pin 64 (Microstep Mode 1)
#define Axis1_M2      44    // Pin 44 (Microstep Mode 2)
#define Axis1_EN      38    // Pin 38 (Enabled when LOW)
#define Axis1_FAULT   26    // Pin 26 (Fault if LOW)
#define Axis1_Mode    32    // Pin 32 (Mode switch for Axis1)

// The HA(RA) and Dec jumpers (going to the big easy drivers) are simply four wire jumper cables, each has identical wiring - simple modular construction
#define Axis2DirPin    A7    // Pin 61 (Dir)   PF7
#define Axis2DirBit    7    //
#define Axis2DirPORT  PORTF //
#define Axis25vPin     5    // Pin 5 (5V?)   PE3
#define Axis2StepPin   A6    // Pin 60 (Step)  PF6
#define Axis2StepBit   6    //
#define Axis2StepPORT PORTF //
#define Axis2GndPin    7    // Pin 7 (GND)   PH4

// Pins to enable/disable the stepper drivers and set microstep mode, optional and normally just hard-wired (DRV8825)/ignored (BED-A4988)
#define Axis2_M0      A9    // Pin 63 (Microstep Mode 0)
#define Axis2_M1      40    // Pin 40 (Microstep Mode 1)
#define Axis2_M2      42    // Pin 42 (Microstep Mode 2)
#define Axis2_EN      A2    // Pin 56 (Enabled when LOW)
#define Axis2_FAULT   31    // Pin 31 (Fault if LOW)
#define Axis2_Mode    33    // Pin 33 (Mode switch for Axis2)

// ST4 interface
#ifdef ST4_ALTERNATE_PINS_ON
#define ST4RAw        47    // Pin 47 ST4 RA- West
#define ST4DEs        43    // Pin 43 ST4 DE- South
#define ST4DEn        45    // Pin 45 ST4 DE+ North
#define ST4RAe        49    // Pin 49 ST4 RA+ East
#else
#define ST4RAw        47    // Pin 47 ST4 RA- West
#define ST4DEs        49    // Pin 49 ST4 DE- South
#define ST4DEn        51    // Pin 51 ST4 DE+ North
#define ST4RAe        53    // Pin 53 ST4 RA+ East
#endif

#elif defined(__AVR_ATmega2560__) && defined(ALTERNATE_PINMAP_ON)
// The PEC index sense is a 5V logic input, resets the PEC index on rising edge then waits for 60 seconds before allowing another reset
#define PecPin         2
#define AnalogPecPin   1

// The limit switch sense is a 5V logic input which uses the internal pull up, shorted to ground it stops gotos/tracking
#define LimitPin       3

// The status LED is a two wire jumper with a 10k resistor in series to limit the current to the LED
#define LEDposPin      8    // Pin 8 (LED)
#define LEDnegPin      9    // Pin 9 (GND)
#define LEDneg2Pin     7    // Pin 7 (GND)
#define ReticulePin   44    // Pin 44 (GND)  

// The PPS pin is a 5V logic input, OnStep measures time between rising edges and adjusts the internal sidereal clock frequency
// The Arduino attachInterrupt function works in two modes, on the '2560 it takes an Interrupt# on the Teensy and others it takes a Pin#
#define PpsInt         2    // Interrupt 2 on Pin 21 (alternate Int3 on Pin20)
                         
// Pins to enable/disable the stepper drivers and set microstep mode, optional and normally just hard-wired (DRV8825)/ignored (BED-A4988)
#define Axis1DirPin   37    // Pin 37 (Dir)  PC0
#define Axis1DirBit    0    //
#define Axis1DirPORT  PORTC //
#define Axis1StepPin  35    // Pin 35 (Step) PC2
#define Axis1StepBit   2    //
#define Axis1StepPORT PORTC //

#define Axis1_M0      29    // Pin 29 (Microstep or Decay Mode 0)
#define Axis1_M1      27    // Pin 27 (Microstep or Decay Mode 1)
#define Axis1_M2      25    // Pin 25 (Microstep or Decay Mode 2)
#define Axis1_EN      23    // Pin 23 (Enabled when LOW)
#define Axis1_FAULT   39    // Pin 39 (Fault if LOW)
#define Axis1_Mode    41    // Pin 41 (Aux Decay Mode for Axis1)

// The HA(RA) and Dec jumpers (going to the big easy drivers) are simply four wire jumper cables, each has identical wiring - simple modular construction
#define Axis2DirPin   22    // Pin 22 (Dir)   PA0
#define Axis2DirBit    0    //
#define Axis2DirPORT  PORTA //
#define Axis2StepPin  24    // Pin 24 (Step)  PA2
#define Axis2StepBit   2    //
#define Axis2StepPORT PORTA //

#define Axis2_M0      30    // Pin 30 (Microstep or Decay Mode 0)
#define Axis2_M1      32    // Pin 32 (Microstep or Decay Mode 1)
#define Axis2_M2      34    // Pin 34 (Microstep or Decay Mode 2)
#define Axis2_EN      36    // Pin 36 (Enabled when LOW)
#define Axis2_FAULT   38    // Pin 38 (Fault if LOW)
#define Axis2_Mode    40    // Pin 40 (Aux Decay Mode for Axis2)

// ST4 interface
#define ST4RAw        47    // Pin 47 ST4 RA- West
#define ST4DEs        43    // Pin 43 ST4 DE- South
#define ST4DEn        45    // Pin 45 ST4 DE+ North
#define ST4RAe        49    // Pin 49 ST4 RA+ East

#elif defined(__ARM_Teensy3__) && !defined(ALTERNATE_PINMAP_ON)
// The PEC index sense is a logic level input, resets the PEC index on rising edge then waits for 60 seconds before allowing another reset
#define PecPin         2
#define AnalogPecPin  14

// The limit switch sense is a 5V logic input which uses the internal pull up, shorted to ground it stops gotos/tracking
#define LimitPin       3

// The status LED is a two wire jumper with a 10k resistor in series to limit the current to the LED
#define LEDposPin      8    // Pin 8 (LED)
#define LEDnegPin      9    // Pin 9 (GND)
#define LEDneg2Pin     7    // Pin 7 (GND)
#define ReticulePin    9    // Pin 9 (GND)

// The PPS pin is a logic level input, OnStep measures time between rising edges and adjusts the internal sidereal clock frequency
#define PpsPin        23    // Pin 23 (PPS time source, GPS for example)

#define Axis1DirPin   10    // Pin 10 (Dir)
#define Axis15vPin    11    // Pin 11 (5V?)
#define Axis1StepPin  12    // Pin 12 (Step)
                            // Pin GND (GND)

// Pins to enable/disable the stepper drivers and set microstep mode, optional and normally just hard-wired (DRV8825)/ignored (BED-A4988)
#define Axis1_M0      13    // Pin 13 (Microstep Mode 0)
#define Axis1_M1      14    // Pin 14 (Microstep Mode 1)
#define Axis1_M2      15    // Pin 15 (Microstep Mode 2)
#define Axis1_EN      16    // Pin 16 (Enabled when LOW)
#define Axis1_FAULT   17    // Pin 17 (Fault if LOW)

// The HA(RA) and Dec jumpers (going to the big easy drivers) are simply four wire jumper cables, each has identical wiring - simple modular construction
#define Axis2DirPin    4    // Pin 4 (Dir)
#define Axis25vPin     5    // Pin 5 (5V?)
#define Axis2StepPin   6    // Pin 6 (Step)
#define Axis2GndPin    7    // Pin 7 (GND)

#define Axis2_M0      18    // Pin 18 (Microstep Mode 0)
#define Axis2_M1      19    // Pin 19 (Microstep Mode 1)
#define Axis2_M2      20    // Pin 20 (Microstep Mode 2)
#define Axis2_EN      21    // Pin 21 (Enabled when LOW)
#define Axis2_FAULT   22    // Pin 22 (Fault if LOW)

// ST4 interface
#define ST4RAw        24    // Pin 24 ST4 RA- West
#define ST4DEs        25    // Pin 25 ST4 DE- South
#define ST4DEn        26    // Pin 26 ST4 DE+ North
#define ST4RAe        27    // Pin 27 ST4 RA+ East

#elif defined(__ARM_Teensy3__) && defined(ALTERNATE_PINMAP_ON)
// Note that TM4C123 has resistors R9 anr R10 between pins 14 (B6) and 23 (D0) and between pins 15 (B7) and 24 (D1)
// Make sure you look at the list of the pins and options to avoid clashes or desolder the two bridges
// These pins are used for Axis2_M2 (14) and DE_M3 (15) and for Axis2DirPin (23) and Axis25vPin (24)
// If you have defined AXIS2_MODE_OFF in Config.h you should be safe to leave things as they are.

// The PEC index sense is a logic level input, resets the PEC index on rising edge then waits for 60 seconds before allowing another reset
#define PecPin        23
#define AnalogPecPin  23    // Pin 23 (PEC Sense, analog or digital)

// The status LED is a two wire jumper with a 10k resistor in series to limit the current to the LED
#define LEDnegPin     19    // Pin 19 (Drain)
#define LEDneg2Pin    22    // Pin 22 (Drain)
#define ReticulePin   22    // Pin 22 (Drain)

#define Axis1DirPin   21    // Pin 21 (Dir)
#define Axis1StepPin  20    // Pin 20 (Step)
#define RstPin        19    // Pin 19 (Reset)
#define Axis1_FAULT   18    // Pin 18 (Fault)
#define Axis1_Aux     18    // Pin 18 (Aux - ESP8266 GPIO0 or SPI MISO)
#define Axis1_M2      17    // Pin 17 (Microstep Mode 2 or SPI CS)
#define Axis1_M1      16    // Pin 16 (Microstep Mode 1 or SPI SCK)
#define Axis1_M0      15    // Pin 15 (Microstep Mode 0 or SPI MOSI)
#define Axis1_EN      14    // Pin 14 (Enabled when LOW)
#define Axis1_SDO     18    // Pin 18 (SPI Slave SDO)
#define Axis1_CS      17    // Pin 17 (SPI Slave CS)
#define Axis1_SCK     16    // Pin 16 (SPI Slave SCK)
#define Axis1_SDI     15    // Pin 15 (SPI Slave SDI)

#define Axis2DirPin    2    // Pin  2 (Dir)
#define Axis2StepPin   3    // Pin  3 (Step)
#define LimitPin       4    // Pin  4 (The limit switch sense is a logic level input which uses the internal pull up, shorted to ground it stops gotos/tracking)
#define PpsPin         28   // Pin  28 (PPS time source, GPS for example)
#define Axis2_FAULT    5    // Pin  5 (Fault)
#define Axis2_Aux      5    // Pin  5 (Aux - ESP8266 RST or SPI MISO)
#define Axis2_M2       6    // Pin  6 (Microstep Mode 2 or SPI CS)
#define Axis2_M1       7    // Pin  7 (Microstep Mode 1 or SPI SCK)
#define Axis2_M0       8    // Pin  8 (Microstep Mode 0 or SPI MOSI)
#define Axis2_EN       9    // Pin  9 (Enabled when LOW)

// ST4 interface
#ifdef ST4_ALTERNATE_PINS_ON
#define ST4RAw        10    // Pin 10 ST4 RA- West
#define ST4DEs        11    // Pin 11 ST4 DE- South
#define ST4DEn        12    // Pin 12 ST4 DE+ North
#define ST4RAe        13    // Pin 13 ST4 RA+ East
#else
#define ST4RAw        24    // Pin 24 ST4 RA- West
#define ST4DEs        25    // Pin 25 ST4 DE- South
#define ST4DEn        26    // Pin 26 ST4 DE+ North
#define ST4RAe        27    // Pin 27 ST4 RA+ East
#endif

#elif (defined(__TM4C123GH6PM__) || defined(__LM4F120H5QR__)) && !defined(ALTERNATE_PINMAP_ON)
// Note that TM4C123 has resistors R9 anr R10 between pins 14 (B6) and 23 (D0) and between pins 15 (B7) and 24 (D1)
// Make sure you look at the list of the pins and options to avoid clashes or desolder the two bridges
// These pins are used for Axis2_M2 (14) and DE_M3 (15) and for Axis2DirPin (23) and Axis25vPin (24)
// If you have defined AXIS2_MODE_OFF in Config.h you should be safe to leave things as they are.

// Also note that we are using UART1 and UART 5 which use pins 3-6

// The PEC index sense is a 5V logic input, resets the PEC index on rising edge then waits for 60 seconds before allowing another reset
#define PecPin        11               // Pin A2

// The limit switch sense is a 5V logic input which uses the internal pull up, shorted to ground it stops gotos/tracking
#define LimitPin      12               // Pin A3

// The status LED is a two wire jumper with a 10k resistor in series to limit the current to the LED
#define LEDposPin      2               // Pin B5 (LED)
#define LEDnegPin     33               // Pin D6 (GND)
#define LEDneg2Pin    26               // Pin D3 (GND)
#define ReticulePin   33

// The PPS pin is a 5V logic input, OnStep measures time between rising edges and adjusts the internal sidereal clock frequency
#define PpsPin        19               // Pin B2 (PPS time source, GPS for example)

#define Axis1DirPin   27               // Pin E1 (Dir)
#define Axis1DirBit   GPIO_PIN_1       // Pin 27
#define Axis1DirPORT  GPIO_PORTE_BASE  //
#define Axis15vPin    28               // Pin E2 (5V?)
#define Axis1StepPin  29               // Pin E3 (Step)
#define Axis1StepBit  GPIO_PIN_3       // Pin 29
#define Axis1StepPORT GPIO_PORTE_BASE  //
// Pin GND (GND)

// Pins to enable/disable the stepper drivers and set microstep mode, optional and normally just hard-wired (DRV8825)/ignored (BED-A4988)
#define Axis1_M0      34               // Pin C7 (Microstep Mode 0)
#define Axis1_M1      35               // Pin C6 (Microstep Mode 1)
#define Axis1_M2      36               // Pin C5 (Microstep Mode 2)
#define Axis1_EN      37               // Pin C4 (Enabled when LOW)
#define Axis1_FAULT   38               // Pin B3 (Fault if LOW)

// The HA(RA) and Dec jumpers (going to the big easy drivers) are simply four wire jumper cables, each has identical wiring - simple modular construction
#define Axis2DirPin   23               // Pin D0 (Dir)
#define Axis2DirBit   GPIO_PIN_0       // Pin 23=D0=B6 = pin 14
#define Axis2DirPORT  GPIO_PORTD_BASE  //
#define Axis25vPin    24               // Pin D1 (5V?)
#define Axis2StepPin  25               // Pin D2 (Step)
#define Axis2StepBit  GPIO_PIN_2       // Pin 25
#define Axis2StepPORT GPIO_PORTD_BASE  //
#define Axis2GndPin   26               // Pin D3 (GND)

#define Axis2_M0      13               // Pin A4 (Microstep Mode 0)
#define Axis2_M1      14               // Pin B6 (Microstep Mode 1) IF USED MAKE SURE YOU DESOLDER A BRIDGE or change pins around, otherwise pin 14 is connected to pin 23
#define Axis2_M2      15               // Pin B7 (Microstep Mode 2) IF USED MAKE SURE YOU DESOLDER A BRIDGE or change pins around, otherwise pin 15 is connected to pin 24
#define Axis2_EN      18               // Pin E0 (Enabled when LOW)
#define Axis2_FAULT   17               // Pin F0 (Fault if LOW) NOTE, this is connected to pushbutton switch 2

// ST4 interface
#define ST4RAw         7               // Pin B4 ST4 RA- West
#define ST4DEs         8               // Pin A5 ST4 DE- South
#define ST4DEn         9               // Pin A6 ST4 DE+ North
#define ST4RAe        10               // Pin A7 ST4 RA+ East

#elif (defined(__TM4C123GH6PM__) || defined(__LM4F120H5QR__)) && defined(ALTERNATE_PINMAP_ON)
// Note that TM4C123 has resistors R9 and R10 between pins 14 (B6) and 23 (D0) and between pins 15 (B7) and 24 (D1)
// These two resistors must be desoldered/removed to use this pinmap

// Also note that we are using UART1 and UART 5 which use pins 3-6

// The PEC index sense is a 5V logic input, resets the PEC index on rising edge then waits for 60 seconds before allowing another reset
#define PecPin        11               // Pin A2

// The limit switch sense is a 5V logic input which uses the internal pull up, shorted to ground it stops gotos/tracking
#define LimitPin      12               // Pin A3

// The status LED is a two wire jumper with a 10k resistor in series to limit the current to the LED
#define LEDnegPin     13               // Pin A4 (GND)
#define LEDneg2Pin    19               // Pin B2 (GND)
#define ReticulePin   13

// The PPS pin is a 5V logic input, OnStep measures time between rising edges and adjusts the internal sidereal clock frequency
#define PpsPin         2               // Pin B5 (PPS time source, GPS for example)

#define Axis1DirPin   31               // Pin F4 (Dir)
#define Axis1DirBit   GPIO_PIN_4       // Pin 31
#define Axis1DirPORT  GPIO_PORTF_BASE  //
#define Axis1StepPin  32               // Pin D7 (Step)
#define Axis1StepBit  GPIO_PIN_7       // Pin 32
#define Axis1StepPORT GPIO_PORTD_BASE  //
#define Axis1_Aux     10               // ESP8266 GPIO0

// Pins to enable/disable the stepper drivers and set microstep mode, optional and normally just hard-wired (DRV8825)/ignored (BED-A4988)
#define Axis1_M2      35               // Pin C6 (Microstep Mode 0)
#define Axis1_M1      36               // Pin C5 (Microstep Mode 1)
#define Axis1_M0      37               // Pin C4 (Microstep Mode 2)
#define Axis1_EN      38               // Pin B3 (Enabled when LOW)
#define Axis1_FAULT   34               // Pin C7 (Fault if LOW)

// The HA(RA) and Dec jumpers (going to the big easy drivers) are simply four wire jumper cables, each has identical wiring - simple modular construction
#define Axis2DirPin   23               // Pin D0 (Dir)
#define Axis2DirBit   GPIO_PIN_0       // Pin 23=D0=B6 = pin 14
#define Axis2DirPORT  GPIO_PORTD_BASE  //
#define Axis2StepPin  24               // Pin D1 (Step)
#define Axis2StepBit  GPIO_PIN_1       // Pin 25
#define Axis2StepPORT GPIO_PORTD_BASE  //
#define Axis2_Aux     9                // ESP8266 Reset

#define Axis2_M2      27               // Pin E1 (Microstep Mode 0)
#define Axis2_M1      28               // Pin E2 (Microstep Mode 1) IF USED MAKE SURE YOU DESOLDER A BRIDGE or change pins around, otherwise pin 14 is connected to pin 23
#define Axis2_M0      29               // Pin E3 (Microstep Mode 2) IF USED MAKE SURE YOU DESOLDER A BRIDGE or change pins around, otherwise pin 15 is connected to pin 24
#define Axis2_EN      30               // Pin F1 (Enabled when LOW)
#define Axis2_FAULT   26               // Pin D3 (Fault if LOW) NOTE, this is connected to pushbutton switch 2

// ST4 interface
#define ST4RAw        18               // Pin E0 ST4 RA- West
#define ST4DEs         8               // Pin A5 ST4 DE- South
#define ST4DEn        25               // (was 9) Pin A6 ST4 DE+ North
#define ST4RAe        17               // Pin F0 ST4 RA+ East

#elif defined(__TM4C1294NCPDT__) || defined(__TM4C1294XNCZAD__)
// No need to desolder anything on this launchpad as pins we are using are not bridged

// Note that we are using UART7 and UART 5 which use pins 3-5 and pin 8 (C4,C5,C6,C7)

// The PEC index sense is a 5V logic input, resets the PEC index on rising edge then waits for 60 seconds before allowing another reset
#define PecPin        11               // Pin P2

// The limit switch sense is a 5V logic input which uses the internal pull up, shorted to ground it stops gotos/tracking
#define LimitPin      12               // Pin N3

// The status LED is a two wire jumper with a 10k resistor in series to limit the current to the LED
#define LEDposPin      2               // Pin E4 (LED)
#define LEDnegPin     33               // Pin L1 (GND)
#define LEDneg2Pin    26               // Pin E3 (GND)
#define ReticulePin   33

// The PPS pin is a 5V logic input, OnStep measures time between rising edges and adjusts the internal sidereal clock frequency
#define PpsPin        19               // Pin M3 (PPS time source, GPS for example)

#define Axis1DirPin   27               // Pin D7 (Dir)
#define Axis1DirBit   GPIO_PIN_7       // Pin 27
#define Axis1DirPORT  GPIO_PORTD_BASE  //
#define Axis15vPin    28               // Pin A6 (5V?)
#define Axis1StepPin  29               // Pin M4 (Step)
#define Axis1StepBit  GPIO_PIN_4       // Pin 29
#define Axis1StepPORT GPIO_PORTM_BASE  //
// Pin GND (GND)

// Pins to enable/disable the stepper drivers and set microstep mode, optional and normally just hard-wired (DRV8825)/ignored (BED-A4988)
#define Axis1_M0      34               // Pin L0 (Microstep Mode 0)
#define Axis1_M1      35               // Pin L5 (Microstep Mode 1)
#define Axis1_M2      36               // Pin L4 (Microstep Mode 2)
#define Axis1_EN      37               // Pin G0 (Enabled when LOW)
#define Axis1_FAULT   38               // Pin F3 (Fault if LOW)

// The HA(RA) and Dec jumpers (going to the big easy drivers) are simply four wire jumper cables, each has identical wiring - simple modular construction
#define Axis2DirPin   23               // Pin E0 (Dir)
#define Axis2DirBit   GPIO_PIN_0       // Pin 23
#define Axis2DirPORT  GPIO_PORTE_BASE  //
#define Axis25vPin    24               // Pin E1 (5V?)
#define Axis2StepPin  25               // Pin E2 (Step)
#define Axis2StepBit  GPIO_PIN_2       // Pin 25
#define Axis2StepPORT GPIO_PORTE_BASE  //
#define Axis2GndPin   26               // Pin E3 (GND)

#define Axis2_M0      13               // Pin N2 (Microstep Mode 0)
#define Axis2_M1      14               // Pin D0 (Microstep Mode 1)
#define Axis2_M2      15               // Pin D1 (Microstep Mode 2)
#define Axis2_EN      18               // Pin H2 (Enabled when LOW)
#define Axis2_FAULT   17               // Pin H3 (Fault if LOW) NOTE, this is connected to pushbutton switch 2

// ST4 interface
#define ST4RAw         7               // Pin D3 ST4 RA- West
#define ST4DEs         6               // Pin C7 ST4 DE- South
#define ST4DEn         9               // Pin B2 ST4 DE+ North
#define ST4RAe        10               // Pin B3 ST4 RA+ East

#endif

