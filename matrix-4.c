/**
 *****
 ****
 ***
 **
 *
 */
#include <stdio.h>
void main()
{
    int x, y;
    for (x = 5; x > 0; x--)
    {
        for (y = 1; y <= x; y++)
        {
            printf("*");
        }
        printf("\n");
    }
}