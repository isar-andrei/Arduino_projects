void setup()
{Serial.begin(9600);
pinMode(13,OUTPUT);}
void loop()
{int m=analogRead(3);
Serial.println(m);
if(m>1000)
{digitalWrite(13,LOW);}
else
{digitalWrite(13,HIGH);}
}




