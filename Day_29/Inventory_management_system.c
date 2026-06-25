#include <stdio.h>
struct Product
{
    int id;
    char name[50];
    float price;
    int quantity;
};
int main()
{
    struct Product p[100];
    int n = 0;
    int choice, i, id, found;
    while (1)
    {
        printf("\n===== INVENTORY MANAGEMENT SYSTEM =====\n");
        printf("1. Add Product\n");
        printf("2. Display Products\n");
        printf("3. Search Product\n");
        printf("4. Update Quantity\n");
        printf("5. Delete Product\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("\nEnter Product ID: ");
                scanf("%d", &p[n].id);

                printf("Enter Product Name: ");
                scanf("%s", p[n].name);

                printf("Enter Price: ");
                scanf("%f", &p[n].price);

                printf("Enter Quantity: ");
                scanf("%d", &p[n].quantity);

                n++;
                printf("Product Added Successfully!\n");
                break;

            case 2:
                if (n == 0)
                {   printf("No Products Available!\n");  }
                else
                {
                    printf("\nID\tName\tPrice\tQuantity\n");
                    printf("------------------------------------\n");
                    for (i = 0; i < n; i++)
                    {
                        printf("%d\t%s\t%.2f\t%d\n",
                               p[i].id,
                               p[i].name,
                               p[i].price,
                               p[i].quantity);
                    }
                }
                break;

            case 3:
                printf("Enter Product ID to Search: ");
                scanf("%d", &id);
                found = 0;
                for (i = 0; i < n; i++)
                {
                    if (p[i].id == id)
                    {
                        printf("\nProduct Found!\n");
                        printf("ID: %d\n", p[i].id);
                        printf("Name: %s\n", p[i].name);
                        printf("Price: %.2f\n", p[i].price);
                        printf("Quantity: %d\n", p[i].quantity);
                        found = 1;
                        break;
                    }
                }
                if (!found)
                { printf("Product Not Found!\n"); }
                break;

            case 4:
                printf("Enter Product ID to Update: ");
                scanf("%d", &id);
                found = 0;
                for (i = 0; i < n; i++)
                {
                    if (p[i].id == id)
                    {
                        printf("Enter New Quantity: ");
                        scanf("%d", &p[i].quantity);

                        printf("Quantity Updated Successfully!\n");
                        found = 1;
                        break;
                    }
                }
                if (!found)
                {   printf("Product Not Found!\n");  }
                break;

            case 5:
                printf("Enter Product ID to Delete: ");
                scanf("%d", &id);
                found = 0;
                for (i = 0; i < n; i++)
                {
                    if (p[i].id == id)
                    {
                        int j;
                        for (j = i; j < n - 1; j++)
                        {  p[j] = p[j + 1]; }
                        n--;
                        found = 1;
                        printf("Product Deleted Successfully!\n");
                        break;
                    }
                }
                if (!found)
                {  printf("Product Not Found!\n"); }
                break;

            case 6:
                printf("Exiting Program...\n");
                return 0;
            default:
                printf("Invalid Choice!\n");
        }
    }
    return 0;
}