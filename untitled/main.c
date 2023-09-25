#include <stdio.h>

int main() {
    int child_ticket_quantity=0;
    int adult_ticket_quantity=0;
    char day_of_visit=0;
    printf("Will you be visiting on a weekday, Saturday/Sunday or bank holiday?\nPlease enter W, B or S: ");
    scanf("%c",&day_of_visit);
    if(day_of_visit==66 || day_of_visit==83 || day_of_visit==87)
    {
        printf("Please enter the number of child tickets that you require");
        scanf("%d",&child_ticket_quantity);
        printf("Please enter the number of adult tickets that you require");
        scanf("%d",&adult_ticket_quantity);
        if(day_of_visit==66 || day_of_visit==83)
        {
            float child_ticket_cost=7.5*child_ticket_quantity;
            printf("Total cost of child tickets is %f pounds\n",child_ticket_cost);
            if(day_of_visit==66)
            {
                int adult_ticket_cost=14*adult_ticket_quantity;
                printf("Total cost of adult tickets is %d pounds\n",adult_ticket_cost);
                printf("Total cost of all tickets is %f pounds",child_ticket_cost+adult_ticket_cost);
            }
            else
            {
                int adult_ticket_cost=12*adult_ticket_quantity;
                printf("Total cost of adult tickets is %d pounds\n",adult_ticket_cost);
                printf("Total cost of all tickets is %f pounds",child_ticket_cost+adult_ticket_cost);
            }
        }

        else
        {
            int child_ticket_cost=5*child_ticket_quantity;
            printf("Total cost of adult tickets is %d pounds\n",child_ticket_cost);
            int adult_ticket_cost;
            adult_ticket_cost = 8 * adult_ticket_quantity;
            printf("Total cost of adult tickets is %d pounds\n",adult_ticket_cost);
            printf("Total cost of all tickets is %d pounds",child_ticket_cost+adult_ticket_cost);
        }
    }
    else
    {
        printf("Invalid character");
    }
    return 0;
}
