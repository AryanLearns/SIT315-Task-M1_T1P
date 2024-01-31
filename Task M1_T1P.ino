const int pirSensorPin = 2;  // PIR sensor to digital pin 2
const int ledPin = 5;      // LED connected to digital pin 5

void setup() {
  pinMode(pirSensorPin, INPUT);
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int motionDetected = digitalRead(pirSensorPin);

  if (motionDetected == HIGH) {
    digitalWrite(ledPin, HIGH);  // Turn on the LED
    Serial.println("Motion detected!");
    delay(1000);  
  } else {
    Serial.println("No motion detected!");
    digitalWrite(ledPin, LOW);  // Turn off the LED
  }
  
  delay(1000);
}
