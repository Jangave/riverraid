#include "polygon.h"

//Polygon::Polygon() {}

Polygon::Polygon( int n_points,... )
{
	va_list args;
    va_start(args, n_points);

	this->count = n_points;
	this->points = new Point[this->count];

    int maxx = - 2147483647;
    int minx = 2147483647;
    
    int maxy = -2147483647;
    int miny = 2147483647;


    for(int j = 0; j < count; j++) {
    	float x = va_arg( args, int);
    	float y = va_arg( args, int);

        if(x > maxx) maxx = x;
        if(y > maxy) maxy = y;

        if(x < minx) minx = x; 
        if(y < miny) miny = y; 

    	this->points[j] = Point(x, y);
    }


    this->setMin(minx, miny);
    this->setMax(maxx, maxy);

    va_end(args);
}

Polygon::Polygon( int n_points, int points[])
{
	this->count = n_points;
	this->points = new Point[this->count];

    int maxx = - 2147483647;
    int minx = 2147483647;
    
    int maxy = -2147483647;
    int miny = 2147483647;

    for(int j = 0; j < count; j++) {
    	float x = points[j*2];
    	float y = points[j*2+1];

        if(x > maxx) maxx = x;
        if(y > maxy) maxy = y;
        
        if(x < minx) minx = x; 
        if(y < miny) miny = y; 

    	this->points[j] = Point(x, y);
    }

    this->setMin(minx, miny);
    this->setMax(maxx, maxy);
}

void Polygon::draw() {
	glPushMatrix();
        glTranslated(this->getX(), this->getY(), 0);
        
        Color* c = this->getColor();
        if(c != NULL) c->apply();


		glBegin(GL_POLYGON);
			for(int i = 0; i < count; i++) {
				glVertex3d(points[i].getX(), points[i].getY(), 0);
				
			}
		glEnd();
	glPopMatrix();
}