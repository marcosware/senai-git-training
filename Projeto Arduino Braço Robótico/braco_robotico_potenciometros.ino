// C++ code
// Braço Robótico
// Marcos Vinícius & Wellington Junio
#include <Servo.h>

int num = 1;
int ptnc_braco = 0;
int ptnc_garra = 0;

Servo servo_braco;
Servo servo_garraBaixo;
Servo servo_garraCima;

void setup()
{
  servo_braco.attach(13, 100, 500);
  servo_garraCima.attach(12, 100, 500);
  servo_garraBaixo.attach(11, 100, 500);
  
  pinMode(A5, INPUT);
  pinMode(A4, INPUT);
  
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(4, OUTPUT);
  
  pinMode(2, INPUT);
}

void loop()
{
  ptnc_braco = analogRead(A5);
  servo_braco.write(ptnc_braco * (num * 0.05));
  ptnc_garra = analogRead(A4);
  servo_garraBaixo.write(ptnc_garra *(num * 0.05) + num);
  servo_garraCima.write(200 - (ptnc_garra * (num * 0.05)) + num);
  delay(5);
  displayNumber(num);
  if(digitalRead(2) == HIGH) {
    delay(500);
    if(num < 5) {
    	num += 1;
    }
    else{
    	num = 1;
    }
  }
}

void displayNumber(float num)
{
  if(num == 1) {
  	digitalWrite(4, LOW);
 	digitalWrite(5, HIGH);
 	digitalWrite(6, HIGH);
 	digitalWrite(7, HIGH);
 	digitalWrite(8, LOW);
 	digitalWrite(9, HIGH);
 	digitalWrite(10, HIGH);
  }
  if(num == 2) {
  	digitalWrite(4, LOW);
 	digitalWrite(5, LOW);
 	digitalWrite(6, HIGH);
 	digitalWrite(7, LOW);
 	digitalWrite(8, HIGH);
 	digitalWrite(9, LOW);
 	digitalWrite(10, LOW);
  }
  if(num == 3) {
  	digitalWrite(4, LOW);
 	digitalWrite(5, LOW);
 	digitalWrite(6, HIGH);
 	digitalWrite(7, LOW);
 	digitalWrite(8, LOW);
 	digitalWrite(9, LOW);
 	digitalWrite(10, HIGH);
  }
  if(num == 4) {
  	digitalWrite(4, LOW);
 	digitalWrite(5, HIGH);
 	digitalWrite(6, LOW);
 	digitalWrite(7, LOW);
 	digitalWrite(8, LOW);
 	digitalWrite(9, HIGH);
 	digitalWrite(10, HIGH);
  }
  if(num == 5) {
 	digitalWrite(4, HIGH);
 	digitalWrite(5, LOW);
 	digitalWrite(6, LOW);
 	digitalWrite(7, LOW);
 	digitalWrite(8, LOW);
 	digitalWrite(9, LOW);
 	digitalWrite(10, HIGH);
  }
}