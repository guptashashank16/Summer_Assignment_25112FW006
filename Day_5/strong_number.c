#include <stdio.h>

int main() 
{   
    int n,i,sum=0,product,check,num;
        printf("Enter the number :\n");
        scanf("%d",&n);
    if(n<0)
    {   printf("Invalid Input!!!!");
        return 0;
    }
    if(n==0)
    {   printf("It's not a strong number!!!!");
        return 0;
    }
    check=n;
    while(n!=0)
    {
        num=n%10;
        product=1;
        n=n/10;
        for(i=1;i<=num;i++)
        {
            product*=i;
        }
        sum+=product;
    }
     if(check==sum)
    {   printf("It's a strong number!!!!"); }
    else
    {   printf("It's not a strong number!!!!"); }
    return 0;
}