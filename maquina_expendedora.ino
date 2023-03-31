/*
 Fundacion Kinal
 Centro Educativo Tecnico Laboral Kinal
 Electronica
 Grado: Quinto
 Sección A
 Nombre: Jared Hernan Ruiz Anleu
 Curso: Taller de electronica digital y reparación de computadoras I
 Carné: 2022011
 Fecha: 31 de marzo de 2023
 */

int pushARRIBA = 2;  //asignar el boton para que funcione el pin 2 Para izquierdo//
int pushABAJO  = 3;  //asignar el boton para que funcione el pin 3 para derecho//
int condicion  = 0;   //Se igual al 0 la funcion que va a sumarse para los botones//

//Estructura de datos//
  struct       OPCIONESMENU {
  char         nombre[9];       //nombre del producto//
  float        precio_unitario; //precio unitario del producto//
  int          stock;           //Cantidad de existencias//
  int          Reserva;         //Cantidad de existencias en reserva//
  float        precio_por_lote; //Precio por todo el lote//
  };

//variables para los datos de los productos//
 OPCIONESMENU pro1         = {"LAYS", 4, 12, 8, 48};
 OPCIONESMENU pro2         = {"TAKIS", 6, 4, 10, 24};
 OPCIONESMENU pro3         = {"ELOTITOS", 2, 5, 15, 10};
 OPCIONESMENU pro4         = {"DORITOS", 5, 15, 18, 75};
 OPCIONESMENU productos [] = {pro1, pro2, pro3, pro4}; //variable para los Serial.print//  

void setup() {
  Serial.begin(9600); //iniciador de la conversacion serial
  Serial.println("Elige un producto");//Texto para el menu//
  pinMode(pushARRIBA,INPUT); //asignar como entrada el pin 1//
  pinMode(pushABAJO,INPUT); //asignar como entrada el pin 2//
}
void loop() 
{
  if(digitalRead(pushARRIBA)==HIGH)//Detecta si el boton esta cerrado o abierto//
  {
    delay(100);//Tiempo para la reaccion de boton//
    condicion++;//condicion para moverse con el boton sumando//
     if(condicion>3) condicion=0; //condicion para regresar en el menu//
 Serial.println(condicion + 0);//condicion para pasar de producto aqui se puede modificar si se quiere mostrar saltado//
 Serial.println("productos");
 Serial.println("Nombre del producto:");
 Serial.println(productos[condicion].nombre);
 Serial.println(productos[condicion].precio_unitario);
 Serial.println(productos[condicion].stock);
 Serial.println(productos[condicion].Reserva);
 Serial.println(productos[condicion].precio_por_lote);
  }

  if(digitalRead(pushABAJO)==HIGH)//Detecta si el boton esta cerrado o abierto//
  {
    delay(100);//tiepo de reaccion del boton//
    condicion--;//condicion para moverse con el boton restando//
    if(condicion<0) condicion=3;//condicion para regresar en el menu//
 Serial.println(condicion + 0);//condicion para pasar de producto aqui se puede modificar si se quiere mostrar saltado//
 Serial.println("productos");
 Serial.println("Nombre del producto:");
 Serial.println(productos[condicion].nombre);
 Serial.println(productos[condicion].precio_unitario);
 Serial.println(productos[condicion].stock);
 Serial.println(productos[condicion].Reserva);
 Serial.println(productos[condicion].precio_por_lote);
  }

 delay(100);

}

 
 

 
