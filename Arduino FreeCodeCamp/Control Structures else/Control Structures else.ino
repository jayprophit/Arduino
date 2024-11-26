/*
Control structures, regular flow of code
start the code
based on a true or false condition, the code will start, stop or loop.
example if switch is press (true) it will take action, if the switch is not pressed (false) then it waill not take action
this can be programmed to take action when switch is not pressed, and take no action wen switch is pressed.
This depends on how the code is structured
an else statment will always follow after an if statement.
the else statement will only execute if the if statement is not met, meaning the if statement is false
we use else if statement if there is more then one condition

if (condition1){  //this is the 1st condition that it will execute if true
  //do Thing A
}
else if (condition 2){  //this is the 2nd condition that will execute if the 1st condition requirements are not met and are flase
  //do Thing B
}
else{ //if none of conditions from 1st and 2nd statements are met and are flase, then the else block will execute
  //do Thing C
}
*/



void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600)

  if(false){  //this statement is false and will not execute
    Serial.println("My first statement");
  }

  else {
    Serial.println("My else statement");

  if (//some other condition){
    //another task here...
  }
}

void loop() {
  // put your main code here, to run repeatedly:

}
