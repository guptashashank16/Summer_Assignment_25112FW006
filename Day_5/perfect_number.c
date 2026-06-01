#include <stdio.h>

int main() 
{
    int n,i,sum=1;
    printf("Enter the number :\n");
    scanf("%d",&n);
    if(n<=0)
    {   printf("Invalid Input!!!!");
        return 0;
    }
    if(n==1)
    {   printf("It's not a perfect number!!!!");
        return 0;
    }
    for(i=2;i<=(n/2);i++)
    {   if(n%i==0)
        {sum+=i;}
    }
    if(sum==n)
    {printf("It's a perfect number!!!!");}
    else
    {printf("It's not a perfect number!!!!");}
    return 0;
}