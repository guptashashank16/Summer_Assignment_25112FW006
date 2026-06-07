#include <stdio.h>
     char* Prime(int a)
{   
    if (a<=1)
    return "Concept not defined!!!";
    else
    {
    for( int i=2;i<a;i++)
    {
        if(a%i==0)
        return "It's not a Prime number!!!";
    }
       return "It's a Prime number!!!";
    }
}     

int main() 
{
    int a;
    printf("Enter a number:\n");
    scanf("%d", &a);
    printf("%s",Prime(a));
    return 0;
}