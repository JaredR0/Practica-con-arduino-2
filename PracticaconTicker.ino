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

//Librerias
#include <Ticker.h>  //esta libreria me permite hacer uso del timer
#include <OneWire.h> //libreria para conectar el sensor 
#include <DallasTemperature.h> //libreria que lee la temperatura del sensor 

//Directivas de preprocesador para sensor de termperatura
OneWire oneWire(2);  //led on board, que posee mi arduino
DallasTemperature sensors(&oneWire);

//Directivas de procesador para el ultrasonico
int disparo = 9;
int receptor = 10;

//Funciones
void temperatura(void);
void ultra(void);

//Constructores 
Ticker tempAccion(temperatura,3000);
Ticker ultraAccion(ultra,6000);

void setup() {
  Serial.begin(19200);  //Inicio la comunicación serial
  sensors.begin();
  
  pinMode(disparo, OUTPUT);
  pinMode(receptor, OUTPUT);

  tempAccion.start();
  ultraAccion.start();
}

void loop() {
  tempAccion.update();
  ultraAccion.update();
}

void temperatura(){
sensors.requestTemperatures();   //Se envía el comando para leer la temperatura
int tempC= sensors.getTempCByIndex(0); //Se obtiene la temperatura en ºC
Serial.print("Temperatura en Celcius");
Serial.print(tempC);
}  

void ultra(){
 long sensor, distancia; //variables para saber ditancia 
  
  delay(500);
  digitalWrite(disparo,LOW);
  delayMicroseconds(2);
  digitalWrite(disparo,HIGH);
  delayMicroseconds(2);
  digitalWrite(disparo,LOW);  
  sensor = pulseIn(receptor,HIGH);
  distancia = sensor/59;
  
  if (distancia <= 5) {
    Serial.println("Sensor ultrasónico: Cerrado");
  } else {
    Serial.println("Sensor ultrasónico: Abierto");
  }
}
