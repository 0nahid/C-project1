#include <stdio.h>
void inputMatrix(int a[], int n)
{
    int i;
    printf("Enter %d elements for array :\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
}
void main()
{
    int a[10], b[10], c[10], n, i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    inputMatrix(a, n);
    inputMatrix(b, n);
    for (i = 0; i < n; i++)
        c[i] = a[i] + b[i];
    printf("Sum of two array elements are:\n");
    for (i = 0; i < n; i++)
        printf("%d ", c[i]);
    printf("\n");
}

