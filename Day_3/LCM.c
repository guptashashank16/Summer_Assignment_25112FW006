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
    for(i=big; ;i++)
    {   if((i%n==0)&&(i%m==0))
        {   printf("LCM is %d",i);
            return 0;
        }
    }    
    return 0;
}