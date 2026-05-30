#include <stdio.h>
int main() 
{
    int n,m,big,i;
    printf("ENTER THE FIRST NUMBER:\n");
    scanf("%d",&n);
    printf("ENTER THE SECOND NUMBER:\n");
    scanf("%d",&m);
    if(n>m)
    {big=n;}
    else
    {big=m;}
    for(i=big;i>=1;i--)
    {   if((n%i==0)&&(m%i==0))
        {   printf("GCD is %d",i);
            break;
        }
    }    
    return 0;
}