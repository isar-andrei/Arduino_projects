unsigned long timer;
void setup() {
  Serial.begin(9600);
  pinMode(13, OUTPUT);
}

void loop() {
  unsigned long timer = millis();
  if((timer/5000)%2!=0)
  {digitalWrite(13,255);}
  else{digitalWrite(13,0);}
}

