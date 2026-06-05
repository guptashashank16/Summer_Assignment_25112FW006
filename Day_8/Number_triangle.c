#include <stdio.h>
int main() 
{
    int i,j,n,lol;
    printf("Enter the length you want to be of number triangle :\n");
    scanf("%d",&n);
    printf("\n");
    for(i=0;i<=n;i++)
    {
      for(j=0;j<i;j++)
      {
          lol=j+1;
          printf("%d\t",lol);
      }
      printf("\n");
    }
    return 0;
}