/*
 * Fundacion Kinal
 * Centro educativo tecnico laboral Kinal
 * Electronica
 * Grado: Quinto
 * Sección: A
 * Curso: Taller de electronica digital y reparación de computadoras I
 * Nombre: Jared Hernan Ruiz Aleu 
 * Carnet: 2022011
 * Proyecto: Uso de interrupciones de temporizador por medio de Ticker con el sensor DS18B20
*/
#define POT  A0
#define Rojo   3
#define Verde  9
#define Azul  11

int pyme;
int colores(int R, int G, int B);

void setup() {
  Serial.begin(9600);

  pinMode(Rojo,OUTPUT);
  pinMode(Azul,OUTPUT);
  pinMode(Verde,OUTPUT);

}

void loop() {
  pyme = map(analogRead(POT),0,1023,100,1000);
  Serial.println(POT);

  colores(174,92,230);
  delay(pyme);

  colores(255,255,255);
  delay(pyme);

  colores(0,255,255);
  delay(pyme);

  colores(189,174,20);
  delay(pyme);

  colores(255,87,35);
  delay(pyme);

}
int colores(int R, int G, int B){
  analogWrite(Rojo,R);
  analogWrite(Verde,G);
  analogWrite(Azul, B);
}
