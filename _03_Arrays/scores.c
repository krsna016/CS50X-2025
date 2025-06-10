#include <stdio.h>
#include <cs50.h>

const int N = 3;

int main(void) {
    // int score1 = 10;
    // int score2 = 20;
    // int score3 = 15;
    // printf("Average = %.3f\n",(float)(score1+score2+score3)/3); // type casting or we include a floating num like 3.0
    // This is so dull to use score1 ... and so on what if there are more such like this,
    // for this we can use arrays

    // int scores[3];
    // scores[0] = 10;
    // scores[1] = 20;
    // scores[2] = 15;
    // // print average
    // printf("Average = %.3f\n",(float)(scores[0]+scores[1]+scores[2])/3); // type casting or we include a floating num like 3.0


    // also,
    // int scores[3];
    // for (int i = 0; i < 3; ++i) {
    //     scores[i] = get_int("Score : ");
    // }
    // printf("Average = %.2f\n", (scores[0] + scores[1] + scores[2])/3.0);


    // also,
    // const int N = 3; // also place at the top
    int scores[N] = {3,5,6};
    printf("Average = %.2f\n",(scores[0] + scores[1] + scores[2])/3.0);
}