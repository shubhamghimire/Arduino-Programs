void setup() {
  Serial.begin(9600);

}

int rx_byte = 0;

void loop() {

  if(Serial.available() > 0){   // Is a character available
    rx_byte = Serial.read();    // Get the character


    // Check if a number is received

    if((rx_byte >= '0') && (rx_byte <= '9')){
      Serial.print("Number received: ");
      Serial.println(rx_byte);
   
    }
     else if (rx_byte == '\n') {
      Serial.println("Newline");
    }
    else {
      Serial.println("Not a number.");
    }


  } // end: if(Serial.available() > 0)

}
