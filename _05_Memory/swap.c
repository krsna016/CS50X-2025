#include <stdio.h>
#include <stdlib.h>

void swap(int *x, int *y);

int main(void) {
    int x = 10;
    int y = 50;
    printf("x = %i and y = %i\n", x, y);
    swap(&x, &y);
    printf("x = %i and y = %i\n", x, y);
}

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}