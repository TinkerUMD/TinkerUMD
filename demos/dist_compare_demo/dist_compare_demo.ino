int trigPin = 13;
int echoPin = 12;

void setup() {
  Serial.begin(9600);
  for (int i = 2; i < 14; i ++) {
    pinMode(i, OUTPUT);
  }
  pinMode(12, INPUT);
}

float avgIR = 0;
int avgPing = 0;

void loop() {
  // Trigger the sensor.
  long duration, distance;
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  
  // Read how long of a pulse we get back from the sensor.
  duration = pulseIn(echoPin, HIGH);
  distance = (duration/2) / 29.1;
  avgPing = .7*avgPing+.3*distance;
  
  // Read the current sensor value.
  int s = analogRead(A0);
  
  // Linearize the input from the sensor.
  int d = map(s, 0, 1023, 20, 150);
  float linear = 5-100 / ( d + 0.42 );
  avgIR = .7*avgIR+.3*linear;
  
  // Turn all the LED's off.
  for (int i = 2; i < 10; i ++) {
    digitalWrite(i, LOW);    
  }
  
  // Turn on the LED's controlled by the IR sensor
  if (avgIR > 1.2) {
    digitalWrite(2, HIGH); 
  }
  if (avgIR > 1.8) {
    digitalWrite(3, HIGH); 
  }
  if (avgIR > 2.4) {
    digitalWrite(4, HIGH); 
  }
  if (avgIR > 3.0) {
    digitalWrite(5, HIGH); 
  }
  
  // Turn on the LED's controlled by the ultrasonic sensor.
  if (distance < 10) {
    digitalWrite(6, HIGH); 
  }
  if (distance < 20) {
    digitalWrite(7, HIGH); 
  }
  if (distance < 30) {
    digitalWrite(8, HIGH); 
  }
  if (distance < 40) {
    digitalWrite(9, HIGH); 
  }
  
  // Output to the computer.
  Serial.print(distance);
  Serial.print("\t");
  Serial.print(s);
  Serial.print("\t");
  Serial.println(avgIR);
}
