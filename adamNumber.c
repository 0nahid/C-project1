// adam number
#include <stdio.h>
int main()
{
    int num, square1, square2, i, j, k, rev1 = 0, rev2 = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
        square1 = num * num;
    int temp    = num;
    printf("square of %d is %d\n", num, square1);
    while (temp != 0)
    {
        k    = temp % 10;
        rev1 = rev1 * 10 + k;
        temp = temp / 10;
    }
    square2 = rev1 * rev1;
    printf("square2 of (%d) is %d\n", rev1, square2);
    while (square2 != 0)
    {
        k       = square2 % 10;
        rev2    = rev2 * 10 + k;
        square2 = square2 / 10;
    }
    printf("rev2 %d\n", rev2);
    (rev2 == square1) ? printf("%d is a adam number\n", num): printf("%d is not a adam number\n", num);
}