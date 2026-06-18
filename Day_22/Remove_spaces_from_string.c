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
    int len = strlen(str);
    int i, j;
    for(i = 0; i < len; i++)
    {
        if(str[i] == ' ')
        {
            for(j = i; j < len; j++)
            {
                str[j] = str[j+1];
            }
            len--;
            i--;
        }
    }
    printf("String after removing spaces: %s\n", str);
    return 0;
}