#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void convert_to_uppercase(char*str) {
while (*str) {
    *str =
    toupper((unsigned char)*str);
    str++;
    }
}

int main()
{
    char str[] = "Hello, World!";
    printf("Original string: %s\n", str);

    // Convert string to uppercase
    convert_to_uppercase(str);
    printf("Uppercase string: %s\n", str);

    return 0;
}
