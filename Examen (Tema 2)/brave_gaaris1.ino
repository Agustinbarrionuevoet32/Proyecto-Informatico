#include <Adafruit_NeoPixel.h>
#define pin 6
#define cantidad 6


Adafruit_NeoPixel leds(cantidad, pin, NEO_GRB + NEO_KHZ800);
void setup()
{
   leds.begin();
}

void loop()
{
  leds.clear();
  leds.setPixelColor(0, 0, 255, 0);
  leds.show();
  delay(500);

  leds.clear();
  leds.setPixelColor(1, 0, 255, 0);
  leds.show();
  delay(500);

  leds.clear();
  leds.setPixelColor(2, 255, 255, 0);
  leds.show();
  delay(500);

  leds.clear();
  leds.setPixelColor(3, 255, 0, 0);
  leds.show();
  delay(500);

  leds.clear();
  leds.setPixelColor(4, 255, 0, 0);
  leds.show();
  delay(500);

  leds.clear();
  leds.setPixelColor(5, 255, 0, 0);
  leds.show();
  delay(500);

}

//