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
    if(c1 != r2)
    {
        printf("Matrix multiplication is not possible!\n");
        printf("Number of columns of first matrix must equal number of rows of second matrix.\n");
        return 0;
    }

    int A[r1][c1], B[r2][c2], C[r1][c2];
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
        {   scanf("%d", &B[i][j]);  }
    }
    for(int i = 0; i < r1; i++)
    {
        for(int j = 0; j < c2; j++)
        {
            C[i][j] = 0;

            for(int k = 0; k < c1; k++)
            {    C[i][j] += A[i][k] * B[k][j];  }
        }
    }
    printf("\nProduct Matrix:\n");
    for(int i = 0; i < r1; i++)
    {
        for(int j = 0; j < c2; j++)
        {
            printf("%d\t", C[i][j]);
        }
        printf("\n");
    }
    return 0;
}