#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    char *s = get_string("s = ");
    char *t = malloc(strlen(s) + 1);
    strcpy(t, s);

    t[0] = toupper(t[0]);

    printf("s = %s and is at %p\n",s,s);
    printf("t = %s and is at %p\n",t,t);

    free(t);
}