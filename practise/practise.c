//requied include
#include <stdio.h>
#include <string.h>

//creating main
int main(){
    // variable
    int human_age;
    int dog_year = 15;
    int cat_years = 15;

// asking for user age
    while (1)
    {
    printf("enter your age: ");
    scanf("%d",&human_age);
    printf("the age you enterd is %d\n",human_age);

// this is to confirm the age enterd by the user
    char confirm_human_age[4];
    printf("is this correct: ");
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
        if (strsmp(dog_or_cat_year,"dog") ==0){
            printf("you age in dog years is %d\n",dog_year);
        }
        
    }
    
    
}