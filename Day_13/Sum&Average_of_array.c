#include<stdio.h>
int main() 
{
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    int arr[n];
    int sum = 0;
    float average;
    
    printf("Enter %d elements: ", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i]; // Calculate sum while reading input
    }
    
    average = (float)sum / n; // Calculate average
    
    printf("Sum of the array is: %d\n", sum);
    printf("Average of the array is: %.2f\n", average);
    
    return 0;
}