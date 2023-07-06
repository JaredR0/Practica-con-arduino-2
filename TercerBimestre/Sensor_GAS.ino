/*
 * Fundacion Kinal
 * Centro educativo tecnico laboral Kinal
 * Electronica
 * Grado: Quinto
 * Sección: A
 * Curso: Taller de electronica digital y reparación de computadoras I
 * Nombre: Jared Hernan Ruiz Anleu 
 * Carnet: 2022011
 * Tarea Sensor de Gas con Matriz led 
*/
#include <LedControl.h>
#include <Ticker.h>

#define dataPin0   12
#define dataClock0 11
#define dataLoad0  10

int MQ = 2;

void Fuegos();
void MQ2(void);

LedControl MATRIX = LedControl(dataPin0,dataClock0,dataLoad0,1);
Ticker SENSOR(MQ2,3000);

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

byte F[8]= {
  B11111100,
  B11111100,
  B11000000,
  B11111000,
  B11111000,
  B11000000,
  B11000000,
  B11000000
};

byte U[8]= {
  B11000011,
  B11000011,
  B11000011,
  B11000011,
  B11000011,
  B11000011,
  B11111111,
  B11111111
};

byte E[8]= {
  B11111110,
  B11111110,
  B11000000,
  B11111110,
  B11111110,
  B11000000,
  B11111110,
  B11111110
};

byte G[8]= {
  B11111110,
  B11111110,
  B11000000,
  B11011110,
  B11011110,
  B11000110,
  B11111110,
  B11111110
};
byte O[8]= {
  B01111110,
  B01111110,
  B01100110,
  B01100110,
  B01100110,
  B01100110,
  B01111110,
  B01111110
};

unsigned long update_delay = 500;
int display_number(unsigned char number); 

void setup() {
  Serial.begin(9600);
  MATRIX.shutdown(0,false);
  MATRIX.setIntensity(0,15);
  MATRIX.clearDisplay(0);

  pinMode(MQ,INPUT);
  SENSOR.start();
}

void loop() {
  SENSOR.update();  
}
void MQ2(){
  Serial.println("Detectando...");
  boolean MQ_estado = digitalRead(MQ);
  if(MQ_estado){
    Fuegos();
  }
  else{
    Serial.println("no Gas");
  }
  }

void Fuegos(){
  for(int i =0; i<6;i++){
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
      MATRIX.setRow(0,i,F[i]); 
     }
     break;
   }
   case(1):
   {
     for(int i=0; i<8;i++){
      MATRIX.setRow(0,i,U[i]); 
     }
     break;
   }
   case(2):
   {
     for(int i=0; i<8;i++){
      MATRIX.setRow(0,i,E[i]); 
     }
     break;
   }
   case(3):
   {
     for(int i=0; i<8;i++){
      MATRIX.setRow(0,i,G[i]); 
     }
     break;
   }
   case(4):
   {
     for(int i=0; i<8;i++){
      MATRIX.setRow(0,i,O[i]); 
     }
     break;
   }
   case(5):
   {
     for(int i=0; i<8;i++){
      MATRIX.setRow(0,i,Fuego[i]); 
     }
     break;
   }
  }
}
