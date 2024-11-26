/*
static will initialise the veriable to given values but it want reset it to the given value everytime the loop is called.
it preserves the data of there variable between the function calls
*/



void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  
  Serial.println();
  Serial.println();
}

void loop() {
  // put your main code here, to run repeatedly:
  static int xyz=0;
  xyz++;
  Serial.println(xyz);

  delay (500);
}
