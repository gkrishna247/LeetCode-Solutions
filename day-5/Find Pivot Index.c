#include <stdio.h>

int pivotIndex(int* nums, int numsSize) {
    int totalSum = 0, leftSum = 0;
    for (int i = 0; i < numsSize; i++) {
        totalSum += nums[i];
    }
    for (int i = 0; i < numsSize; i++) {
        if (leftSum == totalSum - leftSum - nums[i]) {
            return i;
        }
        leftSum += nums[i];
    }
    return -1;
}

int main() {
    int nums[] = {1, 7, 3, 6, 5, 6};
    int numsSize = 6;
    int result = pivotIndex(nums, numsSize);
    printf("Pivot Index: %d\n", result);
    return 0;
}
