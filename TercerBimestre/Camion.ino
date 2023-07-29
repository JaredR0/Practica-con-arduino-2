#include <SoftwareSerial.h>
#include <Servo.h>

SoftwareSerial bluetooth(7, 8);  // Pines RX, TX del módulo Bluetooth HC-05

#define NOTE_C4 261
#define NOTE_E4 330
#define NOTE_G4 392
#define NOTE_A4 440

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

int melody[] = {
  NOTE_C4, NOTE_E4, NOTE_G4, NOTE_A4, NOTE_G4, NOTE_E4
};
int noteDurations[] = {
  4, 4, 4, 2, 4, 4
};

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
        noventa_Grados();
        break;
        case '9':
        FAROS();
        break;
        case 'A':
        FAROS();
        break;
        case 'B':
        PIDENO();
        break;
        case 'C':
        PIDENO1();
        break;
        case 'D':
        BOCINA();
        break;
        case 'E':
        BOCINANO();
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
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(buzzerPin, LOW);
}
void pide_vias_D() {
  digitalWrite(led1,HIGH);
  delay(50);
  digitalWrite(led1,LOW);
  delay(50);
  digitalWrite(led1,HIGH);
  delay(50);
  digitalWrite(led1,LOW);
  delay(50);
  digitalWrite(led1,HIGH);
  delay(50);
  digitalWrite(led1,LOW);
  delay(50);
  digitalWrite(led1,HIGH);
  delay(50);
  digitalWrite(led1,LOW);
  delay(50);
  }
void pide_vias_I() {
  digitalWrite(led2,HIGH);
  delay(50);
  digitalWrite(led2,LOW);
  delay(50);
  digitalWrite(led2,HIGH);
  delay(50);
  digitalWrite(led2,LOW);
  delay(50);
  digitalWrite(led2,HIGH);
  delay(50);
  digitalWrite(led2,LOW);
  delay(50);
  digitalWrite(led2,HIGH);
  delay(50);
  digitalWrite(led2,LOW);
  delay(50);  
  }
void noventa_Grados(){
  myservo.write(80);
  delay (2000);
}
void ciento_ochenta_Grados(){
  myservo.write(170);
  delay (2000);
}
void FAROS(){
  digitalWrite(led3,HIGH);
}
void FAROSNO(){
  digitalWrite(led3,LOW);
}
void PIDENO(){
  digitalWrite(led1,LOW);
}
void PIDENO1(){
  digitalWrite(led2,LOW);
}
void BOCINA(){
  buzzer();
}
void BOCINANO(){
  noTone(BUZZER);
}
void buzzer(){
  for (int i = 0; i < sizeof(melody) / sizeof(int); i++) {
    int duration = 1000 / noteDurations[i];
    tone(BUZZER, melody[i], duration);
    delay(duration * 1.30); // Pequeña pausa entre notas
    noTone(BUZZER);
  }
  delay(1000); // Pausa entre repeticiones de la melodía
}
