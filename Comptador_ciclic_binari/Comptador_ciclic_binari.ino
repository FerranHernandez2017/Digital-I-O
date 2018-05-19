const int ledA = 7;
const int ledB = 6;
const int ledC = 5;
const int buttonPin = 4;

void setup() 
{
pinMode(ledA, OUTPUT);
pinMode(ledB, OUTPUT);
pinMode(ledC, OUTPUT);
pinMode(buttonPin, INPUT);
}

void loop() 
{
int buttonPin=1;
 for(int N=0; N<=7; N=N+buttonPin)
 {
  switch(N)
  {
    case 1:
    digitalWrite(ledA,0);
    digitalWrite(ledB,0);
    digitalWrite(ledC,1);

    case 2:
    digitalWrite(ledA,0);
    digitalWrite(ledB,1);
    digitalWrite(ledC,0);

    case 3:
    digitalWrite(ledA,0);
    digitalWrite(ledB,1);
    digitalWrite(ledC,1);

    case 4:
    digitalWrite(ledA,1);
    digitalWrite(ledB,0);
    digitalWrite(ledC,0);

    case 5:
    digitalWrite(ledA,1);
    digitalWrite(ledB,0);
    digitalWrite(ledC,1);
    
    case 6:
    digitalWrite(ledA,1);
    digitalWrite(ledB,1);
    digitalWrite(ledC,0);

    case 7:
    digitalWrite(ledA,1);
    digitalWrite(ledB,1);
    digitalWrite(ledC,1);
    
    default:
    digitalWrite(ledA,0);
    digitalWrite(ledB,0);
    digitalWrite(ledC,0);
  }
 }
}
