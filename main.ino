#include "aikr_logic.h"

int previousAQI = 150;

void setup() {
  Serial.begin(9600);
}

void loop() {

  // Simulated AQI (replace with real sensor value)
  int currentAQI = random(50, 300);

  // AIKR evaluation
  AQIResult result = evaluateAQI(currentAQI);

  // ML-like prediction
  int predictedAQI = currentAQI + (currentAQI - previousAQI);

  previousAQI = currentAQI;

  // Output
  Serial.println("------ AIKR OUTPUT ------");
  Serial.print("AQI: ");
  Serial.println(result.aqi);

  Serial.print("Status: ");
  Serial.println(result.status);

  Serial.print("Cause: ");
  Serial.println(result.cause);

  Serial.print("Suggestion: ");
  Serial.println(result.suggestion);

  Serial.print("Predicted AQI (1 hr): ");
  Serial.println(predictedAQI);

  Serial.println("--------------------------\n");

  delay(3000);
}
