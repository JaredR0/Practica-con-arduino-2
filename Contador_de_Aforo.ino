/*
   Fundacion Kinal
   Centro educativo tecnico laboral Kinal
   Quinto perito
   Quinto electronica
   Codigo Tecnico: EB5AM  
   Curso: Taller de electronica digital y reparacion de computadoras I
   Proyecto: Contador de aforo 
   Nombre: Jared Hernan Ruiz Anleu
   Fecha: 21/04/23
*/
#define disparo  9 //definimos el pin al que conectaremos el trigger 
#define receptor  10 //definimos el pin al que conetaremos el echo 

#define A  2
#define B  3
#define C  4
#define D  5
#define E  6
#define F  7
#define G  8

#define rele  11

int contador = 0;

void setup() {
  Serial.begin(9600);
  pinMode(disparo, OUTPUT);//definimos la variable disparo como una salida
  pinMode(receptor,INPUT);//definimos la variable receptro como una entrada
  pinMode(rele,OUTPUT);
  digitalWrite(rele, LOW);
  pinMode(A,OUTPUT);
  pinMode(B,OUTPUT);
  pinMode(C,OUTPUT);
  pinMode(D,OUTPUT);
  pinMode(E,OUTPUT);
  pinMode(F,OUTPUT);
  pinMode(G,OUTPUT);
  
}
void loop() {
  long sensor, distancia; //variables para saber ditancia 
  
  delay(500);
  digitalWrite(disparo,LOW);
  delayMicroseconds(2);
  digitalWrite(disparo,HIGH);
  delayMicroseconds(10);
  digitalWrite(disparo,LOW);  
  sensor = pulseIn(receptor,HIGH);
  distancia = sensor/59;

 if(distancia >= 6 && distancia <= 10){
     contador++;
     Serial.println(contador);
     Para_jalarNumero(contador);
 }
 if(contador >= 10){
  digitalWrite(rele,HIGH);
 }
}

  void Para_jalarNumero(int contador){
    switch(contador){
      case 0:
       Numero_0_display();
       break;

      case 1:
       Numero_1_display();
       break;

      case 2:
       Numero_2_display();
       break;

      case 3:
       Numero_3_display();
       break;

      case 4:
       Numero_4_display();
       break;

      case 5:
       Numero_5_display();
       break;

      case 6:
       Numero_6_display();
       break;

      case 7:
       Numero_7_display();
       break;

      case 8:
       Numero_8_display();
       break;

      case 9:
       Numero_9_display();
       break;
    }
    } 
   void Numero_0_display(){
     digitalWrite(A,HIGH);
     digitalWrite(B,HIGH);
     digitalWrite(C,HIGH);
     digitalWrite(D,HIGH);
     digitalWrite(E,HIGH);
     digitalWrite(F,HIGH);
     digitalWrite(G,LOW);
   }
   void Numero_1_display(){
     digitalWrite(A,LOW);
     digitalWrite(B,HIGH);
     digitalWrite(C,HIGH);
     digitalWrite(D,LOW);
     digitalWrite(E,LOW);
     digitalWrite(F,LOW);
     digitalWrite(G,LOW);
   }
   void Numero_2_display(){
       
     digitalWrite(A,HIGH);
     digitalWrite(B,HIGH);
     digitalWrite(C,LOW);
     digitalWrite(D,HIGH);
     digitalWrite(E,HIGH);
     digitalWrite(F,LOW);
     digitalWrite(G,HIGH);
   }
   void Numero_3_display(){
     digitalWrite(A, HIGH);
     digitalWrite(B, HIGH);
     digitalWrite(C, HIGH);
     digitalWrite(D, HIGH);
     digitalWrite(E, LOW);
     digitalWrite(F, LOW);
     digitalWrite(G, HIGH);
   }
   void Numero_4_display(){
     digitalWrite(A,LOW);
     digitalWrite(B,HIGH);
     digitalWrite(C,HIGH);
     digitalWrite(D,LOW);
     digitalWrite(E,LOW);
     digitalWrite(F,HIGH);
     digitalWrite(G,HIGH);
   }
   void Numero_5_display(){
     digitalWrite(A,HIGH);
     digitalWrite(B,LOW);
     digitalWrite(C,HIGH);
     digitalWrite(D,HIGH);
     digitalWrite(E,LOW);
     digitalWrite(F,HIGH);
     digitalWrite(G,HIGH);
   }
   void Numero_6_display(){
     digitalWrite(A,HIGH);
     digitalWrite(B,LOW);
     digitalWrite(C,HIGH);
     digitalWrite(D,HIGH);
     digitalWrite(E,HIGH);
     digitalWrite(F,HIGH);
     digitalWrite(G,HIGH);
   }
   void Numero_7_display(){
     digitalWrite(A,HIGH);
     digitalWrite(B,HIGH);
     digitalWrite(C,HIGH);
     digitalWrite(D,LOW);
     digitalWrite(E,LOW);
     digitalWrite(F,LOW);
     digitalWrite(G,LOW);
   }
   void Numero_8_display(){
     digitalWrite(A,HIGH);
     digitalWrite(B,HIGH);
     digitalWrite(C,HIGH);
     digitalWrite(D,HIGH);
     digitalWrite(E,HIGH);
     digitalWrite(F,HIGH);
     digitalWrite(G,HIGH);
   }
   void Numero_9_display(){
     digitalWrite(A,HIGH);
     digitalWrite(B,HIGH);
     digitalWrite(C,HIGH);
     digitalWrite(D,HIGH);
     digitalWrite(E,LOW);
     digitalWrite(F,HIGH);
     digitalWrite(G,HIGH);
   }
