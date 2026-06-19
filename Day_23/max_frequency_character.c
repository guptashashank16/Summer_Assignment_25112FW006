#include <stdio.h>
int main() 
{
    char str[1000];
    int freq[256] = {0};
    int maxFreq = 0;
    char maxChar;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) 
    {  freq[(unsigned char)str[i]]++;  }

    for (int i = 0; str[i] != '\0'; i++) 
    {
        if (freq[(unsigned char)str[i]] > maxFreq) 
        {
            maxFreq = freq[(unsigned char)str[i]];
            maxChar = str[i];
        }
    }
    
    printf("Maximum occurring character: %c\n", maxChar);
    printf("Frequency: %d\n", maxFreq);

    return 0;
}