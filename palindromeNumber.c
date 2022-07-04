// palindrome Number
#include <stdio.h>
int main()
{
    int num, temp, reverse = 0,r;
    printf("Enter a number: ");
    scanf("%d", &num);
    temp = num;
    while (temp != 0)
    {
        r = temp % 10;
        reverse = reverse * 10 + r;
        temp = temp / 10;
    }
    if (num == reverse)
        printf("%d is a palindrome number\n", num);
    else
        printf("%d is not a palindrome number\n", num);
}