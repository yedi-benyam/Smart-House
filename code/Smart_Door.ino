#include <Servo.h>

Servo door;

const int trigPin = 2;
const int echoPin = 3;

String password = "1234";

void setup() {
  Serial.begin(9600);
  door.attach(9);

  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);

  door.write(0); // closed
}

void loop() {

  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  long duration = pulseIn(echoPin, HIGH);
  int distance = duration * 0.034 / 2;

  if(distance < 20) {

    Serial.println("Person Near");
    Serial.println("Enter Password:");

    while(!Serial.available());

    String input = Serial.readStringUntil('\n');
    input.trim();

    if(input == password) {

      Serial.println("Access Granted");
      door.write(90);

      delay(5000);

      door.write(0);
    }
    else {
      Serial.println("Wrong Password");
    }

    delay(1000);
  }
}