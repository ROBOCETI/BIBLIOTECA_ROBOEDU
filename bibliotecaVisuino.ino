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

//---------------------------------------
//---------- FUNÇÕES DE SAÍDA -----------
//---------------------------------------

void led(boolean ligar, int entrada){
  switch (entrada){
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
      break;
    default:
      Serial.println("Entrada inexistente");
      break;
  }
}


// Esta função foi abortada devido aos novos requisitos
// Pode-se reativar ela (ainda não foi modificada para o novo padrão!)
/*
void defineIntensidadeLed(int entrada, int intensidade){
  if (intensidade > 255)
  {
    intensidade = 255;
    Serial.println("Intensidade acima do máximo de 255, ajustando para 255");
  }
  else if(intensidade < 0){
    intensidade = 0;
    Serial.println("Intensidade abaixo do mínimo de 0, ajustando para 0");
  }
  switch (entrada){
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
      Serial.println("Entrada inexistente");
      break;
  }
}*/

void emiteSom(int entrada, int frequencia, int tempo){
    switch (entrada){
    case 1:
      pinMode(pinSaida1,OUTPUT);
      tone(pinSaida1, frequencia);
      Serial.print("Som na frequência ");
      Serial.print(frequencia);
      Serial.print(" por ");
      Serial.print(tempo);
      Serial.println(" milissegundos");
      delay(tempo);
      noTone(pinSaida1);
      break;
    case 2:
      pinMode(pinSaida2,OUTPUT);
      tone(pinSaida2, frequencia);
      Serial.print("Som na frequência ");
      Serial.print(frequencia);
      Serial.print(" por ");
      Serial.print(tempo);
      Serial.println(" milissegundos");
      delay(tempo);
      noTone(pinSaida2);
      break;
    case 3:
      pinMode(pinSaida3,OUTPUT);
      tone(pinSaida3, frequencia);
      Serial.print("Som na frequência ");
      Serial.print(frequencia);
      Serial.print(" por ");
      Serial.print(tempo);
      Serial.println(" milissegundos");
      delay(tempo);
      noTone(pinSaida3);
      break;
    case 4:
      pinMode(pinSaida4,OUTPUT);
      tone(pinSaida4, frequencia);
      Serial.print("Som na frequência ");
      Serial.print(frequencia);
      Serial.print(" por ");
      Serial.print(tempo);
      Serial.println(" milissegundos");
      delay(tempo);
      noTone(pinSaida4);
      break;
    default:
      Serial.println("Entrada inexistente");
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
      if (estadoBotao == HIGH)
        Serial.println("Botão pressionado; Retorno = 1");
      else
        Serial.println("Botão solto; Retorno = 0");
      break;
    case 2:
      pinMode(digitalPinE2,INPUT);
      estadoBotao = digitalRead(digitalPinE2);
      if (estadoBotao == HIGH)
        Serial.println("Botão pressionado; Retorno = 1");
      else
        Serial.println("Botão solto; Retorno = 0");
      break;
    case 3:
      pinMode(digitalPinE3,INPUT);
      estadoBotao = digitalRead(digitalPinE3);
      if (estadoBotao == HIGH)
        Serial.println("Botão pressionado; Retorno = 1");
      else
        Serial.println("Botão solto; Retorno = 0");
      break;
    case 4:
      pinMode(digitalPinE4,INPUT);
      estadoBotao = digitalRead(digitalPinE4);
      if (estadoBotao == HIGH)
        Serial.println("Botão pressionado; Retorno = 1");
      else
        Serial.println("Botão solto; Retorno = 0");
      break;
    case 5:
      pinMode(digitalPinE5,INPUT);
      estadoBotao = digitalRead(digitalPinE5);
      if (estadoBotao == HIGH)
        Serial.println("Botão pressionado; Retorno = 1");
      else
        Serial.println("Botão solto; Retorno = 0");
      break;
    case 6:
      pinMode(digitalPinE6,INPUT);
      estadoBotao = digitalRead(digitalPinE6);
      if (estadoBotao == HIGH)
        Serial.println("Botão pressionado; Retorno = 1");
      else
        Serial.println("Botão solto; Retorno = 0");
      break;
    default:
      Serial.println("Entrada inexistente");
      break;
  }
  return estadoBotao;
}

int lerPotenciometro(int entrada){
  int valorLido;
  switch (entrada){
    case 1:
      valorLido = analogRead(analogPinE1);
      Serial.print("Valor lido do potenciometro: ");
      Serial.println(valorLido);
      break;
    case 2:
      valorLido = analogRead(analogPinE2);
      Serial.print("Valor lido do potenciometro: ");
      Serial.println(valorLido);
      break;
    case 3:
      valorLido = analogRead(analogPinE3);
      Serial.print("Valor lido do potenciometro: ");
      Serial.println(valorLido);
      break;
    case 4:
      valorLido = analogRead(analogPinE4);
      Serial.print("Valor lido do potenciometro: ");
      Serial.println(valorLido);
      break;
    case 5:
      valorLido = analogRead(analogPinE5);
      Serial.print("Valor lido do potenciometro: ");
      Serial.println(valorLido);
      break;
    case 6:
      valorLido = analogRead(analogPinE6);
      Serial.print("Valor lido do potenciometro: ");
      Serial.println(valorLido);
      break;
    default:
      Serial.println("Entrada inexistente");
      break;
  }
  return valorLido;
}

  
