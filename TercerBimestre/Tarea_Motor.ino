#define Push1 2
#define Push2 3
#define Push3 4

#define LeG 5
#define LeY 6
#define LeR 7

#define vel1 8
#define vel2 9
#define vel3 10
#define vel4 11

void Primer_fun();
void Segunda_fun();
void Tercera_fun();
void Cuarta_fun();

void setup() {

    Serial.begin(9600);
    
    pinMode(LeG, OUTPUT);
    pinMode(LeY, OUTPUT);
    pinMode(LeR, OUTPUT);
    
    pinMode(Push1, INPUT);
    pinMode(Push2, INPUT);
    pinMode(Push3, INPUT);

    pinMode(vel1, OUTPUT);
    pinMode(vel2, OUTPUT);
    pinMode(vel3, OUTPUT);
    pinMode(vel4, OUTPUT);
    
}

void loop() {
  
 Primer_fun();
 Segunda_fun();
 Tercera_fun();
 Cuarta_fun();
 
}

void Primer_fun() {
  int est1 = digitalRead(Push1);
  int est3 = digitalRead(Push3);
  if (est1 == HIGH && est3 == LOW ) {
    digitalWrite(LeG, HIGH);

    digitalWrite(vel1, LOW);
    digitalWrite(vel2, LOW);
    digitalWrite(vel3, LOW);
    digitalWrite(vel4, HIGH); 
    delay(250);

    digitalWrite(vel1, LOW);
    digitalWrite(vel2, LOW);
    digitalWrite(vel3, HIGH);
    digitalWrite(vel4, LOW); 
    delay(250);

    digitalWrite(vel1, LOW);
    digitalWrite(vel2, HIGH);
    digitalWrite(vel3, LOW);
    digitalWrite(vel4, LOW); 
    delay(250);

    digitalWrite(vel1, HIGH);
    digitalWrite(vel2, LOW);
    digitalWrite(vel3, LOW);
    digitalWrite(vel4, LOW); 
    delay(250);
  }
  else {
    digitalWrite(LeG, LOW);

    digitalWrite(vel1, LOW);
    digitalWrite(vel2, LOW);
    digitalWrite(vel3, LOW);
    digitalWrite(vel4, LOW);
  }
}

void Segunda_fun() {
  int est2 = digitalRead(Push2);
  int est3 = digitalRead(Push3);
  if (est2 == HIGH && est3 == LOW) {
    digitalWrite(LeY, HIGH);
    
    digitalWrite(vel1, HIGH);
    digitalWrite(vel2, LOW);
    digitalWrite(vel3, LOW);
    digitalWrite(vel4, LOW); 
    delay(250);

    digitalWrite(vel1, LOW);
    digitalWrite(vel2, HIGH);
    digitalWrite(vel3, LOW);
    digitalWrite(vel4, LOW); 
    delay(250);

    digitalWrite(vel1, LOW);
    digitalWrite(vel2, LOW);
    digitalWrite(vel3, HIGH);
    digitalWrite(vel4, LOW); 
    delay(250);

    digitalWrite(vel1, LOW);
    digitalWrite(vel2, LOW);
    digitalWrite(vel3, LOW);
    digitalWrite(vel4, HIGH); 
    delay(250);
  }
  else {
    digitalWrite(LeY, LOW);

    digitalWrite(vel1, LOW);
    digitalWrite(vel2, LOW);
    digitalWrite(vel3, LOW);
    digitalWrite(vel4, LOW);
  }
}

void Tercera_fun() {
  int est1 = digitalRead(Push1);
  int est2 = digitalRead(Push2);
  int est3 = digitalRead(Push3);
  
  if (est3 && est2 == HIGH) {
    digitalWrite(LeR, HIGH);
    digitalWrite(LeY, LOW);

    digitalWrite(vel1, HIGH);
    digitalWrite(vel2, LOW);
    digitalWrite(vel3, LOW);
    digitalWrite(vel4, LOW); 
    delay(125);

    digitalWrite(vel1, LOW);
    digitalWrite(vel2, HIGH);
    digitalWrite(vel3, LOW);
    digitalWrite(vel4, LOW); 
    delay(125);

    digitalWrite(vel1, LOW);
    digitalWrite(vel2, LOW);
    digitalWrite(vel3, HIGH);
    digitalWrite(vel4, LOW); 
    delay(125);

    digitalWrite(vel1, LOW);
    digitalWrite(vel2, LOW);
    digitalWrite(vel3, LOW);
    digitalWrite(vel4, HIGH); 
    delay(125);
  }
  else {
    digitalWrite(LeR, LOW);

    digitalWrite(vel1, LOW);
    digitalWrite(vel2, LOW);
    digitalWrite(vel3, LOW);
    digitalWrite(vel4, LOW);
  }
}

void Cuarta_fun() {
  int est1 = digitalRead(Push1);
  int est2 = digitalRead(Push2);
  int est3 = digitalRead(Push3);
  
  if (est3 && est1 == HIGH) {
    digitalWrite(LeR, HIGH);
    digitalWrite(LeG, LOW);
    
    digitalWrite(vel1, LOW);
    digitalWrite(vel2, LOW);
    digitalWrite(vel3, LOW);
    digitalWrite(vel4, HIGH); 
    delay(125);

    digitalWrite(vel1, LOW);
    digitalWrite(vel2, LOW);
    digitalWrite(vel3, HIGH);
    digitalWrite(vel4, LOW); 
    delay(125);

    digitalWrite(vel1, LOW);
    digitalWrite(vel2, HIGH);
    digitalWrite(vel3, LOW);
    digitalWrite(vel4, LOW); 
    delay(125);

    digitalWrite(vel1, HIGH);
    digitalWrite(vel2, LOW);
    digitalWrite(vel3, LOW);
    digitalWrite(vel4, LOW); 
    delay(125);
  }
  else {
    digitalWrite(LeR, LOW);

    digitalWrite(vel1, LOW);
    digitalWrite(vel2, LOW);
    digitalWrite(vel3, LOW);
    digitalWrite(vel4, LOW);
  }
}
