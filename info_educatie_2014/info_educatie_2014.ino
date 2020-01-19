int ok = 0,okd = 0,okt = 0;
long ddreapta,dspate,dfata;
unsigned long inftimp,timp1 = 0,timp2 = 0;
float distanta = 0,timp = 0;

void setup() {
  pinMode(6, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(5, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  while(ok==0) {
    go(255,255);
    ddreapta=2706/(analogRead(0)-11);
    if(ddreapta<25&&ddreapta>1&&okd==0) {
      okd=1;
    }
    while(okd==1) {
      inftimp = millis(); 
      ddreapta=2706/(analogRead(0)-11);
      go(255,255);
      if(timp1==0 && timp2==0) {
        if(ddreapta>41 || ddreapta<0){
          timp1=inftimp;
        }
      }
      if(timp2==0 && timp1!=0)  
        {if(ddreapta<25 && ddreapta>1) {
           timp2=inftimp;
         }
      }
      if(timp1!=0 && timp2!=0) {
        timp=(float)(timp2-timp1)/(float)1000.00;
      }
      if(timp>0.00) {
      distanta=(float)46.3*timp;
      okd=0;
    }
  }
    if(distanta>28.00) {
      ok=1;go(0,0);
    }
    else {
      timp1=timp2=okd=timp=distanta=0;
    }   
}  
  while(ok==1){
   ddreapta=2706/(analogRead(0)-11);
   dspate=2706/(analogRead(1)-11);
   dfata=4800/(analogRead(2)-20);
   if(okt==0) {
     go(0,-255);
     timp2=inftimp;
   }
   if((float)(inftimp/1000.00)-(float)(timp2/1000.00)>timp/2.00) {
      okt=1;go(0,0);}
        
   
}
}
void go(int vitezaStanga, int vitezaDreapta) {
  if (vitezaStanga > 0) {
    analogWrite(6, vitezaStanga);
    analogWrite(9, 0);
  } 
  else {
    analogWrite(6, 0);
    analogWrite(9, -vitezaStanga);
  }
  if (vitezaDreapta > 0) {
    analogWrite(3, vitezaDreapta);
    analogWrite(5, 0);
  }else {
    analogWrite(3, 0);
    analogWrite(5, -vitezaDreapta);
  }
}

