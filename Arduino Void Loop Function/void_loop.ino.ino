void setup() {
  Serial.begin(9600);
  

}

void loop() {
  for (int i = 0; i < 10; i++) {
    Serial.print("i = ");
    Serial.println(i);
    delay(1000);
  }
  delay(2000);
}
