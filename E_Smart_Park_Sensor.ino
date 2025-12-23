//Ultrasonic + LED/Buzzer. Alert when an object is close

int trigPin = 5, echoPin = 6, buzzer = 2, distance;
long duration; 

void setup()
{
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(buzzer, OUTPUT);
}

void loop()
{
  digitalWrite(trigPin, LOW);
  delayMicroseconds(5);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);
  distance = (0.034 * duration)/2; 

  if(distance <= 5)
    digitalWrite(buzzer, HIGH);
  else
    digitalWrite(buzzer, LOW);
  
  delay(50);
}
