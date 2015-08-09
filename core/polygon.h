#ifndef _POLYGON_H_
#define _POLYGON_H_

#include "engine.h"
#include "point.h"
#include "shape.h"

class Polygon : public Shape {
private:
	int count;
	Point* points;
public:
	Polygon();
	Polygon(int n_points, ...);
	Polygon(int n_points, int points[]);
	void draw();
};


#endif