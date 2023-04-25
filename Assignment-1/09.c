// Write a function (function name: distance) to compute the distance between two
// points and use it to develop another function (function name: area) that will compute the
// area of the triangle whose vertices are A(x1, y1), B(x2, y2), and C(x3, y3). Use these to
// develop a function functions (function name: tritest) which returns a value 1 if the point (x,
// y) is inside the triangle ABC, otherwise a value 0 for N points, where N points are entered
// through the keyboard.
#include <stdio.h>
#include <math.h>

// function to compute distance between two points
double distance(double x1, double y1, double x2, double y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

// function to compute area of triangle
double area(double x1, double y1, double x2, double y2, double x3, double y3) {
    double a = distance(x1, y1, x2, y2);
    double b = distance(x2, y2, x3, y3);
    double c = distance(x1, y1, x3, y3);
    double s = (a + b + c) / 2.0;
    return sqrt(s * (s - a) * (s - b) * (s - c));
}

// function to check if point (x, y) is inside triangle ABC
int tritest(double x1, double y1, double x2, double y2, double x3, double y3, double x, double y) {
    double A = area(x1, y1, x2, y2, x3, y3);
    double A1 = area(x1, y1, x2, y2, x, y);
    double A2 = area(x1, y1, x, y, x3, y3);
    double A3 = area(x, y, x2, y2, x3, y3);
    if (A == A1 + A2 + A3) {
        return 1; // point is inside triangle
    } else {
        return 0; // point is not inside triangle
    }
}

int main() {
    // example usage of functions
    double x1 = 0.0, y1 = 0.0, x2 = 4.0, y2 = 0.0, x3 = 0.0, y3 = 3.0;
    double x = 2.0, y = 1.0;
    int result = tritest(x1, y1, x2, y2, x3, y3, x, y);
    if (result) {
        printf("The point (%.1f, %.1f) is inside the triangle ABC\n", x, y);
    } else {
        printf("The point (%.1f, %.1f) is not inside the triangle ABC\n", x, y);
    }
    return 0;
}
