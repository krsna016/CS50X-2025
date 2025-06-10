#include <stdio.h>
#include <cs50.h>
#include <string.h>

typedef struct {
    string name;
    string number;
} person;

int main(void) {

    person peoples[3];
    peoples[0].name = "David";
    peoples[0].number = "23874623462";

    peoples[1].name = "Julia";
    peoples[1].number = "32741286192";

    peoples[2].name = "Zuth";
    peoples[2].number = "32098322333";

    string name = get_string("Enter the name? ");

    for (int i = 0; i < 3; ++i) {
        if (strcmp(peoples[i].name, name) == 0) {
            printf("Found - %s\n", peoples[i].number);
            return 0;
        }
    }
    printf("Not found.\n");
    return 1;
}