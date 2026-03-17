
#include <stdio.h>
#include "shapes.h"

int main( void ) {

    // complete the structure definition in the header file first
    // code in main to test the structures and functions
    // 1️⃣ 创建一个点
    Point p = { .x = 0.0, .y = 0.0 };

    // 2️⃣ 创建矩形
    Rectangle r = makeRectangle(p, 5.0, 3.0);

    // 3️⃣ 输出初始信息
    printf("初始矩形:\n");
    printf("位置: (%.2f, %.2f)\n", r.p.x, r.p.y);
    printf("宽: %.2f, 高: %.2f\n", r.width, r.height);
    printf("面积: %.2f\n\n", area(r));

    // 4️⃣ 平移矩形
    Point dp = { .x = 2.0, .y = 3.0 };
    shiftRectangle(&r, dp);

    printf("平移后:\n");
    printf("位置: (%.2f, %.2f)\n\n", r.p.x, r.p.y);

    // 5️⃣ 缩放矩形
    scaleRectangle(&r, 2.0);

    printf("缩放后:\n");
    printf("宽: %.2f, 高: %.2f\n", r.width, r.height);
    printf("面积: %.2f\n", area(r));

    return 0;
}

Rectangle makeRectangle( Point p, float width, float height ){
    Rectangle r={
        .p = p,
        .width = width,
        .height = height
    };
    return r;
}

float area( Rectangle r ) {
    float a = 0.0;
    a = r.width * r.height;
    return a;
}

void shiftRectangle( Rectangle *r, Point dp ) {
    r->p.x += dp.x;
    r->p.y += dp.y;
    return;
}

void scaleRectangle( Rectangle *r, float scale ) {
    r->width *= scale;
    r->height *= scale;
    return;
}
