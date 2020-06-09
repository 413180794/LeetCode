//
// Created by Administrator on 2020/6/9.
// dp[i] = dp[i-1] + dp[i-2] or dp[i-1]
//

int translateNum(int num) {
    if (num < 10) {
        return 1;
    }
    int count = num % 100; // count表示的为 10xi-1 + xi
    if (count >= 10 && count <=25) {
        return translateNum(num / 10) + translateNum(num / 100);
    } else {
        return translateNum(num / 10);
    }
}