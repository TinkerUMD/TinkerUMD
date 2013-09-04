//IR Receiver Array Demo

//setup runs once at beginning
void setup(){
  //initialize serial communication
  Serial.begin(9600);
  
  //initialize IR receiver pins
  pinMode(2,INPUT);
  pinMode(3,INPUT);
  pinMode(4,INPUT);
  pinMode(5,INPUT);
  pinMode(6,INPUT);
  pinMode(7,INPUT);
  pinMode(8,INPUT);
}
//loop repeats continuously
void loop(){
  //declare array for holding IR receiver digital readings
  boolean ir_receiver_readings[7];
  
  //fill the array
  ir_receiver_readings[0] = digitalRead(2);
  ir_receiver_readings[1] = digitalRead(3);
  ir_receiver_readings[2] = digitalRead(4);
  ir_receiver_readings[3] = digitalRead(5);
  ir_receiver_readings[4] = digitalRead(6);
  ir_receiver_readings[5] = digitalRead(7);
  ir_receiver_readings[6] = digitalRead(8);
  
  //loop through the IR readings
  for(int i=0;i<7;i++){
    //print 1 to serial if beacon is detected
    if (ir_receiver_readings[i] == 0)
      Serial.print("1 ");
    else
      Serial.print("0 ");
  }
  
  //print newline character
  Serial.print("\n"); 
  
  //Wait 30ms
  delay(30);
}
