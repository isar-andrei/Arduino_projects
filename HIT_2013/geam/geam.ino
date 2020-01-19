#include <Servo.h> 
Servo myservo;

void setup()
{Serial.begin(9600);
pinMode(6,OUTPUT);
myservo.attach(10);
}

void loop()
{int nr=analogRead(2),x=analogRead(4),s;
if(nr>=20)
{s=90;digitalWrite(6,LOW);}
else{s=180; 
  if((nr<20)&&(x>=300))
{digitalWrite(6,HIGH);}
else{digitalWrite(6,LOW);}}
myservo.write(s);}



