void setup() {
  Serial.begin(9600);

}

void loop() {
  int air_quality=analogRead(A0);
  Serial.println(air_quality);
  delay(1000);
}
