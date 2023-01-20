int var;
boolean flag;

void setup() { 
  pinMode(3, OUTPUT);
  var=0;
  flag = false;
}

void loop() {
  if (flag == false) {var += 1;}
  if (flag == true) {var -= 1;}
  if (var > 255) {flag = true;}
  if (var < 0) {flag = false;}
  analogWrite(3, var);  
}
