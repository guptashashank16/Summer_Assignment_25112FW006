#include<stdio.h>
     int fact(int n)
{     
     if((n==0)||(n==1))
     {  return 1; }
     return fact(n-1)*(n);
}     
int main()
{
    int n,res;
    printf("Enter the number: \n");
    scanf("%d",&n);
    if(n<0)
    {  
        printf("Invalid Input!!!");
        return 0; 
    }
    res=fact(n);
    printf("Factorial of number is %d",res);
    return 0;
}