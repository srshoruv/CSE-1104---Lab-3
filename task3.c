#include <stdio.h>

int main(){
    int a;
    printf("Please enter a number: ");
    scanf("%d", &a);

    if (a%2==0) {
        printf("%d is an EVEN number.\n", a);
    } else {
        printf("%d is a ODD number.\n", a);
    }

    return 0;
}