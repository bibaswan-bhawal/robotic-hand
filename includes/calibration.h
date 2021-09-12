#ifndef  CALIBRATION_H
#define CALIBRATION_H

#include "Arduino.h"
#include "var_def.h"
#include "move_finger.h"

int calibration();
void calibrationFinger(Finger finger);
void endstop_ISR();

#endif