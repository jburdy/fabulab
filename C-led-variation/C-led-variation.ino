int intensite;

void setup() {
  pinMode(3, OUTPUT);
  intensite=0;
}

void loop() {
  intensite=50;
  analogWrite(3, intensite);
  delay(1000);
  intensite=125;
  analogWrite(3, intensite);
  delay(1000);
  intensite=255;
  analogWrite(3, intensite);
  delay(1000);
}
