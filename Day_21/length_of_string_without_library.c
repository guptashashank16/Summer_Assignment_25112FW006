#include <stdio.h>
#include <stdlib.h>
int main()
{
    char *str = NULL;
    int size = 0;
    int len = 0;
    char ch;
    printf("Enter a string: ");
    while ((ch = getchar()) != '\n' && ch != EOF)
    {
        len++;
        if (len > size)
        {
            size = (size == 0) ? 1 : size * 2;
            str = realloc(str, size * sizeof(char));
            if (str == NULL)
            {
                printf("Memory allocation failed.\n");
                return 1;
            }
        }
        str[len - 1] = ch;
    }
    str = realloc(str, (len + 1) * sizeof(char));
    str[len] = '\0';
    printf("String: %s\n", str);
    printf("Length: %d\n", len);
    free(str);
    return 0;
}