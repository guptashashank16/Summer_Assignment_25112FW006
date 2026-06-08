#include <stdio.h>
char* palindrome(int n)
{
    static char result[100];
    int original,reversed=0,digit;
    if(n<0)
    {
        sprintf(result, "Invalid Input!!!");
        return result;
    }
    original=n;
    while(n!=0)
    {
        digit=n%10;
        reversed=reversed*10+digit;
        n/=10;
    }
        if(original==reversed)
            sprintf(result,"It's a PALINDROME number!!");
        else
            sprintf(result,"It's not a PALINDROME number!!");
    return result;
}
int main()
{
    int n;
    printf("Enter a number:\n");
    scanf("%d", &n);
    printf("%s", palindrome(n));
    return 0;
}