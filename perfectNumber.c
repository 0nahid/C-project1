/* C Program to find Perfect Number using For Loop */

#include <stdio.h>

int main()
{
    int i, Number, sum = 0;

    printf("Please Enter any number : \n");
    scanf("%d", &Number);

    for (i = 1; i < Number; i++)
    {
        if (Number % i == 0)
            sum = sum + i;
    }

    if (sum == Number)
        printf("%d is a Perfect Number\n", Number);
    else
        printf("%d is not the Perfect Number\n", Number);

    return 0;
}