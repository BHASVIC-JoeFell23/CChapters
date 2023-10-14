#include <stdio.h>

int main() {
    int quantity = 0;
    int x;
    int y = 0;
    printf("How many numbers do you want to be cubed?\n");
    scanf("%d",&quantity);
    for(x=1;x<quantity+1;x++){
        printf("Number is %d, cube of %d is %d\n",x,x,x*x*x);
    }return 0;
}