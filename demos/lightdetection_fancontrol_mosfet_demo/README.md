<h1>
<img src="https://raw.github.com/TinkerUMD/TinkerUMD/master/icons/readme_icon_64x64.jpg" alt="readme icon" >
<img src="https://raw.github.com/TinkerUMD/TinkerUMD/master/icons/arduino_icon_64x64.jpg" alt="arduino icon">
<img src="https://raw.github.com/TinkerUMD/TinkerUMD/master/icons/led_icon_64x64.jpg" alt="led icon">
<img src="https://raw.github.com/TinkerUMD/TinkerUMD/master/icons/schematic_icon_64x64.jpg" alt="schematic icon">
<br>
Light Detection Fan PWM Control w/MOSFET Demo
</h1>

Semester
---
Fall 2013

Model
---
Light Detection Fan PWM Control w/MOSFET Demo is a program for Arduino UNO. 

Hardware
---
* 1 photoresistor cell
* 1 N-type MOSFET (this demo was tested using P45NF06)
* 1 1 kOhm resistor
* 1 10 kOhm resistor
* 1 diode/rectifier (e.g. 1N4001)
* Fan (preferably 9.6V or 12V)
* External power source (battery, power supply)

Pins
---
* AI0 for photoresistor input
* D9 for fan control output

Purpose
---
The goal of this demo is to apply 3 concepts: 1.) How to utilize MOSFETs in useful circuits to control devices (i.e. fans) that require external power. 2.) How to utilize photoresistors as sensors by the voltage divider rule. 3.) How to utilize the Arduino PWM output using analogWrite(). Also teaches the use of a diode in parallel with fan to keep back emf from the fan from damaging the MOSFET.

References
---
* http://arduino-for-beginners.blogspot.com/2011/04/controlling-12v-fan-speed-with-pwm.html
* http://www.electronics-tutorials.ws/transistor/tran_7.html
