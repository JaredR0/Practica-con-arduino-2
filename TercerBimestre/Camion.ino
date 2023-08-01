/*
  Fundación Kinal Centro Educativo Técnico Labral Kinal
  Grado:   Quinto Electrónica
  Sección: A
  Curso:   Taller de Electrónica Digital y Reparación de Computadoras I
  Nombre:  Juan David Tejada Peñuela 
  Carné:   2022454 2019127 2021206 2019376
  Proyecto: Fin de bimestre Transport Truck
*/
#include <SoftwareSerial.h>
#include <Servo.h>

SoftwareSerial bluetooth(7, 8);  // Pines RX, TX del módulo Bluetooth HC-05

// Pines de control del carro
const int motor1Pin1 = 2;
const int motor1Pin2 = 3;
const int motor2Pin1 = 4;
const int motor2Pin2 = 5;
const int led1 = 6;
const int led2 = 9;
const int led3 = 12;
const int BUZZER = 11;
const int buzzerPin = 14;
Servo myservo;

int Do = 261;
int Re = 293;
int Mi = 329;
int Fa = 349;
int Sol = 391;
int La = 440;
int Si = 493;
int DoS = 277;
int ReS = 311;

int t1 = 200;
int t2 = 100;
int t3 = 50;
int volume = 700;

void setup() {
  // Configurar los pines de control del carro como salida
 pinMode(motor1Pin1, OUTPUT);
 pinMode(motor1Pin2, OUTPUT);
 pinMode(motor2Pin1, OUTPUT);
 pinMode(motor2Pin2, OUTPUT);
 pinMode(buzzerPin, OUTPUT);
 pinMode(BUZZER, OUTPUT);
 pinMode(led1, OUTPUT);
 pinMode(led2, OUTPUT);
 pinMode(led3, OUTPUT);
 myservo.attach(10);

 bluetooth.begin(9600);  // Iniciar la comunicación Bluetooth a 9600 bps
}

void playNote(int note, int duration) {
  analogWrite(11, volume); // Configura el ciclo de trabajo PWM (volumen)
  tone(11, note, duration);
  delay(duration + 50); // Pequeña pausa entre notas
  noTone(11);
  delay(t3); // Pausa entre repeticiones de la melodía
}

void loop() {
  if (bluetooth.available()) {
    char command = bluetooth.read();  // Leer el comando recibido por Bluetooth

    // Controlar el carro según el comando recibido
    switch (command) {
        case '1':
        adelante();
        break;
        case '2':
        atras();
        break;
        case '3':
        stop1();
        pide_vias_D();
        pide_vias_I();
        break;
        case '4':
        pide_vias_D();
        break;
        case '5':
        pide_vias_I();
        break;
        case '6':
        noventa_Grados();
        break;
        case '7':
        ciento_ochenta_Grados();
        break;
        case '9':
        FAROS();
        break;
        case 'A':
        FAROSNO();
        break;
        case 'B':
        BOCINA();
        break;
    }
  }
}

// Funciones de control del carro
void adelante() {
  digitalWrite(motor1Pin1, HIGH);
  digitalWrite(motor1Pin2, LOW);
  digitalWrite(motor2Pin1, HIGH);
  digitalWrite(motor2Pin2, LOW);
  digitalWrite(buzzerPin, LOW);
  
}
void atras() {
  digitalWrite(motor1Pin1, LOW);
  digitalWrite(motor1Pin2, HIGH);
  digitalWrite(motor2Pin1, LOW);
  digitalWrite(motor2Pin2, HIGH);
  digitalWrite(buzzerPin, HIGH);
  
}
void stop1() {
  digitalWrite(motor1Pin1, LOW);
  digitalWrite(motor1Pin2, LOW);
  digitalWrite(motor2Pin1, LOW);
  digitalWrite(motor2Pin2, LOW);
  digitalWrite(buzzerPin, LOW);
}
void pide_vias_D() {
  digitalWrite(led1,HIGH);
  delay(150);
  digitalWrite(led1,LOW);
  delay(150);
  digitalWrite(led1,HIGH);
  delay(150);
  digitalWrite(led1,LOW);
  delay(150);
  digitalWrite(led1,HIGH);
  delay(150);
  digitalWrite(led1,LOW);
  delay(150);
  digitalWrite(led1,HIGH);
  delay(150);
  digitalWrite(led1,LOW);
  delay(150);
  }
void pide_vias_I() {
  digitalWrite(led2,HIGH);
  delay(150);
  digitalWrite(led2,LOW);
  delay(150);
  digitalWrite(led2,HIGH);
  delay(150);
  digitalWrite(led2,LOW);
  delay(150);
  digitalWrite(led2,HIGH);
  delay(150);
  digitalWrite(led2,LOW);
  delay(150);
  digitalWrite(led2,HIGH);
  delay(150);
  digitalWrite(led2,LOW);
  delay(150);  
  }
void noventa_Grados(){
  myservo.write(60);
  delay(500);
  myservo.write(90);
}
void ciento_ochenta_Grados(){
  myservo.write(130);
  delay(500);
  myservo.write(90);
}
void FAROS(){
  digitalWrite(led3,HIGH);
}
void FAROSNO(){
  digitalWrite(led3,LOW);
}
void BOCINA(){
  buzzer();
}
void buzzer(){
  playNote(Do, t2);
  playNote(Do, t2);
  playNote(Do, t2);
  playNote(Fa, t2);
  playNote(La, t1);
  playNote(Do, t2);
  playNote(Do, t2);
  playNote(Do, t2);
  playNote(Fa, t2);
  playNote(La, t1);
  playNote(Fa, t2);
  playNote(Fa, t2);
  playNote(Mi, t2);
  playNote(Mi, t2);
  playNote(Re, t2);
  playNote(Re, t2);
  playNote(Do, t2);
  playNote(Do, t1);
  playNote(Do, t2);
  playNote(Do, t2);
  playNote(Do, t2);
  playNote(Mi, t2);
  playNote(Sol, t1);
  playNote(Do, t2);
  playNote(Do, t2);
  playNote(Do, t2);
  playNote(Mi, t2);
  playNote(Sol, t1);
  playNote(DoS, t2);
  playNote(ReS, t2);
  playNote(DoS, t2);
  playNote(Si, t2);
  playNote(La, t2);
  playNote(Sol, t2);
  playNote(Fa, t1);
  }
