void setup()
{Serial.begin(9600);
pinMode(7,OUTPUT);
}

void loop()
{int nr=analogRead(2),x=analogRead(5);

if(nr>=20)
{digitalWrite(7,LOW);}
else
{if((nr<20)&&(x>=300))
{digitalWrite(7,LOW);}
else
{digitalWrite(7,HIGH);}}
}




