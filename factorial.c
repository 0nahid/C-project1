// factorial
#include <stdio.h>
int main()
{
    int num, fact = 1;
    printf("Enter a number: ");
    scanf("%d", &num);
    int temp = num;
    while (temp > 0)
    {
        fact = fact * temp;
        temp--;
    }
    printf("Factorial of %d is %d\n", num, fact);
    return 0;
}