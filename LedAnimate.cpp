#include "LedAnimate.h"
#include "Led.h"

void LedAnimate::blink(Led led, int repeat, int _delay) {
	for(int i = 0; i < repeat; i++) {
		led.on();
		delay(_delay);
		led.off();
		delay(_delay);
	}
}

void LedAnimate::airplane(Led led) {
	blink(led, 2, 100);
	delay(500);
}