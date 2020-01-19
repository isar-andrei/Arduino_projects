#include <Servo.h> 
Servo myservo;
float s=0;

void setup() {
  Serial.begin(9600);  
  myservo.attach(6);
  myservo.write(0);
  
}

void loop() {
  int i=analogRead(2);
  float v = i * (5.0 / 1023.0);
  s=s+v;
  if(s>2.00){
    
    myservo.write(180);
    delay(5000);
    myservo.write(0);
  s=0;}
    Serial.println(s);
}
