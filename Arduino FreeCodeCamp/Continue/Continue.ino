
/*
Continue.  The continue statement skips the rest of the current iteration of a loop.
it continues by checking the conditional expression of the loop, and proceeding with any subsequent iterations.
*/



void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  for (int i=0; i<10; i++) {

    if(i==5){
      continue; //continue allows the loop to continue and finish, but it want print 5 as it has been specified to stop at 5, but will continue until the end of the loop
    }
    Serial.println(i);
  }
  Serial.println("End of our for loop");
}

void loop() {
  // put your main code here, to run repeatedly:

}
