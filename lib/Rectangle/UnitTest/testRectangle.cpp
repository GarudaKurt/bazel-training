#include <cstdio>
#include <cassert>
#include "lib/Rectangle/Rectangle.h"

void testArea() { 
    int length = 10, width = 10;

    Rectangle rec(&length, &width);
    printf("Testing Rectangle Area\n");
    assert(rec.GetArea() == 100);
    printf("Test is passed\n");
}

void testPerimeter() { 
   int length = 15, width = 10;
   Rectangle rec(&length, &width);
   assert(rec.GetPerimeter() == 40);
   printf("Test is passed!\n");

}

int main() { 

   testArea();
   testPerimeter();
   printf("All Rectangle is passed\n");
   return 0;
}






















