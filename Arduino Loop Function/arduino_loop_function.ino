void setup() {
  Serial.begin(9600);
  Serial.println("****Welcome and this message will only displayed once****");
  delay(3000);

}

void loop() {
  Serial.println("--Arduino now at the top of Loop--");
  Serial.println("----------------------------------");
  delay(3000);
  Serial.println("Executing instructions in main loop");
  delay(3000);
  Serial.println("Arduino now at  the bottom of the loop. \r\n");

}
