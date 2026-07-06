#include <stdio.h>
#include <string.h>

#define MAX 100

struct Contact {
    char name[50];
    char phone[15];
    char email[50];
};

struct Contact contacts[MAX];
int count = 0;

// Function to add contact
void addContact() {
    if (count >= MAX) {
        printf("\nContact list is full!\n");
        return;
    }

    printf("\nEnter Name: ");
    scanf(" %[^\n]", contacts[count].name);

    printf("Enter Phone Number: ");
    scanf("%s", contacts[count].phone);

    printf("Enter Email: ");
    scanf("%s", contacts[count].email);

    count++;
    printf("\nContact Added Successfully!\n");
}

// Function to display all contacts
void displayContacts() {
    if (count == 0) {
        printf("\nNo Contacts Available!\n");
        return;
    }

    printf("\n------ Contact List ------\n");
    for (int i = 0; i < count; i++) {
        printf("\nContact %d\n", i + 1);
        printf("Name : %s\n", contacts[i].name);
        printf("Phone: %s\n", contacts[i].phone);
        printf("Email: %s\n", contacts[i].email);
    }
}

// Function to search contact
void searchContact() {
    char search[50];
    int found = 0;

    printf("\nEnter Name to Search: ");
    scanf(" %[^\n]", search);

    for (int i = 0; i < count; i++) {
        if (strcmp(search, contacts[i].name) == 0) {
            printf("\nContact Found!\n");
            printf("Name : %s\n", contacts[i].name);
            printf("Phone: %s\n", contacts[i].phone);
            printf("Email: %s\n", contacts[i].email);
            found = 1;
            break;
        }
    }

    if (!found)
        printf("\nContact Not Found!\n");
}

// Function to delete contact
void deleteContact() {
    char name[50];
    int found = 0;

    printf("\nEnter Name to Delete: ");
    scanf(" %[^\n]", name);

    for (int i = 0; i < count; i++) {
        if (strcmp(name, contacts[i].name) == 0) {
            for (int j = i; j < count - 1; j++) {
                contacts[j] = contacts[j + 1];
            }
            count--;
            found = 1;
            printf("\nContact Deleted Successfully!\n");
            break;
        }
    }

    if (!found)
        printf("\nContact Not Found!\n");
}

int main() {
    int choice;

    do {
        printf("\n==============================");
        printf("\n CONTACT MANAGEMENT SYSTEM");
        printf("\n==============================");
        printf("\n1. Add Contact");
        printf("\n2. Display Contacts");
        printf("\n3. Search Contact");
        printf("\n4. Delete Contact");
        printf("\n5. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addContact();
                break;
            case 2:
                displayContacts();
                break;
            case 3:
                searchContact();
                break;
            case 4:
                deleteContact();
                break;
            case 5:
                printf("\nThank You!\n");
                break;
            default:
                printf("\nInvalid Choice!\n");
        }

    } while (choice != 5);

    return 0;
}