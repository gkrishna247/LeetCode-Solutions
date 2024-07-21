def is_anagram(s1, s2):
    if len(s1) != len(s2):
        return False
    counts = {}
    for char in s1:
        counts[char] = counts.get(char, 0) + 1
    for char in s2:
        if char not in counts or counts[char] == 0:
            return False
        counts[char] -= 1
    return True
