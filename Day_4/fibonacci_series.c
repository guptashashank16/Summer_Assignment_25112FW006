#include <stdio.h>
int fibo (int a)
{
    if(a==1)
    return 0;
    else if(a==2)
    return 1;
    else 
    return fibo(a-2) + fibo(a-1);
}
int main()
{
int n,i,temp;
printf("Enter the number till you want to print the fibonacci series :\n");
scanf("%d",&n);
if (n <= 0)
{ 
    printf("Invalid Input!!!");
    return 0;
}
printf("Fibonacci series is :\n");
for(i=1;i<=n;i++)
{
    temp = fibo( i);
    printf("%d term of fibonacci series is %d\n",i,temp);
}
    return 0;
}