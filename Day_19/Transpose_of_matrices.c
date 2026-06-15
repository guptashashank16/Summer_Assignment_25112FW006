#include <stdio.h>
int main()
{
    int r, c;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);
    if(r <= 0 || c <= 0)
    {
        printf("Invalid matrix dimensions!\n");
        return 0;
    }
    int A[r][c];
    printf("\nEnter matrix elements:\n");
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }
    printf("\nOriginal Matrix:\n");
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            printf("%d\t", A[i][j]);
        }
        printf("\n");
    }
    printf("\nTranspose Matrix:\n");
    for(int i = 0; i < c; i++)
    {
        for(int j = 0; j < r; j++)
        {
            printf("%d\t", A[j][i]);
        }
        printf("\n");
    }
    return 0;
}