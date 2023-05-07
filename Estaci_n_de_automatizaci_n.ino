/*
   Fundacion Kinal
   Centro educativo tecnico laboral Kinal
   Quinto perito
   Quinto electronica
   Codigo Tecnico: EB5AM  
   Curso: Taller de electronica digital y reparacion de computadoras I
   Proyecto: Estacion  de automatizacion
   Nombre: Jared Hernan Ruiz Anleu
   Fecha: 4/05/23
*/
#include <Wire.h> 
#include <Adafruit_NeoPixel.h>
#include <OneWire.h>
#include <DallasTemperature.h>
#include <LiquidCrystal_I2C.h>
#include <Servo.h>

OneWire ourWire(2);                   //Se establece el pin 2  como el pin que utilizaremos para el protocolo OneWire
DallasTemperature sensors(&ourWire); //Se declara una objeto para nuestro sensor
LiquidCrystal_I2C lcd_JARED(0x27,16,2);

#define Rojo  13
#define Verde 5
#define Azul  6

#define radar 7
#define led   14

#define BUZZER 11
#define servoMOTOR 9

Servo Motor; 

int rele1 = 3;
int rele2 = 4;
int push1 = 8;
int push2 = 10;
int push3 = 12;

int estadopush1 = 0;
int estadoantes1 = 0;
int estadorele1 = 0;

int estadopush2 = 0;
int estadoantes2 = 0;
int estadorele2 = 0;

int estadopush3 = 0;
int estadoantes3 = 0;
int estadorele3 = 0;

byte Goku[] = {
  B00010,
  B01110,
  B11111,
  B00110,
  B10101,
  B01110,
  B00100,
  B01010
};

byte Kameha[] = {
  B00000,
  B00000,
  B01000,
  B00110,
  B11111,
  B00110,
  B01000,
  B00000
};
byte explocion[] = {
  B01001,
  B10110,
  B01000,
  B11011,
  B00100,
  B11110,
  B01100,
  B00011
};
byte llamas[] = {
  B10101,
  B00100,
  B10010,
  B01111,
  B11110,
  B11110,
  B11100,
  B11000
};
byte llamas2[] = {
  B10101,
  B00100,
  B01000,
  B11110,
  B01111,
  B01111,
  B00111,
  B00011
};
byte hielo[] = {
  B00000,
  B01010,
  B10101,
  B01010,
  B01010,
  B10101,
  B01010,
  B00000
};
byte bola[] = {
  B00000,
  B00000,
  B00100,
  B10010,
  B01010,
  B10010,
  B00100,
  B00000
};
byte congelado[] = {
  B01110,
  B11111,
  B01110,
  B00100,
  B01110,
  B00100,
  B01110,
  B01010
};

float temp;
void temperaturaVerde();
void temperaturaRojo();
void temperaturaMorado();

void sensoradar(bool Detection);

void boton1();
void boton2();
void boton3();

void setup() {
  // Inicializar el LCD
  lcd_JARED.init();
  //Encender la luz de fondo.
  lcd_JARED.backlight();
  
  delay(100);
  Serial.begin(9600);   //Inicio la comunicacion serial
  sensors.begin();   //Se inicia el sensor
  delay(100);
  
  lcd_JARED.createChar(1,Goku);
  lcd_JARED.createChar(2,Kameha);
  lcd_JARED.createChar(3,explocion);
  lcd_JARED.createChar(4,llamas);
  lcd_JARED.createChar(5,llamas2);
  lcd_JARED.createChar(6,bola);
  lcd_JARED.createChar(7,hielo);
  lcd_JARED.createChar(8,congelado);

  Motor.attach(servoMOTOR);

  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(7,INPUT);
  pinMode(13,OUTPUT);
  pinMode(8,INPUT);
  pinMode(10,INPUT);
  pinMode(11,OUTPUT);
  pinMode(12,INPUT);
  pinMode(14,OUTPUT);
}
 
void loop() {
  bool Detection = digitalRead(radar);
  sensors.requestTemperatures();
  temp = sensors.getTempCByIndex(0);
  Serial.print("Temperatura= ");
  Serial.print(temp);
  Serial.println(" C");
  
  temperaturaVerde();
  temperaturaRojo();
  temperaturaMorado();
  sensoradar(Detection);
  
  boton1();
  
  boton2();
  
  boton3();
}

