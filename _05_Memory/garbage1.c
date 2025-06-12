#include <stdio.h>
    #include <stdlib.h>

    int main(void) {
        // Declare two integer pointers, x and y
        int *x;
        int *y;

        // Allocate memory for one integer and assign its address to x
        x = malloc(sizeof(int));

        // Store the value 42 at the memory location pointed to by x
        *x = 42;

        // Undefined behavior: y is uninitialized, so this line may crash or corrupt memory
        // *y = 13;

        // Make y point to the same memory location as x
        y = x;

        // Store the value 13 at the memory location pointed to by y (and x)
        *y = 14;

        printf("%i\n",*x);
        printf("%i\n",*y);

        // Free the dynamically allocated memory
        free(x);
    }