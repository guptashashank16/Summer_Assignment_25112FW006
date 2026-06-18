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
    int count = 1;
    for(int i = 0; i < strlen(str); i++)
    {
        if(str[i] == ' ')
        {
            count++;
        }
    }
    printf("Number of words in the string: %d\n", count);
    return 0;
}