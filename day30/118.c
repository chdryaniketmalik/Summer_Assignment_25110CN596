#include <stdio.h>
#include <string.h>

struct Book
{
    int id;
    char title[50];
    char author[50];
    int issued;   // 0 = Available, 1 = Issued
};

int main()
{
    struct Book b[100];
    int n = 0, choice, searchId, found;

    do
    {
        printf("\n===== MINI LIBRARY SYSTEM =====\n");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Search Book\n");
        printf("4. Issue Book\n");
        printf("5. Return Book\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("\nEnter Book ID: ");
                scanf("%d", &b[n].id);

                printf("Enter Book Title: ");
                scanf(" %[^\n]", b[n].title);

                printf("Enter Author Name: ");
                scanf(" %[^\n]", b[n].author);

                b[n].issued = 0;
                n++;

                printf("Book added successfully.\n");
                break;

            case 2:
                if(n == 0)
                {
                    printf("\nNo books available.\n");
                }
                else
                {
                    printf("\n----- Book List -----\n");

                    for(int i = 0; i < n; i++)
                    {
                        printf("\nBook %d\n", i + 1);
                        printf("Book ID : %d\n", b[i].id);
                        printf("Title   : %s\n", b[i].title);
                        printf("Author  : %s\n", b[i].author);

                        if(b[i].issued == 0)
                            printf("Status  : Available\n");
                        else
                            printf("Status  : Issued\n");
                    }
                }
                break;

            case 3:
                printf("\nEnter Book ID to search: ");
                scanf("%d", &searchId);

                found = 0;

                for(int i = 0; i < n; i++)
                {
                    if(b[i].id == searchId)
                    {
                        printf("\nBook Found!\n");
                        printf("Book ID : %d\n", b[i].id);
                        printf("Title   : %s\n", b[i].title);
                        printf("Author  : %s\n", b[i].author);

                        if(b[i].issued == 0)
                            printf("Status  : Available\n");
                        else
                            printf("Status  : Issued\n");

                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                    printf("Book not found.\n");

                break;

            case 4:
                printf("\nEnter Book ID to issue: ");
                scanf("%d", &searchId);

                found = 0;

                for(int i = 0; i < n; i++)
                {
                    if(b[i].id == searchId)
                    {
                        found = 1;

                        if(b[i].issued == 0)
                        {
                            b[i].issued = 1;
                            printf("Book issued successfully.\n");
                        }
                        else
                        {
                            printf("Book is already issued.\n");
                        }
                        break;
                    }
                }

                if(found == 0)
                    printf("Book not found.\n");

                break;

            case 5:
                printf("\nEnter Book ID to return: ");
                scanf("%d", &searchId);

                found = 0;

                for(int i = 0; i < n; i++)
                {
                    if(b[i].id == searchId)
                    {
                        found = 1;

                        if(b[i].issued == 1)
                        {
                            b[i].issued = 0;
                            printf("Book returned successfully.\n");
                        }
                        else
                        {
                            printf("Book is already available.\n");
                        }
                        break;
                    }
                }

                if(found == 0)
                    printf("Book not found.\n");

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