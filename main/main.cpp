#include <stdio.h>
#include "lib/Square/Square.h"
#include "lib/Rectangle/Rectangle.h"
#define array_length(arr) (sizeof(arr) / sizeof((arr)[0))
int main() { 
   int l1 = 10, w1 = 5;
   int l2 = 10, w2 = 8;

   Square shape(&l1, &w1);
   Rectangle rec(&l2, &w2);
   
   
   printf("Hello world test\n");
   printf("Area of square %d\n", shape.GetArea());
   printf("Perimeter of square %d\n",shape.GetPerimeter());
   printf("==========================\n");
   printf("Area of rectangle %d\n ", rec.GetArea());
   printf("Perimeter of rectangle %d\n", rec.GetPerimeter());
   printf("==========================\n");
   printf("Get total of Area Square + Rectangle %d\n", shape.GetArea() + rec.GetArea());
   printf("Get total of Perimeter Square + Rectangle %d\n", shape.GetPerimeter() + rec.GetPerimeter());
   return 0;
}
