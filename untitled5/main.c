#include <stdio.h>

int main() {
    int mammal = 0;
    int wild = 0;
    int flight = 0;
    int limbs = 0;
    int UK = 0;
    printf("Pick an animal from the following:\nHorse, cow, pig, sheep, dog, cat, lion, tiger, whale, dolphin,\nseal, penguin, ostrich, sparrow, spider, ant, bee, wasp, termite, octopus, squid\n\n");
    printf("Please answer the following questions with 'Y' for yes or 'N' for no, or an integer if necessary:\n\n");
    printf("How many limbs does your animal have?\n");
    scanf("%d",&limbs);
    if(limbs==10)
    {
        printf("Your animal is a squid\n");
        return 0;
    }
    printf("Is your animal a mammal?\n");
    scanf("%c",&mammal);
    printf("Is your animal most commonly found in the wild?\n");
    scanf("%c",&wild);
    printf("Can your animal fly?\n");
    scanf("%c",&flight);
    printf("Is your animal native to the UK?\n");
    scanf("%c",&UK);
    if(wild==89 && flight==78 && limbs==4 && UK==89)
    {
        printf("Your animal is a seal");
    }
    return 0;
}
