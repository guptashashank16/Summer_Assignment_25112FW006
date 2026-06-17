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

    for(int i = 0; str[i] != '\0'; i++)
    {
        temp=str[i];
        if ((97<=temp)&&(temp<=122))
        {
        temp-=32;
        str[i]=(char)temp;
        }  
    }
    printf("Changed string: %s", str);
    return 0;
}