#include <Adafruit_NeoPixel.h>
#include "EmotionalBlink.h"

void EmotionalBlink::setColor(Adafruit_NeoPixel *neopixel, int numLed, int r, int g, int b)
{
  for (int i = 0; i < numLed; i++)
  {
    neopixel->setPixelColor(i, neopixel->Color(r, g, b));
  }
  neopixel->show();
  delay(10);
}

void EmotionalBlink::setRandomColor(Adafruit_NeoPixel *neopixel, int numLed)
{
  for (int i = 0; i < numLed; i++)
  {
    neopixel->setPixelColor(i, neopixel->Color(64 * random(1, 5) - 1, 64 * random(1, 5) - 1, 64 * random(1, 5) - 1));
  }
  neopixel->show();
  delay(10);
}

void EmotionalBlink::dismiss(Adafruit_NeoPixel *neopixel, int numLed)
{
  setColor(neopixel, numLed, 0, 0, 0);
}

void EmotionalBlink::softly(Adafruit_NeoPixel *neopixel, int numLed, int r, int g, int b)
{
  softly(neopixel, numLed, r, g, b, 1000);
}

void EmotionalBlink::softly(Adafruit_NeoPixel *neopixel, int numLed, int r, int g, int b, int intervalMsec)
{
  int stepWidth = intervalMsec / 20;

  for (int i = 0; i < stepWidth; i++)
  {
    setColor(neopixel, numLed, (r * i / stepWidth), (g * i / stepWidth), (b * i / stepWidth));
  }

  for (int i = stepWidth; i > 0; i--)
  {
    setColor(neopixel, numLed, (r * i / stepWidth), (g * i / stepWidth), (b * i / stepWidth));
  }
}

void EmotionalBlink::likePartyPeople(Adafruit_NeoPixel *neopixel, int numLed, int durationMsec)
{
  int trial = durationMsec / 100;

  for (int i = 0; i < trial; i++)
  {
    setRandomColor(neopixel, numLed);
    delay(90);
  }
}

void EmotionalBlink::likeHolidaySeason(Adafruit_NeoPixel *neopixel, int numLed, int durationMsec)
{
  int trial = durationMsec / 1000;

  for (int i = 0; i < trial; i++)
  {
    setRandomColor(neopixel, numLed);
    delay(990);
  }
}

void EmotionalBlink::likePolice(Adafruit_NeoPixel *neopixel, int numLed, int durationMsec)
{
  int trial = durationMsec / 1000;

  for (int i = 0; i < trial; i++)
  {
    setColor(neopixel, numLed, 0, 0, 255);
    delay(50);
    dismiss(neopixel, numLed);
    delay(50);
    setColor(neopixel, numLed, 0, 0, 255);
    delay(50);
    dismiss(neopixel, numLed);
    delay(100);

    setColor(neopixel, numLed, 0, 255, 0);
    delay(50);
    dismiss(neopixel, numLed);
    delay(50);
    setColor(neopixel, numLed, 0, 255, 0);
    delay(50);
    dismiss(neopixel, numLed);
    delay(100);

    setColor(neopixel, numLed, 0, 0, 255);
    delay(50);
    dismiss(neopixel, numLed);
    delay(50);
    setColor(neopixel, numLed, 0, 0, 255);
    delay(50);
    dismiss(neopixel, numLed);
    delay(100);

    setColor(neopixel, numLed, 0, 255, 0);
    delay(50);
    dismiss(neopixel, numLed);
    delay(50);
    setColor(neopixel, numLed, 0, 255, 0);
    delay(50);
    dismiss(neopixel, numLed);
    delay(100);
  }
}

void EmotionalBlink::likeFlash(Adafruit_NeoPixel *neopixel, int numLed, int durationMsec)
{
  int trial = durationMsec / 1000;

  for (int i = 0; i < trial; i++)
  {
    int r = 64 * random(1, 5) - 1;
    int b = 64 * random(1, 5) - 1;
    int g = 64 * random(1, 5) - 1;

    setColor(neopixel, numLed, r, b, g);
    delay(50);
    dismiss(neopixel, numLed);
    delay(50);
    setColor(neopixel, numLed, r, b, g);
    delay(50);
    dismiss(neopixel, numLed);
    delay(350);

    setColor(neopixel, numLed, r, b, g);
    delay(50);
    dismiss(neopixel, numLed);
    delay(50);
    setColor(neopixel, numLed, r, b, g);
    delay(50);
    dismiss(neopixel, numLed);
    delay(350);
  }
}

void EmotionalBlink::likeFlash(Adafruit_NeoPixel *neopixel, int numLed, int durationMsec, int r, int b, int g)
{
  int trial = durationMsec / 1000;

  for (int i = 0; i < trial; i++)
  {
    setColor(neopixel, numLed, r, b, g);
    delay(50);
    dismiss(neopixel, numLed);
    delay(50);
    setColor(neopixel, numLed, r, b, g);
    delay(50);
    dismiss(neopixel, numLed);
    delay(350);

    setColor(neopixel, numLed, r, b, g);
    delay(50);
    dismiss(neopixel, numLed);
    delay(50);
    setColor(neopixel, numLed, r, b, g);
    delay(50);
    dismiss(neopixel, numLed);
    delay(350);
  }
}

EmotionalBlink Blink;
