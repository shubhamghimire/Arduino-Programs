void setup() {
  
  char test[] = "I like coffee and cake"; // A string is created

  Serial.begin(9600);

  // Print the string
  Serial.println(test);

  // Delete part of the string
  test[13] = 0;
  Serial.println(test);

  // Substitute a word into the string
  test[13] = ' '; //replace a null terminator with a space
  test[18] = 't'; //insert the new word
  test[19] = 'e';
  test[20] = 'a';
  test[21] = 0;   //Terminate the string
  Serial.println(test);
}

void loop() {
  // put your main code here, to run repeatedly:

}
