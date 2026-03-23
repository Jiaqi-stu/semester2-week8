
#include <stdio.h>
#include <stdbool.h>

#include "shapes.h"

int main( void ) {

    Point p1 = makePoint(0.0,0.0);
    Point p2 = makePoint(3.0, 4.0);
    Point p3 = makePoint(1.5, 2.0);
    
    // test your code by calling the functions and printing the output 
    printf("Point p1: (%f, %f)\n", p1.x, p1.y);
    printf("Point p2: (%f, %f)\n", p2.x, p2.y);

    printf("samePoint(p1, p1): %d\n", samePoint(p1, p1));
    printf("samePoint(p1, p2): %d\n", samePoint(p1, p2));

    Line l = makeLine(p1, p2);

    printf("Line length: %f\n", lineLength(l));

    printf("p1 on line: %d\n", pointInLine(p1, l));
    printf("p3 on line: %d\n", pointInLine(p3, l));

    Point a = makePoint(0, 0);
    Point b = makePoint(4, 0);
    Point c = makePoint(0, 3);

    Triangle t = makeTriangle(a, b, c);

    printf("Triangle area: %f\n", triangleArea(t));

    Point inside = makePoint(1, 1);
    Point outside = makePoint(5, 5);

    printf("Point inside triangle: %d\n", pointInTriangle(inside, t));
    printf("Point outside triangle: %d\n", pointInTriangle(outside, t));
    
    return 0;
}