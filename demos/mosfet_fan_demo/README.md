<h1>
<img src="https://raw.github.com/TinkerUMD/TinkerUMD/master/icons/readme_icon_64x64.jpg" alt="readme icon" >
<img src="https://raw.github.com/TinkerUMD/TinkerUMD/master/icons/arduino_icon_64x64.jpg" alt="arduino icon">
<img src="https://raw.github.com/TinkerUMD/TinkerUMD/master/icons/led_icon_64x64.jpg" alt="led icon">
<img src="https://raw.github.com/TinkerUMD/TinkerUMD/master/icons/schematic_icon_64x64.jpg" alt="schematic icon">
<br>
Transistor DEMO 1
</h1>

###Semester
Fall 2013

###Description
This demo takes analog readings from a IR distance sensor. The analog reading is
mapped to a value between 0 and 255 and is sent to the gate of the transistor. The fan speed
is adjusted according to the analog value received.

###Hardware
* 1 Arduino 
* Breadboard
* Sharp 2Y0A21 distance sensor
* 1 fan motor
* 1 mosfet transistor


###Pins
5V
Gnd
Pin A1(analog) -> distance sensor pin
Pin 11(pwm)    -> transistor pin

###Purpose
To show how a transistor can be used to adjust the speed of a fan.

###References

