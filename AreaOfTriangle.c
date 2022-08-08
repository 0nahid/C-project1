// Area of the Triangle
#include <stdio.h>
#include <math.h>
int main()
{
    float a, b, c, s, area;
    printf("Enter the 3 sides value of the Triangle:\n");
    scanf("%f%f%f", &a, &b, &c);
    s = (a + b + c) / 2;
    area = sqrt(s * (s - a) * (s - b) * (s - c));
    (a + b > c) ? (printf("Area of the Triangle = %.2f\n", area)) : (printf("Not a Triangle\n"));
    return 0;
}
