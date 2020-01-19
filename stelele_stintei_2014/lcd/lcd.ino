#include <LiquidCrystal.h>
long x0,x1,x2;
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup(){
 lcd.begin(16, 2);
 Serial.begin(9600);
}

void loop(){
 int nr0=analogRead(0),nr1=analogRead(1),nr2=analogRead(2);
 unsigned long timer0=millis(),timer1=millis(),timer2=millis();
    lcd.setCursor(0, 0);
    lcd.print("Air:");
    if(nr0!=0){
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
    if(nr1!=0){
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
    lcd.setCursor(10, 1);
    lcd.print("Mec:");
    if(nr2!=0){
       lcd.setCursor(14, 1);
       lcd.print("ON  ");
       x2=timer2;
       }
    if(timer2-x2>5000){
       lcd.setCursor(14, 1);
       lcd.print("OFF ");
       }
      
    
}
