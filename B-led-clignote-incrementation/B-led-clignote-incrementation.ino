int vitesse=0;

void setup() {
 pinMode(2, OUTPUT); 
  
}

void loop() {
  vitesse+=10;
  digitalWrite(2,HIGH);
  delay(vitesse);
  digitalWrite(2, LOW);
  delay(vitesse);
  if(vitesse>100){
    vitesse=0;
  }
  }
}
