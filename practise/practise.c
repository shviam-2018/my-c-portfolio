#include <stdio.h>
#include <string.h>

int main(){
    int  bill_before_tip;
    float tip_percentage;
    float Bill_after_tip;

//this is to get user input for total bill before tip
    while (1)
    {
    printf("enter total bill: ");
    scanf("%d",&bill_before_tip);
    printf("the ammount you entered is: %d\n",bill_before_tip);

    char confirm_before_bill[4];
    printf("is this correct(yes/no): %s");
    scanf("%s",confirm_before_bill);
    if(strcmp(confirm_before_bill,"yes")==0){
        break;
    }

//this is to get tippercentage from user
    while (1)
    {
        printf("who much of the ammount do you what to tip: ");
        scanf("%f",&tip_percentage);
        printf("yoou whant to tip: %f\n",tip_percentage);

        char confirm_tip_persentage[3];
        printf("is this correct: ");
        scanf("%s", confirm_tip_persentage);
        if(strcmp(confirm_tip_persentage,"yes")==0){
            break;
        }
    }
    
}
    
    return 0;
}