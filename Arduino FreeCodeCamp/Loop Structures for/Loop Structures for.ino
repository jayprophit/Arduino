/*
Loop Structures.  viod loop is a given default loop structure.  but you may need something to repeat itself.
for this we have 3 loop structures

1. for
2. while
3. do while

the loop will continously execute until it has met the requirements of the statement.
it will then end the loop moving onto the next statement and then exit 

for (initialization(1); condition(2); update(5)){
  //(4 & 5)statement(s);
}

entry contrlled loop
used when an action is to executed for a predefined number of times
*/



void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  for (int i=0; i<20; i++){ //this is only executed once and then it checks the condition
    //it will print these statements 20 times
    Serial.println("My name");
    Serial.println("2nd statement");
    Serial.println(i);
    //it will print this statement 19 times, 20 including the 1st initial statement
    //when the conditions are met and the condition is now false it will exit the loop
  }
}

void loop() {
  // put your main code here, to run repeatedly:

}
