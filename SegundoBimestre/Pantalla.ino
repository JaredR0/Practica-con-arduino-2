/*
 * Fundacion Kinal
 * Centro educativo tecnico laboral Kinal
 * Perito en electonica
 * Quinto perito
 * EB5AM
 * Taller de electronica digital y reparacion de computadoras
 * Nombre: Jared Hernan Ruiz Anleu
 * Fecha: 27/04/2023
 * Proyecto: LCD sin I2C
 * Carne: 2022011
*/
#include <LiquidCrystal.h>


#define RS  2
#define E 3
#define D4 4
#define D5 5
#define D6 6
#define D7 7

//Constructor
LiquidCrystal LCD_Jared(RS, E, D4, D5, D6, D7); 

void setup()
{
  LCD_Jared.begin(16,2); //Objeto de una LCD de 16 columnas x 2 filas
  LCD_Jared.setCursor(5,0);
  LCD_Jared.print("JARED");
  LCD_Jared.setCursor(4,1);
  LCD_Jared.print("2022011"); 

}
void loop()
{
  }
