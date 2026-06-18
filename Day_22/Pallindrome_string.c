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
    if(strcmp(str, strrev(str)) == 0)
    {
        printf("The string is a palindrome.\n");
    }
    else
    {
        printf("The string is not a palindrome.\n");
    }
    return 0;
}