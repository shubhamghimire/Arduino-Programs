void setup() {
  Serial.begin(9600);
  Serial.println("Enter your name:");

}

char rx_byte = 0;
String rx_str = "";

void loop() {

  if(Serial.available() > 0){
    rx_byte = Serial.read();

    if(rx_byte != '\n'){
      // A character of the string was received
      rx_str += rx_byte;
    }
    else{
      // End of string
      Serial.print("Welcome ");
      Serial.println(rx_str);
      rx_str = "";            //Clear the string for reuse
      Serial.println("");
      Serial.println("Enter your name: ");
    }
  }

}
