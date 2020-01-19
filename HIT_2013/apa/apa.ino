#include <Servo.h> 
Servo myservo;
int pos=0;

void setup()
{Serial.begin(9600);
myservo.attach(9);}

void loop()
{int nr=analogRead(0),i,t;
t=(nr*0.2222)-61.111;
Serial.println(t);
myservo.write(0);
Serial.println(t);
if(t>=29)
{for(pos=1;pos<140;pos+=1)  
  {myservo.write(pos);delay(15);
   if(pos==178)
     {delay(3000);}
  }
}
else if(t<29)
{for(pos=1;pos<170;pos+=1)  
  {myservo.write(pos);delay(50);
   if(pos==178)
     {delay(1000);}
  }
}
}


