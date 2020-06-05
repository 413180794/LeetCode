//
// Created by zhangfan on 2020/6/5.
//
#include <stdio.h>
#include "one_question_per_day/spiralOrder.c"

int main(void) {
    int **array;
    int row = 3;
    int col = 4;
    array = (int **)malloc(row * sizeof(int *));
    for (int i = 0; i < row; i++) {
        array[i] = (int *)malloc(col * sizeof(int));
    }
    memset(*array, 0, sizeof(int)*row*col);
    array[0][0] = 1;
    array[0][1] = 2;
    array[0][2] = 3;
    array[0][3] = 4;
    array[1][0] = 5;
    array[1][1] = 6;
    array[1][2] = 7;
    array[1][3] = 8;
    array[2][0] = 9;
    array[2][1] = 10;
    array[2][2] = 11;
    array[2][3] = 12;
    int matrixColSize = {4};
    int returnSize = {12};
    int *result = spiralOrder(array, 3, &matrixColSize, &returnSize);
    for (int i = 0; i < 12; ++i) {
        printf("%d\n",result[i]);
    }
}