#include <stdio.h>
#include <string.h>

void displayresult(const char* message, int times);

int main(){
    char What_to_say[1000];
    int time;

    while (1)
    {
        printf("what do you what me to say: ");
        scanf("%s", What_to_say);
        printf("you want me to say: %s\n", What_to_say);

        char confirm_What_to_say[100];
        printf("is this correct(y/n):");
        scanf("%s", confirm_What_to_say);
        if(strcmp(confirm_What_to_say, "y") ==0) {
            break;
        }
    }

    while (1)
    {
        printf("how many times do you what me to say: %s\n", What_to_say);
        printf("enter number of times: ");
        scanf("%d", &time);
        printf("you what me to say: %s %d times \n", What_to_say, time);

        char confirm_time[1000];
        printf("is this correct(y/n): ");
        scanf("%s", confirm_time);
        if (strcmp(confirm_time, "y") ==0) {
            break;
        }
    }
    
    
displayresult(What_to_say, time);
    return 0;
}

void displayresult(const char* message, int times) {
    for(int i = 0; i < times; ++i) {
        printf("%d %s \n", i + 1, message);
    }
}