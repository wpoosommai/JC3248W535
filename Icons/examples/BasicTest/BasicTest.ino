/*
  ============================================================================
  Example   : BasicTest
  Library   : Icons
  Version   : V1.0.0
  Updated   : 2026-03-27 15:00 (Asia/Bangkok)
  Purpose   :
    - Verify that the Icons library is installed correctly in Arduino IDE
    - Demonstrate how to include the library and access icon arrays

  Input     :
    - No external input required

  Output    :
    - Serial monitor displays library load status
    - Prints first RGB565 value of selected icons for validation

  Notes     :
    - This example is designed for immediate compilation in Arduino IDE
    - Suitable for testing before integrating into TFT display projects
  ============================================================================
*/

#include <icons_rgb565_V1.h>
#include <pgmspace.h>

void setup() {
  Serial.begin(115200);
  delay(500);

  Serial.println();
  Serial.println("Icons library: BasicTest start");
  Serial.print("ICON_STD_W = "); Serial.println(ICON_STD_W);
  Serial.print("ICON_STD_H = "); Serial.println(ICON_STD_H);

  // Read the first pixel from selected icons in PROGMEM for quick validation.
  uint16_t fanOnFirst  = pgm_read_word(&icon_fan_on[0]);
  uint16_t pumpOnFirst = pgm_read_word(&icon_pump_on[0]);
  uint16_t galleryFirst = pgm_read_word(&icon_gallery[0]);

  Serial.print("icon_fan_on[0]   = 0x"); Serial.println(fanOnFirst, HEX);
  Serial.print("icon_pump_on[0]  = 0x"); Serial.println(pumpOnFirst, HEX);
  Serial.print("icon_gallery[0]  = 0x"); Serial.println(galleryFirst, HEX);
  Serial.println("Icons library loaded successfully.");
}

void loop() {
  // No repeated processing is required in this basic verification example.
}
