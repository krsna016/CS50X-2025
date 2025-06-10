#include <stdio.h>
#include <cs50.h>
#include <string.h>

// For linear search array need not be sorted.
int main(void) {
    // int arr[] = {100,20,35,50,95,66};
    // int value = get_int("Enter the num to find? ");
    // for (int i = 0; i < 6; ++i) {
    //     if (arr[i] == value) {
    //         printf("Number founded!!\n");
    //         return 0;
    //     }
    // }
    // printf("Not found!!\n");
    // return 1;


    string strings[] = {"battleship","boot","cannon","iron","thimble","top hat"};
    string value = get_string("Enter value to search? ");
    for (int i = 0; i < 6; ++i) {
        // for string comparison we should use strcmp() instead of ==
        if (strcmp(strings[i], value) == 0) {
            printf("founded !!\n");
            return 0;
        }
    }
    return 1;
}
