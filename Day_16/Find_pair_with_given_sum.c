#include<stdio.h>
int main() 
{
    int n, sum;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter the elements of the array: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter the sum to find pairs: ");
    scanf("%d", &sum);
    
    printf("Pairs with given sum %d are:\n", sum);
    for(int i = 0; i < n; i++) 
    {
        for(int j = i + 1; j < n; j++) 
        {
            if(arr[i] + arr[j] == sum) 
            {
                printf("(%d, %d)\n", arr[i], arr[j]);
            }
        }
    }
    
    return 0;
}