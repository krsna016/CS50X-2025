#include <stdio.h>
#include <cs50.h>

int main(void) {
    string answer = get_string("What's you name? ");
    printf("Hello, %s!\n",answer);
}