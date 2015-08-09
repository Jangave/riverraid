#include "keyboard.h"

int Keyboard::getKey(short int key) {
	keyStates[key] = glfwGetKey(((Window*) parent)->getNative(), key);
	return keyStates[key];
}

bool Keyboard::isPressed(short int key) {
	keyStates[key] = glfwGetKey(((Window*) parent)->getNative(), key);
	return keyStates[key] == KEY_BEGAN_PRESS;
}

bool Keyboard::isReleased(short int key) {
	keyStates[key] = glfwGetKey(((Window*) parent)->getNative(), key);
	return keyStates[key] == KEY_END_PRESS;
}

/*bool isDown(short int key) {
	return leyStates[key] == KEY_BEGAN_PRESS;
}*/