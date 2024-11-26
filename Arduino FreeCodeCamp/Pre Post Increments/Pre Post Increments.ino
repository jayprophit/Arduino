/*

*/


int myVaribale = 6;

void setup() {
    // put my setup code here, to run once:
    Serial.begin(9600);
      // addition ++myvariable pre increment, increases the value by 1, the value is 1st incremented and then used in the expression
      // addition myvariable++ post increment, increases the value by 1, the value is 1st used in the expression and then incremented
      // subtraction --MyVariable pre dicrement, decreases the value by 1, the value is 1st incremented and then used in the expression
      // subtraction --MyVariable post dicrement, decreases the value by 1, the value is 1st used in the expression and then incremented
    Serial.println(++myvariable);
    
   
}

void loop() {
    // put my setup code here, to run repeatedly:
}
