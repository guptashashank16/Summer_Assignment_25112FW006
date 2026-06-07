#include <stdio.h>
    int sum (int a,int b)
    { return a+b ;}
int main() 
{
    int a,b;
    printf("Enter a number: \n");
    scanf("%d",&a);
    printf("Enter another number: \n");
    scanf("%d",&b);
    printf("SUM is %d",sum(a,b));
    return 0;
}