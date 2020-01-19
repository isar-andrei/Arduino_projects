#include <Servo.h>

Servo d1, d2, d3, d4, d5;
char ch, prop[250];
int k = 0, i;

void original();

void setup() {
  Serial.begin(9600);
  d1.attach(11);
  d2.attach(10);
  d3.attach(9);
  d4.attach(5);
  d5.attach(3);
  original();
}

void original()
{
  d1.write(180);
  d2.write(180);
  d3.write(180);
  d4.write(180);
  d5.write(180);
  delay(1000);
}

void loop() {
  if (Serial.available())
  {
    ch = Serial.read();
    switch (ch) {
      case 'a':
        original();
        d2.write(40);
        d3.write(40);
        d4.write(40);
        d5.write(40);
        d1.write(180);
        Serial.println(ch);
        delay(3000);
        break;
      case 'b':
        original();
        d1.write(180);
        d2.write(180);
        d3.write(180);
        d4.write(180);
        d5.write(180);
        Serial.println(ch);
        delay(3000);
        break;
      case 'c':
        original();
        d1.write(100);
        d2.write(100);
        d3.write(100);
        d4.write(100);
        d5.write(100);
        Serial.println(ch);
        delay(3000);
        break;
      case 'd':
        original();
        d2.write(180);
        d3.write(40);
        d4.write(40);
        d5.write(40);
        d1.write(40);
        Serial.println(ch);
        delay(3000);
        break;
      case 'e':
        original();
        d2.write(40);
        d3.write(40);
        d4.write(40);
        d5.write(40);
        d1.write(40);
        Serial.println(ch);
        delay(3000);
        break;
      case 'i':
        original();
        d2.write(40);
        d3.write(40);
        d4.write(40);
        d5.write(180);
        d1.write(40);
        Serial.println(ch);
        delay(3000);
        break;
      case 'l':
        original();
        d2.write(180);
        d3.write(40);
        d4.write(40);
        d5.write(40);
        d1.write(180);
        Serial.println(ch);
        delay(3000);
        break;
      case 'o':
        original();
        d1.write(70);
        d2.write(70);
        d3.write(70);
        d4.write(70);
        d5.write(70);
        Serial.println(ch);
        delay(3000);
        break;
      case 48:
        original();
        d1.write(40);
        d2.write(40);
        d3.write(180);
        d4.write(40);
        d5.write(40);
        Serial.println(ch);
        delay(3000);
        break;
      case 49:
        original();
        d2.write(180);
        d3.write(40);
        d4.write(40);
        d5.write(180);
        d1.write(40);
        Serial.println(ch);
        delay(3000);
        break;
      case 50:
        original();
        d2.write(40);
        d3.write(40);
        d4.write(40);
        d5.write(40);
        d1.write(180);
        Serial.println(ch);
        delay(3000);
        break;
    }
  }

}
