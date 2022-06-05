#include <stdio.h>
void main()
{
    float radius, pi, area;
    pi = 3.1416;
    printf("Enter the radius of the circle:\n");
    scanf("%f", &radius);
    area = pi * radius * radius;
    radius > 0 ? printf("Area of the circle = %.2f\n", area) : printf("Not a circle\n");
}