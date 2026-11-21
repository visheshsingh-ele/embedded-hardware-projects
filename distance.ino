const int echo = 13;
const int trigger =7;

void setup() {
  pinMode(echo, INPUT);
  pinMode(trigger, OUTPUT);
  Serial.begin(9600);
}

void loop() {
digitalWrite(trigger , LOW);
delayMicroseconds(3);
digitalWrite(trigger, HIGH);
delayMicroseconds(10);
digitalWrite(trigger , LOW);

unsigned long duration = pulseIn(echo, HIGH);
float distance = (duration * 0.0343) / 2;
Serial.println("the object is :");
Serial.print(distance);
Serial.print("  cm away");
delay(200);
}
