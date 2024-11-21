#include <stdio.h>

int main()
{
    printf("Checking Leap Year or Not. \n");
    printf("--------------------\n");

    int x;
    printf("Enter a year to check: ");

    if (!scanf("%d", &x)) 
    {
        printf("Invalid Input! \n");
        return 0;
    }

    if (x % 4 == 0)
    {
        if ( x % 100 == 0)
        {
            printf("%d is NOT a Leap Year \n", x);
            return 0;
        }

        printf("%d is a LEAP YEAR \n", x);
    }
    else if (x % 100 == 0) 
    {
        if (x % 400 == 0)
        {
           printf("%d is a LEAP YEAR \n", x); 
           return 0;
        }

        printf("%d is NOT a Leap Year \n", x);
    }
    else 
    {
        printf("%d is NOT a Leap Year \n", x);
    }

    return 0;
}