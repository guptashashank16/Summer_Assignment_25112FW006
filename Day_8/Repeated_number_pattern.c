#include <stdio.h>
int main() 
{
    int i,j,n;
    printf("Enter the length you want to be of pyramid :\n");
    scanf("%d",&n);
    printf("\n");
    for(i=0;i<=n;i++)
    {
      for(j=0;j<=i;j++)
      {
          printf("%d\t",i+1);
      }
      printf("\n");
    }
    return 0;
}