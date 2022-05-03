int buzzerPin = 13;
int delayTime = 10000; // unit is microsecond, 10000 is 100hz

void setup()
{
  Serial.begin(9600);
  Serial.setTimeout(0);
  pinMode(buzzerPin, OUTPUT);
}

void loop()
{
  if (Serial.available() > 0)
  {
    delayTime = Serial.parseInt();
    if (delayTime == 0)
    {
      delayTime = 10000;
    }
  }
  digitalWrite(buzzerPin, HIGH);
  delayMicrosecond(delayTime / 2);
  digitalWrite(buzzerPin, LOW);
  delayMicrosecond(delayTime / 2);
}
