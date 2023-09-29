#include <stdio.h>
#include <ctype.h>
int main() {
    char origin;
    float original_size_float = 0;
    int original_size_int = 0;
    float subtraction = 0;
    printf("Hello! Please enter the origin of your item (either 'U' for USA or 'E' for Europe):\t");
    scanf("%c", &origin);
    printf("Please enter the original size of your item:");
    scanf("%f",&original_size_float);
    original_size_int = original_size_float;
    subtraction = original_size_float - original_size_int;
    if(subtraction>0)
    {
        printf("Please enter a non-decimal size :(");
    }
    else
    {
        switch(toupper(origin))
        {
            case 'E':
                printf("The UK size of your item is %d",original_size_int-28);
                break;
            case 'U':
                printf("The UK size of your item is %d",original_size_int+4);
                break;
            default:
                printf("Please enter a valid item origin :(");
        }
    }
    return 0;
}
