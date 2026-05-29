#include <stdio.h>
int main() 
{   
    int n,num,product=1;
    printf("Enter the number :\n");
    scanf("%d",&n);
    while(n!=0)
    {
        num=n%10;
        product=product*num;
        n=(n/10);
    }
    printf("Product of digits in  number is: %d \n",product);
    return 0;
}