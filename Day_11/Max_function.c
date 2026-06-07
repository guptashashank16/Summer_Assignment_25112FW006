#include <stdio.h>
char* max(int a, int b)
{
    static char result[50];
    if(a > b)
    sprintf(result, "%d is Maximum", a);
    else if(a < b)
    sprintf(result, "%d is Maximum", b);
    else
    sprintf(result, "Equal numbers");
    return result;
}
int main()
{
    int a, b;
    printf("Enter a number:\n");
    scanf("%d", &a);
    printf("Enter another number:\n");
    scanf("%d", &b);
    printf("%s", max(a, b));
    return 0;
}