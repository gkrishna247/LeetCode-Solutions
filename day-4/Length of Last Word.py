def lengthOfLastWord(s):
    return len(s.strip().split(' ')[-1])

# Example
s = "Hello World"
print(lengthOfLastWord(s))  # Output: 5
