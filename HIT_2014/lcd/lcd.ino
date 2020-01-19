#include <LiquidCrystal.h>
int l;
long x0,x1,x2,x3,xw;
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup(){
 lcd.begin(16, 2);
 Serial.begin(9600);
 l=1;
}

void loop(){
 int nr0=analogRead(0),nr1=analogRead(1),nr2=analogRead(2),nr3=analogRead(3);
 unsigned long timer0=millis(),timer1=millis(),timer2=millis(),timer3=millis(),timerw=millis();
 if(l==1){
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
    lcd.print("Sun:ON        ");
    
    lcd.setCursor(0, 1);
    lcd.print("Water:ON            ");
    
    lcd.setCursor(10, 1);
    lcd.print("Mec:ON              ");
    
      
    }
 if(timerw-xw>15000){
    xw=timerw;
    l=2;}    
 if(l==2){
         lcd.setCursor(0, 0);
         lcd.print("How do you            ");
         lcd.setCursor(0, 1);
         lcd.print("spell mousetrap?           ");
         delay(5000);
         l=1;
        }        
}
