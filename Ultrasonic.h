/******************************************************************************
 *
 * Module: ICU
 *
 * File Name: Ultrasonic.h
 *
 * Description: Source file for the Ultrasonic driver
 *
 * Author: Yousif
 *
 *******************************************************************************/

#ifndef ULTRASONIC_H_
#define ULTRASONIC_H_
#include "std_types.h"
/*******************************************************************************
 *                                Definitions                                  *
 *******************************************************************************/

#define ULTRASONIC_ECHO_PORT         PORTD_ID
#define ULTRASONIC_ECHO_PIN          PIN6_ID
#define ULTRASONIC_TRIGGER_PORT      PORTB_ID
#define ULTRASONIC_TRIGGER_PIN       PIN5_ID
/*******************************************************************************
 *                      Functions Prototypes                                   *
 *******************************************************************************/
/*
 * Description
 *Initialize the ICU driver as required.
 *Setup the ICU call back function.
 *Setup the direction for the trigger pin as output pin through the GPIO driver.
 */
void Ultrasonic_init(void);

/*
 * Description: Send the Trigger pulse to the ultrasonic.
 */
void Ultrasonic_Trigger(void);

/*
 Description
 Send the trigger pulse by using Ultrasonic_Trigger function.
 Start the measurements by the ICU from this moment.
 */
uint16 Ultrasonic_readDistance(void);

#endif /* ULTRASONIC_H_ */
