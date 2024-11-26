/*
char = Chracter, characters are still represented by a numer,
you can find this out using the ASCII Table (American Standard Code for Information Interchange)
a char data type occupies 1 byte in the memory
*/



char mychar = 'A';
//char mychar = '65'; is eaqual to the Capital leter A
void setup() {
  // put your setup code here, to run once:
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.begin(9600);

  Serial.println(myChar+1); //by adding 1 to 65 you made the character Capital leter B
  Serial.println();
  Serial.println();
}
