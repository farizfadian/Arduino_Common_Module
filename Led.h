#ifndef Led_h
#define Led_h

#include <Arduino.h>

class Led {

	private:
		byte pin;
	public:
		Led();
		Led(byte pin);
		~Led();
		void setPin(byte pin);
		byte getPin();
		void on();
		void off();
		bool isOn();
		bool isOff();
};

#endif