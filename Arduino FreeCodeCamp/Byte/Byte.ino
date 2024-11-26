/*
byte stores from 8-10 bits of data
8 byte data type stores from 0-255
default number for byte is 0
*/


byte myByteVariable = 78;
void setup() {
  // put your setup code here, to run once:
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.begin(9600);

  Serial.println(myByteVariable);
  Serial.println();
  Serial.println();
}
