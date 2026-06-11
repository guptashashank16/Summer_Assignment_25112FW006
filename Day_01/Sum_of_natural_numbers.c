#include <stdio.h>
int main() 
{   
    int n,i,sum=0;
    printf("Enter the number :\n");
    scanf("%d",&n);
    printf("Sum of natural numbers up to %d is:\n",n);
    for(i=1;i<=n;i++)
    { 
        sum+=i;
    }
    printf("Sum = %d\n",sum);
    return 0;
}