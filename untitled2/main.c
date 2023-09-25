#include <stdio.h>
#include <ctype.h>

int main() {
    char input_character;
    printf("Enter a single character:\t");
    scanf("%c", &input_character);
    switch (toupper(input_character)) {
        case 65:
        case 69:
        case 73:
        case 79:
        case 85:
            printf("Character is a vowel");
            break;
        default:
            if(64<toupper(input_character) && 91>toupper(input_character))
                printf("Character is a constonant");
            else
                printf("Invalid character");
    }
    return 0;
}