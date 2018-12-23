#ifndef EMOTIONAL_BLINK_H
#define EMOTIONAL_BLINK_H

#if (ARDUINO >= 100)
#include "Arduino.h"
#else
#include "WProgram.h"
#endif

class EmotionalBlink
{
public:
  void dismiss(Adafruit_NeoPixel *neopixel, int numLed);
  void softly(Adafruit_NeoPixel *neopixel, int numLed, int r, int g, int b);
  void softly(Adafruit_NeoPixel *neopixel, int numLed, int r, int g, int b, int intervalMsec);
  void likePartyPeople(Adafruit_NeoPixel *neopixel, int numLed, int durationMsec);
  void likeHolidaySeason(Adafruit_NeoPixel *neopixel, int numLed, int durationMsec);
  void likePolice(Adafruit_NeoPixel *neopixel, int numLed, int durationMsec);
  void likeFlash(Adafruit_NeoPixel *neopixel, int numLed, int durationMsec);
  void likeFlash(Adafruit_NeoPixel *neopixel, int numLed, int durationMsec, int r, int b, int g);

private:
  void setColor(Adafruit_NeoPixel *neopixel, int numLed, int r, int g, int b);
  void setRandomColor(Adafruit_NeoPixel *neopixel, int numLed);
};

extern EmotionalBlink Blink;

#endif
