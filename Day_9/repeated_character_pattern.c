#include <stdio.h>
int main() 
{
    int i,j,n;
    char lol;
    printf("Enter the length you want to be of repeated character pattern :\n");
    scanf("%d",&n);
    printf("\n");
    for(i=0;i<=n;i++)
    {
      for(j=0;j<=i;j++)
      {
          lol=i+65;
          printf("%c\t",lol);
      }
      printf("\n");
    }
    return 0;
}