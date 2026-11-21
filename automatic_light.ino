void setup() {
 Serial.begin(9600);
 pinMode(5, OUTPUT);
}

void loop() {
 int light = analogRead(A0);
 if (light <= 5){
  digitalWrite(5, HIGH);
 }
 else {
  digitalWrite(5, LOW);
 }
 Serial.println(light);
 delay(600);

}
