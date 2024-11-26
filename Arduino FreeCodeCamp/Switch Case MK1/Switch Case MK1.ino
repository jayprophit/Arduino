/*
Switch..case, like if statements, switch..case controls the flow programs by allowing us to specify different codes that should be executed in various conditions.

In particular a switch..case compares the value specified in the case statements.  when a case statement is found, whos value matches that of the veriable, then the code in that case statement is executed.


switch(veriable) {
case label1:  //the label is the number that is compared to the case statement

// statements
break;

case label2:

// statement
break;

default:  //when none of the statements is true then the default statement is executed.  if we dont write default, when none of the statements is true the nothing will happen.
// statements
break;
}
*/



void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600):
  int x=5;  // it will start at the specified number and will only choose 1 option and that will be 5 as 5 is specify.  it will only print 1 statement as it compares until it finds the statement  it is looking to compare to.  without a break it will print more then one statement until it comes across a break statement
  switch(x) {
    case 1:  
      Serial.println("Choice 1");
      break;  //if there was no break then it would print more then one statement until it comes acrross a break statement
    case 2:
      Serial.println("Choice 2");
    case 3:
      Serial.println("Choice 3");
      break;
    case 4:
      Serial.println("Choice 4");
    case 5:
      Serial.println("Choice 5");
      break;
    case 6:
      Serial.println("Choice 6")
  }
}

void loop() {
  // put your main code here, to run repeatedly:

}
