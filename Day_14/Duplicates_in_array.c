#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements: ", n);
    for(int i = 0; i < n; i++)
    scanf("%d", &arr[i]);
    printf("Duplicate elements are: ");
    for(int i = 0; i < n; i++)
    {
        int flag = 0;
        for(int k = 0; k < i; k++)
        {
            if(arr[i] == arr[k])
            {
                flag = 1;
                break;
            }
        }
        if(flag)
            continue;
        for(int j = i + 1; j < n; j++)
        {
            if(arr[i] == arr[j])
            {
                printf("%d ", arr[i]);
                break;
            }
        }
    }
    return 0;
}