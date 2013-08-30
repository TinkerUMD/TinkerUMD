#define CONTROL_PIN 6


void transmit_encoded_signal(char encoded_signal){
  //Send start signal (off for 100ms on for 500ms)
  digitalWrite(CONTROL_PIN,LOW);
  delay(100);
  digitalWrite(CONTROL_PIN,HIGH);
  delay(500);
  digitalWrite(CONTROL_PIN,LOW);
  delay(100);
  //Write encoded signal, each bit is written for 100ms
  
  //Most significant bit
  digitalWrite(CONTROL_PIN,(encoded_signal&B10000000)==B10000000);
  delay(100);
  digitalWrite(CONTROL_PIN,(encoded_signal&B01000000)==B01000000);
  delay(100);
  digitalWrite(CONTROL_PIN,(encoded_signal&B00100000)==B00100000);
  delay(100);
  digitalWrite(CONTROL_PIN,(encoded_signal&B00010000)==B00010000);
  delay(100);
  digitalWrite(CONTROL_PIN,(encoded_signal&B00001000)==B00001000);
  delay(100);
  digitalWrite(CONTROL_PIN,(encoded_signal&B00000100)==B00000100);
  delay(100);
  digitalWrite(CONTROL_PIN,(encoded_signal&B00000010)==B00000010);
  delay(100);
  //Least significant bit
  digitalWrite(CONTROL_PIN,(encoded_signal&B00000001)==B00000001);
  delay(100);
  
}
void setup(){
  Serial.begin(9600);
  pinMode(CONTROL_PIN,OUTPUT);
}

void loop(){
  transmit_encoded_signal(B11111111);
  delay(2000);
}
