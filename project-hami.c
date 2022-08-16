#include <stdio.h>
int main()
{
    int units, unitCost, subCharge, totalCharge;
    printf("Enter the units consumed: ");
    scanf("%d", &units);
    if (units < 500)
    {
        unitCost = units * 8;
        subCharge = unitCost * 0.5;
        totalCharge = subCharge + unitCost;
        printf("Total charge for Home: %d\n", totalCharge);
    }
    else if (units >= 500 && units < 1000)
    {
        unitCost = units * 12;
        subCharge = unitCost * 0.5;
        totalCharge = subCharge + unitCost;
        printf("Total charge for univarsity: %d\n", totalCharge);
    }
    else if (units >= 1000)
    {
        unitCost = units * 15;
        subCharge = unitCost * 0.5;
        totalCharge = subCharge + unitCost;
        printf("Total charge industry: %d\n", totalCharge);
    }
    return 0;
}