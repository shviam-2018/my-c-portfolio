//requiered include
#include <stdio.h>

int main(){
//declearing variables
    int Human_age;
    int dog_year = Human_age* 15;
    int cat_years =Human_age*15;

//getting user input and chaking if it is correcct
    while (1)
    {
     printf("Hey, how old are you: \n");
     scanf("%d",&Human_age);
    printf("the age you entered is:%d \n",Human_age);

    char confirm_human_age[3];
    printf("is this corecct: %d\n",Human_age);
    scanf("%s", confirm_human_age);
    if(strcmp(confirm_human_age,"yes") ==0){
        break;
    }
    }

//code to ask do they what to know there age in cat or dog years
    while (1)
    {
        char cat_or_dog[3];
        printf("do you what to know your age in dog or cat years: \n");
        scanf("%s",cat_or_dog);
        if (strcmp(cat_or_dog, "cat") ==0){
            printf("your age in cat years is %d\n",cat_years);
        }   
        if (strcmp(cat_or_dog,"dog") ==0){ 
            printf("you age in dog years is %d\n",dog_year);
        }
            
    }
    
    
    return 0;
}