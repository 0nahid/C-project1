// strong number
#include <stdio.h>
int main()
{
    int num, sum = 0, rem, temp, fact, i;
    printf("Enter a number: ");
    scanf("%d", &num);
    temp = num;
    while (temp != 0)
    {
        rem = temp % 10;
        fact = 1;
        for (int i = 1; i <= rem; i++)
        {
            fact = fact * i;
        }
        sum = sum + fact;
        temp = temp / 10;
    }
    (sum == num) ? printf("%d is a strong number\n", num) : printf("%d is not a strong number\n", num);
}