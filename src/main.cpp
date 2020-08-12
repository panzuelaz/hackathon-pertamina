#include "Conf.h"


int timer = 0;
String cmd = "";

unsigned long previousMillis = 0;


void setup() {
  INIT_DEBUG;
  DBGLN("Serial begin...");
  delay(1000);
  
  pin_init();

  DBGLN("PINS DEFINED!");
  delay(1000);
}


void loop() {
  set_pins_high();
  
  if(Serial.available()) {
    cmd = Serial.readStringUntil('\n');

    // Check if there's another input from serial.
    if((cmd != "1") || (cmd != "2") || (cmd != "3") || (cmd != "4") ||
       (cmd != "5") || (cmd != "6") || (cmd != "7") || (cmd != "8")) {
      Serial.println("You sent the wrong command!");
    }
    
    if((cmd == "1")) {
      digitalWrite(RELEASE_1, LOW);
      DBGLN("PRODUCT 1 RELEASED!");
      unsigned long currentMillis = millis();
      if (currentMillis - previousMillis >= 5000) {
        previousMillis = currentMillis;
        if (timer == 0) {
          timer = 1;
          DBGLN("Timeout reached!");
        }
        else {
          timer = 0;
        }
      }
    }

    if((cmd == "2")) {
      digitalWrite(RELEASE_2, LOW);
      DBGLN("PRODUCT 2 RELEASED!");
      unsigned long currentMillis = millis();
      if (currentMillis - previousMillis >= 5000) {
        previousMillis = currentMillis;
        if (timer == 0) {
          timer = 1;
          DBGLN("Timeout reached!");
        }
        else {
          timer = 0;
        }
      }
    }

    if((cmd == "3")) {
      digitalWrite(RELEASE_3, LOW);
      DBGLN("PRODUCT 3 RELEASED!");
      unsigned long currentMillis = millis();
      if (currentMillis - previousMillis >= 5000) {
        previousMillis = currentMillis;
        if (timer == 0) {
          timer = 1;
          DBGLN("Timeout reached!");
        }
        else {
          timer = 0;
        }
      }
    }

    if((cmd == "4")) {
      digitalWrite(RELEASE_4, LOW);
      DBGLN("PRODUCT 4 RELEASED!");
      unsigned long currentMillis = millis();
      if (currentMillis - previousMillis >= 5000) {
        previousMillis = currentMillis;
        if (timer == 0) {
          timer = 1;
          DBGLN("Timeout reached!");
        }
        else {
          timer = 0;
        }
      }
    }

    if((cmd == "5")) {
      digitalWrite(RELEASE_5, LOW);
      DBGLN("PRODUCT 5 RELEASED!");
      unsigned long currentMillis = millis();
      if (currentMillis - previousMillis >= 5000) {
        previousMillis = currentMillis;
        if (timer == 0) {
          timer = 1;
          DBGLN("Timeout reached!");
        }
        else {
          timer = 0;
        }
      }
    }

    if((cmd == "6")) {
      digitalWrite(RELEASE_6, LOW);
      DBGLN("PRODUCT 6 RELEASED!");
      unsigned long currentMillis = millis();
      if (currentMillis - previousMillis >= 5000) {
        previousMillis = currentMillis;
        if (timer == 0) {
          timer = 1;
          DBGLN("Timeout reached!");
        }
        else {
          timer = 0;
        }
      }
    }

    if((cmd == "7")) {
      digitalWrite(RELEASE_7, LOW);
      DBGLN("PRODUCT 7 RELEASED!");
      unsigned long currentMillis = millis();
      if (currentMillis - previousMillis >= 5000) {
        previousMillis = currentMillis;
        if (timer == 0) {
          timer = 1;
          DBGLN("Timeout reached!");
        }
        else {
          timer = 0;
        }
      }
    }

    if((cmd == "8")) {
      digitalWrite(RELEASE_8, LOW);
      DBGLN("PRODUCT 8 RELEASED!");
      unsigned long currentMillis = millis();
      if (currentMillis - previousMillis >= 5000) {
        previousMillis = currentMillis;
        if (timer == 0) {
          timer = 1;
          DBGLN("Timeout reached!");
        }
        else {
          timer = 0;
        }
      }
    }
  }
}