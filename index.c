#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <unistd.h>

int main() {
   /* printf("Length: ");

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
*/


printf("Content-type: text/html\n\n");

    // Print the HTML document
    printf("<html>\n");
    printf("<head><title>Password Generator</title></head>\n");
    printf("<body>\n");

    // Check for query string parameters (if using CGI)
    char *queryString = getenv("QUERY_STRING");

    if (queryString != NULL) {
        // Parse query string to extract parameters
        int length;
        if (sscanf(queryString, "length=%d", &length) == 1 && length > 0) {
            // Generate and display the password
            char *password = (char *)malloc(length + 1);
            if (password != NULL) {
                srand((unsigned int)(time(NULL) * getpid()));

                // Password generation logic
                // ...

                printf("Generated Password: %s\n", password);

                free(password);
            } else {
                printf("Memory allocation failed.\n");
            }
        } else {
            printf("Invalid password length.\n");
        }
    } else {
        // Print the HTML form to capture user input
        printf("<form action=\"/cgi-bin/your_cgi_program.cgi\" method=\"get\">\n");
        printf("Password Length: <input type=\"number\" name=\"length\">\n");
        printf("<input type=\"submit\" value=\"Generate Password\">\n");
        printf("</form>\n");
    }

    // Close the HTML document
    printf("</body>\n");
    printf("</html>\n");

    return 0;
}


