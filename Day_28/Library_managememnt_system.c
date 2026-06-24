#include <stdio.h>
#include <string.h>
struct Book 
{
    int bookId;
    char title[50];
    char author[50];
    int quantity;
};
int main() 
{
    struct Book book[100];
    int n = 0;
    int choice, id, i, found;
    while (1) 
    {
        printf("\n===== LIBRARY MANAGEMENT SYSTEM =====\n");
        printf("1. Add Book\n");
        printf("2. Display All Books\n");
        printf("3. Search Book\n");
        printf("4. Issue Book\n");
        printf("5. Return Book\n");
        printf("6. Delete Book\n");
        printf("7. Exit\n");
        printf("Enter Your Choice: ");
        scanf("%d", &choice);

        switch (choice) 
    {
        case 1:
            printf("\nEnter Book ID: ");
            scanf("%d", &book[n].bookId);

            printf("Enter Book Title: ");
            scanf(" %[^\n]", book[n].title);

            printf("Enter Author Name: ");
            scanf(" %[^\n]", book[n].author);

            printf("Enter Quantity: ");
            scanf("%d", &book[n].quantity);

            n++;
            printf("Book Added Successfully!\n");
            break;

        case 2:
            if (n == 0) 
                { printf("\nNo Books Available!\n");}
             else
             {
                printf("\n------ Book Records ------\n");
                for (i = 0; i < n; i++) 
                {
                    printf("\nBook ID   : %d\n", book[i].bookId);
                    printf("Title     : %s\n", book[i].title);
                    printf("Author    : %s\n", book[i].author);
                    printf("Quantity  : %d\n", book[i].quantity);
                }
            }
            break;

        case 3:
            printf("\nEnter Book ID to Search: ");
            scanf("%d", &id);
            found = 0;
            for (i = 0; i < n; i++) 
            {
                if (book[i].bookId == id) 
                {
                    printf("\nBook Found!\n");
                    printf("Book ID   : %d\n", book[i].bookId);
                    printf("Title     : %s\n", book[i].title);
                    printf("Author    : %s\n", book[i].author);
                    printf("Quantity  : %d\n", book[i].quantity);
                    found = 1;
                    break;
                }
            }
            if (!found)
            printf("Book Not Found!\n");
            break;

        case 4:
            printf("\nEnter Book ID to Issue: ");
            scanf("%d", &id);
            found = 0;
            for (i = 0; i < n; i++) 
            {
                if (book[i].bookId == id) 
                {
                    if (book[i].quantity > 0) 
                    {
                        book[i].quantity--;
                        printf("Book Issued Successfully!\n");
                    }
                     else 
                    { printf("Book Not Available!\n");    }
                    found = 1;
                    break;
                }
            }
            if (!found)
            printf("Book Not Found!\n");
            break;

        case 5:
            printf("\nEnter Book ID to Return: ");
            scanf("%d", &id);
            found = 0;
            for (i = 0; i < n; i++) 
            {
                if (book[i].bookId == id) 
                {
                    book[i].quantity++;
                    printf("Book Returned Successfully!\n");
                    found = 1;
                    break;
                }
            }
            if (!found)
            printf("Book Not Found!\n");
            break;

        case 6:
            printf("\nEnter Book ID to Delete: ");
            scanf("%d", &id);
            found = 0;
            for (i = 0; i < n; i++) 
            {
                if (book[i].bookId == id) 
                {
                    for (int j = i; j < n - 1; j++) 
                    { book[j] = book[j + 1]; }
                    n--;
                    printf("Book Deleted Successfully!\n");
                    found = 1;
                    break;
                }
            }
            if (!found)
            printf("Book Not Found!\n");
            break;

        case 7:
            printf("\nThank You! Exiting Program...\n");
            return 0;
        default:
            printf("\nInvalid Choice! Please Try Again.\n");
        }
    }

    return 0;
}