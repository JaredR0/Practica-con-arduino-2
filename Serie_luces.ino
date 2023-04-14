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
int PinesEncender[]={2,3,4,5,6,7,8,9,10,11};
int Contador = 0;
void setup() {
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);

}
void loop() {
for(Contador=0;Contador<10;Contador ++){
  digitalWrite(PinesEncender[Contador],HIGH);
  delay(500);
  digitalWrite(PinesEncender[Contador + 1],HIGH);
  delay(500);
  digitalWrite(PinesEncender[Contador],LOW);
  delay(500);
}
for(Contador=11;Contador>0;Contador --){
  digitalWrite(PinesEncender[Contador],HIGH);
  delay(500);
  digitalWrite(PinesEncender[Contador - 1],HIGH);
  delay(500);
  digitalWrite(PinesEncender[Contador],LOW);
  delay(500);
}
  

}
