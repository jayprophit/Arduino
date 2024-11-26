/*
Arrys.  an array is a veriable that can store multipe values of the same type
there can be multi dimensional arrays. 3 dimensional arrays has rows, columns and depth

multiple 2 dimensional arrays make 3 dimensioanl arrays.

example if we want to store an image pixal data image of a black and white image we use 2 dimensional arrays.

if we want to store an image pixel data of a  coloured image which also has RGB values, we use a 3 dimentional array

this is 1 dimension arrays example below
*/



void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  int myArray [5] = {745, 74, 259, 85, 421};  //1st= 745, 2nd= 74, 3rd= 259, 4th= 85, 5th= 421.  computers start counting from 0 not 1.  so the computer reads it as 0= 745, 1st= 74, 2nd= 259, 3rd= 85, 4th= 421

  Serial.println(myArray[2]); //this prints the 2nd element

  myArray[2]=706;  //we alter these elements directly, we can change the value 256 has been swapped with 706 at the 2nd index
  Serial.println(myArray[2]);

  int myVariable = myArray[0] + myArray[1] + myArray[2];  //this adds the specified elements together

  Serial.println(myVariable);

  for (int i=0; i<5; i++){
    Serial.println(myArray[i]);
  }

  for (int i=0; i<5; i++) { //this adds 5 to all the elements
    myArray[i]= myArray{i}+5;
  }
  
  for (int i=0; i<5; i++){
    Serial.println(myArray[i]);
  }

  int sum =0; //this is the total sum of all the new elements that have been changed.  this is the 706 and the adding of 5 to all elements
  for (int i=0; i<5; i++) {
    sum = sum + myArray[i];
  }

  Serial.println(sum);

}

void loop() {
  // put your main code here, to run repeatedly:

}
