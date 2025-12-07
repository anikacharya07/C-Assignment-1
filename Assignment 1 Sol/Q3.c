#include <stdio.h>

int main(void) {
    double length, breadth;
    
    printf("Enter length and breadth of rectangle: ");
    scanf("%lf %lf", &length, &breadth);
    
    double area = length * breadth;
    double perimeter = 2 * (length + breadth);
    
    printf("Rectangle Area: %.2lf\n", area);
    printf("Rectangle Perimeter: %.2lf\n", perimeter);
    
    double circumference = perimeter;
    double radius = circumference / (2 * 3.14159);
    
    printf("Circle Radius: %.2lf\n", radius);
    
    return 0;
}