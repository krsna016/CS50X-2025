#include <stdio.h>
#include <cs50.h>

int main(void) {
    int x = get_int("Write x? ");
    int y = get_int("Write y? ");
    if (x < y) {
        printf("%i is lesser than %i\n",x,y);
    }else if (x > y) {
        printf("%i is greater than %i\n",x,y);
    }else {
        printf("Both are equal...\n");
    }
}