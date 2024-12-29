#ifndef EspDelay_H
#define EspDelay_H

#include <avr/wdt.h>

#define WDTDelay(delay) { unsigned long m = millis(); while(millis() - m <= delay) { wdt_reset(); } }

#endif