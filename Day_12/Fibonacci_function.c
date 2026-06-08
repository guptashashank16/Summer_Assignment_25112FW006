#include <stdio.h>
#include <string.h>
char* fibonacci(int n)
{
    static char result[1000];
    int a=0, b=1, c;
    result[0] = '\0';
    if(n<0)
    {
        sprintf(result, "Invalid Input!!!");
        return result;
    }
    if(n==0)
    {
        sprintf(result, "No terms in the series");
        return result;
    }
    sprintf(result, "Fibonacci Series: ");
    for(int i=1; i<=n; i++)
    {
        char temp[50];
        if(i==1)
            sprintf(temp, "%d ", a);
        else if(i==2)
            sprintf(temp, "%d ", b);
        else
        {
            c = a + b;
            sprintf(temp, "%d ", c);
            a = b;
            b = c;
        }
        strcat(result, temp);
    }
    return result;
}
int main()
{
    int n;
    printf("Enter the number of terms:\n");
    scanf("%d", &n);
    printf("%s", fibonacci(n));
    return 0;
}