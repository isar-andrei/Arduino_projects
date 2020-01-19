#include <Time.h>
#include <LiquidCrystal.h>

#define TIME_MSG_LEN  11   
#define TIME_HEADER  'T'   
#define TIME_REQUEST  7    

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup()  {
  Serial.begin(9600);
  lcd.begin(16, 2);
}

void loop(){
  lcd.setCursor(0, 0);  
  if(Serial.available() ) 
  {
    processSyncMessage();
  }
  if(timeStatus() == timeNotSet) 
    {lcd.println("Scrie T urmat de                ");
    lcd.setCursor(0, 1);
    lcd.println("codul UNIX                      ");}
  else     
      digitalClockDisplay();  
  delay(1000);
}

void digitalClockDisplay(){
  int n=analogRead(1),m=analogRead(0),t;
  
  t=(m *0.2222)-61.111;
 Serial.println(n);
  
  if(n==1022)
  {lcd.print(hour());
  printDigits(minute());
  printDigits(second());
  lcd.print(" ");
  lcd.print(day());
  lcd.print(" ");
  lcd.print(month());
  lcd.print(" ");
  lcd.print("13"); 
  lcd.println();
  lcd.setCursor(0, 1);
  lcd.print("T=");
  lcd.print(t);
  lcd.print("C");
  lcd.print(" ");
  }
  else if(n!=1023)
  {lcd.setCursor(0, 0);
  lcd.print("                                  ");
  lcd.setCursor(0, 1);
  lcd.print("                                    ");
  }
}

void printDigits(int digits){
  lcd.print(":");
  if(digits < 10)
    lcd.print('0');
  lcd.print(digits);
}

void processSyncMessage() {
  while(Serial.available() >=  TIME_MSG_LEN ){  
    char c = Serial.read() ; 
    lcd.print(c);  
    if( c == TIME_HEADER ) {       
      time_t pctime = 0;
      for(int i=0; i < TIME_MSG_LEN -1; i++){   
        c = Serial.read();          
        if( c >= '0' && c <= '9'){   
          pctime = (10 * pctime) + (c - '0') ;     
        }
      }   
      setTime(pctime);   
    }  
  }
}


