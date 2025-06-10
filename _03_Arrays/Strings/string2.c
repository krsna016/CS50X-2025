#include <stdio.h>
#include <cs50.h>

int main(void) {
    string words[2];
    words[0] = "HI!";
    words[1] = "BYE!";
    printf("%s\n",words[0]);
    printf("%s\n",words[1]);
    printf("%c%c%c\n",words[0][0],words[0][1],words[0][2]);
}