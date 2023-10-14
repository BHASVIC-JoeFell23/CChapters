#include <stdio.h>

int main() {
    int quantity = 0;
    int number = 0;
    int x;
    int y = 0;
    printf("What number do you want to see times tables for?\n");
    scanf("%d",&number);
    printf("What should this be multiplied up to?\n");
    scanf("%d",&quantity);
    for(x=0;x<(number*quantity);x=x+number){
        y++;
        printf("%d x %d = %d\n",number,y,number*y);
    }return 0;
}