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

int   PIN = 0;
int   Medidor = 0;
int   Vin = 5;
float Vout = 0;
float R2 = 10000;
float R1 = 0;
float Const = 0;

void setup(){
  // Inicializar el LCD
  lcd_JARED.init();
  //Encender la luz de fondo.
  lcd_JARED.backlight();
}

void loop(){
  Medidor = analogRead(PIN);
  if(Medidor){
    Const = Medidor * Vin;
    Vout = (Const)/1024.0;
    Const = (Vin/Vout) - 1;
    R1 = R2 * Const;

    lcd_JARED.setCursor(0,1);
    lcd_JARED.print("R1=");
    lcd_JARED.setCursor(3,1);
    lcd_JARED.print(R1);
    lcd_JARED.setCursor(0,0);
    lcd_JARED.print("Vout=");
    lcd_JARED.setCursor(5,0);
    lcd_JARED.print(Vout);
    
    delay(500);
  }
}
