#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <unistd.h>

int main() {
    printf("Length: ");

    int length;
    scanf("%d", &length);

    if (length <= 0) {
        printf("Password length must be >= 1!\n");
        return 1;
    }

    char *password = (char *)malloc(length + 1);
    if (password == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    char *uppers = "ABCDEFGHIJKLMNPQRSTUWYZ";
    int uppers_length = strlen(uppers);

    srand((unsigned int)(time(NULL) * getpid()));

    for (int i = 0; i < length; i++) {
        int char_type = rand() % 4;

        if (char_type == 0)
            password[i] = "0123456789"[rand() % 10];
        else if (char_type == 1)
            password[i] = "abcdefghijklmnpqrstuwyz"[rand() % 26];
        else if (char_type == 2)
            password[i] = uppers[rand() % uppers_length];
        else
            password[i] = "!@#$%^&*()"[rand() % 10];
    }

    password[length] = '\0';

    printf("Password: %s\n", password);

    free(password);

    return 0;
}
