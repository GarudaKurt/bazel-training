#ifndef __SQUARE__H
#define __SQUARE__H
#include "lib/Shape/Shape.h"

class Square : public Shape {
    public:
       Square(int *length, int *width);
       int GetArea();
       int GetPerimeter();
};
#endif
