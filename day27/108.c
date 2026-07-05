#include <stdio.h>

int main() {
    int roll;
    char name[50];
    int m1, m2, m3, m4, m5, total;
    float percentage;

    printf("----- Marksheet Generation System -----\n");

    printf("Enter Roll Number: ");
    scanf("%d", &roll);

    printf("Enter Student Name: ");
    scanf(" %s", name);

    printf("Enter marks in 5 subjects:\n");
    printf("Subject 1: ");
    scanf("%d", &m1);
    printf("Subject 2: ");
    scanf("%d", &m2);
    printf("Subject 3: ");
    scanf("%d", &m3);
    printf("Subject 4: ");
    scanf("%d", &m4);
    printf("Subject 5: ");
    scanf("%d", &m5);

    total = m1 + m2 + m3 + m4 + m5;
    percentage = total / 5.0;

    printf("\n========== MARKSHEET ==========\n");
    printf("Roll Number : %d\n", roll);
    printf("Name        : %s\n", name);
    for(int i = 1; i <= 5; i++) {
        printf("Subject %d Marks: %d\n", i, (i == 1 ? m1 : (i == 2 ? m2 : (i == 3 ? m3 : (i == 4 ? m4 : m5)))));
    }
    printf("Total Marks : %d/500\n", total);
    printf("Percentage  : %.2f%%\n", percentage);

    if (percentage >= 90)
        printf("Grade: A+\n");
    else if (percentage >= 80)
        printf("Grade: A\n");
    else if (percentage >= 70)
        printf("Grade: B\n");
    else if (percentage >= 60)
        printf("Grade: C\n");
    else if (percentage >= 50)
        printf("Grade: D\n");
    else
        printf("Grade: F (Fail)\n");

    return 0;
}