/*
=========================================================
Project : Bluetooth LCD Display using ESP32
Author  : Ansh Rastogi
Board   : ESP32
Bluetooth : Classic Bluetooth
Display : 16x2 LCD (I2C)

Description:
This project receives text wirelessly from a smartphone
using Bluetooth and displays it on a 16x2 I2C LCD.

=========================================================
*/

#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include "BluetoothSerial.h"

BluetoothSerial SerialBT;

// LCD Address: 0x27
LiquidCrystal_I2C lcd(0x27, 16, 2);

String message = "";

void setup() {

  Serial.begin(115200);

  SerialBT.begin("ESP32_LCD");

  lcd.init();
  lcd.backlight();

  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Bluetooth LCD");
  lcd.setCursor(0,1);
  lcd.print("Waiting...");
}

void loop() {

  while (SerialBT.available()) {

    char c = SerialBT.read();

    if (c == '\n') {

      lcd.clear();
      lcd.setCursor(0,0);
      lcd.print(message);

      Serial.println(message);

      message = "";
    }

    else {

      message += c;
    }
  }
}
