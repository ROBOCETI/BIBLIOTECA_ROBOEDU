/*
   ROBOEDU_2013.h
   Biblioteca de componentes para o kit de robótica ROBOEDU-2013


   Esse código é de domínio público
*/


#include "bibliotecaVisuinoV2.h"
#include "Arduino.h"

//---------- LED ---------------

LED::LED(int port)
{
  if(port > 0 && port < 7)
	{
		__port = port;
		switch(port)
		{
			case 1:
				__analogPin = analogPinE1;
				__digitalPin = digitalPinE1;
				break;
			case 2:
				__analogPin = analogPinE2;
				__digitalPin = digitalPinE2;
				break;
			case 3:
				__analogPin = analogPinE3;
				__digitalPin = digitalPinE3;
				break;
			case 4:
				__analogPin = analogPinE4;
				__digitalPin = digitalPinE4;
				break;
			case 5:
				__analogPin = analogPinE5;
				__digitalPin = digitalPinE5;
				break;
			case 6:
				__analogPin = analogPinE6;
				__digitalPin = digitalPinE6;
				break;
			pinMode(__digitalPin, OUTPUT);
		}
		Serial.print("LED na porta ");
		Serial.print(port);
		Serial.println(" configurado com sucesso");
	}
	else
	{
		delete this;
	}
}

LED::~LED()
{
	delete this;
}

void LED::ligar()
{
	digitalWrite(__digitalPin,HIGH);
	Serial.print("LED na porta ");
	Serial.print(__port);
	Serial.println(" ligado!");
}

void LED::desligar()
{
	digitalWrite(__digitalPin,LOW);
	Serial.print("LED na porta ");
	Serial.print(__port);
	Serial.println(" desligado!");
}


//---------- BUZZER -------------

BUZZER::BUZZER(int port)
{
	if(port > 0 && port < 7)
	{
		__port = port;
		switch(port)
		{
			case 1:
				__analogPin = analogPinE1;
				__digitalPin = digitalPinE1;
				break;
			case 2:
				__analogPin = analogPinE2;
				__digitalPin = digitalPinE2;
				break;
			case 3:
				__analogPin = analogPinE3;
				__digitalPin = digitalPinE3;
				break;
			case 4:
				__analogPin = analogPinE4;
				__digitalPin = digitalPinE4;
				break;
			case 5:
				__analogPin = analogPinE5;
				__digitalPin = digitalPinE5;
				break;
			case 6:
				__analogPin = analogPinE6;
				__digitalPin = digitalPinE6;
				break;
			pinMode(__digitalPin, OUTPUT);
		}
		Serial.print("Buzzer na porta ");
		Serial.print(port);
		Serial.println(" configurado com sucesso");
	}
	else
	{
		delete this;
	}
}

BUZZER::~BUZZER()
{
	delete this;
}

void BUZZER::emiteSom(int frequencia, int tempo)
{
	Serial.print("Buzzer na porta ");
	Serial.print(__port);
	Serial.print(" ligado na frequência ");
    Serial.print(frequencia);
    Serial.print(" por ");
    Serial.print(tempo);
    Serial.println(" milissegundos");
	tone(__digitalPin,frequencia,tempo);
}

//-------------- BOTAO ----------------

BOTAO::BOTAO(int port)
{
	if(port > 0 && port < 7)
	{
		__port = port;
		switch(port)
		{
			case 1:
				__analogPin = analogPinE1;
				__digitalPin = digitalPinE1;
				break;
			case 2:
				__analogPin = analogPinE2;
				__digitalPin = digitalPinE2;
				break;
			case 3:
				__analogPin = analogPinE3;
				__digitalPin = digitalPinE3;
				break;
			case 4:
				__analogPin = analogPinE4;
				__digitalPin = digitalPinE4;
				break;
			case 5:
				__analogPin = analogPinE5;
				__digitalPin = digitalPinE5;
				break;
			case 6:
				__analogPin = analogPinE6;
				__digitalPin = digitalPinE6;
				break;
			pinMode(__digitalPin, INPUT);
		}
		Serial.print("Botao na porta ");
		Serial.print(port);
		Serial.println(" configurado com sucesso");
	}
	else
	{
		delete this;
	}
}

BOTAO::~BOTAO()
{
	delete this;
}

int BOTAO::lerBotao()
{
	int estadoBotao = digitalRead(__digitalPin);
	if (estadoBotao == HIGH)
		Serial.println("Botão pressionado; Retorno = 1");
	else
		Serial.println("Botão solto; Retorno = 0");
	return estadoBotao;
}

