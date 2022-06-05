#include <stdio.h>
#include <math.h>
int main()
{
    float principal, rate, time, total;
    printf("Enter the principal amount : ");
    scanf("%f", &principal);
    printf("Enter the rate of interest : ");
    scanf("%f", &rate);
    printf("Enter the time in years : ");
    scanf("%f", &time);
m:
    if (time <= 10)
    {
        total += principal * pow(1 + rate / 100, time);
        time++;
        goto m;
    }
    printf("The amount after %.0f years is %f\n", (time - 1), total);
}