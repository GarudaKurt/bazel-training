#include "Shape.h"
#include <stdexcept>
Shape::Shape(int *length, int *width) { 
    if(length == nullptr || width == nullptr) {
        throw std::invalid_argument("Cannot be null");
	
    } 
    _length = length;
    _width = width;
}

int Shape::GetLength() { 
    return *_length;
}
int Shape::GetWidth() { 
    return *_width;
}
