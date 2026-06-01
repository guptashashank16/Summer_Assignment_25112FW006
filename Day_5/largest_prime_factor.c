#include <stdio.h>

int main()
{
    int n, i, largest = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n == 0)
    {
        printf("0 does not have a defined prime factor.\n");
        return 0;
    }

    if (n < 0)
        n = -n;
        
    if (n == 1)
    {
        printf("1 has no prime factors.\n");
        return 0;
    }

    for (i = 2; i <= n; i++)
    {
        while (n % i == 0)
        {
            largest = i;
            n = n / i;
        }
    }
    if (n > 1)
        largest = n;

    printf("Largest prime factor = %d\n", largest);

    return 0;
}