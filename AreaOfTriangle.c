// Area of the rectangle
#include <stdio.h>
#include <math.h>
int main()
{
    float a, b, c, s, area;
    printf("Enter the 3 sides value of the rectangle:\n");
    scanf("%f%f%f", &a, &b, &c);
    s = (a + b + c) / 2;
    area = sqrt(s * (s - a) * (s - b) * (s - c));
    (a + b > c) ? (printf("Area of the rectangle = %.2f\n", area)) : (printf("Not a rectangle\n"));
    return 0;
}
