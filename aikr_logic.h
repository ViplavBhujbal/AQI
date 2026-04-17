#ifndef AIKR_LOGIC_H
#define AIKR_LOGIC_H

#include <Arduino.h>

struct AQIResult {
  int aqi;
  String status;
  String suggestion;
  String cause;
};

AQIResult evaluateAQI(int aqi);

#endif
