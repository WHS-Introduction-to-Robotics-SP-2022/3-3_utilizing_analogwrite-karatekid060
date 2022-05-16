void setup() {
  // put your setup code here, to run once:
  pinMode(9, INPUT);
  pinMode(10, INPUT);
  pinMode(11, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  
  analogWrite(11, 255);
  delay(1000);
  analogWrite(11, 100);
  delay(1000);
  analogWrite(11, 0);
  delay(1000);
  
  analogWrite(10, 255);
  delay(1000);
  analogWrite(10, 100);
  delay(1000);
  analogWrite(10, 0);
  delay(1000);
  
  analogWrite(9, 255);
  delay(1000);
  analogWrite(9, 100);
  delay(1000);
  analogWrite(9, 0);
  delay(1000);
}
