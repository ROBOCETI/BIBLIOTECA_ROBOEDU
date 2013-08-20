/*
   ROBOEDU_2013.h
   Biblioteca de componentes para o kit de robótica ROBOEDU-2013


   Esse código é de domínio público
*/

#include "bibliotecaVisuinoV1.h"
#include "Arduino.h"

void LED (int connector, int selectedLED, bool statusOn) {
	switch (connector) {
		case C1:
			if (selectedLED == 'A') {
				pinMode(analogPinC1, OUTPUT);
				if (statusOn == 1 || statusOn == true)
					digitalWrite(analogPinC1, HIGH);  
				else
					digitalWrite(analogPinC1, LOW);  
			}       
			else {
				pinMode(digitalPinC1, OUTPUT);
				if (statusOn == 1 || statusOn == true)
					digitalWrite(digitalPinC1, HIGH);  
				else
					digitalWrite(digitalPinC1, LOW); 
			}
			break;  

		case C2:
			if (selectedLED == 'A') {
				pinMode(analogPinC2, OUTPUT);
				if (statusOn == 1 || statusOn == true)
					digitalWrite(analogPinC2, HIGH);  
				else
					digitalWrite(analogPinC2, LOW);  
			}       
			else {
				pinMode(digitalPinC2, OUTPUT);
				if (statusOn == 1 || statusOn == true)
					digitalWrite(digitalPinC2, HIGH);  
				else
					digitalWrite(digitalPinC2, LOW); 
			}
			break;  

		case C3:
			if (selectedLED == 'A') {
				pinMode(analogPinC3, OUTPUT);
				if (statusOn == 1 || statusOn == true)
					digitalWrite(analogPinC3, HIGH);  
				else
					digitalWrite(analogPinC3, LOW);  
			}       
			else {
				pinMode(digitalPinC3, OUTPUT);
				if (statusOn == 1 || statusOn == true)
					digitalWrite(digitalPinC3, HIGH);  
				else
					digitalWrite(digitalPinC3, LOW); 
			}
			break; 

		case C4:
			if (selectedLED == 'A') {
				pinMode(analogPinC4, OUTPUT);
				if (statusOn == 1 || statusOn == true)
					digitalWrite(analogPinC4, HIGH);  
				else
					digitalWrite(analogPinC4, LOW);  
			}       
			else {
				pinMode(digitalPinC4, OUTPUT);
				if (statusOn == 1 || statusOn == true)
					digitalWrite(digitalPinC4, HIGH);  
				else
					digitalWrite(digitalPinC4, LOW); 
			}
			break;
			
		case C5:
			if (selectedLED == 'A') {
				pinMode(analogPinC5, OUTPUT);
				if (statusOn == 1 || statusOn == true)
					digitalWrite(analogPinC5, HIGH);  
				else
					digitalWrite(analogPinC5, LOW);  
			}       
			else {
				pinMode(digitalPinC5, OUTPUT);
				if (statusOn == 1 || statusOn == true)
					digitalWrite(digitalPinC5, HIGH);  
				else
					digitalWrite(digitalPinC5, LOW); 
			}
			break; 
	   
		case C6:
			if (selectedLED == 'A') {
				pinMode(analogPinC6, OUTPUT);
				if (statusOn == 1 || statusOn == true)
					digitalWrite(analogPinC6, HIGH);  
				else
					digitalWrite(analogPinC6, LOW);  
			}       
			else {
				pinMode(digitalPinC6, OUTPUT);
				if (statusOn == 1 || statusOn == true)
					digitalWrite(digitalPinC6, HIGH);  
				else
					digitalWrite(digitalPinC6, LOW); 
			}
			break;
	}    
}

