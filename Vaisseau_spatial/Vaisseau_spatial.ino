int etat_bouton = 0;
bool led_bleu_doit_etre_allumee = false;
int const LED_VERTE = 3;
int const LED_ROUGE = 5;
int const LED_JAUNE = 4;
int const LED_BLEU = 6;
int const BOUTON = 2;


void setup() {
  Serial.begin(9600);

  pinMode(LED_BLEU, OUTPUT);
  //pinMode(LED_VERTE, OUTPUT);
  // pinMode(LED_JAUNE, OUTPUT);
  // pinMode(LED_ROUGE, OUTPUT);
  pinMode(BOUTON, INPUT);
}


void loop() {

  // Lecture de l'état du bouton
  etat_bouton = digitalRead(BOUTON);

  // Gestion de la LED bleu ////////////////////////////////////
  digitalWrite(LED_BLEU, led_bleu_doit_etre_allumee);

  if (etat_bouton == HIGH) {
    led_bleu_doit_etre_allumee = !led_bleu_doit_etre_allumee;
    delay(100);
  }
  ////////////////////////////////////////////////////////////////

  if (etat_bouton == LOW) {
    //pas dapuis sur le bouton
    //digitalWrite(LED_VERTE, LOW);
    //digitalWrite(LED_JAUNE, LOW);
    //digitalWrite(LED_ROUGE, LOW);
    
    delay(100);
  } else {  //apui sur le bouton
            // digitalWrite(LED_VERTE, HIGH);
            // delay(500);
            // digitalWrite(LED_JAUNE, HIGH);
            // delay(500);
    //digitalWrite(LED_ROUGE, HIGH);
    //delay(500);
    //delay(1000);
    delay(100);
  }
}
