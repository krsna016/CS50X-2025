#include <cs50.h>
#include <stdio.h>

void meow(int howManyTimes);
int getPositiveInt(void);


int main(void) {
    int n = getPositiveInt();
    meow(n);
}

void meow(int howManyTimes) {
    for (int i = 0; i < howManyTimes; ++i) {
        printf("Meow!");
    }
    printf("\n");
}

int getPositiveInt(void) {
    int n;
    do {
        n = get_int("How many times to meow? ");
    } while (n < 1);

    return n;
}
