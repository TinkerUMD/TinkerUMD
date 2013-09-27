
void setup() {
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  
  //forward
  digitalWrite(7, LOW);
  analogWrite(5, 255);
  digitalWrite(8, LOW);
  analogWrite(6, 255);
  delay(500);
  //backward
  digitalWrite(7, HIGH);
  analogWrite(5, 255);
  digitalWrite(8, HIGH);
  analogWrite(6, 255);
  delay(500);
  //right
  digitalWrite(7, HIGH);
  analogWrite(5, 255);
  digitalWrite(8, LOW);
  analogWrite(6, 255);
  delay(500);
  //left
  digitalWrite(7, LOW);
  analogWrite(5, 255);
  digitalWrite(8, HIGH);
  analogWrite(6, 255);
  delay(500);
  //stop
  digitalWrite(7, LOW);
  analogWrite(5, 0);
  digitalWrite(8, LOW);
  analogWrite(6, 0);
  
  Serial.begin(9600);
}

void loop() {
  int a = analogRead(A0);
  int b = analogRead(A1);
  Serial.print(a);
  Serial.print("\t");
  Serial.println(b);
  delay(40);
}
