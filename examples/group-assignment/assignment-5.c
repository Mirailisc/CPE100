#include <stdio.h>
void printMatrix(int M[][10], int row, int col)
{
    int i, j;
    printf("Print Matrix: \n");

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("% 7d", M[i][j]);
        }

        printf("\n");
    }
}

void readMatrix(int M[10][10], int *row, int *col)
{
    int i, j;
    printf("\nEnter the number of rows and columns of the matrix: ");
    scanf("%d %d", row, col);
    printf("\nInput elements of the matrix [%d %d]: \n", *row, *col);

    for (i = 0; i < *row; i++)
    {
        for (j = 0; j < *col; j++)
        {
            printf("M[%d][%d]: ", i, j);
            scanf("%d", &M[i][j]);
        }
    }
}

int main()
{
    int M1[10][10], M2[10][10];
    int rowM1, colM1, rowM2, colM2;

    printf("Read Matrix M1: \n");
    readMatrix(M1, &rowM1, &colM1);

    printf("Read Matrix M2: \n");
    readMatrix(M2, &rowM2, &colM2);

    printf("\nM1 dimension: row = %d, col = %d", rowM1, colM1);
    printf("\nM2 dimension: row = %d, col = %d", rowM2, colM2);

    printf("\nMatrix M1:\n");
    printMatrix(M1, rowM1, colM1);

    printf("\nMatrix M2:\n");
    printMatrix(M2, rowM2, colM2);

    return 0;
}