#include <stdio.h>
#include <string.h>

int main() {
    int total_bill;
    float tip_percentage;
    float bill_after_tip;

    while (1) {
        printf("What is the bill amount: \n");
        scanf("%d", &total_bill);
        printf("Your total bill without tip: %d\n", total_bill);

        char confirm_total_bill[3];
        printf("Is that correct (yes/no)\n");
        scanf("%s", confirm_total_bill);
        if (strcmp(confirm_total_bill, "yes") == 0) {
            break;
        }
    }

    // Get the tip percentage
    while (1) {
        printf("How much do you want to tip:\n");
        scanf("%f", &tip_percentage);
        printf("You want to tip %f\n", tip_percentage);

        char confirm_tip_percentage[3];
        printf("Is this correct (yes/no):\n");
        scanf("%s",confirm_tip_percentage);
        if (strcmp(confirm_tip_percentage, "yes") == 0) {
            break;
        }
    }

//this calculatsn the bill with tip
       tip_percentage = total_bill+(total_bill*tip_percentage/100);
       printf("you bill with tip is: %f\n",tip_percentage);
    return 0;
}
    
