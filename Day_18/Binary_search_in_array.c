#include<stdio.h>
int main()
{
    int n,i,low,high,mid,key;

    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements of the array (sorted): ");
    for(i=0;i<n;i++)
    {scanf("%d",&a[i]);}

    printf("Enter the element to search: ");
    scanf("%d",&key);

    low=0;
    high=n-1;
    mid=(low+high)/2;

    while(low<=high)
    {
        if(a[mid]==key)
        {
            printf("Element found at index %d",mid);
            return 0;
        }
        
        else if(a[mid]<key)
        { low=mid+1;      }

        else
        { high=mid-1;   }

        mid=(low+high)/2;
    }
    printf("Element not found in the array.");
    return 0;
}