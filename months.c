#include<stdio.h>
int main()
{
    int dates,months,days;
    printf("Enter days to check the months & dates :\n");\
    scanf("%d",&dates);
    months = dates / 30 ;
    // days = dates - (months*30);
    days = dates % 30;
    printf("The result is months: %d & dates is %d",months,days);
}
