#include <stdio.h>

int main() {
    int quantity = 0;
    float num = 0;
    float sum = 0;
    int x = 0;
    printf("How many numbers would you like to enter?\n");
    scanf("%d",&quantity);
    do{
        printf("Enter a number:\n");
        fflush(stdin);
        scanf("%f",&num);
        x++;
        sum = sum + num;
    }while(x != quantity);
    printf("Sum of numbers is %f\n",sum);
    printf("You entered %d numbers\n",quantity);
    printf("Average of numbers is %f",sum/quantity);
    return 0;
}
