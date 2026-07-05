#include<stdio.h>
struct employee
{
    int id;
    char name[50];
    char designation[50];
    float salary;
};
int main(){
    struct employee e[100];
    int n,i;
    printf("-----Employee Record-----\n");
    printf("Enter the number of employees: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter details of employee %d:\n",i+1);
        printf("Enter ID: ");
        scanf("%d",&e[i].id);
        printf("Enter name: ");
        scanf("%s",e[i].name);
        printf("Enter designation: ");
        scanf("%s",e[i].designation);
        printf("Enter salary: ");
        scanf("%f",&e[i].salary);
    }
    printf("-----Employee Records-----\n");
    printf("ID\tName\t\tDesignation\tSalary\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t%s\t\t%s\t\t%.2f\n",e[i].id,e[i].name,e[i].designation,e[i].salary);
    }
    return 0;
}