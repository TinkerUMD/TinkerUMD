//ir_receiver_demo

//preprocessor define of the receiver pin
#define IR_RECEIVER_PIN 2

//runs once at beginning
void setup(){
  //initialize serial communication
  Serial.begin(9600);
  
  //set the IR pin mode
  pinMode(IR_RECEIVER_PIN,INPUT);
}

//repeats continuously
void loop(){
  //Read the IR sensor
  int ir_receiver_reading = digitalRead(IR_RECEIVER_PIN);
  
  //Display the sensor reading
  if (ir_receiver_reading==LOW) //active low
    Serial.println("1");
  else
    Serial.println("0");
   
  //wait 30 miliseconds
  delay(30);
}
