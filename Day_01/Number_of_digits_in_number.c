#include <stdio.h>
int main() 
{   
    int n,num,i,digits=0;
    printf("Enter the number :\n");
    scanf("%d",&n);
    num=n;
    if(n == 0)
    { digits = 1;}
    if(n < 0)
    {n = -n;}
    while(n!=0)
    {
        n=(n/10);
        digits++; 
    }
    printf("Number of digits in  number %d is: %d \n",num,digits);
    return 0;
}