#include <stdio.h>

int main() {
    char letter = 0;
    printf("Enter a lower case letter:\n");
    scanf("%c",&letter);
    if(letter>96 && letter<123){
        do{
            printf("%c\t",letter);
            letter++;
        } while(letter != 123);
    }else{
        printf("Invalid character");
    }
    return 0;
}