void temperaturaVerde(){
if(temp > 21 && temp < 25){
   lcd_JARED.clear();
   lcd_JARED.setCursor(0,0);
   lcd_JARED.write(1);
   lcd_JARED.setCursor(0,1);
   lcd_JARED.write(1);
   lcd_JARED.setCursor(1,0);
   lcd_JARED.write(2);
   lcd_JARED.setCursor(1,1);
   lcd_JARED.write(2);
   delay(100);
   lcd_JARED.setCursor(2,0);
   lcd_JARED.write(2);
   lcd_JARED.setCursor(2,1);
   lcd_JARED.write(2);
   delay(100);
   lcd_JARED.setCursor(3,0);
   lcd_JARED.write(2);
   lcd_JARED.setCursor(3,1);
   lcd_JARED.write(2);
   delay(100);
   lcd_JARED.setCursor(4,0);
   lcd_JARED.write(2);
   lcd_JARED.setCursor(4,1);
   lcd_JARED.write(2);
   delay(100);
   lcd_JARED.setCursor(5,0);
   lcd_JARED.write(3);
   lcd_JARED.setCursor(5,1);
   lcd_JARED.write(3);
   delay(250);
   digitalWrite(Verde, HIGH);
   digitalWrite(Rojo,LOW);
   digitalWrite(Azul,LOW);
  }
}
void temperaturaRojo(){
  if(temp > 25 && temp < 45){
   lcd_JARED.clear();
   lcd_JARED.setCursor(0,0);
   lcd_JARED.write(1);
   lcd_JARED.setCursor(15,0);
   lcd_JARED.write(1);
   lcd_JARED.setCursor(1,0);
   lcd_JARED.write(2);
   lcd_JARED.setCursor(14,0);
   lcd_JARED.write(2);
   delay(100);
   lcd_JARED.setCursor(2,0);
   lcd_JARED.write(2);
   lcd_JARED.setCursor(13,0);
   lcd_JARED.write(2);
   delay(100);
   lcd_JARED.setCursor(3,0);
   lcd_JARED.write(2);
   lcd_JARED.setCursor(12,0);
   lcd_JARED.write(2);
   delay(100);
   lcd_JARED.setCursor(4,0);
   lcd_JARED.write(2);
   lcd_JARED.setCursor(11,0);
   lcd_JARED.write(2);
   delay(100);
   lcd_JARED.setCursor(5,0);
   lcd_JARED.write(3);
   lcd_JARED.setCursor(10,0);
   lcd_JARED.write(3);
   delay(100);
   lcd_JARED.setCursor(7,0);
   lcd_JARED.write(5);
   lcd_JARED.setCursor(8,0);
   lcd_JARED.write(4);
   delay(250);
   digitalWrite(Rojo,HIGH);
   digitalWrite(Verde,LOW);
   digitalWrite(Azul,LOW);
  }
}
void temperaturaMorado(){
  if(temp > 15 && temp < 21 ){
   lcd_JARED.clear();
   lcd_JARED.setCursor(0,0);
   lcd_JARED.write(1);
   lcd_JARED.setCursor(1,0);
   lcd_JARED.write(6);
   lcd_JARED.setCursor(6,0);
   lcd_JARED.write(8);
   delay(100);
   lcd_JARED.setCursor(2,0);
   lcd_JARED.write(6);
   delay(100);
   lcd_JARED.setCursor(3,0);
   lcd_JARED.write(6);
   delay(100);
   lcd_JARED.setCursor(4,0);
   lcd_JARED.write(6);
   delay(100);
   lcd_JARED.setCursor(5,0);
   lcd_JARED.write(7);
   lcd_JARED.setCursor(6,0);
   lcd_JARED.write(8);
   delay(250);
  digitalWrite(Rojo,HIGH);
  digitalWrite(Azul,HIGH);
  digitalWrite(Verde,LOW);
  }
  }
  void sensoradar(bool Detection){
    if(Detection == HIGH){
    digitalWrite(led,HIGH);
    tone(BUZZER,1500);
   lcd_JARED.clear();
   lcd_JARED.setCursor(0,1);
   lcd_JARED.print("hay alguien");
   lcd_JARED.setCursor(0,0);
   lcd_JARED.write(7);
   lcd_JARED.setCursor(15,0);
   lcd_JARED.write(7);
   delay(100);
   lcd_JARED.setCursor(2,0);
   lcd_JARED.write(7);
   lcd_JARED.setCursor(13,0);
   lcd_JARED.write(7);
   delay(100);
   lcd_JARED.setCursor(3,0);
   lcd_JARED.write(7);
   lcd_JARED.setCursor(12,0);
   lcd_JARED.write(7);
   delay(100);
   lcd_JARED.setCursor(4,0);
   lcd_JARED.write(7);
   lcd_JARED.setCursor(11,0);
   lcd_JARED.write(7);
   delay(100);
   lcd_JARED.setCursor(5,0);
   lcd_JARED.write(7);
   lcd_JARED.setCursor(10,0);
   lcd_JARED.write(7);
   delay(100);
   lcd_JARED.setCursor(7,0);
   lcd_JARED.write(8);
   lcd_JARED.setCursor(8,0);
   lcd_JARED.write(8);
   delay(250);
    }
    if(Detection == LOW){
    digitalWrite(led,LOW);
    noTone(BUZZER);
  }
  }
  void boton1(){
  estadopush1 = digitalRead(push1);
   if((estadopush1 == 1) && (estadoantes1 == 0)){
    estadorele1 = !estadorele1;
    delay(100);
   }
   estadoantes1 = estadopush1;

   if(estadorele1 == 1){
    lcd_JARED.clear();
    lcd_JARED.setCursor(0,0);
    lcd_JARED.print("luz 1 encendida");
    digitalWrite(rele1, HIGH);
   }
   else {
    lcd_JARED.clear();
    lcd_JARED.setCursor(0,0);
    lcd_JARED.print("luz 1 apagada");
    digitalWrite(rele1,LOW);
   }
  }
  void boton2(){
  estadopush2 = digitalRead(push2);
   if((estadopush2 == 1) && (estadoantes2 == 0)){
    estadorele2 = !estadorele2;
    delay(100);
   }
   estadoantes2 = estadopush2;

   if(estadorele2 == 1){
    lcd_JARED.clear();
    lcd_JARED.setCursor(0,1);
    lcd_JARED.print("luz 2 encendida");
    digitalWrite(rele2, HIGH);
   }
   else {
    lcd_JARED.clear();
    lcd_JARED.setCursor(0,1);
    lcd_JARED.print("luz 2 apagada");
    digitalWrite(rele2,LOW);
   }
  }
  void boton3(){
   estadopush3 = digitalRead(push3);
   if((estadopush3 == 1) && (estadoantes3 == 0)){
    estadorele3 = !estadorele3;
    delay(100);
   }
   estadoantes3 = estadopush3;

   if(estadorele3 == 1){
    Motor.write(45); 
     delay(500);
   }
   else {
     Motor.write(180);
     delay(500);
   }
  }
