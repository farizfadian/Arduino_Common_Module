#include "Led.h"

Led::Led() {
}

Led::Led(int pin) {
	setPin(pin);
}

Led::~Led() {
	_pin = 0;
}

void Led::setPin(int pin) {
	pinMode(pin, OUTPUT);
	_pin = pin;
}

int Led::getPin() {
	return _pin;
}

void Led::on() {
	digitalWrite(_pin, HIGH);
}

void Led::off() {
	digitalWrite(_pin, LOW);
}

bool Led::isOn() {
	return digitalRead(_pin) == HIGH;
}

bool Led::isOff() {
	return digitalRead(_pin) == LOW;
}

void Led::blink(int repeat, int _delay) {
	for(int i = 0; i < repeat; i++) {
		on();
		delay(_delay);
		off();
		delay(_delay);
	}
}