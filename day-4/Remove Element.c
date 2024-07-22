#Given an array nums and a value val, remove all instances of that value in-place and return the new length.

#include <stdio.h>

int removeElement(int* nums, int numsSize, int val) {
    int j = 0;
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] != val) {
            nums[j] = nums[i];
            j++;
        }
    }
    return j;
}

int main() {
    int nums[] = {3, 2, 2, 3};
    int val = 3;
    int length = removeElement(nums, 4, val);
    printf("New Length: %d\n", length);
    return 0;
}
