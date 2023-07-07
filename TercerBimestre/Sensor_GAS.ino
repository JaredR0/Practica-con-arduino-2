/*
  Fundación Kinal Centro Educativo Técnico Labral Kinal
  Grado:   Quinto Electrónica
  Sección: A
  Curso:   Taller de Electrónica Digital y Reparación de Computadoras I
  Nombre:  Jared Hernan Ruiz Anleu
  Carné:   2022011
  Proyecto: Practica #5
*/
#include <LedControl.h>
#include <Ticker.h>

#define dataPin0   12
#define dataClock0 11
#define dataLoad0  10

int MQ = 14;

void Fuegos();
void Copo();
void MQ2(void);

int lectura;
int Valuacion;

Ticker Medicion(MQ2,5000);
LedControl MATRIX = LedControl(dataPin0,dataClock0,dataLoad0,1);


byte Fuego[8]= {
  B00001000,
  B00011000,
  B00100100,
  B01000010,
  B01011010,
  B01111110,
  B01111110,
  B00111100
};
byte Fuego1[8]= {
  B00001010,
  B00011101,
  B00100100,
  B01001010,
  B01011010,
  B01111110,
  B01111110,
  B00111100
};


byte COPO[8]= {
  B10100101,
  B01000010,
  B10100101,
  B00011000,
  B00011000,
  B10100101,
  B01000010,
  B10100101
};
unsigned long update_delay = 500;

int display_number(unsigned char number); 
int display_number1(unsigned char number1);

void setup() {
  Serial.begin(9600);
  MATRIX.shutdown(0,false);
  MATRIX.setIntensity(0,15);
  MATRIX.clearDisplay(0);
  Medicion.start();
  pinMode(MQ,INPUT);
}

void loop() {
   Medicion.update();
   if(lectura > 50){
    Fuegos();
   }else{
    Copo();
   }
}
void MQ2(){
  int inter= 0;
  for(int i = 0; i< 5; i++){
  Valuacion = map(analogRead(MQ),0,1023,0,100);
  inter = inter + Valuacion;
  delay(100);
  }
  lectura = inter/6;
  Serial.println(Valuacion);
  
  }

void Fuegos(){
  for(int i =0; i<2;i++){
    display_number(i);
    delay(update_delay);
  } 
}

int display_number(unsigned char number){
  switch (number)
  {
    case(0):
   {
     for(int i=0; i<8;i++){
      MATRIX.setRow(0,i,Fuego[i]); 
     }
     break;
   }
   case(1):
   {
     for(int i=0; i<8;i++){
      MATRIX.setRow(0,i,Fuego1[i]); 
     }
     break;
   }
   
  }
}
void Copo(){
  for(int i =0; i<1;i++){
    display_number1(i);
    delay(update_delay);
  } 
}

int display_number1(unsigned char number1){
  switch (number1)
  {
    case(0):
   {
     for(int i=0; i<8;i++){
      MATRIX.setRow(0,i,COPO[i]); 
     }
     break;
   }
  }
}
