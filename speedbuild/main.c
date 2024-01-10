#include <stdio.h>
#include <string.h>
#include <time.h>

void writeToFile(int hour, int min, int sec, const char *timestamp);

int main() {
    int hour, min, sec;

    while (1) {
        printf("Congratulations on your speed build today!\n");

        printf("Enter hours: ");
        scanf("%d", &hour);

        printf("Enter minutes: ");
        scanf("%d", &min);

        printf("Enter seconds: ");
        scanf("%d", &sec);

        printf("So today you completed your speed build in %dH %dM %dS.\n", hour, min, sec);

        char confirm_result[3];
        printf("Is this correct (y/n): ");
        scanf("%s", confirm_result);

        if (strcmp(confirm_result, "y") == 0) {
            // Get current date and time
            time_t t = time(NULL);
            struct tm *tm_info = localtime(&t);

            // Format timestamp
            char timestamp[20];
            strftime(timestamp, sizeof(timestamp), "%Y-%m-%d %H:%M:%S", tm_info);

            // Write to file with timestamp
            writeToFile(hour, min, sec, timestamp);
            break;
        }
    }

    return 0;
}

void writeToFile(int hour, int min, int sec, const char *timestamp) {
    FILE *file = fopen("speed_build_data.txt", "a");
    if (file != NULL) {
        fprintf(file, "%s - %dH %dM %dS\n", timestamp, hour, min, sec);
        fclose(file);
        printf("Data written to file successfully.\n");
    } else {
        printf("Error opening file for writing.\n");
    }
}