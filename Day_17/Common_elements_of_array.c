#include <stdio.h>

int main()
{
    int n1, n2;

    printf("Enter size of first array: ");
    scanf("%d", &n1);
    int a[n1];
    printf("Enter elements of first array:\n");
    for(int i = 0; i < n1; i++)
    {scanf("%d", &a[i]);}

    printf("Enter size of second array: ");
    scanf("%d", &n2);
    int b[n2];
    printf("Enter elements of second array:\n");
    for(int i = 0; i < n2; i++)
    { scanf("%d", &b[i]);}

    printf("Common elements are: ");
    for(int i = 0; i < n1; i++)
    {
        int found = 0;
        for(int j = 0; j < n2; j++)
        {
            if(a[i] == b[j])
            {
                found = 1;
                break;
            }
        }
        int duplicate = 0;
        for(int k = 0; k < i; k++)
        {
            if(a[i] == a[k])
            {
                duplicate = 1;
                break;
            }
        }
        if(found && !duplicate)
            printf("%d ", a[i]);
    }

    return 0;
}