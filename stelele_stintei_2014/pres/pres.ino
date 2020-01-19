float s=0;

void setup() {
  Serial.begin(9600); 
  pinMode(7,OUTPUT);
  
}

void loop() {
  int x=analogRead(5);
  s+=x;
  if(x==0){
  digitalWrite(7,HIGH); 
  s=0;
}
  if(s>0){
  digitalWrite(7,LOW);}
  Serial.println(x);
  
}

