void generate(char** res, int* returnSize, char* str, int open, int close, int n) {
    if (open == n && close == n) {
        res[*returnSize] = strdup(str);
        (*returnSize)++;
        return;
    }
    if (open < n) {
        str[open + close] = '(';
        generate(res, returnSize, str, open + 1, close, n);
    }
    if (close < open) {
        str[open + close] = ')';
        generate(res, returnSize, str, open, close + 1, n);
    }
}

char** generateParenthesis(int n, int* returnSize) {
    *returnSize = 0;
    char** res = malloc(10000 * sizeof(char*));
    char* str = malloc(2 * n + 1);
    str[2 * n] = '\0';
    generate(res, returnSize, str, 0, 0, n);
    free(str);
    return res;
}
