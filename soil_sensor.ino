void setup() {
  Serial.begin(9600);
  
}

void loop() {
  int soil_quality=analogRead(A0);
  float moisture_conc=(100-(soil_quality/1023)*100);
  Serial.print("moisture concentration: ");
  Serial.println(moisture_conc);
  delay(1000);
}
