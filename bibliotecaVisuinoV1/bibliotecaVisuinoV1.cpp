/*
   ROBOEDU_2013.h
   Biblioteca de componentes para o kit de robótica ROBOEDU-2013


   Esse código é de domínio público
*/


#include "bibliotecaVisuinoV1.h"
#include "Arduino.h"

//---------------------------------------
//---------- FUNÇÕES DE SAIDA -----------
//---------------------------------------

void led(boolean ligar, int saida){
  switch (saida){
    case 1:
      pinMode(pinSaida1,OUTPUT);
      if (ligar) {
        digitalWrite(pinSaida1,HIGH);
        Serial.println("LED ligado");
      }
      else {
        digitalWrite(pinSaida1,LOW);
        Serial.println("LED desligado");
      }
      Serial.println(pinSaida1);
      break;
    case 2:
      pinMode(pinSaida2,OUTPUT);
      if (ligar) {
        digitalWrite(pinSaida2,HIGH);
        Serial.println("LED ligado");
      }
      else {
        digitalWrite(pinSaida2,LOW);
        Serial.println("LED desligado");
      }
      Serial.println(pinSaida2);
      break;
    case 3:
      pinMode(pinSaida3,OUTPUT);
      if (ligar) {
        digitalWrite(pinSaida3,HIGH);
        Serial.println("LED ligado");
      }
      else {
        digitalWrite(pinSaida3,LOW);
        Serial.println("LED desligado");
      }
      Serial.println(pinSaida3);
      break;
    case 4:
      pinMode(pinSaida4,OUTPUT);
      if (ligar) {
        digitalWrite(pinSaida4,HIGH);
        Serial.println("LED ligado");
      }
      else {
        digitalWrite(pinSaida4,LOW);
        Serial.println("LED desligado");
      }
      Serial.println(pinSaida4);
      break;
    default:
      Serial.println("Saida inexistente");
      break;
  }
}


// Esta função foi abortada devido aos novos requisitos
// Pode-se reativar ela (ainda não foi modificada para o novo padrão!)
/*
void defineIntensidadeLed(int saida, int intensidade){
  if (intensidade > 255)
  {
    intensidade = 255;
    Serial.println("Intensidade acima do máximo de 255, ajustando para 255");
  }
  else if(intensidade < 0){
    intensidade = 0;
    Serial.println("Intensidade abaixo do mínimo de 0, ajustando para 0");
  }
  switch (saida){
    case 1:
      pinMode(pinSaida1,OUTPUT);
      analogWrite(pinSaida1,intensidade);
      Serial.print ("LED ajustado na intensidade: ");
      Serial.println(intensidade);
      break;
    case 2:
      pinMode(pinSaida2,OUTPUT);
      analogWrite(pinSaida2,intensidade);
      Serial.print ("LED ajustado na intensidade: ");
      Serial.println(intensidade);
      break;
    case 3:
      pinMode(pinSaida3,OUTPUT);
      analogWrite(pinSaida3,intensidade);
      Serial.print ("LED ajustado na intensidade: ");
      Serial.println(intensidade);
      break;
    case 4:
      pinMode(pinSaida4,OUTPUT);
      analogWrite(pinSaida4,intensidade);
      Serial.print ("LED ajustado na intensidade: ");
      Serial.println(intensidade);
      break;
    default:
      Serial.println("Saida inexistente");
      break;
  }
}*/

void emiteSom(int saida, int frequencia, int tempo){
    Serial.print("Som na frequência ");
    Serial.print(frequencia);
    Serial.print(" por ");
    Serial.print(tempo);
    Serial.println(" milissegundos");
    switch (saida){
    case 1:
      pinMode(pinSaida1,OUTPUT);
      tone(pinSaida1, frequencia);
      delay(tempo);
      noTone(pinSaida1);
      break;
    case 2:
      pinMode(pinSaida2,OUTPUT);
      tone(pinSaida2, frequencia);
      delay(tempo);
      noTone(pinSaida2);
      break;
    case 3:
      pinMode(pinSaida3,OUTPUT);
      tone(pinSaida3, frequencia);
      delay(tempo);
      noTone(pinSaida3);
      break;
    case 4:
      pinMode(pinSaida4,OUTPUT);
      tone(pinSaida4, frequencia);
      delay(tempo);
      noTone(pinSaida4);
      break;
    default:
      Serial.println("Saida inexistente");
      break;
  }
}

