<h1>
<img src="https://raw.github.com/TinkerUMD/TinkerUMD/master/icons/readme_icon_64x64.jpg" alt="readme icon" >
<img src="https://raw.github.com/TinkerUMD/TinkerUMD/master/icons/arduino_icon_64x64.jpg" alt="arduino icon">
<img src="https://raw.github.com/TinkerUMD/TinkerUMD/master/icons/led_icon_64x64.jpg" alt="led icon">
<img src="https://raw.github.com/TinkerUMD/TinkerUMD/master/icons/schematic_icon_64x64.jpg" alt="schematic icon">
<br>
RF Demo
</h1>

###Semester
Fall 2013

###Description
Demo of two RF modules, a reciever module and a transmitter module. The transmitter sends an "A1" followed 500ms later by a "B1". The reciever turns on the pin 13 LED upon recieving "A1" and off when it recieves "B1".

###Hardware
* 2 RF7020 modules 
* 2 Arduinos
* Breadboard

###Pins
(Identical on both Arduinos)
5V
Gnd
Pin 0(RX) -> RF TX Pin
Pin 1(TX) -> RF RX Pin
Pin 2	  -> RF Enable
Pin 3	  -> RF Set

###Purpose
To prove that RF works

###References
* http://www.robotshop.com/productinfo.aspx?pc=RB-Dfr-18&lang=en-US
