void setup() {
  Serial.begin(9600);

  PointersLine();
  Serial.println(" ||| HELLO WORLD! ||| ");
  PointersLine();

}

void loop() {
  // put your main code here, to run repeatedly:

}

void PointersLine(){
  Serial.println("***************************");
}