bool pushbutton (int connector, int selectedButton) {
	switch(connector) {
		case C1:
			if (selectedButton == 'A') {
				pinMode(analogPinC1, INPUT);
				return(digitalRead(analogPinC1));
			}
			else {
				pinMode(digitalPinC1, INPUT);
				return(digitalRead(digitalPinC1));
			}
			break;

		case C2:
			if (selectedButton == 'A') {
				pinMode(analogPinC2, INPUT);
				return(digitalRead(analogPinC2));
			}
			else {
				pinMode(digitalPinC2, INPUT);
				return(digitalRead(digitalPinC2));
			}
			break;

		case C3:
			if (selectedButton == 'A') {
				pinMode(analogPinC3, INPUT);
				return(digitalRead(analogPinC3));
			}
			else {
				pinMode(digitalPinC3, INPUT);
				return(digitalRead(digitalPinC3));
			}
			break;
			
		case C4: 
			if (selectedButton == 'A') {
				pinMode(analogPinC4, INPUT);
				return(digitalRead(analogPinC4));
			}
			else {
				pinMode(digitalPinC4, INPUT);
				return(digitalRead(digitalPinC4));
			}
			break;

		case C5:
			if (selectedButton == 'A') {
				pinMode(analogPinC5, INPUT);
				return(digitalRead(analogPinC5));
			}
			else {
				pinMode(digitalPinC5, INPUT);
				return(digitalRead(digitalPinC5));
			}
			break;

		case C6:
			if (selectedButton == 'A') {
				pinMode(analogPinC6, INPUT);
				return(digitalRead(analogPinC6));
			}
			else {
				pinMode(digitalPinC6, INPUT);
				return(digitalRead(digitalPinC6));
			}
			break;
	}
	return false;
}

bool limit_switch (int connector) {
	switch(connector) {
		case C1:
			pinMode(digitalPinC1, INPUT);
			return(digitalRead(digitalPinC1));
			break;

		case C2:
			pinMode(digitalPinC2, INPUT);
			return(digitalRead(digitalPinC2));
			break;

		case C3:
			pinMode(digitalPinC3, INPUT);
			return(digitalRead(digitalPinC3));
			break;
			
		case C4: 
			pinMode(digitalPinC4, INPUT);
			return(digitalRead(digitalPinC4));
			break;

		case C5:
			pinMode(digitalPinC5, INPUT);
			return(digitalRead(digitalPinC5));
			break;

		case C6:
			pinMode(digitalPinC6, INPUT);
			return(digitalRead(digitalPinC6));
			break;
	}
	return false;
}

int potentiomenter_sensor (int connector) {
	switch(connector) { 
		case C1:
			pinMode(digitalPinC1, OUTPUT);
			digitalWrite(digitalPinC1, HIGH);
			return(analogRead (analogPinC1));
			break;
		
		case C2:
			pinMode(digitalPinC2, OUTPUT);
			digitalWrite(digitalPinC2, HIGH);
			return(analogRead (analogPinC2));
			break;
	 
		case C3:
			pinMode(digitalPinC3, OUTPUT);
			digitalWrite(digitalPinC3, HIGH);
			return(analogRead (analogPinC3));
			break;
	  
		case C4:
			pinMode(digitalPinC4, OUTPUT);
			digitalWrite(digitalPinC4, HIGH);
			return(analogRead (analogPinC4));
			break;
			
		case C5:
			pinMode(digitalPinC5, OUTPUT);
			digitalWrite(digitalPinC5, HIGH);
			return(analogRead (analogPinC5));
			break;
	  
		case C6:
			pinMode(digitalPinC6, OUTPUT);
			digitalWrite(digitalPinC6, HIGH);
			return(analogRead (analogPinC6));
			break;
	}
	return -1;
}

int temperature_sensor (int connector) {
	switch(connector) { 
		case C1:
			return(analogRead(analogPinC1));
			break;

		case C2:
			return(analogRead(analogPinC2));
			break;

		case C3:
			return(analogRead(analogPinC3));
			break;
	  
		case C4:
			return(analogRead(analogPinC4));
			break;
	  
		case C5:
			return(analogRead(analogPinC5));
			break;
	  
		case C	6:
			return(analogRead(analogPinC6));
			break;
	}
	return -1;
}

void buzzer (int connector, int frequency, int time) {
	switch (connector){
		case 1:
			pinMode(digitalPinC1, OUTPUT);
            tone(digitalPinC1,frequency,time);   
			break;
  
		case 2:
			pinMode(digitalPinC2, OUTPUT);
            tone(digitalPinC2,frequency,time);   
			break;
			
		case 3:
			pinMode(digitalPinC3, OUTPUT);
            tone(digitalPinC3,frequency,time);   
			break;
      
		case 4:
			pinMode(digitalPinC4, OUTPUT);
            tone(digitalPinC4,frequency,time);   
			break;
      
		case 5:
			pinMode(digitalPinC5, OUTPUT);
            tone(digitalPinC5,frequency,time);   
			break;
			
		case 6:
			pinMode(digitalPinC6, OUTPUT);
            tone(digitalPinC6,frequency,time);   
			break;
	}    
}

