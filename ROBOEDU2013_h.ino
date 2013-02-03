/*
   ROBOEDU_2013.h
   Biblioteca de componentes para o kit de robótica ROBOEDU-2013


   Esse código é de domínio público
*/

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

# define digitalPinE1 4 
# define digitalPinE2 2
# define digitalPinE3 7
# define digitalPinE4 3
# define digitalPinE5 5
# define digitalPinE6 8

# define analogPinE1 2
# define analogPinE2 5
# define analogPinE3 1
# define analogPinE4 3
# define analogPinE5 4
# define analogPinE6 0

// As pinagens de saída estão definidas como

# define pinSaida1 10
# define pinSaida2 6
# define pinSaida3 9
# define pinSaida4 11

int botao (int entrada);
int potenciomentro (int entrada);

int ligaLED(int entrada){
  switch (entrada){
    case 1:
      pinMode(pinSaida1,OUTPUT);
      digitalWrite(pinSaida1,HIGH);
      break;
    case 2:
      pinMode(pinSaida2,OUTPUT);
      digitalWrite(pinSaida2,HIGH);
      break;
    case 3:
      pinMode(pinSaida3,OUTPUT);
      digitalWrite(pinSaida3,HIGH);
      break;
    case 4:
      pinMode(pinSaida4,OUTPUT);
      digitalWrite(pinSaida4,HIGH);
      break;
  }
}

int desligaLED(int entrada){
  switch (entrada){
    case 1:
      pinMode(pinSaida1,OUTPUT);
      digitalWrite(pinSaida1,LOW);
      break;
    case 2:
      pinMode(pinSaida2,OUTPUT);
      digitalWrite(pinSaida2,LOW);
      break;
    case 3:
      pinMode(pinSaida3,OUTPUT);
      digitalWrite(pinSaida3,LOW);
      break;
    case 4:
      pinMode(pinSaida4,OUTPUT);
      digitalWrite(pinSaida4,LOW);
      break;
  }
}
