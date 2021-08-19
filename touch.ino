void setup() {
  Serial.begin(9600);

}

void loop() {
  int touch=touchRead(T4);
  Serial.println(touch);
  delay(1000);

}
