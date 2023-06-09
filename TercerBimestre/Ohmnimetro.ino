/*
 * Fundacion Kinal
 * Centro educativo tecnico laboral Kinal
 * Electronica
 * Grado: Quinto
 * Sección: A
 * Curso: Taller de electronica digital y reparación de computadoras I
 * Nombre: Jared Hernan Ruiz Aleu 
 * Carnet: 2022011
 * Ohmnimetro
*/
#include <LiquidCrystal_I2C.h>
#include <Wire.h> 

LiquidCrystal_I2C lcd_JARED(0x27,16,2);

int analogPin = 0;
int raw = 0;
int Vin = 5;
float Vout = 0;
float R1 = 10000;
float R2 = 0;
float buffer = 0;

void setup(){
  // Inicializar el LCD
  lcd_JARED.init();
  //Encender la luz de fondo.
  lcd_JARED.backlight();
}

void loop(){
  raw = analogRead(analogPin);
  if(raw){
    buffer = raw * Vin;
    Vout = (buffer)/1024.0;
    buffer = (Vin/Vout) - 1;
    R2 = R1 * buffer;

    lcd_JARED.setCursor(0,0);
    lcd_JARED.print("Resistencia");
    lcd_JARED.setCursor(0,1);
    lcd_JARED.print(R2);
    delay(500);
  }
}
