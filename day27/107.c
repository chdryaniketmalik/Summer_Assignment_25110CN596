#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    float basic, hra, da, pf, gross, net;
};

int main() {
    int n, i;

    printf("----- Salary Management System -----\n");
    printf("Enter number of employees: ");
    scanf("%d", &n);

    struct Employee emp[n];

    for(i = 0; i < n; i++) {
        printf("\nEnter details of Employee %d\n", i + 1);

        printf("Employee ID: ");
        scanf("%d", &emp[i].id);

        printf("Employee Name: ");
        scanf(" %[^\n]", emp[i].name);

        printf("Basic Salary: ");
        scanf("%f", &emp[i].basic);

        // Salary Calculation
        emp[i].hra = emp[i].basic * 0.20;   // 20% HRA
        emp[i].da  = emp[i].basic * 0.10;   // 10% DA
        emp[i].pf  = emp[i].basic * 0.08;   // 8% PF

        emp[i].gross = emp[i].basic + emp[i].hra + emp[i].da;
        emp[i].net = emp[i].gross - emp[i].pf;
    }

    printf("\n-------Employee Salary Report -------\n");
printf("ID\tName\t\tBasic\t\tHRA\t\tDA\t\tPF\t\tGross\t\tNet\n");
    for(i = 0; i < n; i++) {
        printf("%d\t%s\t\t%.2f\t%.2f\t%.2f\t\t%.2f\t\t%.2f\t%.2f\n", emp[i].id, emp[i].name, emp[i].basic, emp[i].hra, emp[i].da, emp[i].pf, emp[i].gross, emp[i].net);
    }
        
    return 0;
}