#include<stdio.h>
int main()
{    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter the elements of the array: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Array after removing duplicates: ");
    for(int i = 0; i < n; i++) 
    {
        int is_duplicate = 0;
        for(int j = 0; j < i; j++) 
        {
            if(arr[i] == arr[j]) 
            {
                is_duplicate = 1;
                break;
            }
        }
        if(!is_duplicate) 
        {
            printf("%d ", arr[i]);
        }
    }
    
    return 0;
}

