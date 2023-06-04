#define botonamarillo  2
#define botonverde     3
#define ledRojo        4
#define ledVerde       5
#define ledAzul        6
void setup() {
  Serial.begin(9600);
  pinMode(botonamarillo,INPUT);
  pinMode(botonverde,INPUT);
  pinMode(ledRojo,OUTPUT);
  pinMode(ledVerde,OUTPUT);
  pinMode(ledAzul,OUTPUT);
}
void loop() {
      bool botonAmarillo = digitalRead(botonamarillo);
      bool botonVerde = digitalRead(botonverde);

  if (botonAmarillo == LOW && botonVerde == HIGH) { // Se presiona el botón 1//
    Serial.println("1");
    digitalWrite(ledRojo, HIGH); // Enciende el LED rojo//
    digitalWrite(ledVerde, HIGH); // Apaga el LED verde//
    digitalWrite(ledAzul, LOW); // Enciende el LED azul//
  } else if (botonAmarillo == HIGH && botonVerde == LOW) { // Se presiona el botón 2//
    Serial.println("2");
    digitalWrite(ledRojo, LOW); // Apaga el LED rojo//
    digitalWrite(ledVerde, HIGH); // Enciende el LED verde//
    digitalWrite(ledAzul, HIGH); // Enciende el LED azul//
  } else if (botonAmarillo == HIGH && botonVerde == HIGH) { // Se presionan ambos botones//
    Serial.println("3");
    digitalWrite(ledRojo, HIGH); // Enciende el LED rojo//
    digitalWrite(ledVerde, LOW); // Apaga el LED verde//
    digitalWrite(ledAzul, HIGH); // Apaga el LED azul//
  } else { // No se presiona ningún botón//
    Serial.println("No se presiona");
    digitalWrite(ledRojo, HIGH); // Enciende el LED rojo//
    delay(500);
    digitalWrite(ledRojo, LOW); // Apaga el LED rojo//
    digitalWrite(ledVerde, HIGH); // Enciende el LED verde//
    delay(500);
    digitalWrite(ledVerde, LOW); // Apaga el LED verde//
    digitalWrite(ledAzul, HIGH); // Enciende el LED azul//
    delay(500);
    digitalWrite(ledAzul, LOW); // Apaga el LED azul//
  }
}
