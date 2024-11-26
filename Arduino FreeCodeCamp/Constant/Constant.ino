/*
const/ Constant it modifies the behaviour of the veriable, making the veriable read-only, meaning it vcan be used but cannot be changed
*/



const int MyVariable =5;    //constant, read-only
int mySecondVariable = MyVariable*5;


void setup() {  // global veriable
  // put your setup code here, to run once:
  
  Serial.begin(9600);
  
  Serial.println(mySecondVariable);
  Serial.println();
}

void loop() {   // global veriable

  
  delay (500);
}
