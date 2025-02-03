int voltage=voltage;
void setup() {
  Serial.begin(9600);
}

void loop() {
  int sensorValue = analogRead(A0);
   float volt = sensorValue * (5.0 / 1023.0);
  if (Serial.read()=='v'){
    Serial.print("voltage=");
    Serial.println(volt);

  }
}