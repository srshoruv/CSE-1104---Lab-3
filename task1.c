#include <stdio.h>
int main()
{
    printf("Finding the number is POSITIVE, NEGATAIVE or ZERO \n");
    printf("-----------------------------------------------\n");
    int a;
    printf("Enter a number: ");
    if (!scanf("%d", &a)) {
        printf("Invalid input! \n");
        return 0;
    }
    if (a>0) 
    {
        printf("%d is a POSITIVE number.\n", a);
    } else if (a < 0) 
    {
        printf("%d is a NEGATIVE number.\n", a);
    } else
    {
        printf("Entered number is ZERO. \n");
    }

}