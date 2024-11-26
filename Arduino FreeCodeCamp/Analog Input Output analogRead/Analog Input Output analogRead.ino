/*
analogRead & analogWrite.  to read continous voltages we have analogRead.  this functioncan only be used on analog pins which are numbered a0 - a5

analogRead(pin);

name of function = analogRead
parameters = pin number

1. real world = pyhsical parameter - analog signal
2. analog to digital convertor = analog signal - digital signal // arduino has a 10 bit adc (analog to digital conveter)
3. arduino = digitl signal - processing

the conversion scal is:-

voltage   ADC value
5v     -  1023
2.5v   -  512
0v     -  0

10 bits can hold up to 1023 values

1v = 1023 / 5 = 204.6 values

1023 = sum (512, 256, 128, 64, 32, 16, 8, 4, 2, 1)



*/


void setup()
{
  Serial.begin(9600);
}

void loop()
{
  Serial.println(analogRead(A0));
}
