#ifndef LedAnimate_h
#define LedAnimate_h

#include <Arduino.h>
#include "Led.h"

class LedAnimate {
	public:
		void blink(Led led, int repeat, int _delay);
		void airplane(Led led);
};

#endif