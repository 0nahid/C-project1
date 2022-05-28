#include <stdio.h>
int main()
{
    int number,a,b,c,d,sum;
    printf("Enter a four digits of an integer:\n");
    scanf("%d",&number);
    a = number / 1000;
    b=  (number / 100)%10;
    c = (number / 10)%10;
    d = number% 10;
    sum = a + b + c +d ;
    //printf("a = %d , b = %d , c =%d , d = %d", a,b,c,d);
    printf("Sum of the inputted 4 digits integer: %d \n",sum);
}
