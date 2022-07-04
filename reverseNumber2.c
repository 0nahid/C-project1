// reverse number with for loop
#include <stdio.h>
int main()
{
    int num, revNum = 0, i, r;
    printf("Enter a number: ");
    scanf("%d", &num);
    for (i = num; i > 0; i = i / 10)
    {
        r = i % 10;
        revNum = revNum * 10 + r;
    }
    printf("Reverse of %d is %d\n", num, revNum);
}