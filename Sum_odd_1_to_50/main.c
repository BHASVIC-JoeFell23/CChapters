#include <stdio.h>

int main() {
    int num = 0;
    int sum = 0;
    do{
        switch(num%2){
            case 1:
                num = num + 2;
                sum = sum + num;
                break;
            case 0:
                num = num + 1;
                sum = sum + num;
                break;
        }
    }while(num<49);
    printf("Sum of odd numbers between 1 and 50 is %d",sum);
    return 0;
}
