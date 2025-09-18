// main.c

#include <stdio.h>
#include "shapes.h"

int main() {
    double radius = 5.0;
    double length = 4.0;
    double width = 6.0;

    // Calculate and print the area of the circle
    double circleArea = circle_area(radius);
    printf("The area of the circle with radius %.2f is %.2f\n", radius, circleArea);

    // Calculate and print the area of the rectangle
    double rectangleArea = rectangle_area(length, width);
    printf("The area of the rectangle with length %.2f and width %.2f is %.2f\n", length, width, rectangleArea);

    return 0;
}
