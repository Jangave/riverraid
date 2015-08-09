#include "color.h"

Color::Color(int r, int g, int b) {
	//cout << (int) r << ", " << (int) g << ", " << (int) b << endl;
	
	this->r = (char) r;
	this->g = (char) g;
	this->b = (char) b;
}

void Color::setR(int r) {
	this->r = r;
}

void Color::setG(int g) {
	this->g = g;
}

void Color::setB(int b) {
	this->b = b;
}

int Color::getR() {
	return (int) r;
}

int Color::getG() {
	return (int) g;
}

int Color::getB() {
	return (int) b;
}

void Color::apply() {

	glColor3f(r/255.f, g/255.f, b/255.f);
}
