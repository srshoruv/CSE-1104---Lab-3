// Check number is divisible by 5 and 11 or not.

#include <stdio.h>

int main() 
{
    printf("Check number is divisible by 5 and 11 or not. \n");
    printf("-----------------------------------------------\n");
    int x;
    printf("Enter a NUMBER to check: ");

    if (!scanf("%d", &x)) 
    {
    printf("Invalid Input! \n");
    return 0;
    }

    if (x % 5 == 0 && x % 11 == 0) 
    { 
    printf("%d is DiVISIBLE by 5 & 11 \n", x);
    } 
    else  
    {
    printf("%d is NOT DiVISIBLE by 5 & 11 \n", x);
    }

    return 0;

}
