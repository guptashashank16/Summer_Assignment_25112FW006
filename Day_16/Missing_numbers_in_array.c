#include<stdio.h>
int main() 
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter the elements of the array (between 1 and %d): ", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Missing numbers in the array are: ");
    for(int i = 1; i <= n; i++) 
    {
        int found = 0;
        for(int j = 0; j < n; j++) {
            if(arr[j] == i) {
                found = 1;
                break;
            }
        }
        if(!found)
        {
            printf("%d ", i);
        }
    }
    
    return 0;
}