#include <Servo.h>

// constant declerations
Servo servo1;
const int servoPin = 11;
const int switchPin1=2;
const int switchPin2 = 4;
const int ledPin = 3;

// global to keep track of the servo angle
int servoPos =0;

void setup(){
 servo1.attach(servoPin);
 pinMode(  switchPin1,INPUT );
 pinMode(  switchPin2,INPUT );  
 pinMode( ledPin, OUTPUT);
 Serial.begin(9600);
 
}

void loop(){
  
  // rotate the servo left if switch one is pressed
  if (digitalRead(switchPin1) == HIGH){
   rotateLeft(); 
  }
  
  // rotate the servo right if switch two is pressed
  else if(digitalRead(switchPin2) == HIGH){
   rotateRight(); 
  }
  
  
  
}

void rotateLeft(){
  for(; servoPos < 180; servoPos++){
    
   // writing to servo
   servo1.write(servoPos);  
    
   // maping servo position to analog value between 0 and 255   
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
   // writing to servo
   servo1.write(servoPos);  
    
   // maping servo position to analog value between 0 and 255   
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

