void setup() {
  Serial.begin(9600);
  int i=1;
  Serial.println("---Counting is about to begin---");
  delay(2000);
  for(i=1; i<=20; i++){
   Serial.println(i);
   delay(1000);
  } 
  Serial.println("---Counting is finished---");
}

void loop() {


}
