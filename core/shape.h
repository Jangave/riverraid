#ifndef _SHAPE_H_
#define _SHAPE_H_

#include "node.h"
#include "point.h"
#include "color.h"

class Shape : public Node
{
private:
    int min_x, max_x;
	int min_y, max_y;

	Point* pos;
	Color* color;
protected:
	void setMin(int x, int y);
	void setMax(int x, int y);
public:
	Shape();
	~Shape();

	void setXY(int x, int y);
	void setX(int x);
	void setY(int y);

	int getX();
	int getY();
	
	void setColor(Color* c);
	void setColor(int r, int g, int b);
	
	Color* getColor();

	int getMinX();
	int getMinY();
	int getMaxX();
	int getMaxY();

	virtual void draw() = 0;
	
};
#endif