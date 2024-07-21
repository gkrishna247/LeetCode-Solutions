char** letterCombinations(char* digits, int* returnSize) {
    if (!*digits) {
        *returnSize = 0;
        return NULL;
    }
    char *table[10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    int len = strlen(digits), count = 1;
    for (int i = 0; i < len; i++) count *= strlen(table[digits[i] - '0']);
    char **res = malloc(count * sizeof(char*));
    for (int i = 0; i < count; i++) res[i] = malloc(len + 1);
    for (int i = 0; i < len; i++) {
        int n = strlen(table[digits[i] - '0']);
        for (int j = 0; j < count; j++) {
            res[j][i] = table[digits[i] - '0'][(j / (count / n)) % n];
        }
    }
    for (int i = 0; i < count; i++) res[i][len] = '\0';
    *returnSize = count;
    return res;
}
