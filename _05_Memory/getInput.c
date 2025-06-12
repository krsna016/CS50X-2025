#include <stdio.h>
#include <stdlib.h>

int main(void) {
    // For integers:

    // int n;
    // printf("n: ");
    // scanf("%i",&n);
    // printf("n = %i\n",n);


    // For strings:

    char *s;
    printf("s: ");
    scanf("%s", s); // We don't know at what address we are requesting the value since we are not initialised s hence it can cause error
    printf("s = %s\n",s);

}