// maths of all numbers in a line
#include <stdio.h>
int main()
{
    int num, i, j, sum = 0, product = 1, square = 0, cube = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    int temp = num;
    while (temp != 0)
    {
        i = temp % 10;
        sum = sum + i;
        product = product * i;
        square = square + i * i;
        cube = cube + i * i * i;
        temp = temp / 10;
    }
    printf("sum of digits of %d is %d\n", num, sum);
    printf("product of digits of %d is %d\n", num, product);
    printf("square of %d is %d\n", num, square);
    printf("cube of %d is %d\n", num, cube);
}