int sensor = A0; //Photoresistor port
int fan = 9;  //PWM-enabled port via resistor to transistor gate
int lightRead = 0; //Val coming from photoresistor
int fanWrite = 0; //Value to eventually send to fan

void setup() {
 //Nothing to do here
}

void loop() {
   //Read the value from the photoresistor
   lightRead = analogRead(sensor);
   //Map the value from range of 0-1023 (analogRead) to 0-255 (analogWrite)
   fanWrite = map(lightRead, 0, 1023, 0, 255);
   //If light level is below 40, turn off fan. 
   if (fanWrite < 40) 
     fanWrite = 0;
   //Send analogWrite (PWM) output to gate of transistor
   analogWrite(fan, fanWrite);
   delay(500);
}
