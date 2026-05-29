#include <stdio.h>
int main() 
{
    int num,rev=0,remainder,n;
    printf("Enter a number: ");
    scanf("%d", &num);
    n=num;
    while(num!=0) 
    {
        remainder = num % 10;
        rev=(rev*10)+remainder;
        num = num / 10; 
    }
    printf("Reversed number = %d\n", rev);
    if(rev==n)
    printf("It's a Palindrome Number!!!");
    else
    printf("It's not a Palindrome Number!!!");
    return 0;
}