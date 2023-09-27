#include <stdio.h>

int main() {
    printf("Enter an integer\n");
    int num;
    scanf("%d", &num);
        switch(num%2) {
            case 1:
                printf("Odd");
                break;
            case 0:
                printf("Even");
                break;
            default:
                printf("Invalid character");
                break;
        }
    return 0;
}
