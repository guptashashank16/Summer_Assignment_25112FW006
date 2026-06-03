#include<stdio.h>
    int sum(int n)
{   
      if (n == 0)
      { return 0;}
      int lol=(n%10);
      n/=10;
      return sum(n)+lol;
} 
int main()
{
    int n,nil;
    printf("Enter the number: \n");
    scanf("%d",&n);
    nil=sum(n);
    printf("Sum of digits of this number is %d",nil);
    return 0;
}