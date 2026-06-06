#include <stdio.h>
int main() {
    int n,i,j;
    char ch;
    printf("Enter number of lines you want :\n");
    scanf("%d",&n);
    if((n>26)||(n<0))
    { return 0; }
    for (i=1;i<=n;i++)
    {
        for(j=i;j<=n;j++) 
        { printf(" "); }
        for(j=0,ch='A';j< i;j++,ch++) 
        { printf("%c", ch); }
        ch--;
        for(j=0;j<i-1;j++,ch--) 
        { printf("%c", ch);}
        printf("\n");
    }
    return 0;
}