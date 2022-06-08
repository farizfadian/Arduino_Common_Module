#include "Led.h"

Led::Led() {
}

Led::Led(byte pin) {
	setPin(pin);
}

Led::~Led() {
	this->pin = 0;
}

void Led::setPin(byte pin) {
	pinMode(pin, OUTPUT);
	this->pin = pin;
}

byte Led::getPin() {
	return this->pin;
}

void Led::on() {
	digitalWrite(this->pin, HIGH);
}

void Led::off() {
	digitalWrite(this->pin, LOW);
}

bool Led::isOn() {
	return digitalRead(this->pin) == HIGH;
}

bool Led::isOff() {
	return digitalRead(this->pin) == LOW;
}