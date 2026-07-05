#include<stdio.h>
struct student
{
    int roll;
    char name[20];
    float marks;
};
int main(){
    struct student s[100];
    int n,i;
    printf("-----student record-----\n");
    printf("Enter the number of students: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter details of student %d:\n",i+1);
        printf("Enter roll number: ");
        scanf("%d",&s[i].roll);
        printf("Enter name: ");
        scanf("%s",s[i].name);
        printf("Enter marks: ");
        scanf("%f",&s[i].marks);
    }
    printf("-----Student Records-----\n");
    printf("Roll Number\tName\t\tMarks\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t\t%s\t\t%.2f\n",s[i].roll,s[i].name,s[i].marks);
    }
    return 0;
}