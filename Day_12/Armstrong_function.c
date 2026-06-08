#include <stdio.h>
#include<math.h>
    char* armstrong(int n)
{    
    static char result[100];
    int num,lum,digits=0,digit,sum=0;
    num=n;
    lum=n;
    if(num == 0)
    { 
        sprintf(result, "It's an ARMSTRONG number!!");
        return result;
    }
    else if(num < 0)
    {
        sprintf(result, "Invalid Input!!!");
        return result;
    }
    else
    {
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
    {   
        sprintf(result, "It's an ARMSTRONG number!!");
        return result; 
    }
    else
    {
        sprintf(result, "It's not an ARMSTRONG number!!");}
        return result;
    }
}
int main() 
{
    int n;
    printf("Enter a number:\n");
    scanf("%d", &n);
    printf("%s", armstrong(n));
    return 0;
}