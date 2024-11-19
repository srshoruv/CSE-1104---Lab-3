#include <stdio.h>

int isDigit(char ch) {
    return (ch >= '0' && ch <= '9');
}


int main()
{
    printf("Finding ODD or EVEN\n");
    printf("--------------------\n");
    char ch;
    printf("Please enter a number: ");
    scanf("%c", &ch);

    if (isDigit(ch) && ch%2==0) 
    {
        printf("%c is an EVEN number.\n", ch);
    } else if (isDigit(ch) && ch%2==1) 
    {
        printf("%c is a ODD number.\n", ch);
    } else 
    {
        printf("Invalid Input!\n");
    }

    return 0;
}