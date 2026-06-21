const int pirPin = 2;
const int ledPin = 9;
const int buzzer = 10;
const int ldrPin = A0;

void setup() {
  pinMode(pirPin, INPUT);
  pinMode(ledPin, OUTPUT);
  pinMode(buzzer, OUTPUT);
  Serial.begin(9600);
}

void loop() {

  int motion = digitalRead(pirPin);
  int light = analogRead(ldrPin);

  bool isDark = (light < 925);

  Serial.print("Motion: ");
  Serial.print(motion);
  Serial.print(" | Light: ");
  Serial.println(light);

  // SMART LIGHT 
  if (isDark) {
    digitalWrite(ledPin, HIGH);
  } else {
    digitalWrite(ledPin, LOW);
  }

  //  SECURITY ALARM
  if (motion == HIGH) {
    for (int i = 0; i < 3; i++) {
      digitalWrite(buzzer, HIGH);
      delay(100);
      digitalWrite(buzzer, LOW);
      delay(100);
    }
  } else {
    digitalWrite(buzzer, LOW);
  }
}