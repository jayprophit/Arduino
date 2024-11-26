/*
float is used for storing deciamal numbers
*/



float myFloatVariable =7.8;

void setup() {
    // put my setup code here, to run once:
    Serial.begin(9600);
    myFloatVariable = myFloatVariable/2;
    Serial.println(myFloatVariable);
    
   
}

void loop() {
    // put my setup code here, to run repeatedly:
}
