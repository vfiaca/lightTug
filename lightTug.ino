#include <Servo.h>

Servo cntServo1;
Servo cntServo2;
int spin1=2;
int spin2=3;

int ldrValue1;
int ldrValue2;
int ldrPin1 = A0;
int ldrPin2 = A1;


void setup() {
  // put your setup code here, to run once:
cntServo1.attach(spin1);
cntServo2.attach(spin2);

Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
ldrValue1 = analogRead(ldrPin1);
ldrValue2 = analogRead(ldrPin2);
//Serial.println(ldrValue2);
if (ldrValue1 > ldrValue2){
cntServo1.write(0);
cntServo2.write(0);
} else {
cntServo1.write(180);
cntServo2.write(180);
}

delay (10);
}
