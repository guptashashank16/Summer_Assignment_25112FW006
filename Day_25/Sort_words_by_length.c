#include <stdio.h>
#include <string.h>
int main() 
{
    char str[1000];
    char words[100][100];
    int count = 0, i, j;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    int len = strlen(str);
    if (str[len - 1] == '\n')
        str[len - 1] = '\0';

    i = 0;
    while (str[i] != '\0') 
    {
        int k = 0;
        while (str[i] == ' ')
        i++;
        while (str[i] != ' ' && str[i] != '\0')
        {words[count][k++] = str[i++];  }
        words[count][k] = '\0';
        if (k > 0)
        count++;
    }

    char temp[100];
    for (i = 0; i < count - 1; i++)
    {
        for (j = 0; j < count - i - 1; j++)
         {
            if (strlen(words[j]) > strlen(words[j + 1]))
             {
                strcpy(temp, words[j]);
                strcpy(words[j], words[j + 1]);
                strcpy(words[j + 1], temp);
            }
        }
    }

    printf("Words sorted by length:\n");
    for (i = 0; i < count; i++) {
        printf("%s ", words[i]);
    }

    return 0;
}