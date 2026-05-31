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
    int n,temp;
    printf("Enter the term of the fibonacci series you wanna print :\n");
    scanf("%d",&n);
if (n <= 0)
{ 
    printf("Invalid Input!!!");
    return 0;
} 
    temp = fibo(n);
   printf("%d term of fibonacci series is %d\n",n,temp);
    return 0;
}