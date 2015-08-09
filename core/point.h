#ifndef _POINT_H_
#define _POINT_H_

class Point {
private:
	int x;
	int y;
public:
	Point() {}
	Point(int x, int y);
	void setX(int x);
	void setY(int y);
	int getX();
	int getY();
};

#endif