#include <stdio.h>
#include "triangle.h"

int main(void) {
    
    printf("Enter three (x,y) points\n");
    Point_t first;
    Point_t second;
    Point_t third;
    scanf("%lf%lf", &(first.x), &(first.y));
    scanf("%lf%lf", &second.x, &second.y);
    scanf("%lf%lf", &third.x, &third.y);
    printf("Points entered: (%.2lf, %.2lf) (%.2lf, %.2lf) (%.2lf, %.2lf)\n", first.x, first.y, second.x, second.y, third.x, third.y);
    Point_t points[3] = {first, second, third};
    isRightTriangle(points) ? printf("It's a right triangle\n") : printf("It's not a right triangle\n");
    return 0;
}
