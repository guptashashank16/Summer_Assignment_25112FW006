#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    
    printf("Enter a string: ");
    scanf("%s", str);

    int len = strlen(str);

    printf("String after removing duplicates: ");
    for(int i = 0; i < len; i++)
    {
        int flag = 0;
        for(int j = 0; j < i; j++)
        {
            if(str[i] == str[j])
            {
                flag = 1;
                break;
            }
        }
        if(flag == 0)
            printf("%c", str[i]);
    }

    return 0;
}