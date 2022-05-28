  #include<stdio.h>
int main()
{
    int year;
    printf("Enter a year to check it is a leap year or not: \n");
    scanf("%d",&year);
    printf("%d ",year);
    (year % 4 == 0 && year / 100 != 0 || year % 400 == 0 ) ? (printf("is a Leap year")) : (printf("is not a leap year"));
}