#include <stdio.h>

int main()
{
    printf("Positional Number output \n");
    printf("----------------------- \n");
    
    int num;

    printf("Enter the number: ");

    if(!scanf("%d", &num))
    {
        printf("Invalid Input \n");
        return 0;
    }

    int i = 0;

    while (num) 
    {
        int lastDig = num % 10;
        printf("%dth positional number is %d \n", i, lastDig);
        i++;
        num = num / 10;
    }

    return 0;
    
}