#Return the index of the first occurrence of a substring (needle) in a string (haystack), or -1 if the substring is not part of the string.

#include <stdio.h>
#include <string.h>

int strStr(char* haystack, char* needle) {
    int n = strlen(haystack);
    int m = strlen(needle);
    for (int i = 0; i <= n - m; i++) {
        int j = 0;
        for (; j < m; j++) {
            if (haystack[i + j] != needle[j]) break;
        }
        if (j == m) return i;
    }
    return -1;
}

int main() {
    char haystack[] = "hello";
    char needle[] = "ll";
    int result = strStr(haystack, needle);
    printf("Index: %d\n", result);
    return 0;
}
