#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void) {
    int nums[] = {7,2,6,4,9,1,5,3,8,0};
    // selection sort:
    int min = nums[0];
    int index;
    for (int i = 0; i < 10; ++i) {
        if (nums[i] < min) {
            min = nums[i];
            index = i;
        }
    }
    int temp = nums[i];
    nums[i] = min;
    nums[index] = temp;
}