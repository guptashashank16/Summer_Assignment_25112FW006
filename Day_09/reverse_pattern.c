#include <stdio.h>
int main() 
{
    int i,j,n;
    printf("Enter the length you want to be of reverse pyramid :\n");
    scanf("%d",&n);
    printf("\n");
    for(i=n;i>=0;i--)
    {
      for(j=0;j<i;j++)
      {
          printf("*\t");
      }
      printf("\n");
    }
    return 0;
}