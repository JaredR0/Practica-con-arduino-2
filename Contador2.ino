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

void a0();
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
void a21();
void a22();
void a23();
void a24();
void a25();
void a26();
void a27();
void a28();
void a29();
void a30();
void a31();
void a32();
void a33();
void a34();
void a35();
void a36();
void a37();
void a38();
void a39();
void a40();
void a41();
void a42();
void a43();
void a44();
void a45();
void a46();
void a47();
void a48();
void a49();
void a50();

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
  if(f_print){
    f_print = false; 
  }
    
 Serial.println(i);
 a0();
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
 a21();
 a22();
 a23();
 a24();
 a25();
 a26();
 a27();
 a28();
 a29();
 a30();
 a31();
 a32();
 a33();
 a34();
 a35();
 a36();
 a37();
 a38();
 a39();
 a40();
 a41();
 a42();
 a43();
 a44();
 a45();
 a46();
 a47();
 a48();
 a49();
 a50();
  }
 
  void funcion_ISR_rising(void){
    f_print = true;
  i++;
  if (i > 50) {
    i = 0;
  }
}
  void funcion_ISR_falling(void){
    f_print = true;
  if (i == 0) {
    i = 50;
  } else {
    i--;
  }
}
  void a0(){
   if(i == 0){
   digitalWrite(A,HIGH);
   digitalWrite(B,HIGH);
   digitalWrite(C,HIGH);
   digitalWrite(D,HIGH);
   digitalWrite(E,HIGH);
   digitalWrite(F,HIGH);
   digitalWrite(G,LOW);
   digitalWrite(a,LOW);
   digitalWrite(b,LOW);
   digitalWrite(c,LOW);
   digitalWrite(d,LOW);
   digitalWrite(e,LOW);
   digitalWrite(f,LOW);
   digitalWrite(g,LOW);
   }
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
   digitalWrite(a,LOW);
   digitalWrite(b,LOW);
   digitalWrite(c,LOW);
   digitalWrite(d,LOW);
   digitalWrite(e,LOW);
   digitalWrite(f,LOW);
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
   digitalWrite(G,HIGH);
   digitalWrite(a,LOW);
   digitalWrite(b,LOW);
   digitalWrite(c,LOW);
   digitalWrite(d,LOW);
   digitalWrite(e,LOW);
   digitalWrite(f,LOW);
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
   digitalWrite(a,LOW);
   digitalWrite(b,LOW);
   digitalWrite(c,LOW);
   digitalWrite(d,LOW);
   digitalWrite(e,LOW);
   digitalWrite(f,LOW);
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
   digitalWrite(a,LOW);
   digitalWrite(b,LOW);
   digitalWrite(c,LOW);
   digitalWrite(d,LOW);
   digitalWrite(e,LOW);
   digitalWrite(f,LOW);
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
   digitalWrite(a,LOW);
   digitalWrite(b,LOW);
   digitalWrite(c,LOW);
   digitalWrite(d,LOW);
   digitalWrite(e,LOW);
   digitalWrite(f,LOW);
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
   digitalWrite(a,LOW);
   digitalWrite(b,LOW);
   digitalWrite(c,LOW);
   digitalWrite(d,LOW);
   digitalWrite(e,LOW);
   digitalWrite(f,LOW);
   digitalWrite(g,LOW);
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
   digitalWrite(a,LOW);
   digitalWrite(b,LOW);
   digitalWrite(c,LOW);
   digitalWrite(d,LOW);
   digitalWrite(e,LOW);
   digitalWrite(f,LOW);
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
   digitalWrite(a,LOW);
   digitalWrite(b,LOW);
   digitalWrite(c,LOW);
   digitalWrite(d,LOW);
   digitalWrite(e,LOW);
   digitalWrite(f,LOW);
   digitalWrite(g,LOW);
    }
  }
  void a9(){
  if(i == 9){
   digitalWrite(A,HIGH);
   digitalWrite(B,HIGH);
   digitalWrite(C,HIGH);
   digitalWrite(D,HIGH);
   digitalWrite(E,LOW);
   digitalWrite(F,HIGH);
   digitalWrite(G,HIGH);
   digitalWrite(a,LOW);
   digitalWrite(b,LOW);
   digitalWrite(c,LOW);
   digitalWrite(d,LOW);
   digitalWrite(e,LOW);
   digitalWrite(f,LOW);
   digitalWrite(g,LOW);
   }
  }
  void a10(){
  if(i == 10){
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
  void a11(){
  if(i == 11){
   digitalWrite(A,LOW);
   digitalWrite(B,HIGH);
   digitalWrite(C,HIGH);
   digitalWrite(D,LOW);
   digitalWrite(E,LOW);
   digitalWrite(F,LOW);
   digitalWrite(G,LOW);
   digitalWrite(a,LOW);
   digitalWrite(b,HIGH);
   digitalWrite(c,HIGH);
   digitalWrite(d,LOW);
   digitalWrite(e,LOW);
   digitalWrite(f,LOW);
   digitalWrite(g,LOW);
   }
  }
  void a12(){
   if(i == 12){
   digitalWrite(A,LOW);
   digitalWrite(B,HIGH);
   digitalWrite(C,HIGH);
   digitalWrite(D,LOW);
   digitalWrite(E,LOW);
   digitalWrite(F,LOW);
   digitalWrite(G,LOW);
   digitalWrite(a,HIGH);
   digitalWrite(b,HIGH);
   digitalWrite(c,LOW);
   digitalWrite(d,HIGH);
   digitalWrite(e,HIGH);
   digitalWrite(f,LOW);
   digitalWrite(g,HIGH);
   }
  }
  void a13(){
  if(i == 13){
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
   digitalWrite(e,LOW);
   digitalWrite(f,LOW);
   digitalWrite(g,HIGH);
   }
  }
  void a14(){
  if(i == 14){
   digitalWrite(A,LOW);
   digitalWrite(B,HIGH);
   digitalWrite(C,HIGH);
   digitalWrite(D,LOW);
   digitalWrite(E,LOW);
   digitalWrite(F,LOW);
   digitalWrite(G,LOW);
   digitalWrite(a,LOW);
   digitalWrite(b,HIGH);
   digitalWrite(c,HIGH);
   digitalWrite(d,LOW);
   digitalWrite(e,LOW);
   digitalWrite(f,HIGH);
   digitalWrite(g,HIGH);
   }
  }
  void a15(){
  if(i == 15){
   digitalWrite(A,LOW);
   digitalWrite(B,HIGH);
   digitalWrite(C,HIGH);
   digitalWrite(D,LOW);
   digitalWrite(E,LOW);
   digitalWrite(F,LOW);
   digitalWrite(G,LOW);
   digitalWrite(a,HIGH);
   digitalWrite(b,LOW);
   digitalWrite(c,HIGH);
   digitalWrite(d,HIGH);
   digitalWrite(e,LOW);
   digitalWrite(f,HIGH);
   digitalWrite(g,HIGH);
   }
  }
  void a16(){
  if(i == 16){
   digitalWrite(A,LOW);
   digitalWrite(B,HIGH);
   digitalWrite(C,HIGH);
   digitalWrite(D,LOW);
   digitalWrite(E,LOW);
   digitalWrite(F,LOW);
   digitalWrite(G,LOW);
   digitalWrite(a,HIGH);
   digitalWrite(b,LOW);
   digitalWrite(c,HIGH);
   digitalWrite(d,HIGH);
   digitalWrite(e,HIGH);
   digitalWrite(f,HIGH);
   digitalWrite(g,HIGH);
   }
  }
  void a17(){
  if(i == 17){
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
   digitalWrite(d,LOW);
   digitalWrite(e,LOW);
   digitalWrite(f,LOW);
   digitalWrite(g,LOW);
   }
  }
  void a18(){
  if(i == 18){
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
   digitalWrite(g,HIGH);
   }
  }
  void a19(){
  if(i == 19){
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
   digitalWrite(e,LOW);
   digitalWrite(f,HIGH);
   digitalWrite(g,HIGH);
   }
  }
  void a20(){
  if(i == 20){
   digitalWrite(A,HIGH);
   digitalWrite(B,HIGH);
   digitalWrite(C,LOW);
   digitalWrite(D,HIGH);
   digitalWrite(E,HIGH);
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
  void a21(){
  if(i == 21){
   digitalWrite(A,HIGH);
   digitalWrite(B,HIGH);
   digitalWrite(C,LOW);
   digitalWrite(D,HIGH);
   digitalWrite(E,HIGH);
   digitalWrite(F,LOW);
   digitalWrite(G,HIGH);
   digitalWrite(a,LOW);
   digitalWrite(b,HIGH);
   digitalWrite(c,HIGH);
   digitalWrite(d,LOW);
   digitalWrite(e,LOW);
   digitalWrite(f,LOW);
   digitalWrite(g,LOW);
   }
  }
  void a22(){
  if(i == 22){
   digitalWrite(A,HIGH);
   digitalWrite(B,HIGH);
   digitalWrite(C,LOW);
   digitalWrite(D,HIGH);
   digitalWrite(E,HIGH);
   digitalWrite(F,LOW);
   digitalWrite(G,HIGH);
   digitalWrite(a,HIGH);
   digitalWrite(b,HIGH);
   digitalWrite(c,LOW);
   digitalWrite(d,HIGH);
   digitalWrite(e,HIGH);
   digitalWrite(f,LOW);
   digitalWrite(g,HIGH);
   }
  }
  void a23(){
  if(i == 23){
   digitalWrite(A,HIGH);
   digitalWrite(B,HIGH);
   digitalWrite(C,LOW);
   digitalWrite(D,HIGH);
   digitalWrite(E,HIGH);
   digitalWrite(F,LOW);
   digitalWrite(G,HIGH);
   digitalWrite(a,HIGH);
   digitalWrite(b,HIGH);
   digitalWrite(c,HIGH);
   digitalWrite(d,HIGH);
   digitalWrite(e,LOW);
   digitalWrite(f,LOW);
   digitalWrite(g,HIGH);
   }
  }
  void a24(){
  if(i == 24){
   digitalWrite(A,HIGH);
   digitalWrite(B,HIGH);
   digitalWrite(C,LOW);
   digitalWrite(D,HIGH);
   digitalWrite(E,HIGH);
   digitalWrite(F,LOW);
   digitalWrite(G,HIGH);
   digitalWrite(a,LOW);
   digitalWrite(b,HIGH);
   digitalWrite(c,HIGH);
   digitalWrite(d,LOW);
   digitalWrite(e,LOW);
   digitalWrite(f,HIGH);
   digitalWrite(g,HIGH);
   }
  }
  void a25(){
  if(i == 25){
   digitalWrite(A,HIGH);
   digitalWrite(B,HIGH);
   digitalWrite(C,LOW);
   digitalWrite(D,HIGH);
   digitalWrite(E,HIGH);
   digitalWrite(F,LOW);
   digitalWrite(G,HIGH);
   digitalWrite(a,HIGH);
   digitalWrite(b,LOW);
   digitalWrite(c,HIGH);
   digitalWrite(d,HIGH);
   digitalWrite(e,LOW);
   digitalWrite(f,HIGH);
   digitalWrite(g,HIGH);
   }
  }
  void a26(){
  if(i == 26){
   digitalWrite(A,HIGH);
   digitalWrite(B,HIGH);
   digitalWrite(C,LOW);
   digitalWrite(D,HIGH);
   digitalWrite(E,HIGH);
   digitalWrite(F,LOW);
   digitalWrite(G,HIGH);
   digitalWrite(a,HIGH);
   digitalWrite(b,LOW);
   digitalWrite(c,HIGH);
   digitalWrite(d,HIGH);
   digitalWrite(e,HIGH);
   digitalWrite(f,HIGH);
   digitalWrite(g,HIGH);
   }
  }
  void a27(){
  if(i == 27){
   digitalWrite(A,HIGH);
   digitalWrite(B,HIGH);
   digitalWrite(C,LOW);
   digitalWrite(D,HIGH);
   digitalWrite(E,HIGH);
   digitalWrite(F,LOW);
   digitalWrite(G,HIGH);
   digitalWrite(a,HIGH);
   digitalWrite(b,HIGH);
   digitalWrite(c,HIGH);
   digitalWrite(d,LOW);
   digitalWrite(e,LOW);
   digitalWrite(f,LOW);
   digitalWrite(g,LOW);
   }
  }
  void a28(){
  if(i == 28){
   digitalWrite(A,HIGH);
   digitalWrite(B,HIGH);
   digitalWrite(C,LOW);
   digitalWrite(D,HIGH);
   digitalWrite(E,HIGH);
   digitalWrite(F,LOW);
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
  void a29(){
  if(i == 29){
   digitalWrite(A,HIGH);
   digitalWrite(B,HIGH);
   digitalWrite(C,LOW);
   digitalWrite(D,HIGH);
   digitalWrite(E,HIGH);
   digitalWrite(F,LOW);
   digitalWrite(G,HIGH);
   digitalWrite(a,HIGH);
   digitalWrite(b,HIGH);
   digitalWrite(c,HIGH);
   digitalWrite(d,HIGH);
   digitalWrite(e,LOW);
   digitalWrite(f,HIGH);
   digitalWrite(g,HIGH);
   }
  }
  void a30(){
  if(i == 30){
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
  void a31(){
  if(i == 31){
   digitalWrite(A,HIGH);
   digitalWrite(B,HIGH);
   digitalWrite(C,HIGH);
   digitalWrite(D,HIGH);
   digitalWrite(E,LOW);
   digitalWrite(F,LOW);
   digitalWrite(G,HIGH);
   digitalWrite(a,LOW);
   digitalWrite(b,HIGH);
   digitalWrite(c,HIGH);
   digitalWrite(d,LOW);
   digitalWrite(e,LOW);
   digitalWrite(f,LOW);
   digitalWrite(g,LOW);
   }
  }
 void a32(){
  if(i == 32){
   digitalWrite(A,HIGH);
   digitalWrite(B,HIGH);
   digitalWrite(C,HIGH);
   digitalWrite(D,HIGH);
   digitalWrite(E,LOW);
   digitalWrite(F,LOW);
   digitalWrite(G,HIGH);
   digitalWrite(a,HIGH);
   digitalWrite(b,HIGH);
   digitalWrite(c,LOW);
   digitalWrite(d,HIGH);
   digitalWrite(e,HIGH);
   digitalWrite(f,LOW);
   digitalWrite(g,HIGH);
   }
  }
 void a33(){
  if(i == 33){
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
   digitalWrite(e,LOW);
   digitalWrite(f,LOW);
   digitalWrite(g,HIGH);
   }
  }
  void a34(){
  if(i == 34){
   digitalWrite(A,HIGH);
   digitalWrite(B,HIGH);
   digitalWrite(C,HIGH);
   digitalWrite(D,HIGH);
   digitalWrite(E,LOW);
   digitalWrite(F,LOW);
   digitalWrite(G,HIGH);
   digitalWrite(a,LOW);
   digitalWrite(b,HIGH);
   digitalWrite(c,HIGH);
   digitalWrite(d,LOW);
   digitalWrite(e,LOW);
   digitalWrite(f,HIGH);
   digitalWrite(g,HIGH);
   }
  }
  void a35(){
  if(i == 35){
   digitalWrite(A,HIGH);
   digitalWrite(B,HIGH);
   digitalWrite(C,HIGH);
   digitalWrite(D,HIGH);
   digitalWrite(E,LOW);
   digitalWrite(F,LOW);
   digitalWrite(G,HIGH);
   digitalWrite(a,HIGH);
   digitalWrite(b,LOW);
   digitalWrite(c,HIGH);
   digitalWrite(d,HIGH);
   digitalWrite(e,LOW);
   digitalWrite(f,HIGH);
   digitalWrite(g,HIGH);
   }
  }
  void a36(){
  if(i == 36){
   digitalWrite(A,HIGH);
   digitalWrite(B,HIGH);
   digitalWrite(C,HIGH);
   digitalWrite(D,HIGH);
   digitalWrite(E,LOW);
   digitalWrite(F,LOW);
   digitalWrite(G,HIGH);
   digitalWrite(a,HIGH);
   digitalWrite(b,LOW);
   digitalWrite(c,HIGH);
   digitalWrite(d,HIGH);
   digitalWrite(e,HIGH);
   digitalWrite(f,HIGH);
   digitalWrite(g,HIGH);
   }
  }
  void a37(){
  if(i == 37){
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
   digitalWrite(d,LOW);
   digitalWrite(e,LOW);
   digitalWrite(f,LOW);
   digitalWrite(g,LOW);
   }
  }
  void a38(){
  if(i == 38){
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
   digitalWrite(g,HIGH);
   }
  }
  void a39(){
  if(i == 39){
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
   digitalWrite(e,LOW);
   digitalWrite(f,HIGH);
   digitalWrite(g,HIGH);
   }
  }
  void a40(){
  if(i == 40){
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
  void a41(){
  if(i == 41){
   digitalWrite(A,LOW);
   digitalWrite(B,HIGH);
   digitalWrite(C,HIGH);
   digitalWrite(D,LOW);
   digitalWrite(E,LOW);
   digitalWrite(F,HIGH);
   digitalWrite(G,HIGH);
   digitalWrite(a,LOW);
   digitalWrite(b,HIGH);
   digitalWrite(c,HIGH);
   digitalWrite(d,LOW);
   digitalWrite(e,LOW);
   digitalWrite(f,LOW);
   digitalWrite(g,LOW);
   }
  }
  void a42(){
  if(i == 42){
   digitalWrite(A,LOW);
   digitalWrite(B,HIGH);
   digitalWrite(C,HIGH);
   digitalWrite(D,LOW);
   digitalWrite(E,LOW);
   digitalWrite(F,HIGH);
   digitalWrite(G,HIGH);
   digitalWrite(a,HIGH);
   digitalWrite(b,HIGH);
   digitalWrite(c,LOW);
   digitalWrite(d,HIGH);
   digitalWrite(e,HIGH);
   digitalWrite(f,LOW);
   digitalWrite(g,HIGH);
   }
  }
  void a43(){
  if(i == 43){
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
   digitalWrite(e,LOW);
   digitalWrite(f,LOW);
   digitalWrite(g,HIGH);
   }
  }
  void a44(){
  if(i == 44){
   digitalWrite(A,LOW);
   digitalWrite(B,HIGH);
   digitalWrite(C,HIGH);
   digitalWrite(D,LOW);
   digitalWrite(E,LOW);
   digitalWrite(F,HIGH);
   digitalWrite(G,HIGH);
   digitalWrite(a,LOW);
   digitalWrite(b,HIGH);
   digitalWrite(c,HIGH);
   digitalWrite(d,LOW);
   digitalWrite(e,LOW);
   digitalWrite(f,HIGH);
   digitalWrite(g,HIGH);
   }
  }
  void a45(){
  if(i == 45){
   digitalWrite(A,LOW);
   digitalWrite(B,HIGH);
   digitalWrite(C,HIGH);
   digitalWrite(D,LOW);
   digitalWrite(E,LOW);
   digitalWrite(F,HIGH);
   digitalWrite(G,HIGH);
   digitalWrite(a,HIGH);
   digitalWrite(b,LOW);
   digitalWrite(c,HIGH);
   digitalWrite(d,HIGH);
   digitalWrite(e,LOW);
   digitalWrite(f,HIGH);
   digitalWrite(g,HIGH);
   }
  }
  void a46(){
  if(i == 46){
   digitalWrite(A,LOW);
   digitalWrite(B,HIGH);
   digitalWrite(C,HIGH);
   digitalWrite(D,LOW);
   digitalWrite(E,LOW);
   digitalWrite(F,HIGH);
   digitalWrite(G,HIGH);
   digitalWrite(a,HIGH);
   digitalWrite(b,LOW);
   digitalWrite(c,HIGH);
   digitalWrite(d,HIGH);
   digitalWrite(e,HIGH);
   digitalWrite(f,HIGH);
   digitalWrite(g,HIGH);
   }
  }
  void a47(){
  if(i == 47){
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
   digitalWrite(d,LOW);
   digitalWrite(e,LOW);
   digitalWrite(f,LOW);
   digitalWrite(g,LOW);
   }
  }
  void a48(){
  if(i == 48){
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
   digitalWrite(g,HIGH);
   }
  }
  void a49(){
  if(i == 49){
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
   digitalWrite(e,LOW);
   digitalWrite(f,HIGH);
   digitalWrite(g,HIGH);
   }
  }
  void a50(){
  if(i == 50){
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
