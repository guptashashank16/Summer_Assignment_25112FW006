#include <stdio.h>
#include <math.h>
int main() 
{   
    int i,n,num,lum,digits,digit,sum;
    printf("Enter the number :\n");
    scanf("%d",&n);
    if(n< 0)
    { 
        printf("Invalid Input!!!");
        return 0;
    }
    printf("Armstrong Numbers in this range are: \n");
    for(i=0;i<=n;i++)
    {
    num=i;
    lum=i;
    digits=0;
    sum=0;
    if(i== 0)
    { 
        printf("%d\n",i);
        continue;
    }
    while(num!=0)
    {
        num=(num/10);
        digits++; 
    }
    while(lum!=0)
    {
       digit = lum % 10;
        sum += (int)(pow(digit, digits)+0.5);
        lum /= 10;
    }
    if(sum==i)
    {printf("%d\n",i);}
    }
    return 0;
}