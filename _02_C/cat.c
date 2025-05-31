#include <cs50.h>
#include <stdio.h>

int main(void) {
    // Here we are repeating ourselves
    printf("Meow!");
    printf("Meow!");
    printf("Meow!");
    printf("\n");

    // This is while-loop
    int i = 0;
    while (i < 3) {
        printf("Meow!");
        i += 1;
    }
    printf("\n");

    // This is for-loop
    for (int i = 0; i < 3; ++i) {
        printf("Meow!");
    }
    printf("\n");

    // // This is infinite loop
    // while (1) {
    //     printf("Meow!");
    // }
    // printf("\n");

    // This is dynamic one, along with user input
    int n = get_int("How many times to meow!? ");
    for (int i = 0; i < n; ++i) {
        printf("Meow!");
    }
    printf("\n");
}