int MOTOR2_PIN1 = 3;
int MOTOR2_PIN2 = 5;
int MOTOR1_PIN1 = 6;
int MOTOR1_PIN2 = 9;
unsigned int fata, stanga;
int ok=1;

void setup() {
  pinMode(MOTOR1_PIN1, OUTPUT);
  pinMode(MOTOR1_PIN2, OUTPUT);
  pinMode(MOTOR2_PIN1, OUTPUT);
  pinMode(MOTOR2_PIN2, OUTPUT);
  Serial.begin(9600);
}

void loop() {
    fata=2706/(analogRead(0)-11);
    stanga=2706/(analogRead(5)-11);
    while(fata>40)
          {go(150,150);
           fata=2706/(analogRead(0)-11);
           stanga=2706/(analogRead(5)-11);
          } 
    ok=0;
    if(ok==0)
       {if(stanga<25)
           {while(fata<25)
                {go(255,-255);
                 fata=2706/(analogRead(0)-11);
                 stanga=2706/(analogRead(5)-11);
                } 
            ok=1; 
           }
        else{while(fata<25)
                {go(-255,255);
                 fata=2706/(analogRead(0)-11);
                 stanga=2706/(analogRead(5)-11);
                }
            ok=1;
            } 
       }    
}

void go(int speedLeft, int speedRight) {
  if (speedLeft > 0) {
    analogWrite(MOTOR1_PIN1, speedLeft);
    analogWrite(MOTOR1_PIN2, 0);
  } 
  else {
    analogWrite(MOTOR1_PIN1, 0);
    analogWrite(MOTOR1_PIN2, -speedLeft);
  }
 
  if (speedRight > 0) {
    analogWrite(MOTOR2_PIN1, speedRight);
    analogWrite(MOTOR2_PIN2, 0);
  }else {
    analogWrite(MOTOR2_PIN1, 0);
    analogWrite(MOTOR2_PIN2, -speedRight);
  }
}

