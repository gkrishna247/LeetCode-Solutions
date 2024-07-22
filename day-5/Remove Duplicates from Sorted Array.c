#Given a sorted array nums, remove the duplicates in-place such that each element appears only once and returns the new length.

#include <stdio.h>

int removeDuplicates(int* nums, int numsSize) {
    if (numsSize == 0) return 0;
    int j = 0;
    for (int i = 1; i < numsSize; i++) {
        if (nums[i] != nums[j]) {
            j++;
            nums[j] = nums[i];
        }
    }
    return j + 1;
}

int main() {
    int nums[] = {1, 1, 2};
    int length = removeDuplicates(nums, 3);
    printf("New Length: %d\n", length);
    return 0;
}
