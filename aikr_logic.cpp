#include "aikr_logic.h"

AQIResult evaluateAQI(int aqi) {

  AQIResult result;
  result.aqi = aqi;

  if (aqi <= 50) {
    result.status = "GOOD";
    result.suggestion = "Air is clean. Enjoy outdoor activities.";
    result.cause = "Low pollution levels";
  }

  else if (aqi <= 100) {
    result.status = "SATISFACTORY";
    result.suggestion = "Acceptable air quality. Sensitive people be cautious.";
    result.cause = "Minor pollutants";
  }

  else if (aqi <= 200) {
    result.status = "MODERATE";
    result.suggestion = "Limit prolonged outdoor exposure.";
    result.cause = "Vehicle emissions, dust";
  }

  else if (aqi <= 300) {
    result.status = "POOR";
    result.suggestion = "Wear mask and avoid outdoor activity.";
    result.cause = "High traffic, industrial pollution";
  }

  else {
    result.status = "VERY POOR";
    result.suggestion = "Stay indoors. Use air purifier.";
    result.cause = "Severe pollution levels";
  }

  return result;
}
