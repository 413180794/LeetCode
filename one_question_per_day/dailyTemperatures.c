//
// Created by Administrator on 2020/6/11.
//

#include "stdlib.h"
#include "string.h"
int* dailyTemperature(int* T, int TSize, int* returnSize) {
    int* result = (int*)malloc(sizeof(int) * TSize);
    memset(result, 0,sizeof(int) * TSize);// 初始化数组

    int* stack = (int*)malloc(sizeof(int) * TSize);
    memset(stack, 0, sizeof(int) * TSize); // 初始化栈
    int top = -1;//栈顶

    for (int i = 0; i < TSize; ++i) {
        while (top != -1 && T[i] > T[stack[top]]) {
            result[stack[top]] = i - stack[top];
            top -- ;
        }
        stack[++top] = i;
    }
    *returnSize = TSize;
    return result;
}
