#ifndef Conf_h
#define Conf_h

#include <Arduino.h>


#define RELEASE_1     2
#define RELEASE_2     3
#define RELEASE_3     4
#define RELEASE_4     5
#define RELEASE_5     6
#define RELEASE_6     7
#define RELEASE_7     8
#define RELEASE_8     9

#define BAUDRATE_DEBUG          9600
#define INIT_DEBUG              Serial.begin(BAUDRATE_DEBUG);
#define DBG(str)                Serial.print(str);
#define DBGLN(str)              Serial.println(str);

void pin_init();

void set_pins_high();


#endif