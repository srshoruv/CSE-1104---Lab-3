#include <stdio.h>

int main()
{
    printf("Checking vowel or consonant\n");
    printf("--------------------\n");

    char ch;
    printf("Enter a character to check: ");

    if (!scanf("%c", &ch)) {
        printf("Invalid Input \n");
        return 0;
    }

    switch (ch)
    {
        case 'a':
        printf("%c is a VOWEL \n", ch);
        break;

        case 'e':
        printf("%c is a VOWEL \n", ch);
        break;

        case 'i':
        printf("%c is a VOWEL \n", ch);
        break;

        case 'o':
        printf("%c is a VOWEL \n", ch);
        break;

        case 'u':
        printf("%c is a VOWEL \n", ch);
        break;

        default:
        printf("%c is a CONSONANT \n", ch);
    }

    return 0;
}