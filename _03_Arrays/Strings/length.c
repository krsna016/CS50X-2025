#include <stdio.h>
#include <cs50.h>

int string_length(string n);
int main(void) {
    string name = get_string("What's your name? ");
    // int n = 0;
    // while (name[n] != '\0') {
    //     n++;
    // }
    // printf("The length is %i\n",n);

    int length = string_length(name);
    printf("Length = %i\n",length);
}


int string_length(string n) {
    int c = 0;
    while (n[c] != '\0') {
        c++;
    }
    return c;
}