//---------------------------------------
//---------- FUNÇÕES DE ENTRADA ---------
//---------------------------------------

int lerBotao(int entrada){
  int estadoBotao;
  switch (entrada){
    case 1:
      pinMode(digitalPinE1,INPUT);
      estadoBotao = digitalRead(digitalPinE1);
      break;
    case 2:
      pinMode(digitalPinE2,INPUT);
      estadoBotao = digitalRead(digitalPinE2);
      break;
    case 3:
      pinMode(digitalPinE3,INPUT);
      estadoBotao = digitalRead(digitalPinE3);
      break;
    case 4:
      pinMode(digitalPinE4,INPUT);
      estadoBotao = digitalRead(digitalPinE4);
      break;
    case 5:
      pinMode(digitalPinE5,INPUT);
      estadoBotao = digitalRead(digitalPinE5);
      break;
    case 6:
      pinMode(digitalPinE6,INPUT);
      estadoBotao = digitalRead(digitalPinE6);
      break;
    default:
      Serial.println("Entrada inexistente");
    estadoBotao = -1;
      break;
  }
  if (estadoBotao == HIGH)
	Serial.println("Botão pressionado; Retorno = 1");
  else if (estadoBotao == LOW)
	Serial.println("Botão solto; Retorno = 0");
  return estadoBotao;
}

int lerPotenciometro(int entrada){
  int valorLido;
  switch (entrada){
    case 1:
      valorLido = analogRead(analogPinE1);
      break;
    case 2:
      valorLido = analogRead(analogPinE2);
      break;
    case 3:
      valorLido = analogRead(analogPinE3);
      break;
    case 4:
      valorLido = analogRead(analogPinE4);
      break;
    case 5:
      valorLido = analogRead(analogPinE5);
      break;
    case 6:
      valorLido = analogRead(analogPinE6);
      break;
    default:
      Serial.println("ERROR: Entrada inexistente");
	  valorLido = -1;
      break;
  }
  Serial.print("Valor lido do potenciometro: ");
  Serial.println(valorLido);
  return valorLido;
}

int lerFinalCurso(int entrada)
{
  int estadoSensor;
  switch (entrada){
    case 1:
      pinMode(digitalPinE1,INPUT);
      estadoSensor = digitalRead(digitalPinE1);
      break;
    case 2:
      pinMode(digitalPinE2,INPUT);
      estadoSensor = digitalRead(digitalPinE2);
      break;
    case 3:
      pinMode(digitalPinE3,INPUT);
      estadoSensor = digitalRead(digitalPinE3);
      break;
    case 4:
      pinMode(digitalPinE4,INPUT);
      estadoSensor = digitalRead(digitalPinE4);
      break;
    case 5:
      pinMode(digitalPinE5,INPUT);
      estadoSensor = digitalRead(digitalPinE5);
      break;
    case 6:
      pinMode(digitalPinE6,INPUT);
      estadoSensor = digitalRead(digitalPinE6);
      break;
    default:
      Serial.println("ERROR: Entrada inexistente");
	  estadoSensor = -1;
      break;
  }
  if (estadoSensor == HIGH)
    Serial.println("Final de curso; Retorno = 1");
  else if (estadoSensor == LOW)
    Serial.println("Não é final de curso; Retorno = 0");
  return estadoSensor;
}

