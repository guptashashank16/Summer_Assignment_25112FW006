#include <stdio.h>
int main() 
{   
    int n,i,cfactor,check=0;
        printf("Enter the number :\n");
        scanf("%d",&n);
    if(n<=1)
      {
        printf("Invalid Input!!!!");
        return 0;
      }    
    for(i=2;i<n;i++)
    { 
    if(n%i==0)
    {   check++;
        printf("It's not a prime number!!");
        break;
    }
    }
        if(check==0)
            printf("It's a Prime number");
            return 0;
}