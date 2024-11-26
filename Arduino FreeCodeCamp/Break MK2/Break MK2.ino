
/*
Break.  break is used to exit from a for, while or do..while loop, bypassing the normal loop condition.
*/


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600)

  int multiple =1;

  while (true) {
    Serial.println("endless loop");
    multiple++;
    if (multiple>10) {
      break;  //this allows it to break out of the loop, if commented out the loop will continue endlessly
    }
  }

}

void loop() {
  // put your main code here, to run repeatedly:

}
