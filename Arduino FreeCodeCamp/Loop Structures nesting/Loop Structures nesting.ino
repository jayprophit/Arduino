void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  //*****
  //*****
  //*****
  //*****
  //*****

  //*
  //**
  //***
  //****
  //*****

 /*
  for (int i=0; i<5; i++)
  Serial.println("*****");
  */

  for (int i=0; i<5; i++){
    for(int j=0; j<=i; j++) {//becuase j<=i this means it will only print an additional character as its specified, anything other then the extra charater will become false
      Serial.print("*");
    }
    
  Serial.println();
  }
}

void loop() {
  // put your main code here, to run repeatedly:
 
}
