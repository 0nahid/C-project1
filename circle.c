#include<stdio.h>
void main()
{
    float  radius,pi,area;
    pi=3.1416;
    printf("Enter the radius of the circle:\n");
    scanf("%f",& radius);
    area=pi*radius*radius;
    printf("area of the circle is %.2f\n",area);
}