const int sensorPin = A0;
const float baselineTemps = 20.0;


void setup() {
  Serial.begin(9600);  //ouvrir un port serie
  for (int pinNumber = 2; pinNumber < 5; pinNumber++) {

    pinMode(pinNumber, OUTPUT);
    digitalWrite(pinNumber, LOW);
  }
}


void loop() {
  int sensorVal = analogRead(sensorPin);
  Serial.print("valeur capteur: ");
  Serial.print(sensorVal);
  float voltage = (sensorVal / 1024.0) * 5.0;
  Serial.print(",volts: ");
  Serial.print(voltage);
  Serial.print(",degres c :");
  float temperature = (voltage - .5) * 100;
  Serial.println(temperature);
  if (temperature < baselineTemps) {
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
  } else if (temperature > baselineTemps + 2 && temperature < baselineTemps + 4) {
    digitalWrite(2, HIGH);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
  } else if (temperature > baselineTemps + 4 && temperature < baselineTemps + 6) {
    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(4, LOW);
  } else if (temperature >= baselineTemps + 6) {
    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
  }
  delay(100);
}
