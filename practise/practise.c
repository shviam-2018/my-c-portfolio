#include <stdio.h>

int main(){
    int Human_age;
    int dog_year = 15;
    int cat_years =15;

    while (1)
    {
     printf("Hey, how old are you: \n");
     scanf("%d",&Human_age);
    printf("the age you entered is: \n",Human_age);

    char confirm_human_age[3];
    printf("is this corecct: \n");
    scanf("%s", confirm_human_age);
    if(strcmp(confirm_human_age,"yes") ==0){
        break;
    }
    }

    while (1)
    {
        //TODO: add code to ask if them what to know there age in cat or dag year
    }
    
    
    return 0;
}