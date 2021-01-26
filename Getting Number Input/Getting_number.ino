void setup() {

  Serial.begin(9600);
  Serial.println("Enter a number: ");

}

char rx_byte = 0;
String rx_str = "";
boolean not_number = false;
int result;

void loop() {
  if(Serial.available() > 0){
    rx_byte = Serial.read();

    if((rx_byte >= '0') && (rx_byte <= '9')){
      rx_str += rx_byte;
    }
    else if(rx_byte == '\n'){
      //End of string
      if(not_number){
        Serial.println("Not a number");
      }
      else{
        // Multiply the number by 5
        result = rx_str.toInt() * 5;
        // Print the result
        Serial.print(rx_str);
        Serial.print(" X 5 = ");
        Serial.print(result);
        Serial.println("");
        Serial.println("Enter a number: "); 
      }
      not_number = false;   //Reset flag
      rx_str = "";          //Clear the string for resuse
    }
    else{
      // Non-number character received
      not_number = true;      // Flag a non-number
    }
  }

}
