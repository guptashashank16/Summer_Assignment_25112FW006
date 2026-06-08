#include <stdio.h>
char* perfect(int n)
{
    static char result[100];
    int sum=0;
    if(n<=0)
    {
        sprintf(result, "Invalid Input!!!");
        return result;
    }
    for(int i=1; i<n; i++)
    {
        if(n%i==0)
            sum+=i;
    }
    if(sum==n)
        sprintf(result, "It's a PERFECT number!!");
    else
        sprintf(result, "It's not a PERFECT number!!");
    return result;
}
int main()
{
    int n;
    printf("Enter a number:\n");
    scanf("%d", &n);
    printf("%s", perfect(n));
    return 0;
}