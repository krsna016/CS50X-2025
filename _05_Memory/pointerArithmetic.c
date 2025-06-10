#include <stdio.h>

    // Entry point of the program
    int main(void) {
        // Declare a pointer to a string literal "HI!"
        char* s = "HI!";

        // Print the first character pointed to by s ('H')
        printf("%c\n", *s);

        // Print the second character by moving the pointer one position forward ('I')
        printf("%c\n", *(s + 1));

        // Print the third character by moving the pointer two positions forward ('!')
        printf("%c\n", *(s + 2));

        // If you omit the brackets, e.g., *s + 1, it will first dereference s (get the value at s, which is 'H' or ASCII 72),
        // then add 1 to it, resulting in 73 ('I'), not the next character in the string.
        // Brackets ensure pointer arithmetic is performed before dereferencing.

        // This below will print the subsequent address of the chars in memory:
        printf("%p\n",s);
        printf("%p\n",s+1);
        printf("%p\n",s+2);

        // This will iterate over the chars till NUL and prints the string:
        printf("%s\n",s);
        printf("%s\n",s+1);
        printf("%s\n",s+2);
    }