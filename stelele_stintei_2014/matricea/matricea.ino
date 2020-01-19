
int left,right,lefto,righto,nr=0;
void setup() {
  Serial.begin(9600);
  pinMode(10,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(11,OUTPUT);
}

void loop() {
  left=digitalRead(2);
  right=digitalRead(4);
  Serial.print("Left: ");
  Serial.print(digitalRead(2), DEC);
  Serial.print("; ");
  Serial.print("Right: ");
  Serial.println(digitalRead(4), DEC); 
  Serial.println(nr);
  
  

  if((left!=lefto)&&(left==1))
  {nr--;lefto=1;}
if(left==0)lefto=0;
delay(100);


  if((right!=righto)&&(right==1))
  {nr++;righto=1;}
  if(right==0)righto=0;
  
  if(nr<0)nr=0;
  if(nr>3)nr=3;
  
  if(nr==0)
     {analogWrite(9 , 0);
      analogWrite(10 , 0);
      analogWrite(11 , 0);}
  if(nr==1)
     { analogWrite(9 , 0);
      analogWrite(10 , 0);
      analogWrite(11 , 111);}
  if(nr==2)
     { analogWrite(9 , 0);
      analogWrite(10 , 111);
      analogWrite(11 , 0);}
  if(nr==3)
     { analogWrite(9 , 111);
      analogWrite(10 , 0);
      analogWrite(11 , 0);}
      
}

