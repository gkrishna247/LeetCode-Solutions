#Given a signed 32-bit integer, reverse digits of an integer.

#include <stdio.h>
#include <limits.h>

int reverse(int x) {
    int reversed = 0;
    while (x != 0) {
        int pop = x % 10;
        x /= 10;
        if (reversed > INT_MAX/10 || (reversed == INT_MAX / 10 && pop > 7)) return 0;
        if (reversed < INT_MIN/10 || (reversed == INT_MIN / 10 && pop < -8)) return 0;
        reversed = reversed * 10 + pop;
    }
    return reversed;
}

int main() {
    int x = 123;
    int result = reverse(x);
    printf("Reversed: %d\n", result);
    return 0;
}


#input : x = 123
