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
        printf("Not a symmetric matrix (matrix must be square).\n");
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
    int flag = 1;
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            if(A[i][j] != A[j][i])
            {
                flag = 0;
                break;
            }
        }
        if(flag == 0)
            break;
    }
    if(flag)
        printf("\nThe matrix is symmetric.\n");
    else
        printf("\nThe matrix is not symmetric.\n");
    return 0;
}