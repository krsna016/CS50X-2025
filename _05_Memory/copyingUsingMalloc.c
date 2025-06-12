#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    char *s = get_string("s: "); // say: user typed - hello
    // char *t = s; // In this way we are just pointing to the same address i.e. t and s both contains the same address so we use malloc for copying and not like this

    char *t = malloc(strlen(s) + 1); // It means give me that many bytes of memory and store the address of 1st byte in t
    if (t == NULL) { // If something goes wrong malloc() returns NULL
        return 1;
    }
    // We have allocated same bytes as in s and now stores the values of s in t as well like copying
    for (int i = 0, l = strlen(s); i <= l; ++i) {
        t[i] = s[i];
    }
    if (strlen(t) > 0) {
        t[0] = toupper(t[0]);
    }

    printf("s = %s and is at %p\n",s,s);
    printf("t = %s and is at %p\n",t,t);

    free(t);
}