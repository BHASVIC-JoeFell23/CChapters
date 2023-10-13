#include <stdio.h>

int main() {
    int fullnumber = 0;
    printf("Please enter a 3 digit number\n");
    scanf(" %d",fullnumber);
    int digit1 = fullnumber/100;
    int digit2 = fullnumber/10 - digit1*100;
    int digit3 = fullnumber - digit1*100  - digit2*10;
    printf("uhuh %d,%d,%d",digit1,digit2,digit3);
    return 0;
}
