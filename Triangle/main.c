#include <stdio.h>
#include <math.h>

int main() {
    float quantity = 0;
    int x;
    int y = 1;
    printf("How many lines should the triangle have?\n");
    scanf("%f",&quantity);
    if(0<quantity && quantity<10){
        for(x=0;x<powf(10,quantity);x=x*10){
            x=x+y;
            printf("%d\n",x);
            y++;
        }
    }else{
        printf("Triangle can only have up to 9 lines because otherwise it wouldn't be a proper triangle not because I don't know how to code this");
    }
    return 0;
}