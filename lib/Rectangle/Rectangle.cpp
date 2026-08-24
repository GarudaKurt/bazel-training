#include "Rectangle.h"

Rectangle::Rectangle(int *length, int *width) : Shape(length, width){};

int Rectangle::GetArea() {
    return GetLength() * GetWidth();
}
int Rectangle::GetPerimeter() { 
    return (2 * (GetLength()  + GetWidth()));
}
