#include <stdio.h>
#include <string.h>
struct Employee 
{
    int empId;
    char name[50];
    char department[30];
    float salary;
};

int main() 
{
    struct Employee emp[100];
    int n = 0;
    int choice, id, i, found;

    while (1)
    {
        printf("\n========== EMPLOYEE RECORD MANAGEMENT ==========\n");
        printf("1. Add Employee\n");
        printf("2. Display All Employees\n");
        printf("3. Search Employee\n");
        printf("4. Update Employee\n");
        printf("5. Delete Employee\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) 
        {

        case 1:
            printf("\nEnter Employee ID: ");
            scanf("%d", &emp[n].empId);

            printf("Enter Employee Name: ");
            scanf(" %[^\n]", emp[n].name);

            printf("Enter Department: ");
            scanf(" %[^\n]", emp[n].department);

            printf("Enter Salary: ");
            scanf("%f", &emp[n].salary);

            n++;
            printf("Employee Added Successfully!\n");
            break;

        case 2:
            if (n == 0) 
            {    printf("\nNo Employee Records Found!\n");  }
            else 
            {
                printf("\n------ Employee Records ------\n");
                for (i = 0; i < n; i++) {
                    printf("\nEmployee ID : %d\n", emp[i].empId);
                    printf("Name        : %s\n", emp[i].name);
                    printf("Department  : %s\n", emp[i].department);
                    printf("Salary      : %.2f\n", emp[i].salary);
                }
            }
            break;

        case 3:
            printf("\nEnter Employee ID to Search: ");
            scanf("%d", &id);

            found = 0;
            for (i = 0; i < n; i++) 
            {
                if (emp[i].empId == id) 
                {
                    printf("\nEmployee Found!\n");
                    printf("Employee ID : %d\n", emp[i].empId);
                    printf("Name        : %s\n", emp[i].name);
                    printf("Department  : %s\n", emp[i].department);
                    printf("Salary      : %.2f\n", emp[i].salary);
                    found = 1;
                    break;
                }
            }

            if (!found)
            printf("Employee Not Found!\n");
            break;

        case 4:
            printf("\nEnter Employee ID to Update: ");
            scanf("%d", &id);

            found = 0;
            for (i = 0; i < n; i++) 
            {
                if (emp[i].empId == id) 
                {
                    printf("Enter New Name: ");
                    scanf(" %[^\n]", emp[i].name);

                    printf("Enter New Department: ");
                    scanf(" %[^\n]", emp[i].department);

                    printf("Enter New Salary: ");
                    scanf("%f", &emp[i].salary);

                    printf("Employee Record Updated Successfully!\n");
                    found = 1;
                    break;
                }
            }
            if (!found)
            printf("Employee Not Found!\n");
            break;
        case 5:
            printf("\nEnter Employee ID to Delete: ");
            scanf("%d", &id);
            found = 0;
            for (i = 0; i < n; i++) 
            {
                if (emp[i].empId == id) 
                {
                    for (int j = i; j < n - 1; j++)
                    {    emp[j] = emp[j + 1];    }
                    n--;
                    printf("Employee Record Deleted Successfully!\n");
                    found = 1;
                    break;
                }
            }
            if (!found)        
            printf("Employee Not Found!\n");
            break;
        case 6:
            printf("\nExiting Program...\n");
            return 0;
        default:
            printf("\nInvalid Choice! Please Try Again.\n");
        }
    }

    return 0;
}