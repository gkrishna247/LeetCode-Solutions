#Find the contiguous subarray (containing at least one number) which has the largest sum and return its sum.

#include <stdio.h>

int maxSubArray(int* nums, int numsSize) {
    int max_so_far = nums[0];
    int max_ending_here = nums[0];
    for (int i = 1; i < numsSize; i++) {
        max_ending_here = (nums[i] > (max_ending_here + nums[i])) ? nums[i] : (max_ending_here + nums[i]);
        if (max_ending_here > max_so_far) max_so_far = max_ending_here;
    }
    return max_so_far;
}

int main() {
    int nums[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int result = maxSubArray(nums, 9);
    printf("Max Subarray Sum: %d\n", result);
    return 0;
}
