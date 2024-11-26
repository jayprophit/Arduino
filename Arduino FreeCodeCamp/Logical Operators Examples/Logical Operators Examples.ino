/*
Logical operators are used when you want to take desicion in the code
each oprand is applied to some codition, which maybe be true or flase
This ia also a bollean value
there are 3 logical operators:-
1. and -  &&, 
2. or -   ||, 
3. not -  !, 
*/



void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  
  Serial.println("This lessons about && operator");
  Serial.println("true and true is :");
  Serial.println(5>3&&7<8); //5 is greater then 3 is true, 7 is less than 8 is true
  Serial.println("ture and flase is :");
  Serial.println(true&&8<5);  //8 is less than 5, this is true and will show a 0, as this is an incorrect statement
  Serial.println("false and true is :");
  Serial.println(false&&true);
  Serial.println("false and false is :");
  Serial.println(false&&false);

  Serial.println
  Serial.println
  Serial.println

  Serial.println("This lessons about || operator");
  Serial.println("true or true is :");
  Serial.println(true||true);
  Serial.println("ture or flase is :");
  Serial.println(true||flase);
  Serial.println("false or true is :");
  Serial.println(false||true);
  Serial.println("false or false is :");
  Serial.println(5<2||4>9); //5 is less than 2 is false, 4 is greater than 9 is false

  Serial.println
  Serial.println
  Serial.println

  Serial.println("This lessons about ! operator");
  Serial.println("The not of true is :");
  Serial.println(!true);
  Serial.println("The not of flase is :");
  Serial.println(!flase);
}

void loop() {
  // put your main code here, to run repeatedly:

}
