#include <Servo.h> 
Servo myservo; 
Servo myservo1;

void setup() 
{myservo.attach(9);
myservo1.attach(10);} 

void loop() 
{myservo.write(0);
myservo1.write(180);} 
