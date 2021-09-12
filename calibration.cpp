/*
  Calibration Sequence
  Designed by: Bibaswan Bhawal
  Version: 1.0

  Script to calibrate hand
*/

#include "includes/calibration.h"

/******************************************************************
 *  Function:             calibration
 *  
 *  Description:          Calibrates each finger one by one
 * 
 *  Return:               returns calibration completion code
 *                        1 - success
 *                        0 - failure
 *****************************************************************/
int calibration(){
  calibrationFinger(thumb);
  calibrationFinger(index);
  calibrationFinger(middle);
  calibrationFinger(ring);
  calibrationFinger(pinky);

  return 1;
}

/******************************************************************
 *  Function:             calibrationThumb
 *  
 *  Description:          calibrates the thumb by continuously
 *                        retracting the thumb until endstop interupt
 *                        is triggered. Then the thumb is expanded
 *                        completely 
 *                        
 *****************************************************************/
void calibrationFinger(Finger finger){
  maxMovement = false; // reset endstop trigger
  interrupts();
  // Keep retracting finger until endstop interupt triggered
  while(maxMovement == false){
      movefinger(finger, calibrationMovementSpeed, antiClockwise);
      
  }
  
  // Extend finger to max extension
  for(int i = 0; i < finger.maxSteps; i++){
    movefinger(finger, movementSpeed, clockwise);
  }
}

/******************************************************************
 *  Function:             endstop_ISR
 *                        
 *  Description:          Function gets called when interrupt triggered
 *                        and sets maxMovement to true to indicate
 *                        finger is at max retraction.
 * 
 *****************************************************************/
void endstop_ISR(){
  maxMovement = true;
  noInterrupts();
}
