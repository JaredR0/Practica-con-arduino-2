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
#define bomba_de_agua 3 //se define pin de la bomba de agua//

void setup() {
  Serial.begin(9600); //inicia comunicación serial//
  pinMode(bomba_de_agua, OUTPUT);//se coloca el pin de la bomba como salida//
  
}

void loop() {
 int transistor = analogRead(14); //variable global en el loop para el transistor analogo//
 float voltage_que_entra_del_transistor = transistor * (5.0 / 1023.0);//se toma un float porque son numeros con decimal//
 Serial.println(voltage_que_entra_del_transistor);//se imprimen los valores que detecta el arduino provenientes del transistor//

 if(voltage_que_entra_del_transistor < 0.60){ //función para que cuando detecte este voltaje se apage la bomba//
  digitalWrite(bomba_de_agua,HIGH);
 }
  if(voltage_que_entra_del_transistor > 0.65){ //función para que cuando detecte ese voltaje se enciendo la bomba//
   digitalWrite(bomba_de_agua,LOW);
}
}
