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
        { scanf("%d", &A[i][j]);}
    }
    printf("\nRow-wise Sum:\n");
    for(int i = 0; i < r; i++)
    {
        int sum = 0;
        for(int j = 0; j < c; j++)
        { sum += A[i][j];}
        printf("Sum of Row %d = %d\n", i + 1, sum);
    }
    return 0;
}