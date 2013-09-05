//ir_receiver_demo

//preprocessor define of the receiver pin
#define IR_RECEIVER_PIN 2

//runs once at beginning
void setup(){
  //initialize serial communication
  Serial.begin(9600);
  
  //set the IR receiver pin to input
  pinMode(IR_RECEIVER_PIN,INPUT);
}

//repeats continuously
void loop(){
  //digital read into the variable ir_receiver_reading
  int ir_receiver_reading = digitalRead(IR_RECEIVER_PIN);
  
  //display the reading
  Serial.println(ir_receiver_reading);
  
  //wait 30 miliseconds
  delay(30);
}
