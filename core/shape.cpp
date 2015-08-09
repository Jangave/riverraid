#include "shape.h"

Shape::Shape() {
	pos = new Point(0,0);
	color = new Color(255,255,255);
}

void Shape::setMin(int x, int y) {
	min_x = x;
	min_y = y;
}

void Shape::setMax(int x, int y) {
	max_x = x;
	max_y = y;
}

void Shape::setX(int x) {
	pos->setX(x);
}

void Shape::setY(int y) {
	pos->setY(y);
}

void Shape::setXY(int x, int y) {
	setX(x);
	setY(y);
}

int Shape::getX() {
	return pos->getX();
}

int Shape::getY() {
	return pos->getY();
}

void Shape::setColor(Color* c) {
	if(this->color != NULL) delete this->color;
	this->color = c;
}

void Shape::setColor(int r, int g, int b) {
	if(this->color != NULL) delete this->color;
	this->color = new Color(r,g,b);
}

int Shape::getMinX() {
	return getX() + min_x;
}

int Shape::getMinY() {
	return getY() + min_y;
}

int Shape::getMaxX() {
	return getX() + max_x;
}
int Shape::getMaxY() {
	return getY() + max_y;
}

Color* Shape::getColor() {
	return color;
}

Shape::~Shape() {
	delete color;
	delete pos;
}

