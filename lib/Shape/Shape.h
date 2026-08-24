#ifndef __SHAPE__H
#define __SHAPE__H

class Shape {
  public:
      Shape(int *length, int *width);
      int GetLength();
      int GetWidth();
  private:
      int* _length;
      int* _width;

};

#endif
