#include <stdio.h>
int main()
{
    int x[50][50], r, c, n, UT = 0, LE = 0, DE = 0, big;
    printf("Enter the number of the rows & cols:");
    scanf("%d", &n);
    printf("Enter the elements of the (%d*%d) matrix:\n", n, n);
    // inputting the matrix
    for (r = 0; r < n; r++)
    {
        for (c = 0; c < n; c++)
        {
            printf("x[%d][%d]: ", r, c);
            scanf("%d", &x[r][c]);
        }
    }
    // showing the matrix
    printf("\nMatrix x:\n");
    for (r = 0; r < n; r++)
    {
        for (c = 0; c < n; c++)
        {
            printf("%d\t", x[r][c]);
        }
        printf("\n");
    }
}