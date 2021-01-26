void setup() {
  String my_str = "Today is Wednesday";

  Serial.begin(9600);

  // Print the string
  Serial.println(my_str);

  // Change the string to upper-case
  my_str.toUpperCase();
  Serial.println(my_str);

  // Overwrite the string
  my_str = "Tomorrow is Thursday";
  Serial.println(my_str);

  // Replace a word in the string
  my_str.replace("Thursday", "Holiday");
  Serial.println(my_str);

  // Get the length of the string
  Serial.print("String Length is: ");
  Serial.println(my_str.length());

}

void loop() {
  // put your main code here, to run repeatedly:

}
