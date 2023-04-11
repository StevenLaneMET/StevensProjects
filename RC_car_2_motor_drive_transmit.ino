#include <SPI.h>
#include <nRF24L01.h>
#include <RF24.h>

RF24 radio(7, 8); // CE, CSN

const byte address[6] = "00001";

int XVal, YVal;

int Xpin=A0;
int Ypin=A1;

void setup() {

  Serial.begin(9600);
  radio.begin();
  radio.openWritingPipe(address);
  radio.setPALevel(RF24_PA_MIN);
  radio.stopListening();
  pinMode(Xpin,INPUT);
  pinMode(Ypin,INPUT);

}

void loop() {
  
  XVal=analogRead(Xpin);
  Serial.print("XVal = ");
  Serial.print(XVal);
  radio.write(&XVal, sizeof(XVal));

  YVal=analogRead(Ypin);
  Serial.print("  YVal = ");
  Serial.println(YVal);
  radio.write(&YVal, sizeof(YVal));
  delay(200);
}

//This code facilitates wireless communication between arduino unos using nRF24L01 modules. 
//A joystick connected to the transmitting arduino sends motor information to the receiving arduino which controls 2 dc motors, 
//therefore controlling the small, 3d printed, 3-wheel vehicle they are attached to. 
