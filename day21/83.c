#include <stdio.h>

int main()
{
    char a[100];
    int i, vowels = 0, consonant = 0, digit = 0, space = 0;

    printf("Enter the string: ");
    fgets(a, sizeof(a), stdin);

    for(i = 0; a[i] != '\0'; i++)
    {
        if(a[i] == 'a' || a[i] == 'e' || a[i] == 'i' ||
           a[i] == 'o' || a[i] == 'u' ||
           a[i] == 'A' || a[i] == 'E' || a[i] == 'I' ||
           a[i] == 'O' || a[i] == 'U')
        {
            vowels++;
        }
        else if((a[i] >= 'a' && a[i] <= 'z') ||
                (a[i] >= 'A' && a[i] <= 'Z'))
        {
            consonant++;
        }
        else if(a[i] >= '0' && a[i] <= '9')
        {
            digit++;
        }
        else if(a[i] == ' ')
        {
            space++;
        }
    }
    printf("Vowels = %d\n", vowels);
    printf("Consonants = %d\n", consonant);
    printf("Digits = %d\n", digit);
    printf("Spaces = %d\n", space);

    return 0;
}


    