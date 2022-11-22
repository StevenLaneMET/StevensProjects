#include <SPI.h>
#include <nRF24L01.h>
#include <RF24.h>

RF24 radio(7, 8); // CE, CSN

const byte address[6] = "00001";

int enA = 12;
int in1 = 6;
int in2 = 5;

int enB = 13;
int in3 = 4;
int in4 = 3;

int MotorSpeed1 = 0;
int MotorSpeed2 = 0;

int mtrspd = 200;

int XVal, YVal;

void setup() {
  
  Serial.begin(9600);
  radio.begin();
  radio.openReadingPipe(0, address);
  radio.setPALevel(RF24_PA_MIN);
  radio.startListening();
  pinMode(enA, OUTPUT);
  pinMode(enB, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
}

void loop() {


  if (radio.available()) {

    radio.read(&XVal, sizeof(XVal));
    Serial.print("XVal = ");
    Serial.print(XVal);
    delay(10);

    radio.read(&YVal, sizeof(YVal));
    Serial.print("  YVal = ");
    Serial.println(YVal);
  
    if (XVal > 560){
  
      digitalWrite(in1, LOW);
      digitalWrite(in2, HIGH);

      digitalWrite(in3, HIGH);
      digitalWrite(in4, LOW);
    
      MotorSpeed1 = mtrspd;
      MotorSpeed2 = mtrspd;
    
      analogWrite(enA, MotorSpeed1);
      analogWrite(enB, MotorSpeed2);
    }

    else if (XVal < 460){
  
      digitalWrite(in1, HIGH);
      digitalWrite(in2, LOW);

      digitalWrite(in3, LOW);
      digitalWrite(in4, HIGH);
    
      MotorSpeed1 = mtrspd;
      MotorSpeed2 = mtrspd;
    
      analogWrite(enA, MotorSpeed1);
      analogWrite(enB, MotorSpeed2);
    }

    else if (YVal < 460){
  
      digitalWrite(in1, LOW);
      digitalWrite(in2, HIGH);

      digitalWrite(in3, LOW);
      digitalWrite(in4, HIGH);
    
      MotorSpeed1 = mtrspd;
      MotorSpeed2 = mtrspd;
    
      analogWrite(enA, MotorSpeed1);
      analogWrite(enB, MotorSpeed2);
    }

    else if (YVal > 560){
  
      digitalWrite(in1, HIGH);
      digitalWrite(in2, LOW);

      digitalWrite(in3, HIGH);
      digitalWrite(in4, LOW);
    
      MotorSpeed1 = mtrspd;
      MotorSpeed2 = mtrspd;
    
      analogWrite(enA, MotorSpeed1);
      analogWrite(enB, MotorSpeed2);
  }
    else 
{
      MotorSpeed1 = 0;
      MotorSpeed2 = 0;
    
      analogWrite(enA, MotorSpeed1);
      analogWrite(enB, MotorSpeed2);
}      }}
