#include "player.h"

Player::Player() {
	shape = new Polygon(3, 15, 35,
						  0, 0,
						  30, 0);
}

void Player::draw() {
	shape->draw();
}

void Player::move(int x, int y) {
	int old_x = shape->getX();
	int old_y = shape->getY();
	
	if(shape->getMinX() + x*vel > 0 && shape->getMaxX() + x*vel < 500)
		shape->setX(old_x + x*vel);

	if(shape->getMinY() + y*vel > 0 && shape->getMaxY() + y*vel < 500)
		shape->setY(old_y + y*vel);
}

Player::~Player() {
	delete shape;
}
