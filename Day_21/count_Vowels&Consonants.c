#include<stdio.h>
#include<string.h>
int main()
{
    int n,temp;
    printf("Enter length of string: ");
    scanf("%d", &n);
    getchar();
    char str[n+1];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    for(int i = 0;str[i] != '\0'; i++)
    {
        temp=str[i];
        if (((65<=temp)&&(temp<=90))||((97<=temp)&&(temp<=122)))
        {
            if((temp==65)||(temp==69)||(temp==73)||(temp==79)||(temp==85)||(temp==97)||(temp==101)||(temp==105)||(temp==111)||(temp==117))
            {
                printf("%c is a vowel\n",str[i]);
            }
            else
            {
                printf("%c is a consonant\n",str[i]);
            }
        }
        else
        {
            printf("%c is not an alphabet\n",str[i]);
        }  
    }
    return 0;
}    