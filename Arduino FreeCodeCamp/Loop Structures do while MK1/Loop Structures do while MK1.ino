/*
Loop Structures.  viod loop is a given default loop structure.  but you may need something to repeat itself.
for this we have 3 loop structures

1. for
2. while
3. do while

the loop will continously execute until it has met the requirements of the statement.
it will then end the loop moving onto the next statement and then exit 

do {  //condition (1)
  //statement block
} while (condition);  //condition (2 & 3)



exit controlled loop
used when we don't know how many times an action has to be repeated but it should run at least once

*/



void setup() {
  // put your setup code here, to run once:
  int multiple =1;

  Serial.begin(9600)

  do{
  Serial.println(multiple*2);
  multiple++;
  } while (multiple<=10);

}

void loop() {
  // put your main code here, to run repeatedly:

}
