/*
Loop Structures.  viod loop is a given default loop structure.  but you may need something to repeat itself.
for this we have 3 loop structures

1. for
2. while
3. do while

the loop will continously execute until it has met the requirements of the statement.
it will then end the loop moving onto the next statement and then exit 

while (condition(1)){
  //(2 & 3)statement(s);
}

entry controlled loop
this is used when we don't know how many times an action has to be repeated.
*/

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600)
/*
//this will print the statement 10 times
  int multiple =1;
  while(multiple<=10){
    Serial.println(multiple*73);
    multiple++;
  }
*/

/*
// this will continouslly print the statement as there isn't a statement to specify the amount of times to print or stop printing after x amount of times
int multiple =1;
  while(true){
    Serial.println(multiple*2);
    multiple++;
*/

}

void loop() {
  // put your main code here, to run repeatedly:

  static int testVariable;

  while (testVariable>5) {
    Serial.println("We are in the while loop now");
  }

  testVariable++;
  Serial.println(testVariable);
  delay(1000);

}

