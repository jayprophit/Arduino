
/*
Break.  break is used to exit from a for, while or do..while loop, bypassing the normal loop condition.
*/


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600)

  int multiple =1;

  while (multiple<=10) {
    Serial.println(2* multiple);
    multiple++;
    /*   // this section commented out allows it to go up to 20, when intialized it gose up to 8
    if (multiple == 5) {
      serial.println("Breaking the loop now");
      break
    }
    */
  }

}

void loop() {
  // put your main code here, to run repeatedly:

}
