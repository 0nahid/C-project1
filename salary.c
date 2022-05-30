#include <stdio.h>
int main()
{
salaryCheck:
    printf("Enter the salary: ");
    int salary, totalSalary;
    scanf("%d", &salary);
    int salary1 = salary + salary * 0.15 + salary * 0.75;
    int salary2 = salary + salary * 0.25 + salary * 0.8;
    int salary3 = salary + salary * 0.30 + salary * 0.90;
    salary <= 0 ? printf("Invalid salary\n") : (salary <= 20000 ? (printf("Total salary is %d\n", salary1)) : (salary >= 20001 && salary <= 40000 ? (printf("Total salary is %d\n", salary2)) : (salary >= 40001 ? (printf("Total salary is %d\n", salary3)) : (printf("Invalid salary\n")))));
    goto salaryCheck;
}