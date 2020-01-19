unsigned long timer_scara;
float s=0;
int x,left,right,lefto,righto,nr=0;

void setup(){ 
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(13, OUTPUT);
  Serial.begin(9600);
} 
 
 
void loop(){
  x=analogRead(5);
  left=digitalRead(2);
  right=digitalRead(4);
unsigned long timer_scara = millis();

analogWrite(5, 30); //roata

analogWrite(6, 190); //lac

if((timer_scara/5000)%2!=0) //scara
  {digitalWrite(13,255);}
  else{digitalWrite(13,0);}
  
  s+=x; //pres
  if(x==0){
  digitalWrite(7,HIGH); 
  s=0;
}
  if(s>0){
  digitalWrite(7,LOW);}
  Serial.println(x);

  if((left!=lefto)&&(left==1)) //matricea
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

