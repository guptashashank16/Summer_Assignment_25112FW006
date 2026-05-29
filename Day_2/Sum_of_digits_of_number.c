#include <stdio.h>
int main() 
{   
    int n,num,sum=0;
    printf("Enter the number :\n");
    scanf("%d",&n);
    while(n!=0)
    {
        num=n%10;
        sum+=num;
        n=(n/10);
    }
    printf("Sum of digits in  number is: %d \n",sum);
    return 0;
}