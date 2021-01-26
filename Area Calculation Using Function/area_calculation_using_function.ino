#define pi 3.141592654

void setup() {

  float C_area, R_area, S_area;

  Serial.begin(9600);
  
  C_area = CircleArea(5.2);
  Serial.print("The Area of Circle is: ");
  Serial.println(C_area, 4);
  
  R_area = BoxArea(6, 7);
  Serial.print("The Area of Rectangle is: ");
  Serial.println(R_area);

  S_area = BoxArea(5);
  Serial.print("The Area of the Square is: ");
  Serial.println(S_area);

}

void loop() {
  // put your main code here, to run repeatedly:

}

float CircleArea(float radius){
  float result;
  result = pi * radius * radius;
  return result;
}

float BoxArea(float length, float breadth){
  float result;
  result = length * breadth;
  return result;
}

float BoxArea(float length){
  float result;
  result = length * length;
  return result;
}
