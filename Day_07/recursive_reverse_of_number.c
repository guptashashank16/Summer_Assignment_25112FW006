#include<stdio.h>
    int want;
    int sum(int n)
{   
      if (n == 0)
      { return want;}
      int lol=(n%10);
      want=want*10+lol;
      n/=10;
      return sum(n);
} 
int main()
{
    int n,nil;
    printf("Enter the number: \n");
    scanf("%d",&n);
    nil=sum(n);
    printf("Reverse  of this number is %d",nil);
    return 0;
}