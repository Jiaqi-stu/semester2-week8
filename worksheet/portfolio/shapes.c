
#include <stdbool.h>
#include <math.h>

#include "shapes.h"

Point makePoint( float x, float y ) {
    Point new;
    // implementation
    new.x = x;
    new.y = y;
    return new;
}

// complete other functions below
// - start with stubs as above
// - compile regularly to test syntax
// - test functions by calling them from main()
Line makeLine( Point p1, Point p2 ){
    Line line;
    line.p[0] = p1;
    line.p[1] = p2;
    return line;
}

Triangle makeTriangle( Point p1, Point p2, Point p3 ){
    Triangle triangle;
    triangle.p[0] = p1;
    triangle.p[1] = p2;
    triangle.p[2] = p3;
    return triangle;
}

float lineLength( Line l ){
    float dx = l.p[0].x - l.p[1].x;
    float dy = l.p[0].y - l.p[1].y;
    return sqrt(dx * dx + dy * dy);
}

float triangleArea( Triangle t ){
    float x1 = t.p[0].x;
    float x2 = t.p[1].x;
    float x3 = t.p[2].x;

    float y1 = t.p[0].y;
    float y2 = t.p[1].y;
    float y3 = t.p[2].y;

    float area = 0.5 * fabs(
        x1*(y2-y3) + 
        x2*(y3-y1) +
        x3*(y1-y2)
    );
    return area;
}

bool samePoint( Point p1, Point p2 ){
    return (p1.x == p2.x) && (p1.y == p2.y);
}

bool pointInLine( Point p, Line l){
    return ((l.p[0].x == p.x) && (l.p[0].y == p.y)) || 
    ((l.p[1].x == p.x) && (l.p[1].y == p.y));
}

bool pointInTriangle( Point p, Triangle t ){
    return ((t.p[0].x == p.x) && (t.p[0].y == p.y)) ||
    ((t.p[1].x == p.x) && (t.p[1].y == p.y)) ||
    ((t.p[2].x == p.x) && (t.p[2].y == p.y));
}