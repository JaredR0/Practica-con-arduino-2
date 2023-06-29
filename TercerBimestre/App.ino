
/* 
 * Fundacion Kinal
 * Centro educativo tecnico laboral Kinal
 * Perito en electonica
 * Quinto perito
 * EB5AM 
 * Taller de electronica digital y reparacion de computadoras
 * Nombre: Jared Hernan Ruiz Anleu
 * Carne: 2022011
 * Fecha: 1/05/2023
 * Proyecto: Sensor de Temperatura DS18B20
 */
 
 #include <SoftwareSerial.h>
 #include <OneWire.h>
 #include <DallasTemperature.h>

SoftwareSerial bt(11, 10);

#define Led 2

OneWire ourWire(3);
DallasTemperature sensors(&ourWire);

void setup() {
  Serial.begin(9600);
  Serial.println("listo");
  bt.begin(9600);
  sensors.begin();
  pinMode(Led, OUTPUT);
}

char recepcion;
void loop() {
  if (bt.available()) {
    recepcion = bt.read();
    Serial.println(recepcion);
    if (recepcion == '1') {
      Serial.println("encender");
      digitalWrite(2, HIGH);
    }
    if (recepcion == '2') {
      Serial.println("apagar");
      digitalWrite(2, LOW);
    }
  }
  if( Serial.available() ){
    bt.write(Serial.read());
  } 
  sensors.requestTemperatures();
  float temp=sensors.getTempCByIndex(0);
  Serial.println(temp);
  bt.print(temp);
  bt.print(";");
}
