// search by position
#include <stdio.h>
int main()
{
    int a[100], i, n, p;
    printf("Enter array : ");
    scanf("%d", &n);
    printf("Enter array elements: ");
    printf("\n");
    for (i = 0; i < n; i++)
    {
        printf("a[%d]: ", i + 1);
        scanf("%d", &a[i]);
    }
    printf("Enter position: ");
    scanf("%d", &p);
    printf("Element at position %d is %d\n", p, a[p - 1]);
    return 0;
}