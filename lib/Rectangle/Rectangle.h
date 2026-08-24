#ifndef __RECTANGLE__H
#define __RECTANGLE__H
#include "lib/Shape/Shape.h"

class Rectangle : public Shape { 

    public:
	    Rectangle(int *length, int *width);
	    int GetArea();
	    int GetPerimeter();
};
#endif
