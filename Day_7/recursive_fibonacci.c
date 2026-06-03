#include<stdio.h>
     int fibo(int n)
{     
     if(n==1)
     {  return 0; }
     else if(n==2)
     {  return 1; }
     else
     return fibo(n-1)+fibo(n-2);
}     
int main()
{
    int n,res;
    printf("Enter the number: \n");
    scanf("%d",&n);
    if(n<1)
    {  
        printf("Invalid Input!!!");
        return 0; 
    }
    res=fibo(n);
    printf("%dth term of Fibonacci series is %d\n",n,res);
    return 0;
}