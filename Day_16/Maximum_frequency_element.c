#include<stdio.h>
int main() 
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter the elements of the array: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int max_freq = 0;
    int max_elem = arr[0]; 
    for(int i = 0; i < n; i++)
    {
        int freq = 0;
        for(int j = 0; j < n; j++) 
        {
            if(arr[j] == arr[i])
            { freq++; }
        }
        if(freq > max_freq) {
            max_freq = freq;
            max_elem = arr[i];
        }
    }
    printf("Element with maximum frequency is: %d\n", max_elem);
    printf("Maximum frequency is: %d\n", max_freq);
    return 0;
}