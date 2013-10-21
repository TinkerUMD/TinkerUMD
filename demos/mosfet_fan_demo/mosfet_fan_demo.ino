int fanPower = 0;
const int distancePin=1;
const int fanPin = 9;

void setup(){
   pinMode(fanPin,OUTPUT);
   Serial.begin(9600);  
}

void loop(){   
  
 // reading the distance sensor value
 int val = analogRead(distancePin); 
 
 // mapping the analog value to a range between 0 and 255
 double conv = (val/670.0) * 255.0;
 int conv2 = (int)conv;
 fanPower = conv2;
 
 // sending the PWM signal through fanPin
 analogWrite(fanPin,fanPower);  
 delay(50); 
}
