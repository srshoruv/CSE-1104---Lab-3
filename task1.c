#include <stdio.h>

int main(){
    printf("Finding the maximum\n");
    printf("--------------------\n");
    int a, b;
    printf("Please enter first number: ");
    scanf("%d", &a);
    printf("Please enter second number: ");
    scanf("%d", &b);

    if (a>b) {
        printf("%d is the maximum\n", a);
    } else {
        printf("%d is the maximum\n", b);
    }

    return 0;
}