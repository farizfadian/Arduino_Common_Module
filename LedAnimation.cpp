#include "LedAnimation.h"
#include "Led.h"

void LedAnimation::airplane(Led led) {
	led.blink(2, 100);
	delay(500);
}