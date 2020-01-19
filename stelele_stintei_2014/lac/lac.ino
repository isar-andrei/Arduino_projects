void setup(){ 
  pinMode(6, OUTPUT);
  Serial.begin(9600);
}

void loop(){
analogWrite(6, 180);
} 

