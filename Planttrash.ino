#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64
#define OLED_RESET    -1

Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);

const int irSensorPin = 14;  // IR Sensor digital output to GPIO14
const int relayPin = 5;     // Relay control pin
int count = 0;

unsigned long lastDetectionTime = 0;
bool detectionStarted = false;

void setup() {
  Serial.begin(9600);
  pinMode(irSensorPin, INPUT);
  pinMode(relayPin, OUTPUT);
  digitalWrite(relayPin, LOW);

  // OLED initialization
  if (!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) {
    Serial.println(F("SSD1306 allocation failed"));
    for (;;);
  }

  display.clearDisplay();
  display.setTextSize(2);
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(0, 10);
  display.println("Mood: Happy");
  display.display();
}

void showMood(String mood) {
  display.clearDisplay();
  display.setTextSize(2);
  display.setCursor(0, 10);
  display.print("Mood: ");
  display.println(mood);
  display.display();
}

void loop() {
  bool handDetected = digitalRead(irSensorPin) == LOW;

  if (handDetected) {
    count++;
    lastDetectionTime = millis();
    detectionStarted = true;
    delay(500); // Debounce delay
  }

  if (detectionStarted && (millis() - lastDetectionTime > 60000)) {
    count = 0;
    detectionStarted = false;
    showMood("Happy");
  }

  if (count == 3) {
    showMood("Irritated");
    Serial.println("play");
  }
  else if (count == 6) {
    showMood("Angry");
  }
  else if (count == 9) {
    Serial.println("ninn");
  }
  else if (count == 10) {
    digitalWrite(relayPin, HIGH); // Activate pump
    delay(3000);                  // Run pump for 3 seconds
    digitalWrite(relayPin, LOW);  // Turn off pump
    count = 0;                    // Reset count
    showMood("Happy");
  }
}