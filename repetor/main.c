#include <stdio.h>
#include <string.h>

// Declare the displayresult function before using it
void displayresult(const char* message, int times);

int main() {
    char What_to_say[1000];
    int times;

    while (1) {
        printf("What do you want me to say: ");
        scanf("%s", What_to_say);
        printf("You want me to say: %s?\n", What_to_say);  // Fixing the printf statement

        char confirm_WTS[2];  // Change from char to char array
        printf("Is this correct (y/n): ");
        scanf("%s", confirm_WTS);
        if (strcmp(confirm_WTS, "y") == 0) {
            break;
        }
    }

    while (1) {
        printf("How many times do you want me to say: ");
        printf("Enter number of times: ");
        scanf("%d", &times);  // Use the address of the variable for scanf
        printf("You want me to say: %s %d times\n", What_to_say, times);  // Fixing the printf statement

        char confirm_T[2];  // Change from char to char array
        printf("Is this correct (y/n): ");
        scanf("%s", confirm_T);
        if (strcmp(confirm_T, "y") == 0) {
            break;
        }
    }

    // Call the displayresult function with the correct arguments
    displayresult(What_to_say, times);

    return 0;
}

void displayresult(const char* message, int times) {
    for (int i = 0; i < times; ++i) {
        printf("%d %s\n", i + 1, message);  // Fixing the printf statement
    }
}
