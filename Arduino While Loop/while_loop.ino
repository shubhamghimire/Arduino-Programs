void setup() {
  Serial.begin(9600);
  int sum = 0;

  while(sum<50){
    sum = sum + 5;
    Serial.print("sum = ");
    Serial.println(sum);
    delay(500);
  }
}

void loop() {
  // put your main code here, to run repeatedly:

}
