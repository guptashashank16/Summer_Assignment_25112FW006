#include<stdio.h>

int main()
{
    int n,binary=0,place=1,rem;
    printf("Enter the  number in decimal sysytem : \n");
    scanf("%d", &n);
    while(n != 0)
    {
        rem=n%2;
        binary=binary+(rem*place);
        place=place*10;
        n=n/2;
    }
    printf("Binary number of it is = %d", binary);
    return 0;
}