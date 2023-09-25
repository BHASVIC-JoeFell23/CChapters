#include <stdio.h>

int main() {
    printf("Enter an integer\n");
    int num;
    scanf("%d", &num);
    switch(num/2)
        case 1:
            printf("Even");
        case 0:
            printf("Odd");
    return 0;
}
