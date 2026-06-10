#include <stdio.h>
#include <limits.h>
int main()
{
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    if(n < 2)
    {
        printf("At least 2 elements are required.\n");
        return 0;
    }
    int arr[n];
    printf("Enter %d elements: ", n);
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int largest = arr[0];
    int second_largest = INT_MIN;
    for(int i = 1; i < n; i++)
    {
        if(arr[i] > largest)
        {
            second_largest = largest;
            largest = arr[i];
        }
        else if(arr[i] > second_largest && arr[i] != largest)
        {
            second_largest = arr[i];
        }
    }
    if(second_largest == INT_MIN)
    {
        printf("No second largest element exists.\n");
    }
    else
    {
        printf("Second largest element is %d\n", second_largest);
    }
    return 0;
}