// spy number
#include <stdio.h>
int main()
{
    int num, i, j, sum = 0, product = 1;
    printf("Enter a number: ");
    scanf("%d", &num);
    int temp = num;
    while (temp != 0)
    {
        i = temp % 10;
        sum = sum + i;
        product = product * i;
        temp = temp / 10;
    }
    printf("sum of digits of %d is %d\n", num, sum);
    printf("product of digits of %d is %d\n", num, product);
    (sum == product) ? printf("%d is a spy number\n", num) : printf("%d is not a spy number\n", num);
}