/*
 * app_analog_functions.h
 *
 * Created: 23/07/2018 10:42:10
 *  Author: David Fitzgerald
 */ 

#ifndef APP_ANALOG_FUNCTIONS_H_
#define APP_ANALOG_FUNCTIONS_H_

#define ANA_ADC_CHANNEL_RESERVOIR	0
#define ANA_ADC_CHANNEL_CURRENT		1
#define ANA_ADC_CHANNEL_VOLTAGE		2
#define ANA_ADC_CHANNEL_HW_VERSION	3
#define ANA_ADC_CHANNEL_GND_CAL		4

#define ANA_CURRENT_AVERAGE_BUFFER_SIZE		40
#define ANA_PRESSURE_AVERAGE_BUFFER_SIZE	8

#define ANA_PRESSURE_ACT_MIN		-0.5f
#define ANA_PRESSURE_ACT_MAX		25.5f
#define ANA_CURRENT_ACT_MIN			0.0f
#define ANA_CURRENT_ACT_MAX			5.05f
#define ANA_VOLTAGE_ACT_MIN			0.0f
#define ANA_VOLTAGE_ACT_MAX			15.0f

#endif /* APP_ANALOG_FUNCTIONS_H_ */