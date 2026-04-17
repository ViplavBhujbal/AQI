# AIKR-Based Air Quality Monitoring System

## Overview
This project implements Artificial Intelligence and Knowledge Representation (AIKR) for classifying Air Quality Index (AQI) and generating intelligent suggestions.

## Features
- Rule-based AQI classification
- Suggestion generation (expert system)
- Cause identification
- AQI prediction (trend-based)

## AIKR Logic
The system uses IF-THEN rules:

- AQI ≤ 50 → GOOD
- AQI ≤ 100 → SATISFACTORY
- AQI ≤ 200 → MODERATE
- AQI ≤ 300 → POOR
- AQI > 300 → VERY POOR

## Output
- AQI value
- Status
- Cause
- Suggestion
- Predicted AQI

## Hardware Used
- ESP32
- Arduino Uno
- MQ135 Sensor
- DHT11 Sensor
- TFT Display

## Future Scope
- IoT integration
- Cloud monitoring
- Advanced ML models
