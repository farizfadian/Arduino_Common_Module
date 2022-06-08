#ifndef Ultrasonic_h
#define Ultrasonic_h

#include <Arduino.h>

class Ultrasonic {
	private:
		byte trigPin;
		byte echoPin;
		short testCount = 1;
		short testDelay = 10;

	public:
		Ultrasonic(byte trigPin, byte echoPin);
		float getDuration();
		float getDistanceInCm();
		void setTestCount(short testCount);
		short getTestCount();
		float getDistanceInInch();
		float getDistanceInMm();
};

#endif