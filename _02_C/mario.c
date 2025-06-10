#include <stdio.h>
#include <cs50.h>

void printRow(int n);

int main(void) {
    printf("####\n");
    for (int i = 0; i < 4; ++i) {
        printf("#");
    }
    printf("\n");


    for (int i = 0; i < 4; ++i) {
        printf("#\n");
    }

    const int n = 3;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            printf("#");
        }
        printf("\n");
    }

    // Print 10 rows of ####
    printRow(10);
}


void printRow(int n) {
    for (int i = 0; i < n; ++i) {
        printf("####\n");
    }
}