#include <stdio.h>
int main() 
{   
    int n,i,multiply;
    printf("Enter the number :\n");
    scanf("%d",&n);
    printf("Table of number %d is:\n",n);
    for(i=1;i<11;i++)
    { 
        multiply=n*i; 
        printf("%d * %d = %d\n",n,i,multiply);
     }
    return 0;
}