#include <Servo.h>

Servo myservo1;
Servo myservo2;
Servo myservo3;
Servo myservo4;
Servo myservo5;

int buttonRead;

const int BUTTON1=7;
const int BUTTON2=8;
const int BUTTON3=9;
const int BUTTON4=10;
const int BUTTON5=11;

int BUTTONstate1=0;
int BUTTONstate2=0;
int BUTTONstate3=0;
int BUTTONstate4=0;
int BUTTONstate5=0;

int angle = 0;
void setup() {
 
  myservo1.attach(2);
  myservo2.attach(3);
  myservo3.attach(4);
  myservo4.attach(5);
  myservo5.attach(6);

  pinMode(BUTTON1, INPUT);
  pinMode(BUTTON2, INPUT);
  pinMode(BUTTON3, INPUT);
  pinMode(BUTTON4, INPUT);
  pinMode(BUTTON5, INPUT);

Serial.begin(9600);
  
}
void loop() {
  // Tell the servo to go to a particular angle:
  
  BUTTONstate1=digitalRead(BUTTON1);
  BUTTONstate2=digitalRead(BUTTON2);
  BUTTONstate3=digitalRead(BUTTON3);
  BUTTONstate4=digitalRead(BUTTON4);
  BUTTONstate5=digitalRead(BUTTON5);

  Serial.print(BUTTONstate1);
  Serial.print(BUTTONstate2);
  Serial.print(BUTTONstate3);
  Serial.print(BUTTONstate4);
  Serial.println(BUTTONstate5);

  if (BUTTONstate1==1){
  myservo1.write(180);
  myservo2.write(180);
  myservo3.write(180);
  myservo4.write(180);
  myservo5.write(180);
  delay(1000);
  myservo1.write(0);
  myservo2.write(0);
  myservo3.write(0);
  myservo4.write(0);
  myservo5.write(0);
  delay(1000);
  myservo1.write(180);
  myservo2.write(180);
  myservo3.write(180);
  myservo4.write(180);
  myservo5.write(180);
  delay(1000);
  myservo1.write(0);
  myservo2.write(0);
  myservo3.write(0);
  myservo4.write(0);
  myservo5.write(0);
  delay(1000);
  }
   else {
  myservo1.write(0);
  myservo2.write(0);
  myservo3.write(0);
  myservo4.write(0);
  myservo5.write(0);
}

  if (BUTTONstate2==1){  
  myservo1.write(180);
  myservo2.write(0);
  myservo3.write(0);
  myservo4.write(0);
  myservo5.write(0);
  delay(500);
  myservo1.write(0);
  myservo2.write(180);
  myservo3.write(0);
  myservo4.write(0);
  myservo5.write(0);
  delay(500);
  myservo1.write(0);
  myservo2.write(0);
  myservo3.write(180);
  myservo4.write(0);
  myservo5.write(0);
  delay(500);
  myservo1.write(0);
  myservo2.write(0);
  myservo3.write(0);
  myservo4.write(180);
  myservo5.write(0);
  delay(500);
  myservo1.write(0);
  myservo2.write(0);
  myservo3.write(0);
  myservo4.write(0);
  myservo5.write(180);
  delay(500);
  myservo1.write(0);
  myservo2.write(0);
  myservo3.write(0);
  myservo4.write(180);
  myservo5.write(0);
  delay(500);
  myservo1.write(0);
  myservo2.write(0);
  myservo3.write(180);
  myservo4.write(0);
  myservo5.write(0);
  delay(500);
  myservo1.write(0);
  myservo2.write(180);
  myservo3.write(0);
  myservo4.write(0);
  myservo5.write(0);
  delay(500);
  myservo1.write(180);
  myservo2.write(0);
  myservo3.write(0);
  myservo4.write(0);
  myservo5.write(0);
  delay(500);
  myservo1.write(0);
  myservo2.write(0);
  myservo3.write(0);
  myservo4.write(0);
  myservo5.write(0);
  delay(500);
}
   else {
  myservo1.write(0);
  myservo2.write(0);
  myservo3.write(0);
  myservo4.write(0);
  myservo5.write(0);
}

  if (BUTTONstate3==1){
  myservo1.write(180);
  myservo2.write(180);
  myservo3.write(0);
  myservo4.write(180);
  myservo5.write(0);
  delay(4000);
  }
   else {
  myservo1.write(0);
  myservo2.write(0);
  myservo3.write(0);
  myservo4.write(0);
  myservo5.write(0);
}

  if (BUTTONstate4==1){
  myservo1.write(180);
  myservo2.write(180);
  myservo3.write(180);
  myservo4.write(180);
  myservo5.write(180);
  delay(1000);
  myservo1.write(180);
  myservo2.write(180);
  myservo3.write(180);
  myservo4.write(180);
  myservo5.write(0);
  delay(1000);
  myservo1.write(180);
  myservo2.write(180);
  myservo3.write(180);
  myservo4.write(0);
  myservo5.write(0);
  delay(1000);
  myservo1.write(180);
  myservo2.write(180);
  myservo3.write(0);
  myservo4.write(0);
  myservo5.write(0);
  delay(1000);
  myservo1.write(180);
  myservo2.write(0);
  myservo3.write(0);
  myservo4.write(0);
  myservo5.write(0);
  delay(1000);
  myservo1.write(0);
  myservo2.write(0);
  myservo3.write(0);
  myservo4.write(0);
  myservo5.write(0);
  delay(1000);
  }
   else {
  myservo1.write(0);
  myservo2.write(0);
  myservo3.write(0);
  myservo4.write(0);
  myservo5.write(0);
}

  if (BUTTONstate5==1){
  myservo1.write(0);
  myservo2.write(180);
  myservo3.write(180);
  myservo4.write(0);
  myservo5.write(0);
  delay(3000);
  myservo1.write(0);
  myservo2.write(0);
  myservo3.write(0);
  myservo4.write(180);
  myservo5.write(180);
  delay(3000);
  }  
   else {
  myservo1.write(0);
  myservo2.write(0);
  myservo3.write(0);
  myservo4.write(0);
  myservo5.write(0);
}
   delay(1000);
  }

#This code controls a 3d printed robotic hand using an arduino mega and 5 servos, one connected by cable to each finger.
#There are also 5 buttons that, when pushed, each cause the hand to perform a different action such as make a fist or cycle each finger to full extension.
