// calculate sgpa of a student
#include <stdio.h>
int main()
{
    printf("Enter the total credit number of semester: ");
    int credit;
    scanf("%d", &credit);
    printf("Enter the total grade points[Credits Earned * Grade Points]: ");
    int grade;
    scanf("%d", &grade);
    float sgpa = grade / credit;
    printf("SGPA: %.2f", sgpa);
    return 0;
}