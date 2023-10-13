#include <stdio.h>

int main() {
    int number = 0;
    printf("Please enter a 3 digit number\n");
    scanf("%d",&number);
    if(99<number && number<1000){
        int digit1 = number/100;
        int digit2 = number/10 - digit1*10;
        int digit3 = number - digit1*100  - digit2*10;
        if(digit1*digit1*digit1+digit2*digit2*digit2+digit3*digit3*digit3==number) {
            printf("Your number is an Armstrong number");
            return 0;
        }else{
            printf("Your number is not an Armostrong number");
        }
    }else{
        printf("Input must have 3 digits");
    }
    return 0;
}
