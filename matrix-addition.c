#include <stdio.h>
int main()
{
    int x[50][50], y[50][50], z[50][50], n, r, c, i, j;
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
    printf("Enter the elements of the 2nd (%d*%d) matrix:\n", n, n);
    // inputting the matrix
    for (r = 0; r < n; r++)
    {
        for (c = 0; c < n; c++)
        {
            printf("y[%d][%d]: ", r, c);
            scanf("%d", &y[r][c]);
        }
    }
    // showing the matrix
    printf("\nMatrix y:\n");
    for (r = 0; r < n; r++)
    {
        for (c = 0; c < n; c++)
        {
            printf("%d\t", y[r][c]);
        }
        printf("\n");
    }
    
    // adding the matrix
    for (r = 0; r < n; r++)
    {
        for (c = 0; c < n; c++)
        {
            z[r][c] = x[r][c] + y[r][c];
        }
    }
    // showing the matrix
    printf("\nMatrix z:\n");
    for (r = 0; r < n; r++)
    {
        for (c = 0; c < n; c++)
        {
            printf("%d\t", z[r][c]);
        }
        printf("\n");
    }
    // matrix multiplication
    printf("\nMatrix multiplication:\n");
    for (r = 0; r < n; r++)
    {
        for (c = 0; c < n; c++)
        {
            for (i = 0; i < n; i++)
            {
                z[r][c] += x[r][i] * y[i][c];
            }
        }
    }
    // showing the matrix
    printf("\nMatrix z:\n");
    for (r = 0; r < n; r++)
    {
        for (c = 0; c < n; c++)
        {
            printf("%d\t", z[r][c]);
        }
        printf("\n");
    }
    return 0;
}