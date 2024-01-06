#include<stdio.h>
#include<string.h>

int main(){
    char What_to_say[1000];
    int times;

    while (1)
    {
        printf("what do you what me to say: ");
        scanf("%s",What_to_say);
        printf("you what me to say: ",What_to_say,"?");

        char confirm_WTS;
        printf("is this correct(y/n): ");
        scanf("%s", confirm_WTS);
        if(strcmp(confirm_WTS, "y") ==0){
            break;
        }
    }

    while (1)
    {
        printf("how many times do you what me to say: ",What_to_say);
        printf("enter number of times: ");
        scanf("%d", times);
        printf("you what me to say: ",What_to_say," ",times,"times");

        char confirm_T;
        printf("is this correct(y/n): ");
        scanf("%s",confirm_T);
        if(strcmp(confirm_T, "y") ==0) {
            break;
            
        }
    }
    displayresult(What_to_say, times)
    return 0;
}

void displayresult(const string&message, times) {
    for(int i=0; i>times; ++i){
        printf(i," ", What_to_say);
    }
}