# Arduino Robotic Hand

This the control software I wrote for a 3d printer robotic hand controled via a arduino uno and 5 stepper motor drivers. The hand design was from Open Bionics Ada project which I printed in TPU and used steel fishing wires to create tendions and stepper motors to control wach finger. 

# Calibration

Each finger has an end stop which I created with aluminum foil and tape to figure where the finger was relative to the stepper motor. The calibration cycles through each finger contracting it until the end stop is hit. the rotations need from full contraction to full extention are calculated by oberservation and hard coded (Not the best solution but I couldn't find a better one)

# Future progress

I am not actively working on the project anymore but as a future extention it could be interesting to use smaller DC motors to make the whole thing more compact. Also with DC motors we could measure the current rather than have end stops to calibrate the fingers.

