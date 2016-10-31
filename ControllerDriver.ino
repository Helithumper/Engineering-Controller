#include <Joystick.h>


int UD = 0;
int LR = 0;

int buffer = 20;

boolean up = false;
boolean down = false;
boolean right = false;
boolean left = false;


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
  for(int i = 0; i < 16; i++){
    
  }
  int UD1 = map(analogRead(A0),0,1024,-127,127);
  int LR1 = -1* map(analogRead(A1),0,1024,-127,127);
  Joystick.setYAxis(UD1);
  Joystick.setXAxis(LR1); 
  /*Serial.println("-----");
  if(UD2<=15&&UD2>=-15&&LR2>=-20&&LR2<=20){
    up = false;
    down = false;
    left = false;
    right = false;
  }else{
  up = (UD2>(-1*LR2)&&(UD2>=(LR2)))?true:false;
  down = (UD2<(-1*LR2)&&(UD2<=(LR2)))?true:false;
  left = (UD2<=(-1*LR2)&&(UD2>(LR2)))?true:false;
  right  = (UD2>=(-1*LR2)&&(UD2<(LR2)))?true:false;}
  if(down){
    Serial.println("down");
    Joystick.pressButton(1);
    Joystick.releaseButton(2);
    Joystick.releaseButton(3);
    Joystick.releaseButton(4);
  }
  else if(up){
    Serial.println("up");
    Joystick.releaseButton(1);
    Joystick.pressButton(2);
    Joystick.releaseButton(3);
    Joystick.releaseButton(4);
  }else if(left){
    Serial.println("left");
    Joystick.releaseButton(1);
    Joystick.releaseButton(2);
    Joystick.pressButton(3);
    Joystick.releaseButton(4);
  }else if(right){
    Serial.println("right");
    Joystick.releaseButton(1);
    Joystick.releaseButton(2);
    Joystick.releaseButton(3);
    Joystick.pressButton(4);
  }
  else{
    Serial.println("NOTHING");
    Joystick.releaseButton(1);
    Joystick.releaseButton(2);
    Joystick.releaseButton(3);
    Joystick.releaseButton(4);
    up=false;
    down=false;
    left=false;
    right=false;
  }*/
  /*if(digitalRead(2)){
    Serial.println("2");
    Joystick.pressButton(10);
  }
  else{
    Joystick.releaseButton(10);
  }
  if(digitalRead(3)){
    Serial.println("3");
    Joystick.pressButton(11);
  }
  else{
    Joystick.releaseButton(11);
  }
  if(digitalRead(4)){
    Serial.println("4");
    Joystick.pressButton(12);
  }
  else{
    Joystick.releaseButton(12);
  }
  if(digitalRead(5)){
    Serial.println("5");
    Joystick.pressButton(13);
  }
  else{
    Joystick.releaseButton(13);
  }
  if(digitalRead(6)){
    Serial.println("6");
    Joystick.pressButton(14);
  }
  else{
    Joystick.releaseButton(14);
  }
  if(digitalRead(7)){
    Serial.println("7");
    Joystick.pressButton(15);
  }
  else{
    Joystick.releaseButton(15);
  }*/
  Joystick.setButton(2,digitalRead(2));
  
  Joystick.setButton(3,digitalRead(3));
  Joystick.setButton(4,digitalRead(4));
  Joystick.setButton(5,digitalRead(5));
  Joystick.setButton(6,digitalRead(6));
  Joystick.setButton(7,digitalRead(7));
 
}
