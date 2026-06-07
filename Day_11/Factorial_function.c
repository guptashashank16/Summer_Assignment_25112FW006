#include <stdio.h>
char* factorial(int n)
{
    static char result[100];
    int fact = 1;
    if(n < 0)
    {
        sprintf(result, "Factorial is not defined for negative numbers");
        return result;
    }
    for(int i=1 ; i< n ; i++)
    { fact *= i;}
    sprintf(result, "Factorial of %d is %d", n, fact);
    return result;
}
int main()
{
    int n;
    printf("Enter a number:\n");
    scanf("%d", &n);
    printf("%s", factorial(n));
    return 0;
}