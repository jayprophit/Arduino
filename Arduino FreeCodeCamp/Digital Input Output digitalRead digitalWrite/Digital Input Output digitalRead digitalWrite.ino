/*
Digital input & output.  this isa function to read or write any sort of digital data.  This data can be some output from external sensors and it can be some sort of output data which is given by arduino to other peripherals or components.
there are 2 functions.  this is:-

digitalRead
digitalWrite

digitalWrite(pin, state);

name of function = digitalWrite
parameters = pin number and state of pin

digitalWrite is used to write a state of high or low to a digital pin.
So we can see ditalWrite is a function, where digitalWrite is the name of that function and it has 2 parameters which is pin and state.
pin is the pin number which we want to manipulate
state is the value of either high or low.  where high means 5 volts (5v) and low means 0 volts (0v).
whenever we use digitalWrite we have to declare that pin as output using pinMode

digitalRead(pin);

name of function = digitalRead
parameters = pin number

digitalRead reads the state of the specified pin, if it is high or low.
*/



int button = 7;
void setup()
  // put your setup code here, to run once:
{
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(button, INPUT);
  Serial.begin(9600);
}

void loop()
  // put your main code here, to run repeatedly:
{
  Serial.println(digitalRead(button));
  
  if(digitalRead(button)==HIGH) {
    
  digitalWrite(LED_BUILTIN, HIGH);
  
  }
  
  else {
  	digitalWrite(LED_BUILTIN, LOW);
  }
}

