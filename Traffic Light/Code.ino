int Global_RedLedPinNumber    = 4; // This variable used to store the pin on arduino that led connected.
int Global_YellowLedPinNumber = 5; // This variable used to store the pin on arduino that led connected.
int Global_GreenLedPinNumber  = 6; // This variable used to store the pin on arduino that led connected.
void setup()
{
  pinMode(Global_RedLedPinNumber,    OUTPUT);  // Make the red led pin as output pin.
  pinMode(Global_YellowLedPinNumber, OUTPUT);  // Make the yellow led pin as output pin.
  pinMode(Global_GreenLedPinNumber,  OUTPUT);  // Make the green led pin as output pin.
}
void loop()
{
  // Turn on Red Led.
  digitalWrite(Global_RedLedPinNumber, HIGH);
  delay(1000);
  // Make Yellow Led Flashing.
  digitalWrite(Global_YellowLedPinNumber,HIGH);
  delay(500);
  digitalWrite(Global_YellowLedPinNumber,LOW);
  delay(500);

  digitalWrite(Global_YellowLedPinNumber,HIGH);
  delay(500);
  digitalWrite(Global_YellowLedPinNumber,LOW);
  delay(500);

  digitalWrite(Global_YellowLedPinNumber,HIGH);
  delay(500);
  // Turn off Red and Yellow.
  digitalWrite(Global_YellowLedPinNumber,LOW);
  digitalWrite(Global_RedLedPinNumber,LOW);
  // Turn on Green Led. 
  digitalWrite(Global_GreenLedPinNumber,HIGH);
  delay(1500);
  // Turn off Green Led.
  digitalWrite(Global_GreenLedPinNumber,LOW);
}