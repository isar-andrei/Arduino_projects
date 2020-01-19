void setup(){ 
  pinMode(5, OUTPUT);
  Serial.begin(9600);
} 
 
 
void loop(){ 
analogWrite(5, 30);
} 

