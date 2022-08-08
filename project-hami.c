#include <stdio.h>
int budgetCalc(unit)
{
    if (unit < 300)
    {
        return unit * 9;
    }
    else if (unit >= 300 && unit < 500)
    {
        return unit * 12;
    }
    else if (unit >= 500 && unit < 1000)
    {
        return unit * 15;
    }
    else if (unit >= 1000 && unit < 2000)
    {
        return unit * 18;
    }
    else if (unit >= 2000)
    {
        return unit * 22;
    }
}
int main()
{
    int unit;
    printf("Enter the number of unit: ");
    scanf("%d", &unit);
    // printf("Your bill is: %d\n", (budgetCalc(unit)));
    int unitCost = budgetCalc(unit);
    int subCharge = unitCost * 0.5;
    int total = unitCost + subCharge;
    printf("Your total bill is: %d\n", total);
    return 0;
}