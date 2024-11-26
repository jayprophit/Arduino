/*
comparison operators are some operators that will tell you if something that you are trying to compare is true or false.
it will be returned as a boolean value
there are 6 comparison operators:-
1. <, less than, this will show as a boolean 1 meaning true
2. >, greater than, this will show as a boolean 1 meaning true
3. <=, less than or equal to, this will show as a boolean 1 meaning true
4. >=, greater than or equal to, this will show as a boolean 1 meaning true
5. ==, equal to equal to, this will show as a boolean 1 meaning true
6. !=, not equal to, this will only show false 0, if the 2 value's are the same or equal
*/



int variableOne = 7;
int variabletwo = 8;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  
  Serial.println(variableOne<variabletwo);
  Serial.println();
}

void loop() {
  // put your main code here, to run repeatedly:
  
  Serial.println();

  delay (500);
}
