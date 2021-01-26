void setup() {
  int test_array[7];  //Initializing an array with 7 integer elements
  int a; //The index into the array

  Serial.begin(9600);

  test_array[0] = 25; //Assigning integer value to the first element of array
  test_array[1] = 3690;
  test_array[2] = 482;
  test_array[3] = 8674;
  test_array[4] = 5;
  test_array[5] = 89;
  test_array[6] = 56;

//Displaying each element of the array serially
  Serial.println("The numbers in the array is: ");
  for(int i=0; i<7; i++){
    Serial.println(test_array[i]);
  }
}

void loop() {
  // put your main code here, to run repeatedly:

}
