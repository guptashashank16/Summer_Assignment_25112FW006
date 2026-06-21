#include <stdio.h>
#include <string.h>
int main() 
{
    char str[1000];
    char words[100][100];
    char temp[100];
    int count = 0, i, j, k;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    i = 0;
    while (str[i] != '\0')
    {
        while (str[i] == ' ')
        i++;
        if (str[i] == '\0')
        break;
        k = 0;
        while (str[i] != ' ' && str[i] != '\0') 
        {    words[count][k++] = str[i++];  }
        words[count][k] = '\0';
        count++;
    }

    for (i = 0; i < count - 1; i++) 
    {
        for (j = i + 1; j < count; j++) 
        {
            if (strcmp(words[i], words[j]) > 0) 
            {
                strcpy(temp, words[i]);
                strcpy(words[i], words[j]);
                strcpy(words[j], temp);
            }
        }
    }
    printf("Alphabetically sorted words:\n");
    for (i = 0; i < count; i++) 
    {
        printf("%s ", words[i]);
    }
    return 0;
}