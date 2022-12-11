//Using a MAX30100.h|Arduino UNO
//This is unlikely to be of much use in a practical applications
//ID OF USER: Rakeshtsg
//INTERFACE: Arduino 

#include "MAX30100.h"

MAX30100 pulseOximeter;

void setup() {
  Serial.begin(9600);

  pulseOximeter.begin();
}

void loop() {
  if (pulseOximeter.available()) {
    PulseOximeterReading reading = pulseOximeter.read();

    Serial.print("Heart rate: ");
    Serial.println(reading.heartRate);
  }
}
