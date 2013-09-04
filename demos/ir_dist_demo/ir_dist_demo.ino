void setup() {
  Serial.begin(9600);
  for (int i = 2; i < 10; i ++) {
    pinMode(i, OUTPUT);
  }
}

float avg = 0;

void loop() {
  // Read the current sensor value.
  int s = analogRead(A0);
  
  // Linearize the input from the sensor.
  int d = map(s, 0, 1023, 20, 150);
  float linear = 5-100 / ( d + 0.42 );
  avg = .7*avg+.3*linear;
  
  for (int i = 2; i < 10; i ++) {
    digitalWrite(i, LOW);    
  }
  
  if (avg > 0.0) {
    digitalWrite(2, HIGH); 
  }
  if (avg > .6) {
    digitalWrite(3, HIGH); 
  }
  if (avg > 1.2) {
    digitalWrite(4, HIGH); 
  }
  if (avg > 1.8) {
    digitalWrite(5, HIGH); 
  }
  if (avg > 2.4) {
    digitalWrite(6, HIGH); 
  }
  if (avg > 3.0) {
    digitalWrite(7, HIGH); 
  }
  if (avg > 3.6) {
    digitalWrite(8, HIGH); 
  }
  if (avg > 4.2) {
    digitalWrite(9, HIGH); 
  }
  
  // Output to the computer.
  Serial.print(d);
  Serial.print("\t");
  Serial.print(linear);
  Serial.print("\t");
  Serial.println(avg);
  
  // Wait for 10 ms.
  delay(10);
}
