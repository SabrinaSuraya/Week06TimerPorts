void setup() {
  Serial.begin(9600);

  while(1){

    int value = analogRead(A0);
    value=value/4;
    analogWrite(3,value);
    Serial.println(value);
  }

}

void loop() {
  // put your main code here, to run repeatedly:

}
