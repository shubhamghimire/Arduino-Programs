float pinTemp = 20; //Just declaring a value assuming that the value came from the temperature sensor
void setup(){
  Serial.begin(9600);
}
void loop(){
  float tempr = analogRead(pinTemp);  //Read the analog pin
  tempr = tempr * 0.48828125;
  
  if(tempr<25){
    Serial.print("The current temperature: ");
    Serial.print(tempr);
    Serial.println("C");
    Serial.println("It's cold today");
  }
  else{
    Serial.print("The current temperature: ");
    Serial.print(tempr);
    Serial.println("C");
    Serial.println("It's hot today");
  }
  delay(1000);
  
}
