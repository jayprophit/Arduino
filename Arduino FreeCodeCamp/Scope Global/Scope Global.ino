/*
local vairbale, are only visble to the function
global variable, can be seen by every function in the program
*/



int myVariable = 6;   // global veriable

void setup() {  // global veriable
  // put your setup code here, to run once:
  Serial.begin(9600);

  Serial.println("Printing in Setup");
  Serial.println(myVariable);
  Serial.println();
}

void loop() {   // global veriable
  // put your main code here, to run repeatedly:
  Serial.println("Printing in Setup");
  Serial.println(myVariable);
  delay (500);
}
