#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], temp[100];
    int choice;

    do {
        printf("\n===== STRING OPERATION MENU =====\n");
        printf("1. Input String\n");
        printf("2. Display String\n");
        printf("3. Find Length\n");
        printf("4. Copy String\n");
        printf("5. Concatenate Strings\n");
        printf("6. Compare Strings\n");
        printf("7. Reverse String\n");
        printf("8. Check Palindrome\n");
        printf("9. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        getchar();   // Clear newline character

        switch (choice) {

        case 1:
            printf("Enter first string: ");
            gets(str1);

            printf("Enter second string: ");
            gets(str2);
            break;

        case 2:
            printf("\nFirst String : %s\n", str1);
            printf("Second String: %s\n", str2);
            break;

        case 3:
            printf("Length of first string = %lu\n", strlen(str1));
            printf("Length of second string = %lu\n", strlen(str2));
            break;

        case 4:
            strcpy(temp, str1);
            printf("Copied String: %s\n", temp);
            break;

        case 5:
            strcpy(temp, str1);
            strcat(temp, str2);
            printf("Concatenated String: %s\n", temp);
            break;

        case 6:
            if (strcmp(str1, str2) == 0)
                printf("Both strings are equal.\n");
            else
                printf("Both strings are not equal.\n");
            break;

        case 7:
            strcpy(temp, str1);
            strrev(temp);
            printf("Reversed String: %s\n", temp);
            break;

        case 8:
            strcpy(temp, str1);
            strrev(temp);

            if (strcmp(str1, temp) == 0)
                printf("'%s' is a Palindrome.\n", str1);
            else
                printf("'%s' is Not a Palindrome.\n", str1);
            break;

        case 9:
            printf("Exiting Program...\n");
            break;

        default:
            printf("Invalid Choice!\n");
        }

    } while (choice != 9);

    return 0;
}