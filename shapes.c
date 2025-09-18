// shapes.c


#include <math.h>

// Function to calculate the area of a circle
double circle_area(double radius) {
    return M_PI * pow(radius, 2);
}

// Function to calculate the area of a rectangle
double rectangle_area(double length, double width) {
    return length * width;
}
