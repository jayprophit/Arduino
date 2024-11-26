/*
Functions.  a function is a set of statements that take inputs and do some specific computation and produces some output.

The idea is to put some commnonly or repeatedly done tasks together and make a function so that instead of writing the same code againand again for different inputs, we can call the function.

return type = void
Name of function = name
Parameters/ Arguments = ()

void name(){
  //statements
}

this is a basic structure of a function

void means it will not return anything for that function

instead of void we can use:-

int
boolean
float

or anything for that matter, whatever we want to return from that function

example of a function is digitalWrite, pinMode
if there are no parameters or arguments to the function, we keep the bracket empty

functions help us in reducing code redundancy
functions make code modular and reusable.  This means it cn be used in the same project if it needs to be recaled or you can use the same function in a new project.
functions provide abstraction and aids team work.
*/



void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int d = sum(7, 8, 9);
  //Serial.println(d);
  int e = sum(1, 2, 3);
  S//erial.println(e);
  //Serial.println(sum(4, 5, 6)); //this is a function inside a function

  Serial.println(isTall(123));  //true statement
  Serial.println(isTall(20)); //false statement
}

int sum (int a, int b, int c) {
  returna+b+c;
}

bool isTall (int height) {
  if (height>100) {
    return true;
  }
  else {
    return false;
  }
}

/*void moveRobotForward(){  //example of custom function to call to make a robot move forward
  .
  .
  .
  .
  .
  .
  .
  .
  .
  .
  .
  .
}
*/
