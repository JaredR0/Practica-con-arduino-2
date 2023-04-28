/*
   Fundacion Kinal
   Centro educativo tecnico laboral Kinal
   Quinto perito
   Quinto electronica
   Codigo Tecnico: EB5AM  
   Curso: Taller de electronica digital y reparacion de computadoras I
   Proyecto: sensor de parqueo  
   Nombre: Jared Hernan Ruiz Anleu
   Fecha: 27/04/23
*/
#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

#define disparo  9 //definimos el pin al que conectaremos el trigger 
#define receptor  10 //definimos el pin al que conetaremos el echo 

byte cuadro[] = {
  B11111,
  B11111,
  B11011,
  B11111,
  B11111,
  B11011,
  B11111,
  B11111
};
long sensor, distancia;

void distancia1();
void distancia2();
void distancia3();
void distancia4();

//Crear el objeto lcd  dirección  0x27 y 16 columnas x 2 filas
LiquidCrystal_I2C lcd_JARED(0x27,16,2);  //

void setup() {
  // Inicializar el LCD
  lcd_JARED.init();
  //Encender la luz de fondo.
  lcd_JARED.backlight();
  pinMode(disparo, OUTPUT);//definimos la variable disparo como una salida
  pinMode(receptor,INPUT);//definimos la variable receptro como una entrada
  lcd_JARED.createChar(1,cuadro);
  Serial.begin(9600);
}

void loop() {
   
   digitalWrite(disparo, HIGH);
   delayMicroseconds(10);
   digitalWrite(disparo, LOW);
   sensor = pulseIn(receptor, HIGH);
   distancia = sensor / 59;
   Serial.println(distancia);
   Serial.println("cm");
   delay(100);

 distancia1();

 distancia2();

 distancia3();

 distancia4();
  
}

  void distancia1(){
    if(distancia >= 50){
    lcd_JARED.clear();
    lcd_JARED.setCursor(7,0);
    lcd_JARED.print("50");
    lcd_JARED.setCursor(5,1);
    lcd_JARED.print("libre");
    lcd_JARED.setCursor(0,0);
    lcd_JARED.write(1);
    lcd_JARED.setCursor(1,0);
    lcd_JARED.write(1);
    lcd_JARED.setCursor(2,0);
    lcd_JARED.write(1);
    lcd_JARED.setCursor(15,0);
    lcd_JARED.write(1);
    lcd_JARED.setCursor(14,0);
    lcd_JARED.write(1);
    lcd_JARED.setCursor(13,0);
    lcd_JARED.write(1);
    }
  }
 void distancia2(){
  if(distancia >= 30 && distancia <= 35){
    lcd_JARED.clear();
    lcd_JARED.setCursor(7,0);
    lcd_JARED.print("30");
    lcd_JARED.setCursor(4,1);
    lcd_JARED.print("Cuidado");
    lcd_JARED.setCursor(0,0);
    lcd_JARED.write(1);
    lcd_JARED.setCursor(1,0);
    lcd_JARED.write(1);
    lcd_JARED.setCursor(2,0);
    lcd_JARED.write(1);
    lcd_JARED.setCursor(3,0);
    lcd_JARED.write(1);
    lcd_JARED.setCursor(4,0);
    lcd_JARED.write(1);
    lcd_JARED.setCursor(15,0);
    lcd_JARED.write(1);
    lcd_JARED.setCursor(14,0);
    lcd_JARED.write(1);
    lcd_JARED.setCursor(13,0);
    lcd_JARED.write(1);
    lcd_JARED.setCursor(12,0);
    lcd_JARED.write(1);
    lcd_JARED.setCursor(11,0);
    lcd_JARED.write(1);
    }
 }
 void distancia3(){
   if(distancia >= 10 && distancia <= 15){
    lcd_JARED.clear();
    lcd_JARED.setCursor(7,0);
    lcd_JARED.print("10");
    lcd_JARED.setCursor(6,1);
    lcd_JARED.print("Alto");
    lcd_JARED.setCursor(0,0);
    lcd_JARED.write(1);
    lcd_JARED.setCursor(1,0);
    lcd_JARED.write(1);
    lcd_JARED.setCursor(2,0);
    lcd_JARED.write(1);
    lcd_JARED.setCursor(3,0);
    lcd_JARED.write(1);
    lcd_JARED.setCursor(4,0);
    lcd_JARED.write(1);
    lcd_JARED.setCursor(5,0);
    lcd_JARED.write(1);
    lcd_JARED.setCursor(6,0);
    lcd_JARED.write(1);
    lcd_JARED.setCursor(15,0);
    lcd_JARED.write(1);
    lcd_JARED.setCursor(14,0);
    lcd_JARED.write(1);
    lcd_JARED.setCursor(13,0);
    lcd_JARED.write(1);
    lcd_JARED.setCursor(12,0);
    lcd_JARED.write(1);
    lcd_JARED.setCursor(11,0);
    lcd_JARED.write(1);
    lcd_JARED.setCursor(10,0);
    lcd_JARED.write(1);
    lcd_JARED.setCursor(9,0);
    lcd_JARED.write(1);

    }
 }
 void distancia4(){
  if(distancia >= 1  && distancia <= 5){
    lcd_JARED.clear();
    lcd_JARED.setCursor(4,0);
    lcd_JARED.print("Ya topo");
  }
 }
