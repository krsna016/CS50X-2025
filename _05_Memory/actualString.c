#include <stdio.h>
#include <cs50.h>

int main(void) {
    // string s = "HI!"; // This is char *s = "HI!"; like: typedef char *string;
    // printf("%s\n",s);     // This will print the string s


    char *s = "HI!";

    printf("%p\n",s);     // This will print the address of first char in string
    printf("%p\n",&s[0]); // This will print the address of first char in string
    printf("%p\n",&s[1]); // This will print the address of second char in string
    printf("%p\n",&s[2]); // This will print the address of third char in string
    printf("%p\n",&s[3]); // This will print the address of forth char in string
    printf("%s\n",s);

    printf("%c\n",s[0]);
    printf("%c\n",s[1]);
    printf("%c\n",s[2]);
}