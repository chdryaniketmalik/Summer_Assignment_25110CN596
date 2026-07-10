#include <stdio.h>
#include <string.h>

struct Employee
{
    int id;
    char name[50];
    char department[50];
    float salary;
};

int main()
{
    struct Employee emp[100];
    int n = 0, choice, id, found, pos;

    do
    {
        printf("\n===== EMPLOYEE MANAGEMENT SYSTEM =====\n");
        printf("1. Add Employee\n");
        printf("2. Display Employees\n");
        printf("3. Search Employee\n");
        printf("4. Update Salary\n");
        printf("5. Delete Employee\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("\nEnter Employee ID: ");
                scanf("%d", &emp[n].id);

                printf("Enter Employee Name: ");
                scanf(" %[^\n]", emp[n].name);

                printf("Enter Department: ");
                scanf(" %[^\n]", emp[n].department);

                printf("Enter Salary: ");
                scanf("%f", &emp[n].salary);

                n++;
                printf("Employee added successfully.\n");
                break;

            case 2:
                if(n == 0)
                {
                    printf("\nNo employee records found.\n");
                }
                else
                {
                    printf("\n----- Employee Records -----\n");

                    for(int i = 0; i < n; i++)
                    {
                        printf("\nEmployee %d\n", i + 1);
                        printf("ID         : %d\n", emp[i].id);
                        printf("Name       : %s\n", emp[i].name);
                        printf("Department : %s\n", emp[i].department);
                        printf("Salary     : %.2f\n", emp[i].salary);
                    }
                }
                break;

            case 3:
                printf("\nEnter Employee ID to search: ");
                scanf("%d", &id);

                found = 0;

                for(int i = 0; i < n; i++)
                {
                    if(emp[i].id == id)
                    {
                        printf("\nEmployee Found!\n");
                        printf("ID         : %d\n", emp[i].id);
                        printf("Name       : %s\n", emp[i].name);
                        printf("Department : %s\n", emp[i].department);
                        printf("Salary     : %.2f\n", emp[i].salary);

                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                    printf("Employee not found.\n");

                break;

            case 4:
                printf("\nEnter Employee ID to update salary: ");
                scanf("%d", &id);

                found = 0;

                for(int i = 0; i < n; i++)
                {
                    if(emp[i].id == id)
                    {
                        printf("Enter New Salary: ");
                        scanf("%f", &emp[i].salary);

                        printf("Salary updated successfully.\n");
                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                    printf("Employee not found.\n");

                break;

            case 5:
                printf("\nEnter Employee ID to delete: ");
                scanf("%d", &id);

                found = 0;

                for(int i = 0; i < n; i++)
                {
                    if(emp[i].id == id)
                    {
                        pos = i;
                        found = 1;
                        break;
                    }
                }

                if(found)
                {
                    for(int i = pos; i < n - 1; i++)
                    {
                        emp[i] = emp[i + 1];
                    }

                    n--;
                    printf("Employee record deleted successfully.\n");
                }
                else
                {
                    printf("Employee not found.\n");
                }

                break;

            case 6:
                printf("Exiting program...\n");
                break;

            default:
                printf("Invalid choice! Please try again.\n");
        }

    } while(choice != 6);

    return 0;
}