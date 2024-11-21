#include <stdio.h>
int main()
{
    printf("Finding ODD or EVEN\n");
    printf("--------------------\n");
    int x;
    printf("Please enter a number: ");

    if(!scanf("%d", &x))
    {
        printf("Invalid Input! \n");
        return 0;
    }

    if (x % 2 == 0) 
    {
        printf("%d is an EVEN number.\n", x);
    } 
    else 
    {
        printf("%d is a ODD number.\n", x);
    }

    return 0;
}