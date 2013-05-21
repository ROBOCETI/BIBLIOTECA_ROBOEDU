
#include "Arduino.h"

// Usando o comando Define para facilitar a programação. Cada entrada da placa será numerada

# define E1 1  
# define E2 2
# define E3 3
# define E4 4
# define E5 5
# define E6 6

// As saídas serão numeradas de 7  a 10

# define S0 7
# define S1 8 
# define S2 9 
# define S3 10

// As pinagens de entrada estão definidas como

# define digitalPinE1 7
# define digitalPinE2 8
# define digitalPinE3 3
# define digitalPinE4 4
# define digitalPinE5 2
# define digitalPinE6 5

# define analogPinE1 1
# define analogPinE2 0
# define analogPinE3 3
# define analogPinE4 2
# define analogPinE5 5
# define analogPinE6 4

// As pinagens de saída estão definidas como

# define pinSaida1 9
# define pinSaida2 6
# define pinSaida3 11
# define pinSaida4 10

//------------- LED ----------------

class LED{
  public:
		LED(int port);
		~LED();
		void ligar();
		void desligar();
	private:
		int __port;
		int __analogPin;
		int __digitalPin;
};

//----------- BUZZER --------------

class BUZZER{
	public:
		BUZZER(int port);
		~BUZZER();
		void emiteSom(int frequencia, int tempo);
	private:
		int __port;
		int __analogPin;
		int __digitalPin;
}

//------------ BOTAO ---------------

class BOTAO{
	public:
		BOTAO(int port);
		~BOTAO();
		int lerBotao();
	private:
		int __port;
		int __analogPin;
		int __digitalPin;
}

//--------- POTENCIOMETRO -----------

class POTENCIOMETRO{
	public:
		POTENCIOMETRO(int port);
		~POTENCIOMETRO();
		int lerPotenciometro();
	private:
		int __port;
		int __analogPin;
		int __digitalPin;
}

//------------ SWITCH ---------------

class SWITCH{
	public:
		SWITCH(int port);
		~SWITCH();
		int lerSwitch();
	private:
		int __port;
		int __analogPin;
		int __digitalPin;
}

//------------ LUZ ---------------

class SENSOR_LUZ{
	public:
		SENSOR_LUZ(int port);
		~SENSOR_LUZ();
		int lerSensorLuz();
		int lerSensorLuz(int valorMinimo);
	private:
		int __port;
		int __analogPin;
		int __digitalPin;
}

//------------ TEMPERATURA ---------------

class TEMPERATURA{
	public:
		TEMPERATURA(int port);
		~TEMPERATURA();
		int lerTemperatura();
	private:
		int __port;
		int __analogPin;
		int __digitalPin;
		float formatTemperatureCelsius(int value);
}


// ------------ SENSOR DE CO-MQ7 -----------------

/*
class CS_MQ7{

	public:
		
		CS_MQ7(int CoTogPin, int CoIndicatorPin);
		void CoPwrCycler();
		boolean CurrentState();
		
		unsigned long time;
		unsigned long currTime;
		unsigned long prevTime;
		unsigned long currCoPwrTimer;

		boolean CoPwrState;
		
	private:
		int _CoIndicatorPin;
		int _CoTogPin;
	
	};

	
int lerSensorCO(int entrada);
*/
