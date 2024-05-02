#include "triangle.h"
#include <stdio.h>
#include <math.h>

double calculateDistance(Point_t first, Point_t second) {
    const double xDist = second.x - first.x;
    const double yDist = second.y - first.y;
    return sqrt(xDist * xDist + yDist * yDist);
}

bool isRightTriangle(Point_t points[]) {
    double a = calculateDistance(points[0],points[1]);
    double b = calculateDistance(points[1],points[2]);
    double c = calculateDistance(points[2],points[0]);

    // najdłuższy bok
    double longestSide = fmax(a, fmax(b,c));

    if (longestSide == a)
        return fabs(b*b + c*c - a*a) < 1e-9;
    else if (longestSide == b)
        return fabs(a*a + c*c - b*b) < 1e-9;
    else
        return fabs(a*a+b*b-c*c) <1e-9;
}
