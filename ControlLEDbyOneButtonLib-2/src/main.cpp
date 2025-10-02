#include <Arduino.h>
#include "LED.h"
#include <OneButton.h>

LED led[2]= {LED(LED_PIN_1, LED_ACT),LED(LED_PIN_2, LED_ACT)};
OneButton button(BTN_PIN, !BTN_ACT);

int numberled=0;

void btnClick();
void btnDoubleClick();
void btnHold();

void setup()
{
    led[numberled].on();
    button.attachClick(btnClick);
    button.attachDoubleClick(btnDoubleClick);
    button.attachLongPressStart(btnHold);
}

void loop()
{
    led[numberled].loop();
    button.tick();
}

void btnClick()
{
    led[numberled].flip();
}

void btnDoubleClick()
{
    numberled++;
    if (numberled>1)
    {
        numberled -=2;
    }
    
}

void btnHold(){
    led[numberled].blink(200);
}