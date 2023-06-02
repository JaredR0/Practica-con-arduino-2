/*
Centro Educativo Tecnico Laboral Kinal 
Taller de electronica y reparacion de computadoras
* Jared Hernan Ruiz Anleu - 2022011 
Codigo Tecnico EB5AM
Practica contador
*/

#define btn_rising  2
#define btn_falling 3

#define A 4
#define B 5
#define C 6
#define D 7
#define E 8
#define F 9
#define G 10

#define a 11
#define b 12
#define c 13
#define d 14
#define e 15
#define f 16
#define g 17

void funcion_ISR_falling(void);
void funcion_ISR_rising(void);

volatile static bool f_print = false;
volatile static unsigned char i=0;

void a1();
void a2();
void a3();
void a4();
void a5();
void a6();
void a7();
void a8();
void a9();
void a10();
void a11();
void a12();
void a13();
void a14();
void a15();
void a16();
void a17();
void a18();
void a19();
void a20();

void setup() {
  Serial.begin(19600);
  pinMode(btn_rising, INPUT);
  pinMode(btn_falling, INPUT);
  attachInterrupt(digitalPinToInterrupt(btn_rising),funcion_ISR_rising,RISING);
  attachInterrupt(digitalPinToInterrupt(btn_falling),funcion_ISR_falling,FALLING);

  pinMode(A,OUTPUT);
  pinMode(B,OUTPUT);
  pinMode(C,OUTPUT);
  pinMode(D,OUTPUT);
  pinMode(E,OUTPUT);
  pinMode(F,OUTPUT);
  pinMode(G,OUTPUT);
  
  pinMode(a,OUTPUT);
  pinMode(b,OUTPUT);
  pinMode(c,OUTPUT);
  pinMode(d,OUTPUT);
  pinMode(e,OUTPUT);
  pinMode(f,OUTPUT);
  pinMode(g,OUTPUT);
}
void loop() {
  if(f_print)
  {
    f_print = false; 
    if(i > 50){
      i=0;
    }
    else if(i <0){
      i=50;
    }
    Serial.println(i);

    
 a1();
 a2();
 a3();
 a4();
 a5();
 a6();
 a7();
 a8();
 a9();
 a10();
 a11();
 a12();
 a13();
 a14();
 a15();
 a16();
 a17();
 a18();
 a19();
 a20();
  }
 
  }
  void funcion_ISR_rising(void){
    f_print = true;
    i++;
  }
  void funcion_ISR_falling(void){
    f_print = true;   
    i--;
  }
  void a1(){
   if(i == 1){
   digitalWrite(A,LOW);
   digitalWrite(B,HIGH);
   digitalWrite(C,HIGH);
   digitalWrite(D,LOW);
   digitalWrite(E,LOW);
   digitalWrite(F,LOW);
   digitalWrite(G,LOW);
   digitalWrite(a,HIGH);
   digitalWrite(b,HIGH);
   digitalWrite(c,HIGH);
   digitalWrite(d,HIGH);
   digitalWrite(e,HIGH);
   digitalWrite(f,HIGH);
   digitalWrite(g,LOW);
   }
  }
  void a2(){
    if(i == 2){
   digitalWrite(A,HIGH);
   digitalWrite(B,HIGH);
   digitalWrite(C,LOW);
   digitalWrite(D,HIGH);
   digitalWrite(E,HIGH);
   digitalWrite(F,LOW);
   digitalWrite(G,LOW);
   digitalWrite(a,HIGH);
   digitalWrite(b,HIGH);
   digitalWrite(c,HIGH);
   digitalWrite(d,HIGH);
   digitalWrite(e,HIGH);
   digitalWrite(f,HIGH);
   digitalWrite(g,LOW);
    }
  }
  void a3(){
   if(i == 3){
   digitalWrite(A,HIGH);
   digitalWrite(B,HIGH);
   digitalWrite(C,HIGH);
   digitalWrite(D,HIGH);
   digitalWrite(E,LOW);
   digitalWrite(F,LOW);
   digitalWrite(G,HIGH);
   digitalWrite(a,HIGH);
   digitalWrite(b,HIGH);
   digitalWrite(c,HIGH);
   digitalWrite(d,HIGH);
   digitalWrite(e,HIGH);
   digitalWrite(f,HIGH);
   digitalWrite(g,LOW);
    }
  }
  void a4(){
    if(i == 4){
   digitalWrite(A,LOW);
   digitalWrite(B,HIGH);
   digitalWrite(C,HIGH);
   digitalWrite(D,LOW);
   digitalWrite(E,LOW);
   digitalWrite(F,HIGH);
   digitalWrite(G,HIGH);
   digitalWrite(a,HIGH);
   digitalWrite(b,HIGH);
   digitalWrite(c,HIGH);
   digitalWrite(d,HIGH);
   digitalWrite(e,HIGH);
   digitalWrite(f,HIGH);
   digitalWrite(g,LOW);
    }
    }
  void a5(){
    if(i == 5){
   digitalWrite(A,HIGH);
   digitalWrite(B,LOW);
   digitalWrite(C,HIGH);
   digitalWrite(D,HIGH);
   digitalWrite(E,LOW);
   digitalWrite(F,HIGH);
   digitalWrite(G,HIGH);
   digitalWrite(a,HIGH);
   digitalWrite(b,HIGH);
   digitalWrite(c,HIGH);
   digitalWrite(d,HIGH);
   digitalWrite(e,HIGH);
   digitalWrite(f,HIGH);
   digitalWrite(g,LOW);
    }
  
  }
  void a6(){
    if(i == 6){
   digitalWrite(A,HIGH);
   digitalWrite(B,LOW);
   digitalWrite(C,HIGH);
   digitalWrite(D,HIGH);
   digitalWrite(E,HIGH);
   digitalWrite(F,HIGH);
   digitalWrite(G,HIGH);
   digitalWrite(a,HIGH);
   digitalWrite(b,HIGH);
   digitalWrite(c,HIGH);
   digitalWrite(d,HIGH);
   digitalWrite(e,HIGH);
   digitalWrite(f,HIGH);
   digitalWrite(g,HIGH);
    }
  
  }
  void a7(){
  if(i == 7){
   digitalWrite(A,HIGH);
   digitalWrite(B,HIGH);
   digitalWrite(C,HIGH);
   digitalWrite(D,LOW);
   digitalWrite(E,LOW);
   digitalWrite(F,LOW);
   digitalWrite(G,LOW);
   digitalWrite(a,HIGH);
   digitalWrite(b,HIGH);
   digitalWrite(c,HIGH);
   digitalWrite(d,HIGH);
   digitalWrite(e,HIGH);
   digitalWrite(f,HIGH);
   digitalWrite(g,LOW);
    }
  }
  void a8(){
  if(i == 8){
   digitalWrite(A,HIGH);
   digitalWrite(B,HIGH);
   digitalWrite(C,HIGH);
   digitalWrite(D,HIGH);
   digitalWrite(E,HIGH);
   digitalWrite(F,HIGH);
   digitalWrite(G,HIGH);
   digitalWrite(a,HIGH);
   digitalWrite(b,HIGH);
   digitalWrite(c,HIGH);
   digitalWrite(d,HIGH);
   digitalWrite(e,HIGH);
   digitalWrite(f,HIGH);
   digitalWrite(g,LOW);
    }
  }
  void a9(){
  
  }
  void a10(){
  
  }
  void a11(){
  
  }
  void a12(){
  
  }
  void a13(){
  
  }
  void a14(){
  
  }
  void a15(){
  
  }
  void a16(){
  
  }
  void a17(){
  
  }
  void a18(){
  
  }
  void a19(){
  
  }
  void a20(){
  
  }
 
