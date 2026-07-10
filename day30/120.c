#include <stdio.h>
#include <string.h>

#define MAX 100


struct Student {
    int roll;
    char name[50];
    float marks;
};

struct Student s[MAX];
int count = 0;


void addStudent();
void displayStudents();
void searchStudent();
void updateStudent();
void deleteStudent();

int main() {
    int choice;

    do {
        printf("\n===== STUDENT RECORD MANAGEMENT SYSTEM =====\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Update Student\n");
        printf("5. Delete Student\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                addStudent();
                break;

            case 2:
                displayStudents();
                break;

            case 3:
                searchStudent();
                break;

            case 4:
                updateStudent();
                break;

            case 5:
                deleteStudent();
                break;

            case 6:
                printf("Exiting program...\n");
                break;

            default:
                printf("Invalid choice!\n");
        }

    } while(choice != 6);

    return 0;
}

void addStudent() {
    printf("\nEnter Roll Number: ");
    scanf("%d", &s[count].roll);

    printf("Enter Name: ");
    scanf(" %[^\n]", s[count].name);

    printf("Enter Marks: ");
    scanf("%f", &s[count].marks);

    count++;

    printf("Student record added successfully.\n");
}

void displayStudents() {
    int i;

    if(count == 0) {
        printf("\nNo records found.\n");
        return;
    }

    printf("\n----- Student Records -----\n");

    for(i = 0; i < count; i++) {
        printf("\nRoll No : %d", s[i].roll);
        printf("\nName    : %s", s[i].name);
        printf("\nMarks   : %.2f\n", s[i].marks);
    }
}

void searchStudent() {
    int roll, i, found = 0;

    printf("\nEnter Roll Number to search: ");
    scanf("%d", &roll);

    for(i = 0; i < count; i++) {
        if(s[i].roll == roll) {
            printf("\nStudent Found");
            printf("\nRoll No : %d", s[i].roll);
            printf("\nName    : %s", s[i].name);
            printf("\nMarks   : %.2f\n", s[i].marks);
            found = 1;
            break;
        }
    }

    if(!found)
        printf("Student not found.\n");
}

void updateStudent() {
    int roll, i, found = 0;

    printf("\nEnter Roll Number to update: ");
    scanf("%d", &roll);

    for(i = 0; i < count; i++) {
        if(s[i].roll == roll) {
            printf("Enter New Name: ");
            scanf(" %[^\n]", s[i].name);

            printf("Enter New Marks: ");
            scanf("%f", &s[i].marks);

            printf("Record updated successfully.\n");
            found = 1;
            break;
        }
    }

    if(!found)
        printf("Student not found.\n");
}

void deleteStudent() {
    int roll, i, j, found = 0;

    printf("\nEnter Roll Number to delete: ");
    scanf("%d", &roll);

    for(i = 0; i < count; i++) {
        if(s[i].roll == roll) {
            for(j = i; j < count - 1; j++) {
                s[j] = s[j + 1];
            }

            count--;
            found = 1;
            printf("Record deleted successfully.\n");
            break;
        }
    }

    if(!found)
        printf("Student not found.\n");
}