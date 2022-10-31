#include <Arduino.h>

#include <../lib/led/QwiicLedStick.h>

static LED *_leds;

void setup()
{
  // put your setup code here, to run once:
  Serial.begin(115200);
  Wire.begin();

  Serial.println("Initializing");
  _leds = new LED();
  _leds->begin();
  Serial.println("Starting");
}

void loop()
{
  // put your main code here, to run repeatedly:
  _leds->setLEDBrightness(1);
  // Serial.println("Red");
  // _leds->setLEDColor(255, 0, 0);
  // delay(500);
  // Serial.println("Green");
  // _leds->setLEDColor(0, 255, 0);
  // delay(500);
  // Serial.println("Blue");
  // _leds->setLEDColor(0, 0, 255);
  // delay(500);

  for (int i = 0; i <= 9; i++)
  {

    _leds->setLEDColor((byte)i, 255, 0, 0);
    delay(100);
    _leds->LEDOff();
  }

  for (int i = 8; i >= 0; i--)
  {
    _leds->setLEDColor((byte)i, 255, 0, 0);
    delay(100);
    _leds->LEDOff();
  }

  // for (int i = 0; i < 9; i++)
  // {

  //   for (int j = 9; j >= 0; j--)
  //   {
  //     if (i == 4)
  //     {
  //       _leds->setLEDColor(0, 0, 255);
  //       i++;
  //       i++;
  //       j--;
  //       delay(500);
  //       _leds->LEDOff();
  //     }
  //     else
  //     {
  //       _leds->setLEDColor((byte)i, 0, 255, 0);
  //       i++;
  //       _leds->setLEDColor((byte)j, 0, 255, 0);
  //       delay(500);
  //       _leds->LEDOff();
  //     }
  //   }
  // }
}