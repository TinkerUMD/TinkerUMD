//setup runs once at beginning

//threshold values: the analogRead crosses these values
//when the photoresistor crosses a black line
#define THRESH_A0 700
#define THRESH_A1 710
#define THRESH_A2 730
#define THRESH_A3 680
#define THRESH_A4 690
#define THRESH_A5 690

//fill an array with these threshold values
int THRESHOLDS[6] = { THRESH_A0,
                      THRESH_A1,
                      THRESH_A2,
                      THRESH_A3,
                      THRESH_A4,
                      THRESH_A5};

void setup(){
  Serial.begin(9600);
  // Initialize photoresistor pins
  pinMode(A0,INPUT);
  pinMode(A1,INPUT);
  pinMode(A2,INPUT);
  pinMode(A3,INPUT);
  pinMode(A4,INPUT);
  pinMode(A5,INPUT);
  
  // Initialize LED pins
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  
}

//loop repeats continuously
void loop(){
  
  int photoresistor_analog_readings[6];
  
  // Read the photoresistor pins
  photoresistor_analog_readings[0] = analogRead(A0);
  photoresistor_analog_readings[1] = analogRead(A1);
  photoresistor_analog_readings[2] = analogRead(A2);
  photoresistor_analog_readings[3] = analogRead(A3);
  photoresistor_analog_readings[4] = analogRead(A4);
  photoresistor_analog_readings[5] = analogRead(A5);
  
  //Display the photoresistor readings
  for(int i=0;i<6;i++){
    if(photoresistor_analog_readings[i] < THRESHOLDS[i]){
      Serial.print("1 ");
      digitalWrite(i+2,HIGH);
    }
    else {
      Serial.print("0 ");
      digitalWrite(i+2,LOW);
    }
  }
  Serial.print("\n");
  
  //wait a 30 miliseconds
  delay(30);
}
