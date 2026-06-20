#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    char longest[100];
    char word[100];
    int maxLen = 0, j = 0;

    printf("Enter a sentence:\n");
    fgets(str, sizeof(str), stdin);

    for(int i = 0; ; i++)
    {
        if(str[i] != ' ' && str[i] != '\0' && str[i] != '\n')
        { word[j++] = str[i];   }
        else
        {
            word[j] = '\0';
            if(strlen(word) > maxLen)
            {
                maxLen = strlen(word);
                strcpy(longest, word);
            }
            j = 0;
            if(str[i] == '\0')
            break;
        }
    }
    printf("Longest word: %s\n", longest);
    printf("Length: %d", maxLen);
    
    return 0;
}