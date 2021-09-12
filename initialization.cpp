/*
  Control Script for Robotic Hand
  Designed by: Bibaswan Bhawal
  Version: 1.0

  Script to initialize hand.
*/

#include "includes/initialization.h"

bool maxMovement;

/******************************************************************
 *  Function:              setup
 *  
 *  Description:          Setup function that sets up all pin
 *                        initializations, interupts, and 
 *                        calibrates the hand.    
 *                                    
 *****************************************************************/
void initialization() {
  // pin initialization of fingers
  FingerPinInitialization(thumb);
  FingerPinInitialization(index);
  FingerPinInitialization(middle);
  FingerPinInitialization(ring);
  FingerPinInitialization(pinky);

  
  // Initialize built in LED
  pinMode(LED_BUILTIN, OUTPUT);

  // Attach an interrupt to endstop_ISR and set trigger when low
  pinMode(endstopPin, INPUT_PULLUP);
  attachInterrupt(digitalPinToInterrupt(2), endstop_ISR, LOW);
  
  // Calibrate hand
  if(calibration() != 1){
    // Error occured during Calibration
    Serial.println("Calibration error: failed to calibrate"); 
    while(true); // stop program
  }
}

/******************************************************************
 *  Function:             fingerPinInitialization
 *  
 *  Description:          Intializes the direction and step pin for
 *                        given finger as outputs.
 *  
 *  params:
 *    Finger finger:      finger which to initialize.                   
 *****************************************************************/

void FingerPinInitialization(Finger finger){
  pinMode(finger.stepPin, OUTPUT); // set stepPin as outout
  pinMode(finger.dirPin, OUTPUT);  // set dirPin as output
}
