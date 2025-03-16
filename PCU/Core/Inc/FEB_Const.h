#ifndef INC_FEB_CONST_H_
#define INC_FEB_CONST_H_

//***************************************** INCLUDES *****************************8

#include <stdint.h>


// **************************************** Definitions ****************************************

#define SLEEP_TIME 10

#define ACC_PEDAL_1_START 1517.0
#define ACC_PEDAL_1_END 1352.0

#define ACC_PEDAL_2_START 820.0
#define ACC_PEDAL_2_END 1806.0

//#define BRAKE_PEDAL_1_START 1350.0
//#define BRAKE_PEDAL_1_END 910.0

#define BRAKE_PEDAL_1_START 1250.0
#define BRAKE_PEDAL_1_END 2300.0

#define BRAKE_PEDAL_2_START 1390.0
#define BRAKE_PEDAL_2_END 1160.0

#define PRESSURE_START 189.0
#define PRESSURE_END 1025.0

// TORQUE COMMAND PARAMS
#define INIT_VOLTAGE            480     // initial voltage of accumulator (used for capping torque commands) (consider sampling when BMS samples)
#define PEAK_CURRENT            52.0      // max DC current (in amps) we want to pull from accumulator
#define PEAK_CURRENT_REGEN      18.0      // max DC current (in amps) we want to charge the accumulator
#define MAX_TORQUE              230    // New emrax datasheet says this should be 220???
#define MAX_TORQUE_REGEN        1300    // User defined constant (equivalent to continuous torque) -- tune to MechE, nominally this doesn't seem to go above 50
#define RPM_TO_RAD_S            0.10472 // 2 pi / 60
#define FADE_SPEED_RPM          200.0   // About 3.5mph, don't do regen below here (rely on EEPROM/inverter control loop to properly fade)
#define BRAKE_POSITION_THRESH   0.15    // Minimum brake position (as %) before we stop accelerating / start regen
#define START_REGEN_SOC         0.95    // State of charge at which regen starts
#define MAX_REGEN_SOC           0.8     // State of charge at which full regen is enabled
#define MAX_CELL_TEMP           45.0    // Cell temp at which we are to stop regen (consider reading this from BMS for single source of truth)
#define TEMP_FILTER_SHARPNESS   1.0     // Make notion page
#define USER_REGEN_FILTER       0.0     // Manually tune how much of our calculated regen we want

#define HECS_CURRENT 3025.0 //check if current is too high for BSPD

#define ACC_PEDAL_1 ADC_CHANNEL_1
#define ACC_PEDAL_2 ADC_CHANNEL_0
#define BRAKE_PRESS_1 ADC_CHANNEL_13
#define BRAKE_PRESS_2 ADC_CHANNEL_12
#define HECS_SIGNAL ADC_CHANNEL_14
#define MICRO_SHUTDOWN ADC_CHANNEL_10

#endif /* INC_FEB_CONST_H_ */
