#include <stdio.h>

int main()
{
    printf("Finding the MAXIMUM among Three Numbers.\n");
    printf("-----------------------------------------------\n");
    int x,y,z;
    printf("Enter three numbers: ");

    if(!scanf("%d %d %d", &x, &y, &z))
    {
        printf("Invalid Input! \n");
        return 0;
    }

    if ( x > y && x > z) 
    {
        printf("%d is the MAXIMUM \n",x);
    } 
    else if ( y > x && y > z)
    {
        printf("%d is the MAXIMUM \n",y);
    }
    else 
    {
        printf("%d is the MAXIMUM \n",z);
    }

    return 0;
}