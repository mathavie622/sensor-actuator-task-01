```cpp
const int trigPin = 3;
const int echoPin = 2;
const int ledPin = 8;

void setup()
{
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(ledPin, OUTPUT);

  Serial.begin(9600);
}

void loop()
{
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  long duration = pulseIn(echoPin, HIGH, 30000);
  float distance = duration * 0.0343 / 2;

  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  if (duration > 0 && distance <= 20)
  {
    digitalWrite(ledPin, HIGH);
    Serial.println("Object Nearby - LED ON");
  }
  else
  {
    digitalWrite(ledPin, LOW);
    Serial.println("Object Far - LED OFF");
  }

  delay(200);
}
```
