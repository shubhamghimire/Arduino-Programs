void setup() {
  Serial.begin(9600);
  Serial.println("***Pi Values with upto 20 decimals behind***");
  delay(1000);
  float a = 22;
  float b = 7;
  float c = a/b;
  for(int i=1; i<=20; i++){
    Serial.println(c, i);
    delay(1000);
  }
  Serial.println("------------Thank you------------");
}

void loop() {
  // put your main code here, to run repeatedly:

}
