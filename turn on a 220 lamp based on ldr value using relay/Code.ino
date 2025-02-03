const int ledPin = 7;  
const int ldr = A0;
int threshold=40;
int level;


void setup() {

  Serial.begin(9600);
  pinMode(ledPin, OUTPUT); 
  pinMode(ldr, INPUT);   
}

void loop() {

 level= analogRead(ldr);
Serial.println(level);
if(level< threshold){
  digitalWrite(ledPin , HIGH );

    Serial.println("LDR is DARK, LED is ON");
    
   }
  else {

    digitalWrite(ledPin, LOW);       
    Serial.println("LDR is light, LED is Off");
  }}