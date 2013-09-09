#include <Servo.h>

// constant declerations
Servo servo1;
const int servoPin = 11;
const int switchPin1=2;
const int switchPin2 = 4;
const int ledPin = 3;

int servoPos =0;

void setup(){
 servo1.attach(servoPin);
 pinMode(  switchPin1,INPUT );
 pinMode(  switchPin2,INPUT );  
 pinMode( ledPin, OUTPUT);
 Serial.begin(9600);
 
}

void loop(){
  if (digitalRead(switchPin1) == HIGH){
   rotateLeft(); 
  }
  else if(digitalRead(switchPin2) == HIGH){
   rotateRight(); 
  }
  Serial.println(digitalRead(switchPin1));
  //Serial.println(digitalRead(switchPin2));
  
  
}

void rotateLeft(){
  for(; servoPos < 180; servoPos++){
   servo1.write(servoPos);     
   int out = map( servoPos,0,180,0,255);
   analogWrite(ledPin,out);
   delay(20); 
   
   if(digitalRead(switchPin1) == HIGH){
    break;
   }
   
   else if(digitalRead(switchPin2) == HIGH){
     rotateRight();
     break;   
   }
  }
}
  



void rotateRight(){
 for(; servoPos >= 0; servoPos--){
   servo1.write(servoPos);
   int out = map( servoPos,0,180,0,255);
   analogWrite(ledPin,out);
   delay(20);
   if(digitalRead(switchPin1) == HIGH){
     rotateLeft();
     break;
   }
   else if(digitalRead(switchPin2) == HIGH){
     break;  
   }
  }
  
}

