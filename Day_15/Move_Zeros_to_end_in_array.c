#include<stdio.h>
int main()
{
    int n, i, count = 0;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
        if(arr[i] == 0) 
        {  count++;  }
    }
    int result[n];
    int index = 0;
    for(i = 0; i < n; i++) 
    {
        if(arr[i] != 0) 
        {  result[index++] = arr[i]; }
    }
    while(count--)
     {  result[index++] = 0;}
    printf("Array after moving zeros to the end: \n");
    for(i = 0; i < n; i++)
    { printf("%d ", result[i]); }
    return 0;
}