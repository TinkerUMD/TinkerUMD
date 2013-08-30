int sensorValue[4];
int avg[4];

// setup is run once as soon as the arduino is turned on.
void setup() {
  // Set the LED pins to be outputs.
  for (int i = 0; i < 4; i ++) {
    pinMode(i + 2, OUTPUT) 
  }
  Serial.begin(9600);
}

// loop runs repeatedly after the arduino is turned on.
void loop() {
  // Read all of the sensor values.
  for (int i = 0; i < 4; i ++) {
    sensorValue[i] = analogRead(i);
    avg[i] = avg[i]*.9 + sensorValue[i]*.1;
  }
  
  // Calculate the closest sensor reading and LED to turn on.
  int maxQuad = -1;
  int maxVal = 0;
  for (int i = 0; i < 4; i ++) {
    if (maxVal < avg[i]) {
      maxQuad = i;
      maxVal = avg[i];
    }
  }
  
  // Turn off all of the LED's.
  for (int i = 0; i < 4; i ++) {
    digitalWrite(i + 2, LOW);
  }
  // Turn on the correct LED.
  digitalWrite(maxQuad, HIGH);
  delay(40);
  
  // Print some data to the computer.
  for (int i = 0; i < 4; i ++) {
    Serial.print("sensor\t");
    Serial.print(i);
    Serial.print("\t");
    Serial.print(sensorValue[i]);
    Serial.print("\t");
    Serial.print(avg[i]);
    Serial.print("\t");
  }
  Serial.print("max\t");
  Serial.print(maxQuad);
  Serial.print("\t");
  Serial.println(maxVal); 
}
