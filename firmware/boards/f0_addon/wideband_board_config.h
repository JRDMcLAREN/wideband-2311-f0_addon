#pragma once

// Fundamental board constants
#define VCC_VOLTS (3.3f)
#define HALF_VCC (VCC_VOLTS / 2)
#define ADC_MAX_COUNT (4095)
#define ADC_OVERSAMPLE 24

// *******************************
//    Nernst voltage & ESR sense
// *******************************
#define NERNST_INPUT_GAIN (1 / 2.7f)

#define AFR_CHANNELS 1

// *******************************
//    Nernst voltage & ESR sense
// *******************************
#define VM_RESISTOR_VALUE (10)

// *******************************
//          AUX outputs
// *******************************
// OpAmp with 82K + 160K
#define AUXOUT_GAIN         ((82.0 + 160.0) / 160.0)


// *******************************
//   TunerStudio Settings
// *******************************
#define TS_SIGNATURE "MRE_add-on_board_Wideband_Controller_f0"

// *******************************
//   TunerStudio Primary Port
// *******************************
#define TS_PRIMARY_SERIAL_PORT	SD1
#define TS_PRIMARY_BAUDRATE		115200
