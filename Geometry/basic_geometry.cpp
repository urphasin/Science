#include <cmath>
#include <stdio.h>

struct Point {
    double x, y;
};

double distance(Point A, Point B) {
    return sqrt((A.x - B.x)*(A.x - B.x) + (A.y - B.y)*(A.y - B.y));
}

Point rotate(Point A, double angle) {
    double c = cos(angle);
    double s = sin(angle);

    return {
        A.x * c - A.y * s,
        A.x * s + A.y * c
    };
}

int main() {
    printf("Distance of PointA(1, 1) to PointB(2, 2): %lf", distance((struct Point){1, 1}, (struct Point){2, 2})  );
}