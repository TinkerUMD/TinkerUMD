#include <Servo.h>

// servo declerations
Servo frontServo;
Servo backServo;


// constants
const int distanceThreshold = 300;
const int frontServoPin = 6;
const int backServoPin = 5;
const int distanceSensorPin = 0;
const int ledPin = 9;

// to keep track of the front servo's position
int frontServoPos = 0;
int servoIncrment = 5;

void setup(){
  frontServo.attach(frontServoPin);
  backServo.attach(backServoPin);
  pinMode(ledPin, OUTPUT);
}

void loop(){
   lookAround();
   detectObject();
   
  
}

int lookAround(){  
  if( frontServoPos > 180){
    servoIncrment = -5;
  }
  if( frontServoPos < 0){
     servoIncrment = 5;
  }
  digitalWrite(ledPin,LOW);   
  frontServoPos += servoIncrment;
  frontServo.write(frontServoPos);   
  delay(50);
}


void detectObject(){
  int distanceValue = analogRead(distanceSensorPin);
  if(distanceValue > distanceThreshold){
   backServo.write(frontServoPos);
   while(analogRead(distanceSensorPin) > distanceThreshold){
     digitalWrite(ledPin,HIGH);    
   }    
  }  
}
