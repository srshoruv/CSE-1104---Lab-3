#include <stdio.h>

int main(){
    int a;
    printf("Please enter a number: ");
    scanf("%d", &a);

    if (a>0) {
        printf("%d is a POSITIVE number.\n", a);
    } else if (a < 0) {
        printf("%d is a NEGATIVE number.\n", a);
    } else if (a==0) {
        printf("Entered number is ZERO. \n");
    } else {
        printf("Invalid Number!\n");
    }

    return 0;
}