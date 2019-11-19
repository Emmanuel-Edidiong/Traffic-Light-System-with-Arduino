/* This project will introduce the students to creating of functions.
  RAOATECH ROBOTICS TRAINING.
 */

 
#define redLight 3   //redLight defined as 3
#define yellowLight 4   //yellowLight defined as 4
#define greenLight 5    //greenLight defined as 5
void setup() {
  // put your setup code here, to run once:
pinMode(redLight, OUTPUT);
pinMode(yellowLight, OUTPUT);
pinMode(greenLight, OUTPUT);
}

void stopLight(){
  digitalWrite(redLight, HIGH);
  digitalWrite(yellowLight, LOW);
  digitalWrite(greenLight, LOW);
  delay(5000);
}

void readyLight(){
  digitalWrite(redLight,HIGH);
  digitalWrite(yellowLight, HIGH);
  digitalWrite(greenLight, LOW);
  delay(5000);
}

void go(){
   digitalWrite(redLight,LOW);
  digitalWrite(yellowLight, LOW);
  digitalWrite(greenLight, HIGH);
  delay(10000);
 
}
void loop() {
  // put your main code here, to run repeatedly:
stopLight();
readyLight();
go();
}