#include<stdio.h>
int main()
{
    int arr[100];
    int n = 0;
    int choice, i;
    int sum, largest, search, found;
    do
    {
        printf("\n----- ARRAY OPERATIONS -----\n");
        printf("1. Insert Elements\n");
        printf("2. Display Elements\n");
        printf("3. Find Sum\n");
        printf("4. Find Largest Element\n");
        printf("5. Search Element\n");
        printf("6. Exit\n");
        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("How many elements? ");
                scanf("%d", &n);
                for(i = 0; i < n; i++)
                {
                    printf("Enter element %d: ", i + 1);
                    scanf("%d", &arr[i]);
                }
                break;

            case 2:
                printf("Array Elements: ");
                for(i = 0; i < n; i++)
                {  printf("%d ", arr[i]);    }
                printf("\n");
                break;

            case 3:
                sum = 0;
                for(i = 0; i < n; i++)
                { sum = sum + arr[i];    }
                printf("Sum = %d\n", sum);
                break;

            case 4:
                largest = arr[0];
                for(i = 1; i < n; i++)
                {
                    if(arr[i] > largest)
                    { largest = arr[i];   }
                }
                printf("Largest Element = %d\n", largest);
                break;

            case 5:
                printf("Enter element to search: ");
                scanf("%d", &search);
                found = 0;
                for(i = 0; i < n; i++)
                {
                    if(arr[i] == search)
                    {
                        printf("Element found at position %d\n", i + 1);
                        found = 1;
                        break;
                    }
                }
                if(found == 0)
                {  printf("Element not found\n"); }
                break;

            case 6:
                printf("Program Ended\n");
                break;
            default:
                printf("Invalid Choice\n");
        }
    } while(choice != 6);
    return 0;
}