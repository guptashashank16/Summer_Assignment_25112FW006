#include <stdio.h>
int main() 
{   
    int n,i,factorial=1;
    printf("Enter the number :\n");
    scanf("%d",&n);
    
    if(n<0)
    {printf("Invalid Input!!!");}
    else
    {
    for(i=1;i<n+1;i++)
    { factorial*=i; }
    
    printf("Factorial of number %d is: %d \n",n,factorial);
    }
    return 0;
}