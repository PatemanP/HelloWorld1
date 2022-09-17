// I Philip Pateman, 000778803 certify that this material is my original work. No other person's work has been used without due acknowledgement. I have not made my work available to anyone else.
#include <Arduino.h>
long totalTime;
void setup() {
  // put your setup code here, to run once:

  Serial.begin(115200);

  Serial.println("\n\nHello, World");
  Serial.println("Philip Pateman, 000778803");
  Serial.println(ESP.getChipId());
  Serial.println(ESP.getFlashChipId());
}

void loop() {
  // put your main code here, to run repeatedly:
  totalTime = millis();
  Serial.println(totalTime);
  delay(2000);
}