#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int number = rand() % 31;
    int credits = 10;
    int attempts = 0;
    int guess;
    int wagered_credits;
    int bonus;
    int x;
    int y;
    char resume;
    char low_high;
    printf("You currently have 10 credits. The computer will generate a number from 0 to 30, you must guess this number and bet as many credits as you wish - a multiple of 10\nwill win you 3x your credits, a prime number 5x, and a number below 5 2x. You can also wager 10 percent of your credits to be told if your number is too low or too\nhigh.\n\n");
    do{
        if(guess==number && wagered_credits <= credits && wagered_credits > 0){
            number = rand() % 31;
        }guess = 0;
        wagered_credits = 0;
        bonus = 1;
        x = 0;
        y = 0;
        //printf("hehe %d",number);
        printf("What is your guess, and how many credits do you wager (separate these numbers with a comma)?\n");
        scanf("%d,%d",&guess,&wagered_credits);
        if(wagered_credits <= credits && wagered_credits > 0){
            attempts++;
            credits = credits - wagered_credits;
            if(guess==number){
                if(guess%10==0){
                    bonus = bonus + 2;
                }if(guess== 2 || guess == 3 || guess== 5 || guess == 7 || guess == 11 || guess == 13 || guess == 17 || guess == 19 || guess == 23 || guess == 29){
                    bonus = bonus + 4;
                }if(guess<5){
                    bonus = bonus + 1;
                }
                credits = credits + wagered_credits * bonus;
                printf("Correct, number was %d\nYour current credit score is %d\n",number,credits);
                do{
                    if(x>0){
                        printf("Invalid input\n");
                    }printf("Do you wish to continue(Y/N)?\n");
                    scanf(" %c",&resume);
                    x++;
                }while(resume != 'Y' && resume != 'N');
                if(resume == 'N'){
                    printf("You finished with %d attempts and %d credits.\nThanks for playing!",attempts,credits);
                    return 0;
                }
            }else {
                do{
                    if(y>0){
                        printf("Invalid input\n");
                    }printf("Do you wish to know if your guess is too low or too high(Y/N)?\n");
                    scanf(" %c",&low_high);
                    y++;
                }while(low_high != 'Y' && low_high != 'N');
                if(low_high == 'Y'){
                    credits = credits - (credits/10) - 1;
                    if(guess>number){
                        printf("Too high\nYour current credit score is %d\n",credits);
                    }else if(guess<number){
                        printf("Too low\nYour current credit score is %d\n",credits);
                    }
                }
            }
        }else{
            if(wagered_credits<0){
                printf("You cannot wager a negative number of credits\n");
            }else{
                printf("You cannot wager that many credits\n");
            }
        }
    }while(credits>0);
    printf("You're out of credits :(\nNumber was %d\nYou lasted %d attempts, thanks for playing!",number,attempts);
}