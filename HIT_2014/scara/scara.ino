void setup() {
  Serial.begin(9600);
  pinMode(7, OUTPUT);
}

void loop() {
  digitalWrite(7,LOW);
  delay(5000);
  digitalWrite(7,HIGH);
  delay(5000);
}
