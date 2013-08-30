
/* Pin Checker for arduino uno
    By: Jake Rye
    
    General:
      This is used to check the functionality of all pins on the arduino uno. All digital pins are conncected to a 10k resistor running into a common GND, as well as a signal wire running 
      into a common signal channel. The common signal channel is also connected to all analog in pins, and a disconnected red wire. The disconnected red wire will be manually plugged into the
      3v, 5v, & GND when testing the digital pins reading ability. Since all the digital pins are connected to all the analog pins, we can use the analog pins to check the values of the digital
      output pins while simultaneously checking the functionality of the analog in pins. As all analog pins are connected to the common signal bus, we will have confidence in their communal 
      readings and be able to observe if one analog pin is not functioning correctly. If none of the analog pins are functioning correctly, refer to the Notes section below.  
    
    Instructions:
      1. Disconnect white & red wires
      2. Upload program
      3. Connect white wire from signal channel (positive) to pin 0 channel
      4. Open serial monitor
          A. Checking Digital Output: Expected serial output for pin 0 & 2-13
                I. First line: HIGH signal (30-40 after 10k resistor)
                II. Second line: LOW signal (0-5)
          B. Checking Digital Output: Expected serial output for pin 1
                I. Ignore all pin 1 data, if arduino is connected and talking to serial monitor then pin 1 works
          C. Checking Digital Input: General Readout
                I. Signal data is printed from pin 0 to 13 across the screen (ignore pin 1 data)
                II. Each new line is a new reading
          D. Using the red wire
                I. Plug red wire into 3V, 5V, then GND
                      i. 3V should read 1's in every position except 1
                      ii. 5V should read 1's in every position except 1
                      iii. GND should read 0 everywhere
       5. Disconnect red & white wires
       
    Notes:
      If analog pins do not seem to be functioning correctly, connect the red wire to the 3v, 5v, then GND pins during the checking digital output phase. 
*/

//Global Variables
int analog_pin[6];
int digital_pin[14];

//Functions
void analog_read() {
  for(int i=0;i<6;i++) {
    analog_pin[i] = analogRead(i);
    delay(50);
  }
}

void analog_print() {
  Serial.begin(9600);
  for(int i=0;i<6;i++) {
    Serial.print(analog_pin[i]);
    Serial.print(" ");
    delay(50);
  }
  Serial.println(" ");
  Serial.end();
}

void print_pin(int i) {
    Serial.begin(9600);
    Serial.print("Pin ");
    Serial.print(i);
    Serial.print(": ");
    Serial.end();
}

void digital_read() {
  for(int i=0;i<14;i++) {
    pinMode(i,INPUT);
    digital_pin[i] = digitalRead(i);
    delay(50);
  }
}

void digital_print() {
  Serial.begin(9600);
  for(int i=0;i<14;i++) {
    Serial.print(digital_pin[i]);
    Serial.print(" ");
    delay(50);
  }
  Serial.println(" ");
  Serial.end();
}

void setup() {
}

void loop() {
  delay(500);
  Serial.begin(9600);
  Serial.println("Checking Output..");
  Serial.println("  Is WHITE connected to PIN 0???");
  Serial.println("  Ignore PIN 1 data");
  Serial.end();
  
  
  //Set digital pins to write
   for(int i=0;i<14;i++) {
    pinMode(i,OUTPUT);
  }
  
    //Check digital output
    for(int i=0;i<14;i++) {
      digitalWrite(i,HIGH);
      analog_read();
      print_pin(i);
      analog_print();
      delay(100);
      digitalWrite(i,LOW);
      analog_read();
      print_pin(i);
      analog_print();
      delay(100);
    }
   
   //Display change to checking digital input to user
   Serial.begin(9600);
   Serial.println("Checking Input..");
   Serial.println("   Use RED wire!!!");
   Serial.end();
    
    //Set digital pins to read
    for(int i=0;i<14;i++) {
      pinMode(i,INPUT);
    }
    
    //Check analog output
    for(int i=0;i<10;i++) {
      digital_read();
      delay(100);
      digital_print();
      delay(300);
    }
    
    Serial.begin(9600);
    Serial.println(" ");
    Serial.println(" Remove RED wire");
    Serial.end();
    delay(1000);
}
