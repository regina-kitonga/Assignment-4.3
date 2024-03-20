#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


    // Function to remove leading and trailing blanks from a string
    void trim(char *str){
        char *end;

    // Remove leading blanks
    while (isspace(*str)){
        str++;
    }
    // Remove trailing blanks
    end = str + strlen(str) - 1;
    while (end > str && isspace(*end)) {
        end--;
    }
    *(end + 1) = '\0';
}
// Function to return the last name from a string
char* get_last_name(const char *str) {
    const char *last_name_start
= strrchr(str, 32); // Use ASCII value of space character

    if (last_name_start != NULL){
        // Move to the first character of last name
        last_name_start++;
        // Allocate memory for last name
        size_t last_name_len = strlen(last_name_start);
        char *last_name = (char* )malloc(last_name_len + 1);
        // Copy last name to new memory location
        strcpy(last_name, last_name_start);
        return last_name;
    } else {
    // No last name found
    return NULL;
    }
}

int main() {
char input[100];
    // Read input string containing first name and last name
    printf("Enter first name followed by a blank followed by last name:");
    fgets(input, sizeof(input), stdin);
    // Remove leading and trailing blanks
    trim(input);
    // Get last name
    char *last_name = get_last_name(input);
    // Output the last name
    if (last_name != NULL) {
        printf("Last name: %s\n", last_name);
    } else {
    printf("No last name found.\n");
    }
    return 0;
}
