//
// Created by Administrator on 2020/6/10.
//

#include <stdbool.h>

bool isPalindrome(int x) {
    // 翻转数字
    if (x < 0 || (x % 10 == 0 && x != 0)) {
        return false;
    }
    int revertedNumber = 0;
    while (x > revertedNumber) {
        revertedNumber = revertedNumber * 10 + x % 10;
        x = x /10;
    }
    return x == revertedNumber ||x == revertedNumber / 10;
}
