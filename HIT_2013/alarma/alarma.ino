#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup()
{Serial.begin(9600);
pinMode(8,OUTPUT);
lcd.begin(16, 2);}
int v=1;

void loop()
{int x=analogRead(5),y=analogRead(3);

if((x>=250)&&(v==0))
{v=1;}
else if((x>=250)&&(v==1))
{v=0;}

switch (v) {
    case 1:
      Serial.println("on");
      lcd.setCursor(0, 0);
      lcd.println("On               ");
      if(y!=0)
{
  digitalWrite(8, HIGH); 
  lcd.setCursor(0, 1);
  lcd.println("BURGLAR!           "); 
  
}
      break;
      case 0:
      Serial.println("off");
      lcd.setCursor(0, 0);
      lcd.println("Alarm Off                 ");
      digitalWrite(8,LOW);
      lcd.setCursor(0, 1);
      lcd.println("                      ");
      break;
    }
}\



