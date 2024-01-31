#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>

int main() {

printf("Length:  ");

int length;
scanf("%d", &length);

if (length <= 0) {
    printf("Password length must be >= 1!");


    return 1;
char *password = malloc(length + 1);

free(password);

char *digits = "0123456789";
int digits_length = strlen(digits);

char *lowers = "abcdefghijklmnpqrstuwyz";
int lowers_length = strlen(lowers);
int uppers_length = strlen(uppers);

char *symbols = "!@#$%^&*()";

int symbols_length = strlen(symbols);




}


    return 0;
}