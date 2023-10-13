#include <stdio.h>

int main() {
    int number = 0;
    printf("Enter a number from 0 to 49:\n");
    scanf("%d",&number);
    if(number > -1 && number < 50){
        do{
            switch(number%2){
                case 1:
                    number++;
                    printf("%d\t",number);
                    break;
                case 0:
                    printf("%d\t",number);
                    number+=2;
                    break;
            }
        } while(number <= 50);
    }else{
        printf("Invalid input");
    }
    return 0;
}