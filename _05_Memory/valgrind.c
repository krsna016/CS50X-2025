#include <stdio.h>
#include <stdlib.h>

// Demonstrates memory allocation and access errors
int main(void) {
    int *x = malloc(3 * sizeof(int)); // Allocate space for 3 integers
    x[1] = 72;                        // Assign value to second element
    x[2] = 73;                        // Assign value to third element
    x[3] = 74;                        // Out-of-bounds write (undefined behavior)
    free(x);                          // Free allocated memory
}