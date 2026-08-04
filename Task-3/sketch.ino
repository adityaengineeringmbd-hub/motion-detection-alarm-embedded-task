int pirPin = 2;
int buzzerPin = 8;
int ledPin = 13;
int motionState = 0;

void setup() {
  pinMode(pirPin, INPUT);
  pinMode(buzzerPin, OUTPUT);
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
  Serial.println("Smart Motion Security System Initialized...");
}

void loop() {
  motionState = digitalRead(pirPin);

  if (motionState == HIGH) {
    digitalWrite(buzzerPin, HIGH);
    digitalWrite(ledPin, HIGH);
    Serial.println("Motion Detected! Alert ON");
  } else {
    digitalWrite(buzzerPin, LOW);
    digitalWrite(ledPin, LOW);
    Serial.println("No Motion. System Idle.");
  }

  delay(500);
}
