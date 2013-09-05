<h1>
<img src="https://raw.github.com/TinkerUMD/TinkerUMD/master/icons/readme_icon_64x64.jpg" alt="readme icon" >
<img src="https://raw.github.com/TinkerUMD/TinkerUMD/master/icons/arduino_icon_64x64.jpg" alt="arduino icon">
<img src="https://raw.github.com/TinkerUMD/TinkerUMD/master/icons/led_icon_64x64.jpg" alt="led icon">
<br>
IR Receiver Demo 
</h1>
This demo features a single 56kHz IR receiver with it's output signal connected to the Arduino microcontroller.
The output is displayed by the Arduino through serial messages.

#### Used in
* [ir_receiver_array_demo](https://github.com/TinkerUMD/TinkerUMD/tree/master/demos/ir_receiver_array_demo)

### Purpose
This showcases a single sensor that could be used to detect a 56kHz IR signal.  It demonstrates the concept
of reading a digital signal from a sensor, and communicating serial messages.

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
    <td>This processes the IR input and writes to the serial output.</td>
  </tr>
  <tr>
    <td>1</td>
    <td>56kHz IR receiver</td>
    <td>This detects a 56kHz IR signal, causing a signal pin to go to GND when the signal is detected.</td>
  </tr>
  <tr>
    <td>1</td>
    <td>LED</td>
    <td>This turns on when the IR receiver detects an IR signal.</td>
  </tr>
  <tr>
    <td>1</td>
    <td>1kOhm resistors</td>
    <td>This adds resistance to the LED path so there is not a short circuit between Vin and GND.</td>
  </tr>
</table>

### Pins
Digital pins 2 are used as inputs for reading the IR receiver signal.

### Schematic

###References
* [56kHz IR receiver datasheet](http://www.pololu.com/file/0J19/TSOP34156.pdf)
