#ifndef Led_h
#define Led_h

#include <Arduino.h>

class Led {

	private:
		int _pin;
	public:
		Led();
		Led(int pin);
		~Led();
		void setPin(int pin);
		int getPin();
		void on();
		void off();
		bool isOn();
		bool isOff();
		void blink(int repeat, int _delay);
};

#endif