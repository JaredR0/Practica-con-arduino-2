/*
   Fundacion Kinal
   Centro educativo tecnico laboral Kinal
   Quinto perito
   Quinto electronica
   Codigo Tecnico: EB5AM / EB5AV 
   Curso: Taller de electronica digital y reparacion de computadoras I
   Proyecto: Buzzer 
   Dev: Profe. Alejandro Lopez Navas
   Fecha: 14 de abril
*/
int BUZZER = 11; // definimos el pin al que conectaremos el buzzer.

int disparo = 2;//definimos el pin al que conectaremos el trigger 
int receptor = 3;//definimos el pin al que conetaremos el echo 

int a=440;    //1
int b=466;    //2
int c=261;    //3
int d=294;    //4
int e=329;    //5
int f=349;    //6
int g=391;    //7
int aS=455;   //8
int gS=415;   //9
int aH=880;   //10
int cH=523;   //11
int dH=587;   //12
int eH=659;   //13
int fH=698;   //14
int gH=783;   //15
int cSH=554;  //16
int dSH=622;  //17
int fSH=740;  //18
int gSH=830;  //19
//se toca en ese orden

long sensor;
long distancia; //variables para saber ditancia 

void setup()    
{    
  pinMode(BUZZER, OUTPUT); // definimos la variable BUZZER como una salida.
  pinMode(disparo, OUTPUT);//definimos la variable disparo como una salida
  pinMode(receptor,INPUT);//definimos la variable receptro como una entrada
}    
     
void loop()   
{ 
  digitalWrite(2,HIGH);
  delayMicroseconds(5);
  digitalWrite(2,LOW);  
  sensor = pulseIn(3,HIGH);
  distancia = sensor/59;

  if(distancia == 1){
    tone(BUZZER, a, 500);
    delay(100);
  }
  if(distancia == 4){
    tone(BUZZER, b, 125); 
    delay(100); 
  }
  if(distancia == 8){
    tone(BUZZER, c, 125); 
    delay(100); 
  }
  if(distancia == 12){
     tone(BUZZER, d, 125);
     delay(100);
  }
  if(distancia == 16){
    tone(BUZZER, e, 500);
    delay(100);
  }
  if(distancia == 20){
    tone(BUZZER, f, 375);  
    delay(100);  
  }
  if(distancia == 24){
    tone(BUZZER, g, 400);  
    delay(100);  
  }
  if(distancia == 28){
    tone(BUZZER, aS, 250);
    delay(100); 
  }
  if(distancia == 32){
    tone(BUZZER, gS, 500);
    delay(100);
  }
  if(distancia == 36){
    tone(BUZZER, aH, 500);
    delay(100);
  }
  if(distancia == 40){
    tone(BUZZER, cH, 125); 
    delay(100); 
  }
  if(distancia == 44){
    tone(BUZZER, dH, 250);  
    delay(100);  
  }
  if(distancia == 48){
    tone(BUZZER, eH, 500); 
    delay(100);  
  }
  if(distancia == 52){
    tone(BUZZER, fH, 125);  
    delay(100);  
  }
  if(distancia == 56){
    tone(BUZZER, gH, 250);
    delay(100); 
  }
  if(distancia == 60){
    tone(BUZZER, cSH, 250);
    delay(100);  
  }
  if(distancia == 64){
    tone(BUZZER, dSH, 500);  
    delay(100);  
  }
  if(distancia == 68){
    tone(BUZZER, fSH, 250);
    delay(100);  
  }
  if(distancia == 72){
    tone(BUZZER, gSH, 250);
    delay(100);  
  }
  }  
