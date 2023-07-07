#include <LedControl.h>

#define dataPin0   12
#define dataClock0 11
#define dataLoad0  10

int MQ = 14;

void Fuegos();
void Copo();
void MQ2(void);

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
  B11111111,
  B11111111,
  B11000011,
  B11000011,
  B11000011,
  B11000011,
  B11111111,
  B11111111
};
byte T[8]= {
  B11111111,
  B11111111,
  B00011000,
  B00011000,
  B00011000,
  B00011000,
  B00011000,
  B00011000
};
byte R[8]= {
  B11111110,
  B11111110,
  B11000110,
  B11000110,
  B11111110,
  B11111000,
  B11011100,
  B11001110
};
byte A[8]= {
  B00111100,
  B01100110,
  B11000011,
  B11000011,
  B11111111,
  B11111111,
  B11000011,
  B11000011
};
byte N[8]= {
  B11100011,
  B11110011,
  B11110011,
  B11011011,
  B11011011,
  B11001111,
  B11001111,
  B11000111
};
byte Q[8]= {
  B00000000,
  B01111110,
  B01100110,
  B01100110,
  B01100110,
  B01101110,
  B01111110,
  B00000010
};
byte I[8]= {
  B00011000,
  B00011000,
  B00000000,
  B00011000,
  B00011000,
  B00011000,
  B00011000,
  B00011000
};
byte COPO[8]= {
  B01001010,
  B11010011,
  B01111110,
  B00111000,
  B00011100,
  B01111110,
  B11001011,
  B01010010
};
unsigned long update_delay = 500;
int display_number(unsigned char number); 
int display_number1(unsigned char number1);

void setup() {
  Serial.begin(9600);
  MATRIX.shutdown(0,false);
  MATRIX.setIntensity(0,15);
  MATRIX.clearDisplay(0);

  pinMode(MQ,INPUT);
}

void loop() {
   MQ2();
}
void MQ2(){
  int Evaluacion = analogRead(MQ);
  if (Evaluacion > 175) {
    Serial.println("presencia Gas");
    Fuegos();
    delay(5000);
  }
  else if (Evaluacion < 175){
    Serial.println("no presencia");
    Copo();
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
  return 0;
}
void Copo(){
  for(int i =0; i<8;i++){
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
      MATRIX.setRow(0,i,T[i]); 
     }
     break;
   }
   case(1):
   {
     for(int i=0; i<8;i++){
      MATRIX.setRow(0,i,R[i]); 
     }
     break;
   }
   case(2):
   {
     for(int i=0; i<8;i++){
      MATRIX.setRow(0,i,A[i]); 
     }
     break;
   }
   case(3):
   {
     for(int i=0; i<8;i++){
      MATRIX.setRow(0,i,N[i]); 
     }
     break;
   }
   case(4):
   {
     for(int i=0; i<8;i++){
      MATRIX.setRow(0,i,Q[i]); 
     }
     break;
   }
   case(5):
   {
     for(int i=0; i<8;i++){
      MATRIX.setRow(0,i,U[i]); 
     }
     break;
   }
   case(6):
   {
     for(int i=0; i<8;i++){
      MATRIX.setRow(0,i,I[i]); 
     }
     break;
   }
   case(7):
   {
     for(int i=0; i<8;i++){
      MATRIX.setRow(0,i,COPO[i]); 
     }
     break;
   }
  }
  return 0;
}