//-------- POTECIOMETRO ----------

POTENCIOMETRO::POTENCIOMETRO(int port)
{
	if(port > 0 && port < 7)
	{
		__port = port;
		switch(port)
		{
			case 1:
				__analogPin = analogPinE1;
				__digitalPin = digitalPinE1;
				break;
			case 2:
				__analogPin = analogPinE2;
				__digitalPin = digitalPinE2;
				break;
			case 3:
				__analogPin = analogPinE3;
				__digitalPin = digitalPinE3;
				break;
			case 4:
				__analogPin = analogPinE4;
				__digitalPin = digitalPinE4;
				break;
			case 5:
				__analogPin = analogPinE5;
				__digitalPin = digitalPinE5;
				break;
			case 6:
				__analogPin = analogPinE6;
				__digitalPin = digitalPinE6;
				break;
			pinMode(__digitalPin, INPUT);
		}
		Serial.print("Potenciometro na porta ");
		Serial.print(port);
		Serial.println(" configurado com sucesso");
	}
	else
	{
		delete this;
	}
}

POTENCIOMETRO::~POTENCIOMETRO()
{
	delete this;
}

int POTENCIOMETRO::lerPotenciometro()
{
	int valorPot = analogRead(__analogPin);
	Serial.print("Valor lido do Potenciometro: ");
	Serial.println(valorPot);
	return valorPot;
}

//-------------- BOTAO ----------------

SWITCH::SWITCH(int port)
{
	if(port > 0 && port < 7)
	{
		__port = port;
		switch(port)
		{
			case 1:
				__analogPin = analogPinE1;
				__digitalPin = digitalPinE1;
				break;
			case 2:
				__analogPin = analogPinE2;
				__digitalPin = digitalPinE2;
				break;
			case 3:
				__analogPin = analogPinE3;
				__digitalPin = digitalPinE3;
				break;
			case 4:
				__analogPin = analogPinE4;
				__digitalPin = digitalPinE4;
				break;
			case 5:
				__analogPin = analogPinE5;
				__digitalPin = digitalPinE5;
				break;
			case 6:
				__analogPin = analogPinE6;
				__digitalPin = digitalPinE6;
				break;
			pinMode(__digitalPin, INPUT);
		}
		Serial.print("Botao na porta ");
		Serial.print(port);
		Serial.println(" configurado com sucesso");
	}
	else
	{
		delete this;
	}
}

SWITCH::~SWITCH()
{
	delete this;
}

int SWITCH::lerSwitch()
{
	int estadoSwitch = digitalRead(__digitalPin);
	if (estadoSwitch == HIGH)
		Serial.println("Switch pressionado; Retorno = 1");
	else
		Serial.println("Switch solto; Retorno = 0");
	return estadoSwitch;
}

//-------- SENSOR DE LUZ ----------

SENSOR_LUZ::SENSOR_LUZ(int port)
{
	if(port > 0 && port < 7)
	{
		__port = port;
		switch(port)
		{
			case 1:
				__analogPin = analogPinE1;
				__digitalPin = digitalPinE1;
				break;
			case 2:
				__analogPin = analogPinE2;
				__digitalPin = digitalPinE2;
				break;
			case 3:
				__analogPin = analogPinE3;
				__digitalPin = digitalPinE3;
				break;
			case 4:
				__analogPin = analogPinE4;
				__digitalPin = digitalPinE4;
				break;
			case 5:
				__analogPin = analogPinE5;
				__digitalPin = digitalPinE5;
				break;
			case 6:
				__analogPin = analogPinE6;
				__digitalPin = digitalPinE6;
				break;
			pinMode(__digitalPin, OUTPUT);
		}
		Serial.print("Sensor de luz na porta ");
		Serial.print(port);
		Serial.println(" configurado com sucesso");
	}
	else
	{
		delete this;
	}
}

SENSOR_LUZ::~SENSOR_LUZ()
{
	delete this;
}

int SENSOR_LUZ::lerSensorLuz()
{
	int valorLido = analogRead(__analogPin);
	Serial.print("Valor lido do sensor de luz: ");
	Serial.println(valorLido);
	return valorLido;
}

