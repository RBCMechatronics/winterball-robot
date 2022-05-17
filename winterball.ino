// Motor A connections
int enA = 2;
int in3 = 3;
int in4 = 4;
// Motor B connections
int enB = 7;
int in1 = 5;
int in2 = 6;

void setup() {
  // Set all the motor control pins to outputs
  pinMode(enA, OUTPUT);
  pinMode(enB, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
  
  // Turn off motors - Initial state
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, LOW);
}

void loop() {
setspeed(500); 
forward(20000);
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, LOW);
  delay(300000);


}

void setspeed(int i){
  analogWrite(enA, i);
  analogWrite(enB, i);
  }
void forward(int i){
  analogWrite(in1, 200);
  digitalWrite(in2, LOW);
  analogWrite(in3, 200);
  digitalWrite(in4, LOW);
  delay(i);
  
  }
 void backward(int i){
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH);
  delay(i);
  }
 void off(int i){
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, LOW);
  delay(i);
  }
