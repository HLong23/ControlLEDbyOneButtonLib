#include <Arduino.h>
#include "LED.h"
#include <OneButton.h>

LED led(LED_PIN, LED_ACT);

void btnClick();
void btnDoubleClick();
OneButton button(BTN_PIN, !BTN_ACT);

void setup()
{
    led.on();
    button.attachClick(btnClick);
    button.attachDoubleClick(btnDoubleClick);
}

void loop()
{
    led.loop();
    button.tick();
}

void btnClick()
{
    led.flip();
}

void btnDoubleClick()
{
    led.blink(200);
}