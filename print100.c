#include <stdio.h>
main()
{
    int r = 1, sum = 0;
m:
    if (r <= 100)
    {
        printf("%d\t", r);
        sum += r;
        r++;
        goto m;
    }
    printf("\nSum = %d\n", sum);
}