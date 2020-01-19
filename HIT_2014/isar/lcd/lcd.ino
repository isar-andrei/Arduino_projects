#include <LiquidCrystal.h>
#include <Servo.h> 
long x0,x1,x2;
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

Servo myservo;
float s=0;

unsigned long timer;

void setup(){
 lcd.begin(16, 2);
 Serial.begin(9600);
   myservo.attach(6);
  myservo.write(0);
}

void loop(){
 int nr0=analogRead(1),nr1=analogRead(2),nr2=analogRead(3);
 unsigned long timer0=millis(),timer1=millis(),timer2=millis();
    lcd.setCursor(0, 0);
    lcd.print("Air:");
    if(nr0>10){
       lcd.setCursor(4, 0);
       lcd.print("ON  ");
       x0=timer0;
       }
    if(timer0-x0>5000){
       lcd.setCursor(4, 0);
       lcd.print("OFF  ");
       }
    lcd.setCursor(9, 0);
    lcd.print("Sun:");
    if(nr1>600){
       lcd.setCursor(13, 0);
       lcd.print("ON  ");
       x1=timer1;
       }
    if(timer1-x1>5000){
       lcd.setCursor(13, 0);
       lcd.print("OFF ");
       }
    lcd.setCursor(0, 1);
    lcd.print("Water:");
    lcd.setCursor(6, 1);
    lcd.print("ON  ");
    lcd.setCursor(9, 1);
    lcd.print("Mec:");
    if(nr2>10){
       lcd.setCursor(13, 1);
       lcd.print("ON  ");
       x2=timer2;
       }
    if(timer2-x2>5000){
       lcd.setCursor(13, 1);
       lcd.print("OFF ");
       }
        
   unsigned long timer = millis();
  int i=analogRead(3);
  float v = i * (5.0 / 1023.0);
  s=s+v;
  if(s>2.00){
    
    myservo.write(180);
    if((timer/5000)%2!=0)
    {myservo.write(0);
  timer=0;}
  s=0;}
    Serial.println(s);
        
}
