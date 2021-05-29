#include <Led.h>
#include <LedAnimation.h>

Led led(13);
LedAnimation ledAnimation;

void setup() {
	ledAnimation.airplane(led);
}

void loop() {
	ledAnimation.airplane(led);
}