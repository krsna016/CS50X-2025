#include <stdio.h>
#include <cs50.h>

// int main(void) {
//     string name = get_string("Name : ");
//     printf("Hello, %s!\n",name);
// }


int main(int argc, string argv[]) {
    // printf("Hello, %s\n",argv[0]); // Print file name
    if (argc == 2) {
        printf("Hello, %s\n",argv[1]);
    } else {
        printf("Hello World.\n");
    }

    for (int i = 0; i < argc; ++i) {
        printf("%s\n",argv[i]);
    }
}