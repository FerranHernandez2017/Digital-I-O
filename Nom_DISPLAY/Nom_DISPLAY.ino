const int ledA = 7;
const int ledB = 8;
const int ledC = 9;
const int ledD = 10;
const int ledE = 11;
const int ledF = 12;
const int ledG = 13;
unsigned long retard=500;

void setup() 
{
pinMode(ledA, OUTPUT);
pinMode(ledB, OUTPUT);
pinMode(ledC, OUTPUT);
pinMode(ledD, OUTPUT);
pinMode(ledE, OUTPUT);
pinMode(ledF, OUTPUT);
pinMode(ledG, OUTPUT);
}

void loop() 
{
digitalWrite(ledA,1);
digitalWrite(ledB,0);
digitalWrite(ledC,0);
digitalWrite(ledD,0);
digitalWrite(ledE,1);
digitalWrite(ledF,1);
digitalWrite(ledG,1);
delay(retard);

digitalWrite(ledA,1);
digitalWrite(ledB,0);
digitalWrite(ledC,0);
digitalWrite(ledD,1);
digitalWrite(ledE,1);
digitalWrite(ledF,1);
digitalWrite(ledG,1);
delay(retard);

digitalWrite(ledA,0);
digitalWrite(ledB,0);
digitalWrite(ledC,0);
digitalWrite(ledD,0);
digitalWrite(ledE,1);
digitalWrite(ledF,0);
digitalWrite(ledG,1);
delay(retard);

digitalWrite(ledA,0);
digitalWrite(ledB,0);
digitalWrite(ledC,0);
digitalWrite(ledD,0);
digitalWrite(ledE,0);
digitalWrite(ledF,0);
digitalWrite(ledG,0);
delay(100);

digitalWrite(ledA,0);
digitalWrite(ledB,0);
digitalWrite(ledC,0);
digitalWrite(ledD,0);
digitalWrite(ledE,1);
digitalWrite(ledF,0);
digitalWrite(ledG,1);
delay(retard);

digitalWrite(ledA,1);
digitalWrite(ledB,1);
digitalWrite(ledC,1);
digitalWrite(ledD,0);
digitalWrite(ledE,1);
digitalWrite(ledF,1);
digitalWrite(ledG,1);
delay(retard);

digitalWrite(ledA,0);
digitalWrite(ledB,0);
digitalWrite(ledC,1);
digitalWrite(ledD,0);
digitalWrite(ledE,1);
digitalWrite(ledF,0);
digitalWrite(ledG,1);
delay(retard);
}
