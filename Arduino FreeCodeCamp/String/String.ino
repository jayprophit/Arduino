/*
Strings.  a string is traditionally a sequence of characters.
example what ever messages we write in our code are all strings
strings are used to contain information, messages, error messages or any logs.
we can also display strings on our serial monitor on the LCD display or any kind of display
*/



void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  Serial.println("This is my string");

  char Str2[7] = {'a', 's', 'h', 'i', 's', 'h'};  //we always take 1 additional number to declare our string.  the name ashish has 6 characters so adding 1 we get 7.  this is because an ending to the string is denoted by a special character which is known as a null character.
  Serial.println(Str2);

  char Str3[7] = {'a', 's', 'h', 'i', 's', h', '\0'}; //we can also add the null character into the code directly.  '\0' is a null character.  this allows it to know this string has come to an end.  with out it, the compiler will think that there are strings coming after this string which are part of the same string.  this is to allow it to differentiate between different sentences.  which is backslash 0
  Serial.println(Str3);
  
  char Str4[] = "ashish"; //this is also another way to write a string the compiler will automatically dynamically allocate a number to this string. so it will add up the characters and add a null to the string making its total  
  /*this is the best way to write a string because we don't know how many characters  your string will contain.  this is time saving so time isn't spent counting the characters for the string*/
  Serial.println(Str4)
  
  char Str5[7] = "ashish";  //this is another way to write the string with the given number including the null
  Serial.println(Str5);
  
  char Str6[15] = "ashish"; //it is also ok to take a larger memory for a smaller string.  but you can't take a smaller number for a larger string as it will only print the number allocated to it including the null
  Serial.println(Str6);
  
  char Str7[7] = "ashish";  //this is a string class.  the benifits of using a class is that it's a built in class. it has alot of functions inside it. those can be, comparing a string, starting with, ending with, we can conver the entire string which is written in lowercase to uppercase and vice versa, we can convert intergers into strings and vice versa
  Serial.println(Str7);
  Serial.println(Str7.charAt(0)); //we have specified the character starts at 0.  0 is character a
}

void loop() {
  // put your main code here, to run repeatedly:

}
