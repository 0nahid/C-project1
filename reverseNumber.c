// reverse number
#include <stdio.h>
int main()
{
    int num, revNum = 0, i, r;
    printf("Enter a number: ");
    scanf("%d", &num);
    int temp = num;
    while (temp != 0)
    {
        r = temp % 10;
        revNum = revNum * 10 + r;
        temp = temp / 10;
    }
    printf("Reverse of %d is %d\n", num, revNum);
}