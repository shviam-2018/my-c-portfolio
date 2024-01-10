#include <stdio.h>
#include <string.h>

void displayresult(const char* message, int x);

int main(){
    char WTS[1000];
    int Times;

    while (1)
    {
        printf("what do you what to say: ");
        scanf("%s", WTS);
        printf("you what me to say: %s\n", WTS);

        char confirm_WTS[100];
        printf("is this correct(y/n): ");
        scanf("%s", confirm_WTS);
        if(strcmp(confirm_WTS, "y") ==0) {
            break;
        } 
    }

    while (1)
    {
        printf("how many times do you what to say: %s\n", WTS);
        printf("enter number of times: ");
        scanf("%d", &Times);
        printf("you what to say: %s %d times\n", WTS, Times);

        char confirm_T[100];
        printf("is this correct(y/n): ");
        scanf("%s", confirm_T);
        if(strcmp(confirm_T, "y") ==0) {
            break;
        }
    }
    
    
displayresult(WTS, Times);
    return 0;
}

void displayresult(const char* message, int x) {
    for(int i = 0; i < x; ++i) {
        printf("%d%s\n", i + 1, message);
    }
}