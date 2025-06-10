#include <stdio.h>
#include <cs50.h>

const int N = 3;

float average(int length, int arr[]);

int main(void) {
    int scores[N];
    for (int i = 0; i < N; ++i) {
        scores[i] = get_int("scores[%i] = ",i);
    }
    printf("average = %.2f\n",average(N, scores));
}

float average(int length, int arr[]) {
    int sum = 0;
    for (int i = 0; i < length; ++i) {
        sum += arr[i];
    }
    return (float)sum/length;
}