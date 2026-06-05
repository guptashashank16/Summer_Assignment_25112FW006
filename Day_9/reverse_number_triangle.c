#include <stdio.h>
int main() 
{
    int i,j,n;
    printf("Enter the length you want to be of number triangle :\n");
    scanf("%d",&n);
    printf("\n");
    for(i=n;i>=0;i--)
    {
      for(j=0;j<i;j++)
      {
          printf("%d\t",j+1);
      }
      printf("\n");
    }
    return 0;
}