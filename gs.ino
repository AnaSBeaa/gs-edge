#include <Wire.h>
#include <LiquidCrystal_I2C.h>

// Change 0x27 to 0x3F if your LCD doesn't work
LiquidCrystal_I2C lcd(0x27, 16, 2);

const int ldrPin = A0;
const int ledPin = 4;

const int threshold = 500; // Adjust based on your LDR readings

void setup() {
  pinMode(ledPin, OUTPUT);

  lcd.init();
  lcd.backlight();

  lcd.setCursor(0, 0);
  lcd.print("LDR Monitor");
  delay(2000);
  lcd.clear();
}

void loop() {
  int ldrValue = analogRead(ldrPin);

  lcd.setCursor(0, 0);
  lcd.print("LDR: ");
  lcd.print(ldrValue);
  lcd.print("    "); // Clear leftover digits

  if (ldrValue < threshold) {
    digitalWrite(ledPin, HIGH);

    lcd.setCursor(0, 1);
    lcd.print("Light Detected ");
  } else {
    digitalWrite(ledPin, LOW);

    lcd.setCursor(0, 1);
    lcd.print("No Light       ");
  }

  delay(200);
}