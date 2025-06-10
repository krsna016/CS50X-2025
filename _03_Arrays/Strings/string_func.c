#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

string get_upper_case(string n);
int main(void) {
    string name = get_string("Name = ");
    // printf("Length = %lu\n",strlen(name));

    printf("Uppercase = %s\n", get_upper_case(name));
}

string get_upper_case(string n) {
    string result[strlen(n)];

    // int len = strlen(n);
    // for (int i = 0; i < len; ++i) {
    //     n[i] = n[i] - 32;
    // }

    // for (int i = 0, l = strlen(n); i < l; ++i) {
    //     if (n[i] >= 'a' && n[i] <= 'z'){
    //         n[i] = n[i] - 32;
    //     }
    // }

    for (int i = 0, l = strlen(n); i < l; ++i) {
        n[i] = toupper(n[i]);
    }
    return n;
}