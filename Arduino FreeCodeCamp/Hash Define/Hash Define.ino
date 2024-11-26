/*
hash define canot be changed and is giving as a value at setup (saves memory but has pro's and con's)
const/ Constant it modifies the behaviour of the veriable, making the veriable read-only, meaning it vcan be used but cannot be changed
*/



#define pi 3.14
const int MyVariable =5;    //constant, read-only

void setup() {  // global veriable
  // put your setup code here, to run once:
  
  Serial.begin(9600);
  
  Serial.println();
  Serial.println();
}

void loop() {   // global veriable

  float areaOfCircle = pi * 5 * 5;
  Serial.println(areaOfCircle);
  delay (500);
}
