//
// Created by zhangfan on 2020/6/5.
// 写的很垃圾
//

#include <stdio.h>
#include "spiralOrder.h"

int* spiralOrder(int** matrix, int matrixSize, int* matrixColSize, int* returnSize) {
    // matrixSize 行数
    // matrixColSize 列数
    // returnSize = matrixSize * matrixColSize
    if (matrix == NULL||matrixSize == 0) {
        *returnSize = 0;
        return NULL;
    }
    *returnSize = matrixSize * matrixColSize[0];
    int row = matrixSize; // 行数
    int col = matrixColSize[0]; // 列数
    int i_row = 0;
    int j_col = 0;
    int *resultArray = (int *)malloc(sizeof(int) * (*returnSize));
    int c = 0;
    while(c < *returnSize) {
        for (int i = 0; i < col && c < *returnSize;i ++) {
            resultArray[c++] = matrix[i_row][j_col++];

//            resultArray[0]= 10;
        }
        i_row ++;
        row --;
        j_col --;

        for (int i = 0; i < row&& c < *returnSize;i++) {
            resultArray[c++] = matrix[i_row++][j_col];
        }
        j_col--;
        col--;
        i_row--;

        for (int i = 0;i < col&& c < *returnSize;i++) {
            resultArray[c++] = matrix[i_row][j_col--];
        }
        i_row -- ;
        row --;
        j_col++;

        for (int i = 0; i < row&& c < *returnSize; ++i) {
            resultArray[c++] = matrix[i_row--][j_col];
        }
        j_col++;
        col--;
        i_row++;

    }
    return resultArray;
}

