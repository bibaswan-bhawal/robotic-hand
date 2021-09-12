/*
  Movement Controller
  Designed by: Bibaswan Bhawal
  Version: 1.0

  script to control finger movement
*/

#include "includes/move_finger.h"

/******************************************************************
 *  Function:             moveFinger
 *                        
 *  Description:          Moves stepper motor by one step in given
 *                        direction.
 *  
 *  Params:
 *    Finger finger:      reference to a finger of type Finger
 *    int speed:          speed at which to turn motor
 *    int direction:      direction in which to turn motor
 * 
 *****************************************************************/
void movefinger(Finger finger, int speed, int direction){

  // Set rotation direction
  digitalWrite(finger.dirPin, direction);

  // rotate motor by one step
  digitalWrite(finger.stepPin, HIGH);
  delayMicroseconds(speed);
  digitalWrite(finger.stepPin, LOW);
  delayMicroseconds(speed);
}