#include <stdio.h>
#include <math.h>
int main() 
{   
    int n,num,lum,digits=0,digit,sum=0;
    printf("Enter the number :\n");
    scanf("%d",&n);
    num=n;
    lum=n;
    if(num == 0)
    { 
        printf("It's an ARMSTRONG number!!");
        return 0;
    }
    if(num < 0)
    {printf("Invalid Input!!!");
        return 0;
    }
    while(num!=0)
    {
        num=(num/10);
        digits++; 
    }
    while(lum!=0)
    {
       digit = lum % 10;
        sum += (int)pow(digit, digits);
        lum /= 10;
    }
    if(sum==n)
    {printf("It's an ARMSTRONG number!!");}
    else
    {printf("It's not an ARMSTRONG number!!");}
    return 0;
}