#include <stdio.h>
int main()
{
  int year;
  printf("Enter a year to check it is a leap year or not: \n");
  scanf("%d", &year);
  ( (year % 4 == 0 && year / 100 != 0) || (year % 400 == 0 )) ? (printf("%d is a Leap year\n", year)) : (printf("%d is not a leap year\n", year));
}