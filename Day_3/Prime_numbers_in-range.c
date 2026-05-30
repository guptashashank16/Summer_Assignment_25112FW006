#include <stdio.h>
int main() 
{   
    int n,i,j,count;
        printf("Enter the number till you want to find prime numbers :\n");
        scanf("%d",&n);
        printf("Prime numbers in this range are\n");
    for(i=2;i<=n;i++)
    {count=0;
    for(j=2;j<i;j++)
    {
    if(i%j==0)
    {
    count++;
    break;
    }
    }
    if(count==0)
    printf("%d\n",i);
    }
    return 0;
}