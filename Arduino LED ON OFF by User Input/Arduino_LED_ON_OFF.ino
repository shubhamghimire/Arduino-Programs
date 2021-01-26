# Take a serial input from the user. If user enters 'a' then turn on arduino LED and when user enters 'b' then turn off the LED.

void setup() {
  Serial.begin(9600);
  pinMode(13, OUTPUT);  // LED on pin 13 of UNO
}

void loop() {
  char rx_byte;
  
  if (Serial.available() > 0) {    // is a character available?
    rx_byte = Serial.read();       //
    if (rx_byte == 'a') {
      digitalWrite(13, HIGH); // turn the LED on (HIGH is the voltage level)
    }
    if (rx_byte == 'b') {
      digitalWrite(13, LOW);  // turn the LED off by making the voltage LOW
    }
  }
}