int lerSensorLuz(int entrada, int valorMinimo)
{
  int valorLido;
  if (valorMinimo > 1023)
  {
	Serial.println("Valor mínimo acima do limite 1023");
	return -1;
  }
  if (valorMinimo < 0)
  {
	Serial.println("Valor mínimo abaixo do limite 0");
	return -1;
  }
  switch (entrada){
    case 1:
      valorLido = analogRead(analogPinE1);
	  pinMode(digitalPinE1, OUTPUT);
	  if (valorLido < valorMinimo)
	  {
		digitalWrite(digitalPinE1,HIGH);
		valorLido = analogRead(analogPinE1);
	  }
	  else
	  {
		pinMode(digitalPinE1,LOW);
	  }
      break;
    case 2:
      valorLido = analogRead(analogPinE2);
	  pinMode(digitalPinE2, OUTPUT);
	  if (valorLido < valorMinimo)
	  {
		digitalWrite(digitalPinE2,HIGH);
		valorLido = analogRead(analogPinE2);
	  }
	  else
	  {
		pinMode(digitalPinE2,LOW);
	  }
      break;
    case 3:
      valorLido = analogRead(analogPinE3);
	  pinMode(digitalPinE3, OUTPUT);
	  if (valorLido < valorMinimo)
	  {
		digitalWrite(digitalPinE3,HIGH);
		valorLido = analogRead(analogPinE3);
	  }
	  else
	  {
		pinMode(digitalPinE3,LOW);
	  }
      break;
    case 4:
      valorLido = analogRead(analogPinE4);
	  pinMode(digitalPinE4, OUTPUT);
	  if (valorLido < valorMinimo)
	  {
		digitalWrite(digitalPinE4,HIGH);
		valorLido = analogRead(analogPinE4);
	  }
	  else
	  {
		pinMode(digitalPinE4,LOW);
	  }
      break;
    case 5:
      valorLido = analogRead(analogPinE5);
	  pinMode(digitalPinE5, OUTPUT);
	  if (valorLido < valorMinimo)
	  {
		digitalWrite(digitalPinE5,HIGH);
		valorLido = analogRead(analogPinE5);
	  }
	  else
	  {
		pinMode(digitalPinE5,LOW);
	  }
      break;
    case 6:
      valorLido = analogRead(analogPinE6);
	  pinMode(digitalPinE6, OUTPUT);
	  if (valorLido < valorMinimo)
	  {
		digitalWrite(digitalPinE6,HIGH);
		valorLido = analogRead(analogPinE6);
	  }
	  else
	  {
		pinMode(digitalPinE6,LOW);
	  }
      break;
    default:
      Serial.println("ERRROR: Entrada inexistente");
	  valorLido = -1;
      break;
  }
  Serial.print("Valor lido do sensor de luz: ");
  Serial.println(valorLido);
  return valorLido;
}

float lerTemperatura(int entrada)
{
  int valorLido;
  switch (entrada){
    case 1:
      valorLido = analogRead(analogPinE1);
      break;
    case 2:
      valorLido = analogRead(analogPinE2);
      break;
    case 3:
      valorLido = analogRead(analogPinE3);
      break;
    case 4:
      valorLido = analogRead(analogPinE4);
      break;
    case 5:
      valorLido = analogRead(analogPinE5);
      break;
    case 6:
      valorLido = analogRead(analogPinE6);
      break;
    default:
      Serial.println("ERROR: Entrada inexistente!!");
	  valorLido = -1;
      break;
  }
  valorLido = formatTemperatureCelsius(valorLido);
  Serial.print("Temperatura lida: ");
  Serial.print(valorLido);
  Serial.println("°C");
  return valorLido;
}

//---------------------------------------
//------ FUNÇÕES DO SENSOR CO-MQ7 -------
//---------------------------------------

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

//---------------------------------------
//---------- FUNÇÕES DE AUXÍLIO ---------
//---------------------------------------

float formatTemperatureCelsius(int value)
{
	int celsius = (5.0 * float(value) * 100.0)/1024.0;
	return celsius;
}
