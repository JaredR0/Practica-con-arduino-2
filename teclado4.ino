/*
 Fundacion Kinal
 Centro Educativo Tecnico Laboral Kinal
 Electronica
 Grado: Quinto
 Sección A
 Nombre: Jared Hernan Ruiz Anleu
 Curso: Taller de electronica digital y reparación de computadoras I
 Carné: 2022011
 */
#include <Keypad.h>

#define Filas  4 //4 filas
#define Columnas  4 //4 columnas
#define A 10
#define B 11
#define C 14
#define D 15
#define E 16
#define F 12
#define G 13


char Teclas[Filas][Columnas] = {

  {'1','2','3','A'},

  {'4','5','6','B' },

  {'7','8','9','C'},

  {'*','0','#','D'}

};//Los caracteres para identificar posicion//

byte FilasPines[Filas] = {5, 4, 3, 2}; //definicion de los pines para las filas

byte ColumnasPines[Columnas] = {9, 8, 7, 6}; //definicion de los pines para las columnas

Keypad teclado = Keypad( makeKeymap(Teclas), FilasPines, ColumnasPines, Filas, Columnas );//las etiquetas para jalar la funcion//


void setup(){
  Serial.begin(9600);//inicio de la consola virtual//
  pinMode(A,OUTPUT);
  pinMode(B,OUTPUT);
  pinMode(C,OUTPUT);
  pinMode(D,OUTPUT);
  pinMode(E,OUTPUT);
  pinMode(F,OUTPUT);
  pinMode(G,OUTPUT);
  
}

void loop(){
  
  char teclas = teclado.getKey();//funcion para detectar las etiquetas//

   if(teclas == NO_KEY){
  Serial.println("no se esta presionando");
  delay(1000);
  digitalWrite(A,HIGH);
  digitalWrite(B,HIGH);
  digitalWrite(C,HIGH);
  digitalWrite(D,HIGH);
  digitalWrite(E,HIGH);
  digitalWrite(F,HIGH);
  digitalWrite(G,LOW);

  }
 

  if(teclas == '0'){
  Serial.println(teclas);
  
  digitalWrite(A,HIGH);
  digitalWrite(B,HIGH);
  digitalWrite(C,HIGH);
  digitalWrite(D,HIGH);
  digitalWrite(E,HIGH);
  digitalWrite(F,HIGH);
  digitalWrite(G,LOW);
  
  
   } if(teclas == '1'){
  Serial.println(teclas);
  
  digitalWrite(A,LOW);
  digitalWrite(B,HIGH);
  digitalWrite(C,HIGH);
  digitalWrite(D,LOW);
  digitalWrite(E,LOW);
  digitalWrite(F,LOW);
  digitalWrite(G,LOW);
  }
  if(teclas == '2'){
  Serial.println(teclas);
  
  digitalWrite(A,HIGH);
  digitalWrite(B,HIGH);
  digitalWrite(C,LOW);
  digitalWrite(D,HIGH);
  digitalWrite(E,HIGH);
  digitalWrite(F,LOW);
  digitalWrite(G,HIGH);
  }
if(teclas == '3'){
  Serial.println(teclas);
  
  digitalWrite(A,HIGH);
  digitalWrite(B,HIGH);
  digitalWrite(C,HIGH);
  digitalWrite(D,HIGH);
  digitalWrite(E,LOW);
  digitalWrite(F,LOW);
  digitalWrite(G,HIGH);
  }
  if(teclas == '4'){
  Serial.println(teclas);
  
  digitalWrite(A,LOW);
  digitalWrite(B,HIGH);
  digitalWrite(C,HIGH);
  digitalWrite(D,LOW);
  digitalWrite(E,LOW);
  digitalWrite(F,HIGH);
  digitalWrite(G,HIGH);
  }
  if(teclas == '5'){
  Serial.println(teclas);
  
  digitalWrite(A,HIGH);
  digitalWrite(B,LOW);
  digitalWrite(C,HIGH);
  digitalWrite(D,HIGH);
  digitalWrite(E,LOW);
  digitalWrite(F,HIGH);
  digitalWrite(G,HIGH);
  }
 if(teclas == '6'){
  Serial.println(teclas);
  
  digitalWrite(A,HIGH);
  digitalWrite(B,LOW);
  digitalWrite(C,HIGH);
  digitalWrite(D,HIGH);
  digitalWrite(E,HIGH);
  digitalWrite(F,HIGH);
  digitalWrite(G,HIGH);
  }
  if(teclas == '7'){
  Serial.println(teclas);
  
  digitalWrite(A,HIGH);
  digitalWrite(B,HIGH);
  digitalWrite(C,HIGH);
  digitalWrite(D,LOW);
  digitalWrite(E,LOW);
  digitalWrite(F,LOW);
  digitalWrite(G,LOW);
  }
   if(teclas == '8'){
  Serial.println(teclas);
  
  digitalWrite(A,HIGH);
  digitalWrite(B,HIGH);
  digitalWrite(C,HIGH);
  digitalWrite(D,HIGH);
  digitalWrite(E,HIGH);
  digitalWrite(F,HIGH);
  digitalWrite(G,HIGH);
  }
  if(teclas == '9'){
  Serial.println(teclas);
  
  digitalWrite(A,HIGH);
  digitalWrite(B,HIGH);
  digitalWrite(C,HIGH);
  digitalWrite(D,HIGH);
  digitalWrite(E,LOW);
  digitalWrite(F,HIGH);
  digitalWrite(G,HIGH);
  }
  if(teclas == '*'){//F//
  Serial.println(teclas);
  
  digitalWrite(A,HIGH);
  digitalWrite(B,LOW);
  digitalWrite(C,LOW);
  digitalWrite(D,LOW);
  digitalWrite(E,HIGH);
  digitalWrite(F,HIGH);
  digitalWrite(G,HIGH);
  }
 if(teclas == '#'){//E//
  Serial.println(teclas);
  
  digitalWrite(A,HIGH);
  digitalWrite(B,LOW);
  digitalWrite(C,LOW);
  digitalWrite(D,HIGH);
  digitalWrite(E,HIGH);
  digitalWrite(F,HIGH);
  digitalWrite(G,HIGH);
  }
 if(teclas == 'A'){
  Serial.println(teclas);
  
  digitalWrite(A,HIGH);
  digitalWrite(B,HIGH);
  digitalWrite(C,HIGH);
  digitalWrite(D,LOW);
  digitalWrite(E,HIGH);
  digitalWrite(F,HIGH);
  digitalWrite(G,HIGH);
  }
 if(teclas == 'B'){
  Serial.println(teclas);
  
  digitalWrite(A,LOW);
  digitalWrite(B,LOW);
  digitalWrite(C,HIGH);
  digitalWrite(D,HIGH);
  digitalWrite(E,HIGH);
  digitalWrite(F,HIGH);
  digitalWrite(G,HIGH);
  }
  if(teclas == 'C'){
  Serial.println(teclas);
  
  digitalWrite(A,LOW);
  digitalWrite(B,LOW);
  digitalWrite(C,LOW);
  digitalWrite(D,HIGH);
  digitalWrite(E,HIGH);
  digitalWrite(F,LOW);
  digitalWrite(G,HIGH);
  }
if(teclas == 'D'){
  Serial.println(teclas);
  
  digitalWrite(A,LOW);
  digitalWrite(B,HIGH);
  digitalWrite(C,HIGH);
  digitalWrite(D,HIGH);
  digitalWrite(E,HIGH);
  digitalWrite(F,LOW);
  digitalWrite(G,HIGH);
  }
  
  
  
  
  
  }
  
  
  
