#include <stdio.h>
#include <cs50.h>

int main(void) {
    int n = 50;
    // This is below we defined is - Pointer to Variable - Pointer pointing to variable
    int *p = &n; // A pointer is a variable which stores the address of something (to initialise pointer we use *var - Don't be confused with dereference operator) and & is used to find the address of value.
    // Prints the value of variable n directly
    printf("value of n stored in memory = %i\n",n);
    // Prints the address of variable n where integer is stored
    printf("address of variable n where int is stored in memory = %p\n",p); // To print the address we use %p as format specifier.
    // Also,
    printf("address of variable n where int is stored in memory = %p\n",&n);
    // This will print the value at given address
    printf("value at address where n is stored = %i\n",*p); // To print the value at address we use dereference operator *
    // Also,
    printf("value at address where n is stored = %i\n",*&n);

    // p is a variable holding the address of var = n, hence we can also print the address of p itself like:
    printf("address of pointer variable p where address of variable n is stored in memory = %p\n",&p);
}