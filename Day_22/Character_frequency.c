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
    char target;
    printf("Enter a character to find its frequency: ");
    scanf("%c", &target);
    int frequency = 0;
    for(int i = 0; i < strlen(str); i++)
    {
        if(str[i] == target)
        {
            frequency++;
        }
    }
    printf("Frequency of '%c' in the string: %d\n", target, frequency);
    return 0;
}
