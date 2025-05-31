#include <stdio.h>


void meow(int howManyTimes);

int main(void) {
    meow(10);
}

void meow(int howManyTimes) {
    for (int i = 0; i < howManyTimes; ++i) {
        printf("Meow!");
    }
    printf("\n");
}