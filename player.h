#ifndef _PLAYER_H_
#define _PLAYER_H_

#include "core/polygon.h"

class Player : public Node
{
	Shape* shape;
	static const float vel = 7.5;
public:
	Player();
	~Player();

	void draw();
	void move(int x, int y);	
};

#endif