#include <stdio.h>
int main()
{
    int r1, c1, r2, c2;

    printf("Enter rows and columns of first matrix: ");
    scanf("%d %d", &r1, &c1);
    printf("Enter rows and columns of second matrix: ");
    scanf("%d %d", &r2, &c2);

    if(r1 <= 0 || c1 <= 0 || r2 <= 0 || c2 <= 0)
    {
        printf("Invalid matrix dimensions!\n");
        return 0;
    }
    if(r1 != r2 || c1 != c2)
    {
        printf("Matrix addition is not possible!\n");
        printf("Both matrices must have the same number of rows and columns.\n");
        return 0;
    }

    int A[r1][c1], B[r2][c2], Sum[r1][c1];
    printf("\nEnter elements of first matrix:\n");
    for(int i = 0; i < r1; i++)
    {
        for(int j = 0; j < c1; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }
    printf("\nEnter elements of second matrix:\n");
    for(int i = 0; i < r2; i++)
    {
        for(int j = 0; j < c2; j++)
        {
            scanf("%d", &B[i][j]);
        }
    }
    for(int i = 0; i < r1; i++)
    {
        for(int j = 0; j < c1; j++)
        {
            Sum[i][j] = A[i][j] + B[i][j];
        }
    }
    printf("\nSum of matrices:\n");
    for(int i = 0; i < r1; i++)
    {
        for(int j = 0; j < c1; j++)
        {
            printf("%d\t", Sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}