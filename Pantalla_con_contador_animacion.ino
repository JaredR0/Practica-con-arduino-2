/*
   Fundacion Kinal
   Centro educativo tecnico laboral Kinal
   Quinto perito
   Quinto electronica
   Codigo Tecnico: EB5AM  
   Curso: Taller de electronica digital y reparacion de computadoras I
   Proyecto: Contador de aforo 
   Nombre: Jared Hernan Ruiz Anleu
   Fecha: 27/04/23
*/
#include <LiquidCrystal.h>


#define disparo  9 //definimos el pin al que conectaremos el trigger 
#define receptor  10 //definimos el pin al que conetaremos el echo 

#define RS  2
#define E   3
#define D4  4
#define D5  5
#define D6  6
#define D7  7

#define BUZZER  11

int contador = 0;
int a=440;

LiquidCrystal LCD_Jared(RS, E, D4, D5, D6, D7);

byte SaltoArriba[] = {
  B01110,
  B01110,
  B01110,
  B10101,
  B11111,
  B00100,
  B01010,
  B01010
};

byte SaltoAbajo[] = {
  B01110,
  B01110,
  B01110,
  B00100,
  B11111,
  B10101,
  B01010,
  B10001
};

void setup() {
  Serial.begin(9600);
  pinMode(disparo, OUTPUT);//definimos la variable disparo como una salida
  pinMode(receptor,INPUT);//definimos la variable receptro como una entrada
  pinMode(BUZZER,OUTPUT);
  LCD_Jared.begin(16,2);
  LCD_Jared.createChar(1,SaltoArriba);
  LCD_Jared.createChar(2,SaltoAbajo);
}
void loop() {
  
  long sensor, distancia; //variables para saber ditancia 
  
  delay(500);
  digitalWrite(disparo,LOW);
  delayMicroseconds(2);
  digitalWrite(disparo,HIGH);
  delayMicroseconds(10);
  digitalWrite(disparo,LOW);  
  sensor = pulseIn(receptor,HIGH);
  distancia = sensor/59;

 if(distancia >= 6 && distancia <= 10){
     contador++;
     Serial.println(contador);
     Para_jalarNumero(contador);
 }
 if(contador >= 16){
   delay(100);
   LCD_Jared.clear();
   LCD_Jared.setCursor(8,0);
   LCD_Jared.write(1);
  delay(250);
  LCD_Jared.setCursor(8,0);
  LCD_Jared.write(2);
  delay(250);
  tone(BUZZER, a, 500);
   
 }

}

  void Para_jalarNumero(int contador){
    switch(contador){
      case 0:
       Numero_0_PANTALLA();
       break;

      case 1:
       Numero_1_PANTALLA();
       break;

      case 2:
       Numero_2_PANTALLA();
       break;

      case 3:
       Numero_3_PANTALLA();
       break;

      case 4:
       Numero_4_PANTALLA();
       break;

      case 5:
       Numero_5_PANTALLA();
       break;

      case 6:
       Numero_6_PANTALLA();
       break;

      case 7:
       Numero_7_PANTALLA();
       break;

      case 8:
       Numero_8_PANTALLA();
       break;

      case 9:
       Numero_9_PANTALLA();
       break;

      case 10:
       Numero_10_PANTALLA();
       break;

      case 11:
       Numero_11_PANTALLA();
       break;

      case 12:
       Numero_12_PANTALLA();
       break;

      case 13:
       Numero_13_PANTALLA();
       break;

      case 14:
       Numero_14_PANTALLA();
       break;

      case 15:
       Numero_15_PANTALLA();
       break;

      case 16:
       Numero_16_PANTALLA();
       break;
    }
    } 
   void Numero_0_PANTALLA(){
    LCD_Jared.setCursor(8,0);
    LCD_Jared.print("0");
   }
   void Numero_1_PANTALLA(){
     LCD_Jared.setCursor(8,0);
     LCD_Jared.print("1");
   }
   void Numero_2_PANTALLA(){
     LCD_Jared.setCursor(8,0);
     LCD_Jared.print("2");
   }
   void Numero_3_PANTALLA(){
    LCD_Jared.setCursor(8,0);
    LCD_Jared.print("3");
   }
   void Numero_4_PANTALLA(){
    LCD_Jared.setCursor(8,0);
    LCD_Jared.print("4");
   }
   void Numero_5_PANTALLA(){
    LCD_Jared.setCursor(8,0);
    LCD_Jared.print("5");
   }
   void Numero_6_PANTALLA(){
    LCD_Jared.setCursor(8,0);
    LCD_Jared.print("6");
   }
   void Numero_7_PANTALLA(){
    LCD_Jared.setCursor(8,0);
    LCD_Jared.print("7");
   }
   void Numero_8_PANTALLA(){
    LCD_Jared.setCursor(8,0);
    LCD_Jared.print("8");
   }
   void Numero_9_PANTALLA(){
    LCD_Jared.setCursor(8,0);
    LCD_Jared.print("9");
   }
    void Numero_10_PANTALLA(){
    LCD_Jared.setCursor(8,0);
    LCD_Jared.print("10");
   }
    void Numero_11_PANTALLA(){
    LCD_Jared.setCursor(8,0);
    LCD_Jared.print("11");
   }
    void Numero_12_PANTALLA(){
    LCD_Jared.setCursor(8,0);
    LCD_Jared.print("12");
   }
    void Numero_13_PANTALLA(){
    LCD_Jared.setCursor(8,0);
    LCD_Jared.print("13");
   }
    void Numero_14_PANTALLA(){
    LCD_Jared.setCursor(8,0);
    LCD_Jared.print("14");
   }
    void Numero_15_PANTALLA(){
    LCD_Jared.setCursor(8,0);
    LCD_Jared.print("15");
   }
    void Numero_16_PANTALLA(){
    LCD_Jared.setCursor(8,0);
    LCD_Jared.print("16");
   }
