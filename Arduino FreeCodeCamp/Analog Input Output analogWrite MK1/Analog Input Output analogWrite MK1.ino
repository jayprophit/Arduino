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


void setup()
{
  
}

void loop()
{
  analogWrite(10, 50);
  delay(1000); // Wait for 1000 millisecond(s)
  analogWrite(10, 100);
  delay(1000); // Wait for 1000 millisecond(s)
  analogWrite(10, 150);
  delay(1000); // Wait for 1000 millisecond(s)
  analogWrite(10, 200);
  delay(1000); // Wait for 1000 millisecond(s)
  analogWrite(10, 255);
  delay(1000); // Wait for 1000 millisecond(s)
}
