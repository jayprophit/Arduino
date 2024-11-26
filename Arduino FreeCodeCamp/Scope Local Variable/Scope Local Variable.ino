/*
local vairbale, are only visble to the function
global variable, can be seen by every function in the program
*/



void setup() {  // global veriable
  // put your setup code here, to run once:
  int myVariable = 6;   // local veriable, coimpiled in setup once
  Serial.begin(9600);

  Serial.println("Printing in Setup");
  Serial.println(myVariable);
  Serial.println();
}

void loop() {   // global veriable
  // put your main code here, to run repeatedly:
  Serial.println("Printing in Setup");
  delay (500);
}
