def removeElement(nums, val):
    i = 0
    for j in range(len(nums)):
        if nums[j] != val:
            nums[i] = nums[j]
            i += 1
    return i

# Example
nums = [3, 2, 2, 3]
val = 3
new_length = removeElement(nums, val)
print(new_length)  # Output: 2
print(nums[:new_length])  # Output: [2, 2]
