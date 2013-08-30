Make A Hovercraft Class
===
###Purpose
When developing a complex project (like an autonomous hovercraft), it may get very confusing to keep
all of your code in one big loop.  By abstracting (breaking down) code in different ways we can make it much easier to
understand and develop.  In this tutorial we will go through the development of a simple hovercraft.
We will start with short program, and take steps to organize the code as the program grows in complexity.

###Introduction
Consider a simple hovercraft intended to follow a black line.  Our team has decided to use 
two photoresistors to determine our position relative to the black line, and then speed 
controlled fans on either side to propel and turn the hovercraft.  Let's say the left photoresistor
circuit is connected to the Arduinos analog pin 'A0'.  We came up with the following sketch to read the sensor
value

  ```cpp
  void setup(){
    Serial.begin(9600)
    pinMode(A0,INPUT);
  }
  
  void loop(){
    delay(100);
    int left_photoresistor_value = analogRead(A0);
    Serial.println(left_photoresistor_value);
  }
  ```
  
