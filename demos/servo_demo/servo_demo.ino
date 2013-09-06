#include <Servo.h>

// constant declerations
Servo servo1;
const int servoPin = 9;
const int switchPin1=2;
const int switchPin2 = 4;

int servoPos =0;

void setup(){
 servo1.attach(servoPin);
 pinMode(  switchPin1,INPUT );
 pinMode(  switchPin2,INPUT );  
}

void loop(){
  if (digitalRead(switchPin1) == HIGH){
   rotateLeft(); 
  }
  else if(digitalRead(switchPin2) == HIGH){
   rotateRight(); 
  }
  
  
}

void rotateLeft(){
  for(; servoPos > 0; servoPos--){
   servo1.write(servoPos);
   delay(20);
   if(digitalRead(switchPin1) == HIGH){
    return; 
   }
   
   else if(digitalRead(switchPin2) == HIGH){
     rotateRight();
     return;     
   }
  }
  
}


void rotateRight(){
 for(; servoPos < 180; servoPos++){
   servo1.write(servoPos);
   delay(20);
   if(digitalRead(switchPin1) == HIGH){
     rotateLeft();
     return; 
   }
   else if(digitalRead(switchPin2) == HIGH){
     return;   
   }
  }
  
}

