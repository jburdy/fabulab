
#define LED 14

void setup() {

  pinMode(LED_BUILTIN, OUTPUT); 
  pinMode(LED, OUTPUT);   

}


void loop() {

  digitalWrite(LED_BUILTIN, LOW); 
  digitalWrite(LED, LOW);

  delay(1000);      

  digitalWrite(LED_BUILTIN, HIGH); 
  digitalWrite(LED, HIGH);

  delay(2000);  
}