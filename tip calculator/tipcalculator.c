// requiered include
#include <stdio.h>
#include <string.h>

int main(){
//variable
int total_bill;
float tip_percentage;
float bill_after_tip;

//grtting the input for total bill
while (1)
{
    printf("how much is the bill\n");
    scanf("%d",&total_bill);
    printf("is you total %d\n",total_bill);

// input to confirm this input
    char confirm_total_bill[3];
    printf("is this corecct (yes/no)\n");
    scanf("%s",confirm_total_bill);
    if(strcmp(confirm_total_bill,"yes")==0){
        break;
    }
}
 
//get tip percentage
    while (1)
    {
        printf("how much percent of your bill do you tip\n");
        scanf("%f",&tip_percentage);
        printf("you what to tip%f\n",tip_percentage);

        char confirm_tip_percentage[3];
        printf("is that correct(yes/no)\n");
        scanf("%s",confirm_tip_percentage);
        if(strcmp(confirm_tip_percentage,"yes") ==0){
            break;
        }
    }

// this calculat the total bill
    bill_after_tip = total_bill+(total_bill*tip_percentage/100);
    printf("you bill with tip is %f\n",bill_after_tip);
    
    

    return 0;
}