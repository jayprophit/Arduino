/*
Return.  Terminates a function no matter what.  it dosen't take any conditions, it dosen't take any limitations or anything.
Whenever the code encounters the return keyword it will just terminate the function.

there are 2 ways to use a return
example 1 is the 1st return statement
example 2 is the 2nd return statement
*/



void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600)
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("Line 1");
  Serial.println("Line 2");
  /*
  return; //when return it placed here it will only print the 1st 2 statements and then terminate
  */
  Serial.println("Line 3");
  Serial.println("Line 4");

  for (int i=0; i<10; i++) {
    Serial.println(i);
    return; //it terminates after 4 and will not continue
  }
}
