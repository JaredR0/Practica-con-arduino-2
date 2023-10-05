/*
 * Fundacion Kinal
 * Centro educativo tecnico laboral Kinal
 * Electronica
 * Grado: Quinto
 * Sección: A
 * Curso: Taller de electronica digital y reparación de computadoras I
 * Nombre: Jared Hernan Ruiz Aleu 
 * Carnet: 2022011
 * Proyecto: Proyecto Final Multimetro Bluetooth
*/
#include <SoftwareSerial.h>

const int POSITIVO = 3;         // Pin positivo
const int NEGATIVO = 2;         // Pin negativo
const int sensorPin = A0;       // Seleccionar la entrada para el sensor
int sensorValue;                // Variable que almacena el valor raw (0 a 1023)
float voltaje;                  // Variable que almacena el voltaje (0.0 a 25.0)

float Sensibilidad = 0.185;

int RESISTOR = A1;
int Medidor = 0;
int Vin = 5;
float Vout = 0;
float R2 = 1000;
float R1 = 0;
float Const = 0;

SoftwareSerial BT(10, 9);

unsigned long tiempoUltimaMedicion = 0;
const unsigned long intervaloMedicion = 500;  // Intervalo de medición en milisegundos

enum Estado { ESPERA, MEDIR_VOLTAGE, MEDIR_RESISTENCIA, MEDIR_CORRIENTE };
Estado estado = ESPERA;

void setup() {
  pinMode(POSITIVO, OUTPUT);         // Configurar el pin positivo como salida
  pinMode(NEGATIVO, OUTPUT);         // Configurar el pin negativo como salida
  Serial.begin(9600);                // Iniciar la comunicación serial
  BT.begin(9600);
}

char recepcion;

void loop() {
  unsigned long tiempoActual = millis();
  if (tiempoActual - tiempoUltimaMedicion >= intervaloMedicion) {
    tiempoUltimaMedicion = tiempoActual;

    if (Medidor) {
      Const = Medidor * Vin;
      Vout = (Const) / 1024.0;
      Const = (Vin / Vout) - 1;
      R1 = R2 * Const;
    }

    switch (estado) {
      case ESPERA:
        // Esperando comandos...
        break;

      case MEDIR_VOLTAGE:
        digitalWrite(POSITIVO, HIGH);
        digitalWrite(NEGATIVO, HIGH);
        sensorValue = analogRead(sensorPin);
        voltaje = fmap(sensorValue, 0, 1023, 0.0, 25.0);
        Serial.print("Voltaje: ");
        Serial.println(voltaje);
        BT.print(voltaje);
        BT.print(";");
        break;

      case MEDIR_RESISTENCIA:
        digitalWrite(POSITIVO, LOW);
        digitalWrite(NEGATIVO, LOW);
        Medidor = analogRead(RESISTOR);
        Serial.print("Resistencia: ");
        Serial.println(R1);
        BT.print(R1);
        BT.print(";");
        break;

      case MEDIR_CORRIENTE:
        digitalWrite(NEGATIVO, LOW);
        float voltajeSensor = analogRead(A2) * (5.0 / 1023.0);
        float I = (voltajeSensor - 2.5) / Sensibilidad;
        Serial.print("Corriente: ");
        Serial.println(I);
        BT.print(I);
        BT.print(";");
        break;
    }
  }

  if (BT.available()) {
    recepcion = BT.read();
    Serial.println(recepcion);

    if (recepcion == '1') {
      estado = MEDIR_VOLTAGE;
    }

    if (recepcion == '2') {
      estado = MEDIR_RESISTENCIA;
    }

    if (recepcion == '3') {
      estado = MEDIR_CORRIENTE;
    }
  }
}

float fmap(float x, float in_min, float in_max, float out_min, float out_max) {
  return (x - in_min) * (out_max - out_min) / (in_max - in_min) + out_min;
}
