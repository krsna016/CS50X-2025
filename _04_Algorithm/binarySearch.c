#include <stdio.h>
#include <cs50.h>
#include <string.h>

// for binary search array should be sorted
int main(void) {
    string names[] = {"Anurag","Amit","David","John","Rohan","Shankar"};
    string numbers[] = {"1224654381","1234652381","1224654381","1234614381","1234654380","1234653381"};

    // This is Linear search
    string name = get_string("Search the name? ");
    for (int i = 0; i < 6; ++i) {
        if (strcmp(names[i], name) == 0) {
            printf("Founded - %s\n", numbers[i]);
            return 0;
        }
    }

    // This is Binary search


    printf("Not found.\n");
    return 1;
}