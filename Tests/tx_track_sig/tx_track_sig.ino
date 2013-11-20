//Send A.1.A.1

int potValA;
int potValB;
int potValC;
char posA = 1;
char posB = 2;
char posC = 3;

void setup(){  
  //Serial baud - 9600
  Serial.begin(9600);
}
void loop(){
  potValA= analogRead(A0);
  potValB= analogRead(A1);
  potValC= analogRead(A2);
  
  if(potValA < 140){
    //Send position 1
    posA = '1';
  }else if(potValA < 500){
    //Send position 2
    posA = '2';
  }else if(potValA < 870){
    //Send position 3
    posA = '3';
  }else{
    //Send position 4
    posA = '4';
  }
  
  if(potValB < 140){
    //Send position 1
    posB = '1';
  }else if(potValB < 500){
    //Send position 2
    posB = '2';
  }else if(potValB < 870){
    //Send position 3
    posB = '3';
  }else{
    //Send position 4
    posB = '4';
  }
  
  if(potValC < 140){
    //Send position 1
    posC = '1';
  }else if(potValC < 500){
    //Send position 2
    posC = '2';
  }else if(potValC < 870){
    //Send position 3
    posC = '3';
  }else{
    //Send position 4
    posC = '4';
  }
  
  Serial.write("A");
  Serial.write(posA);
  Serial.write("B");
  Serial.write(posB);
  Serial.write("C");
  Serial.write(posC);
  
  delay(500);
  
}



