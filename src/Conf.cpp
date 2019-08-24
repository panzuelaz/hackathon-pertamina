#include "Conf.h"


void pin_init() {
    pinMode(RELEASE_1, OUTPUT);
    pinMode(RELEASE_2, OUTPUT);
    pinMode(RELEASE_3, OUTPUT);
    pinMode(RELEASE_4, OUTPUT);
    pinMode(RELEASE_5, OUTPUT);
    pinMode(RELEASE_6, OUTPUT);
    pinMode(RELEASE_7, OUTPUT);
    pinMode(RELEASE_8, OUTPUT);
}


void set_pins_high() {
    digitalWrite(RELEASE_1, HIGH);
    digitalWrite(RELEASE_2, HIGH);
    digitalWrite(RELEASE_3, HIGH);
    digitalWrite(RELEASE_4, HIGH);
    digitalWrite(RELEASE_5, HIGH);
    digitalWrite(RELEASE_6, HIGH);
    digitalWrite(RELEASE_7, HIGH);
    digitalWrite(RELEASE_8, HIGH);
}