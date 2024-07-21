char* longestPalindrome(char* s) {
    int start = 0, max_len = 0, len = strlen(s);
    for (int i = 0; i < len; i++) {
        int l = i, r = i;
        while (l >= 0 && r < len && s[l] == s[r]) {
            if (r - l + 1 > max_len) {
                start = l;
                max_len = r - l + 1;
            }
            l--; r++;
        }
        l = i; r = i + 1;
        while (l >= 0 && r < len && s[l] == s[r]) {
            if (r - l + 1 > max_len) {
                start = l;
                max_len = r - l + 1;
            }
            l--; r++;
        }
    }
    char* result = malloc(max_len + 1);
    strncpy(result, s + start, max_len);
    result[max_len] = '\0';
    return result;
}
