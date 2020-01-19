float s=0;

void setup() {
  Serial.begin(9600); 
  pinMode(13,OUTPUT);
  
}

void loop() {
  int x=analogRead(3);
  s+=x;
  if(x==0){
  digitalWrite(13,HIGH); 
  s=0;
}
  if(s>0){
  digitalWrite(13,LOW);}
  Serial.println(x);
  
}
