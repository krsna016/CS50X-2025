#include <stdio.h>
#include <cs50.h>

int main(void) {
    int x = get_int("X = ");
    int y = get_int("Y = ");
    printf("int answer = %i\n", x/y);
    // See Floating point imprecision
    printf("float answer = %.50f\n", (float)x/y); // casting value but when do 1/3 it is imprecise , floats only have precision to only upto 7 digits
    printf("double answer = %.50f\n", (double)x/y); // casting value but when do 1/3 it is imprecise , floats only have precision to only upto 15-17 digits
}