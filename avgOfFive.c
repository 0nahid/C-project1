#include <stdio.h>
main()
{
    int a, b, c, d, e, m;
    float avg;
    printf("Enter five numbers :\n");
    scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);
    avg = (float)(a + b + c + d + e) / 5;
    printf("Average of the  %f\n", avg);
    m = (int)avg;
    printf("Integral part is : %d\n", m);
    (int)avg % 3 == 0 ? printf("Average is divisible by 3\n") : printf("Average is not divisible by 3\n");
}
