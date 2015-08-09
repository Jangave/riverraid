#ifndef _COLOR_H_
#define _COLOR_H_ 

#include "engine.h"

class Color {
private:
	unsigned char r, g, b;
public:
	Color(int r, int g, int b);
	void setR(int r);
	void setG(int g);
	void setB(int b);

	int getR();
	int getG();
	int getB();

	void apply();
	/* TODO chromatic operations */
};
#endif