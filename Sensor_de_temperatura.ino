/* 
 * Fundacion Kinal
 * Centro educativo tecnico laboral Kinal
 * Perito en electonica
 * Quinto perito
 * EB5AM 
 * Taller de electronica digital y reparacion de computadoras
 * Nombre: Jared Hernan Ruiz Anleu
 * Carne: 2022011
 * Fecha: 1/05/2023
 * Proyecto: Sensor de Temperatura DS18B20
 */

//Librerias
#include <OneWire.h>                
#include <DallasTemperature.h>
#include <LiquidCrystal_I2C.h>
#include <Wire.h> 

//Constructores
OneWire ourWire(2);                //Se establece el pin 2  como el pin que utilizaremos para el protocolo OneWire
DallasTemperature sensors(&ourWire); //Se declara una objeto para nuestro sensor
LiquidCrystal_I2C lcd_JARED(0x27,16,2);  //

#define led1 3
#define led2 5
#define led3 7

byte Termometro[] = {
  B00000,
  B01110,
  B01010,
  B01010,
  B01010,
  B10001,
  B10001,
  B01110
 };
byte celcus[] = {
  B00111,
  B00101,
  B00111,
  B00000,
  B11100,
  B10000,
  B10000,
  B11100
};
byte far[] = {
  B00111,
  B00101,
  B00111,
  B00000,
  B11100,
  B10000,
  B11000,
  B10000
};


void setup() {
  // Inicializar el LCD
  lcd_JARED.init();
  //Encender la luz de fondo.
  lcd_JARED.backlight();
  
  delay(500);
  Serial.begin(9600);   //Inicio la comunicacion serial
  sensors.begin();   //Se inicia el sensor
  delay(500);
  lcd_JARED.createChar(1,Termometro);
  lcd_JARED.createChar(2,celcus);
  lcd_JARED.createChar(3,far);
  pinMode(3,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(7,OUTPUT);
}
 
void loop() {
sensors.requestTemperatures();   //Se envía el comando para leer la temperatura
float temp  = sensors.getTempCByIndex(0); //Se obtiene la temperatura en ºC
float temp1 = sensors.getTempFByIndex(0); //Se obtiene la temperatura en ºF

lcd_JARED.setCursor(1,0);
lcd_JARED.print(" Temperatura");
lcd_JARED.setCursor(0,0);
    lcd_JARED.write(1);
    lcd_JARED.setCursor(14,0);
    lcd_JARED.write(1);
Serial.print("Temperatura= ");
Serial.print(temp);
Serial.println(" C");
lcd_JARED.setCursor(1,1);
lcd_JARED.write(2);
lcd_JARED.setCursor(2,1);
lcd_JARED.print(temp);
Serial.print("Temperatura=");
Serial.print(temp1);
Serial.println("ºF");
lcd_JARED.setCursor(8,1);
lcd_JARED.write(3);
lcd_JARED.setCursor(9,1);
lcd_JARED.print(temp1);
delay(100);

if(temp >= 30){
  digitalWrite(led1,HIGH);
}
if(temp < 30){
  digitalWrite(led1,LOW);
  }
  if(temp < 15){
  digitalWrite(led2,HIGH);
}
if(temp > 15){
  digitalWrite(led2,LOW);
  }
  if(temp > 15 && temp < 30 ){
  digitalWrite(led3,HIGH);
}
if(temp > 30){
  digitalWrite(led3,LOW);
  }
  if(temp < 15){
  digitalWrite(led3,LOW);
  
}
}
