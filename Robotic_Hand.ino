#include "includes/main.h"

/******************************************************************
 *  Function:              setup
 *  
 *  Description:          run initialization 
 *                                    
 *****************************************************************/
void setup() {
  Serial.begin(9600); // Begin serial port to be able to output to screen
  initialization();
}

/******************************************************************
 *  Function:             loop
 *  
 *  Description:          run main movement
 *                        
 *****************************************************************/
void loop() {
  calibrationFinger(thumb);
  calibrationFinger(index);
  calibrationFinger(middle);
  calibrationFinger(ring);
  calibrationFinger(pinky);

}