int SENSOR_LUZ::lerSensorLuz(int valorMinimo)
{
	int valorLido = analogRead(__analogPin);
	if(valorLido <= val
	{
		Serial.print("Valor lido ");
		Serial.print(valorLido);
		Serial.print(" abaixo do limite mínimo estipulado ");
		Serial.print(valorMinimo);
		Serial.println(". Ligando LED e reverificando valor lido pelo sensor");
		digitalWrite(__digitalPin, HIGH);
		valorLido = analogRead(__analogPin);	
	}
	Serial.print("Valor final lido do sensor de luz: ");
	Serial.println(valorLido);
	return valorLido;
}

//-------- TEMPERATURA ----------

TEMPERATURA::TEMPERATURA(int port)
{
	if(port > 0 && port < 7)
	{
		__port = port;
		switch(port)
		{
			case 1:
				__analogPin = analogPinE1;
				__digitalPin = digitalPinE1;
				break;
			case 2:
				__analogPin = analogPinE2;
				__digitalPin = digitalPinE2;
				break;
			case 3:
				__analogPin = analogPinE3;
				__digitalPin = digitalPinE3;
				break;
			case 4:
				__analogPin = analogPinE4;
				__digitalPin = digitalPinE4;
				break;
			case 5:
				__analogPin = analogPinE5;
				__digitalPin = digitalPinE5;
				break;
			case 6:
				__analogPin = analogPinE6;
				__digitalPin = digitalPinE6;
				break;
			pinMode(__digitalPin, OUTPUT);
		}
		Serial.print("Sensor de luz na porta ");
		Serial.print(port);
		Serial.println(" configurado com sucesso");
	}
	else
	{
		delete this;
	}
}

TEMPERATURA::~TEMPERATURA()
{
	delete this;
}

float TEMPERATURA::lerTemperatura()
{
	float valorLido = analogRead(analogPinE3);
	valorLido = formatTemperatureCelsius(valorLido);
	Serial.print("Temperatura lida: ");
	Serial.print(valorLido);
	Serial.println("°C");
	return valorLido;
}

float TEMPERATURA::formatTemperatureCelsius(int value)
{
	int celsius = (5.0 * float(value) * 100.0)/1024.0;
	return celsius;
}

//---------------------------------------
//------ FUNÇÕES DO SENSOR CO-MQ7 -------
//---------------------------------------
/*
CS_MQ7::CS_MQ7(int CoTogPin, int CoIndicatorPin){

	pinMode(CoIndicatorPin, OUTPUT);
	pinMode(CoTogPin, OUTPUT);
	
	_CoIndicatorPin = CoIndicatorPin;
	_CoTogPin = CoTogPin;
	
	time = 0;
	currTime = 0;
	prevTime = 0;
	currCoPwrTimer = 0;
	CoPwrState = LOW;
  	currCoPwrTimer = 500;
	
	}

void CS_MQ7::CoPwrCycler(){
  
  currTime = millis();
   
  if (currTime - prevTime > currCoPwrTimer){
    prevTime = currTime;
    
    if(CoPwrState == LOW){
      CoPwrState = HIGH;
      currCoPwrTimer = 60000;  //60 seconds at 5v
    }
    else{
      CoPwrState = LOW;
      currCoPwrTimer = 90000;  //90 seconds at 1.4v
    }
    digitalWrite(_CoIndicatorPin, CoPwrState);
    digitalWrite(_CoTogPin, CoPwrState);
  }
}

boolean CS_MQ7::CurrentState(){
	
	if(CoPwrState == LOW){
		return false;
	}
	else{
		return true;
	}
}

int lerSensorCO(int entrada)
{
	int CoData;
	int analogPin;
	int digitalPin;
	switch(entrada){
		case 1:
			analogPin = analogPinE1; //analog Pin connected to "out" from sensor board
			digitalPin = digitalPinE1;
			break;
		case 2:
			analogPin = analogPinE2; //analog Pin connected to "out" from sensor board
			digitalPin = digitalPinE2;
			break;
		case 3:
			analogPin = analogPinE3; //analog Pin connected to "out" from sensor board
			digitalPin = digitalPinE3;
			break;
		case 4:
			analogPin = analogPinE4; //analog Pin connected to "out" from sensor board
			digitalPin = digitalPinE4;
			break;
		case 5:
			analogPin = analogPinE5; //analog Pin connected to "out" from sensor board
			digitalPin = digitalPinE5;
			break;
		case 6:
			analogPin = analogPinE6; //analog Pin connected to "out" from sensor board
			digitalPin = digitalPinE6;
			break;
	}
	CS_MQ7 MQ7(digitalPin, 13);
	MQ7.CoPwrCycler();
	if(MQ7.CurrentState() == LOW){   //we are at 1.4v, read sensor data!
		CoData = analogRead(analogPin);
		Serial.println(CoData);
	}
	else{                            //sensor is at 5v, heating time
		Serial.println("sensor heating!");
  }
  return CoData;
}
*/
