int led=8;
int trig=6;
int echo=11;

void setup()z
{
  pinMode(led,OUTPUT);
  pinMode(trig,OUTPUT);
  pinMode(echo,INPUT);

  Serial.begin(9600);
}
void loop()
{
  long duration,distance;

  
  digitalWrite(trig,HIGH);
  delayMicroseconds(1000);
 
  digitalWrite(trig,LOW);
  duration=pulseIn(echo,HIGH);
  distance=(duration/2)/29;

  if(distance<=100)
  {
    digitalWrite(led,HIGH);
  }
  else
  {
    digitalWrite(led,LOW);
  }

  delay(100);
}
