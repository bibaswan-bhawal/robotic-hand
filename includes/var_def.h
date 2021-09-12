#ifndef VAR_DEF_H
#define VAR_DEF_H

#include "Arduino.h"

// Struct to hold pins for each finger
typedef struct {
  const int dirPin;
  const int stepPin;
  const int maxSteps;
} Finger;

// Pin assignments
const Finger thumb = {3, 4, 1400};   // Thumb dir: 3, step: 4, maxSteps: 1400
const Finger index = {5, 6, 1900};   // Index dir: 5, step: 6, maxSteps: 1000
const Finger middle = {7, 8, 1000};  // Middle dir: 7, step: 8, maxSteps: 1000
const Finger ring = {9, 10, 1000};   // Ring dir: 9, step: 10, maxSteps: 1000
const Finger pinky = {11, 12, 1000}; // pinky dir: 11, step: 12, maxSteps: 1000

const int endstopPin = 2; // Endstop Pin number
const int calibrationMovementSpeed = 2000; // Movement speed during calibration
const int movementSpeed = 500; // Normal movement speed

//Rotation constants
const int clockwise = HIGH; // Clockwise rotation dirPin high
const int antiClockwise = LOW; // anti-clockwise rotation dirPin low

// Endstop activated tracker
extern bool maxMovement;

#endif

