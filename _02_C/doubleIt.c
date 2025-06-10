#include <stdio.h>
#include <cs50.h>

int main(void) {

    int count = 1;

    long dollars = 1;
    while (true) {
        char c = get_char("%i. Here's $%li. Double it and give it to the next person? (y/n) : ",count, dollars);
        if (c == 'y') {
            dollars *= 2;
            count++;
        } else {
            break;
        }
    }
    printf("Dollars = %li\n",dollars);
}