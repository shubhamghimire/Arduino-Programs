void setup() {
  Serial.begin(9600);

}

void loop() {
  char rx_byte;

  if(Serial.available() > 0){       //Is a character availabel
    rx_byte = Serial.read();        //get the character
    Serial.print("You typed: ");
    Serial.println(rx_byte);
  }

}
