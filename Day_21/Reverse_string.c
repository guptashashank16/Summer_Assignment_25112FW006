#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    printf("Enter length of string: ");
    scanf("%d", &n);
    getchar();
    char str[n+1];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    strrev(str);
    printf("Reversed string: %s", str);
    return 0;
}