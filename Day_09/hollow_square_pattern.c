#include <stdio.h>
int main() 
{
    int i,j,n;
    printf("Enter the dimension of hollow square :\n");
    scanf("%d",&n);
    printf("\n");
    for(i=0;i<=n;i++)
    {
      for(j=0;j<=n;j++)
      {

        if(i==0 || i==n || j==0 || j==n) 
        printf("*\t");
        else
        printf("\t");
      }
      printf("\n");
    }
    return 0;
}