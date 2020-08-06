/*******************************************************************************
*
*    Projeto 16 – Sequências de leds acionados por potênciometro
*          (Por Squids Arduino | http://squids.com.br/arduino)
*
*******************************************************************************/

const int potPin = A2;   //constante para definir o pino do potenciometro
const int quantLeds = 2; //quantidade de leds para cada bargraph
 
int ledPinsVerm[] = {6,5};  //pinos onde os leds vermelhos estão conectados
// int ledPinsAzul[] = {11,10,9,8,7};  //pinos onde os leds azuis estão conectados
 
void setup()
{
  for(int i = 0;i<quantLeds;i++)  //configura todos os pinos como saídas
  {
    pinMode(ledPinsVerm[i],OUTPUT);
//    pinMode(ledPinsAzul[i],OUTPUT); 
  } 
}  
 
void loop (){
 
  int valPoten = analogRead(potPin);
  int ledNivel = map(valPoten,0,1023,0,quantLeds);
 
  for(int i = 0;i<quantLeds;i++)
  {
    if(i<ledNivel)
    {
      digitalWrite(ledPinsVerm[i],HIGH);
  //    digitalWrite(ledPinsAzul[i],HIGH);
    }
    else
    {
      digitalWrite(ledPinsVerm[i],LOW);
    //  digitalWrite(ledPinsAzul[i],LOW);
    }
  }
}
