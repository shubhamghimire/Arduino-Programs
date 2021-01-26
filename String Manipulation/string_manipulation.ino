void setup() {

  char str[] = "Welcome to Japan";  //Creating a string
  char out_str[40];  // Output from string functions placed
  int num;            // General purpose integer

  Serial.begin(9600);

  // Printing the String
  Serial.println(str);

  // get the length of the string(Excludes null terminator
  num = strlen(str);
  Serial.print("String length is: ");
  Serial.println(num);

  // Get the length of the array (includes null terminators)
  num = sizeof(str); //sizeof() is not a C string function
  Serial.print("Size of the Array: ");
  Serial.println(num);

  // Copy a string
  strcpy(out_str, str);
  Serial.printl n(out_str);

  // Add a string to the end of the string(Append)
  strcat(out_str, " and Tokyo.");
  Serial.println(out_str);
  
  num = strlen(out_str);
  Serial.print("String length is: ");
  Serial.println(num);

  num = sizeof(out_str);
  Serial.print("Size of the array out_str[]: ");
  Serial.println(num);
}
void loop() {
  // put your main code here, to run repeatedly:

}
