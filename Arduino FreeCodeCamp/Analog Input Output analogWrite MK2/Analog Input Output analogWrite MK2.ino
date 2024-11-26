/*
analogWrite

analogWrite(pin, value);

name of function = analogWrite
parameters = pin numbers and PWM value
values on analog ranges from 0 - 255
analog pin numbers = 3, 5, 6, 9, 10, 11 - all pins except 5 & 6 support 490HZ (5 & 6: support 980HZ)

the analog write function generates a square wave of a specified duty cycle on that specified pin.  

The majour purpose of using analogWrite is to control the brightness of LED or to control the speed of a motor.
a square wave has 2 values of either ON or OFF.  The time for which it is on or off is varied.

PWM = Pulse width modulation = the amount of time the signal is on

duty cycles
0%, = analogWrite(0)
25% (1/4)on 3/4 off, = analogWrite(64)
50% (1/2)on (1/2)off, = analogWrite(127)
75% (3/4)on (1/4 off), = analogWrite(191)
100%, = analogWrite(255)

duty cycles = is the fraction of width which the signal was on
pulse width modulation is a technique for getting analog results with digital means
digital control is used to create a square wave which is a signal switched between on and off.
this on and off cycle takes place really fast.
this on off pattern can simulate voltage in between full on and full off by changing the portion of time the signal spends on versus the time that signal spends off

PWM frequency, changing the frequaency of the signal will not change the duty cycle of the signal


*/




// C++ code
//


int ledpin = 10;	//LED connected to digital pin 10
void setup()
{
  // nothing happens in setup
}

void loop()
{
  // fade in from min to max in increments of 5 points:
  for(int fadeValue = 0; fadeValue <= 255; fadeValue +=5){
  // sets the value (range from 0 to 255)
  analogWrite(ledpin, fadeValue);
  // Wait for 30 millisecond(s) to see the dimming effect
  delay(30);
  }
  
  // fade in from max to min in increments of 5 points:
  for(int fadeValue = 255; fadeValue >= 0; fadeValue -=5){
  // sets the value (range from 0 to 255)
  analogWrite(ledpin, fadeValue);
  // Wait for 30 millisecond(s) to see the dimming effect
  delay(30);
  }
}
// fadeValue = fadeValue +5;
// fadeValue = fadeValue -5;
