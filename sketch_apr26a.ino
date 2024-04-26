#include <Wire.h>
#include <ESP32Servo.h>

#define echoPin 2
#define trigPin 4

#define echoPin2 33
#define trigPin2 32

Servo myServo;
int servoPin = 12;

long duration, distance, duration2, distance2;

void setup() {
  Serial.begin(9600);

  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);

  pinMode(trigPin2, OUTPUT);
  pinMode(echoPin2, INPUT);

  myServo.attach(servoPin);
  myServo.write(0);
}

void loop() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);
  distance = duration / 58.2;
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  digitalWrite(trigPin2, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin2, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin2, LOW);

  duration2 = pulseIn(echoPin2, HIGH);
  distance2 = duration2 / 58.2;
  Serial.print("Distance2: ");
  Serial.print(distance2);
  Serial.println(" cm");

  if (distance < 20) {
    myServo.write(180); // Rotate the servo to 180 degrees
    delay(1000);        // Wait for 1 second
  } else {
    myServo.write(90);  // Rotate the servo to 90 degrees
    delay(1000);        // Wait for 1 second
  }
}
