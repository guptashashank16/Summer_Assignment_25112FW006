#include<stdio.h>
#include<math.h>
int main()
{
    int n,i=0,num,sum=0;
    printf("Enter the number in binary:\n");
    scanf("%d",&n);
    num=n;
    while(num!=0)
    {
        if(num%10!= 0 && num%10!=1)
        {
            printf("Invalid binary number");
            return 0;
        }
    if(num%10==1)
    {
        sum+=(int)pow(2,i);
    }
    num/=10;
    i++;
    }
    printf("The number in Decimal is %d",sum);
    return 0;
}