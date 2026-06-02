#include<stdio.h>
int main()
{
    int n,b,i,sum=1;
    printf("Enter the number :\n");
    scanf("%d",&n);
    printf("Enter the base :\n");
    scanf("%d",&b);
    
    for(i=0;i<b;i++)
    {   sum=sum*n;  }
    printf("THE RESULTANT NUMBER IS %d",sum);
    return 0;
}    
    