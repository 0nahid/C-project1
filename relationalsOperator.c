// Use of Relationals Operator
/* < Less than  , > Greater than , == Equal to , <= Less than equal to , >= Greater than equal to , != Not equal to
If the condition is true, the program will execute 1 else 0.  */
#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf(" a >  b: %d \n", a > b);
    printf("a >= b: %d \n", a >= b);
    printf("a <= b: %d \n", a <= b);
    printf("a <  b: %d \n", a < b);
    printf("a == b: %d \n", a == b);
    printf("a != b: %d \n", a != b);
}