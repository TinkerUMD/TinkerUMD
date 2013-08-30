Make A Hovercraft Class
===
###Purpose
When developing a complex project (like an autonomous hovercraft), it may get very confusing to keep
all of your code in one big line.  Object oriented programming helps you organize your code.
Rather than thinking of your program as a bunch of indiviudal lines of code, you can break it up
into **objects** that have **variables** and **methods**.  

###Introduction
Consider a simple hovercraft intended to follow a black line.  Before cranking out code, 
we can make some assumptions about how the hovercraft will behave.  First, the
hovercraft will need to be able to *detect* the black line. Once it knows where the line is it
would likely need to turn left, turn right, or move forward.

Without even defining exactly *how* the hovercraft performs these actions, we can define some 
of our hovercraft's behaviors.

####Behaviors

  * detect line
  * turn right
  * turn left
  * move forward

These behaviors can be written in c++ (the language arduino uses) as functions.
For now we'll leave them empty

  ```cpp
  void detect_line(){
    //code to detect the black line
  }
  void turn_right(){
    //code to make the hovercraft turn right
  }
  void turn_left(){
    //...
  }
  void move_forward(){
    //...
  }
  ```
  
* left sensor reading
* right sensor reading

####Methods
* 

###The Final Product
  By the end of this tutorial you will have created a hovercraft class that can move forward, turn left,
  and turn right.  Instead of actually moving though, the program prints to the serial monitor the action
  it is taking.
  
  ```cpp
  //make_a_hovercraft_class/hovercraft.h
  
  #include <Arduino.h>
  
  class Hovercraft {
    public:
      void move_forward(){
        Serial.println("Moving forward...");
      }
      void turn_left(){
        Serial.println("Turning left...");
      }
      void turn_right(){
        Serial.println("Turning right...");
      }
  };
  ```
  
  ```cpp
  //make_a_hovercraft_class/make_a_hovercraft_class.pde

  #include "hovercraft.h"
  
  //setup runs once at the beginning
  void setup(){
    //setup serial communication with a baud-rate of 9600 bits/second
    Serial.begin(9600);
  }
  
  //loop runs over and over
  void loop(){
      //wait 500 miliseconds
      delay(500);
    
      //turn right
      hovercraft.turn_right();
      
      delay(500);
      
      //turn left
      hovercraft.turn_left();
      
      delay(500);
      
      //move forward
      hovercraft.move_forward();
      
  }
  ```
  
  
###The Code Explained

Notice the final product above contains two files **hovercraft.h** and **make_a_hovercraft_class.pde**.  
