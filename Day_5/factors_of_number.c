#include <stdio.h>
#include <stdlib.h>
int main() 
{
    int n,i;
        printf("Enter the number :\n");
        scanf("%d",&n);
    if(n==0)
    {   printf("0 does not have a defined factor");
        return 0;
    }
    int num = abs(n);
    printf("Factors of %d are :\n",n);
    for(i=1;i<=(num/2);i++)
    {   if(num%i==0)
        {printf("%d\t",i);
         printf("-%d\n",i);
        }
    }
    printf("%d\t-%d",num,num);
    return 0;
}