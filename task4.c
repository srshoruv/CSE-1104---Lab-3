#include <stdio.h>

int main()
{
    printf("Positional Number output \n");
    printf("----------------------- \n");
    
    int num;

    printf("Enter the number: ");
    scanf("%d", &num);

    int i = 0;

    while (num) 
    {
        int lastDig = num % 10;
        printf("%dth position is %d \n", i, lastDig);
        i++;
        num = num / 10;
    }
    
}