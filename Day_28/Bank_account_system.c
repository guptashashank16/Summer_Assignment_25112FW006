#include <stdio.h>
#include <string.h>
struct BankAccount 
{
    int accountNo;
    char name[1000];
    float balance;
};
int main() 
{
    struct BankAccount acc[1000];
    int n = 0;
    int choice, accNo, i, found;
    float amount;

    while (1) 
    {
        printf("\n===== BANK ACCOUNT MANAGEMENT SYSTEM =====\n");
        printf("1. Create Account\n");
        printf("2. Display All Accounts\n");
        printf("3. Search Account\n");
        printf("4. Deposit Money\n");
        printf("5. Withdraw Money\n");
        printf("6. Delete Account\n");
        printf("7. Exit\n");
        printf("Enter Your Choice: ");
        scanf("%d", &choice);

        switch (choice) 
        {

        case 1:
            printf("\nEnter Account Number: ");
            scanf("%d", &acc[n].accountNo);

            printf("Enter Account Holder Name: ");
            scanf(" %[^\n]", acc[n].name);

            printf("Enter Initial Balance: ");
            scanf("%f", &acc[n].balance);

            n++;
            printf("Account Created Successfully!\n");
            break;

        case 2:
            if (n == 0) 
            { printf("\nNo Accounts Found!\n"); } 
            else 
            {
                printf("\n------ Account Details ------\n");
                for (i = 0; i < n; i++) 
                {
                    printf("\nAccount Number : %d\n", acc[i].accountNo);
                    printf("Account Holder : %s\n", acc[i].name);
                    printf("Balance        : %.2f\n", acc[i].balance);
                }
            }
            break;
        case 3:
            printf("\nEnter Account Number to Search: ");
            scanf("%d", &accNo);
            found = 0;
            for (i = 0; i < n; i++) 
            {
                if (acc[i].accountNo == accNo) 
                {
                    printf("\nAccount Found!\n");
                    printf("Account Number : %d\n", acc[i].accountNo);
                    printf("Account Holder : %s\n", acc[i].name);
                    printf("Balance        : %.2f\n", acc[i].balance);
                    found = 1;
                    break;
                }
            }
            if (!found)
            printf("Account Not Found!\n");
            break;

        case 4:
            printf("\nEnter Account Number: ");
            scanf("%d", &accNo);
            found = 0;
            for (i = 0; i < n; i++) 
            {
                if (acc[i].accountNo == accNo) 
                {
                    printf("Enter Amount to Deposit: ");
                    scanf("%f", &amount);

                    acc[i].balance += amount;
                    printf("Deposit Successful!\n");
                    printf("Updated Balance: %.2f\n", acc[i].balance);
                    found = 1;
                    break;
                }
            }
            if (!found)
            printf("Account Not Found!\n");
            break;

        case 5:
            printf("\nEnter Account Number: ");
            scanf("%d", &accNo);
            found = 0;
            for (i = 0; i < n; i++) 
            {
                if (acc[i].accountNo == accNo) 
                {
                    printf("Enter Amount to Withdraw: ");
                    scanf("%f", &amount);

                    if (amount <= acc[i].balance) 
                    {
                        acc[i].balance -= amount;
                        printf("Withdrawal Successful!\n");
                        printf("Remaining Balance: %.2f\n", acc[i].balance);
                    } 
                    else 
                    { printf("Insufficient Balance!\n");}
                    found = 1;
                    break;
                }
            }
            if (!found)
            printf("Account Not Found!\n");
            break;

        case 6:
            printf("\nEnter Account Number to Delete: ");
            scanf("%d", &accNo);
            found = 0;
            for (i = 0; i < n; i++) 
            {
                if (acc[i].accountNo == accNo) 
                {
                    for (int j = i; j < n - 1; j++) 
                    { acc[j] = acc[j + 1]; }
                    n--;
                    printf("Account Deleted Successfully!\n");
                    found = 1;
                    break;
                }
            }
            if (!found)
            printf("Account Not Found!\n");
            break;

        case 7:
            printf("\nThank You for Using the Banking System!\n");
            return 0;
            default:
            printf("\nInvalid Choice! Please Try Again.\n");
        }
    }
    return 0;
}