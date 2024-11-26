/*
local vairbale, are only visble to the function
global variable, can be seen by every function in the program
*/



int myGlobalVariable = 789;   // global veriable

void setup() {  // global veriable
  // put your setup code here, to run once:
  Serial.begin(9600);
  int myLocalVariable = 852;   // local veriable
  Serial.println("Printing in Setup");
  Serial.println(myGlobalVariable);
  Serial.println(myLocalVariable);
  Serial.println();
}

void loop() {   // global veriable
  // put your main code here, to run repeatedly:
  int myLocalVariable = 123;
  Serial.println("Printing in Setup");
  Serial.println(myGlobalVariable);
  Serial.println(myLocalVariable);
  delay (500);
}
