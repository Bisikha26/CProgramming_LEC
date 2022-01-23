// Calculate area and circumference of a circle [pi*r^2, 2*pi*r]
// let user enter radius of circle

#include <stdio.h>
#define PI 3.1415
void main() {
    float area, radius, circumf;
    printf("Enter radius of cirle");

    // scanf function reads the value of variable radius from the keyboard and stores the value at address of radius
    // using address operator (&)
    scanf("%f", &radius);

    area = radius * radius * PI;
    circumf = 2 * PI * radius;

    printf("\nArea of the cirle = %f", area);
    printf("\nCircumference of the cirle = %f", circumf);
}