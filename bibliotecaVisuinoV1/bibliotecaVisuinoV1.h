//#include <Servo.h> //need to include direct on arduino's code
#include "Arduino.h"

// Using "Define" command to simplify the code

// Connectors ports

# define C1 1  
# define C2 2
# define C3 3
# define C4 4
# define C5 5
# define C6 6

// Servos ports

# define S1 7
# define S2 8 
# define S3 9 
# define S4 10

// Arduino pins where each connector port is plugged

# define digitalPinC1 3
# define digitalPinC2 4
# define digitalPinC3 7
# define digitalPinC4 2
# define digitalPinC5 5
# define digitalPinC6 1

# define analogPinC1 16
# define analogPinC2 17
# define analogPinC3 18
# define analogPinC4 15
# define analogPinC5 14
# define analogPinC6 19

// Arduino pins where each servo port is plugged

# define pinServo1 9
# define pinServo2 8
# define pinServo3 11
# define pinServo4 10

// ------------ SENSORS -----------------

void LED (int connector, int selectedLED, bool statusOn);
bool pushbutton (int connector, int selectedButton);
bool limit_switch (int connector);
int potentiomenter_sensor (int connector);
int temperature_sensor (int connector);
void buzzer (int connector, int frequency, int time);
int soundsensor (int connector); 
void IR_emitter (int connector, int frequency); //not implemented
bool IR_receiver (int connector); //not implemented
void LDR_emitter (int connector, bool statusOn);
int LDR_receiver (int connector);
void servo (int servoPort, int velocity);

int co_sensor (int connector); //not implemented
int c2h5oh_sensor (int connector); //not implemented
int co2_sensor (int connector); //not implemented
int ch4_sensor (int connector); //not implemented
int lgp_sensor (int connector); //not implemented
