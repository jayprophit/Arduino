/*
Control structures, regular flow of code
start the code
based on a true or false condition, the code will start, stop or loop.
example if switch is press (true) it will take action, if the switch is not pressed (false) then it waill not take action
this can be programmed to take action when switch is not pressed, and take no action wen switch is pressed.
This depends on how the code is structured
this is an if, else if and else statement
*/



//the range of this example is from 0-70
int temperature = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  // Assuming you have a sensor that updates the temperature variable
  // For example, replace the next line with the actual code to read the temperature
  // temperature = readTemperatureSensor();
  
  if (temperature < 50 && temperature > 10) {
    // do Thing A
    digitalWrite(6, HIGH);
    delay(500);
    digitalWrite(6, LOW);
    delay(500);
  } else if (temperature > 50 && temperature < 70) {
    // do Thing B
    digitalWrite(7, HIGH);
    delay(500);
    digitalWrite(7, LOW);
    delay(500);
  } else {
    // do Thing C
    digitalWrite(8, HIGH);
    delay(500);
    digitalWrite(8, LOW);
    delay(500);
  }
}
