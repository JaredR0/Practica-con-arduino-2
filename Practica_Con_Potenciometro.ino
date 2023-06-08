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
#define led 9
const int POT = 0;
int PWM;

void setup() {
  Serial.begin(9600);

  pinMode(led,OUTPUT);
}

void loop() {
  PWM = analogRead(POT)/4;
  analogWrite(led,PWM);
  Serial.println(PWM);

}
