//Receive A turn on LED

int in;

void setup(){
  for(int i = 0; i<14; i++){
    pinMode(i, INPUT);
  }
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(13, OUTPUT);
  
  //Enable high
  digitalWrite(2, HIGH);
  //Set disabled
  digitalWrite(3, HIGH);
  
  //Serial baud - 9600
  Serial.begin(9600);
}

void loop(){
  
  in = Serial.read();
  
  if(in == 'A') {
    digitalWrite(13, HIGH);
  }
  
  delay(500);
}


