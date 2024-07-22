int lengthOfLongestSubstring(char * s) {
    int map[128] = {0}, max_len = 0, start = 0;
    for (int end = 0; s[end]; end++) {
        start = fmax(start, map[s[end]]);
        map[s[end]] = end + 1;
        max_len = fmax(max_len, end - start + 1);
    }
    return max_len;
}
