// Grade point system with ternary operator
#include <stdio.h>
#include <stdlib.h>
int main()
{
gradeCheck:
    int obtainedMarks;
    printf("\nEnter your number :\n");
    scanf("%d", &obtainedMarks);
    (obtainedMarks >= 0 & obtainedMarks <= 100) ? (obtainedMarks >=90)?(printf("A grade\n")):(obtainedMarks >= 87)?(printf("B+ grade\n")):(obtainedMarks >=84)?(printf("B grade\n")):(obtainedMarks >= 80)?(printf("B- grade\n")):(obtainedMarks >= 77)?(printf("C+ grade\n")):(obtainedMarks >=74)?(printf("C grade")):(obtainedMarks >= 70)?(printf("C- grade\n")):(obtainedMarks >= 65)?(printf("D+ grade\n")):(obtainedMarks >=60)?(printf("D grade")):printf("F grade") : printf("Invalid number\n");
    printf("\n");
    goto gradeCheck;
    return 0;
}
