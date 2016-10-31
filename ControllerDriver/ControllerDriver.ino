#include <Joystick.h>

void setup() {
  Serial.begin(9600);
  Joystick.begin();
  pinMode(2,INPUT);
  pinMode(3,INPUT);
  pinMode(4,INPUT);
  pinMode(5,INPUT);
  pinMode(6,INPUT);
  pinMode(7,INPUT);
  
}

void loop() {

  //Joystick
  int UD1 = map(analogRead(A0),0,1024,-127,127);
  int LR1 = -1* map(analogRead(A1),0,1024,-127,127);
  Joystick.setYAxis(UD1);
  Joystick.setXAxis(LR1); 

  //Buttons
  Joystick.setButton(2,digitalRead(2));
  Joystick.setButton(3,digitalRead(3));
  Joystick.setButton(4,digitalRead(4));
  Joystick.setButton(5,digitalRead(5));
  Joystick.setButton(6,digitalRead(6));
  Joystick.setButton(7,digitalRead(7));
 
}
