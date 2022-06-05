#include <stdio.h>
main()
{
    int r = 1, sum = 0;
m:
    if (r <= 10)
    {
        printf("%d\t", r);
        sum += r;
        r++;
        goto m;
    }
    printf("\nSum of first %d numbers is  %d\n", r - 1, sum);
}