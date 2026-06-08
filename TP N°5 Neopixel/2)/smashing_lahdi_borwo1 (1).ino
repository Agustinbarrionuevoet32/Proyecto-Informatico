#include <Adafruit_NeoPixel.h>

#define PIN 6
#define CANTIDAD 12

Adafruit_NeoPixel leds(CANTIDAD, PIN, NEO_GRB + NEO_KHZ800);

void setup()
{
  leds.begin();
  leds.show();
}

void loop()
{
  leds.clear();
  leds.setPixelColor(0, 255, 0, 0);
  leds.show();
  delay(500);

  leds.clear();
  leds.setPixelColor(1, 255, 0, 0);
  leds.show();
  delay(500);

  leds.clear();
  leds.setPixelColor(2, 255, 0, 0);
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

  leds.clear();
  leds.setPixelColor(6, 255, 0, 0);
  leds.show();
  delay(500);

  leds.clear();
  leds.setPixelColor(7, 255, 0, 0);
  leds.show();
  delay(500);

  leds.clear();
  leds.setPixelColor(8, 255, 0, 0);
  leds.show();
  delay(500);

  leds.clear();
  leds.setPixelColor(9, 255, 0, 0);
  leds.show();
  delay(500);

  leds.clear();
  leds.setPixelColor(10, 255, 0, 0);
  leds.show();
  delay(500);

  leds.clear();
  leds.setPixelColor(11, 255, 0, 0);
  leds.show();
  delay(500);

  leds.clear();
  leds.setPixelColor(11, 255, 0, 0);
  leds.show();
  delay(500);

  leds.clear();
  leds.setPixelColor(10, 255, 0, 0);
  leds.show();
  delay(500);

  leds.clear();
  leds.setPixelColor(9, 255, 0, 0);
  leds.show();
  delay(500);

  leds.clear();
  leds.setPixelColor(8, 255, 0, 0);
  leds.show();
  delay(500);

  leds.clear();
  leds.setPixelColor(7, 255, 0, 0);
  leds.show();
  delay(500);

  leds.clear();
  leds.setPixelColor(6, 255, 0, 0);
  leds.show();
  delay(500);

  leds.clear();
  leds.setPixelColor(5, 255, 0, 0);
  leds.show();
  delay(500);

  leds.clear();
  leds.setPixelColor(4, 255, 0, 0);
  leds.show();
  delay(500);

  leds.clear();
  leds.setPixelColor(3, 255, 0, 0);
  leds.show();
  delay(500);

  leds.clear();
  leds.setPixelColor(2, 255, 0, 0);
  leds.show();
  delay(500);

  leds.clear();
  leds.setPixelColor(1, 255, 0, 0);
  leds.show();
  delay(500);

  leds.clear();
  leds.setPixelColor(0, 255, 0, 0);
  leds.show();
  delay(500);
}