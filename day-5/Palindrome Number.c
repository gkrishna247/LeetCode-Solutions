#Determine whether an integer is a palindrome. An integer is a palindrome when it reads the same backward as forward.

#include <stdio.h>
#include <stdbool.h>

bool isPalindrome(int x) {
    if (x < 0) return false;
    int reversed = 0, original = x;
    while (x != 0) {
        int pop = x % 10;
        x /= 10;
        reversed = reversed * 10 + pop;
    }
    return original == reversed;
}

int main() {
    int x = 121;
    bool result = isPalindrome(x);
    printf("Is Palindrome: %d\n", result);
    return 0;
}


#input : x = 121
