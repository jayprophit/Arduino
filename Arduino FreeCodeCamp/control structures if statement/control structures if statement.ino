/*
Control structures, regular flow of code
start the code
based on a true or false condition, the code will start, stop or loop.
example if switch is press (true) it will take action, if the switch is not pressed (false) then it will not take action
this can be programmed to take action when switch is not pressed, and take no action wen switch is pressed.
This depends on how the code is structured
there is also an example of a nested if statement with a child statement on line 19-24
*/



void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600) bool myBool = false;
  if (myBool = true) {  //this line is true
    Serial.println("This line should print irrespective of anything");
    Serial.println("The second line")
  }

  if (true) {
    Serial.println("This is nested if");
    if (false) {    //this is a nested if statement - the child of the 1st if statement
      Serial.println("This is another line which will execute");
    }
  }
}

if (2 < 5 && 5 < 2) {  //this line is true as both statements are true
  Serial.println("This statement will not print as the condition is flase");
}

Serial.println("This line should also print irrespective of anything");
}

void loop() {
  // put your main code here, to run repeatedly:
}
