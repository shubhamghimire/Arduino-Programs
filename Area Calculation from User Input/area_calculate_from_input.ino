#define pi 3.141592654
char rx_byte = 0;
String rx_str = "";

void setup() {
  float C_area;
  int radius;
  Serial.begin(9600);
  radius = getNumber();
  Serial.print("The value is: ");
  Serial.println(radius);
  C_area = CircleArea(radius);
  Serial.print("The area of circle is: ");
  Serial.println(C_area);
}


void loop() {
     // Get the character
}

float getNumber(){
  Serial.println("Enter the radius value: ");
  if(Serial.available() > 0){   // Is a character available
    rx_byte = Serial.read(); 
  }
  rx_str += rx_byte;
  int n = rx_str.toInt();
  return n;
}

float CircleArea(float r){
  float result;
  result = pi * r * r;
  return result;
}
