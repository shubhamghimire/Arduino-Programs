//Program to find out if the value from the temperature sensor is prime or not

int pinTemp = 22; //Just declaring a value assuming that the value came from the temperature sensor
#include<stdio.h>

void setup() {
  Serial.begin(9600);
}

void loop() {
  int tempr = analogRead(pinTemp);
  int i, ctr=0;
  tempr = tempr * 0.48828125;  //Converting the value into Celcius.
  for(i=2; i<=tempr/2; i++){
    if(tempr%i == 0){
      ctr++;
        break;
    }
  }
  if(ctr == 0 && tempr!=1){
    Serial.print(tempr);
    Serial.println(" is a prime number");
  }
  else{
    Serial.print(tempr);
    Serial.println(" is not a prime number");
  }
}
 /* 
 Algorithm:
Input:  num
(1) Initialize rev_num = 0
(2) Loop while num > 0
     (a) Multiply rev_num by 10 and add remainder of num  
          divide by 10 to rev_num
               rev_num = rev_num*10 + num%10;
     (b) Divide num by 10
(3) Return rev_num
}
*/
