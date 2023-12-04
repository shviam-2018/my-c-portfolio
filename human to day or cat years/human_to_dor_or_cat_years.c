//requied include
#include <stdio.h>
#include <string.h>

//creating main
int main(){
    // variable
    int human_age;
    int dog_year;
    int cat_years;

// asking for user age
    while (1)
    {
    printf("enter your age: ");
    scanf("%d",&human_age);
    printf("the age you enterd is %d\n",human_age);

// this is to confirm the age enterd by the user
    char confirm_human_age[4];
    printf("is this correct(yes/no): ");
    scanf("%s", confirm_human_age);
    if(strcmp(confirm_human_age, "yes") ==0){
        break;
       }
    }
    
// asking user for do they what to know there age in dog or cat years
    while (1)
    {
        char dog_or_cat_year[4];
        printf("do you what to know your age is cat or dog years: ");
        scanf("%s", dog_or_cat_year);

        if(strcmp(dog_or_cat_year,"dog")==0){
            dog_year = human_age * 15;
            printf("you age in dog years is %d\n",dog_year);
        }

        else if(strcmp(dog_or_cat_year,"cat")==0){
            cat_years = human_age * 15;
            printf("your age in cat years is: %d\n",cat_years);
        }
        
    }
    
    return 0;
}