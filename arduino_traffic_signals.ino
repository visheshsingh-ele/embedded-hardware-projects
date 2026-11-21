
 void setup() {
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(13, INPUT_PULLUP);
}
void loop() {
  if (digitalRead(13) == LOW){
    digitalWrite(8, HIGH);
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
  }
  else{
 digitalWrite(2, HIGH);
 delay(500);
  digitalWrite(2, LOW);
 delay(500);
 digitalWrite(3, HIGH);
 delay(500);
 digitalWrite(3, LOW);
 delay(500);

 digitalWrite(8, HIGH);
 delay(500);
 digitalWrite(8, LOW);
 delay(500);
  }
}
