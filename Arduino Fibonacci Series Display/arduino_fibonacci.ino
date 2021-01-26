void setup() {
  Serial.begin(9600);
  Serial.println("Fibonacci series:");
  int n=20, first=0, second=1, next;
  
  for(int i=0; i<=n; i++){

      Serial.println(first);
      next = first + second;
      first = second; //The second variable value is now put into first variable value
      second = next;  //The next variable value is now the second value
  }

}

void loop() {
  // put your main code here, to run repeatedly:

}
