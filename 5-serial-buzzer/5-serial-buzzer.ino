int buzzerPin = 13;
long delayTime = 10000; // unit is microsecond, 10000 is 100hz

void setup()
{
  Serial.begin(9600);
  Serial.setTimeout(50);
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
    Serial.println(delayTime);
  }
  digitalWrite(buzzerPin, HIGH);
  delay(delayTime / 2);
  digitalWrite(buzzerPin, LOW);
  delay(delayTime / 2);
}
