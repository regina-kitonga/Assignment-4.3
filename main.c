#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char* get_first_word(char *str)
{
    // Skip leading spaces
    while (*str && isspace(*str)) {
        str++;
    }
    // Find the end of the first word
    char *end = str;
    while (*end && ! isspace(*end)) {
        end++;
    }
    // Allocate memory for the first word
    size_t word_len = end - str;
    char *first_word = (char*)malloc(word_len + 1);

    // Copy the first word to the new memory location
    strncpy(first_word, str, word_len);
    first_word[word_len] =
    '\0';

    // Return the remainder of the string (after the first word)
    return end;
}
int main()
{
    char str[] = "This is a test string.";
    printf("Original string: %s\n", str);

    // Get the first word and the remainder of the string
    char remainder = get_first_word(str);
    printf("First word: %s\n", str);
    printf("Remainder: %s\n", remainder);

    // Free dynamically allocated memory
    free(remainder);

        return 0;
}
