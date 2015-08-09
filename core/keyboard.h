#ifndef _KEYBOARD_H_
#define _KEYBOARD_H_

#include "node.h"
#include "window.h"

#define KEY_BEGAN_PRESS 1
#define KEY_END_PRESS   0
// #define KEY_IS_PRESSED  2 TODO in next build


class Keyboard : public Node {
private:
	char keyStates[348];
public:
	int getKey(short int key);
	bool isPressed(short int key);
	bool isReleased(short int key);
	// bool isDown(short int key); TODO in next build
	// void update();
};

#endif