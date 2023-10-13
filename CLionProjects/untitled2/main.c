#include <stdio.h>
#include <stdlib.h>

int main() {
    int guess = 0;
    int attempts = 0;
    srand(time(NULL));
    int number = rand() % 101;
    printf("%d\t",number);
    while(attempts<5 && guess != number) {
        printf("Guess a number:\t");
        scanf("%d",&guess);
        attempts++;
        //printf("attempts: %d\t", attempts);
        if(guess>number && attempts<5){
            printf("Too high\t");
        }else if(guess<number && attempts<5){
            printf("Too low\t");
        }
    }
    if(guess==number){
        printf("congratulation");
    }else{
        printf("no, number was %d",number);
    }
    return 0;
}