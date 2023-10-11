#include <stdio.h>

int main() {
    char mammal = 0;
    char wild = 0;
    char limbs = 0;
    char UK = 0;
    char football = 0;
    char breathe = 0;
    char carnivore = 0;
    char flight = 0;
    char group = 0;
    char feline = 0;
    char fur = 0;
    char food = 0;
    char fins = 0;
    printf("Pick an animal from the following:\nHorse, cow, pig, sheep, dog, cat, lion, tiger, whale, dolphin,\nseal, penguin, ostrich, sparrow, spider, ant, bee, wasp, termite, octopus, squid\n\n");
    printf("Please answer the following questions with 'Y' for yes or 'N' for no, or an integer if necessary:\n\n");
    printf("Does your animal have six or more limbs?\n");
    scanf(" %c",&limbs);
    printf("Is your animal larger than a football?\n");
    scanf(" %c",&football);
    if(limbs=='N' && football=='N') {
        printf("Your animal is a sparrow");
        return 0;
    }printf("Is your animal most commonly found in the wild?\n");
    scanf(" %c",&wild);
    printf("Is your animal commonly found the UK (including surrounding oceans)?\n");
    scanf(" %c",&UK);
    if(UK=='N' && football=='N'){
        printf("Your animal is a termite");
        return 0;
    }printf("Can your animal survive on land for more than 3 hours?\n");
    scanf(" %c",&breathe);
    if(wild=='Y' && football=='Y' && limbs=='N' && UK=='Y' && breathe=='Y'){
        printf("Your animal is a seal");
        return 0;
    }printf("Is your animal a mammal?\n");
    scanf(" %c",&mammal);
    printf("Is your animal exclusively a carnivore?\n");
    scanf(" %c",&carnivore);
    if(mammal == 'N' && UK=='N' && carnivore=='Y') {
        printf("Your animal is a penguin");
        return 0;
    }else if(mammal == 'N' && UK=='N' && carnivore=='N') {
        printf("Your animal is an ostrich");
        return 0;
    }printf("Can your animal usually fly?\n");
    scanf(" %c",&flight);
    if(carnivore == 'Y' && limbs == 'Y' && football == 'N' && flight == 'N'){
        printf("Your animal is a spider");
        return 0;
    }else if(carnivore == 'N' && limbs == 'Y' && football == 'N' && flight == 'N'){
        printf("Your animal is an ant");
        return 0;
    }else if(carnivore == 'Y' && limbs == 'Y' && football == 'N' && flight == 'Y'){
        printf("Your animal is a wasp");
        return 0;
    }else if(carnivore == 'N' && limbs == 'Y' && football == 'N' && flight == 'N'){
        printf("Your animal is a bee");
        return 0;
    }printf("Is your animal often found in a group?\n");
    scanf(" %c",&group);
    if(limbs == 'Y' && group == 'Y'){
        printf("Your animal is a squid");
        return 0;
    }else if(limbs == 'Y' && group == 'N'){
        printf("Your animal is an octopus");
        return 0;
    }printf("Is your animal a member of the feline family?\n");
    scanf(" %c",&feline);
    if(feline == 'Y' && wild == 'N'){
        printf("Your animal is a cat");
        return 0;
    }else if(feline == 'Y' && group == 'N'){
        printf("Your animal is a tiger");
        return 0;
    }else if(feline == 'Y' && group == 'Y'){
        printf("Your animal is a lion");
        return 0;
    }else if(carnivore == 'Y' && breathe == 'Y' && wild == 'N'){
        printf("Your animal is a dog");
        return 0;
    }printf("Is your animal covered by fur?\n");
    scanf(" %c",&fur);
    printf("Is your animal most commonly used for food/drink?\n");
    scanf(" %c",&food);
    if(fur == 'Y' && food == 'Y'){
        printf("Your animal is a cow");
        return 0;
    }else if(fur == 'Y' && food == 'N'){
        printf("Your animal is a horse");
        return 0;
    }else if(fur == 'N' && food == 'Y'){
        printf("Your animal is a pig");
        return 0;
    }else if(fur == 'N' && food == 'N' && breathe == 'Y'){
        printf("Your animal is a sheep");
        return 0;
    }printf("Does your animal always have dorsal fins?\n");
    scanf(" %c",&fins);
    if(fur == 'Y' && food == 'Y'){
        printf("Your animal is a dolphin");
        return 0;
    }else {
        printf("Your animal is a whale");
    }return 0;
}
