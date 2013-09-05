<h1>
<img src="https://raw.github.com/TinkerUMD/TinkerUMD/master/icons/readme_icon_64x64.jpg" alt="readme icon" >
<img src="https://raw.github.com/TinkerUMD/TinkerUMD/master/icons/arduino_icon_64x64.jpg" alt="arduino icon">
<img src="https://raw.github.com/TinkerUMD/TinkerUMD/master/icons/led_icon_64x64.jpg" alt="led icon">
<br>
IR Receiver Array Demo 
</h1>
This demo features an array of seven 56kHz IR receivers oriented in a semi-circle.  The IR sensor array is
connected to an arduino microcontroller and the output is displayed through serial messages.  The behavior
is also visualized through a passive LED display on the sensor array board itself.

#### Prerequisites
* [ir_receiver_demo](https://github.com/TinkerUMD/TinkerUMD/tree/master/demos/ir_receiver_demo)

### Purpose
This demonstrates a circuit that could be used to detect the beacon for navigation in the course.
It also demonstrates the concept of chaining multiple sensors.

### Hardware
<table>
  <tr>
    <td><strong>Quantity</strong></td>
    <td><strong>Model</strong></td>
    <td><strong>Purpose</strong></td>
  </tr>
  <tr>
    <td>1</td>
    <td>Arduino Uno/Duemilanove</td>
    <td>This processes the IR inputs and writes to the serial output.</td>
  </tr>
  <tr>
    <td>7</td>
    <td>56kHz IR receiver</td>
    <td>This detects a 56kHz IR signal, causing a signal pin to go to GND when the signal is detected.</td>
  </tr>
  <tr>
    <td>7</td>
    <td>LED</td>
    <td>This turns on when the corresponding IR receiver detects an IR signal.</td>
  </tr>
  <tr>
    <td>7</td>
    <td>1kOhm resistors</td>
    <td>This adds resistance to the LED path so there is not a short circuit between Vin and GND.</td>
  </tr>
</table>

### Pins
Digital pins 2, 3, 4, 5, 6, 7, 8 are used as inputs for reading the IR receiver signals.

### Schematic

###References
* [56kHz IR receiver datasheet](http://www.pololu.com/file/0J19/TSOP34156.pdf)
