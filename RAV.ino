

void setup() {
  Serial.begin(9600); 
}

void loop() {
  int sensorValue = analogRead(A3);
  float voltage = sensorValue * (3.0 / 1023.0);  
  // You can compare the size of the code by running the program using int and then running with float 
  //float voltage = sensorValue * (3.0 / 1023.0);  
  
  // print out the value you read:
  Serial.println(voltage);
}
