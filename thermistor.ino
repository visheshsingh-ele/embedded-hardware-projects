const int temp = A0;

void setup() {
Serial.begin(9600);

}

void loop() {
int sens = analogRead(temp);
float resistance = 10000.0 * (sens / (1023.0 - sens));
Serial.println(resistance);
float temperature = (1.0 / (1.0 / 298.15 + (1/3950.0)* log(resistance / 10000.0)))- 273.15;
Serial.println(temperature);
delay(500);

}
