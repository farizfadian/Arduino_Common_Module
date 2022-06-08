#include "Ultrasonic.h"

Ultrasonic::Ultrasonic(byte trigPin, byte echoPin) {
	pinMode(trigPin, OUTPUT);
	pinMode(echoPin, INPUT);
	this->trigPin = trigPin;
	this->echoPin = echoPin;
}

void Ultrasonic::setTestCount(short testCount) {
	this->testCount = testCount;
}

short Ultrasonic::getTestCount() {
	return this->testCount;
}

float Ultrasonic::getDuration() {
	digitalWrite(this->trigPin, LOW);
	delayMicroseconds(2);

	digitalWrite(this->trigPin, HIGH);
	delayMicroseconds(10);

	digitalWrite(this->trigPin, LOW);

	return pulseIn(echoPin, HIGH);
}

float Ultrasonic::getDistanceInCm() {
	float distance = 0.0;
	for(short i = 0; i < this->testCount; i++) {
		distance += getDuration() / 29 / 2;
		delay(this->testDelay);
	}
	return distance / this->testCount; 
}

float Ultrasonic::getDistanceInMm() {
	return getDuration() / 2.9 / 2;
}

float Ultrasonic::getDistanceInInch() {
	return getDuration() / 74 / 2;
}