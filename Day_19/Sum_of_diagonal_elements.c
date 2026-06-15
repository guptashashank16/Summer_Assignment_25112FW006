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
    if(r != c)
    {
        printf("Sum of diagonal elements is possible only for a square matrix!\n");
        return 0;
    }
    int A[r][c];
    int sum = 0;
    printf("\nEnter matrix elements:\n");
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }
    for(int i = 0; i < r; i++)
    {
        sum += A[i][i];
    }
    printf("\nSum of diagonal elements = %d\n", sum);
    return 0;
}