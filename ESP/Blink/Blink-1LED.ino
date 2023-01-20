/*

La LED bleue sur le module ESP-01 est connectée à la broche GPIO1

(qui est également la broche TXD; nous ne pouvons donc pas utiliser Serial.print() en même temps)

Notez que ce sketch utilise LED_BUILTIN pour trouver la broche avec la LED interne

http://arduino.esp8266.com/stable/package_esp8266com_index.json
https://randomnerdtutorials.com/esp8266-pinout-reference-gpios
*/

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);  // Initialise la broche LED_BUILTIN en sortie
}

// la fonction loop s'exécute en boucle indéfiniment
void loop() {
  // Allume la LED (Notez que LOW est le niveau de tension
  // mais en réalité la LED est allumée; c'est parce que
  // elle est active à basse tension sur l'ESP-01)
  digitalWrite(LED_BUILTIN, LOW);  

  delay(1000);                      // Attend une seconde
  digitalWrite(LED_BUILTIN, HIGH);  // Éteint la LED en faisant la tension HIGH

  delay(2000);  // Attend deux secondes (pour démontrer la LED active à basse tension)
}