int soundsensor (int connector) {
	switch(connector) { 
		case C1:
			pinMode(digitalPinC1, OUTPUT);
			digitalWrite(digitalPinC1, HIGH);
			return(analogRead (analogPinC1));
			break;

		case C2:
			pinMode(digitalPinC2, OUTPUT);
			digitalWrite(digitalPinC2, HIGH);
			return(analogRead (analogPinC2));
			break;

		case C3:
			pinMode(digitalPinC3, OUTPUT);
			digitalWrite(digitalPinC3, HIGH);
			return(analogRead (analogPinC3));
			break;

		case C4:
			pinMode(digitalPinC4, OUTPUT);
			digitalWrite(digitalPinC4, HIGH);
			return(analogRead (analogPinC4));
			break;

		case C5:
			pinMode(digitalPinC5, OUTPUT);
			digitalWrite(digitalPinC5, HIGH);
			return(analogRead (analogPinC5));
			break;

		case C6:
			pinMode(digitalPinC6, OUTPUT);
			digitalWrite(digitalPinC6, HIGH);
			return(analogRead (analogPinC6));
			break;
	}
	
	return -1;
}

void IR_emitter (int connector, int frequency) {
	
}

bool IR_receiver (int connector) {
	return false;
}

void LDR_emitter (int connector, bool statusOn) {
	switch (connector) {
		case C1:
			pinMode(digitalPinC1, OUTPUT);
			if (statusOn == 1 || statusOn == true)
				digitalWrite(digitalPinC1, HIGH);  
			else
				digitalWrite(digitalPinC1, LOW); 
			break;  

		case C2:
			pinMode(digitalPinC2, OUTPUT);
			if (statusOn == 1 || statusOn == true)
				digitalWrite(digitalPinC2, HIGH);  
			else
				digitalWrite(digitalPinC2, LOW); 
			break;  

		case C3:
			pinMode(digitalPinC3, OUTPUT);
			if (statusOn == 1 || statusOn == true)
				digitalWrite(digitalPinC3, HIGH);  
			else
				digitalWrite(digitalPinC3, LOW); 
			break;  

		case C4:
			pinMode(digitalPinC4, OUTPUT);
			if (statusOn == 1 || statusOn == true)
				digitalWrite(digitalPinC4, HIGH);  
			else
				digitalWrite(digitalPinC4, LOW); 
			break;  
			
		case C5:
			pinMode(digitalPinC5, OUTPUT);
			if (statusOn == 1 || statusOn == true)
				digitalWrite(digitalPinC5, HIGH);  
			else
				digitalWrite(digitalPinC5, LOW); 
			break;  
	   
		case C6:
			pinMode(digitalPinC6, OUTPUT);
			if (statusOn == 1 || statusOn == true)
				digitalWrite(digitalPinC6, HIGH);  
			else
				digitalWrite(digitalPinC6, LOW); 
			break;  
	}
}

int LDR_receiver (int connector) {
	switch(connector) { 
		case C1:
			return(analogRead(analogPinC1));
			break;

		case C2:
			return(analogRead(analogPinC2));
			break;

		case C3:
			return(analogRead(analogPinC3));
			break;
	  
		case C4:
			return(analogRead(analogPinC4));
			break;
	  
		case C5:
			return(analogRead(analogPinC5));
			break;
	  
		case C6:
			return(analogRead(analogPinC6));
			break;
	}
	return -1;
}

void servo (int servoPort, int velocity) {
	velocity = ((9*velocity)/10)+90;
	Servo selectedServo;
	switch(servoPort) {
		case 1:
		    selectedServo.attach(pinServo1);
			selectedServo.write(velocity);
			break;
   
		case 2:
		    selectedServo.attach(pinServo2);
			selectedServo.write(velocity);
			break;
		   
		case 3:
		    selectedServo.attach(pinServo3);
			selectedServo.write(velocity);
			break;
   
		case 4:
		    selectedServo.attach(pinServo4);
			selectedServo.write(velocity);
			break;
	}
}
