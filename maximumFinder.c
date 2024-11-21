#include <stdio.h>

int main ()
{
    printf("Finding the maximum between two number: \n");
    printf("-----------------------------------------------\n");
    int x,y;
    printf("Enter two number to compare: ");

    if (!scanf("%d %d", &x, &y)) 
    {
        printf("Invalid Input \n");
        return 0;
    }

    if (x > y) 
    {
        printf("%d is the MAXIMUM \n", x);
    }
    else
    {
       printf("%d is the MAXIMUM \n", y); 
    }

    return 0;

    
}