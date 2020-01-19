long x0,x1,x2,x3,x4,x5;
int nr0,nr1,nr2,nr3,nr4,nr5;
unsigned long timer0,timer1,timer2,timer3,timer4,timer5;

void setup(){
Serial.begin(9600);  
pinMode(13, OUTPUT);
pinMode(12, OUTPUT);
pinMode(11, OUTPUT);
pinMode(10, OUTPUT);
pinMode(9, OUTPUT);
pinMode(8, OUTPUT);
}

void loop(){
int nr0=analogRead(0),nr1=analogRead(1),nr2=analogRead(2),nr3=analogRead(3),nr4=analogRead(4),nr5=analogRead(5),nr6=analogRead(6);  
unsigned long timer0 = millis();
unsigned long timer1 = millis();
unsigned long timer2 = millis();
unsigned long timer3 = millis();
unsigned long timer4 = millis();
unsigned long timer5 = millis();

if(nr0>800)
  {digitalWrite(13, HIGH);
   x0 = timer0;}
if(timer0 - x0 > 5000)
   {digitalWrite(13, LOW);}

if(nr1>800)
  {digitalWrite(12, HIGH);
   x1 = timer1;}
if(timer1 - x1 > 5000)
   {digitalWrite(12, LOW);}
   
if(nr2>800)
  {digitalWrite(11, HIGH);
   x2 = timer2;}
if(timer2 - x2 > 5000)
   {digitalWrite(11, LOW);}

if(nr3>800)
  {digitalWrite(10, HIGH);
   x3 = timer3;}
if(timer3 - x3 > 5000)
   {digitalWrite(10, LOW);}

if(nr4>800)
  {digitalWrite(9, HIGH);
   x4 = timer4;}
if(timer4 - x4 > 5000)
   {digitalWrite(9, LOW);}

if(nr5>800)
  {digitalWrite(8, HIGH);
   x5 = timer5;}
if(timer5 - x5 > 5000)
   {digitalWrite(8, LOW);}    
}
