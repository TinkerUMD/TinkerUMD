<h1>
<img src="https://raw.github.com/TinkerUMD/TinkerUMD/master/icons/readme_icon_64x64.jpg" alt="readme icon" >
<img src="https://raw.github.com/TinkerUMD/TinkerUMD/master/icons/arduino_icon_64x64.jpg" alt="arduino icon">
<img src="https://raw.github.com/TinkerUMD/TinkerUMD/master/icons/led_icon_64x64.jpg" alt="led icon">
<br>
IR Receiver Array Demo 
</h1>
This demonstrates a circuit that could be used to detect the beacon for navigation in the course.
It also demonstrates the concept of digital reading multiple sensors.

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

