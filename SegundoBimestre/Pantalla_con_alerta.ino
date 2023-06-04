/*
   Fundacion Kinal
   Centro educativo tecnico laboral Kinal
   Quinto perito
   Quinto electronica
   Codigo Tecnico: EB5AM  
   Curso: Taller de electronica digital y reparacion de computadoras I
   Proyecto: Alarma de distancia
   Nombre: Jared Hernan Ruiz Anleu
   Fecha: 28/04/23
*/
#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

#define BUZZER 11

#define disparo  9 //definimos el pin al que conectaremos el trigger 
#define receptor  10 //definimos el pin al que conetaremos el echo 

long sensor, distancia;

#define led1 2
#define led2 3
#define led3 4
#define led4 5
#define led5 6
#define led6 7
#define led7 8
#define led8 12
#define led9 13
#define led10 14

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
  Serial.begin(9600);
  pinMode(disparo, OUTPUT);//definimos la variable disparo como una salida
  pinMode(receptor,INPUT);//definimos la variable receptro como una entrada
  pinMode(BUZZER,OUTPUT);
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  pinMode(led4,OUTPUT);
  pinMode(led5,OUTPUT);
  pinMode(led6,OUTPUT);
  pinMode(led7,OUTPUT);
  pinMode(led8,OUTPUT);
  pinMode(led9,OUTPUT);
  pinMode(led10,OUTPUT);
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
    lcd_JARED.setCursor(0,0);
    lcd_JARED.print("Fuera de alcance  ");
    digitalWrite(led1,LOW);
    digitalWrite(led2,LOW);
    digitalWrite(led3,LOW);
    digitalWrite(led4,LOW);
    digitalWrite(led5,LOW);
    digitalWrite(led6,LOW);
    digitalWrite(led7,LOW);
    digitalWrite(led8,LOW);
    digitalWrite(led9,LOW);
    digitalWrite(led10,LOW);
    }
  }
 void distancia2(){
  if(distancia >= 30 && distancia <= 45){
    lcd_JARED.clear();
    lcd_JARED.setCursor(0,0);
    lcd_JARED.print("Persona u Objeto");
    lcd_JARED.setCursor(0,1);
    lcd_JARED.print("Acercandose");
    digitalWrite(led1,HIGH);
    digitalWrite(led2,HIGH);
    digitalWrite(led3,HIGH);
    digitalWrite(led4,LOW);
    digitalWrite(led5,LOW);
    digitalWrite(led6,LOW);
    digitalWrite(led7,LOW);
    digitalWrite(led8,LOW);
    digitalWrite(led9,LOW);
    digitalWrite(led10,LOW);
    }
 }
 void distancia3(){
   if(distancia >= 15 && distancia <= 30){
    lcd_JARED.clear();
    lcd_JARED.setCursor(0,0);
    lcd_JARED.print("Cuidado");
    lcd_JARED.setCursor(0,1);
    lcd_JARED.print("Espacio Privado");
    digitalWrite(led1,HIGH);
    digitalWrite(led2,HIGH);
    digitalWrite(led3,HIGH);
    digitalWrite(led4,HIGH);
    digitalWrite(led5,HIGH);
    digitalWrite(led6,HIGH);
    digitalWrite(led7,LOW);
    digitalWrite(led8,LOW);
    digitalWrite(led9,LOW);
    digitalWrite(led10,LOW);
    tone(BUZZER, 1000);
    delay(5000);
    noTone(BUZZER);
    }
 }
 void distancia4(){
  if(distancia >= 5 && distancia <= 15){
    lcd_JARED.clear();
    lcd_JARED.setCursor(0,0);
    lcd_JARED.print("Invadiendo");
    lcd_JARED.setCursor(0,1);
    lcd_JARED.print("Espacio Privado");
    digitalWrite(led1,HIGH);
    digitalWrite(led2,HIGH);
    digitalWrite(led3,HIGH);
    digitalWrite(led4,HIGH);
    digitalWrite(led5,HIGH);
    digitalWrite(led6,HIGH);
    digitalWrite(led7,HIGH);
    digitalWrite(led8,HIGH);
    digitalWrite(led9,HIGH);
    digitalWrite(led10,HIGH);
    tone(BUZZER, 2000);
    delay(10000);
    noTone(BUZZER);
   
  }
 }
  
