#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void) {

    // // Integer comparison:
    // int i = get_int("i: ");
    // int j = get_int("j: ");
    // if (i == j) {
    //     printf("Same!!\n");
    // } else {
    //     printf("Different!!!\n");
    // }


    // String comparison:
    // Prompt the user for two strings
    char *s = get_string("s: ");
    char *t = get_string("t: ");
    // // Compare the pointers i.e. just the address which is obviously different (not the string contents)
    // if (s == t) {
    //     printf("Same!!\n");
    // } else {
    //     printf("Different!!!\n");
    // }


    printf("s at = %p\n",s);
    printf("t at = %p\n",t);
    // This is the correct way: strcmp dereference address and compare chars of each one by one
    if (strcmp(s,t) == 0) {
        printf("Same!!\n");
    } else {
        printf("Different!!!\n");
    }
}

// For integers, '==' compares the actual values stored in variables i and j.
// This works because integers are primitive types and their values are directly compared.


// Note: For strings (char arrays), using '==' does NOT compare the contents of the strings.
// It only compares their memory addresses (pointers), not the actual text.
// To compare the contents of two strings, use the strcmp function from <string.h>.
// Example: if (strcmp(str1, str2) == 0) { /* strings are equal */ }

// strcmp compares two strings (char arrays) character by character.
// It starts from the first character of both strings.
// If characters are equal, it moves to the next character.
// This continues until a difference is found or the end of both strings is reached.
// If a difference is found, it returns the difference between the ASCII values of the differing characters.
// If both strings end at the same time and all characters matched, it returns 0 (strings are equal).
