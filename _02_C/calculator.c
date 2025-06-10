#include <stdio.h>
#include <cs50.h>

void makeDouble(int n);

int main(void) {
    int x = get_int("Enter x: ");
    int y = get_int("Enter y: ");

    int sum = x + y;
    printf("The sum is, %i\n",sum);

    // also,
    printf("Sum = %i\n", get_int("X = ") + get_int("Y = "));

    makeDouble(10);
}

void makeDouble(int n) {
    printf("%i\n", n*2);
}