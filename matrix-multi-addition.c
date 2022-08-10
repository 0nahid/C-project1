// matrix addition using user defined function
#include <stdio.h>
void readMatrix(int matrix[10][10], int rows, int columns)
{
    int i, j;
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
}
void printMatrix(int matrix[10][10], int rows, int columns)
{
    int i, j;
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}
void addMatrix(int matrix1[10][10], int matrix2[10][10], int matrix3[10][10], int rows, int columns)
{
    int i, j;
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            matrix3[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
}
int main()
{
    int matrix1[10][10], matrix2[10][10], matrix3[10][10], rows, columns;
    printf("Enter the number of rows and columns of matrix 1: ");
    scanf("%d %d", &rows, &columns);
    printf("Enter the elements of matrix 1: \n");
    readMatrix(matrix1, rows, columns);
    printf("Enter the number of rows and columns of matrix 2: ");
    scanf("%d %d", &rows, &columns);
    printf("Enter the elements of matrix 2: \n");
    readMatrix(matrix2, rows, columns);
    addMatrix(matrix1, matrix2, matrix3, rows, columns);
    printf("The sum of matrix 1 and matrix 2 is: \n");
    printMatrix(matrix3, rows, columns);
    return 0;
}
