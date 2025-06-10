// #include <cs50.h>
#include <stdio.h>


void printColumn(int height);

int main(void) {
    for (int i = 0; i <= 3; ++i) { // I want three but it prints 4 hashes
        printf("i = %i",i);
        printf("#\n");
    }
    printf("\n");

    // int h = get_int("Enter height: ");
    // printColumn(h);

}

void printColumn(int height) {
    for (int i = 0; i <= height; ++i) {
        printf("#\n");
    }
}