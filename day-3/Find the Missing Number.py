def find_missing_number(nums):
    n = len(nums) + 1
    total_sum = n * (n - 1) // 2
    return total_sum - sum(nums)
