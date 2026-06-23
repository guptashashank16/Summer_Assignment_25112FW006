#include <stdio.h>
#include <string.h>
struct Employee 
{
    int empId;
    char name[50];
    float basicSalary;
    float hra;
    float da;
    float deduction;
    float netSalary;
};
int main() 
{
    struct Employee emp[100];
    int n = 0;
    int choice, id, i, found;
    while (1) 
    {
        printf("\n===== SALARY MANAGEMENT SYSTEM =====\n");
        printf("1. Add Employee Salary Record\n");
        printf("2. Display All Records\n");
        printf("3. Search Employee\n");
        printf("4. Update Salary Record\n");
        printf("5. Delete Record\n");
        printf("6. Exit\n");
        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch (choice) {

        case 1:
            printf("\nEnter Employee ID: ");
            scanf("%d", &emp[n].empId);

            printf("Enter Employee Name: ");
            scanf(" %[^\n]", emp[n].name);

            printf("Enter Basic Salary: ");
            scanf("%f", &emp[n].basicSalary);

            printf("Enter HRA: ");
            scanf("%f", &emp[n].hra);

            printf("Enter DA: ");
            scanf("%f", &emp[n].da);

            printf("Enter Deduction: ");
            scanf("%f", &emp[n].deduction);

            emp[n].netSalary =
                emp[n].basicSalary +
                emp[n].hra +
                emp[n].da -
                emp[n].deduction;

            n++;

            printf("Salary Record Added Successfully!\n");
            break;

        case 2:
            if (n == 0) {
                printf("\nNo Records Available!\n");
            } else {
                printf("\n------ Salary Records ------\n");

                for (i = 0; i < n; i++) {
                    printf("\nEmployee ID : %d\n", emp[i].empId);
                    printf("Name        : %s\n", emp[i].name);
                    printf("Basic Salary: %.2f\n", emp[i].basicSalary);
                    printf("HRA         : %.2f\n", emp[i].hra);
                    printf("DA          : %.2f\n", emp[i].da);
                    printf("Deduction   : %.2f\n", emp[i].deduction);
                    printf("Net Salary  : %.2f\n", emp[i].netSalary);
                }
            }
            break;

        case 3:
            printf("\nEnter Employee ID to Search: ");
            scanf("%d", &id);

            found = 0;

            for (i = 0; i < n; i++) {
                if (emp[i].empId == id) {
                    printf("\nEmployee Found!\n");
                    printf("Employee ID : %d\n", emp[i].empId);
                    printf("Name        : %s\n", emp[i].name);
                    printf("Net Salary  : %.2f\n", emp[i].netSalary);
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

            for (i = 0; i < n; i++) {
                if (emp[i].empId == id) {

                    printf("Enter New Basic Salary: ");
                    scanf("%f", &emp[i].basicSalary);

                    printf("Enter New HRA: ");
                    scanf("%f", &emp[i].hra);

                    printf("Enter New DA: ");
                    scanf("%f", &emp[i].da);

                    printf("Enter New Deduction: ");
                    scanf("%f", &emp[i].deduction);

                    emp[i].netSalary =
                        emp[i].basicSalary +
                        emp[i].hra +
                        emp[i].da -
                        emp[i].deduction;
                    printf("Salary Updated Successfully!\n");
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
            for (i = 0; i < n; i++) {
                if (emp[i].empId == id) 
                {
                    for (int j = i; j < n - 1; j++) 
                    {   emp[j] = emp[j + 1];    }
                    n--;
                    found = 1;
                    printf("Record Deleted Successfully!\n");
                    break;
                }
            }
            if (!found)
                printf("Employee Not Found!\n");
            break;
        case 6:
            printf("\nThank You! Exiting Program...\n");
            return 0;
        default:
            printf("\nInvalid Choice! Try Again.\n");
        }
    }
    return 0;
}